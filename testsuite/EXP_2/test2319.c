
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

int16_t x1 = -1;
volatile int32_t t0 = 128654422;
static volatile int32_t t1 = 5832553;
int8_t x9 = INT8_MIN;
static uint8_t x10 = UINT8_MAX;
int16_t x12 = -738;
int32_t t2 = 40801076;
int32_t x17 = -1;
int32_t x25 = INT32_MIN;
int64_t x27 = INT64_MIN;
int64_t x30 = INT64_MIN;
static volatile uint16_t x46 = 1974U;
int16_t x47 = INT16_MIN;
int32_t t11 = 95;
static volatile int32_t x60 = INT32_MAX;
int64_t x64 = INT64_MAX;
uint64_t x81 = 2204185100959231LLU;
volatile uint16_t x87 = 8U;
uint8_t x101 = 14U;
uint8_t x104 = 19U;
uint16_t x106 = 0U;
uint16_t x108 = 850U;
static int8_t x118 = INT8_MIN;
static int64_t x121 = INT64_MAX;
static int32_t x125 = INT32_MIN;
static volatile int32_t t32 = 44609;
int32_t x133 = INT32_MAX;
uint64_t x134 = 223694720640144LLU;
int64_t x144 = -1LL;
int16_t x145 = -1;
volatile int32_t t37 = 214;
int64_t x158 = -422157LL;
volatile int8_t x166 = -1;
int64_t x167 = -172LL;
int32_t x174 = INT32_MIN;
volatile uint8_t x176 = 5U;
volatile int16_t x177 = INT16_MAX;
volatile int64_t x178 = INT64_MIN;
static uint8_t x184 = UINT8_MAX;
volatile int32_t t45 = 207;
uint16_t x191 = 118U;
static volatile int32_t x197 = -129;
static volatile uint8_t x203 = UINT8_MAX;
int64_t x206 = INT64_MIN;
uint8_t x212 = 1U;
int32_t x216 = 8915914;
int32_t x217 = -1;
uint8_t x218 = UINT8_MAX;
int32_t x219 = INT32_MIN;
volatile int16_t x221 = 2303;
uint64_t x231 = 4666041765149668LLU;
uint64_t x235 = 2LLU;
static volatile int32_t t58 = -2233458;
static volatile uint64_t x237 = 16LLU;
int32_t t59 = 94;
int32_t x245 = INT32_MIN;
int64_t x246 = INT64_MIN;
volatile uint8_t x248 = 85U;
int8_t x254 = INT8_MAX;
int64_t x257 = INT64_MAX;
static volatile int32_t t64 = -1;
int32_t x262 = INT32_MAX;
uint64_t x267 = 709059156803679673LLU;
static int16_t x272 = -1;
static uint16_t x276 = 483U;
uint8_t x282 = 48U;
int64_t x283 = INT64_MIN;
static volatile int8_t x285 = -12;
int16_t x287 = INT16_MIN;
int8_t x288 = -1;
int64_t x289 = -47LL;
static uint8_t x290 = UINT8_MAX;
static volatile int32_t t72 = -462334;
int32_t x297 = INT32_MAX;
int64_t x298 = INT64_MIN;
int8_t x305 = 1;
static int32_t t77 = 9;
int8_t x316 = -1;
int32_t t79 = -773486;
static uint64_t x324 = 437LLU;
static uint32_t x326 = UINT32_MAX;
int16_t x328 = -302;
volatile int32_t x332 = -819761143;
uint16_t x333 = 2271U;
int32_t x336 = INT32_MIN;
volatile int32_t t83 = -19154768;
uint64_t x339 = UINT64_MAX;
int16_t x343 = INT16_MIN;
int32_t x345 = 467;
uint32_t x347 = 1129334635U;
int32_t t86 = -7559811;
int16_t x352 = INT16_MIN;
volatile int32_t t88 = -259179238;
int8_t x359 = -1;
volatile int32_t t89 = 1811;
int64_t x361 = -1LL;
volatile int32_t t91 = -1;
int8_t x372 = -9;
volatile uint16_t x379 = UINT16_MAX;
volatile int64_t x382 = -1LL;
volatile int32_t t96 = -26;
int16_t x392 = -1;
volatile int32_t t99 = -13427797;
volatile int32_t x408 = 314777210;
volatile uint32_t x410 = UINT32_MAX;
uint32_t x418 = 1072128U;
int8_t x419 = INT8_MIN;
int16_t x420 = INT16_MIN;
static int8_t x421 = INT8_MAX;
static uint8_t x426 = UINT8_MAX;
uint32_t x428 = 26U;
volatile uint64_t x430 = 66880240LLU;
int32_t x433 = -1;
volatile int16_t x434 = INT16_MAX;
volatile int32_t x440 = -69;
int32_t x444 = INT32_MIN;
int16_t x455 = INT16_MAX;
int32_t t115 = -397795401;
static uint8_t x475 = 2U;
uint8_t x476 = UINT8_MAX;
int32_t t119 = 338882037;
static volatile int16_t x483 = INT16_MAX;
int16_t x485 = INT16_MIN;
int32_t x488 = INT32_MIN;
volatile uint16_t x496 = 6430U;
volatile int32_t t124 = -1186416;
uint64_t x519 = UINT64_MAX;
volatile int32_t t129 = -254269;
static uint16_t x523 = 3663U;
static volatile int32_t t130 = 0;
uint16_t x526 = UINT16_MAX;
uint64_t x527 = UINT64_MAX;
uint32_t x528 = 26226814U;
volatile int32_t t132 = -2068097;
uint64_t x534 = 6973736370068LLU;
volatile int32_t t133 = 251391;
volatile int32_t x541 = -1;
volatile int64_t x548 = -1LL;
int32_t x550 = -711;
int32_t x554 = INT32_MIN;
uint8_t x573 = 1U;
int32_t x574 = -1;
int8_t x577 = INT8_MAX;
int16_t x580 = -5;
int32_t t144 = 0;
uint16_t x581 = 1417U;
uint64_t x588 = UINT64_MAX;
int8_t x590 = INT8_MIN;
static int16_t x592 = INT16_MIN;
static int8_t x603 = INT8_MAX;
volatile int8_t x609 = INT8_MIN;
static int32_t x612 = INT32_MAX;
volatile int64_t x621 = INT64_MAX;
static uint32_t x624 = 99930393U;
uint32_t x627 = 116982U;
int8_t x639 = -14;
int64_t x642 = 990397659405136958LL;
int16_t x647 = INT16_MIN;
int16_t x648 = -8653;
static int8_t x655 = -1;
uint32_t x660 = UINT32_MAX;
volatile int32_t t164 = 193;
int64_t x661 = INT64_MIN;
static volatile int32_t x666 = INT32_MAX;
volatile int32_t t166 = 0;
int8_t x674 = INT8_MIN;
uint64_t x680 = 484356769187LLU;
volatile int32_t t170 = -61778726;
uint64_t x685 = UINT64_MAX;
static volatile int32_t t171 = -24;
volatile uint8_t x689 = 5U;
uint8_t x695 = UINT8_MAX;
int32_t x696 = -1;
static int16_t x707 = INT16_MAX;
int32_t x708 = 626;
int8_t x710 = INT8_MIN;
int32_t t179 = 35;
volatile int16_t x724 = INT16_MIN;
int32_t x727 = INT32_MIN;
int64_t x731 = -87017LL;
int64_t x732 = INT64_MAX;
int32_t x735 = 100;
volatile int32_t t183 = 2069833;
uint16_t x741 = 8U;
static int16_t x744 = -15;
int32_t x745 = INT32_MAX;
uint16_t x748 = 1U;
int32_t t186 = -53643992;
uint16_t x750 = 12921U;
volatile int32_t x751 = INT32_MIN;
volatile int16_t x758 = INT16_MIN;
int8_t x759 = -27;
int32_t x761 = -3807379;
int64_t x764 = 5434085LL;
volatile int32_t t190 = -2;
int32_t t191 = 81560;
volatile uint16_t x772 = UINT16_MAX;
int8_t x781 = INT8_MIN;
volatile int32_t t195 = 538;
volatile int32_t x787 = 79315;
uint64_t x797 = UINT64_MAX;
int8_t x798 = -1;
int64_t x800 = INT64_MIN;


