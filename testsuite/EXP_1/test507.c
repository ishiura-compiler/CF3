
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

int8_t x2 = -1;
volatile int64_t x11 = INT64_MIN;
int16_t x12 = INT16_MAX;
uint8_t x17 = UINT8_MAX;
static uint16_t x26 = 9U;
uint32_t x34 = 24896426U;
int64_t x36 = INT64_MAX;
volatile uint8_t x37 = 1U;
static volatile int8_t x39 = -22;
volatile int16_t x47 = INT16_MIN;
static volatile int16_t x49 = INT16_MIN;
static volatile int64_t x51 = -11066285LL;
uint16_t x53 = 584U;
volatile uint16_t x57 = 3U;
volatile uint16_t x68 = 25U;
static int8_t x75 = INT8_MIN;
volatile int8_t x80 = INT8_MAX;
int64_t x85 = 1LL;
uint8_t x86 = 43U;
volatile int64_t t17 = 486236015LL;
uint16_t x90 = 25U;
uint16_t x96 = 0U;
int64_t x99 = -3554451755316LL;
int32_t t20 = 235727;
int8_t x107 = -61;
uint8_t x117 = UINT8_MAX;
uint8_t x118 = 3U;
static uint8_t x121 = 104U;
int16_t x124 = -1;
static uint16_t x131 = UINT16_MAX;
volatile int32_t t26 = 1104021;
static int8_t x133 = -1;
int64_t x151 = 228305154204534LL;
uint16_t x152 = UINT16_MAX;
volatile int64_t x168 = INT64_MIN;
int8_t x174 = 57;
volatile int16_t x176 = INT16_MIN;
volatile int32_t t35 = -24446625;
int8_t x185 = 22;
static uint16_t x186 = 0U;
int64_t x190 = INT64_MIN;
int8_t x193 = -1;
static uint64_t x195 = UINT64_MAX;
volatile uint64_t t39 = 345244270LLU;
int64_t x219 = INT64_MIN;
int32_t x222 = -1;
int8_t x223 = 3;
uint8_t x225 = 23U;
int64_t x226 = 236099255741LL;
int16_t x246 = 9800;
int64_t x247 = 312808801657646599LL;
int64_t x255 = INT64_MIN;
int64_t x256 = -6091LL;
uint64_t t49 = 30LLU;
int64_t x283 = INT64_MAX;
int32_t x286 = -1;
int32_t x297 = INT32_MIN;
int64_t x298 = -217603592LL;
volatile uint64_t t55 = 1118211393022169LLU;
int16_t x316 = INT16_MIN;
static int32_t x328 = -1;
int8_t x332 = 49;
static int32_t t60 = -169512675;
int8_t x333 = -1;
int8_t x335 = -9;
int8_t x345 = -1;
int8_t x346 = INT8_MIN;
static int32_t t64 = -454404;
volatile int32_t x356 = -222014635;
static int8_t x363 = INT8_MAX;
int8_t x364 = INT8_MIN;
int32_t t67 = 12746903;
volatile int32_t x371 = -1;
int64_t t69 = -34471499743819865LL;
uint64_t x381 = 488735LLU;
volatile int32_t t71 = -29175730;
int8_t x386 = INT8_MAX;
int16_t x395 = -636;
volatile uint64_t t73 = 171474790207487442LLU;
int16_t x398 = INT16_MIN;
uint8_t x400 = 15U;
static uint16_t x437 = UINT16_MAX;
uint32_t x439 = 881U;
int16_t x440 = INT16_MAX;
volatile int32_t t77 = 13;
volatile int32_t x441 = -197125;
uint32_t x442 = UINT32_MAX;
static uint32_t x448 = 63945320U;
int64_t x460 = INT64_MIN;
uint16_t x462 = 463U;
uint16_t x465 = 30U;
uint32_t x478 = UINT32_MAX;
uint8_t x479 = 9U;
int32_t x489 = INT32_MIN;
int32_t t89 = 5253239;
static volatile uint64_t x493 = 90141732583LLU;
int32_t t90 = INT32_MIN;
uint64_t x498 = 1776324602002214LLU;
volatile int64_t t91 = -27351LL;
int16_t x516 = INT16_MIN;
uint64_t x521 = 25910LLU;
static int8_t x522 = -1;
int16_t x524 = INT16_MIN;
static uint64_t x531 = UINT64_MAX;
volatile uint64_t x533 = 95184989434633LLU;
int8_t x536 = 1;
uint64_t x547 = 60388581642LLU;
uint16_t x554 = 2U;
volatile int64_t x556 = INT64_MIN;
uint16_t x564 = UINT16_MAX;
int32_t t103 = -1985833;
int16_t x566 = INT16_MAX;
int64_t x570 = 10632LL;
int8_t x582 = INT8_MAX;
uint32_t t107 = UINT32_MAX;
static int16_t x585 = -1;
int32_t t110 = 691957;
uint64_t x597 = UINT64_MAX;
int8_t x610 = 5;
uint64_t x611 = UINT64_MAX;
int64_t x612 = INT64_MAX;
static uint32_t x614 = 831U;
int16_t x615 = 1;
int8_t x616 = 0;
int32_t t114 = -236984782;
uint8_t x618 = 88U;
int8_t x620 = INT8_MIN;
static int8_t x627 = 12;
volatile int32_t t118 = 148676767;
static int32_t x650 = -1;
int64_t x660 = 475734629842LL;
volatile uint16_t x666 = UINT16_MAX;
static volatile int16_t x668 = INT16_MAX;
static uint16_t x669 = 582U;
static int32_t x671 = -1;
static volatile uint64_t t123 = 199265LLU;
volatile int16_t x682 = INT16_MIN;
int64_t x683 = INT64_MAX;
int64_t t125 = -5792909LL;
int64_t x691 = 193553450912LL;
static int8_t x700 = -1;
volatile int32_t t128 = INT32_MIN;
int8_t x708 = INT8_MIN;
int32_t x714 = 49;
uint32_t t131 = 219441702U;
int32_t x717 = 414;
static uint32_t x721 = UINT32_MAX;
uint8_t x723 = 13U;
static uint64_t x724 = 1140441730043LLU;
uint16_t x728 = 579U;
volatile uint64_t t136 = 10371210014LLU;
int32_t x746 = -1;
static volatile int32_t x747 = -14;
volatile int64_t x748 = INT64_MAX;
int32_t x749 = INT32_MAX;
int8_t x753 = -1;
int8_t x754 = -1;
int8_t x774 = INT8_MIN;
int64_t x775 = 1410708LL;
int16_t x776 = -1;
int32_t t141 = 3;
uint8_t x788 = UINT8_MAX;
volatile int32_t t143 = 0;
int32_t x793 = INT32_MIN;
static int16_t x796 = INT16_MIN;
uint16_t x798 = UINT16_MAX;
int16_t x801 = 6234;
uint64_t x803 = 1954043909264LLU;
int32_t t148 = 12;
static int64_t x812 = INT64_MAX;
int64_t t149 = -11242LL;
static volatile uint64_t x826 = 15770590897LLU;
uint32_t x828 = 9U;
uint16_t x833 = UINT16_MAX;
static int64_t x837 = 1941798769139LL;
uint64_t x839 = UINT64_MAX;
volatile int32_t x843 = INT32_MAX;
int32_t x848 = -1;
uint8_t x869 = 24U;
static volatile int64_t x871 = INT64_MIN;
int32_t x873 = -1;
int8_t x874 = -1;
static uint64_t x881 = 3735097651LLU;
static volatile int16_t x896 = -1;
volatile int32_t t167 = -900196;
volatile int8_t x907 = INT8_MIN;
uint32_t x928 = UINT32_MAX;
static uint8_t x932 = 18U;
volatile int32_t t172 = 721560762;
int8_t x939 = -15;
int32_t x944 = -1;
static volatile int32_t x964 = INT32_MAX;
uint16_t x973 = 73U;
static int8_t x974 = INT8_MIN;
static int16_t x975 = INT16_MAX;
int16_t x981 = INT16_MAX;
static int64_t x984 = INT64_MIN;
uint64_t x994 = 93LLU;
static int16_t x995 = -1;
int32_t t184 = -16594;
uint64_t x1001 = UINT64_MAX;
uint64_t x1003 = UINT64_MAX;
uint32_t x1004 = 299U;
int16_t x1014 = INT16_MIN;
int64_t x1019 = INT64_MIN;
int8_t x1021 = INT8_MIN;
static uint8_t x1030 = 7U;
uint32_t x1048 = UINT32_MAX;
uint32_t x1059 = 54947U;
int64_t x1060 = -1LL;


