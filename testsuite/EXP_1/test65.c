
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

volatile int16_t x1 = INT16_MIN;
int32_t x5 = 6025262;
static int8_t x10 = -1;
uint16_t x11 = UINT16_MAX;
int64_t x16 = INT64_MIN;
int32_t t3 = 1;
int32_t x20 = INT32_MIN;
volatile int32_t t4 = -11;
uint16_t x32 = 1U;
static int8_t x35 = -1;
volatile int32_t t7 = 2544313;
int16_t x42 = 0;
volatile int32_t t9 = -352934310;
uint16_t x45 = UINT16_MAX;
volatile int32_t t10 = -463978813;
volatile uint32_t x53 = 3809492U;
static int64_t x60 = INT64_MAX;
int8_t x61 = -1;
volatile int32_t t15 = 1;
int32_t t16 = -361;
int32_t x73 = -1;
uint8_t x79 = UINT8_MAX;
uint16_t x81 = 0U;
volatile uint32_t x82 = 188U;
int32_t t20 = 405233707;
int64_t x93 = -1LL;
uint64_t x103 = UINT64_MAX;
volatile int32_t t24 = -663978;
int8_t x117 = INT8_MIN;
volatile uint8_t x118 = 114U;
int16_t x122 = 1;
volatile int32_t t27 = -22340;
int32_t x128 = INT32_MAX;
volatile int32_t t28 = 1;
int32_t t29 = 948209620;
int64_t x138 = INT64_MAX;
static int32_t x151 = INT32_MAX;
int32_t x153 = INT32_MAX;
uint8_t x158 = 1U;
int16_t x163 = INT16_MAX;
volatile int32_t t37 = -647;
int8_t x171 = INT8_MIN;
static int64_t x175 = 373421248183LL;
int8_t x178 = INT8_MIN;
volatile int32_t t41 = 87878655;
uint16_t x183 = 7U;
int32_t t42 = 70;
static uint64_t x185 = UINT64_MAX;
uint64_t x190 = 30806LLU;
static volatile int8_t x201 = INT8_MAX;
uint16_t x203 = 410U;
volatile int32_t t46 = 716070;
volatile int64_t x209 = -3643582LL;
int32_t t48 = -29;
uint32_t x218 = 10U;
uint8_t x228 = 56U;
int8_t x231 = INT8_MIN;
uint16_t x236 = 17U;
volatile int32_t x249 = INT32_MAX;
int64_t x251 = -24112LL;
uint16_t x264 = 2536U;
int64_t x267 = 1048297077306LL;
volatile int32_t x269 = INT32_MIN;
volatile uint32_t x276 = 3312238U;
volatile int32_t t62 = -311;
uint16_t x278 = 1142U;
int8_t x279 = 1;
static int16_t x280 = INT16_MIN;
uint32_t x282 = UINT32_MAX;
volatile int16_t x283 = -20;
int8_t x285 = -1;
uint8_t x288 = 4U;
int8_t x291 = INT8_MIN;
volatile int32_t t67 = -32560922;
int16_t x301 = INT16_MAX;
int64_t x304 = INT64_MAX;
int8_t x319 = -1;
uint8_t x332 = 28U;
static volatile int32_t t74 = -1;
int32_t x334 = INT32_MIN;
int8_t x341 = INT8_MAX;
int64_t x350 = 1343099494377LL;
volatile int32_t t84 = 72445518;
volatile uint64_t x383 = UINT64_MAX;
int32_t t86 = 326455877;
uint16_t x385 = 74U;
int16_t x389 = INT16_MIN;
volatile int32_t t88 = 3692332;
volatile uint8_t x394 = UINT8_MAX;
int16_t x397 = INT16_MAX;
uint32_t x398 = UINT32_MAX;
int32_t t90 = -38;
int8_t x409 = INT8_MIN;
static uint16_t x415 = 27U;
volatile int32_t t93 = 45;
volatile int32_t t94 = 25;
int32_t x423 = INT32_MAX;
int16_t x435 = INT16_MIN;
volatile int64_t x438 = 505338358112LL;
int32_t x440 = 24940;
int64_t x448 = INT64_MIN;
static int32_t t101 = -216;
int8_t x465 = -1;
uint64_t x469 = 118218606LLU;
static volatile int8_t x472 = INT8_MAX;
uint16_t x476 = 3156U;
int32_t t108 = -1;
uint32_t x479 = UINT32_MAX;
uint64_t x482 = 183995401LLU;
static volatile int16_t x486 = INT16_MAX;
uint8_t x491 = 9U;
uint64_t x492 = 504757LLU;
int32_t x501 = 1152;
int32_t x502 = -1;
static uint64_t x504 = UINT64_MAX;
int32_t t117 = 240310143;
volatile uint8_t x525 = UINT8_MAX;
int16_t x528 = -1640;
int16_t x534 = INT16_MAX;
int8_t x536 = -1;
int32_t x539 = INT32_MAX;
int8_t x540 = 4;
static int32_t t121 = 0;
int32_t x542 = INT32_MIN;
uint16_t x548 = 43U;
int8_t x550 = 1;
static int8_t x553 = -1;
int32_t x554 = 90;
volatile int32_t t125 = 1334;
int8_t x557 = INT8_MAX;
uint64_t x558 = 10LLU;
volatile int32_t t126 = -663;
int16_t x564 = INT16_MIN;
int32_t t127 = -89;
int64_t x567 = -9761948LL;
volatile int16_t x570 = INT16_MIN;
static int32_t t131 = 105;
int8_t x584 = -15;
int16_t x589 = -2794;
uint32_t x590 = 227U;
volatile int32_t t134 = -253583;
static int64_t x599 = INT64_MIN;
int16_t x603 = INT16_MAX;
uint64_t x617 = 603589779368LLU;
int64_t x620 = -2830481589963289LL;
uint16_t x623 = 15197U;
static int64_t x630 = INT64_MIN;
int32_t x631 = 2931;
int32_t t144 = 97919;
static volatile int64_t x663 = INT64_MIN;
volatile int32_t t148 = -7749140;
int64_t x674 = 15LL;
int8_t x677 = -10;
int8_t x678 = INT8_MAX;
volatile int8_t x684 = 12;
volatile int64_t x685 = -1LL;
uint16_t x688 = UINT16_MAX;
volatile int32_t t153 = 1974;
int8_t x703 = 63;
volatile int64_t x719 = INT64_MAX;
volatile uint8_t x722 = 0U;
volatile int32_t t159 = 3949892;
int64_t x726 = 802868045714256931LL;
int32_t x739 = INT32_MAX;
int8_t x744 = INT8_MAX;
int16_t x746 = -2;
volatile int64_t x756 = INT64_MAX;
volatile int32_t x766 = -1;
volatile int8_t x768 = INT8_MIN;
volatile uint16_t x770 = 0U;
int32_t t169 = -3560;
int8_t x784 = -1;
int32_t t171 = -204;
int32_t x786 = INT32_MIN;
uint32_t x795 = UINT32_MAX;
static int32_t t175 = 5;
static int16_t x806 = INT16_MAX;
int16_t x808 = INT16_MIN;
int32_t x809 = 115662581;
int64_t x819 = INT64_MIN;
static volatile int32_t t180 = -2682592;
volatile int32_t t181 = 1;
static volatile uint64_t x830 = UINT64_MAX;
volatile int64_t x839 = INT64_MIN;
static int32_t x840 = 5513065;
int32_t x847 = INT32_MIN;
int64_t x848 = -1413388821026368LL;
uint64_t x853 = 8410016498635167986LLU;
int32_t t190 = 903001;
static int64_t x872 = -227241693LL;
int32_t t192 = 70437153;
int64_t x873 = -1LL;
uint16_t x882 = 11816U;
volatile uint32_t x888 = 1942479600U;
int16_t x899 = -23;
int32_t t198 = 233668;


