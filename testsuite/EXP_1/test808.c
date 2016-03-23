
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

volatile int8_t x3 = 21;
int32_t x5 = INT32_MIN;
volatile uint32_t x13 = UINT32_MAX;
static int8_t x22 = -1;
static int16_t x24 = 1;
volatile int16_t x31 = INT16_MIN;
int64_t x33 = INT64_MIN;
int32_t t8 = 1054212747;
int32_t x41 = INT32_MIN;
int32_t x48 = INT32_MAX;
static volatile int64_t x50 = -24998709697404147LL;
int16_t x52 = 59;
uint8_t x55 = UINT8_MAX;
volatile int32_t t13 = 101685;
static volatile int16_t x60 = INT16_MIN;
static int32_t t14 = 640667;
int32_t t16 = -4004768;
volatile int32_t x73 = -1;
int8_t x79 = -57;
int32_t t18 = 26;
static int8_t x88 = INT8_MIN;
static int32_t x91 = -9052336;
int32_t t21 = -73411;
uint16_t x95 = 6473U;
int32_t x104 = INT32_MIN;
volatile int32_t t24 = -258740;
volatile int32_t t25 = -3603826;
static int32_t x109 = INT32_MAX;
static uint32_t x113 = 39093938U;
int16_t x114 = INT16_MIN;
int8_t x119 = INT8_MIN;
volatile int32_t x125 = INT32_MIN;
volatile int64_t x126 = INT64_MIN;
static int32_t x131 = INT32_MAX;
static int16_t x133 = INT16_MAX;
static volatile int8_t x135 = INT8_MIN;
uint32_t x138 = 2227118U;
int32_t x167 = INT32_MIN;
uint8_t x168 = UINT8_MAX;
volatile int32_t t39 = -7022;
static uint64_t x170 = UINT64_MAX;
static int32_t x173 = -67569821;
uint64_t x175 = 538407689LLU;
volatile int8_t x177 = 50;
int8_t x180 = INT8_MAX;
int16_t x190 = -1;
volatile int32_t t45 = 77983528;
volatile int64_t x198 = INT64_MIN;
static int64_t x206 = -1LL;
int32_t x207 = 882892653;
int16_t x213 = INT16_MIN;
int32_t t49 = -7489;
static uint32_t x225 = UINT32_MAX;
volatile uint32_t x226 = 382U;
static int32_t t52 = 0;
uint8_t x239 = UINT8_MAX;
int8_t x244 = -6;
int16_t x245 = INT16_MIN;
uint32_t x248 = 10533U;
static uint32_t x252 = 14185U;
volatile int32_t t56 = -251;
volatile int32_t t57 = -4962748;
int16_t x262 = INT16_MIN;
volatile int32_t t59 = 12906589;
static volatile int8_t x271 = -1;
uint16_t x278 = UINT16_MAX;
int64_t x280 = INT64_MIN;
uint32_t x281 = UINT32_MAX;
int32_t t64 = -42;
uint32_t x293 = 316241U;
uint16_t x298 = 4U;
static int8_t x304 = INT8_MIN;
volatile int32_t t70 = 182488474;
int32_t x317 = -145;
int32_t t74 = 768615;
volatile uint64_t x325 = 2411540738006635LLU;
static volatile int16_t x331 = INT16_MIN;
static uint64_t x335 = 337542LLU;
int64_t x336 = INT64_MAX;
int32_t t77 = 134585;
int16_t x340 = 111;
int8_t x342 = INT8_MIN;
int16_t x348 = 1;
int16_t x351 = 21;
int16_t x353 = INT16_MIN;
volatile uint32_t x356 = UINT32_MAX;
static volatile uint32_t x357 = UINT32_MAX;
uint32_t x363 = UINT32_MAX;
uint64_t x369 = 2LLU;
int32_t x371 = 1;
volatile int32_t t87 = 1917480;
int64_t x377 = -471075919939586LL;
int16_t x378 = INT16_MAX;
static int64_t x384 = -1LL;
uint64_t x389 = UINT64_MAX;
int64_t x397 = 862LL;
int8_t x400 = INT8_MIN;
volatile int32_t x401 = INT32_MIN;
uint64_t x402 = 4150987LLU;
uint8_t x407 = 24U;
int16_t x413 = INT16_MIN;
volatile int32_t x422 = 33485606;
int64_t x425 = INT64_MIN;
int32_t x427 = -16061;
volatile int64_t x434 = -1LL;
int8_t x435 = -55;
volatile int16_t x436 = INT16_MAX;
uint64_t x437 = 1LLU;
static volatile int16_t x440 = -1;
int32_t t102 = -1;
int32_t x449 = -14;
int8_t x451 = 1;
volatile int8_t x456 = INT8_MAX;
int64_t x465 = INT64_MIN;
int32_t x477 = 2348;
uint64_t x478 = 265010917LLU;
static int8_t x499 = 6;
static int16_t x503 = -1;
volatile uint16_t x504 = 7U;
int8_t x506 = INT8_MIN;
uint8_t x507 = 45U;
int32_t t116 = -328;
int64_t x510 = INT64_MIN;
int16_t x520 = -1;
int8_t x529 = INT8_MIN;
static volatile int32_t t122 = -130;
int8_t x541 = 3;
int64_t x542 = INT64_MAX;
int16_t x546 = INT16_MAX;
int16_t x547 = 99;
static int8_t x554 = -57;
static int64_t x566 = 29116368794223443LL;
uint16_t x567 = 327U;
volatile int32_t t131 = 468497183;
static volatile uint32_t x570 = UINT32_MAX;
int32_t x571 = INT32_MIN;
uint64_t x576 = UINT64_MAX;
uint64_t x582 = 4284618558965LLU;
int64_t x586 = INT64_MIN;
static int64_t x589 = INT64_MAX;
int16_t x606 = INT16_MAX;
static volatile int32_t t143 = 66948;
static int8_t x618 = INT8_MIN;
volatile uint32_t x625 = 147U;
volatile int32_t t147 = -2;
int8_t x635 = 0;
int32_t t148 = 12;
static volatile uint16_t x642 = 6U;
int32_t x644 = INT32_MIN;
int8_t x646 = -1;
int64_t x648 = INT64_MAX;
volatile int32_t t152 = -44308916;
static volatile int16_t x661 = INT16_MAX;
static volatile int64_t x666 = INT64_MAX;
int16_t x682 = INT16_MIN;
uint16_t x689 = 12U;
static int64_t x719 = -1LL;
int8_t x721 = -1;
int16_t x722 = INT16_MIN;
int64_t x724 = -1LL;
int32_t t168 = -693;
volatile int32_t x739 = INT32_MIN;
uint16_t x740 = 5U;
volatile int32_t x746 = -1;
int32_t x748 = INT32_MIN;
int32_t x755 = INT32_MIN;
volatile int32_t t177 = -408776;
int16_t x764 = 30;
int64_t x766 = INT64_MAX;
static int8_t x767 = INT8_MIN;
int8_t x768 = 26;
volatile int32_t t179 = 12397272;
volatile int32_t t181 = -145;
static int64_t x794 = INT64_MIN;
static int16_t x796 = INT16_MIN;
volatile int32_t t185 = -3;
uint32_t x811 = 36U;
uint64_t x813 = 174104LLU;
int64_t x815 = INT64_MAX;
volatile uint8_t x830 = UINT8_MAX;
int32_t t194 = -84;
volatile int32_t x838 = INT32_MAX;
uint8_t x842 = UINT8_MAX;
int16_t x843 = INT16_MIN;
static volatile int32_t t196 = -105919;
uint64_t x845 = 5729LLU;
volatile int64_t x847 = 2LL;
volatile int8_t x856 = -1;
int32_t t199 = -1;