void f0(void) {
    	int8_t x1 = -3;
	static int16_t x3 = -6763;
	volatile int32_t x4 = INT32_MAX;
	static int32_t t0 = INT32_MAX;

    t0 = (((x1*x2)>x3)*x4);

    if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x9 = -8;
	volatile int8_t x10 = -12;
	static int32_t t1 = -45612;

    t1 = (((x9*x10)>x11)*x12);

    if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x13 = INT8_MIN;
	int16_t x14 = INT16_MIN;
	uint8_t x15 = UINT8_MAX;
	volatile int16_t x16 = 86;
	volatile int32_t t2 = 368752;

    t2 = (((x13*x14)>x15)*x16);

    if (t2 != 86) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x18 = 20246979LLU;
	static uint32_t x19 = 27441878U;
	int64_t x20 = INT64_MIN;
	volatile int64_t t3 = INT64_MIN;

    t3 = (((x17*x18)>x19)*x20);

    if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = -1;
	int64_t x22 = 6LL;
	static uint8_t x23 = 6U;
	uint32_t x24 = 179648218U;
	volatile uint32_t t4 = 263620467U;

    t4 = (((x21*x22)>x23)*x24);

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = -9199;
	int64_t x27 = 2434LL;
	static uint16_t x28 = 518U;
	int32_t t5 = -6313354;

    t5 = (((x25*x26)>x27)*x28);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x33 = UINT64_MAX;
	static volatile int32_t x35 = INT32_MAX;
	int64_t t6 = INT64_MAX;

    t6 = (((x33*x34)>x35)*x36);

    if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x38 = UINT16_MAX;
	uint32_t x40 = 39U;
	volatile uint32_t t7 = 52040U;

    t7 = (((x37*x38)>x39)*x40);

    if (t7 != 39U) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x41 = 44U;
	int32_t x42 = 6;
	int32_t x43 = -1;
	uint64_t x44 = 8124346LLU;
	static uint64_t t8 = 2258287458980LLU;

    t8 = (((x41*x42)>x43)*x44);

    if (t8 != 8124346LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x45 = INT8_MAX;
	int8_t x46 = -1;
	static int64_t x48 = -1LL;
	static volatile int64_t t9 = -2LL;

    t9 = (((x45*x46)>x47)*x48);

    if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x50 = 4865580U;
	int32_t x52 = INT32_MIN;
	int32_t t10 = INT32_MIN;

    t10 = (((x49*x50)>x51)*x52);

    if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x54 = UINT8_MAX;
	int64_t x55 = -1395271256532316LL;
	uint32_t x56 = UINT32_MAX;
	volatile uint32_t t11 = UINT32_MAX;

    t11 = (((x53*x54)>x55)*x56);

    if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x58 = 1U;
	volatile int32_t x59 = -1;
	volatile int64_t x60 = 122041554094209735LL;
	volatile int64_t t12 = 25785702LL;

    t12 = (((x57*x58)>x59)*x60);

    if (t12 != 122041554094209735LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x61 = 1U;
	static volatile uint64_t x62 = 21982591038354LLU;
	int64_t x63 = -1LL;
	static int16_t x64 = 4;
	int32_t t13 = -172;

    t13 = (((x61*x62)>x63)*x64);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x65 = INT8_MIN;
	static int32_t x66 = 729625;
	int32_t x67 = -308791;
	volatile int32_t t14 = 999854;

    t14 = (((x65*x66)>x67)*x68);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x73 = -1;
	uint8_t x74 = UINT8_MAX;
	static volatile int32_t x76 = INT32_MIN;
	volatile int32_t t15 = 2190;

    t15 = (((x73*x74)>x75)*x76);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x77 = -3;
	uint8_t x78 = 0U;
	uint16_t x79 = 6516U;
	volatile int32_t t16 = 981569683;

    t16 = (((x77*x78)>x79)*x80);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x87 = UINT8_MAX;
	int64_t x88 = 3528237112517454LL;

    t17 = (((x85*x86)>x87)*x88);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x89 = -1LL;
	uint64_t x91 = 790LLU;
	int32_t x92 = INT32_MAX;
	static volatile int32_t t18 = INT32_MAX;

    t18 = (((x89*x90)>x91)*x92);

    if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x93 = 1U;
	int32_t x94 = 13205266;
	int16_t x95 = 78;
	int32_t t19 = 1455296;

    t19 = (((x93*x94)>x95)*x96);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x97 = 2776U;
	int32_t x98 = 0;
	static int16_t x100 = -29;

    t20 = (((x97*x98)>x99)*x100);

    if (t20 != -29) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x101 = 13834241;
	int8_t x102 = INT8_MIN;
	int64_t x103 = -94751929658114649LL;
	int16_t x104 = -1;
	volatile int32_t t21 = 475;

    t21 = (((x101*x102)>x103)*x104);

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x105 = 38787LLU;
	uint64_t x106 = 256821663LLU;
	static int32_t x108 = -244;
	volatile int32_t t22 = 0;

    t22 = (((x105*x106)>x107)*x108);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x113 = UINT32_MAX;
	int32_t x114 = INT32_MAX;
	int64_t x115 = INT64_MAX;
	uint8_t x116 = 6U;
	volatile int32_t t23 = -23;

    t23 = (((x113*x114)>x115)*x116);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x119 = UINT64_MAX;
	static uint32_t x120 = 19418316U;
	static volatile uint32_t t24 = 4U;

    t24 = (((x117*x118)>x119)*x120);

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x122 = 54;
	uint8_t x123 = 0U;
	volatile int32_t t25 = -3067;

    t25 = (((x121*x122)>x123)*x124);

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x129 = INT16_MAX;
	int32_t x130 = -1;
	uint8_t x132 = 3U;

    t26 = (((x129*x130)>x131)*x132);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x134 = -12500;
	static int16_t x135 = 0;
	static int8_t x136 = -1;
	volatile int32_t t27 = 785;

    t27 = (((x133*x134)>x135)*x136);

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x149 = 29;
	uint64_t x150 = 3572372LLU;
	volatile int32_t t28 = 0;

    t28 = (((x149*x150)>x151)*x152);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x153 = -10;
	static uint32_t x154 = 10U;
	int16_t x155 = 9;
	volatile uint8_t x156 = 83U;
	volatile int32_t t29 = 55;

    t29 = (((x153*x154)>x155)*x156);

    if (t29 != 83) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x157 = 17;
	int32_t x158 = -1392416;
	static uint8_t x159 = 1U;
	uint64_t x160 = UINT64_MAX;
	static uint64_t t30 = 8213LLU;

    t30 = (((x157*x158)>x159)*x160);

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x161 = -19;
	static int8_t x162 = INT8_MIN;
	uint16_t x163 = 99U;
	volatile int8_t x164 = INT8_MAX;
	int32_t t31 = 49389831;

    t31 = (((x161*x162)>x163)*x164);

    if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x165 = UINT8_MAX;
	uint32_t x166 = 15240U;
	int32_t x167 = INT32_MAX;
	volatile int64_t t32 = 3839240210382586459LL;

    t32 = (((x165*x166)>x167)*x168);

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x169 = -365;
	int8_t x170 = INT8_MIN;
	int16_t x171 = INT16_MIN;
	int16_t x172 = -1;
	volatile int32_t t33 = -133748598;

    t33 = (((x169*x170)>x171)*x172);

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x173 = 0U;
	static int32_t x175 = -1172611;
	volatile int32_t t34 = 4;

    t34 = (((x173*x174)>x175)*x176);

    if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x177 = -6964484435008LL;
	int16_t x178 = -1;
	uint8_t x179 = 9U;
	volatile int32_t x180 = -1;

    t35 = (((x177*x178)>x179)*x180);

    if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x181 = 2349009U;
	volatile int32_t x182 = INT32_MAX;
	int16_t x183 = -2841;
	int8_t x184 = INT8_MAX;
	volatile int32_t t36 = 4412;

    t36 = (((x181*x182)>x183)*x184);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x187 = INT64_MIN;
	int64_t x188 = -75870LL;
	int64_t t37 = 2935349LL;

    t37 = (((x185*x186)>x187)*x188);

    if (t37 != -75870LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x189 = 0;
	static volatile uint64_t x191 = 140LLU;
	int8_t x192 = -1;
	volatile int32_t t38 = -14;

    t38 = (((x189*x190)>x191)*x192);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x194 = 30U;
	uint64_t x196 = 378951867326464LLU;

    t39 = (((x193*x194)>x195)*x196);

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x217 = -1;
	uint32_t x218 = UINT32_MAX;
	uint8_t x220 = UINT8_MAX;
	volatile int32_t t40 = 0;

    t40 = (((x217*x218)>x219)*x220);

    if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int8_t x221 = -1;
	static volatile uint64_t x224 = 87LLU;
	volatile uint64_t t41 = 33211408LLU;

    t41 = (((x221*x222)>x223)*x224);

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x227 = 1U;
	volatile int16_t x228 = INT16_MIN;
	int32_t t42 = -559116520;

    t42 = (((x225*x226)>x227)*x228);

    if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint8_t x245 = UINT8_MAX;
	int64_t x248 = -1LL;
	volatile int64_t t43 = 52125LL;

    t43 = (((x245*x246)>x247)*x248);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x249 = 2U;
	int8_t x250 = -51;
	int64_t x251 = -1LL;
	uint32_t x252 = UINT32_MAX;
	volatile uint32_t t44 = 16206891U;

    t44 = (((x249*x250)>x251)*x252);

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x253 = 2232143107517278083LLU;
	int8_t x254 = INT8_MAX;
	static int64_t t45 = -147LL;

    t45 = (((x253*x254)>x255)*x256);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x257 = 1;
	int64_t x258 = -95456821LL;
	volatile uint16_t x259 = 1U;
	int64_t x260 = INT64_MIN;
	int64_t t46 = -409751449956383112LL;

    t46 = (((x257*x258)>x259)*x260);

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x265 = 238LL;
	volatile int8_t x266 = 1;
	uint64_t x267 = 413139735562085620LLU;
	int16_t x268 = -787;
	volatile int32_t t47 = 118;

    t47 = (((x265*x266)>x267)*x268);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x269 = 62888913U;
	int32_t x270 = INT32_MAX;
	int64_t x271 = -1LL;
	int8_t x272 = -42;
	volatile int32_t t48 = -3826079;

    t48 = (((x269*x270)>x271)*x272);

    if (t48 != -42) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x273 = INT16_MAX;
	volatile uint64_t x274 = 108LLU;
	int16_t x275 = INT16_MIN;
	uint64_t x276 = UINT64_MAX;

    t49 = (((x273*x274)>x275)*x276);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x281 = UINT64_MAX;
	int16_t x282 = INT16_MIN;
	static int8_t x284 = INT8_MAX;
	volatile int32_t t50 = 4545;

    t50 = (((x281*x282)>x283)*x284);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint8_t x285 = 0U;
	uint16_t x287 = 145U;
	int8_t x288 = -1;
	volatile int32_t t51 = 7657569;

    t51 = (((x285*x286)>x287)*x288);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x293 = 23;
	volatile int16_t x294 = INT16_MAX;
	uint16_t x295 = UINT16_MAX;
	uint8_t x296 = UINT8_MAX;
	static int32_t t52 = -15;

    t52 = (((x293*x294)>x295)*x296);

    if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x299 = INT64_MAX;
	int8_t x300 = 33;
	volatile int32_t t53 = 2524;

    t53 = (((x297*x298)>x299)*x300);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint16_t x305 = UINT16_MAX;
	uint32_t x306 = 1U;
	int64_t x307 = -1LL;
	volatile int32_t x308 = 1;
	int32_t t54 = -15849324;

    t54 = (((x305*x306)>x307)*x308);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x309 = -1LL;
	static int32_t x310 = -1;
	int16_t x311 = 13869;
	uint64_t x312 = 31LLU;

    t55 = (((x309*x310)>x311)*x312);

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x313 = UINT64_MAX;
	int32_t x314 = -1;
	volatile int32_t x315 = INT32_MAX;
	static volatile int32_t t56 = -4415;

    t56 = (((x313*x314)>x315)*x316);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x317 = 50504280LLU;
	uint16_t x318 = 66U;
	int32_t x319 = 1672551;
	static uint16_t x320 = UINT16_MAX;
	int32_t t57 = -32;

    t57 = (((x317*x318)>x319)*x320);

    if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x321 = 96U;
	uint16_t x322 = UINT16_MAX;
	volatile int16_t x323 = -1;
	int32_t x324 = -13472;
	volatile int32_t t58 = -493665;

    t58 = (((x321*x322)>x323)*x324);

    if (t58 != -13472) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint8_t x325 = 12U;
	int8_t x326 = 0;
	int64_t x327 = INT64_MAX;
	static int32_t t59 = -7901;

    t59 = (((x325*x326)>x327)*x328);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x329 = 5032874U;
	uint16_t x330 = UINT16_MAX;
	volatile int64_t x331 = -138792420116830LL;

    t60 = (((x329*x330)>x331)*x332);

    if (t60 != 49) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x334 = 14LL;
	uint8_t x336 = UINT8_MAX;
	volatile int32_t t61 = -1225960;

    t61 = (((x333*x334)>x335)*x336);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x341 = INT8_MIN;
	volatile uint8_t x342 = 54U;
	uint64_t x343 = 0LLU;
	volatile int16_t x344 = 7;
	int32_t t62 = 31336;

    t62 = (((x341*x342)>x343)*x344);

    if (t62 != 7) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x347 = -1;
	static volatile int64_t x348 = INT64_MAX;
	int64_t t63 = INT64_MAX;

    t63 = (((x345*x346)>x347)*x348);

    if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x349 = 53U;
	volatile int32_t x350 = INT32_MAX;
	static uint64_t x351 = 185117503LLU;
	uint16_t x352 = UINT16_MAX;

    t64 = (((x349*x350)>x351)*x352);

    if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x353 = 2557161056679LLU;
	volatile int64_t x354 = INT64_MIN;
	int16_t x355 = -32;
	volatile int32_t t65 = -8;

    t65 = (((x353*x354)>x355)*x356);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x361 = 0;
	int64_t x362 = 833153639305009717LL;
	int32_t t66 = 0;

    t66 = (((x361*x362)>x363)*x364);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x365 = INT16_MAX;
	int8_t x366 = -30;
	uint16_t x367 = 8570U;
	int8_t x368 = INT8_MIN;

    t67 = (((x365*x366)>x367)*x368);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x369 = 1;
	static int16_t x370 = -1;
	int8_t x372 = 1;
	int32_t t68 = -2170203;

    t68 = (((x369*x370)>x371)*x372);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x373 = -1;
	int16_t x374 = -1;
	uint64_t x375 = UINT64_MAX;
	int64_t x376 = 12625771LL;

    t69 = (((x373*x374)>x375)*x376);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x377 = -1;
	int64_t x378 = -1LL;
	int16_t x379 = INT16_MIN;
	int8_t x380 = -1;
	volatile int32_t t70 = -21;

    t70 = (((x377*x378)>x379)*x380);

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint32_t x382 = UINT32_MAX;
	volatile uint64_t x383 = 15650266229198275LLU;
	volatile uint8_t x384 = 102U;

    t71 = (((x381*x382)>x383)*x384);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x385 = UINT32_MAX;
	int64_t x387 = -475036LL;
	static int64_t x388 = INT64_MAX;
	volatile int64_t t72 = INT64_MAX;

    t72 = (((x385*x386)>x387)*x388);

    if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x393 = INT16_MIN;
	uint8_t x394 = 3U;
	uint64_t x396 = 406275318489094222LLU;

    t73 = (((x393*x394)>x395)*x396);

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x397 = 55;
	volatile int8_t x399 = INT8_MIN;
	volatile int32_t t74 = -991;

    t74 = (((x397*x398)>x399)*x400);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x429 = INT8_MIN;
	static uint8_t x430 = 0U;
	volatile uint64_t x431 = 319303635LLU;
	uint16_t x432 = UINT16_MAX;
	static int32_t t75 = 600082350;

    t75 = (((x429*x430)>x431)*x432);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint8_t x433 = UINT8_MAX;
	int64_t x434 = 76598740LL;
	int16_t x435 = -1110;
	int16_t x436 = -1;
	volatile int32_t t76 = 36474480;

    t76 = (((x433*x434)>x435)*x436);

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x438 = INT16_MIN;

    t77 = (((x437*x438)>x439)*x440);

    if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x443 = 275747016LLU;
	int8_t x444 = INT8_MIN;
	static volatile int32_t t78 = -825241716;

    t78 = (((x441*x442)>x443)*x444);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x445 = -532437395;
	int32_t x446 = -1;
	static uint32_t x447 = 1945735U;
	static uint32_t t79 = 0U;

    t79 = (((x445*x446)>x447)*x448);

    if (t79 != 63945320U) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x449 = -1;
	uint32_t x450 = 127357U;
	uint64_t x451 = UINT64_MAX;
	int32_t x452 = -19;
	volatile int32_t t80 = 2;

    t80 = (((x449*x450)>x451)*x452);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x453 = 3U;
	uint8_t x454 = 29U;
	static uint32_t x455 = 842794U;
	int64_t x456 = INT64_MIN;
	int64_t t81 = -198331081146LL;

    t81 = (((x453*x454)>x455)*x456);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x457 = INT8_MIN;
	static int8_t x458 = INT8_MAX;
	int32_t x459 = -1;
	static int64_t t82 = 27LL;

    t82 = (((x457*x458)>x459)*x460);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x461 = UINT64_MAX;
	uint32_t x463 = 5089U;
	uint16_t x464 = UINT16_MAX;
	int32_t t83 = -4;

    t83 = (((x461*x462)>x463)*x464);

    if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x466 = 361962326U;
	int16_t x467 = 1;
	static volatile int64_t x468 = -1LL;
	int64_t t84 = 1719010LL;

    t84 = (((x465*x466)>x467)*x468);

    if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x469 = INT8_MAX;
	static uint16_t x470 = UINT16_MAX;
	static uint16_t x471 = UINT16_MAX;
	static volatile int8_t x472 = 1;
	int32_t t85 = -13110;

    t85 = (((x469*x470)>x471)*x472);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x473 = 1708U;
	static int64_t x474 = 897141340990LL;
	int32_t x475 = INT32_MIN;
	static int64_t x476 = INT64_MIN;
	static volatile int64_t t86 = INT64_MIN;

    t86 = (((x473*x474)>x475)*x476);

    if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x477 = -1LL;
	static volatile uint8_t x480 = 16U;
	volatile int32_t t87 = 3;

    t87 = (((x477*x478)>x479)*x480);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int8_t x481 = INT8_MIN;
	static uint32_t x482 = 12U;
	int32_t x483 = INT32_MIN;
	int8_t x484 = INT8_MIN;
	int32_t t88 = 22933;

    t88 = (((x481*x482)>x483)*x484);

    if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x490 = 701285668U;
	int16_t x491 = INT16_MIN;
	static uint8_t x492 = 22U;

    t89 = (((x489*x490)>x491)*x492);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x494 = INT8_MIN;
	static int64_t x495 = INT64_MIN;
	int32_t x496 = INT32_MIN;

    t90 = (((x493*x494)>x495)*x496);

    if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x497 = UINT32_MAX;
	int16_t x499 = -1;
	int64_t x500 = 29262747031925LL;

    t91 = (((x497*x498)>x499)*x500);

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x505 = -1;
	uint8_t x506 = 121U;
	uint64_t x507 = 384693LLU;
	int64_t x508 = INT64_MAX;
	volatile int64_t t92 = INT64_MAX;

    t92 = (((x505*x506)>x507)*x508);

    if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x513 = -1;
	int64_t x514 = 18946886901677227LL;
	static uint8_t x515 = UINT8_MAX;
	int32_t t93 = -429849;

    t93 = (((x513*x514)>x515)*x516);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x517 = 4;
	int8_t x518 = -41;
	int8_t x519 = 13;
	int16_t x520 = 1;
	int32_t t94 = 563920;

    t94 = (((x517*x518)>x519)*x520);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x523 = 1;
	static int32_t t95 = -339845;

    t95 = (((x521*x522)>x523)*x524);

    if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x529 = -1LL;
	uint32_t x530 = UINT32_MAX;
	int8_t x532 = INT8_MIN;
	volatile int32_t t96 = 89857036;

    t96 = (((x529*x530)>x531)*x532);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x534 = 945013098U;
	uint8_t x535 = 109U;
	static volatile int32_t t97 = -1;

    t97 = (((x533*x534)>x535)*x536);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x537 = UINT64_MAX;
	static int64_t x538 = 182LL;
	int64_t x539 = 98LL;
	static int32_t x540 = INT32_MIN;
	int32_t t98 = INT32_MIN;

    t98 = (((x537*x538)>x539)*x540);

    if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x541 = 10173;
	int16_t x542 = INT16_MIN;
	int64_t x543 = INT64_MIN;
	uint8_t x544 = UINT8_MAX;
	int32_t t99 = -7;

    t99 = (((x541*x542)>x543)*x544);

    if (t99 != 255) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x545 = 1527U;
	int32_t x546 = 34006;
	int64_t x548 = INT64_MIN;
	int64_t t100 = -30597520LL;

    t100 = (((x545*x546)>x547)*x548);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x549 = INT8_MIN;
	uint32_t x550 = 339701960U;
	uint64_t x551 = 14511932520LLU;
	int16_t x552 = -1;
	volatile int32_t t101 = 441;

    t101 = (((x549*x550)>x551)*x552);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x553 = -1;
	static uint16_t x555 = 201U;
	volatile int64_t t102 = 1027227118989LL;

    t102 = (((x553*x554)>x555)*x556);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x561 = 250289995050LL;
	int8_t x562 = INT8_MIN;
	volatile int8_t x563 = INT8_MIN;

    t103 = (((x561*x562)>x563)*x564);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint32_t x565 = 21512537U;
	volatile uint16_t x567 = 117U;
	int16_t x568 = 0;
	volatile int32_t t104 = -216586;

    t104 = (((x565*x566)>x567)*x568);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x569 = INT8_MIN;
	int16_t x571 = INT16_MIN;
	int16_t x572 = INT16_MAX;
	int32_t t105 = -242;

    t105 = (((x569*x570)>x571)*x572);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint64_t x573 = 9078226282957LLU;
	uint64_t x574 = 35134792452001LLU;
	uint64_t x575 = 767LLU;
	uint32_t x576 = UINT32_MAX;
	static uint32_t t106 = UINT32_MAX;

    t106 = (((x573*x574)>x575)*x576);

    if (t106 != UINT32_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x581 = UINT64_MAX;
	int64_t x583 = INT64_MAX;
	static volatile uint32_t x584 = UINT32_MAX;

    t107 = (((x581*x582)>x583)*x584);

    if (t107 != UINT32_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x586 = 1LLU;
	uint32_t x587 = UINT32_MAX;
	uint16_t x588 = 20U;
	volatile int32_t t108 = 190001;

    t108 = (((x585*x586)>x587)*x588);

    if (t108 != 20) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x589 = INT16_MIN;
	int16_t x590 = 0;
	int16_t x591 = 46;
	static uint32_t x592 = UINT32_MAX;
	uint32_t t109 = 1U;

    t109 = (((x589*x590)>x591)*x592);

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x593 = -1;
	uint16_t x594 = 8U;
	static uint8_t x595 = 109U;
	int16_t x596 = -1;

    t110 = (((x593*x594)>x595)*x596);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x598 = INT64_MIN;
	int32_t x599 = -1;
	int64_t x600 = -1LL;
	volatile int64_t t111 = -2858254048758656092LL;

    t111 = (((x597*x598)>x599)*x600);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x601 = UINT64_MAX;
	uint64_t x602 = 232LLU;
	int32_t x603 = INT32_MAX;
	uint32_t x604 = UINT32_MAX;
	static uint32_t t112 = UINT32_MAX;

    t112 = (((x601*x602)>x603)*x604);

    if (t112 != UINT32_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x609 = UINT16_MAX;
	volatile int64_t t113 = 106168339320143106LL;

    t113 = (((x609*x610)>x611)*x612);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x613 = -1;

    t114 = (((x613*x614)>x615)*x616);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x617 = 7;
	volatile int16_t x619 = INT16_MIN;
	int32_t t115 = -4444;

    t115 = (((x617*x618)>x619)*x620);

    if (t115 != -128) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint8_t x625 = 2U;
	volatile int64_t x626 = -1LL;
	int32_t x628 = INT32_MIN;
	volatile int32_t t116 = 24;

    t116 = (((x625*x626)>x627)*x628);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x633 = 235823LL;
	uint64_t x634 = UINT64_MAX;
	int64_t x635 = INT64_MIN;
	int64_t x636 = INT64_MIN;
	int64_t t117 = INT64_MIN;

    t117 = (((x633*x634)>x635)*x636);

    if (t117 != INT64_MIN) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x641 = 402725U;
	volatile int32_t x642 = 26;
	int64_t x643 = -1LL;
	uint8_t x644 = UINT8_MAX;

    t118 = (((x641*x642)>x643)*x644);

    if (t118 != 255) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x649 = 285545748159LLU;
	uint16_t x651 = UINT16_MAX;
	int16_t x652 = -31;
	volatile int32_t t119 = -324837;

    t119 = (((x649*x650)>x651)*x652);

    if (t119 != -31) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x657 = -7188347;
	uint8_t x658 = UINT8_MAX;
	int64_t x659 = 130029448728374LL;
	int64_t t120 = -3632822LL;

    t120 = (((x657*x658)>x659)*x660);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x661 = INT16_MAX;
	static uint64_t x662 = 4421569063116LLU;
	int8_t x663 = -1;
	volatile int16_t x664 = -1558;
	int32_t t121 = 0;

    t121 = (((x661*x662)>x663)*x664);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x665 = INT8_MIN;
	volatile int32_t x667 = INT32_MIN;
	static int32_t t122 = -39790;

    t122 = (((x665*x666)>x667)*x668);

    if (t122 != 32767) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x670 = UINT8_MAX;
	uint64_t x672 = 7LLU;

    t123 = (((x669*x670)>x671)*x672);

    if (t123 != 7LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x681 = -28;
	volatile int16_t x684 = INT16_MIN;
	int32_t t124 = -78;

    t124 = (((x681*x682)>x683)*x684);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x685 = -194126657257927LL;
	int8_t x686 = -3;
	static uint8_t x687 = 48U;
	volatile int64_t x688 = -4854LL;

    t125 = (((x685*x686)>x687)*x688);

    if (t125 != -4854LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int8_t x689 = INT8_MIN;
	int16_t x690 = INT16_MAX;
	uint32_t x692 = 180384U;
	volatile uint32_t t126 = 14830U;

    t126 = (((x689*x690)>x691)*x692);

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x697 = INT32_MIN;
	static volatile int64_t x698 = 359394LL;
	int32_t x699 = INT32_MAX;
	int32_t t127 = 407278;

    t127 = (((x697*x698)>x699)*x700);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x701 = INT8_MIN;
	uint64_t x702 = UINT64_MAX;
	uint8_t x703 = 2U;
	int32_t x704 = INT32_MIN;

    t128 = (((x701*x702)>x703)*x704);

    if (t128 != INT32_MIN) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x705 = -1;
	volatile uint64_t x706 = UINT64_MAX;
	int64_t x707 = -1LL;
	static volatile int32_t t129 = -22;

    t129 = (((x705*x706)>x707)*x708);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int32_t x709 = -1;
	uint8_t x710 = 2U;
	int64_t x711 = INT64_MIN;
	uint8_t x712 = 0U;
	int32_t t130 = 734;

    t130 = (((x709*x710)>x711)*x712);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x713 = UINT64_MAX;
	uint32_t x715 = 721U;
	uint32_t x716 = 3U;

    t131 = (((x713*x714)>x715)*x716);

    if (t131 != 3U) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x718 = -661455556919LL;
	static volatile uint16_t x719 = 1U;
	int16_t x720 = INT16_MAX;
	volatile int32_t t132 = -15;

    t132 = (((x717*x718)>x719)*x720);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x722 = INT8_MAX;
	uint64_t t133 = 5297LLU;

    t133 = (((x721*x722)>x723)*x724);

    if (t133 != 1140441730043LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x725 = -1;
	volatile uint8_t x726 = 15U;
	int8_t x727 = -6;
	static volatile int32_t t134 = -2;

    t134 = (((x725*x726)>x727)*x728);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x729 = UINT16_MAX;
	int16_t x730 = INT16_MIN;
	static int8_t x731 = 3;
	uint64_t x732 = 6760441161170208928LLU;
	volatile uint64_t t135 = 67800280672LLU;

    t135 = (((x729*x730)>x731)*x732);

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x741 = -3;
	int16_t x742 = 1367;
	volatile int32_t x743 = 227960524;
	static volatile uint64_t x744 = 64LLU;

    t136 = (((x741*x742)>x743)*x744);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int32_t x745 = -1;
	int64_t t137 = INT64_MAX;

    t137 = (((x745*x746)>x747)*x748);

    if (t137 != INT64_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x750 = -1;
	int16_t x751 = 12;
	int8_t x752 = -13;
	volatile int32_t t138 = 261515;

    t138 = (((x749*x750)>x751)*x752);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x755 = INT32_MIN;
	static int8_t x756 = INT8_MIN;
	volatile int32_t t139 = -3909;

    t139 = (((x753*x754)>x755)*x756);

    if (t139 != -128) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x769 = UINT8_MAX;
	static int16_t x770 = INT16_MAX;
	int64_t x771 = INT64_MIN;
	int64_t x772 = INT64_MIN;
	volatile int64_t t140 = INT64_MIN;

    t140 = (((x769*x770)>x771)*x772);

    if (t140 != INT64_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x773 = INT16_MIN;

    t141 = (((x773*x774)>x775)*x776);

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x781 = -1LL;
	static int8_t x782 = -14;
	volatile int16_t x783 = INT16_MIN;
	uint16_t x784 = UINT16_MAX;
	int32_t t142 = 5458;

    t142 = (((x781*x782)>x783)*x784);

    if (t142 != 65535) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x785 = INT16_MIN;
	uint16_t x786 = UINT16_MAX;
	static int16_t x787 = INT16_MAX;

    t143 = (((x785*x786)>x787)*x788);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x789 = 53718869U;
	int16_t x790 = INT16_MIN;
	static int16_t x791 = INT16_MIN;
	volatile int8_t x792 = -1;
	int32_t t144 = 22;

    t144 = (((x789*x790)>x791)*x792);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x794 = 0U;
	int64_t x795 = INT64_MIN;
	int32_t t145 = -44930307;

    t145 = (((x793*x794)>x795)*x796);

    if (t145 != -32768) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x797 = 45U;
	static int32_t x799 = 53128404;
	static volatile int16_t x800 = INT16_MAX;
	int32_t t146 = 4;

    t146 = (((x797*x798)>x799)*x800);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x802 = INT8_MIN;
	int32_t x804 = INT32_MAX;
	volatile int32_t t147 = INT32_MAX;

    t147 = (((x801*x802)>x803)*x804);

    if (t147 != INT32_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x805 = -3LL;
	int8_t x806 = -1;
	int8_t x807 = INT8_MAX;
	int8_t x808 = -7;

    t148 = (((x805*x806)>x807)*x808);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x809 = -1LL;
	int16_t x810 = -1;
	int32_t x811 = 75;

    t149 = (((x809*x810)>x811)*x812);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x813 = 19U;
	int64_t x814 = -72LL;
	static int32_t x815 = -1;
	uint8_t x816 = 1U;
	int32_t t150 = -3039189;

    t150 = (((x813*x814)>x815)*x816);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x817 = -489283775;
	uint64_t x818 = 1079829818LLU;
	int32_t x819 = -342992;
	int16_t x820 = -1;
	volatile int32_t t151 = -1781126;

    t151 = (((x817*x818)>x819)*x820);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint64_t x821 = UINT64_MAX;
	uint64_t x822 = 54040LLU;
	static uint32_t x823 = UINT32_MAX;
	volatile int64_t x824 = INT64_MAX;
	static volatile int64_t t152 = INT64_MAX;

    t152 = (((x821*x822)>x823)*x824);

    if (t152 != INT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x825 = -2997;
	int16_t x827 = 51;
	volatile uint32_t t153 = 15U;

    t153 = (((x825*x826)>x827)*x828);

    if (t153 != 9U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x834 = 45938622820941522LLU;
	volatile uint8_t x835 = 6U;
	int16_t x836 = INT16_MAX;
	volatile int32_t t154 = -32514610;

    t154 = (((x833*x834)>x835)*x836);

    if (t154 != 32767) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x838 = INT16_MIN;
	volatile int8_t x840 = -1;
	int32_t t155 = 2416289;

    t155 = (((x837*x838)>x839)*x840);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x841 = 6;
	int32_t x842 = -1;
	int8_t x844 = INT8_MAX;
	volatile int32_t t156 = -29;

    t156 = (((x841*x842)>x843)*x844);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x845 = 0U;
	volatile uint32_t x846 = UINT32_MAX;
	int16_t x847 = INT16_MIN;
	volatile int32_t t157 = 121;

    t157 = (((x845*x846)>x847)*x848);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x849 = 13U;
	volatile uint8_t x850 = 1U;
	static int16_t x851 = 690;
	int32_t x852 = INT32_MAX;
	volatile int32_t t158 = -717;

    t158 = (((x849*x850)>x851)*x852);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x853 = -1LL;
	uint8_t x854 = 0U;
	uint64_t x855 = UINT64_MAX;
	uint8_t x856 = 16U;
	int32_t t159 = -2;

    t159 = (((x853*x854)>x855)*x856);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x857 = -1LL;
	int16_t x858 = INT16_MIN;
	volatile uint16_t x859 = 1U;
	int32_t x860 = -1;
	static int32_t t160 = -144;

    t160 = (((x857*x858)>x859)*x860);

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x861 = 45U;
	int8_t x862 = INT8_MIN;
	int64_t x863 = -1LL;
	static volatile uint32_t x864 = UINT32_MAX;
	uint32_t t161 = UINT32_MAX;

    t161 = (((x861*x862)>x863)*x864);

    if (t161 != UINT32_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x865 = -1LL;
	int32_t x866 = -1;
	int32_t x867 = INT32_MIN;
	uint8_t x868 = 3U;
	volatile int32_t t162 = -770087;

    t162 = (((x865*x866)>x867)*x868);

    if (t162 != 3) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x870 = -2;
	int8_t x872 = -1;
	volatile int32_t t163 = -10;

    t163 = (((x869*x870)>x871)*x872);

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x875 = INT16_MIN;
	volatile uint32_t x876 = 3U;
	static uint32_t t164 = 53999U;

    t164 = (((x873*x874)>x875)*x876);

    if (t164 != 3U) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x882 = INT8_MAX;
	uint8_t x883 = 1U;
	volatile int16_t x884 = -1;
	volatile int32_t t165 = -46092;

    t165 = (((x881*x882)>x883)*x884);

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x885 = 0;
	int8_t x886 = INT8_MAX;
	uint64_t x887 = 12941594963LLU;
	uint64_t x888 = 9LLU;
	uint64_t t166 = 1634893710501LLU;

    t166 = (((x885*x886)>x887)*x888);

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x893 = INT64_MAX;
	uint64_t x894 = UINT64_MAX;
	volatile uint64_t x895 = UINT64_MAX;

    t167 = (((x893*x894)>x895)*x896);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x897 = -1;
	uint8_t x898 = 2U;
	volatile int16_t x899 = INT16_MIN;
	uint32_t x900 = 93U;
	volatile uint32_t t168 = 5068527U;

    t168 = (((x897*x898)>x899)*x900);

    if (t168 != 93U) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x905 = -1LL;
	int64_t x906 = INT64_MAX;
	static uint64_t x908 = UINT64_MAX;
	uint64_t t169 = 353426366LLU;

    t169 = (((x905*x906)>x907)*x908);

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x909 = -947853;
	int32_t x910 = 1747;
	int16_t x911 = -1;
	int16_t x912 = 11223;
	int32_t t170 = 175656705;

    t170 = (((x909*x910)>x911)*x912);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile uint32_t x925 = UINT32_MAX;
	uint16_t x926 = 99U;
	volatile uint16_t x927 = 2U;
	uint32_t t171 = UINT32_MAX;

    t171 = (((x925*x926)>x927)*x928);

    if (t171 != UINT32_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x929 = INT16_MIN;
	int16_t x930 = INT16_MAX;
	uint64_t x931 = 1035LLU;

    t172 = (((x929*x930)>x931)*x932);

    if (t172 != 18) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x937 = 0LL;
	int64_t x938 = 27093230LL;
	volatile int16_t x940 = INT16_MAX;
	volatile int32_t t173 = -294768;

    t173 = (((x937*x938)>x939)*x940);

    if (t173 != 32767) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x941 = -1LL;
	int32_t x942 = -1;
	static int16_t x943 = -1;
	static volatile int32_t t174 = -6815535;

    t174 = (((x941*x942)>x943)*x944);

    if (t174 != -1) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int64_t x945 = 3LL;
	uint32_t x946 = UINT32_MAX;
	int16_t x947 = 843;
	uint64_t x948 = 35706196897683721LLU;
	static volatile uint64_t t175 = 21885288812319LLU;

    t175 = (((x945*x946)>x947)*x948);

    if (t175 != 35706196897683721LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x949 = 0U;
	int32_t x950 = -1;
	int32_t x951 = INT32_MIN;
	uint16_t x952 = UINT16_MAX;
	static int32_t t176 = 14;

    t176 = (((x949*x950)>x951)*x952);

    if (t176 != 65535) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x961 = 2047855022LLU;
	static uint32_t x962 = 115864U;
	uint32_t x963 = UINT32_MAX;
	int32_t t177 = INT32_MAX;

    t177 = (((x961*x962)>x963)*x964);

    if (t177 != INT32_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x965 = UINT16_MAX;
	int16_t x966 = -1;
	int8_t x967 = -20;
	int32_t x968 = -1;
	int32_t t178 = 1;

    t178 = (((x965*x966)>x967)*x968);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x976 = -6097445LL;
	volatile int64_t t179 = -92851547885009663LL;

    t179 = (((x973*x974)>x975)*x976);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x977 = 49U;
	int16_t x978 = INT16_MIN;
	int64_t x979 = -9459LL;
	int32_t x980 = -1;
	volatile int32_t t180 = -64461135;

    t180 = (((x977*x978)>x979)*x980);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x982 = -1;
	int32_t x983 = INT32_MAX;
	int64_t t181 = -258699125527034LL;

    t181 = (((x981*x982)>x983)*x984);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x989 = 0U;
	int8_t x990 = 26;
	volatile int64_t x991 = INT64_MIN;
	int16_t x992 = -1;
	volatile int32_t t182 = -7977415;

    t182 = (((x989*x990)>x991)*x992);

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x993 = -1;
	static int64_t x996 = INT64_MIN;
	volatile int64_t t183 = 23LL;

    t183 = (((x993*x994)>x995)*x996);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x997 = -1LL;
	uint8_t x998 = 10U;
	int16_t x999 = 20;
	static uint8_t x1000 = 1U;

    t184 = (((x997*x998)>x999)*x1000);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x1002 = INT64_MIN;
	uint32_t t185 = 0U;

    t185 = (((x1001*x1002)>x1003)*x1004);

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x1005 = UINT16_MAX;
	uint16_t x1006 = 1332U;
	uint8_t x1007 = 77U;
	int64_t x1008 = INT64_MIN;
	volatile int64_t t186 = INT64_MIN;

    t186 = (((x1005*x1006)>x1007)*x1008);

    if (t186 != INT64_MIN) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1009 = INT8_MIN;
	uint64_t x1010 = 115799135139LLU;
	volatile uint32_t x1011 = 28606052U;
	volatile int64_t x1012 = INT64_MAX;
	static volatile int64_t t187 = INT64_MAX;

    t187 = (((x1009*x1010)>x1011)*x1012);

    if (t187 != INT64_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1013 = INT16_MIN;
	int16_t x1015 = INT16_MIN;
	uint64_t x1016 = UINT64_MAX;
	uint64_t t188 = UINT64_MAX;

    t188 = (((x1013*x1014)>x1015)*x1016);

    if (t188 != UINT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1017 = INT32_MAX;
	int64_t x1018 = -1LL;
	static uint16_t x1020 = 7777U;
	int32_t t189 = 286365;

    t189 = (((x1017*x1018)>x1019)*x1020);

    if (t189 != 7777) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x1022 = -64782620861LL;
	uint32_t x1023 = UINT32_MAX;
	int32_t x1024 = -1;
	volatile int32_t t190 = 15508;

    t190 = (((x1021*x1022)>x1023)*x1024);

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x1025 = 16307U;
	int8_t x1026 = INT8_MIN;
	int8_t x1027 = INT8_MIN;
	int64_t x1028 = -8044534LL;
	int64_t t191 = 33414945613LL;

    t191 = (((x1025*x1026)>x1027)*x1028);

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1029 = INT8_MIN;
	int8_t x1031 = 57;
	volatile int8_t x1032 = INT8_MAX;
	int32_t t192 = 281809;

    t192 = (((x1029*x1030)>x1031)*x1032);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1037 = 1770;
	uint8_t x1038 = UINT8_MAX;
	int64_t x1039 = -1LL;
	uint16_t x1040 = 0U;
	volatile int32_t t193 = 416;

    t193 = (((x1037*x1038)>x1039)*x1040);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x1041 = 0U;
	int16_t x1042 = INT16_MIN;
	static int32_t x1043 = INT32_MAX;
	int64_t x1044 = INT64_MIN;
	int64_t t194 = 27029663LL;

    t194 = (((x1041*x1042)>x1043)*x1044);

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1045 = INT16_MAX;
	static uint8_t x1046 = 3U;
	int64_t x1047 = INT64_MAX;
	volatile uint32_t t195 = 49711872U;

    t195 = (((x1045*x1046)>x1047)*x1048);

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1057 = INT64_MIN;
	int8_t x1058 = 0;
	volatile int64_t t196 = 2015868042768803125LL;

    t196 = (((x1057*x1058)>x1059)*x1060);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x1061 = -8720960638984LL;
	volatile uint16_t x1062 = 1U;
	uint16_t x1063 = UINT16_MAX;
	int64_t x1064 = INT64_MIN;
	volatile int64_t t197 = -5LL;

    t197 = (((x1061*x1062)>x1063)*x1064);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1065 = INT8_MIN;
	uint32_t x1066 = 40U;
	uint8_t x1067 = 96U;
	int8_t x1068 = -1;
	volatile int32_t t198 = -2;

    t198 = (((x1065*x1066)>x1067)*x1068);

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x1073 = INT16_MIN;
	int8_t x1074 = -1;
	static volatile int16_t x1075 = INT16_MAX;
	int64_t x1076 = -242007475921388LL;
	volatile int64_t t199 = 678108398152234395LL;

    t199 = (((x1073*x1074)>x1075)*x1076);

    if (t199 != -242007475921388LL) { NG(); } else { ; }
	
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

