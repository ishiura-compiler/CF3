
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

int16_t x2 = -1;
volatile int8_t x3 = -1;
int16_t x4 = -1;
int64_t x11 = INT64_MIN;
volatile uint8_t x12 = UINT8_MAX;
uint8_t x16 = 81U;
int16_t x23 = INT16_MIN;
int32_t x26 = -7;
int32_t x27 = INT32_MIN;
int64_t t6 = -995506LL;
uint64_t t7 = 114772185933620LLU;
volatile int64_t t9 = -3331LL;
static int64_t x43 = 19451797254059LL;
static uint16_t x49 = UINT16_MAX;
volatile int16_t x50 = -1;
volatile uint64_t x59 = 857995LLU;
volatile int16_t x62 = -456;
int8_t x68 = -1;
uint64_t x84 = 741954520LLU;
uint64_t t20 = 67616684102263842LLU;
int64_t x104 = INT64_MIN;
volatile uint8_t x110 = 8U;
volatile int64_t x112 = -113166555891LL;
static int16_t x119 = INT16_MAX;
static int8_t x132 = INT8_MIN;
uint32_t x135 = UINT32_MAX;
int32_t x138 = INT32_MIN;
int32_t x143 = -1;
static uint8_t x148 = UINT8_MAX;
static int16_t x153 = -2279;
int64_t x161 = -1LL;
uint64_t x169 = UINT64_MAX;
int64_t x170 = INT64_MIN;
volatile uint64_t t40 = 15575LLU;
static int32_t x175 = INT32_MIN;
uint8_t x189 = UINT8_MAX;
volatile int8_t x192 = -1;
int8_t x194 = INT8_MAX;
int16_t x197 = INT16_MIN;
static int8_t x198 = INT8_MAX;
uint8_t x199 = 6U;
uint16_t x204 = UINT16_MAX;
static int32_t x208 = INT32_MAX;
static uint16_t x209 = 0U;
int16_t x212 = INT16_MIN;
uint64_t x217 = 25091292082LLU;
static int16_t x220 = -1;
int8_t x222 = INT8_MAX;
static uint64_t x225 = UINT64_MAX;
uint64_t t54 = 213LLU;
volatile int64_t t55 = 2418227405398209LL;
volatile uint16_t x235 = 1446U;
volatile uint64_t t56 = 98861065746348452LLU;
static int8_t x240 = INT8_MIN;
static volatile int64_t x242 = -3304068544LL;
static int8_t x249 = INT8_MIN;
uint32_t x251 = 6233540U;
uint32_t t60 = 40U;
int64_t x256 = INT64_MIN;
volatile int64_t t61 = 4500112403705LL;
static int32_t x262 = 197;
int32_t t63 = -286;
static volatile uint64_t x265 = 41524608LLU;
static int64_t t65 = -84805063LL;
volatile int8_t x284 = INT8_MIN;
volatile int64_t t69 = 13069536205273LL;
volatile uint16_t x300 = 858U;
volatile int64_t t72 = 5498LL;
int16_t x303 = INT16_MIN;
int32_t x316 = INT32_MIN;
static uint64_t x319 = 1311263873LLU;
static uint64_t t76 = 8914700782LLU;
int16_t x322 = 3921;
volatile int64_t t77 = 40297747073963LL;
volatile uint64_t t78 = 93072LLU;
int64_t x331 = -1LL;
int16_t x336 = INT16_MAX;
int32_t x342 = INT32_MIN;
int32_t t82 = -112677;
volatile int64_t x345 = -1LL;
volatile uint64_t x352 = 6060439LLU;
volatile uint64_t t84 = 4125670823055720517LLU;
static int8_t x353 = INT8_MIN;
uint8_t x356 = UINT8_MAX;
uint64_t x359 = 822747862131318985LLU;
static int64_t x365 = INT64_MAX;
uint16_t x369 = UINT16_MAX;
int32_t t89 = 14726286;
volatile int8_t x384 = -1;
int8_t x400 = INT8_MAX;
uint16_t x401 = 153U;
int16_t x404 = -1;
uint64_t t97 = 2970LLU;
uint16_t x409 = 1U;
uint64_t x412 = 38LLU;
uint32_t x414 = 53U;
volatile int64_t x415 = INT64_MIN;
int64_t x420 = INT64_MIN;
uint32_t t101 = 1U;
uint32_t x437 = 16U;
uint32_t t105 = 15251366U;
volatile uint32_t t106 = 25985900U;
uint32_t x447 = 103634U;
static volatile uint32_t x449 = 193897U;
int8_t x454 = INT8_MIN;
static int64_t x460 = INT64_MIN;
int64_t x465 = INT64_MAX;
int64_t t112 = -1LL;
uint16_t x480 = 6U;
volatile uint64_t t115 = 235921057473496LLU;
uint16_t x486 = 83U;
int64_t x489 = INT64_MIN;
int16_t x491 = INT16_MAX;
static int16_t x501 = -62;
static int8_t x534 = INT8_MIN;
uint16_t x541 = 68U;
static volatile int16_t x546 = INT16_MIN;
volatile uint64_t x559 = UINT64_MAX;
volatile int32_t x560 = -1;
int64_t x561 = INT64_MIN;
static int8_t x571 = INT8_MIN;
int8_t x576 = 13;
static int8_t x579 = 0;
int8_t x586 = 0;
volatile int8_t x595 = -3;
volatile uint64_t t141 = 29456299816431LLU;
int8_t x600 = -1;
int16_t x605 = INT16_MIN;
uint32_t t144 = 61980U;
volatile uint64_t x616 = 151255LLU;
uint64_t t146 = 1853975551884114558LLU;
static int8_t x618 = -39;
int64_t x619 = INT64_MIN;
uint16_t x625 = 9904U;
uint32_t x630 = 72936U;
int16_t x631 = INT16_MAX;
volatile uint64_t t150 = 448581200786304LLU;
int16_t x636 = -47;
int8_t x637 = -13;
int64_t x641 = 187108459876LL;
int32_t x644 = INT32_MIN;
static uint64_t t153 = 377277710LLU;
uint32_t x651 = UINT32_MAX;
static int32_t x659 = 48814936;
volatile uint32_t x663 = 1063U;
volatile uint32_t x665 = 3237336U;
int8_t x667 = INT8_MIN;
static int64_t x669 = -1LL;
static volatile int32_t x674 = INT32_MIN;
int8_t x677 = -1;
volatile int16_t x678 = INT16_MIN;
int32_t x684 = -57488008;
int32_t t164 = 1;
int64_t x689 = -1LL;
int8_t x703 = INT8_MIN;
uint8_t x704 = 30U;
uint32_t t168 = 146375U;
uint32_t x706 = 1U;
int32_t x708 = INT32_MIN;
uint32_t t169 = 19350757U;
uint8_t x710 = 16U;
int16_t x719 = INT16_MAX;
int8_t x720 = -1;
int32_t x723 = INT32_MIN;
volatile int8_t x726 = INT8_MIN;
volatile int8_t x728 = INT8_MAX;
int8_t x731 = INT8_MIN;
static volatile uint16_t x733 = UINT16_MAX;
uint16_t x738 = 1702U;
int64_t t178 = -4496LL;
int64_t t179 = 2564069769927LL;
volatile int32_t x754 = INT32_MAX;
int16_t x756 = -1;
int8_t x757 = INT8_MIN;
volatile int32_t t185 = -448;
int32_t x778 = INT32_MAX;
static volatile int64_t x786 = INT64_MAX;
volatile int64_t t189 = 221153472208282637LL;
int8_t x793 = 7;
int32_t x796 = -1;
uint32_t x798 = 1637058278U;
volatile uint64_t x801 = UINT64_MAX;
volatile int64_t x804 = INT64_MIN;
volatile uint64_t t193 = 2016612618715460LLU;
static uint8_t x811 = 3U;
volatile uint32_t x812 = UINT32_MAX;
volatile uint32_t t195 = 609393302U;
int64_t x816 = -3496443LL;
int16_t x818 = INT16_MIN;
volatile int16_t x822 = -1;
volatile int32_t x826 = INT32_MIN;
int16_t x827 = INT16_MAX;


