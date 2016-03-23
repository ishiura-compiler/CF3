
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

int16_t x1 = INT16_MIN;
int16_t x15 = INT16_MIN;
volatile int32_t x17 = INT32_MAX;
int32_t x23 = INT32_MIN;
int16_t x38 = INT16_MIN;
static uint32_t x41 = 0U;
int32_t x42 = INT32_MIN;
uint8_t x43 = 108U;
uint64_t x49 = 1LLU;
static volatile int16_t x53 = INT16_MIN;
int32_t x54 = INT32_MIN;
volatile uint64_t x66 = 8LLU;
static int8_t x72 = INT8_MIN;
int32_t x75 = -739339;
volatile int16_t x83 = 20;
int64_t x84 = INT64_MIN;
int64_t x88 = INT64_MAX;
static uint16_t x92 = UINT16_MAX;
uint32_t x95 = UINT32_MAX;
int16_t x100 = 63;
int16_t x102 = INT16_MAX;
int64_t x111 = -1LL;
uint8_t x113 = UINT8_MAX;
volatile int32_t t28 = INT32_MIN;
int8_t x129 = INT8_MIN;
int64_t x130 = 4LL;
uint16_t x131 = 1096U;
uint32_t x135 = 0U;
int16_t x139 = INT16_MIN;
volatile uint32_t t34 = 30561U;
static uint8_t x144 = 3U;
volatile int32_t t35 = 3352;
int32_t x145 = -2377227;
uint16_t x154 = 3U;
int8_t x165 = INT8_MAX;
int64_t x166 = -1LL;
int64_t x169 = INT64_MAX;
volatile int64_t x177 = INT64_MIN;
uint64_t t44 = 4401549LLU;
static volatile uint64_t x181 = UINT64_MAX;
volatile int16_t x184 = INT16_MIN;
volatile int32_t t45 = 780949;
int32_t x185 = -1;
uint64_t x189 = 1LLU;
int64_t x192 = 14236748LL;
uint16_t x193 = 1U;
volatile int16_t x201 = INT16_MIN;
int8_t x207 = -3;
uint64_t x209 = 2LLU;
int64_t x218 = INT64_MIN;
int16_t x221 = -963;
volatile int16_t x226 = -1;
uint64_t x227 = 959LLU;
uint16_t x237 = UINT16_MAX;
volatile int64_t x240 = INT64_MIN;
uint32_t t61 = UINT32_MAX;
int64_t x251 = 172348135230847LL;
volatile int16_t x254 = -2558;
int16_t x256 = INT16_MIN;
int64_t x259 = 1071338758429484622LL;
int16_t x273 = INT16_MAX;
int32_t x284 = INT32_MIN;
uint8_t x286 = 0U;
int32_t x287 = 54363376;
static int16_t x289 = 0;
static int8_t x294 = 38;
static uint16_t x296 = UINT16_MAX;
int32_t t73 = -223;
uint64_t x297 = 15066127738LLU;
uint8_t x304 = 0U;
int64_t x305 = INT64_MIN;
volatile int16_t x310 = -2477;
volatile int32_t x317 = INT32_MAX;
int64_t x320 = -1LL;
int16_t x321 = INT16_MAX;
static uint32_t x324 = UINT32_MAX;
static uint32_t t80 = UINT32_MAX;
int16_t x331 = INT16_MAX;
static uint8_t x336 = 95U;
volatile int32_t t84 = 14;
static uint64_t x341 = 47464618480428LLU;
int8_t x346 = INT8_MIN;
int32_t t86 = INT32_MIN;
int8_t x353 = INT8_MAX;
static int32_t t88 = -740;
volatile int32_t t89 = 1;
int8_t x363 = INT8_MIN;
volatile int32_t t91 = 11;
int64_t x370 = -3679623739LL;
uint8_t x371 = 14U;
static uint8_t x373 = UINT8_MAX;
volatile int8_t x376 = -1;
volatile int16_t x383 = INT16_MAX;
volatile uint64_t t95 = UINT64_MAX;
static int64_t x386 = -54LL;
int64_t t96 = 1LL;
static uint8_t x389 = 52U;
uint32_t t97 = 150U;
int8_t x395 = -1;
int16_t x396 = INT16_MIN;
uint32_t x399 = 414U;
int64_t x400 = 196LL;
int64_t x402 = 54451654344603LL;
int16_t x406 = -1;
int32_t x411 = INT32_MIN;
volatile int32_t t102 = 7595895;
int32_t x428 = -1;
uint64_t x433 = UINT64_MAX;
volatile uint32_t t108 = UINT32_MAX;
uint16_t x438 = UINT16_MAX;
static volatile uint16_t x439 = 381U;
uint16_t x443 = UINT16_MAX;
volatile uint16_t x452 = 11U;
int32_t t112 = -5467;
int32_t x456 = 3199;
volatile int32_t t113 = -1189602;
volatile int32_t x462 = -12157;
static int64_t x471 = INT64_MIN;
uint8_t x472 = UINT8_MAX;
int64_t x475 = INT64_MIN;
static uint8_t x476 = UINT8_MAX;
uint64_t x477 = 3870LLU;
volatile uint64_t x479 = 10027419306LLU;
uint64_t x483 = 606556LLU;
volatile int32_t t120 = 0;
volatile uint32_t x490 = UINT32_MAX;
int8_t x492 = 9;
int16_t x494 = -1;
static volatile int32_t t123 = 638;
int64_t x503 = INT64_MIN;
volatile int8_t x508 = INT8_MIN;
volatile int32_t t126 = -2306;
int8_t x513 = INT8_MAX;
uint64_t x516 = 127821546473637351LLU;
volatile int32_t t131 = -687003955;
volatile int16_t x535 = -1431;
uint16_t x537 = 12U;
static uint16_t x544 = 554U;
int64_t x545 = 1180862721900954836LL;
int8_t x547 = INT8_MAX;
volatile uint32_t x549 = 4U;
uint16_t x555 = 59U;
volatile int64_t t142 = -6732645652213LL;
int32_t t143 = INT32_MAX;
int8_t x578 = 43;
int64_t x582 = INT64_MIN;
int32_t x583 = INT32_MAX;
int16_t x593 = -1;
static uint64_t x595 = 6LLU;
static int32_t x599 = INT32_MIN;
int16_t x600 = INT16_MIN;
uint8_t x602 = UINT8_MAX;
uint16_t x610 = 0U;
int64_t x616 = INT64_MAX;
uint16_t x627 = 14532U;
int64_t x639 = INT64_MIN;
static int32_t x640 = 527160735;
static volatile int32_t x654 = INT32_MIN;
volatile uint64_t x655 = UINT64_MAX;
int32_t t163 = 15990686;
int32_t x658 = 7618590;
static int32_t t164 = -47783068;
int32_t x668 = -1;
volatile int32_t t166 = -23;
int32_t t169 = -11;
int8_t x684 = 3;
int64_t x686 = INT64_MAX;
uint32_t x689 = 741640014U;
int32_t t172 = 602181415;
volatile int32_t t173 = 4923708;
uint16_t x698 = 3146U;
uint8_t x710 = UINT8_MAX;
int8_t x711 = INT8_MIN;
volatile int32_t t178 = 14169;
int16_t x720 = 1;
static int32_t t179 = -10437291;
int64_t x726 = -284709LL;
static int64_t x729 = -1384784655807017085LL;
static int8_t x735 = INT8_MAX;
int32_t t183 = -1;
uint16_t x737 = 236U;
static uint32_t x738 = UINT32_MAX;
static uint64_t x741 = 1323034345LLU;
uint32_t x747 = UINT32_MAX;
int32_t x748 = INT32_MIN;
int32_t x754 = INT32_MAX;
uint16_t x759 = 422U;
static int32_t t192 = -79;
int64_t x774 = INT64_MAX;
int8_t x776 = INT8_MAX;
static volatile int32_t t193 = -615;
int32_t x794 = INT32_MIN;
volatile uint8_t x797 = UINT8_MAX;


