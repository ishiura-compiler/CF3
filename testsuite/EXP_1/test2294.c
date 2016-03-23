
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

volatile int32_t x8 = -10;
volatile uint64_t x12 = 27458LLU;
volatile int32_t x16 = -38;
volatile int32_t t4 = -8985;
uint64_t x23 = 1768LLU;
uint32_t x32 = 128917710U;
int16_t x39 = INT16_MIN;
volatile uint64_t x40 = UINT64_MAX;
int8_t x41 = INT8_MAX;
int32_t x42 = -127288973;
int32_t x43 = 867472724;
volatile int32_t t11 = -96038448;
volatile int64_t t12 = -140LL;
volatile uint32_t t14 = 17U;
static int8_t x63 = 1;
static int64_t x65 = INT64_MIN;
int16_t x66 = INT16_MIN;
static volatile uint8_t x69 = 3U;
volatile uint64_t x70 = 110787LLU;
int64_t t18 = -1855553227742897638LL;
int32_t x79 = -1;
int16_t x81 = 0;
uint32_t x82 = 45091U;
static uint8_t x90 = 5U;
int32_t t23 = -4;
static int8_t x99 = -1;
static int64_t t24 = 6791LL;
uint8_t x107 = 0U;
uint8_t x111 = 9U;
uint8_t x122 = UINT8_MAX;
int32_t t30 = 0;
uint32_t x125 = 200U;
volatile int64_t x130 = -3068148838983119446LL;
int16_t x135 = INT16_MIN;
static volatile int32_t t33 = 38910;
int8_t x137 = INT8_MIN;
int64_t x138 = INT64_MIN;
uint32_t x149 = UINT32_MAX;
int32_t x152 = -1;
uint64_t x155 = UINT64_MAX;
int16_t x160 = INT16_MIN;
uint64_t x163 = 100204LLU;
volatile uint64_t x165 = 3LLU;
static uint32_t x169 = 5226U;
uint16_t x170 = 6U;
int16_t x171 = 25;
int16_t x172 = 95;
int32_t t43 = 1747985;
int64_t x180 = -1LL;
int16_t x183 = -5834;
uint64_t x184 = 207922LLU;
uint64_t t45 = 595425261406LLU;
int16_t x186 = -1;
int64_t x191 = INT64_MIN;
int16_t x193 = -30;
uint64_t x201 = 7597877LLU;
int64_t t50 = -6587501807039LL;
static int8_t x205 = INT8_MIN;
int16_t x206 = INT16_MIN;
static int32_t x208 = -36410;
uint64_t x213 = UINT64_MAX;
uint16_t x215 = 11724U;
volatile int32_t t57 = 2;
int8_t x240 = INT8_MIN;
uint8_t x247 = UINT8_MAX;
int16_t x249 = -1;
static volatile int8_t x251 = -1;
int32_t x252 = -1;
volatile uint16_t x259 = 5U;
volatile int64_t t64 = 47645908668LL;
static int16_t x261 = 11;
static int64_t x268 = 167046052080LL;
int32_t x270 = -1;
static int64_t t67 = 0LL;
static int64_t x276 = 96647944908332368LL;
uint16_t x279 = 1U;
uint32_t x286 = 618213193U;
static int8_t x287 = -1;
volatile int64_t x291 = INT64_MAX;
int64_t x292 = -1087693LL;
volatile int64_t t72 = 1LL;
volatile int32_t t73 = -61092638;
int8_t x298 = -9;
uint64_t t74 = 534438688LLU;
volatile int32_t x303 = INT32_MAX;
int64_t x308 = INT64_MIN;
uint32_t x309 = UINT32_MAX;
static int32_t x310 = 3597331;
int32_t x312 = -99;
uint16_t x315 = 27500U;
static int32_t t78 = 10487;
int32_t x317 = INT32_MIN;
int64_t x325 = -247089947262687LL;
int64_t t81 = -3423382303604643141LL;
uint8_t x329 = 101U;
int8_t x330 = INT8_MAX;
uint64_t x334 = 1586176LLU;
volatile int8_t x337 = INT8_MIN;
uint16_t x341 = 3U;
int64_t x346 = INT64_MAX;
volatile uint8_t x352 = 1U;
volatile int32_t x353 = INT32_MIN;
int64_t x354 = INT64_MIN;
static volatile int32_t t89 = -12767295;
volatile int32_t x364 = -1;
int32_t x367 = -1;
volatile uint16_t x376 = 2U;
static int32_t x379 = -638510;
int32_t t94 = -908077920;
static uint16_t x384 = 30235U;
int32_t t95 = -326;
int64_t t98 = 799098717646LL;
uint8_t x398 = 4U;
static int32_t t99 = 7;
volatile uint8_t x401 = 2U;
volatile int8_t x402 = -1;
static volatile int32_t t105 = -327385468;
uint32_t x436 = 438046264U;
static int8_t x440 = INT8_MIN;
static int64_t x447 = -1LL;
int8_t x453 = INT8_MAX;
static uint32_t x463 = 878389U;
int32_t x464 = INT32_MAX;
int64_t t116 = 721899942LL;
int8_t x471 = INT8_MAX;
int8_t x479 = INT8_MAX;
uint32_t x482 = 210562U;
uint32_t x489 = 354U;
static uint8_t x490 = 0U;
static int32_t x492 = INT32_MAX;
int8_t x493 = 12;
int8_t x495 = INT8_MIN;
static uint64_t x501 = 69616846367175LLU;
static uint8_t x502 = UINT8_MAX;
volatile int32_t t125 = 12729;
int8_t x514 = 5;
static int16_t x525 = -1;
int16_t x533 = -3496;
int8_t x539 = -1;
static int32_t t134 = 28581;
int8_t x554 = 0;
int64_t x562 = -1LL;
uint8_t x564 = UINT8_MAX;
int16_t x566 = INT16_MIN;
uint64_t x569 = UINT64_MAX;
static int32_t x570 = 40457;
uint8_t x573 = 19U;
uint32_t x580 = UINT32_MAX;
int32_t x586 = INT32_MAX;
static volatile int64_t t146 = -59LL;
int8_t x593 = INT8_MIN;
volatile int8_t x594 = INT8_MAX;
int32_t t149 = -528217;
uint32_t t150 = 1U;
int16_t x605 = INT16_MIN;
static int64_t x607 = INT64_MIN;
uint32_t x608 = 24807279U;
volatile int16_t x611 = 1;
int64_t x613 = INT64_MIN;
static int32_t x615 = -1;
int32_t t153 = 17839790;
int8_t x618 = 9;
uint8_t x619 = 4U;
volatile int32_t t154 = 1;
static int32_t t155 = -107;
int64_t x626 = INT64_MIN;
volatile int32_t t158 = 132842295;
static uint64_t x639 = 2150918087287LLU;
int8_t x640 = 3;
volatile int32_t t159 = 1030736155;
int32_t x644 = -1;
static int64_t x647 = INT64_MIN;
int8_t x651 = -1;
static uint64_t x653 = UINT64_MAX;
uint64_t x654 = 86722306424545939LLU;
int8_t x656 = INT8_MIN;
int16_t x657 = -23;
int32_t x659 = 4018491;
static volatile int8_t x663 = INT8_MAX;
uint64_t t166 = 91LLU;
int16_t x669 = INT16_MIN;
int64_t x673 = 24LL;
static volatile int32_t t168 = -170;
int16_t x677 = 1;
uint32_t x679 = 268461019U;
int16_t x686 = INT16_MIN;
int32_t t171 = -1645;
uint32_t x689 = 56922U;
int64_t x694 = INT64_MIN;
int64_t x695 = -1LL;
int32_t x696 = INT32_MIN;
static int32_t t174 = -816;
volatile int32_t t176 = 5632168;
volatile int8_t x711 = INT8_MIN;
int64_t x715 = 3755592LL;
int32_t x719 = 5908;
int32_t x723 = INT32_MIN;
volatile int32_t x727 = INT32_MAX;
volatile int32_t t182 = -491624;
static int64_t x734 = INT64_MIN;
int32_t t184 = -845181070;
int16_t x743 = INT16_MIN;
int32_t x745 = INT32_MIN;
uint16_t x747 = UINT16_MAX;
static uint8_t x749 = 38U;
static int8_t x753 = INT8_MIN;
volatile int16_t x758 = INT16_MIN;
uint64_t x760 = UINT64_MAX;
volatile uint64_t t189 = 76012153LLU;
static int64_t x765 = -1LL;
int8_t x767 = INT8_MIN;
int32_t x768 = -1;
volatile uint32_t x769 = 6190U;
uint32_t x783 = 104243U;
int64_t x790 = -6704639937026129LL;
int32_t t197 = -42;
int32_t x794 = 17594871;
int32_t t198 = 276355008;
int32_t x797 = -23988;
volatile int32_t t199 = 558;


