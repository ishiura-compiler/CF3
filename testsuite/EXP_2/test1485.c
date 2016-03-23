
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

static uint8_t x2 = 64U;
static volatile int32_t t0 = -3;
int32_t t1 = -31;
volatile int8_t x12 = -1;
static volatile int64_t x16 = 0LL;
static volatile int32_t t4 = 1;
volatile int64_t t6 = -9171960618LL;
int32_t x30 = INT32_MIN;
uint32_t x32 = UINT32_MAX;
static uint32_t t7 = 2495U;
volatile int64_t x35 = INT64_MIN;
int32_t x36 = INT32_MIN;
int32_t t10 = 1;
int16_t x53 = INT16_MIN;
uint8_t x55 = 1U;
int32_t x63 = INT32_MAX;
static int64_t x73 = INT64_MAX;
volatile int32_t t18 = 8557495;
int64_t x81 = INT64_MIN;
uint32_t x88 = UINT32_MAX;
uint8_t x92 = 59U;
volatile int32_t t22 = -169;
uint16_t x99 = 21U;
int32_t t24 = -174882;
volatile int8_t x102 = INT8_MIN;
int16_t x114 = -1;
uint64_t x123 = 7201133525739LLU;
volatile int32_t t30 = 8138;
static volatile int32_t t31 = -22768;
volatile int32_t x129 = INT32_MIN;
static int32_t x135 = -2288;
int8_t x136 = 1;
volatile int32_t t33 = -2795;
volatile uint32_t x140 = 177437598U;
volatile uint32_t t34 = 862031219U;
int16_t x147 = 1;
int32_t x154 = INT32_MIN;
int64_t x162 = INT64_MIN;
uint8_t x167 = UINT8_MAX;
static volatile int64_t x170 = -1LL;
static volatile uint32_t x172 = 7U;
static int8_t x182 = INT8_MIN;
int32_t x196 = -1;
volatile int32_t t48 = -1;
int32_t t50 = 0;
static volatile int32_t x227 = -422061336;
int32_t x237 = 44221692;
int64_t x238 = -1LL;
int64_t x239 = INT64_MIN;
volatile int64_t x245 = INT64_MIN;
uint32_t x248 = 9549600U;
static uint32_t x255 = 79U;
int64_t t62 = 40466966993034694LL;
uint8_t x257 = 5U;
int8_t x260 = 5;
volatile int64_t x263 = -1LL;
int16_t x265 = INT16_MAX;
volatile int64_t t65 = -87361040315LL;
int32_t x272 = -1;
uint32_t x276 = 155121361U;
int16_t x277 = 9;
uint16_t x278 = 23U;
uint16_t x288 = UINT16_MAX;
static volatile int32_t t70 = -1785;
volatile int64_t x292 = INT64_MIN;
volatile int32_t x294 = -1;
uint64_t x297 = UINT64_MAX;
uint16_t x307 = 5361U;
int64_t x308 = -195669520LL;
static uint64_t x319 = UINT64_MAX;
uint32_t t78 = 2U;
int8_t x329 = -5;
int32_t x330 = INT32_MIN;
int64_t x331 = 4506860503214050156LL;
static volatile uint32_t x340 = UINT32_MAX;
int64_t t84 = 32970351348977238LL;
volatile int32_t t88 = -1356;
int8_t x363 = 0;
int8_t x372 = -19;
volatile int32_t t92 = -28809;
uint8_t x381 = 119U;
volatile int64_t t93 = -90791082977114LL;
uint32_t x388 = 450876653U;
int16_t x390 = -1;
int32_t x397 = INT32_MAX;
int32_t t97 = 253154912;
uint32_t x404 = UINT32_MAX;
uint32_t t99 = 0U;
int8_t x410 = INT8_MIN;
uint32_t x411 = 0U;
uint16_t x413 = 24U;
volatile uint64_t t102 = 3292LLU;
volatile int32_t t104 = -18378;
volatile uint16_t x429 = UINT16_MAX;
static int64_t x430 = INT64_MIN;
volatile int32_t x437 = INT32_MIN;
int16_t x442 = -1;
static int32_t t108 = 1522614;
int32_t x458 = INT32_MAX;
int64_t x459 = INT64_MIN;
volatile int16_t x465 = -1;
volatile int64_t x467 = -159841546072017LL;
int64_t x468 = INT64_MIN;
static int8_t x470 = -2;
volatile int16_t x475 = -1;
int16_t x477 = 1;
int8_t x480 = INT8_MIN;
volatile int64_t x481 = -1LL;
static int32_t x485 = INT32_MIN;
int32_t x486 = INT32_MAX;
uint8_t x490 = 101U;
uint32_t x495 = 613327487U;
volatile int32_t t121 = 1255;
volatile uint64_t x500 = 83LLU;
uint16_t x502 = 2275U;
static uint16_t x507 = 601U;
uint16_t x519 = 510U;
int8_t x521 = INT8_MAX;
volatile int8_t x522 = INT8_MIN;
static int16_t x529 = INT16_MIN;
static volatile uint32_t x533 = 212659U;
int64_t x535 = 12672LL;
int16_t x556 = -24;
int32_t t137 = -10967;
uint32_t x568 = 1123364036U;
int64_t x585 = INT64_MIN;
static int64_t x594 = INT64_MIN;
uint64_t x595 = UINT64_MAX;
static int32_t t146 = 50369;
static int8_t x600 = INT8_MAX;
uint32_t x602 = 592532743U;
int64_t x604 = -148739737273971LL;
int8_t x608 = -16;
int8_t x609 = INT8_MAX;
volatile int64_t x613 = -1LL;
uint64_t x614 = 17382621LLU;
int64_t x618 = 3LL;
volatile int8_t x619 = -1;
volatile int32_t x622 = 0;
int8_t x625 = -1;
int32_t x627 = INT32_MIN;
uint32_t x630 = UINT32_MAX;
uint8_t x632 = 8U;
int64_t x636 = INT64_MIN;
int16_t x637 = INT16_MIN;
static volatile int32_t t158 = -3358376;
int8_t x652 = -1;
volatile int32_t t161 = -201019;
int16_t x657 = -1;
uint32_t x663 = 216656U;
int16_t x665 = -1;
static int64_t x670 = -39012383165486LL;
static uint64_t t166 = 270947883752062159LLU;
uint64_t x677 = UINT64_MAX;
volatile int32_t x679 = INT32_MIN;
int16_t x684 = -1;
int16_t x688 = -42;
uint32_t x690 = 60882U;
int16_t x691 = 13;
static uint64_t t170 = 1125275281LLU;
int16_t x695 = -1;
uint32_t x697 = 947U;
static int8_t x699 = INT8_MIN;
int16_t x700 = 15;
volatile uint16_t x701 = UINT16_MAX;
volatile uint8_t x702 = UINT8_MAX;
uint32_t x705 = 37051U;
int8_t x713 = 54;
static volatile int64_t x714 = INT64_MAX;
volatile int32_t x715 = 8797985;
uint64_t x718 = 36199030997448284LLU;
static volatile int32_t t177 = 68003;
uint32_t x727 = 1172729U;
int16_t x728 = INT16_MIN;
static int8_t x730 = 32;
uint16_t x733 = 2790U;
uint32_t x735 = 28094746U;
static int8_t x743 = INT8_MIN;
static volatile int16_t x744 = -1;
int8_t x748 = 1;
int8_t x752 = -29;
volatile int32_t t185 = -1;
volatile uint16_t x755 = UINT16_MAX;
int32_t x758 = INT32_MIN;
int32_t t187 = 1;
int8_t x764 = -30;
int32_t x792 = INT32_MIN;
volatile int64_t x798 = INT64_MIN;
static uint16_t x801 = 12904U;
int8_t x813 = INT8_MAX;
uint16_t x814 = UINT16_MAX;
int16_t x815 = -12570;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	static uint16_t x3 = 1149U;
	int8_t x4 = INT8_MIN;

    t0 = ((x1>(x2==x3))+x4);

    if (t0 != -127) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -15623;
	volatile int16_t x6 = -1;
	static uint8_t x7 = UINT8_MAX;
	int8_t x8 = 0;

    t1 = ((x5>(x6==x7))+x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -1148586LL;
	uint16_t x10 = 147U;
	static int8_t x11 = INT8_MIN;
	volatile int32_t t2 = 7;

    t2 = ((x9>(x10==x11))+x12);

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = 0;
	int16_t x14 = -127;
	uint16_t x15 = 33U;
	int64_t t3 = 14034466528313LL;

    t3 = ((x13>(x14==x15))+x16);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x17 = -1LL;
	uint16_t x18 = UINT16_MAX;
	int8_t x19 = INT8_MAX;
	int8_t x20 = INT8_MIN;

    t4 = ((x17>(x18==x19))+x20);

    if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 3142U;
	static volatile uint8_t x22 = UINT8_MAX;
	static int32_t x23 = INT32_MAX;
	int16_t x24 = INT16_MAX;
	int32_t t5 = 178897;

    t5 = ((x21>(x22==x23))+x24);

    if (t5 != 32768) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	int8_t x26 = 1;
	int64_t x27 = -1LL;
	static int64_t x28 = 1LL;

    t6 = ((x25>(x26==x27))+x28);

    if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x29 = UINT64_MAX;
	uint16_t x31 = 7121U;

    t7 = ((x29>(x30==x31))+x32);

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint64_t x33 = 364LLU;
	static uint32_t x34 = 247371742U;
	int32_t t8 = 45426877;

    t8 = ((x33>(x34==x35))+x36);

    if (t8 != -2147483647) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = UINT8_MAX;
	int8_t x38 = -26;
	static volatile uint8_t x39 = UINT8_MAX;
	static volatile uint32_t x40 = 437663457U;
	volatile uint32_t t9 = 19U;

    t9 = ((x37>(x38==x39))+x40);

    if (t9 != 437663458U) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile uint16_t x41 = 631U;
	int64_t x42 = INT64_MIN;
	int16_t x43 = 849;
	volatile int16_t x44 = INT16_MIN;

    t10 = ((x41>(x42==x43))+x44);

    if (t10 != -32767) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = -27773935969248362LL;
	static int16_t x46 = -1;
	static int8_t x47 = INT8_MIN;
	int32_t x48 = -1;
	int32_t t11 = 217873169;

    t11 = ((x45>(x46==x47))+x48);

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x49 = UINT8_MAX;
	int32_t x50 = INT32_MAX;
	volatile int32_t x51 = INT32_MAX;
	static int64_t x52 = -96695459379412LL;
	volatile int64_t t12 = -3167558919LL;

    t12 = ((x49>(x50==x51))+x52);

    if (t12 != -96695459379411LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x54 = INT32_MIN;
	int8_t x56 = -1;
	int32_t t13 = -2720;

    t13 = ((x53>(x54==x55))+x56);

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = -10572;
	int8_t x58 = 8;
	int16_t x59 = INT16_MIN;
	uint16_t x60 = 3477U;
	volatile int32_t t14 = -1468007;

    t14 = ((x57>(x58==x59))+x60);

    if (t14 != 3477) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = 94922LLU;
	int8_t x62 = -1;
	int16_t x64 = INT16_MAX;
	volatile int32_t t15 = 365;

    t15 = ((x61>(x62==x63))+x64);

    if (t15 != 32768) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 1957U;
	uint64_t x66 = UINT64_MAX;
	uint16_t x67 = 3610U;
	uint16_t x68 = 213U;
	volatile int32_t t16 = -5906;

    t16 = ((x65>(x66==x67))+x68);

    if (t16 != 214) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = UINT64_MAX;
	int8_t x70 = -1;
	int8_t x71 = -1;
	int64_t x72 = -1LL;
	int64_t t17 = 29295138670309530LL;

    t17 = ((x69>(x70==x71))+x72);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x74 = INT32_MAX;
	int16_t x75 = INT16_MAX;
	static int32_t x76 = INT32_MIN;

    t18 = ((x73>(x74==x75))+x76);

    if (t18 != -2147483647) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = 1;
	uint32_t x78 = UINT32_MAX;
	int8_t x79 = INT8_MIN;
	uint16_t x80 = 15U;
	volatile int32_t t19 = 450733695;

    t19 = ((x77>(x78==x79))+x80);

    if (t19 != 16) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x82 = UINT16_MAX;
	static volatile int64_t x83 = INT64_MIN;
	uint16_t x84 = UINT16_MAX;
	static volatile int32_t t20 = -963199672;

    t20 = ((x81>(x82==x83))+x84);

    if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = INT8_MIN;
	volatile int8_t x86 = INT8_MIN;
	int16_t x87 = INT16_MIN;
	uint32_t t21 = UINT32_MAX;

    t21 = ((x85>(x86==x87))+x88);

    if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = INT32_MIN;
	volatile int8_t x90 = -5;
	int32_t x91 = INT32_MAX;

    t22 = ((x89>(x90==x91))+x92);

    if (t22 != 59) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = 467428019638LL;
	int16_t x94 = INT16_MAX;
	volatile int32_t x95 = INT32_MAX;
	uint16_t x96 = 217U;
	int32_t t23 = 224;

    t23 = ((x93>(x94==x95))+x96);

    if (t23 != 218) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x97 = 12;
	uint32_t x98 = 2206U;
	volatile int16_t x100 = INT16_MAX;

    t24 = ((x97>(x98==x99))+x100);

    if (t24 != 32768) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = INT8_MIN;
	int64_t x103 = -1LL;
	uint16_t x104 = UINT16_MAX;
	int32_t t25 = 440457;

    t25 = ((x101>(x102==x103))+x104);

    if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MIN;
	static uint16_t x106 = UINT16_MAX;
	volatile int8_t x107 = -1;
	uint8_t x108 = 41U;
	volatile int32_t t26 = -1336;

    t26 = ((x105>(x106==x107))+x108);

    if (t26 != 41) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x109 = UINT64_MAX;
	int16_t x110 = -1405;
	uint64_t x111 = 96619LLU;
	int8_t x112 = INT8_MAX;
	volatile int32_t t27 = 221447392;

    t27 = ((x109>(x110==x111))+x112);

    if (t27 != 128) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = -21;
	int16_t x115 = INT16_MIN;
	int64_t x116 = INT64_MAX;
	volatile int64_t t28 = INT64_MAX;

    t28 = ((x113>(x114==x115))+x116);

    if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = INT8_MIN;
	int16_t x118 = INT16_MIN;
	volatile int16_t x119 = -1;
	uint8_t x120 = 20U;
	volatile int32_t t29 = 12;

    t29 = ((x117>(x118==x119))+x120);

    if (t29 != 20) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = INT8_MIN;
	uint64_t x122 = 730056441LLU;
	int32_t x124 = -1;

    t30 = ((x121>(x122==x123))+x124);

    if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = 1;
	int8_t x126 = INT8_MIN;
	int32_t x127 = INT32_MAX;
	volatile int16_t x128 = INT16_MIN;

    t31 = ((x125>(x126==x127))+x128);

    if (t31 != -32767) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x130 = UINT32_MAX;
	static int64_t x131 = INT64_MAX;
	int64_t x132 = INT64_MIN;
	int64_t t32 = INT64_MIN;

    t32 = ((x129>(x130==x131))+x132);

    if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = -31LL;
	int8_t x134 = INT8_MIN;

    t33 = ((x133>(x134==x135))+x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x137 = INT16_MAX;
	uint64_t x138 = 355LLU;
	volatile int32_t x139 = INT32_MAX;

    t34 = ((x137>(x138==x139))+x140);

    if (t34 != 177437599U) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MIN;
	int64_t x142 = INT64_MIN;
	static volatile uint8_t x143 = 95U;
	volatile int16_t x144 = 400;
	int32_t t35 = 48015072;

    t35 = ((x141>(x142==x143))+x144);

    if (t35 != 400) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = -1;
	int32_t x146 = -253;
	int64_t x148 = -1LL;
	int64_t t36 = -3458LL;

    t36 = ((x145>(x146==x147))+x148);

    if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MAX;
	volatile int8_t x150 = 50;
	static int64_t x151 = INT64_MIN;
	int32_t x152 = -1;
	int32_t t37 = 244374;

    t37 = ((x149>(x150==x151))+x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x153 = -1LL;
	int16_t x155 = INT16_MIN;
	uint8_t x156 = 18U;
	volatile int32_t t38 = 1018674;

    t38 = ((x153>(x154==x155))+x156);

    if (t38 != 18) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x157 = 83U;
	int16_t x158 = INT16_MAX;
	int32_t x159 = -1;
	static int16_t x160 = 96;
	int32_t t39 = 31878;

    t39 = ((x157>(x158==x159))+x160);

    if (t39 != 97) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x161 = 701353494272LLU;
	static int32_t x163 = -1;
	int16_t x164 = INT16_MIN;
	int32_t t40 = -168515;

    t40 = ((x161>(x162==x163))+x164);

    if (t40 != -32767) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = -193;
	uint16_t x166 = 1U;
	int16_t x168 = INT16_MIN;
	int32_t t41 = -1180;

    t41 = ((x165>(x166==x167))+x168);

    if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = -1;
	int32_t x171 = -54694;
	uint32_t t42 = 1800403U;

    t42 = ((x169>(x170==x171))+x172);

    if (t42 != 7U) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x173 = 7390U;
	uint32_t x174 = 170U;
	uint32_t x175 = UINT32_MAX;
	int32_t x176 = INT32_MIN;
	volatile int32_t t43 = 1892;

    t43 = ((x173>(x174==x175))+x176);

    if (t43 != -2147483647) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x177 = 346992641035LLU;
	uint8_t x178 = 2U;
	static int8_t x179 = INT8_MIN;
	volatile int32_t x180 = -16058960;
	int32_t t44 = -73630401;

    t44 = ((x177>(x178==x179))+x180);

    if (t44 != -16058959) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x181 = 81U;
	volatile int32_t x183 = INT32_MIN;
	int32_t x184 = 37475;
	volatile int32_t t45 = -220145;

    t45 = ((x181>(x182==x183))+x184);

    if (t45 != 37476) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = INT32_MAX;
	static int16_t x186 = INT16_MIN;
	int32_t x187 = 9820;
	static uint16_t x188 = 19791U;
	static volatile int32_t t46 = -6524873;

    t46 = ((x185>(x186==x187))+x188);

    if (t46 != 19792) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint64_t x189 = 0LLU;
	int16_t x190 = -4;
	volatile uint64_t x191 = UINT64_MAX;
	int8_t x192 = INT8_MIN;
	volatile int32_t t47 = 124220;

    t47 = ((x189>(x190==x191))+x192);

    if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = 5U;
	int32_t x194 = -367076;
	volatile uint16_t x195 = 2072U;

    t48 = ((x193>(x194==x195))+x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x197 = INT64_MIN;
	int16_t x198 = 2172;
	int64_t x199 = -817881564632798241LL;
	int32_t x200 = 2691547;
	int32_t t49 = -29488;

    t49 = ((x197>(x198==x199))+x200);

    if (t49 != 2691547) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x201 = INT64_MAX;
	static int32_t x202 = INT32_MIN;
	int16_t x203 = 21;
	int16_t x204 = INT16_MAX;

    t50 = ((x201>(x202==x203))+x204);

    if (t50 != 32768) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = 1;
	uint64_t x206 = 1422953270LLU;
	uint8_t x207 = UINT8_MAX;
	uint16_t x208 = UINT16_MAX;
	volatile int32_t t51 = -484;

    t51 = ((x205>(x206==x207))+x208);

    if (t51 != 65536) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x209 = 2U;
	int8_t x210 = INT8_MIN;
	int32_t x211 = 231;
	static volatile int16_t x212 = 868;
	int32_t t52 = -1;

    t52 = ((x209>(x210==x211))+x212);

    if (t52 != 869) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = 813972512;
	int32_t x214 = INT32_MIN;
	static int32_t x215 = INT32_MAX;
	static volatile int64_t x216 = INT64_MIN;
	int64_t t53 = -7LL;

    t53 = ((x213>(x214==x215))+x216);

    if (t53 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int32_t x221 = INT32_MIN;
	int64_t x222 = -4586944LL;
	static volatile int16_t x223 = -1;
	int16_t x224 = -4483;
	volatile int32_t t54 = 131427;

    t54 = ((x221>(x222==x223))+x224);

    if (t54 != -4483) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x225 = INT32_MIN;
	volatile int16_t x226 = 1;
	static int16_t x228 = INT16_MIN;
	int32_t t55 = -1;

    t55 = ((x225>(x226==x227))+x228);

    if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x229 = -8163841;
	int64_t x230 = 1LL;
	int16_t x231 = -1;
	int16_t x232 = 404;
	static volatile int32_t t56 = -133225825;

    t56 = ((x229>(x230==x231))+x232);

    if (t56 != 404) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x233 = INT64_MAX;
	int64_t x234 = INT64_MIN;
	static int16_t x235 = INT16_MAX;
	uint16_t x236 = 15U;
	int32_t t57 = -12696;

    t57 = ((x233>(x234==x235))+x236);

    if (t57 != 16) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x240 = 1630445580275606899LL;
	int64_t t58 = 5693786044LL;

    t58 = ((x237>(x238==x239))+x240);

    if (t58 != 1630445580275606900LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x241 = INT16_MAX;
	uint32_t x242 = 15919U;
	int16_t x243 = INT16_MAX;
	static int8_t x244 = INT8_MIN;
	int32_t t59 = 34239;

    t59 = ((x241>(x242==x243))+x244);

    if (t59 != -127) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int8_t x246 = INT8_MIN;
	int32_t x247 = 2054216;
	static uint32_t t60 = 75285U;

    t60 = ((x245>(x246==x247))+x248);

    if (t60 != 9549600U) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x249 = INT8_MIN;
	static int16_t x250 = INT16_MIN;
	uint32_t x251 = UINT32_MAX;
	int8_t x252 = -1;
	int32_t t61 = 11081;

    t61 = ((x249>(x250==x251))+x252);

    if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x253 = INT8_MIN;
	int8_t x254 = INT8_MAX;
	int64_t x256 = -16403488LL;

    t62 = ((x253>(x254==x255))+x256);

    if (t62 != -16403488LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x258 = INT16_MIN;
	uint8_t x259 = 1U;
	static int32_t t63 = 3;

    t63 = ((x257>(x258==x259))+x260);

    if (t63 != 6) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x261 = 7078819685LLU;
	static int64_t x262 = -139223LL;
	uint16_t x264 = 140U;
	volatile int32_t t64 = -52;

    t64 = ((x261>(x262==x263))+x264);

    if (t64 != 141) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x266 = INT16_MAX;
	int64_t x267 = INT64_MIN;
	int64_t x268 = INT64_MIN;

    t65 = ((x265>(x266==x267))+x268);

    if (t65 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x269 = 78U;
	uint32_t x270 = 140U;
	uint32_t x271 = 8U;
	int32_t t66 = -45630019;

    t66 = ((x269>(x270==x271))+x272);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x273 = 3U;
	uint8_t x274 = 0U;
	static volatile int16_t x275 = 193;
	uint32_t t67 = 6U;

    t67 = ((x273>(x274==x275))+x276);

    if (t67 != 155121362U) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int64_t x279 = INT64_MIN;
	uint32_t x280 = 1421048569U;
	volatile uint32_t t68 = 1875672569U;

    t68 = ((x277>(x278==x279))+x280);

    if (t68 != 1421048570U) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x281 = INT32_MIN;
	int32_t x282 = -3130609;
	int32_t x283 = INT32_MAX;
	int32_t x284 = INT32_MIN;
	volatile int32_t t69 = INT32_MIN;

    t69 = ((x281>(x282==x283))+x284);

    if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x285 = 23097868;
	static uint8_t x286 = UINT8_MAX;
	int16_t x287 = -1;

    t70 = ((x285>(x286==x287))+x288);

    if (t70 != 65536) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x289 = INT8_MIN;
	int8_t x290 = INT8_MIN;
	static volatile int16_t x291 = INT16_MIN;
	volatile int64_t t71 = INT64_MIN;

    t71 = ((x289>(x290==x291))+x292);

    if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x293 = -1;
	uint32_t x295 = UINT32_MAX;
	static uint32_t x296 = 61654U;
	volatile uint32_t t72 = 2742U;

    t72 = ((x293>(x294==x295))+x296);

    if (t72 != 61654U) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x298 = -953;
	int64_t x299 = -209711LL;
	int8_t x300 = INT8_MIN;
	static int32_t t73 = 1;

    t73 = ((x297>(x298==x299))+x300);

    if (t73 != -127) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x301 = -1;
	int64_t x302 = INT64_MAX;
	int32_t x303 = INT32_MIN;
	volatile int8_t x304 = INT8_MIN;
	int32_t t74 = -544939;

    t74 = ((x301>(x302==x303))+x304);

    if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int64_t x305 = 505176LL;
	int8_t x306 = 0;
	static int64_t t75 = 18706692492160117LL;

    t75 = ((x305>(x306==x307))+x308);

    if (t75 != -195669519LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x309 = 78U;
	int16_t x310 = -1;
	volatile uint32_t x311 = 271965745U;
	uint64_t x312 = 595568940036033348LLU;
	uint64_t t76 = 14652898723044LLU;

    t76 = ((x309>(x310==x311))+x312);

    if (t76 != 595568940036033349LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x313 = 0;
	volatile int64_t x314 = INT64_MIN;
	uint16_t x315 = 696U;
	int8_t x316 = 4;
	static volatile int32_t t77 = -457;

    t77 = ((x313>(x314==x315))+x316);

    if (t77 != 4) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x317 = -1;
	static int16_t x318 = 3833;
	volatile uint32_t x320 = 0U;

    t78 = ((x317>(x318==x319))+x320);

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x321 = 252U;
	volatile int8_t x322 = -1;
	int64_t x323 = -266379LL;
	volatile int16_t x324 = -4;
	volatile int32_t t79 = 344395;

    t79 = ((x321>(x322==x323))+x324);

    if (t79 != -3) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x325 = 0U;
	int64_t x326 = INT64_MIN;
	volatile int16_t x327 = INT16_MAX;
	volatile int32_t x328 = INT32_MIN;
	int32_t t80 = INT32_MIN;

    t80 = ((x325>(x326==x327))+x328);

    if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x332 = INT64_MIN;
	int64_t t81 = INT64_MIN;

    t81 = ((x329>(x330==x331))+x332);

    if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x333 = 0U;
	volatile uint32_t x334 = 103154545U;
	static uint32_t x335 = 13U;
	int32_t x336 = INT32_MIN;
	int32_t t82 = INT32_MIN;

    t82 = ((x333>(x334==x335))+x336);

    if (t82 != INT32_MIN) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x337 = UINT8_MAX;
	int16_t x338 = INT16_MIN;
	static volatile int8_t x339 = -1;
	static uint32_t t83 = 243U;

    t83 = ((x337>(x338==x339))+x340);

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x341 = UINT64_MAX;
	volatile uint32_t x342 = 1118598843U;
	int64_t x343 = INT64_MIN;
	int64_t x344 = -14553805LL;

    t84 = ((x341>(x342==x343))+x344);

    if (t84 != -14553804LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x345 = INT32_MAX;
	int16_t x346 = INT16_MIN;
	volatile int8_t x347 = INT8_MAX;
	static int8_t x348 = INT8_MAX;
	int32_t t85 = 67662;

    t85 = ((x345>(x346==x347))+x348);

    if (t85 != 128) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x349 = 3375894731666429LL;
	volatile int8_t x350 = -1;
	int32_t x351 = -3990;
	int8_t x352 = -1;
	volatile int32_t t86 = 922850;

    t86 = ((x349>(x350==x351))+x352);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x353 = INT32_MIN;
	uint64_t x354 = 362748925242664811LLU;
	int64_t x355 = -36LL;
	static int32_t x356 = INT32_MIN;
	int32_t t87 = INT32_MIN;

    t87 = ((x353>(x354==x355))+x356);

    if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x357 = INT8_MIN;
	volatile int32_t x358 = INT32_MIN;
	int8_t x359 = -3;
	int16_t x360 = INT16_MIN;

    t88 = ((x357>(x358==x359))+x360);

    if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x361 = INT64_MAX;
	int8_t x362 = INT8_MIN;
	uint64_t x364 = UINT64_MAX;
	uint64_t t89 = 15795507574806LLU;

    t89 = ((x361>(x362==x363))+x364);

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x369 = 26U;
	int8_t x370 = -1;
	int8_t x371 = 23;
	static volatile int32_t t90 = -1118437;

    t90 = ((x369>(x370==x371))+x372);

    if (t90 != -18) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x373 = UINT8_MAX;
	int64_t x374 = -1LL;
	static uint8_t x375 = 16U;
	volatile uint8_t x376 = 31U;
	static int32_t t91 = 126;

    t91 = ((x373>(x374==x375))+x376);

    if (t91 != 32) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x377 = -1059790672;
	volatile int32_t x378 = INT32_MIN;
	int16_t x379 = 0;
	uint16_t x380 = 28U;

    t92 = ((x377>(x378==x379))+x380);

    if (t92 != 28) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x382 = 36;
	int8_t x383 = INT8_MAX;
	int64_t x384 = INT64_MIN;

    t93 = ((x381>(x382==x383))+x384);

    if (t93 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x385 = INT8_MAX;
	volatile int64_t x386 = INT64_MIN;
	volatile int64_t x387 = INT64_MAX;
	uint32_t t94 = 15U;

    t94 = ((x385>(x386==x387))+x388);

    if (t94 != 450876654U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x389 = UINT32_MAX;
	static int32_t x391 = INT32_MIN;
	int16_t x392 = -1;
	int32_t t95 = 3294362;

    t95 = ((x389>(x390==x391))+x392);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x393 = -5;
	static int16_t x394 = INT16_MIN;
	int32_t x395 = 236475892;
	int16_t x396 = INT16_MIN;
	int32_t t96 = 694;

    t96 = ((x393>(x394==x395))+x396);

    if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint16_t x398 = 204U;
	int16_t x399 = 0;
	volatile uint16_t x400 = UINT16_MAX;

    t97 = ((x397>(x398==x399))+x400);

    if (t97 != 65536) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x401 = INT32_MIN;
	int16_t x402 = INT16_MIN;
	uint32_t x403 = 2033954U;
	static uint32_t t98 = UINT32_MAX;

    t98 = ((x401>(x402==x403))+x404);

    if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x405 = -1;
	volatile int64_t x406 = INT64_MAX;
	int32_t x407 = INT32_MIN;
	uint32_t x408 = 10058693U;

    t99 = ((x405>(x406==x407))+x408);

    if (t99 != 10058693U) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x409 = -1;
	volatile int32_t x412 = 8;
	volatile int32_t t100 = 36900;

    t100 = ((x409>(x410==x411))+x412);

    if (t100 != 8) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x414 = 26837111U;
	volatile int64_t x415 = -63466445494224731LL;
	uint32_t x416 = 4491916U;
	static volatile uint32_t t101 = 760846390U;

    t101 = ((x413>(x414==x415))+x416);

    if (t101 != 4491917U) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int32_t x417 = -932;
	int8_t x418 = INT8_MIN;
	int64_t x419 = INT64_MAX;
	uint64_t x420 = 1686807705552915910LLU;

    t102 = ((x417>(x418==x419))+x420);

    if (t102 != 1686807705552915910LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x421 = 112U;
	static uint16_t x422 = 11460U;
	uint16_t x423 = 5U;
	int32_t x424 = -92090;
	int32_t t103 = -2;

    t103 = ((x421>(x422==x423))+x424);

    if (t103 != -92089) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x425 = 236LLU;
	int64_t x426 = INT64_MIN;
	uint16_t x427 = 3412U;
	uint16_t x428 = 952U;

    t104 = ((x425>(x426==x427))+x428);

    if (t104 != 953) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x431 = -178;
	uint32_t x432 = 20545641U;
	volatile uint32_t t105 = 1U;

    t105 = ((x429>(x430==x431))+x432);

    if (t105 != 20545642U) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x433 = INT8_MIN;
	int32_t x434 = -62994811;
	volatile uint32_t x435 = UINT32_MAX;
	uint32_t x436 = 9617027U;
	volatile uint32_t t106 = 48852U;

    t106 = ((x433>(x434==x435))+x436);

    if (t106 != 9617027U) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x438 = -1LL;
	static int8_t x439 = 0;
	int16_t x440 = 1700;
	volatile int32_t t107 = 53551750;

    t107 = ((x437>(x438==x439))+x440);

    if (t107 != 1700) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x441 = 53;
	static volatile int32_t x443 = -963;
	static int8_t x444 = INT8_MIN;

    t108 = ((x441>(x442==x443))+x444);

    if (t108 != -127) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x445 = 5684588838422492308LLU;
	static int32_t x446 = 62;
	int64_t x447 = INT64_MAX;
	int64_t x448 = INT64_MIN;
	int64_t t109 = -12LL;

    t109 = ((x445>(x446==x447))+x448);

    if (t109 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x449 = -1;
	static uint8_t x450 = 5U;
	static uint32_t x451 = UINT32_MAX;
	uint64_t x452 = 267LLU;
	volatile uint64_t t110 = 73174LLU;

    t110 = ((x449>(x450==x451))+x452);

    if (t110 != 267LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint16_t x453 = 60U;
	static int32_t x454 = INT32_MIN;
	int64_t x455 = INT64_MIN;
	static volatile int16_t x456 = -1;
	volatile int32_t t111 = 380;

    t111 = ((x453>(x454==x455))+x456);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int16_t x457 = 5051;
	int8_t x460 = -8;
	volatile int32_t t112 = 4937;

    t112 = ((x457>(x458==x459))+x460);

    if (t112 != -7) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x461 = UINT16_MAX;
	int16_t x462 = INT16_MAX;
	volatile uint32_t x463 = 1U;
	int64_t x464 = -299224321LL;
	volatile int64_t t113 = -4025633509906LL;

    t113 = ((x461>(x462==x463))+x464);

    if (t113 != -299224320LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x466 = INT8_MIN;
	int64_t t114 = INT64_MIN;

    t114 = ((x465>(x466==x467))+x468);

    if (t114 != INT64_MIN) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x469 = UINT64_MAX;
	static uint64_t x471 = 3358272549991LLU;
	volatile uint64_t x472 = 66LLU;
	volatile uint64_t t115 = 33425LLU;

    t115 = ((x469>(x470==x471))+x472);

    if (t115 != 67LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x473 = 69287104;
	int64_t x474 = -139356LL;
	int16_t x476 = INT16_MIN;
	int32_t t116 = -3860;

    t116 = ((x473>(x474==x475))+x476);

    if (t116 != -32767) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x478 = 11386U;
	int32_t x479 = 565235732;
	volatile int32_t t117 = 1143843;

    t117 = ((x477>(x478==x479))+x480);

    if (t117 != -127) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x482 = INT8_MIN;
	int32_t x483 = INT32_MAX;
	uint8_t x484 = 12U;
	volatile int32_t t118 = -979;

    t118 = ((x481>(x482==x483))+x484);

    if (t118 != 12) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x487 = UINT8_MAX;
	static int8_t x488 = 3;
	int32_t t119 = 380779;

    t119 = ((x485>(x486==x487))+x488);

    if (t119 != 3) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x489 = 2U;
	int8_t x491 = INT8_MIN;
	static int64_t x492 = -1LL;
	volatile int64_t t120 = -2LL;

    t120 = ((x489>(x490==x491))+x492);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x493 = 7U;
	volatile uint16_t x494 = 6992U;
	int16_t x496 = -1;

    t121 = ((x493>(x494==x495))+x496);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x497 = INT8_MAX;
	int16_t x498 = INT16_MIN;
	uint32_t x499 = UINT32_MAX;
	uint64_t t122 = 2997744888681798LLU;

    t122 = ((x497>(x498==x499))+x500);

    if (t122 != 84LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int8_t x501 = INT8_MIN;
	static uint8_t x503 = UINT8_MAX;
	int16_t x504 = 0;
	int32_t t123 = 669;

    t123 = ((x501>(x502==x503))+x504);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x505 = UINT32_MAX;
	uint32_t x506 = 49U;
	static int16_t x508 = INT16_MIN;
	static int32_t t124 = 0;

    t124 = ((x505>(x506==x507))+x508);

    if (t124 != -32767) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x509 = INT8_MAX;
	static int16_t x510 = 2594;
	uint64_t x511 = UINT64_MAX;
	int16_t x512 = INT16_MIN;
	volatile int32_t t125 = -21;

    t125 = ((x509>(x510==x511))+x512);

    if (t125 != -32767) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x513 = INT8_MIN;
	uint16_t x514 = 11U;
	uint16_t x515 = 1284U;
	volatile int64_t x516 = INT64_MIN;
	volatile int64_t t126 = INT64_MIN;

    t126 = ((x513>(x514==x515))+x516);

    if (t126 != INT64_MIN) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x517 = -1;
	volatile uint16_t x518 = UINT16_MAX;
	volatile int32_t x520 = INT32_MIN;
	volatile int32_t t127 = INT32_MIN;

    t127 = ((x517>(x518==x519))+x520);

    if (t127 != INT32_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x523 = 15174972741477LLU;
	volatile uint64_t x524 = UINT64_MAX;
	static uint64_t t128 = 8LLU;

    t128 = ((x521>(x522==x523))+x524);

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x525 = INT32_MAX;
	int32_t x526 = INT32_MIN;
	int32_t x527 = -2;
	static volatile uint16_t x528 = 1641U;
	volatile int32_t t129 = -1;

    t129 = ((x525>(x526==x527))+x528);

    if (t129 != 1642) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x530 = 10U;
	volatile uint64_t x531 = UINT64_MAX;
	int8_t x532 = -23;
	int32_t t130 = 14031;

    t130 = ((x529>(x530==x531))+x532);

    if (t130 != -23) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x534 = -71;
	static int8_t x536 = INT8_MIN;
	volatile int32_t t131 = -37964;

    t131 = ((x533>(x534==x535))+x536);

    if (t131 != -127) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x537 = 4992;
	static uint64_t x538 = 61228373400762172LLU;
	uint8_t x539 = 1U;
	int64_t x540 = INT64_MIN;
	int64_t t132 = -4452656406312882261LL;

    t132 = ((x537>(x538==x539))+x540);

    if (t132 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x541 = INT32_MIN;
	uint8_t x542 = UINT8_MAX;
	uint8_t x543 = 14U;
	int16_t x544 = INT16_MIN;
	volatile int32_t t133 = 3727131;

    t133 = ((x541>(x542==x543))+x544);

    if (t133 != -32768) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x545 = INT64_MIN;
	int16_t x546 = 3;
	uint32_t x547 = 47295U;
	int32_t x548 = INT32_MIN;
	volatile int32_t t134 = INT32_MIN;

    t134 = ((x545>(x546==x547))+x548);

    if (t134 != INT32_MIN) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x549 = INT8_MIN;
	volatile uint64_t x550 = 61836888005LLU;
	uint64_t x551 = 670LLU;
	int32_t x552 = -1;
	volatile int32_t t135 = -5;

    t135 = ((x549>(x550==x551))+x552);

    if (t135 != -1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x553 = INT64_MIN;
	int8_t x554 = -1;
	volatile uint16_t x555 = 5U;
	static int32_t t136 = -1;

    t136 = ((x553>(x554==x555))+x556);

    if (t136 != -24) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x557 = 352U;
	int8_t x558 = INT8_MIN;
	int32_t x559 = -155;
	volatile uint16_t x560 = 1U;

    t137 = ((x557>(x558==x559))+x560);

    if (t137 != 2) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int32_t x561 = -1;
	uint64_t x562 = 215297437857LLU;
	uint8_t x563 = 51U;
	int8_t x564 = -1;
	int32_t t138 = -483847492;

    t138 = ((x561>(x562==x563))+x564);

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x565 = 19;
	uint8_t x566 = 1U;
	static volatile int64_t x567 = -1LL;
	volatile uint32_t t139 = 64318U;

    t139 = ((x565>(x566==x567))+x568);

    if (t139 != 1123364037U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x569 = UINT64_MAX;
	int16_t x570 = 4103;
	int16_t x571 = INT16_MIN;
	int8_t x572 = 0;
	int32_t t140 = -48995673;

    t140 = ((x569>(x570==x571))+x572);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x573 = 1807;
	int32_t x574 = -1;
	uint32_t x575 = UINT32_MAX;
	static uint16_t x576 = 265U;
	volatile int32_t t141 = 56;

    t141 = ((x573>(x574==x575))+x576);

    if (t141 != 266) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x577 = INT16_MAX;
	static uint16_t x578 = 30U;
	int64_t x579 = -1LL;
	int16_t x580 = -29;
	int32_t t142 = -21;

    t142 = ((x577>(x578==x579))+x580);

    if (t142 != -28) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x581 = 7;
	int64_t x582 = INT64_MIN;
	volatile int64_t x583 = -39615501106846740LL;
	volatile int8_t x584 = INT8_MAX;
	int32_t t143 = 1954784;

    t143 = ((x581>(x582==x583))+x584);

    if (t143 != 128) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x586 = -1LL;
	int16_t x587 = -14291;
	uint32_t x588 = 162912U;
	uint32_t t144 = 64513687U;

    t144 = ((x585>(x586==x587))+x588);

    if (t144 != 162912U) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x589 = INT32_MIN;
	int32_t x590 = 1;
	int64_t x591 = INT64_MIN;
	int64_t x592 = -1LL;
	static volatile int64_t t145 = 452484817741465676LL;

    t145 = ((x589>(x590==x591))+x592);

    if (t145 != -1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint16_t x593 = UINT16_MAX;
	volatile int16_t x596 = INT16_MIN;

    t146 = ((x593>(x594==x595))+x596);

    if (t146 != -32767) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x597 = INT32_MIN;
	volatile uint8_t x598 = UINT8_MAX;
	int16_t x599 = -1;
	volatile int32_t t147 = 14;

    t147 = ((x597>(x598==x599))+x600);

    if (t147 != 127) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x601 = 0;
	int8_t x603 = -35;
	static volatile int64_t t148 = 283970659535237126LL;

    t148 = ((x601>(x602==x603))+x604);

    if (t148 != -148739737273971LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x605 = INT32_MIN;
	uint16_t x606 = UINT16_MAX;
	int32_t x607 = -486472807;
	static int32_t t149 = 1;

    t149 = ((x605>(x606==x607))+x608);

    if (t149 != -16) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x610 = INT16_MIN;
	volatile int16_t x611 = INT16_MIN;
	int8_t x612 = 1;
	volatile int32_t t150 = -18648;

    t150 = ((x609>(x610==x611))+x612);

    if (t150 != 2) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x615 = -1774;
	static int32_t x616 = 4509;
	volatile int32_t t151 = -77;

    t151 = ((x613>(x614==x615))+x616);

    if (t151 != 4509) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x617 = UINT16_MAX;
	int64_t x620 = 4335640LL;
	volatile int64_t t152 = 32083LL;

    t152 = ((x617>(x618==x619))+x620);

    if (t152 != 4335641LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x621 = 1;
	volatile int16_t x623 = -1004;
	int8_t x624 = INT8_MAX;
	int32_t t153 = -3;

    t153 = ((x621>(x622==x623))+x624);

    if (t153 != 128) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x626 = INT64_MIN;
	static int8_t x628 = 3;
	static int32_t t154 = 0;

    t154 = ((x625>(x626==x627))+x628);

    if (t154 != 3) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x629 = INT8_MIN;
	static int64_t x631 = INT64_MIN;
	volatile int32_t t155 = -7;

    t155 = ((x629>(x630==x631))+x632);

    if (t155 != 8) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x633 = 122U;
	volatile int64_t x634 = INT64_MAX;
	uint8_t x635 = UINT8_MAX;
	static int64_t t156 = -50910609976839657LL;

    t156 = ((x633>(x634==x635))+x636);

    if (t156 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x638 = 2026U;
	int64_t x639 = -1LL;
	volatile int8_t x640 = -1;
	int32_t t157 = 7118386;

    t157 = ((x637>(x638==x639))+x640);

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x641 = INT32_MIN;
	static uint32_t x642 = 2442U;
	uint16_t x643 = UINT16_MAX;
	volatile int16_t x644 = -1;

    t158 = ((x641>(x642==x643))+x644);

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x645 = -24171539;
	uint8_t x646 = UINT8_MAX;
	int16_t x647 = -1;
	volatile uint64_t x648 = UINT64_MAX;
	volatile uint64_t t159 = UINT64_MAX;

    t159 = ((x645>(x646==x647))+x648);

    if (t159 != UINT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x649 = 12423535909LLU;
	uint32_t x650 = UINT32_MAX;
	volatile int32_t x651 = 2443665;
	static int32_t t160 = 403693164;

    t160 = ((x649>(x650==x651))+x652);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x653 = INT64_MAX;
	static volatile uint8_t x654 = 113U;
	static uint32_t x655 = 8552U;
	static int16_t x656 = INT16_MAX;

    t161 = ((x653>(x654==x655))+x656);

    if (t161 != 32768) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x658 = -1LL;
	volatile int16_t x659 = INT16_MIN;
	volatile int16_t x660 = INT16_MIN;
	static int32_t t162 = -61973;

    t162 = ((x657>(x658==x659))+x660);

    if (t162 != -32768) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x661 = INT64_MAX;
	static int8_t x662 = INT8_MIN;
	static uint16_t x664 = 6502U;
	int32_t t163 = -3;

    t163 = ((x661>(x662==x663))+x664);

    if (t163 != 6503) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x666 = -3515;
	static volatile int16_t x667 = INT16_MIN;
	int16_t x668 = 6497;
	int32_t t164 = -270336582;

    t164 = ((x665>(x666==x667))+x668);

    if (t164 != 6497) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x669 = -1;
	uint8_t x671 = 1U;
	static int32_t x672 = 508303841;
	int32_t t165 = 200;

    t165 = ((x669>(x670==x671))+x672);

    if (t165 != 508303841) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x673 = -3924;
	uint16_t x674 = 2U;
	uint64_t x675 = UINT64_MAX;
	volatile uint64_t x676 = 77947255LLU;

    t166 = ((x673>(x674==x675))+x676);

    if (t166 != 77947255LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint16_t x678 = 22947U;
	int16_t x680 = 103;
	volatile int32_t t167 = 0;

    t167 = ((x677>(x678==x679))+x680);

    if (t167 != 104) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x681 = INT16_MIN;
	volatile int8_t x682 = -1;
	uint32_t x683 = 2790U;
	int32_t t168 = -21855830;

    t168 = ((x681>(x682==x683))+x684);

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x685 = 20;
	int32_t x686 = INT32_MIN;
	static int8_t x687 = INT8_MAX;
	volatile int32_t t169 = -21309;

    t169 = ((x685>(x686==x687))+x688);

    if (t169 != -41) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x689 = UINT8_MAX;
	uint64_t x692 = UINT64_MAX;

    t170 = ((x689>(x690==x691))+x692);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x693 = INT8_MAX;
	volatile int16_t x694 = 105;
	volatile uint64_t x696 = 349LLU;
	volatile uint64_t t171 = 1335878316LLU;

    t171 = ((x693>(x694==x695))+x696);

    if (t171 != 350LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint8_t x698 = UINT8_MAX;
	volatile int32_t t172 = 23530870;

    t172 = ((x697>(x698==x699))+x700);

    if (t172 != 16) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x703 = -54;
	static int64_t x704 = INT64_MIN;
	volatile int64_t t173 = -2227552260867915938LL;

    t173 = ((x701>(x702==x703))+x704);

    if (t173 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x706 = 0;
	volatile int8_t x707 = INT8_MIN;
	volatile int8_t x708 = 0;
	volatile int32_t t174 = -128207;

    t174 = ((x705>(x706==x707))+x708);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x709 = 9;
	volatile int64_t x710 = -1LL;
	static uint16_t x711 = 8U;
	int8_t x712 = INT8_MAX;
	static int32_t t175 = -17913931;

    t175 = ((x709>(x710==x711))+x712);

    if (t175 != 128) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x716 = -3;
	int32_t t176 = 14695043;

    t176 = ((x713>(x714==x715))+x716);

    if (t176 != -2) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x717 = 43607394U;
	static uint32_t x719 = UINT32_MAX;
	uint8_t x720 = 2U;

    t177 = ((x717>(x718==x719))+x720);

    if (t177 != 3) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x721 = INT16_MAX;
	int32_t x722 = INT32_MIN;
	static uint64_t x723 = 1896792369227LLU;
	int64_t x724 = -1LL;
	volatile int64_t t178 = -1553284716829419713LL;

    t178 = ((x721>(x722==x723))+x724);

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x725 = -1LL;
	uint8_t x726 = 3U;
	volatile int32_t t179 = -7999545;

    t179 = ((x725>(x726==x727))+x728);

    if (t179 != -32768) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x729 = -7;
	volatile uint8_t x731 = 15U;
	uint8_t x732 = 1U;
	volatile int32_t t180 = -1566;

    t180 = ((x729>(x730==x731))+x732);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x734 = 17;
	volatile int64_t x736 = INT64_MIN;
	volatile int64_t t181 = 87103791744147LL;

    t181 = ((x733>(x734==x735))+x736);

    if (t181 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x737 = -6;
	uint32_t x738 = UINT32_MAX;
	volatile uint8_t x739 = 27U;
	uint64_t x740 = 138231LLU;
	uint64_t t182 = 137112978941507466LLU;

    t182 = ((x737>(x738==x739))+x740);

    if (t182 != 138231LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x741 = -1LL;
	int8_t x742 = INT8_MAX;
	volatile int32_t t183 = 32659;

    t183 = ((x741>(x742==x743))+x744);

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x745 = 90U;
	int8_t x746 = -1;
	static int64_t x747 = INT64_MAX;
	volatile int32_t t184 = -47628;

    t184 = ((x745>(x746==x747))+x748);

    if (t184 != 2) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x749 = UINT32_MAX;
	int8_t x750 = 0;
	static uint64_t x751 = 555LLU;

    t185 = ((x749>(x750==x751))+x752);

    if (t185 != -28) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x753 = 42452543LLU;
	volatile uint32_t x754 = 11747139U;
	int16_t x756 = INT16_MIN;
	static int32_t t186 = 7816023;

    t186 = ((x753>(x754==x755))+x756);

    if (t186 != -32767) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x757 = -1;
	int32_t x759 = -27;
	volatile int8_t x760 = 0;

    t187 = ((x757>(x758==x759))+x760);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x761 = -5099;
	uint8_t x762 = 20U;
	int16_t x763 = INT16_MIN;
	int32_t t188 = -14;

    t188 = ((x761>(x762==x763))+x764);

    if (t188 != -30) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x769 = -1;
	int64_t x770 = -385539285763634LL;
	int16_t x771 = 80;
	uint64_t x772 = UINT64_MAX;
	volatile uint64_t t189 = UINT64_MAX;

    t189 = ((x769>(x770==x771))+x772);

    if (t189 != UINT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x773 = INT16_MIN;
	volatile int32_t x774 = -1;
	static uint32_t x775 = 539375U;
	int64_t x776 = INT64_MIN;
	volatile int64_t t190 = INT64_MIN;

    t190 = ((x773>(x774==x775))+x776);

    if (t190 != INT64_MIN) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint8_t x777 = UINT8_MAX;
	volatile int16_t x778 = INT16_MIN;
	int8_t x779 = INT8_MAX;
	int64_t x780 = INT64_MIN;
	volatile int64_t t191 = -80943806829736LL;

    t191 = ((x777>(x778==x779))+x780);

    if (t191 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x781 = 39;
	uint32_t x782 = UINT32_MAX;
	static volatile uint64_t x783 = 802935838050150542LLU;
	static volatile int32_t x784 = -416;
	int32_t t192 = -9088567;

    t192 = ((x781>(x782==x783))+x784);

    if (t192 != -415) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x785 = 2U;
	int16_t x786 = INT16_MIN;
	uint8_t x787 = 118U;
	uint16_t x788 = 4U;
	int32_t t193 = -1;

    t193 = ((x785>(x786==x787))+x788);

    if (t193 != 5) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x789 = 44;
	int64_t x790 = INT64_MAX;
	static int64_t x791 = 1326397555248177LL;
	volatile int32_t t194 = 36990;

    t194 = ((x789>(x790==x791))+x792);

    if (t194 != -2147483647) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x793 = INT16_MIN;
	volatile uint8_t x794 = UINT8_MAX;
	int16_t x795 = INT16_MAX;
	uint16_t x796 = 47U;
	volatile int32_t t195 = -4768774;

    t195 = ((x793>(x794==x795))+x796);

    if (t195 != 47) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x797 = -1;
	uint32_t x799 = 822139832U;
	int8_t x800 = INT8_MIN;
	volatile int32_t t196 = -820;

    t196 = ((x797>(x798==x799))+x800);

    if (t196 != -128) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x802 = INT64_MIN;
	uint32_t x803 = 184U;
	static int16_t x804 = INT16_MIN;
	volatile int32_t t197 = -1631;

    t197 = ((x801>(x802==x803))+x804);

    if (t197 != -32767) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x805 = 5U;
	uint64_t x806 = 209458LLU;
	int64_t x807 = INT64_MIN;
	int64_t x808 = 5LL;
	volatile int64_t t198 = 60746708698964476LL;

    t198 = ((x805>(x806==x807))+x808);

    if (t198 != 6LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x816 = INT8_MIN;
	int32_t t199 = 49942;

    t199 = ((x813>(x814==x815))+x816);

    if (t199 != -127) { NG(); } else { ; }
	
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