void f0(void) {
    	int64_t x1 = -45249LL;
	volatile int64_t t0 = -599230LL;

    t0 = ((x1&(x2|x3))/x4);

    if (t0 != 45249LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 18989U;
	uint8_t x6 = UINT8_MAX;
	int8_t x7 = -1;
	uint32_t x8 = 1852576983U;
	volatile uint32_t t1 = 99U;

    t1 = ((x5&(x6|x7))/x8);

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -723123044LL;
	static int16_t x10 = -1;
	int64_t t2 = -333LL;

    t2 = ((x9&(x10|x11))/x12);

    if (t2 != -2835776LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = UINT32_MAX;
	uint16_t x14 = 96U;
	static volatile int16_t x15 = INT16_MIN;
	uint32_t t3 = 6442054U;

    t3 = ((x13&(x14|x15))/x16);

    if (t3 != 53023884U) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x17 = -475081672;
	int16_t x18 = INT16_MIN;
	int8_t x19 = INT8_MIN;
	uint32_t x20 = 807U;
	volatile uint32_t t4 = 2163U;

    t4 = ((x17&(x18|x19))/x20);

    if (t4 != 4733439U) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MIN;
	int8_t x22 = INT8_MAX;
	static int8_t x24 = INT8_MIN;
	int32_t t5 = 288;

    t5 = ((x21&(x22|x23))/x24);

    if (t5 != 16777216) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -2;
	int64_t x28 = 6072LL;

    t6 = ((x25&(x26|x27))/x28);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x29 = INT32_MAX;
	volatile int32_t x30 = INT32_MIN;
	int8_t x31 = -1;
	uint64_t x32 = 111717498602291483LLU;

    t7 = ((x29&(x30|x31))/x32);

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MAX;
	int8_t x34 = -1;
	int64_t x35 = -1LL;
	int32_t x36 = 1;
	static volatile int64_t t8 = INT64_MAX;

    t8 = ((x33&(x34|x35))/x36);

    if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x37 = UINT16_MAX;
	static int64_t x38 = -1LL;
	static uint16_t x39 = UINT16_MAX;
	static int64_t x40 = -1LL;

    t9 = ((x37&(x38|x39))/x40);

    if (t9 != -65535LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MAX;
	static int16_t x42 = INT16_MAX;
	static int64_t x44 = INT64_MAX;
	volatile int64_t t10 = 3148667LL;

    t10 = ((x41&(x42|x43))/x44);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MIN;
	int16_t x46 = INT16_MIN;
	static uint64_t x47 = 109LLU;
	volatile int64_t x48 = -1LL;
	volatile uint64_t t11 = 11251345LLU;

    t11 = ((x45&(x46|x47))/x48);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x51 = INT8_MIN;
	static uint16_t x52 = UINT16_MAX;
	volatile int32_t t12 = -4508;

    t12 = ((x49&(x50|x51))/x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = 26U;
	int32_t x54 = -1040;
	int8_t x55 = INT8_MAX;
	static int32_t x56 = INT32_MAX;
	int32_t t13 = -1143940;

    t13 = ((x53&(x54|x55))/x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MIN;
	static int8_t x58 = -58;
	uint16_t x60 = 1U;
	uint64_t t14 = 1LLU;

    t14 = ((x57&(x58|x59))/x60);

    if (t14 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x61 = UINT32_MAX;
	int16_t x63 = INT16_MIN;
	int32_t x64 = INT32_MIN;
	volatile uint32_t t15 = 231851U;

    t15 = ((x61&(x62|x63))/x64);

    if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = -1;
	volatile int16_t x66 = INT16_MAX;
	int16_t x67 = INT16_MIN;
	volatile int32_t t16 = 454423;

    t16 = ((x65&(x66|x67))/x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x69 = 2008190717LL;
	int16_t x70 = INT16_MAX;
	int32_t x71 = INT32_MAX;
	int8_t x72 = INT8_MAX;
	int64_t t17 = 7LL;

    t17 = ((x69&(x70|x71))/x72);

    if (t17 != 15812525LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x73 = INT16_MIN;
	uint16_t x74 = UINT16_MAX;
	uint8_t x75 = 1U;
	uint8_t x76 = 115U;
	int32_t t18 = -3714;

    t18 = ((x73&(x74|x75))/x76);

    if (t18 != 284) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = INT16_MIN;
	static volatile int64_t x78 = -1LL;
	static volatile uint64_t x79 = 20LLU;
	int8_t x80 = INT8_MAX;
	uint64_t t19 = 52695284LLU;

    t19 = ((x77&(x78|x79))/x80);

    if (t19 != 145249953336295424LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x81 = -1;
	uint16_t x82 = 12849U;
	static int8_t x83 = INT8_MIN;

    t20 = ((x81&(x82|x83))/x84);

    if (t20 != 24862364978LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x89 = INT8_MIN;
	int8_t x90 = 45;
	int16_t x91 = -1;
	int64_t x92 = INT64_MIN;
	volatile int64_t t21 = -110675524755LL;

    t21 = ((x89&(x90|x91))/x92);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x93 = -62;
	int64_t x94 = INT64_MIN;
	uint16_t x95 = 18481U;
	static volatile uint32_t x96 = 306851U;
	static volatile int64_t t22 = 547383378597711801LL;

    t22 = ((x93&(x94|x95))/x96);

    if (t22 != -30058145604396LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x101 = -959;
	static int32_t x102 = INT32_MAX;
	int8_t x103 = INT8_MIN;
	volatile int64_t t23 = -25LL;

    t23 = ((x101&(x102|x103))/x104);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x105 = -1;
	int16_t x106 = INT16_MIN;
	uint32_t x107 = 12U;
	int32_t x108 = INT32_MAX;
	volatile uint32_t t24 = 4U;

    t24 = ((x105&(x106|x107))/x108);

    if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x109 = INT16_MAX;
	int64_t x111 = 0LL;
	int64_t t25 = -609351510014639755LL;

    t25 = ((x109&(x110|x111))/x112);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x113 = 939;
	volatile int16_t x114 = INT16_MIN;
	static uint64_t x115 = 130807LLU;
	int32_t x116 = 28199338;
	static volatile uint64_t t26 = 38540887369233LLU;

    t26 = ((x113&(x114|x115))/x116);

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int64_t x117 = 6237338845LL;
	int8_t x118 = -1;
	volatile int16_t x120 = 827;
	int64_t t27 = 61LL;

    t27 = ((x117&(x118|x119))/x120);

    if (t27 != 7542126LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x121 = INT8_MIN;
	int8_t x122 = INT8_MAX;
	volatile int64_t x123 = INT64_MIN;
	int16_t x124 = INT16_MIN;
	int64_t t28 = -2302749030441605842LL;

    t28 = ((x121&(x122|x123))/x124);

    if (t28 != 281474976710656LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x125 = INT64_MIN;
	uint64_t x126 = UINT64_MAX;
	volatile uint8_t x127 = 76U;
	uint32_t x128 = 82U;
	volatile uint64_t t29 = 62341LLU;

    t29 = ((x125&(x126|x127))/x128);

    if (t29 != 112480146790911900LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x129 = 20687119;
	static volatile uint64_t x130 = UINT64_MAX;
	int32_t x131 = -96;
	volatile uint64_t t30 = 28000631288277877LLU;

    t30 = ((x129&(x130|x131))/x132);

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x133 = INT32_MIN;
	uint32_t x134 = 476035U;
	uint8_t x136 = 2U;
	volatile uint32_t t31 = 47447U;

    t31 = ((x133&(x134|x135))/x136);

    if (t31 != 1073741824U) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x137 = INT8_MIN;
	int32_t x139 = INT32_MAX;
	uint8_t x140 = UINT8_MAX;
	volatile int32_t t32 = 111775889;

    t32 = ((x137&(x138|x139))/x140);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x141 = INT16_MAX;
	int32_t x142 = -1;
	static uint8_t x144 = 18U;
	int32_t t33 = -57441116;

    t33 = ((x141&(x142|x143))/x144);

    if (t33 != 1820) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x145 = UINT16_MAX;
	uint64_t x146 = 5LLU;
	int16_t x147 = 417;
	uint64_t t34 = 1180194055LLU;

    t34 = ((x145&(x146|x147))/x148);

    if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x149 = 74LLU;
	static int32_t x150 = INT32_MIN;
	static int16_t x151 = 217;
	volatile uint16_t x152 = 411U;
	uint64_t t35 = 19177936806LLU;

    t35 = ((x149&(x150|x151))/x152);

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x154 = 28810U;
	uint16_t x155 = 146U;
	int8_t x156 = 10;
	volatile int32_t t36 = 2914877;

    t36 = ((x153&(x154|x155))/x156);

    if (t36 != 2869) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x157 = INT16_MAX;
	int64_t x158 = -1LL;
	int64_t x159 = INT64_MIN;
	uint32_t x160 = UINT32_MAX;
	static volatile int64_t t37 = -732864LL;

    t37 = ((x157&(x158|x159))/x160);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x162 = 42LL;
	int64_t x163 = INT64_MIN;
	int8_t x164 = INT8_MIN;
	volatile int64_t t38 = 119261030LL;

    t38 = ((x161&(x162|x163))/x164);

    if (t38 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint16_t x165 = 53U;
	int16_t x166 = INT16_MIN;
	static uint8_t x167 = 6U;
	volatile uint64_t x168 = UINT64_MAX;
	uint64_t t39 = 27359998LLU;

    t39 = ((x165&(x166|x167))/x168);

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x171 = -1;
	volatile int8_t x172 = INT8_MAX;

    t40 = ((x169&(x170|x171))/x172);

    if (t40 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x173 = INT32_MAX;
	int32_t x174 = -263026131;
	uint16_t x176 = 5620U;
	volatile int32_t t41 = -70344361;

    t41 = ((x173&(x174|x175))/x176);

    if (t41 != 335312) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x177 = 1677685504596709640LLU;
	int8_t x178 = INT8_MIN;
	uint64_t x179 = 5634129341LLU;
	volatile int8_t x180 = 3;
	uint64_t t42 = 406971LLU;

    t42 = ((x177&(x178|x179))/x180);

    if (t42 != 559228501532236546LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x181 = -1;
	static int64_t x182 = 125099LL;
	uint16_t x183 = 4270U;
	int32_t x184 = -338182080;
	static int64_t t43 = 3LL;

    t43 = ((x181&(x182|x183))/x184);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x185 = INT32_MIN;
	volatile uint16_t x186 = 85U;
	int32_t x187 = -51089;
	int32_t x188 = INT32_MAX;
	int32_t t44 = -1608279;

    t44 = ((x185&(x186|x187))/x188);

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x190 = 862U;
	int64_t x191 = -1LL;
	static int64_t t45 = -8122640544689632LL;

    t45 = ((x189&(x190|x191))/x192);

    if (t45 != -255LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x193 = 0U;
	uint8_t x195 = UINT8_MAX;
	int32_t x196 = -122;
	int32_t t46 = -3893587;

    t46 = ((x193&(x194|x195))/x196);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x200 = INT64_MIN;
	int64_t t47 = 1001053184LL;

    t47 = ((x197&(x198|x199))/x200);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x201 = UINT16_MAX;
	uint32_t x202 = 19924U;
	uint16_t x203 = 5941U;
	static volatile uint32_t t48 = 7267U;

    t48 = ((x201&(x202|x203))/x204);

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x205 = 76U;
	int64_t x206 = INT64_MAX;
	int64_t x207 = INT64_MIN;
	volatile int64_t t49 = 0LL;

    t49 = ((x205&(x206|x207))/x208);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x210 = -2;
	uint64_t x211 = 348063358LLU;
	static volatile uint64_t t50 = 75227383790940LLU;

    t50 = ((x209&(x210|x211))/x212);

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x213 = 1U;
	static int8_t x214 = INT8_MAX;
	int32_t x215 = -3347;
	int16_t x216 = INT16_MAX;
	uint32_t t51 = 439391U;

    t51 = ((x213&(x214|x215))/x216);

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x218 = 14U;
	uint64_t x219 = 2405474889LLU;
	static volatile uint64_t t52 = 3512985622LLU;

    t52 = ((x217&(x218|x219))/x220);

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x221 = -1LL;
	uint8_t x223 = UINT8_MAX;
	volatile int64_t x224 = 205973LL;
	int64_t t53 = 950771LL;

    t53 = ((x221&(x222|x223))/x224);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x226 = 462U;
	int8_t x227 = -1;
	int16_t x228 = INT16_MIN;

    t54 = ((x225&(x226|x227))/x228);

    if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x229 = INT64_MAX;
	static int32_t x230 = -4971;
	volatile int32_t x231 = 206;
	uint8_t x232 = 10U;

    t55 = ((x229&(x230|x231))/x232);

    if (t55 != 922337203685477091LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x233 = 113802683;
	uint64_t x234 = 9639072717633LLU;
	int64_t x236 = 15057268926LL;

    t56 = ((x233&(x234|x235))/x236);

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x237 = -1;
	static int8_t x238 = 7;
	volatile int32_t x239 = INT32_MIN;
	volatile int32_t t57 = 30;

    t57 = ((x237&(x238|x239))/x240);

    if (t57 != 16777215) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x241 = -1LL;
	uint32_t x243 = 2U;
	uint16_t x244 = UINT16_MAX;
	volatile int64_t t58 = -1541929LL;

    t58 = ((x241&(x242|x243))/x244);

    if (t58 != -50416LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int16_t x245 = INT16_MIN;
	int32_t x246 = INT32_MIN;
	uint64_t x247 = 126LLU;
	static volatile int64_t x248 = 13626917LL;
	uint64_t t59 = 730868740064LLU;

    t59 = ((x245&(x246|x247))/x248);

    if (t59 != 1353699011417LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x250 = 0;
	int32_t x252 = 50885;

    t60 = ((x249&(x250|x251))/x252);

    if (t60 != 122U) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int64_t x253 = INT64_MIN;
	int8_t x254 = INT8_MAX;
	volatile int64_t x255 = INT64_MIN;

    t61 = ((x253&(x254|x255))/x256);

    if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x257 = UINT8_MAX;
	int16_t x258 = -141;
	uint16_t x259 = UINT16_MAX;
	static volatile int32_t x260 = -3043154;
	volatile int32_t t62 = -91888295;

    t62 = ((x257&(x258|x259))/x260);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x261 = INT8_MIN;
	static uint8_t x263 = 26U;
	volatile int16_t x264 = INT16_MIN;

    t63 = ((x261&(x262|x263))/x264);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x266 = UINT16_MAX;
	int32_t x267 = INT32_MIN;
	int32_t x268 = INT32_MIN;
	uint64_t t64 = 369463LLU;

    t64 = ((x265&(x266|x267))/x268);

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x269 = INT64_MIN;
	static int64_t x270 = INT64_MAX;
	int8_t x271 = 0;
	static int8_t x272 = INT8_MAX;

    t65 = ((x269&(x270|x271))/x272);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x273 = 8838U;
	int64_t x274 = -1LL;
	int16_t x275 = INT16_MAX;
	volatile int8_t x276 = 1;
	volatile int64_t t66 = 68797011614382039LL;

    t66 = ((x273&(x274|x275))/x276);

    if (t66 != 8838LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x277 = INT64_MIN;
	uint8_t x278 = 9U;
	uint32_t x279 = 10U;
	volatile int32_t x280 = INT32_MAX;
	static int64_t t67 = -20419LL;

    t67 = ((x277&(x278|x279))/x280);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x281 = INT16_MAX;
	int32_t x282 = 229917372;
	volatile int64_t x283 = INT64_MAX;
	volatile int64_t t68 = -3910528LL;

    t68 = ((x281&(x282|x283))/x284);

    if (t68 != -255LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x285 = INT64_MIN;
	int64_t x286 = INT64_MIN;
	int8_t x287 = -63;
	int32_t x288 = INT32_MIN;

    t69 = ((x285&(x286|x287))/x288);

    if (t69 != 4294967296LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x289 = -1;
	uint8_t x290 = 33U;
	uint8_t x291 = UINT8_MAX;
	uint8_t x292 = 2U;
	int32_t t70 = -24300;

    t70 = ((x289&(x290|x291))/x292);

    if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x293 = INT8_MIN;
	int64_t x294 = INT64_MIN;
	static int32_t x295 = INT32_MIN;
	int8_t x296 = INT8_MIN;
	volatile int64_t t71 = 451LL;

    t71 = ((x293&(x294|x295))/x296);

    if (t71 != 16777216LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int32_t x297 = 54024503;
	static uint8_t x298 = 15U;
	int64_t x299 = INT64_MIN;

    t72 = ((x297&(x298|x299))/x300);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x301 = 141757750;
	int8_t x302 = INT8_MIN;
	uint8_t x304 = 15U;
	static int32_t t73 = 69579759;

    t73 = ((x301&(x302|x303))/x304);

    if (t73 != 9450513) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x309 = INT16_MIN;
	static int8_t x310 = 15;
	uint32_t x311 = 11969U;
	uint32_t x312 = 7988755U;
	volatile uint32_t t74 = 92962121U;

    t74 = ((x309&(x310|x311))/x312);

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x313 = 3;
	int64_t x314 = INT64_MIN;
	static int64_t x315 = INT64_MIN;
	volatile int64_t t75 = -68596825285392890LL;

    t75 = ((x313&(x314|x315))/x316);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x317 = 863490981U;
	uint8_t x318 = 1U;
	uint32_t x320 = 1U;

    t76 = ((x317&(x318|x319))/x320);

    if (t76 != 35668097LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x321 = INT16_MIN;
	int64_t x323 = INT64_MAX;
	volatile uint8_t x324 = 83U;

    t77 = ((x321&(x322|x323))/x324);

    if (t77 != 111124964299454735LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x325 = INT64_MIN;
	static int64_t x326 = -225LL;
	int8_t x327 = INT8_MIN;
	volatile uint64_t x328 = UINT64_MAX;

    t78 = ((x325&(x326|x327))/x328);

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint16_t x329 = 1U;
	int32_t x330 = INT32_MAX;
	int64_t x332 = INT64_MIN;
	volatile int64_t t79 = 1829277926794LL;

    t79 = ((x329&(x330|x331))/x332);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x333 = 448658457509LLU;
	static int32_t x334 = INT32_MIN;
	static int8_t x335 = -60;
	volatile uint64_t t80 = 481164488446LLU;

    t80 = ((x333&(x334|x335))/x336);

    if (t80 != 13692387LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x337 = INT32_MIN;
	volatile int64_t x338 = -1LL;
	int64_t x339 = INT64_MAX;
	int8_t x340 = INT8_MIN;
	int64_t t81 = -13240631304LL;

    t81 = ((x337&(x338|x339))/x340);

    if (t81 != 16777216LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x341 = INT32_MIN;
	int32_t x343 = -1039739522;
	static int32_t x344 = 104023848;

    t82 = ((x341&(x342|x343))/x344);

    if (t82 != -20) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x346 = INT8_MAX;
	volatile int64_t x347 = INT64_MIN;
	int8_t x348 = INT8_MAX;
	static int64_t t83 = 1LL;

    t83 = ((x345&(x346|x347))/x348);

    if (t83 != -72624976668147840LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x349 = INT64_MIN;
	int8_t x350 = 52;
	int16_t x351 = INT16_MIN;

    t84 = ((x349&(x350|x351))/x352);

    if (t84 != 1521898337208LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x354 = -1;
	uint64_t x355 = 12090580930846LLU;
	static uint64_t t85 = 2LLU;

    t85 = ((x353&(x354|x355))/x356);

    if (t85 != 72340172838076672LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x357 = 0LLU;
	int8_t x358 = 1;
	uint8_t x360 = 1U;
	uint64_t t86 = 447606535377116LLU;

    t86 = ((x357&(x358|x359))/x360);

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x361 = INT32_MAX;
	uint64_t x362 = UINT64_MAX;
	int16_t x363 = INT16_MAX;
	static uint64_t x364 = UINT64_MAX;
	volatile uint64_t t87 = 1040617LLU;

    t87 = ((x361&(x362|x363))/x364);

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint64_t x366 = 6720032843412234607LLU;
	static int16_t x367 = 8;
	int32_t x368 = INT32_MIN;
	uint64_t t88 = 3837231913LLU;

    t88 = ((x365&(x366|x367))/x368);

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x370 = INT16_MIN;
	static int32_t x371 = INT32_MIN;
	static int32_t x372 = -1;

    t89 = ((x369&(x370|x371))/x372);

    if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x373 = INT16_MIN;
	int16_t x374 = INT16_MIN;
	int64_t x375 = INT64_MIN;
	static uint64_t x376 = 2232674705817LLU;
	uint64_t t90 = 13733909LLU;

    t90 = ((x373&(x374|x375))/x376);

    if (t90 != 8262172LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x377 = 12U;
	static uint16_t x378 = 13581U;
	int8_t x379 = -10;
	int8_t x380 = INT8_MAX;
	volatile int32_t t91 = 4744;

    t91 = ((x377&(x378|x379))/x380);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x381 = -1;
	int32_t x382 = 7421;
	int16_t x383 = -3924;
	int32_t t92 = -57;

    t92 = ((x381&(x382|x383))/x384);

    if (t92 != 771) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x385 = 9;
	int8_t x386 = INT8_MIN;
	volatile uint16_t x387 = 8U;
	volatile int64_t x388 = INT64_MIN;
	int64_t t93 = 13706647502973LL;

    t93 = ((x385&(x386|x387))/x388);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x389 = -15;
	int64_t x390 = INT64_MAX;
	int64_t x391 = -3336401834092766260LL;
	int16_t x392 = INT16_MIN;
	volatile int64_t t94 = -4698068530LL;

    t94 = ((x389&(x390|x391))/x392);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x397 = INT8_MIN;
	uint32_t x398 = 607387U;
	static volatile int16_t x399 = INT16_MIN;
	uint32_t t95 = 31U;

    t95 = ((x397&(x398|x399))/x400);

    if (t95 != 33818520U) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int8_t x402 = INT8_MIN;
	int8_t x403 = -1;
	volatile int32_t t96 = -839;

    t96 = ((x401&(x402|x403))/x404);

    if (t96 != -153) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x405 = 2654U;
	uint8_t x406 = UINT8_MAX;
	uint64_t x407 = 10469767638119268LLU;
	int8_t x408 = INT8_MAX;

    t97 = ((x405&(x406|x407))/x408);

    if (t97 != 4LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x410 = 28;
	uint32_t x411 = UINT32_MAX;
	uint64_t t98 = 46817LLU;

    t98 = ((x409&(x410|x411))/x412);

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x413 = -1;
	int8_t x416 = 58;
	volatile int64_t t99 = 0LL;

    t99 = ((x413&(x414|x415))/x416);

    if (t99 != -159023655807840961LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x417 = UINT8_MAX;
	uint64_t x418 = 390274LLU;
	volatile int16_t x419 = -1;
	uint64_t t100 = 471313766973397680LLU;

    t100 = ((x417&(x418|x419))/x420);

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x421 = 8;
	uint32_t x422 = 1U;
	int16_t x423 = 710;
	uint32_t x424 = 838488U;

    t101 = ((x421&(x422|x423))/x424);

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x425 = INT64_MIN;
	int32_t x426 = -2842;
	volatile int64_t x427 = INT64_MAX;
	uint64_t x428 = UINT64_MAX;
	volatile uint64_t t102 = 425774909459593LLU;

    t102 = ((x425&(x426|x427))/x428);

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x429 = INT64_MAX;
	uint8_t x430 = 27U;
	uint16_t x431 = 1U;
	uint64_t x432 = 184532897265415LLU;
	uint64_t t103 = 120325918831707356LLU;

    t103 = ((x429&(x430|x431))/x432);

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x433 = INT16_MIN;
	int16_t x434 = -1;
	int64_t x435 = INT64_MIN;
	int64_t x436 = -1LL;
	volatile int64_t t104 = 9532109711LL;

    t104 = ((x433&(x434|x435))/x436);

    if (t104 != 32768LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x438 = -1;
	uint16_t x439 = UINT16_MAX;
	static int32_t x440 = INT32_MAX;

    t105 = ((x437&(x438|x439))/x440);

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x441 = UINT32_MAX;
	volatile int32_t x442 = INT32_MIN;
	uint32_t x443 = UINT32_MAX;
	uint32_t x444 = UINT32_MAX;

    t106 = ((x441&(x442|x443))/x444);

    if (t106 != 1U) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x445 = 48558;
	uint64_t x446 = 6733014398LLU;
	uint64_t x448 = UINT64_MAX;
	volatile uint64_t t107 = 1054517255756LLU;

    t107 = ((x445&(x446|x447))/x448);

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x450 = -489;
	static volatile int64_t x451 = INT64_MIN;
	int64_t x452 = -1LL;
	static volatile int64_t t108 = -28139432874914463LL;

    t108 = ((x449&(x450|x451))/x452);

    if (t108 != -193537LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x453 = 5U;
	volatile uint64_t x455 = 2723LLU;
	int8_t x456 = -1;
	volatile uint64_t t109 = 2695613590LLU;

    t109 = ((x453&(x454|x455))/x456);

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x457 = INT32_MIN;
	uint8_t x458 = 1U;
	volatile uint32_t x459 = 1364081634U;
	int64_t t110 = -47341370734LL;

    t110 = ((x457&(x458|x459))/x460);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x461 = INT32_MAX;
	int16_t x462 = INT16_MAX;
	uint32_t x463 = UINT32_MAX;
	int64_t x464 = -1LL;
	volatile int64_t t111 = 173474LL;

    t111 = ((x461&(x462|x463))/x464);

    if (t111 != -2147483647LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x466 = UINT8_MAX;
	uint8_t x467 = UINT8_MAX;
	int32_t x468 = -1;

    t112 = ((x465&(x466|x467))/x468);

    if (t112 != -255LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint8_t x473 = 111U;
	int32_t x474 = -1;
	int64_t x475 = -1LL;
	volatile int32_t x476 = INT32_MIN;
	int64_t t113 = -126217876492LL;

    t113 = ((x473&(x474|x475))/x476);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x477 = 5217015436259592LLU;
	static uint64_t x478 = UINT64_MAX;
	static int16_t x479 = INT16_MAX;
	volatile uint64_t t114 = 96LLU;

    t114 = ((x477&(x478|x479))/x480);

    if (t114 != 869502572709932LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x481 = 59347582732374LLU;
	uint16_t x482 = 147U;
	volatile int32_t x483 = -9201;
	static int8_t x484 = INT8_MIN;

    t115 = ((x481&(x482|x483))/x484);

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x485 = -1;
	uint8_t x487 = 1U;
	int16_t x488 = INT16_MIN;
	static int32_t t116 = -1;

    t116 = ((x485&(x486|x487))/x488);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x490 = UINT8_MAX;
	int64_t x492 = INT64_MIN;
	volatile int64_t t117 = -1353481LL;

    t117 = ((x489&(x490|x491))/x492);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x493 = -1;
	uint8_t x494 = 10U;
	int64_t x495 = INT64_MIN;
	volatile uint64_t x496 = 58LLU;
	volatile uint64_t t118 = 125331172606701LLU;

    t118 = ((x493&(x494|x495))/x496);

    if (t118 != 159023655807840962LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x497 = 0;
	static uint16_t x498 = 1713U;
	static uint32_t x499 = UINT32_MAX;
	uint64_t x500 = UINT64_MAX;
	volatile uint64_t t119 = 331336056LLU;

    t119 = ((x497&(x498|x499))/x500);

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x502 = INT16_MIN;
	volatile int8_t x503 = INT8_MAX;
	int32_t x504 = -412356;
	int32_t t120 = 983;

    t120 = ((x501&(x502|x503))/x504);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x505 = 47LLU;
	volatile int64_t x506 = 176LL;
	uint8_t x507 = 1U;
	uint16_t x508 = UINT16_MAX;
	volatile uint64_t t121 = 28235LLU;

    t121 = ((x505&(x506|x507))/x508);

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x513 = 135679268910LLU;
	int32_t x514 = -1;
	static volatile int8_t x515 = -7;
	uint16_t x516 = 390U;
	uint64_t t122 = 1216721534LLU;

    t122 = ((x513&(x514|x515))/x516);

    if (t122 != 347895561LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int64_t x517 = -204313LL;
	int64_t x518 = -79481979LL;
	int16_t x519 = INT16_MIN;
	static int64_t x520 = INT64_MIN;
	volatile int64_t t123 = 0LL;

    t123 = ((x517&(x518|x519))/x520);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint32_t x521 = 52142U;
	static uint32_t x522 = 123671U;
	int64_t x523 = INT64_MIN;
	int32_t x524 = INT32_MIN;
	volatile int64_t t124 = -293979039776237LL;

    t124 = ((x521&(x522|x523))/x524);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x525 = -116;
	int32_t x526 = -1;
	int32_t x527 = -5716;
	int32_t x528 = 10802692;
	int32_t t125 = -4196940;

    t125 = ((x525&(x526|x527))/x528);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x529 = 9U;
	int16_t x530 = 0;
	int64_t x531 = -1LL;
	int16_t x532 = INT16_MIN;
	volatile int64_t t126 = 156020392561000382LL;

    t126 = ((x529&(x530|x531))/x532);

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x533 = INT8_MIN;
	int16_t x535 = 12;
	volatile uint32_t x536 = 45U;
	uint32_t t127 = 11390U;

    t127 = ((x533&(x534|x535))/x536);

    if (t127 != 95443714U) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x537 = INT32_MIN;
	volatile int8_t x538 = -1;
	int32_t x539 = -456385705;
	int64_t x540 = -428870495752LL;
	int64_t t128 = -2095165494237792589LL;

    t128 = ((x537&(x538|x539))/x540);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x542 = UINT64_MAX;
	uint32_t x543 = 178251411U;
	int8_t x544 = -7;
	uint64_t t129 = 244402LLU;

    t129 = ((x541&(x542|x543))/x544);

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x545 = 270U;
	uint16_t x547 = UINT16_MAX;
	uint32_t x548 = UINT32_MAX;
	uint32_t t130 = 681050926U;

    t130 = ((x545&(x546|x547))/x548);

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile uint8_t x549 = 15U;
	int64_t x550 = -1LL;
	uint8_t x551 = UINT8_MAX;
	int8_t x552 = INT8_MIN;
	int64_t t131 = 157430039674LL;

    t131 = ((x549&(x550|x551))/x552);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x557 = INT8_MIN;
	volatile uint64_t x558 = UINT64_MAX;
	volatile uint64_t t132 = 58877LLU;

    t132 = ((x557&(x558|x559))/x560);

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x562 = UINT8_MAX;
	int64_t x563 = INT64_MIN;
	volatile uint16_t x564 = UINT16_MAX;
	int64_t t133 = 1263278611886LL;

    t133 = ((x561&(x562|x563))/x564);

    if (t133 != -140739635871744LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x565 = INT64_MAX;
	volatile uint64_t x566 = 498087990LLU;
	static int64_t x567 = INT64_MAX;
	volatile int8_t x568 = INT8_MAX;
	static volatile uint64_t t134 = 474LLU;

    t134 = ((x565&(x566|x567))/x568);

    if (t134 != 72624976668147841LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x569 = INT16_MIN;
	int32_t x570 = INT32_MAX;
	int64_t x572 = INT64_MAX;
	volatile int64_t t135 = -9588511203LL;

    t135 = ((x569&(x570|x571))/x572);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x573 = INT16_MIN;
	int32_t x574 = INT32_MIN;
	static int64_t x575 = -1LL;
	volatile int64_t t136 = -521LL;

    t136 = ((x573&(x574|x575))/x576);

    if (t136 != -2520LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x577 = 65837688U;
	int64_t x578 = INT64_MIN;
	int16_t x580 = INT16_MAX;
	int64_t t137 = 5271542LL;

    t137 = ((x577&(x578|x579))/x580);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x581 = -1;
	int64_t x582 = INT64_MAX;
	int8_t x583 = -3;
	volatile int64_t x584 = -1LL;
	static int64_t t138 = 3643975403LL;

    t138 = ((x581&(x582|x583))/x584);

    if (t138 != 1LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x585 = INT64_MAX;
	int32_t x587 = INT32_MIN;
	int64_t x588 = 14713032LL;
	int64_t t139 = -8911789308585923LL;

    t139 = ((x585&(x586|x587))/x588);

    if (t139 != 626884522150LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x589 = 40;
	uint64_t x590 = 100027972690648LLU;
	static volatile int8_t x591 = INT8_MAX;
	static int32_t x592 = -16291160;
	uint64_t t140 = 1976777885194LLU;

    t140 = ((x589&(x590|x591))/x592);

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x593 = 6598;
	uint64_t x594 = 916143LLU;
	int32_t x596 = 836385;

    t141 = ((x593&(x594|x595))/x596);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x597 = INT16_MIN;
	uint64_t x598 = 46572555773LLU;
	int16_t x599 = INT16_MIN;
	uint64_t t142 = 3782171LLU;

    t142 = ((x597&(x598|x599))/x600);

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x601 = INT16_MIN;
	volatile uint32_t x602 = 19005U;
	int16_t x603 = INT16_MIN;
	volatile uint64_t x604 = 13LLU;
	uint64_t t143 = 29LLU;

    t143 = ((x601&(x602|x603))/x604);

    if (t143 != 330379579LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x606 = INT32_MAX;
	uint32_t x607 = 223U;
	static uint8_t x608 = 27U;

    t144 = ((x605&(x606|x607))/x608);

    if (t144 != 79535217U) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x609 = -871946;
	uint8_t x610 = 18U;
	uint8_t x611 = UINT8_MAX;
	static uint64_t x612 = 2958LLU;
	uint64_t t145 = 2116530115903616LLU;

    t145 = ((x609&(x610|x611))/x612);

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x613 = -1;
	volatile uint64_t x614 = 2953038995141282938LLU;
	static uint8_t x615 = 31U;

    t146 = ((x613&(x614|x615))/x616);

    if (t146 != 19523579353682LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x617 = INT16_MIN;
	static int64_t x620 = INT64_MIN;
	int64_t t147 = 4LL;

    t147 = ((x617&(x618|x619))/x620);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x621 = 43;
	int32_t x622 = INT32_MAX;
	static int32_t x623 = -1;
	volatile int64_t x624 = 243423638542LL;
	static volatile int64_t t148 = 0LL;

    t148 = ((x621&(x622|x623))/x624);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x626 = UINT64_MAX;
	int32_t x627 = INT32_MIN;
	static volatile int16_t x628 = INT16_MIN;
	volatile uint64_t t149 = 77257038020LLU;

    t149 = ((x625&(x626|x627))/x628);

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x629 = -393410421;
	volatile uint64_t x632 = 7656115058LLU;

    t150 = ((x629&(x630|x631))/x632);

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x633 = UINT64_MAX;
	uint64_t x634 = 14187008731LLU;
	static uint32_t x635 = 0U;
	volatile uint64_t t151 = 11LLU;

    t151 = ((x633&(x634|x635))/x636);

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x638 = INT32_MIN;
	uint8_t x639 = 41U;
	uint8_t x640 = 22U;
	static int32_t t152 = -9690;

    t152 = ((x637&(x638|x639))/x640);

    if (t152 != -97612891) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x642 = 145960474667356LLU;
	uint32_t x643 = 8188U;

    t153 = ((x641&(x642|x643))/x644);

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x645 = 530336U;
	volatile uint32_t x646 = UINT32_MAX;
	int16_t x647 = INT16_MIN;
	static int32_t x648 = -1;
	static uint32_t t154 = 10944992U;

    t154 = ((x645&(x646|x647))/x648);

    if (t154 != 0U) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x649 = INT32_MIN;
	static volatile int8_t x650 = 1;
	int8_t x652 = -1;
	static uint32_t t155 = 0U;

    t155 = ((x649&(x650|x651))/x652);

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x653 = 130959LL;
	int8_t x654 = 42;
	uint16_t x655 = 176U;
	int64_t x656 = -1LL;
	volatile int64_t t156 = -94034832LL;

    t156 = ((x653&(x654|x655))/x656);

    if (t156 != -138LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x657 = 12780901114851LLU;
	int8_t x658 = 9;
	volatile int64_t x660 = 84054745522773LL;
	volatile uint64_t t157 = 3335720993330LLU;

    t157 = ((x657&(x658|x659))/x660);

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x661 = 229894LL;
	int64_t x662 = INT64_MIN;
	int64_t x664 = 11LL;
	static volatile int64_t t158 = -451389058926803291LL;

    t158 = ((x661&(x662|x663))/x664);

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint16_t x666 = 2375U;
	static uint8_t x668 = 12U;
	volatile uint32_t t159 = 1U;

    t159 = ((x665&(x666|x667))/x668);

    if (t159 != 269776U) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x670 = 48352U;
	static int8_t x671 = INT8_MAX;
	int16_t x672 = INT16_MIN;
	int64_t t160 = -449143841LL;

    t160 = ((x669&(x670|x671))/x672);

    if (t160 != -1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x673 = 3U;
	int32_t x675 = INT32_MIN;
	int64_t x676 = 6130549316233351LL;
	volatile int64_t t161 = -12LL;

    t161 = ((x673&(x674|x675))/x676);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x679 = INT32_MIN;
	static int8_t x680 = -1;
	volatile int32_t t162 = 30060538;

    t162 = ((x677&(x678|x679))/x680);

    if (t162 != 32768) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x681 = INT64_MAX;
	uint32_t x682 = 93114039U;
	int16_t x683 = -1;
	int64_t t163 = -24569LL;

    t163 = ((x681&(x682|x683))/x684);

    if (t163 != -74LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x685 = INT16_MIN;
	int16_t x686 = INT16_MAX;
	volatile int16_t x687 = INT16_MIN;
	int8_t x688 = INT8_MIN;

    t164 = ((x685&(x686|x687))/x688);

    if (t164 != 256) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x690 = INT32_MAX;
	volatile int8_t x691 = -30;
	static uint64_t x692 = 2086LLU;
	static volatile uint64_t t165 = 41235396186485LLU;

    t165 = ((x689&(x690|x691))/x692);

    if (t165 != 8843117964386170LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x693 = 1;
	static int32_t x694 = INT32_MIN;
	int32_t x695 = 1;
	volatile uint16_t x696 = UINT16_MAX;
	int32_t t166 = -2315;

    t166 = ((x693&(x694|x695))/x696);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x697 = -1;
	int64_t x698 = INT64_MIN;
	static int32_t x699 = 329;
	uint16_t x700 = 51U;
	int64_t t167 = 2022422LL;

    t167 = ((x697&(x698|x699))/x700);

    if (t167 != -180850432095191676LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint32_t x701 = UINT32_MAX;
	int8_t x702 = -59;

    t168 = ((x701&(x702|x703))/x704);

    if (t168 != 143165574U) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint16_t x705 = 1U;
	static volatile int32_t x707 = INT32_MIN;

    t169 = ((x705&(x706|x707))/x708);

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x709 = INT8_MAX;
	int64_t x711 = -1LL;
	uint32_t x712 = 854543U;
	volatile int64_t t170 = 69602LL;

    t170 = ((x709&(x710|x711))/x712);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x713 = -1LL;
	uint16_t x714 = 20U;
	int16_t x715 = INT16_MAX;
	volatile uint8_t x716 = 1U;
	int64_t t171 = 3190LL;

    t171 = ((x713&(x714|x715))/x716);

    if (t171 != 32767LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x717 = 3U;
	int64_t x718 = -3148991LL;
	int64_t t172 = 84666349145198LL;

    t172 = ((x717&(x718|x719))/x720);

    if (t172 != -3LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x721 = -1;
	volatile int16_t x722 = INT16_MAX;
	static int16_t x724 = INT16_MIN;
	static volatile int32_t t173 = -360;

    t173 = ((x721&(x722|x723))/x724);

    if (t173 != 65535) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x725 = INT32_MIN;
	volatile int64_t x727 = 2LL;
	int64_t t174 = -331083785LL;

    t174 = ((x725&(x726|x727))/x728);

    if (t174 != -16909320LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x729 = INT64_MAX;
	int32_t x730 = -1;
	int8_t x732 = 1;
	static int64_t t175 = INT64_MAX;

    t175 = ((x729&(x730|x731))/x732);

    if (t175 != INT64_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x734 = INT32_MIN;
	static volatile int32_t x735 = 5;
	int32_t x736 = INT32_MIN;
	static int32_t t176 = 103258283;

    t176 = ((x733&(x734|x735))/x736);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x737 = INT8_MIN;
	uint32_t x739 = 401565U;
	uint16_t x740 = 1331U;
	uint32_t t177 = 0U;

    t177 = ((x737&(x738|x739))/x740);

    if (t177 != 302U) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x741 = 0;
	int32_t x742 = INT32_MIN;
	static volatile int32_t x743 = 0;
	int64_t x744 = -1LL;

    t178 = ((x741&(x742|x743))/x744);

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x745 = INT64_MAX;
	int16_t x746 = INT16_MIN;
	int64_t x747 = 203310774464929LL;
	int8_t x748 = 29;

    t179 = ((x745&(x746|x747))/x748);

    if (t179 != 318047311615681232LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x749 = 425U;
	static int64_t x750 = -7322220LL;
	static int64_t x751 = INT64_MAX;
	static int32_t x752 = INT32_MIN;
	int64_t t180 = 5810253748LL;

    t180 = ((x749&(x750|x751))/x752);

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x753 = 650700176LLU;
	static int16_t x755 = INT16_MIN;
	uint64_t t181 = 2LLU;

    t181 = ((x753&(x754|x755))/x756);

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x758 = -57;
	uint16_t x759 = 8U;
	static volatile uint8_t x760 = 2U;
	volatile int32_t t182 = -4313;

    t182 = ((x757&(x758|x759))/x760);

    if (t182 != -64) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x761 = 4U;
	static volatile int8_t x762 = INT8_MIN;
	uint8_t x763 = 0U;
	static int64_t x764 = 132498223LL;
	int64_t t183 = 2763117401502LL;

    t183 = ((x761&(x762|x763))/x764);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x765 = 837U;
	uint64_t x766 = 228039LLU;
	int16_t x767 = -1;
	uint16_t x768 = 4U;
	uint64_t t184 = 130009908LLU;

    t184 = ((x765&(x766|x767))/x768);

    if (t184 != 209LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x769 = INT16_MIN;
	int32_t x770 = INT32_MIN;
	int16_t x771 = -1;
	int8_t x772 = INT8_MIN;

    t185 = ((x769&(x770|x771))/x772);

    if (t185 != 256) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x773 = INT8_MIN;
	static uint64_t x774 = UINT64_MAX;
	static uint16_t x775 = 13145U;
	int16_t x776 = INT16_MAX;
	uint64_t t186 = 156989701622648608LLU;

    t186 = ((x773&(x774|x775))/x776);

    if (t186 != 562967133814799LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x777 = 1U;
	int16_t x779 = INT16_MIN;
	uint32_t x780 = UINT32_MAX;
	volatile uint32_t t187 = 87U;

    t187 = ((x777&(x778|x779))/x780);

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x781 = -1;
	volatile int64_t x782 = INT64_MAX;
	int64_t x783 = INT64_MIN;
	static int8_t x784 = 1;
	static int64_t t188 = 6LL;

    t188 = ((x781&(x782|x783))/x784);

    if (t188 != -1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x785 = -1;
	uint16_t x787 = 4051U;
	int8_t x788 = INT8_MIN;

    t189 = ((x785&(x786|x787))/x788);

    if (t189 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x789 = 34085;
	volatile int8_t x790 = INT8_MAX;
	int16_t x791 = INT16_MIN;
	static volatile uint64_t x792 = 5408800408566037LLU;
	volatile uint64_t t190 = 9LLU;

    t190 = ((x789&(x790|x791))/x792);

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x794 = -1;
	int64_t x795 = 17LL;
	volatile int64_t t191 = 0LL;

    t191 = ((x793&(x794|x795))/x796);

    if (t191 != -7LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x797 = -1;
	static uint32_t x799 = 61690U;
	int64_t x800 = INT64_MAX;
	int64_t t192 = -36425722895115040LL;

    t192 = ((x797&(x798|x799))/x800);

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x802 = UINT64_MAX;
	int8_t x803 = INT8_MAX;

    t193 = ((x801&(x802|x803))/x804);

    if (t193 != 1LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x805 = INT16_MIN;
	int32_t x806 = -379;
	static int16_t x807 = INT16_MIN;
	int16_t x808 = -11766;
	static volatile int32_t t194 = -13791226;

    t194 = ((x805&(x806|x807))/x808);

    if (t194 != 2) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x809 = INT8_MIN;
	uint32_t x810 = UINT32_MAX;

    t195 = ((x809&(x810|x811))/x812);

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x813 = -1;
	int8_t x814 = INT8_MIN;
	volatile int16_t x815 = INT16_MIN;
	int64_t t196 = 606180324133LL;

    t196 = ((x813&(x814|x815))/x816);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x817 = -5;
	volatile int8_t x819 = INT8_MIN;
	uint16_t x820 = UINT16_MAX;
	static volatile int32_t t197 = 671935;

    t197 = ((x817&(x818|x819))/x820);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x821 = 60U;
	int8_t x823 = INT8_MIN;
	int32_t x824 = INT32_MAX;
	int32_t t198 = 225839;

    t198 = ((x821&(x822|x823))/x824);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int8_t x825 = INT8_MAX;
	uint16_t x828 = UINT16_MAX;
	int32_t t199 = 4;

    t199 = ((x825&(x826|x827))/x828);

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

