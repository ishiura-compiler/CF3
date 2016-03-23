
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

int64_t x3 = INT64_MIN;
volatile int64_t x6 = -1LL;
int16_t x11 = -1302;
static volatile uint8_t x16 = UINT8_MAX;
int64_t x21 = INT64_MIN;
uint64_t x22 = 316163792810450023LLU;
int64_t x24 = INT64_MAX;
volatile uint32_t x31 = 2U;
static int32_t t9 = 123992067;
int8_t x43 = INT8_MAX;
static uint32_t x54 = UINT32_MAX;
uint64_t x56 = 4314006194038158LLU;
int32_t t13 = -4521259;
uint16_t x61 = UINT16_MAX;
int32_t x67 = -8502;
static int32_t t16 = -10211;
uint8_t x74 = 0U;
volatile int64_t x79 = -1LL;
volatile uint64_t x94 = UINT64_MAX;
int16_t x96 = INT16_MIN;
int64_t x100 = INT64_MIN;
int32_t x105 = -1;
int8_t x106 = INT8_MIN;
int64_t x111 = -164361LL;
int16_t x112 = INT16_MIN;
volatile uint64_t x127 = 21144466911LLU;
int32_t x130 = INT32_MIN;
int32_t t32 = 1;
volatile int32_t x137 = INT32_MIN;
int16_t x143 = 105;
volatile int32_t t36 = 61193581;
int64_t x149 = INT64_MIN;
int64_t x152 = 310LL;
int16_t x154 = -60;
uint16_t x156 = 0U;
static int32_t x158 = INT32_MIN;
volatile uint8_t x169 = 5U;
int8_t x170 = -1;
uint8_t x173 = 3U;
int8_t x174 = -30;
uint64_t x175 = 12076243255685229LLU;
static int32_t t45 = 3935;
int8_t x189 = -3;
int8_t x195 = -1;
int16_t x198 = 1;
static int64_t x203 = INT64_MAX;
uint8_t x210 = UINT8_MAX;
uint64_t x212 = 506864347907LLU;
static volatile int32_t t53 = 8376;
uint16_t x218 = 2828U;
uint64_t x220 = UINT64_MAX;
volatile uint8_t x223 = 8U;
int64_t x236 = 47372544037352LL;
int16_t x240 = INT16_MIN;
uint8_t x241 = UINT8_MAX;
static uint8_t x244 = 90U;
int32_t t61 = 362;
int32_t x249 = -1;
uint64_t x252 = 85760062424130LLU;
int16_t x257 = -3747;
volatile int32_t t64 = 7729784;
static uint64_t x276 = 74LLU;
volatile int32_t t68 = -594718930;
volatile int32_t t69 = 5039551;
volatile uint16_t x281 = UINT16_MAX;
static int32_t t70 = 19218;
int8_t x285 = -1;
int64_t x289 = INT64_MIN;
int32_t t74 = -72333993;
int32_t x301 = -984;
int8_t x307 = -1;
int8_t x308 = INT8_MAX;
uint32_t x309 = 5U;
int16_t x313 = -1;
int32_t x316 = -1;
static int32_t t78 = 42037;
static int64_t x327 = 23647069238207LL;
int64_t x328 = -1369365022037978690LL;
volatile uint64_t x331 = 58955732286LLU;
uint64_t x332 = 141313LLU;
uint32_t x334 = UINT32_MAX;
uint32_t x336 = 749177950U;
volatile int32_t t84 = 14;
static volatile int16_t x343 = 52;
int32_t x344 = 15;
volatile int8_t x349 = INT8_MAX;
static int16_t x350 = INT16_MIN;
volatile int32_t x351 = INT32_MIN;
static volatile int32_t t88 = 954810;
uint16_t x358 = 13337U;
int32_t t89 = 31904;
volatile int16_t x368 = -30;
int32_t t91 = 814826158;
int8_t x369 = -25;
volatile int64_t x370 = -5644916631211453LL;
int8_t x371 = INT8_MIN;
int16_t x372 = -214;
int16_t x375 = INT16_MIN;
int64_t x376 = INT64_MIN;
static volatile int32_t t93 = 38;
volatile int16_t x382 = INT16_MIN;
volatile int32_t t95 = 64;
int32_t x389 = INT32_MIN;
static int32_t x391 = 172;
volatile uint16_t x400 = 2394U;
int32_t t99 = 123444;
int8_t x405 = INT8_MIN;
volatile int16_t x410 = INT16_MIN;
volatile int64_t x421 = -1LL;
static int8_t x422 = INT8_MAX;
static int64_t x431 = 8087899LL;
int16_t x435 = INT16_MIN;
volatile int32_t t108 = 2678148;
static int32_t x437 = INT32_MIN;
int64_t x438 = INT64_MAX;
int8_t x439 = -2;
int16_t x443 = 2;
volatile int32_t x446 = -90330;
int16_t x449 = -1;
int64_t x453 = 13595034056LL;
uint8_t x456 = UINT8_MAX;
static int8_t x458 = INT8_MIN;
int32_t x459 = INT32_MIN;
int32_t x462 = -9304113;
int32_t x464 = 28;
int64_t x476 = -1LL;
int32_t x478 = -12986507;
static int8_t x482 = INT8_MIN;
static volatile int32_t t120 = 260707;
static int8_t x496 = -1;
int32_t x501 = 187759043;
uint32_t x502 = 1982589U;
uint16_t x508 = UINT16_MAX;
int16_t x512 = INT16_MAX;
int8_t x513 = INT8_MIN;
uint32_t x519 = UINT32_MAX;
static int8_t x520 = -2;
volatile int32_t x527 = INT32_MAX;
uint32_t x532 = 1270588275U;
int32_t t132 = -6;
volatile int32_t x534 = -30666;
static uint8_t x542 = 2U;
uint32_t x554 = UINT32_MAX;
int8_t x555 = -1;
uint16_t x557 = 1399U;
int32_t t140 = -3826;
int64_t x571 = INT64_MAX;
volatile int32_t t142 = -88589712;
int64_t x586 = -2964027489LL;
uint32_t x588 = UINT32_MAX;
uint32_t x589 = UINT32_MAX;
int16_t x592 = INT16_MIN;
uint64_t x595 = UINT64_MAX;
int64_t x603 = INT64_MIN;
volatile int32_t t150 = -1;
int64_t x614 = 317275195591535447LL;
uint32_t x621 = 69218754U;
static volatile int32_t x622 = INT32_MIN;
uint32_t x623 = 1691112448U;
int8_t x626 = -1;
uint32_t x628 = UINT32_MAX;
static int32_t x643 = -1;
uint64_t x650 = 5612380LLU;
uint32_t x655 = 23042508U;
static int32_t t166 = -650039;
int16_t x669 = INT16_MIN;
int64_t x675 = -1LL;
volatile uint32_t x678 = 112U;
int32_t x692 = -1;
volatile int8_t x695 = INT8_MIN;
uint64_t x696 = 19LLU;
volatile int8_t x702 = -1;
static int32_t x704 = INT32_MAX;
uint64_t x707 = 3108LLU;
int16_t x711 = -1;
int32_t x723 = -95829;
int32_t t180 = 6750;
int8_t x731 = INT8_MAX;
volatile uint32_t x735 = 100890U;
uint32_t x737 = 29319000U;
int16_t x738 = INT16_MAX;
static volatile int32_t t184 = -57075650;
volatile int16_t x748 = 0;
int32_t t186 = 8;
int8_t x749 = INT8_MIN;
static uint64_t x750 = 2116LLU;
int64_t x757 = -1LL;
int32_t t189 = -6;
int8_t x762 = INT8_MIN;
uint8_t x765 = 23U;
volatile uint64_t x766 = UINT64_MAX;
volatile int16_t x773 = -1;
uint32_t x775 = 41U;
int16_t x776 = INT16_MAX;
int8_t x785 = INT8_MIN;
uint32_t x786 = UINT32_MAX;
int64_t x788 = -122109899161LL;
uint32_t x796 = 14U;


