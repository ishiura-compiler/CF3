
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

static int16_t x1 = INT16_MIN;
int32_t x2 = INT32_MIN;
int8_t x4 = INT8_MIN;
uint64_t x10 = UINT64_MAX;
volatile int8_t x11 = INT8_MAX;
static volatile int32_t t3 = -39;
volatile uint16_t x19 = UINT16_MAX;
volatile int16_t x25 = -1;
int64_t x30 = INT64_MIN;
int16_t x31 = -1;
static int8_t x46 = 1;
volatile int32_t x47 = INT32_MIN;
int32_t x53 = INT32_MAX;
volatile int64_t t13 = 30272620737924LL;
int32_t x60 = INT32_MIN;
uint16_t x62 = 108U;
int32_t x64 = -4;
int64_t x67 = INT64_MAX;
int32_t t16 = 0;
int16_t x74 = INT16_MIN;
uint64_t x75 = UINT64_MAX;
int32_t t19 = 445609366;
uint64_t x88 = 235LLU;
int8_t x90 = -1;
int64_t x93 = INT64_MIN;
volatile int16_t x101 = INT16_MIN;
volatile int8_t x107 = INT8_MIN;
volatile int32_t t28 = 104070;
int64_t x122 = -325867797LL;
uint8_t x124 = UINT8_MAX;
volatile int32_t t30 = 443;
int8_t x125 = INT8_MIN;
int32_t x128 = INT32_MIN;
volatile int32_t t31 = -56;
static volatile uint64_t t33 = 5157814616307LLU;
static volatile uint64_t x139 = UINT64_MAX;
int64_t t35 = 546515766LL;
uint16_t x146 = 19824U;
int32_t x147 = -1;
int16_t x154 = INT16_MIN;
int32_t x156 = INT32_MIN;
int32_t t38 = -14895;
static int16_t x157 = INT16_MIN;
volatile int8_t x158 = INT8_MAX;
int16_t x160 = INT16_MAX;
static uint16_t x165 = UINT16_MAX;
static uint32_t x169 = UINT32_MAX;
volatile int32_t t42 = -128691044;
static int8_t x176 = INT8_MAX;
volatile int8_t x178 = INT8_MIN;
int8_t x187 = -1;
int64_t x190 = -116509815LL;
int8_t x196 = INT8_MIN;
volatile int32_t t48 = -975031;
uint16_t x199 = UINT16_MAX;
int64_t x201 = -189LL;
volatile int8_t x202 = INT8_MIN;
volatile uint32_t t50 = 71250610U;
int32_t x232 = INT32_MIN;
static int32_t x237 = INT32_MAX;
uint16_t x245 = 6U;
uint64_t x247 = UINT64_MAX;
static int32_t t63 = -8;
volatile int8_t x263 = INT8_MIN;
static volatile int8_t x266 = -1;
volatile int64_t t66 = -219107LL;
int16_t x276 = INT16_MAX;
int16_t x278 = -1;
volatile uint16_t x283 = 1U;
int64_t t70 = 268736LL;
volatile uint32_t t71 = 528988672U;
int64_t x289 = -2115560514924100LL;
int16_t x291 = 1;
volatile int32_t t73 = 13451;
static int8_t x297 = -15;
volatile int64_t t75 = 63950216066132233LL;
int32_t x305 = -1;
int64_t x306 = -1793894943492LL;
int32_t x308 = INT32_MIN;
static int32_t x320 = INT32_MIN;
static volatile int64_t t80 = -2988LL;
static int8_t x327 = 1;
volatile uint16_t x328 = UINT16_MAX;
static volatile int32_t x335 = INT32_MIN;
int32_t t84 = -7009366;
static int64_t x341 = -1LL;
uint32_t x344 = 1701043U;
uint16_t x350 = 8420U;
static uint32_t x355 = UINT32_MAX;
volatile int64_t x369 = -1LL;
int16_t x370 = -9155;
static int16_t x377 = -1;
int16_t x379 = INT16_MIN;
int16_t x387 = 16;
int32_t x391 = 1;
uint8_t x395 = 0U;
static int32_t x396 = -1;
volatile int32_t t98 = 488682630;
volatile uint32_t x400 = 1U;
uint64_t x405 = UINT64_MAX;
volatile int64_t x406 = INT64_MIN;
volatile uint8_t x409 = 2U;
int64_t x414 = INT64_MAX;
volatile int32_t t103 = 27;
static volatile int64_t t104 = 11803LL;
int32_t t106 = -12874;
int8_t x429 = -15;
int32_t t107 = 1;
uint16_t x437 = 26U;
static volatile int64_t x439 = -1LL;
volatile int8_t x447 = INT8_MIN;
int32_t t113 = 383618291;
uint32_t x457 = 224522689U;
static int32_t t114 = -27;
int8_t x462 = INT8_MIN;
int32_t t115 = 2;
int32_t t116 = 1376940;
int64_t x503 = INT64_MIN;
volatile int64_t x508 = INT64_MIN;
int64_t x509 = INT64_MIN;
int16_t x511 = -485;
int32_t t127 = 3;
int16_t x513 = INT16_MIN;
int16_t x527 = 2;
int64_t x529 = 66713797LL;
static uint64_t x532 = 2799751896LLU;
uint64_t t132 = 310348LLU;
int32_t x555 = -622405000;
uint16_t x556 = 11885U;
uint8_t x560 = 3U;
int8_t x563 = INT8_MAX;
int32_t x567 = -1;
int32_t x568 = -3142566;
int32_t t141 = 19097440;
int32_t t142 = -576834;
int8_t x573 = -1;
volatile uint32_t x580 = UINT32_MAX;
uint32_t t144 = 0U;
uint64_t x583 = 338473906982966791LLU;
uint64_t x603 = 144558271LLU;
volatile uint64_t x609 = 34013585434979771LLU;
volatile int32_t t152 = -1;
int64_t x625 = INT64_MAX;
int32_t t156 = 3;
uint16_t x629 = UINT16_MAX;
int8_t x631 = 55;
uint32_t x634 = 17U;
int32_t x635 = 173994907;
volatile int64_t x638 = -113LL;
int16_t x640 = INT16_MIN;
uint16_t x641 = 3U;
int32_t t162 = 160;
volatile int64_t x653 = 1475LL;
static int8_t x656 = INT8_MIN;
uint32_t x659 = 743038676U;
uint16_t x660 = 28U;
volatile uint32_t x661 = UINT32_MAX;
volatile uint32_t x666 = UINT32_MAX;
uint32_t t166 = 2760289U;
uint8_t x670 = UINT8_MAX;
volatile int32_t x674 = 312495;
int32_t x677 = INT32_MIN;
int16_t x678 = -1;
int64_t x698 = INT64_MIN;
static uint16_t x701 = 25275U;
static volatile int32_t t175 = -189042021;
int64_t x706 = 6915356LL;
int64_t x711 = 592950786555394706LL;
int8_t x722 = -49;
volatile int64_t x729 = -1271957LL;
volatile int64_t x730 = INT64_MIN;
int16_t x735 = -1;
int64_t t183 = -88LL;
int64_t t184 = -117222LL;
int64_t t186 = 1869824LL;
int8_t x752 = INT8_MIN;
volatile int32_t t187 = -1474505;
uint32_t x758 = UINT32_MAX;
int64_t x760 = -1LL;
volatile int64_t t189 = 146LL;
static uint8_t x767 = 10U;
int8_t x768 = 16;
uint64_t x770 = 10222228257LLU;
volatile uint16_t x774 = 103U;
int8_t x776 = INT8_MIN;
uint64_t x783 = UINT64_MAX;
uint8_t x784 = UINT8_MAX;
int8_t x787 = -1;
static int16_t x792 = -1;
volatile int8_t x794 = 1;
static int32_t t199 = -1148163;


