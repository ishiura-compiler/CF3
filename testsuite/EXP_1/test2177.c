
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

int32_t x1 = INT32_MIN;
int8_t x3 = -1;
static volatile uint8_t x4 = 12U;
int32_t x8 = -1;
static int32_t x9 = INT32_MIN;
static int8_t x11 = INT8_MIN;
int32_t x21 = INT32_MIN;
uint64_t x23 = 52026482LLU;
volatile int64_t x27 = INT64_MIN;
uint8_t x29 = UINT8_MAX;
uint32_t x34 = UINT32_MAX;
int64_t x36 = INT64_MAX;
int32_t x37 = INT32_MAX;
volatile int32_t x42 = -5127641;
int32_t x46 = 678575998;
volatile int32_t t10 = 5050;
static uint16_t x49 = 0U;
int16_t x50 = INT16_MIN;
volatile int32_t t11 = 13;
int16_t x56 = 8;
uint64_t x58 = 628862099756176974LLU;
volatile int32_t t15 = 540901387;
static int8_t x77 = 4;
int8_t x80 = -3;
volatile int32_t t17 = 1;
uint8_t x86 = 21U;
int8_t x88 = -8;
volatile int32_t t18 = 1;
uint16_t x91 = 247U;
int8_t x92 = -1;
static int64_t x103 = 1LL;
static int32_t t23 = -23294;
int16_t x111 = -6781;
static uint32_t x115 = UINT32_MAX;
volatile uint32_t x133 = UINT32_MAX;
uint64_t x136 = 6552540849625LLU;
int16_t x138 = INT16_MAX;
static uint16_t x140 = UINT16_MAX;
volatile int32_t t31 = -24980;
static uint16_t x142 = UINT16_MAX;
int8_t x143 = INT8_MIN;
volatile int64_t x144 = -1LL;
static int16_t x153 = INT16_MIN;
uint32_t x154 = 220259U;
uint8_t x157 = 76U;
static uint64_t x158 = 4363LLU;
volatile int32_t t36 = -95518;
volatile uint64_t x161 = 144792895914728LLU;
volatile uint16_t x164 = 263U;
static int32_t x166 = INT32_MIN;
int32_t x169 = INT32_MAX;
int16_t x194 = INT16_MAX;
int16_t x208 = INT16_MIN;
static int8_t x209 = -1;
uint32_t x210 = UINT32_MAX;
int16_t x211 = -6;
static int8_t x217 = -1;
int16_t x218 = 2003;
static uint32_t x225 = 21273U;
int16_t x228 = INT16_MAX;
int64_t x230 = 426670LL;
volatile int8_t x234 = INT8_MIN;
int64_t x236 = INT64_MAX;
int32_t t52 = 12;
volatile uint64_t x237 = UINT64_MAX;
static int64_t x245 = INT64_MAX;
uint8_t x248 = UINT8_MAX;
uint8_t x252 = 40U;
volatile int32_t t56 = -218474170;
uint64_t x257 = 59LLU;
static uint16_t x259 = 3U;
static int32_t x260 = 4105456;
volatile int16_t x268 = -34;
uint32_t x272 = 2052680U;
int64_t x275 = -446LL;
uint16_t x276 = 6U;
uint16_t x278 = 6227U;
uint16_t x287 = UINT16_MAX;
uint32_t x294 = UINT32_MAX;
volatile int32_t x295 = -1150407;
static int32_t t66 = -7770;
int32_t x315 = INT32_MAX;
int32_t t70 = 1510993;
volatile int16_t x329 = -1;
int16_t x342 = INT16_MIN;
uint32_t x350 = UINT32_MAX;
uint64_t x353 = 603607587474149497LLU;
uint32_t x354 = 6088U;
static int16_t x371 = INT16_MIN;
volatile int64_t x380 = -1LL;
int8_t x405 = 54;
int16_t x408 = INT16_MIN;
volatile int16_t x409 = 793;
int16_t x413 = INT16_MAX;
volatile int32_t t90 = -2034;
int16_t x417 = 1;
volatile int8_t x423 = INT8_MIN;
volatile int32_t x424 = INT32_MIN;
volatile int8_t x429 = INT8_MIN;
volatile int16_t x430 = -1842;
int16_t x432 = 7710;
static uint16_t x437 = 1192U;
int32_t t94 = -815;
static uint8_t x443 = 38U;
uint64_t x447 = UINT64_MAX;
int16_t x452 = INT16_MIN;
int64_t x454 = -49375813760869LL;
uint8_t x455 = 14U;
int32_t x457 = INT32_MIN;
static volatile int64_t x463 = -9774024915534439LL;
int32_t t100 = -65071396;
volatile int32_t t101 = -37;
int16_t x472 = INT16_MIN;
volatile int32_t t102 = 9;
int8_t x475 = -1;
volatile int64_t x476 = -92469LL;
int32_t t103 = 196594;
int8_t x477 = -1;
static int32_t x484 = -1;
int8_t x485 = -1;
int64_t x489 = 2426LL;
int16_t x496 = -1;
uint8_t x505 = 63U;
int32_t t110 = -35;
int32_t x511 = -1;
int32_t t112 = 1048735695;
uint32_t x517 = 2U;
uint16_t x523 = UINT16_MAX;
int32_t x527 = -1;
int32_t x528 = -1;
int32_t t117 = 4048;
uint8_t x540 = 2U;
uint32_t x547 = UINT32_MAX;
volatile int32_t x549 = -27274;
volatile int32_t x551 = -10;
int32_t t122 = -63828322;
int16_t x569 = INT16_MIN;
static volatile int32_t t125 = -572765584;
volatile int64_t x577 = -1LL;
int8_t x580 = 4;
static volatile uint16_t x584 = 494U;
int32_t t130 = 54465932;
static volatile int16_t x607 = -9744;
volatile int32_t t133 = 1926602;
uint32_t x610 = 6U;
volatile int32_t t134 = -522228944;
int32_t t135 = -3610695;
volatile int8_t x621 = 21;
static int32_t x622 = -1;
int32_t x628 = INT32_MIN;
volatile int16_t x632 = 1;
static int16_t x637 = -1;
static int16_t x638 = -1;
static int64_t x642 = -1LL;
int32_t x645 = -544;
int8_t x657 = INT8_MIN;
int64_t x658 = 1LL;
volatile uint64_t x660 = UINT64_MAX;
volatile int32_t t145 = -330917;
int16_t x661 = -1;
uint16_t x662 = UINT16_MAX;
volatile int16_t x665 = -1;
int8_t x666 = -1;
int64_t x670 = INT64_MAX;
volatile int32_t t148 = 8210;
uint64_t x673 = UINT64_MAX;
int32_t t149 = 1;
volatile int16_t x681 = 1;
int32_t t151 = -258;
static volatile int8_t x690 = -4;
int8_t x692 = -13;
static int32_t x695 = -1;
volatile int32_t t154 = 9;
uint64_t x697 = UINT64_MAX;
int64_t x698 = INT64_MAX;
int16_t x709 = INT16_MIN;
volatile int8_t x714 = -5;
int32_t x720 = -87841454;
int32_t x728 = INT32_MIN;
static int8_t x734 = -1;
uint16_t x735 = 6U;
int64_t x736 = -1LL;
volatile int32_t t167 = 568;
volatile uint8_t x749 = UINT8_MAX;
int32_t x751 = INT32_MAX;
int32_t t168 = 1551074;
int8_t x759 = -6;
uint16_t x768 = UINT16_MAX;
static volatile uint32_t x771 = 30502U;
uint8_t x774 = 103U;
int64_t x778 = INT64_MIN;
int64_t x784 = -1LL;
int64_t x786 = INT64_MAX;
uint64_t x787 = 340LLU;
int16_t x793 = 46;
uint32_t x803 = UINT32_MAX;
int64_t x807 = INT64_MIN;
static int16_t x812 = INT16_MAX;
int16_t x818 = -1;
uint64_t x821 = 4041522667643039683LLU;
int32_t t186 = 52570899;
int64_t x830 = -1LL;
int8_t x836 = INT8_MAX;
uint64_t x837 = 7340178809216LLU;
volatile int32_t t189 = 394234149;
int64_t x842 = INT64_MIN;
int64_t x844 = INT64_MIN;
int64_t x847 = INT64_MIN;
int16_t x848 = -1;
uint64_t x854 = 6LLU;
volatile int32_t x855 = -1;
volatile int32_t t193 = 116;
volatile int64_t x860 = INT64_MIN;
static volatile uint8_t x871 = 63U;
volatile int32_t x876 = -234114301;
static volatile int32_t t197 = 91480300;
int64_t x887 = 1715571008036559LL;
uint16_t x888 = 2705U;


