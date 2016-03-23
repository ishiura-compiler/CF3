
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

int32_t x4 = -1;
int16_t x12 = INT16_MIN;
int64_t x16 = 79372347LL;
uint64_t x40 = UINT64_MAX;
volatile int32_t t5 = 1;
int16_t x45 = INT16_MIN;
volatile int32_t t7 = 2;
uint16_t x53 = UINT16_MAX;
uint16_t x80 = 972U;
static uint32_t x83 = UINT32_MAX;
int16_t x88 = INT16_MAX;
uint8_t x104 = 46U;
int16_t x109 = INT16_MIN;
int32_t x110 = 57877;
uint8_t x111 = UINT8_MAX;
uint32_t x126 = 346047U;
volatile uint8_t x128 = 13U;
int32_t t20 = -4053204;
static int32_t x129 = -61;
static volatile int16_t x131 = INT16_MIN;
uint32_t x141 = UINT32_MAX;
uint16_t x145 = 26U;
static int64_t x153 = INT64_MIN;
int32_t x158 = INT32_MAX;
volatile int64_t x160 = INT64_MIN;
volatile int32_t t31 = 1370;
static volatile uint32_t x181 = 81U;
int64_t x196 = -522837097910LL;
uint16_t x201 = 2760U;
volatile int64_t x205 = INT64_MIN;
volatile int8_t x209 = INT8_MIN;
int32_t t39 = -112;
int8_t x250 = 2;
int32_t x254 = 1;
uint16_t x255 = 60U;
volatile int32_t t43 = 35;
static uint8_t x263 = UINT8_MAX;
int8_t x264 = -41;
uint64_t x278 = UINT64_MAX;
int64_t x280 = -1LL;
static volatile uint16_t x294 = 2900U;
uint64_t x307 = 59594LLU;
int32_t x308 = -1;
volatile int16_t x316 = 1;
int16_t x318 = INT16_MIN;
int64_t x325 = -37031038001004317LL;
volatile int8_t x326 = INT8_MAX;
static volatile int8_t x329 = 13;
uint8_t x330 = UINT8_MAX;
int32_t x353 = 0;
volatile int32_t t59 = 96827839;
uint32_t x383 = 2339472U;
volatile int32_t t60 = 2903355;
int64_t x386 = 407891448077LL;
uint16_t x387 = 248U;
int64_t x388 = -1LL;
volatile int32_t t61 = -735191;
int16_t x396 = -4;
int32_t x409 = INT32_MAX;
uint64_t x410 = 32LLU;
int16_t x411 = -1;
uint8_t x418 = 13U;
int16_t x419 = INT16_MIN;
static uint16_t x423 = 1817U;
volatile uint16_t x445 = 47U;
volatile int16_t x446 = -138;
volatile int16_t x448 = INT16_MAX;
static int8_t x449 = -4;
uint16_t x452 = 491U;
int32_t t70 = -19693679;
uint8_t x457 = 124U;
uint8_t x460 = 118U;
volatile int16_t x475 = -3;
int8_t x481 = INT8_MAX;
int8_t x505 = -46;
int16_t x506 = 2207;
uint8_t x509 = 32U;
int64_t x514 = -165358226337002622LL;
uint32_t x533 = 3U;
uint32_t x534 = UINT32_MAX;
int64_t x537 = INT64_MAX;
int32_t t89 = 0;
int64_t x557 = INT64_MIN;
static int64_t x558 = INT64_MAX;
volatile int32_t t90 = 3;
uint32_t x562 = UINT32_MAX;
int16_t x563 = -1;
uint32_t x570 = 524U;
volatile int32_t t92 = -1569;
int8_t x582 = INT8_MIN;
uint16_t x583 = UINT16_MAX;
int64_t x586 = 0LL;
static int8_t x591 = INT8_MIN;
int16_t x594 = INT16_MIN;
static int32_t x598 = -57000;
uint16_t x603 = 0U;
int32_t x609 = INT32_MIN;
static volatile uint32_t x610 = 15204U;
uint8_t x612 = 9U;
int32_t x619 = INT32_MIN;
uint8_t x626 = 1U;
volatile uint64_t x642 = UINT64_MAX;
int16_t x645 = INT16_MIN;
static volatile int8_t x647 = INT8_MIN;
static int8_t x654 = -1;
int16_t x656 = 0;
int32_t x658 = -1;
volatile int32_t t108 = 3;
static volatile int16_t x668 = 439;
int8_t x672 = INT8_MIN;
int16_t x679 = INT16_MAX;
uint8_t x682 = UINT8_MAX;
int8_t x686 = -1;
volatile int32_t x687 = -1;
int16_t x690 = 9321;
int8_t x697 = -1;
int32_t t116 = -4864;
int64_t x708 = INT64_MIN;
static int8_t x709 = INT8_MIN;
static int8_t x710 = -1;
static uint8_t x713 = 0U;
int64_t x715 = -1LL;
uint64_t x718 = UINT64_MAX;
volatile int32_t t122 = -1;
volatile int8_t x738 = INT8_MAX;
static int32_t t124 = 3571237;
int16_t x745 = INT16_MIN;
int16_t x746 = 790;
volatile int8_t x783 = 1;
volatile int32_t t129 = -135;
volatile uint32_t x816 = 9318U;
uint8_t x829 = 47U;
int64_t x832 = -1LL;
int32_t t136 = 23;
int32_t t138 = -79;
static uint64_t x845 = 14200LLU;
int32_t x848 = INT32_MIN;
static int16_t x851 = -1;
volatile int32_t t140 = 428935;
static int32_t t142 = -56;
uint64_t x876 = UINT64_MAX;
uint8_t x883 = UINT8_MAX;
int32_t t145 = 7015661;
int32_t t146 = 0;
int16_t x902 = 820;
volatile uint8_t x914 = 1U;
int32_t t150 = 161262;
static int32_t x925 = -55;
volatile int32_t x926 = INT32_MIN;
uint32_t x927 = 16626693U;
int8_t x938 = -1;
int8_t x940 = INT8_MIN;
volatile int32_t t152 = -11938;
static int16_t x947 = -11;
int32_t t153 = -876550596;
uint8_t x950 = 99U;
uint32_t x953 = 5U;
static uint64_t x954 = 4678373574659760247LLU;
int8_t x956 = -1;
volatile uint64_t x957 = 31523LLU;
int8_t x958 = INT8_MAX;
static uint16_t x959 = UINT16_MAX;
uint32_t x962 = 227U;
int32_t t157 = -1198;
static int16_t x974 = 102;
volatile int16_t x978 = -132;
int8_t x980 = INT8_MIN;
int32_t x984 = INT32_MIN;
int32_t x993 = -1;
static uint16_t x997 = UINT16_MAX;
static uint8_t x999 = 2U;
static uint64_t x1004 = UINT64_MAX;
uint32_t x1006 = 205402530U;
int16_t x1008 = INT16_MAX;
static int32_t x1021 = 295;
static int16_t x1029 = INT16_MAX;
volatile int8_t x1030 = INT8_MAX;
static int16_t x1032 = INT16_MIN;
static uint8_t x1041 = 3U;
uint8_t x1043 = 29U;
int16_t x1057 = INT16_MIN;
int8_t x1058 = -3;
static volatile int32_t t177 = 14639;
volatile int32_t t178 = 452;
uint32_t x1075 = 1896U;
int64_t x1078 = -1LL;
volatile int8_t x1079 = -1;
static int8_t x1090 = INT8_MIN;
static int8_t x1097 = 8;
volatile int16_t x1098 = INT16_MIN;
int32_t x1100 = INT32_MAX;
static uint16_t x1107 = 16U;
uint16_t x1108 = 65U;
int32_t t186 = 1309275;
static volatile int32_t t188 = -14685;
uint16_t x1133 = 0U;
volatile uint64_t x1145 = 0LLU;
static uint16_t x1154 = 6U;
static int8_t x1162 = INT8_MAX;
uint8_t x1164 = UINT8_MAX;
uint64_t x1165 = 55221690857684LLU;
static uint8_t x1166 = 12U;
int16_t x1168 = 0;
uint32_t x1180 = 1288U;