void f0(void) {
    	uint8_t x2 = 7U;
	int64_t x3 = INT64_MIN;
	volatile uint32_t x4 = 1U;

    t0 = ((x1&(x2&x3))>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	int16_t x6 = 1312;
	volatile uint8_t x7 = 105U;
	static int16_t x8 = -1;

    t1 = ((x5&(x6&x7))>x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x11 = INT32_MIN;

    t2 = ((x9&(x10&x11))>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MAX;
	int8_t x14 = INT8_MIN;
	volatile int64_t x15 = -1LL;
	int16_t x16 = INT16_MAX;
	volatile int32_t t3 = 267873477;

    t3 = ((x13&(x14&x15))>x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x18 = 315U;
	static int64_t x19 = 0LL;
	int8_t x20 = -1;
	volatile int32_t t4 = 1690529;

    t4 = ((x17&(x18&x19))>x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 99U;
	static int32_t x22 = INT32_MIN;
	int64_t x23 = -1LL;
	uint32_t x24 = 7894379U;
	volatile int32_t t5 = -988520;

    t5 = ((x21&(x22&x23))>x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x26 = 420547923792381LL;
	uint64_t x28 = 37163548597LLU;
	volatile int32_t t6 = 66242403;

    t6 = ((x25&(x26&x27))>x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = 3;
	int8_t x31 = INT8_MIN;
	int32_t x32 = INT32_MIN;
	volatile int32_t t7 = 21098;

    t7 = ((x29&(x30&x31))>x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -146800291329409LL;
	uint8_t x34 = 1U;
	static uint64_t x35 = UINT64_MAX;
	uint64_t x36 = UINT64_MAX;
	int32_t t8 = -1;

    t8 = ((x33&(x34&x35))>x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MAX;
	int8_t x38 = INT8_MAX;
	int8_t x39 = 25;
	int8_t x40 = INT8_MIN;
	int32_t t9 = 11394;

    t9 = ((x37&(x38&x39))>x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x41 = -1;
	uint64_t x42 = 755832LLU;
	static uint32_t x43 = 63U;
	volatile uint16_t x44 = UINT16_MAX;
	int32_t t10 = -78123;

    t10 = ((x41&(x42&x43))>x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = 7804115015641LLU;
	volatile int64_t x48 = INT64_MIN;

    t11 = ((x45&(x46&x47))>x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = 3842U;
	static int32_t x50 = 867854;
	static volatile uint32_t x51 = UINT32_MAX;
	int8_t x52 = INT8_MAX;
	int32_t t12 = -962637;

    t12 = ((x49&(x50&x51))>x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = 0U;
	uint16_t x54 = 54U;
	uint16_t x55 = UINT16_MAX;
	int8_t x56 = -1;
	volatile int32_t t13 = 27874;

    t13 = ((x53&(x54&x55))>x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = 5472108683754128186LLU;
	int16_t x58 = INT16_MIN;
	uint32_t x59 = 2453096U;
	volatile int32_t t14 = -464816544;

    t14 = ((x57&(x58&x59))>x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = 914LLU;
	int32_t x62 = 0;
	uint16_t x63 = UINT16_MAX;
	volatile int32_t t15 = -532955;

    t15 = ((x61&(x62&x63))>x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x65 = -1LL;
	int64_t x66 = -1LL;
	uint16_t x67 = 19288U;
	int16_t x68 = INT16_MIN;
	static int32_t t16 = 15372;

    t16 = ((x65&(x66&x67))>x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = 5535051945LL;
	uint16_t x70 = 3U;
	int32_t x71 = INT32_MIN;
	volatile int16_t x72 = -29;
	volatile int32_t t17 = 10;

    t17 = ((x69&(x70&x71))>x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = -5830;
	volatile int16_t x74 = 0;
	int64_t x75 = -1LL;
	static volatile uint32_t x76 = 171961U;
	int32_t t18 = -6;

    t18 = ((x73&(x74&x75))>x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = -1;
	uint64_t x78 = 729310542LLU;
	int64_t x79 = INT64_MIN;
	volatile int64_t x80 = INT64_MAX;
	static volatile int32_t t19 = -3763022;

    t19 = ((x77&(x78&x79))>x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x82 = 0U;
	int16_t x83 = -1;
	int32_t x84 = 3200559;
	static int32_t t20 = 128855728;

    t20 = ((x81&(x82&x83))>x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = 6;
	volatile int64_t x86 = -1LL;
	uint16_t x88 = UINT16_MAX;
	int32_t t21 = -866377453;

    t21 = ((x85&(x86&x87))>x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x89 = 4024781820462LL;
	volatile uint16_t x90 = 68U;
	int8_t x91 = INT8_MIN;
	int8_t x92 = INT8_MAX;
	int32_t t22 = -907;

    t22 = ((x89&(x90&x91))>x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x93 = -5895427;
	uint64_t x94 = 5309277268060352LLU;
	int8_t x95 = INT8_MIN;
	static int64_t x96 = INT64_MIN;
	int32_t t23 = -877;

    t23 = ((x93&(x94&x95))>x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint8_t x97 = UINT8_MAX;
	static int32_t x98 = 237;
	static volatile int16_t x99 = -1;
	int8_t x100 = INT8_MIN;
	static int32_t t24 = 24770438;

    t24 = ((x97&(x98&x99))>x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x102 = INT32_MIN;
	uint64_t x103 = 40779547172923LLU;
	volatile int32_t t25 = -475186622;

    t25 = ((x101&(x102&x103))>x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x105 = INT8_MAX;
	int32_t x107 = -1;
	static int32_t t26 = 388;

    t26 = ((x105&(x106&x107))>x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = 3;
	volatile int64_t x110 = INT64_MAX;
	volatile int64_t x111 = 2107173LL;
	static uint32_t x112 = 18144582U;
	static int32_t t27 = -8;

    t27 = ((x109&(x110&x111))>x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x113 = 7;
	static int16_t x114 = -352;
	static uint32_t x115 = 9317U;
	volatile int8_t x116 = INT8_MIN;
	volatile int32_t t28 = -6451854;

    t28 = ((x113&(x114&x115))>x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = INT64_MAX;
	int16_t x119 = INT16_MIN;
	static uint8_t x120 = 82U;
	volatile int32_t t29 = 6075;

    t29 = ((x117&(x118&x119))>x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x122 = UINT32_MAX;
	int16_t x123 = -3;
	int16_t x124 = INT16_MAX;
	int32_t t30 = 202952099;

    t30 = ((x121&(x122&x123))>x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x126 = 426792;
	uint16_t x127 = 1704U;
	int16_t x128 = 2;
	int32_t t31 = -1595091;

    t31 = ((x125&(x126&x127))>x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x129 = 16180LLU;
	int16_t x130 = INT16_MIN;
	volatile int32_t x131 = INT32_MIN;
	volatile int8_t x132 = INT8_MIN;

    t32 = ((x129&(x130&x131))>x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x135 = 0U;
	volatile uint8_t x136 = 18U;
	volatile int32_t t33 = 336610;

    t33 = ((x133&(x134&x135))>x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x137 = INT8_MIN;
	int16_t x138 = 12678;
	static volatile int16_t x139 = 1;
	static int64_t x140 = -1LL;
	volatile int32_t t34 = 93;

    t34 = ((x137&(x138&x139))>x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x141 = UINT64_MAX;
	int16_t x142 = -192;
	int32_t x143 = 1;
	static volatile int32_t t35 = 7;

    t35 = ((x141&(x142&x143))>x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x146 = INT8_MAX;
	int64_t x147 = -446566208LL;
	int16_t x148 = -1;
	volatile int32_t t36 = -13880;

    t36 = ((x145&(x146&x147))>x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MIN;
	static int32_t x150 = -1;
	volatile uint16_t x151 = 271U;
	volatile uint32_t x152 = 19221U;

    t37 = ((x149&(x150&x151))>x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x153 = -1;
	static uint32_t x154 = 3U;
	uint64_t x155 = 84439956430380LLU;
	int16_t x156 = 1;
	int32_t t38 = 40996;

    t38 = ((x153&(x154&x155))>x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MIN;
	int8_t x159 = INT8_MIN;
	int64_t x160 = -7248LL;
	static int32_t t39 = -40;

    t39 = ((x157&(x158&x159))>x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = INT32_MIN;
	int16_t x162 = INT16_MIN;
	uint8_t x163 = 3U;
	uint8_t x164 = UINT8_MAX;
	volatile int32_t t40 = 28676;

    t40 = ((x161&(x162&x163))>x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x165 = UINT8_MAX;
	uint64_t x168 = UINT64_MAX;
	static volatile int32_t t41 = -732054049;

    t41 = ((x165&(x166&x167))>x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = -361131794LL;
	uint16_t x170 = UINT16_MAX;
	static volatile int64_t x171 = INT64_MIN;
	int16_t x172 = INT16_MAX;
	volatile int32_t t42 = 692129;

    t42 = ((x169&(x170&x171))>x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x173 = 1402411;
	int16_t x175 = INT16_MIN;
	int32_t t43 = 7657197;

    t43 = ((x173&(x174&x175))>x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x179 = 1080383;
	int16_t x180 = INT16_MIN;
	int32_t t44 = 677884;

    t44 = ((x177&(x178&x179))>x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x181 = 130530U;
	int8_t x182 = -15;
	int16_t x183 = 0;

    t45 = ((x181&(x182&x183))>x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = INT16_MAX;
	volatile int8_t x186 = INT8_MAX;
	int8_t x187 = -1;
	int64_t x188 = -1504750389077383824LL;
	int32_t t46 = -24;

    t46 = ((x185&(x186&x187))>x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = INT32_MAX;
	int64_t x190 = -1LL;
	int8_t x192 = 18;
	volatile int32_t t47 = -126478598;

    t47 = ((x189&(x190&x191))>x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int64_t x193 = -70626LL;
	int8_t x194 = 42;
	int16_t x195 = -36;
	int8_t x196 = INT8_MIN;
	int32_t t48 = 424;

    t48 = ((x193&(x194&x195))>x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x198 = 57U;
	int32_t x199 = INT32_MIN;
	volatile int32_t x200 = -1;
	int32_t t49 = 584149194;

    t49 = ((x197&(x198&x199))>x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = INT32_MIN;
	static volatile int64_t x202 = 1692055LL;
	int32_t x204 = -7688;
	volatile int32_t t50 = -213304425;

    t50 = ((x201&(x202&x203))>x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x205 = 16107U;
	volatile int8_t x207 = 1;
	static int32_t x208 = INT32_MIN;
	volatile int32_t t51 = 35996;

    t51 = ((x205&(x206&x207))>x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint16_t x209 = UINT16_MAX;
	volatile int64_t x210 = -1LL;
	static int8_t x211 = -1;
	int32_t t52 = -8416995;

    t52 = ((x209&(x210&x211))>x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x213 = 7;
	int64_t x214 = INT64_MIN;
	int16_t x215 = INT16_MIN;
	int32_t t53 = 13;

    t53 = ((x213&(x214&x215))>x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x220 = INT8_MIN;
	volatile int32_t t54 = 0;

    t54 = ((x217&(x218&x219))>x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x222 = -5;
	uint32_t x223 = 120434U;
	int64_t x224 = 1809927315LL;
	int32_t t55 = -15168094;

    t55 = ((x221&(x222&x223))>x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = -38466920LL;
	int16_t x226 = INT16_MIN;
	static int32_t x227 = INT32_MAX;
	static int32_t x228 = INT32_MAX;
	static int32_t t56 = 21271;

    t56 = ((x225&(x226&x227))>x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = -1;
	volatile uint16_t x230 = 1687U;
	int8_t x232 = 1;
	int32_t t57 = 872311;

    t57 = ((x229&(x230&x231))>x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x233 = UINT16_MAX;
	static uint32_t x234 = 12U;
	uint64_t x236 = 37LLU;

    t58 = ((x233&(x234&x235))>x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x238 = -1LL;
	volatile int64_t x239 = -1LL;
	static int32_t x240 = INT32_MAX;

    t59 = ((x237&(x238&x239))>x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = -91;
	static uint16_t x242 = 19476U;
	int8_t x243 = -1;
	uint64_t x244 = 3941490957LLU;
	int32_t t60 = 1489;

    t60 = ((x241&(x242&x243))>x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x247 = UINT64_MAX;
	volatile int32_t t61 = 4;

    t61 = ((x245&(x246&x247))>x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x249 = 4916530U;
	uint16_t x250 = 68U;
	int16_t x251 = INT16_MIN;
	volatile int8_t x252 = -5;
	int32_t t62 = 106;

    t62 = ((x249&(x250&x251))>x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = INT16_MIN;
	static uint32_t x255 = 293494U;
	int8_t x256 = INT8_MIN;
	volatile int32_t t63 = 118312391;

    t63 = ((x253&(x254&x255))>x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x258 = -1;
	uint64_t x259 = UINT64_MAX;
	uint64_t x260 = 0LLU;

    t64 = ((x257&(x258&x259))>x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = -1LL;
	static int32_t x263 = INT32_MIN;
	volatile uint32_t x264 = UINT32_MAX;
	volatile int32_t t65 = -32728367;

    t65 = ((x261&(x262&x263))>x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = INT16_MIN;
	volatile int16_t x266 = INT16_MAX;
	static uint8_t x268 = 62U;
	int32_t t66 = -13421834;

    t66 = ((x265&(x266&x267))>x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint16_t x269 = 1511U;
	int32_t x270 = 3;
	volatile int32_t x271 = -1;
	int32_t t67 = 29590;

    t67 = ((x269&(x270&x271))>x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = INT32_MAX;
	int8_t x274 = -19;
	int8_t x275 = INT8_MAX;
	volatile int32_t t68 = -115;

    t68 = ((x273&(x274&x275))>x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = 1764198747LL;
	uint8_t x278 = 121U;
	volatile uint8_t x279 = UINT8_MAX;
	int32_t x280 = -13758;
	int32_t t69 = -213099552;

    t69 = ((x277&(x278&x279))>x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x281 = 18;
	int8_t x284 = INT8_MIN;
	int32_t t70 = -642452;

    t70 = ((x281&(x282&x283))>x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x286 = 4182481996218LL;
	int32_t t71 = -9690543;

    t71 = ((x285&(x286&x287))>x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint16_t x291 = UINT16_MAX;
	uint8_t x292 = UINT8_MAX;

    t72 = ((x289&(x290&x291))>x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = INT16_MAX;
	uint64_t x294 = UINT64_MAX;
	int8_t x295 = INT8_MAX;
	uint32_t x296 = 12875799U;
	int32_t t73 = 51;

    t73 = ((x293&(x294&x295))>x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x299 = INT32_MIN;
	int64_t x300 = -7992LL;
	static int32_t t74 = 171;

    t74 = ((x297&(x298&x299))>x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = 20;
	int16_t x302 = INT16_MIN;
	int64_t x303 = INT64_MAX;
	volatile uint64_t x304 = 0LLU;
	volatile int32_t t75 = 33666;

    t75 = ((x301&(x302&x303))>x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x306 = -1LL;
	uint64_t x307 = UINT64_MAX;
	uint64_t x308 = UINT64_MAX;
	volatile int32_t t76 = 0;

    t76 = ((x305&(x306&x307))>x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = INT32_MIN;
	uint16_t x310 = 7U;
	volatile uint64_t x311 = UINT64_MAX;
	int8_t x312 = INT8_MIN;

    t77 = ((x309&(x310&x311))>x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = INT32_MAX;
	volatile uint8_t x314 = 101U;
	int32_t x315 = INT32_MIN;
	volatile int32_t t78 = 207880;

    t78 = ((x313&(x314&x315))>x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x317 = 30845388401103035LLU;
	static int8_t x318 = 1;
	volatile int64_t x319 = INT64_MIN;
	uint64_t x320 = 323628LLU;

    t79 = ((x317&(x318&x319))>x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = INT16_MAX;
	static uint64_t x322 = 64352185LLU;
	uint32_t x323 = UINT32_MAX;
	int32_t t80 = -3231;

    t80 = ((x321&(x322&x323))>x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x325 = UINT64_MAX;
	static uint8_t x327 = 2U;
	volatile int32_t t81 = 141197;

    t81 = ((x325&(x326&x327))>x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x329 = UINT64_MAX;
	volatile int32_t x330 = INT32_MIN;
	int16_t x331 = INT16_MAX;
	volatile int32_t t82 = -5972;

    t82 = ((x329&(x330&x331))>x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x334 = INT8_MIN;
	int8_t x335 = INT8_MIN;

    t83 = ((x333&(x334&x335))>x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = INT8_MAX;
	int8_t x338 = -1;
	int64_t x340 = -1LL;
	int32_t t84 = 2475;

    t84 = ((x337&(x338&x339))>x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x341 = 180504442;
	volatile uint64_t x342 = 760278969628LLU;
	volatile int8_t x344 = INT8_MIN;
	static int32_t t85 = 1;

    t85 = ((x341&(x342&x343))>x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x346 = 470U;
	uint16_t x348 = 55U;

    t86 = ((x345&(x346&x347))>x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = INT32_MAX;
	volatile int32_t x350 = INT32_MIN;
	int32_t x351 = INT32_MIN;
	static int32_t t87 = -7;

    t87 = ((x349&(x350&x351))>x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x353 = INT32_MAX;
	static uint64_t x354 = UINT64_MAX;
	int16_t x355 = INT16_MIN;
	static volatile uint8_t x356 = UINT8_MAX;

    t88 = ((x353&(x354&x355))>x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x357 = 1U;
	volatile int8_t x358 = INT8_MIN;
	int64_t x360 = INT64_MIN;

    t89 = ((x357&(x358&x359))>x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x362 = UINT32_MAX;
	int32_t x363 = -1;
	int64_t x364 = INT64_MIN;
	static volatile int32_t t90 = 0;

    t90 = ((x361&(x362&x363))>x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int64_t x365 = INT64_MIN;
	volatile int32_t x366 = 25951753;
	static int32_t x367 = INT32_MAX;
	int16_t x368 = -31;

    t91 = ((x365&(x366&x367))>x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = INT16_MIN;
	uint16_t x370 = 3585U;
	int16_t x371 = INT16_MAX;
	volatile int32_t t92 = -33079562;

    t92 = ((x369&(x370&x371))>x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = INT64_MAX;
	static volatile int64_t x374 = -71019960293284LL;
	volatile int64_t x375 = INT64_MIN;
	volatile int64_t x376 = INT64_MAX;
	int32_t t93 = -294612;

    t93 = ((x373&(x374&x375))>x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x377 = UINT64_MAX;
	int8_t x378 = 30;
	uint32_t x380 = 4U;
	static int32_t t94 = -4992303;

    t94 = ((x377&(x378&x379))>x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x381 = 485U;
	volatile uint16_t x383 = 2629U;
	static int32_t x384 = INT32_MIN;
	static int32_t t95 = 7225;

    t95 = ((x381&(x382&x383))>x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = INT16_MAX;
	int16_t x386 = -1;
	uint8_t x387 = UINT8_MAX;
	static int32_t x388 = 424405535;

    t96 = ((x385&(x386&x387))>x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int16_t x389 = 0;
	int16_t x390 = INT16_MIN;
	int16_t x391 = INT16_MAX;
	volatile int32_t t97 = -30;

    t97 = ((x389&(x390&x391))>x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = -1;
	volatile int16_t x394 = INT16_MAX;
	static int16_t x395 = INT16_MAX;
	int8_t x396 = INT8_MIN;
	volatile int32_t t98 = -1;

    t98 = ((x393&(x394&x395))>x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x397 = 109860666U;
	int16_t x398 = 0;
	uint8_t x399 = UINT8_MAX;
	int32_t x400 = INT32_MIN;

    t99 = ((x397&(x398&x399))>x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x401 = 328047932910782715LLU;
	uint16_t x402 = UINT16_MAX;
	uint16_t x403 = 26U;
	uint64_t x404 = UINT64_MAX;
	int32_t t100 = -2;

    t100 = ((x401&(x402&x403))>x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x405 = -1;
	int8_t x406 = 31;
	int64_t x407 = INT64_MIN;
	int32_t t101 = -101859667;

    t101 = ((x405&(x406&x407))>x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MIN;
	int64_t x411 = INT64_MIN;
	static volatile uint64_t x412 = 273LLU;
	int32_t t102 = 2;

    t102 = ((x409&(x410&x411))>x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = -11740487321LL;
	int8_t x414 = 14;
	static int32_t x415 = -39739121;
	static int8_t x416 = INT8_MIN;
	int32_t t103 = 13943327;

    t103 = ((x413&(x414&x415))>x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = INT32_MAX;
	volatile int32_t t104 = -1;

    t104 = ((x417&(x418&x419))>x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x422 = INT64_MAX;
	int8_t x423 = INT8_MAX;
	volatile int32_t x424 = INT32_MIN;
	static int32_t t105 = 75953449;

    t105 = ((x421&(x422&x423))>x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = 0;
	int8_t x427 = -1;
	int32_t t106 = -44694319;

    t106 = ((x425&(x426&x427))>x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = INT64_MIN;
	static int8_t x431 = INT8_MIN;
	int64_t x432 = INT64_MIN;
	volatile int32_t t107 = -3;

    t107 = ((x429&(x430&x431))>x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x435 = INT16_MAX;
	static int8_t x436 = -1;
	volatile int32_t t108 = -3255658;

    t108 = ((x433&(x434&x435))>x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = INT8_MIN;
	int16_t x438 = -1;
	int32_t x439 = INT32_MIN;
	volatile int32_t t109 = 580;

    t109 = ((x437&(x438&x439))>x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x441 = UINT16_MAX;
	int64_t x442 = -1LL;
	int16_t x443 = INT16_MIN;
	int32_t t110 = -52;

    t110 = ((x441&(x442&x443))>x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = -1;
	int16_t x446 = -3153;
	uint32_t x447 = 7U;
	uint64_t x448 = 5798070433293LLU;
	int32_t t111 = -5290;

    t111 = ((x445&(x446&x447))>x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x449 = INT8_MIN;
	int8_t x450 = -1;
	uint32_t x451 = 179U;
	static int8_t x452 = INT8_MIN;
	static int32_t t112 = -559606701;

    t112 = ((x449&(x450&x451))>x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = 2349;
	int32_t x454 = 1225313;
	int32_t x456 = -1;
	int32_t t113 = 3022988;

    t113 = ((x453&(x454&x455))>x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x457 = INT32_MIN;
	volatile uint8_t x458 = UINT8_MAX;
	uint16_t x459 = 436U;
	volatile int16_t x460 = -7;
	volatile int32_t t114 = -27;

    t114 = ((x457&(x458&x459))>x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint16_t x461 = 16234U;
	int64_t x462 = 1LL;
	static uint8_t x463 = 15U;
	uint64_t x464 = 4290708552505737LLU;

    t115 = ((x461&(x462&x463))>x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = 15;
	volatile int32_t x466 = -370472;
	int16_t x467 = INT16_MAX;
	static int32_t x468 = -1;
	int32_t t116 = 71;

    t116 = ((x465&(x466&x467))>x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x469 = UINT16_MAX;
	uint64_t x470 = 39638647LLU;
	static volatile int8_t x471 = 54;
	uint64_t x472 = 7020287LLU;
	int32_t t117 = -8449390;

    t117 = ((x469&(x470&x471))>x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x473 = 488477U;
	int64_t x474 = -47490308LL;
	static volatile int32_t t118 = -11;

    t118 = ((x473&(x474&x475))>x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int32_t x477 = -1;
	volatile int64_t x478 = 1LL;
	static int32_t x479 = INT32_MIN;
	volatile int64_t x480 = INT64_MAX;

    t119 = ((x477&(x478&x479))>x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x481 = UINT8_MAX;
	static int32_t x482 = -1;
	volatile int32_t x484 = -1;
	int32_t t120 = -32;

    t120 = ((x481&(x482&x483))>x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile uint64_t x486 = UINT64_MAX;
	uint64_t x487 = 106443219540LLU;
	volatile int32_t t121 = 280352;

    t121 = ((x485&(x486&x487))>x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint16_t x489 = UINT16_MAX;
	volatile int64_t x490 = -1LL;
	int16_t x491 = INT16_MAX;
	int16_t x492 = INT16_MIN;
	static volatile int32_t t122 = 48226;

    t122 = ((x489&(x490&x491))>x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint16_t x493 = 9U;
	volatile uint64_t x494 = UINT64_MAX;
	volatile uint64_t x495 = 502547LLU;
	int32_t t123 = -952161935;

    t123 = ((x493&(x494&x495))>x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = INT16_MIN;
	volatile int16_t x498 = INT16_MAX;
	int16_t x499 = INT16_MIN;
	int8_t x500 = INT8_MIN;

    t124 = ((x497&(x498&x499))>x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = INT64_MIN;
	int32_t x502 = -1;
	int16_t x503 = -14846;
	volatile int32_t x504 = INT32_MIN;
	volatile int32_t t125 = -23;

    t125 = ((x501&(x502&x503))>x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x505 = 406775226178054361LLU;
	volatile int64_t x506 = INT64_MIN;
	int8_t x507 = -1;
	int32_t x508 = -1;
	int32_t t126 = -5;

    t126 = ((x505&(x506&x507))>x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x509 = INT32_MIN;
	int64_t x510 = INT64_MIN;
	volatile uint64_t x511 = 14348680476LLU;
	uint8_t x512 = UINT8_MAX;
	static int32_t t127 = -119;

    t127 = ((x509&(x510&x511))>x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x513 = INT8_MAX;
	volatile int32_t x514 = -134991161;
	uint16_t x515 = 202U;
	static uint8_t x516 = UINT8_MAX;
	volatile int32_t t128 = 311;

    t128 = ((x513&(x514&x515))>x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x517 = 12U;
	uint16_t x518 = UINT16_MAX;
	volatile int8_t x520 = 10;

    t129 = ((x517&(x518&x519))>x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = 12;
	static int64_t x522 = -1LL;
	int64_t x524 = -1LL;

    t130 = ((x521&(x522&x523))>x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x525 = 0U;
	static int32_t t131 = 13150687;

    t131 = ((x525&(x526&x527))>x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x529 = -1;
	int32_t x530 = INT32_MIN;
	int8_t x531 = INT8_MAX;
	int32_t x532 = INT32_MIN;

    t132 = ((x529&(x530&x531))>x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int32_t x533 = INT32_MIN;
	int32_t x535 = INT32_MAX;
	uint8_t x536 = 0U;

    t133 = ((x533&(x534&x535))>x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x537 = 7;
	int64_t x538 = -1LL;
	static int32_t x539 = -131;
	int16_t x540 = INT16_MIN;
	int32_t t134 = -17;

    t134 = ((x537&(x538&x539))>x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x542 = UINT8_MAX;
	int16_t x543 = -13384;
	uint8_t x544 = UINT8_MAX;
	static int32_t t135 = 1;

    t135 = ((x541&(x542&x543))>x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x545 = -1LL;
	uint32_t x546 = UINT32_MAX;
	uint16_t x547 = UINT16_MAX;
	int32_t t136 = -99008779;

    t136 = ((x545&(x546&x547))>x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x549 = -26004195;
	uint64_t x551 = 1009629LLU;
	int64_t x552 = INT64_MIN;
	int32_t t137 = -7;

    t137 = ((x549&(x550&x551))>x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = -1LL;
	static int16_t x555 = 297;
	int16_t x556 = INT16_MIN;
	volatile int32_t t138 = -1037308;

    t138 = ((x553&(x554&x555))>x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = 62;
	uint16_t x558 = 3058U;
	static uint8_t x559 = 10U;
	int32_t x560 = -1;
	int32_t t139 = 870658733;

    t139 = ((x557&(x558&x559))>x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x561 = UINT32_MAX;
	static uint32_t x562 = UINT32_MAX;
	int64_t x563 = -1LL;
	int64_t x564 = -1LL;
	volatile int32_t t140 = -215;

    t140 = ((x561&(x562&x563))>x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = INT16_MAX;
	volatile int8_t x566 = -1;
	uint32_t x567 = 41853339U;
	int16_t x568 = 11;
	volatile int32_t t141 = 1;

    t141 = ((x565&(x566&x567))>x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x569 = 1003123LLU;
	static int32_t x570 = INT32_MIN;
	int16_t x571 = 494;
	static int16_t x572 = -1;
	volatile int32_t t142 = -1;

    t142 = ((x569&(x570&x571))>x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x575 = 2U;
	uint16_t x576 = UINT16_MAX;
	static volatile int32_t t143 = 20689;

    t143 = ((x573&(x574&x575))>x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x578 = -46405027;
	int32_t x579 = 10697074;

    t144 = ((x577&(x578&x579))>x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x582 = UINT64_MAX;
	int16_t x583 = -1;
	uint8_t x584 = 1U;
	volatile int32_t t145 = 2713;

    t145 = ((x581&(x582&x583))>x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x585 = 5U;
	int32_t x586 = -1;
	int32_t x587 = -1;
	int32_t t146 = -20178917;

    t146 = ((x585&(x586&x587))>x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = INT32_MIN;
	int16_t x591 = -1;
	volatile int32_t t147 = 135259;

    t147 = ((x589&(x590&x591))>x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = -1;
	static uint64_t x594 = 24417583LLU;
	uint16_t x595 = 1513U;
	int64_t x596 = INT64_MIN;
	int32_t t148 = 11320352;

    t148 = ((x593&(x594&x595))>x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = -1LL;
	int16_t x598 = -1;
	int32_t x599 = -965213353;
	static int32_t x600 = 6;
	volatile int32_t t149 = -3587237;

    t149 = ((x597&(x598&x599))>x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = INT8_MIN;
	static volatile int8_t x602 = -14;
	int64_t x604 = INT64_MIN;
	volatile int32_t t150 = -1;

    t150 = ((x601&(x602&x603))>x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = INT8_MAX;
	uint16_t x606 = 13279U;
	int8_t x607 = INT8_MIN;
	int64_t x608 = INT64_MIN;
	int32_t t151 = -29795316;

    t151 = ((x605&(x606&x607))>x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x610 = INT32_MIN;
	uint8_t x611 = 3U;
	volatile int32_t t152 = 8003;

    t152 = ((x609&(x610&x611))>x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x613 = 37U;
	int32_t x614 = 7336;
	static uint16_t x615 = UINT16_MAX;
	uint32_t x616 = 134173825U;
	int32_t t153 = 31;

    t153 = ((x613&(x614&x615))>x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = 1957;
	static uint16_t x618 = 2166U;
	uint16_t x619 = UINT16_MAX;
	volatile int32_t x620 = -44599529;
	int32_t t154 = -14657658;

    t154 = ((x617&(x618&x619))>x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x622 = INT16_MIN;
	static volatile uint64_t x623 = 66621845016126LLU;
	int32_t t155 = -1800;

    t155 = ((x621&(x622&x623))>x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x625 = INT32_MIN;
	uint64_t x626 = UINT64_MAX;
	volatile int8_t x628 = 3;
	volatile int32_t t156 = -1;

    t156 = ((x625&(x626&x627))>x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = 10;
	int16_t x630 = INT16_MAX;
	volatile int32_t x631 = INT32_MAX;
	int8_t x632 = INT8_MAX;
	int32_t t157 = -2002414;

    t157 = ((x629&(x630&x631))>x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = INT8_MAX;
	volatile uint16_t x634 = 8782U;
	int32_t x635 = -1;
	volatile int8_t x636 = 0;
	static int32_t t158 = -50994940;

    t158 = ((x633&(x634&x635))>x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x637 = 0LLU;
	uint64_t x638 = UINT64_MAX;
	int16_t x640 = INT16_MIN;
	static volatile int32_t t159 = -11;

    t159 = ((x637&(x638&x639))>x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = -691;
	int8_t x643 = -1;
	int8_t x644 = 0;
	volatile int32_t t160 = 7425;

    t160 = ((x641&(x642&x643))>x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x645 = UINT16_MAX;
	uint8_t x646 = 1U;
	volatile int32_t t161 = -5472117;

    t161 = ((x645&(x646&x647))>x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = -920;
	volatile int32_t x650 = -36865;
	int8_t x651 = -1;
	uint32_t x652 = 78741U;
	static int32_t t162 = 8132334;

    t162 = ((x649&(x650&x651))>x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x653 = 1194568LLU;
	volatile int32_t x654 = 32;
	static uint64_t x656 = 22869309866288LLU;
	volatile int32_t t163 = 2;

    t163 = ((x653&(x654&x655))>x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = INT8_MAX;
	int8_t x658 = -1;
	int64_t x659 = INT64_MIN;

    t164 = ((x657&(x658&x659))>x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint8_t x662 = 8U;
	uint8_t x663 = 1U;
	uint32_t x664 = 309386532U;
	int32_t t165 = 3576;

    t165 = ((x661&(x662&x663))>x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = INT8_MIN;
	volatile int64_t x667 = -1LL;
	static int64_t x668 = -4845658827LL;

    t166 = ((x665&(x666&x667))>x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile uint64_t x669 = UINT64_MAX;
	static volatile int16_t x670 = INT16_MAX;
	int8_t x671 = -41;
	int32_t x672 = INT32_MIN;
	static volatile int32_t t167 = -56047004;

    t167 = ((x669&(x670&x671))>x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x673 = 16131570U;
	int32_t x675 = INT32_MIN;
	uint16_t x676 = UINT16_MAX;
	static volatile int32_t t168 = -55556;

    t168 = ((x673&(x674&x675))>x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = -1;
	uint32_t x678 = 79U;
	volatile int64_t x679 = -3268667879LL;
	int32_t t169 = 3;

    t169 = ((x677&(x678&x679))>x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x681 = 3U;
	static int32_t x682 = -1;
	uint16_t x683 = 8216U;
	static int8_t x684 = 0;

    t170 = ((x681&(x682&x683))>x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x686 = INT32_MIN;
	int16_t x687 = -9656;
	static uint32_t x688 = 15U;

    t171 = ((x685&(x686&x687))>x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x690 = INT16_MIN;
	int8_t x691 = INT8_MAX;
	static uint16_t x692 = 5576U;
	volatile int32_t t172 = 313187305;

    t172 = ((x689&(x690&x691))>x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x693 = -1LL;
	int32_t x694 = INT32_MAX;
	int32_t t173 = -3883514;

    t173 = ((x693&(x694&x695))>x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x697 = 10931252402205LLU;
	volatile int16_t x698 = INT16_MIN;
	uint32_t x699 = 197625756U;
	static int32_t x700 = INT32_MIN;
	int32_t t174 = 302365281;

    t174 = ((x697&(x698&x699))>x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = 5;
	int16_t x702 = 0;
	uint64_t x703 = 138020421610643688LLU;
	volatile int16_t x704 = 1831;
	volatile int32_t t175 = 214478;

    t175 = ((x701&(x702&x703))>x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x705 = 9646U;
	static int16_t x706 = INT16_MIN;
	volatile int32_t t176 = -1;

    t176 = ((x705&(x706&x707))>x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x709 = UINT16_MAX;
	uint16_t x711 = 7U;
	int32_t x712 = 45;
	int32_t t177 = 7490222;

    t177 = ((x709&(x710&x711))>x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x713 = 3162055LLU;
	volatile int8_t x714 = INT8_MIN;
	volatile int8_t x715 = -7;
	int8_t x716 = INT8_MIN;
	int32_t t178 = 0;

    t178 = ((x713&(x714&x715))>x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x717 = INT32_MIN;
	int32_t x718 = -1;
	static int32_t x719 = INT32_MIN;
	int8_t x720 = -1;

    t179 = ((x717&(x718&x719))>x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = UINT64_MAX;
	int16_t x722 = 1413;
	uint8_t x723 = UINT8_MAX;
	volatile int32_t t180 = -849530481;

    t180 = ((x721&(x722&x723))>x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = INT64_MIN;
	int32_t x726 = -1;
	uint64_t x728 = 5LLU;
	int32_t t181 = 13569;

    t181 = ((x725&(x726&x727))>x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = 43;
	volatile uint8_t x730 = UINT8_MAX;
	volatile int32_t t182 = 828673;

    t182 = ((x729&(x730&x731))>x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = 126;
	int16_t x734 = INT16_MAX;
	static uint16_t x736 = 3U;

    t183 = ((x733&(x734&x735))>x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x737 = 1054807397LL;
	static uint8_t x738 = UINT8_MAX;
	int8_t x739 = INT8_MIN;
	int8_t x740 = -12;
	int32_t t184 = 46;

    t184 = ((x737&(x738&x739))>x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x742 = -1;
	int64_t x743 = INT64_MIN;
	volatile int32_t t185 = -270687;

    t185 = ((x741&(x742&x743))>x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x746 = -1;
	uint8_t x747 = UINT8_MAX;

    t186 = ((x745&(x746&x747))>x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = INT8_MAX;
	int64_t x752 = INT64_MIN;
	volatile int32_t t187 = -517252554;

    t187 = ((x749&(x750&x751))>x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = -1;
	uint8_t x754 = 1U;
	int8_t x755 = -11;
	volatile int16_t x756 = -1;
	volatile int32_t t188 = 3866;

    t188 = ((x753&(x754&x755))>x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x757 = 135472629LLU;
	volatile int8_t x760 = -13;
	int32_t t189 = 7;

    t189 = ((x757&(x758&x759))>x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x762 = -2175270060LL;
	static volatile int64_t x763 = -1LL;

    t190 = ((x761&(x762&x763))>x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = -1;
	int16_t x766 = -1;
	static uint32_t x767 = UINT32_MAX;
	int8_t x768 = -3;

    t191 = ((x765&(x766&x767))>x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = INT16_MIN;
	int64_t x770 = INT64_MAX;
	int32_t x771 = INT32_MIN;
	volatile int32_t t192 = -218036730;

    t192 = ((x769&(x770&x771))>x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = INT64_MAX;
	uint64_t x774 = 1034028284469190LLU;
	uint64_t x775 = 1761652LLU;
	int32_t x776 = 1;
	volatile int32_t t193 = 15;

    t193 = ((x773&(x774&x775))>x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = -4;
	static uint32_t x778 = 50069728U;
	static int32_t x779 = INT32_MIN;
	uint16_t x780 = 73U;
	int32_t t194 = 457885;

    t194 = ((x777&(x778&x779))>x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x782 = -4;
	int32_t x783 = INT32_MIN;
	int32_t x784 = 12;

    t195 = ((x781&(x782&x783))>x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = -859066783625148LL;
	int32_t x786 = -1;
	uint8_t x788 = 106U;
	volatile int32_t t196 = -385968766;

    t196 = ((x785&(x786&x787))>x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = 114370;
	volatile int8_t x790 = 0;
	uint64_t x791 = 2658LLU;
	static volatile int16_t x792 = INT16_MAX;
	volatile int32_t t197 = 1238108;

    t197 = ((x789&(x790&x791))>x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x793 = INT32_MIN;
	int64_t x794 = INT64_MAX;
	uint8_t x795 = 6U;
	static uint8_t x796 = UINT8_MAX;
	int32_t t198 = 538488;

    t198 = ((x793&(x794&x795))>x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x799 = INT32_MAX;
	int32_t t199 = -5177107;

    t199 = ((x797&(x798&x799))>x800);

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