void f0(void) {
    	int8_t x2 = INT8_MAX;
	volatile uint64_t x3 = 52075808LLU;
	static volatile int64_t x4 = INT64_MIN;
	int64_t t0 = 34914382852681LL;

    t0 = (((x1<=x2)<=x3)|x4);

    if (t0 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -1;
	int8_t x6 = INT8_MIN;
	static volatile uint16_t x7 = 7544U;
	uint32_t x8 = 231635766U;
	uint32_t t1 = 105U;

    t1 = (((x5<=x6)<=x7)|x8);

    if (t1 != 231635767U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = UINT8_MAX;
	uint8_t x10 = 17U;
	volatile uint16_t x11 = UINT16_MAX;
	uint8_t x12 = 13U;
	volatile int32_t t2 = 86931458;

    t2 = (((x9<=x10)<=x11)|x12);

    if (t2 != 13) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x13 = 2U;
	int8_t x14 = 0;
	uint32_t x16 = UINT32_MAX;
	uint32_t t3 = UINT32_MAX;

    t3 = (((x13<=x14)<=x15)|x16);

    if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x18 = INT8_MIN;
	int8_t x19 = 5;
	static int64_t x20 = -1LL;
	int64_t t4 = -40963544LL;

    t4 = (((x17<=x18)<=x19)|x20);

    if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 52U;
	static int8_t x22 = INT8_MAX;
	int16_t x24 = 2245;
	static int32_t t5 = 0;

    t5 = (((x21<=x22)<=x23)|x24);

    if (t5 != 2245) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -26;
	static int8_t x26 = -30;
	uint16_t x27 = 6U;
	static int32_t x28 = INT32_MAX;
	volatile int32_t t6 = INT32_MAX;

    t6 = (((x25<=x26)<=x27)|x28);

    if (t6 != INT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MIN;
	static int8_t x30 = INT8_MIN;
	uint64_t x31 = 698LLU;
	static uint8_t x32 = 3U;
	int32_t t7 = -284985989;

    t7 = (((x29<=x30)<=x31)|x32);

    if (t7 != 3) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x33 = INT8_MIN;
	static int8_t x34 = INT8_MIN;
	uint64_t x35 = 131009783524292399LLU;
	int16_t x36 = -6;
	static volatile int32_t t8 = -3939252;

    t8 = (((x33<=x34)<=x35)|x36);

    if (t8 != -5) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MIN;
	uint16_t x39 = 2815U;
	static uint64_t x40 = UINT64_MAX;
	static volatile uint64_t t9 = UINT64_MAX;

    t9 = (((x37<=x38)<=x39)|x40);

    if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x44 = 614822380U;
	volatile uint32_t t10 = 12840U;

    t10 = (((x41<=x42)<=x43)|x44);

    if (t10 != 614822381U) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -570;
	int64_t x46 = -1LL;
	int16_t x47 = INT16_MIN;
	int8_t x48 = -11;
	volatile int32_t t11 = 1014;

    t11 = (((x45<=x46)<=x47)|x48);

    if (t11 != -11) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x50 = INT32_MIN;
	uint8_t x51 = UINT8_MAX;
	int64_t x52 = -1LL;
	int64_t t12 = -1LL;

    t12 = (((x49<=x50)<=x51)|x52);

    if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x55 = INT16_MIN;
	int64_t x56 = INT64_MAX;
	volatile int64_t t13 = INT64_MAX;

    t13 = (((x53<=x54)<=x55)|x56);

    if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = 11U;
	volatile int32_t x58 = INT32_MIN;
	uint8_t x59 = 13U;
	uint64_t x60 = 35319730092LLU;
	uint64_t t14 = 1818309296166LLU;

    t14 = (((x57<=x58)<=x59)|x60);

    if (t14 != 35319730093LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x61 = 584191703640845LL;
	static uint16_t x62 = 9053U;
	uint32_t x63 = 779479499U;
	int32_t x64 = INT32_MIN;
	static int32_t t15 = 907441461;

    t15 = (((x61<=x62)<=x63)|x64);

    if (t15 != -2147483647) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint64_t x65 = 190630507021278LLU;
	int8_t x67 = 0;
	uint32_t x68 = 198322U;
	static volatile uint32_t t16 = 14U;

    t16 = (((x65<=x66)<=x67)|x68);

    if (t16 != 198323U) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x69 = -1;
	volatile int64_t x70 = INT64_MIN;
	uint16_t x71 = UINT16_MAX;
	int32_t t17 = -136018870;

    t17 = (((x69<=x70)<=x71)|x72);

    if (t17 != -127) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x73 = 7;
	static int16_t x74 = INT16_MIN;
	int64_t x76 = -1LL;
	int64_t t18 = 7576671356LL;

    t18 = (((x73<=x74)<=x75)|x76);

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MIN;
	uint16_t x78 = 2U;
	static int32_t x79 = -3806094;
	uint32_t x80 = 3U;
	uint32_t t19 = 415852U;

    t19 = (((x77<=x78)<=x79)|x80);

    if (t19 != 3U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = 2746U;
	int16_t x82 = -1;
	volatile int64_t t20 = 6604847534372LL;

    t20 = (((x81<=x82)<=x83)|x84);

    if (t20 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = INT8_MIN;
	uint16_t x86 = UINT16_MAX;
	int32_t x87 = 784;
	int64_t t21 = INT64_MAX;

    t21 = (((x85<=x86)<=x87)|x88);

    if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = -118853293;
	int16_t x90 = -134;
	static int64_t x91 = -12564813768810LL;
	volatile int32_t t22 = -249;

    t22 = (((x89<=x90)<=x91)|x92);

    if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = 118231U;
	int32_t x94 = -1;
	int64_t x96 = INT64_MIN;
	volatile int64_t t23 = -334467LL;

    t23 = (((x93<=x94)<=x95)|x96);

    if (t23 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = 45U;
	uint8_t x98 = UINT8_MAX;
	int16_t x99 = -5;
	static volatile int32_t t24 = -651165;

    t24 = (((x97<=x98)<=x99)|x100);

    if (t24 != 63) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = 1U;
	static uint16_t x103 = UINT16_MAX;
	int32_t x104 = -115;
	volatile int32_t t25 = -6244045;

    t25 = (((x101<=x102)<=x103)|x104);

    if (t25 != -115) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x105 = UINT16_MAX;
	uint64_t x106 = 44237LLU;
	uint16_t x107 = 426U;
	int16_t x108 = -17;
	volatile int32_t t26 = 41654;

    t26 = (((x105<=x106)<=x107)|x108);

    if (t26 != -17) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x109 = 32U;
	uint64_t x110 = UINT64_MAX;
	int32_t x112 = INT32_MIN;
	int32_t t27 = INT32_MIN;

    t27 = (((x109<=x110)<=x111)|x112);

    if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint64_t x114 = UINT64_MAX;
	int8_t x115 = -9;
	int32_t x116 = INT32_MIN;

    t28 = (((x113<=x114)<=x115)|x116);

    if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x117 = INT64_MAX;
	int64_t x118 = INT64_MAX;
	int8_t x119 = INT8_MAX;
	int8_t x120 = -1;
	volatile int32_t t29 = 139656;

    t29 = (((x117<=x118)<=x119)|x120);

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = INT64_MIN;
	int32_t x122 = -1;
	int64_t x123 = 1820337LL;
	static int32_t x124 = 341815;
	int32_t t30 = -3733;

    t30 = (((x121<=x122)<=x123)|x124);

    if (t30 != 341815) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 227U;
	int8_t x126 = INT8_MIN;
	static uint32_t x127 = 39U;
	int64_t x128 = -7386LL;
	volatile int64_t t31 = -155532974714782LL;

    t31 = (((x125<=x126)<=x127)|x128);

    if (t31 != -7385LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x132 = INT64_MIN;
	int64_t t32 = 82080817451LL;

    t32 = (((x129<=x130)<=x131)|x132);

    if (t32 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = INT16_MIN;
	int32_t x134 = INT32_MIN;
	volatile int32_t x136 = -11809396;
	int32_t t33 = 820507185;

    t33 = (((x133<=x134)<=x135)|x136);

    if (t33 != -11809395) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x137 = 31550486LLU;
	volatile int64_t x138 = 1684208030149826085LL;
	uint32_t x140 = 119921125U;

    t34 = (((x137<=x138)<=x139)|x140);

    if (t34 != 119921125U) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = INT32_MAX;
	int16_t x142 = -1435;
	int32_t x143 = -1;

    t35 = (((x141<=x142)<=x143)|x144);

    if (t35 != 3) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x146 = 1U;
	int32_t x147 = INT32_MIN;
	uint32_t x148 = 87835822U;
	static uint32_t t36 = 64386U;

    t36 = (((x145<=x146)<=x147)|x148);

    if (t36 != 87835822U) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = INT8_MIN;
	int32_t x150 = INT32_MIN;
	volatile uint64_t x151 = UINT64_MAX;
	int16_t x152 = INT16_MIN;
	int32_t t37 = -8029322;

    t37 = (((x149<=x150)<=x151)|x152);

    if (t37 != -32767) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = 5851;
	int16_t x155 = INT16_MAX;
	int32_t x156 = INT32_MAX;
	static volatile int32_t t38 = INT32_MAX;

    t38 = (((x153<=x154)<=x155)|x156);

    if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = 11497357;
	uint32_t x158 = 145548U;
	uint64_t x159 = 4175904789LLU;
	uint8_t x160 = 5U;
	volatile int32_t t39 = -29;

    t39 = (((x157<=x158)<=x159)|x160);

    if (t39 != 5) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = -270357362572LL;
	int32_t x162 = INT32_MAX;
	int64_t x163 = -1LL;
	int8_t x164 = -1;
	volatile int32_t t40 = -1369;

    t40 = (((x161<=x162)<=x163)|x164);

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x167 = INT32_MAX;
	int8_t x168 = INT8_MIN;
	volatile int32_t t41 = 6037;

    t41 = (((x165<=x166)<=x167)|x168);

    if (t41 != -127) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x170 = UINT32_MAX;
	int32_t x171 = INT32_MIN;
	int32_t x172 = INT32_MIN;
	int32_t t42 = INT32_MIN;

    t42 = (((x169<=x170)<=x171)|x172);

    if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x173 = UINT16_MAX;
	uint32_t x174 = 78942380U;
	int64_t x175 = -1LL;
	static int64_t x176 = 134570468508634421LL;
	volatile int64_t t43 = 261600LL;

    t43 = (((x173<=x174)<=x175)|x176);

    if (t43 != 134570468508634421LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x178 = INT32_MIN;
	int8_t x179 = INT8_MIN;
	uint64_t x180 = 1577LLU;

    t44 = (((x177<=x178)<=x179)|x180);

    if (t44 != 1577LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x182 = -113892448713228386LL;
	int16_t x183 = -147;

    t45 = (((x181<=x182)<=x183)|x184);

    if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x186 = 0U;
	int32_t x187 = INT32_MAX;
	uint64_t x188 = UINT64_MAX;
	uint64_t t46 = UINT64_MAX;

    t46 = (((x185<=x186)<=x187)|x188);

    if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x190 = INT16_MAX;
	uint64_t x191 = 390710129LLU;
	int64_t t47 = -166LL;

    t47 = (((x189<=x190)<=x191)|x192);

    if (t47 != 14236749LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x194 = INT64_MIN;
	static int8_t x195 = INT8_MIN;
	volatile uint16_t x196 = 9057U;
	volatile int32_t t48 = -11584;

    t48 = (((x193<=x194)<=x195)|x196);

    if (t48 != 9057) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = INT64_MIN;
	uint64_t x198 = 616130461454006409LLU;
	uint8_t x199 = 6U;
	volatile int16_t x200 = INT16_MIN;
	volatile int32_t t49 = -132314722;

    t49 = (((x197<=x198)<=x199)|x200);

    if (t49 != -32767) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x202 = INT32_MAX;
	uint16_t x203 = UINT16_MAX;
	static uint16_t x204 = 220U;
	int32_t t50 = -217781;

    t50 = (((x201<=x202)<=x203)|x204);

    if (t50 != 221) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x205 = 3U;
	int8_t x206 = 3;
	int32_t x208 = 2586578;
	static volatile int32_t t51 = -891;

    t51 = (((x205<=x206)<=x207)|x208);

    if (t51 != 2586578) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x210 = INT16_MIN;
	int16_t x211 = INT16_MIN;
	int64_t x212 = INT64_MAX;
	int64_t t52 = INT64_MAX;

    t52 = (((x209<=x210)<=x211)|x212);

    if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MAX;
	int64_t x214 = INT64_MIN;
	static int8_t x215 = INT8_MIN;
	int16_t x216 = INT16_MIN;
	static int32_t t53 = 17689;

    t53 = (((x213<=x214)<=x215)|x216);

    if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = INT32_MAX;
	uint32_t x219 = 12U;
	int16_t x220 = 6;
	static volatile int32_t t54 = 66;

    t54 = (((x217<=x218)<=x219)|x220);

    if (t54 != 7) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x222 = 2U;
	uint16_t x223 = UINT16_MAX;
	static volatile int64_t x224 = -1LL;
	volatile int64_t t55 = 131740266737LL;

    t55 = (((x221<=x222)<=x223)|x224);

    if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = INT16_MAX;
	int8_t x228 = INT8_MIN;
	int32_t t56 = -236;

    t56 = (((x225<=x226)<=x227)|x228);

    if (t56 != -127) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = INT8_MAX;
	uint64_t x230 = UINT64_MAX;
	volatile int64_t x231 = INT64_MAX;
	static int32_t x232 = -31954981;
	volatile int32_t t57 = 428289;

    t57 = (((x229<=x230)<=x231)|x232);

    if (t57 != -31954981) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = INT64_MIN;
	static int64_t x234 = INT64_MAX;
	int8_t x235 = 6;
	volatile int32_t x236 = INT32_MIN;
	int32_t t58 = 583;

    t58 = (((x233<=x234)<=x235)|x236);

    if (t58 != -2147483647) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x238 = -1596LL;
	volatile int16_t x239 = INT16_MIN;
	static volatile int64_t t59 = INT64_MIN;

    t59 = (((x237<=x238)<=x239)|x240);

    if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x241 = INT16_MIN;
	int32_t x242 = INT32_MIN;
	int8_t x243 = 3;
	int64_t x244 = INT64_MIN;
	static int64_t t60 = -49844191319144970LL;

    t60 = (((x241<=x242)<=x243)|x244);

    if (t60 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = INT32_MIN;
	int64_t x246 = -1LL;
	volatile int16_t x247 = INT16_MIN;
	volatile uint32_t x248 = UINT32_MAX;

    t61 = (((x245<=x246)<=x247)|x248);

    if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = INT32_MAX;
	uint16_t x250 = UINT16_MAX;
	int64_t x252 = INT64_MIN;
	volatile int64_t t62 = 1233LL;

    t62 = (((x249<=x250)<=x251)|x252);

    if (t62 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x253 = INT16_MIN;
	int64_t x255 = INT64_MAX;
	int32_t t63 = -4911;

    t63 = (((x253<=x254)<=x255)|x256);

    if (t63 != -32767) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x257 = UINT8_MAX;
	uint16_t x258 = UINT16_MAX;
	volatile int16_t x260 = INT16_MIN;
	volatile int32_t t64 = 30;

    t64 = (((x257<=x258)<=x259)|x260);

    if (t64 != -32767) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x261 = 1394320917LLU;
	volatile uint16_t x262 = UINT16_MAX;
	int16_t x263 = -46;
	int64_t x264 = 767389694LL;
	static int64_t t65 = 8551900094045LL;

    t65 = (((x261<=x262)<=x263)|x264);

    if (t65 != 767389694LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = -374678;
	static int64_t x266 = INT64_MIN;
	volatile int32_t x267 = 3;
	volatile int32_t x268 = 1084923;
	int32_t t66 = -4071004;

    t66 = (((x265<=x266)<=x267)|x268);

    if (t66 != 1084923) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = -27;
	volatile uint32_t x270 = UINT32_MAX;
	static int32_t x271 = INT32_MIN;
	static int64_t x272 = INT64_MIN;
	int64_t t67 = INT64_MIN;

    t67 = (((x269<=x270)<=x271)|x272);

    if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x274 = 1443752152826235675LLU;
	uint8_t x275 = UINT8_MAX;
	volatile int16_t x276 = INT16_MAX;
	int32_t t68 = -17751;

    t68 = (((x273<=x274)<=x275)|x276);

    if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x277 = 927LLU;
	int32_t x278 = 177498182;
	int32_t x279 = 5;
	uint32_t x280 = 157609381U;
	static uint32_t t69 = 160U;

    t69 = (((x277<=x278)<=x279)|x280);

    if (t69 != 157609381U) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = INT32_MIN;
	uint8_t x282 = 2U;
	uint8_t x283 = UINT8_MAX;
	int32_t t70 = -169;

    t70 = (((x281<=x282)<=x283)|x284);

    if (t70 != -2147483647) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = 0;
	int32_t x288 = 10618;
	volatile int32_t t71 = 23606;

    t71 = (((x285<=x286)<=x287)|x288);

    if (t71 != 10619) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x290 = UINT64_MAX;
	static int8_t x291 = -1;
	volatile int32_t x292 = -1;
	int32_t t72 = -2121218;

    t72 = (((x289<=x290)<=x291)|x292);

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = -39;
	int32_t x295 = 635973;

    t73 = (((x293<=x294)<=x295)|x296);

    if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x298 = 0U;
	volatile int32_t x299 = INT32_MIN;
	uint64_t x300 = UINT64_MAX;
	volatile uint64_t t74 = UINT64_MAX;

    t74 = (((x297<=x298)<=x299)|x300);

    if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = INT16_MIN;
	uint16_t x302 = 4U;
	int64_t x303 = INT64_MIN;
	volatile int32_t t75 = -14946493;

    t75 = (((x301<=x302)<=x303)|x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x306 = INT32_MIN;
	static int16_t x307 = INT16_MIN;
	int64_t x308 = -1LL;
	int64_t t76 = -708041422862LL;

    t76 = (((x305<=x306)<=x307)|x308);

    if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x309 = UINT16_MAX;
	int32_t x311 = INT32_MIN;
	int8_t x312 = INT8_MIN;
	volatile int32_t t77 = -1;

    t77 = (((x309<=x310)<=x311)|x312);

    if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x313 = -11666;
	int8_t x314 = INT8_MIN;
	volatile int8_t x315 = 1;
	uint16_t x316 = 0U;
	static volatile int32_t t78 = -2;

    t78 = (((x313<=x314)<=x315)|x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int64_t x318 = INT64_MAX;
	volatile int8_t x319 = INT8_MIN;
	static int64_t t79 = -4761LL;

    t79 = (((x317<=x318)<=x319)|x320);

    if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x322 = INT64_MIN;
	static uint8_t x323 = 2U;

    t80 = (((x321<=x322)<=x323)|x324);

    if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x325 = -1297053909061726665LL;
	volatile int16_t x326 = -1;
	uint8_t x327 = 3U;
	volatile int16_t x328 = INT16_MAX;
	volatile int32_t t81 = 2;

    t81 = (((x325<=x326)<=x327)|x328);

    if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x329 = 0U;
	int32_t x330 = INT32_MIN;
	volatile uint8_t x332 = 1U;
	volatile int32_t t82 = -32896;

    t82 = (((x329<=x330)<=x331)|x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = INT8_MIN;
	int32_t x334 = INT32_MAX;
	uint8_t x335 = 0U;
	volatile int32_t t83 = -23323685;

    t83 = (((x333<=x334)<=x335)|x336);

    if (t83 != 95) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = 15;
	uint32_t x338 = 7224931U;
	int32_t x339 = INT32_MAX;
	int8_t x340 = -1;

    t84 = (((x337<=x338)<=x339)|x340);

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x342 = INT16_MIN;
	int32_t x343 = 517887;
	uint8_t x344 = 0U;
	static int32_t t85 = -4648204;

    t85 = (((x341<=x342)<=x343)|x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x345 = -1LL;
	int64_t x347 = -659973987667483662LL;
	volatile int32_t x348 = INT32_MIN;

    t86 = (((x345<=x346)<=x347)|x348);

    if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = -444;
	int8_t x350 = 7;
	static volatile int64_t x351 = -49575684722066213LL;
	static int64_t x352 = INT64_MAX;
	int64_t t87 = INT64_MAX;

    t87 = (((x349<=x350)<=x351)|x352);

    if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x354 = INT16_MIN;
	uint16_t x355 = 11U;
	int32_t x356 = INT32_MIN;

    t88 = (((x353<=x354)<=x355)|x356);

    if (t88 != -2147483647) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int64_t x357 = -1LL;
	int32_t x358 = 2;
	static volatile int16_t x359 = -1;
	int8_t x360 = INT8_MAX;

    t89 = (((x357<=x358)<=x359)|x360);

    if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x361 = INT8_MAX;
	volatile uint8_t x362 = 17U;
	uint8_t x364 = 8U;
	int32_t t90 = -7981194;

    t90 = (((x361<=x362)<=x363)|x364);

    if (t90 != 8) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x365 = INT8_MIN;
	int8_t x366 = -5;
	static int64_t x367 = INT64_MAX;
	static int16_t x368 = INT16_MIN;

    t91 = (((x365<=x366)<=x367)|x368);

    if (t91 != -32767) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int8_t x369 = -1;
	static uint8_t x372 = UINT8_MAX;
	static volatile int32_t t92 = -12686;

    t92 = (((x369<=x370)<=x371)|x372);

    if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int16_t x374 = INT16_MIN;
	uint32_t x375 = 92966077U;
	volatile int32_t t93 = -1072853434;

    t93 = (((x373<=x374)<=x375)|x376);

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x377 = INT32_MIN;
	int32_t x378 = INT32_MIN;
	int8_t x379 = 3;
	int16_t x380 = -2;
	int32_t t94 = 57216978;

    t94 = (((x377<=x378)<=x379)|x380);

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = INT8_MIN;
	static volatile int64_t x382 = INT64_MIN;
	uint64_t x384 = UINT64_MAX;

    t95 = (((x381<=x382)<=x383)|x384);

    if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x385 = -1;
	uint32_t x387 = UINT32_MAX;
	volatile int64_t x388 = 69244037283753915LL;

    t96 = (((x385<=x386)<=x387)|x388);

    if (t96 != 69244037283753915LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x390 = -30280;
	int32_t x391 = 986929971;
	static uint32_t x392 = 73634338U;

    t97 = (((x389<=x390)<=x391)|x392);

    if (t97 != 73634339U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x393 = 558U;
	static volatile int64_t x394 = -14662627749209LL;
	static volatile int32_t t98 = -12723;

    t98 = (((x393<=x394)<=x395)|x396);

    if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x397 = -1;
	int8_t x398 = INT8_MIN;
	volatile int64_t t99 = 6685144317LL;

    t99 = (((x397<=x398)<=x399)|x400);

    if (t99 != 197LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x401 = INT64_MIN;
	uint16_t x403 = 4U;
	static uint16_t x404 = 333U;
	int32_t t100 = -386;

    t100 = (((x401<=x402)<=x403)|x404);

    if (t100 != 333) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = -13163;
	int16_t x407 = 43;
	static int64_t x408 = INT64_MIN;
	int64_t t101 = 97597696LL;

    t101 = (((x405<=x406)<=x407)|x408);

    if (t101 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x409 = 2351LLU;
	volatile uint8_t x410 = 18U;
	volatile int8_t x412 = 17;

    t102 = (((x409<=x410)<=x411)|x412);

    if (t102 != 17) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = 1;
	static int32_t x414 = INT32_MIN;
	volatile int64_t x415 = INT64_MAX;
	int16_t x416 = INT16_MIN;
	volatile int32_t t103 = 263657;

    t103 = (((x413<=x414)<=x415)|x416);

    if (t103 != -32767) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x417 = 6182728U;
	uint32_t x418 = UINT32_MAX;
	uint16_t x419 = 21949U;
	int32_t x420 = INT32_MIN;
	int32_t t104 = 107414;

    t104 = (((x417<=x418)<=x419)|x420);

    if (t104 != -2147483647) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x421 = INT8_MIN;
	uint64_t x422 = 84452740890033663LLU;
	uint8_t x423 = 9U;
	int8_t x424 = INT8_MIN;
	volatile int32_t t105 = -9761;

    t105 = (((x421<=x422)<=x423)|x424);

    if (t105 != -127) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x425 = 213448U;
	volatile int64_t x426 = -326744719LL;
	static int16_t x427 = -237;
	static int32_t t106 = 399018830;

    t106 = (((x425<=x426)<=x427)|x428);

    if (t106 != -1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = INT8_MIN;
	int16_t x430 = INT16_MAX;
	volatile int64_t x431 = INT64_MAX;
	uint8_t x432 = 3U;
	int32_t t107 = -100363287;

    t107 = (((x429<=x430)<=x431)|x432);

    if (t107 != 3) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x434 = 14U;
	int16_t x435 = INT16_MAX;
	uint32_t x436 = UINT32_MAX;

    t108 = (((x433<=x434)<=x435)|x436);

    if (t108 != UINT32_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x437 = INT8_MIN;
	static uint16_t x440 = UINT16_MAX;
	int32_t t109 = -6170;

    t109 = (((x437<=x438)<=x439)|x440);

    if (t109 != 65535) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x441 = 0;
	int8_t x442 = 23;
	int64_t x444 = -1LL;
	static volatile int64_t t110 = 482553558267854LL;

    t110 = (((x441<=x442)<=x443)|x444);

    if (t110 != -1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = INT8_MAX;
	uint32_t x446 = 28261U;
	static int64_t x447 = INT64_MAX;
	uint32_t x448 = 1469653500U;
	volatile uint32_t t111 = 5U;

    t111 = (((x445<=x446)<=x447)|x448);

    if (t111 != 1469653501U) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = INT8_MAX;
	int64_t x450 = 1167073LL;
	int16_t x451 = INT16_MIN;

    t112 = (((x449<=x450)<=x451)|x452);

    if (t112 != 11) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = 9;
	volatile int16_t x454 = -1;
	static int16_t x455 = 13930;

    t113 = (((x453<=x454)<=x455)|x456);

    if (t113 != 3199) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x457 = 14144987491LLU;
	int64_t x458 = 100273483126315664LL;
	static volatile uint8_t x459 = 6U;
	static uint8_t x460 = 41U;
	volatile int32_t t114 = -6270361;

    t114 = (((x457<=x458)<=x459)|x460);

    if (t114 != 41) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x461 = 7556U;
	uint16_t x463 = UINT16_MAX;
	static int64_t x464 = 537072LL;
	volatile int64_t t115 = 12008LL;

    t115 = (((x461<=x462)<=x463)|x464);

    if (t115 != 537073LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = -27762331LL;
	volatile uint16_t x466 = 23U;
	volatile int8_t x467 = -1;
	volatile uint64_t x468 = UINT64_MAX;
	uint64_t t116 = UINT64_MAX;

    t116 = (((x465<=x466)<=x467)|x468);

    if (t116 != UINT64_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x469 = INT8_MIN;
	int8_t x470 = INT8_MIN;
	static int32_t t117 = -33;

    t117 = (((x469<=x470)<=x471)|x472);

    if (t117 != 255) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x473 = 0U;
	int8_t x474 = INT8_MIN;
	volatile int32_t t118 = 57985372;

    t118 = (((x473<=x474)<=x475)|x476);

    if (t118 != 255) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x478 = UINT8_MAX;
	volatile int64_t x480 = 2056115246757448941LL;
	volatile int64_t t119 = -15462788164938LL;

    t119 = (((x477<=x478)<=x479)|x480);

    if (t119 != 2056115246757448941LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint32_t x481 = 922979U;
	uint16_t x482 = UINT16_MAX;
	int8_t x484 = INT8_MAX;

    t120 = (((x481<=x482)<=x483)|x484);

    if (t120 != 127) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint8_t x485 = 14U;
	uint8_t x486 = 2U;
	uint8_t x487 = UINT8_MAX;
	volatile int8_t x488 = 0;
	int32_t t121 = -449;

    t121 = (((x485<=x486)<=x487)|x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = INT64_MIN;
	int32_t x491 = -1;
	int32_t t122 = 150870970;

    t122 = (((x489<=x490)<=x491)|x492);

    if (t122 != 9) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = -1052145229816290LL;
	int16_t x495 = INT16_MAX;
	uint8_t x496 = UINT8_MAX;

    t123 = (((x493<=x494)<=x495)|x496);

    if (t123 != 255) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x497 = UINT32_MAX;
	int16_t x498 = -2613;
	static int16_t x499 = INT16_MAX;
	int64_t x500 = -430721682117LL;
	volatile int64_t t124 = 108305994554255848LL;

    t124 = (((x497<=x498)<=x499)|x500);

    if (t124 != -430721682117LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = -1;
	int16_t x502 = INT16_MIN;
	int16_t x504 = -1862;
	static int32_t t125 = 4;

    t125 = (((x501<=x502)<=x503)|x504);

    if (t125 != -1862) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = INT64_MIN;
	uint16_t x506 = 27U;
	int64_t x507 = INT64_MIN;

    t126 = (((x505<=x506)<=x507)|x508);

    if (t126 != -128) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x509 = UINT16_MAX;
	int16_t x510 = 1;
	uint64_t x511 = 1079757436162LLU;
	int8_t x512 = INT8_MIN;
	volatile int32_t t127 = -309937;

    t127 = (((x509<=x510)<=x511)|x512);

    if (t127 != -127) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x514 = 172424;
	volatile uint16_t x515 = 0U;
	static volatile uint64_t t128 = 1262264515605378037LLU;

    t128 = (((x513<=x514)<=x515)|x516);

    if (t128 != 127821546473637351LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x517 = 3U;
	int8_t x518 = INT8_MIN;
	static int16_t x519 = 1560;
	int16_t x520 = INT16_MIN;
	int32_t t129 = 16;

    t129 = (((x517<=x518)<=x519)|x520);

    if (t129 != -32767) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x521 = -1LL;
	static int32_t x522 = INT32_MIN;
	static int8_t x523 = 36;
	uint16_t x524 = 0U;
	int32_t t130 = 1;

    t130 = (((x521<=x522)<=x523)|x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x525 = INT16_MAX;
	uint8_t x526 = 102U;
	int32_t x527 = -1;
	int16_t x528 = INT16_MAX;

    t131 = (((x525<=x526)<=x527)|x528);

    if (t131 != 32767) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x529 = 197019;
	int32_t x530 = -15362;
	int64_t x531 = -952071243LL;
	int8_t x532 = INT8_MAX;
	volatile int32_t t132 = -2190;

    t132 = (((x529<=x530)<=x531)|x532);

    if (t132 != 127) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x533 = 12U;
	volatile uint32_t x534 = 12U;
	volatile int32_t x536 = INT32_MAX;
	int32_t t133 = INT32_MAX;

    t133 = (((x533<=x534)<=x535)|x536);

    if (t133 != INT32_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x538 = -5194LL;
	int32_t x539 = INT32_MAX;
	int64_t x540 = INT64_MAX;
	int64_t t134 = INT64_MAX;

    t134 = (((x537<=x538)<=x539)|x540);

    if (t134 != INT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x541 = 0;
	uint8_t x542 = UINT8_MAX;
	int16_t x543 = INT16_MIN;
	volatile int32_t t135 = -3392276;

    t135 = (((x541<=x542)<=x543)|x544);

    if (t135 != 554) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x546 = -1;
	int16_t x548 = INT16_MIN;
	int32_t t136 = 12;

    t136 = (((x545<=x546)<=x547)|x548);

    if (t136 != -32767) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x550 = INT8_MAX;
	uint64_t x551 = 18102308LLU;
	static int32_t x552 = -1;
	int32_t t137 = 84039505;

    t137 = (((x549<=x550)<=x551)|x552);

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint16_t x553 = 2650U;
	uint64_t x554 = 316395181LLU;
	static uint64_t x556 = UINT64_MAX;
	uint64_t t138 = UINT64_MAX;

    t138 = (((x553<=x554)<=x555)|x556);

    if (t138 != UINT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = INT32_MIN;
	int32_t x558 = 1331;
	static volatile uint32_t x559 = 1637U;
	static int64_t x560 = INT64_MIN;
	volatile int64_t t139 = -298030898697LL;

    t139 = (((x557<=x558)<=x559)|x560);

    if (t139 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = -1;
	uint64_t x562 = 19869817539LLU;
	volatile int32_t x563 = INT32_MIN;
	int8_t x564 = INT8_MAX;
	volatile int32_t t140 = -14;

    t140 = (((x561<=x562)<=x563)|x564);

    if (t140 != 127) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x565 = 14LL;
	volatile int16_t x566 = -1;
	int16_t x567 = INT16_MIN;
	int32_t x568 = 528604;
	int32_t t141 = 4291;

    t141 = (((x565<=x566)<=x567)|x568);

    if (t141 != 528604) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = 38;
	int32_t x570 = INT32_MIN;
	int64_t x571 = 143923670875643320LL;
	int64_t x572 = -2450619980LL;

    t142 = (((x569<=x570)<=x571)|x572);

    if (t142 != -2450619979LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = INT64_MAX;
	int32_t x574 = INT32_MAX;
	uint64_t x575 = 79567790169262594LLU;
	volatile int32_t x576 = INT32_MAX;

    t143 = (((x573<=x574)<=x575)|x576);

    if (t143 != INT32_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = INT16_MAX;
	uint64_t x579 = UINT64_MAX;
	int16_t x580 = INT16_MIN;
	volatile int32_t t144 = -3621652;

    t144 = (((x577<=x578)<=x579)|x580);

    if (t144 != -32767) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x581 = 342U;
	int64_t x584 = 0LL;
	int64_t t145 = 2991177LL;

    t145 = (((x581<=x582)<=x583)|x584);

    if (t145 != 1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = INT64_MIN;
	uint16_t x586 = UINT16_MAX;
	int8_t x587 = 22;
	static int16_t x588 = -3717;
	int32_t t146 = 202812;

    t146 = (((x585<=x586)<=x587)|x588);

    if (t146 != -3717) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint8_t x589 = UINT8_MAX;
	int8_t x590 = 1;
	int32_t x591 = 459432;
	int64_t x592 = INT64_MIN;
	int64_t t147 = 22190390307559LL;

    t147 = (((x589<=x590)<=x591)|x592);

    if (t147 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int32_t x594 = -1;
	uint16_t x596 = 24U;
	static int32_t t148 = -317172960;

    t148 = (((x593<=x594)<=x595)|x596);

    if (t148 != 25) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x597 = -1;
	static int16_t x598 = -7250;
	volatile int32_t t149 = -2560369;

    t149 = (((x597<=x598)<=x599)|x600);

    if (t149 != -32768) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = -13261;
	int8_t x603 = INT8_MAX;
	int64_t x604 = 28545642414LL;
	int64_t t150 = -13LL;

    t150 = (((x601<=x602)<=x603)|x604);

    if (t150 != 28545642415LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = -1LL;
	int16_t x606 = -1;
	volatile uint16_t x607 = 58U;
	volatile int16_t x608 = -10;
	volatile int32_t t151 = -1469;

    t151 = (((x605<=x606)<=x607)|x608);

    if (t151 != -9) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x609 = -295396;
	int16_t x611 = INT16_MAX;
	volatile int64_t x612 = -16865833681771LL;
	volatile int64_t t152 = 1175LL;

    t152 = (((x609<=x610)<=x611)|x612);

    if (t152 != -16865833681771LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = -1;
	uint32_t x614 = 15331U;
	uint16_t x615 = 17613U;
	int64_t t153 = INT64_MAX;

    t153 = (((x613<=x614)<=x615)|x616);

    if (t153 != INT64_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = 35;
	int8_t x618 = INT8_MAX;
	int8_t x619 = -2;
	int64_t x620 = -1LL;
	int64_t t154 = 2169281584957372745LL;

    t154 = (((x617<=x618)<=x619)|x620);

    if (t154 != -1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x621 = INT64_MIN;
	uint32_t x622 = 414U;
	int64_t x623 = -1LL;
	int8_t x624 = -1;
	volatile int32_t t155 = -1352;

    t155 = (((x621<=x622)<=x623)|x624);

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x625 = 14124U;
	int32_t x626 = INT32_MAX;
	uint16_t x628 = 373U;
	int32_t t156 = -58;

    t156 = (((x625<=x626)<=x627)|x628);

    if (t156 != 373) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = -1;
	int32_t x630 = INT32_MIN;
	uint8_t x631 = UINT8_MAX;
	int64_t x632 = -10805LL;
	int64_t t157 = -1981963421LL;

    t157 = (((x629<=x630)<=x631)|x632);

    if (t157 != -10805LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = INT64_MIN;
	volatile int64_t x634 = 25515660061LL;
	int32_t x635 = 7;
	static uint64_t x636 = UINT64_MAX;
	static uint64_t t158 = UINT64_MAX;

    t158 = (((x633<=x634)<=x635)|x636);

    if (t158 != UINT64_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x637 = 478945442011LLU;
	int8_t x638 = -1;
	int32_t t159 = 5;

    t159 = (((x637<=x638)<=x639)|x640);

    if (t159 != 527160735) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = INT8_MIN;
	volatile uint8_t x642 = UINT8_MAX;
	int8_t x643 = INT8_MIN;
	int32_t x644 = -372367342;
	volatile int32_t t160 = 2805375;

    t160 = (((x641<=x642)<=x643)|x644);

    if (t160 != -372367342) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x645 = INT32_MAX;
	volatile int8_t x646 = 29;
	int16_t x647 = INT16_MAX;
	volatile int64_t x648 = 2462LL;
	static volatile int64_t t161 = 0LL;

    t161 = (((x645<=x646)<=x647)|x648);

    if (t161 != 2463LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = INT8_MAX;
	uint32_t x650 = 52497534U;
	uint8_t x651 = UINT8_MAX;
	static uint8_t x652 = 85U;
	static int32_t t162 = 9;

    t162 = (((x649<=x650)<=x651)|x652);

    if (t162 != 85) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x653 = INT32_MIN;
	int16_t x656 = INT16_MAX;

    t163 = (((x653<=x654)<=x655)|x656);

    if (t163 != 32767) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x657 = UINT8_MAX;
	int64_t x659 = -1LL;
	int8_t x660 = 3;

    t164 = (((x657<=x658)<=x659)|x660);

    if (t164 != 3) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint8_t x661 = 3U;
	static volatile int16_t x662 = INT16_MIN;
	int16_t x663 = 1909;
	static volatile int32_t x664 = -1;
	int32_t t165 = -1399580;

    t165 = (((x661<=x662)<=x663)|x664);

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = INT32_MAX;
	volatile uint16_t x666 = 2U;
	uint8_t x667 = 103U;

    t166 = (((x665<=x666)<=x667)|x668);

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = 2410;
	uint32_t x670 = 335475031U;
	static uint32_t x671 = 116730U;
	volatile uint16_t x672 = UINT16_MAX;
	volatile int32_t t167 = -3;

    t167 = (((x669<=x670)<=x671)|x672);

    if (t167 != 65535) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x673 = 14U;
	int16_t x674 = -9;
	static int8_t x675 = INT8_MIN;
	int16_t x676 = INT16_MAX;
	volatile int32_t t168 = -583;

    t168 = (((x673<=x674)<=x675)|x676);

    if (t168 != 32767) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = INT16_MIN;
	int16_t x678 = 8007;
	uint16_t x679 = UINT16_MAX;
	static int16_t x680 = -1;

    t169 = (((x677<=x678)<=x679)|x680);

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x681 = 15338U;
	int32_t x682 = -47774037;
	volatile uint64_t x683 = UINT64_MAX;
	int32_t t170 = -66746290;

    t170 = (((x681<=x682)<=x683)|x684);

    if (t170 != 3) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x685 = -899128433957LL;
	volatile int16_t x687 = INT16_MIN;
	int8_t x688 = INT8_MIN;
	int32_t t171 = -55938;

    t171 = (((x685<=x686)<=x687)|x688);

    if (t171 != -128) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x690 = 75177771LLU;
	volatile int16_t x691 = INT16_MIN;
	static volatile int32_t x692 = 1090485;

    t172 = (((x689<=x690)<=x691)|x692);

    if (t172 != 1090485) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = 29;
	static uint32_t x694 = 14U;
	static int64_t x695 = -1LL;
	volatile uint16_t x696 = 3U;

    t173 = (((x693<=x694)<=x695)|x696);

    if (t173 != 3) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = -694;
	int32_t x699 = -29954;
	int32_t x700 = INT32_MIN;
	volatile int32_t t174 = INT32_MIN;

    t174 = (((x697<=x698)<=x699)|x700);

    if (t174 != INT32_MIN) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = INT16_MIN;
	int32_t x702 = INT32_MAX;
	int8_t x703 = INT8_MIN;
	volatile uint16_t x704 = 49U;
	int32_t t175 = 10094908;

    t175 = (((x701<=x702)<=x703)|x704);

    if (t175 != 49) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = INT64_MIN;
	int64_t x706 = -1LL;
	int16_t x707 = INT16_MAX;
	int8_t x708 = INT8_MIN;
	int32_t t176 = 24097;

    t176 = (((x705<=x706)<=x707)|x708);

    if (t176 != -127) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x709 = UINT32_MAX;
	volatile uint32_t x712 = 1705098144U;
	static uint32_t t177 = 106317U;

    t177 = (((x709<=x710)<=x711)|x712);

    if (t177 != 1705098144U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x713 = 1U;
	int64_t x714 = INT64_MAX;
	int16_t x715 = INT16_MIN;
	volatile uint8_t x716 = 76U;

    t178 = (((x713<=x714)<=x715)|x716);

    if (t178 != 76) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = INT32_MIN;
	uint32_t x718 = 1377937237U;
	static volatile uint64_t x719 = 81355LLU;

    t179 = (((x717<=x718)<=x719)|x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = -1313436LL;
	volatile int16_t x722 = INT16_MIN;
	int8_t x723 = -2;
	int8_t x724 = INT8_MIN;
	volatile int32_t t180 = -2053850;

    t180 = (((x721<=x722)<=x723)|x724);

    if (t180 != -128) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile uint64_t x725 = 106250LLU;
	int64_t x727 = INT64_MIN;
	volatile int8_t x728 = 1;
	volatile int32_t t181 = 381715;

    t181 = (((x725<=x726)<=x727)|x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x730 = INT32_MIN;
	volatile int64_t x731 = -47LL;
	int32_t x732 = 143;
	static volatile int32_t t182 = 92005;

    t182 = (((x729<=x730)<=x731)|x732);

    if (t182 != 143) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x733 = -25LL;
	static uint8_t x734 = UINT8_MAX;
	static int16_t x736 = INT16_MIN;

    t183 = (((x733<=x734)<=x735)|x736);

    if (t183 != -32767) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x739 = UINT64_MAX;
	uint64_t x740 = UINT64_MAX;
	volatile uint64_t t184 = UINT64_MAX;

    t184 = (((x737<=x738)<=x739)|x740);

    if (t184 != UINT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x742 = 29;
	int16_t x743 = INT16_MIN;
	int64_t x744 = 0LL;
	int64_t t185 = 5LL;

    t185 = (((x741<=x742)<=x743)|x744);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x745 = 597762LLU;
	static int16_t x746 = 0;
	volatile int32_t t186 = -69018;

    t186 = (((x745<=x746)<=x747)|x748);

    if (t186 != -2147483647) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = -124;
	int16_t x750 = 7;
	uint8_t x751 = 82U;
	uint16_t x752 = 15U;
	volatile int32_t t187 = 36352;

    t187 = (((x749<=x750)<=x751)|x752);

    if (t187 != 15) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = -1;
	uint32_t x755 = 45306022U;
	int64_t x756 = -1LL;
	static int64_t t188 = -96482068945877LL;

    t188 = (((x753<=x754)<=x755)|x756);

    if (t188 != -1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = 4455589463985LL;
	uint8_t x758 = UINT8_MAX;
	static volatile uint32_t x760 = 19850U;
	static uint32_t t189 = 479873262U;

    t189 = (((x757<=x758)<=x759)|x760);

    if (t189 != 19851U) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int64_t x761 = -1LL;
	static int8_t x762 = INT8_MIN;
	uint64_t x763 = 104371813LLU;
	uint8_t x764 = UINT8_MAX;
	volatile int32_t t190 = 6;

    t190 = (((x761<=x762)<=x763)|x764);

    if (t190 != 255) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = INT32_MIN;
	int64_t x766 = 788LL;
	int32_t x767 = -1;
	int32_t x768 = INT32_MIN;
	static int32_t t191 = INT32_MIN;

    t191 = (((x765<=x766)<=x767)|x768);

    if (t191 != INT32_MIN) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x769 = 53U;
	uint8_t x770 = 104U;
	uint8_t x771 = 2U;
	volatile uint8_t x772 = UINT8_MAX;

    t192 = (((x769<=x770)<=x771)|x772);

    if (t192 != 255) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x773 = 404782798LLU;
	uint64_t x775 = 9261165525404LLU;

    t193 = (((x773<=x774)<=x775)|x776);

    if (t193 != 127) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x777 = 4133U;
	volatile int8_t x778 = -8;
	volatile int16_t x779 = -125;
	static uint64_t x780 = UINT64_MAX;
	uint64_t t194 = UINT64_MAX;

    t194 = (((x777<=x778)<=x779)|x780);

    if (t194 != UINT64_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x781 = 285U;
	uint8_t x782 = UINT8_MAX;
	int16_t x783 = 0;
	int32_t x784 = -1;
	volatile int32_t t195 = -215;

    t195 = (((x781<=x782)<=x783)|x784);

    if (t195 != -1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x785 = 1460U;
	volatile uint32_t x786 = 241417152U;
	int32_t x787 = -322163790;
	volatile uint32_t x788 = 28U;
	uint32_t t196 = 49120U;

    t196 = (((x785<=x786)<=x787)|x788);

    if (t196 != 28U) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = INT16_MIN;
	uint8_t x790 = 62U;
	static int32_t x791 = 12976;
	static int32_t x792 = INT32_MAX;
	int32_t t197 = INT32_MAX;

    t197 = (((x789<=x790)<=x791)|x792);

    if (t197 != INT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x793 = 357715U;
	static int32_t x795 = -1040546;
	static volatile int32_t x796 = 10628835;
	int32_t t198 = 0;

    t198 = (((x793<=x794)<=x795)|x796);

    if (t198 != 10628835) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x798 = INT32_MIN;
	volatile int64_t x799 = -91986613842LL;
	int64_t x800 = INT64_MAX;
	volatile int64_t t199 = INT64_MAX;

    t199 = (((x797<=x798)<=x799)|x800);

    if (t199 != INT64_MAX) { NG(); } else { ; }
	
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