void f0(void) {
    	volatile int8_t x1 = 1;
	uint32_t x2 = 13U;
	int8_t x3 = INT8_MIN;
	volatile int32_t t0 = -15690921;

    t0 = ((x1+(x2*x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x9 = -1;
	volatile int16_t x10 = INT16_MIN;
	static int16_t x11 = 996;
	int32_t t1 = -419;

    t1 = ((x9+(x10*x11))==x12);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x13 = UINT64_MAX;
	static volatile int16_t x14 = INT16_MAX;
	uint8_t x15 = UINT8_MAX;
	int32_t t2 = 37;

    t2 = ((x13+(x14*x15))==x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x25 = INT16_MAX;
	uint64_t x26 = 2777LLU;
	int16_t x27 = INT16_MIN;
	int64_t x28 = -1LL;
	volatile int32_t t3 = 132599;

    t3 = ((x25+(x26*x27))==x28);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x33 = INT8_MIN;
	int8_t x34 = 2;
	static int16_t x35 = INT16_MIN;
	int32_t x36 = -32394819;
	volatile int32_t t4 = -129207844;

    t4 = ((x33+(x34*x35))==x36);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x37 = INT64_MIN;
	volatile uint32_t x38 = 1028U;
	static int32_t x39 = 219;

    t5 = ((x37+(x38*x39))==x40);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x41 = INT16_MIN;
	static uint32_t x42 = 5255607U;
	int16_t x43 = INT16_MIN;
	uint32_t x44 = UINT32_MAX;
	static volatile int32_t t6 = -2040085;

    t6 = ((x41+(x42*x43))==x44);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x46 = UINT16_MAX;
	static uint16_t x47 = 173U;
	uint64_t x48 = 29LLU;

    t7 = ((x45+(x46*x47))==x48);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x49 = UINT16_MAX;
	uint64_t x50 = 3LLU;
	int16_t x51 = -12;
	volatile int32_t x52 = 1777;
	volatile int32_t t8 = -6517;

    t8 = ((x49+(x50*x51))==x52);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x54 = INT8_MIN;
	volatile uint32_t x55 = 424U;
	int32_t x56 = -47278594;
	int32_t t9 = 1;

    t9 = ((x53+(x54*x55))==x56);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x57 = INT16_MIN;
	uint32_t x58 = 309628U;
	uint8_t x59 = 1U;
	int16_t x60 = INT16_MAX;
	volatile int32_t t10 = 1165;

    t10 = ((x57+(x58*x59))==x60);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x77 = INT32_MAX;
	static volatile int8_t x78 = INT8_MIN;
	uint64_t x79 = UINT64_MAX;
	int32_t t11 = 12;

    t11 = ((x77+(x78*x79))==x80);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x81 = INT64_MIN;
	int8_t x82 = INT8_MIN;
	static int16_t x84 = INT16_MIN;
	volatile int32_t t12 = 336773593;

    t12 = ((x81+(x82*x83))==x84);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint16_t x85 = UINT16_MAX;
	int16_t x86 = -995;
	int16_t x87 = INT16_MIN;
	volatile int32_t t13 = 181;

    t13 = ((x85+(x86*x87))==x88);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x89 = INT8_MIN;
	uint8_t x90 = 7U;
	int32_t x91 = 21;
	int8_t x92 = INT8_MAX;
	volatile int32_t t14 = -4;

    t14 = ((x89+(x90*x91))==x92);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x97 = -1;
	volatile uint16_t x98 = 361U;
	uint16_t x99 = 125U;
	int64_t x100 = INT64_MIN;
	volatile int32_t t15 = 6;

    t15 = ((x97+(x98*x99))==x100);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x101 = 978745425LLU;
	int8_t x102 = INT8_MIN;
	uint32_t x103 = 8494U;
	volatile int32_t t16 = 1492100;

    t16 = ((x101+(x102*x103))==x104);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x105 = UINT64_MAX;
	uint16_t x106 = 10421U;
	int32_t x107 = -11;
	int64_t x108 = INT64_MIN;
	volatile int32_t t17 = 286268466;

    t17 = ((x105+(x106*x107))==x108);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x112 = INT16_MIN;
	static int32_t t18 = -64157;

    t18 = ((x109+(x110*x111))==x112);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x121 = INT16_MIN;
	int64_t x122 = 0LL;
	int16_t x123 = -1;
	uint64_t x124 = 89LLU;
	volatile int32_t t19 = 545;

    t19 = ((x121+(x122*x123))==x124);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x125 = INT8_MIN;
	static int8_t x127 = 0;

    t20 = ((x125+(x126*x127))==x128);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x130 = 290874654014411LLU;
	uint16_t x132 = 2U;
	int32_t t21 = 15209490;

    t21 = ((x129+(x130*x131))==x132);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x133 = -2875409316562837LL;
	uint8_t x134 = 1U;
	int16_t x135 = INT16_MIN;
	volatile int8_t x136 = INT8_MAX;
	int32_t t22 = 289;

    t22 = ((x133+(x134*x135))==x136);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int32_t x137 = INT32_MIN;
	volatile int16_t x138 = -1;
	static volatile uint64_t x139 = 819615516871LLU;
	int32_t x140 = INT32_MAX;
	volatile int32_t t23 = -7609;

    t23 = ((x137+(x138*x139))==x140);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x142 = 71703473046109LLU;
	static int16_t x143 = 9150;
	uint16_t x144 = 26416U;
	volatile int32_t t24 = 29;

    t24 = ((x141+(x142*x143))==x144);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x146 = 6698725076598LLU;
	static uint32_t x147 = 3U;
	uint16_t x148 = 88U;
	static volatile int32_t t25 = -648;

    t25 = ((x145+(x146*x147))==x148);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x149 = 60738LLU;
	uint8_t x150 = 4U;
	static uint64_t x151 = UINT64_MAX;
	uint8_t x152 = 29U;
	volatile int32_t t26 = 4053;

    t26 = ((x149+(x150*x151))==x152);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x154 = 232U;
	static uint32_t x155 = UINT32_MAX;
	uint16_t x156 = UINT16_MAX;
	volatile int32_t t27 = -7;

    t27 = ((x153+(x154*x155))==x156);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x157 = 320U;
	int64_t x159 = 2076LL;
	int32_t t28 = 81;

    t28 = ((x157+(x158*x159))==x160);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x161 = INT32_MIN;
	int16_t x162 = INT16_MIN;
	uint16_t x163 = 0U;
	int16_t x164 = INT16_MIN;
	static int32_t t29 = -23254472;

    t29 = ((x161+(x162*x163))==x164);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x165 = -1LL;
	int32_t x166 = INT32_MAX;
	static uint32_t x167 = 163796U;
	static int32_t x168 = -1;
	volatile int32_t t30 = 17;

    t30 = ((x165+(x166*x167))==x168);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x169 = UINT32_MAX;
	int16_t x170 = INT16_MAX;
	uint16_t x171 = UINT16_MAX;
	int16_t x172 = -1;

    t31 = ((x169+(x170*x171))==x172);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x182 = -2LL;
	uint64_t x183 = UINT64_MAX;
	static int16_t x184 = INT16_MIN;
	int32_t t32 = 21887362;

    t32 = ((x181+(x182*x183))==x184);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x189 = 2U;
	uint32_t x190 = UINT32_MAX;
	uint32_t x191 = 101680229U;
	int64_t x192 = INT64_MIN;
	int32_t t33 = 17997348;

    t33 = ((x189+(x190*x191))==x192);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x193 = 837U;
	int32_t x194 = -1016097;
	int16_t x195 = 8;
	static volatile int32_t t34 = 54;

    t34 = ((x193+(x194*x195))==x196);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x202 = 1;
	int8_t x203 = -1;
	int64_t x204 = INT64_MIN;
	int32_t t35 = -28355;

    t35 = ((x201+(x202*x203))==x204);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x206 = 7U;
	int32_t x207 = -725970;
	int32_t x208 = -1;
	volatile int32_t t36 = -214804;

    t36 = ((x205+(x206*x207))==x208);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x210 = INT8_MIN;
	int16_t x211 = -1;
	int64_t x212 = INT64_MIN;
	static volatile int32_t t37 = -1618995;

    t37 = ((x209+(x210*x211))==x212);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x213 = 50U;
	uint64_t x214 = 796581528LLU;
	uint8_t x215 = 48U;
	int8_t x216 = 6;
	int32_t t38 = 5;

    t38 = ((x213+(x214*x215))==x216);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x221 = INT16_MIN;
	int64_t x222 = -1LL;
	int8_t x223 = INT8_MIN;
	volatile int64_t x224 = -1LL;

    t39 = ((x221+(x222*x223))==x224);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x237 = -1LL;
	volatile int8_t x238 = 0;
	static volatile uint64_t x239 = 4312386677818743LLU;
	uint16_t x240 = 5U;
	int32_t t40 = 21;

    t40 = ((x237+(x238*x239))==x240);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x245 = 87738251U;
	static uint16_t x246 = 0U;
	int32_t x247 = -1;
	static volatile int64_t x248 = 1LL;
	volatile int32_t t41 = -126407;

    t41 = ((x245+(x246*x247))==x248);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x249 = 2371;
	static int64_t x251 = 8633682932957088LL;
	volatile uint64_t x252 = UINT64_MAX;
	static volatile int32_t t42 = 530955398;

    t42 = ((x249+(x250*x251))==x252);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x253 = INT8_MAX;
	uint8_t x256 = 1U;

    t43 = ((x253+(x254*x255))==x256);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x261 = INT8_MAX;
	int64_t x262 = -3246054638LL;
	int32_t t44 = -8433;

    t44 = ((x261+(x262*x263))==x264);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x269 = -49680352;
	volatile int64_t x270 = -1LL;
	int8_t x271 = -1;
	volatile int8_t x272 = INT8_MIN;
	volatile int32_t t45 = 1;

    t45 = ((x269+(x270*x271))==x272);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x277 = -9601229825454358LL;
	int64_t x279 = 189350186043LL;
	static int32_t t46 = 912;

    t46 = ((x277+(x278*x279))==x280);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x285 = 21;
	static volatile int16_t x286 = -63;
	static uint64_t x287 = 50420LLU;
	uint8_t x288 = 117U;
	volatile int32_t t47 = 61983;

    t47 = ((x285+(x286*x287))==x288);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x293 = -1318;
	uint32_t x295 = UINT32_MAX;
	int8_t x296 = INT8_MIN;
	int32_t t48 = 899584909;

    t48 = ((x293+(x294*x295))==x296);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x305 = -1;
	volatile int16_t x306 = 251;
	int32_t t49 = 373964;

    t49 = ((x305+(x306*x307))==x308);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x313 = INT8_MIN;
	uint64_t x314 = UINT64_MAX;
	volatile int32_t x315 = INT32_MAX;
	volatile int32_t t50 = 5;

    t50 = ((x313+(x314*x315))==x316);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x317 = INT8_MIN;
	static uint16_t x319 = 1U;
	uint16_t x320 = 3792U;
	volatile int32_t t51 = -22713750;

    t51 = ((x317+(x318*x319))==x320);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x321 = INT32_MIN;
	static int8_t x322 = -38;
	uint64_t x323 = 6900598609787LLU;
	int16_t x324 = INT16_MIN;
	volatile int32_t t52 = 29987;

    t52 = ((x321+(x322*x323))==x324);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x327 = 5547U;
	volatile uint64_t x328 = UINT64_MAX;
	int32_t t53 = 41538034;

    t53 = ((x325+(x326*x327))==x328);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x331 = 35819466U;
	int8_t x332 = INT8_MIN;
	int32_t t54 = -430335;

    t54 = ((x329+(x330*x331))==x332);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint64_t x345 = 136427841368799LLU;
	int32_t x346 = 78;
	int8_t x347 = -1;
	int64_t x348 = INT64_MIN;
	volatile int32_t t55 = 19;

    t55 = ((x345+(x346*x347))==x348);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x354 = INT8_MIN;
	volatile uint16_t x355 = 261U;
	int64_t x356 = INT64_MAX;
	int32_t t56 = -18287;

    t56 = ((x353+(x354*x355))==x356);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x357 = 1421193681LL;
	int64_t x358 = -1LL;
	uint8_t x359 = 2U;
	volatile int64_t x360 = INT64_MIN;
	volatile int32_t t57 = -8;

    t57 = ((x357+(x358*x359))==x360);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x373 = INT8_MIN;
	int32_t x374 = -406855;
	uint32_t x375 = 1692535U;
	uint8_t x376 = UINT8_MAX;
	static int32_t t58 = -3;

    t58 = ((x373+(x374*x375))==x376);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x377 = 46U;
	uint64_t x378 = 2281544885232711945LLU;
	int64_t x379 = -5955744246676LL;
	int16_t x380 = INT16_MIN;

    t59 = ((x377+(x378*x379))==x380);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint32_t x381 = UINT32_MAX;
	int32_t x382 = INT32_MIN;
	int32_t x384 = 888248971;

    t60 = ((x381+(x382*x383))==x384);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x385 = INT16_MIN;

    t61 = ((x385+(x386*x387))==x388);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x393 = INT64_MAX;
	volatile int64_t x394 = -54381193LL;
	static volatile uint64_t x395 = 579016031353318649LLU;
	volatile int32_t t62 = -152837084;

    t62 = ((x393+(x394*x395))==x396);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x412 = INT8_MIN;
	int32_t t63 = 8092879;

    t63 = ((x409+(x410*x411))==x412);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x417 = 17U;
	uint16_t x420 = 25483U;
	volatile int32_t t64 = 423698225;

    t64 = ((x417+(x418*x419))==x420);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint64_t x421 = 259914LLU;
	uint32_t x422 = UINT32_MAX;
	int32_t x424 = INT32_MAX;
	volatile int32_t t65 = 2;

    t65 = ((x421+(x422*x423))==x424);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x425 = INT32_MIN;
	uint8_t x426 = 61U;
	uint32_t x427 = 437441412U;
	uint32_t x428 = 866U;
	int32_t t66 = 3;

    t66 = ((x425+(x426*x427))==x428);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x429 = 7U;
	uint32_t x430 = 17970710U;
	int32_t x431 = -719;
	static int32_t x432 = INT32_MIN;
	volatile int32_t t67 = 242;

    t67 = ((x429+(x430*x431))==x432);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x433 = INT16_MIN;
	int16_t x434 = INT16_MAX;
	int8_t x435 = INT8_MIN;
	int64_t x436 = 124598038767751825LL;
	volatile int32_t t68 = -21515;

    t68 = ((x433+(x434*x435))==x436);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x447 = -1;
	volatile int32_t t69 = 109;

    t69 = ((x445+(x446*x447))==x448);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x450 = 7887LL;
	uint64_t x451 = 3110LLU;

    t70 = ((x449+(x450*x451))==x452);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x453 = INT64_MIN;
	static uint8_t x454 = UINT8_MAX;
	uint8_t x455 = 2U;
	uint16_t x456 = UINT16_MAX;
	volatile int32_t t71 = 13;

    t71 = ((x453+(x454*x455))==x456);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x458 = INT16_MIN;
	volatile int8_t x459 = INT8_MIN;
	int32_t t72 = -202448521;

    t72 = ((x457+(x458*x459))==x460);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint8_t x461 = 2U;
	int16_t x462 = -3;
	int8_t x463 = -8;
	int8_t x464 = 0;
	int32_t t73 = -1;

    t73 = ((x461+(x462*x463))==x464);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x473 = INT64_MIN;
	int8_t x474 = INT8_MIN;
	int8_t x476 = -2;
	int32_t t74 = 260323304;

    t74 = ((x473+(x474*x475))==x476);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int64_t x477 = -1LL;
	int16_t x478 = -649;
	uint32_t x479 = 2031411816U;
	static int64_t x480 = INT64_MAX;
	volatile int32_t t75 = 8395293;

    t75 = ((x477+(x478*x479))==x480);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x482 = INT8_MAX;
	uint32_t x483 = 5U;
	static int16_t x484 = -16283;
	int32_t t76 = 201409;

    t76 = ((x481+(x482*x483))==x484);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x485 = 0;
	uint16_t x486 = UINT16_MAX;
	int16_t x487 = -1;
	int64_t x488 = -3LL;
	int32_t t77 = -857464;

    t77 = ((x485+(x486*x487))==x488);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x493 = 194148624U;
	static volatile int8_t x494 = INT8_MIN;
	static int8_t x495 = 5;
	int32_t x496 = 0;
	volatile int32_t t78 = 2973409;

    t78 = ((x493+(x494*x495))==x496);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x497 = UINT16_MAX;
	volatile int8_t x498 = INT8_MAX;
	int16_t x499 = INT16_MIN;
	static uint32_t x500 = 5U;
	int32_t t79 = -169327;

    t79 = ((x497+(x498*x499))==x500);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x507 = 279;
	static int64_t x508 = 3730361630LL;
	volatile int32_t t80 = 25160845;

    t80 = ((x505+(x506*x507))==x508);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x510 = 172422424861568LLU;
	volatile int32_t x511 = INT32_MAX;
	volatile uint32_t x512 = 992264284U;
	int32_t t81 = -8736810;

    t81 = ((x509+(x510*x511))==x512);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x513 = INT32_MIN;
	int32_t x515 = -1;
	static uint32_t x516 = 140292U;
	static volatile int32_t t82 = 478054;

    t82 = ((x513+(x514*x515))==x516);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x517 = -1;
	static int64_t x518 = INT64_MAX;
	uint64_t x519 = 0LLU;
	int64_t x520 = INT64_MIN;
	volatile int32_t t83 = 401014;

    t83 = ((x517+(x518*x519))==x520);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x521 = INT32_MIN;
	uint32_t x522 = UINT32_MAX;
	int8_t x523 = INT8_MIN;
	uint8_t x524 = UINT8_MAX;
	volatile int32_t t84 = -63;

    t84 = ((x521+(x522*x523))==x524);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x529 = INT32_MAX;
	static uint16_t x530 = 22525U;
	volatile int16_t x531 = INT16_MIN;
	int8_t x532 = 13;
	volatile int32_t t85 = 96727813;

    t85 = ((x529+(x530*x531))==x532);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x535 = INT16_MIN;
	uint16_t x536 = 428U;
	volatile int32_t t86 = 179479962;

    t86 = ((x533+(x534*x535))==x536);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x538 = 16540LLU;
	int64_t x539 = 159201064997942463LL;
	int64_t x540 = -1LL;
	int32_t t87 = -1;

    t87 = ((x537+(x538*x539))==x540);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x541 = INT8_MAX;
	int32_t x542 = 187236;
	uint8_t x543 = UINT8_MAX;
	int16_t x544 = -1;
	static int32_t t88 = -14;

    t88 = ((x541+(x542*x543))==x544);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x549 = INT16_MAX;
	int32_t x550 = INT32_MAX;
	int64_t x551 = -13092264LL;
	static volatile int64_t x552 = INT64_MAX;

    t89 = ((x549+(x550*x551))==x552);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x559 = 788447565LLU;
	static int16_t x560 = INT16_MIN;

    t90 = ((x557+(x558*x559))==x560);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint32_t x561 = 990U;
	static int32_t x564 = -7728;
	static volatile int32_t t91 = 180027472;

    t91 = ((x561+(x562*x563))==x564);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x569 = INT64_MIN;
	static volatile int8_t x571 = -7;
	static int16_t x572 = INT16_MAX;

    t92 = ((x569+(x570*x571))==x572);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x577 = 53U;
	int16_t x578 = -1;
	static uint8_t x579 = 84U;
	uint32_t x580 = 209536U;
	int32_t t93 = -5632;

    t93 = ((x577+(x578*x579))==x580);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x581 = 4220;
	int16_t x584 = -1;
	static int32_t t94 = 2063353;

    t94 = ((x581+(x582*x583))==x584);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x585 = 58152792;
	volatile uint16_t x587 = 39U;
	static uint32_t x588 = UINT32_MAX;
	int32_t t95 = -91231;

    t95 = ((x585+(x586*x587))==x588);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x589 = -1LL;
	volatile uint16_t x590 = 6877U;
	uint16_t x592 = 27U;
	volatile int32_t t96 = 168;

    t96 = ((x589+(x590*x591))==x592);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x593 = 441045150491117734LL;
	volatile int8_t x595 = INT8_MIN;
	int32_t x596 = -1;
	volatile int32_t t97 = 209862;

    t97 = ((x593+(x594*x595))==x596);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint16_t x597 = UINT16_MAX;
	int16_t x599 = 8;
	static int32_t x600 = 1277763;
	volatile int32_t t98 = -145;

    t98 = ((x597+(x598*x599))==x600);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x601 = -1LL;
	static volatile int16_t x602 = INT16_MIN;
	static int64_t x604 = 14LL;
	int32_t t99 = -52;

    t99 = ((x601+(x602*x603))==x604);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x611 = UINT8_MAX;
	int32_t t100 = 31;

    t100 = ((x609+(x610*x611))==x612);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x617 = UINT64_MAX;
	uint64_t x618 = 2256594010LLU;
	int16_t x620 = INT16_MIN;
	volatile int32_t t101 = -802865076;

    t101 = ((x617+(x618*x619))==x620);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x625 = -1;
	int32_t x627 = 17433;
	int64_t x628 = -1LL;
	volatile int32_t t102 = 1;

    t102 = ((x625+(x626*x627))==x628);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x629 = -1LL;
	volatile uint32_t x630 = 63U;
	int32_t x631 = INT32_MAX;
	int8_t x632 = INT8_MIN;
	static volatile int32_t t103 = -32036;

    t103 = ((x629+(x630*x631))==x632);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x641 = INT16_MIN;
	volatile int64_t x643 = -1LL;
	int32_t x644 = INT32_MIN;
	volatile int32_t t104 = -848;

    t104 = ((x641+(x642*x643))==x644);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x646 = 0U;
	int32_t x648 = INT32_MAX;
	volatile int32_t t105 = -11;

    t105 = ((x645+(x646*x647))==x648);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x649 = 88962853LL;
	int32_t x650 = -2492754;
	int16_t x651 = 1;
	int8_t x652 = -12;
	int32_t t106 = 6;

    t106 = ((x649+(x650*x651))==x652);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint32_t x653 = 19U;
	int16_t x655 = INT16_MAX;
	int32_t t107 = -61935;

    t107 = ((x653+(x654*x655))==x656);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x657 = -2;
	static volatile int16_t x659 = -1;
	int8_t x660 = -1;

    t108 = ((x657+(x658*x659))==x660);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x661 = INT32_MIN;
	int32_t x662 = 127;
	volatile int8_t x663 = INT8_MAX;
	int64_t x664 = INT64_MIN;
	int32_t t109 = -424124959;

    t109 = ((x661+(x662*x663))==x664);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x665 = INT64_MIN;
	uint8_t x666 = 5U;
	uint64_t x667 = 5291155LLU;
	static int32_t t110 = -2;

    t110 = ((x665+(x666*x667))==x668);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x669 = 5128;
	uint64_t x670 = UINT64_MAX;
	int64_t x671 = INT64_MIN;
	static volatile int32_t t111 = 2526;

    t111 = ((x669+(x670*x671))==x672);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x677 = 139045611U;
	volatile int16_t x678 = -1;
	static int8_t x680 = 1;
	static volatile int32_t t112 = 296665;

    t112 = ((x677+(x678*x679))==x680);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x681 = 125U;
	volatile int8_t x683 = -1;
	volatile int8_t x684 = -1;
	volatile int32_t t113 = 5622238;

    t113 = ((x681+(x682*x683))==x684);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x685 = INT8_MIN;
	int64_t x688 = INT64_MIN;
	int32_t t114 = -52111;

    t114 = ((x685+(x686*x687))==x688);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x689 = -1;
	int32_t x691 = -1;
	int64_t x692 = -23312580LL;
	int32_t t115 = -2;

    t115 = ((x689+(x690*x691))==x692);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x698 = -1;
	uint32_t x699 = 836U;
	volatile int8_t x700 = INT8_MAX;

    t116 = ((x697+(x698*x699))==x700);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x705 = -3308960082327167LL;
	uint8_t x706 = UINT8_MAX;
	int16_t x707 = INT16_MIN;
	int32_t t117 = 1045973379;

    t117 = ((x705+(x706*x707))==x708);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x711 = INT8_MIN;
	volatile int32_t x712 = INT32_MIN;
	static int32_t t118 = -422;

    t118 = ((x709+(x710*x711))==x712);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x714 = -1LL;
	uint64_t x716 = 161748LLU;
	volatile int32_t t119 = -218495891;

    t119 = ((x713+(x714*x715))==x716);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x717 = 40030U;
	volatile uint8_t x719 = 24U;
	int16_t x720 = 0;
	int32_t t120 = -2502;

    t120 = ((x717+(x718*x719))==x720);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x729 = 1U;
	int8_t x730 = -1;
	static int32_t x731 = 449364167;
	int32_t x732 = INT32_MIN;
	volatile int32_t t121 = -1910514;

    t121 = ((x729+(x730*x731))==x732);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x733 = -1;
	int32_t x734 = -1;
	volatile uint8_t x735 = 12U;
	int64_t x736 = -1LL;

    t122 = ((x733+(x734*x735))==x736);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x737 = -2645140LL;
	int16_t x739 = INT16_MIN;
	int64_t x740 = -36700LL;
	int32_t t123 = -80868007;

    t123 = ((x737+(x738*x739))==x740);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x741 = 231370U;
	uint64_t x742 = 141709894635417LLU;
	int32_t x743 = -1;
	uint32_t x744 = 4113U;

    t124 = ((x741+(x742*x743))==x744);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint32_t x747 = 208U;
	volatile int32_t x748 = INT32_MIN;
	volatile int32_t t125 = -13;

    t125 = ((x745+(x746*x747))==x748);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x753 = INT64_MAX;
	int32_t x754 = -102;
	volatile int16_t x755 = 0;
	int16_t x756 = 0;
	int32_t t126 = -803;

    t126 = ((x753+(x754*x755))==x756);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x757 = -1LL;
	int16_t x758 = 430;
	static int8_t x759 = -1;
	int16_t x760 = INT16_MIN;
	volatile int32_t t127 = -112232;

    t127 = ((x757+(x758*x759))==x760);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x777 = 6;
	volatile uint64_t x778 = 68939414486336LLU;
	volatile int16_t x779 = INT16_MIN;
	int64_t x780 = INT64_MIN;
	volatile int32_t t128 = 1159;

    t128 = ((x777+(x778*x779))==x780);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x781 = 55;
	static uint8_t x782 = 13U;
	volatile int16_t x784 = INT16_MIN;

    t129 = ((x781+(x782*x783))==x784);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x793 = -1;
	uint16_t x794 = UINT16_MAX;
	int8_t x795 = INT8_MIN;
	volatile uint16_t x796 = UINT16_MAX;
	int32_t t130 = 452843;

    t130 = ((x793+(x794*x795))==x796);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x797 = 8;
	int16_t x798 = INT16_MIN;
	volatile int16_t x799 = INT16_MAX;
	volatile int32_t x800 = 877;
	volatile int32_t t131 = -947985071;

    t131 = ((x797+(x798*x799))==x800);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x801 = -1;
	int16_t x802 = -1;
	int64_t x803 = INT64_MAX;
	int32_t x804 = INT32_MIN;
	volatile int32_t t132 = -479873655;

    t132 = ((x801+(x802*x803))==x804);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x813 = -1;
	int32_t x814 = INT32_MIN;
	static uint32_t x815 = 122U;
	volatile int32_t t133 = 9;

    t133 = ((x813+(x814*x815))==x816);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x821 = -1;
	int8_t x822 = 0;
	static int64_t x823 = -1159LL;
	static volatile int32_t x824 = 321613;
	int32_t t134 = -765113177;

    t134 = ((x821+(x822*x823))==x824);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x830 = 1478124;
	static uint8_t x831 = UINT8_MAX;
	volatile int32_t t135 = 6;

    t135 = ((x829+(x830*x831))==x832);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x833 = 11;
	int16_t x834 = INT16_MAX;
	static uint64_t x835 = UINT64_MAX;
	int64_t x836 = INT64_MIN;

    t136 = ((x833+(x834*x835))==x836);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x837 = -1908947030LL;
	volatile int16_t x838 = -3374;
	uint8_t x839 = UINT8_MAX;
	int8_t x840 = INT8_MIN;
	int32_t t137 = 729541;

    t137 = ((x837+(x838*x839))==x840);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x841 = -2;
	volatile int32_t x842 = -1;
	int64_t x843 = -1LL;
	int16_t x844 = 1;

    t138 = ((x841+(x842*x843))==x844);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x846 = -1;
	uint8_t x847 = 100U;
	static int32_t t139 = 8605076;

    t139 = ((x845+(x846*x847))==x848);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int8_t x849 = -3;
	int8_t x850 = -1;
	uint16_t x852 = 14U;

    t140 = ((x849+(x850*x851))==x852);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x857 = 0;
	volatile int8_t x858 = 10;
	int8_t x859 = -1;
	int64_t x860 = -1LL;
	int32_t t141 = 1586132;

    t141 = ((x857+(x858*x859))==x860);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x869 = INT16_MIN;
	uint64_t x870 = 16891655957602LLU;
	uint64_t x871 = UINT64_MAX;
	static int32_t x872 = INT32_MIN;

    t142 = ((x869+(x870*x871))==x872);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x873 = 2258140U;
	volatile uint8_t x874 = 0U;
	volatile int32_t x875 = INT32_MIN;
	int32_t t143 = -1;

    t143 = ((x873+(x874*x875))==x876);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x877 = INT16_MAX;
	static uint32_t x878 = 4540U;
	static int8_t x879 = 1;
	uint8_t x880 = 2U;
	volatile int32_t t144 = 1587438;

    t144 = ((x877+(x878*x879))==x880);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x881 = -277615343LL;
	uint64_t x882 = 1LLU;
	int32_t x884 = 1;

    t145 = ((x881+(x882*x883))==x884);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x885 = UINT32_MAX;
	static uint64_t x886 = UINT64_MAX;
	uint64_t x887 = 2039288311389295LLU;
	int8_t x888 = INT8_MIN;

    t146 = ((x885+(x886*x887))==x888);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x897 = 20U;
	int32_t x898 = 1533654;
	static uint8_t x899 = 29U;
	uint8_t x900 = UINT8_MAX;
	int32_t t147 = -3151778;

    t147 = ((x897+(x898*x899))==x900);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x901 = UINT16_MAX;
	uint8_t x903 = 111U;
	volatile int32_t x904 = -1;
	volatile int32_t t148 = 16243;

    t148 = ((x901+(x902*x903))==x904);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x909 = -1;
	int16_t x910 = INT16_MIN;
	volatile int8_t x911 = INT8_MIN;
	int32_t x912 = 2;
	volatile int32_t t149 = -1137;

    t149 = ((x909+(x910*x911))==x912);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x913 = 487060366785732483LL;
	static volatile int16_t x915 = 6;
	uint8_t x916 = 0U;

    t150 = ((x913+(x914*x915))==x916);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x928 = 859U;
	volatile int32_t t151 = 3040892;

    t151 = ((x925+(x926*x927))==x928);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x937 = -186991;
	volatile int16_t x939 = -118;

    t152 = ((x937+(x938*x939))==x940);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x945 = 1U;
	int16_t x946 = -2086;
	uint16_t x948 = 29840U;

    t153 = ((x945+(x946*x947))==x948);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x949 = -1;
	static uint8_t x951 = 4U;
	int64_t x952 = INT64_MIN;
	int32_t t154 = -324129991;

    t154 = ((x949+(x950*x951))==x952);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x955 = INT8_MAX;
	int32_t t155 = -24343343;

    t155 = ((x953+(x954*x955))==x956);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x960 = INT64_MIN;
	int32_t t156 = -1251;

    t156 = ((x957+(x958*x959))==x960);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x961 = INT64_MIN;
	uint64_t x963 = 4969490LLU;
	int64_t x964 = -1LL;

    t157 = ((x961+(x962*x963))==x964);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x965 = INT8_MIN;
	volatile uint16_t x966 = UINT16_MAX;
	int8_t x967 = -10;
	int32_t x968 = INT32_MIN;
	int32_t t158 = 337199822;

    t158 = ((x965+(x966*x967))==x968);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x973 = 250277U;
	int64_t x975 = 1LL;
	uint16_t x976 = UINT16_MAX;
	volatile int32_t t159 = 534388100;

    t159 = ((x973+(x974*x975))==x976);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint8_t x977 = UINT8_MAX;
	int16_t x979 = 2;
	int32_t t160 = 6883985;

    t160 = ((x977+(x978*x979))==x980);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x981 = INT64_MAX;
	int64_t x982 = -50035152377262LL;
	uint16_t x983 = UINT16_MAX;
	int32_t t161 = 123128300;

    t161 = ((x981+(x982*x983))==x984);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x985 = INT8_MAX;
	uint64_t x986 = 153LLU;
	static volatile uint32_t x987 = UINT32_MAX;
	volatile int32_t x988 = 0;
	volatile int32_t t162 = 2;

    t162 = ((x985+(x986*x987))==x988);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x994 = -1LL;
	int32_t x995 = INT32_MIN;
	static int32_t x996 = INT32_MIN;
	volatile int32_t t163 = -1067446;

    t163 = ((x993+(x994*x995))==x996);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x998 = UINT16_MAX;
	static int64_t x1000 = INT64_MIN;
	volatile int32_t t164 = -394;

    t164 = ((x997+(x998*x999))==x1000);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x1001 = 0U;
	int8_t x1002 = -9;
	uint32_t x1003 = 23294477U;
	static int32_t t165 = -10329;

    t165 = ((x1001+(x1002*x1003))==x1004);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x1005 = -100;
	int16_t x1007 = INT16_MIN;
	static int32_t t166 = 71137763;

    t166 = ((x1005+(x1006*x1007))==x1008);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x1009 = INT32_MAX;
	int64_t x1010 = 591171552512455798LL;
	int8_t x1011 = -1;
	int8_t x1012 = 0;
	static int32_t t167 = -542222789;

    t167 = ((x1009+(x1010*x1011))==x1012);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x1013 = 1U;
	uint32_t x1014 = 172328264U;
	uint32_t x1015 = UINT32_MAX;
	uint32_t x1016 = 29366U;
	int32_t t168 = 70634506;

    t168 = ((x1013+(x1014*x1015))==x1016);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x1017 = 107U;
	static int16_t x1018 = -1;
	static int8_t x1019 = 0;
	static int8_t x1020 = INT8_MIN;
	int32_t t169 = -120;

    t169 = ((x1017+(x1018*x1019))==x1020);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x1022 = 10942743954LLU;
	int8_t x1023 = INT8_MIN;
	int8_t x1024 = INT8_MIN;
	volatile int32_t t170 = 18;

    t170 = ((x1021+(x1022*x1023))==x1024);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x1031 = -1;
	volatile int32_t t171 = 1768462;

    t171 = ((x1029+(x1030*x1031))==x1032);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x1033 = -1;
	uint64_t x1034 = UINT64_MAX;
	static int32_t x1035 = INT32_MIN;
	uint16_t x1036 = 2U;
	static volatile int32_t t172 = -1312;

    t172 = ((x1033+(x1034*x1035))==x1036);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x1037 = -234006;
	static volatile int16_t x1038 = INT16_MIN;
	static int8_t x1039 = 1;
	int32_t x1040 = -1;
	static int32_t t173 = -1439764;

    t173 = ((x1037+(x1038*x1039))==x1040);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x1042 = INT16_MAX;
	int16_t x1044 = INT16_MIN;
	volatile int32_t t174 = 16;

    t174 = ((x1041+(x1042*x1043))==x1044);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x1045 = UINT8_MAX;
	int8_t x1046 = -3;
	volatile uint16_t x1047 = 99U;
	int64_t x1048 = INT64_MIN;
	volatile int32_t t175 = -881728398;

    t175 = ((x1045+(x1046*x1047))==x1048);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x1053 = INT64_MIN;
	static int16_t x1054 = -60;
	int16_t x1055 = INT16_MIN;
	static int16_t x1056 = INT16_MAX;
	volatile int32_t t176 = 548;

    t176 = ((x1053+(x1054*x1055))==x1056);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x1059 = -1;
	uint64_t x1060 = 68549522LLU;

    t177 = ((x1057+(x1058*x1059))==x1060);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x1065 = UINT8_MAX;
	volatile int64_t x1066 = 860779041LL;
	static volatile int8_t x1067 = INT8_MAX;
	int64_t x1068 = -1LL;

    t178 = ((x1065+(x1066*x1067))==x1068);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x1069 = -94781473;
	int16_t x1070 = INT16_MIN;
	uint32_t x1071 = 819U;
	uint64_t x1072 = UINT64_MAX;
	volatile int32_t t179 = 200382296;

    t179 = ((x1069+(x1070*x1071))==x1072);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x1073 = 6674786;
	volatile int32_t x1074 = -13709;
	static uint16_t x1076 = 1U;
	static volatile int32_t t180 = -30;

    t180 = ((x1073+(x1074*x1075))==x1076);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x1077 = -6;
	int16_t x1080 = INT16_MIN;
	int32_t t181 = 217256296;

    t181 = ((x1077+(x1078*x1079))==x1080);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x1081 = 20234710574091942LL;
	int16_t x1082 = -1;
	int16_t x1083 = INT16_MAX;
	uint32_t x1084 = 4061266U;
	int32_t t182 = -548;

    t182 = ((x1081+(x1082*x1083))==x1084);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x1089 = -339506LL;
	volatile int16_t x1091 = INT16_MIN;
	volatile int8_t x1092 = INT8_MIN;
	static volatile int32_t t183 = -5;

    t183 = ((x1089+(x1090*x1091))==x1092);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x1093 = -1;
	uint32_t x1094 = UINT32_MAX;
	volatile int8_t x1095 = -1;
	int32_t x1096 = INT32_MAX;
	volatile int32_t t184 = 411;

    t184 = ((x1093+(x1094*x1095))==x1096);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x1099 = UINT64_MAX;
	static int32_t t185 = 247504;

    t185 = ((x1097+(x1098*x1099))==x1100);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x1105 = -24569LL;
	uint64_t x1106 = UINT64_MAX;

    t186 = ((x1105+(x1106*x1107))==x1108);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x1117 = 579742U;
	static uint8_t x1118 = UINT8_MAX;
	static int8_t x1119 = INT8_MIN;
	volatile int64_t x1120 = INT64_MIN;
	volatile int32_t t187 = -612;

    t187 = ((x1117+(x1118*x1119))==x1120);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x1121 = INT8_MIN;
	static uint32_t x1122 = UINT32_MAX;
	volatile int16_t x1123 = -8;
	uint64_t x1124 = 8014357LLU;

    t188 = ((x1121+(x1122*x1123))==x1124);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x1125 = UINT32_MAX;
	static uint32_t x1126 = 2200U;
	int32_t x1127 = -134675521;
	int32_t x1128 = -95142;
	volatile int32_t t189 = 1;

    t189 = ((x1125+(x1126*x1127))==x1128);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x1134 = -31206;
	static uint64_t x1135 = 33083082450813LLU;
	int64_t x1136 = -68120450757305301LL;
	volatile int32_t t190 = -1;

    t190 = ((x1133+(x1134*x1135))==x1136);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x1137 = INT8_MIN;
	static uint64_t x1138 = 1LLU;
	int32_t x1139 = 165036;
	int64_t x1140 = INT64_MAX;
	int32_t t191 = -766861091;

    t191 = ((x1137+(x1138*x1139))==x1140);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x1141 = UINT32_MAX;
	int64_t x1142 = -1LL;
	int64_t x1143 = INT64_MAX;
	volatile uint8_t x1144 = UINT8_MAX;
	volatile int32_t t192 = 0;

    t192 = ((x1141+(x1142*x1143))==x1144);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1146 = -1;
	int8_t x1147 = INT8_MIN;
	uint64_t x1148 = UINT64_MAX;
	volatile int32_t t193 = -7421;

    t193 = ((x1145+(x1146*x1147))==x1148);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x1149 = INT16_MIN;
	int8_t x1150 = INT8_MIN;
	volatile int16_t x1151 = -1;
	uint64_t x1152 = 132089549100536LLU;
	volatile int32_t t194 = 1079889;

    t194 = ((x1149+(x1150*x1151))==x1152);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1153 = INT8_MIN;
	volatile int64_t x1155 = -12064LL;
	static int32_t x1156 = INT32_MAX;
	volatile int32_t t195 = 1022340;

    t195 = ((x1153+(x1154*x1155))==x1156);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x1161 = 0U;
	uint32_t x1163 = 1U;
	volatile int32_t t196 = -2349;

    t196 = ((x1161+(x1162*x1163))==x1164);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1167 = -6271;
	int32_t t197 = 344479648;

    t197 = ((x1165+(x1166*x1167))==x1168);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x1169 = 7603765LLU;
	uint16_t x1170 = 30U;
	static uint8_t x1171 = 12U;
	static int16_t x1172 = INT16_MIN;
	int32_t t198 = -1;

    t198 = ((x1169+(x1170*x1171))==x1172);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x1177 = 12732939603158720LLU;
	uint64_t x1178 = 5LLU;
	int8_t x1179 = -1;
	int32_t t199 = 1;

    t199 = ((x1177+(x1178*x1179))==x1180);

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

