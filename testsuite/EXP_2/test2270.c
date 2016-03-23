
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

static int16_t x2 = INT16_MIN;
volatile int32_t x3 = INT32_MIN;
static int16_t x13 = INT16_MIN;
int8_t x17 = 1;
volatile uint32_t x24 = 1U;
uint32_t t5 = UINT32_MAX;
int32_t x26 = 3852;
uint8_t x29 = UINT8_MAX;
int64_t t7 = 7575529LL;
uint64_t x34 = UINT64_MAX;
volatile int32_t t8 = -4400265;
volatile uint16_t x39 = 1U;
static volatile int16_t x41 = 3;
volatile int8_t x43 = -4;
int16_t x44 = INT16_MIN;
volatile int64_t x49 = -2318LL;
uint64_t x52 = UINT64_MAX;
int8_t x54 = 12;
int64_t x61 = 7555444860596LL;
int16_t x78 = -1;
static uint16_t x82 = 27U;
uint16_t x86 = 2U;
volatile uint32_t t18 = 2079115829U;
static int8_t x92 = 1;
int32_t x99 = -262;
volatile uint64_t x105 = UINT64_MAX;
static uint64_t x107 = 17688239119161LLU;
int16_t x108 = INT16_MIN;
static volatile int32_t t24 = -11;
volatile uint16_t x114 = UINT16_MAX;
int32_t t26 = -25027923;
static int64_t x122 = INT64_MIN;
int16_t x123 = 539;
int8_t x124 = 1;
int32_t x128 = INT32_MAX;
int8_t x131 = -1;
volatile int16_t x132 = -1;
static volatile uint16_t x136 = 16U;
static int32_t x139 = INT32_MIN;
int32_t t31 = 11164;
static int16_t x141 = INT16_MIN;
uint32_t t33 = 3771U;
uint64_t t34 = 340379211990188432LLU;
int16_t x155 = INT16_MIN;
uint16_t x160 = 1U;
uint8_t x163 = 5U;
static int64_t x167 = INT64_MIN;
volatile int32_t t40 = 503;
static int32_t x186 = -1;
volatile uint32_t t41 = 944U;
int32_t x189 = -1;
static uint32_t x194 = 136U;
volatile int8_t x200 = -1;
static int8_t x204 = INT8_MIN;
static int8_t x211 = INT8_MAX;
static int64_t x215 = INT64_MAX;
volatile int64_t t48 = -5LL;
int64_t x218 = INT64_MIN;
static int16_t x232 = INT16_MIN;
uint8_t x238 = 120U;
int32_t x241 = INT32_MIN;
volatile int64_t t54 = -488590LL;
int32_t x245 = 492311;
static uint32_t x246 = UINT32_MAX;
uint32_t x247 = 14339U;
int16_t x269 = 0;
uint32_t x270 = 111U;
uint32_t x279 = 47U;
static uint64_t x280 = 391494939LLU;
int16_t x285 = 702;
uint8_t x286 = 5U;
static int8_t x289 = 12;
static volatile int32_t x290 = INT32_MIN;
volatile int32_t t64 = 72;
int32_t x299 = INT32_MIN;
int32_t x302 = 1;
int32_t t66 = 4;
int32_t x307 = INT32_MIN;
volatile int8_t x310 = -16;
volatile int32_t x315 = INT32_MAX;
uint64_t t69 = 16709262LLU;
uint16_t x319 = UINT16_MAX;
static volatile int32_t x322 = 417631;
int64_t x323 = -1LL;
volatile uint8_t x328 = UINT8_MAX;
int8_t x332 = INT8_MAX;
int64_t t74 = -106216901853LL;
static volatile int8_t x345 = INT8_MIN;
int8_t x346 = -1;
int16_t x349 = -1;
int32_t t77 = -4761851;
uint64_t x366 = UINT64_MAX;
uint32_t x368 = 47327392U;
int8_t x373 = 11;
int32_t t82 = -11597;
int32_t x383 = INT32_MIN;
int64_t x385 = 36LL;
int16_t x393 = -1;
static volatile int32_t t86 = 8;
int32_t x400 = INT32_MAX;
int32_t x403 = INT32_MAX;
int64_t t88 = -65448985661007LL;
int32_t x408 = 489392;
uint32_t x410 = UINT32_MAX;
static volatile int64_t t90 = 7004551LL;
volatile int8_t x413 = INT8_MAX;
volatile int32_t t91 = 14;
static uint32_t x423 = 169U;
volatile uint16_t x425 = UINT16_MAX;
int16_t x430 = INT16_MAX;
volatile int8_t x431 = INT8_MIN;
int16_t x434 = -3;
uint32_t x442 = UINT32_MAX;
volatile uint16_t x444 = 10573U;
int8_t x445 = 0;
uint32_t x447 = UINT32_MAX;
volatile uint64_t t99 = 700410034378LLU;
volatile uint32_t x454 = 63U;
static uint16_t x466 = 2U;
uint16_t x468 = UINT16_MAX;
int8_t x470 = 2;
volatile int8_t x471 = INT8_MIN;
uint32_t x474 = 1738035274U;
int8_t x480 = -1;
volatile int32_t t108 = -2;
uint16_t x488 = 0U;
volatile int32_t t109 = -1985;
static int16_t x491 = INT16_MIN;
uint16_t x494 = 28030U;
int64_t x495 = 36038566866822LL;
uint64_t x500 = UINT64_MAX;
uint8_t x506 = 18U;
int32_t x510 = -1;
uint64_t x521 = 2855402577039277978LLU;
uint32_t x526 = 86811715U;
static volatile int32_t t118 = 272931;
int32_t x535 = INT32_MIN;
uint16_t x546 = 1U;
volatile uint32_t x552 = UINT32_MAX;
volatile int16_t x555 = -1;
int16_t x560 = INT16_MIN;
int32_t t127 = -912823477;
volatile uint16_t x567 = 81U;
int32_t t128 = -1995;
volatile int16_t x569 = INT16_MIN;
uint32_t x579 = 196U;
volatile int32_t t131 = -71;
uint16_t x594 = 29415U;
int16_t x595 = 2418;
volatile int64_t t133 = -33118564408LL;
uint64_t x599 = 22139723371360LLU;
volatile uint16_t x602 = 76U;
volatile int32_t x603 = 1013277201;
volatile int32_t t135 = -60;
int16_t x607 = -1;
volatile int32_t t136 = 14;
uint16_t x612 = 83U;
static int32_t t137 = 1;
static int8_t x616 = INT8_MAX;
volatile int32_t x619 = INT32_MAX;
volatile int16_t x626 = -6545;
volatile int8_t x627 = 4;
int16_t x628 = 13304;
static volatile int32_t t141 = 0;
int32_t x629 = 18;
uint8_t x634 = 0U;
static volatile int32_t t144 = -22;
static uint32_t x657 = 32246414U;
int64_t x661 = -1962LL;
volatile int64_t x662 = -1LL;
int32_t t153 = -640513610;
volatile int32_t t154 = -239;
uint8_t x690 = 16U;
volatile uint16_t x700 = 14U;
uint64_t t158 = 1LLU;
int32_t t163 = -1;
uint64_t x727 = UINT64_MAX;
int32_t t166 = 385;
int8_t x744 = 56;
volatile int16_t x746 = INT16_MIN;
volatile int32_t t169 = 68642;
int32_t t170 = -60;
volatile int32_t t175 = 132948451;
uint16_t x780 = UINT16_MAX;
int8_t x781 = INT8_MAX;
static uint64_t t177 = 2204214350969056498LLU;
int8_t x791 = -1;
static volatile int16_t x800 = -519;
static int16_t x807 = INT16_MAX;
uint32_t x808 = UINT32_MAX;
static volatile int64_t x809 = -1LL;
static uint32_t t182 = 939430U;
static int64_t x816 = INT64_MAX;
uint8_t x826 = UINT8_MAX;
static volatile int32_t t186 = 8;
int64_t x829 = 22856494LL;
int32_t x832 = -111;
static int64_t x835 = INT64_MAX;
volatile int32_t t189 = 3347;
int8_t x844 = -1;
int16_t x846 = INT16_MIN;
uint16_t x848 = 14U;
uint8_t x849 = UINT8_MAX;
int32_t x852 = -775243902;
int8_t x853 = -1;
uint64_t x856 = UINT64_MAX;
static uint16_t x859 = 7U;
volatile int32_t t194 = 979;
int64_t x865 = INT64_MIN;
static int16_t x867 = -325;
static volatile int16_t x868 = -997;
uint16_t x879 = UINT16_MAX;
int16_t x886 = 15;