void f0(void) {
    	static int64_t x1 = INT64_MIN;
	int16_t x2 = INT16_MIN;
	static int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -3;

    t0 = (x1>(x2!=(x3>x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = -1;
	volatile uint64_t x7 = 137840LLU;
	int16_t x8 = -1241;
	int32_t t1 = 5360;

    t1 = (x5>(x6!=(x7>x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x9 = 8088U;
	static int8_t x10 = INT8_MIN;
	int64_t x12 = INT64_MIN;
	int32_t t2 = 63907961;

    t2 = (x9>(x10!=(x11>x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 3898331U;
	static int8_t x14 = INT8_MIN;
	static uint8_t x15 = UINT8_MAX;
	static int32_t t3 = 955;

    t3 = (x13>(x14!=(x15>x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = UINT16_MAX;
	static int16_t x18 = 3;
	int16_t x19 = 1641;
	volatile int16_t x20 = -2255;
	int32_t t4 = 477451185;

    t4 = (x17>(x18!=(x19>x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x23 = -1;
	int32_t t5 = 122021;

    t5 = (x21>(x22!=(x23>x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MAX;
	int64_t x26 = INT64_MIN;
	int64_t x27 = INT64_MAX;
	uint8_t x28 = 119U;
	volatile int32_t t6 = -39;

    t6 = (x25>(x26!=(x27>x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = 64457606LL;
	int64_t x30 = -1LL;
	int16_t x32 = -14;
	static volatile int32_t t7 = -1;

    t7 = (x29>(x30!=(x31>x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int32_t x33 = -1;
	uint64_t x34 = 1688249346834872LLU;
	int8_t x35 = INT8_MIN;
	int8_t x36 = 1;
	int32_t t8 = 38456221;

    t8 = (x33>(x34!=(x35>x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	uint8_t x38 = 24U;
	int32_t x39 = 1173988;
	int8_t x40 = INT8_MIN;

    t9 = (x37>(x38!=(x39>x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x41 = 0;
	int32_t x42 = INT32_MIN;
	volatile uint32_t x44 = UINT32_MAX;
	int32_t t10 = -1352;

    t10 = (x41>(x42!=(x43>x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -1;
	volatile int8_t x46 = INT8_MAX;
	uint32_t x47 = 16U;
	int16_t x48 = INT16_MAX;
	static int32_t t11 = 279675;

    t11 = (x45>(x46!=(x47>x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x49 = 7U;
	volatile int64_t x50 = INT64_MAX;
	static uint16_t x51 = UINT16_MAX;
	uint64_t x52 = 1899157257LLU;
	static volatile int32_t t12 = 2;

    t12 = (x49>(x50!=(x51>x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = 4;
	int32_t x55 = 2947;

    t13 = (x53>(x54!=(x55>x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x57 = INT32_MIN;
	int64_t x58 = INT64_MIN;
	static uint64_t x59 = 847237537958LLU;
	int32_t x60 = INT32_MAX;
	volatile int32_t t14 = 1740540;

    t14 = (x57>(x58!=(x59>x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x62 = 367U;
	volatile int64_t x63 = INT64_MIN;
	int8_t x64 = INT8_MIN;
	int32_t t15 = 3;

    t15 = (x61>(x62!=(x63>x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MAX;
	static int16_t x66 = INT16_MIN;
	static uint32_t x68 = 1U;

    t16 = (x65>(x66!=(x67>x68)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MIN;
	uint16_t x70 = UINT16_MAX;
	int16_t x71 = -1;
	uint16_t x72 = 511U;
	volatile int32_t t17 = 14;

    t17 = (x69>(x70!=(x71>x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = 65;
	int64_t x75 = 5467299626652831LL;
	static int16_t x76 = 193;
	volatile int32_t t18 = -1824;

    t18 = (x73>(x74!=(x75>x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = -1LL;
	static uint16_t x78 = 2U;
	int8_t x80 = -1;
	volatile int32_t t19 = 481;

    t19 = (x77>(x78!=(x79>x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = -1;
	uint16_t x82 = UINT16_MAX;
	int16_t x83 = INT16_MIN;
	uint8_t x84 = 0U;
	volatile int32_t t20 = -3088;

    t20 = (x81>(x82!=(x83>x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = -3091021LL;
	int8_t x86 = INT8_MIN;
	int64_t x87 = 221427955LL;
	uint16_t x88 = 7715U;
	volatile int32_t t21 = 2920;

    t21 = (x85>(x86!=(x87>x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = 6600904U;
	uint16_t x90 = 68U;
	int32_t x91 = INT32_MIN;
	int8_t x92 = -1;
	int32_t t22 = -189;

    t22 = (x89>(x90!=(x91>x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x93 = 1U;
	static uint32_t x95 = 1802U;
	volatile int32_t t23 = 28899;

    t23 = (x93>(x94!=(x95>x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = 10U;
	int32_t x98 = 12;
	int64_t x99 = INT64_MIN;
	int32_t t24 = -1;

    t24 = (x97>(x98!=(x99>x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x101 = UINT8_MAX;
	volatile uint32_t x102 = UINT32_MAX;
	uint64_t x103 = UINT64_MAX;
	int8_t x104 = INT8_MIN;
	int32_t t25 = -337190;

    t25 = (x101>(x102!=(x103>x104)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x107 = UINT32_MAX;
	int8_t x108 = INT8_MAX;
	volatile int32_t t26 = 171;

    t26 = (x105>(x106!=(x107>x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = INT8_MIN;
	int32_t x110 = -5965;
	volatile int32_t t27 = -29;

    t27 = (x109>(x110!=(x111>x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = -1;
	int64_t x114 = INT64_MIN;
	volatile uint16_t x115 = UINT16_MAX;
	uint32_t x116 = UINT32_MAX;
	int32_t t28 = 35466;

    t28 = (x113>(x114!=(x115>x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = INT64_MAX;
	volatile int64_t x118 = INT64_MIN;
	int32_t x119 = INT32_MAX;
	int64_t x120 = INT64_MAX;
	static int32_t t29 = -39770030;

    t29 = (x117>(x118!=(x119>x120)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint32_t x121 = 33U;
	int32_t x122 = INT32_MIN;
	int8_t x123 = INT8_MAX;
	int16_t x124 = INT16_MIN;
	volatile int32_t t30 = 272;

    t30 = (x121>(x122!=(x123>x124)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = INT64_MIN;
	volatile uint8_t x126 = UINT8_MAX;
	static int32_t x128 = INT32_MAX;
	static volatile int32_t t31 = -460;

    t31 = (x125>(x126!=(x127>x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint8_t x129 = UINT8_MAX;
	int64_t x131 = 219LL;
	int8_t x132 = 1;

    t32 = (x129>(x130!=(x131>x132)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x133 = -1LL;
	static int8_t x134 = INT8_MIN;
	int16_t x135 = 125;
	volatile int16_t x136 = INT16_MAX;
	int32_t t33 = 3;

    t33 = (x133>(x134!=(x135>x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x138 = UINT16_MAX;
	uint8_t x139 = 1U;
	int64_t x140 = INT64_MIN;
	volatile int32_t t34 = 3020215;

    t34 = (x137>(x138!=(x139>x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = -1LL;
	volatile int64_t x142 = INT64_MIN;
	int16_t x144 = INT16_MIN;
	volatile int32_t t35 = -17036042;

    t35 = (x141>(x142!=(x143>x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x145 = UINT64_MAX;
	uint32_t x146 = UINT32_MAX;
	int64_t x147 = INT64_MIN;
	volatile int16_t x148 = 181;

    t36 = (x145>(x146!=(x147>x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x150 = 1626671250152291606LL;
	int32_t x151 = INT32_MAX;
	volatile int32_t t37 = 8598;

    t37 = (x149>(x150!=(x151>x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x153 = INT64_MIN;
	static int16_t x155 = INT16_MIN;
	volatile int32_t t38 = -728;

    t38 = (x153>(x154!=(x155>x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MAX;
	static int64_t x159 = INT64_MIN;
	uint16_t x160 = UINT16_MAX;
	int32_t t39 = -3170;

    t39 = (x157>(x158!=(x159>x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = -1;
	int64_t x162 = INT64_MAX;
	int8_t x163 = -13;
	int16_t x164 = INT16_MIN;
	int32_t t40 = -7128;

    t40 = (x161>(x162!=(x163>x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = INT16_MIN;
	static int32_t x166 = -1;
	int8_t x167 = 1;
	static uint16_t x168 = UINT16_MAX;
	volatile int32_t t41 = -28;

    t41 = (x165>(x166!=(x167>x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int32_t x171 = -1;
	int8_t x172 = INT8_MIN;
	static volatile int32_t t42 = 0;

    t42 = (x169>(x170!=(x171>x172)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x176 = 1;
	static volatile int32_t t43 = 23;

    t43 = (x173>(x174!=(x175>x176)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x177 = UINT64_MAX;
	int16_t x178 = INT16_MIN;
	int8_t x179 = 13;
	int8_t x180 = INT8_MAX;
	int32_t t44 = 190986427;

    t44 = (x177>(x178!=(x179>x180)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint32_t x181 = UINT32_MAX;
	static int8_t x182 = INT8_MIN;
	static int32_t x183 = -1;
	volatile int16_t x184 = INT16_MAX;

    t45 = (x181>(x182!=(x183>x184)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x185 = 595504647353064LLU;
	uint16_t x186 = UINT16_MAX;
	int64_t x187 = -1LL;
	uint8_t x188 = 34U;
	volatile int32_t t46 = 1;

    t46 = (x185>(x186!=(x187>x188)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x190 = INT8_MAX;
	int8_t x191 = INT8_MAX;
	uint32_t x192 = 874U;
	volatile int32_t t47 = 4;

    t47 = (x189>(x190!=(x191>x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = INT16_MIN;
	volatile int16_t x194 = -1364;
	uint8_t x196 = 28U;
	volatile int32_t t48 = 3551;

    t48 = (x193>(x194!=(x195>x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = -358539LL;
	uint32_t x199 = UINT32_MAX;
	static volatile uint64_t x200 = 412243200LLU;
	volatile int32_t t49 = 3867655;

    t49 = (x197>(x198!=(x199>x200)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x201 = 30597368519303623LLU;
	uint8_t x202 = UINT8_MAX;
	int8_t x204 = INT8_MAX;
	static volatile int32_t t50 = 391291;

    t50 = (x201>(x202!=(x203>x204)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x205 = INT8_MIN;
	int32_t x206 = INT32_MIN;
	int8_t x207 = -49;
	int8_t x208 = INT8_MAX;
	int32_t t51 = 6;

    t51 = (x205>(x206!=(x207>x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x209 = -16;
	int16_t x211 = 0;
	volatile int32_t t52 = -917922042;

    t52 = (x209>(x210!=(x211>x212)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MIN;
	volatile int64_t x214 = INT64_MIN;
	int16_t x215 = INT16_MIN;
	int32_t x216 = -1;

    t53 = (x213>(x214!=(x215>x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = -3LL;
	int8_t x219 = -1;
	static volatile int32_t t54 = 480019089;

    t54 = (x217>(x218!=(x219>x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x221 = -23;
	static volatile int8_t x222 = -1;
	int64_t x224 = -1LL;
	int32_t t55 = 1885;

    t55 = (x221>(x222!=(x223>x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = INT8_MAX;
	int64_t x226 = INT64_MIN;
	volatile int8_t x227 = 1;
	volatile int32_t x228 = INT32_MAX;
	int32_t t56 = 1;

    t56 = (x225>(x226!=(x227>x228)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x229 = 429LLU;
	int16_t x230 = INT16_MIN;
	int16_t x231 = -13740;
	static int64_t x232 = INT64_MIN;
	volatile int32_t t57 = 1677258;

    t57 = (x229>(x230!=(x231>x232)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = INT32_MIN;
	uint32_t x234 = 38861U;
	int64_t x235 = INT64_MIN;
	int32_t t58 = -733;

    t58 = (x233>(x234!=(x235>x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = INT8_MIN;
	int16_t x238 = -1;
	int8_t x239 = -1;
	volatile int32_t t59 = 1873;

    t59 = (x237>(x238!=(x239>x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x242 = 185139046U;
	uint32_t x243 = 1U;
	static int32_t t60 = -449694;

    t60 = (x241>(x242!=(x243>x244)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x245 = -1;
	int32_t x246 = INT32_MIN;
	int8_t x247 = -5;
	uint16_t x248 = 13839U;

    t61 = (x245>(x246!=(x247>x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x250 = INT32_MIN;
	int8_t x251 = INT8_MIN;
	int32_t t62 = 59745;

    t62 = (x249>(x250!=(x251>x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x253 = UINT64_MAX;
	static int64_t x254 = INT64_MIN;
	int64_t x255 = INT64_MAX;
	int8_t x256 = INT8_MAX;
	int32_t t63 = -196772;

    t63 = (x253>(x254!=(x255>x256)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x258 = INT32_MIN;
	int16_t x259 = -943;
	int8_t x260 = INT8_MAX;

    t64 = (x257>(x258!=(x259>x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x261 = -1;
	int16_t x262 = INT16_MAX;
	uint64_t x263 = 795566847LLU;
	volatile int16_t x264 = INT16_MIN;
	int32_t t65 = -1536;

    t65 = (x261>(x262!=(x263>x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile uint32_t x265 = 3574922U;
	int64_t x266 = INT64_MIN;
	uint32_t x267 = 2642U;
	int64_t x268 = INT64_MIN;
	volatile int32_t t66 = 31236;

    t66 = (x265>(x266!=(x267>x268)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile uint64_t x269 = 19782580604LLU;
	int64_t x270 = INT64_MAX;
	static uint64_t x271 = UINT64_MAX;
	int32_t x272 = INT32_MIN;
	static volatile int32_t t67 = 165;

    t67 = (x269>(x270!=(x271>x272)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x273 = UINT64_MAX;
	volatile int16_t x274 = INT16_MAX;
	uint8_t x275 = 14U;

    t68 = (x273>(x274!=(x275>x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = 135072772983LL;
	static int64_t x278 = -1LL;
	int8_t x279 = INT8_MAX;
	int32_t x280 = 7812;

    t69 = (x277>(x278!=(x279>x280)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x282 = 599;
	int64_t x283 = -1LL;
	uint64_t x284 = 1LLU;

    t70 = (x281>(x282!=(x283>x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x286 = INT32_MIN;
	static int16_t x287 = INT16_MIN;
	volatile int64_t x288 = -1LL;
	static int32_t t71 = -284;

    t71 = (x285>(x286!=(x287>x288)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x290 = 9703248444LL;
	int16_t x291 = -1;
	int16_t x292 = -1869;
	int32_t t72 = -3098;

    t72 = (x289>(x290!=(x291>x292)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x293 = 50U;
	int8_t x294 = 7;
	volatile uint32_t x295 = 14U;
	int32_t x296 = INT32_MIN;
	volatile int32_t t73 = 11;

    t73 = (x293>(x294!=(x295>x296)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x297 = UINT8_MAX;
	static int64_t x298 = 123671LL;
	uint8_t x299 = UINT8_MAX;
	int32_t x300 = INT32_MIN;

    t74 = (x297>(x298!=(x299>x300)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint32_t x302 = 146020139U;
	int16_t x303 = -1596;
	int16_t x304 = 62;
	static int32_t t75 = 702370;

    t75 = (x301>(x302!=(x303>x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x305 = 1217U;
	volatile uint64_t x306 = UINT64_MAX;
	static volatile int32_t t76 = 1275;

    t76 = (x305>(x306!=(x307>x308)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x310 = INT8_MIN;
	uint16_t x311 = UINT16_MAX;
	int64_t x312 = 141029538719LL;
	volatile int32_t t77 = -4760;

    t77 = (x309>(x310!=(x311>x312)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int64_t x314 = -155947425060331899LL;
	uint64_t x315 = 52974098019712LLU;

    t78 = (x313>(x314!=(x315>x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x317 = INT32_MAX;
	int64_t x318 = -1LL;
	int16_t x319 = 2042;
	int8_t x320 = INT8_MIN;
	int32_t t79 = -168813;

    t79 = (x317>(x318!=(x319>x320)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint32_t x321 = 75U;
	int16_t x322 = INT16_MIN;
	static uint32_t x323 = UINT32_MAX;
	int32_t x324 = -1;
	static volatile int32_t t80 = 1;

    t80 = (x321>(x322!=(x323>x324)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x325 = 82U;
	int32_t x326 = INT32_MAX;
	int32_t t81 = -27;

    t81 = (x325>(x326!=(x327>x328)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x329 = 32981973690LLU;
	int8_t x330 = INT8_MAX;
	int32_t t82 = 59;

    t82 = (x329>(x330!=(x331>x332)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x333 = 203842130LL;
	static int32_t x335 = 26;
	volatile int32_t t83 = -84;

    t83 = (x333>(x334!=(x335>x336)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = -4138LL;
	static uint32_t x338 = UINT32_MAX;
	int8_t x339 = -1;
	volatile int64_t x340 = INT64_MAX;

    t84 = (x337>(x338!=(x339>x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = -20;
	static int8_t x342 = INT8_MIN;
	int32_t t85 = 2410;

    t85 = (x341>(x342!=(x343>x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = 431671460;
	int16_t x346 = INT16_MAX;
	uint32_t x347 = 12774U;
	uint8_t x348 = 16U;
	volatile int32_t t86 = 4026;

    t86 = (x345>(x346!=(x347>x348)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint16_t x352 = 167U;
	static int32_t t87 = -31185058;

    t87 = (x349>(x350!=(x351>x352)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = 167;
	int64_t x354 = -9681094240LL;
	volatile int8_t x355 = -24;
	static int16_t x356 = -1;

    t88 = (x353>(x354!=(x355>x356)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x357 = 7469U;
	uint64_t x359 = 393861LLU;
	volatile int8_t x360 = -1;

    t89 = (x357>(x358!=(x359>x360)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint16_t x361 = UINT16_MAX;
	uint16_t x362 = 2186U;
	int32_t x363 = INT32_MIN;
	volatile uint64_t x364 = UINT64_MAX;
	volatile int32_t t90 = 10;

    t90 = (x361>(x362!=(x363>x364)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x365 = 110U;
	uint64_t x366 = 3008897LLU;
	static volatile int8_t x367 = 0;

    t91 = (x365>(x366!=(x367>x368)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t t92 = 20672612;

    t92 = (x369>(x370!=(x371>x372)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x373 = 29U;
	static volatile int8_t x374 = 7;

    t93 = (x373>(x374!=(x375>x376)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = 10063;
	uint8_t x378 = 2U;
	static int8_t x379 = 53;
	static int8_t x380 = -23;
	volatile int32_t t94 = 16298;

    t94 = (x377>(x378!=(x379>x380)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x381 = 229651LLU;
	int64_t x383 = -1LL;
	int8_t x384 = INT8_MAX;

    t95 = (x381>(x382!=(x383>x384)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = -1;
	int8_t x386 = INT8_MIN;
	int64_t x387 = INT64_MIN;
	int32_t x388 = -1;
	static volatile int32_t t96 = 3;

    t96 = (x385>(x386!=(x387>x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x390 = 408253LLU;
	int64_t x392 = 4213940872601102LL;
	volatile int32_t t97 = 36711;

    t97 = (x389>(x390!=(x391>x392)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x393 = -71511LL;
	int32_t x394 = -1;
	int16_t x395 = INT16_MAX;
	int8_t x396 = INT8_MAX;
	volatile int32_t t98 = 6587;

    t98 = (x393>(x394!=(x395>x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = INT32_MAX;
	uint64_t x398 = UINT64_MAX;
	volatile int64_t x399 = INT64_MIN;

    t99 = (x397>(x398!=(x399>x400)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x401 = 3383U;
	static int32_t x402 = 253888;
	static volatile int64_t x403 = INT64_MAX;
	volatile uint16_t x404 = 2U;
	int32_t t100 = 506372;

    t100 = (x401>(x402!=(x403>x404)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x406 = INT32_MAX;
	uint64_t x407 = 826555058327830LLU;
	int32_t x408 = INT32_MIN;
	static int32_t t101 = 15255182;

    t101 = (x405>(x406!=(x407>x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = -1LL;
	int32_t x411 = INT32_MAX;
	int64_t x412 = 0LL;
	static volatile int32_t t102 = -6;

    t102 = (x409>(x410!=(x411>x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int16_t x413 = INT16_MIN;
	uint32_t x414 = UINT32_MAX;
	int16_t x415 = -947;
	int16_t x416 = INT16_MIN;
	int32_t t103 = -19;

    t103 = (x413>(x414!=(x415>x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = 337832LL;
	uint32_t x418 = 20446U;
	int16_t x419 = INT16_MAX;
	uint8_t x420 = 25U;
	volatile int32_t t104 = -11;

    t104 = (x417>(x418!=(x419>x420)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x423 = -146742;
	static uint16_t x424 = 3U;
	volatile int32_t t105 = 516805;

    t105 = (x421>(x422!=(x423>x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = INT8_MIN;
	int64_t x426 = INT64_MIN;
	int8_t x427 = INT8_MAX;
	volatile uint32_t x428 = 4178U;
	int32_t t106 = -1965168;

    t106 = (x425>(x426!=(x427>x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x429 = 12797575774468077LL;
	int32_t x430 = INT32_MIN;
	uint8_t x432 = UINT8_MAX;
	static int32_t t107 = -357020459;

    t107 = (x429>(x430!=(x431>x432)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x433 = INT64_MAX;
	static volatile int8_t x434 = INT8_MIN;
	volatile int64_t x436 = INT64_MAX;

    t108 = (x433>(x434!=(x435>x436)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile uint8_t x440 = 83U;
	volatile int32_t t109 = 8760138;

    t109 = (x437>(x438!=(x439>x440)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x441 = 3889U;
	volatile int32_t x442 = 3572;
	int64_t x444 = INT64_MAX;
	int32_t t110 = 3;

    t110 = (x441>(x442!=(x443>x444)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = -1;
	int64_t x447 = INT64_MIN;
	int64_t x448 = INT64_MIN;
	volatile int32_t t111 = -4;

    t111 = (x445>(x446!=(x447>x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x450 = UINT16_MAX;
	volatile int64_t x451 = 4731235LL;
	static volatile int32_t x452 = INT32_MIN;
	int32_t t112 = 11;

    t112 = (x449>(x450!=(x451>x452)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x454 = 54756735107LLU;
	static int8_t x455 = INT8_MIN;
	static int32_t t113 = 8;

    t113 = (x453>(x454!=(x455>x456)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile uint32_t x457 = 71889U;
	volatile int32_t x460 = -1;
	int32_t t114 = 3986;

    t114 = (x457>(x458!=(x459>x460)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = -709185076;
	volatile uint64_t x463 = UINT64_MAX;
	volatile int32_t t115 = 111410;

    t115 = (x461>(x462!=(x463>x464)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint64_t x465 = UINT64_MAX;
	int16_t x466 = 2;
	int64_t x467 = -4248256512LL;
	volatile int16_t x468 = 1421;
	int32_t t116 = 493;

    t116 = (x465>(x466!=(x467>x468)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x469 = INT16_MAX;
	int8_t x470 = 1;
	int64_t x471 = 1LL;
	int32_t x472 = INT32_MAX;
	static int32_t t117 = 214064;

    t117 = (x469>(x470!=(x471>x472)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = INT8_MIN;
	int64_t x474 = -1LL;
	int8_t x475 = INT8_MAX;
	volatile int32_t t118 = -1;

    t118 = (x473>(x474!=(x475>x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x477 = 12U;
	int16_t x479 = INT16_MIN;
	static int8_t x480 = -1;
	int32_t t119 = 186520952;

    t119 = (x477>(x478!=(x479>x480)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint16_t x481 = 1914U;
	static int16_t x483 = INT16_MIN;
	static int64_t x484 = -1LL;

    t120 = (x481>(x482!=(x483>x484)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = -1;
	static uint16_t x486 = UINT16_MAX;
	static int16_t x487 = INT16_MIN;
	uint64_t x488 = UINT64_MAX;
	volatile int32_t t121 = 0;

    t121 = (x485>(x486!=(x487>x488)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x489 = 47U;
	volatile int64_t x490 = INT64_MIN;
	static volatile uint16_t x491 = UINT16_MAX;
	uint64_t x492 = UINT64_MAX;
	int32_t t122 = 901108;

    t122 = (x489>(x490!=(x491>x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = 26;
	static int32_t x494 = INT32_MIN;
	int64_t x495 = INT64_MAX;
	volatile int32_t t123 = -2;

    t123 = (x493>(x494!=(x495>x496)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = -56878LL;
	int64_t x498 = INT64_MIN;
	int8_t x499 = 0;
	uint32_t x500 = 3018U;
	int32_t t124 = -17196;

    t124 = (x497>(x498!=(x499>x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x503 = 245U;
	int8_t x504 = 26;
	volatile int32_t t125 = 1765;

    t125 = (x501>(x502!=(x503>x504)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x505 = INT32_MAX;
	int16_t x506 = INT16_MIN;
	uint16_t x507 = UINT16_MAX;
	static volatile int32_t t126 = -2263;

    t126 = (x505>(x506!=(x507>x508)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int8_t x509 = INT8_MIN;
	volatile int64_t x510 = INT64_MIN;
	int64_t x511 = -1LL;
	static volatile int32_t t127 = -28;

    t127 = (x509>(x510!=(x511>x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x514 = UINT64_MAX;
	int64_t x515 = -1LL;
	uint16_t x516 = 2U;
	volatile int32_t t128 = 61;

    t128 = (x513>(x514!=(x515>x516)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = INT32_MAX;
	int8_t x518 = INT8_MIN;
	int32_t t129 = -1029098511;

    t129 = (x517>(x518!=(x519>x520)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x521 = -226;
	uint64_t x522 = 1123LLU;
	int16_t x523 = INT16_MIN;
	static int64_t x524 = INT64_MIN;
	static int32_t t130 = -184183581;

    t130 = (x521>(x522!=(x523>x524)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x525 = 22LLU;
	static volatile int32_t x526 = INT32_MIN;
	int32_t x528 = INT32_MIN;
	int32_t t131 = -986;

    t131 = (x525>(x526!=(x527>x528)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = INT8_MIN;
	int8_t x530 = INT8_MAX;
	static volatile int16_t x531 = 1;

    t132 = (x529>(x530!=(x531>x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x533 = 7804U;
	uint8_t x535 = 7U;
	uint64_t x536 = UINT64_MAX;
	static int32_t t133 = -18;

    t133 = (x533>(x534!=(x535>x536)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = -1LL;
	int32_t x538 = 6327241;
	int16_t x539 = -1;
	static int32_t x540 = INT32_MIN;
	int32_t t134 = 16273939;

    t134 = (x537>(x538!=(x539>x540)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x541 = INT16_MAX;
	int64_t x543 = INT64_MIN;
	static volatile int64_t x544 = -1LL;
	int32_t t135 = 16;

    t135 = (x541>(x542!=(x543>x544)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x545 = 676496016LLU;
	static volatile int16_t x546 = INT16_MIN;
	int32_t x547 = INT32_MIN;
	int16_t x548 = -1;
	static volatile int32_t t136 = -293034293;

    t136 = (x545>(x546!=(x547>x548)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x549 = 691U;
	uint8_t x550 = 2U;
	int64_t x551 = INT64_MAX;
	static uint64_t x552 = 28188LLU;
	static volatile int32_t t137 = -968041137;

    t137 = (x549>(x550!=(x551>x552)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x553 = -3671;
	static uint16_t x556 = 8138U;
	int32_t t138 = 91581;

    t138 = (x553>(x554!=(x555>x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x558 = 0U;
	uint64_t x559 = 17477550LLU;
	uint64_t x560 = UINT64_MAX;
	static int32_t t139 = 1551037;

    t139 = (x557>(x558!=(x559>x560)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x561 = INT16_MIN;
	int64_t x562 = INT64_MIN;
	int16_t x563 = INT16_MIN;
	int32_t x564 = INT32_MIN;

    t140 = (x561>(x562!=(x563>x564)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = 76;
	int16_t x566 = -1;
	volatile int16_t x567 = INT16_MIN;
	static int32_t x568 = INT32_MAX;
	volatile int32_t t141 = -13151642;

    t141 = (x565>(x566!=(x567>x568)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x569 = 0U;
	uint8_t x570 = 0U;
	int16_t x572 = INT16_MAX;

    t142 = (x569>(x570!=(x571>x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = INT8_MIN;
	int64_t x574 = -1LL;
	int16_t x575 = INT16_MIN;
	uint64_t x576 = 43784LLU;
	int32_t t143 = -85638875;

    t143 = (x573>(x574!=(x575>x576)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x577 = -1;
	static int16_t x578 = INT16_MAX;
	static int8_t x579 = 1;
	uint32_t x580 = 128358U;
	int32_t t144 = -991016;

    t144 = (x577>(x578!=(x579>x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = 7446;
	static int32_t x582 = INT32_MIN;
	uint64_t x583 = UINT64_MAX;
	int8_t x584 = INT8_MIN;
	int32_t t145 = -5670;

    t145 = (x581>(x582!=(x583>x584)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x585 = 12138U;
	int8_t x587 = 0;
	int32_t t146 = 2180;

    t146 = (x585>(x586!=(x587>x588)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x590 = -32LL;
	static int32_t x591 = -258845;
	volatile int32_t t147 = 20028647;

    t147 = (x589>(x590!=(x591>x592)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x593 = 23LLU;
	int8_t x594 = INT8_MAX;
	static int8_t x596 = -2;
	static volatile int32_t t148 = -184;

    t148 = (x593>(x594!=(x595>x596)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = INT64_MAX;
	volatile uint32_t x598 = 5U;
	uint8_t x599 = UINT8_MAX;
	static uint32_t x600 = 6U;
	volatile int32_t t149 = 6342;

    t149 = (x597>(x598!=(x599>x600)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x601 = UINT16_MAX;
	int64_t x602 = INT64_MIN;
	int16_t x604 = -1;

    t150 = (x601>(x602!=(x603>x604)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = INT16_MIN;
	int32_t x606 = INT32_MIN;
	static int32_t x607 = INT32_MAX;
	uint8_t x608 = UINT8_MAX;
	volatile int32_t t151 = 61329;

    t151 = (x605>(x606!=(x607>x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = -1;
	int16_t x610 = INT16_MAX;
	int8_t x611 = -13;
	volatile int16_t x612 = INT16_MIN;
	static int32_t t152 = 2751;

    t152 = (x609>(x610!=(x611>x612)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x613 = UINT8_MAX;
	static uint32_t x615 = 245919U;
	static uint8_t x616 = 1U;
	int32_t t153 = -210128;

    t153 = (x613>(x614!=(x615>x616)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x617 = INT8_MIN;
	volatile int64_t x618 = -1LL;
	int64_t x619 = -1LL;
	uint8_t x620 = UINT8_MAX;
	int32_t t154 = -248663;

    t154 = (x617>(x618!=(x619>x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x624 = INT8_MIN;
	volatile int32_t t155 = -115;

    t155 = (x621>(x622!=(x623>x624)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x625 = 9U;
	uint16_t x627 = UINT16_MAX;
	int32_t t156 = 167041;

    t156 = (x625>(x626!=(x627>x628)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x629 = 0U;
	uint32_t x630 = 385638U;
	uint8_t x631 = 120U;
	volatile int8_t x632 = -42;
	int32_t t157 = -1033045;

    t157 = (x629>(x630!=(x631>x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x633 = UINT8_MAX;
	int8_t x634 = -1;
	static int64_t x635 = INT64_MIN;
	static int64_t x636 = INT64_MIN;
	int32_t t158 = 1;

    t158 = (x633>(x634!=(x635>x636)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = 3;
	int16_t x638 = INT16_MAX;
	int8_t x639 = INT8_MIN;
	uint32_t x640 = UINT32_MAX;
	int32_t t159 = 67245691;

    t159 = (x637>(x638!=(x639>x640)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x641 = UINT16_MAX;
	volatile uint8_t x642 = 0U;
	static int16_t x644 = -2396;
	volatile int32_t t160 = 3;

    t160 = (x641>(x642!=(x643>x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x645 = 105012049359240119LLU;
	int8_t x646 = -1;
	uint64_t x647 = UINT64_MAX;
	uint64_t x648 = UINT64_MAX;
	int32_t t161 = 555517898;

    t161 = (x645>(x646!=(x647>x648)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = -1LL;
	int8_t x651 = -1;
	uint8_t x652 = UINT8_MAX;
	int32_t t162 = -59987;

    t162 = (x649>(x650!=(x651>x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = 22328471100612LL;
	static int8_t x654 = INT8_MAX;
	volatile int32_t x656 = INT32_MIN;
	static volatile int32_t t163 = 5;

    t163 = (x653>(x654!=(x655>x656)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = -1;
	int8_t x658 = -1;
	volatile uint16_t x659 = 5U;
	static uint16_t x660 = 74U;
	int32_t t164 = -400238196;

    t164 = (x657>(x658!=(x659>x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = INT64_MAX;
	uint64_t x662 = UINT64_MAX;
	volatile int32_t x663 = INT32_MIN;
	static int16_t x664 = INT16_MIN;
	volatile int32_t t165 = -942991898;

    t165 = (x661>(x662!=(x663>x664)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x665 = INT64_MIN;
	static uint64_t x666 = 1092440LLU;
	volatile uint32_t x667 = 61U;
	int32_t x668 = INT32_MIN;

    t166 = (x665>(x666!=(x667>x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x670 = INT8_MIN;
	volatile uint64_t x671 = UINT64_MAX;
	volatile uint64_t x672 = 7101613216LLU;
	int32_t t167 = 28632;

    t167 = (x669>(x670!=(x671>x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = INT32_MIN;
	uint8_t x674 = UINT8_MAX;
	uint64_t x676 = UINT64_MAX;
	volatile int32_t t168 = 51739192;

    t168 = (x673>(x674!=(x675>x676)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int64_t x677 = INT64_MIN;
	volatile int16_t x679 = INT16_MAX;
	uint64_t x680 = 20199159942LLU;
	volatile int32_t t169 = -505;

    t169 = (x677>(x678!=(x679>x680)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = INT8_MIN;
	int64_t x682 = INT64_MAX;
	uint16_t x683 = 4125U;
	int16_t x684 = -1;
	int32_t t170 = 70147;

    t170 = (x681>(x682!=(x683>x684)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = -14355329LL;
	volatile int8_t x686 = INT8_MIN;
	int8_t x687 = INT8_MAX;
	int8_t x688 = INT8_MIN;
	int32_t t171 = 1516277;

    t171 = (x685>(x686!=(x687>x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x689 = 2239U;
	static int64_t x690 = 15517029429019LL;
	uint32_t x691 = 58678838U;
	int32_t t172 = -246;

    t172 = (x689>(x690!=(x691>x692)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x693 = -928LL;
	volatile uint16_t x694 = 24U;
	int32_t t173 = 4;

    t173 = (x693>(x694!=(x695>x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x697 = UINT64_MAX;
	volatile int8_t x698 = 6;
	int64_t x699 = -1LL;
	int8_t x700 = INT8_MIN;
	volatile int32_t t174 = 1171;

    t174 = (x697>(x698!=(x699>x700)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int64_t x701 = INT64_MIN;
	volatile uint64_t x703 = 1012062214783007LLU;
	static int32_t t175 = 232580833;

    t175 = (x701>(x702!=(x703>x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = -1;
	uint16_t x706 = 4U;
	static int16_t x708 = -1;
	volatile int32_t t176 = -23614;

    t176 = (x705>(x706!=(x707>x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = INT16_MAX;
	int16_t x710 = INT16_MAX;
	int16_t x712 = -1;
	static int32_t t177 = 51;

    t177 = (x709>(x710!=(x711>x712)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x713 = INT16_MIN;
	uint8_t x714 = 1U;
	static int64_t x715 = 4154LL;
	int8_t x716 = INT8_MAX;
	volatile int32_t t178 = 89;

    t178 = (x713>(x714!=(x715>x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x717 = 5U;
	volatile int16_t x718 = INT16_MIN;
	int32_t x719 = -157;
	volatile uint8_t x720 = 3U;
	volatile int32_t t179 = -3392084;

    t179 = (x717>(x718!=(x719>x720)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x721 = INT8_MAX;
	int64_t x722 = INT64_MAX;
	int32_t x724 = INT32_MAX;

    t180 = (x721>(x722!=(x723>x724)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = INT16_MIN;
	uint16_t x726 = UINT16_MAX;
	int32_t x727 = 15992853;
	static uint8_t x728 = UINT8_MAX;
	volatile int32_t t181 = -20250;

    t181 = (x725>(x726!=(x727>x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x729 = 18;
	static int8_t x730 = INT8_MIN;
	int16_t x732 = -1483;
	volatile int32_t t182 = 13;

    t182 = (x729>(x730!=(x731>x732)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int8_t x733 = INT8_MIN;
	int64_t x734 = INT64_MAX;
	uint16_t x736 = UINT16_MAX;
	int32_t t183 = 1;

    t183 = (x733>(x734!=(x735>x736)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x739 = INT8_MIN;
	int8_t x740 = INT8_MAX;

    t184 = (x737>(x738!=(x739>x740)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x741 = 63839428U;
	static int16_t x742 = INT16_MIN;
	int64_t x743 = INT64_MIN;
	int8_t x744 = 2;
	int32_t t185 = -10;

    t185 = (x741>(x742!=(x743>x744)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x745 = 1512138517U;
	int8_t x746 = INT8_MIN;
	volatile uint16_t x747 = 1127U;

    t186 = (x745>(x746!=(x747>x748)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x751 = UINT64_MAX;
	int16_t x752 = 348;
	int32_t t187 = 343000;

    t187 = (x749>(x750!=(x751>x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = INT32_MAX;
	static int16_t x754 = -1;
	volatile uint64_t x755 = UINT64_MAX;
	int8_t x756 = INT8_MAX;
	int32_t t188 = -2;

    t188 = (x753>(x754!=(x755>x756)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x758 = -7;
	static uint32_t x759 = 247335697U;
	uint64_t x760 = UINT64_MAX;

    t189 = (x757>(x758!=(x759>x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = INT64_MIN;
	int64_t x763 = 71955057857684372LL;
	static uint8_t x764 = UINT8_MAX;
	int32_t t190 = 4025;

    t190 = (x761>(x762!=(x763>x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x767 = INT32_MIN;
	uint8_t x768 = 43U;
	volatile int32_t t191 = -2821448;

    t191 = (x765>(x766!=(x767>x768)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x769 = -1;
	uint64_t x770 = UINT64_MAX;
	volatile int64_t x771 = 996222LL;
	static uint64_t x772 = 154754983LLU;
	volatile int32_t t192 = 14177;

    t192 = (x769>(x770!=(x771>x772)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x774 = 18U;
	int32_t t193 = 35238485;

    t193 = (x773>(x774!=(x775>x776)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = INT64_MIN;
	static int32_t x778 = INT32_MAX;
	uint16_t x779 = 2U;
	int8_t x780 = 4;
	volatile int32_t t194 = 1060536230;

    t194 = (x777>(x778!=(x779>x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x781 = UINT64_MAX;
	int64_t x782 = INT64_MAX;
	static uint32_t x783 = UINT32_MAX;
	uint64_t x784 = 3764037492205745527LLU;
	int32_t t195 = -4;

    t195 = (x781>(x782!=(x783>x784)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x787 = INT32_MAX;
	int32_t t196 = -5716;

    t196 = (x785>(x786!=(x787>x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x789 = 368259737555090LLU;
	int16_t x790 = -1;
	int64_t x791 = 417112LL;
	volatile int8_t x792 = INT8_MAX;
	int32_t t197 = -10110;

    t197 = (x789>(x790!=(x791>x792)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x793 = INT64_MIN;
	static int64_t x794 = INT64_MIN;
	static int64_t x795 = -161317LL;
	static volatile int32_t t198 = 2;

    t198 = (x793>(x794!=(x795>x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x797 = 0;
	volatile int32_t x798 = INT32_MAX;
	int8_t x799 = INT8_MAX;
	int8_t x800 = -2;
	static int32_t t199 = -5636234;

    t199 = (x797>(x798!=(x799>x800)));

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

