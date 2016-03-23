
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

static volatile int32_t x1 = INT32_MIN;
volatile int32_t x4 = -58;
static int64_t x5 = INT64_MIN;
int32_t x7 = 497509764;
uint8_t x9 = UINT8_MAX;
int32_t t3 = 801501;
volatile int64_t x17 = INT64_MIN;
volatile uint16_t x32 = UINT16_MAX;
int32_t t7 = -6251487;
uint8_t x34 = 5U;
static volatile int32_t x39 = INT32_MIN;
int8_t x43 = INT8_MIN;
int64_t x49 = INT64_MIN;
int8_t x53 = INT8_MIN;
int64_t x54 = -1LL;
volatile uint32_t x58 = 78698U;
int32_t x60 = 97;
static int32_t x65 = -698;
static int32_t t16 = 471550542;
uint8_t x74 = 74U;
int32_t x76 = -1;
int8_t x77 = INT8_MAX;
int32_t x78 = -13664;
static uint32_t x80 = 65483U;
int64_t x83 = INT64_MAX;
int8_t x91 = -4;
int16_t x92 = -1;
static volatile int32_t t22 = 26051966;
int8_t x93 = 2;
static uint64_t x100 = UINT64_MAX;
int32_t x114 = INT32_MAX;
uint64_t x123 = UINT64_MAX;
static volatile int64_t t30 = 76159819796699068LL;
int16_t x125 = INT16_MAX;
static uint8_t x127 = 105U;
volatile uint32_t x128 = 314U;
int8_t x130 = INT8_MIN;
uint32_t t32 = 7U;
uint8_t x136 = 1U;
volatile uint8_t x137 = 47U;
static uint64_t x156 = 1LLU;
uint64_t x167 = 195LLU;
static uint64_t x170 = UINT64_MAX;
static uint64_t x185 = UINT64_MAX;
volatile uint8_t x196 = UINT8_MAX;
int8_t x197 = INT8_MIN;
volatile int8_t x202 = 1;
uint32_t x205 = UINT32_MAX;
int32_t x208 = 79;
volatile int32_t t54 = -59;
volatile uint32_t x222 = UINT32_MAX;
volatile int32_t t56 = -4;
volatile int64_t x229 = -1LL;
int64_t x231 = INT64_MIN;
int32_t x232 = -1;
uint8_t x239 = 126U;
int32_t x240 = INT32_MIN;
static volatile int32_t t59 = 8354;
uint32_t x241 = 121605573U;
int32_t x243 = INT32_MAX;
int8_t x258 = -32;
int64_t x263 = 454895996038LL;
int8_t x267 = -1;
int32_t t68 = -914188;
uint8_t x277 = 1U;
uint8_t x285 = 5U;
static int32_t x291 = 1;
int16_t x296 = 9;
int16_t x297 = INT16_MIN;
int32_t x305 = -1;
int32_t x307 = INT32_MAX;
volatile uint8_t x310 = 24U;
volatile int32_t t77 = 1684;
uint16_t x320 = 160U;
volatile int32_t x322 = INT32_MAX;
int32_t x324 = -69;
volatile int16_t x331 = -757;
volatile int16_t x336 = INT16_MIN;
volatile int16_t x339 = INT16_MIN;
int16_t x340 = 165;
volatile int32_t x348 = INT32_MIN;
int64_t x349 = INT64_MIN;
int64_t x352 = INT64_MIN;
uint8_t x353 = UINT8_MAX;
volatile int32_t t88 = 26928928;
int16_t x360 = -25;
static uint16_t x365 = 3946U;
static int32_t x369 = -2547802;
volatile int64_t t92 = 5306780LL;
static volatile int64_t x374 = INT64_MAX;
static volatile int16_t x376 = INT16_MAX;
static int64_t x377 = -1LL;
int8_t x385 = INT8_MIN;
uint16_t x387 = UINT16_MAX;
static int32_t t96 = -5078468;
static uint64_t x392 = 133557381LLU;
static volatile int32_t t98 = -182801;
int16_t x399 = INT16_MIN;
int16_t x401 = 17;
volatile uint32_t x409 = 10U;
static int8_t x410 = 31;
int16_t x412 = -1;
volatile int8_t x417 = INT8_MIN;
int32_t x420 = 16;
volatile int32_t t104 = -72038;
uint16_t x421 = UINT16_MAX;
volatile int32_t x425 = -1;
volatile int32_t t109 = 2882;
uint64_t x450 = 203LLU;
static int16_t x452 = -1;
int32_t x453 = INT32_MIN;
static int32_t x455 = -1;
uint64_t t114 = 364LLU;
uint32_t x462 = UINT32_MAX;
volatile uint32_t t115 = 446437U;
uint16_t x466 = 35U;
static uint32_t x469 = UINT32_MAX;
volatile uint32_t t117 = 134U;
int16_t x473 = -1458;
static volatile int8_t x483 = INT8_MIN;
uint32_t t120 = 4660U;
int32_t t121 = 16045087;
int64_t x492 = 4LL;
volatile int64_t t124 = 46521959549469419LL;
int16_t x501 = INT16_MIN;
int16_t x504 = INT16_MAX;
uint8_t x505 = 1U;
volatile uint8_t x506 = 13U;
static int64_t x521 = -3516531467698LL;
static int8_t x525 = 3;
volatile int32_t t131 = -24251;
uint16_t x531 = 8082U;
static int32_t t132 = 1;
int32_t x538 = INT32_MAX;
static volatile uint32_t t134 = 17010154U;
volatile int8_t x542 = -56;
uint8_t x547 = 111U;
volatile uint64_t t136 = 1979LLU;
uint8_t x554 = 1U;
int32_t t138 = -43993545;
int8_t x561 = 7;
uint16_t x562 = UINT16_MAX;
int64_t x563 = INT64_MIN;
static int16_t x564 = INT16_MIN;
int32_t x565 = -1;
static uint8_t x567 = 0U;
static uint64_t x570 = 2151454403570LLU;
static int32_t x571 = -1;
int16_t x583 = INT16_MIN;
int64_t x584 = 12772223527329LL;
uint32_t x586 = UINT32_MAX;
int32_t t149 = -29239;
int16_t x604 = INT16_MAX;
uint32_t x614 = UINT32_MAX;
int16_t x615 = -1;
uint8_t x626 = 7U;
volatile int16_t x628 = -1;
int16_t x630 = 1;
int8_t x631 = INT8_MAX;
static uint8_t x635 = 5U;
int64_t x639 = INT64_MAX;
uint64_t t160 = 46277LLU;
volatile int64_t t161 = -3203LL;
int16_t x653 = INT16_MIN;
static int32_t x654 = -4762;
uint8_t x655 = 26U;
int8_t x657 = INT8_MIN;
int16_t x661 = -3;
int64_t x662 = -22438834LL;
int64_t x664 = INT64_MIN;
volatile int16_t x665 = -28;
volatile int32_t x669 = 591;
int64_t x674 = 11465LL;
uint8_t x676 = 7U;
int64_t x679 = INT64_MIN;
int16_t x683 = INT16_MAX;
int16_t x685 = -1156;
int8_t x689 = INT8_MAX;
uint64_t x690 = 315401033117503LLU;
static volatile int16_t x692 = -1;
volatile int32_t t172 = -119292;
int64_t x695 = -7731876LL;
int64_t x700 = INT64_MAX;
int64_t t174 = 9718417LL;
uint32_t t175 = 675U;
int64_t x705 = INT64_MAX;
volatile int64_t x707 = -1LL;
int32_t t176 = 877;
static int16_t x709 = 18;
int32_t x711 = -1;
volatile int32_t t178 = 42676;
int32_t t180 = 622;
int32_t t183 = 1937003;
volatile int32_t x738 = -1;
int64_t x740 = -26388242946LL;
volatile int16_t x742 = -1;
int32_t x749 = -290;
static uint64_t t187 = 118776963993830175LLU;
static volatile uint64_t x756 = 17417077LLU;
static int32_t x759 = -19530209;
volatile int32_t t189 = -1623;
volatile uint32_t x764 = 37664902U;
int64_t x774 = INT64_MIN;
uint64_t x784 = 39209LLU;
static uint64_t x786 = 63555815LLU;
static volatile int32_t t196 = 80;
int8_t x798 = INT8_MIN;


