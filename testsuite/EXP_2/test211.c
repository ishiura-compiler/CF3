
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

static int8_t x1 = INT8_MIN;
int32_t x5 = 770995;
int32_t x6 = -1;
uint16_t x17 = 317U;
int32_t x22 = -1;
int64_t x25 = -1LL;
int64_t x26 = 122999117246323LL;
static volatile uint64_t x29 = 1166050036193LLU;
volatile uint8_t x32 = 1U;
uint64_t t7 = 62015451090LLU;
int8_t x44 = INT8_MAX;
int8_t x45 = 4;
int64_t x47 = 46578591695LL;
static volatile int32_t t12 = -13102;
uint64_t x68 = 43158LLU;
uint32_t x78 = UINT32_MAX;
int64_t t18 = -106592772992620LL;
volatile int32_t t19 = -734;
volatile int32_t x86 = INT32_MIN;
int64_t x88 = -13049209175LL;
static int64_t t20 = -964950561074LL;
int16_t x96 = INT16_MIN;
static int64_t t24 = 1624LL;
static uint16_t x109 = 154U;
int8_t x111 = INT8_MIN;
int32_t t25 = -128240907;
int8_t x131 = INT8_MIN;
int32_t x132 = 9821076;
int32_t t28 = -31707;
int8_t x138 = 38;
volatile int32_t t30 = -33516535;
volatile int16_t x141 = 0;
int64_t x142 = -1LL;
int32_t x143 = INT32_MIN;
uint64_t x144 = UINT64_MAX;
volatile uint32_t t33 = 1U;
int32_t x160 = INT32_MAX;
int32_t x165 = INT32_MIN;
int32_t x166 = -75279;
int32_t x168 = -1;
uint32_t t36 = 29304948U;
static int8_t x169 = -8;
volatile uint64_t t37 = 1206948095LLU;
uint8_t x175 = UINT8_MAX;
volatile uint16_t x184 = 198U;
static int8_t x187 = -1;
volatile int16_t x194 = INT16_MAX;
static int8_t x204 = -1;
int64_t t43 = -11616614LL;
static uint8_t x212 = 1U;
uint8_t x216 = 10U;
int16_t x220 = INT16_MIN;
volatile int32_t t46 = -1;
int16_t x226 = INT16_MAX;
int8_t x234 = INT8_MAX;
int16_t x236 = INT16_MIN;
int8_t x238 = INT8_MAX;
int8_t x241 = INT8_MAX;
int32_t x260 = -386161;
volatile uint32_t t58 = 1094U;
int8_t x274 = INT8_MIN;
volatile uint64_t t60 = 5477959LLU;
int64_t x277 = -1LL;
uint64_t x279 = 1519237722535818032LLU;
uint64_t t61 = 38270LLU;
uint64_t t62 = 489074126LLU;
int8_t x290 = -1;
volatile int32_t t64 = -1;
int16_t x296 = 12194;
volatile uint64_t x299 = UINT64_MAX;
uint64_t x300 = 68328853553LLU;
static volatile uint8_t x306 = 1U;
volatile int16_t x307 = INT16_MAX;
uint64_t x313 = 40018LLU;
int16_t x315 = -17;
int16_t x319 = -530;
volatile uint64_t t69 = 885LLU;
static int32_t x342 = -1;
volatile uint8_t x350 = 4U;
int64_t t75 = 23LL;
int8_t x361 = INT8_MAX;
volatile int64_t x366 = -23127421712165LL;
uint64_t x368 = 2LLU;
static volatile int64_t x378 = -1LL;
static volatile int32_t x384 = 0;
static int32_t x389 = INT32_MIN;
uint8_t x395 = UINT8_MAX;
volatile uint64_t t83 = 180018954637006382LLU;
volatile int32_t x407 = INT32_MIN;
int8_t x413 = INT8_MIN;
static volatile int32_t x416 = INT32_MIN;
volatile int16_t x417 = -794;
int64_t x419 = INT64_MIN;
volatile int16_t x420 = -1;
volatile int64_t t90 = 137LL;
uint8_t x450 = UINT8_MAX;
volatile int8_t x451 = -1;
int64_t t93 = -1LL;
uint64_t x453 = 735391110547467708LLU;
uint64_t t96 = 1868578495327184493LLU;
static volatile int16_t x465 = -1;
uint64_t x466 = 14225459455859LLU;
int32_t t98 = 746489882;
volatile int8_t x481 = 14;
int64_t x486 = -1LL;
uint16_t x491 = 474U;
uint64_t x492 = 198606597891243LLU;
volatile int32_t x495 = INT32_MIN;
static int32_t x505 = -56922493;
static int16_t x506 = -4485;
int8_t x517 = -1;
int64_t x518 = INT64_MAX;
volatile uint64_t t108 = 2235914LLU;
int8_t x527 = INT8_MIN;
static volatile uint32_t x528 = 15252172U;
uint64_t t109 = 726LLU;
static int64_t x534 = INT64_MIN;
volatile int64_t x538 = -1LL;
volatile uint64_t t112 = 84LLU;
uint32_t x549 = UINT32_MAX;
static uint32_t x557 = 35080976U;
volatile int32_t x559 = INT32_MIN;
int64_t x566 = -1LL;
volatile uint64_t t117 = 9600382685075LLU;
uint8_t x576 = 47U;
int32_t t119 = 1013;
int16_t x587 = -1821;
static uint32_t t120 = 375466436U;
volatile uint64_t t122 = 19LLU;
uint32_t x598 = 1346551659U;
int64_t x599 = -178000752495050LL;
volatile int32_t t124 = 95026;
static uint8_t x609 = 0U;
uint64_t x610 = 226207335LLU;
volatile uint32_t x616 = UINT32_MAX;
int16_t x639 = INT16_MIN;
int32_t t130 = -134;
static volatile uint64_t x642 = 4864058LLU;
volatile uint32_t t134 = 1U;
int8_t x682 = -1;
uint32_t t139 = 10628664U;
uint64_t x690 = UINT64_MAX;
int64_t t142 = 1779396263927LL;
uint64_t x714 = 253828118286540LLU;
volatile uint64_t t144 = 114993354154368627LLU;
uint16_t x718 = UINT16_MAX;
uint64_t x719 = 7444LLU;
volatile int16_t x723 = INT16_MIN;
uint32_t t147 = 34522U;
int32_t x741 = -1;
int64_t t149 = 26694342612LL;
static int64_t x745 = -1LL;
volatile uint8_t x746 = 74U;
uint32_t x747 = 71534505U;
static int16_t x750 = INT16_MIN;
uint32_t x765 = UINT32_MAX;
volatile uint32_t x768 = UINT32_MAX;
uint64_t t154 = 1027802033346972508LLU;
volatile int8_t x796 = INT8_MIN;
volatile uint32_t t161 = 69U;
uint32_t x801 = 1205190U;
volatile uint64_t x811 = 409132721640436225LLU;
uint64_t t164 = 2054881655LLU;
uint32_t x827 = 119U;
volatile int16_t x844 = 11;
static uint64_t t172 = 4864789LLU;
uint64_t x857 = UINT64_MAX;
int64_t x860 = -77394843LL;
int64_t x862 = -1LL;
int64_t x871 = -2727508613244324757LL;
uint16_t x874 = 52U;
static int32_t t177 = 2150;
static volatile int32_t t178 = 2180870;
volatile int32_t t182 = -7;
int16_t x907 = -240;
int16_t x908 = INT16_MIN;
int32_t t183 = 55388;
int32_t x915 = 0;
uint32_t t184 = 252U;
volatile uint8_t x933 = UINT8_MAX;
static volatile uint8_t x935 = UINT8_MAX;
int32_t x938 = INT32_MAX;
int64_t t189 = -1928294149813932362LL;
int16_t x947 = INT16_MIN;
uint32_t x948 = 2U;
uint32_t t191 = 2351U;
int64_t t192 = -6263763LL;
int64_t x959 = 15126431LL;
int32_t x974 = -30474;
int32_t x976 = -1106301;
static int64_t x981 = INT64_MAX;
volatile int64_t x995 = -3651615LL;
int32_t x999 = -31011;