void f0(void) {
    	int16_t x1 = -1;
	int8_t x2 = -1;
	int32_t x3 = -781;
	static uint32_t x4 = 98U;
	static volatile uint32_t t0 = 909U;

    t0 = (((x1&x2)<=x3)&x4);

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -1LL;
	uint16_t x6 = UINT16_MAX;
	static volatile uint64_t x7 = UINT64_MAX;
	int32_t t1 = -1673;

    t1 = (((x5&x6)<=x7)&x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = INT8_MAX;
	uint16_t x10 = 3U;
	int8_t x11 = INT8_MIN;
	volatile uint64_t t2 = 7LLU;

    t2 = (((x9&x10)<=x11)&x12);

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x13 = 175LL;
	int32_t x14 = INT32_MIN;
	int16_t x15 = INT16_MAX;
	static int32_t t3 = -3412;

    t3 = (((x13&x14)<=x15)&x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = 0U;
	uint32_t x18 = 5U;
	int16_t x19 = -28;
	volatile uint16_t x20 = UINT16_MAX;

    t4 = (((x17&x18)<=x19)&x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = 1U;
	volatile uint64_t x22 = 0LLU;
	int64_t x24 = INT64_MIN;
	int64_t t5 = 0LL;

    t5 = (((x21&x22)<=x23)&x24);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = UINT16_MAX;
	int32_t x26 = INT32_MAX;
	static int64_t x27 = 26696255305176184LL;
	int8_t x28 = INT8_MIN;
	static int32_t t6 = 3;

    t6 = (((x25&x26)<=x27)&x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = 0;
	volatile int64_t x30 = -1LL;
	int8_t x31 = -7;
	uint32_t t7 = 365U;

    t7 = (((x29&x30)<=x31)&x32);

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 307U;
	int8_t x34 = INT8_MAX;
	static int16_t x35 = -360;
	uint64_t x36 = 6458108142962LLU;
	volatile uint64_t t8 = 11227LLU;

    t8 = (((x33&x34)<=x35)&x36);

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x37 = INT64_MAX;
	int64_t x38 = -1LL;
	volatile uint64_t t9 = 2293704013LLU;

    t9 = (((x37&x38)<=x39)&x40);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x44 = INT64_MIN;
	static volatile int64_t t10 = -1792924LL;

    t10 = (((x41&x42)<=x43)&x44);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MAX;
	volatile uint16_t x46 = 6355U;
	uint64_t x47 = 81355968LLU;
	volatile int32_t x48 = 5;

    t11 = (((x45&x46)<=x47)&x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MIN;
	static uint8_t x50 = UINT8_MAX;
	int64_t x51 = INT64_MAX;
	int64_t x52 = INT64_MIN;

    t12 = (((x49&x50)<=x51)&x52);

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 40U;
	uint32_t x54 = 2024493161U;
	int16_t x55 = INT16_MIN;
	uint16_t x56 = 5087U;
	volatile int32_t t13 = 0;

    t13 = (((x53&x54)<=x55)&x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MIN;
	int32_t x58 = -3755665;
	volatile uint32_t x59 = 0U;
	volatile uint32_t x60 = UINT32_MAX;

    t14 = (((x57&x58)<=x59)&x60);

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = UINT64_MAX;
	uint64_t x62 = UINT64_MAX;
	int8_t x64 = INT8_MIN;
	volatile int32_t t15 = 17690;

    t15 = (((x61&x62)<=x63)&x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x67 = 3U;
	volatile int64_t x68 = -1LL;
	int64_t t16 = -566599225369041LL;

    t16 = (((x65&x66)<=x67)&x68);

    if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x71 = INT16_MAX;
	uint64_t x72 = UINT64_MAX;
	volatile uint64_t t17 = 3137980327040969LLU;

    t17 = (((x69&x70)<=x71)&x72);

    if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = UINT8_MAX;
	uint64_t x74 = 286214588LLU;
	int8_t x75 = INT8_MIN;
	static int64_t x76 = INT64_MAX;

    t18 = (((x73&x74)<=x75)&x76);

    if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x77 = 195LL;
	int32_t x78 = 255700022;
	static uint64_t x80 = 3LLU;
	volatile uint64_t t19 = 32LLU;

    t19 = (((x77&x78)<=x79)&x80);

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x83 = 3;
	int16_t x84 = INT16_MIN;
	int32_t t20 = 18051;

    t20 = (((x81&x82)<=x83)&x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint16_t x85 = UINT16_MAX;
	uint8_t x86 = 4U;
	int16_t x87 = -44;
	volatile uint8_t x88 = 16U;
	volatile int32_t t21 = 3;

    t21 = (((x85&x86)<=x87)&x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x89 = UINT8_MAX;
	uint8_t x91 = 50U;
	int64_t x92 = -245152751940LL;
	int64_t t22 = -230LL;

    t22 = (((x89&x90)<=x91)&x92);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = INT16_MAX;
	static uint16_t x94 = UINT16_MAX;
	int64_t x95 = -155248688779120LL;
	static int16_t x96 = -1;

    t23 = (((x93&x94)<=x95)&x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x97 = -1;
	int8_t x98 = 1;
	int64_t x100 = 321926496123152LL;

    t24 = (((x97&x98)<=x99)&x100);

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x101 = 501U;
	uint32_t x102 = UINT32_MAX;
	int64_t x103 = INT64_MAX;
	static uint16_t x104 = UINT16_MAX;
	int32_t t25 = 4;

    t25 = (((x101&x102)<=x103)&x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MIN;
	int8_t x106 = 2;
	volatile uint64_t x108 = 815316126863LLU;
	static volatile uint64_t t26 = 22378533LLU;

    t26 = (((x105&x106)<=x107)&x108);

    if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int32_t x109 = 32933;
	static int64_t x110 = 10296216230888LL;
	int32_t x112 = 10560778;
	volatile int32_t t27 = 12;

    t27 = (((x109&x110)<=x111)&x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = INT64_MAX;
	uint32_t x114 = 4505U;
	int16_t x115 = INT16_MIN;
	volatile uint16_t x116 = UINT16_MAX;
	int32_t t28 = 19;

    t28 = (((x113&x114)<=x115)&x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x117 = -1;
	volatile uint32_t x118 = UINT32_MAX;
	uint64_t x119 = 3660144LLU;
	volatile int64_t x120 = INT64_MIN;
	static int64_t t29 = 41671571679639312LL;

    t29 = (((x117&x118)<=x119)&x120);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x121 = INT64_MIN;
	int16_t x123 = 1;
	static int8_t x124 = -3;

    t30 = (((x121&x122)<=x123)&x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x126 = INT32_MIN;
	uint8_t x127 = 0U;
	int8_t x128 = -1;
	int32_t t31 = 99813;

    t31 = (((x125&x126)<=x127)&x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x129 = 6U;
	int64_t x131 = -18LL;
	int8_t x132 = INT8_MIN;
	int32_t t32 = 19;

    t32 = (((x129&x130)<=x131)&x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x133 = UINT8_MAX;
	int64_t x134 = INT64_MIN;
	int32_t x136 = INT32_MIN;

    t33 = (((x133&x134)<=x135)&x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x139 = INT32_MIN;
	int8_t x140 = INT8_MAX;
	int32_t t34 = 15;

    t34 = (((x137&x138)<=x139)&x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x141 = INT32_MIN;
	int8_t x142 = INT8_MIN;
	int64_t x143 = INT64_MIN;
	uint16_t x144 = 95U;
	static volatile int32_t t35 = 6;

    t35 = (((x141&x142)<=x143)&x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint64_t x145 = 254839300LLU;
	volatile uint32_t x146 = 2U;
	int8_t x147 = INT8_MIN;
	volatile int64_t x148 = -1LL;
	int64_t t36 = -1663499463LL;

    t36 = (((x145&x146)<=x147)&x148);

    if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x150 = 377135LL;
	static int8_t x151 = 1;
	static int32_t t37 = 955;

    t37 = (((x149&x150)<=x151)&x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = -1;
	uint8_t x154 = 1U;
	int16_t x156 = INT16_MIN;
	int32_t t38 = 19743472;

    t38 = (((x153&x154)<=x155)&x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x157 = INT64_MIN;
	static uint32_t x158 = UINT32_MAX;
	uint32_t x159 = UINT32_MAX;
	volatile int32_t t39 = -2;

    t39 = (((x157&x158)<=x159)&x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x161 = UINT64_MAX;
	int32_t x162 = INT32_MIN;
	int8_t x164 = INT8_MAX;
	int32_t t40 = -28;

    t40 = (((x161&x162)<=x163)&x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint8_t x166 = 9U;
	volatile int16_t x167 = INT16_MIN;
	int16_t x168 = INT16_MAX;
	volatile int32_t t41 = 731;

    t41 = (((x165&x166)<=x167)&x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t t42 = -10558;

    t42 = (((x169&x170)<=x171)&x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x173 = 37U;
	static int64_t x174 = INT64_MIN;
	static int64_t x175 = INT64_MIN;
	static int32_t x176 = INT32_MIN;

    t43 = (((x173&x174)<=x175)&x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = INT64_MIN;
	int16_t x178 = -1;
	static int32_t x179 = INT32_MAX;
	int64_t t44 = -402277396LL;

    t44 = (((x177&x178)<=x179)&x180);

    if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x181 = 218U;
	static int64_t x182 = INT64_MIN;

    t45 = (((x181&x182)<=x183)&x184);

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = -1;
	int64_t x187 = -1LL;
	volatile int16_t x188 = INT16_MIN;
	volatile int32_t t46 = -41499;

    t46 = (((x185&x186)<=x187)&x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = -15;
	uint32_t x190 = UINT32_MAX;
	int32_t x192 = 435326;
	volatile int32_t t47 = -1;

    t47 = (((x189&x190)<=x191)&x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x194 = 1U;
	int32_t x195 = INT32_MIN;
	volatile int8_t x196 = INT8_MIN;
	int32_t t48 = 84082410;

    t48 = (((x193&x194)<=x195)&x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x197 = -15;
	int8_t x198 = INT8_MIN;
	static volatile int16_t x199 = -6720;
	int8_t x200 = INT8_MAX;
	int32_t t49 = 62193052;

    t49 = (((x197&x198)<=x199)&x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x202 = -1;
	int32_t x203 = -245;
	int64_t x204 = INT64_MAX;

    t50 = (((x201&x202)<=x203)&x204);

    if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x207 = UINT16_MAX;
	int32_t t51 = -14010;

    t51 = (((x205&x206)<=x207)&x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x209 = -15355;
	int32_t x210 = INT32_MIN;
	volatile int16_t x211 = INT16_MIN;
	int32_t x212 = INT32_MIN;
	static int32_t t52 = 9;

    t52 = (((x209&x210)<=x211)&x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint16_t x214 = 30U;
	uint64_t x216 = UINT64_MAX;
	uint64_t t53 = 13309LLU;

    t53 = (((x213&x214)<=x215)&x216);

    if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = 2;
	uint32_t x218 = 5561259U;
	uint32_t x219 = UINT32_MAX;
	int8_t x220 = -1;
	static int32_t t54 = 351502;

    t54 = (((x217&x218)<=x219)&x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x221 = UINT64_MAX;
	static volatile uint16_t x222 = 97U;
	int32_t x223 = 801377;
	static volatile int64_t x224 = -1LL;
	static int64_t t55 = -288817157031615LL;

    t55 = (((x221&x222)<=x223)&x224);

    if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = INT8_MAX;
	volatile int16_t x226 = -1;
	int8_t x227 = INT8_MAX;
	volatile int64_t x228 = -6LL;
	static volatile int64_t t56 = 0LL;

    t56 = (((x225&x226)<=x227)&x228);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = 31;
	uint32_t x230 = UINT32_MAX;
	int16_t x231 = INT16_MAX;
	static uint8_t x232 = 7U;

    t57 = (((x229&x230)<=x231)&x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = -1;
	int32_t x234 = 356353890;
	int32_t x235 = INT32_MAX;
	int8_t x236 = INT8_MAX;
	volatile int32_t t58 = 14668456;

    t58 = (((x233&x234)<=x235)&x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint8_t x237 = 2U;
	int16_t x238 = -6668;
	int32_t x239 = 11;
	static int32_t t59 = 0;

    t59 = (((x237&x238)<=x239)&x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x241 = 5U;
	static int16_t x242 = -1;
	uint64_t x243 = 775146742LLU;
	static int32_t x244 = -1;
	static int32_t t60 = 570216337;

    t60 = (((x241&x242)<=x243)&x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x245 = 2752U;
	volatile int8_t x246 = INT8_MIN;
	int64_t x248 = -1LL;
	static int64_t t61 = 100LL;

    t61 = (((x245&x246)<=x247)&x248);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x250 = 1LLU;
	volatile int32_t t62 = 13164;

    t62 = (((x249&x250)<=x251)&x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = INT32_MIN;
	volatile uint16_t x254 = UINT16_MAX;
	static uint64_t x255 = 97909796099LLU;
	int16_t x256 = -5750;
	int32_t t63 = -1;

    t63 = (((x253&x254)<=x255)&x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x257 = 716U;
	static uint16_t x258 = 42U;
	int64_t x260 = INT64_MIN;

    t64 = (((x257&x258)<=x259)&x260);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint64_t x262 = UINT64_MAX;
	static uint32_t x263 = UINT32_MAX;
	static int8_t x264 = INT8_MIN;
	int32_t t65 = 14812;

    t65 = (((x261&x262)<=x263)&x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = -1;
	int8_t x266 = -1;
	volatile int64_t x267 = INT64_MAX;
	int64_t t66 = 119LL;

    t66 = (((x265&x266)<=x267)&x268);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x269 = 5U;
	volatile uint8_t x271 = UINT8_MAX;
	int64_t x272 = 726786920LL;

    t67 = (((x269&x270)<=x271)&x272);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = INT16_MIN;
	int8_t x274 = INT8_MIN;
	volatile uint32_t x275 = 34563516U;
	volatile int64_t t68 = 0LL;

    t68 = (((x273&x274)<=x275)&x276);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x277 = 4650LLU;
	uint8_t x278 = 5U;
	uint64_t x280 = 23784113LLU;
	volatile uint64_t t69 = 193201LLU;

    t69 = (((x277&x278)<=x279)&x280);

    if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x281 = 50LLU;
	uint32_t x282 = 0U;
	uint16_t x283 = 9U;
	int16_t x284 = INT16_MIN;
	static volatile int32_t t70 = 55;

    t70 = (((x281&x282)<=x283)&x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = -1LL;
	uint32_t x288 = UINT32_MAX;
	uint32_t t71 = 54U;

    t71 = (((x285&x286)<=x287)&x288);

    if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x289 = UINT64_MAX;
	int64_t x290 = -3957699328420980LL;

    t72 = (((x289&x290)<=x291)&x292);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x293 = INT32_MIN;
	int8_t x294 = INT8_MIN;
	volatile int8_t x295 = 2;
	int8_t x296 = INT8_MAX;

    t73 = (((x293&x294)<=x295)&x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = -1;
	uint8_t x299 = 5U;
	uint64_t x300 = 55215LLU;

    t74 = (((x297&x298)<=x299)&x300);

    if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = INT32_MIN;
	volatile int64_t x302 = INT64_MAX;
	uint64_t x304 = 990819LLU;
	static uint64_t t75 = 2063649678744949423LLU;

    t75 = (((x301&x302)<=x303)&x304);

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = INT64_MAX;
	uint16_t x306 = 166U;
	static int64_t x307 = INT64_MIN;
	volatile int64_t t76 = 363065091509030LL;

    t76 = (((x305&x306)<=x307)&x308);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x311 = 57;
	volatile int32_t t77 = -694;

    t77 = (((x309&x310)<=x311)&x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int32_t x313 = INT32_MIN;
	uint8_t x314 = 4U;
	uint8_t x316 = 4U;

    t78 = (((x313&x314)<=x315)&x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x318 = UINT8_MAX;
	static volatile int16_t x319 = INT16_MIN;
	static uint8_t x320 = UINT8_MAX;
	static volatile int32_t t79 = -1569;

    t79 = (((x317&x318)<=x319)&x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x321 = INT32_MIN;
	volatile uint32_t x322 = 76U;
	static int8_t x323 = INT8_MAX;
	int8_t x324 = -24;
	int32_t t80 = 553;

    t80 = (((x321&x322)<=x323)&x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x326 = INT8_MIN;
	int8_t x327 = 7;
	int64_t x328 = -4LL;

    t81 = (((x325&x326)<=x327)&x328);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x331 = INT32_MIN;
	uint8_t x332 = 78U;
	volatile int32_t t82 = 24;

    t82 = (((x329&x330)<=x331)&x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = INT32_MIN;
	uint16_t x335 = 20487U;
	int16_t x336 = INT16_MIN;
	int32_t t83 = 0;

    t83 = (((x333&x334)<=x335)&x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x338 = INT16_MAX;
	int64_t x339 = -630961947460593083LL;
	volatile int16_t x340 = -1;
	int32_t t84 = 4;

    t84 = (((x337&x338)<=x339)&x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x342 = INT8_MAX;
	uint32_t x343 = 254708U;
	volatile int8_t x344 = 0;
	static int32_t t85 = -16309;

    t85 = (((x341&x342)<=x343)&x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint64_t x345 = 12LLU;
	int8_t x347 = INT8_MAX;
	int32_t x348 = 29645;
	static volatile int32_t t86 = 2;

    t86 = (((x345&x346)<=x347)&x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = INT32_MIN;
	volatile uint16_t x350 = 12297U;
	int32_t x351 = INT32_MIN;
	int32_t t87 = 2551;

    t87 = (((x349&x350)<=x351)&x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint64_t x355 = 20457867309928LLU;
	static int32_t x356 = INT32_MAX;
	int32_t t88 = -4338;

    t88 = (((x353&x354)<=x355)&x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = -1;
	int8_t x358 = INT8_MAX;
	static volatile uint16_t x359 = UINT16_MAX;
	int8_t x360 = INT8_MIN;

    t89 = (((x357&x358)<=x359)&x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x361 = -17;
	uint64_t x362 = 199260LLU;
	uint8_t x363 = UINT8_MAX;
	volatile int32_t t90 = -5404;

    t90 = (((x361&x362)<=x363)&x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = INT32_MAX;
	static uint16_t x366 = 1U;
	int8_t x368 = -1;
	volatile int32_t t91 = 57;

    t91 = (((x365&x366)<=x367)&x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = INT64_MIN;
	static int16_t x370 = -1;
	int64_t x371 = 0LL;
	volatile int8_t x372 = INT8_MAX;
	volatile int32_t t92 = -167166089;

    t92 = (((x369&x370)<=x371)&x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = INT16_MAX;
	static int8_t x374 = -1;
	uint16_t x375 = UINT16_MAX;
	int32_t t93 = -195228063;

    t93 = (((x373&x374)<=x375)&x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = -1;
	static int8_t x378 = -2;
	volatile uint16_t x380 = 13U;

    t94 = (((x377&x378)<=x379)&x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = -1;
	static uint64_t x382 = 35962459025LLU;
	int16_t x383 = -1;

    t95 = (((x381&x382)<=x383)&x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = 13;
	static volatile int32_t x386 = -2;
	uint64_t x387 = UINT64_MAX;
	int64_t x388 = 199LL;
	int64_t t96 = -8038LL;

    t96 = (((x385&x386)<=x387)&x388);

    if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = -35;
	volatile int32_t x390 = 28340194;
	uint64_t x391 = 1360350138175LLU;
	int32_t x392 = INT32_MIN;
	int32_t t97 = 66767536;

    t97 = (((x389&x390)<=x391)&x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = INT32_MIN;
	int64_t x394 = INT64_MIN;
	static int64_t x395 = INT64_MIN;
	int64_t x396 = -10985LL;

    t98 = (((x393&x394)<=x395)&x396);

    if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x397 = INT64_MIN;
	static int32_t x399 = 1;
	int16_t x400 = INT16_MIN;

    t99 = (((x397&x398)<=x399)&x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x403 = UINT16_MAX;
	volatile int16_t x404 = -1;
	int32_t t100 = 559;

    t100 = (((x401&x402)<=x403)&x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x405 = INT16_MAX;
	uint64_t x406 = UINT64_MAX;
	static uint8_t x407 = 6U;
	volatile uint16_t x408 = 98U;
	int32_t t101 = -163;

    t101 = (((x405&x406)<=x407)&x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = INT64_MIN;
	uint64_t x410 = UINT64_MAX;
	volatile int64_t x411 = INT64_MIN;
	static int32_t x412 = INT32_MIN;
	volatile int32_t t102 = -27579;

    t102 = (((x409&x410)<=x411)&x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x413 = INT32_MAX;
	volatile uint16_t x414 = 74U;
	int8_t x415 = -1;
	volatile int16_t x416 = 86;
	static volatile int32_t t103 = 602583984;

    t103 = (((x413&x414)<=x415)&x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = -1;
	int64_t x418 = -281476LL;
	int16_t x419 = -885;
	volatile int32_t x420 = INT32_MIN;
	static int32_t t104 = -88609699;

    t104 = (((x417&x418)<=x419)&x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x421 = 903437581U;
	int64_t x422 = INT64_MIN;
	int64_t x423 = INT64_MIN;
	int32_t x424 = -1;

    t105 = (((x421&x422)<=x423)&x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x425 = -1;
	int8_t x426 = INT8_MIN;
	int16_t x427 = INT16_MIN;
	int8_t x428 = 10;
	int32_t t106 = 686790684;

    t106 = (((x425&x426)<=x427)&x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = INT16_MAX;
	static int8_t x430 = INT8_MIN;
	uint32_t x431 = UINT32_MAX;
	static int32_t x432 = 115376750;
	static volatile int32_t t107 = 254345377;

    t107 = (((x429&x430)<=x431)&x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = 0;
	int8_t x434 = -1;
	int8_t x435 = INT8_MIN;
	volatile uint32_t t108 = 253U;

    t108 = (((x433&x434)<=x435)&x436);

    if (t108 != 0U) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = INT32_MIN;
	volatile uint16_t x438 = 23U;
	static uint8_t x439 = 3U;
	static int32_t t109 = -1291473;

    t109 = (((x437&x438)<=x439)&x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x441 = UINT8_MAX;
	int8_t x442 = INT8_MIN;
	uint8_t x443 = 101U;
	uint64_t x444 = 223046872145LLU;
	uint64_t t110 = 12525LLU;

    t110 = (((x441&x442)<=x443)&x444);

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = -264441891697LL;
	static int64_t x446 = -2270057555106695960LL;
	static int32_t x448 = -211;
	int32_t t111 = -47;

    t111 = (((x445&x446)<=x447)&x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = -8356700041732564LL;
	volatile int16_t x450 = INT16_MIN;
	int8_t x451 = -1;
	volatile uint8_t x452 = 47U;
	volatile int32_t t112 = 104;

    t112 = (((x449&x450)<=x451)&x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x454 = -1;
	uint8_t x455 = 12U;
	uint32_t x456 = 8889259U;
	volatile uint32_t t113 = 11U;

    t113 = (((x453&x454)<=x455)&x456);

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = -1;
	uint64_t x458 = 477267086LLU;
	volatile int16_t x459 = INT16_MAX;
	int16_t x460 = 4;
	volatile int32_t t114 = -5183101;

    t114 = (((x457&x458)<=x459)&x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x461 = 3U;
	static uint16_t x462 = 3U;
	static int32_t t115 = 30301092;

    t115 = (((x461&x462)<=x463)&x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x465 = 28U;
	static int16_t x466 = 0;
	int64_t x467 = INT64_MIN;
	int64_t x468 = INT64_MAX;

    t116 = (((x465&x466)<=x467)&x468);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = INT32_MIN;
	uint8_t x470 = 16U;
	uint64_t x472 = 288410LLU;
	volatile uint64_t t117 = 68486028636062LLU;

    t117 = (((x469&x470)<=x471)&x472);

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = 42426830LL;
	volatile int16_t x474 = INT16_MIN;
	int64_t x475 = INT64_MIN;
	volatile int8_t x476 = INT8_MIN;
	int32_t t118 = -7608;

    t118 = (((x473&x474)<=x475)&x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x477 = 5U;
	int64_t x478 = 0LL;
	volatile int64_t x480 = -1LL;
	int64_t t119 = 483223227275663538LL;

    t119 = (((x477&x478)<=x479)&x480);

    if (t119 != 1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint8_t x481 = 3U;
	int16_t x483 = INT16_MIN;
	volatile uint8_t x484 = 0U;
	volatile int32_t t120 = 3908042;

    t120 = (((x481&x482)<=x483)&x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x485 = 3829585597LLU;
	volatile uint64_t x486 = 4227436646803196LLU;
	int8_t x487 = INT8_MIN;
	volatile int8_t x488 = 15;
	int32_t t121 = 3365635;

    t121 = (((x485&x486)<=x487)&x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x491 = INT8_MIN;
	volatile int32_t t122 = -229;

    t122 = (((x489&x490)<=x491)&x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x494 = -3505;
	static volatile uint32_t x496 = UINT32_MAX;
	volatile uint32_t t123 = 7U;

    t123 = (((x493&x494)<=x495)&x496);

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = -1LL;
	int64_t x498 = INT64_MAX;
	int32_t x499 = 15376;
	static uint16_t x500 = UINT16_MAX;
	volatile int32_t t124 = 528095630;

    t124 = (((x497&x498)<=x499)&x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x503 = -164078036LL;
	int32_t x504 = INT32_MIN;

    t125 = (((x501&x502)<=x503)&x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x505 = 0U;
	uint8_t x506 = 0U;
	volatile uint8_t x507 = 13U;
	static int16_t x508 = INT16_MAX;
	int32_t t126 = 1818;

    t126 = (((x505&x506)<=x507)&x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x509 = -24966505966LL;
	uint16_t x510 = 2952U;
	uint64_t x511 = 35981406800367299LLU;
	int32_t x512 = INT32_MIN;
	int32_t t127 = -3;

    t127 = (((x509&x510)<=x511)&x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = -56864698974LL;
	int32_t x515 = INT32_MIN;
	int8_t x516 = 1;
	static volatile int32_t t128 = 0;

    t128 = (((x513&x514)<=x515)&x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x517 = 3;
	uint32_t x518 = UINT32_MAX;
	int16_t x519 = INT16_MAX;
	static uint64_t x520 = UINT64_MAX;
	static volatile uint64_t t129 = 29190825LLU;

    t129 = (((x517&x518)<=x519)&x520);

    if (t129 != 1LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x521 = 0U;
	uint32_t x522 = 9877293U;
	static int64_t x523 = INT64_MIN;
	int16_t x524 = INT16_MIN;
	int32_t t130 = -25212723;

    t130 = (((x521&x522)<=x523)&x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x526 = -1LL;
	volatile uint8_t x527 = 9U;
	int8_t x528 = INT8_MAX;
	int32_t t131 = -209;

    t131 = (((x525&x526)<=x527)&x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x529 = -3974392;
	int16_t x530 = 12;
	static int8_t x531 = -1;
	static uint32_t x532 = UINT32_MAX;
	uint32_t t132 = 93U;

    t132 = (((x529&x530)<=x531)&x532);

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x534 = 11160U;
	int16_t x535 = 14520;
	int16_t x536 = -1;
	volatile int32_t t133 = 0;

    t133 = (((x533&x534)<=x535)&x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x537 = UINT8_MAX;
	static int64_t x538 = 3789605LL;
	volatile uint16_t x540 = UINT16_MAX;

    t134 = (((x537&x538)<=x539)&x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x541 = 0;
	int64_t x542 = INT64_MIN;
	int64_t x543 = INT64_MAX;
	int16_t x544 = 471;
	volatile int32_t t135 = -612821562;

    t135 = (((x541&x542)<=x543)&x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = INT32_MIN;
	volatile int8_t x546 = -1;
	uint8_t x547 = 91U;
	volatile int16_t x548 = INT16_MAX;
	volatile int32_t t136 = 259878;

    t136 = (((x545&x546)<=x547)&x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x549 = INT64_MAX;
	int64_t x550 = INT64_MIN;
	int64_t x551 = -1LL;
	int32_t x552 = 143251;
	int32_t t137 = 834064525;

    t137 = (((x549&x550)<=x551)&x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x553 = 5U;
	int32_t x555 = 0;
	volatile int8_t x556 = -1;
	int32_t t138 = -1;

    t138 = (((x553&x554)<=x555)&x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x557 = 2U;
	volatile int32_t x558 = 119779;
	uint8_t x559 = UINT8_MAX;
	int64_t x560 = INT64_MIN;
	int64_t t139 = -4074LL;

    t139 = (((x557&x558)<=x559)&x560);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = INT64_MIN;
	static int16_t x563 = 2;
	volatile int32_t t140 = 935594;

    t140 = (((x561&x562)<=x563)&x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = -23760LL;
	uint64_t x567 = 67165807577943LLU;
	int32_t x568 = INT32_MIN;
	int32_t t141 = -36462;

    t141 = (((x565&x566)<=x567)&x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x571 = INT64_MIN;
	volatile int32_t x572 = INT32_MAX;
	static int32_t t142 = -208;

    t142 = (((x569&x570)<=x571)&x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x574 = INT32_MIN;
	static int8_t x575 = INT8_MIN;
	volatile int8_t x576 = INT8_MIN;
	volatile int32_t t143 = -5;

    t143 = (((x573&x574)<=x575)&x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = -3;
	int16_t x578 = INT16_MIN;
	volatile int32_t x579 = -234593;
	volatile uint32_t t144 = 104692920U;

    t144 = (((x577&x578)<=x579)&x580);

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = 5452;
	int8_t x582 = -32;
	volatile uint32_t x583 = 261086U;
	volatile int32_t x584 = -234;
	int32_t t145 = -94;

    t145 = (((x581&x582)<=x583)&x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x585 = UINT64_MAX;
	int64_t x587 = INT64_MAX;
	int64_t x588 = -1LL;

    t146 = (((x585&x586)<=x587)&x588);

    if (t146 != 1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x589 = UINT64_MAX;
	volatile int16_t x590 = -1;
	uint64_t x591 = 12884LLU;
	static uint32_t x592 = 880677804U;
	static uint32_t t147 = 1236U;

    t147 = (((x589&x590)<=x591)&x592);

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x595 = 1425U;
	uint16_t x596 = 3U;
	volatile int32_t t148 = 1461;

    t148 = (((x593&x594)<=x595)&x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = -5LL;
	uint8_t x598 = 29U;
	int16_t x599 = INT16_MIN;
	int8_t x600 = -1;

    t149 = (((x597&x598)<=x599)&x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x601 = UINT32_MAX;
	uint8_t x602 = UINT8_MAX;
	int8_t x603 = INT8_MIN;
	uint32_t x604 = 3889U;

    t150 = (((x601&x602)<=x603)&x604);

    if (t150 != 1U) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x606 = -1LL;
	volatile uint32_t t151 = 1899792252U;

    t151 = (((x605&x606)<=x607)&x608);

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint8_t x609 = 9U;
	int64_t x610 = 683219283766360LL;
	int32_t x612 = 1308204;
	int32_t t152 = -2884;

    t152 = (((x609&x610)<=x611)&x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x614 = INT32_MAX;
	int8_t x616 = 0;

    t153 = (((x613&x614)<=x615)&x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = INT64_MIN;
	int8_t x620 = -1;

    t154 = (((x617&x618)<=x619)&x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x621 = UINT64_MAX;
	static int8_t x622 = -1;
	int8_t x623 = -1;
	int32_t x624 = 1619444;

    t155 = (((x621&x622)<=x623)&x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint32_t x625 = 740022530U;
	int16_t x627 = INT16_MIN;
	static int32_t x628 = 66;
	static volatile int32_t t156 = 1;

    t156 = (((x625&x626)<=x627)&x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = 51727485261994LL;
	uint64_t x630 = 175172361351654611LLU;
	volatile int16_t x631 = INT16_MIN;
	uint32_t x632 = 107951032U;
	uint32_t t157 = 3U;

    t157 = (((x629&x630)<=x631)&x632);

    if (t157 != 0U) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = INT16_MIN;
	int64_t x634 = 10831528758815274LL;
	uint64_t x635 = 30110LLU;
	static volatile uint16_t x636 = 977U;

    t158 = (((x633&x634)<=x635)&x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x637 = INT16_MAX;
	static int8_t x638 = INT8_MAX;

    t159 = (((x637&x638)<=x639)&x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint8_t x641 = 1U;
	int16_t x642 = INT16_MIN;
	volatile int8_t x643 = 1;
	volatile int32_t t160 = -1;

    t160 = (((x641&x642)<=x643)&x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint32_t x645 = UINT32_MAX;
	int64_t x646 = INT64_MIN;
	volatile uint64_t x648 = UINT64_MAX;
	uint64_t t161 = 97189LLU;

    t161 = (((x645&x646)<=x647)&x648);

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x649 = UINT8_MAX;
	uint64_t x650 = UINT64_MAX;
	volatile int32_t x652 = -1;
	int32_t t162 = 20;

    t162 = (((x649&x650)<=x651)&x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint8_t x655 = 116U;
	static volatile int32_t t163 = -4506;

    t163 = (((x653&x654)<=x655)&x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x658 = INT16_MIN;
	int64_t x660 = INT64_MIN;
	int64_t t164 = 1230909659LL;

    t164 = (((x657&x658)<=x659)&x660);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x661 = INT16_MAX;
	volatile int32_t x662 = INT32_MIN;
	static int64_t x664 = INT64_MAX;
	static volatile int64_t t165 = -46203101LL;

    t165 = (((x661&x662)<=x663)&x664);

    if (t165 != 1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x665 = UINT8_MAX;
	int64_t x666 = -48573LL;
	static volatile int64_t x667 = -5272255366725952LL;
	uint64_t x668 = UINT64_MAX;

    t166 = (((x665&x666)<=x667)&x668);

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x670 = 0;
	uint32_t x671 = UINT32_MAX;
	uint8_t x672 = UINT8_MAX;
	volatile int32_t t167 = -3386995;

    t167 = (((x669&x670)<=x671)&x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x674 = 28;
	volatile int64_t x675 = -1LL;
	int16_t x676 = -1;

    t168 = (((x673&x674)<=x675)&x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint8_t x678 = 10U;
	int16_t x680 = INT16_MIN;
	int32_t t169 = 1;

    t169 = (((x677&x678)<=x679)&x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x681 = INT8_MIN;
	volatile int64_t x682 = INT64_MIN;
	int32_t x683 = 1820556;
	uint8_t x684 = UINT8_MAX;
	volatile int32_t t170 = 1219;

    t170 = (((x681&x682)<=x683)&x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = INT32_MIN;
	int64_t x687 = INT64_MAX;
	uint8_t x688 = UINT8_MAX;

    t171 = (((x685&x686)<=x687)&x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x690 = INT32_MIN;
	int32_t x691 = -1;
	int8_t x692 = -1;
	int32_t t172 = 750404801;

    t172 = (((x689&x690)<=x691)&x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = INT32_MIN;
	volatile int32_t t173 = 6;

    t173 = (((x693&x694)<=x695)&x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = -1;
	static uint64_t x698 = UINT64_MAX;
	static volatile int8_t x699 = INT8_MAX;
	uint8_t x700 = 1U;

    t174 = (((x697&x698)<=x699)&x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = INT8_MIN;
	int8_t x702 = INT8_MIN;
	volatile int8_t x703 = -1;
	uint64_t x704 = 2790578683625402LLU;
	volatile uint64_t t175 = 2534431764131842827LLU;

    t175 = (((x701&x702)<=x703)&x704);

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = INT8_MIN;
	int8_t x706 = 26;
	int64_t x707 = -1LL;
	int32_t x708 = -1;

    t176 = (((x705&x706)<=x707)&x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint64_t x709 = 80065045953700LLU;
	uint16_t x710 = UINT16_MAX;
	volatile int16_t x712 = 1;
	int32_t t177 = 2;

    t177 = (((x709&x710)<=x711)&x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x713 = 53U;
	volatile int32_t x714 = -1;
	uint8_t x716 = 0U;
	static int32_t t178 = 113103834;

    t178 = (((x713&x714)<=x715)&x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = INT64_MIN;
	uint16_t x718 = 1775U;
	uint8_t x720 = 0U;
	int32_t t179 = 8703;

    t179 = (((x717&x718)<=x719)&x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = INT32_MIN;
	static volatile uint16_t x722 = 9953U;
	static int8_t x724 = INT8_MIN;
	int32_t t180 = 1;

    t180 = (((x721&x722)<=x723)&x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = INT64_MIN;
	int64_t x726 = INT64_MIN;
	static int64_t x728 = -1LL;
	int64_t t181 = 0LL;

    t181 = (((x725&x726)<=x727)&x728);

    if (t181 != 1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x729 = 36415144272503796LLU;
	uint32_t x730 = 625U;
	volatile int64_t x731 = INT64_MAX;
	static volatile uint16_t x732 = 4U;

    t182 = (((x729&x730)<=x731)&x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x733 = 4149062594LLU;
	int32_t x735 = INT32_MIN;
	int32_t x736 = INT32_MIN;
	int32_t t183 = -136047;

    t183 = (((x733&x734)<=x735)&x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x737 = UINT64_MAX;
	int64_t x738 = 28778177LL;
	int32_t x739 = 11;
	int16_t x740 = -25;

    t184 = (((x737&x738)<=x739)&x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = INT16_MIN;
	int64_t x742 = INT64_MIN;
	uint64_t x744 = 89178641154LLU;
	uint64_t t185 = 495LLU;

    t185 = (((x741&x742)<=x743)&x744);

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x746 = UINT16_MAX;
	static int32_t x748 = INT32_MIN;
	volatile int32_t t186 = 1;

    t186 = (((x745&x746)<=x747)&x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x750 = UINT32_MAX;
	uint8_t x751 = 9U;
	int8_t x752 = -1;
	int32_t t187 = 15000;

    t187 = (((x749&x750)<=x751)&x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x754 = INT16_MIN;
	uint64_t x755 = 74932685466803258LLU;
	volatile int32_t x756 = INT32_MAX;
	int32_t t188 = -24;

    t188 = (((x753&x754)<=x755)&x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = -6;
	int64_t x759 = -1LL;

    t189 = (((x757&x758)<=x759)&x760);

    if (t189 != 1LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x761 = 63U;
	uint64_t x762 = UINT64_MAX;
	static int16_t x763 = -121;
	volatile int32_t x764 = -1;
	int32_t t190 = 0;

    t190 = (((x761&x762)<=x763)&x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x766 = -1;
	int32_t t191 = 1;

    t191 = (((x765&x766)<=x767)&x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x770 = UINT8_MAX;
	uint8_t x771 = UINT8_MAX;
	int16_t x772 = INT16_MAX;
	volatile int32_t t192 = 0;

    t192 = (((x769&x770)<=x771)&x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x773 = 32103320903LLU;
	static uint64_t x774 = 106888168285LLU;
	int16_t x775 = 3906;
	int32_t x776 = 30358348;
	volatile int32_t t193 = -120;

    t193 = (((x773&x774)<=x775)&x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x777 = -1;
	uint8_t x778 = 8U;
	int16_t x779 = INT16_MIN;
	volatile int32_t x780 = INT32_MAX;
	int32_t t194 = 380;

    t194 = (((x777&x778)<=x779)&x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x781 = 2U;
	uint16_t x782 = 767U;
	static volatile uint16_t x784 = 55U;
	int32_t t195 = -132837;

    t195 = (((x781&x782)<=x783)&x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x785 = 80172477;
	uint16_t x786 = 28942U;
	volatile int16_t x787 = 21;
	static uint64_t x788 = 61956LLU;
	uint64_t t196 = 5614LLU;

    t196 = (((x785&x786)<=x787)&x788);

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x789 = INT32_MIN;
	uint32_t x791 = UINT32_MAX;
	volatile int8_t x792 = -57;

    t197 = (((x789&x790)<=x791)&x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int32_t x793 = INT32_MIN;
	int8_t x795 = INT8_MIN;
	static int16_t x796 = INT16_MIN;

    t198 = (((x793&x794)<=x795)&x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x798 = 9U;
	uint32_t x799 = UINT32_MAX;
	static int8_t x800 = 7;

    t199 = (((x797&x798)<=x799)&x800);

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