void f0(void) {
    	int32_t x2 = -1;
	int32_t t0 = 15763;

    t0 = (((x1&x2)-x3)!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -11;
	int16_t x6 = INT16_MIN;
	int8_t x7 = INT8_MIN;
	volatile int32_t t1 = -9963;

    t1 = (((x5&x6)-x7)!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x10 = UINT16_MAX;
	int16_t x12 = -71;
	static volatile int32_t t2 = -118101060;

    t2 = (((x9&x10)-x11)!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 71183LLU;
	uint32_t x14 = 3621U;
	volatile uint64_t x15 = UINT64_MAX;
	static uint8_t x16 = UINT8_MAX;
	static volatile int32_t t3 = 83375350;

    t3 = (((x13&x14)-x15)!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x22 = 496015313;
	uint32_t x24 = 1U;
	volatile int32_t t4 = 498711;

    t4 = (((x21&x22)-x23)!=x24);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = -59;
	int32_t x26 = -1;
	int32_t x28 = INT32_MAX;
	int32_t t5 = 32;

    t5 = (((x25&x26)-x27)!=x28);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x30 = INT64_MIN;
	int8_t x31 = -1;
	volatile uint64_t x32 = 411401LLU;
	volatile int32_t t6 = 445847835;

    t6 = (((x29&x30)-x31)!=x32);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int16_t x33 = -1;
	volatile int16_t x35 = -1;
	int32_t t7 = 99;

    t7 = (((x33&x34)-x35)!=x36);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x38 = INT32_MAX;
	static uint8_t x39 = 38U;
	static int8_t x40 = -2;
	volatile int32_t t8 = -3;

    t8 = (((x37&x38)-x39)!=x40);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x41 = 27108454745715LL;
	uint64_t x43 = UINT64_MAX;
	int64_t x44 = -990498762017678LL;
	int32_t t9 = 99;

    t9 = (((x41&x42)-x43)!=x44);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x45 = 11U;
	volatile uint64_t x47 = 55168526240075044LLU;
	int32_t x48 = -1;

    t10 = (((x45&x46)-x47)!=x48);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x51 = UINT16_MAX;
	uint16_t x52 = UINT16_MAX;

    t11 = (((x49&x50)-x51)!=x52);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x53 = INT8_MAX;
	int32_t x54 = -2369733;
	volatile int64_t x55 = INT64_MAX;
	volatile int32_t t12 = 3;

    t12 = (((x53&x54)-x55)!=x56);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x57 = 5U;
	int16_t x59 = -1;
	int32_t x60 = -1;
	volatile int32_t t13 = 30;

    t13 = (((x57&x58)-x59)!=x60);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x61 = UINT8_MAX;
	int16_t x62 = 0;
	static int16_t x63 = 9;
	static int64_t x64 = INT64_MAX;
	volatile int32_t t14 = -861;

    t14 = (((x61&x62)-x63)!=x64);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x69 = UINT16_MAX;
	uint64_t x70 = UINT64_MAX;
	uint64_t x71 = 241362404211718LLU;
	volatile int64_t x72 = -1LL;

    t15 = (((x69&x70)-x71)!=x72);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x78 = -29007116;
	int64_t x79 = 66398205LL;
	static volatile int32_t t16 = 1055053;

    t16 = (((x77&x78)-x79)!=x80);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x81 = INT32_MAX;
	int16_t x82 = -13;
	int64_t x83 = -2156055LL;
	static uint8_t x84 = UINT8_MAX;

    t17 = (((x81&x82)-x83)!=x84);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x85 = 789244838324452LLU;
	volatile int8_t x87 = -1;

    t18 = (((x85&x86)-x87)!=x88);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x89 = 7U;
	volatile int16_t x90 = INT16_MIN;
	volatile int32_t t19 = -1;

    t19 = (((x89&x90)-x91)!=x92);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x93 = INT64_MAX;
	int8_t x94 = INT8_MAX;
	int32_t x95 = -243999573;
	int64_t x96 = -10LL;
	volatile int32_t t20 = 11053889;

    t20 = (((x93&x94)-x95)!=x96);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x97 = INT8_MIN;
	uint8_t x98 = 4U;
	uint32_t x99 = UINT32_MAX;
	static int32_t x100 = INT32_MIN;
	int32_t t21 = -1757527;

    t21 = (((x97&x98)-x99)!=x100);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x101 = UINT32_MAX;
	volatile uint16_t x102 = 276U;
	int64_t x104 = INT64_MIN;
	volatile int32_t t22 = -267111278;

    t22 = (((x101&x102)-x103)!=x104);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x105 = -62;
	uint16_t x106 = 7811U;
	volatile int16_t x107 = -10789;
	int16_t x108 = -1;

    t23 = (((x105&x106)-x107)!=x108);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x109 = 759284108U;
	uint64_t x110 = 148394LLU;
	int8_t x112 = -1;
	volatile int32_t t24 = 3408;

    t24 = (((x109&x110)-x111)!=x112);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x113 = INT16_MIN;
	int32_t x114 = INT32_MIN;
	uint64_t x116 = 292979291LLU;
	volatile int32_t t25 = 379663;

    t25 = (((x113&x114)-x115)!=x116);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x117 = -1LL;
	int8_t x118 = -1;
	static volatile int64_t x119 = 63693400875118LL;
	int64_t x120 = -1LL;
	static volatile int32_t t26 = -2;

    t26 = (((x117&x118)-x119)!=x120);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x121 = INT32_MIN;
	int32_t x122 = INT32_MAX;
	static int8_t x123 = INT8_MAX;
	uint64_t x124 = 766LLU;
	volatile int32_t t27 = 298;

    t27 = (((x121&x122)-x123)!=x124);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x125 = UINT32_MAX;
	volatile int8_t x126 = INT8_MIN;
	int32_t x127 = -1;
	int8_t x128 = INT8_MIN;
	volatile int32_t t28 = 19948086;

    t28 = (((x125&x126)-x127)!=x128);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x129 = -3744;
	uint64_t x130 = 144LLU;
	static uint32_t x131 = 50128733U;
	uint16_t x132 = UINT16_MAX;
	int32_t t29 = -2;

    t29 = (((x129&x130)-x131)!=x132);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x134 = INT32_MAX;
	int64_t x135 = INT64_MAX;
	volatile int32_t t30 = 49;

    t30 = (((x133&x134)-x135)!=x136);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x137 = -1146742335792307147LL;
	int32_t x139 = -13088856;

    t31 = (((x137&x138)-x139)!=x140);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x141 = -1;
	int32_t t32 = -79;

    t32 = (((x141&x142)-x143)!=x144);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x145 = 0U;
	int32_t x146 = INT32_MIN;
	int64_t x147 = INT64_MAX;
	uint32_t x148 = 2611U;
	int32_t t33 = 0;

    t33 = (((x145&x146)-x147)!=x148);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x149 = -114;
	volatile uint64_t x150 = 27033LLU;
	int8_t x151 = INT8_MIN;
	volatile uint16_t x152 = UINT16_MAX;
	static volatile int32_t t34 = 2;

    t34 = (((x149&x150)-x151)!=x152);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int64_t x155 = -1LL;
	int32_t x156 = -1;
	volatile int32_t t35 = 1162719;

    t35 = (((x153&x154)-x155)!=x156);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x159 = 15U;
	int32_t x160 = INT32_MAX;

    t36 = (((x157&x158)-x159)!=x160);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x162 = -10524911960033997LL;
	static uint32_t x163 = 5315U;
	volatile int32_t t37 = 646;

    t37 = (((x161&x162)-x163)!=x164);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x165 = -1LL;
	int8_t x167 = -1;
	int32_t x168 = INT32_MIN;
	volatile int32_t t38 = -16171;

    t38 = (((x165&x166)-x167)!=x168);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x170 = UINT32_MAX;
	uint8_t x171 = 57U;
	int16_t x172 = 9;
	int32_t t39 = 0;

    t39 = (((x169&x170)-x171)!=x172);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x173 = -1806;
	static uint32_t x174 = 96070U;
	uint16_t x175 = 750U;
	int32_t x176 = INT32_MIN;
	int32_t t40 = 1857245;

    t40 = (((x173&x174)-x175)!=x176);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x185 = INT8_MAX;
	volatile int8_t x186 = -1;
	uint64_t x187 = UINT64_MAX;
	int32_t x188 = INT32_MIN;
	int32_t t41 = -758505896;

    t41 = (((x185&x186)-x187)!=x188);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x189 = INT64_MIN;
	uint32_t x190 = 1541346365U;
	uint16_t x191 = UINT16_MAX;
	int64_t x192 = INT64_MIN;
	static volatile int32_t t42 = -479837255;

    t42 = (((x189&x190)-x191)!=x192);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x193 = 93455911279414LLU;
	int8_t x195 = -1;
	uint16_t x196 = 2U;
	volatile int32_t t43 = 39;

    t43 = (((x193&x194)-x195)!=x196);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x201 = -5519965LL;
	static int64_t x202 = INT64_MIN;
	int8_t x203 = INT8_MIN;
	volatile uint16_t x204 = 20U;
	volatile int32_t t44 = -1;

    t44 = (((x201&x202)-x203)!=x204);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x205 = INT32_MIN;
	uint16_t x206 = 2U;
	int32_t x207 = -1368344;
	int32_t t45 = 1375;

    t45 = (((x205&x206)-x207)!=x208);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x212 = -1;
	volatile int32_t t46 = -98721;

    t46 = (((x209&x210)-x211)!=x212);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x213 = -34;
	uint32_t x214 = UINT32_MAX;
	int16_t x215 = 303;
	static volatile int32_t x216 = 6184;
	int32_t t47 = 4191;

    t47 = (((x213&x214)-x215)!=x216);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x219 = 88U;
	int16_t x220 = INT16_MIN;
	int32_t t48 = -54;

    t48 = (((x217&x218)-x219)!=x220);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x221 = INT32_MIN;
	static int16_t x222 = INT16_MAX;
	volatile int16_t x223 = 119;
	static int8_t x224 = -1;
	int32_t t49 = 640477951;

    t49 = (((x221&x222)-x223)!=x224);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x226 = -1;
	static int16_t x227 = -1;
	volatile int32_t t50 = -127321;

    t50 = (((x225&x226)-x227)!=x228);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x229 = INT64_MIN;
	int8_t x231 = 1;
	uint8_t x232 = UINT8_MAX;
	volatile int32_t t51 = 1;

    t51 = (((x229&x230)-x231)!=x232);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x233 = INT8_MIN;
	volatile int16_t x235 = -3;

    t52 = (((x233&x234)-x235)!=x236);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x238 = 2610U;
	volatile uint64_t x239 = 6393267411855329LLU;
	static uint32_t x240 = 12012U;
	static volatile int32_t t53 = 465;

    t53 = (((x237&x238)-x239)!=x240);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x246 = INT64_MIN;
	int32_t x247 = INT32_MAX;
	volatile int32_t t54 = -129877446;

    t54 = (((x245&x246)-x247)!=x248);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x249 = 1U;
	uint32_t x250 = 236U;
	static volatile int32_t x251 = 74059;
	int32_t t55 = 29223;

    t55 = (((x249&x250)-x251)!=x252);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x253 = 149758803038032LLU;
	uint8_t x254 = 3U;
	volatile int8_t x255 = INT8_MIN;
	uint16_t x256 = 69U;

    t56 = (((x253&x254)-x255)!=x256);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x258 = INT64_MAX;
	static int32_t t57 = 3545;

    t57 = (((x257&x258)-x259)!=x260);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x261 = INT8_MIN;
	static int8_t x262 = -1;
	int8_t x263 = 0;
	static volatile int64_t x264 = -1LL;
	int32_t t58 = -21;

    t58 = (((x261&x262)-x263)!=x264);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x265 = 127U;
	volatile int32_t x266 = -1;
	uint16_t x267 = 9U;
	volatile int32_t t59 = -5;

    t59 = (((x265&x266)-x267)!=x268);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x269 = -1;
	int16_t x270 = 6;
	int64_t x271 = INT64_MAX;
	static volatile int32_t t60 = -15426;

    t60 = (((x269&x270)-x271)!=x272);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int32_t x273 = -1;
	int64_t x274 = INT64_MIN;
	volatile int32_t t61 = 604034;

    t61 = (((x273&x274)-x275)!=x276);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x277 = INT32_MAX;
	int16_t x279 = INT16_MIN;
	int16_t x280 = INT16_MIN;
	static int32_t t62 = 117;

    t62 = (((x277&x278)-x279)!=x280);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x285 = INT8_MAX;
	static int16_t x286 = INT16_MIN;
	int32_t x288 = INT32_MAX;
	int32_t t63 = -146;

    t63 = (((x285&x286)-x287)!=x288);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x289 = INT64_MIN;
	int8_t x290 = 1;
	volatile int8_t x291 = 13;
	uint32_t x292 = 13U;
	static volatile int32_t t64 = -2316;

    t64 = (((x289&x290)-x291)!=x292);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint32_t x293 = 7U;
	static volatile int8_t x296 = INT8_MIN;
	volatile int32_t t65 = 1;

    t65 = (((x293&x294)-x295)!=x296);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x297 = UINT64_MAX;
	int64_t x298 = -1LL;
	static uint32_t x299 = UINT32_MAX;
	int16_t x300 = 13970;

    t66 = (((x297&x298)-x299)!=x300);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x305 = -1LL;
	uint64_t x306 = 7LLU;
	int64_t x307 = INT64_MIN;
	int64_t x308 = INT64_MAX;
	static volatile int32_t t67 = 1096295;

    t67 = (((x305&x306)-x307)!=x308);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x309 = 629587U;
	int16_t x310 = -1;
	uint32_t x311 = 391U;
	int32_t x312 = INT32_MIN;
	int32_t t68 = -87763997;

    t68 = (((x309&x310)-x311)!=x312);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x313 = INT8_MIN;
	volatile uint16_t x314 = 7U;
	int64_t x316 = INT64_MAX;
	int32_t t69 = -11664;

    t69 = (((x313&x314)-x315)!=x316);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x325 = -1;
	static volatile int8_t x326 = -1;
	int32_t x327 = INT32_MIN;
	int64_t x328 = INT64_MIN;

    t70 = (((x325&x326)-x327)!=x328);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x330 = INT16_MAX;
	int16_t x331 = INT16_MAX;
	int64_t x332 = 362606046460047LL;
	static volatile int32_t t71 = 12;

    t71 = (((x329&x330)-x331)!=x332);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x333 = 240014841LLU;
	int16_t x334 = -1;
	static volatile int32_t x335 = -1;
	int64_t x336 = INT64_MIN;
	int32_t t72 = -1714275;

    t72 = (((x333&x334)-x335)!=x336);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x337 = INT8_MIN;
	volatile int64_t x338 = -1LL;
	static volatile int64_t x339 = -1LL;
	int8_t x340 = -2;
	volatile int32_t t73 = -1342328;

    t73 = (((x337&x338)-x339)!=x340);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x341 = 15369254521026LLU;
	static uint8_t x343 = UINT8_MAX;
	uint16_t x344 = 569U;
	int32_t t74 = 0;

    t74 = (((x341&x342)-x343)!=x344);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x345 = -3;
	int16_t x346 = -1;
	int16_t x347 = INT16_MIN;
	static int16_t x348 = INT16_MIN;
	volatile int32_t t75 = 157211207;

    t75 = (((x345&x346)-x347)!=x348);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x349 = -17717;
	int8_t x351 = -1;
	static volatile uint32_t x352 = 23U;
	volatile int32_t t76 = -5561;

    t76 = (((x349&x350)-x351)!=x352);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x355 = INT32_MAX;
	int16_t x356 = -1;
	int32_t t77 = -5784843;

    t77 = (((x353&x354)-x355)!=x356);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x357 = INT32_MAX;
	int64_t x358 = INT64_MAX;
	static int32_t x359 = -1;
	uint16_t x360 = 2U;
	int32_t t78 = -1;

    t78 = (((x357&x358)-x359)!=x360);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x361 = 0;
	volatile int32_t x362 = INT32_MIN;
	int32_t x363 = 484638913;
	int8_t x364 = INT8_MAX;
	static int32_t t79 = -110099;

    t79 = (((x361&x362)-x363)!=x364);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x365 = 92818U;
	volatile int32_t x366 = INT32_MIN;
	int8_t x367 = 1;
	static int16_t x368 = 0;
	int32_t t80 = -1;

    t80 = (((x365&x366)-x367)!=x368);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x369 = INT16_MAX;
	uint8_t x370 = UINT8_MAX;
	static uint16_t x372 = 2U;
	volatile int32_t t81 = -25338;

    t81 = (((x369&x370)-x371)!=x372);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int16_t x373 = -1;
	int16_t x374 = -1;
	static int32_t x375 = 15953197;
	int64_t x376 = INT64_MIN;
	int32_t t82 = -258996215;

    t82 = (((x373&x374)-x375)!=x376);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x377 = INT32_MIN;
	int32_t x378 = -1;
	int64_t x379 = -197269097348LL;
	int32_t t83 = -348;

    t83 = (((x377&x378)-x379)!=x380);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x381 = 1618692U;
	int32_t x382 = -2;
	int32_t x383 = INT32_MAX;
	int32_t x384 = -1;
	int32_t t84 = 451;

    t84 = (((x381&x382)-x383)!=x384);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x385 = INT32_MIN;
	uint8_t x386 = UINT8_MAX;
	int32_t x387 = 71434261;
	static int32_t x388 = INT32_MIN;
	static volatile int32_t t85 = -816170184;

    t85 = (((x385&x386)-x387)!=x388);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x397 = 894221255U;
	static uint16_t x398 = 1682U;
	uint16_t x399 = UINT16_MAX;
	int64_t x400 = -443013844757248648LL;
	volatile int32_t t86 = 247571;

    t86 = (((x397&x398)-x399)!=x400);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x401 = 4;
	uint16_t x402 = UINT16_MAX;
	int16_t x403 = -21;
	uint16_t x404 = UINT16_MAX;
	int32_t t87 = 44916290;

    t87 = (((x401&x402)-x403)!=x404);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x406 = 26016176U;
	uint8_t x407 = 3U;
	volatile int32_t t88 = 150347047;

    t88 = (((x405&x406)-x407)!=x408);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x410 = INT64_MIN;
	volatile int32_t x411 = 7;
	int8_t x412 = INT8_MAX;
	static volatile int32_t t89 = -18;

    t89 = (((x409&x410)-x411)!=x412);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x414 = INT16_MAX;
	volatile int32_t x415 = -1;
	uint32_t x416 = 1407657556U;

    t90 = (((x413&x414)-x415)!=x416);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x418 = INT32_MAX;
	volatile int64_t x419 = 122241111962891LL;
	volatile int32_t x420 = INT32_MAX;
	volatile int32_t t91 = 1403;

    t91 = (((x417&x418)-x419)!=x420);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x421 = INT64_MIN;
	uint16_t x422 = UINT16_MAX;
	volatile int32_t t92 = 38539;

    t92 = (((x421&x422)-x423)!=x424);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x431 = INT16_MIN;
	int32_t t93 = -1014304624;

    t93 = (((x429&x430)-x431)!=x432);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x438 = INT64_MAX;
	int8_t x439 = -1;
	static uint32_t x440 = 19207153U;

    t94 = (((x437&x438)-x439)!=x440);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x441 = 148U;
	uint8_t x442 = 81U;
	static int32_t x444 = -1;
	int32_t t95 = 5801229;

    t95 = (((x441&x442)-x443)!=x444);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x445 = -1;
	volatile int8_t x446 = INT8_MAX;
	volatile int64_t x448 = INT64_MIN;
	int32_t t96 = -9062227;

    t96 = (((x445&x446)-x447)!=x448);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x449 = INT8_MAX;
	int8_t x450 = -1;
	uint32_t x451 = 757U;
	volatile int32_t t97 = -438025;

    t97 = (((x449&x450)-x451)!=x452);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint32_t x453 = UINT32_MAX;
	uint32_t x456 = UINT32_MAX;
	int32_t t98 = 214913;

    t98 = (((x453&x454)-x455)!=x456);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x458 = INT32_MIN;
	int8_t x459 = -1;
	int8_t x460 = -6;
	int32_t t99 = -3888;

    t99 = (((x457&x458)-x459)!=x460);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x461 = -1;
	volatile uint32_t x462 = UINT32_MAX;
	static int8_t x464 = INT8_MAX;

    t100 = (((x461&x462)-x463)!=x464);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x465 = 2711U;
	int32_t x466 = -2858;
	int64_t x467 = INT64_MAX;
	static uint64_t x468 = 40710121030LLU;

    t101 = (((x465&x466)-x467)!=x468);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x469 = -1;
	uint16_t x470 = 1030U;
	int64_t x471 = -1LL;

    t102 = (((x469&x470)-x471)!=x472);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint32_t x473 = 784920U;
	int16_t x474 = INT16_MAX;

    t103 = (((x473&x474)-x475)!=x476);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x478 = INT32_MAX;
	int8_t x479 = INT8_MAX;
	volatile int8_t x480 = INT8_MIN;
	static int32_t t104 = 29738754;

    t104 = (((x477&x478)-x479)!=x480);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x481 = INT64_MIN;
	int64_t x482 = -1LL;
	int64_t x483 = -29556905LL;
	int32_t t105 = 24370474;

    t105 = (((x481&x482)-x483)!=x484);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x486 = -1;
	int16_t x487 = -1;
	int64_t x488 = -1LL;
	volatile int32_t t106 = -4546;

    t106 = (((x485&x486)-x487)!=x488);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x490 = UINT8_MAX;
	static int64_t x491 = 420LL;
	uint64_t x492 = UINT64_MAX;
	static int32_t t107 = 5466;

    t107 = (((x489&x490)-x491)!=x492);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint8_t x493 = 46U;
	static uint8_t x494 = 71U;
	volatile int8_t x495 = -1;
	volatile int32_t t108 = -96387818;

    t108 = (((x493&x494)-x495)!=x496);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x501 = 2;
	int32_t x502 = INT32_MIN;
	int16_t x503 = INT16_MIN;
	static int64_t x504 = INT64_MIN;
	static volatile int32_t t109 = 1;

    t109 = (((x501&x502)-x503)!=x504);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x506 = 2810;
	uint64_t x507 = 457291694845787LLU;
	int64_t x508 = -51013916LL;

    t110 = (((x505&x506)-x507)!=x508);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x509 = INT16_MIN;
	static int32_t x510 = INT32_MIN;
	volatile int16_t x512 = INT16_MIN;
	int32_t t111 = 9;

    t111 = (((x509&x510)-x511)!=x512);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x513 = 587;
	int32_t x514 = -4738;
	int64_t x515 = -1LL;
	static int8_t x516 = INT8_MIN;

    t112 = (((x513&x514)-x515)!=x516);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x518 = 30205U;
	int16_t x519 = -1;
	int8_t x520 = INT8_MIN;
	int32_t t113 = 288;

    t113 = (((x517&x518)-x519)!=x520);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x521 = UINT32_MAX;
	int8_t x522 = -6;
	static int16_t x524 = -1;
	int32_t t114 = -93472;

    t114 = (((x521&x522)-x523)!=x524);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x525 = INT16_MIN;
	static volatile int32_t x526 = -1;
	volatile int32_t t115 = -314844338;

    t115 = (((x525&x526)-x527)!=x528);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x529 = INT64_MIN;
	uint32_t x530 = 3832U;
	int32_t x531 = -1;
	int32_t x532 = 972;
	static int32_t t116 = -6;

    t116 = (((x529&x530)-x531)!=x532);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x533 = INT8_MIN;
	uint32_t x534 = 211253775U;
	int8_t x535 = 59;
	uint32_t x536 = 3498U;

    t117 = (((x533&x534)-x535)!=x536);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x537 = UINT64_MAX;
	uint32_t x538 = 4U;
	static uint32_t x539 = 54U;
	volatile int32_t t118 = -425615;

    t118 = (((x537&x538)-x539)!=x540);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x545 = INT32_MAX;
	int8_t x546 = INT8_MAX;
	int8_t x548 = INT8_MIN;
	static volatile int32_t t119 = -13;

    t119 = (((x545&x546)-x547)!=x548);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x550 = 15723108;
	int32_t x552 = INT32_MIN;
	volatile int32_t t120 = -1993196;

    t120 = (((x549&x550)-x551)!=x552);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x553 = INT16_MIN;
	int8_t x554 = -20;
	int32_t x555 = INT32_MIN;
	int8_t x556 = INT8_MAX;
	int32_t t121 = -352;

    t121 = (((x553&x554)-x555)!=x556);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x557 = -1LL;
	volatile int64_t x558 = -460998866311211LL;
	int8_t x559 = INT8_MIN;
	int16_t x560 = INT16_MIN;

    t122 = (((x557&x558)-x559)!=x560);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x561 = INT16_MIN;
	int32_t x562 = -1;
	uint32_t x563 = 481U;
	uint64_t x564 = 37399397091LLU;
	static int32_t t123 = -9917887;

    t123 = (((x561&x562)-x563)!=x564);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x565 = UINT8_MAX;
	int8_t x566 = -1;
	static int16_t x567 = -1;
	static int16_t x568 = INT16_MIN;
	int32_t t124 = -17;

    t124 = (((x565&x566)-x567)!=x568);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x570 = -4;
	int64_t x571 = -3813300263892LL;
	int64_t x572 = -1LL;

    t125 = (((x569&x570)-x571)!=x572);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile uint16_t x573 = 271U;
	static uint32_t x574 = 140143U;
	static volatile uint32_t x575 = 3U;
	uint16_t x576 = 1U;
	volatile int32_t t126 = -1566;

    t126 = (((x573&x574)-x575)!=x576);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x578 = 1147;
	static volatile int64_t x579 = INT64_MAX;
	static volatile int32_t t127 = 322346721;

    t127 = (((x577&x578)-x579)!=x580);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x581 = 0U;
	int16_t x582 = -1;
	int8_t x583 = INT8_MIN;
	int32_t t128 = 5132157;

    t128 = (((x581&x582)-x583)!=x584);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x589 = 107555;
	uint32_t x590 = UINT32_MAX;
	static int16_t x591 = -1;
	int8_t x592 = -7;
	int32_t t129 = -10484;

    t129 = (((x589&x590)-x591)!=x592);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x593 = 2U;
	static volatile int16_t x594 = INT16_MIN;
	int16_t x595 = INT16_MAX;
	int8_t x596 = 1;

    t130 = (((x593&x594)-x595)!=x596);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int32_t x597 = INT32_MAX;
	static volatile int16_t x598 = 0;
	uint8_t x599 = UINT8_MAX;
	int8_t x600 = INT8_MIN;
	volatile int32_t t131 = 12902;

    t131 = (((x597&x598)-x599)!=x600);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x601 = INT32_MIN;
	uint16_t x602 = 107U;
	static int8_t x603 = 41;
	int16_t x604 = INT16_MAX;
	volatile int32_t t132 = -6537771;

    t132 = (((x601&x602)-x603)!=x604);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x605 = -1;
	static int32_t x606 = -230710;
	volatile int16_t x608 = 13;

    t133 = (((x605&x606)-x607)!=x608);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x609 = 360266447192045110LLU;
	int16_t x611 = INT16_MAX;
	static int16_t x612 = 11;

    t134 = (((x609&x610)-x611)!=x612);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x613 = INT64_MAX;
	volatile int8_t x614 = -1;
	volatile uint64_t x615 = UINT64_MAX;
	volatile uint32_t x616 = 4301010U;

    t135 = (((x613&x614)-x615)!=x616);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x623 = -1;
	uint32_t x624 = UINT32_MAX;
	int32_t t136 = -47116409;

    t136 = (((x621&x622)-x623)!=x624);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint32_t x625 = 8263249U;
	int64_t x626 = INT64_MIN;
	uint16_t x627 = UINT16_MAX;
	static int32_t t137 = -1;

    t137 = (((x625&x626)-x627)!=x628);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x629 = INT8_MIN;
	volatile int64_t x630 = 1LL;
	uint8_t x631 = UINT8_MAX;
	int32_t t138 = -147289512;

    t138 = (((x629&x630)-x631)!=x632);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x633 = INT8_MAX;
	int8_t x634 = INT8_MIN;
	volatile uint64_t x635 = 44197192343617506LLU;
	int32_t x636 = INT32_MAX;
	int32_t t139 = 38676;

    t139 = (((x633&x634)-x635)!=x636);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x639 = -361;
	static uint16_t x640 = 708U;
	volatile int32_t t140 = -223359541;

    t140 = (((x637&x638)-x639)!=x640);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x641 = 41U;
	uint64_t x643 = UINT64_MAX;
	uint64_t x644 = UINT64_MAX;
	int32_t t141 = 7881462;

    t141 = (((x641&x642)-x643)!=x644);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x646 = 5981;
	static int16_t x647 = INT16_MAX;
	uint32_t x648 = 4023U;
	int32_t t142 = 1;

    t142 = (((x645&x646)-x647)!=x648);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x649 = 820285232004790899LLU;
	int32_t x650 = INT32_MAX;
	int32_t x651 = INT32_MIN;
	uint16_t x652 = 60U;
	static volatile int32_t t143 = 99;

    t143 = (((x649&x650)-x651)!=x652);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x653 = INT32_MAX;
	int32_t x654 = INT32_MIN;
	volatile int8_t x655 = INT8_MAX;
	uint32_t x656 = UINT32_MAX;
	int32_t t144 = 1090178;

    t144 = (((x653&x654)-x655)!=x656);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x659 = 6U;

    t145 = (((x657&x658)-x659)!=x660);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x663 = INT8_MIN;
	int16_t x664 = -2;
	volatile int32_t t146 = -397562352;

    t146 = (((x661&x662)-x663)!=x664);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x667 = INT8_MAX;
	static int8_t x668 = 0;
	int32_t t147 = 82;

    t147 = (((x665&x666)-x667)!=x668);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint64_t x669 = UINT64_MAX;
	volatile int16_t x671 = INT16_MIN;
	uint32_t x672 = 35U;

    t148 = (((x669&x670)-x671)!=x672);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x674 = INT16_MIN;
	int32_t x675 = 683;
	int8_t x676 = -61;

    t149 = (((x673&x674)-x675)!=x676);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x677 = -1;
	static uint32_t x678 = 1U;
	volatile uint64_t x679 = 6024951121486LLU;
	uint8_t x680 = 44U;
	volatile int32_t t150 = 36;

    t150 = (((x677&x678)-x679)!=x680);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x682 = -334;
	uint16_t x683 = 14U;
	uint16_t x684 = 1241U;

    t151 = (((x681&x682)-x683)!=x684);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x685 = -1;
	uint64_t x686 = UINT64_MAX;
	uint32_t x687 = 145352051U;
	int16_t x688 = -1;
	static volatile int32_t t152 = -119531;

    t152 = (((x685&x686)-x687)!=x688);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x689 = 0U;
	static uint16_t x691 = 207U;
	volatile int32_t t153 = -108949;

    t153 = (((x689&x690)-x691)!=x692);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x693 = 99022284661853451LLU;
	int8_t x694 = INT8_MIN;
	int16_t x696 = -5;

    t154 = (((x693&x694)-x695)!=x696);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x699 = -1;
	static int32_t x700 = -1;
	static int32_t t155 = -457;

    t155 = (((x697&x698)-x699)!=x700);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x701 = 128306722;
	int64_t x702 = -7119826288LL;
	int8_t x703 = INT8_MAX;
	int16_t x704 = INT16_MAX;
	volatile int32_t t156 = -1;

    t156 = (((x701&x702)-x703)!=x704);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x705 = INT8_MIN;
	int16_t x706 = -1;
	int64_t x707 = -1384LL;
	int16_t x708 = -2;
	static volatile int32_t t157 = 0;

    t157 = (((x705&x706)-x707)!=x708);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x710 = INT16_MAX;
	int8_t x711 = 0;
	int32_t x712 = INT32_MIN;
	static int32_t t158 = -57509;

    t158 = (((x709&x710)-x711)!=x712);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint64_t x713 = 369262320LLU;
	uint64_t x715 = 210826139LLU;
	uint64_t x716 = 141LLU;
	volatile int32_t t159 = 2459944;

    t159 = (((x713&x714)-x715)!=x716);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x717 = 52U;
	int16_t x718 = -47;
	uint64_t x719 = 171744782041755LLU;
	volatile int32_t t160 = 408048;

    t160 = (((x717&x718)-x719)!=x720);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint32_t x721 = UINT32_MAX;
	static uint64_t x722 = UINT64_MAX;
	volatile int64_t x723 = -1LL;
	static uint32_t x724 = 23655U;
	int32_t t161 = -26870;

    t161 = (((x721&x722)-x723)!=x724);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x725 = 4LLU;
	static int64_t x726 = INT64_MIN;
	int32_t x727 = INT32_MIN;
	volatile int32_t t162 = -11;

    t162 = (((x725&x726)-x727)!=x728);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x729 = 9U;
	int32_t x730 = -4464911;
	volatile int16_t x731 = 8956;
	uint32_t x732 = 670639U;
	int32_t t163 = -62242;

    t163 = (((x729&x730)-x731)!=x732);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x733 = -1;
	int32_t t164 = 472445348;

    t164 = (((x733&x734)-x735)!=x736);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x737 = -1LL;
	int16_t x738 = INT16_MIN;
	uint32_t x739 = UINT32_MAX;
	int8_t x740 = INT8_MIN;
	int32_t t165 = -490300318;

    t165 = (((x737&x738)-x739)!=x740);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x741 = -1;
	int16_t x742 = INT16_MAX;
	int32_t x743 = INT32_MAX;
	int32_t x744 = 124738;
	volatile int32_t t166 = -982;

    t166 = (((x741&x742)-x743)!=x744);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x745 = 687266LL;
	static uint16_t x746 = 202U;
	int16_t x747 = INT16_MIN;
	uint8_t x748 = 5U;

    t167 = (((x745&x746)-x747)!=x748);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x750 = 109U;
	static volatile uint16_t x752 = UINT16_MAX;

    t168 = (((x749&x750)-x751)!=x752);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x753 = 2503U;
	int32_t x754 = INT32_MIN;
	int8_t x755 = INT8_MIN;
	volatile int64_t x756 = -277511888607620139LL;
	int32_t t169 = 51559;

    t169 = (((x753&x754)-x755)!=x756);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x757 = INT64_MIN;
	static int32_t x758 = -9;
	int32_t x760 = -1;
	static volatile int32_t t170 = 26331;

    t170 = (((x757&x758)-x759)!=x760);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x761 = INT32_MAX;
	int8_t x762 = INT8_MAX;
	uint8_t x763 = 5U;
	int64_t x764 = -614558LL;
	static int32_t t171 = -1620;

    t171 = (((x761&x762)-x763)!=x764);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x765 = -1;
	int16_t x766 = 52;
	int8_t x767 = -1;
	static volatile int32_t t172 = 0;

    t172 = (((x765&x766)-x767)!=x768);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x769 = -1;
	int8_t x770 = -1;
	int32_t x772 = 4066116;
	int32_t t173 = 1518063;

    t173 = (((x769&x770)-x771)!=x772);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x773 = INT8_MIN;
	int32_t x775 = INT32_MAX;
	static volatile int32_t x776 = -1;
	int32_t t174 = 1;

    t174 = (((x773&x774)-x775)!=x776);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x777 = 986U;
	uint16_t x779 = 6066U;
	uint8_t x780 = 0U;
	int32_t t175 = 1690;

    t175 = (((x777&x778)-x779)!=x780);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x781 = 439963842827LL;
	static int16_t x782 = INT16_MAX;
	volatile int16_t x783 = -1;
	volatile int32_t t176 = 16141692;

    t176 = (((x781&x782)-x783)!=x784);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x785 = 5U;
	int32_t x788 = INT32_MIN;
	static int32_t t177 = -3817432;

    t177 = (((x785&x786)-x787)!=x788);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x789 = 4909U;
	static uint8_t x790 = 0U;
	int16_t x791 = 747;
	static uint64_t x792 = 94695526519489LLU;
	static int32_t t178 = -228014606;

    t178 = (((x789&x790)-x791)!=x792);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x794 = 418LLU;
	static volatile int8_t x795 = -1;
	static uint64_t x796 = UINT64_MAX;
	volatile int32_t t179 = -127199;

    t179 = (((x793&x794)-x795)!=x796);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x801 = 1239;
	int8_t x802 = -1;
	int64_t x804 = INT64_MIN;
	static volatile int32_t t180 = -7;

    t180 = (((x801&x802)-x803)!=x804);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x805 = 1LLU;
	static uint32_t x806 = 380420171U;
	static uint32_t x808 = 1084U;
	int32_t t181 = -1;

    t181 = (((x805&x806)-x807)!=x808);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x809 = INT8_MAX;
	int64_t x810 = INT64_MIN;
	static volatile int16_t x811 = INT16_MAX;
	int32_t t182 = -193611;

    t182 = (((x809&x810)-x811)!=x812);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x813 = 0;
	int8_t x814 = INT8_MAX;
	int8_t x815 = INT8_MAX;
	int16_t x816 = INT16_MIN;
	int32_t t183 = 38113575;

    t183 = (((x813&x814)-x815)!=x816);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x817 = 741;
	static int32_t x819 = -511586135;
	uint32_t x820 = 97U;
	int32_t t184 = -1682954;

    t184 = (((x817&x818)-x819)!=x820);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int16_t x822 = 8533;
	int16_t x823 = -1;
	int32_t x824 = INT32_MAX;
	int32_t t185 = -44;

    t185 = (((x821&x822)-x823)!=x824);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x825 = 26507674U;
	volatile int8_t x826 = 0;
	volatile int8_t x827 = -1;
	volatile int64_t x828 = INT64_MAX;

    t186 = (((x825&x826)-x827)!=x828);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x829 = 1;
	int16_t x831 = INT16_MIN;
	int64_t x832 = INT64_MIN;
	int32_t t187 = 0;

    t187 = (((x829&x830)-x831)!=x832);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x833 = -7;
	uint64_t x834 = UINT64_MAX;
	int64_t x835 = -598514191165LL;
	volatile int32_t t188 = -51876;

    t188 = (((x833&x834)-x835)!=x836);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x838 = INT16_MAX;
	static int32_t x839 = 1277;
	volatile uint8_t x840 = 5U;

    t189 = (((x837&x838)-x839)!=x840);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x841 = INT32_MAX;
	volatile uint64_t x843 = UINT64_MAX;
	static int32_t t190 = 871;

    t190 = (((x841&x842)-x843)!=x844);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x845 = 374746870LLU;
	int32_t x846 = -6271;
	int32_t t191 = -267392816;

    t191 = (((x845&x846)-x847)!=x848);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x849 = 1923;
	uint64_t x850 = 290206841095LLU;
	static int32_t x851 = INT32_MAX;
	int8_t x852 = INT8_MAX;
	static int32_t t192 = 716;

    t192 = (((x849&x850)-x851)!=x852);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x853 = -27;
	uint8_t x856 = 59U;

    t193 = (((x853&x854)-x855)!=x856);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x857 = 1;
	int16_t x858 = -61;
	int16_t x859 = 10;
	int32_t t194 = -130604;

    t194 = (((x857&x858)-x859)!=x860);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int64_t x869 = 35701LL;
	int16_t x870 = INT16_MIN;
	uint32_t x872 = 850U;
	int32_t t195 = 28235801;

    t195 = (((x869&x870)-x871)!=x872);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x873 = -1LL;
	int32_t x874 = INT32_MIN;
	uint64_t x875 = 28LLU;
	int32_t t196 = 853;

    t196 = (((x873&x874)-x875)!=x876);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x877 = 0;
	int16_t x878 = INT16_MIN;
	int16_t x879 = INT16_MIN;
	int32_t x880 = INT32_MIN;

    t197 = (((x877&x878)-x879)!=x880);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x881 = 0U;
	static volatile int8_t x882 = INT8_MIN;
	int16_t x883 = INT16_MIN;
	int8_t x884 = INT8_MIN;
	int32_t t198 = 1848;

    t198 = (((x881&x882)-x883)!=x884);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x885 = -1LL;
	uint8_t x886 = 0U;
	volatile int32_t t199 = -5381;

    t199 = (((x885&x886)-x887)!=x888);

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