void f0(void) {
    	int64_t x1 = 13298LL;
	int16_t x2 = INT16_MIN;
	int8_t x4 = -1;
	volatile int32_t t0 = 57180937;

    t0 = (((x1%x2)-x3)<=x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = INT32_MIN;
	int16_t x7 = -1;
	uint8_t x8 = UINT8_MAX;
	volatile int32_t t1 = 373292;

    t1 = (((x5%x6)-x7)<=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 3074001LLU;
	int8_t x10 = INT8_MIN;
	uint32_t x11 = 0U;
	volatile int64_t x12 = -1LL;
	int32_t t2 = -60953;

    t2 = (((x9%x10)-x11)<=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x14 = UINT16_MAX;
	int8_t x15 = -1;
	volatile uint8_t x16 = UINT8_MAX;
	volatile int32_t t3 = 11600;

    t3 = (((x13%x14)-x15)<=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = -1;
	uint32_t x18 = 29978514U;
	static uint64_t x19 = 315LLU;
	int8_t x20 = 2;
	int32_t t4 = -1628;

    t4 = (((x17%x18)-x19)<=x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = UINT16_MAX;
	static uint16_t x23 = 8U;
	static int32_t t5 = 9;

    t5 = (((x21%x22)-x23)<=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MIN;
	uint32_t x26 = 273U;
	static int16_t x27 = INT16_MAX;
	volatile uint8_t x28 = UINT8_MAX;
	volatile int32_t t6 = 105689;

    t6 = (((x25%x26)-x27)<=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MIN;
	uint8_t x30 = 1U;
	static int8_t x32 = INT8_MAX;
	volatile int32_t t7 = -22605923;

    t7 = (((x29%x30)-x31)<=x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x34 = INT16_MIN;
	static int32_t x35 = -1;
	int64_t x36 = INT64_MIN;

    t8 = (((x33%x34)-x35)<=x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	int8_t x38 = INT8_MAX;
	int8_t x39 = INT8_MIN;
	static int64_t x40 = INT64_MIN;
	volatile int32_t t9 = 0;

    t9 = (((x37%x38)-x39)<=x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x42 = 8;
	volatile int16_t x43 = INT16_MIN;
	volatile uint32_t x44 = 200U;
	int32_t t10 = 3527606;

    t10 = (((x41%x42)-x43)<=x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = 54747LLU;
	static int8_t x46 = INT8_MIN;
	volatile uint16_t x47 = 18U;
	volatile int32_t t11 = -1122;

    t11 = (((x45%x46)-x47)<=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MIN;
	int16_t x51 = INT16_MAX;
	static volatile int32_t t12 = 29341;

    t12 = (((x49%x50)-x51)<=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MAX;
	uint8_t x54 = UINT8_MAX;
	uint64_t x56 = 9885811016282LLU;

    t13 = (((x53%x54)-x55)<=x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = -71042;
	int16_t x58 = INT16_MIN;
	int16_t x59 = -1;

    t14 = (((x57%x58)-x59)<=x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x61 = -1;
	int64_t x62 = INT64_MIN;
	int16_t x63 = INT16_MAX;
	static uint8_t x64 = UINT8_MAX;
	int32_t t15 = -126507070;

    t15 = (((x61%x62)-x63)<=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x65 = -1;
	static int16_t x66 = INT16_MIN;
	static int8_t x67 = INT8_MIN;
	static volatile uint16_t x68 = 262U;

    t16 = (((x65%x66)-x67)<=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x74 = 87;
	static int8_t x75 = INT8_MAX;
	static int32_t x76 = INT32_MIN;
	volatile int32_t t17 = 315282;

    t17 = (((x73%x74)-x75)<=x76);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint16_t x77 = UINT16_MAX;
	volatile int16_t x78 = -73;
	volatile int16_t x80 = -1;

    t18 = (((x77%x78)-x79)<=x80);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x81 = UINT64_MAX;
	uint8_t x82 = 4U;
	int32_t x83 = INT32_MIN;
	uint16_t x84 = 3315U;
	int32_t t19 = 52367;

    t19 = (((x81%x82)-x83)<=x84);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x85 = INT8_MAX;
	uint64_t x86 = 3LLU;
	uint32_t x87 = 8U;
	int32_t t20 = 13;

    t20 = (((x85%x86)-x87)<=x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x89 = INT16_MIN;
	int64_t x90 = 31087139214LL;
	uint8_t x92 = UINT8_MAX;

    t21 = (((x89%x90)-x91)<=x92);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x93 = -1LL;
	static int32_t x94 = 118634;
	static int32_t x96 = 2151254;
	volatile int32_t t22 = -110;

    t22 = (((x93%x94)-x95)<=x96);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x97 = 8448;
	int8_t x98 = 1;
	static int16_t x99 = INT16_MIN;
	static int32_t x100 = INT32_MIN;
	static volatile int32_t t23 = 3808;

    t23 = (((x97%x98)-x99)<=x100);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int16_t x101 = INT16_MIN;
	volatile uint16_t x102 = UINT16_MAX;
	static int64_t x103 = -7895LL;

    t24 = (((x101%x102)-x103)<=x104);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint16_t x105 = UINT16_MAX;
	int16_t x106 = INT16_MAX;
	static int8_t x107 = INT8_MIN;
	static volatile int16_t x108 = 10;

    t25 = (((x105%x106)-x107)<=x108);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x110 = 503U;
	int64_t x111 = 1640082214327LL;
	int8_t x112 = 0;
	int32_t t26 = 6274;

    t26 = (((x109%x110)-x111)<=x112);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x115 = -1;
	static int32_t x116 = INT32_MIN;
	volatile int32_t t27 = 122;

    t27 = (((x113%x114)-x115)<=x116);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x117 = 9;
	int8_t x118 = INT8_MAX;
	uint64_t x120 = 15113509248096707LLU;
	int32_t t28 = 66414942;

    t28 = (((x117%x118)-x119)<=x120);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x121 = INT64_MIN;
	int64_t x122 = 175016688495LL;
	uint16_t x123 = 0U;
	static int64_t x124 = -1LL;
	volatile int32_t t29 = -136611349;

    t29 = (((x121%x122)-x123)<=x124);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint32_t x127 = 8U;
	uint64_t x128 = 75205815985LLU;
	volatile int32_t t30 = 7754;

    t30 = (((x125%x126)-x127)<=x128);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x129 = 3;
	volatile uint64_t x130 = UINT64_MAX;
	int8_t x132 = -2;
	volatile int32_t t31 = 270099;

    t31 = (((x129%x130)-x131)<=x132);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x134 = 393U;
	uint8_t x136 = 5U;
	int32_t t32 = -64;

    t32 = (((x133%x134)-x135)<=x136);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x137 = -3;
	int8_t x139 = -6;
	volatile int16_t x140 = -1;
	int32_t t33 = -33;

    t33 = (((x137%x138)-x139)<=x140);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x141 = INT32_MIN;
	uint16_t x142 = 37U;
	uint16_t x143 = 5U;
	static int32_t x144 = INT32_MAX;
	static int32_t t34 = 436;

    t34 = (((x141%x142)-x143)<=x144);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x149 = -960647252499446LL;
	int32_t x150 = 14636;
	uint8_t x151 = UINT8_MAX;
	int32_t x152 = -1;
	int32_t t35 = -126;

    t35 = (((x149%x150)-x151)<=x152);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x153 = 12;
	int8_t x154 = 37;
	static int8_t x155 = INT8_MIN;
	uint16_t x156 = UINT16_MAX;
	volatile int32_t t36 = -32;

    t36 = (((x153%x154)-x155)<=x156);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x157 = -12;
	int64_t x158 = -30497248861443127LL;
	static uint8_t x159 = 18U;
	volatile int32_t x160 = 11;
	volatile int32_t t37 = -4641742;

    t37 = (((x157%x158)-x159)<=x160);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x161 = INT16_MIN;
	uint16_t x162 = 62U;
	int64_t x163 = -67531381205423LL;
	int64_t x164 = INT64_MIN;
	volatile int32_t t38 = 0;

    t38 = (((x161%x162)-x163)<=x164);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x165 = UINT8_MAX;
	int64_t x166 = INT64_MIN;

    t39 = (((x165%x166)-x167)<=x168);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x169 = UINT8_MAX;
	int8_t x171 = -1;
	int32_t x172 = 195;
	static int32_t t40 = -15;

    t40 = (((x169%x170)-x171)<=x172);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x174 = 22;
	int8_t x176 = -28;
	volatile int32_t t41 = -28290;

    t41 = (((x173%x174)-x175)<=x176);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x178 = INT16_MIN;
	uint8_t x179 = UINT8_MAX;
	int32_t t42 = -1033705;

    t42 = (((x177%x178)-x179)<=x180);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x185 = -1;
	uint64_t x186 = UINT64_MAX;
	uint32_t x187 = 18U;
	int8_t x188 = 40;
	volatile int32_t t43 = 409009;

    t43 = (((x185%x186)-x187)<=x188);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x189 = 9766U;
	uint16_t x191 = 1898U;
	static int8_t x192 = INT8_MIN;
	volatile int32_t t44 = 0;

    t44 = (((x189%x190)-x191)<=x192);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint32_t x193 = UINT32_MAX;
	int64_t x194 = INT64_MIN;
	int16_t x195 = -1;
	int16_t x196 = -1;

    t45 = (((x193%x194)-x195)<=x196);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x197 = INT8_MIN;
	int16_t x199 = -1;
	int32_t x200 = -122;
	volatile int32_t t46 = -21;

    t46 = (((x197%x198)-x199)<=x200);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x201 = 26555U;
	volatile int8_t x202 = -21;
	int64_t x203 = -954175314LL;
	volatile int64_t x204 = 4464023636522621137LL;
	volatile int32_t t47 = 25;

    t47 = (((x201%x202)-x203)<=x204);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x205 = 7705652095075LLU;
	int32_t x208 = -182974;
	volatile int32_t t48 = -19;

    t48 = (((x205%x206)-x207)<=x208);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x214 = INT16_MAX;
	uint8_t x215 = 7U;
	volatile int64_t x216 = -1LL;

    t49 = (((x213%x214)-x215)<=x216);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x227 = INT64_MAX;
	static int8_t x228 = INT8_MIN;
	volatile int32_t t50 = 12783722;

    t50 = (((x225%x226)-x227)<=x228);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x229 = UINT16_MAX;
	volatile int64_t x230 = INT64_MIN;
	int32_t x231 = -3574;
	int16_t x232 = INT16_MIN;
	static int32_t t51 = -1;

    t51 = (((x229%x230)-x231)<=x232);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x233 = -4629LL;
	static uint32_t x234 = UINT32_MAX;
	int16_t x235 = INT16_MIN;
	int16_t x236 = INT16_MIN;

    t52 = (((x233%x234)-x235)<=x236);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x237 = -296727599;
	int64_t x238 = -4062LL;
	int16_t x240 = INT16_MAX;
	int32_t t53 = -64282;

    t53 = (((x237%x238)-x239)<=x240);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x241 = UINT32_MAX;
	int16_t x242 = INT16_MIN;
	static int64_t x243 = INT64_MAX;
	int32_t t54 = 1255570;

    t54 = (((x241%x242)-x243)<=x244);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x246 = 58U;
	int8_t x247 = INT8_MAX;
	volatile int32_t t55 = 870;

    t55 = (((x245%x246)-x247)<=x248);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x249 = 152709412U;
	int8_t x250 = INT8_MIN;
	volatile int16_t x251 = 63;

    t56 = (((x249%x250)-x251)<=x252);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x253 = -1613082997LL;
	int64_t x254 = 160341271879268LL;
	int16_t x255 = 750;
	static int32_t x256 = -2;

    t57 = (((x253%x254)-x255)<=x256);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x257 = -1;
	uint16_t x258 = UINT16_MAX;
	static int64_t x259 = -48579800930LL;
	static int16_t x260 = INT16_MAX;
	int32_t t58 = -329881;

    t58 = (((x257%x258)-x259)<=x260);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int16_t x261 = -24;
	static uint32_t x263 = 221961777U;
	int32_t x264 = INT32_MIN;

    t59 = (((x261%x262)-x263)<=x264);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x265 = 1476535U;
	uint16_t x266 = UINT16_MAX;
	static uint8_t x267 = UINT8_MAX;
	uint64_t x268 = 1467LLU;
	volatile int32_t t60 = 1099;

    t60 = (((x265%x266)-x267)<=x268);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x269 = INT32_MIN;
	volatile int32_t x270 = -56;
	int64_t x272 = INT64_MIN;
	static volatile int32_t t61 = -1838207;

    t61 = (((x269%x270)-x271)<=x272);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x273 = 4803084;
	static int32_t x274 = INT32_MAX;
	uint64_t x275 = 22404254741LLU;
	int32_t x276 = INT32_MAX;
	int32_t t62 = 471749;

    t62 = (((x273%x274)-x275)<=x276);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x277 = UINT16_MAX;
	uint16_t x279 = UINT16_MAX;
	volatile int32_t t63 = 3668;

    t63 = (((x277%x278)-x279)<=x280);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x282 = -11;
	int64_t x283 = 3LL;
	static volatile int64_t x284 = INT64_MIN;

    t64 = (((x281%x282)-x283)<=x284);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x285 = 46U;
	int32_t x286 = INT32_MIN;
	static int16_t x287 = INT16_MAX;
	int8_t x288 = -1;
	static int32_t t65 = -1;

    t65 = (((x285%x286)-x287)<=x288);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x289 = -539380;
	volatile int8_t x290 = -1;
	static uint64_t x291 = 586758LLU;
	uint16_t x292 = UINT16_MAX;
	volatile int32_t t66 = -1381;

    t66 = (((x289%x290)-x291)<=x292);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int64_t x294 = INT64_MIN;
	int16_t x295 = INT16_MIN;
	uint64_t x296 = 14059LLU;
	int32_t t67 = 1369310;

    t67 = (((x293%x294)-x295)<=x296);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x297 = INT64_MAX;
	uint32_t x299 = UINT32_MAX;
	volatile uint64_t x300 = UINT64_MAX;
	static int32_t t68 = 7317943;

    t68 = (((x297%x298)-x299)<=x300);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x301 = UINT64_MAX;
	uint32_t x302 = UINT32_MAX;
	int16_t x303 = -449;
	int32_t t69 = 6947777;

    t69 = (((x301%x302)-x303)<=x304);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x305 = -371;
	static uint16_t x306 = 23306U;
	int8_t x307 = INT8_MIN;
	static volatile int32_t x308 = 10;

    t70 = (((x305%x306)-x307)<=x308);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int32_t x309 = INT32_MAX;
	uint64_t x310 = 106LLU;
	volatile uint64_t x311 = UINT64_MAX;
	uint8_t x312 = UINT8_MAX;
	volatile int32_t t71 = 7495477;

    t71 = (((x309%x310)-x311)<=x312);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x313 = 1409U;
	int16_t x314 = -735;
	static uint8_t x315 = UINT8_MAX;
	uint32_t x316 = UINT32_MAX;
	volatile int32_t t72 = -1276194;

    t72 = (((x313%x314)-x315)<=x316);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint16_t x318 = 1U;
	int32_t x319 = INT32_MAX;
	int64_t x320 = -1LL;
	static int32_t t73 = -1;

    t73 = (((x317%x318)-x319)<=x320);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x321 = 1262071877LLU;
	static int64_t x322 = INT64_MIN;
	int8_t x323 = INT8_MIN;
	uint32_t x324 = UINT32_MAX;

    t74 = (((x321%x322)-x323)<=x324);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x326 = -1;
	uint8_t x327 = 0U;
	uint64_t x328 = UINT64_MAX;
	int32_t t75 = 14433514;

    t75 = (((x325%x326)-x327)<=x328);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x329 = UINT16_MAX;
	int32_t x330 = INT32_MIN;
	uint8_t x332 = 13U;
	int32_t t76 = 13595429;

    t76 = (((x329%x330)-x331)<=x332);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x333 = INT16_MIN;
	int64_t x334 = -1LL;

    t77 = (((x333%x334)-x335)<=x336);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x337 = -1;
	volatile int8_t x338 = INT8_MIN;
	int16_t x339 = 2;
	volatile int32_t t78 = 9473;

    t78 = (((x337%x338)-x339)<=x340);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int64_t x341 = 97932927LL;
	uint32_t x343 = UINT32_MAX;
	volatile int64_t x344 = -1LL;
	int32_t t79 = -9112;

    t79 = (((x341%x342)-x343)<=x344);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x345 = 4494;
	uint32_t x346 = 2393U;
	int8_t x347 = INT8_MIN;
	volatile int32_t t80 = 3150;

    t80 = (((x345%x346)-x347)<=x348);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x349 = -1;
	int64_t x350 = -1LL;
	int64_t x352 = -6327891188879181LL;
	int32_t t81 = 18720664;

    t81 = (((x349%x350)-x351)<=x352);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int64_t x354 = INT64_MAX;
	static int64_t x355 = -1LL;
	int32_t t82 = -55510;

    t82 = (((x353%x354)-x355)<=x356);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x358 = UINT32_MAX;
	static uint32_t x359 = 17865092U;
	uint32_t x360 = 1633U;
	int32_t t83 = -1;

    t83 = (((x357%x358)-x359)<=x360);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x361 = 796869820LL;
	int64_t x362 = -3519945608813453LL;
	int32_t x364 = 261979;
	static int32_t t84 = 214706884;

    t84 = (((x361%x362)-x363)<=x364);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x365 = 51;
	uint16_t x366 = 9744U;
	uint8_t x367 = 0U;
	static uint64_t x368 = UINT64_MAX;
	int32_t t85 = 41;

    t85 = (((x365%x366)-x367)<=x368);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x370 = 1305U;
	volatile int32_t x372 = INT32_MAX;
	volatile int32_t t86 = 1039533;

    t86 = (((x369%x370)-x371)<=x372);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint8_t x373 = UINT8_MAX;
	uint8_t x374 = UINT8_MAX;
	volatile uint16_t x375 = UINT16_MAX;
	static volatile uint32_t x376 = 505185U;

    t87 = (((x373%x374)-x375)<=x376);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x379 = 2901U;
	static volatile int64_t x380 = 16689888LL;
	int32_t t88 = -6958356;

    t88 = (((x377%x378)-x379)<=x380);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x381 = INT32_MIN;
	uint64_t x382 = 20815913LLU;
	int64_t x383 = INT64_MIN;
	int32_t t89 = -185;

    t89 = (((x381%x382)-x383)<=x384);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x385 = INT8_MIN;
	volatile int64_t x386 = INT64_MIN;
	uint16_t x387 = 1U;
	uint64_t x388 = 701881LLU;
	int32_t t90 = 21;

    t90 = (((x385%x386)-x387)<=x388);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x390 = INT16_MAX;
	static uint64_t x391 = 25LLU;
	int16_t x392 = INT16_MAX;
	volatile int32_t t91 = 87;

    t91 = (((x389%x390)-x391)<=x392);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x393 = INT8_MIN;
	static int32_t x394 = INT32_MAX;
	uint8_t x395 = UINT8_MAX;
	uint64_t x396 = UINT64_MAX;
	static int32_t t92 = 85;

    t92 = (((x393%x394)-x395)<=x396);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x398 = UINT64_MAX;
	int8_t x399 = INT8_MAX;
	volatile int32_t t93 = 9;

    t93 = (((x397%x398)-x399)<=x400);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x403 = INT32_MAX;
	uint8_t x404 = 15U;
	volatile int32_t t94 = -2;

    t94 = (((x401%x402)-x403)<=x404);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x405 = 1225836369422216LL;
	volatile int8_t x406 = 3;
	int8_t x408 = 0;
	volatile int32_t t95 = -88;

    t95 = (((x405%x406)-x407)<=x408);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x409 = UINT64_MAX;
	int16_t x410 = 4;
	volatile int32_t x411 = -386924;
	volatile int8_t x412 = INT8_MIN;
	volatile int32_t t96 = 112987908;

    t96 = (((x409%x410)-x411)<=x412);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x414 = -30228286755359LL;
	int8_t x415 = INT8_MIN;
	uint64_t x416 = 1452748196492LLU;
	int32_t t97 = -495;

    t97 = (((x413%x414)-x415)<=x416);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x417 = UINT32_MAX;
	uint64_t x418 = UINT64_MAX;
	int32_t x419 = INT32_MAX;
	static uint64_t x420 = 1978854974524476844LLU;
	volatile int32_t t98 = -119772;

    t98 = (((x417%x418)-x419)<=x420);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x421 = INT8_MIN;
	int64_t x423 = INT64_MIN;
	static int8_t x424 = 0;
	int32_t t99 = -1;

    t99 = (((x421%x422)-x423)<=x424);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x426 = INT8_MAX;
	volatile int8_t x428 = INT8_MIN;
	int32_t t100 = -328034;

    t100 = (((x425%x426)-x427)<=x428);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x433 = UINT32_MAX;
	int32_t t101 = 1174;

    t101 = (((x433%x434)-x435)<=x436);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x438 = 5566;
	int64_t x439 = INT64_MAX;

    t102 = (((x437%x438)-x439)<=x440);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x441 = 29094U;
	int8_t x442 = -1;
	volatile uint32_t x443 = 99U;
	int32_t x444 = INT32_MIN;
	static volatile int32_t t103 = 143928;

    t103 = (((x441%x442)-x443)<=x444);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x445 = INT32_MIN;
	volatile uint32_t x446 = 565U;
	static int16_t x447 = -1;
	int32_t x448 = INT32_MAX;
	volatile int32_t t104 = -911;

    t104 = (((x445%x446)-x447)<=x448);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x450 = -1;
	static int64_t x452 = -128985553533369994LL;
	int32_t t105 = 173;

    t105 = (((x449%x450)-x451)<=x452);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x453 = INT32_MIN;
	int64_t x454 = INT64_MAX;
	int32_t x455 = -1;
	static volatile int32_t t106 = 6;

    t106 = (((x453%x454)-x455)<=x456);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x466 = UINT8_MAX;
	static int8_t x467 = INT8_MAX;
	uint16_t x468 = 11U;
	volatile int32_t t107 = 210074758;

    t107 = (((x465%x466)-x467)<=x468);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x469 = -1LL;
	int8_t x470 = 4;
	volatile int64_t x471 = INT64_MIN;
	uint32_t x472 = 790662893U;
	volatile int32_t t108 = -10147800;

    t108 = (((x469%x470)-x471)<=x472);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint32_t x473 = 3U;
	uint16_t x474 = UINT16_MAX;
	volatile int16_t x475 = INT16_MAX;
	volatile uint16_t x476 = 20704U;
	volatile int32_t t109 = -1;

    t109 = (((x473%x474)-x475)<=x476);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x479 = 39U;
	int64_t x480 = INT64_MIN;
	int32_t t110 = 7;

    t110 = (((x477%x478)-x479)<=x480);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x481 = 248750U;
	int16_t x482 = -1;
	int16_t x483 = -1;
	int32_t x484 = -1;
	int32_t t111 = -1;

    t111 = (((x481%x482)-x483)<=x484);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x489 = UINT64_MAX;
	int8_t x490 = INT8_MAX;
	int32_t x491 = INT32_MIN;
	static int32_t x492 = INT32_MAX;
	volatile int32_t t112 = 27;

    t112 = (((x489%x490)-x491)<=x492);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x493 = -280;
	uint16_t x494 = 20824U;
	int32_t x495 = INT32_MIN;
	uint16_t x496 = UINT16_MAX;
	volatile int32_t t113 = 975483;

    t113 = (((x493%x494)-x495)<=x496);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x497 = INT8_MIN;
	static uint64_t x498 = 15945335LLU;
	static uint32_t x500 = 94352438U;
	volatile int32_t t114 = 59562315;

    t114 = (((x497%x498)-x499)<=x500);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x501 = INT32_MIN;
	static uint16_t x502 = UINT16_MAX;
	static int32_t t115 = -843382;

    t115 = (((x501%x502)-x503)<=x504);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x505 = INT32_MIN;
	static int64_t x508 = 4000LL;

    t116 = (((x505%x506)-x507)<=x508);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x509 = 100;
	uint64_t x511 = 409801001130981LLU;
	uint32_t x512 = UINT32_MAX;
	int32_t t117 = 943951052;

    t117 = (((x509%x510)-x511)<=x512);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x513 = INT16_MAX;
	int16_t x514 = 3031;
	int64_t x515 = 2950265LL;
	static int64_t x516 = INT64_MAX;
	volatile int32_t t118 = 37995016;

    t118 = (((x513%x514)-x515)<=x516);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x517 = INT32_MAX;
	volatile int8_t x518 = -1;
	int8_t x519 = 3;
	volatile int32_t t119 = -608115;

    t119 = (((x517%x518)-x519)<=x520);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x521 = 496LLU;
	volatile int32_t x522 = -1;
	int16_t x523 = INT16_MIN;
	static volatile uint64_t x524 = 13421824834164LLU;
	int32_t t120 = -1820485;

    t120 = (((x521%x522)-x523)<=x524);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x525 = -1;
	volatile int16_t x526 = -43;
	uint8_t x527 = UINT8_MAX;
	static uint16_t x528 = 27239U;
	volatile int32_t t121 = -8;

    t121 = (((x525%x526)-x527)<=x528);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x530 = 5612U;
	int64_t x531 = -1848730643991070LL;
	uint32_t x532 = 59736U;

    t122 = (((x529%x530)-x531)<=x532);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x533 = -712416;
	int64_t x534 = INT64_MIN;
	int32_t x535 = -1;
	int64_t x536 = -1LL;
	int32_t t123 = -1927109;

    t123 = (((x533%x534)-x535)<=x536);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x537 = 28;
	int32_t x538 = -1;
	int32_t x539 = INT32_MAX;
	uint16_t x540 = 5U;
	int32_t t124 = -1038760730;

    t124 = (((x537%x538)-x539)<=x540);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x543 = -1LL;
	int64_t x544 = INT64_MIN;
	static int32_t t125 = 663352;

    t125 = (((x541%x542)-x543)<=x544);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x545 = 841;
	int16_t x548 = -1;
	volatile int32_t t126 = -1183;

    t126 = (((x545%x546)-x547)<=x548);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x549 = INT8_MAX;
	int16_t x550 = -1;
	int8_t x551 = -1;
	volatile int32_t x552 = -1;
	volatile int32_t t127 = 473;

    t127 = (((x549%x550)-x551)<=x552);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x553 = -1;
	volatile int8_t x555 = INT8_MIN;
	int32_t x556 = -1;
	static volatile int32_t t128 = -750222975;

    t128 = (((x553%x554)-x555)<=x556);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x557 = UINT64_MAX;
	volatile int16_t x558 = 1293;
	uint8_t x559 = 7U;
	volatile int8_t x560 = -54;
	int32_t t129 = -71413;

    t129 = (((x557%x558)-x559)<=x560);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x561 = UINT16_MAX;
	int16_t x562 = INT16_MAX;
	int32_t x563 = INT32_MAX;
	static int16_t x564 = -1;
	int32_t t130 = -119078497;

    t130 = (((x561%x562)-x563)<=x564);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x565 = 20;
	static int64_t x568 = -1LL;

    t131 = (((x565%x566)-x567)<=x568);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int64_t x569 = -13221LL;
	int16_t x572 = INT16_MIN;
	static int32_t t132 = 50349;

    t132 = (((x569%x570)-x571)<=x572);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x573 = UINT64_MAX;
	int8_t x574 = -2;
	int64_t x575 = INT64_MIN;
	volatile int32_t t133 = 102405123;

    t133 = (((x573%x574)-x575)<=x576);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x577 = INT64_MAX;
	volatile int32_t x578 = -1;
	volatile int16_t x579 = -1;
	int16_t x580 = 3890;
	volatile int32_t t134 = 10926;

    t134 = (((x577%x578)-x579)<=x580);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x581 = INT8_MIN;
	volatile int16_t x583 = 1;
	static volatile int32_t x584 = INT32_MIN;
	int32_t t135 = -75;

    t135 = (((x581%x582)-x583)<=x584);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x585 = 1;
	volatile int32_t x587 = INT32_MAX;
	volatile int16_t x588 = INT16_MIN;
	int32_t t136 = -13;

    t136 = (((x585%x586)-x587)<=x588);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint32_t x590 = 42430U;
	int64_t x591 = -14335537439363239LL;
	int32_t x592 = INT32_MIN;
	int32_t t137 = -2818;

    t137 = (((x589%x590)-x591)<=x592);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x593 = 40673651;
	static uint64_t x594 = UINT64_MAX;
	volatile int16_t x595 = INT16_MIN;
	int32_t x596 = INT32_MIN;
	volatile int32_t t138 = 5349;

    t138 = (((x593%x594)-x595)<=x596);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x597 = INT32_MIN;
	static int32_t x598 = -1;
	static int32_t x599 = -107403092;
	int64_t x600 = INT64_MIN;
	int32_t t139 = -12535936;

    t139 = (((x597%x598)-x599)<=x600);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x601 = INT32_MAX;
	int32_t x602 = -1933138;
	int8_t x603 = INT8_MAX;
	volatile int32_t x604 = INT32_MIN;
	volatile int32_t t140 = -142524724;

    t140 = (((x601%x602)-x603)<=x604);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x605 = INT32_MIN;
	uint16_t x607 = 56U;
	uint32_t x608 = 9258258U;
	volatile int32_t t141 = 1;

    t141 = (((x605%x606)-x607)<=x608);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x609 = -1;
	static int8_t x610 = INT8_MIN;
	static int8_t x611 = 1;
	static int64_t x612 = 23491906582482LL;
	volatile int32_t t142 = -5;

    t142 = (((x609%x610)-x611)<=x612);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x613 = INT8_MIN;
	int8_t x614 = INT8_MIN;
	int8_t x615 = -1;
	int16_t x616 = -1055;

    t143 = (((x613%x614)-x615)<=x616);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x617 = 38U;
	uint8_t x619 = UINT8_MAX;
	int8_t x620 = INT8_MIN;
	volatile int32_t t144 = 1481;

    t144 = (((x617%x618)-x619)<=x620);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x621 = INT32_MAX;
	int32_t x622 = INT32_MIN;
	uint64_t x623 = 56730683LLU;
	static int16_t x624 = INT16_MIN;
	static int32_t t145 = -548;

    t145 = (((x621%x622)-x623)<=x624);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x626 = INT32_MIN;
	volatile uint16_t x627 = 4139U;
	uint64_t x628 = 7478341453LLU;
	int32_t t146 = -820222;

    t146 = (((x625%x626)-x627)<=x628);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x629 = -1;
	volatile int64_t x630 = INT64_MIN;
	int64_t x631 = INT64_MIN;
	int32_t x632 = INT32_MIN;

    t147 = (((x629%x630)-x631)<=x632);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x633 = INT8_MAX;
	uint8_t x634 = UINT8_MAX;
	int32_t x636 = -101;

    t148 = (((x633%x634)-x635)<=x636);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint64_t x637 = 408683498LLU;
	uint8_t x638 = 27U;
	uint32_t x639 = 164U;
	int8_t x640 = INT8_MIN;
	static int32_t t149 = 3824;

    t149 = (((x637%x638)-x639)<=x640);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x641 = INT16_MIN;
	static uint8_t x643 = 11U;
	volatile int32_t t150 = 242433;

    t150 = (((x641%x642)-x643)<=x644);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint8_t x645 = 4U;
	volatile int32_t x647 = 3;
	volatile int32_t t151 = -318922191;

    t151 = (((x645%x646)-x647)<=x648);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint64_t x649 = UINT64_MAX;
	static int8_t x650 = 3;
	int64_t x651 = INT64_MIN;
	uint32_t x652 = UINT32_MAX;

    t152 = (((x649%x650)-x651)<=x652);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint64_t x653 = UINT64_MAX;
	int32_t x654 = INT32_MAX;
	int32_t x655 = INT32_MIN;
	volatile int32_t x656 = INT32_MIN;
	int32_t t153 = -1446;

    t153 = (((x653%x654)-x655)<=x656);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x657 = INT32_MAX;
	int64_t x658 = INT64_MIN;
	volatile int32_t x659 = 71858895;
	int16_t x660 = INT16_MIN;
	volatile int32_t t154 = 5747298;

    t154 = (((x657%x658)-x659)<=x660);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x662 = 22;
	int64_t x663 = INT64_MAX;
	int16_t x664 = 19;
	volatile int32_t t155 = -36158230;

    t155 = (((x661%x662)-x663)<=x664);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int8_t x665 = -3;
	int64_t x667 = 123393LL;
	static int64_t x668 = INT64_MIN;
	volatile int32_t t156 = 545;

    t156 = (((x665%x666)-x667)<=x668);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x673 = -1;
	int16_t x674 = -12;
	int32_t x675 = INT32_MIN;
	uint32_t x676 = 187371U;
	int32_t t157 = 0;

    t157 = (((x673%x674)-x675)<=x676);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x677 = -106567269217LL;
	int32_t x678 = INT32_MIN;
	int64_t x679 = INT64_MIN;
	int32_t x680 = -1;
	int32_t t158 = -540;

    t158 = (((x677%x678)-x679)<=x680);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x681 = UINT64_MAX;
	static int64_t x683 = INT64_MAX;
	static uint64_t x684 = 1316477053634915LLU;
	static volatile int32_t t159 = -245;

    t159 = (((x681%x682)-x683)<=x684);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x685 = -1LL;
	uint8_t x686 = UINT8_MAX;
	int64_t x687 = 15096647LL;
	int32_t x688 = INT32_MIN;
	volatile int32_t t160 = 18676;

    t160 = (((x685%x686)-x687)<=x688);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x690 = 1196U;
	int8_t x691 = -4;
	volatile int16_t x692 = INT16_MIN;
	int32_t t161 = -44943;

    t161 = (((x689%x690)-x691)<=x692);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x697 = 1622;
	uint64_t x698 = UINT64_MAX;
	static int64_t x699 = 16LL;
	uint16_t x700 = 177U;
	static int32_t t162 = -332;

    t162 = (((x697%x698)-x699)<=x700);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x701 = -1;
	int32_t x702 = 10634;
	int16_t x703 = -1;
	static int64_t x704 = -4161100310535876LL;
	volatile int32_t t163 = 443789;

    t163 = (((x701%x702)-x703)<=x704);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x705 = 0;
	int16_t x706 = INT16_MAX;
	volatile uint8_t x707 = 0U;
	int8_t x708 = -1;
	volatile int32_t t164 = 2518997;

    t164 = (((x705%x706)-x707)<=x708);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int16_t x709 = -1;
	volatile int64_t x710 = -1LL;
	int16_t x711 = -1;
	int16_t x712 = INT16_MAX;
	static int32_t t165 = 0;

    t165 = (((x709%x710)-x711)<=x712);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint32_t x713 = 529U;
	int64_t x714 = INT64_MIN;
	static uint16_t x715 = 2U;
	int64_t x716 = -22057LL;
	int32_t t166 = -474;

    t166 = (((x713%x714)-x715)<=x716);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x717 = INT8_MIN;
	int32_t x718 = INT32_MIN;
	int8_t x720 = INT8_MIN;
	volatile int32_t t167 = -6773385;

    t167 = (((x717%x718)-x719)<=x720);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x723 = INT64_MAX;

    t168 = (((x721%x722)-x723)<=x724);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x725 = -10932;
	int16_t x726 = INT16_MIN;
	uint32_t x727 = 3677U;
	uint32_t x728 = 3260U;
	volatile int32_t t169 = -181;

    t169 = (((x725%x726)-x727)<=x728);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x729 = 64950755112LLU;
	static int16_t x730 = INT16_MIN;
	int64_t x731 = 62307215985403LL;
	int8_t x732 = -1;
	static int32_t t170 = 17;

    t170 = (((x729%x730)-x731)<=x732);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint16_t x733 = UINT16_MAX;
	int8_t x734 = 56;
	static int16_t x735 = -1;
	int8_t x736 = -1;
	int32_t t171 = 232004493;

    t171 = (((x733%x734)-x735)<=x736);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x737 = UINT64_MAX;
	uint64_t x738 = 105LLU;
	volatile int32_t t172 = 95;

    t172 = (((x737%x738)-x739)<=x740);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x741 = 547362189896459LLU;
	int16_t x742 = -5183;
	uint16_t x743 = 27U;
	int64_t x744 = INT64_MIN;
	int32_t t173 = -2;

    t173 = (((x741%x742)-x743)<=x744);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x745 = UINT64_MAX;
	static int32_t x747 = 25432006;
	static int32_t t174 = 144;

    t174 = (((x745%x746)-x747)<=x748);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x749 = 3U;
	int32_t x750 = INT32_MIN;
	uint64_t x751 = 3122LLU;
	static uint64_t x752 = 2293LLU;
	volatile int32_t t175 = -65979762;

    t175 = (((x749%x750)-x751)<=x752);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int32_t x753 = -1;
	uint16_t x754 = 4U;
	volatile int32_t x756 = INT32_MIN;
	volatile int32_t t176 = -1020;

    t176 = (((x753%x754)-x755)<=x756);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x757 = 0;
	int64_t x758 = INT64_MIN;
	int64_t x759 = 59LL;
	int16_t x760 = INT16_MIN;

    t177 = (((x757%x758)-x759)<=x760);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x761 = INT64_MAX;
	int64_t x762 = -1LL;
	static uint8_t x763 = 1U;
	int32_t t178 = 277179747;

    t178 = (((x761%x762)-x763)<=x764);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x765 = INT32_MAX;

    t179 = (((x765%x766)-x767)<=x768);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x769 = 238LL;
	static int32_t x770 = INT32_MAX;
	int64_t x771 = 12417400043LL;
	uint16_t x772 = UINT16_MAX;
	int32_t t180 = 889905;

    t180 = (((x769%x770)-x771)<=x772);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x777 = INT64_MAX;
	static int16_t x778 = INT16_MIN;
	static int8_t x779 = 1;
	uint32_t x780 = 247921806U;

    t181 = (((x777%x778)-x779)<=x780);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x781 = UINT8_MAX;
	int16_t x782 = INT16_MAX;
	int32_t x783 = -1;
	static int8_t x784 = -2;
	volatile int32_t t182 = 1931;

    t182 = (((x781%x782)-x783)<=x784);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x785 = -1LL;
	uint64_t x786 = 691857LLU;
	int8_t x787 = 28;
	int64_t x788 = INT64_MIN;
	static volatile int32_t t183 = -384000;

    t183 = (((x785%x786)-x787)<=x788);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x789 = 794417774791953LL;
	int16_t x790 = 3;
	static volatile uint16_t x791 = 1U;
	volatile int64_t x792 = -1LL;
	int32_t t184 = -117966060;

    t184 = (((x789%x790)-x791)<=x792);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x793 = -48737409974513341LL;
	int32_t x795 = INT32_MAX;

    t185 = (((x793%x794)-x795)<=x796);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x797 = 55;
	static uint32_t x798 = 9U;
	uint8_t x799 = 28U;
	volatile int32_t x800 = INT32_MIN;
	int32_t t186 = 211814;

    t186 = (((x797%x798)-x799)<=x800);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x801 = 143U;
	uint16_t x802 = 13511U;
	int64_t x803 = -1LL;
	static volatile int32_t x804 = -1;
	int32_t t187 = -2315;

    t187 = (((x801%x802)-x803)<=x804);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x805 = 1646;
	volatile int8_t x806 = 1;
	uint64_t x807 = 61455LLU;
	static int8_t x808 = INT8_MIN;
	int32_t t188 = 206;

    t188 = (((x805%x806)-x807)<=x808);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x809 = UINT8_MAX;
	uint64_t x810 = UINT64_MAX;
	uint32_t x812 = 432577506U;
	int32_t t189 = 846283277;

    t189 = (((x809%x810)-x811)<=x812);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x814 = INT8_MIN;
	volatile int16_t x816 = 10;
	static int32_t t190 = -1490;

    t190 = (((x813%x814)-x815)<=x816);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x817 = 3193362U;
	int8_t x818 = INT8_MIN;
	uint32_t x819 = 6U;
	int32_t x820 = 16;
	int32_t t191 = -1016190;

    t191 = (((x817%x818)-x819)<=x820);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x821 = INT32_MIN;
	static uint32_t x822 = 157U;
	static uint32_t x823 = 58783U;
	volatile uint64_t x824 = UINT64_MAX;
	static int32_t t192 = 188;

    t192 = (((x821%x822)-x823)<=x824);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x829 = INT64_MIN;
	int32_t x831 = INT32_MIN;
	static volatile int16_t x832 = -3540;
	static volatile int32_t t193 = -87787;

    t193 = (((x829%x830)-x831)<=x832);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x833 = 95U;
	int16_t x834 = INT16_MIN;
	volatile int16_t x835 = -1365;
	int16_t x836 = -1;

    t194 = (((x833%x834)-x835)<=x836);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x837 = UINT16_MAX;
	static uint32_t x839 = 14136864U;
	int32_t x840 = 1187408;
	volatile int32_t t195 = -68;

    t195 = (((x837%x838)-x839)<=x840);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x841 = INT32_MAX;
	volatile int16_t x844 = -1;

    t196 = (((x841%x842)-x843)<=x844);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x846 = INT8_MIN;
	static int16_t x848 = -1;
	static volatile int32_t t197 = 2996;

    t197 = (((x845%x846)-x847)<=x848);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x849 = INT64_MAX;
	static int32_t x850 = INT32_MIN;
	int64_t x851 = INT64_MAX;
	int64_t x852 = -416106638876LL;
	volatile int32_t t198 = 15533;

    t198 = (((x849%x850)-x851)<=x852);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint16_t x853 = UINT16_MAX;
	uint32_t x854 = UINT32_MAX;
	volatile uint64_t x855 = 4157761LLU;

    t199 = (((x853%x854)-x855)<=x856);

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