void f0(void) {
    	uint16_t x2 = UINT16_MAX;
	uint64_t x3 = UINT64_MAX;
	volatile uint32_t x4 = UINT32_MAX;
	static volatile uint64_t t0 = 264542927LLU;

    t0 = ((x1-(x2-x3))+x4);

    if (t0 != 4294901631LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x7 = INT8_MIN;
	volatile uint64_t x8 = 4033LLU;
	volatile uint64_t t1 = 133702599745827LLU;

    t1 = ((x5-(x6-x7))+x8);

    if (t1 != 774901LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = 1;
	int32_t x10 = INT32_MAX;
	int64_t x11 = -195180816186LL;
	int32_t x12 = INT32_MAX;
	volatile int64_t t2 = 111739653LL;

    t2 = ((x9-(x10-x11))+x12);

    if (t2 != -195180816185LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 3186LLU;
	int16_t x14 = -1;
	static volatile uint16_t x15 = 1U;
	volatile uint16_t x16 = 12U;
	static uint64_t t3 = 774351477119256488LLU;

    t3 = ((x13-(x14-x15))+x16);

    if (t3 != 3200LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x18 = 3469U;
	static uint64_t x19 = UINT64_MAX;
	uint16_t x20 = 5U;
	uint64_t t4 = 1094384623700LLU;

    t4 = ((x17-(x18-x19))+x20);

    if (t4 != 18446744073709548468LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -1;
	static int32_t x23 = INT32_MIN;
	volatile uint32_t x24 = 3U;
	uint32_t t5 = 548U;

    t5 = ((x21-(x22-x23))+x24);

    if (t5 != 2147483651U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x27 = 660105020546503856LLU;
	static int32_t x28 = INT32_MAX;
	uint64_t t6 = 14LLU;

    t6 = ((x25-(x26-x27))+x28);

    if (t6 != 659982023576741179LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x30 = -1;
	volatile int8_t x31 = INT8_MAX;

    t7 = ((x29-(x30-x31))+x32);

    if (t7 != 1166050036322LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 5U;
	uint64_t x34 = UINT64_MAX;
	static int8_t x35 = INT8_MAX;
	int16_t x36 = INT16_MIN;
	static volatile uint64_t t8 = 7059361979466LLU;

    t8 = ((x33-(x34-x35))+x36);

    if (t8 != 18446744073709518981LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = 1043033U;
	static int16_t x38 = -1;
	volatile int32_t x39 = -1;
	int16_t x40 = 99;
	uint32_t t9 = 2064241U;

    t9 = ((x37-(x38-x39))+x40);

    if (t9 != 1043132U) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = 1;
	static uint8_t x42 = UINT8_MAX;
	uint16_t x43 = 28795U;
	volatile int32_t t10 = -51950384;

    t10 = ((x41-(x42-x43))+x44);

    if (t10 != 28668) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x46 = INT32_MIN;
	uint16_t x48 = 2U;
	int64_t t11 = -68879610469586LL;

    t11 = ((x45-(x46-x47))+x48);

    if (t11 != 48726075349LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = 44;
	int32_t x50 = 1848;
	int16_t x51 = -415;
	int8_t x52 = 23;

    t12 = ((x49-(x50-x51))+x52);

    if (t12 != -2196) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = -3817LL;
	int16_t x54 = INT16_MIN;
	int8_t x55 = INT8_MAX;
	int8_t x56 = INT8_MIN;
	volatile int64_t t13 = -7354863866479318LL;

    t13 = ((x53-(x54-x55))+x56);

    if (t13 != 28950LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x61 = -1;
	uint8_t x62 = 2U;
	int64_t x63 = INT64_MAX;
	int16_t x64 = INT16_MIN;
	int64_t t14 = 11LL;

    t14 = ((x61-(x62-x63))+x64);

    if (t14 != 9223372036854743036LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x65 = -1;
	uint16_t x66 = 21746U;
	int8_t x67 = INT8_MIN;
	volatile uint64_t t15 = 7724705268809518878LLU;

    t15 = ((x65-(x66-x67))+x68);

    if (t15 != 21283LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x69 = 351LLU;
	int8_t x70 = INT8_MIN;
	volatile uint8_t x71 = UINT8_MAX;
	int8_t x72 = INT8_MAX;
	uint64_t t16 = 7712LLU;

    t16 = ((x69-(x70-x71))+x72);

    if (t16 != 861LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint32_t x73 = 425U;
	int8_t x74 = INT8_MIN;
	uint16_t x75 = UINT16_MAX;
	uint32_t x76 = 1459703635U;
	uint32_t t17 = 9341920U;

    t17 = ((x73-(x74-x75))+x76);

    if (t17 != 1459769723U) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x77 = -1801224447LL;
	volatile int8_t x79 = INT8_MIN;
	int32_t x80 = INT32_MIN;

    t18 = ((x77-(x78-x79))+x80);

    if (t18 != -3948708222LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x81 = -1;
	uint8_t x82 = 1U;
	static int8_t x83 = INT8_MAX;
	static int32_t x84 = INT32_MIN;

    t19 = ((x81-(x82-x83))+x84);

    if (t19 != -2147483523) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x85 = 1596U;
	static uint32_t x87 = UINT32_MAX;

    t20 = ((x85-(x86-x87))+x88);

    if (t20 != -10901723932LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x89 = 14908U;
	volatile uint32_t x90 = 83U;
	int16_t x91 = INT16_MIN;
	uint64_t x92 = 4388266LLU;
	volatile uint64_t t21 = 1254476982LLU;

    t21 = ((x89-(x90-x91))+x92);

    if (t21 != 4299337619LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x93 = INT16_MAX;
	int16_t x94 = -1;
	int32_t x95 = -251;
	volatile int32_t t22 = 8587927;

    t22 = ((x93-(x94-x95))+x96);

    if (t22 != -251) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int64_t x101 = -48701LL;
	uint64_t x102 = UINT64_MAX;
	int64_t x103 = INT64_MIN;
	volatile int32_t x104 = INT32_MAX;
	volatile uint64_t t23 = 1LLU;

    t23 = ((x101-(x102-x103))+x104);

    if (t23 != 9223372039002210755LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x105 = INT8_MAX;
	int32_t x106 = INT32_MIN;
	int64_t x107 = 7551725LL;
	int8_t x108 = INT8_MIN;

    t24 = ((x105-(x106-x107))+x108);

    if (t24 != 2155035372LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x110 = UINT16_MAX;
	static volatile int32_t x112 = -365;

    t25 = ((x109-(x110-x111))+x112);

    if (t25 != -65874) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x113 = -4;
	static uint16_t x114 = UINT16_MAX;
	uint64_t x115 = UINT64_MAX;
	int64_t x116 = INT64_MIN;
	volatile uint64_t t26 = 2447LLU;

    t26 = ((x113-(x114-x115))+x116);

    if (t26 != 9223372036854710268LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x117 = UINT64_MAX;
	static int8_t x118 = INT8_MAX;
	int16_t x119 = INT16_MAX;
	int16_t x120 = INT16_MIN;
	volatile uint64_t t27 = 205182764136LLU;

    t27 = ((x117-(x118-x119))+x120);

    if (t27 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x129 = 2;
	volatile uint16_t x130 = 11U;

    t28 = ((x129-(x130-x131))+x132);

    if (t28 != 9820939) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x133 = UINT64_MAX;
	static int64_t x134 = -1LL;
	int16_t x135 = 24;
	int16_t x136 = INT16_MAX;
	uint64_t t29 = 48676465LLU;

    t29 = ((x133-(x134-x135))+x136);

    if (t29 != 32791LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x137 = 3;
	uint8_t x139 = UINT8_MAX;
	static uint8_t x140 = UINT8_MAX;

    t30 = ((x137-(x138-x139))+x140);

    if (t30 != 475) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint64_t t31 = 3417256966467650348LLU;

    t31 = ((x141-(x142-x143))+x144);

    if (t31 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x145 = 662046U;
	int64_t x146 = INT64_MAX;
	int8_t x147 = 50;
	volatile uint8_t x148 = 0U;
	int64_t t32 = 62362566393LL;

    t32 = ((x145-(x146-x147))+x148);

    if (t32 != -9223372036854113711LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x153 = -1;
	uint32_t x154 = 399684U;
	volatile uint32_t x155 = UINT32_MAX;
	uint16_t x156 = 11U;

    t33 = ((x153-(x154-x155))+x156);

    if (t33 != 4294567621U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x157 = 306898U;
	static uint16_t x158 = UINT16_MAX;
	int8_t x159 = INT8_MAX;
	static volatile uint32_t t34 = 9U;

    t34 = ((x157-(x158-x159))+x160);

    if (t34 != 2147725137U) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x161 = INT16_MAX;
	int64_t x162 = -1LL;
	static int32_t x163 = INT32_MAX;
	int64_t x164 = INT64_MIN;
	int64_t t35 = -12124945030LL;

    t35 = ((x161-(x162-x163))+x164);

    if (t35 != -9223372034707259393LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint32_t x167 = 44802U;

    t36 = ((x165-(x166-x167))+x168);

    if (t36 != 2147603728U) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x170 = INT32_MAX;
	uint64_t x171 = 26702LLU;
	volatile uint32_t x172 = 12235770U;

    t37 = ((x169-(x170-x171))+x172);

    if (t37 != 18446744071574330433LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x173 = UINT32_MAX;
	int64_t x174 = -1LL;
	int8_t x176 = -1;
	static volatile int64_t t38 = -132162254480LL;

    t38 = ((x173-(x174-x175))+x176);

    if (t38 != 4294967550LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x177 = -27234LL;
	int16_t x178 = INT16_MAX;
	static volatile int8_t x179 = INT8_MIN;
	int16_t x180 = 10;
	volatile int64_t t39 = -18LL;

    t39 = ((x177-(x178-x179))+x180);

    if (t39 != -60119LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x181 = 172;
	int16_t x182 = -11495;
	volatile uint16_t x183 = 1056U;
	volatile int32_t t40 = 8010;

    t40 = ((x181-(x182-x183))+x184);

    if (t40 != 12921) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x185 = 1U;
	int8_t x186 = INT8_MIN;
	uint8_t x188 = 14U;
	int32_t t41 = -8692431;

    t41 = ((x185-(x186-x187))+x188);

    if (t41 != 142) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x193 = -1;
	static volatile uint16_t x195 = 6U;
	int64_t x196 = -1LL;
	static volatile int64_t t42 = -27118047565929LL;

    t42 = ((x193-(x194-x195))+x196);

    if (t42 != -32763LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x201 = 19330814780329LL;
	int32_t x202 = INT32_MIN;
	int64_t x203 = -1LL;

    t43 = ((x201-(x202-x203))+x204);

    if (t43 != 19332962263975LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x209 = INT32_MAX;
	static uint64_t x210 = UINT64_MAX;
	int16_t x211 = INT16_MAX;
	volatile uint64_t t44 = 859563LLU;

    t44 = ((x209-(x210-x211))+x212);

    if (t44 != 2147516416LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x213 = -1;
	volatile uint64_t x214 = 2810LLU;
	volatile int64_t x215 = INT64_MIN;
	volatile uint64_t t45 = 572LLU;

    t45 = ((x213-(x214-x215))+x216);

    if (t45 != 9223372036854773007LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x217 = INT32_MAX;
	static uint8_t x218 = 12U;
	volatile uint8_t x219 = 1U;

    t46 = ((x217-(x218-x219))+x220);

    if (t46 != 2147450868) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int32_t x221 = 1;
	int64_t x222 = -1LL;
	static uint32_t x223 = 200055U;
	int64_t x224 = INT64_MIN;
	int64_t t47 = -138401LL;

    t47 = ((x221-(x222-x223))+x224);

    if (t47 != -9223372036854575751LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x225 = -1LL;
	int64_t x227 = 1396516338361LL;
	int64_t x228 = INT64_MIN;
	volatile int64_t t48 = -341632LL;

    t48 = ((x225-(x226-x227))+x228);

    if (t48 != -9223370640338470215LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x229 = INT16_MIN;
	static uint64_t x230 = UINT64_MAX;
	int64_t x231 = -20636091LL;
	uint16_t x232 = UINT16_MAX;
	static uint64_t t49 = 209842300210861723LLU;

    t49 = ((x229-(x230-x231))+x232);

    if (t49 != 18446744073688948293LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint64_t x233 = UINT64_MAX;
	static volatile int8_t x235 = INT8_MIN;
	uint64_t t50 = 58158298LLU;

    t50 = ((x233-(x234-x235))+x236);

    if (t50 != 18446744073709518592LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x237 = -1;
	volatile int16_t x239 = INT16_MIN;
	uint8_t x240 = UINT8_MAX;
	static volatile int32_t t51 = 514892;

    t51 = ((x237-(x238-x239))+x240);

    if (t51 != -32641) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x242 = 226542LLU;
	int8_t x243 = INT8_MAX;
	int64_t x244 = INT64_MAX;
	volatile uint64_t t52 = 4807388875849845LLU;

    t52 = ((x241-(x242-x243))+x244);

    if (t52 != 9223372036854549519LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x245 = -55867130471740555LL;
	int32_t x246 = INT32_MIN;
	volatile int16_t x247 = -1;
	int16_t x248 = -1;
	int64_t t53 = -453737456018LL;

    t53 = ((x245-(x246-x247))+x248);

    if (t53 != -55867128324256909LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x249 = 2954541U;
	int32_t x250 = -241;
	volatile uint8_t x251 = 3U;
	static int64_t x252 = INT64_MIN;
	int64_t t54 = 135135652156340LL;

    t54 = ((x249-(x250-x251))+x252);

    if (t54 != -9223372036851821023LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x253 = INT32_MIN;
	int8_t x254 = INT8_MAX;
	int16_t x255 = INT16_MAX;
	static volatile uint16_t x256 = 1614U;
	volatile int32_t t55 = 276995;

    t55 = ((x253-(x254-x255))+x256);

    if (t55 != -2147449394) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x257 = -1;
	int8_t x258 = -1;
	uint64_t x259 = 496081600427LLU;
	volatile uint64_t t56 = 3675422979004782LLU;

    t56 = ((x257-(x258-x259))+x260);

    if (t56 != 496081214266LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x261 = 811;
	int32_t x262 = INT32_MAX;
	uint64_t x263 = UINT64_MAX;
	volatile uint16_t x264 = 8010U;
	volatile uint64_t t57 = 619540687LLU;

    t57 = ((x261-(x262-x263))+x264);

    if (t57 != 18446744071562076789LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x265 = UINT32_MAX;
	static uint8_t x266 = UINT8_MAX;
	int16_t x267 = 2;
	uint8_t x268 = 5U;

    t58 = ((x265-(x266-x267))+x268);

    if (t58 != 4294967047U) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint32_t x269 = UINT32_MAX;
	volatile int32_t x270 = INT32_MAX;
	int16_t x271 = 1;
	volatile uint8_t x272 = 1U;
	uint32_t t59 = 244918U;

    t59 = ((x269-(x270-x271))+x272);

    if (t59 != 2147483650U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x273 = UINT32_MAX;
	static uint64_t x275 = 28LLU;
	volatile int64_t x276 = INT64_MIN;

    t60 = ((x273-(x274-x275))+x276);

    if (t60 != 9223372041149743259LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x278 = INT32_MIN;
	int32_t x280 = 534004630;

    t61 = ((x277-(x278-x279))+x280);

    if (t61 != 1519237725217306309LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x281 = UINT32_MAX;
	int8_t x282 = -1;
	int32_t x283 = -1;
	uint64_t x284 = 218527149978044595LLU;

    t62 = ((x281-(x282-x283))+x284);

    if (t62 != 218527154273011890LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x285 = -7705;
	int32_t x286 = -1;
	int16_t x287 = INT16_MIN;
	int8_t x288 = INT8_MIN;
	int32_t t63 = 185;

    t63 = ((x285-(x286-x287))+x288);

    if (t63 != -40600) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x289 = 183005485;
	int8_t x291 = 57;
	volatile int32_t x292 = INT32_MIN;

    t64 = ((x289-(x290-x291))+x292);

    if (t64 != -1964478105) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x293 = -58;
	int16_t x294 = -1;
	uint8_t x295 = 25U;
	volatile int32_t t65 = 621;

    t65 = ((x293-(x294-x295))+x296);

    if (t65 != 12162) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x297 = INT8_MIN;
	static uint8_t x298 = 9U;
	static uint64_t t66 = 873911LLU;

    t66 = ((x297-(x298-x299))+x300);

    if (t66 != 68328853415LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x305 = 41U;
	uint16_t x308 = 5427U;
	volatile int32_t t67 = 264946697;

    t67 = ((x305-(x306-x307))+x308);

    if (t67 != 38234) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x314 = 103746409U;
	uint32_t x316 = UINT32_MAX;
	uint64_t t68 = 311545124723629LLU;

    t68 = ((x313-(x314-x315))+x316);

    if (t68 != 4191260887LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x317 = INT32_MIN;
	uint64_t x318 = 706905934641078421LLU;
	volatile int8_t x320 = -1;

    t69 = ((x317-(x318-x319))+x320);

    if (t69 != 17739838136920989016LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x329 = INT16_MIN;
	int16_t x330 = INT16_MIN;
	uint64_t x331 = 27663479LLU;
	int8_t x332 = 1;
	static uint64_t t70 = 161LLU;

    t70 = ((x329-(x330-x331))+x332);

    if (t70 != 27663480LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x333 = INT8_MIN;
	uint8_t x334 = 24U;
	int8_t x335 = -1;
	int8_t x336 = -49;
	int32_t t71 = -6054511;

    t71 = ((x333-(x334-x335))+x336);

    if (t71 != -202) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x337 = UINT8_MAX;
	int32_t x338 = -38380056;
	int32_t x339 = INT32_MIN;
	int16_t x340 = -466;
	int32_t t72 = -743441418;

    t72 = ((x337-(x338-x339))+x340);

    if (t72 != -2109103803) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x341 = INT8_MIN;
	volatile int8_t x343 = INT8_MAX;
	int32_t x344 = -1;
	volatile int32_t t73 = 16;

    t73 = ((x341-(x342-x343))+x344);

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x349 = -1;
	int16_t x351 = -2;
	int8_t x352 = -10;
	int32_t t74 = -119779858;

    t74 = ((x349-(x350-x351))+x352);

    if (t74 != -17) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x357 = INT32_MIN;
	int64_t x358 = -3850519874791LL;
	static uint16_t x359 = 55U;
	int16_t x360 = 0;

    t75 = ((x357-(x358-x359))+x360);

    if (t75 != 3848372391198LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x362 = -1;
	static int8_t x363 = INT8_MIN;
	uint8_t x364 = 7U;
	int32_t t76 = -63;

    t76 = ((x361-(x362-x363))+x364);

    if (t76 != 7) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x365 = INT32_MAX;
	static uint32_t x367 = UINT32_MAX;
	volatile uint64_t t77 = 28929740300LLU;

    t77 = ((x365-(x366-x367))+x368);

    if (t77 != 23133864163109LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x373 = UINT8_MAX;
	int16_t x374 = INT16_MAX;
	int32_t x375 = -30526;
	int8_t x376 = INT8_MAX;
	int32_t t78 = -5984383;

    t78 = ((x373-(x374-x375))+x376);

    if (t78 != -62911) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int8_t x377 = 0;
	int32_t x379 = INT32_MAX;
	int32_t x380 = INT32_MIN;
	static volatile int64_t t79 = 2821660213LL;

    t79 = ((x377-(x378-x379))+x380);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x381 = INT8_MIN;
	int16_t x382 = 6317;
	uint32_t x383 = 1U;
	volatile uint32_t t80 = 1457969784U;

    t80 = ((x381-(x382-x383))+x384);

    if (t80 != 4294960852U) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x390 = INT64_MIN;
	static volatile int8_t x391 = -1;
	int8_t x392 = INT8_MAX;
	int64_t t81 = 927007042135LL;

    t81 = ((x389-(x390-x391))+x392);

    if (t81 != 9223372034707292286LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x393 = 1315142411U;
	volatile int32_t x394 = 163713;
	int8_t x396 = INT8_MAX;
	static volatile uint32_t t82 = 51728074U;

    t82 = ((x393-(x394-x395))+x396);

    if (t82 != 1314979080U) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x397 = -14;
	int32_t x398 = INT32_MIN;
	uint64_t x399 = 2LLU;
	static uint32_t x400 = 1U;

    t83 = ((x397-(x398-x399))+x400);

    if (t83 != 2147483637LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x401 = -1LL;
	int32_t x402 = -305;
	static uint32_t x403 = 17140067U;
	int8_t x404 = INT8_MIN;
	volatile int64_t t84 = 30789110017LL;

    t84 = ((x401-(x402-x403))+x404);

    if (t84 != -4277827053LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x405 = 10637455U;
	static volatile int64_t x406 = -107509292092LL;
	uint8_t x408 = 53U;
	volatile int64_t t85 = 98935LL;

    t85 = ((x405-(x406-x407))+x408);

    if (t85 != 105372445952LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x414 = -1LL;
	static volatile int32_t x415 = INT32_MIN;
	volatile int64_t t86 = 398304LL;

    t86 = ((x413-(x414-x415))+x416);

    if (t86 != -4294967423LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x418 = INT64_MIN;
	static int64_t t87 = 2724588407913463LL;

    t87 = ((x417-(x418-x419))+x420);

    if (t87 != -795LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x421 = 4;
	volatile int32_t x422 = -146578525;
	uint8_t x423 = 11U;
	uint8_t x424 = 15U;
	volatile int32_t t88 = -1320;

    t88 = ((x421-(x422-x423))+x424);

    if (t88 != 146578555) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x429 = -1;
	int8_t x430 = INT8_MAX;
	uint8_t x431 = UINT8_MAX;
	int8_t x432 = -3;
	int32_t t89 = -51398596;

    t89 = ((x429-(x430-x431))+x432);

    if (t89 != 124) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x433 = -2982;
	int64_t x434 = 599128786860991742LL;
	static uint32_t x435 = UINT32_MAX;
	int64_t x436 = 4064679452169550LL;

    t90 = ((x433-(x434-x435))+x436);

    if (t90 != -595064103113857879LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x441 = 128430816233069LLU;
	static uint64_t x442 = 144811212625LLU;
	uint64_t x443 = 756179LLU;
	int32_t x444 = 82793365;
	volatile uint64_t t91 = 70760969214098940LLU;

    t91 = ((x441-(x442-x443))+x444);

    if (t91 != 128286088569988LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x445 = 207358LL;
	int32_t x446 = -1411;
	int64_t x447 = -113136906100477421LL;
	int8_t x448 = INT8_MIN;
	volatile int64_t t92 = -844657LL;

    t92 = ((x445-(x446-x447))+x448);

    if (t92 != -113136906100268780LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x449 = -1LL;
	int8_t x452 = -1;

    t93 = ((x449-(x450-x451))+x452);

    if (t93 != -258LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x454 = -15;
	uint16_t x455 = 18608U;
	static int8_t x456 = -3;
	static uint64_t t94 = 5611528137944258LLU;

    t94 = ((x453-(x454-x455))+x456);

    if (t94 != 735391110547486328LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x457 = UINT16_MAX;
	uint64_t x458 = 262064273320668716LLU;
	int32_t x459 = INT32_MIN;
	volatile int16_t x460 = INT16_MIN;
	uint64_t t95 = 57LLU;

    t95 = ((x457-(x458-x459))+x460);

    if (t95 != 18184679798241432019LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x461 = 31;
	uint64_t x462 = UINT64_MAX;
	int16_t x463 = INT16_MAX;
	uint16_t x464 = 41U;

    t96 = ((x461-(x462-x463))+x464);

    if (t96 != 32840LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x467 = 445U;
	static int32_t x468 = -417;
	uint64_t t97 = 4989403658226LLU;

    t97 = ((x465-(x466-x467))+x468);

    if (t97 != 18446729848250095784LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int8_t x473 = INT8_MIN;
	static int16_t x474 = INT16_MIN;
	static int16_t x475 = -1;
	int8_t x476 = -1;

    t98 = ((x473-(x474-x475))+x476);

    if (t98 != 32638) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x482 = 5392LLU;
	int32_t x483 = INT32_MAX;
	static volatile int16_t x484 = INT16_MIN;
	volatile uint64_t t99 = 443683025803LLU;

    t99 = ((x481-(x482-x483))+x484);

    if (t99 != 2147445501LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x485 = -1;
	int32_t x487 = INT32_MAX;
	int32_t x488 = 2334;
	volatile int64_t t100 = 6LL;

    t100 = ((x485-(x486-x487))+x488);

    if (t100 != 2147485981LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x489 = INT8_MIN;
	static int16_t x490 = -1;
	static uint64_t t101 = 1LLU;

    t101 = ((x489-(x490-x491))+x492);

    if (t101 != 198606597891590LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x493 = 2456U;
	int32_t x494 = -267248;
	int8_t x496 = 0;
	volatile int32_t t102 = 0;

    t102 = ((x493-(x494-x495))+x496);

    if (t102 != -2147213944) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x497 = INT32_MAX;
	static uint8_t x498 = 35U;
	static int64_t x499 = -1LL;
	int64_t x500 = -6641886962971LL;
	static volatile int64_t t103 = -79LL;

    t103 = ((x497-(x498-x499))+x500);

    if (t103 != -6639739479360LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x501 = -1LL;
	int32_t x502 = 8111842;
	uint64_t x503 = UINT64_MAX;
	static uint8_t x504 = UINT8_MAX;
	uint64_t t104 = 68699LLU;

    t104 = ((x501-(x502-x503))+x504);

    if (t104 != 18446744073701440027LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x507 = UINT64_MAX;
	volatile uint8_t x508 = UINT8_MAX;
	static uint64_t t105 = 239432LLU;

    t105 = ((x505-(x506-x507))+x508);

    if (t105 != 18446744073652633862LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x513 = 709896LLU;
	static int8_t x514 = INT8_MAX;
	uint8_t x515 = UINT8_MAX;
	static volatile int32_t x516 = -1;
	uint64_t t106 = 71886699LLU;

    t106 = ((x513-(x514-x515))+x516);

    if (t106 != 710023LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint32_t x519 = 1755U;
	volatile int64_t x520 = -1LL;
	int64_t t107 = -44489736LL;

    t107 = ((x517-(x518-x519))+x520);

    if (t107 != -9223372036854774054LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint64_t x521 = 7087LLU;
	volatile int32_t x522 = INT32_MAX;
	int32_t x523 = 539366849;
	static volatile int8_t x524 = -4;

    t108 = ((x521-(x522-x523))+x524);

    if (t108 != 18446744072101441901LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x525 = 405663241159302521LLU;
	static uint64_t x526 = 467847616861360640LLU;

    t109 = ((x525-(x526-x527))+x528);

    if (t109 != 18384559698022745541LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x529 = 14064043430LL;
	static int8_t x530 = -1;
	static uint32_t x531 = 17U;
	int16_t x532 = INT16_MAX;
	int64_t t110 = -6454141260260477LL;

    t110 = ((x529-(x530-x531))+x532);

    if (t110 != 9769108919LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x533 = UINT8_MAX;
	int32_t x535 = INT32_MIN;
	uint64_t x536 = 11305445771LLU;
	volatile uint64_t t111 = 1733499247034226093LLU;

    t111 = ((x533-(x534-x535))+x536);

    if (t111 != 9223372046012738186LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x537 = INT32_MIN;
	int8_t x539 = INT8_MIN;
	static uint64_t x540 = 21559LLU;

    t112 = ((x537-(x538-x539))+x540);

    if (t112 != 18446744071562089400LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x545 = 2U;
	uint16_t x546 = 17U;
	static uint64_t x547 = UINT64_MAX;
	static int64_t x548 = INT64_MIN;
	static volatile uint64_t t113 = 6056907802886LLU;

    t113 = ((x545-(x546-x547))+x548);

    if (t113 != 9223372036854775792LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x550 = INT8_MIN;
	static int64_t x551 = -1LL;
	uint16_t x552 = 1835U;
	static volatile int64_t t114 = -24399867986714LL;

    t114 = ((x549-(x550-x551))+x552);

    if (t114 != 4294969257LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x558 = 478U;
	static volatile uint8_t x560 = 9U;
	volatile uint32_t t115 = 1997906U;

    t115 = ((x557-(x558-x559))+x560);

    if (t115 != 2182564155U) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x561 = 1896U;
	volatile int32_t x562 = INT32_MAX;
	int32_t x563 = INT32_MAX;
	uint32_t x564 = 21U;
	uint32_t t116 = 158U;

    t116 = ((x561-(x562-x563))+x564);

    if (t116 != 1917U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x565 = 801293776U;
	uint64_t x567 = UINT64_MAX;
	volatile uint64_t x568 = 289278LLU;

    t117 = ((x565-(x566-x567))+x568);

    if (t117 != 801583054LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x573 = 3232U;
	int8_t x574 = INT8_MAX;
	int8_t x575 = -1;
	int32_t t118 = 106;

    t118 = ((x573-(x574-x575))+x576);

    if (t118 != 3151) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x577 = INT16_MIN;
	uint8_t x578 = UINT8_MAX;
	volatile int32_t x579 = -2497;
	int32_t x580 = -1;

    t119 = ((x577-(x578-x579))+x580);

    if (t119 != -35521) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x585 = 70175871U;
	int16_t x586 = INT16_MIN;
	uint16_t x588 = 10592U;

    t120 = ((x585-(x586-x587))+x588);

    if (t120 != 70217410U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x589 = UINT16_MAX;
	int64_t x590 = INT64_MIN;
	uint64_t x591 = UINT64_MAX;
	volatile int16_t x592 = INT16_MAX;
	volatile uint64_t t121 = 1866LLU;

    t121 = ((x589-(x590-x591))+x592);

    if (t121 != 9223372036854874109LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x593 = INT8_MAX;
	static uint8_t x594 = UINT8_MAX;
	uint16_t x595 = 0U;
	uint64_t x596 = 243616172539581294LLU;

    t122 = ((x593-(x594-x595))+x596);

    if (t122 != 243616172539581166LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x597 = 21;
	volatile uint32_t x600 = UINT32_MAX;
	static volatile int64_t t123 = 1LL;

    t123 = ((x597-(x598-x599))+x600);

    if (t123 != -177997804079393LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x601 = -1167;
	static int8_t x602 = INT8_MIN;
	static int8_t x603 = 19;
	int16_t x604 = INT16_MAX;

    t124 = ((x601-(x602-x603))+x604);

    if (t124 != 31747) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x605 = 2877539004670LL;
	static volatile int8_t x606 = -1;
	volatile uint64_t x607 = 15292LLU;
	volatile int32_t x608 = -312083682;
	volatile uint64_t t125 = 3002LLU;

    t125 = ((x605-(x606-x607))+x608);

    if (t125 != 2877226936281LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x611 = 0U;
	int16_t x612 = -53;
	uint64_t t126 = 4420836060LLU;

    t126 = ((x609-(x610-x611))+x612);

    if (t126 != 18446744073483344228LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x613 = INT64_MIN;
	int8_t x614 = -1;
	int64_t x615 = 77344860200945054LL;
	volatile int64_t t127 = -2422LL;

    t127 = ((x613-(x614-x615))+x616);

    if (t127 != -9146027172358863458LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x621 = 2812574779626054287LL;
	volatile int64_t x622 = -1LL;
	uint32_t x623 = 6972U;
	int16_t x624 = INT16_MIN;
	int64_t t128 = -2934064443LL;

    t128 = ((x621-(x622-x623))+x624);

    if (t128 != 2812574779626028492LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile uint64_t x625 = 1174LLU;
	int64_t x626 = 0LL;
	static uint64_t x627 = 11844284319LLU;
	int32_t x628 = INT32_MIN;
	volatile uint64_t t129 = 105094050203434405LLU;

    t129 = ((x625-(x626-x627))+x628);

    if (t129 != 9696801845LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x637 = INT8_MIN;
	uint8_t x638 = UINT8_MAX;
	int32_t x640 = INT32_MAX;

    t130 = ((x637-(x638-x639))+x640);

    if (t130 != 2147450496) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x641 = -31;
	uint64_t x643 = 193657821995LLU;
	int8_t x644 = INT8_MAX;
	static volatile uint64_t t131 = 7013742376428009LLU;

    t131 = ((x641-(x642-x643))+x644);

    if (t131 != 193652958033LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x645 = 724U;
	static int16_t x646 = -1;
	int16_t x647 = 968;
	uint16_t x648 = 9496U;
	int32_t t132 = 966938;

    t132 = ((x645-(x646-x647))+x648);

    if (t132 != 11189) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint64_t x649 = UINT64_MAX;
	int16_t x650 = -1;
	uint64_t x651 = 181877965843LLU;
	uint64_t x652 = 17LLU;
	static volatile uint64_t t133 = 1017358848LLU;

    t133 = ((x649-(x650-x651))+x652);

    if (t133 != 181877965860LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x653 = INT8_MIN;
	int8_t x654 = -1;
	uint32_t x655 = UINT32_MAX;
	int32_t x656 = INT32_MIN;

    t134 = ((x653-(x654-x655))+x656);

    if (t134 != 2147483520U) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x657 = INT8_MAX;
	volatile uint8_t x658 = 8U;
	uint16_t x659 = UINT16_MAX;
	int64_t x660 = INT64_MIN;
	static volatile int64_t t135 = 2904LL;

    t135 = ((x657-(x658-x659))+x660);

    if (t135 != -9223372036854710154LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x661 = 39U;
	int16_t x662 = 45;
	static uint16_t x663 = 0U;
	uint32_t x664 = 883607653U;
	volatile uint32_t t136 = 1746038464U;

    t136 = ((x661-(x662-x663))+x664);

    if (t136 != 883607647U) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int64_t x669 = -1LL;
	uint32_t x670 = 177962U;
	static int64_t x671 = -1LL;
	int64_t x672 = -208807986349467LL;
	int64_t t137 = 117148859622LL;

    t137 = ((x669-(x670-x671))+x672);

    if (t137 != -208807986527431LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x673 = INT8_MIN;
	static uint64_t x674 = 253885885616LLU;
	static uint8_t x675 = 6U;
	int64_t x676 = INT64_MIN;
	static uint64_t t138 = 896290455634888LLU;

    t138 = ((x673-(x674-x675))+x676);

    if (t138 != 9223371782968890070LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x681 = INT16_MAX;
	uint32_t x683 = 4356U;
	static int32_t x684 = INT32_MIN;

    t139 = ((x681-(x682-x683))+x684);

    if (t139 != 2147520772U) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x689 = -1;
	uint32_t x691 = UINT32_MAX;
	int16_t x692 = 0;
	uint64_t t140 = 195244951LLU;

    t140 = ((x689-(x690-x691))+x692);

    if (t140 != 4294967295LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x697 = -1;
	static uint32_t x698 = 99654U;
	volatile uint32_t x699 = 269428906U;
	static volatile int32_t x700 = INT32_MAX;
	volatile uint32_t t141 = 181243518U;

    t141 = ((x697-(x698-x699))+x700);

    if (t141 != 2416812898U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x701 = 74569286U;
	static uint32_t x702 = 281214132U;
	static int64_t x703 = 69045188770586141LL;
	int16_t x704 = -1;

    t142 = ((x701-(x702-x703))+x704);

    if (t142 != 69045188563941294LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x709 = -1;
	int32_t x710 = -7986559;
	int64_t x711 = -17325LL;
	int16_t x712 = -1;
	volatile int64_t t143 = 27445896LL;

    t143 = ((x709-(x710-x711))+x712);

    if (t143 != 7969232LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x713 = 2;
	int32_t x715 = INT32_MIN;
	int16_t x716 = -1581;

    t144 = ((x713-(x714-x715))+x716);

    if (t144 != 18446490243443779849LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x717 = 29522188LL;
	uint64_t x720 = 3731429LLU;
	volatile uint64_t t145 = 14643031LLU;

    t145 = ((x717-(x718-x719))+x720);

    if (t145 != 33195526LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x721 = INT64_MAX;
	uint16_t x722 = UINT16_MAX;
	volatile int32_t x724 = -189745444;
	static int64_t t146 = -1LL;

    t146 = ((x721-(x722-x723))+x724);

    if (t146 != 9223372036664932060LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x725 = UINT8_MAX;
	static int8_t x726 = INT8_MAX;
	int16_t x727 = INT16_MIN;
	static uint32_t x728 = UINT32_MAX;

    t147 = ((x725-(x726-x727))+x728);

    if (t147 != 4294934655U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x729 = 6749U;
	int64_t x730 = 2870614492LL;
	int8_t x731 = -36;
	uint64_t x732 = UINT64_MAX;
	uint64_t t148 = 1405297916585LLU;

    t148 = ((x729-(x730-x731))+x732);

    if (t148 != 18446744070838943836LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x742 = -1LL;
	int32_t x743 = -67216;
	static int64_t x744 = -101827LL;

    t149 = ((x741-(x742-x743))+x744);

    if (t149 != -169043LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x748 = INT16_MIN;
	volatile int64_t t150 = 314LL;

    t150 = ((x745-(x746-x747))+x748);

    if (t150 != -4223465634LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x749 = 55;
	uint8_t x751 = 2U;
	int16_t x752 = INT16_MAX;
	int32_t t151 = -11;

    t151 = ((x749-(x750-x751))+x752);

    if (t151 != 65592) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x753 = -66;
	int8_t x754 = INT8_MIN;
	int16_t x755 = -1;
	uint8_t x756 = 2U;
	static int32_t t152 = 6;

    t152 = ((x753-(x754-x755))+x756);

    if (t152 != 63) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x761 = 106LLU;
	static int32_t x762 = INT32_MIN;
	static int8_t x763 = INT8_MIN;
	static volatile uint16_t x764 = UINT16_MAX;
	volatile uint64_t t153 = 10037551980600LLU;

    t153 = ((x761-(x762-x763))+x764);

    if (t153 != 2147549161LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x766 = UINT64_MAX;
	int16_t x767 = 161;

    t154 = ((x765-(x766-x767))+x768);

    if (t154 != 8589934752LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x769 = INT16_MAX;
	int32_t x770 = INT32_MIN;
	int32_t x771 = -43952;
	volatile int32_t x772 = 9684;
	int32_t t155 = -1;

    t155 = ((x769-(x770-x771))+x772);

    if (t155 != 2147482147) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x773 = INT16_MAX;
	int16_t x774 = INT16_MAX;
	int32_t x775 = -175783;
	uint8_t x776 = 2U;
	static volatile int32_t t156 = 1321;

    t156 = ((x773-(x774-x775))+x776);

    if (t156 != -175781) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint8_t x777 = UINT8_MAX;
	uint16_t x778 = UINT16_MAX;
	int32_t x779 = 292668480;
	uint16_t x780 = UINT16_MAX;
	volatile int32_t t157 = 14;

    t157 = ((x777-(x778-x779))+x780);

    if (t157 != 292668735) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x781 = -1;
	volatile uint32_t x782 = 0U;
	uint64_t x783 = 544085469900755502LLU;
	static volatile int16_t x784 = INT16_MIN;
	volatile uint64_t t158 = 33365853162533806LLU;

    t158 = ((x781-(x782-x783))+x784);

    if (t158 != 544085469900722733LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x785 = UINT64_MAX;
	static int32_t x786 = INT32_MIN;
	int64_t x787 = -1LL;
	uint64_t x788 = UINT64_MAX;
	uint64_t t159 = 519211751870795741LLU;

    t159 = ((x785-(x786-x787))+x788);

    if (t159 != 2147483645LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x789 = 14;
	static volatile int32_t x790 = -1;
	volatile int8_t x791 = INT8_MAX;
	static uint64_t x792 = 887943474098665LLU;
	uint64_t t160 = 103445605LLU;

    t160 = ((x789-(x790-x791))+x792);

    if (t160 != 887943474098807LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x793 = -3;
	static int16_t x794 = 17;
	uint32_t x795 = 0U;

    t161 = ((x793-(x794-x795))+x796);

    if (t161 != 4294967148U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x797 = 109U;
	uint64_t x798 = 17520560LLU;
	static int8_t x799 = INT8_MAX;
	static int64_t x800 = 14845320LL;
	volatile uint64_t t162 = 26241724301298569LLU;

    t162 = ((x797-(x798-x799))+x800);

    if (t162 != 18446744073706876612LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x802 = INT16_MIN;
	int64_t x803 = 27988LL;
	volatile int16_t x804 = INT16_MAX;
	int64_t t163 = 1678717628936LL;

    t163 = ((x801-(x802-x803))+x804);

    if (t163 != 1298713LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x809 = -1LL;
	volatile uint64_t x810 = UINT64_MAX;
	int8_t x812 = INT8_MIN;

    t164 = ((x809-(x810-x811))+x812);

    if (t164 != 409132721640436097LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x813 = INT8_MAX;
	uint16_t x814 = UINT16_MAX;
	static int8_t x815 = INT8_MIN;
	static uint64_t x816 = 9817700660684LLU;
	volatile uint64_t t165 = 1325770951187LLU;

    t165 = ((x813-(x814-x815))+x816);

    if (t165 != 9817700595148LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x821 = -1;
	static int8_t x822 = -31;
	int16_t x823 = INT16_MIN;
	uint64_t x824 = UINT64_MAX;
	uint64_t t166 = 3LLU;

    t166 = ((x821-(x822-x823))+x824);

    if (t166 != 18446744073709518877LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x825 = INT16_MIN;
	int16_t x826 = INT16_MAX;
	int64_t x828 = 483752161292249LL;
	volatile int64_t t167 = -29322968991926118LL;

    t167 = ((x825-(x826-x827))+x828);

    if (t167 != 483756456194129LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x833 = INT16_MIN;
	static int32_t x834 = -1;
	volatile uint8_t x835 = 5U;
	uint32_t x836 = 30669U;
	uint32_t t168 = 44U;

    t168 = ((x833-(x834-x835))+x836);

    if (t168 != 4294965203U) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint32_t x837 = 7365U;
	int8_t x838 = INT8_MAX;
	int16_t x839 = -1;
	static volatile uint32_t x840 = 6972155U;
	uint32_t t169 = 270747U;

    t169 = ((x837-(x838-x839))+x840);

    if (t169 != 6979392U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x841 = 112U;
	int32_t x842 = INT32_MIN;
	static uint64_t x843 = 58825736LLU;
	volatile uint64_t t170 = 94418060641136126LLU;

    t170 = ((x841-(x842-x843))+x844);

    if (t170 != 2206309507LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint64_t x845 = UINT64_MAX;
	uint64_t x846 = UINT64_MAX;
	uint8_t x847 = 91U;
	uint8_t x848 = 1U;
	volatile uint64_t t171 = 4LLU;

    t171 = ((x845-(x846-x847))+x848);

    if (t171 != 92LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x849 = -613;
	int32_t x850 = -6;
	volatile int16_t x851 = INT16_MAX;
	uint64_t x852 = 1239720LLU;

    t172 = ((x849-(x850-x851))+x852);

    if (t172 != 1271880LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x858 = INT32_MIN;
	static int32_t x859 = -1;
	volatile uint64_t t173 = 0LLU;

    t173 = ((x857-(x858-x859))+x860);

    if (t173 != 2070088803LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x861 = -1924438LL;
	volatile int16_t x863 = -1;
	int64_t x864 = 647633LL;
	int64_t t174 = 13404525LL;

    t174 = ((x861-(x862-x863))+x864);

    if (t174 != -1276805LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x869 = INT64_MAX;
	static int16_t x870 = INT16_MIN;
	int64_t x872 = INT64_MIN;
	volatile int64_t t175 = -19458607LL;

    t175 = ((x869-(x870-x871))+x872);

    if (t175 != -2727508613244291990LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x873 = -1;
	uint16_t x875 = 1U;
	int8_t x876 = -1;
	static int32_t t176 = 562588;

    t176 = ((x873-(x874-x875))+x876);

    if (t176 != -53) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x877 = 22U;
	int16_t x878 = INT16_MIN;
	volatile int16_t x879 = INT16_MAX;
	int16_t x880 = INT16_MIN;

    t177 = ((x877-(x878-x879))+x880);

    if (t177 != 32789) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x881 = 1464;
	uint16_t x882 = UINT16_MAX;
	uint16_t x883 = 186U;
	int32_t x884 = INT32_MAX;

    t178 = ((x881-(x882-x883))+x884);

    if (t178 != 2147419762) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x889 = -167;
	volatile int8_t x890 = INT8_MIN;
	uint32_t x891 = 63472U;
	int32_t x892 = INT32_MIN;
	uint32_t t179 = 446U;

    t179 = ((x889-(x890-x891))+x892);

    if (t179 != 2147547081U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x893 = INT8_MIN;
	volatile uint32_t x894 = 788784834U;
	volatile int8_t x895 = INT8_MIN;
	uint32_t x896 = 9U;
	static volatile uint32_t t180 = 57202006U;

    t180 = ((x893-(x894-x895))+x896);

    if (t180 != 3506182215U) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x897 = INT8_MAX;
	volatile int16_t x898 = -1;
	uint16_t x899 = 14U;
	volatile int32_t x900 = 359578958;
	volatile int32_t t181 = -1714075;

    t181 = ((x897-(x898-x899))+x900);

    if (t181 != 359579100) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x901 = 25U;
	int16_t x902 = -1;
	static int16_t x903 = -1;
	int32_t x904 = 3952;

    t182 = ((x901-(x902-x903))+x904);

    if (t182 != 3977) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x905 = INT8_MIN;
	int16_t x906 = -2;

    t183 = ((x905-(x906-x907))+x908);

    if (t183 != -33134) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x913 = UINT32_MAX;
	volatile uint32_t x914 = UINT32_MAX;
	volatile int32_t x916 = 5266534;

    t184 = ((x913-(x914-x915))+x916);

    if (t184 != 5266534U) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x917 = -7759525205LL;
	int8_t x918 = INT8_MAX;
	int32_t x919 = -153184254;
	int8_t x920 = INT8_MIN;
	int64_t t185 = 1088936339449029653LL;

    t185 = ((x917-(x918-x919))+x920);

    if (t185 != -7912709714LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x921 = INT64_MAX;
	uint32_t x922 = UINT32_MAX;
	volatile int16_t x923 = INT16_MIN;
	volatile int64_t x924 = INT64_MIN;
	static int64_t t186 = 228860880309372438LL;

    t186 = ((x921-(x922-x923))+x924);

    if (t186 != -32768LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x929 = -2;
	volatile int8_t x930 = 40;
	int8_t x931 = INT8_MIN;
	int8_t x932 = -1;
	volatile int32_t t187 = 731488;

    t187 = ((x929-(x930-x931))+x932);

    if (t187 != -171) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x934 = -48461;
	int8_t x936 = INT8_MIN;
	int32_t t188 = -300;

    t188 = ((x933-(x934-x935))+x936);

    if (t188 != 48843) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x937 = -569909604416312LL;
	int32_t x939 = 84;
	int16_t x940 = INT16_MIN;

    t189 = ((x937-(x938-x939))+x940);

    if (t189 != -569911751932643LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x941 = 0;
	volatile uint32_t x942 = UINT32_MAX;
	int32_t x943 = INT32_MAX;
	int8_t x944 = INT8_MIN;
	uint32_t t190 = 4082U;

    t190 = ((x941-(x942-x943))+x944);

    if (t190 != 2147483520U) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint16_t x945 = 118U;
	int8_t x946 = 12;

    t191 = ((x945-(x946-x947))+x948);

    if (t191 != 4294934636U) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x949 = 715U;
	uint16_t x950 = 3U;
	volatile int64_t x951 = 11493328168951LL;
	volatile int64_t x952 = -1LL;

    t192 = ((x949-(x950-x951))+x952);

    if (t192 != 11493328169662LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint32_t x953 = UINT32_MAX;
	int32_t x954 = INT32_MIN;
	int16_t x955 = -1;
	static volatile uint32_t x956 = 2110752U;
	volatile uint32_t t193 = 1885115707U;

    t193 = ((x953-(x954-x955))+x956);

    if (t193 != 2149594398U) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x957 = INT16_MIN;
	static uint64_t x958 = 0LLU;
	static int64_t x960 = 126399925293LL;
	volatile uint64_t t194 = 9322781165674282LLU;

    t194 = ((x957-(x958-x959))+x960);

    if (t194 != 126415018956LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x973 = INT8_MAX;
	volatile int8_t x975 = -24;
	static volatile int32_t t195 = 6;

    t195 = ((x973-(x974-x975))+x976);

    if (t195 != -1075724) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x982 = 8U;
	static int32_t x983 = INT32_MIN;
	volatile int64_t x984 = INT64_MIN;
	volatile int64_t t196 = 94634947250LL;

    t196 = ((x981-(x982-x983))+x984);

    if (t196 != -2147483657LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x985 = UINT32_MAX;
	int8_t x986 = INT8_MAX;
	int8_t x987 = INT8_MIN;
	static int8_t x988 = INT8_MIN;
	uint32_t t197 = 32U;

    t197 = ((x985-(x986-x987))+x988);

    if (t197 != 4294966912U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x993 = 1812857949U;
	uint16_t x994 = 932U;
	int16_t x996 = INT16_MAX;
	int64_t t198 = 78217155206380841LL;

    t198 = ((x993-(x994-x995))+x996);

    if (t198 != 1809238169LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x997 = INT64_MIN;
	static uint64_t x998 = 508071259613272049LLU;
	int32_t x1000 = -227;
	static uint64_t t199 = 153843LLU;

    t199 = ((x997-(x998-x999))+x1000);

    if (t199 != 8715300777241472521LLU) { NG(); } else { ; }
	
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

