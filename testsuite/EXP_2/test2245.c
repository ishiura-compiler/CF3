
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

static int8_t x7 = INT8_MIN;
int64_t x8 = INT64_MIN;
volatile int8_t x13 = INT8_MIN;
static volatile int64_t x17 = -2301049LL;
static int16_t x19 = -1;
uint16_t x24 = UINT16_MAX;
int32_t t4 = -1881546;
int32_t x34 = INT32_MAX;
int64_t x42 = -1LL;
volatile int16_t x46 = -1;
static int32_t x52 = INT32_MIN;
volatile int64_t x59 = -69815117533736LL;
int32_t x63 = 134608;
int8_t x77 = INT8_MIN;
int8_t x87 = INT8_MAX;
uint64_t x90 = 359157801235345010LLU;
volatile int64_t t21 = -17LL;
int32_t x98 = INT32_MIN;
int64_t x99 = INT64_MAX;
int16_t x106 = 30;
uint16_t x113 = 2196U;
uint32_t t27 = 2U;
int16_t x117 = INT16_MIN;
int32_t x123 = -1;
uint16_t x133 = 4U;
volatile uint16_t x135 = 402U;
int32_t x139 = -1;
int64_t x140 = 139404827607720LL;
static int64_t t33 = 982929LL;
int16_t x151 = INT16_MIN;
volatile int32_t t39 = 29899;
volatile int64_t x171 = INT64_MIN;
int64_t x175 = INT64_MIN;
uint8_t x176 = 30U;
static volatile int32_t t42 = 0;
volatile int32_t t44 = 596;
int32_t t46 = -8440880;
int32_t x193 = INT32_MIN;
volatile int32_t t47 = 5;
int8_t x203 = -2;
uint16_t x204 = 12U;
int32_t x205 = -1;
int8_t x210 = -7;
uint32_t x213 = 10588225U;
int64_t x214 = -1LL;
volatile int64_t x217 = INT64_MAX;
static volatile uint32_t x221 = 14659194U;
int32_t x222 = INT32_MAX;
uint16_t x231 = 25970U;
int32_t t56 = -266000390;
static volatile uint8_t x233 = 20U;
static uint16_t x235 = 24U;
uint8_t x236 = UINT8_MAX;
int32_t x237 = -1;
volatile uint64_t x239 = 25062218886963LLU;
static uint64_t x242 = 55858918LLU;
uint16_t x243 = UINT16_MAX;
static uint8_t x249 = 4U;
uint8_t x250 = 2U;
int16_t x262 = INT16_MIN;
int16_t x266 = -2;
volatile int16_t x273 = -7;
uint64_t x277 = 954817401346LLU;
int32_t x283 = 1;
int8_t x289 = -1;
static int8_t x295 = -1;
volatile int8_t x296 = -2;
volatile int64_t x301 = 5035LL;
uint8_t x309 = 1U;
int16_t x313 = -75;
int16_t x317 = INT16_MIN;
uint8_t x319 = 3U;
static int64_t t78 = 121051043501536590LL;
uint32_t x321 = 854U;
static int32_t x322 = INT32_MIN;
int32_t x323 = INT32_MIN;
uint8_t x324 = 1U;
int16_t x327 = INT16_MAX;
volatile int64_t t80 = 44089LL;
uint32_t x330 = UINT32_MAX;
static int8_t x331 = -1;
volatile int32_t t81 = 126;
uint32_t x334 = 1007002870U;
static uint32_t t82 = 236408230U;
uint64_t x337 = UINT64_MAX;
uint64_t x345 = UINT64_MAX;
uint64_t x347 = 6971LLU;
int8_t x363 = INT8_MIN;
static uint64_t x380 = UINT64_MAX;
uint64_t x381 = 541LLU;
int64_t x385 = -1LL;
uint8_t x386 = UINT8_MAX;
int64_t t95 = -703133913737LL;
volatile int32_t x389 = INT32_MIN;
int32_t x390 = -1;
int32_t t96 = -3;
int64_t x396 = INT64_MIN;
uint16_t x398 = 50U;
volatile int8_t x400 = -1;
uint8_t x408 = 11U;
volatile int32_t t100 = 480363;
int32_t x411 = INT32_MIN;
static int32_t t102 = 28636;
static int32_t x417 = -1;
int32_t t103 = -1;
int32_t x439 = INT32_MIN;
volatile uint32_t t109 = 31082897U;
volatile uint64_t t110 = 3271084512595LLU;
uint64_t x451 = 448906701887824LLU;
int32_t x452 = INT32_MAX;
static int16_t x460 = -1;
int64_t x465 = 24933402LL;
volatile int32_t t116 = -1;
static volatile int32_t t117 = -57;
int32_t t118 = 0;
static volatile uint32_t x494 = 1979U;
volatile uint32_t x496 = 125U;
int16_t x498 = INT16_MAX;
int32_t t122 = 0;
volatile int32_t t123 = 886;
uint16_t x511 = 12U;
int16_t x516 = 4558;
int64_t t128 = 45069671LL;
int32_t x525 = INT32_MIN;
static int16_t x531 = INT16_MAX;
volatile int32_t t130 = 6;
uint32_t x537 = 316U;
int32_t x538 = 8940;
int8_t x539 = INT8_MIN;
int64_t x540 = INT64_MIN;
volatile int16_t x560 = -1;
int16_t x563 = INT16_MIN;
int32_t t137 = 3336;
int32_t t138 = 225120311;
int16_t x569 = 6648;
static int8_t x570 = INT8_MAX;
int8_t x572 = -1;
uint64_t t141 = 2559656043425100LLU;
int32_t x587 = INT32_MIN;
int8_t x588 = INT8_MIN;
volatile int32_t t144 = -15406749;
volatile int32_t t145 = 410;
volatile int8_t x600 = -1;
int16_t x603 = -8;
int16_t x618 = -1;
static uint16_t x621 = UINT16_MAX;
int32_t t152 = 371029270;
uint32_t t153 = 13001483U;
uint16_t x634 = 4741U;
uint16_t x637 = 19131U;
uint64_t x638 = UINT64_MAX;
uint32_t x640 = 1U;
uint32_t x644 = 7U;
int64_t x646 = -1445LL;
uint8_t x651 = UINT8_MAX;
int32_t x652 = INT32_MIN;
uint8_t x653 = 54U;
static volatile int32_t t160 = -6472;
uint8_t x658 = 5U;
int16_t x660 = 94;
static uint32_t x678 = UINT32_MAX;
volatile int8_t x682 = -42;
int8_t x688 = 1;
volatile uint64_t x689 = 58650458621768LLU;
int32_t x690 = INT32_MIN;
volatile int32_t t171 = 9;
int32_t x703 = INT32_MIN;
uint64_t x711 = UINT64_MAX;
static int32_t t175 = 289195888;
volatile uint16_t x718 = 0U;
int32_t x735 = INT32_MIN;
volatile int32_t t180 = 14391227;
volatile uint32_t t181 = 242U;
int64_t x743 = INT64_MIN;
static uint8_t x747 = 5U;
static int64_t x751 = INT64_MAX;
static volatile int64_t x753 = INT64_MIN;
static int32_t x756 = 484;
volatile uint16_t x758 = 1U;
int64_t t187 = 35359962211LL;
uint8_t x765 = 3U;
volatile int32_t t188 = 1747;
volatile int32_t x772 = 3146992;
int32_t t191 = 2;
static uint32_t x795 = 31U;
int32_t t195 = 0;
uint32_t x801 = 10076U;
int8_t x803 = INT8_MIN;
int32_t x805 = -1;
volatile uint8_t x807 = UINT8_MAX;
static volatile int64_t x810 = 214232LL;
int32_t x811 = 2;
int8_t x815 = INT8_MIN;