void f0(void) {
    	int8_t x3 = -1;
	int32_t t0 = -200917;

    t0 = ((x1!=(x2&x3))&x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MAX;
	int16_t x6 = 2;
	int16_t x7 = -61;
	static int32_t x8 = INT32_MIN;
	int32_t t1 = -104;

    t1 = ((x5!=(x6&x7))&x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	static uint16_t x12 = 5U;
	int32_t t2 = 3943;

    t2 = ((x9!=(x10&x11))&x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MAX;
	static volatile uint64_t x14 = 5628856616804142095LLU;
	int16_t x15 = INT16_MIN;
	uint8_t x16 = UINT8_MAX;

    t3 = ((x13!=(x14&x15))&x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	volatile int16_t x18 = INT16_MIN;
	volatile int32_t x20 = INT32_MIN;
	int32_t t4 = 3;

    t4 = ((x17!=(x18&x19))&x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x21 = 1141;
	int32_t x22 = INT32_MIN;
	uint32_t x23 = 8500U;
	int32_t x24 = INT32_MIN;
	int32_t t5 = 888642276;

    t5 = ((x21!=(x22&x23))&x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x26 = 2;
	int64_t x27 = 23LL;
	int64_t x28 = INT64_MIN;
	volatile int64_t t6 = -864092773569986627LL;

    t6 = ((x25!=(x26&x27))&x28);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 15U;
	static int16_t x32 = INT16_MIN;
	static volatile int32_t t7 = 2461369;

    t7 = ((x29!=(x30&x31))&x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x33 = 130853754U;
	int16_t x34 = INT16_MIN;
	uint16_t x35 = UINT16_MAX;
	uint8_t x36 = 4U;
	int32_t t8 = 1;

    t8 = ((x33!=(x34&x35))&x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x37 = 30;
	static int16_t x38 = -1;
	volatile int16_t x39 = -777;
	int8_t x40 = INT8_MIN;
	volatile int32_t t9 = -1;

    t9 = ((x37!=(x38&x39))&x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x41 = 527390517U;
	int64_t x42 = -252592726797LL;
	static int32_t x43 = INT32_MIN;
	int32_t x44 = INT32_MAX;
	volatile int32_t t10 = 3947;

    t10 = ((x41!=(x42&x43))&x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MAX;
	int32_t x48 = 204565234;
	volatile int32_t t11 = 30720;

    t11 = ((x45!=(x46&x47))&x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = 1983159U;
	volatile uint64_t x50 = 1LLU;
	volatile int8_t x51 = -1;
	int32_t x52 = INT32_MIN;
	volatile int32_t t12 = 298;

    t12 = ((x49!=(x50&x51))&x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x54 = 1217;
	volatile int16_t x55 = -3231;
	int64_t x56 = INT64_MIN;

    t13 = ((x53!=(x54&x55))&x56);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = -1;
	int64_t x58 = -1382LL;
	static volatile int32_t x59 = INT32_MIN;
	int32_t t14 = 788312;

    t14 = ((x57!=(x58&x59))&x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = 28U;
	static volatile int32_t x63 = -5;
	volatile int32_t t15 = -7252154;

    t15 = ((x61!=(x62&x63))&x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = 4U;
	int64_t x66 = -1LL;
	int8_t x68 = -2;

    t16 = ((x65!=(x66&x67))&x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x69 = INT8_MIN;
	static int32_t x70 = 370391577;
	int64_t x71 = 5213782024291606LL;
	int8_t x72 = INT8_MIN;
	int32_t t17 = -76;

    t17 = ((x69!=(x70&x71))&x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MIN;
	int32_t x76 = INT32_MAX;
	int32_t t18 = -2974;

    t18 = ((x73!=(x74&x75))&x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MIN;
	static uint16_t x78 = 101U;
	volatile int8_t x79 = INT8_MIN;
	int16_t x80 = INT16_MIN;

    t19 = ((x77!=(x78&x79))&x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x81 = 20U;
	static uint64_t x82 = UINT64_MAX;
	int64_t x83 = -1LL;
	uint8_t x84 = 89U;
	int32_t t20 = 7;

    t20 = ((x81!=(x82&x83))&x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = 60891134503LL;
	static uint16_t x86 = 624U;
	int32_t x87 = -652760287;
	uint64_t t21 = 42138154703883LLU;

    t21 = ((x85!=(x86&x87))&x88);

    if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x89 = 29U;
	int16_t x91 = 0;
	int32_t x92 = INT32_MAX;
	volatile int32_t t22 = 115789506;

    t22 = ((x89!=(x90&x91))&x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x94 = 23U;
	int16_t x95 = -1;
	uint8_t x96 = 83U;
	volatile int32_t t23 = -95883;

    t23 = ((x93!=(x94&x95))&x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x97 = 7U;
	static int16_t x98 = INT16_MIN;
	uint8_t x99 = UINT8_MAX;
	volatile int64_t x100 = INT64_MAX;
	int64_t t24 = 117985762740LL;

    t24 = ((x97!=(x98&x99))&x100);

    if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x102 = -1;
	uint32_t x103 = UINT32_MAX;
	int16_t x104 = INT16_MAX;
	int32_t t25 = -237;

    t25 = ((x101!=(x102&x103))&x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = INT32_MIN;
	volatile int8_t x106 = 28;
	uint32_t x108 = 420902U;
	uint32_t t26 = 11303U;

    t26 = ((x105!=(x106&x107))&x108);

    if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = INT16_MIN;
	int32_t x110 = 388305192;
	int8_t x111 = -8;
	int32_t x112 = INT32_MIN;
	int32_t t27 = 21464;

    t27 = ((x109!=(x110&x111))&x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x113 = -54;
	static int64_t x114 = 182079161LL;
	int32_t x115 = INT32_MIN;
	static int8_t x116 = 1;

    t28 = ((x113!=(x114&x115))&x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int64_t x117 = -1LL;
	uint32_t x118 = 14739U;
	int64_t x119 = -1LL;
	int16_t x120 = -1541;
	volatile int32_t t29 = 366038;

    t29 = ((x117!=(x118&x119))&x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint8_t x121 = 23U;
	volatile int32_t x123 = -17;

    t30 = ((x121!=(x122&x123))&x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x126 = UINT32_MAX;
	int32_t x127 = 398001116;

    t31 = ((x125!=(x126&x127))&x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int32_t x129 = -1;
	int64_t x130 = -1LL;
	static volatile int32_t x131 = INT32_MAX;
	static volatile uint32_t x132 = 3416U;
	static volatile uint32_t t32 = 58U;

    t32 = ((x129!=(x130&x131))&x132);

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = 1267;
	uint64_t x134 = 0LLU;
	uint32_t x135 = 2632214U;
	uint64_t x136 = 39184665914LLU;

    t33 = ((x133!=(x134&x135))&x136);

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x137 = INT8_MAX;
	int32_t x138 = -1;
	volatile int32_t x140 = INT32_MAX;
	int32_t t34 = -1259898;

    t34 = ((x137!=(x138&x139))&x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = 0LL;
	uint16_t x142 = UINT16_MAX;
	uint8_t x143 = 3U;
	volatile int64_t x144 = INT64_MIN;

    t35 = ((x141!=(x142&x143))&x144);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = -1LL;
	int64_t x148 = -1LL;
	static volatile int64_t t36 = 6845957071LL;

    t36 = ((x145!=(x146&x147))&x148);

    if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MAX;
	int8_t x150 = INT8_MAX;
	static uint64_t x151 = 133160628039427LLU;
	int32_t x152 = INT32_MIN;
	int32_t t37 = 13259279;

    t37 = ((x149!=(x150&x151))&x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x153 = -10;
	int16_t x155 = INT16_MAX;

    t38 = ((x153!=(x154&x155))&x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x159 = -778635;
	volatile int32_t t39 = 230;

    t39 = ((x157!=(x158&x159))&x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x161 = -96212824440878LL;
	int8_t x162 = INT8_MAX;
	int32_t x163 = -442756864;
	int16_t x164 = -1;
	volatile int32_t t40 = -1590344;

    t40 = ((x161!=(x162&x163))&x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x166 = INT64_MIN;
	volatile uint32_t x167 = 2373U;
	volatile uint64_t x168 = 838143222217LLU;
	uint64_t t41 = 12531334086058527LLU;

    t41 = ((x165!=(x166&x167))&x168);

    if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x170 = -1LL;
	int64_t x171 = INT64_MAX;
	int32_t x172 = 60887;

    t42 = ((x169!=(x170&x171))&x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = 68772202712070762LLU;
	uint32_t x174 = 834228U;
	static int16_t x175 = INT16_MIN;
	static int32_t t43 = -25;

    t43 = ((x173!=(x174&x175))&x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = INT64_MIN;
	int64_t x179 = -9026741190LL;
	int16_t x180 = 3081;
	volatile int32_t t44 = -121318956;

    t44 = ((x177!=(x178&x179))&x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = INT32_MIN;
	int64_t x182 = INT64_MAX;
	int16_t x183 = -1;
	uint32_t x184 = 30U;
	uint32_t t45 = 89U;

    t45 = ((x181!=(x182&x183))&x184);

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x185 = UINT16_MAX;
	static int64_t x186 = INT64_MIN;
	static volatile int64_t x188 = -1LL;
	int64_t t46 = 1025693LL;

    t46 = ((x185!=(x186&x187))&x188);

    if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = INT8_MAX;
	int8_t x191 = INT8_MIN;
	int8_t x192 = INT8_MIN;
	int32_t t47 = -826000479;

    t47 = ((x189!=(x190&x191))&x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = 0;
	volatile int16_t x194 = INT16_MIN;
	int8_t x195 = -1;

    t48 = ((x193!=(x194&x195))&x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = INT64_MIN;
	static uint16_t x198 = UINT16_MAX;
	uint64_t x200 = 21LLU;
	volatile uint64_t t49 = 4704455623858871433LLU;

    t49 = ((x197!=(x198&x199))&x200);

    if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint32_t x203 = 2U;
	uint32_t x204 = UINT32_MAX;

    t50 = ((x201!=(x202&x203))&x204);

    if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = INT16_MIN;
	int32_t x206 = -1;
	uint32_t x207 = 415U;
	volatile uint64_t x208 = UINT64_MAX;
	uint64_t t51 = 30680481LLU;

    t51 = ((x205!=(x206&x207))&x208);

    if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x209 = INT8_MAX;
	static uint64_t x210 = 2LLU;
	int64_t x211 = INT64_MAX;
	static uint8_t x212 = 25U;
	static int32_t t52 = -10;

    t52 = ((x209!=(x210&x211))&x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x213 = -1;
	uint64_t x214 = 56912891716LLU;
	int8_t x215 = INT8_MAX;
	static int32_t x216 = -1;
	int32_t t53 = -1;

    t53 = ((x213!=(x214&x215))&x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x217 = 7U;
	uint64_t x218 = 158164133200LLU;
	int8_t x219 = -1;
	volatile uint8_t x220 = 26U;
	int32_t t54 = -6858749;

    t54 = ((x217!=(x218&x219))&x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x221 = 195U;
	volatile int16_t x222 = -1;
	int16_t x223 = -53;
	int8_t x224 = INT8_MAX;
	static int32_t t55 = -14274;

    t55 = ((x221!=(x222&x223))&x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint32_t x225 = 180534U;
	volatile int8_t x226 = INT8_MAX;
	volatile int16_t x227 = -56;
	int32_t x228 = INT32_MIN;
	static volatile int32_t t56 = -25927865;

    t56 = ((x225!=(x226&x227))&x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x229 = 19083000LL;
	int32_t x230 = INT32_MAX;
	int64_t x231 = 258LL;
	volatile int32_t t57 = 99;

    t57 = ((x229!=(x230&x231))&x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x233 = INT64_MIN;
	int64_t x234 = INT64_MIN;
	int16_t x235 = 9;
	int16_t x236 = INT16_MIN;
	int32_t t58 = -411984851;

    t58 = ((x233!=(x234&x235))&x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x238 = INT8_MAX;
	volatile int8_t x239 = 0;
	int16_t x240 = -1699;
	int32_t t59 = 16683294;

    t59 = ((x237!=(x238&x239))&x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x241 = 6U;
	static int32_t x242 = INT32_MIN;
	int8_t x243 = INT8_MIN;
	static uint8_t x244 = UINT8_MAX;
	int32_t t60 = 6876;

    t60 = ((x241!=(x242&x243))&x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x246 = -1;
	int8_t x248 = INT8_MIN;
	volatile int32_t t61 = -1;

    t61 = ((x245!=(x246&x247))&x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x249 = 99381344U;
	uint32_t x250 = 2845825U;
	volatile int16_t x251 = INT16_MIN;
	volatile uint16_t x252 = 1U;
	volatile int32_t t62 = 28164637;

    t62 = ((x249!=(x250&x251))&x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = -1;
	volatile int16_t x254 = -1;
	static int16_t x255 = INT16_MIN;
	static uint16_t x256 = UINT16_MAX;

    t63 = ((x253!=(x254&x255))&x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = -11;
	static int8_t x258 = INT8_MIN;
	int8_t x259 = -1;
	volatile uint64_t x260 = 25LLU;
	static uint64_t t64 = 1055104279676LLU;

    t64 = ((x257!=(x258&x259))&x260);

    if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = -7;
	int16_t x262 = -1;
	int16_t x264 = INT16_MIN;
	int32_t t65 = 222;

    t65 = ((x261!=(x262&x263))&x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x265 = 1074LL;
	int8_t x267 = -1;
	volatile int64_t x268 = -1LL;

    t66 = ((x265!=(x266&x267))&x268);

    if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x269 = INT16_MIN;
	uint64_t x270 = 8349247LLU;
	static int64_t x271 = INT64_MAX;
	static int8_t x272 = 1;
	int32_t t67 = -1;

    t67 = ((x269!=(x270&x271))&x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x273 = UINT64_MAX;
	volatile uint64_t x274 = 576392701LLU;
	volatile uint64_t x275 = 3LLU;
	volatile int32_t t68 = 3;

    t68 = ((x273!=(x274&x275))&x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = -8;
	uint32_t x279 = UINT32_MAX;
	int16_t x280 = -1;
	volatile int32_t t69 = 16;

    t69 = ((x277!=(x278&x279))&x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = INT8_MAX;
	int16_t x282 = INT16_MIN;
	volatile int64_t x284 = INT64_MIN;

    t70 = ((x281!=(x282&x283))&x284);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x285 = 3518;
	int64_t x286 = INT64_MAX;
	int64_t x287 = -1LL;
	static uint32_t x288 = UINT32_MAX;

    t71 = ((x285!=(x286&x287))&x288);

    if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x290 = 9593;
	int64_t x292 = INT64_MIN;
	int64_t t72 = -7914255682160324LL;

    t72 = ((x289!=(x290&x291))&x292);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x293 = 1423U;
	static uint8_t x294 = UINT8_MAX;
	int16_t x295 = 1;
	static int8_t x296 = 0;

    t73 = ((x293!=(x294&x295))&x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x298 = -1LL;
	int32_t x299 = -1;
	static volatile int32_t x300 = -49699442;
	static int32_t t74 = 54599;

    t74 = ((x297!=(x298&x299))&x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x301 = 1U;
	static int8_t x302 = -1;
	int16_t x303 = INT16_MIN;
	volatile int64_t x304 = -1LL;

    t75 = ((x301!=(x302&x303))&x304);

    if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x307 = -1LL;
	volatile int32_t t76 = -218;

    t76 = ((x305!=(x306&x307))&x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x309 = 3544U;
	int64_t x310 = INT64_MIN;
	uint64_t x311 = 2046509531021822996LLU;
	volatile int8_t x312 = -1;
	static int32_t t77 = -54066;

    t77 = ((x309!=(x310&x311))&x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = INT8_MAX;
	int16_t x314 = -1;
	int8_t x315 = 49;
	int16_t x316 = INT16_MAX;
	static volatile int32_t t78 = 10376;

    t78 = ((x313!=(x314&x315))&x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x317 = 4U;
	int8_t x318 = -1;
	static uint64_t x319 = 158LLU;
	int32_t t79 = -656014;

    t79 = ((x317!=(x318&x319))&x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x321 = INT16_MIN;
	int32_t x322 = INT32_MAX;
	uint64_t x323 = UINT64_MAX;
	int64_t x324 = -9998808LL;

    t80 = ((x321!=(x322&x323))&x324);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = -3;
	uint32_t x326 = 10U;
	volatile int32_t t81 = 30;

    t81 = ((x325!=(x326&x327))&x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = INT16_MAX;
	volatile uint32_t x330 = UINT32_MAX;
	int64_t x331 = -3045810916041256988LL;
	static volatile uint8_t x332 = 6U;
	volatile int32_t t82 = -19566;

    t82 = ((x329!=(x330&x331))&x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = 1;
	volatile int8_t x334 = 52;
	int8_t x336 = -1;
	int32_t t83 = -2;

    t83 = ((x333!=(x334&x335))&x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = -1;
	int16_t x338 = -1;
	int16_t x339 = -1;
	volatile int32_t x340 = 36;

    t84 = ((x337!=(x338&x339))&x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x342 = 72U;
	int16_t x343 = -1;
	uint32_t t85 = 16670480U;

    t85 = ((x341!=(x342&x343))&x344);

    if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x345 = INT32_MIN;
	int32_t x346 = 3;
	uint8_t x347 = 3U;
	int32_t x348 = INT32_MIN;
	volatile int32_t t86 = 86;

    t86 = ((x345!=(x346&x347))&x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x349 = UINT32_MAX;
	static int64_t x351 = -1LL;
	int64_t x352 = INT64_MAX;
	int64_t t87 = 1310LL;

    t87 = ((x349!=(x350&x351))&x352);

    if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = -1;
	uint64_t x354 = 156193149328LLU;
	volatile uint32_t x356 = UINT32_MAX;
	volatile uint32_t t88 = 38419U;

    t88 = ((x353!=(x354&x355))&x356);

    if (t88 != 1U) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int8_t x357 = INT8_MIN;
	int16_t x358 = INT16_MAX;
	int16_t x359 = INT16_MAX;
	volatile int32_t x360 = 1;
	int32_t t89 = -3;

    t89 = ((x357!=(x358&x359))&x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x361 = 1941986604U;
	int8_t x362 = 2;
	static int64_t x363 = INT64_MAX;
	int8_t x364 = INT8_MAX;
	int32_t t90 = 35191;

    t90 = ((x361!=(x362&x363))&x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x365 = INT16_MIN;
	int16_t x366 = INT16_MIN;
	volatile int16_t x367 = INT16_MIN;
	volatile int8_t x368 = INT8_MIN;
	int32_t t91 = 22;

    t91 = ((x365!=(x366&x367))&x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x371 = -1;
	volatile int16_t x372 = INT16_MIN;
	static int32_t t92 = -16;

    t92 = ((x369!=(x370&x371))&x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x373 = UINT64_MAX;
	int32_t x374 = INT32_MIN;
	volatile int64_t x375 = 131LL;
	int32_t x376 = INT32_MIN;
	static volatile int32_t t93 = 1;

    t93 = ((x373!=(x374&x375))&x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x378 = -64277776LL;
	int8_t x380 = INT8_MIN;
	int32_t t94 = -3409;

    t94 = ((x377!=(x378&x379))&x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x381 = INT32_MIN;
	volatile int16_t x382 = -1;
	static uint16_t x383 = 30540U;
	static int16_t x384 = -629;
	volatile int32_t t95 = 807;

    t95 = ((x381!=(x382&x383))&x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = INT16_MIN;
	int16_t x386 = 31;
	volatile uint64_t x388 = 15247162887LLU;
	static volatile uint64_t t96 = 517069475594LLU;

    t96 = ((x385!=(x386&x387))&x388);

    if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = -19;
	int16_t x390 = -54;
	int64_t x392 = INT64_MIN;
	volatile int64_t t97 = 170780LL;

    t97 = ((x389!=(x390&x391))&x392);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = -14;
	static uint16_t x394 = 648U;

    t98 = ((x393!=(x394&x395))&x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = 251;
	volatile int16_t x398 = 1;
	uint8_t x399 = 0U;
	static uint32_t t99 = 18883294U;

    t99 = ((x397!=(x398&x399))&x400);

    if (t99 != 1U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x401 = 345U;
	int8_t x402 = INT8_MAX;
	static int8_t x403 = INT8_MAX;
	int16_t x404 = -2720;
	volatile int32_t t100 = 0;

    t100 = ((x401!=(x402&x403))&x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x407 = -32774LL;
	static volatile int32_t x408 = INT32_MAX;
	static volatile int32_t t101 = -9396668;

    t101 = ((x405!=(x406&x407))&x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x410 = -2;
	volatile int32_t x411 = INT32_MAX;
	int8_t x412 = -1;
	int32_t t102 = -176;

    t102 = ((x409!=(x410&x411))&x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = INT32_MIN;
	int64_t x415 = 49415645977983595LL;
	int8_t x416 = 24;

    t103 = ((x413!=(x414&x415))&x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = 21407081;
	volatile int8_t x418 = INT8_MAX;
	uint8_t x419 = 20U;
	volatile int64_t x420 = -32682LL;

    t104 = ((x417!=(x418&x419))&x420);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = INT32_MIN;
	static int32_t x422 = INT32_MIN;
	static int8_t x423 = -1;
	uint64_t x424 = 1656560366174328LLU;
	volatile uint64_t t105 = 177533172002LLU;

    t105 = ((x421!=(x422&x423))&x424);

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x425 = UINT32_MAX;
	int16_t x426 = -1;
	static volatile int64_t x427 = 46372860986LL;
	static uint8_t x428 = 0U;

    t106 = ((x425!=(x426&x427))&x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x430 = 0U;
	uint16_t x431 = 239U;
	int16_t x432 = -1;

    t107 = ((x429!=(x430&x431))&x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x433 = UINT16_MAX;
	int64_t x434 = 19433299347514LL;
	static int8_t x435 = 18;
	int32_t x436 = -131990;
	volatile int32_t t108 = 1;

    t108 = ((x433!=(x434&x435))&x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x438 = INT16_MIN;
	uint16_t x440 = 9854U;
	static int32_t t109 = -3642601;

    t109 = ((x437!=(x438&x439))&x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x441 = INT8_MIN;
	int8_t x442 = INT8_MAX;
	static volatile int8_t x443 = INT8_MIN;
	static volatile int16_t x444 = INT16_MIN;
	volatile int32_t t110 = 4671956;

    t110 = ((x441!=(x442&x443))&x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x445 = 4647069220252LLU;
	int8_t x446 = -1;
	static int32_t x448 = -20;
	int32_t t111 = 245104;

    t111 = ((x445!=(x446&x447))&x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = INT32_MIN;
	volatile int8_t x450 = 0;
	int64_t x451 = INT64_MAX;
	uint64_t x452 = 326357678LLU;
	uint64_t t112 = 7599062LLU;

    t112 = ((x449!=(x450&x451))&x452);

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = 1;
	int16_t x454 = INT16_MIN;
	volatile int32_t x455 = INT32_MAX;
	volatile int8_t x456 = INT8_MIN;

    t113 = ((x453!=(x454&x455))&x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x458 = 12845672LLU;
	volatile int32_t x459 = -1;
	uint8_t x460 = 27U;

    t114 = ((x457!=(x458&x459))&x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = -10135619LL;
	int16_t x463 = INT16_MIN;
	int32_t x464 = -249116;

    t115 = ((x461!=(x462&x463))&x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint8_t x465 = 0U;
	int32_t x466 = INT32_MIN;
	static volatile uint32_t x467 = 37U;
	static int32_t x468 = -1;

    t116 = ((x465!=(x466&x467))&x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = 2192302680284LL;
	int16_t x470 = -670;
	int32_t x471 = -1;
	volatile int32_t x472 = 168971979;
	volatile int32_t t117 = 176;

    t117 = ((x469!=(x470&x471))&x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = 1;
	volatile int8_t x474 = INT8_MIN;
	uint16_t x475 = UINT16_MAX;
	uint16_t x476 = UINT16_MAX;
	volatile int32_t t118 = 213312402;

    t118 = ((x473!=(x474&x475))&x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x477 = INT16_MIN;
	int32_t x478 = -1;
	static int64_t x479 = 85937366261993447LL;
	int32_t x480 = INT32_MIN;
	int32_t t119 = 434;

    t119 = ((x477!=(x478&x479))&x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x481 = INT16_MIN;
	int16_t x482 = -1;
	int8_t x483 = -1;
	static uint64_t x484 = 24478LLU;
	static uint64_t t120 = 9509592LLU;

    t120 = ((x481!=(x482&x483))&x484);

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = -53;
	uint64_t x486 = 6876006165877934LLU;
	int8_t x487 = INT8_MAX;
	int32_t x488 = INT32_MAX;
	int32_t t121 = 785490394;

    t121 = ((x485!=(x486&x487))&x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x489 = UINT8_MAX;
	int8_t x490 = -29;
	int8_t x491 = -1;
	uint32_t x492 = UINT32_MAX;
	static uint32_t t122 = 3858007U;

    t122 = ((x489!=(x490&x491))&x492);

    if (t122 != 1U) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x493 = -42;
	static volatile uint32_t x494 = 19236610U;
	static int64_t x495 = INT64_MIN;
	static int16_t x496 = -1;
	int32_t t123 = 101;

    t123 = ((x493!=(x494&x495))&x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x497 = INT8_MAX;
	int16_t x498 = INT16_MAX;
	uint16_t x499 = 15341U;
	int32_t x500 = INT32_MIN;
	int32_t t124 = 106;

    t124 = ((x497!=(x498&x499))&x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x501 = 10U;
	volatile int64_t x502 = -1LL;
	volatile uint8_t x504 = 15U;
	volatile int32_t t125 = -370057;

    t125 = ((x501!=(x502&x503))&x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x505 = 5U;
	int8_t x506 = INT8_MAX;
	static int32_t x507 = -1;
	volatile int64_t t126 = -705LL;

    t126 = ((x505!=(x506&x507))&x508);

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x510 = 82060;
	volatile int8_t x512 = INT8_MAX;

    t127 = ((x509!=(x510&x511))&x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x514 = INT8_MIN;
	static int64_t x515 = INT64_MIN;
	static volatile int64_t x516 = 64LL;
	int64_t t128 = -539555830834204434LL;

    t128 = ((x513!=(x514&x515))&x516);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x517 = 30U;
	int16_t x518 = INT16_MIN;
	int32_t x519 = INT32_MIN;
	uint32_t x520 = 3112581U;
	uint32_t t129 = 5400U;

    t129 = ((x517!=(x518&x519))&x520);

    if (t129 != 1U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x521 = 26U;
	int64_t x522 = INT64_MAX;
	int32_t x523 = 10;
	volatile int32_t x524 = -2760;
	static volatile int32_t t130 = 3977714;

    t130 = ((x521!=(x522&x523))&x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = INT32_MIN;
	uint64_t x526 = 1100LLU;
	uint8_t x528 = 0U;
	volatile int32_t t131 = 1;

    t131 = ((x525!=(x526&x527))&x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x530 = -1LL;
	static int32_t x531 = INT32_MIN;

    t132 = ((x529!=(x530&x531))&x532);

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint64_t x533 = UINT64_MAX;
	volatile int64_t x534 = INT64_MIN;
	static uint8_t x535 = 61U;
	int8_t x536 = INT8_MIN;
	static int32_t t133 = 127;

    t133 = ((x533!=(x534&x535))&x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x537 = 12222767U;
	int16_t x538 = -1;
	int64_t x539 = -15903191380251340LL;
	uint8_t x540 = 10U;
	volatile int32_t t134 = 23;

    t134 = ((x537!=(x538&x539))&x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x541 = INT8_MAX;
	int8_t x542 = -1;
	volatile int16_t x543 = INT16_MAX;
	volatile int32_t x544 = 17040;
	int32_t t135 = -40828;

    t135 = ((x541!=(x542&x543))&x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x545 = 879514066U;
	int32_t x546 = 297200;
	uint32_t x547 = 2485944U;
	int16_t x548 = INT16_MIN;
	volatile int32_t t136 = -2;

    t136 = ((x545!=(x546&x547))&x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x549 = 13U;
	uint64_t x550 = 851813787LLU;
	int8_t x551 = 0;
	static int16_t x552 = INT16_MAX;
	static volatile int32_t t137 = 402;

    t137 = ((x549!=(x550&x551))&x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = -1;
	int8_t x554 = 41;
	volatile int32_t t138 = -20512;

    t138 = ((x553!=(x554&x555))&x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x557 = -751;
	int64_t x558 = -37641LL;
	int64_t x559 = -1050237379653205LL;
	volatile int32_t t139 = 24;

    t139 = ((x557!=(x558&x559))&x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x561 = 116027U;
	volatile int32_t x562 = 990666;
	volatile int16_t x564 = -2365;
	int32_t t140 = 463943;

    t140 = ((x561!=(x562&x563))&x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x565 = INT32_MAX;
	int16_t x566 = -308;

    t141 = ((x565!=(x566&x567))&x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x569 = UINT64_MAX;
	int16_t x570 = INT16_MAX;
	int32_t x571 = -1;
	int8_t x572 = INT8_MIN;

    t142 = ((x569!=(x570&x571))&x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x574 = 416365U;
	uint32_t x575 = UINT32_MAX;
	static volatile uint32_t x576 = 5U;
	volatile uint32_t t143 = 5U;

    t143 = ((x573!=(x574&x575))&x576);

    if (t143 != 1U) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = INT64_MAX;
	uint16_t x578 = 92U;
	int16_t x579 = INT16_MIN;

    t144 = ((x577!=(x578&x579))&x580);

    if (t144 != 1U) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = -1;
	static volatile int64_t x582 = -1LL;
	static uint16_t x584 = UINT16_MAX;
	static int32_t t145 = -191096;

    t145 = ((x581!=(x582&x583))&x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint8_t x585 = UINT8_MAX;
	static uint8_t x586 = 0U;
	static uint32_t x587 = UINT32_MAX;
	volatile int8_t x588 = INT8_MIN;
	int32_t t146 = -13622;

    t146 = ((x585!=(x586&x587))&x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x589 = INT64_MAX;
	int8_t x590 = -1;
	int16_t x591 = 56;
	int64_t x592 = INT64_MIN;
	static int64_t t147 = 24652LL;

    t147 = ((x589!=(x590&x591))&x592);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = -1LL;
	uint32_t x594 = UINT32_MAX;
	int16_t x595 = INT16_MAX;
	int16_t x596 = -6272;
	int32_t t148 = 97;

    t148 = ((x593!=(x594&x595))&x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = -1;
	int8_t x598 = 0;
	static int32_t x599 = INT32_MIN;
	int8_t x600 = 62;
	volatile int32_t t149 = -17710;

    t149 = ((x597!=(x598&x599))&x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = INT8_MAX;
	int8_t x602 = -1;
	static int32_t x604 = INT32_MIN;
	static int32_t t150 = 525991148;

    t150 = ((x601!=(x602&x603))&x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x605 = -1LL;
	static int32_t x606 = 18918075;
	static uint16_t x607 = 1U;
	int8_t x608 = INT8_MIN;
	volatile int32_t t151 = -179503617;

    t151 = ((x605!=(x606&x607))&x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x610 = INT16_MAX;
	uint8_t x611 = UINT8_MAX;
	int32_t x612 = -176312060;

    t152 = ((x609!=(x610&x611))&x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = -2;
	int64_t x614 = INT64_MIN;
	int8_t x615 = -17;
	volatile uint16_t x616 = 6U;
	volatile int32_t t153 = -12406;

    t153 = ((x613!=(x614&x615))&x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x617 = INT16_MIN;
	int8_t x618 = 0;
	int64_t x619 = INT64_MIN;
	int32_t x620 = INT32_MIN;
	volatile int32_t t154 = 114;

    t154 = ((x617!=(x618&x619))&x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x621 = 3114LLU;
	static int32_t x622 = INT32_MAX;
	volatile int16_t x623 = -1;
	int8_t x624 = -1;
	volatile int32_t t155 = -44;

    t155 = ((x621!=(x622&x623))&x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint32_t x626 = 0U;
	int8_t x627 = 1;
	int32_t x628 = 1;

    t156 = ((x625!=(x626&x627))&x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x630 = UINT32_MAX;
	int32_t x632 = -1;
	static int32_t t157 = -4;

    t157 = ((x629!=(x630&x631))&x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint8_t x633 = 31U;
	static uint16_t x636 = 4801U;
	int32_t t158 = 230885624;

    t158 = ((x633!=(x634&x635))&x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x637 = INT32_MAX;
	int16_t x639 = 1;
	int32_t t159 = 11494;

    t159 = ((x637!=(x638&x639))&x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint64_t x642 = 42LLU;
	int32_t x643 = INT32_MIN;
	uint64_t x644 = UINT64_MAX;
	uint64_t t160 = 2LLU;

    t160 = ((x641!=(x642&x643))&x644);

    if (t160 != 1LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = -1;
	int16_t x646 = -1103;
	volatile int64_t x647 = INT64_MIN;
	int16_t x648 = INT16_MIN;
	int32_t t161 = -209693;

    t161 = ((x645!=(x646&x647))&x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = INT64_MAX;
	int64_t x650 = 70135556742022209LL;
	static volatile int32_t x651 = -1;
	volatile int32_t x652 = INT32_MIN;

    t162 = ((x649!=(x650&x651))&x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x654 = -1LL;
	uint8_t x655 = UINT8_MAX;
	static volatile int32_t t163 = -440941434;

    t163 = ((x653!=(x654&x655))&x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x657 = INT8_MIN;
	uint16_t x658 = 0U;
	static volatile int32_t t164 = -2046280;

    t164 = ((x657!=(x658&x659))&x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x662 = 852902457U;
	volatile int32_t x663 = -25835;
	static volatile uint8_t x664 = 3U;
	int32_t t165 = -22917;

    t165 = ((x661!=(x662&x663))&x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = -1LL;
	static uint16_t x667 = 1U;
	uint32_t x668 = 601240246U;

    t166 = ((x665!=(x666&x667))&x668);

    if (t166 != 0U) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x669 = INT32_MIN;
	static uint64_t x671 = 438330LLU;
	int8_t x672 = -1;
	volatile int32_t t167 = 9631026;

    t167 = ((x669!=(x670&x671))&x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x673 = UINT64_MAX;
	static int64_t x675 = INT64_MIN;
	uint64_t x676 = 1121896255277LLU;
	uint64_t t168 = 1777139440523729083LLU;

    t168 = ((x673!=(x674&x675))&x676);

    if (t168 != 1LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x679 = -1;
	volatile int16_t x680 = -1;
	static int32_t t169 = 13;

    t169 = ((x677!=(x678&x679))&x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = -1;
	int8_t x682 = INT8_MIN;
	int16_t x683 = INT16_MIN;
	static int8_t x684 = -3;
	static volatile int32_t t170 = -1953;

    t170 = ((x681!=(x682&x683))&x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x685 = 2233012LLU;
	int8_t x686 = -2;
	uint8_t x687 = UINT8_MAX;
	int32_t x688 = INT32_MAX;
	volatile int32_t t171 = -235498;

    t171 = ((x685!=(x686&x687))&x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x689 = -1LL;
	volatile int16_t x690 = -1;
	static int64_t x691 = -1LL;
	int16_t x692 = INT16_MIN;
	static volatile int32_t t172 = -23;

    t172 = ((x689!=(x690&x691))&x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x693 = INT8_MIN;
	static volatile int64_t x694 = INT64_MAX;
	static uint32_t x695 = UINT32_MAX;
	volatile int64_t x696 = INT64_MIN;
	int64_t t173 = 1948466LL;

    t173 = ((x693!=(x694&x695))&x696);

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = INT32_MAX;
	int32_t x699 = INT32_MIN;
	int64_t x700 = -25616126LL;
	int64_t t174 = 720LL;

    t174 = ((x697!=(x698&x699))&x700);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x702 = INT64_MAX;
	int64_t x703 = INT64_MIN;
	int8_t x704 = -1;

    t175 = ((x701!=(x702&x703))&x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x705 = UINT64_MAX;
	int32_t x707 = INT32_MAX;
	volatile int64_t x708 = INT64_MAX;
	static volatile int64_t t176 = -23817249831545LL;

    t176 = ((x705!=(x706&x707))&x708);

    if (t176 != 1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = -1LL;
	int32_t x710 = INT32_MIN;
	int16_t x712 = -1;
	static volatile int32_t t177 = 3823051;

    t177 = ((x709!=(x710&x711))&x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x713 = UINT64_MAX;
	uint8_t x714 = 12U;
	int32_t x715 = 27605340;
	uint64_t x716 = 110789882321485LLU;
	uint64_t t178 = 45184505802689949LLU;

    t178 = ((x713!=(x714&x715))&x716);

    if (t178 != 1LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = INT16_MAX;
	uint16_t x718 = UINT16_MAX;
	int64_t x719 = INT64_MIN;
	uint16_t x720 = 148U;
	int32_t t179 = 31223252;

    t179 = ((x717!=(x718&x719))&x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = INT64_MIN;
	static int64_t x723 = -1LL;
	int8_t x724 = INT8_MAX;
	static volatile int32_t t180 = 136;

    t180 = ((x721!=(x722&x723))&x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = -44;
	uint8_t x726 = 54U;
	int64_t x727 = 535918859829063959LL;
	static int32_t x728 = INT32_MIN;
	int32_t t181 = -3;

    t181 = ((x725!=(x726&x727))&x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x731 = 15LLU;
	uint32_t x732 = 368U;
	static uint32_t t182 = 919627U;

    t182 = ((x729!=(x730&x731))&x732);

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x733 = 0U;
	int64_t x734 = INT64_MIN;
	static int64_t x736 = INT64_MAX;

    t183 = ((x733!=(x734&x735))&x736);

    if (t183 != 1LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x737 = INT64_MIN;
	int64_t x738 = INT64_MIN;
	int64_t x739 = 4LL;
	volatile int64_t x740 = -1LL;

    t184 = ((x737!=(x738&x739))&x740);

    if (t184 != 1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x741 = 27353U;
	int16_t x742 = -10439;
	int32_t x743 = INT32_MIN;
	static int16_t x744 = 1;
	int32_t t185 = -21;

    t185 = ((x741!=(x742&x743))&x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = INT64_MIN;
	int32_t x746 = -1;
	int64_t x747 = -20234437727245LL;
	int64_t x748 = INT64_MAX;

    t186 = ((x745!=(x746&x747))&x748);

    if (t186 != 1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x749 = UINT16_MAX;
	int8_t x750 = 0;
	static int8_t x751 = 21;

    t187 = ((x749!=(x750&x751))&x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x753 = UINT32_MAX;
	volatile uint64_t x754 = 547918LLU;
	static int32_t x755 = INT32_MIN;
	int8_t x756 = INT8_MAX;
	int32_t t188 = 65219;

    t188 = ((x753!=(x754&x755))&x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = -132135959320380LL;
	volatile int16_t x759 = INT16_MIN;

    t189 = ((x757!=(x758&x759))&x760);

    if (t189 != 1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = 2938;
	int64_t x762 = INT64_MIN;
	static volatile int64_t x763 = INT64_MIN;
	volatile int32_t x764 = -1;
	volatile int32_t t190 = -66980;

    t190 = ((x761!=(x762&x763))&x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x765 = 1011500429910LLU;
	int64_t x766 = 0LL;
	int32_t t191 = 0;

    t191 = ((x765!=(x766&x767))&x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x769 = 279665;
	volatile int32_t x771 = -1;
	uint16_t x772 = 336U;
	volatile int32_t t192 = 1958144;

    t192 = ((x769!=(x770&x771))&x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = INT16_MAX;
	static uint64_t x775 = UINT64_MAX;
	int32_t t193 = 261108;

    t193 = ((x773!=(x774&x775))&x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x777 = 8U;
	static int16_t x778 = -1;
	int32_t x779 = -1377730;
	int32_t x780 = -1;
	volatile int32_t t194 = 3544183;

    t194 = ((x777!=(x778&x779))&x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = 5;
	int8_t x782 = -1;
	static int32_t t195 = 11024;

    t195 = ((x781!=(x782&x783))&x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = -897100885;
	uint32_t x786 = UINT32_MAX;
	static int8_t x788 = -1;
	int32_t t196 = -2;

    t196 = ((x785!=(x786&x787))&x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x789 = 398U;
	int64_t x790 = -8LL;
	static uint64_t x791 = 11122983828LLU;
	volatile int32_t t197 = 7811;

    t197 = ((x789!=(x790&x791))&x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = 1;
	int64_t x795 = -1LL;
	static volatile uint16_t x796 = 1U;
	volatile int32_t t198 = -55456;

    t198 = ((x793!=(x794&x795))&x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = INT32_MIN;
	volatile uint32_t x798 = 52202788U;
	uint16_t x799 = UINT16_MAX;
	int16_t x800 = INT16_MAX;

    t199 = ((x797!=(x798&x799))&x800);

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