void f0(void) {
    	int16_t x2 = INT16_MAX;
	volatile int64_t x3 = INT64_MIN;
	int32_t t0 = -204350786;

    t0 = (((x1<=x2)==x3)&x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int8_t x6 = -1;
	static int32_t x8 = INT32_MIN;
	int32_t t1 = -113629;

    t1 = (((x5<=x6)==x7)&x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x10 = UINT32_MAX;
	int64_t x11 = INT64_MIN;
	int8_t x12 = INT8_MIN;
	int32_t t2 = 3228728;

    t2 = (((x9<=x10)==x11)&x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = INT32_MIN;
	volatile uint16_t x14 = 4484U;
	uint16_t x15 = 4314U;
	int32_t x16 = -1;

    t3 = (((x13<=x14)==x15)&x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x18 = INT16_MIN;
	static int8_t x19 = INT8_MIN;
	int64_t x20 = INT64_MAX;
	volatile int64_t t4 = 5329974LL;

    t4 = (((x17<=x18)==x19)&x20);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 158LLU;
	uint32_t x22 = UINT32_MAX;
	static int8_t x23 = 6;
	uint8_t x24 = UINT8_MAX;
	volatile int32_t t5 = -5022;

    t5 = (((x21<=x22)==x23)&x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint32_t x25 = UINT32_MAX;
	volatile int64_t x26 = INT64_MIN;
	uint16_t x27 = UINT16_MAX;
	static uint64_t x28 = 1351776861017310782LLU;
	static uint64_t t6 = 18649745759182331LLU;

    t6 = (((x25<=x26)==x27)&x28);

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	int64_t x30 = 92733604195622388LL;
	volatile int32_t x31 = INT32_MIN;

    t7 = (((x29<=x30)==x31)&x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x33 = 27U;
	static uint16_t x35 = 103U;
	volatile int64_t x36 = -1LL;
	volatile int64_t t8 = 1089315990302175LL;

    t8 = (((x33<=x34)==x35)&x36);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = UINT64_MAX;
	int64_t x38 = INT64_MAX;
	int64_t x40 = 213898575155LL;
	volatile int64_t t9 = 1962993LL;

    t9 = (((x37<=x38)==x39)&x40);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = UINT16_MAX;
	int32_t x42 = INT32_MIN;
	int32_t x44 = 3290;
	static volatile int32_t t10 = 660299483;

    t10 = (((x41<=x42)==x43)&x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = 4U;
	static uint8_t x46 = 23U;
	volatile int8_t x47 = -12;
	static uint8_t x48 = UINT8_MAX;
	int32_t t11 = 3;

    t11 = (((x45<=x46)==x47)&x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x50 = -22;
	uint64_t x51 = 768887486LLU;
	uint64_t x52 = UINT64_MAX;
	static volatile uint64_t t12 = 257036563617891LLU;

    t12 = (((x49<=x50)==x51)&x52);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x55 = 521;
	int8_t x56 = -1;
	int32_t t13 = 696819684;

    t13 = (((x53<=x54)==x55)&x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MAX;
	int8_t x59 = 58;
	volatile int32_t t14 = 49;

    t14 = (((x57<=x58)==x59)&x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = UINT16_MAX;
	static volatile int8_t x62 = INT8_MIN;
	int32_t x63 = 0;
	uint64_t x64 = 5824728LLU;
	volatile uint64_t t15 = 5809LLU;

    t15 = (((x61<=x62)==x63)&x64);

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x66 = 125573392U;
	volatile uint64_t x67 = 53LLU;
	static int32_t x68 = 167187;

    t16 = (((x65<=x66)==x67)&x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x69 = -175;
	int16_t x70 = -6376;
	int16_t x71 = INT16_MIN;
	int64_t x72 = -1LL;
	volatile int64_t t17 = 1025443643451LL;

    t17 = (((x69<=x70)==x71)&x72);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = INT64_MIN;
	volatile int32_t x75 = INT32_MIN;
	static int32_t t18 = -456495;

    t18 = (((x73<=x74)==x75)&x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x79 = INT16_MIN;
	uint32_t t19 = 8199914U;

    t19 = (((x77<=x78)==x79)&x80);

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x81 = -1;
	volatile uint8_t x82 = 0U;
	uint32_t x84 = 97429342U;
	volatile uint32_t t20 = 16570623U;

    t20 = (((x81<=x82)==x83)&x84);

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = 601956358LL;
	int16_t x86 = INT16_MAX;
	volatile uint16_t x87 = 66U;
	volatile uint64_t x88 = 240LLU;
	uint64_t t21 = 512967730433LLU;

    t21 = (((x85<=x86)==x87)&x88);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = UINT64_MAX;
	int64_t x90 = -70960782698458327LL;

    t22 = (((x89<=x90)==x91)&x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x94 = INT8_MIN;
	static int32_t x95 = -102;
	int32_t x96 = 1849782;
	volatile int32_t t23 = 3;

    t23 = (((x93<=x94)==x95)&x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = INT32_MIN;
	int32_t x98 = 1;
	int64_t x99 = 900620297862LL;
	static volatile uint64_t t24 = 18LLU;

    t24 = (((x97<=x98)==x99)&x100);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x101 = UINT64_MAX;
	uint32_t x102 = 56U;
	uint8_t x103 = 56U;
	uint8_t x104 = 13U;
	volatile int32_t t25 = -21441;

    t25 = (((x101<=x102)==x103)&x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x105 = -217408;
	int8_t x106 = INT8_MAX;
	volatile int16_t x107 = INT16_MIN;
	static int64_t x108 = INT64_MAX;
	volatile int64_t t26 = 15496950946053617LL;

    t26 = (((x105<=x106)==x107)&x108);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = 1;
	volatile int8_t x110 = INT8_MIN;
	int64_t x111 = INT64_MIN;
	volatile int8_t x112 = INT8_MIN;
	volatile int32_t t27 = -2226992;

    t27 = (((x109<=x110)==x111)&x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = INT16_MIN;
	int64_t x115 = INT64_MIN;
	int8_t x116 = -1;
	volatile int32_t t28 = -50831;

    t28 = (((x113<=x114)==x115)&x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = UINT64_MAX;
	int16_t x118 = INT16_MAX;
	static int16_t x119 = INT16_MIN;
	int64_t x120 = -10LL;
	int64_t t29 = -29395699101044LL;

    t29 = (((x117<=x118)==x119)&x120);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = 0;
	uint8_t x122 = 1U;
	int64_t x124 = -1LL;

    t30 = (((x121<=x122)==x123)&x124);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x126 = -104;
	static uint32_t t31 = 7224809U;

    t31 = (((x125<=x126)==x127)&x128);

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x129 = INT8_MIN;
	int64_t x131 = INT64_MAX;
	uint32_t x132 = UINT32_MAX;

    t32 = (((x129<=x130)==x131)&x132);

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = -1;
	uint64_t x134 = 52675036LLU;
	int64_t x135 = INT64_MIN;
	static volatile int32_t t33 = 0;

    t33 = (((x133<=x134)==x135)&x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x138 = 407U;
	static volatile int32_t x139 = -233445540;
	int64_t x140 = INT64_MIN;
	volatile int64_t t34 = -515634339002677022LL;

    t34 = (((x137<=x138)==x139)&x140);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = -1;
	static int32_t x142 = -1;
	static int64_t x143 = 9551159609383500LL;
	volatile uint32_t x144 = 11052U;
	uint32_t t35 = 112001310U;

    t35 = (((x141<=x142)==x143)&x144);

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = 7;
	uint16_t x146 = 811U;
	int8_t x147 = INT8_MAX;
	int8_t x148 = -1;
	volatile int32_t t36 = -418067489;

    t36 = (((x145<=x146)==x147)&x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = INT8_MAX;
	int16_t x150 = -9550;
	uint8_t x151 = 84U;
	static int64_t x152 = INT64_MAX;
	int64_t t37 = -1017971210258130357LL;

    t37 = (((x149<=x150)==x151)&x152);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = -1LL;
	int64_t x154 = 4877284294205891LL;
	static uint16_t x155 = 3U;
	uint64_t t38 = 7719580LLU;

    t38 = (((x153<=x154)==x155)&x156);

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = INT64_MAX;
	static uint32_t x158 = 101339U;
	uint16_t x159 = 287U;
	int32_t x160 = INT32_MIN;
	static volatile int32_t t39 = -998677306;

    t39 = (((x157<=x158)==x159)&x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x161 = -1;
	int8_t x162 = INT8_MIN;
	static uint16_t x163 = 3U;
	int32_t x164 = 28997;
	volatile int32_t t40 = 73669;

    t40 = (((x161<=x162)==x163)&x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x165 = 56U;
	uint64_t x166 = 584326163735667807LLU;
	int64_t x168 = -1LL;
	static int64_t t41 = -670450LL;

    t41 = (((x165<=x166)==x167)&x168);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MIN;
	int64_t x171 = INT64_MIN;
	int16_t x172 = 467;
	volatile int32_t t42 = -3215890;

    t42 = (((x169<=x170)==x171)&x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = -1;
	int8_t x174 = -1;
	uint32_t x175 = 16709789U;
	int32_t x176 = INT32_MIN;
	volatile int32_t t43 = -42007;

    t43 = (((x173<=x174)==x175)&x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x177 = -1LL;
	int16_t x178 = -282;
	int64_t x179 = -2872724LL;
	int32_t x180 = -1;
	volatile int32_t t44 = -52;

    t44 = (((x177<=x178)==x179)&x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x181 = 57U;
	int32_t x182 = INT32_MIN;
	static int32_t x183 = -3;
	int32_t x184 = INT32_MIN;
	static volatile int32_t t45 = 63623;

    t45 = (((x181<=x182)==x183)&x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x186 = 113;
	int16_t x187 = 7168;
	uint8_t x188 = UINT8_MAX;
	volatile int32_t t46 = 1019;

    t46 = (((x185<=x186)==x187)&x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int8_t x189 = INT8_MIN;
	int8_t x190 = -5;
	int8_t x191 = -1;
	int16_t x192 = INT16_MIN;
	static volatile int32_t t47 = 56;

    t47 = (((x189<=x190)==x191)&x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x193 = 25660010U;
	int8_t x194 = 1;
	int8_t x195 = INT8_MIN;
	int32_t t48 = 118;

    t48 = (((x193<=x194)==x195)&x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x198 = -1;
	int8_t x199 = INT8_MIN;
	static uint32_t x200 = 2918U;
	volatile uint32_t t49 = 613647U;

    t49 = (((x197<=x198)==x199)&x200);

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x201 = UINT16_MAX;
	static int32_t x203 = INT32_MIN;
	int64_t x204 = INT64_MAX;
	int64_t t50 = -2LL;

    t50 = (((x201<=x202)==x203)&x204);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint8_t x206 = 45U;
	static int64_t x207 = -1LL;
	volatile int32_t t51 = -21919;

    t51 = (((x205<=x206)==x207)&x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = INT32_MIN;
	int64_t x210 = INT64_MAX;
	int32_t x211 = 32733269;
	int64_t x212 = INT64_MIN;
	volatile int64_t t52 = 739502498350LL;

    t52 = (((x209<=x210)==x211)&x212);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x213 = 34030LLU;
	volatile int16_t x214 = 10640;
	volatile int64_t x215 = -2117080952375LL;
	uint8_t x216 = 3U;
	volatile int32_t t53 = 1756841;

    t53 = (((x213<=x214)==x215)&x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = -884215565322900LL;
	int32_t x218 = INT32_MIN;
	uint64_t x219 = 0LLU;
	int32_t x220 = -1;

    t54 = (((x217<=x218)==x219)&x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int8_t x221 = INT8_MAX;
	uint32_t x223 = UINT32_MAX;
	uint16_t x224 = UINT16_MAX;
	int32_t t55 = 26106;

    t55 = (((x221<=x222)==x223)&x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint32_t x225 = 259800U;
	uint8_t x226 = 120U;
	static int16_t x227 = INT16_MIN;
	static int8_t x228 = INT8_MIN;

    t56 = (((x225<=x226)==x227)&x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint16_t x230 = 0U;
	int32_t t57 = -538221105;

    t57 = (((x229<=x230)==x231)&x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x233 = UINT32_MAX;
	static volatile uint64_t x234 = 329632143LLU;
	int16_t x235 = 0;
	volatile uint16_t x236 = UINT16_MAX;
	int32_t t58 = -1;

    t58 = (((x233<=x234)==x235)&x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint8_t x237 = 1U;
	volatile int32_t x238 = -5153;

    t59 = (((x237<=x238)==x239)&x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x242 = INT16_MIN;
	static int8_t x244 = 50;
	int32_t t60 = -11;

    t60 = (((x241<=x242)==x243)&x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x245 = -8;
	volatile int8_t x246 = INT8_MAX;
	int8_t x247 = -4;
	static uint64_t x248 = UINT64_MAX;
	volatile uint64_t t61 = 603430494680260LLU;

    t61 = (((x245<=x246)==x247)&x248);

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x249 = UINT8_MAX;
	static int64_t x250 = 387416LL;
	int8_t x251 = INT8_MIN;
	int8_t x252 = -1;
	int32_t t62 = 278349531;

    t62 = (((x249<=x250)==x251)&x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = -21LL;
	int8_t x254 = 0;
	uint64_t x255 = UINT64_MAX;
	static int32_t x256 = INT32_MIN;
	volatile int32_t t63 = 2;

    t63 = (((x253<=x254)==x255)&x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint16_t x257 = UINT16_MAX;
	volatile int8_t x259 = -1;
	int16_t x260 = 17;
	int32_t t64 = -5;

    t64 = (((x257<=x258)==x259)&x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x261 = 21U;
	int32_t x262 = INT32_MIN;
	volatile int32_t x264 = -103589;
	static volatile int32_t t65 = 39;

    t65 = (((x261<=x262)==x263)&x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = -1;
	static volatile uint8_t x266 = UINT8_MAX;
	int8_t x268 = -2;
	static volatile int32_t t66 = -1267994;

    t66 = (((x265<=x266)==x267)&x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = 1;
	uint8_t x270 = 24U;
	int8_t x271 = INT8_MAX;
	int16_t x272 = INT16_MIN;
	volatile int32_t t67 = 50250;

    t67 = (((x269<=x270)==x271)&x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = INT64_MAX;
	uint16_t x274 = 46U;
	int64_t x275 = INT64_MIN;
	int32_t x276 = -2415409;

    t68 = (((x273<=x274)==x275)&x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x278 = INT8_MIN;
	static uint32_t x279 = UINT32_MAX;
	int64_t x280 = INT64_MAX;
	volatile int64_t t69 = -25166212671998LL;

    t69 = (((x277<=x278)==x279)&x280);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x281 = UINT8_MAX;
	uint32_t x282 = UINT32_MAX;
	volatile int64_t x283 = INT64_MIN;
	static volatile int8_t x284 = INT8_MAX;
	int32_t t70 = -8700816;

    t70 = (((x281<=x282)==x283)&x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x286 = 273U;
	static int16_t x287 = -1;
	int8_t x288 = INT8_MAX;
	static int32_t t71 = 4572650;

    t71 = (((x285<=x286)==x287)&x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = INT32_MIN;
	int16_t x290 = INT16_MAX;
	uint32_t x292 = UINT32_MAX;
	static uint32_t t72 = 20586U;

    t72 = (((x289<=x290)==x291)&x292);

    if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = INT32_MIN;
	uint16_t x294 = 0U;
	uint8_t x295 = 49U;
	volatile int32_t t73 = -574854562;

    t73 = (((x293<=x294)==x295)&x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x298 = 164;
	uint16_t x299 = 608U;
	int64_t x300 = INT64_MIN;
	int64_t t74 = -7LL;

    t74 = (((x297<=x298)==x299)&x300);

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = INT32_MIN;
	volatile int32_t x302 = -1;
	int64_t x303 = INT64_MIN;
	volatile int32_t x304 = -1;
	int32_t t75 = -2;

    t75 = (((x301<=x302)==x303)&x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x306 = INT32_MIN;
	static uint64_t x308 = 93987399374327574LLU;
	volatile uint64_t t76 = 2LLU;

    t76 = (((x305<=x306)==x307)&x308);

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = INT32_MIN;
	volatile int64_t x311 = -47036268537LL;
	static int16_t x312 = INT16_MAX;

    t77 = (((x309<=x310)==x311)&x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint16_t x313 = 1U;
	uint16_t x314 = UINT16_MAX;
	int16_t x315 = INT16_MIN;
	static int8_t x316 = INT8_MIN;
	volatile int32_t t78 = 2848;

    t78 = (((x313<=x314)==x315)&x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x317 = INT64_MIN;
	int32_t x318 = INT32_MIN;
	uint32_t x319 = 320553U;
	int32_t t79 = 3729945;

    t79 = (((x317<=x318)==x319)&x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = INT8_MIN;
	int8_t x323 = -14;
	static volatile int32_t t80 = -79947;

    t80 = (((x321<=x322)==x323)&x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x325 = INT64_MIN;
	static int64_t x326 = 246287492253176698LL;
	int64_t x327 = -3909610451467687184LL;
	volatile uint8_t x328 = UINT8_MAX;
	volatile int32_t t81 = 1290103;

    t81 = (((x325<=x326)==x327)&x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x329 = INT64_MAX;
	static int32_t x330 = -1;
	uint64_t x332 = 7010601LLU;
	static volatile uint64_t t82 = 583783309LLU;

    t82 = (((x329<=x330)==x331)&x332);

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x333 = 64U;
	volatile uint8_t x334 = 4U;
	uint64_t x335 = 1LLU;
	volatile int32_t t83 = -1694;

    t83 = (((x333<=x334)==x335)&x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x337 = -1LL;
	uint8_t x338 = 34U;
	static int32_t t84 = 270707;

    t84 = (((x337<=x338)==x339)&x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x341 = UINT8_MAX;
	static int16_t x342 = 14169;
	uint32_t x343 = 13742U;
	uint8_t x344 = 30U;
	int32_t t85 = -757470150;

    t85 = (((x341<=x342)==x343)&x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = 3;
	static int16_t x346 = INT16_MAX;
	int64_t x347 = 9361473885LL;
	volatile int32_t t86 = 50558;

    t86 = (((x345<=x346)==x347)&x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint32_t x350 = 37U;
	int16_t x351 = 12;
	volatile int64_t t87 = -2519710148344LL;

    t87 = (((x349<=x350)==x351)&x352);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x354 = UINT64_MAX;
	static volatile int64_t x355 = INT64_MIN;
	int16_t x356 = -1;

    t88 = (((x353<=x354)==x355)&x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x357 = -1LL;
	int64_t x358 = INT64_MAX;
	static int64_t x359 = INT64_MAX;
	static volatile int32_t t89 = 78372;

    t89 = (((x357<=x358)==x359)&x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x361 = UINT8_MAX;
	static uint8_t x362 = UINT8_MAX;
	static int64_t x363 = INT64_MIN;
	volatile int8_t x364 = INT8_MAX;
	int32_t t90 = -122821735;

    t90 = (((x361<=x362)==x363)&x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x366 = INT16_MIN;
	int32_t x367 = 6533865;
	int64_t x368 = INT64_MIN;
	static volatile int64_t t91 = -7518LL;

    t91 = (((x365<=x366)==x367)&x368);

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x370 = INT64_MIN;
	uint32_t x371 = UINT32_MAX;
	int64_t x372 = 2018013105304993LL;

    t92 = (((x369<=x370)==x371)&x372);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint8_t x373 = 10U;
	volatile int64_t x375 = INT64_MIN;
	int32_t t93 = 64172;

    t93 = (((x373<=x374)==x375)&x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x378 = 1U;
	uint8_t x379 = 12U;
	int16_t x380 = 1;
	static int32_t t94 = -1032645;

    t94 = (((x377<=x378)==x379)&x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint64_t x381 = 150208LLU;
	static volatile uint64_t x382 = 969325517825LLU;
	int16_t x383 = INT16_MIN;
	int32_t x384 = 388463;
	volatile int32_t t95 = 765013343;

    t95 = (((x381<=x382)==x383)&x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x386 = UINT64_MAX;
	int8_t x388 = -26;

    t96 = (((x385<=x386)==x387)&x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = INT32_MIN;
	int8_t x390 = 0;
	volatile int16_t x391 = INT16_MAX;
	volatile uint64_t t97 = 23354839893LLU;

    t97 = (((x389<=x390)==x391)&x392);

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = -1;
	int64_t x394 = -82869594LL;
	volatile uint64_t x395 = 1LLU;
	int16_t x396 = -7;

    t98 = (((x393<=x394)==x395)&x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = -1706614213764203129LL;
	uint32_t x398 = 230097933U;
	static volatile uint16_t x400 = UINT16_MAX;
	volatile int32_t t99 = -51;

    t99 = (((x397<=x398)==x399)&x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int16_t x402 = INT16_MIN;
	uint16_t x403 = 26U;
	int16_t x404 = -1;
	volatile int32_t t100 = 303435965;

    t100 = (((x401<=x402)==x403)&x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x405 = -1LL;
	volatile uint8_t x406 = 3U;
	int8_t x407 = -1;
	volatile uint32_t x408 = 7940U;
	volatile uint32_t t101 = 6981310U;

    t101 = (((x405<=x406)==x407)&x408);

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint8_t x411 = 0U;
	volatile int32_t t102 = -18;

    t102 = (((x409<=x410)==x411)&x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x413 = UINT32_MAX;
	int16_t x414 = -1;
	static int8_t x415 = INT8_MAX;
	int16_t x416 = 5988;
	int32_t t103 = 332;

    t103 = (((x413<=x414)==x415)&x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x418 = INT8_MAX;
	uint32_t x419 = UINT32_MAX;

    t104 = (((x417<=x418)==x419)&x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x422 = -1;
	int32_t x423 = INT32_MAX;
	uint16_t x424 = 427U;
	int32_t t105 = -101806369;

    t105 = (((x421<=x422)==x423)&x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x426 = 573U;
	uint32_t x427 = UINT32_MAX;
	static int16_t x428 = INT16_MIN;
	volatile int32_t t106 = 3;

    t106 = (((x425<=x426)==x427)&x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x429 = UINT8_MAX;
	int32_t x430 = -3554935;
	volatile int8_t x431 = INT8_MAX;
	uint32_t x432 = 5643025U;
	volatile uint32_t t107 = 1515126772U;

    t107 = (((x429<=x430)==x431)&x432);

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = -88994LL;
	static int16_t x434 = -1;
	int8_t x435 = -5;
	int16_t x436 = -1;
	volatile int32_t t108 = 671579;

    t108 = (((x433<=x434)==x435)&x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x437 = -2729LL;
	volatile int64_t x438 = 24575LL;
	int8_t x439 = -1;
	int8_t x440 = INT8_MAX;

    t109 = (((x437<=x438)==x439)&x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = -1;
	uint64_t x442 = 223LLU;
	int16_t x443 = INT16_MAX;
	uint8_t x444 = 31U;
	volatile int32_t t110 = 320903;

    t110 = (((x441<=x442)==x443)&x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = INT16_MIN;
	int32_t x446 = INT32_MIN;
	int8_t x447 = INT8_MIN;
	int64_t x448 = 6502596LL;
	volatile int64_t t111 = 177LL;

    t111 = (((x445<=x446)==x447)&x448);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x449 = UINT64_MAX;
	int32_t x451 = INT32_MIN;
	volatile int32_t t112 = 47443;

    t112 = (((x449<=x450)==x451)&x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x454 = INT32_MIN;
	uint16_t x456 = 56U;
	int32_t t113 = -4168046;

    t113 = (((x453<=x454)==x455)&x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x457 = 8;
	uint64_t x458 = 4462323LLU;
	int8_t x459 = -12;
	volatile uint64_t x460 = 43527772LLU;

    t114 = (((x457<=x458)==x459)&x460);

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x461 = -21870437;
	static int32_t x463 = 361731;
	uint32_t x464 = 87218U;

    t115 = (((x461<=x462)==x463)&x464);

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x465 = 1058U;
	static uint64_t x467 = 37255358695LLU;
	uint8_t x468 = UINT8_MAX;
	volatile int32_t t116 = 172;

    t116 = (((x465<=x466)==x467)&x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x470 = 381U;
	static int16_t x471 = -5;
	uint32_t x472 = 2U;

    t117 = (((x469<=x470)==x471)&x472);

    if (t117 != 0U) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x474 = UINT16_MAX;
	int8_t x475 = -1;
	int64_t x476 = -751913LL;
	int64_t t118 = 1089544571934258LL;

    t118 = (((x473<=x474)==x475)&x476);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x477 = 196852138908LLU;
	int8_t x478 = -1;
	volatile uint64_t x479 = 552532819197843402LLU;
	volatile int8_t x480 = INT8_MIN;
	volatile int32_t t119 = 40942;

    t119 = (((x477<=x478)==x479)&x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = INT8_MIN;
	int64_t x482 = -1LL;
	uint32_t x484 = 25509078U;

    t120 = (((x481<=x482)==x483)&x484);

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x485 = INT64_MIN;
	int32_t x486 = INT32_MAX;
	uint16_t x487 = UINT16_MAX;
	static int8_t x488 = INT8_MIN;

    t121 = (((x485<=x486)==x487)&x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x489 = INT16_MIN;
	int16_t x490 = 142;
	int16_t x491 = -1;
	static int64_t t122 = 3205579743608944LL;

    t122 = (((x489<=x490)==x491)&x492);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = -1LL;
	static uint16_t x494 = 1U;
	int64_t x495 = -1019LL;
	static volatile int16_t x496 = INT16_MAX;
	static int32_t t123 = 48;

    t123 = (((x493<=x494)==x495)&x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x497 = INT64_MIN;
	static int16_t x498 = INT16_MAX;
	int32_t x499 = -1;
	int64_t x500 = -1LL;

    t124 = (((x497<=x498)==x499)&x500);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x502 = 13455178;
	uint16_t x503 = UINT16_MAX;
	int32_t t125 = 53542;

    t125 = (((x501<=x502)==x503)&x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x507 = UINT32_MAX;
	static int8_t x508 = -1;
	volatile int32_t t126 = -17;

    t126 = (((x505<=x506)==x507)&x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = INT8_MIN;
	uint64_t x510 = UINT64_MAX;
	int32_t x511 = INT32_MIN;
	volatile int32_t x512 = -1;
	volatile int32_t t127 = 2004049;

    t127 = (((x509<=x510)==x511)&x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x513 = 388921495U;
	uint64_t x514 = 11297973283LLU;
	uint32_t x515 = UINT32_MAX;
	int32_t x516 = INT32_MIN;
	volatile int32_t t128 = 33762752;

    t128 = (((x513<=x514)==x515)&x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x517 = 1;
	int32_t x518 = 0;
	volatile int16_t x519 = INT16_MAX;
	int8_t x520 = -31;
	int32_t t129 = 3915960;

    t129 = (((x517<=x518)==x519)&x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x522 = 85266140280LLU;
	int8_t x523 = INT8_MIN;
	int32_t x524 = 204134;
	int32_t t130 = -3935;

    t130 = (((x521<=x522)==x523)&x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x526 = -1;
	int32_t x527 = -1091;
	int32_t x528 = INT32_MIN;

    t131 = (((x525<=x526)==x527)&x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = -1;
	volatile uint16_t x530 = UINT16_MAX;
	uint16_t x532 = UINT16_MAX;

    t132 = (((x529<=x530)==x531)&x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = -210851815;
	volatile int64_t x534 = INT64_MAX;
	int8_t x535 = INT8_MIN;
	volatile int8_t x536 = 0;
	volatile int32_t t133 = -251264668;

    t133 = (((x533<=x534)==x535)&x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x537 = 1695638LLU;
	int8_t x539 = 2;
	static uint32_t x540 = 2400U;

    t134 = (((x537<=x538)==x539)&x540);

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x541 = 108891LL;
	uint32_t x543 = 518592966U;
	volatile int8_t x544 = 0;
	volatile int32_t t135 = 277602552;

    t135 = (((x541<=x542)==x543)&x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x545 = 110U;
	int16_t x546 = INT16_MIN;
	uint64_t x548 = 54394522LLU;

    t136 = (((x545<=x546)==x547)&x548);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x549 = -2331;
	int8_t x550 = INT8_MAX;
	int8_t x551 = -1;
	int8_t x552 = -1;
	int32_t t137 = -65912;

    t137 = (((x549<=x550)==x551)&x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x553 = INT32_MIN;
	static int64_t x555 = INT64_MIN;
	static volatile uint16_t x556 = 6U;

    t138 = (((x553<=x554)==x555)&x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = INT32_MAX;
	volatile uint64_t x558 = 1LLU;
	int16_t x559 = -16010;
	volatile int16_t x560 = 6722;
	int32_t t139 = -312;

    t139 = (((x557<=x558)==x559)&x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t t140 = 2;

    t140 = (((x561<=x562)==x563)&x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x566 = UINT8_MAX;
	int64_t x568 = -1LL;
	static volatile int64_t t141 = 8088371187LL;

    t141 = (((x565<=x566)==x567)&x568);

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = INT64_MIN;
	uint8_t x572 = UINT8_MAX;
	int32_t t142 = -4141987;

    t142 = (((x569<=x570)==x571)&x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x573 = 123570057305LL;
	int8_t x574 = -3;
	uint8_t x575 = 1U;
	static uint8_t x576 = 2U;
	int32_t t143 = -10;

    t143 = (((x573<=x574)==x575)&x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint16_t x577 = UINT16_MAX;
	int64_t x578 = -4303239779894LL;
	uint32_t x579 = 6U;
	int8_t x580 = -1;
	int32_t t144 = 500;

    t144 = (((x577<=x578)==x579)&x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = INT32_MIN;
	int64_t x582 = INT64_MIN;
	volatile int64_t t145 = 154764LL;

    t145 = (((x581<=x582)==x583)&x584);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x585 = -6618699334055LL;
	static uint64_t x587 = UINT64_MAX;
	volatile int16_t x588 = INT16_MIN;
	static volatile int32_t t146 = -8038;

    t146 = (((x585<=x586)==x587)&x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = INT32_MIN;
	static volatile int64_t x590 = INT64_MAX;
	int16_t x591 = 7006;
	static int32_t x592 = INT32_MIN;
	int32_t t147 = 166720898;

    t147 = (((x589<=x590)==x591)&x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x593 = 663892LLU;
	uint64_t x594 = 596779LLU;
	static int16_t x595 = -1;
	int64_t x596 = INT64_MIN;
	volatile int64_t t148 = 44828LL;

    t148 = (((x593<=x594)==x595)&x596);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = -1;
	uint16_t x598 = UINT16_MAX;
	static volatile int64_t x599 = -623682248074802LL;
	uint16_t x600 = 289U;

    t149 = (((x597<=x598)==x599)&x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x601 = 31U;
	static uint64_t x602 = 4878153LLU;
	int8_t x603 = -1;
	volatile int32_t t150 = -873411;

    t150 = (((x601<=x602)==x603)&x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = -164;
	static int32_t x606 = INT32_MIN;
	uint32_t x607 = 2088866U;
	static int64_t x608 = INT64_MAX;
	int64_t t151 = -60487725622LL;

    t151 = (((x605<=x606)==x607)&x608);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x609 = -189869112396LL;
	int8_t x610 = INT8_MIN;
	volatile uint8_t x611 = UINT8_MAX;
	int16_t x612 = INT16_MIN;
	static volatile int32_t t152 = -765954154;

    t152 = (((x609<=x610)==x611)&x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x613 = INT16_MIN;
	uint8_t x616 = UINT8_MAX;
	volatile int32_t t153 = 34550;

    t153 = (((x613<=x614)==x615)&x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x617 = 1;
	int64_t x618 = INT64_MAX;
	int16_t x619 = -1;
	volatile int8_t x620 = INT8_MAX;
	int32_t t154 = 10090051;

    t154 = (((x617<=x618)==x619)&x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = -44;
	static volatile int32_t x622 = INT32_MIN;
	volatile uint16_t x623 = UINT16_MAX;
	uint32_t x624 = 3949216U;
	volatile uint32_t t155 = 17821920U;

    t155 = (((x621<=x622)==x623)&x624);

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = INT64_MIN;
	static int8_t x627 = INT8_MIN;
	int32_t t156 = 1540518;

    t156 = (((x625<=x626)==x627)&x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x629 = 82;
	uint8_t x632 = 27U;
	int32_t t157 = -86668421;

    t157 = (((x629<=x630)==x631)&x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x633 = 83U;
	uint64_t x634 = 5816304395LLU;
	uint16_t x636 = 14177U;
	static volatile int32_t t158 = 221188;

    t158 = (((x633<=x634)==x635)&x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x637 = UINT16_MAX;
	static int8_t x638 = 42;
	volatile int8_t x640 = INT8_MIN;
	volatile int32_t t159 = 461539;

    t159 = (((x637<=x638)==x639)&x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x641 = UINT8_MAX;
	volatile uint64_t x642 = 5340LLU;
	int8_t x643 = INT8_MAX;
	uint64_t x644 = UINT64_MAX;

    t160 = (((x641<=x642)==x643)&x644);

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x645 = INT8_MIN;
	uint64_t x646 = 57686LLU;
	static uint32_t x647 = 0U;
	static int64_t x648 = INT64_MIN;

    t161 = (((x645<=x646)==x647)&x648);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = -22;
	uint32_t x650 = UINT32_MAX;
	volatile int16_t x651 = INT16_MIN;
	int32_t x652 = INT32_MIN;
	static int32_t t162 = -23202;

    t162 = (((x649<=x650)==x651)&x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x656 = -1;
	volatile int32_t t163 = -5;

    t163 = (((x653<=x654)==x655)&x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x658 = 5851LLU;
	static uint16_t x659 = UINT16_MAX;
	static int64_t x660 = INT64_MIN;
	static volatile int64_t t164 = 161LL;

    t164 = (((x657<=x658)==x659)&x660);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x663 = INT16_MAX;
	volatile int64_t t165 = -7252349LL;

    t165 = (((x661<=x662)==x663)&x664);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x666 = INT16_MIN;
	int32_t x667 = -1;
	static uint8_t x668 = 2U;
	volatile int32_t t166 = -1727;

    t166 = (((x665<=x666)==x667)&x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x670 = INT8_MAX;
	int16_t x671 = -1;
	static volatile uint8_t x672 = 83U;
	int32_t t167 = 1191497;

    t167 = (((x669<=x670)==x671)&x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = INT32_MIN;
	int8_t x675 = -7;
	volatile int32_t t168 = 12646;

    t168 = (((x673<=x674)==x675)&x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x677 = INT16_MIN;
	int8_t x678 = INT8_MAX;
	static uint32_t x680 = 4639U;
	uint32_t t169 = 566506U;

    t169 = (((x677<=x678)==x679)&x680);

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x681 = INT8_MIN;
	uint16_t x682 = 4U;
	volatile uint8_t x684 = 52U;
	volatile int32_t t170 = 197650;

    t170 = (((x681<=x682)==x683)&x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x686 = INT8_MIN;
	int64_t x687 = INT64_MIN;
	int16_t x688 = INT16_MIN;
	int32_t t171 = -764;

    t171 = (((x685<=x686)==x687)&x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x691 = INT32_MIN;

    t172 = (((x689<=x690)==x691)&x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x693 = -1;
	int16_t x694 = 174;
	int16_t x696 = -165;
	int32_t t173 = 585;

    t173 = (((x693<=x694)==x695)&x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint16_t x697 = 137U;
	uint16_t x698 = 28467U;
	int32_t x699 = -24158336;

    t174 = (((x697<=x698)==x699)&x700);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x701 = UINT8_MAX;
	static uint32_t x702 = UINT32_MAX;
	int8_t x703 = INT8_MIN;
	static volatile uint32_t x704 = 500632U;

    t175 = (((x701<=x702)==x703)&x704);

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile uint16_t x706 = 1U;
	int16_t x708 = -1;

    t176 = (((x705<=x706)==x707)&x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x710 = 98876LLU;
	uint16_t x712 = 36U;
	volatile int32_t t177 = -351;

    t177 = (((x709<=x710)==x711)&x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = -2;
	int16_t x714 = INT16_MIN;
	uint32_t x715 = UINT32_MAX;
	static uint16_t x716 = UINT16_MAX;

    t178 = (((x713<=x714)==x715)&x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = 2;
	int8_t x718 = -1;
	static int64_t x719 = 21748975072LL;
	uint8_t x720 = 41U;
	int32_t t179 = 1866;

    t179 = (((x717<=x718)==x719)&x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = INT8_MIN;
	volatile int64_t x722 = 806739645748766839LL;
	static int8_t x723 = 47;
	uint8_t x724 = UINT8_MAX;

    t180 = (((x721<=x722)==x723)&x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = -1LL;
	int64_t x726 = INT64_MIN;
	static volatile int16_t x727 = -1;
	uint32_t x728 = 15006U;
	uint32_t t181 = 32029U;

    t181 = (((x725<=x726)==x727)&x728);

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x729 = 760U;
	int64_t x730 = INT64_MIN;
	static int64_t x731 = INT64_MAX;
	volatile int64_t x732 = INT64_MAX;
	static volatile int64_t t182 = -860LL;

    t182 = (((x729<=x730)==x731)&x732);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = INT32_MAX;
	int16_t x734 = INT16_MIN;
	int32_t x735 = -1392072;
	volatile int8_t x736 = 41;

    t183 = (((x733<=x734)==x735)&x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x737 = 894;
	uint16_t x739 = 20U;
	static int64_t t184 = 4364LL;

    t184 = (((x737<=x738)==x739)&x740);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x741 = 924001965U;
	static uint64_t x743 = UINT64_MAX;
	static int64_t x744 = -1LL;
	volatile int64_t t185 = -222205LL;

    t185 = (((x741<=x742)==x743)&x744);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x745 = INT64_MIN;
	int8_t x746 = 1;
	static uint16_t x747 = 12077U;
	static int32_t x748 = -1;
	volatile int32_t t186 = -313519;

    t186 = (((x745<=x746)==x747)&x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x750 = INT64_MIN;
	uint8_t x751 = 88U;
	volatile uint64_t x752 = UINT64_MAX;

    t187 = (((x749<=x750)==x751)&x752);

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = -1;
	int64_t x754 = -240204195725092LL;
	uint16_t x755 = 12U;
	uint64_t t188 = 42405427500871788LLU;

    t188 = (((x753<=x754)==x755)&x756);

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x757 = 16U;
	int32_t x758 = -1;
	static int16_t x760 = -1;

    t189 = (((x757<=x758)==x759)&x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = 42020LL;
	static uint16_t x762 = 7U;
	volatile int32_t x763 = INT32_MIN;
	volatile uint32_t t190 = 0U;

    t190 = (((x761<=x762)==x763)&x764);

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint16_t x765 = 4U;
	int8_t x766 = INT8_MAX;
	uint32_t x767 = 6U;
	static int32_t x768 = -1;
	volatile int32_t t191 = 2030399;

    t191 = (((x765<=x766)==x767)&x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x769 = 9U;
	volatile int8_t x770 = INT8_MAX;
	int64_t x771 = INT64_MIN;
	volatile int64_t x772 = INT64_MIN;
	volatile int64_t t192 = -3LL;

    t192 = (((x769<=x770)==x771)&x772);

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = 739;
	int64_t x775 = INT64_MIN;
	static uint32_t x776 = 289638146U;
	uint32_t t193 = 183U;

    t193 = (((x773<=x774)==x775)&x776);

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = -1;
	static int64_t x778 = INT64_MIN;
	uint64_t x779 = UINT64_MAX;
	int16_t x780 = 60;
	volatile int32_t t194 = 7153;

    t194 = (((x777<=x778)==x779)&x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x781 = 103U;
	int16_t x782 = -1;
	int32_t x783 = -616484172;
	volatile uint64_t t195 = 5LLU;

    t195 = (((x781<=x782)==x783)&x784);

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x785 = INT64_MAX;
	int8_t x787 = -3;
	static int16_t x788 = INT16_MIN;

    t196 = (((x785<=x786)==x787)&x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = -213;
	uint32_t x790 = 171883749U;
	volatile int32_t x791 = INT32_MIN;
	uint16_t x792 = 694U;
	int32_t t197 = 50;

    t197 = (((x789<=x790)==x791)&x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x793 = -1;
	int32_t x794 = INT32_MAX;
	static volatile int8_t x795 = 0;
	int64_t x796 = INT64_MIN;
	static volatile int64_t t198 = -2678586309253747LL;

    t198 = (((x793<=x794)==x795)&x796);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x797 = -20;
	uint64_t x799 = 1255332LLU;
	uint16_t x800 = 527U;
	int32_t t199 = -694264194;

    t199 = (((x797<=x798)==x799)&x800);

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