void f0(void) {
    	int8_t x1 = -35;
	uint64_t x2 = 86567878888263LLU;
	uint8_t x3 = 1U;
	volatile uint16_t x4 = 58U;
	volatile int32_t t0 = -185;

    t0 = ((x1!=(x2&x3))%x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = -10;
	static int8_t x6 = INT8_MAX;
	volatile int64_t t1 = 4LL;

    t1 = ((x5!=(x6&x7))%x8);

    if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x14 = 0;
	int16_t x15 = 6963;
	int16_t x16 = INT16_MAX;
	int32_t t2 = -26533919;

    t2 = ((x13!=(x14&x15))%x16);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x18 = UINT8_MAX;
	int32_t x20 = -28694;
	int32_t t3 = 198;

    t3 = ((x17!=(x18&x19))%x20);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x21 = INT32_MIN;
	int32_t x22 = -602175360;
	static volatile uint8_t x23 = 69U;

    t4 = ((x21!=(x22&x23))%x24);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x25 = 5U;
	static uint8_t x26 = 60U;
	int16_t x27 = 1;
	uint16_t x28 = 953U;
	volatile int32_t t5 = 6;

    t5 = ((x25!=(x26&x27))%x28);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x29 = INT16_MIN;
	int64_t x30 = -138522861272402842LL;
	uint64_t x31 = 44301776643213LLU;
	int16_t x32 = INT16_MIN;
	volatile int32_t t6 = 52214;

    t6 = ((x29!=(x30&x31))%x32);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint8_t x33 = UINT8_MAX;
	static volatile uint32_t x35 = 53472077U;
	static uint16_t x36 = UINT16_MAX;
	static int32_t t7 = -259554108;

    t7 = ((x33!=(x34&x35))%x36);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x37 = 29669386LLU;
	volatile uint16_t x38 = UINT16_MAX;
	volatile uint8_t x39 = 120U;
	uint32_t x40 = UINT32_MAX;
	uint32_t t8 = 0U;

    t8 = ((x37!=(x38&x39))%x40);

    if (t8 != 1U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint32_t x41 = UINT32_MAX;
	int32_t x43 = -1;
	int8_t x44 = INT8_MAX;
	static volatile int32_t t9 = -7237;

    t9 = ((x41!=(x42&x43))%x44);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x45 = 56U;
	volatile int64_t x47 = -354LL;
	int64_t x48 = INT64_MIN;
	static int64_t t10 = -540023085937LL;

    t10 = ((x45!=(x46&x47))%x48);

    if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x49 = 8006651;
	int8_t x50 = 1;
	int32_t x51 = INT32_MIN;
	int32_t t11 = 222602235;

    t11 = ((x49!=(x50&x51))%x52);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x53 = -1290;
	int32_t x54 = -1;
	int8_t x55 = INT8_MAX;
	int32_t x56 = INT32_MIN;
	static int32_t t12 = -1;

    t12 = ((x53!=(x54&x55))%x56);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint32_t x57 = UINT32_MAX;
	volatile uint64_t x58 = 529587905061365LLU;
	uint32_t x60 = UINT32_MAX;
	uint32_t t13 = 3U;

    t13 = ((x57!=(x58&x59))%x60);

    if (t13 != 1U) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x61 = INT32_MIN;
	int32_t x62 = INT32_MIN;
	volatile uint8_t x64 = 8U;
	static volatile int32_t t14 = 40;

    t14 = ((x61!=(x62&x63))%x64);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x65 = INT32_MAX;
	uint16_t x66 = 1820U;
	uint8_t x67 = 1U;
	static uint16_t x68 = UINT16_MAX;
	volatile int32_t t15 = -233780894;

    t15 = ((x65!=(x66&x67))%x68);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x69 = 9U;
	int64_t x70 = INT64_MIN;
	uint8_t x71 = UINT8_MAX;
	int16_t x72 = -1;
	volatile int32_t t16 = -1114;

    t16 = ((x69!=(x70&x71))%x72);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x73 = -8244626075688LL;
	int64_t x74 = INT64_MIN;
	int64_t x75 = -1LL;
	int32_t x76 = 66725;
	static volatile int32_t t17 = -33323;

    t17 = ((x73!=(x74&x75))%x76);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x78 = -1;
	uint64_t x79 = 19545423LLU;
	int16_t x80 = 9;
	int32_t t18 = -73562672;

    t18 = ((x77!=(x78&x79))%x80);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x81 = 15LL;
	uint32_t x82 = UINT32_MAX;
	int16_t x83 = INT16_MIN;
	uint16_t x84 = 1U;
	volatile int32_t t19 = -10591;

    t19 = ((x81!=(x82&x83))%x84);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x85 = INT64_MIN;
	uint64_t x86 = UINT64_MAX;
	static uint64_t x88 = 3692LLU;
	static uint64_t t20 = 54116377807118697LLU;

    t20 = ((x85!=(x86&x87))%x88);

    if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x89 = INT64_MIN;
	int16_t x91 = -1;
	int64_t x92 = -1LL;

    t21 = ((x89!=(x90&x91))%x92);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x93 = -1;
	int64_t x94 = INT64_MAX;
	int64_t x95 = -129408703881560620LL;
	volatile uint16_t x96 = UINT16_MAX;
	static volatile int32_t t22 = 3651;

    t22 = ((x93!=(x94&x95))%x96);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x97 = INT16_MIN;
	static volatile int64_t x100 = INT64_MAX;
	volatile int64_t t23 = 13542389LL;

    t23 = ((x97!=(x98&x99))%x100);

    if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x101 = 1196U;
	static uint8_t x102 = 1U;
	static int16_t x103 = 332;
	uint16_t x104 = UINT16_MAX;
	int32_t t24 = 7;

    t24 = ((x101!=(x102&x103))%x104);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x105 = 5915674U;
	static uint64_t x107 = 5837477LLU;
	static int8_t x108 = INT8_MIN;
	static volatile int32_t t25 = -517678854;

    t25 = ((x105!=(x106&x107))%x108);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x109 = 2889338613LLU;
	volatile int32_t x110 = INT32_MAX;
	int32_t x111 = INT32_MIN;
	volatile int64_t x112 = INT64_MAX;
	int64_t t26 = 1LL;

    t26 = ((x109!=(x110&x111))%x112);

    if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x114 = INT64_MIN;
	int64_t x115 = INT64_MAX;
	uint32_t x116 = 2257049U;

    t27 = ((x113!=(x114&x115))%x116);

    if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x118 = INT64_MAX;
	volatile uint64_t x119 = UINT64_MAX;
	uint32_t x120 = 361652346U;
	static volatile uint32_t t28 = 35367636U;

    t28 = ((x117!=(x118&x119))%x120);

    if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x121 = 4;
	static volatile uint64_t x122 = 194713233LLU;
	int8_t x124 = INT8_MIN;
	int32_t t29 = 1830;

    t29 = ((x121!=(x122&x123))%x124);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x125 = UINT8_MAX;
	static uint8_t x126 = 0U;
	static volatile int16_t x127 = INT16_MIN;
	uint16_t x128 = 9U;
	int32_t t30 = 75;

    t30 = ((x125!=(x126&x127))%x128);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x129 = 123505685U;
	int64_t x130 = -927LL;
	int64_t x131 = INT64_MAX;
	int8_t x132 = -1;
	int32_t t31 = -3284;

    t31 = ((x129!=(x130&x131))%x132);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x134 = 3;
	volatile int8_t x136 = INT8_MIN;
	volatile int32_t t32 = 63;

    t32 = ((x133!=(x134&x135))%x136);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x137 = INT8_MIN;
	int8_t x138 = INT8_MIN;

    t33 = ((x137!=(x138&x139))%x140);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x141 = INT32_MIN;
	static int16_t x142 = -6;
	static int64_t x143 = 2309517771LL;
	int32_t x144 = -14568327;
	int32_t t34 = -8423;

    t34 = ((x141!=(x142&x143))%x144);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x145 = 75839LLU;
	volatile uint32_t x146 = 38869U;
	int64_t x147 = INT64_MAX;
	uint16_t x148 = UINT16_MAX;
	int32_t t35 = -5678140;

    t35 = ((x145!=(x146&x147))%x148);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x149 = UINT64_MAX;
	static int64_t x150 = INT64_MIN;
	volatile int16_t x152 = INT16_MIN;
	volatile int32_t t36 = -215444995;

    t36 = ((x149!=(x150&x151))%x152);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x153 = INT64_MAX;
	uint8_t x154 = UINT8_MAX;
	int8_t x155 = INT8_MAX;
	uint64_t x156 = 83891918503196995LLU;
	volatile uint64_t t37 = 19332417132732506LLU;

    t37 = ((x153!=(x154&x155))%x156);

    if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x157 = INT64_MIN;
	int32_t x158 = INT32_MIN;
	uint16_t x159 = UINT16_MAX;
	int32_t x160 = INT32_MAX;
	volatile int32_t t38 = -158;

    t38 = ((x157!=(x158&x159))%x160);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x161 = -1;
	uint16_t x162 = UINT16_MAX;
	volatile uint8_t x163 = UINT8_MAX;
	int32_t x164 = INT32_MIN;

    t39 = ((x161!=(x162&x163))%x164);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x165 = 55U;
	int32_t x166 = 0;
	int8_t x167 = 19;
	static int64_t x168 = INT64_MAX;
	static volatile int64_t t40 = -2202305024918992039LL;

    t40 = ((x165!=(x166&x167))%x168);

    if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x169 = -1;
	int16_t x170 = -2;
	volatile uint16_t x172 = UINT16_MAX;
	volatile int32_t t41 = 179296;

    t41 = ((x169!=(x170&x171))%x172);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x173 = 0U;
	uint32_t x174 = 3478777U;

    t42 = ((x173!=(x174&x175))%x176);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x177 = INT8_MAX;
	static int32_t x178 = -1;
	static volatile uint64_t x179 = UINT64_MAX;
	static int8_t x180 = -1;
	int32_t t43 = 28149204;

    t43 = ((x177!=(x178&x179))%x180);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x181 = INT64_MAX;
	static uint16_t x182 = 41U;
	uint16_t x183 = UINT16_MAX;
	int16_t x184 = 7994;

    t44 = ((x181!=(x182&x183))%x184);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x185 = 12U;
	uint8_t x186 = 23U;
	static volatile int64_t x187 = INT64_MIN;
	uint32_t x188 = 885200587U;
	static uint32_t t45 = 195706U;

    t45 = ((x185!=(x186&x187))%x188);

    if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x189 = -3062LL;
	volatile int8_t x190 = INT8_MAX;
	volatile int16_t x191 = INT16_MIN;
	int16_t x192 = -25;

    t46 = ((x189!=(x190&x191))%x192);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x194 = 4U;
	static int32_t x195 = INT32_MIN;
	volatile uint8_t x196 = UINT8_MAX;

    t47 = ((x193!=(x194&x195))%x196);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x197 = -1;
	int16_t x198 = INT16_MAX;
	uint16_t x199 = 25735U;
	static volatile uint64_t x200 = 6450229572092565LLU;
	static uint64_t t48 = 114826014010LLU;

    t48 = ((x197!=(x198&x199))%x200);

    if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x201 = INT8_MIN;
	int8_t x202 = INT8_MIN;
	int32_t t49 = 51447350;

    t49 = ((x201!=(x202&x203))%x204);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x206 = INT8_MIN;
	int64_t x207 = INT64_MIN;
	int64_t x208 = -1LL;
	volatile int64_t t50 = 174952334LL;

    t50 = ((x205!=(x206&x207))%x208);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x209 = INT8_MIN;
	static int8_t x211 = INT8_MIN;
	int32_t x212 = INT32_MIN;
	volatile int32_t t51 = -245632397;

    t51 = ((x209!=(x210&x211))%x212);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x215 = -1;
	static int16_t x216 = INT16_MAX;
	volatile int32_t t52 = -97;

    t52 = ((x213!=(x214&x215))%x216);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x218 = INT8_MIN;
	static volatile int16_t x219 = -3664;
	int16_t x220 = -1137;
	static int32_t t53 = -1;

    t53 = ((x217!=(x218&x219))%x220);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x223 = 0;
	int64_t x224 = INT64_MAX;
	int64_t t54 = -14616414009774616LL;

    t54 = ((x221!=(x222&x223))%x224);

    if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x225 = INT8_MIN;
	int8_t x226 = -1;
	int64_t x227 = INT64_MAX;
	static volatile int16_t x228 = INT16_MIN;
	int32_t t55 = 4947603;

    t55 = ((x225!=(x226&x227))%x228);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x229 = INT32_MAX;
	int16_t x230 = -1;
	int32_t x232 = INT32_MAX;

    t56 = ((x229!=(x230&x231))%x232);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x234 = UINT32_MAX;
	static int32_t t57 = -528;

    t57 = ((x233!=(x234&x235))%x236);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x238 = INT8_MIN;
	int8_t x240 = 7;
	static int32_t t58 = 53058673;

    t58 = ((x237!=(x238&x239))%x240);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x241 = INT16_MAX;
	int32_t x244 = INT32_MIN;
	static volatile int32_t t59 = 0;

    t59 = ((x241!=(x242&x243))%x244);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x245 = INT64_MAX;
	int16_t x246 = 2;
	static int16_t x247 = INT16_MAX;
	volatile int64_t x248 = INT64_MAX;
	static int64_t t60 = -493132649197LL;

    t60 = ((x245!=(x246&x247))%x248);

    if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x251 = INT32_MAX;
	int16_t x252 = INT16_MIN;
	int32_t t61 = 2417;

    t61 = ((x249!=(x250&x251))%x252);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x253 = 0U;
	uint32_t x254 = UINT32_MAX;
	volatile int8_t x255 = -1;
	static int8_t x256 = INT8_MIN;
	static int32_t t62 = 998;

    t62 = ((x253!=(x254&x255))%x256);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x257 = INT64_MAX;
	int32_t x258 = 498286067;
	static int64_t x259 = INT64_MIN;
	static int8_t x260 = INT8_MAX;
	static int32_t t63 = 105921324;

    t63 = ((x257!=(x258&x259))%x260);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x261 = 3381U;
	static int8_t x263 = -1;
	uint32_t x264 = 138481585U;
	uint32_t t64 = 2936U;

    t64 = ((x261!=(x262&x263))%x264);

    if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x265 = -1;
	int16_t x267 = INT16_MIN;
	uint16_t x268 = UINT16_MAX;
	int32_t t65 = 0;

    t65 = ((x265!=(x266&x267))%x268);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x269 = INT16_MIN;
	int64_t x270 = -3306289955998553LL;
	int8_t x271 = -1;
	uint16_t x272 = UINT16_MAX;
	int32_t t66 = -125351;

    t66 = ((x269!=(x270&x271))%x272);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x274 = INT64_MIN;
	uint8_t x275 = UINT8_MAX;
	uint64_t x276 = 108602LLU;
	uint64_t t67 = 7761894953LLU;

    t67 = ((x273!=(x274&x275))%x276);

    if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x278 = 24245584U;
	volatile int32_t x279 = 6;
	int8_t x280 = -1;
	int32_t t68 = -50995;

    t68 = ((x277!=(x278&x279))%x280);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x281 = -1;
	int64_t x282 = 340037319462904331LL;
	static int32_t x284 = INT32_MIN;
	volatile int32_t t69 = -3156;

    t69 = ((x281!=(x282&x283))%x284);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x285 = INT8_MIN;
	uint8_t x286 = UINT8_MAX;
	static volatile uint64_t x287 = 205309469059686189LLU;
	volatile int32_t x288 = 672143606;
	volatile int32_t t70 = -1;

    t70 = ((x285!=(x286&x287))%x288);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x290 = INT8_MAX;
	int8_t x291 = 0;
	static uint32_t x292 = UINT32_MAX;
	uint32_t t71 = 1552321U;

    t71 = ((x289!=(x290&x291))%x292);

    if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x293 = -265;
	int64_t x294 = -1316LL;
	int32_t t72 = -494838;

    t72 = ((x293!=(x294&x295))%x296);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x297 = -1;
	int64_t x298 = 4468LL;
	int8_t x299 = 3;
	volatile int16_t x300 = -1;
	volatile int32_t t73 = -268;

    t73 = ((x297!=(x298&x299))%x300);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x302 = INT32_MIN;
	int32_t x303 = INT32_MAX;
	int64_t x304 = INT64_MIN;
	volatile int64_t t74 = -244LL;

    t74 = ((x301!=(x302&x303))%x304);

    if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x305 = INT32_MIN;
	int32_t x306 = 15;
	uint64_t x307 = UINT64_MAX;
	volatile int8_t x308 = INT8_MIN;
	volatile int32_t t75 = -1;

    t75 = ((x305!=(x306&x307))%x308);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x310 = INT64_MIN;
	volatile uint16_t x311 = 80U;
	static uint16_t x312 = 10512U;
	volatile int32_t t76 = 0;

    t76 = ((x309!=(x310&x311))%x312);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x314 = 894916U;
	uint32_t x315 = UINT32_MAX;
	volatile int64_t x316 = INT64_MIN;
	static volatile int64_t t77 = 4795638LL;

    t77 = ((x313!=(x314&x315))%x316);

    if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x318 = 30286U;
	int64_t x320 = INT64_MAX;

    t78 = ((x317!=(x318&x319))%x320);

    if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t t79 = 16;

    t79 = ((x321!=(x322&x323))%x324);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x325 = -12826;
	int16_t x326 = -9;
	int64_t x328 = INT64_MAX;

    t80 = ((x325!=(x326&x327))%x328);

    if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x329 = INT32_MAX;
	int16_t x332 = INT16_MAX;

    t81 = ((x329!=(x330&x331))%x332);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x333 = 7U;
	static uint16_t x335 = 98U;
	uint32_t x336 = 38237111U;

    t82 = ((x333!=(x334&x335))%x336);

    if (t82 != 1U) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x338 = INT16_MAX;
	volatile uint64_t x339 = 3LLU;
	int16_t x340 = INT16_MIN;
	int32_t t83 = -780;

    t83 = ((x337!=(x338&x339))%x340);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x341 = 1;
	volatile int8_t x342 = 0;
	volatile uint64_t x343 = 1962154884472412LLU;
	int64_t x344 = 375216478968191633LL;
	int64_t t84 = 0LL;

    t84 = ((x341!=(x342&x343))%x344);

    if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint8_t x346 = 2U;
	volatile int16_t x348 = INT16_MIN;
	volatile int32_t t85 = 20969270;

    t85 = ((x345!=(x346&x347))%x348);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x349 = -3075;
	int8_t x350 = INT8_MIN;
	int16_t x351 = -1;
	int8_t x352 = INT8_MIN;
	volatile int32_t t86 = 57285595;

    t86 = ((x349!=(x350&x351))%x352);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x353 = 35;
	uint16_t x354 = UINT16_MAX;
	volatile uint8_t x355 = 10U;
	int64_t x356 = INT64_MAX;
	int64_t t87 = -32959081LL;

    t87 = ((x353!=(x354&x355))%x356);

    if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x357 = UINT32_MAX;
	int8_t x358 = -39;
	int16_t x359 = INT16_MAX;
	static volatile int64_t x360 = -1LL;
	volatile int64_t t88 = 4LL;

    t88 = ((x357!=(x358&x359))%x360);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x361 = UINT8_MAX;
	int16_t x362 = INT16_MIN;
	int64_t x364 = INT64_MAX;
	volatile int64_t t89 = 7365263455LL;

    t89 = ((x361!=(x362&x363))%x364);

    if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x365 = -1;
	int16_t x366 = INT16_MIN;
	volatile uint16_t x367 = 48U;
	int64_t x368 = -1LL;
	volatile int64_t t90 = 1LL;

    t90 = ((x365!=(x366&x367))%x368);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x369 = UINT8_MAX;
	volatile int32_t x370 = -34;
	int16_t x371 = INT16_MIN;
	volatile int8_t x372 = -1;
	static volatile int32_t t91 = -987121494;

    t91 = ((x369!=(x370&x371))%x372);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x373 = 90U;
	volatile uint8_t x374 = 3U;
	volatile int64_t x375 = INT64_MAX;
	static int16_t x376 = INT16_MAX;
	volatile int32_t t92 = 2606;

    t92 = ((x373!=(x374&x375))%x376);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x377 = INT8_MIN;
	int64_t x378 = -35399722265015666LL;
	uint16_t x379 = UINT16_MAX;
	static uint64_t t93 = 15795847499LLU;

    t93 = ((x377!=(x378&x379))%x380);

    if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x382 = 122U;
	volatile uint16_t x383 = 24598U;
	uint8_t x384 = UINT8_MAX;
	volatile int32_t t94 = 397149;

    t94 = ((x381!=(x382&x383))%x384);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x387 = UINT64_MAX;
	volatile int64_t x388 = 528LL;

    t95 = ((x385!=(x386&x387))%x388);

    if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x391 = 658U;
	uint8_t x392 = UINT8_MAX;

    t96 = ((x389!=(x390&x391))%x392);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x393 = UINT32_MAX;
	int32_t x394 = 172354919;
	static int8_t x395 = -1;
	volatile int64_t t97 = -15873041973393LL;

    t97 = ((x393!=(x394&x395))%x396);

    if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x397 = UINT64_MAX;
	uint8_t x399 = UINT8_MAX;
	volatile int32_t t98 = -3270702;

    t98 = ((x397!=(x398&x399))%x400);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x401 = 0;
	volatile int64_t x402 = -1LL;
	int64_t x403 = INT64_MIN;
	int32_t x404 = INT32_MIN;
	int32_t t99 = 40694538;

    t99 = ((x401!=(x402&x403))%x404);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x405 = INT16_MIN;
	int16_t x406 = INT16_MAX;
	int8_t x407 = INT8_MAX;

    t100 = ((x405!=(x406&x407))%x408);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x409 = 0;
	int8_t x410 = INT8_MAX;
	uint16_t x412 = UINT16_MAX;
	volatile int32_t t101 = 11923;

    t101 = ((x409!=(x410&x411))%x412);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x413 = -2;
	uint32_t x414 = 169533991U;
	static int32_t x415 = -1;
	int32_t x416 = INT32_MIN;

    t102 = ((x413!=(x414&x415))%x416);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x418 = UINT32_MAX;
	int16_t x419 = 223;
	volatile int8_t x420 = INT8_MIN;

    t103 = ((x417!=(x418&x419))%x420);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x421 = INT16_MIN;
	static int8_t x422 = INT8_MIN;
	volatile uint64_t x423 = UINT64_MAX;
	int64_t x424 = INT64_MIN;
	static volatile int64_t t104 = -15LL;

    t104 = ((x421!=(x422&x423))%x424);

    if (t104 != 1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x425 = -1;
	uint8_t x426 = UINT8_MAX;
	int8_t x427 = 4;
	static volatile uint32_t x428 = 114639780U;
	uint32_t t105 = 11783254U;

    t105 = ((x425!=(x426&x427))%x428);

    if (t105 != 1U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x429 = 2U;
	volatile int16_t x430 = -2505;
	static int16_t x431 = INT16_MAX;
	uint32_t x432 = 2U;
	static volatile uint32_t t106 = 69843U;

    t106 = ((x429!=(x430&x431))%x432);

    if (t106 != 1U) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x433 = -14;
	int64_t x434 = INT64_MIN;
	volatile int64_t x435 = -872LL;
	int64_t x436 = INT64_MAX;
	volatile int64_t t107 = -1120412LL;

    t107 = ((x433!=(x434&x435))%x436);

    if (t107 != 1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x437 = 961619122;
	uint8_t x438 = 1U;
	int32_t x440 = 142;
	volatile int32_t t108 = 25;

    t108 = ((x437!=(x438&x439))%x440);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x441 = -1;
	uint16_t x442 = 0U;
	int32_t x443 = -1;
	uint32_t x444 = 6242U;

    t109 = ((x441!=(x442&x443))%x444);

    if (t109 != 1U) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x445 = 7;
	uint16_t x446 = UINT16_MAX;
	volatile int32_t x447 = 14437;
	uint64_t x448 = UINT64_MAX;

    t110 = ((x445!=(x446&x447))%x448);

    if (t110 != 1LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x449 = 76834U;
	uint8_t x450 = 104U;
	int32_t t111 = 57;

    t111 = ((x449!=(x450&x451))%x452);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x453 = 78;
	static uint64_t x454 = 2166501354045LLU;
	static uint16_t x455 = 6U;
	uint32_t x456 = 535029992U;
	uint32_t t112 = 1435759920U;

    t112 = ((x453!=(x454&x455))%x456);

    if (t112 != 1U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x457 = 5U;
	int16_t x458 = -1;
	uint32_t x459 = UINT32_MAX;
	volatile int32_t t113 = 27880070;

    t113 = ((x457!=(x458&x459))%x460);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x461 = 113867559;
	int32_t x462 = 48871;
	uint16_t x463 = UINT16_MAX;
	uint16_t x464 = UINT16_MAX;
	volatile int32_t t114 = -143908;

    t114 = ((x461!=(x462&x463))%x464);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x466 = 500978LLU;
	int16_t x467 = -737;
	int8_t x468 = 6;
	static int32_t t115 = -1445;

    t115 = ((x465!=(x466&x467))%x468);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x473 = INT16_MIN;
	int32_t x474 = INT32_MIN;
	uint64_t x475 = 6092LLU;
	static volatile uint8_t x476 = 11U;

    t116 = ((x473!=(x474&x475))%x476);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint32_t x477 = 1335954111U;
	int16_t x478 = INT16_MIN;
	int64_t x479 = INT64_MAX;
	int32_t x480 = -1;

    t117 = ((x477!=(x478&x479))%x480);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x481 = -1;
	int64_t x482 = 456231980849LL;
	static int32_t x483 = 4886;
	uint8_t x484 = 6U;

    t118 = ((x481!=(x482&x483))%x484);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x485 = INT64_MIN;
	static int16_t x486 = 70;
	volatile int16_t x487 = 0;
	int64_t x488 = INT64_MIN;
	int64_t t119 = -3788741638630913LL;

    t119 = ((x485!=(x486&x487))%x488);

    if (t119 != 1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x489 = 9;
	int8_t x490 = INT8_MAX;
	uint8_t x491 = 74U;
	int64_t x492 = 180LL;
	volatile int64_t t120 = -8775694190456LL;

    t120 = ((x489!=(x490&x491))%x492);

    if (t120 != 1LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x493 = 18085164836172650LL;
	int64_t x495 = INT64_MIN;
	uint32_t t121 = 39132488U;

    t121 = ((x493!=(x494&x495))%x496);

    if (t121 != 1U) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x497 = -55890859949LL;
	int32_t x499 = -66378943;
	static int8_t x500 = 34;

    t122 = ((x497!=(x498&x499))%x500);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint8_t x501 = 85U;
	uint16_t x502 = UINT16_MAX;
	volatile int16_t x503 = INT16_MIN;
	int32_t x504 = INT32_MAX;

    t123 = ((x501!=(x502&x503))%x504);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x505 = -6951774305397LL;
	static int16_t x506 = INT16_MIN;
	int32_t x507 = 3;
	uint64_t x508 = 58972106LLU;
	volatile uint64_t t124 = 379303LLU;

    t124 = ((x505!=(x506&x507))%x508);

    if (t124 != 1LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x509 = 1931026;
	volatile int64_t x510 = INT64_MAX;
	volatile int64_t x512 = INT64_MIN;
	int64_t t125 = 17945809LL;

    t125 = ((x509!=(x510&x511))%x512);

    if (t125 != 1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x513 = 1710615458572959LLU;
	static int64_t x514 = -1LL;
	static volatile int32_t x515 = INT32_MAX;
	int32_t t126 = 0;

    t126 = ((x513!=(x514&x515))%x516);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x517 = -1;
	volatile int64_t x518 = -512519346971862LL;
	static int16_t x519 = 13;
	volatile int32_t x520 = INT32_MAX;
	int32_t t127 = 322;

    t127 = ((x517!=(x518&x519))%x520);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x521 = INT8_MAX;
	uint32_t x522 = UINT32_MAX;
	int16_t x523 = INT16_MAX;
	int64_t x524 = INT64_MIN;

    t128 = ((x521!=(x522&x523))%x524);

    if (t128 != 1LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x526 = 11U;
	int64_t x527 = INT64_MAX;
	volatile int8_t x528 = -1;
	volatile int32_t t129 = 1;

    t129 = ((x525!=(x526&x527))%x528);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int64_t x529 = -1LL;
	uint16_t x530 = 11U;
	uint8_t x532 = UINT8_MAX;

    t130 = ((x529!=(x530&x531))%x532);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint64_t x533 = 500856510256063736LLU;
	static uint16_t x534 = UINT16_MAX;
	static int32_t x535 = INT32_MIN;
	volatile int8_t x536 = 13;
	volatile int32_t t131 = 4;

    t131 = ((x533!=(x534&x535))%x536);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t t132 = -8148LL;

    t132 = ((x537!=(x538&x539))%x540);

    if (t132 != 1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x545 = -103047204562LL;
	int8_t x546 = INT8_MAX;
	static int8_t x547 = INT8_MAX;
	uint32_t x548 = UINT32_MAX;
	volatile uint32_t t133 = 251845011U;

    t133 = ((x545!=(x546&x547))%x548);

    if (t133 != 1U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x549 = 40454258515145271LLU;
	volatile int32_t x550 = INT32_MIN;
	static int64_t x551 = INT64_MIN;
	int32_t x552 = INT32_MIN;
	volatile int32_t t134 = 0;

    t134 = ((x549!=(x550&x551))%x552);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x553 = 0;
	static uint8_t x554 = UINT8_MAX;
	int32_t x555 = -1;
	uint16_t x556 = 42U;
	int32_t t135 = -2465046;

    t135 = ((x553!=(x554&x555))%x556);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x557 = INT64_MIN;
	uint8_t x558 = 22U;
	int8_t x559 = INT8_MIN;
	int32_t t136 = -700171;

    t136 = ((x557!=(x558&x559))%x560);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x561 = 10174U;
	int16_t x562 = INT16_MAX;
	volatile uint8_t x564 = 24U;

    t137 = ((x561!=(x562&x563))%x564);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x565 = UINT8_MAX;
	int32_t x566 = 3053497;
	int16_t x567 = 1297;
	static int32_t x568 = INT32_MIN;

    t138 = ((x565!=(x566&x567))%x568);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x571 = INT8_MIN;
	volatile int32_t t139 = -25934840;

    t139 = ((x569!=(x570&x571))%x572);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x573 = INT16_MIN;
	volatile uint16_t x574 = UINT16_MAX;
	static int64_t x575 = INT64_MAX;
	uint32_t x576 = 17U;
	static uint32_t t140 = 731U;

    t140 = ((x573!=(x574&x575))%x576);

    if (t140 != 1U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x577 = UINT64_MAX;
	int16_t x578 = -1;
	static uint8_t x579 = UINT8_MAX;
	uint64_t x580 = 200074LLU;

    t141 = ((x577!=(x578&x579))%x580);

    if (t141 != 1LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint64_t x581 = UINT64_MAX;
	uint8_t x582 = 1U;
	int32_t x583 = 0;
	static uint64_t x584 = 3903881677155323LLU;
	volatile uint64_t t142 = 39790025LLU;

    t142 = ((x581!=(x582&x583))%x584);

    if (t142 != 1LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x585 = INT64_MAX;
	uint32_t x586 = 1U;
	int32_t t143 = 19864577;

    t143 = ((x585!=(x586&x587))%x588);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x589 = 7U;
	volatile uint16_t x590 = UINT16_MAX;
	int32_t x591 = -10;
	int32_t x592 = INT32_MIN;

    t144 = ((x589!=(x590&x591))%x592);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x593 = INT64_MIN;
	uint8_t x594 = 88U;
	volatile int64_t x595 = INT64_MIN;
	static uint16_t x596 = 26U;

    t145 = ((x593!=(x594&x595))%x596);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x597 = INT32_MAX;
	volatile int16_t x598 = INT16_MAX;
	int32_t x599 = 180;
	int32_t t146 = -490;

    t146 = ((x597!=(x598&x599))%x600);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x601 = INT16_MAX;
	uint64_t x602 = 48259943437799LLU;
	uint32_t x604 = 14302U;
	uint32_t t147 = 396U;

    t147 = ((x601!=(x602&x603))%x604);

    if (t147 != 1U) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x605 = INT32_MAX;
	uint16_t x606 = 433U;
	uint16_t x607 = 3917U;
	int64_t x608 = INT64_MAX;
	int64_t t148 = 324016454828LL;

    t148 = ((x605!=(x606&x607))%x608);

    if (t148 != 1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x609 = UINT32_MAX;
	int64_t x610 = -1LL;
	int16_t x611 = INT16_MIN;
	int64_t x612 = 499591943822LL;
	int64_t t149 = 7517548147460LL;

    t149 = ((x609!=(x610&x611))%x612);

    if (t149 != 1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x613 = INT32_MIN;
	int32_t x614 = 71804;
	int8_t x615 = -1;
	int8_t x616 = INT8_MIN;
	int32_t t150 = 112;

    t150 = ((x613!=(x614&x615))%x616);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x617 = 0;
	volatile int8_t x619 = INT8_MIN;
	static volatile int64_t x620 = INT64_MAX;
	int64_t t151 = -27837583LL;

    t151 = ((x617!=(x618&x619))%x620);

    if (t151 != 1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x622 = INT64_MIN;
	int8_t x623 = INT8_MIN;
	volatile int32_t x624 = INT32_MIN;

    t152 = ((x621!=(x622&x623))%x624);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x625 = INT16_MIN;
	int64_t x626 = -3487865140246LL;
	int8_t x627 = INT8_MAX;
	volatile uint32_t x628 = 5181839U;

    t153 = ((x625!=(x626&x627))%x628);

    if (t153 != 1U) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x629 = -1;
	int32_t x630 = -1;
	int16_t x631 = INT16_MAX;
	uint8_t x632 = 11U;
	static volatile int32_t t154 = -2150;

    t154 = ((x629!=(x630&x631))%x632);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x633 = -1817;
	uint16_t x635 = 0U;
	int8_t x636 = INT8_MIN;
	volatile int32_t t155 = -43343;

    t155 = ((x633!=(x634&x635))%x636);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x639 = -1;
	uint32_t t156 = 1U;

    t156 = ((x637!=(x638&x639))%x640);

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x641 = 22689LLU;
	int16_t x642 = 6;
	uint8_t x643 = 1U;
	uint32_t t157 = 56905U;

    t157 = ((x641!=(x642&x643))%x644);

    if (t157 != 1U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x645 = UINT32_MAX;
	static int32_t x647 = INT32_MIN;
	volatile int16_t x648 = INT16_MIN;
	static int32_t t158 = 23557;

    t158 = ((x645!=(x646&x647))%x648);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x649 = INT64_MIN;
	int64_t x650 = INT64_MIN;
	volatile int32_t t159 = 1;

    t159 = ((x649!=(x650&x651))%x652);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x654 = INT8_MIN;
	static uint32_t x655 = 53852788U;
	volatile int16_t x656 = INT16_MIN;

    t160 = ((x653!=(x654&x655))%x656);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x657 = -1LL;
	int8_t x659 = -1;
	int32_t t161 = 1613176;

    t161 = ((x657!=(x658&x659))%x660);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x661 = -1LL;
	volatile uint8_t x662 = UINT8_MAX;
	uint32_t x663 = 120303790U;
	uint16_t x664 = UINT16_MAX;
	int32_t t162 = -131115978;

    t162 = ((x661!=(x662&x663))%x664);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x665 = -6;
	int64_t x666 = INT64_MAX;
	uint16_t x667 = UINT16_MAX;
	int32_t x668 = INT32_MIN;
	int32_t t163 = 13;

    t163 = ((x665!=(x666&x667))%x668);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x669 = 1U;
	uint16_t x670 = 3U;
	static int8_t x671 = -11;
	static int64_t x672 = -1LL;
	int64_t t164 = 741635LL;

    t164 = ((x669!=(x670&x671))%x672);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x673 = 8718;
	uint16_t x674 = UINT16_MAX;
	static volatile int64_t x675 = INT64_MAX;
	int16_t x676 = INT16_MIN;
	int32_t t165 = 172647339;

    t165 = ((x673!=(x674&x675))%x676);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x677 = -1LL;
	volatile int64_t x679 = INT64_MAX;
	int64_t x680 = 1513967082LL;
	volatile int64_t t166 = 1LL;

    t166 = ((x677!=(x678&x679))%x680);

    if (t166 != 1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x681 = -1LL;
	static int64_t x683 = -16475041LL;
	static volatile int32_t x684 = -1;
	volatile int32_t t167 = -7047;

    t167 = ((x681!=(x682&x683))%x684);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x685 = -1;
	static int16_t x686 = INT16_MIN;
	int8_t x687 = INT8_MIN;
	int32_t t168 = -264825290;

    t168 = ((x685!=(x686&x687))%x688);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x691 = -2;
	static int16_t x692 = INT16_MAX;
	int32_t t169 = 2;

    t169 = ((x689!=(x690&x691))%x692);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x693 = INT64_MAX;
	static int32_t x694 = 3543604;
	volatile uint32_t x695 = 12194U;
	uint64_t x696 = UINT64_MAX;
	volatile uint64_t t170 = 29608993LLU;

    t170 = ((x693!=(x694&x695))%x696);

    if (t170 != 1LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x697 = INT64_MIN;
	int8_t x698 = -1;
	uint16_t x699 = 2768U;
	static volatile int8_t x700 = INT8_MIN;

    t171 = ((x697!=(x698&x699))%x700);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x701 = -1148009974LL;
	static int16_t x702 = INT16_MIN;
	int16_t x704 = 37;
	int32_t t172 = -376351409;

    t172 = ((x701!=(x702&x703))%x704);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint64_t x705 = UINT64_MAX;
	int8_t x706 = INT8_MAX;
	static int64_t x707 = 7448594646849379LL;
	int8_t x708 = INT8_MIN;
	static volatile int32_t t173 = -392417;

    t173 = ((x705!=(x706&x707))%x708);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x709 = INT32_MAX;
	static volatile int32_t x710 = INT32_MIN;
	static int64_t x712 = INT64_MAX;
	static int64_t t174 = -648909168605076631LL;

    t174 = ((x709!=(x710&x711))%x712);

    if (t174 != 1LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x713 = UINT64_MAX;
	static volatile int16_t x714 = INT16_MIN;
	uint8_t x715 = 2U;
	uint16_t x716 = 11U;

    t175 = ((x713!=(x714&x715))%x716);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x717 = INT32_MIN;
	uint8_t x719 = UINT8_MAX;
	volatile int32_t x720 = -1;
	volatile int32_t t176 = 267920396;

    t176 = ((x717!=(x718&x719))%x720);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x721 = 621U;
	int8_t x722 = -1;
	static int64_t x723 = INT64_MIN;
	int16_t x724 = INT16_MIN;
	volatile int32_t t177 = 8;

    t177 = ((x721!=(x722&x723))%x724);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x725 = INT16_MIN;
	uint64_t x726 = 100975724521LLU;
	uint8_t x727 = UINT8_MAX;
	int8_t x728 = -4;
	volatile int32_t t178 = -23583;

    t178 = ((x725!=(x726&x727))%x728);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x729 = INT16_MIN;
	int64_t x730 = INT64_MIN;
	int32_t x731 = INT32_MIN;
	int16_t x732 = -1;
	static volatile int32_t t179 = -18909;

    t179 = ((x729!=(x730&x731))%x732);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x733 = INT16_MAX;
	int64_t x734 = INT64_MIN;
	int16_t x736 = 3446;

    t180 = ((x733!=(x734&x735))%x736);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x737 = INT32_MIN;
	int32_t x738 = INT32_MIN;
	uint32_t x739 = 141347959U;
	uint32_t x740 = UINT32_MAX;

    t181 = ((x737!=(x738&x739))%x740);

    if (t181 != 1U) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x741 = -31114262;
	volatile int8_t x742 = INT8_MAX;
	uint16_t x744 = UINT16_MAX;
	volatile int32_t t182 = 0;

    t182 = ((x741!=(x742&x743))%x744);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x745 = INT64_MIN;
	uint8_t x746 = 10U;
	int16_t x748 = -1;
	int32_t t183 = 1813440;

    t183 = ((x745!=(x746&x747))%x748);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x749 = INT32_MIN;
	volatile int32_t x750 = INT32_MIN;
	int16_t x752 = -1;
	int32_t t184 = 440033185;

    t184 = ((x749!=(x750&x751))%x752);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x754 = INT8_MAX;
	int64_t x755 = INT64_MAX;
	int32_t t185 = -16234471;

    t185 = ((x753!=(x754&x755))%x756);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x757 = 11LL;
	uint8_t x759 = UINT8_MAX;
	volatile int64_t x760 = INT64_MIN;
	int64_t t186 = 1900539800190333LL;

    t186 = ((x757!=(x758&x759))%x760);

    if (t186 != 1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x761 = -93698;
	uint32_t x762 = UINT32_MAX;
	volatile uint16_t x763 = 506U;
	int64_t x764 = INT64_MAX;

    t187 = ((x761!=(x762&x763))%x764);

    if (t187 != 1LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x766 = 1U;
	int32_t x767 = -1;
	int8_t x768 = -22;

    t188 = ((x765!=(x766&x767))%x768);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x769 = -1LL;
	volatile int32_t x770 = -18174;
	int64_t x771 = 612649335614781916LL;
	int32_t t189 = 138012916;

    t189 = ((x769!=(x770&x771))%x772);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x773 = 16771508;
	static int16_t x774 = -58;
	static volatile int32_t x775 = INT32_MIN;
	static int8_t x776 = -1;
	volatile int32_t t190 = -597952132;

    t190 = ((x773!=(x774&x775))%x776);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint32_t x777 = 105218103U;
	uint64_t x778 = 216624472LLU;
	int8_t x779 = -1;
	uint16_t x780 = 61U;

    t191 = ((x777!=(x778&x779))%x780);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x781 = -1;
	uint16_t x782 = UINT16_MAX;
	volatile int64_t x783 = -1LL;
	static uint8_t x784 = UINT8_MAX;
	volatile int32_t t192 = 7482;

    t192 = ((x781!=(x782&x783))%x784);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x785 = 53243LLU;
	volatile uint64_t x786 = 159LLU;
	static uint8_t x787 = 1U;
	int16_t x788 = INT16_MAX;
	int32_t t193 = -1;

    t193 = ((x785!=(x786&x787))%x788);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x789 = 1189952840235LL;
	int16_t x790 = INT16_MIN;
	uint8_t x791 = 0U;
	int16_t x792 = INT16_MIN;
	static volatile int32_t t194 = -14553291;

    t194 = ((x789!=(x790&x791))%x792);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x793 = UINT32_MAX;
	uint16_t x794 = 728U;
	static int16_t x796 = INT16_MIN;

    t195 = ((x793!=(x794&x795))%x796);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x802 = INT32_MIN;
	int16_t x804 = INT16_MIN;
	volatile int32_t t196 = -411614;

    t196 = ((x801!=(x802&x803))%x804);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x806 = INT64_MIN;
	static uint8_t x808 = 57U;
	static volatile int32_t t197 = -113;

    t197 = ((x805!=(x806&x807))%x808);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x809 = INT16_MIN;
	int32_t x812 = INT32_MIN;
	int32_t t198 = -1103500;

    t198 = ((x809!=(x810&x811))%x812);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint8_t x813 = 5U;
	static int8_t x814 = 29;
	static uint64_t x816 = UINT64_MAX;
	uint64_t t199 = 363615086407LLU;

    t199 = ((x813!=(x814&x815))%x816);

    if (t199 != 1LLU) { NG(); } else { ; }
	
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

