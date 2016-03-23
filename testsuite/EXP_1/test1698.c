
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

uint16_t x4 = UINT16_MAX;
int16_t x8 = 765;
int32_t x11 = INT32_MAX;
static int64_t x17 = INT64_MIN;
static volatile int16_t x20 = INT16_MAX;
int32_t t3 = 1;
static int32_t t5 = 392981958;
static int32_t x30 = INT32_MIN;
uint32_t x31 = 1147U;
static volatile int8_t x33 = -3;
volatile int8_t x34 = -9;
static int32_t x45 = INT32_MIN;
uint32_t x47 = UINT32_MAX;
volatile int8_t x57 = INT8_MIN;
int64_t x58 = -1LL;
volatile int16_t x59 = 14;
int8_t x61 = INT8_MIN;
static volatile uint16_t x62 = 405U;
static int8_t x75 = INT8_MIN;
static volatile int8_t x80 = -1;
volatile int32_t t18 = -1;
int16_t x81 = INT16_MIN;
int16_t x85 = -6710;
uint8_t x86 = 5U;
static volatile int64_t x88 = 153370730651772305LL;
int64_t t20 = -31540511LL;
int8_t x92 = INT8_MIN;
int32_t t21 = -441627000;
volatile int16_t x96 = -863;
uint64_t x100 = UINT64_MAX;
uint64_t x104 = 9LLU;
static volatile uint16_t x105 = 10942U;
uint16_t x107 = UINT16_MAX;
int64_t x118 = INT64_MAX;
int32_t x121 = INT32_MAX;
volatile int8_t x123 = 1;
int64_t x130 = -416LL;
volatile int64_t x132 = INT64_MIN;
int64_t x143 = -844663249731348380LL;
int64_t x151 = -2470360LL;
int32_t x159 = 328471;
uint32_t x160 = 5407176U;
int32_t t39 = -23190683;
int32_t t40 = 62;
int32_t x171 = -1;
static int16_t x186 = -1;
int64_t t47 = 19LL;
static int32_t x200 = -13553;
volatile int16_t x212 = -97;
volatile uint64_t x214 = 894306119893LLU;
static volatile int16_t x218 = INT16_MIN;
uint16_t x223 = 1459U;
int16_t x227 = -1;
uint16_t x228 = 15U;
int64_t x240 = INT64_MAX;
static int16_t x242 = -1;
int32_t t59 = -473;
volatile int32_t t61 = -89;
int16_t x259 = INT16_MIN;
static int32_t x260 = 968545;
int8_t x263 = -54;
volatile uint64_t x273 = 45803868569029LLU;
uint64_t x294 = UINT64_MAX;
int16_t x306 = -1;
int64_t x308 = -1LL;
volatile int32_t t76 = -18493670;
static volatile int64_t x320 = INT64_MIN;
int8_t x321 = 0;
int32_t x329 = INT32_MAX;
volatile int16_t x333 = INT16_MIN;
uint8_t x335 = UINT8_MAX;
int8_t x342 = INT8_MIN;
int64_t x346 = INT64_MIN;
int64_t x356 = INT64_MAX;
uint64_t x358 = 7LLU;
static volatile int64_t t88 = -5LL;
int8_t x364 = -4;
int64_t x375 = -3972944838422864LL;
int16_t x382 = INT16_MIN;
volatile int32_t t95 = 12027;
uint64_t x391 = 29737836LLU;
int64_t x394 = -1LL;
static int64_t x397 = -11LL;
static int16_t x401 = INT16_MAX;
int32_t x407 = 6;
int64_t x408 = 1801512LL;
int32_t x418 = INT32_MIN;
uint32_t t104 = 7699818U;
uint64_t t106 = 16598598LLU;
int8_t x437 = -1;
static volatile int8_t x440 = INT8_MAX;
uint8_t x445 = UINT8_MAX;
volatile int32_t t109 = 3170203;
volatile int32_t t114 = 13377;
int64_t t115 = 7LL;
int32_t x477 = -6903420;
volatile int64_t x480 = INT64_MAX;
uint32_t x481 = 4995U;
int32_t t118 = 0;
int16_t x487 = 1;
int64_t x490 = INT64_MAX;
int64_t x493 = INT64_MIN;
int32_t t122 = 240387;
int32_t x501 = -492624812;
volatile int8_t x502 = 5;
static uint32_t x504 = 1729U;
int8_t x511 = INT8_MAX;
static int64_t x512 = INT64_MIN;
static volatile int64_t t125 = -41LL;
int64_t x522 = INT64_MAX;
int16_t x526 = INT16_MIN;
volatile uint32_t t129 = 571125747U;
int64_t x530 = -1LL;
static volatile int64_t t130 = -9193LL;
int16_t x543 = -1;
static int8_t x545 = -2;
int16_t x549 = -10044;
static volatile int32_t t135 = 1944;
int32_t t136 = -190;
static int32_t x557 = 13910225;
uint8_t x558 = UINT8_MAX;
uint64_t t137 = 1LLU;
int8_t x562 = -1;
volatile int32_t t138 = 50045790;
int16_t x577 = -1;
int16_t x578 = INT16_MIN;
volatile int32_t t141 = 11492633;
uint32_t t142 = 16495326U;
uint32_t x585 = 57270U;
int16_t x593 = 1188;
volatile int32_t t147 = -1;
uint8_t x611 = 15U;
uint32_t x612 = 55U;
int64_t x617 = 1641324935912LL;
static int8_t x618 = -1;
volatile int64_t x621 = -14543LL;
int8_t x625 = INT8_MAX;
uint64_t x631 = UINT64_MAX;
int8_t x636 = INT8_MIN;
uint32_t x643 = 167U;
int8_t x646 = -7;
int8_t x647 = INT8_MAX;
int8_t x651 = -1;
volatile uint32_t x656 = 8688U;
volatile uint32_t t158 = 104591011U;
int32_t x658 = -1;
uint64_t x660 = 53067937342203LLU;
int64_t x663 = INT64_MIN;
static int64_t t160 = -2LL;
volatile int8_t x668 = -3;
uint16_t x670 = UINT16_MAX;
int32_t t162 = 53455780;
int32_t t163 = -27916517;
uint64_t x681 = 10676624514LLU;
int64_t x683 = -1LL;
static volatile int8_t x698 = INT8_MIN;
uint64_t x703 = 4302412980907865LLU;
uint32_t x706 = 19459U;
uint8_t x710 = 97U;
static uint64_t t171 = 277458927765486557LLU;
int64_t x720 = 5267714LL;
volatile int64_t t173 = -3LL;
static int64_t x731 = INT64_MAX;
int8_t x735 = INT8_MAX;
static int64_t x736 = INT64_MAX;
volatile int32_t t178 = 17;
static volatile int8_t x748 = INT8_MAX;
uint64_t x750 = 5063552409LLU;
uint64_t x751 = UINT64_MAX;
uint16_t x757 = 2U;
int32_t x759 = -1;
uint32_t x766 = 1U;
static int8_t x768 = INT8_MIN;
int32_t x769 = INT32_MIN;
static int16_t x771 = INT16_MIN;
volatile int32_t t186 = -89980361;
volatile int32_t x774 = -1;
volatile int64_t x776 = -2375165980672548LL;
uint32_t x781 = UINT32_MAX;
static volatile int8_t x787 = 8;
uint64_t t191 = 563LLU;
uint32_t x796 = 1376476318U;
volatile uint8_t x802 = 3U;
int16_t x812 = INT16_MIN;
static volatile int32_t t196 = 175;
int32_t x813 = INT32_MIN;