void f0(void) {
    	uint32_t x1 = 373U;
	volatile uint16_t x4 = 111U;
	int32_t t0 = -1069197;

    t0 = ((x1>(x2&x3))-x4);

    if (t0 != -111) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 941U;
	volatile int32_t x6 = -15;
	int16_t x7 = -1;
	uint8_t x8 = UINT8_MAX;
	volatile int32_t t1 = -1;

    t1 = ((x5>(x6&x7))-x8);

    if (t1 != -255) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = 434;
	int64_t x10 = -1LL;
	uint64_t x11 = 116328LLU;
	int16_t x12 = -1;
	volatile int32_t t2 = 88811441;

    t2 = ((x9>(x10&x11))-x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x14 = 68749139LLU;
	int64_t x15 = INT64_MAX;
	int16_t x16 = INT16_MAX;
	volatile int32_t t3 = -64336420;

    t3 = ((x13>(x14&x15))-x16);

    if (t3 != -32766) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x18 = UINT16_MAX;
	static volatile uint16_t x19 = 1477U;
	static int32_t x20 = INT32_MAX;
	volatile int32_t t4 = 26;

    t4 = ((x17>(x18&x19))-x20);

    if (t4 != -2147483647) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x21 = 42;
	uint32_t x22 = UINT32_MAX;
	volatile uint64_t x23 = 2042553277047513951LLU;

    t5 = ((x21>(x22&x23))-x24);

    if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint16_t x25 = 44U;
	int32_t x27 = INT32_MIN;
	volatile int8_t x28 = -4;
	volatile int32_t t6 = -444039968;

    t6 = ((x25>(x26&x27))-x28);

    if (t6 != 5) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x30 = INT16_MAX;
	static uint8_t x31 = 13U;
	int64_t x32 = INT64_MAX;

    t7 = ((x29>(x30&x31))-x32);

    if (t7 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MAX;
	uint32_t x35 = 30644U;
	uint16_t x36 = UINT16_MAX;

    t8 = ((x33>(x34&x35))-x36);

    if (t8 != -65534) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x37 = 379U;
	static int64_t x38 = -98LL;
	uint16_t x40 = 3U;
	int32_t t9 = 10276;

    t9 = ((x37>(x38&x39))-x40);

    if (t9 != -2) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x42 = 2U;
	int32_t t10 = -1671251;

    t10 = ((x41>(x42&x43))-x44);

    if (t10 != 32769) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int16_t x50 = INT16_MAX;
	volatile int8_t x51 = INT8_MIN;
	static uint64_t t11 = 2413451374576LLU;

    t11 = ((x49>(x50&x51))-x52);

    if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x53 = 1976;
	int32_t x55 = INT32_MIN;
	volatile uint16_t x56 = 0U;
	volatile int32_t t12 = 0;

    t12 = ((x53>(x54&x55))-x56);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x57 = INT32_MAX;
	volatile int32_t x58 = 889292;
	int32_t x59 = -1;
	int16_t x60 = -1;
	volatile int32_t t13 = -902;

    t13 = ((x57>(x58&x59))-x60);

    if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x62 = INT32_MIN;
	uint8_t x63 = 90U;
	static uint8_t x64 = UINT8_MAX;
	volatile int32_t t14 = 562;

    t14 = ((x61>(x62&x63))-x64);

    if (t14 != -254) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x69 = -1LL;
	static volatile int32_t x70 = INT32_MIN;
	int16_t x71 = 1;
	static int32_t x72 = -1;
	static int32_t t15 = -224683;

    t15 = ((x69>(x70&x71))-x72);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x77 = INT8_MIN;
	int32_t x79 = -765;
	uint32_t x80 = UINT32_MAX;
	uint32_t t16 = 479765553U;

    t16 = ((x77>(x78&x79))-x80);

    if (t16 != 2U) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x81 = INT16_MIN;
	int16_t x83 = 1;
	int8_t x84 = INT8_MAX;
	static volatile int32_t t17 = -3;

    t17 = ((x81>(x82&x83))-x84);

    if (t17 != -127) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x85 = INT16_MIN;
	int16_t x87 = -12631;
	uint32_t x88 = UINT32_MAX;

    t18 = ((x85>(x86&x87))-x88);

    if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x89 = INT8_MAX;
	static int32_t x90 = -1;
	volatile int64_t x91 = INT64_MIN;
	volatile int32_t t19 = 5521;

    t19 = ((x89>(x90&x91))-x92);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x93 = 20455863;
	int64_t x94 = 7748LL;
	int64_t x95 = 221096418925134507LL;
	int8_t x96 = INT8_MIN;
	static int32_t t20 = -1350;

    t20 = ((x93>(x94&x95))-x96);

    if (t20 != 129) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int8_t x97 = -1;
	uint16_t x98 = UINT16_MAX;
	static int16_t x100 = INT16_MIN;
	int32_t t21 = -1603;

    t21 = ((x97>(x98&x99))-x100);

    if (t21 != 32768) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x101 = INT8_MIN;
	volatile uint16_t x102 = UINT16_MAX;
	uint64_t x103 = 16481LLU;
	static int32_t x104 = INT32_MAX;
	int32_t t22 = -5997;

    t22 = ((x101>(x102&x103))-x104);

    if (t22 != -2147483646) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x106 = 1;
	volatile int32_t t23 = 889;

    t23 = ((x105>(x106&x107))-x108);

    if (t23 != 32769) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x109 = 3223068744699819LLU;
	static uint64_t x110 = 14890758157628266LLU;
	uint8_t x111 = 40U;
	int8_t x112 = INT8_MAX;

    t24 = ((x109>(x110&x111))-x112);

    if (t24 != -126) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x113 = INT8_MIN;
	int16_t x115 = INT16_MIN;
	volatile int8_t x116 = INT8_MAX;
	volatile int32_t t25 = 3766687;

    t25 = ((x113>(x114&x115))-x116);

    if (t25 != -127) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x117 = 0;
	static int64_t x118 = INT64_MIN;
	static int8_t x119 = INT8_MAX;
	uint8_t x120 = UINT8_MAX;

    t26 = ((x117>(x118&x119))-x120);

    if (t26 != -255) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x121 = INT16_MIN;
	int32_t t27 = -40;

    t27 = ((x121>(x122&x123))-x124);

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint16_t x125 = UINT16_MAX;
	uint16_t x126 = UINT16_MAX;
	uint64_t x127 = 33389541772LLU;
	volatile int32_t t28 = -93;

    t28 = ((x125>(x126&x127))-x128);

    if (t28 != -2147483646) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x129 = -1590;
	int64_t x130 = -1LL;
	int32_t t29 = -1;

    t29 = ((x129>(x130&x131))-x132);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x133 = -1;
	volatile int32_t x134 = INT32_MIN;
	int64_t x135 = -850780577829LL;
	volatile int32_t t30 = 0;

    t30 = ((x133>(x134&x135))-x136);

    if (t30 != -15) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x137 = 165LL;
	volatile uint64_t x138 = UINT64_MAX;
	int8_t x140 = INT8_MIN;

    t31 = ((x137>(x138&x139))-x140);

    if (t31 != 128) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x142 = -1LL;
	int64_t x143 = INT64_MIN;
	static int8_t x144 = INT8_MAX;
	volatile int32_t t32 = 1358;

    t32 = ((x141>(x142&x143))-x144);

    if (t32 != -126) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x145 = 12279U;
	volatile int16_t x146 = 4;
	int8_t x147 = INT8_MIN;
	static uint32_t x148 = 130152174U;

    t33 = ((x145>(x146&x147))-x148);

    if (t33 != 4164815123U) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x149 = INT8_MAX;
	static int16_t x150 = INT16_MAX;
	volatile int16_t x151 = -2335;
	uint64_t x152 = 933674169LLU;

    t34 = ((x149>(x150&x151))-x152);

    if (t34 != 18446744072775877447LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x153 = INT16_MAX;
	int32_t x154 = INT32_MIN;
	static int16_t x156 = INT16_MIN;
	volatile int32_t t35 = -26088819;

    t35 = ((x153>(x154&x155))-x156);

    if (t35 != 32769) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x157 = -1;
	int16_t x158 = -879;
	int32_t x159 = -1;
	int32_t t36 = 40675;

    t36 = ((x157>(x158&x159))-x160);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x161 = INT64_MIN;
	int8_t x162 = INT8_MIN;
	static int16_t x164 = INT16_MIN;
	int32_t t37 = -455947;

    t37 = ((x161>(x162&x163))-x164);

    if (t37 != 32768) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x165 = INT16_MAX;
	uint64_t x166 = 247062496657098009LLU;
	volatile uint32_t x168 = 11617351U;
	uint32_t t38 = 996570U;

    t38 = ((x165>(x166&x167))-x168);

    if (t38 != 4283349946U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x177 = 2U;
	uint16_t x178 = 962U;
	static int32_t x179 = INT32_MAX;
	int64_t x180 = 11059518LL;
	volatile int64_t t39 = -54098954132LL;

    t39 = ((x177>(x178&x179))-x180);

    if (t39 != -11059518LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint64_t x181 = UINT64_MAX;
	static int64_t x182 = 64355LL;
	int64_t x183 = -4404738688265087LL;
	static int8_t x184 = INT8_MIN;

    t40 = ((x181>(x182&x183))-x184);

    if (t40 != 129) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x185 = 4165630423273339534LLU;
	int16_t x187 = 1;
	uint32_t x188 = UINT32_MAX;

    t41 = ((x185>(x186&x187))-x188);

    if (t41 != 2U) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x190 = INT64_MAX;
	int16_t x191 = -1;
	volatile int32_t x192 = INT32_MAX;
	static int32_t t42 = 47611224;

    t42 = ((x189>(x190&x191))-x192);

    if (t42 != -2147483647) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x193 = 988165LL;
	volatile int8_t x195 = -23;
	int32_t x196 = 97766063;
	volatile int32_t t43 = -1164214;

    t43 = ((x193>(x194&x195))-x196);

    if (t43 != -97766062) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x197 = -1;
	int16_t x198 = 978;
	static volatile int8_t x199 = -1;
	volatile int32_t t44 = -60;

    t44 = ((x197>(x198&x199))-x200);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x201 = -15;
	uint16_t x202 = UINT16_MAX;
	int32_t x203 = INT32_MAX;
	static int32_t t45 = 653;

    t45 = ((x201>(x202&x203))-x204);

    if (t45 != 128) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x205 = INT32_MIN;
	static uint32_t x206 = 572126U;
	uint8_t x207 = UINT8_MAX;
	uint32_t x208 = UINT32_MAX;
	volatile uint32_t t46 = 23U;

    t46 = ((x205>(x206&x207))-x208);

    if (t46 != 2U) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x209 = INT16_MIN;
	int32_t x210 = -1;
	volatile int8_t x212 = INT8_MIN;
	int32_t t47 = 409;

    t47 = ((x209>(x210&x211))-x212);

    if (t47 != 128) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x213 = 4;
	uint8_t x214 = 1U;
	int64_t x216 = INT64_MAX;

    t48 = ((x213>(x214&x215))-x216);

    if (t48 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x217 = UINT32_MAX;
	int8_t x219 = 17;
	uint8_t x220 = 31U;
	volatile int32_t t49 = 299580;

    t49 = ((x217>(x218&x219))-x220);

    if (t49 != -30) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x225 = -1;
	volatile int64_t x226 = INT64_MAX;
	int32_t x227 = INT32_MIN;
	uint32_t x228 = 625838697U;
	static volatile uint32_t t50 = 1016760U;

    t50 = ((x225>(x226&x227))-x228);

    if (t50 != 3669128599U) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x229 = -57;
	static int32_t x230 = INT32_MIN;
	int64_t x231 = INT64_MIN;
	volatile int32_t t51 = -40;

    t51 = ((x229>(x230&x231))-x232);

    if (t51 != 32769) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x233 = UINT16_MAX;
	uint64_t x234 = UINT64_MAX;
	uint16_t x235 = 760U;
	int16_t x236 = INT16_MIN;
	volatile int32_t t52 = 158454458;

    t52 = ((x233>(x234&x235))-x236);

    if (t52 != 32769) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x237 = INT16_MIN;
	uint32_t x239 = 44239U;
	int16_t x240 = 0;
	volatile int32_t t53 = 41;

    t53 = ((x237>(x238&x239))-x240);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x242 = INT8_MIN;
	static volatile int8_t x243 = INT8_MIN;
	volatile int64_t x244 = -1LL;

    t54 = ((x241>(x242&x243))-x244);

    if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x248 = INT16_MIN;
	int32_t t55 = -89366;

    t55 = ((x245>(x246&x247))-x248);

    if (t55 != 32769) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x249 = 3;
	int32_t x250 = 22370;
	static int32_t x251 = -1;
	volatile int16_t x252 = INT16_MIN;
	volatile int32_t t56 = -3;

    t56 = ((x249>(x250&x251))-x252);

    if (t56 != 32768) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x257 = INT32_MIN;
	static volatile int8_t x258 = INT8_MIN;
	uint32_t x259 = 875477U;
	int8_t x260 = -1;
	volatile int32_t t57 = 297479;

    t57 = ((x257>(x258&x259))-x260);

    if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x265 = -1LL;
	static int64_t x266 = -312236003495376LL;
	uint32_t x267 = 11376823U;
	uint8_t x268 = 47U;
	int32_t t58 = 56255;

    t58 = ((x265>(x266&x267))-x268);

    if (t58 != -47) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x271 = INT64_MIN;
	int32_t x272 = -799166;
	volatile int32_t t59 = -1;

    t59 = ((x269>(x270&x271))-x272);

    if (t59 != 799166) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x273 = INT8_MIN;
	int16_t x274 = -1;
	uint64_t x275 = 1061814923575452813LLU;
	uint8_t x276 = 2U;
	volatile int32_t t60 = 2370;

    t60 = ((x273>(x274&x275))-x276);

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x277 = INT16_MAX;
	int8_t x278 = -1;
	uint64_t t61 = 369831291LLU;

    t61 = ((x277>(x278&x279))-x280);

    if (t61 != 18446744073318056678LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x287 = -1;
	int16_t x288 = INT16_MIN;
	int32_t t62 = 4;

    t62 = ((x285>(x286&x287))-x288);

    if (t62 != 32769) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x291 = -1;
	uint16_t x292 = 57U;
	int32_t t63 = 0;

    t63 = ((x289>(x290&x291))-x292);

    if (t63 != -56) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x293 = UINT64_MAX;
	volatile int64_t x294 = INT64_MAX;
	volatile uint64_t x295 = UINT64_MAX;
	int16_t x296 = -1;

    t64 = ((x293>(x294&x295))-x296);

    if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x297 = UINT8_MAX;
	volatile int32_t x298 = INT32_MAX;
	uint32_t x300 = 235U;
	uint32_t t65 = 228U;

    t65 = ((x297>(x298&x299))-x300);

    if (t65 != 4294967062U) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x301 = -1;
	uint32_t x303 = 429915149U;
	static int8_t x304 = -21;

    t66 = ((x301>(x302&x303))-x304);

    if (t66 != 22) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x305 = 62U;
	int8_t x306 = INT8_MIN;
	uint16_t x308 = 226U;
	static volatile int32_t t67 = 897;

    t67 = ((x305>(x306&x307))-x308);

    if (t67 != -225) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x309 = 4184647086584587LLU;
	uint64_t x311 = 84300847831520382LLU;
	int32_t x312 = -61262;
	static int32_t t68 = 1;

    t68 = ((x309>(x310&x311))-x312);

    if (t68 != 61262) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x313 = UINT16_MAX;
	uint8_t x314 = UINT8_MAX;
	uint64_t x316 = 4984628LLU;

    t69 = ((x313>(x314&x315))-x316);

    if (t69 != 18446744073704566989LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x317 = INT32_MIN;
	static volatile int64_t x318 = -1LL;
	uint8_t x320 = 8U;
	int32_t t70 = -26059742;

    t70 = ((x317>(x318&x319))-x320);

    if (t70 != -8) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x321 = 406230508;
	uint16_t x324 = UINT16_MAX;
	volatile int32_t t71 = 1697;

    t71 = ((x321>(x322&x323))-x324);

    if (t71 != -65534) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x325 = 3U;
	int32_t x326 = INT32_MIN;
	uint8_t x327 = UINT8_MAX;
	volatile int32_t t72 = 0;

    t72 = ((x325>(x326&x327))-x328);

    if (t72 != -254) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x329 = 1;
	int64_t x330 = INT64_MIN;
	static int32_t x331 = 10075;
	volatile int32_t t73 = 122;

    t73 = ((x329>(x330&x331))-x332);

    if (t73 != -126) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x333 = UINT16_MAX;
	volatile uint64_t x334 = UINT64_MAX;
	uint32_t x335 = 278810660U;
	int64_t x336 = -1LL;

    t74 = ((x333>(x334&x335))-x336);

    if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x341 = 395;
	static volatile int32_t x342 = INT32_MIN;
	volatile int16_t x343 = -1;
	int32_t x344 = 394989;
	int32_t t75 = 0;

    t75 = ((x341>(x342&x343))-x344);

    if (t75 != -394988) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x347 = 692247430U;
	uint16_t x348 = 5680U;
	int32_t t76 = -1892;

    t76 = ((x345>(x346&x347))-x348);

    if (t76 != -5679) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x350 = INT8_MIN;
	volatile uint32_t x351 = UINT32_MAX;
	int32_t x352 = -1;

    t77 = ((x349>(x350&x351))-x352);

    if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x357 = 0U;
	uint64_t x358 = 14215550375445LLU;
	int64_t x359 = INT64_MAX;
	uint64_t x360 = 67297839842LLU;
	volatile uint64_t t78 = 1504333209301999LLU;

    t78 = ((x357>(x358&x359))-x360);

    if (t78 != 18446744006411711774LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x365 = INT16_MAX;
	uint8_t x367 = 0U;
	uint32_t t79 = 0U;

    t79 = ((x365>(x366&x367))-x368);

    if (t79 != 4247639905U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x369 = 7983269U;
	int64_t x370 = INT64_MIN;
	uint8_t x371 = UINT8_MAX;
	int64_t x372 = -814029LL;
	volatile int64_t t80 = 62LL;

    t80 = ((x369>(x370&x371))-x372);

    if (t80 != 814030LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x374 = 13286435510LLU;
	volatile int32_t x375 = -231446671;
	static volatile int8_t x376 = -1;
	static int32_t t81 = -123;

    t81 = ((x373>(x374&x375))-x376);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x377 = INT8_MIN;
	static uint32_t x378 = 839997U;
	static uint16_t x379 = 433U;
	int32_t x380 = -1;

    t82 = ((x377>(x378&x379))-x380);

    if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x381 = UINT64_MAX;
	int8_t x382 = INT8_MIN;
	int16_t x384 = -1;
	volatile int32_t t83 = 1946;

    t83 = ((x381>(x382&x383))-x384);

    if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x386 = 34068771562770LLU;
	int64_t x387 = -1LL;
	static int16_t x388 = -1;
	volatile int32_t t84 = 3507;

    t84 = ((x385>(x386&x387))-x388);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x389 = 38LLU;
	volatile uint32_t x390 = 16729570U;
	int64_t x391 = INT64_MIN;
	uint8_t x392 = UINT8_MAX;
	int32_t t85 = -30829089;

    t85 = ((x389>(x390&x391))-x392);

    if (t85 != -254) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x394 = -1;
	static uint16_t x395 = 7U;
	uint16_t x396 = 520U;

    t86 = ((x393>(x394&x395))-x396);

    if (t86 != -520) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x397 = 1LL;
	uint64_t x398 = UINT64_MAX;
	int32_t x399 = -1;
	static int32_t t87 = 58485761;

    t87 = ((x397>(x398&x399))-x400);

    if (t87 != -2147483647) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x401 = INT64_MAX;
	volatile int32_t x402 = INT32_MAX;
	int64_t x404 = INT64_MAX;

    t88 = ((x401>(x402&x403))-x404);

    if (t88 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x405 = UINT32_MAX;
	volatile int16_t x406 = 3627;
	int32_t x407 = INT32_MAX;
	static volatile int32_t t89 = -6813236;

    t89 = ((x405>(x406&x407))-x408);

    if (t89 != -489391) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x409 = INT32_MIN;
	int32_t x411 = INT32_MAX;
	static int64_t x412 = INT64_MAX;

    t90 = ((x409>(x410&x411))-x412);

    if (t90 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x414 = UINT64_MAX;
	int32_t x415 = INT32_MIN;
	int32_t x416 = 1;

    t91 = ((x413>(x414&x415))-x416);

    if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x417 = INT64_MIN;
	uint16_t x418 = 3U;
	int16_t x419 = -1;
	static int32_t x420 = INT32_MAX;
	static int32_t t92 = 67003782;

    t92 = ((x417>(x418&x419))-x420);

    if (t92 != -2147483647) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x421 = INT16_MAX;
	int32_t x422 = -410;
	static int16_t x424 = 2;
	volatile int32_t t93 = -871;

    t93 = ((x421>(x422&x423))-x424);

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x426 = INT8_MAX;
	int64_t x427 = 1567335038150598487LL;
	int16_t x428 = INT16_MIN;
	volatile int32_t t94 = -97;

    t94 = ((x425>(x426&x427))-x428);

    if (t94 != 32769) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x429 = INT8_MAX;
	int16_t x432 = INT16_MAX;
	static int32_t t95 = 215865;

    t95 = ((x429>(x430&x431))-x432);

    if (t95 != -32767) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x433 = INT32_MIN;
	static uint64_t x435 = 105008334610LLU;
	int32_t x436 = -1;
	int32_t t96 = 1114;

    t96 = ((x433>(x434&x435))-x436);

    if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x437 = -1;
	int64_t x438 = -5102821739LL;
	static int16_t x439 = INT16_MAX;
	volatile int8_t x440 = 1;
	int32_t t97 = -493;

    t97 = ((x437>(x438&x439))-x440);

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int64_t x441 = INT64_MAX;
	static uint32_t x443 = 1010U;
	int32_t t98 = -1;

    t98 = ((x441>(x442&x443))-x444);

    if (t98 != -10572) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int32_t x446 = -1;
	static uint64_t x448 = 258LLU;

    t99 = ((x445>(x446&x447))-x448);

    if (t99 != 18446744073709551358LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x449 = 4059416141LLU;
	static int64_t x450 = INT64_MIN;
	volatile uint64_t x451 = UINT64_MAX;
	int16_t x452 = 398;
	int32_t t100 = -1119606;

    t100 = ((x449>(x450&x451))-x452);

    if (t100 != -398) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x453 = INT16_MAX;
	int64_t x455 = -1LL;
	static int8_t x456 = INT8_MAX;
	static int32_t t101 = -645810448;

    t101 = ((x453>(x454&x455))-x456);

    if (t101 != -126) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x457 = 14;
	int64_t x458 = INT64_MAX;
	int64_t x459 = 2693068984907864309LL;
	static int16_t x460 = INT16_MIN;
	int32_t t102 = 232963496;

    t102 = ((x457>(x458&x459))-x460);

    if (t102 != 32768) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x461 = INT32_MAX;
	uint64_t x462 = 247LLU;
	uint64_t x463 = UINT64_MAX;
	int16_t x464 = INT16_MAX;
	static int32_t t103 = -125728689;

    t103 = ((x461>(x462&x463))-x464);

    if (t103 != -32766) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x465 = 116U;
	volatile int32_t x467 = INT32_MIN;
	int32_t t104 = 80169458;

    t104 = ((x465>(x466&x467))-x468);

    if (t104 != -65534) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x469 = 84U;
	uint8_t x472 = 0U;
	int32_t t105 = -328231484;

    t105 = ((x469>(x470&x471))-x472);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x473 = INT8_MAX;
	static uint64_t x475 = 126428LLU;
	volatile uint8_t x476 = 6U;
	int32_t t106 = 21508659;

    t106 = ((x473>(x474&x475))-x476);

    if (t106 != -6) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x477 = UINT16_MAX;
	int8_t x478 = -1;
	volatile int8_t x479 = INT8_MIN;
	int32_t t107 = 3968;

    t107 = ((x477>(x478&x479))-x480);

    if (t107 != 2) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x481 = INT32_MIN;
	uint16_t x482 = UINT16_MAX;
	int8_t x483 = INT8_MAX;
	int16_t x484 = INT16_MAX;

    t108 = ((x481>(x482&x483))-x484);

    if (t108 != -32767) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x485 = -1LL;
	int16_t x486 = -1;
	static uint64_t x487 = 2221091804373847315LLU;

    t109 = ((x485>(x486&x487))-x488);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x489 = 1431;
	uint16_t x490 = 51U;
	int16_t x492 = 1677;
	volatile int32_t t110 = -2;

    t110 = ((x489>(x490&x491))-x492);

    if (t110 != -1676) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x493 = INT16_MIN;
	volatile int8_t x496 = -1;
	static volatile int32_t t111 = 22173321;

    t111 = ((x493>(x494&x495))-x496);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x497 = UINT16_MAX;
	int32_t x498 = 2;
	static int8_t x499 = 18;
	volatile uint64_t t112 = 3536528LLU;

    t112 = ((x497>(x498&x499))-x500);

    if (t112 != 2LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x501 = 1LL;
	int64_t x502 = INT64_MIN;
	static int16_t x503 = 4693;
	static int64_t x504 = INT64_MAX;
	int64_t t113 = 2911451411955LL;

    t113 = ((x501>(x502&x503))-x504);

    if (t113 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x505 = INT64_MIN;
	static int8_t x507 = INT8_MIN;
	uint8_t x508 = 0U;
	volatile int32_t t114 = 168569;

    t114 = ((x505>(x506&x507))-x508);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x509 = 103LL;
	int16_t x511 = INT16_MIN;
	volatile int32_t x512 = -15060;
	static int32_t t115 = -30302;

    t115 = ((x509>(x510&x511))-x512);

    if (t115 != 15061) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x517 = INT8_MIN;
	int8_t x518 = 5;
	int32_t x519 = INT32_MIN;
	volatile int64_t x520 = -10810975281LL;
	int64_t t116 = -5LL;

    t116 = ((x517>(x518&x519))-x520);

    if (t116 != 10810975281LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x522 = -54;
	int64_t x523 = INT64_MAX;
	static int8_t x524 = -1;
	static volatile int32_t t117 = -61557642;

    t117 = ((x521>(x522&x523))-x524);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x525 = INT16_MIN;
	volatile int16_t x527 = INT16_MIN;
	uint16_t x528 = 9077U;

    t118 = ((x525>(x526&x527))-x528);

    if (t118 != -9076) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x529 = INT8_MAX;
	volatile int8_t x530 = 0;
	int16_t x531 = INT16_MIN;
	int16_t x532 = INT16_MIN;
	volatile int32_t t119 = 28460258;

    t119 = ((x529>(x530&x531))-x532);

    if (t119 != 32769) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x533 = -1LL;
	uint8_t x534 = UINT8_MAX;
	volatile uint8_t x536 = UINT8_MAX;
	volatile int32_t t120 = 7;

    t120 = ((x533>(x534&x535))-x536);

    if (t120 != -255) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x537 = -1;
	int16_t x538 = 252;
	static uint8_t x539 = 75U;
	int8_t x540 = -1;
	volatile int32_t t121 = -552;

    t121 = ((x537>(x538&x539))-x540);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x541 = 5U;
	int32_t x542 = -1;
	volatile int32_t x543 = INT32_MAX;
	int8_t x544 = -1;
	static volatile int32_t t122 = -246071;

    t122 = ((x541>(x542&x543))-x544);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x545 = 64064443LLU;
	uint32_t x547 = 1322747567U;
	static int16_t x548 = INT16_MAX;
	static int32_t t123 = 55594;

    t123 = ((x545>(x546&x547))-x548);

    if (t123 != -32766) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x549 = INT32_MIN;
	int32_t x550 = -1;
	int16_t x551 = INT16_MIN;
	uint32_t t124 = 1495980U;

    t124 = ((x549>(x550&x551))-x552);

    if (t124 != 1U) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint32_t x553 = 61U;
	volatile uint16_t x554 = UINT16_MAX;
	int8_t x556 = -1;
	int32_t t125 = 0;

    t125 = ((x553>(x554&x555))-x556);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x557 = INT16_MAX;
	volatile uint64_t x558 = 608860666112944774LLU;
	uint64_t x559 = 22LLU;
	volatile int32_t t126 = -22787754;

    t126 = ((x557>(x558&x559))-x560);

    if (t126 != 32769) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int16_t x561 = -1;
	int16_t x562 = -122;
	volatile int64_t x563 = 44566926LL;
	int8_t x564 = INT8_MIN;

    t127 = ((x561>(x562&x563))-x564);

    if (t127 != 128) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x565 = -1;
	int8_t x566 = INT8_MIN;
	static int16_t x568 = -3652;

    t128 = ((x565>(x566&x567))-x568);

    if (t128 != 3652) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x570 = -18523846059727LL;
	volatile uint32_t x571 = 1281052804U;
	static uint64_t x572 = UINT64_MAX;
	uint64_t t129 = 30657050091589LLU;

    t129 = ((x569>(x570&x571))-x572);

    if (t129 != 1LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x577 = 19423721079898LLU;
	uint64_t x578 = 42941931943141263LLU;
	static volatile uint32_t x580 = UINT32_MAX;
	volatile uint32_t t130 = 707U;

    t130 = ((x577>(x578&x579))-x580);

    if (t130 != 2U) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x581 = INT32_MAX;
	uint8_t x582 = UINT8_MAX;
	int64_t x583 = -1LL;
	int32_t x584 = INT32_MAX;

    t131 = ((x581>(x582&x583))-x584);

    if (t131 != -2147483646) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x585 = -1;
	int32_t x586 = INT32_MIN;
	volatile int8_t x587 = 28;
	int64_t x588 = -16501669209758LL;
	int64_t t132 = 5645990648917LL;

    t132 = ((x585>(x586&x587))-x588);

    if (t132 != 16501669209758LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x593 = INT8_MAX;
	int64_t x596 = -47006108LL;

    t133 = ((x593>(x594&x595))-x596);

    if (t133 != 47006109LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x597 = -11;
	static uint16_t x598 = UINT16_MAX;
	int16_t x600 = INT16_MIN;
	volatile int32_t t134 = -29;

    t134 = ((x597>(x598&x599))-x600);

    if (t134 != 32769) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x601 = INT8_MAX;
	int8_t x604 = 14;

    t135 = ((x601>(x602&x603))-x604);

    if (t135 != -13) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x605 = INT64_MIN;
	volatile uint32_t x606 = UINT32_MAX;
	volatile uint16_t x608 = UINT16_MAX;

    t136 = ((x605>(x606&x607))-x608);

    if (t136 != -65535) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint64_t x609 = UINT64_MAX;
	int32_t x610 = INT32_MIN;
	volatile uint8_t x611 = UINT8_MAX;

    t137 = ((x609>(x610&x611))-x612);

    if (t137 != -82) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x613 = INT8_MIN;
	int64_t x614 = -1713909247277679569LL;
	static uint32_t x615 = 734361810U;
	static int32_t t138 = -3515;

    t138 = ((x613>(x614&x615))-x616);

    if (t138 != -127) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x617 = 5484LLU;
	uint32_t x618 = 63313U;
	int64_t x620 = 190140337361140LL;
	volatile int64_t t139 = 203623708LL;

    t139 = ((x617>(x618&x619))-x620);

    if (t139 != -190140337361140LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x621 = INT32_MIN;
	int32_t x622 = INT32_MIN;
	static int8_t x623 = INT8_MIN;
	volatile uint8_t x624 = UINT8_MAX;
	int32_t t140 = 96;

    t140 = ((x621>(x622&x623))-x624);

    if (t140 != -255) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint16_t x625 = 1U;

    t141 = ((x625>(x626&x627))-x628);

    if (t141 != -13304) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x630 = UINT32_MAX;
	int32_t x631 = INT32_MAX;
	volatile int8_t x632 = -1;
	volatile int32_t t142 = 53514010;

    t142 = ((x629>(x630&x631))-x632);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x633 = -1;
	volatile uint64_t x635 = UINT64_MAX;
	volatile int64_t x636 = -1LL;
	static int64_t t143 = 669486757580LL;

    t143 = ((x633>(x634&x635))-x636);

    if (t143 != 2LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x637 = 0;
	static volatile int8_t x638 = INT8_MIN;
	int32_t x639 = -1;
	int8_t x640 = INT8_MIN;

    t144 = ((x637>(x638&x639))-x640);

    if (t144 != 129) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x641 = -11;
	int8_t x642 = -5;
	uint16_t x643 = 137U;
	volatile int64_t x644 = INT64_MAX;
	static volatile int64_t t145 = 426453LL;

    t145 = ((x641>(x642&x643))-x644);

    if (t145 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x645 = INT64_MIN;
	uint64_t x646 = UINT64_MAX;
	int16_t x647 = INT16_MIN;
	uint32_t x648 = 6U;
	static volatile uint32_t t146 = 65U;

    t146 = ((x645>(x646&x647))-x648);

    if (t146 != 4294967290U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x649 = UINT32_MAX;
	int16_t x650 = INT16_MIN;
	int32_t x651 = INT32_MIN;
	static int32_t x652 = INT32_MAX;
	int32_t t147 = 455;

    t147 = ((x649>(x650&x651))-x652);

    if (t147 != -2147483646) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x653 = 13612969;
	uint16_t x654 = 490U;
	int64_t x655 = -471572899913720075LL;
	volatile uint64_t x656 = 31076865571725LLU;
	static uint64_t t148 = 320173386366431LLU;

    t148 = ((x653>(x654&x655))-x656);

    if (t148 != 18446712996843979892LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint8_t x658 = 6U;
	static volatile uint32_t x659 = 28U;
	int64_t x660 = 262108792061LL;
	volatile int64_t t149 = 10859293845997518LL;

    t149 = ((x657>(x658&x659))-x660);

    if (t149 != -262108792060LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint64_t x663 = 1361872LLU;
	int16_t x664 = INT16_MAX;
	static int32_t t150 = 2765;

    t150 = ((x661>(x662&x663))-x664);

    if (t150 != -32766) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x669 = UINT64_MAX;
	int16_t x670 = -1873;
	volatile int8_t x671 = INT8_MIN;
	uint16_t x672 = 0U;
	volatile int32_t t151 = -5102549;

    t151 = ((x669>(x670&x671))-x672);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x673 = INT64_MIN;
	volatile int16_t x674 = -29;
	uint8_t x675 = 5U;
	int16_t x676 = INT16_MIN;
	int32_t t152 = -1;

    t152 = ((x673>(x674&x675))-x676);

    if (t152 != 32768) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x677 = -100;
	int8_t x678 = INT8_MIN;
	uint8_t x679 = UINT8_MAX;
	volatile int16_t x680 = 1;

    t153 = ((x677>(x678&x679))-x680);

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x685 = UINT32_MAX;
	int16_t x686 = 3;
	uint16_t x687 = UINT16_MAX;
	static int16_t x688 = -830;

    t154 = ((x685>(x686&x687))-x688);

    if (t154 != 831) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x689 = UINT8_MAX;
	int16_t x691 = INT16_MIN;
	uint16_t x692 = 479U;
	int32_t t155 = 877499;

    t155 = ((x689>(x690&x691))-x692);

    if (t155 != -478) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x693 = UINT16_MAX;
	int8_t x694 = INT8_MIN;
	int8_t x695 = INT8_MIN;
	uint64_t x696 = UINT64_MAX;
	uint64_t t156 = 34425510511LLU;

    t156 = ((x693>(x694&x695))-x696);

    if (t156 != 2LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x697 = -1;
	volatile int16_t x698 = INT16_MIN;
	static int16_t x699 = INT16_MIN;
	volatile int32_t t157 = -1365;

    t157 = ((x697>(x698&x699))-x700);

    if (t157 != -13) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x701 = INT8_MIN;
	int8_t x702 = INT8_MIN;
	int32_t x703 = INT32_MIN;
	uint64_t x704 = 47078631LLU;

    t158 = ((x701>(x702&x703))-x704);

    if (t158 != 18446744073662472986LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x705 = INT32_MIN;
	int64_t x706 = -236002961398LL;
	uint64_t x707 = 58528747915847172LLU;
	int64_t x708 = -1LL;
	int64_t t159 = -5811562279LL;

    t159 = ((x705>(x706&x707))-x708);

    if (t159 != 2LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x709 = UINT8_MAX;
	volatile uint64_t x710 = 3500LLU;
	int64_t x711 = 243366403940LL;
	uint32_t x712 = UINT32_MAX;
	uint32_t t160 = 103U;

    t160 = ((x709>(x710&x711))-x712);

    if (t160 != 1U) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x713 = INT16_MIN;
	static uint32_t x714 = 112741894U;
	int16_t x715 = INT16_MIN;
	int8_t x716 = INT8_MAX;
	int32_t t161 = -4;

    t161 = ((x713>(x714&x715))-x716);

    if (t161 != -126) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x717 = -1;
	static uint16_t x718 = 1U;
	volatile int64_t x719 = INT64_MIN;
	static int32_t x720 = -1;
	volatile int32_t t162 = -329075;

    t162 = ((x717>(x718&x719))-x720);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x721 = -20632662LL;
	int16_t x722 = -42;
	uint16_t x723 = UINT16_MAX;
	int8_t x724 = 11;

    t163 = ((x721>(x722&x723))-x724);

    if (t163 != -11) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x725 = INT32_MIN;
	static volatile int8_t x726 = INT8_MIN;
	int16_t x728 = -1;
	int32_t t164 = -2;

    t164 = ((x725>(x726&x727))-x728);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x733 = 440459156027LL;
	volatile int32_t x734 = -1;
	int16_t x735 = -1;
	uint16_t x736 = 95U;
	volatile int32_t t165 = -6533708;

    t165 = ((x733>(x734&x735))-x736);

    if (t165 != -94) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x737 = INT64_MAX;
	uint8_t x738 = 23U;
	uint16_t x739 = 0U;
	int8_t x740 = INT8_MIN;

    t166 = ((x737>(x738&x739))-x740);

    if (t166 != 129) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x741 = INT32_MIN;
	static uint8_t x742 = UINT8_MAX;
	static uint32_t x743 = 8U;
	volatile int32_t t167 = 242740;

    t167 = ((x741>(x742&x743))-x744);

    if (t167 != -55) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x745 = 0U;
	int8_t x747 = INT8_MAX;
	uint16_t x748 = 6449U;
	static volatile int32_t t168 = -734509502;

    t168 = ((x745>(x746&x747))-x748);

    if (t168 != -6449) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x749 = INT32_MAX;
	uint64_t x750 = 197129455LLU;
	uint8_t x751 = UINT8_MAX;
	static int32_t x752 = INT32_MAX;

    t169 = ((x749>(x750&x751))-x752);

    if (t169 != -2147483646) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x753 = INT64_MAX;
	int32_t x754 = 4;
	int16_t x755 = -1;
	uint8_t x756 = 2U;

    t170 = ((x753>(x754&x755))-x756);

    if (t170 != -1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x757 = -49;
	int16_t x758 = INT16_MIN;
	int8_t x759 = -3;
	int16_t x760 = INT16_MAX;
	static volatile int32_t t171 = -208408;

    t171 = ((x757>(x758&x759))-x760);

    if (t171 != -32766) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x761 = 575321LLU;
	uint16_t x762 = 3559U;
	int32_t x763 = -1582366;
	uint8_t x764 = 1U;
	static volatile int32_t t172 = -1;

    t172 = ((x761>(x762&x763))-x764);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint8_t x765 = 54U;
	int8_t x766 = -1;
	int64_t x767 = -348340994076LL;
	static volatile uint32_t x768 = 8U;
	volatile uint32_t t173 = 181869574U;

    t173 = ((x765>(x766&x767))-x768);

    if (t173 != 4294967289U) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x769 = -235295813884898277LL;
	volatile int64_t x770 = INT64_MIN;
	static volatile uint32_t x771 = UINT32_MAX;
	int64_t x772 = -1LL;
	int64_t t174 = -24LL;

    t174 = ((x769>(x770&x771))-x772);

    if (t174 != 1LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x773 = UINT64_MAX;
	volatile uint16_t x774 = UINT16_MAX;
	volatile uint8_t x775 = 19U;
	uint16_t x776 = 15279U;

    t175 = ((x773>(x774&x775))-x776);

    if (t175 != -15278) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint16_t x777 = 27552U;
	uint32_t x778 = UINT32_MAX;
	int8_t x779 = 0;
	volatile int32_t t176 = -43702;

    t176 = ((x777>(x778&x779))-x780);

    if (t176 != -65534) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x782 = 6U;
	int16_t x783 = 16085;
	static uint64_t x784 = 1905571952463LLU;

    t177 = ((x781>(x782&x783))-x784);

    if (t177 != 18446742168137599154LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x789 = UINT64_MAX;
	static int16_t x790 = 5;
	int16_t x792 = 0;
	static int32_t t178 = -7258;

    t178 = ((x789>(x790&x791))-x792);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x797 = INT8_MIN;
	int16_t x798 = INT16_MIN;
	static uint64_t x799 = UINT64_MAX;
	int32_t t179 = 423450;

    t179 = ((x797>(x798&x799))-x800);

    if (t179 != 520) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x801 = -1;
	int16_t x802 = 1194;
	volatile int32_t x803 = -828330;
	int8_t x804 = INT8_MIN;
	int32_t t180 = 11;

    t180 = ((x801>(x802&x803))-x804);

    if (t180 != 128) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x805 = INT8_MIN;
	static int8_t x806 = INT8_MIN;
	uint32_t t181 = 11933U;

    t181 = ((x805>(x806&x807))-x808);

    if (t181 != 1U) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x810 = INT16_MIN;
	static int8_t x811 = -35;
	uint32_t x812 = 7U;

    t182 = ((x809>(x810&x811))-x812);

    if (t182 != 4294967290U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x813 = UINT16_MAX;
	int64_t x814 = 1011833678109LL;
	int16_t x815 = -8;
	int64_t t183 = -986567115776834LL;

    t183 = ((x813>(x814&x815))-x816);

    if (t183 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x817 = 9537139U;
	static int8_t x818 = 31;
	static int32_t x819 = INT32_MIN;
	uint8_t x820 = 1U;
	volatile int32_t t184 = -5475318;

    t184 = ((x817>(x818&x819))-x820);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x821 = 47842U;
	int64_t x822 = INT64_MAX;
	int32_t x823 = -46;
	int64_t x824 = INT64_MAX;
	int64_t t185 = -11611121192LL;

    t185 = ((x821>(x822&x823))-x824);

    if (t185 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x825 = -1;
	int32_t x827 = -1;
	volatile int16_t x828 = -1;

    t186 = ((x825>(x826&x827))-x828);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x830 = INT16_MAX;
	int64_t x831 = INT64_MIN;
	int32_t t187 = -317606408;

    t187 = ((x829>(x830&x831))-x832);

    if (t187 != 112) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x833 = INT32_MIN;
	int16_t x834 = INT16_MIN;
	volatile int16_t x836 = -1;
	static volatile int32_t t188 = 3153285;

    t188 = ((x833>(x834&x835))-x836);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x837 = INT16_MIN;
	volatile uint32_t x838 = 24U;
	int64_t x839 = INT64_MAX;
	static int16_t x840 = INT16_MIN;

    t189 = ((x837>(x838&x839))-x840);

    if (t189 != 32768) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x841 = UINT32_MAX;
	volatile int64_t x842 = -1LL;
	int16_t x843 = INT16_MIN;
	int32_t t190 = 110;

    t190 = ((x841>(x842&x843))-x844);

    if (t190 != 2) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x845 = INT64_MIN;
	uint8_t x847 = UINT8_MAX;
	int32_t t191 = 3442291;

    t191 = ((x845>(x846&x847))-x848);

    if (t191 != -14) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x850 = UINT64_MAX;
	static uint32_t x851 = UINT32_MAX;
	volatile int32_t t192 = -4669;

    t192 = ((x849>(x850&x851))-x852);

    if (t192 != 775243902) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x854 = -1;
	static uint8_t x855 = 21U;
	uint64_t t193 = 66901935LLU;

    t193 = ((x853>(x854&x855))-x856);

    if (t193 != 1LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x857 = 1U;
	static int16_t x858 = -1;
	int32_t x860 = 9466;

    t194 = ((x857>(x858&x859))-x860);

    if (t194 != -9466) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x861 = -6;
	int64_t x862 = INT64_MAX;
	int64_t x863 = INT64_MAX;
	static volatile int16_t x864 = -23;
	volatile int32_t t195 = -106;

    t195 = ((x861>(x862&x863))-x864);

    if (t195 != 23) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile uint16_t x866 = UINT16_MAX;
	int32_t t196 = 75885;

    t196 = ((x865>(x866&x867))-x868);

    if (t196 != 997) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x873 = INT32_MIN;
	int16_t x874 = -118;
	uint64_t x875 = 54793469528LLU;
	volatile int8_t x876 = INT8_MIN;
	static int32_t t197 = -3;

    t197 = ((x873>(x874&x875))-x876);

    if (t197 != 129) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x877 = INT64_MIN;
	volatile uint64_t x878 = UINT64_MAX;
	static int8_t x880 = INT8_MIN;
	int32_t t198 = 16317063;

    t198 = ((x877>(x878&x879))-x880);

    if (t198 != 129) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x885 = INT8_MIN;
	int64_t x887 = INT64_MIN;
	volatile int32_t x888 = -1;
	int32_t t199 = -82412;

    t199 = ((x885>(x886&x887))-x888);

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