void f0(void) {
    	volatile int64_t x2 = 521LL;
	static int64_t x3 = INT64_MIN;
	uint8_t x4 = UINT8_MAX;
	static int32_t t0 = 229177818;

    t0 = (((x1+x2)%x3)>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = INT64_MIN;
	volatile int16_t x7 = INT16_MAX;
	uint16_t x8 = 28U;
	volatile int32_t t1 = 1;

    t1 = (((x5+x6)%x7)>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 808076069U;
	static uint64_t x12 = 2939066LLU;
	int32_t t2 = 1173;

    t2 = (((x9+x10)%x11)>x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x13 = 74U;
	uint16_t x14 = UINT16_MAX;
	volatile int64_t x15 = -1611LL;

    t3 = (((x13+x14)%x15)>x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	int8_t x18 = 27;
	int64_t x19 = INT64_MIN;

    t4 = (((x17+x18)%x19)>x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x21 = INT8_MAX;
	uint64_t x22 = UINT64_MAX;
	uint64_t x23 = UINT64_MAX;
	volatile uint32_t x24 = 2U;
	static int32_t t5 = -58615;

    t5 = (((x21+x22)%x23)>x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x29 = INT16_MIN;
	uint8_t x30 = UINT8_MAX;
	int8_t x31 = -1;
	volatile int32_t t6 = 165213;

    t6 = (((x29+x30)%x31)>x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = INT16_MAX;
	int32_t x34 = -36;
	uint32_t x36 = 55956723U;

    t7 = (((x33+x34)%x35)>x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x37 = 2279111LLU;
	static volatile int16_t x38 = -111;
	uint8_t x39 = 73U;
	uint8_t x40 = 18U;
	volatile int32_t t8 = -79363576;

    t8 = (((x37+x38)%x39)>x40);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x41 = -1;
	uint64_t x43 = 21071914LLU;
	uint64_t x44 = 3359LLU;

    t9 = (((x41+x42)%x43)>x44);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x46 = 0U;
	int16_t x47 = -995;
	static int8_t x48 = INT8_MIN;

    t10 = (((x45+x46)%x47)>x48);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x49 = INT8_MIN;
	static volatile int16_t x50 = 0;
	int64_t x51 = INT64_MIN;
	uint32_t x52 = 2119968U;
	static volatile int32_t t11 = -41407214;

    t11 = (((x49+x50)%x51)>x52);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x54 = INT64_MIN;
	uint32_t x55 = UINT32_MAX;
	int64_t x56 = INT64_MAX;
	volatile int32_t t12 = 5979;

    t12 = (((x53+x54)%x55)>x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x57 = INT16_MAX;
	int16_t x58 = 1;
	volatile uint8_t x59 = 7U;
	volatile int32_t t13 = 192412;

    t13 = (((x57+x58)%x59)>x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x62 = -5;
	int64_t x63 = -1843LL;
	int32_t x64 = 4090703;
	volatile int32_t t14 = -19023;

    t14 = (((x61+x62)%x63)>x64);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x65 = INT16_MIN;
	volatile int8_t x66 = INT8_MAX;
	static int64_t x67 = INT64_MAX;
	static int16_t x68 = INT16_MIN;

    t15 = (((x65+x66)%x67)>x68);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x69 = UINT16_MAX;
	uint16_t x70 = 161U;
	int64_t x71 = -1LL;
	uint64_t x72 = 436922912602LLU;

    t16 = (((x69+x70)%x71)>x72);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint16_t x74 = 4U;
	static volatile uint8_t x75 = 5U;
	int16_t x76 = -1;
	int32_t t17 = 31771;

    t17 = (((x73+x74)%x75)>x76);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x77 = 249104041LL;
	volatile int64_t x78 = -1LL;
	int16_t x80 = INT16_MIN;
	static int32_t t18 = -256;

    t18 = (((x77+x78)%x79)>x80);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x83 = 98U;
	int64_t x84 = -1LL;
	volatile int32_t t19 = 172786;

    t19 = (((x81+x82)%x83)>x84);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x89 = 3192270LLU;
	static uint16_t x90 = 252U;
	uint32_t x91 = 120455163U;
	int8_t x92 = 0;

    t20 = (((x89+x90)%x91)>x92);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x94 = 489897426LLU;
	static int16_t x95 = -553;
	static int64_t x96 = -1LL;
	volatile int32_t t21 = 3053135;

    t21 = (((x93+x94)%x95)>x96);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x101 = UINT16_MAX;
	int64_t x102 = 6LL;
	int64_t x104 = INT64_MIN;
	int32_t t22 = 7650534;

    t22 = (((x101+x102)%x103)>x104);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x105 = UINT8_MAX;
	uint8_t x106 = 0U;
	int32_t x107 = INT32_MIN;
	int64_t x108 = -1LL;
	volatile int32_t t23 = -19490;

    t23 = (((x105+x106)%x107)>x108);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x109 = INT8_MIN;
	static volatile int16_t x110 = -1;
	static int16_t x111 = INT16_MIN;
	uint64_t x112 = 1LLU;

    t24 = (((x109+x110)%x111)>x112);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x113 = 0;
	static int64_t x114 = INT64_MIN;
	uint8_t x115 = 84U;
	int16_t x116 = INT16_MIN;
	int32_t t25 = -5510923;

    t25 = (((x113+x114)%x115)>x116);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x119 = INT8_MAX;
	uint32_t x120 = 7567405U;
	int32_t t26 = 1752374;

    t26 = (((x117+x118)%x119)>x120);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x121 = INT16_MIN;
	int8_t x123 = INT8_MAX;
	int16_t x124 = 4800;

    t27 = (((x121+x122)%x123)>x124);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x125 = 7U;
	int8_t x126 = -1;
	uint32_t x127 = 90412U;

    t28 = (((x125+x126)%x127)>x128);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x129 = 3076073322971824475LLU;
	static int32_t x130 = INT32_MAX;
	static int16_t x131 = INT16_MAX;
	volatile int16_t x132 = 3544;

    t29 = (((x129+x130)%x131)>x132);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x133 = 28U;
	int64_t x134 = INT64_MIN;
	uint16_t x135 = 15867U;
	int16_t x136 = INT16_MIN;
	int32_t t30 = 3804;

    t30 = (((x133+x134)%x135)>x136);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x137 = INT8_MIN;
	int32_t x139 = 571;
	int16_t x140 = INT16_MIN;
	volatile int32_t t31 = 1;

    t31 = (((x137+x138)%x139)>x140);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x141 = 853052;
	uint32_t x142 = UINT32_MAX;
	static uint8_t x143 = 20U;
	uint32_t x144 = UINT32_MAX;
	int32_t t32 = -182501;

    t32 = (((x141+x142)%x143)>x144);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x145 = -1;
	volatile uint64_t x146 = UINT64_MAX;
	static int16_t x147 = INT16_MAX;
	int16_t x148 = INT16_MAX;
	int32_t t33 = 5348;

    t33 = (((x145+x146)%x147)>x148);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x149 = INT8_MAX;
	int32_t x150 = -204499;
	uint64_t x152 = UINT64_MAX;
	static volatile int32_t t34 = 101;

    t34 = (((x149+x150)%x151)>x152);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x154 = INT64_MIN;
	int32_t x155 = INT32_MIN;
	volatile int32_t x156 = INT32_MIN;
	volatile int32_t t35 = -211633;

    t35 = (((x153+x154)%x155)>x156);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x157 = INT64_MIN;
	volatile int16_t x159 = INT16_MIN;
	uint32_t x160 = 18076U;
	volatile int32_t t36 = -20720;

    t36 = (((x157+x158)%x159)>x160);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x161 = 1U;
	static int8_t x162 = INT8_MAX;
	int8_t x164 = INT8_MIN;

    t37 = (((x161+x162)%x163)>x164);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x165 = INT16_MAX;
	static int32_t x166 = -6619176;
	volatile int16_t x167 = INT16_MIN;
	static uint32_t x168 = 95637638U;
	int32_t t38 = 144;

    t38 = (((x165+x166)%x167)>x168);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x169 = -1;
	volatile uint64_t x170 = UINT64_MAX;
	int32_t x172 = INT32_MIN;
	int32_t t39 = 0;

    t39 = (((x169+x170)%x171)>x172);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x173 = 117U;
	int32_t x174 = 73;
	volatile int16_t x176 = INT16_MIN;
	static volatile int32_t t40 = 9978;

    t40 = (((x173+x174)%x175)>x176);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x177 = -5062432;
	static volatile int8_t x179 = 6;
	static volatile int16_t x180 = -1;

    t41 = (((x177+x178)%x179)>x180);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x181 = INT8_MIN;
	uint32_t x182 = UINT32_MAX;
	static int32_t x184 = 1;

    t42 = (((x181+x182)%x183)>x184);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x186 = 628;
	uint32_t x187 = UINT32_MAX;
	volatile int16_t x188 = 616;
	int32_t t43 = 3;

    t43 = (((x185+x186)%x187)>x188);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x189 = INT32_MIN;
	uint8_t x191 = 30U;
	uint8_t x192 = UINT8_MAX;
	static volatile int32_t t44 = 264238659;

    t44 = (((x189+x190)%x191)>x192);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint16_t x197 = 1790U;
	uint8_t x198 = UINT8_MAX;
	int64_t x199 = -1LL;
	static volatile int64_t x200 = 691097LL;
	volatile int32_t t45 = 8;

    t45 = (((x197+x198)%x199)>x200);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x202 = 9;
	volatile uint32_t x204 = UINT32_MAX;

    t46 = (((x201+x202)%x203)>x204);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint8_t x205 = UINT8_MAX;
	int16_t x206 = INT16_MIN;
	uint8_t x207 = 3U;
	uint32_t x208 = 68U;
	int32_t t47 = 121;

    t47 = (((x205+x206)%x207)>x208);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x210 = INT32_MAX;
	uint8_t x211 = 62U;
	int32_t x212 = INT32_MIN;

    t48 = (((x209+x210)%x211)>x212);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x213 = -1;
	int32_t x214 = -1;
	int32_t x215 = 27;
	int8_t x216 = -1;
	int32_t t49 = -1;

    t49 = (((x213+x214)%x215)>x216);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x217 = UINT16_MAX;
	volatile uint8_t x219 = 1U;
	int8_t x220 = INT8_MIN;
	volatile int32_t t50 = 411;

    t50 = (((x217+x218)%x219)>x220);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x225 = INT8_MAX;
	uint16_t x226 = 21049U;
	int16_t x227 = INT16_MIN;
	volatile int32_t t51 = -46667528;

    t51 = (((x225+x226)%x227)>x228);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x229 = 857461190;
	volatile uint32_t x230 = 13448363U;
	int16_t x232 = INT16_MAX;
	volatile int32_t t52 = -163;

    t52 = (((x229+x230)%x231)>x232);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x233 = -1;
	int32_t x234 = -501107;
	static int16_t x235 = 31;
	int32_t t53 = -1;

    t53 = (((x233+x234)%x235)>x236);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x237 = 2457;
	volatile int16_t x238 = -1;
	int16_t x239 = -1015;
	uint64_t x240 = 643728215LLU;
	static volatile int32_t t54 = 120963;

    t54 = (((x237+x238)%x239)>x240);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint32_t x241 = 46374028U;
	static uint32_t x242 = UINT32_MAX;
	int32_t x243 = INT32_MIN;
	int8_t x244 = INT8_MAX;
	int32_t t55 = 10996221;

    t55 = (((x241+x242)%x243)>x244);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x245 = INT8_MIN;
	uint8_t x246 = 15U;
	int64_t x247 = 1011LL;
	volatile uint64_t x248 = 419482710514035LLU;
	static volatile int32_t t56 = -1;

    t56 = (((x245+x246)%x247)>x248);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x250 = -543851LL;
	int64_t x252 = INT64_MIN;
	int32_t t57 = -83119;

    t57 = (((x249+x250)%x251)>x252);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x257 = 37U;
	volatile int8_t x258 = -8;
	int64_t x259 = 2708638855620533360LL;
	uint16_t x260 = UINT16_MAX;
	static volatile int32_t t58 = -652;

    t58 = (((x257+x258)%x259)>x260);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x261 = 1224;
	static uint16_t x262 = 208U;
	int64_t x263 = INT64_MAX;
	volatile int32_t t59 = 0;

    t59 = (((x261+x262)%x263)>x264);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x265 = INT32_MIN;
	int64_t x266 = 628089149000LL;
	uint32_t x268 = 3U;
	volatile int32_t t60 = 5;

    t60 = (((x265+x266)%x267)>x268);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x270 = 593967483548LLU;
	static volatile uint16_t x271 = UINT16_MAX;
	volatile uint32_t x272 = 365U;
	volatile int32_t t61 = 176063603;

    t61 = (((x269+x270)%x271)>x272);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x273 = -1LL;
	uint16_t x274 = UINT16_MAX;
	uint16_t x275 = 6U;

    t62 = (((x273+x274)%x275)>x276);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x277 = 1;
	volatile int32_t t63 = -56916550;

    t63 = (((x277+x278)%x279)>x280);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x281 = INT8_MAX;
	int32_t x284 = 20;
	volatile int32_t t64 = -7789893;

    t64 = (((x281+x282)%x283)>x284);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x286 = 686879LL;
	static int64_t x287 = INT64_MIN;
	static int32_t t65 = -3;

    t65 = (((x285+x286)%x287)>x288);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x289 = INT32_MAX;
	int64_t x290 = INT64_MIN;
	int16_t x292 = INT16_MIN;
	volatile int32_t t66 = -212165614;

    t66 = (((x289+x290)%x291)>x292);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x293 = -1;
	uint32_t x294 = UINT32_MAX;
	uint32_t x295 = 1U;
	static uint8_t x296 = 1U;

    t67 = (((x293+x294)%x295)>x296);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x297 = 4LLU;
	uint16_t x298 = UINT16_MAX;
	int8_t x299 = -1;
	uint32_t x300 = 217776U;
	volatile int32_t t68 = 417443596;

    t68 = (((x297+x298)%x299)>x300);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x302 = UINT16_MAX;
	static int16_t x303 = INT16_MIN;
	volatile int32_t t69 = -62;

    t69 = (((x301+x302)%x303)>x304);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x305 = -1;
	int8_t x306 = -6;
	uint64_t x307 = UINT64_MAX;
	int16_t x308 = 10416;
	volatile int32_t t70 = -148;

    t70 = (((x305+x306)%x307)>x308);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x313 = 167305U;
	int32_t x314 = INT32_MIN;
	volatile uint8_t x315 = 14U;
	volatile uint64_t x316 = UINT64_MAX;
	volatile int32_t t71 = 38688;

    t71 = (((x313+x314)%x315)>x316);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint16_t x317 = 22941U;
	uint16_t x318 = 8514U;
	static int32_t x320 = INT32_MIN;
	volatile int32_t t72 = -14714;

    t72 = (((x317+x318)%x319)>x320);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x321 = 76365910U;
	static int8_t x322 = INT8_MIN;
	uint32_t x323 = UINT32_MAX;
	int8_t x324 = -1;
	int32_t t73 = 62300;

    t73 = (((x321+x322)%x323)>x324);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x329 = UINT64_MAX;
	static int16_t x330 = -203;
	static volatile int16_t x331 = -1;

    t74 = (((x329+x330)%x331)>x332);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x333 = 1LL;
	int8_t x335 = INT8_MAX;
	int8_t x336 = INT8_MAX;
	int32_t t75 = 7600;

    t75 = (((x333+x334)%x335)>x336);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x337 = -1;
	static int16_t x338 = INT16_MIN;
	uint8_t x339 = 62U;
	int16_t x340 = -131;
	int32_t t76 = -169704;

    t76 = (((x337+x338)%x339)>x340);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x342 = -19979LL;
	volatile int64_t x343 = INT64_MIN;
	int16_t x344 = -1;
	static int32_t t77 = -74677;

    t77 = (((x341+x342)%x343)>x344);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x349 = INT8_MAX;
	volatile int16_t x351 = -12410;
	volatile uint64_t x352 = 4315026LLU;
	int32_t t78 = 11970;

    t78 = (((x349+x350)%x351)>x352);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x353 = 2U;
	int32_t x354 = INT32_MIN;
	volatile int8_t x355 = -2;
	uint16_t x356 = 7U;
	volatile int32_t t79 = 1;

    t79 = (((x353+x354)%x355)>x356);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x357 = 57U;
	int16_t x358 = INT16_MIN;
	volatile uint32_t x359 = 838U;
	int32_t x360 = INT32_MIN;
	volatile int32_t t80 = 825;

    t80 = (((x357+x358)%x359)>x360);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x361 = 1;
	int64_t x362 = -1LL;
	static int16_t x363 = -1;
	static uint64_t x364 = UINT64_MAX;
	int32_t t81 = -1279;

    t81 = (((x361+x362)%x363)>x364);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x365 = INT16_MIN;
	int32_t x366 = 471554;
	uint8_t x367 = 72U;
	int32_t x368 = 2105721;
	volatile int32_t t82 = -7;

    t82 = (((x365+x366)%x367)>x368);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x369 = 10879;
	static uint8_t x370 = UINT8_MAX;
	static int64_t x371 = INT64_MAX;
	volatile int8_t x372 = INT8_MIN;
	int32_t t83 = 8117;

    t83 = (((x369+x370)%x371)>x372);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x373 = UINT8_MAX;
	uint8_t x374 = UINT8_MAX;
	int64_t x375 = INT64_MIN;
	static int32_t x376 = -1;

    t84 = (((x373+x374)%x375)>x376);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x377 = INT8_MIN;
	int64_t x378 = -1LL;
	int64_t x379 = INT64_MIN;
	static int32_t x380 = -175;
	volatile int32_t t85 = -82;

    t85 = (((x377+x378)%x379)>x380);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x381 = -1LL;
	uint8_t x382 = 67U;
	int8_t x384 = INT8_MIN;

    t86 = (((x381+x382)%x383)>x384);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x386 = -1LL;
	volatile uint32_t x387 = UINT32_MAX;
	volatile uint32_t x388 = UINT32_MAX;
	volatile int32_t t87 = -1844028;

    t87 = (((x385+x386)%x387)>x388);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x390 = INT64_MAX;
	int32_t x391 = -1;
	int32_t x392 = INT32_MIN;

    t88 = (((x389+x390)%x391)>x392);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x393 = UINT8_MAX;
	int64_t x395 = 332036020LL;
	uint16_t x396 = UINT16_MAX;
	volatile int32_t t89 = 2208;

    t89 = (((x393+x394)%x395)>x396);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x399 = INT8_MIN;
	uint32_t x400 = 341633866U;

    t90 = (((x397+x398)%x399)>x400);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x401 = UINT32_MAX;
	int8_t x402 = -1;
	int64_t x403 = -8671827LL;
	uint8_t x404 = UINT8_MAX;
	int32_t t91 = 3621;

    t91 = (((x401+x402)%x403)>x404);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x410 = INT16_MIN;
	int32_t x411 = INT32_MIN;
	volatile int64_t x412 = 3094313889LL;
	volatile int32_t t92 = 23108194;

    t92 = (((x409+x410)%x411)>x412);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x413 = INT8_MAX;
	int8_t x414 = -3;
	static int16_t x416 = INT16_MIN;

    t93 = (((x413+x414)%x415)>x416);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x417 = UINT16_MAX;
	uint16_t x418 = UINT16_MAX;
	uint16_t x419 = 57U;
	uint64_t x420 = 47812232393036620LLU;

    t94 = (((x417+x418)%x419)>x420);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x421 = -1;
	uint32_t x422 = UINT32_MAX;
	int64_t x424 = 6905340776228182LL;
	volatile int32_t t95 = 15;

    t95 = (((x421+x422)%x423)>x424);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x425 = UINT32_MAX;
	static uint64_t x426 = UINT64_MAX;
	volatile int8_t x427 = -2;
	static int16_t x428 = INT16_MAX;
	int32_t t96 = -225385015;

    t96 = (((x425+x426)%x427)>x428);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x429 = INT32_MIN;
	int64_t x430 = -1LL;
	static int64_t x431 = -1628376212LL;
	int16_t x432 = -1;
	int32_t t97 = -1113891;

    t97 = (((x429+x430)%x431)>x432);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x433 = 47760008585121609LL;
	int8_t x434 = INT8_MAX;
	static uint64_t x436 = 3472462899556LLU;
	volatile int32_t t98 = 106;

    t98 = (((x433+x434)%x435)>x436);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x437 = -1;
	volatile int16_t x439 = INT16_MIN;
	int32_t t99 = 14;

    t99 = (((x437+x438)%x439)>x440);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x441 = INT8_MIN;
	static uint8_t x442 = UINT8_MAX;
	int8_t x443 = INT8_MIN;
	int8_t x444 = INT8_MAX;
	volatile int32_t t100 = 4;

    t100 = (((x441+x442)%x443)>x444);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x445 = 1148LLU;
	volatile uint32_t x446 = 12U;
	static volatile int64_t x447 = -4159229287LL;

    t101 = (((x445+x446)%x447)>x448);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x449 = UINT32_MAX;
	static int16_t x450 = 54;
	static int64_t x451 = INT64_MAX;
	uint32_t x452 = 5U;
	volatile int32_t t102 = 9;

    t102 = (((x449+x450)%x451)>x452);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x453 = 6LLU;
	static volatile uint64_t x454 = 39865350438911289LLU;
	static int64_t x455 = INT64_MAX;
	int64_t x456 = -1LL;
	int32_t t103 = 1;

    t103 = (((x453+x454)%x455)>x456);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int32_t x457 = INT32_MAX;
	static int64_t x458 = INT64_MIN;
	int16_t x459 = INT16_MIN;
	uint8_t x460 = 83U;
	volatile int32_t t104 = -106401742;

    t104 = (((x457+x458)%x459)>x460);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x461 = -1;
	uint8_t x462 = 1U;
	int8_t x463 = INT8_MIN;
	volatile int8_t x464 = INT8_MIN;
	int32_t t105 = -506240;

    t105 = (((x461+x462)%x463)>x464);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x466 = UINT64_MAX;
	int32_t x467 = -38966993;
	int64_t x468 = INT64_MIN;
	int32_t t106 = 1;

    t106 = (((x465+x466)%x467)>x468);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x470 = INT16_MIN;
	int32_t x471 = INT32_MAX;
	int32_t t107 = -119352921;

    t107 = (((x469+x470)%x471)>x472);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x473 = 257836U;
	int64_t x474 = -6875386LL;
	uint8_t x475 = UINT8_MAX;

    t108 = (((x473+x474)%x475)>x476);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x477 = 17549U;
	int16_t x478 = 13;
	static volatile int16_t x480 = 26;
	volatile int32_t t109 = 2000;

    t109 = (((x477+x478)%x479)>x480);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x481 = INT16_MIN;
	int32_t x483 = 16254;
	uint64_t x484 = 3LLU;
	int32_t t110 = -15011;

    t110 = (((x481+x482)%x483)>x484);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x485 = 894;
	uint8_t x487 = UINT8_MAX;
	int8_t x488 = INT8_MIN;
	static int32_t t111 = -246869;

    t111 = (((x485+x486)%x487)>x488);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x489 = INT16_MIN;
	int8_t x490 = 1;
	volatile int32_t t112 = 50590;

    t112 = (((x489+x490)%x491)>x492);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x493 = 494U;
	static uint8_t x494 = UINT8_MAX;
	int16_t x495 = INT16_MAX;
	int8_t x496 = -1;
	int32_t t113 = 829711;

    t113 = (((x493+x494)%x495)>x496);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x497 = INT32_MIN;
	int16_t x498 = INT16_MAX;
	int16_t x499 = INT16_MAX;
	int16_t x500 = -4741;
	volatile int32_t t114 = -4;

    t114 = (((x497+x498)%x499)>x500);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x503 = 45;
	int32_t t115 = 1066725647;

    t115 = (((x501+x502)%x503)>x504);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x505 = UINT64_MAX;
	static volatile int16_t x506 = INT16_MAX;
	static volatile int64_t x507 = -338683777941339937LL;
	int32_t x508 = INT32_MIN;
	int32_t t116 = -1;

    t116 = (((x505+x506)%x507)>x508);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x509 = 25;
	int32_t x510 = INT32_MIN;
	int16_t x511 = INT16_MIN;
	uint16_t x512 = 4U;

    t117 = (((x509+x510)%x511)>x512);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x517 = INT8_MIN;
	uint32_t x518 = 222951U;
	int16_t x519 = 212;
	int16_t x520 = 401;
	static volatile int32_t t118 = -14149996;

    t118 = (((x517+x518)%x519)>x520);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x526 = -1;
	static int64_t x527 = -1LL;
	int32_t t119 = 506684837;

    t119 = (((x525+x526)%x527)>x528);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x533 = -1;
	int16_t x535 = 5;
	int32_t t120 = -245;

    t120 = (((x533+x534)%x535)>x536);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x537 = -1;
	uint32_t x538 = 30074843U;

    t121 = (((x537+x538)%x539)>x540);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x541 = INT8_MAX;
	static volatile int8_t x543 = 3;
	uint16_t x544 = UINT16_MAX;
	int32_t t122 = 11507171;

    t122 = (((x541+x542)%x543)>x544);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint64_t x545 = 1463738855147951804LLU;
	uint16_t x546 = UINT16_MAX;
	uint32_t x547 = UINT32_MAX;
	static volatile int32_t t123 = 1659;

    t123 = (((x545+x546)%x547)>x548);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x549 = UINT8_MAX;
	int64_t x551 = INT64_MIN;
	volatile uint8_t x552 = 15U;
	static int32_t t124 = 3;

    t124 = (((x549+x550)%x551)>x552);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x555 = 11;
	int16_t x556 = -641;

    t125 = (((x553+x554)%x555)>x556);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x559 = -1;
	uint8_t x560 = 125U;

    t126 = (((x557+x558)%x559)>x560);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x561 = INT32_MAX;
	volatile uint8_t x562 = 0U;
	int32_t x563 = INT32_MIN;

    t127 = (((x561+x562)%x563)>x564);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint64_t x565 = UINT64_MAX;
	uint16_t x566 = UINT16_MAX;
	uint16_t x568 = UINT16_MAX;
	volatile int32_t t128 = 229871;

    t128 = (((x565+x566)%x567)>x568);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x569 = INT16_MAX;
	static volatile int8_t x571 = -1;
	int64_t x572 = 25LL;
	int32_t t129 = -9;

    t129 = (((x569+x570)%x571)>x572);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x573 = UINT64_MAX;
	int8_t x574 = INT8_MIN;
	int32_t x575 = INT32_MIN;
	int64_t x576 = -44922LL;
	int32_t t130 = 2873896;

    t130 = (((x573+x574)%x575)>x576);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x577 = -1LL;
	int32_t x578 = INT32_MIN;
	uint8_t x579 = 1U;
	volatile uint64_t x580 = UINT64_MAX;

    t131 = (((x577+x578)%x579)>x580);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x581 = -1;
	int8_t x582 = INT8_MAX;
	int64_t x583 = 92587339202LL;
	int32_t t132 = 2;

    t132 = (((x581+x582)%x583)>x584);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x585 = INT8_MAX;
	static int64_t x586 = 2588915292532954341LL;
	int16_t x587 = INT16_MAX;
	static int64_t x588 = INT64_MIN;
	int32_t t133 = 37909;

    t133 = (((x585+x586)%x587)>x588);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x591 = UINT16_MAX;
	int8_t x592 = INT8_MIN;

    t134 = (((x589+x590)%x591)>x592);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x593 = 72059U;
	volatile int64_t x594 = -3192429319597836LL;
	int16_t x595 = INT16_MIN;
	static volatile int8_t x596 = INT8_MIN;
	int32_t t135 = 1101;

    t135 = (((x593+x594)%x595)>x596);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x597 = 0;
	int16_t x598 = INT16_MIN;
	int32_t x600 = INT32_MAX;
	volatile int32_t t136 = 28750;

    t136 = (((x597+x598)%x599)>x600);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x601 = INT16_MAX;
	static int16_t x602 = INT16_MIN;
	int16_t x604 = 6053;
	volatile int32_t t137 = -23;

    t137 = (((x601+x602)%x603)>x604);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x613 = -1;
	volatile int64_t x614 = INT64_MAX;
	volatile int8_t x615 = -1;
	int64_t x616 = INT64_MIN;
	int32_t t138 = -262;

    t138 = (((x613+x614)%x615)>x616);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x618 = UINT64_MAX;
	int16_t x619 = INT16_MIN;
	volatile int32_t t139 = -206475892;

    t139 = (((x617+x618)%x619)>x620);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x621 = 5;
	static int64_t x622 = INT64_MIN;
	static volatile int16_t x624 = -1;
	volatile int32_t t140 = 2423;

    t140 = (((x621+x622)%x623)>x624);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x625 = INT64_MIN;
	volatile uint8_t x626 = UINT8_MAX;
	uint32_t x627 = UINT32_MAX;
	uint8_t x628 = 1U;
	volatile int32_t t141 = -49965;

    t141 = (((x625+x626)%x627)>x628);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x629 = INT16_MAX;
	static int16_t x632 = INT16_MIN;
	volatile int32_t t142 = 1904352;

    t142 = (((x629+x630)%x631)>x632);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x641 = 0;
	int16_t x642 = -1;
	volatile int8_t x643 = INT8_MIN;
	static int32_t x644 = 77;
	int32_t t143 = -55429134;

    t143 = (((x641+x642)%x643)>x644);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x645 = -7299;
	static uint8_t x646 = 31U;
	volatile int16_t x647 = -112;
	int64_t x648 = -1LL;

    t144 = (((x645+x646)%x647)>x648);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x649 = 2075288257704LLU;
	int8_t x650 = -1;
	volatile uint8_t x651 = 3U;
	uint64_t x652 = UINT64_MAX;
	volatile int32_t t145 = 29246;

    t145 = (((x649+x650)%x651)>x652);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x653 = INT8_MIN;
	int64_t x654 = -1LL;
	int64_t x655 = -52505207825901LL;
	int8_t x656 = 1;
	static volatile int32_t t146 = -1;

    t146 = (((x653+x654)%x655)>x656);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x661 = UINT64_MAX;
	int8_t x662 = -1;
	int32_t x664 = INT32_MAX;
	int32_t t147 = 1;

    t147 = (((x661+x662)%x663)>x664);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x665 = INT16_MAX;
	int64_t x666 = INT64_MIN;
	uint16_t x667 = 26631U;
	static int8_t x668 = -1;

    t148 = (((x665+x666)%x667)>x668);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x669 = INT64_MAX;
	int32_t x670 = -1;
	int64_t x671 = INT64_MIN;
	volatile uint64_t x672 = UINT64_MAX;
	int32_t t149 = -1;

    t149 = (((x669+x670)%x671)>x672);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x673 = INT16_MAX;
	volatile int16_t x675 = INT16_MAX;
	volatile int32_t x676 = INT32_MAX;
	volatile int32_t t150 = -1;

    t150 = (((x673+x674)%x675)>x676);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x679 = -1;
	int64_t x680 = INT64_MAX;
	int32_t t151 = 55042;

    t151 = (((x677+x678)%x679)>x680);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x681 = INT8_MAX;
	uint32_t x682 = 1991717U;
	uint64_t x683 = UINT64_MAX;
	volatile int32_t t152 = -5;

    t152 = (((x681+x682)%x683)>x684);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x686 = INT16_MIN;
	int8_t x687 = INT8_MIN;

    t153 = (((x685+x686)%x687)>x688);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x693 = INT16_MIN;
	int32_t x694 = INT32_MAX;
	int64_t x695 = -4245000135LL;
	static uint8_t x696 = 1U;
	volatile int32_t t154 = 2855105;

    t154 = (((x693+x694)%x695)>x696);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint32_t x697 = 597880780U;
	uint16_t x698 = UINT16_MAX;
	static int32_t x699 = -1;
	static volatile int16_t x700 = INT16_MIN;
	static volatile int32_t t155 = -27418043;

    t155 = (((x697+x698)%x699)>x700);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t x701 = UINT64_MAX;
	volatile uint16_t x702 = 312U;
	volatile int64_t x704 = INT64_MAX;
	volatile int32_t t156 = -150;

    t156 = (((x701+x702)%x703)>x704);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x713 = -1LL;
	int16_t x714 = -39;
	static uint64_t x715 = 3402LLU;
	int64_t x716 = INT64_MAX;
	int32_t t157 = -1451;

    t157 = (((x713+x714)%x715)>x716);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint32_t x717 = 668232631U;
	volatile int8_t x718 = INT8_MIN;
	volatile int16_t x720 = -1;
	int32_t t158 = -232357693;

    t158 = (((x717+x718)%x719)>x720);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x721 = INT32_MIN;
	uint64_t x723 = 196541198002803LLU;
	int8_t x724 = -1;

    t159 = (((x721+x722)%x723)>x724);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x725 = INT8_MAX;
	volatile int16_t x727 = 9;
	uint16_t x728 = UINT16_MAX;
	int32_t t160 = 95;

    t160 = (((x725+x726)%x727)>x728);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x729 = 3703;
	static int16_t x730 = -29;
	volatile int64_t x731 = -34395803550892LL;
	volatile int32_t x732 = INT32_MIN;
	volatile int32_t t161 = -378;

    t161 = (((x729+x730)%x731)>x732);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x733 = 172807365;
	uint8_t x734 = UINT8_MAX;
	volatile int64_t x735 = INT64_MIN;
	int16_t x736 = INT16_MAX;
	static int32_t t162 = 437;

    t162 = (((x733+x734)%x735)>x736);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x737 = 8442;
	uint64_t x738 = 135962621693199434LLU;
	int64_t x740 = -1LL;
	int32_t t163 = -82837;

    t163 = (((x737+x738)%x739)>x740);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x741 = -23;
	int8_t x742 = INT8_MIN;
	int32_t x743 = -1;
	static int32_t t164 = 32116695;

    t164 = (((x741+x742)%x743)>x744);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint64_t x745 = 28408LLU;
	int32_t x747 = INT32_MIN;
	uint8_t x748 = UINT8_MAX;
	int32_t t165 = -1;

    t165 = (((x745+x746)%x747)>x748);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x753 = 608;
	uint16_t x754 = 7445U;
	volatile int16_t x755 = -376;
	int32_t t166 = -704;

    t166 = (((x753+x754)%x755)>x756);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint16_t x757 = 1U;
	static int32_t x758 = -2;
	uint16_t x759 = 3753U;
	volatile uint16_t x760 = 3880U;
	int32_t t167 = 2;

    t167 = (((x757+x758)%x759)>x760);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x765 = 43148363082LLU;
	int8_t x767 = INT8_MAX;
	volatile int32_t t168 = -3705174;

    t168 = (((x765+x766)%x767)>x768);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x769 = 24U;
	static volatile int8_t x771 = 12;
	uint64_t x772 = UINT64_MAX;

    t169 = (((x769+x770)%x771)>x772);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x773 = INT32_MIN;
	uint64_t x774 = 6779727005LLU;
	int16_t x775 = INT16_MAX;
	static int64_t x776 = 30528270241198366LL;
	volatile int32_t t170 = 0;

    t170 = (((x773+x774)%x775)>x776);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x781 = UINT64_MAX;
	int32_t x782 = INT32_MAX;
	int32_t x783 = -2964;

    t171 = (((x781+x782)%x783)>x784);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x785 = UINT64_MAX;
	int8_t x787 = INT8_MIN;
	uint64_t x788 = 15337208042386179LLU;
	volatile int32_t t172 = 14;

    t172 = (((x785+x786)%x787)>x788);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x789 = -1;
	volatile int8_t x790 = -6;
	int32_t x791 = INT32_MIN;
	int64_t x792 = INT64_MIN;
	volatile int32_t t173 = -778;

    t173 = (((x789+x790)%x791)>x792);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x793 = 53009;
	int16_t x794 = 1495;
	volatile int32_t x796 = INT32_MAX;
	volatile int32_t t174 = -2299841;

    t174 = (((x793+x794)%x795)>x796);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x797 = 6U;
	int32_t x798 = -8733986;
	volatile uint64_t x799 = UINT64_MAX;
	int32_t x800 = INT32_MIN;

    t175 = (((x797+x798)%x799)>x800);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x801 = UINT64_MAX;
	uint64_t x802 = UINT64_MAX;
	uint64_t x803 = UINT64_MAX;
	uint64_t x804 = 19223800614LLU;
	static volatile int32_t t176 = -90470461;

    t176 = (((x801+x802)%x803)>x804);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x805 = -1LL;
	static uint64_t x807 = 36874LLU;
	int32_t t177 = 2;

    t177 = (((x805+x806)%x807)>x808);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x810 = UINT32_MAX;
	static uint16_t x811 = UINT16_MAX;
	uint64_t x812 = 254LLU;
	static int32_t t178 = -3683802;

    t178 = (((x809+x810)%x811)>x812);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint64_t x817 = UINT64_MAX;
	uint16_t x818 = UINT16_MAX;
	volatile int32_t x820 = -1;
	volatile int32_t t179 = -265228;

    t179 = (((x817+x818)%x819)>x820);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint16_t x821 = 4252U;
	volatile int16_t x822 = INT16_MIN;
	int64_t x823 = -1808LL;
	uint16_t x824 = 4U;

    t180 = (((x821+x822)%x823)>x824);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x825 = -1LL;
	uint32_t x826 = 980281691U;
	int16_t x827 = INT16_MIN;
	int8_t x828 = INT8_MIN;

    t181 = (((x825+x826)%x827)>x828);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x829 = INT64_MIN;
	int8_t x831 = -27;
	uint32_t x832 = UINT32_MAX;
	int32_t t182 = 1;

    t182 = (((x829+x830)%x831)>x832);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x833 = -83498;
	static uint64_t x834 = 69958588LLU;
	static int16_t x835 = 1;
	static uint32_t x836 = 5025U;
	int32_t t183 = -5;

    t183 = (((x833+x834)%x835)>x836);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x837 = 2402;
	int16_t x838 = -1;
	volatile int32_t t184 = 3918138;

    t184 = (((x837+x838)%x839)>x840);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x841 = 3786550U;
	uint32_t x842 = 465053U;
	uint64_t x843 = 146722459LLU;
	int8_t x844 = INT8_MIN;
	int32_t t185 = -386;

    t185 = (((x841+x842)%x843)>x844);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x845 = -1LL;
	uint16_t x846 = 1752U;
	int32_t t186 = -29340956;

    t186 = (((x845+x846)%x847)>x848);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x849 = 1984697LLU;
	int64_t x850 = INT64_MIN;
	int16_t x851 = -5151;
	int16_t x852 = 8;
	volatile int32_t t187 = 125964;

    t187 = (((x849+x850)%x851)>x852);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x854 = 0;
	volatile uint64_t x855 = 507LLU;
	int64_t x856 = INT64_MIN;
	static int32_t t188 = 16825;

    t188 = (((x853+x854)%x855)>x856);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x857 = 1;
	int16_t x858 = INT16_MIN;
	static volatile int16_t x859 = INT16_MAX;
	static uint16_t x860 = UINT16_MAX;
	int32_t t189 = -6947482;

    t189 = (((x857+x858)%x859)>x860);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x861 = UINT32_MAX;
	uint8_t x862 = 22U;
	static uint32_t x863 = 998604355U;
	uint64_t x864 = 3LLU;

    t190 = (((x861+x862)%x863)>x864);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x865 = 8046U;
	volatile int32_t x866 = INT32_MIN;
	int16_t x867 = INT16_MIN;
	uint8_t x868 = UINT8_MAX;
	int32_t t191 = -13;

    t191 = (((x865+x866)%x867)>x868);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x869 = INT16_MAX;
	int16_t x870 = INT16_MAX;
	volatile int8_t x871 = -1;

    t192 = (((x869+x870)%x871)>x872);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x874 = 1U;
	static uint32_t x875 = 2249U;
	static int64_t x876 = INT64_MIN;
	volatile int32_t t193 = -8;

    t193 = (((x873+x874)%x875)>x876);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int8_t x877 = -1;
	static int8_t x878 = INT8_MAX;
	int16_t x879 = INT16_MIN;
	int32_t x880 = INT32_MAX;
	int32_t t194 = -1;

    t194 = (((x877+x878)%x879)>x880);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x881 = INT32_MIN;
	int16_t x883 = -1;
	uint8_t x884 = 14U;
	volatile int32_t t195 = 19877143;

    t195 = (((x881+x882)%x883)>x884);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x885 = -1;
	uint16_t x886 = 3U;
	static int8_t x887 = INT8_MAX;
	volatile int32_t t196 = 827;

    t196 = (((x885+x886)%x887)>x888);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x893 = 1723614;
	static int8_t x894 = -1;
	static int32_t x895 = INT32_MIN;
	volatile int32_t x896 = INT32_MAX;
	volatile int32_t t197 = -508622606;

    t197 = (((x893+x894)%x895)>x896);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x897 = INT64_MAX;
	int64_t x898 = INT64_MIN;
	volatile uint8_t x900 = UINT8_MAX;

    t198 = (((x897+x898)%x899)>x900);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x901 = 1;
	int32_t x902 = -1;
	static int64_t x903 = INT64_MIN;
	uint64_t x904 = 3LLU;
	volatile int32_t t199 = -580766;

    t199 = (((x901+x902)%x903)>x904);

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