void f0(void) {
    	static int64_t x1 = INT64_MAX;
	uint64_t x2 = UINT64_MAX;
	uint16_t x3 = 13941U;
	int32_t t0 = 0;

    t0 = (((x1>x2)<=x3)/x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = -30;
	static int16_t x6 = -1;
	int8_t x7 = -1;
	int32_t t1 = 19640;

    t1 = (((x5>x6)<=x7)/x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x9 = UINT32_MAX;
	static uint32_t x10 = 2U;
	int32_t x12 = 215133;
	int32_t t2 = 1;

    t2 = (((x9>x10)<=x11)/x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x18 = 37296376766993LLU;
	int64_t x19 = 549679058922LL;

    t3 = (((x17>x18)<=x19)/x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x21 = 96U;
	static int8_t x22 = INT8_MIN;
	uint16_t x23 = UINT16_MAX;
	static int8_t x24 = -22;
	static volatile int32_t t4 = -753346;

    t4 = (((x21>x22)<=x23)/x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x25 = INT64_MIN;
	int8_t x26 = INT8_MAX;
	static uint64_t x27 = UINT64_MAX;
	int16_t x28 = INT16_MIN;

    t5 = (((x25>x26)<=x27)/x28);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x29 = UINT64_MAX;
	uint64_t x32 = UINT64_MAX;
	volatile uint64_t t6 = 1562148668542523929LLU;

    t6 = (((x29>x30)<=x31)/x32);

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x35 = -7;
	volatile int16_t x36 = INT16_MAX;
	volatile int32_t t7 = -170199;

    t7 = (((x33>x34)<=x35)/x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x37 = INT32_MIN;
	uint16_t x38 = 237U;
	uint64_t x39 = 1910157094313539LLU;
	uint32_t x40 = 422U;
	uint32_t t8 = 138629U;

    t8 = (((x37>x38)<=x39)/x40);

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x41 = 0U;
	static volatile int64_t x42 = INT64_MAX;
	static int32_t x43 = -1;
	volatile int8_t x44 = -1;
	static int32_t t9 = -209237705;

    t9 = (((x41>x42)<=x43)/x44);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x46 = -30367875;
	int8_t x48 = INT8_MIN;
	volatile int32_t t10 = -10;

    t10 = (((x45>x46)<=x47)/x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x49 = 586U;
	volatile uint16_t x50 = 3332U;
	volatile uint32_t x51 = 78468968U;
	int32_t x52 = 13;
	int32_t t11 = 578520;

    t11 = (((x49>x50)<=x51)/x52);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x53 = INT32_MIN;
	uint16_t x54 = 5U;
	int8_t x55 = INT8_MIN;
	int32_t x56 = INT32_MIN;
	volatile int32_t t12 = 25657;

    t12 = (((x53>x54)<=x55)/x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x60 = -249076157LL;
	volatile int64_t t13 = -46145LL;

    t13 = (((x57>x58)<=x59)/x60);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x63 = INT32_MIN;
	int8_t x64 = 27;
	static int32_t t14 = 532531436;

    t14 = (((x61>x62)<=x63)/x64);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x65 = -9003;
	int32_t x66 = -1;
	static int64_t x67 = -8LL;
	int64_t x68 = 26371LL;
	volatile int64_t t15 = 25LL;

    t15 = (((x65>x66)<=x67)/x68);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x69 = 712688368700359LLU;
	int16_t x70 = -122;
	uint64_t x71 = 72LLU;
	int32_t x72 = INT32_MIN;
	volatile int32_t t16 = -1486825;

    t16 = (((x69>x70)<=x71)/x72);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x73 = UINT8_MAX;
	int32_t x74 = INT32_MIN;
	uint32_t x76 = 224808U;
	static volatile uint32_t t17 = 1U;

    t17 = (((x73>x74)<=x75)/x76);

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x77 = 35743LLU;
	int16_t x78 = 112;
	int64_t x79 = INT64_MIN;

    t18 = (((x77>x78)<=x79)/x80);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x82 = INT16_MIN;
	uint8_t x83 = 11U;
	static volatile int16_t x84 = INT16_MIN;
	int32_t t19 = -13256;

    t19 = (((x81>x82)<=x83)/x84);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x87 = 85U;

    t20 = (((x85>x86)<=x87)/x88);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x89 = 1LLU;
	volatile int64_t x90 = INT64_MAX;
	int16_t x91 = INT16_MAX;

    t21 = (((x89>x90)<=x91)/x92);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x93 = 3U;
	volatile int8_t x94 = INT8_MIN;
	static int32_t x95 = -429;
	int32_t t22 = -2;

    t22 = (((x93>x94)<=x95)/x96);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x97 = 1758U;
	int8_t x98 = INT8_MAX;
	uint16_t x99 = 1969U;
	uint64_t t23 = 0LLU;

    t23 = (((x97>x98)<=x99)/x100);

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x101 = 5U;
	uint16_t x102 = 2014U;
	uint16_t x103 = UINT16_MAX;
	uint64_t t24 = 552942375983296958LLU;

    t24 = (((x101>x102)<=x103)/x104);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x106 = 9816828351LLU;
	int16_t x108 = 5;
	volatile int32_t t25 = -36244;

    t25 = (((x105>x106)<=x107)/x108);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x109 = 38;
	uint16_t x110 = UINT16_MAX;
	int8_t x111 = -16;
	int8_t x112 = INT8_MAX;
	int32_t t26 = -64232;

    t26 = (((x109>x110)<=x111)/x112);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x113 = 4226659LL;
	int64_t x114 = -1LL;
	int64_t x115 = 308LL;
	int8_t x116 = INT8_MIN;
	int32_t t27 = 755;

    t27 = (((x113>x114)<=x115)/x116);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x117 = INT64_MIN;
	uint64_t x119 = 50426002867249115LLU;
	volatile int32_t x120 = -1;
	int32_t t28 = -1042916773;

    t28 = (((x117>x118)<=x119)/x120);

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x122 = 4369846;
	volatile uint16_t x124 = 10U;
	volatile int32_t t29 = 1;

    t29 = (((x121>x122)<=x123)/x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x125 = 3;
	static volatile int64_t x126 = INT64_MIN;
	int8_t x127 = INT8_MIN;
	int16_t x128 = -17;
	volatile int32_t t30 = -78207;

    t30 = (((x125>x126)<=x127)/x128);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x129 = INT16_MIN;
	int64_t x131 = INT64_MIN;
	volatile int64_t t31 = 3349565847507LL;

    t31 = (((x129>x130)<=x131)/x132);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x133 = INT64_MIN;
	volatile int64_t x134 = -1LL;
	int64_t x135 = -4LL;
	static int16_t x136 = 3;
	volatile int32_t t32 = -2;

    t32 = (((x133>x134)<=x135)/x136);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int64_t x137 = INT64_MAX;
	uint64_t x138 = 229623689LLU;
	volatile int8_t x139 = 58;
	static int64_t x140 = INT64_MAX;
	int64_t t33 = 827LL;

    t33 = (((x137>x138)<=x139)/x140);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x141 = INT64_MAX;
	int16_t x142 = -1;
	uint8_t x144 = UINT8_MAX;
	int32_t t34 = 0;

    t34 = (((x141>x142)<=x143)/x144);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x145 = INT8_MIN;
	static uint64_t x146 = 23595LLU;
	volatile int32_t x147 = INT32_MIN;
	uint64_t x148 = UINT64_MAX;
	static volatile uint64_t t35 = 1802498LLU;

    t35 = (((x145>x146)<=x147)/x148);

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x149 = -1;
	static volatile int64_t x150 = INT64_MIN;
	static int8_t x152 = -5;
	int32_t t36 = 2187;

    t36 = (((x149>x150)<=x151)/x152);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x153 = -1927988130471LL;
	volatile uint16_t x154 = 1U;
	int8_t x155 = -1;
	volatile uint16_t x156 = 7760U;
	int32_t t37 = 1775;

    t37 = (((x153>x154)<=x155)/x156);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x157 = INT32_MAX;
	uint32_t x158 = UINT32_MAX;
	static volatile uint32_t t38 = 4U;

    t38 = (((x157>x158)<=x159)/x160);

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x161 = -1LL;
	volatile int8_t x162 = INT8_MIN;
	int8_t x163 = INT8_MAX;
	static uint16_t x164 = UINT16_MAX;

    t39 = (((x161>x162)<=x163)/x164);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x165 = 17U;
	int64_t x166 = INT64_MIN;
	int8_t x167 = INT8_MIN;
	uint8_t x168 = 95U;

    t40 = (((x165>x166)<=x167)/x168);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x169 = 47;
	volatile int16_t x170 = 1;
	volatile uint64_t x172 = UINT64_MAX;
	uint64_t t41 = 1510LLU;

    t41 = (((x169>x170)<=x171)/x172);

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x173 = INT8_MIN;
	int64_t x174 = INT64_MIN;
	int64_t x175 = -195562874687082518LL;
	int8_t x176 = INT8_MIN;
	int32_t t42 = 91528743;

    t42 = (((x173>x174)<=x175)/x176);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x177 = 1973LLU;
	uint32_t x178 = UINT32_MAX;
	int64_t x179 = -1LL;
	uint16_t x180 = UINT16_MAX;
	int32_t t43 = 12222018;

    t43 = (((x177>x178)<=x179)/x180);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x181 = 3U;
	int32_t x182 = INT32_MIN;
	int64_t x183 = 34615662347LL;
	int32_t x184 = INT32_MIN;
	static int32_t t44 = -161;

    t44 = (((x181>x182)<=x183)/x184);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x185 = 27U;
	int32_t x187 = INT32_MAX;
	volatile int8_t x188 = 15;
	volatile int32_t t45 = 191082;

    t45 = (((x185>x186)<=x187)/x188);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x189 = INT32_MAX;
	uint32_t x190 = 1990U;
	static int16_t x191 = 52;
	int64_t x192 = INT64_MIN;
	volatile int64_t t46 = 10LL;

    t46 = (((x189>x190)<=x191)/x192);

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x193 = 77520956;
	volatile int32_t x194 = INT32_MIN;
	static int64_t x195 = -1LL;
	int64_t x196 = -1555059LL;

    t47 = (((x193>x194)<=x195)/x196);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x197 = 1U;
	static int32_t x198 = 344673727;
	uint32_t x199 = 20231271U;
	int32_t t48 = 131;

    t48 = (((x197>x198)<=x199)/x200);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x201 = 17U;
	static uint16_t x202 = 0U;
	static int64_t x203 = INT64_MIN;
	uint8_t x204 = 5U;
	volatile int32_t t49 = 409335;

    t49 = (((x201>x202)<=x203)/x204);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x205 = 120429U;
	volatile uint32_t x206 = 363U;
	int8_t x207 = INT8_MIN;
	uint16_t x208 = 922U;
	int32_t t50 = 375895004;

    t50 = (((x205>x206)<=x207)/x208);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x209 = 3U;
	int8_t x210 = 2;
	uint8_t x211 = 0U;
	static int32_t t51 = -46073;

    t51 = (((x209>x210)<=x211)/x212);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x213 = 3748806LLU;
	int16_t x215 = -1;
	uint8_t x216 = 117U;
	int32_t t52 = 354;

    t52 = (((x213>x214)<=x215)/x216);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x217 = -1LL;
	int16_t x219 = INT16_MIN;
	int8_t x220 = -1;
	int32_t t53 = 726049634;

    t53 = (((x217>x218)<=x219)/x220);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x221 = INT32_MAX;
	static volatile int64_t x222 = -1LL;
	static int16_t x224 = -1;
	volatile int32_t t54 = -1085831;

    t54 = (((x221>x222)<=x223)/x224);

    if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x225 = UINT8_MAX;
	int64_t x226 = INT64_MIN;
	volatile int32_t t55 = -117357;

    t55 = (((x225>x226)<=x227)/x228);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x229 = UINT16_MAX;
	volatile uint8_t x230 = 25U;
	volatile int64_t x231 = -1LL;
	int64_t x232 = -562001628904032LL;
	static int64_t t56 = -24LL;

    t56 = (((x229>x230)<=x231)/x232);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x233 = -201639;
	uint32_t x234 = 1353721U;
	int32_t x235 = INT32_MAX;
	uint16_t x236 = 1166U;
	int32_t t57 = -58398766;

    t57 = (((x233>x234)<=x235)/x236);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x237 = 25544424814461LLU;
	int8_t x238 = -1;
	int64_t x239 = -752117984LL;
	volatile int64_t t58 = 1173551908479492660LL;

    t58 = (((x237>x238)<=x239)/x240);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x241 = INT32_MIN;
	int32_t x243 = INT32_MIN;
	int16_t x244 = -1;

    t59 = (((x241>x242)<=x243)/x244);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x245 = UINT16_MAX;
	static uint32_t x246 = UINT32_MAX;
	int8_t x247 = -1;
	int16_t x248 = INT16_MIN;
	static volatile int32_t t60 = -2136790;

    t60 = (((x245>x246)<=x247)/x248);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x249 = INT8_MIN;
	int32_t x250 = INT32_MIN;
	static int32_t x251 = -1;
	int8_t x252 = INT8_MIN;

    t61 = (((x249>x250)<=x251)/x252);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x253 = INT16_MIN;
	static uint64_t x254 = 0LLU;
	uint16_t x255 = 0U;
	uint32_t x256 = UINT32_MAX;
	uint32_t t62 = 294U;

    t62 = (((x253>x254)<=x255)/x256);

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x257 = UINT64_MAX;
	int32_t x258 = INT32_MAX;
	int32_t t63 = 14065891;

    t63 = (((x257>x258)<=x259)/x260);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x261 = UINT32_MAX;
	int32_t x262 = -1;
	static uint64_t x264 = UINT64_MAX;
	static uint64_t t64 = 6175783537847249LLU;

    t64 = (((x261>x262)<=x263)/x264);

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x265 = UINT16_MAX;
	volatile int16_t x266 = -6;
	volatile int16_t x267 = INT16_MIN;
	static int8_t x268 = 1;
	static volatile int32_t t65 = -11338;

    t65 = (((x265>x266)<=x267)/x268);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x269 = INT64_MAX;
	int8_t x270 = 0;
	int64_t x271 = -1LL;
	static int64_t x272 = INT64_MIN;
	int64_t t66 = 298967LL;

    t66 = (((x269>x270)<=x271)/x272);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x274 = UINT8_MAX;
	uint16_t x275 = 11903U;
	int32_t x276 = -1;
	static volatile int32_t t67 = -9120;

    t67 = (((x273>x274)<=x275)/x276);

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x277 = 21;
	static int64_t x278 = INT64_MIN;
	int32_t x279 = -1;
	static int32_t x280 = -1;
	int32_t t68 = 3;

    t68 = (((x277>x278)<=x279)/x280);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x281 = -1;
	int8_t x282 = INT8_MIN;
	int8_t x283 = INT8_MIN;
	volatile int16_t x284 = 1;
	int32_t t69 = 22021956;

    t69 = (((x281>x282)<=x283)/x284);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x285 = -9;
	uint16_t x286 = UINT16_MAX;
	uint8_t x287 = 6U;
	static int16_t x288 = -1;
	static int32_t t70 = 7326687;

    t70 = (((x285>x286)<=x287)/x288);

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x289 = UINT64_MAX;
	int64_t x290 = 7LL;
	int32_t x291 = -75955;
	int32_t x292 = INT32_MIN;
	volatile int32_t t71 = 496;

    t71 = (((x289>x290)<=x291)/x292);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x293 = -3171838927917092501LL;
	int16_t x295 = INT16_MIN;
	int32_t x296 = -1;
	volatile int32_t t72 = 81;

    t72 = (((x293>x294)<=x295)/x296);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x297 = 52994;
	static volatile uint64_t x298 = UINT64_MAX;
	int64_t x299 = -94127350630534LL;
	int64_t x300 = INT64_MIN;
	volatile int64_t t73 = 17LL;

    t73 = (((x297>x298)<=x299)/x300);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x301 = INT32_MIN;
	uint32_t x302 = 2030034U;
	int32_t x303 = INT32_MAX;
	volatile int64_t x304 = 90018698310LL;
	static int64_t t74 = -238798LL;

    t74 = (((x301>x302)<=x303)/x304);

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x305 = INT8_MIN;
	uint8_t x307 = UINT8_MAX;
	volatile int64_t t75 = -164576555666040LL;

    t75 = (((x305>x306)<=x307)/x308);

    if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x309 = -52970395;
	volatile int16_t x310 = INT16_MIN;
	static int16_t x311 = -1;
	volatile uint16_t x312 = 5791U;

    t76 = (((x309>x310)<=x311)/x312);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x313 = INT32_MAX;
	uint32_t x314 = UINT32_MAX;
	uint32_t x315 = 5585376U;
	int32_t x316 = INT32_MAX;
	volatile int32_t t77 = 5549325;

    t77 = (((x313>x314)<=x315)/x316);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x317 = 4266877156905LLU;
	static uint8_t x318 = UINT8_MAX;
	int16_t x319 = INT16_MAX;
	static int64_t t78 = 374943750718769LL;

    t78 = (((x317>x318)<=x319)/x320);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x322 = 83691;
	static uint8_t x323 = UINT8_MAX;
	volatile int32_t x324 = INT32_MIN;
	volatile int32_t t79 = 26;

    t79 = (((x321>x322)<=x323)/x324);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x325 = 16U;
	uint16_t x326 = 41U;
	static volatile uint32_t x327 = 383052U;
	static int64_t x328 = INT64_MIN;
	volatile int64_t t80 = -46471915819871057LL;

    t80 = (((x325>x326)<=x327)/x328);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x330 = INT32_MIN;
	int16_t x331 = 2485;
	int8_t x332 = INT8_MIN;
	int32_t t81 = -6644;

    t81 = (((x329>x330)<=x331)/x332);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x334 = 16075312;
	int8_t x336 = INT8_MAX;
	static volatile int32_t t82 = -38285;

    t82 = (((x333>x334)<=x335)/x336);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x337 = -12;
	int64_t x338 = INT64_MAX;
	int16_t x339 = -1;
	uint64_t x340 = 4282345LLU;
	uint64_t t83 = 4621LLU;

    t83 = (((x337>x338)<=x339)/x340);

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint64_t x341 = 7073558007759LLU;
	int64_t x343 = INT64_MIN;
	static int8_t x344 = -1;
	int32_t t84 = 2090;

    t84 = (((x341>x342)<=x343)/x344);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x345 = -23135LL;
	int8_t x347 = 3;
	volatile int64_t x348 = 23915838788LL;
	volatile int64_t t85 = -27129064LL;

    t85 = (((x345>x346)<=x347)/x348);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x349 = -1;
	int8_t x350 = -1;
	int16_t x351 = 88;
	int16_t x352 = -1;
	int32_t t86 = -3469220;

    t86 = (((x349>x350)<=x351)/x352);

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x353 = -1;
	volatile int8_t x354 = -1;
	int64_t x355 = 28083LL;
	static volatile int64_t t87 = -40189860LL;

    t87 = (((x353>x354)<=x355)/x356);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x357 = -1;
	int32_t x359 = -226047;
	static int64_t x360 = INT64_MIN;

    t88 = (((x357>x358)<=x359)/x360);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x361 = 0U;
	volatile int8_t x362 = -1;
	static int64_t x363 = 644996510253076LL;
	int32_t t89 = 155461112;

    t89 = (((x361>x362)<=x363)/x364);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x365 = INT8_MIN;
	volatile int8_t x366 = -6;
	volatile uint32_t x367 = 7567877U;
	int32_t x368 = INT32_MAX;
	int32_t t90 = 27;

    t90 = (((x365>x366)<=x367)/x368);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int16_t x369 = INT16_MIN;
	int8_t x370 = INT8_MIN;
	static int8_t x371 = 0;
	uint32_t x372 = 25U;
	volatile uint32_t t91 = 965U;

    t91 = (((x369>x370)<=x371)/x372);

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x373 = 1290108392848LLU;
	int8_t x374 = -1;
	int64_t x376 = INT64_MAX;
	static volatile int64_t t92 = 93351552604145579LL;

    t92 = (((x373>x374)<=x375)/x376);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int32_t x377 = -10803;
	uint64_t x378 = UINT64_MAX;
	uint8_t x379 = UINT8_MAX;
	int8_t x380 = -1;
	volatile int32_t t93 = 0;

    t93 = (((x377>x378)<=x379)/x380);

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x381 = INT32_MIN;
	int32_t x383 = INT32_MIN;
	static int16_t x384 = INT16_MIN;
	volatile int32_t t94 = -324878613;

    t94 = (((x381>x382)<=x383)/x384);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x385 = 127U;
	static int32_t x386 = -409618;
	uint64_t x387 = 2926576082001866LLU;
	int8_t x388 = INT8_MIN;

    t95 = (((x385>x386)<=x387)/x388);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int16_t x389 = INT16_MIN;
	int8_t x390 = 39;
	int32_t x392 = -183397342;
	volatile int32_t t96 = 8325918;

    t96 = (((x389>x390)<=x391)/x392);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x393 = UINT64_MAX;
	int32_t x395 = -1679;
	static uint8_t x396 = UINT8_MAX;
	int32_t t97 = 75;

    t97 = (((x393>x394)<=x395)/x396);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile uint32_t x398 = 178U;
	volatile uint8_t x399 = 31U;
	volatile uint32_t x400 = UINT32_MAX;
	volatile uint32_t t98 = 9U;

    t98 = (((x397>x398)<=x399)/x400);

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x402 = UINT8_MAX;
	uint16_t x403 = UINT16_MAX;
	uint16_t x404 = 90U;
	volatile int32_t t99 = -31700;

    t99 = (((x401>x402)<=x403)/x404);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x405 = 1;
	int8_t x406 = -1;
	volatile int64_t t100 = -72547067LL;

    t100 = (((x405>x406)<=x407)/x408);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x409 = 27851U;
	uint32_t x410 = 513939577U;
	int16_t x411 = INT16_MIN;
	uint16_t x412 = UINT16_MAX;
	int32_t t101 = 12396538;

    t101 = (((x409>x410)<=x411)/x412);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x413 = INT16_MIN;
	int8_t x414 = INT8_MIN;
	int32_t x415 = INT32_MAX;
	volatile uint8_t x416 = 6U;
	int32_t t102 = -51105;

    t102 = (((x413>x414)<=x415)/x416);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x417 = UINT16_MAX;
	uint8_t x419 = 35U;
	int32_t x420 = 69;
	volatile int32_t t103 = -20;

    t103 = (((x417>x418)<=x419)/x420);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x421 = 14290;
	static int8_t x422 = INT8_MIN;
	int32_t x423 = 202163;
	uint32_t x424 = 450U;

    t104 = (((x421>x422)<=x423)/x424);

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x425 = 69U;
	volatile int16_t x426 = INT16_MIN;
	int16_t x427 = -1;
	int64_t x428 = -314417498471874LL;
	volatile int64_t t105 = 159149720LL;

    t105 = (((x425>x426)<=x427)/x428);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x429 = INT32_MIN;
	uint32_t x430 = 13347U;
	static int8_t x431 = INT8_MIN;
	uint64_t x432 = 271474526LLU;

    t106 = (((x429>x430)<=x431)/x432);

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x433 = INT64_MAX;
	static int32_t x434 = INT32_MIN;
	volatile uint64_t x435 = 42LLU;
	int32_t x436 = INT32_MIN;
	static int32_t t107 = 0;

    t107 = (((x433>x434)<=x435)/x436);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x438 = -594718907536LL;
	uint16_t x439 = 5834U;
	volatile int32_t t108 = 19303320;

    t108 = (((x437>x438)<=x439)/x440);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x446 = INT16_MIN;
	volatile int16_t x447 = -1;
	static volatile int16_t x448 = 14;

    t109 = (((x445>x446)<=x447)/x448);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x449 = 14420;
	int16_t x450 = 20;
	volatile int8_t x451 = -38;
	uint8_t x452 = UINT8_MAX;
	int32_t t110 = 3202008;

    t110 = (((x449>x450)<=x451)/x452);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x453 = 870LL;
	int8_t x454 = INT8_MAX;
	int32_t x455 = INT32_MIN;
	int32_t x456 = -1;
	int32_t t111 = 3213;

    t111 = (((x453>x454)<=x455)/x456);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile uint16_t x457 = 1U;
	int16_t x458 = 46;
	int32_t x459 = INT32_MIN;
	static int64_t x460 = INT64_MIN;
	int64_t t112 = -248849633LL;

    t112 = (((x457>x458)<=x459)/x460);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x461 = INT64_MAX;
	int64_t x462 = 499849952212929062LL;
	int8_t x463 = 25;
	int32_t x464 = INT32_MAX;
	int32_t t113 = -4;

    t113 = (((x461>x462)<=x463)/x464);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x465 = INT64_MAX;
	volatile int64_t x466 = -1LL;
	int32_t x467 = 1;
	int8_t x468 = INT8_MIN;

    t114 = (((x465>x466)<=x467)/x468);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x469 = INT16_MIN;
	uint32_t x470 = UINT32_MAX;
	int32_t x471 = INT32_MIN;
	int64_t x472 = INT64_MIN;

    t115 = (((x469>x470)<=x471)/x472);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile uint16_t x473 = UINT16_MAX;
	int16_t x474 = 2;
	uint64_t x475 = 1249064LLU;
	volatile int64_t x476 = INT64_MAX;
	int64_t t116 = 357619743748460712LL;

    t116 = (((x473>x474)<=x475)/x476);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x478 = 1U;
	uint8_t x479 = 2U;
	static volatile int64_t t117 = 4663610467774LL;

    t117 = (((x477>x478)<=x479)/x480);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x482 = INT64_MIN;
	int64_t x483 = INT64_MIN;
	uint8_t x484 = 5U;

    t118 = (((x481>x482)<=x483)/x484);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x485 = 5300LLU;
	uint16_t x486 = 405U;
	uint32_t x488 = UINT32_MAX;
	volatile uint32_t t119 = 92212U;

    t119 = (((x485>x486)<=x487)/x488);

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x489 = 97U;
	uint8_t x491 = UINT8_MAX;
	static int8_t x492 = INT8_MIN;
	static volatile int32_t t120 = -2;

    t120 = (((x489>x490)<=x491)/x492);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint8_t x494 = 44U;
	int16_t x495 = INT16_MAX;
	int8_t x496 = INT8_MIN;
	int32_t t121 = 3;

    t121 = (((x493>x494)<=x495)/x496);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x497 = UINT64_MAX;
	int16_t x498 = 1;
	static volatile int32_t x499 = INT32_MIN;
	int16_t x500 = 9;

    t122 = (((x497>x498)<=x499)/x500);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x503 = INT64_MAX;
	uint32_t t123 = 3U;

    t123 = (((x501>x502)<=x503)/x504);

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x505 = 402380328971967LL;
	int64_t x506 = 500931917LL;
	int8_t x507 = INT8_MAX;
	int8_t x508 = INT8_MIN;
	int32_t t124 = 4;

    t124 = (((x505>x506)<=x507)/x508);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x509 = 702587439U;
	static uint8_t x510 = UINT8_MAX;

    t125 = (((x509>x510)<=x511)/x512);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x513 = 1U;
	static volatile int32_t x514 = -56;
	static uint16_t x515 = UINT16_MAX;
	int64_t x516 = INT64_MIN;
	int64_t t126 = -423343587170724674LL;

    t126 = (((x513>x514)<=x515)/x516);

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x517 = 15U;
	int8_t x518 = INT8_MIN;
	static int32_t x519 = 12547922;
	static uint32_t x520 = UINT32_MAX;
	volatile uint32_t t127 = 6U;

    t127 = (((x517>x518)<=x519)/x520);

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x521 = -1;
	uint8_t x523 = 16U;
	static int16_t x524 = INT16_MAX;
	volatile int32_t t128 = -65014543;

    t128 = (((x521>x522)<=x523)/x524);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x525 = INT64_MIN;
	int16_t x527 = INT16_MIN;
	volatile uint32_t x528 = UINT32_MAX;

    t129 = (((x525>x526)<=x527)/x528);

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x529 = -1;
	uint8_t x531 = 60U;
	static volatile int64_t x532 = -1LL;

    t130 = (((x529>x530)<=x531)/x532);

    if (t130 != -1LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x533 = 2U;
	static int8_t x534 = 15;
	int32_t x535 = INT32_MIN;
	volatile int8_t x536 = -1;
	static volatile int32_t t131 = -406283905;

    t131 = (((x533>x534)<=x535)/x536);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x537 = -1;
	int64_t x538 = INT64_MIN;
	int32_t x539 = -1;
	uint8_t x540 = UINT8_MAX;
	static int32_t t132 = -1984;

    t132 = (((x537>x538)<=x539)/x540);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x541 = INT8_MAX;
	uint16_t x542 = 17684U;
	static volatile int16_t x544 = 852;
	volatile int32_t t133 = -33875702;

    t133 = (((x541>x542)<=x543)/x544);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x546 = 107297614634709482LL;
	uint16_t x547 = 15U;
	volatile int64_t x548 = -1LL;
	int64_t t134 = 154302922LL;

    t134 = (((x545>x546)<=x547)/x548);

    if (t134 != -1LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x550 = 3U;
	int32_t x551 = INT32_MIN;
	volatile int32_t x552 = -1;

    t135 = (((x549>x550)<=x551)/x552);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x553 = 1U;
	int16_t x554 = INT16_MIN;
	volatile uint16_t x555 = 30474U;
	volatile int16_t x556 = INT16_MIN;

    t136 = (((x553>x554)<=x555)/x556);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x559 = -5;
	uint64_t x560 = 7156583LLU;

    t137 = (((x557>x558)<=x559)/x560);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x561 = INT8_MAX;
	int64_t x563 = -110369LL;
	int16_t x564 = INT16_MIN;

    t138 = (((x561>x562)<=x563)/x564);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x569 = 6;
	int64_t x570 = INT64_MIN;
	int32_t x571 = 226;
	int32_t x572 = INT32_MIN;
	int32_t t139 = 4137420;

    t139 = (((x569>x570)<=x571)/x572);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x573 = INT16_MAX;
	uint64_t x574 = 87007983910577328LLU;
	uint64_t x575 = 227628116905764LLU;
	int8_t x576 = -10;
	static int32_t t140 = -6713489;

    t140 = (((x573>x574)<=x575)/x576);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x579 = 0LLU;
	static volatile int16_t x580 = -1;

    t141 = (((x577>x578)<=x579)/x580);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x581 = INT32_MIN;
	uint32_t x582 = 381383872U;
	int8_t x583 = INT8_MIN;
	uint32_t x584 = 46528U;

    t142 = (((x581>x582)<=x583)/x584);

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x586 = 0U;
	volatile uint8_t x587 = 0U;
	int16_t x588 = -1;
	int32_t t143 = 461;

    t143 = (((x585>x586)<=x587)/x588);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x589 = INT16_MAX;
	uint64_t x590 = 505563059765LLU;
	int16_t x591 = -10;
	volatile int8_t x592 = -1;
	static volatile int32_t t144 = -510459112;

    t144 = (((x589>x590)<=x591)/x592);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x594 = INT64_MAX;
	volatile int32_t x595 = INT32_MIN;
	int32_t x596 = INT32_MIN;
	int32_t t145 = 1;

    t145 = (((x593>x594)<=x595)/x596);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x601 = 125U;
	static int8_t x602 = INT8_MAX;
	volatile uint8_t x603 = 5U;
	static uint16_t x604 = UINT16_MAX;
	int32_t t146 = 43771;

    t146 = (((x601>x602)<=x603)/x604);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x605 = -23;
	volatile int32_t x606 = INT32_MIN;
	static int32_t x607 = 239438;
	int16_t x608 = INT16_MIN;

    t147 = (((x605>x606)<=x607)/x608);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x609 = 1874;
	int32_t x610 = -1;
	volatile uint32_t t148 = 3930041U;

    t148 = (((x609>x610)<=x611)/x612);

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x613 = 102396940LL;
	int64_t x614 = INT64_MIN;
	volatile int32_t x615 = -1;
	int16_t x616 = INT16_MIN;
	volatile int32_t t149 = -20906355;

    t149 = (((x613>x614)<=x615)/x616);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x619 = -1LL;
	int64_t x620 = 85011375LL;
	volatile int64_t t150 = 42842018819446539LL;

    t150 = (((x617>x618)<=x619)/x620);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x622 = INT8_MAX;
	int64_t x623 = INT64_MAX;
	int8_t x624 = INT8_MIN;
	volatile int32_t t151 = 5;

    t151 = (((x621>x622)<=x623)/x624);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x626 = INT32_MIN;
	static int16_t x627 = INT16_MAX;
	int16_t x628 = -1;
	static int32_t t152 = -3840;

    t152 = (((x625>x626)<=x627)/x628);

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x629 = INT16_MAX;
	int64_t x630 = INT64_MIN;
	static uint16_t x632 = 1U;
	static volatile int32_t t153 = 4179315;

    t153 = (((x629>x630)<=x631)/x632);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x633 = INT16_MIN;
	int8_t x634 = 9;
	static int64_t x635 = 1192973921589735079LL;
	int32_t t154 = 190630;

    t154 = (((x633>x634)<=x635)/x636);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x641 = -1;
	int64_t x642 = -817143564499483479LL;
	static volatile int64_t x644 = INT64_MIN;
	volatile int64_t t155 = -1666350464177531LL;

    t155 = (((x641>x642)<=x643)/x644);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x645 = -68699;
	static volatile int64_t x648 = -63LL;
	static int64_t t156 = -2136787645927449813LL;

    t156 = (((x645>x646)<=x647)/x648);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x649 = UINT32_MAX;
	volatile int64_t x650 = 2638524975905243514LL;
	static int16_t x652 = INT16_MIN;
	static int32_t t157 = -626437378;

    t157 = (((x649>x650)<=x651)/x652);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x653 = 38576095LLU;
	uint32_t x654 = 2191U;
	int16_t x655 = INT16_MIN;

    t158 = (((x653>x654)<=x655)/x656);

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x657 = UINT32_MAX;
	static int16_t x659 = -534;
	uint64_t t159 = 7813627291LLU;

    t159 = (((x657>x658)<=x659)/x660);

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x661 = -487443940;
	uint32_t x662 = UINT32_MAX;
	volatile int64_t x664 = -1LL;

    t160 = (((x661>x662)<=x663)/x664);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x665 = 192;
	static int8_t x666 = INT8_MIN;
	static uint64_t x667 = UINT64_MAX;
	volatile int32_t t161 = -18962;

    t161 = (((x665>x666)<=x667)/x668);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x669 = 1778307LLU;
	int8_t x671 = -1;
	volatile int16_t x672 = INT16_MAX;

    t162 = (((x669>x670)<=x671)/x672);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x673 = -1;
	int64_t x674 = -1LL;
	volatile int32_t x675 = INT32_MAX;
	int16_t x676 = -1;

    t163 = (((x673>x674)<=x675)/x676);

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x682 = 62U;
	uint8_t x684 = 4U;
	volatile int32_t t164 = -1;

    t164 = (((x681>x682)<=x683)/x684);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x685 = INT64_MAX;
	volatile uint32_t x686 = UINT32_MAX;
	int16_t x687 = INT16_MAX;
	uint8_t x688 = 95U;
	volatile int32_t t165 = 49;

    t165 = (((x685>x686)<=x687)/x688);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint32_t x689 = 317830U;
	int64_t x690 = -1LL;
	volatile int32_t x691 = INT32_MAX;
	int32_t x692 = -1;
	volatile int32_t t166 = -193096276;

    t166 = (((x689>x690)<=x691)/x692);

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x693 = -720515237031766962LL;
	int64_t x694 = -1LL;
	uint64_t x695 = UINT64_MAX;
	int16_t x696 = INT16_MAX;
	int32_t t167 = 48841;

    t167 = (((x693>x694)<=x695)/x696);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x697 = -1;
	int16_t x699 = 51;
	volatile int8_t x700 = -1;
	int32_t t168 = -342929530;

    t168 = (((x697>x698)<=x699)/x700);

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x701 = -131716096;
	int32_t x702 = INT32_MAX;
	int32_t x704 = -1;
	volatile int32_t t169 = -129227;

    t169 = (((x701>x702)<=x703)/x704);

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x705 = -1;
	int16_t x707 = INT16_MAX;
	int64_t x708 = 17518686586632LL;
	int64_t t170 = 119305918825007547LL;

    t170 = (((x705>x706)<=x707)/x708);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x709 = INT8_MIN;
	int32_t x711 = -1;
	uint64_t x712 = 44694286228319LLU;

    t171 = (((x709>x710)<=x711)/x712);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x713 = 46618U;
	int16_t x714 = INT16_MIN;
	static uint16_t x715 = 3890U;
	uint16_t x716 = 4378U;
	int32_t t172 = -3884;

    t172 = (((x713>x714)<=x715)/x716);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x717 = -1LL;
	static int8_t x718 = -1;
	uint32_t x719 = 8194U;

    t173 = (((x717>x718)<=x719)/x720);

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x721 = UINT64_MAX;
	uint16_t x722 = UINT16_MAX;
	int8_t x723 = INT8_MAX;
	static int8_t x724 = -4;
	volatile int32_t t174 = 67394;

    t174 = (((x721>x722)<=x723)/x724);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x725 = -1;
	int32_t x726 = INT32_MAX;
	static int8_t x727 = INT8_MIN;
	static int8_t x728 = -39;
	int32_t t175 = -938;

    t175 = (((x725>x726)<=x727)/x728);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x729 = -40147;
	static int8_t x730 = INT8_MIN;
	int8_t x732 = INT8_MAX;
	int32_t t176 = -12709344;

    t176 = (((x729>x730)<=x731)/x732);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x733 = 1;
	int16_t x734 = 2;
	int64_t t177 = -11LL;

    t177 = (((x733>x734)<=x735)/x736);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x737 = 6487LLU;
	int32_t x738 = -1;
	int16_t x739 = 1671;
	int8_t x740 = INT8_MIN;

    t178 = (((x737>x738)<=x739)/x740);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x741 = -438391;
	int32_t x742 = INT32_MIN;
	static uint16_t x743 = 12U;
	int32_t x744 = INT32_MIN;
	volatile int32_t t179 = -28222009;

    t179 = (((x741>x742)<=x743)/x744);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x745 = 10U;
	volatile uint8_t x746 = UINT8_MAX;
	static int16_t x747 = 39;
	volatile int32_t t180 = 119356634;

    t180 = (((x745>x746)<=x747)/x748);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x749 = 120U;
	int32_t x752 = INT32_MAX;
	volatile int32_t t181 = 10817594;

    t181 = (((x749>x750)<=x751)/x752);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x753 = 68U;
	volatile int64_t x754 = 32068917971LL;
	int64_t x755 = INT64_MAX;
	static uint8_t x756 = 14U;
	int32_t t182 = 0;

    t182 = (((x753>x754)<=x755)/x756);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x758 = INT16_MIN;
	int32_t x760 = INT32_MIN;
	int32_t t183 = 1;

    t183 = (((x757>x758)<=x759)/x760);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x761 = 11U;
	uint32_t x762 = UINT32_MAX;
	int32_t x763 = INT32_MAX;
	int64_t x764 = -3160285LL;
	static int64_t t184 = -34245774596LL;

    t184 = (((x761>x762)<=x763)/x764);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x765 = -1;
	int8_t x767 = -1;
	int32_t t185 = 653;

    t185 = (((x765>x766)<=x767)/x768);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x770 = UINT16_MAX;
	int32_t x772 = INT32_MAX;

    t186 = (((x769>x770)<=x771)/x772);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x773 = INT64_MIN;
	int8_t x775 = INT8_MIN;
	volatile int64_t t187 = -285259LL;

    t187 = (((x773>x774)<=x775)/x776);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x777 = UINT16_MAX;
	int16_t x778 = -1;
	volatile uint64_t x779 = 40LLU;
	uint64_t x780 = 1419930202LLU;
	volatile uint64_t t188 = 17180LLU;

    t188 = (((x777>x778)<=x779)/x780);

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x782 = UINT16_MAX;
	volatile uint16_t x783 = UINT16_MAX;
	int8_t x784 = INT8_MIN;
	int32_t t189 = -7124;

    t189 = (((x781>x782)<=x783)/x784);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x785 = 29;
	int8_t x786 = -1;
	int16_t x788 = 3581;
	volatile int32_t t190 = 301284;

    t190 = (((x785>x786)<=x787)/x788);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x789 = INT64_MIN;
	int64_t x790 = INT64_MIN;
	static int16_t x791 = 85;
	uint64_t x792 = UINT64_MAX;

    t191 = (((x789>x790)<=x791)/x792);

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x793 = 10;
	volatile int8_t x794 = INT8_MAX;
	uint16_t x795 = UINT16_MAX;
	volatile uint32_t t192 = 4263123U;

    t192 = (((x793>x794)<=x795)/x796);

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint32_t x797 = UINT32_MAX;
	uint8_t x798 = UINT8_MAX;
	int8_t x799 = INT8_MIN;
	int64_t x800 = INT64_MIN;
	static volatile int64_t t193 = -13161943803865LL;

    t193 = (((x797>x798)<=x799)/x800);

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x801 = INT64_MAX;
	static uint8_t x803 = UINT8_MAX;
	int32_t x804 = INT32_MAX;
	int32_t t194 = 22558;

    t194 = (((x801>x802)<=x803)/x804);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x805 = INT16_MIN;
	uint16_t x806 = UINT16_MAX;
	uint8_t x807 = 4U;
	static int64_t x808 = -1LL;
	volatile int64_t t195 = 44080064LL;

    t195 = (((x805>x806)<=x807)/x808);

    if (t195 != -1LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x809 = 0U;
	static volatile int8_t x810 = -1;
	int32_t x811 = -1;

    t196 = (((x809>x810)<=x811)/x812);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x814 = 472131LL;
	int8_t x815 = INT8_MIN;
	int32_t x816 = -1;
	static int32_t t197 = -32346;

    t197 = (((x813>x814)<=x815)/x816);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x817 = UINT8_MAX;
	uint32_t x818 = UINT32_MAX;
	uint32_t x819 = 56U;
	static volatile uint8_t x820 = 32U;
	volatile int32_t t198 = 10984;

    t198 = (((x817>x818)<=x819)/x820);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x821 = INT64_MAX;
	volatile uint32_t x822 = 39088517U;
	int8_t x823 = -1;
	uint8_t x824 = UINT8_MAX;
	int32_t t199 = -238695881;

    t199 = (((x821>x822)<=x823)/x824);

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

