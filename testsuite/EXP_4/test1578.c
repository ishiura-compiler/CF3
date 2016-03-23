
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
uint16_t x5 = UINT16_MAX;
int32_t t1 = -9;
int32_t x9 = -1;
static int64_t x10 = 463459834153LL;
uint16_t x13 = 88U;
int8_t x23 = INT8_MIN;
int64_t x27 = -1LL;
int8_t x28 = -1;
uint64_t x31 = UINT64_MAX;
static volatile uint64_t x33 = 68LLU;
int8_t x35 = INT8_MIN;
uint64_t x38 = 579557082LLU;
uint16_t x50 = UINT16_MAX;
int16_t x61 = INT16_MIN;
int16_t x67 = 26;
int8_t x69 = INT8_MAX;
int64_t x72 = INT64_MIN;
int16_t x77 = -1;
static int64_t x78 = 4118520556357357311LL;
static int32_t t19 = -53943186;
volatile int32_t x87 = INT32_MIN;
int8_t x88 = INT8_MAX;
int32_t x98 = -26;
uint16_t x100 = 76U;
int16_t x101 = 1;
volatile int64_t x104 = -93300223151280216LL;
static int32_t t25 = -43;
static volatile int32_t x105 = INT32_MAX;
static volatile int32_t t27 = -181;
uint32_t x114 = 419379U;
volatile int32_t t29 = 11;
volatile int16_t x124 = INT16_MIN;
static int32_t t31 = -1577;
int8_t x129 = -1;
volatile uint32_t x133 = 2136201751U;
static volatile int16_t x140 = 1219;
int32_t x142 = -1;
volatile uint16_t x147 = 5U;
static int8_t x150 = INT8_MIN;
uint64_t x151 = 21622LLU;
volatile int32_t t38 = -10287;
static uint16_t x157 = UINT16_MAX;
int16_t x158 = -1;
volatile int32_t t39 = -40045297;
static int32_t x162 = INT32_MIN;
int8_t x167 = INT8_MAX;
int32_t t41 = -5063640;
int8_t x172 = -1;
int64_t x176 = -1LL;
static volatile int8_t x181 = -1;
int64_t x185 = INT64_MAX;
uint64_t x191 = 809LLU;
static int32_t t47 = 1;
volatile uint64_t x193 = 9395LLU;
uint64_t x195 = 830414LLU;
int8_t x197 = INT8_MIN;
uint32_t x203 = UINT32_MAX;
uint16_t x205 = 179U;
int64_t x209 = -1LL;
int8_t x210 = INT8_MIN;
uint16_t x211 = UINT16_MAX;
int32_t x213 = INT32_MAX;
int32_t t54 = 3386;
int16_t x221 = -1;
static int32_t x222 = -20;
int8_t x224 = 0;
volatile uint64_t x226 = UINT64_MAX;
static volatile int32_t t56 = 5418;
int32_t t57 = -6;
int16_t x238 = INT16_MIN;
uint16_t x242 = 1U;
volatile int32_t x244 = INT32_MIN;
volatile int32_t t60 = 59606;
static uint16_t x252 = UINT16_MAX;
int32_t x255 = INT32_MIN;
uint64_t x257 = UINT64_MAX;
uint16_t x264 = UINT16_MAX;
static uint64_t x270 = 4122LLU;
int8_t x273 = INT8_MIN;
uint8_t x275 = 48U;
uint64_t x276 = UINT64_MAX;
volatile int32_t t69 = 0;
static volatile int16_t x285 = INT16_MAX;
int16_t x287 = -1;
static volatile int32_t t70 = -640832416;
uint32_t x293 = UINT32_MAX;
uint64_t x294 = 3780591834215521LLU;
int32_t t75 = 1;
int64_t x312 = -1LL;
int32_t x323 = INT32_MIN;
int64_t x331 = -1LL;
uint32_t x336 = 16U;
int32_t x341 = 0;
volatile uint16_t x349 = 19652U;
int8_t x353 = INT8_MIN;
uint16_t x354 = 39U;
int16_t x361 = -60;
int32_t x364 = -1;
uint8_t x367 = 47U;
static uint64_t x376 = UINT64_MAX;
int32_t t92 = -56381302;
int64_t x380 = INT64_MIN;
static int64_t x384 = INT64_MIN;
volatile int32_t t95 = -52;
volatile int8_t x394 = INT8_MIN;
int32_t t97 = -133833;
uint64_t x398 = UINT64_MAX;
int32_t t104 = -3;
int16_t x426 = -1;
static int64_t x427 = INT64_MIN;
int64_t x429 = -2LL;
int8_t x432 = INT8_MIN;
uint32_t x436 = 11568762U;
int8_t x444 = INT8_MIN;
uint64_t x446 = 576011626989660464LLU;
volatile int8_t x447 = 0;
int32_t x451 = INT32_MIN;
uint32_t x452 = 54314532U;
volatile int32_t t113 = -212982080;
volatile int32_t t114 = 1;
uint16_t x472 = 0U;
int64_t x484 = INT64_MIN;
int64_t x493 = -1LL;
int8_t x496 = -1;
int16_t x501 = INT16_MIN;
int64_t x502 = -3LL;
static int16_t x508 = INT16_MAX;
static uint64_t x515 = UINT64_MAX;
volatile uint32_t x520 = UINT32_MAX;
int16_t x528 = INT16_MIN;
int32_t x531 = 1;
volatile int16_t x532 = INT16_MAX;
int16_t x533 = INT16_MAX;
int64_t x534 = INT64_MIN;
int64_t x543 = -5962LL;
int16_t x545 = -1;
int16_t x546 = INT16_MIN;
int32_t t136 = 30;
uint32_t x554 = 1341U;
uint32_t x559 = UINT32_MAX;
uint16_t x560 = UINT16_MAX;
static volatile int32_t t139 = 309846055;
static volatile int32_t t140 = 159603644;
uint32_t x574 = UINT32_MAX;
uint64_t x575 = UINT64_MAX;
int8_t x577 = -1;
uint16_t x580 = 301U;
uint64_t x582 = 0LLU;
uint8_t x583 = 1U;
volatile uint64_t x586 = 15099LLU;
uint16_t x589 = UINT16_MAX;
uint64_t x605 = 61LLU;
static uint64_t x614 = UINT64_MAX;
volatile int32_t t151 = 253;
uint16_t x621 = 1879U;
uint8_t x625 = 89U;
volatile int32_t t154 = 301813169;
int8_t x629 = INT8_MIN;
int64_t x631 = INT64_MIN;
volatile uint64_t x632 = UINT64_MAX;
volatile int64_t x640 = INT64_MIN;
int32_t t159 = -245773702;
volatile int32_t t161 = 48128891;
uint32_t x664 = UINT32_MAX;
int64_t x665 = INT64_MAX;
volatile int16_t x667 = INT16_MAX;
int32_t t166 = 3;
volatile uint64_t x681 = UINT64_MAX;
volatile int16_t x687 = -3;
volatile uint32_t x688 = 51330040U;
volatile int32_t t171 = -405471741;
uint16_t x697 = 0U;
static volatile int32_t t172 = -662829385;
volatile int64_t x709 = 535LL;
int16_t x710 = -1;
static int64_t x712 = INT64_MIN;
int64_t x716 = -209028358554969126LL;
static uint64_t x717 = 11732473LLU;
int64_t x723 = -7819514889566LL;
int32_t x728 = -175;
int32_t x732 = 1645320;
volatile int32_t t179 = -624;
volatile uint32_t x737 = 2930040U;
volatile int32_t x749 = -1;
uint16_t x753 = UINT16_MAX;
int8_t x755 = INT8_MIN;
static uint16_t x767 = 1U;
uint64_t x776 = 88320677LLU;
int16_t x777 = -1;
volatile int32_t t191 = -14;
uint64_t x781 = 205614047LLU;
uint64_t x783 = UINT64_MAX;
uint32_t x788 = UINT32_MAX;
uint64_t x798 = 14077713349LLU;
int32_t x807 = -1;


void f0(void) {
    	int8_t x1 = INT8_MAX;
	int8_t x3 = -32;
	volatile int32_t x4 = INT32_MAX;
	static volatile int32_t t0 = -160965;

    t0 = (x1<=(x2+(x3>x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x6 = INT8_MAX;
	int8_t x7 = -14;
	volatile int8_t x8 = INT8_MAX;

    t1 = (x5<=(x6+(x7>x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x11 = 3715353LLU;
	int64_t x12 = 7870859LL;
	int32_t t2 = -1895;

    t2 = (x9<=(x10+(x11>x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x14 = INT16_MIN;
	uint16_t x15 = UINT16_MAX;
	uint32_t x16 = 418U;
	static volatile int32_t t3 = 226493471;

    t3 = (x13<=(x14+(x15>x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -2182194330900140552LL;
	volatile uint64_t x18 = 3638870LLU;
	volatile int8_t x19 = 0;
	int64_t x20 = INT64_MAX;
	int32_t t4 = -540083;

    t4 = (x17<=(x18+(x19>x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x21 = 4676U;
	int16_t x22 = -1397;
	static int32_t x24 = -1;
	int32_t t5 = -1159;

    t5 = (x21<=(x22+(x23>x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -562;
	int16_t x26 = -1;
	int32_t t6 = 23553;

    t6 = (x25<=(x26+(x27>x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x29 = -9760313072LL;
	int16_t x30 = -1;
	int32_t x32 = INT32_MIN;
	volatile int32_t t7 = -1666728;

    t7 = (x29<=(x30+(x31>x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x34 = 290U;
	static int32_t x36 = -13866051;
	int32_t t8 = 543130082;

    t8 = (x33<=(x34+(x35>x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x37 = 170525454U;
	int8_t x39 = INT8_MIN;
	int32_t x40 = INT32_MAX;
	static int32_t t9 = -1385666;

    t9 = (x37<=(x38+(x39>x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint8_t x41 = 9U;
	static int8_t x42 = INT8_MIN;
	uint8_t x43 = UINT8_MAX;
	volatile int32_t x44 = INT32_MAX;
	volatile int32_t t10 = -46;

    t10 = (x41<=(x42+(x43>x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x45 = INT16_MIN;
	uint64_t x46 = 634205022378890LLU;
	volatile int16_t x47 = INT16_MIN;
	int16_t x48 = INT16_MIN;
	static volatile int32_t t11 = -108254354;

    t11 = (x45<=(x46+(x47>x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = -1;
	volatile int32_t x51 = INT32_MIN;
	int16_t x52 = 594;
	int32_t t12 = -103363;

    t12 = (x49<=(x50+(x51>x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 389U;
	int32_t x54 = 3493;
	uint64_t x55 = UINT64_MAX;
	int16_t x56 = 1;
	static int32_t t13 = 52021;

    t13 = (x53<=(x54+(x55>x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = -139;
	int8_t x58 = 1;
	uint32_t x59 = 92973887U;
	int32_t x60 = -1;
	volatile int32_t t14 = -17;

    t14 = (x57<=(x58+(x59>x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x62 = INT32_MIN;
	int16_t x63 = INT16_MIN;
	volatile uint16_t x64 = UINT16_MAX;
	int32_t t15 = 0;

    t15 = (x61<=(x62+(x63>x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x65 = INT16_MIN;
	int16_t x66 = INT16_MIN;
	volatile int8_t x68 = INT8_MIN;
	int32_t t16 = -8;

    t16 = (x65<=(x66+(x67>x68)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x70 = INT64_MIN;
	static uint16_t x71 = 5U;
	volatile int32_t t17 = -213896720;

    t17 = (x69<=(x70+(x71>x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = 625;
	int32_t x74 = INT32_MAX;
	int8_t x75 = 0;
	volatile int8_t x76 = INT8_MAX;
	int32_t t18 = 6442;

    t18 = (x73<=(x74+(x75>x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x79 = 120U;
	static int8_t x80 = INT8_MAX;

    t19 = (x77<=(x78+(x79>x80)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x81 = UINT64_MAX;
	volatile uint16_t x82 = 271U;
	volatile int32_t x83 = -1;
	static int64_t x84 = -1LL;
	static volatile int32_t t20 = -102;

    t20 = (x81<=(x82+(x83>x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x85 = 5251210916000045747LLU;
	uint16_t x86 = 96U;
	volatile int32_t t21 = -183;

    t21 = (x85<=(x86+(x87>x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = -15;
	volatile uint32_t x90 = 307223956U;
	int64_t x91 = INT64_MIN;
	static int32_t x92 = 83985;
	volatile int32_t t22 = -30412;

    t22 = (x89<=(x90+(x91>x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = 0;
	int8_t x94 = INT8_MIN;
	int8_t x95 = INT8_MAX;
	int64_t x96 = -20LL;
	volatile int32_t t23 = -3280;

    t23 = (x93<=(x94+(x95>x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x97 = 869991U;
	volatile int16_t x99 = INT16_MIN;
	int32_t t24 = 3;

    t24 = (x97<=(x98+(x99>x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x102 = 14;
	volatile uint32_t x103 = 0U;

    t25 = (x101<=(x102+(x103>x104)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x106 = 110432LL;
	int16_t x107 = INT16_MAX;
	volatile int32_t x108 = INT32_MIN;
	int32_t t26 = 1;

    t26 = (x105<=(x106+(x107>x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MIN;
	static int32_t x110 = -1;
	uint8_t x111 = UINT8_MAX;
	int8_t x112 = INT8_MIN;

    t27 = (x109<=(x110+(x111>x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x113 = INT64_MAX;
	volatile int32_t x115 = INT32_MIN;
	int32_t x116 = -1;
	int32_t t28 = -30191;

    t28 = (x113<=(x114+(x115>x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x117 = 438U;
	int32_t x118 = -46608989;
	volatile int8_t x119 = INT8_MIN;
	int64_t x120 = 803269324561964720LL;

    t29 = (x117<=(x118+(x119>x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x121 = UINT64_MAX;
	int32_t x122 = -8;
	int32_t x123 = -1;
	volatile int32_t t30 = -13;

    t30 = (x121<=(x122+(x123>x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 0U;
	int64_t x126 = INT64_MIN;
	volatile uint16_t x127 = 364U;
	volatile int32_t x128 = INT32_MAX;

    t31 = (x125<=(x126+(x127>x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x130 = INT16_MIN;
	uint16_t x131 = 5383U;
	uint16_t x132 = 36U;
	int32_t t32 = 59715222;

    t32 = (x129<=(x130+(x131>x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x134 = 22U;
	int64_t x135 = INT64_MIN;
	uint32_t x136 = 3U;
	volatile int32_t t33 = 591452;

    t33 = (x133<=(x134+(x135>x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = INT32_MAX;
	volatile int16_t x138 = -1;
	static int16_t x139 = INT16_MAX;
	int32_t t34 = 2705;

    t34 = (x137<=(x138+(x139>x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x141 = -1;
	uint64_t x143 = 103887730LLU;
	int16_t x144 = INT16_MAX;
	static volatile int32_t t35 = -342;

    t35 = (x141<=(x142+(x143>x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint32_t x145 = UINT32_MAX;
	volatile uint64_t x146 = UINT64_MAX;
	volatile uint8_t x148 = 1U;
	int32_t t36 = 1030;

    t36 = (x145<=(x146+(x147>x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x149 = INT32_MAX;
	uint64_t x152 = 2521LLU;
	int32_t t37 = -201392095;

    t37 = (x149<=(x150+(x151>x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x153 = INT16_MIN;
	uint16_t x154 = 19004U;
	uint32_t x155 = 3418U;
	static int64_t x156 = INT64_MAX;

    t38 = (x153<=(x154+(x155>x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x159 = -1;
	uint32_t x160 = 784525163U;

    t39 = (x157<=(x158+(x159>x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x161 = -1086574118805313543LL;
	int8_t x163 = INT8_MIN;
	uint16_t x164 = 355U;
	static volatile int32_t t40 = -112;

    t40 = (x161<=(x162+(x163>x164)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = INT32_MIN;
	static uint64_t x166 = 7595141791528LLU;
	int32_t x168 = INT32_MIN;

    t41 = (x165<=(x166+(x167>x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int64_t x169 = INT64_MIN;
	int8_t x170 = INT8_MAX;
	volatile uint16_t x171 = 5890U;
	int32_t t42 = -2251;

    t42 = (x169<=(x170+(x171>x172)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = INT32_MIN;
	static int16_t x174 = INT16_MIN;
	int64_t x175 = -113815148LL;
	static int32_t t43 = 1;

    t43 = (x173<=(x174+(x175>x176)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = INT8_MAX;
	uint32_t x178 = 1U;
	static int64_t x179 = -2568602953779139365LL;
	int16_t x180 = -1;
	int32_t t44 = 121798321;

    t44 = (x177<=(x178+(x179>x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x182 = -1LL;
	volatile uint32_t x183 = UINT32_MAX;
	static int64_t x184 = -1LL;
	static int32_t t45 = 95275294;

    t45 = (x181<=(x182+(x183>x184)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x186 = INT16_MIN;
	volatile int64_t x187 = 1279148321652460541LL;
	volatile int32_t x188 = -58949;
	volatile int32_t t46 = -2436417;

    t46 = (x185<=(x186+(x187>x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x189 = -2;
	static int16_t x190 = INT16_MAX;
	uint16_t x192 = UINT16_MAX;

    t47 = (x189<=(x190+(x191>x192)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x194 = 116U;
	static uint8_t x196 = 85U;
	int32_t t48 = 9201;

    t48 = (x193<=(x194+(x195>x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x198 = -110;
	int8_t x199 = 3;
	static int64_t x200 = -1LL;
	int32_t t49 = -2385419;

    t49 = (x197<=(x198+(x199>x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = INT8_MIN;
	uint32_t x202 = UINT32_MAX;
	uint32_t x204 = UINT32_MAX;
	volatile int32_t t50 = -5256650;

    t50 = (x201<=(x202+(x203>x204)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x206 = -3913032226812941LL;
	int8_t x207 = INT8_MIN;
	uint16_t x208 = UINT16_MAX;
	static volatile int32_t t51 = -51376;

    t51 = (x205<=(x206+(x207>x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x212 = -1944;
	int32_t t52 = 788756453;

    t52 = (x209<=(x210+(x211>x212)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x214 = INT8_MAX;
	volatile int16_t x215 = -1;
	static int64_t x216 = -5657LL;
	volatile int32_t t53 = 5246312;

    t53 = (x213<=(x214+(x215>x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = INT16_MIN;
	int16_t x218 = 9601;
	int32_t x219 = INT32_MIN;
	int16_t x220 = INT16_MIN;

    t54 = (x217<=(x218+(x219>x220)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x223 = -1;
	volatile int32_t t55 = -2815753;

    t55 = (x221<=(x222+(x223>x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x225 = INT32_MIN;
	uint64_t x227 = UINT64_MAX;
	volatile uint16_t x228 = UINT16_MAX;

    t56 = (x225<=(x226+(x227>x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = INT8_MAX;
	int8_t x230 = INT8_MIN;
	static volatile int64_t x231 = -25151LL;
	int8_t x232 = INT8_MAX;

    t57 = (x229<=(x230+(x231>x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = 546;
	static int8_t x234 = INT8_MAX;
	int64_t x235 = 4LL;
	static int16_t x236 = INT16_MIN;
	static volatile int32_t t58 = -13;

    t58 = (x233<=(x234+(x235>x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x237 = UINT32_MAX;
	int32_t x239 = -66190266;
	static uint32_t x240 = UINT32_MAX;
	static int32_t t59 = 1;

    t59 = (x237<=(x238+(x239>x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = INT32_MIN;
	int8_t x243 = 0;

    t60 = (x241<=(x242+(x243>x244)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x249 = -1LL;
	uint32_t x250 = 84U;
	int16_t x251 = INT16_MAX;
	volatile int32_t t61 = -3839;

    t61 = (x249<=(x250+(x251>x252)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x253 = UINT16_MAX;
	volatile uint8_t x254 = 7U;
	int8_t x256 = INT8_MIN;
	volatile int32_t t62 = 14302120;

    t62 = (x253<=(x254+(x255>x256)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x258 = UINT16_MAX;
	volatile int8_t x259 = -1;
	int8_t x260 = 1;
	static volatile int32_t t63 = 1;

    t63 = (x257<=(x258+(x259>x260)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x261 = -1;
	int32_t x262 = INT32_MIN;
	static int32_t x263 = INT32_MIN;
	int32_t t64 = 85973;

    t64 = (x261<=(x262+(x263>x264)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x265 = INT8_MIN;
	int32_t x266 = -126874710;
	static int32_t x267 = INT32_MAX;
	uint32_t x268 = UINT32_MAX;
	int32_t t65 = -3721238;

    t65 = (x265<=(x266+(x267>x268)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x269 = INT16_MIN;
	int8_t x271 = 1;
	uint64_t x272 = 2224366037721193LLU;
	int32_t t66 = -3;

    t66 = (x269<=(x270+(x271>x272)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x274 = INT16_MAX;
	int32_t t67 = 66938;

    t67 = (x273<=(x274+(x275>x276)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x277 = -46;
	uint64_t x278 = 5LLU;
	int64_t x279 = -1LL;
	uint16_t x280 = 3718U;
	int32_t t68 = -127041111;

    t68 = (x277<=(x278+(x279>x280)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x281 = INT32_MIN;
	static int32_t x282 = INT32_MAX;
	uint16_t x283 = 5U;
	volatile uint16_t x284 = UINT16_MAX;

    t69 = (x281<=(x282+(x283>x284)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint8_t x286 = UINT8_MAX;
	int8_t x288 = 1;

    t70 = (x285<=(x286+(x287>x288)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x289 = 56290919U;
	int8_t x290 = INT8_MIN;
	static uint64_t x291 = 3595791LLU;
	uint32_t x292 = 726U;
	int32_t t71 = 0;

    t71 = (x289<=(x290+(x291>x292)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x295 = 420;
	int32_t x296 = -1;
	int32_t t72 = 380;

    t72 = (x293<=(x294+(x295>x296)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x297 = INT64_MIN;
	static uint64_t x298 = UINT64_MAX;
	int64_t x299 = -1LL;
	volatile int8_t x300 = INT8_MIN;
	volatile int32_t t73 = 44495;

    t73 = (x297<=(x298+(x299>x300)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x301 = 35;
	volatile int32_t x302 = INT32_MIN;
	uint8_t x303 = UINT8_MAX;
	volatile int64_t x304 = INT64_MAX;
	int32_t t74 = -1006;

    t74 = (x301<=(x302+(x303>x304)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int32_t x305 = 95326;
	static volatile int8_t x306 = INT8_MAX;
	int64_t x307 = INT64_MAX;
	static uint64_t x308 = UINT64_MAX;

    t75 = (x305<=(x306+(x307>x308)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x309 = INT16_MAX;
	int8_t x310 = -1;
	volatile int64_t x311 = -1LL;
	volatile int32_t t76 = -3;

    t76 = (x309<=(x310+(x311>x312)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x313 = 244032737814996793LLU;
	int8_t x314 = INT8_MIN;
	static int16_t x315 = INT16_MIN;
	int64_t x316 = 347211LL;
	int32_t t77 = 3;

    t77 = (x313<=(x314+(x315>x316)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x317 = -31475220272LL;
	uint8_t x318 = 118U;
	static uint8_t x319 = UINT8_MAX;
	int8_t x320 = 2;
	int32_t t78 = -31;

    t78 = (x317<=(x318+(x319>x320)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x321 = 108U;
	int64_t x322 = INT64_MIN;
	uint32_t x324 = 283403484U;
	int32_t t79 = 119176;

    t79 = (x321<=(x322+(x323>x324)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x325 = -1;
	int16_t x326 = 171;
	static volatile int32_t x327 = INT32_MAX;
	int64_t x328 = -355809283LL;
	static int32_t t80 = -7;

    t80 = (x325<=(x326+(x327>x328)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x329 = -1338134;
	int8_t x330 = INT8_MIN;
	volatile uint8_t x332 = UINT8_MAX;
	volatile int32_t t81 = 1;

    t81 = (x329<=(x330+(x331>x332)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x333 = 38168273U;
	int8_t x334 = INT8_MIN;
	volatile int64_t x335 = -768782024136798894LL;
	volatile int32_t t82 = -5;

    t82 = (x333<=(x334+(x335>x336)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x337 = 0U;
	int8_t x338 = INT8_MIN;
	int64_t x339 = -25527741511587084LL;
	static int64_t x340 = 1437182382LL;
	int32_t t83 = 418821847;

    t83 = (x337<=(x338+(x339>x340)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint64_t x342 = UINT64_MAX;
	int8_t x343 = INT8_MAX;
	int64_t x344 = -1LL;
	int32_t t84 = 535064925;

    t84 = (x341<=(x342+(x343>x344)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x345 = 10U;
	uint8_t x346 = 12U;
	int8_t x347 = INT8_MIN;
	int32_t x348 = INT32_MAX;
	int32_t t85 = 7131952;

    t85 = (x345<=(x346+(x347>x348)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x350 = INT64_MIN;
	int64_t x351 = -1LL;
	static uint8_t x352 = 21U;
	int32_t t86 = -231346890;

    t86 = (x349<=(x350+(x351>x352)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x355 = 466252;
	int32_t x356 = INT32_MIN;
	volatile int32_t t87 = 0;

    t87 = (x353<=(x354+(x355>x356)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x357 = 6;
	volatile int64_t x358 = 1LL;
	static uint64_t x359 = UINT64_MAX;
	int64_t x360 = -5606469LL;
	int32_t t88 = -9893;

    t88 = (x357<=(x358+(x359>x360)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x362 = 0;
	uint32_t x363 = UINT32_MAX;
	volatile int32_t t89 = -7787;

    t89 = (x361<=(x362+(x363>x364)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x365 = INT32_MIN;
	volatile int8_t x366 = INT8_MAX;
	uint64_t x368 = UINT64_MAX;
	static volatile int32_t t90 = 254282447;

    t90 = (x365<=(x366+(x367>x368)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x369 = INT32_MAX;
	uint16_t x370 = 0U;
	volatile int16_t x371 = INT16_MAX;
	volatile int64_t x372 = -2214460LL;
	int32_t t91 = 55;

    t91 = (x369<=(x370+(x371>x372)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x373 = -120073435;
	int32_t x374 = 23624;
	static int8_t x375 = -1;

    t92 = (x373<=(x374+(x375>x376)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x377 = UINT64_MAX;
	int64_t x378 = INT64_MIN;
	int64_t x379 = -1083220895119LL;
	static int32_t t93 = -63115576;

    t93 = (x377<=(x378+(x379>x380)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x381 = -1;
	int8_t x382 = -11;
	uint8_t x383 = UINT8_MAX;
	int32_t t94 = -450353688;

    t94 = (x381<=(x382+(x383>x384)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x385 = UINT8_MAX;
	uint64_t x386 = UINT64_MAX;
	int16_t x387 = INT16_MIN;
	volatile int8_t x388 = -1;

    t95 = (x385<=(x386+(x387>x388)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint8_t x389 = 2U;
	uint16_t x390 = UINT16_MAX;
	static int8_t x391 = INT8_MIN;
	int64_t x392 = -1LL;
	volatile int32_t t96 = -24;

    t96 = (x389<=(x390+(x391>x392)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x393 = -1LL;
	int8_t x395 = -1;
	int16_t x396 = INT16_MAX;

    t97 = (x393<=(x394+(x395>x396)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x397 = INT32_MIN;
	int16_t x399 = -1;
	int16_t x400 = -1;
	int32_t t98 = 575;

    t98 = (x397<=(x398+(x399>x400)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x401 = -7059762;
	static volatile uint32_t x402 = 201064U;
	int8_t x403 = -1;
	static volatile int32_t x404 = INT32_MIN;
	static volatile int32_t t99 = 5532795;

    t99 = (x401<=(x402+(x403>x404)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x405 = UINT16_MAX;
	int64_t x406 = -496940013177LL;
	int64_t x407 = -1LL;
	uint32_t x408 = 1378838225U;
	volatile int32_t t100 = -3;

    t100 = (x405<=(x406+(x407>x408)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x409 = -11323285;
	static int8_t x410 = -1;
	volatile int64_t x411 = INT64_MIN;
	int64_t x412 = -1LL;
	volatile int32_t t101 = 442;

    t101 = (x409<=(x410+(x411>x412)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x413 = INT16_MIN;
	volatile int16_t x414 = INT16_MIN;
	static int8_t x415 = 1;
	int16_t x416 = 198;
	int32_t t102 = -59266;

    t102 = (x413<=(x414+(x415>x416)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x417 = 1030028LL;
	static int32_t x418 = INT32_MIN;
	uint32_t x419 = 0U;
	int16_t x420 = -1;
	static int32_t t103 = 208;

    t103 = (x417<=(x418+(x419>x420)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x421 = INT16_MIN;
	int32_t x422 = 149;
	volatile uint64_t x423 = 366477327093LLU;
	volatile int16_t x424 = INT16_MIN;

    t104 = (x421<=(x422+(x423>x424)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x425 = INT16_MIN;
	int16_t x428 = INT16_MIN;
	int32_t t105 = 237813437;

    t105 = (x425<=(x426+(x427>x428)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x430 = 1;
	uint8_t x431 = 0U;
	int32_t t106 = 1443751;

    t106 = (x429<=(x430+(x431>x432)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x433 = 38U;
	int64_t x434 = -1LL;
	static int64_t x435 = -2256070LL;
	volatile int32_t t107 = -11;

    t107 = (x433<=(x434+(x435>x436)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x437 = INT64_MIN;
	int8_t x438 = -1;
	uint64_t x439 = 67LLU;
	int64_t x440 = INT64_MIN;
	volatile int32_t t108 = 26222;

    t108 = (x437<=(x438+(x439>x440)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x441 = 51LL;
	int16_t x442 = INT16_MAX;
	int32_t x443 = INT32_MIN;
	int32_t t109 = 701;

    t109 = (x441<=(x442+(x443>x444)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x445 = INT64_MAX;
	static uint16_t x448 = 2U;
	int32_t t110 = -168203;

    t110 = (x445<=(x446+(x447>x448)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x449 = 5753LL;
	uint8_t x450 = 2U;
	int32_t t111 = 21941360;

    t111 = (x449<=(x450+(x451>x452)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x453 = 0;
	volatile int64_t x454 = INT64_MIN;
	uint64_t x455 = UINT64_MAX;
	static uint8_t x456 = 28U;
	volatile int32_t t112 = 1;

    t112 = (x453<=(x454+(x455>x456)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x457 = -350LL;
	static volatile int64_t x458 = INT64_MAX;
	static uint16_t x459 = 762U;
	volatile uint32_t x460 = 273205240U;

    t113 = (x457<=(x458+(x459>x460)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x461 = 5511U;
	uint64_t x462 = 111082805352LLU;
	uint8_t x463 = UINT8_MAX;
	int8_t x464 = -1;

    t114 = (x461<=(x462+(x463>x464)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x465 = -1;
	int16_t x466 = INT16_MAX;
	int64_t x467 = 1257878596821899556LL;
	int8_t x468 = -5;
	int32_t t115 = 0;

    t115 = (x465<=(x466+(x467>x468)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x469 = -1LL;
	int16_t x470 = INT16_MIN;
	uint32_t x471 = UINT32_MAX;
	int32_t t116 = -32178752;

    t116 = (x469<=(x470+(x471>x472)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x473 = 222651123;
	int8_t x474 = -1;
	uint16_t x475 = UINT16_MAX;
	uint32_t x476 = 297425448U;
	volatile int32_t t117 = -111175;

    t117 = (x473<=(x474+(x475>x476)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x477 = -4;
	volatile uint8_t x478 = 7U;
	volatile int64_t x479 = -1LL;
	int64_t x480 = INT64_MAX;
	volatile int32_t t118 = -937043966;

    t118 = (x477<=(x478+(x479>x480)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x481 = 29U;
	static int16_t x482 = 6313;
	static int32_t x483 = -117573;
	int32_t t119 = -67564;

    t119 = (x481<=(x482+(x483>x484)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x485 = INT8_MIN;
	int32_t x486 = -42220311;
	uint8_t x487 = UINT8_MAX;
	uint32_t x488 = 596U;
	int32_t t120 = -117;

    t120 = (x485<=(x486+(x487>x488)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x489 = INT8_MIN;
	static uint64_t x490 = 15LLU;
	int8_t x491 = INT8_MIN;
	uint64_t x492 = 511746LLU;
	int32_t t121 = 6812552;

    t121 = (x489<=(x490+(x491>x492)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x494 = INT8_MAX;
	int8_t x495 = 0;
	int32_t t122 = 3;

    t122 = (x493<=(x494+(x495>x496)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x497 = -13195;
	uint64_t x498 = 97654LLU;
	uint32_t x499 = 742890U;
	int16_t x500 = INT16_MAX;
	volatile int32_t t123 = 357;

    t123 = (x497<=(x498+(x499>x500)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint8_t x503 = 74U;
	int16_t x504 = INT16_MIN;
	int32_t t124 = -548066;

    t124 = (x501<=(x502+(x503>x504)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x505 = UINT8_MAX;
	volatile int64_t x506 = 26277077048504975LL;
	int8_t x507 = INT8_MIN;
	int32_t t125 = 111534;

    t125 = (x505<=(x506+(x507>x508)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x509 = 258;
	int16_t x510 = -1;
	int8_t x511 = -6;
	volatile int16_t x512 = INT16_MIN;
	static int32_t t126 = 114;

    t126 = (x509<=(x510+(x511>x512)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x513 = -24;
	volatile uint8_t x514 = UINT8_MAX;
	uint8_t x516 = UINT8_MAX;
	int32_t t127 = -1;

    t127 = (x513<=(x514+(x515>x516)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x517 = -1LL;
	static int32_t x518 = -51283171;
	int32_t x519 = 58918;
	volatile int32_t t128 = 7761;

    t128 = (x517<=(x518+(x519>x520)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x521 = INT32_MAX;
	uint16_t x522 = 60U;
	volatile int8_t x523 = INT8_MAX;
	static int32_t x524 = INT32_MIN;
	volatile int32_t t129 = 240862685;

    t129 = (x521<=(x522+(x523>x524)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x525 = 4601309LLU;
	int16_t x526 = -1;
	int32_t x527 = INT32_MIN;
	static int32_t t130 = 0;

    t130 = (x525<=(x526+(x527>x528)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x529 = INT16_MIN;
	int32_t x530 = INT32_MAX;
	int32_t t131 = 257013;

    t131 = (x529<=(x530+(x531>x532)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint16_t x535 = 59U;
	static int64_t x536 = -9555440959LL;
	int32_t t132 = 3268939;

    t132 = (x533<=(x534+(x535>x536)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x537 = 1403;
	volatile uint8_t x538 = 116U;
	static volatile int8_t x539 = INT8_MIN;
	uint8_t x540 = UINT8_MAX;
	static volatile int32_t t133 = -122;

    t133 = (x537<=(x538+(x539>x540)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint32_t x541 = 511771474U;
	uint16_t x542 = 7U;
	uint64_t x544 = 131618563247938LLU;
	int32_t t134 = -137262742;

    t134 = (x541<=(x542+(x543>x544)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x547 = 213857825U;
	static int8_t x548 = INT8_MAX;
	volatile int32_t t135 = 38668585;

    t135 = (x545<=(x546+(x547>x548)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x549 = -1;
	static int64_t x550 = INT64_MIN;
	uint32_t x551 = UINT32_MAX;
	uint8_t x552 = UINT8_MAX;

    t136 = (x549<=(x550+(x551>x552)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x553 = INT16_MAX;
	int16_t x555 = -722;
	int8_t x556 = INT8_MIN;
	volatile int32_t t137 = -840295685;

    t137 = (x553<=(x554+(x555>x556)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x557 = 2731U;
	volatile int16_t x558 = INT16_MIN;
	int32_t t138 = -1079531;

    t138 = (x557<=(x558+(x559>x560)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x561 = 107262717LL;
	static int8_t x562 = INT8_MIN;
	int8_t x563 = -1;
	volatile int64_t x564 = -114504707LL;

    t139 = (x561<=(x562+(x563>x564)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x569 = INT8_MIN;
	int8_t x570 = INT8_MIN;
	int8_t x571 = INT8_MAX;
	uint8_t x572 = 30U;

    t140 = (x569<=(x570+(x571>x572)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x573 = UINT64_MAX;
	static int8_t x576 = INT8_MIN;
	static volatile int32_t t141 = 0;

    t141 = (x573<=(x574+(x575>x576)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x578 = 115091357U;
	volatile int8_t x579 = INT8_MAX;
	volatile int32_t t142 = 4630;

    t142 = (x577<=(x578+(x579>x580)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int16_t x581 = 3;
	volatile int8_t x584 = INT8_MAX;
	static int32_t t143 = 213334;

    t143 = (x581<=(x582+(x583>x584)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x585 = INT32_MIN;
	int8_t x587 = INT8_MAX;
	static int64_t x588 = INT64_MIN;
	int32_t t144 = 11;

    t144 = (x585<=(x586+(x587>x588)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x590 = INT32_MIN;
	uint32_t x591 = 837014172U;
	uint8_t x592 = 116U;
	volatile int32_t t145 = 4775475;

    t145 = (x589<=(x590+(x591>x592)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x593 = INT16_MAX;
	uint64_t x594 = 0LLU;
	int16_t x595 = INT16_MIN;
	int64_t x596 = INT64_MIN;
	volatile int32_t t146 = -523024453;

    t146 = (x593<=(x594+(x595>x596)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x597 = UINT8_MAX;
	int8_t x598 = 20;
	volatile int32_t x599 = INT32_MIN;
	static int32_t x600 = -1509;
	volatile int32_t t147 = 28316978;

    t147 = (x597<=(x598+(x599>x600)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x601 = 8U;
	volatile int32_t x602 = 261852929;
	static volatile int16_t x603 = 1;
	int32_t x604 = INT32_MIN;
	static int32_t t148 = -29016497;

    t148 = (x601<=(x602+(x603>x604)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int32_t x606 = 1;
	int32_t x607 = INT32_MIN;
	uint32_t x608 = 78028U;
	int32_t t149 = -281;

    t149 = (x605<=(x606+(x607>x608)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x609 = 15U;
	volatile int8_t x610 = INT8_MAX;
	int64_t x611 = 171LL;
	int32_t x612 = INT32_MAX;
	volatile int32_t t150 = 18774787;

    t150 = (x609<=(x610+(x611>x612)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x613 = 15430600U;
	static int64_t x615 = INT64_MIN;
	int32_t x616 = 101152;

    t151 = (x613<=(x614+(x615>x616)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x617 = INT64_MIN;
	int32_t x618 = INT32_MIN;
	static uint64_t x619 = 5LLU;
	int64_t x620 = 293002627LL;
	int32_t t152 = -1;

    t152 = (x617<=(x618+(x619>x620)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x622 = 467;
	static int8_t x623 = INT8_MIN;
	volatile int16_t x624 = INT16_MAX;
	int32_t t153 = 7;

    t153 = (x621<=(x622+(x623>x624)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x626 = 37741028854246628LLU;
	uint16_t x627 = UINT16_MAX;
	int8_t x628 = INT8_MIN;

    t154 = (x625<=(x626+(x627>x628)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x630 = -1;
	int32_t t155 = 53842;

    t155 = (x629<=(x630+(x631>x632)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x633 = 3U;
	volatile uint32_t x634 = UINT32_MAX;
	int32_t x635 = -168880090;
	static volatile int32_t x636 = INT32_MAX;
	int32_t t156 = 7946;

    t156 = (x633<=(x634+(x635>x636)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x637 = 497113915U;
	uint32_t x638 = 1U;
	static int64_t x639 = INT64_MIN;
	int32_t t157 = -10141;

    t157 = (x637<=(x638+(x639>x640)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x641 = 409958452277909125LL;
	int8_t x642 = INT8_MIN;
	volatile int8_t x643 = -1;
	uint8_t x644 = 16U;
	int32_t t158 = 1786;

    t158 = (x641<=(x642+(x643>x644)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x645 = 46U;
	uint16_t x646 = UINT16_MAX;
	uint64_t x647 = 1971LLU;
	volatile uint64_t x648 = 57708489202LLU;

    t159 = (x645<=(x646+(x647>x648)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x649 = 5039;
	volatile int16_t x650 = INT16_MAX;
	int8_t x651 = INT8_MIN;
	static int16_t x652 = INT16_MIN;
	int32_t t160 = 3658;

    t160 = (x649<=(x650+(x651>x652)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x653 = UINT32_MAX;
	volatile uint8_t x654 = 2U;
	int16_t x655 = -336;
	uint8_t x656 = 12U;

    t161 = (x653<=(x654+(x655>x656)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint16_t x657 = 1U;
	int8_t x658 = INT8_MIN;
	uint32_t x659 = UINT32_MAX;
	uint16_t x660 = 11U;
	int32_t t162 = -6153;

    t162 = (x657<=(x658+(x659>x660)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x661 = 53;
	uint16_t x662 = UINT16_MAX;
	int8_t x663 = INT8_MIN;
	static int32_t t163 = 465889;

    t163 = (x661<=(x662+(x663>x664)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x666 = -1;
	int32_t x668 = 46382377;
	volatile int32_t t164 = -253;

    t164 = (x665<=(x666+(x667>x668)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x669 = INT16_MIN;
	uint32_t x670 = 12U;
	int32_t x671 = INT32_MIN;
	int64_t x672 = INT64_MIN;
	volatile int32_t t165 = -37860;

    t165 = (x669<=(x670+(x671>x672)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x673 = -17;
	int64_t x674 = INT64_MIN;
	int32_t x675 = -228672;
	int64_t x676 = 7832281LL;

    t166 = (x673<=(x674+(x675>x676)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x677 = INT8_MIN;
	int16_t x678 = -4287;
	volatile int16_t x679 = INT16_MIN;
	static int32_t x680 = -1;
	int32_t t167 = 158;

    t167 = (x677<=(x678+(x679>x680)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x682 = -842;
	int16_t x683 = INT16_MIN;
	uint32_t x684 = UINT32_MAX;
	volatile int32_t t168 = -969256;

    t168 = (x681<=(x682+(x683>x684)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x685 = 88123900750098LLU;
	int8_t x686 = INT8_MAX;
	static int32_t t169 = 6879742;

    t169 = (x685<=(x686+(x687>x688)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint64_t x689 = 222389LLU;
	int16_t x690 = INT16_MIN;
	int16_t x691 = -1;
	volatile uint8_t x692 = UINT8_MAX;
	volatile int32_t t170 = 250334530;

    t170 = (x689<=(x690+(x691>x692)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x693 = INT16_MIN;
	static volatile uint16_t x694 = 27U;
	volatile uint8_t x695 = UINT8_MAX;
	uint64_t x696 = UINT64_MAX;

    t171 = (x693<=(x694+(x695>x696)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x698 = INT16_MAX;
	static int8_t x699 = INT8_MIN;
	static int32_t x700 = -19944;

    t172 = (x697<=(x698+(x699>x700)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x705 = INT8_MIN;
	volatile int64_t x706 = -30752131106170659LL;
	int8_t x707 = 56;
	int8_t x708 = INT8_MAX;
	static int32_t t173 = 233960209;

    t173 = (x705<=(x706+(x707>x708)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x711 = 14;
	volatile int32_t t174 = -11;

    t174 = (x709<=(x710+(x711>x712)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x713 = UINT16_MAX;
	volatile uint16_t x714 = 7U;
	int32_t x715 = 9448;
	int32_t t175 = 28;

    t175 = (x713<=(x714+(x715>x716)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x718 = INT64_MAX;
	static int32_t x719 = -1;
	int16_t x720 = 1;
	int32_t t176 = 19;

    t176 = (x717<=(x718+(x719>x720)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x721 = INT32_MAX;
	int16_t x722 = -1;
	uint64_t x724 = 18160495730LLU;
	int32_t t177 = -704049;

    t177 = (x721<=(x722+(x723>x724)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x725 = 6806LLU;
	uint16_t x726 = UINT16_MAX;
	static int32_t x727 = -2034;
	volatile int32_t t178 = 0;

    t178 = (x725<=(x726+(x727>x728)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x729 = 131496425478LLU;
	volatile uint16_t x730 = 28U;
	static volatile int64_t x731 = -22855LL;

    t179 = (x729<=(x730+(x731>x732)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x733 = 2;
	uint32_t x734 = 839U;
	volatile int32_t x735 = INT32_MAX;
	uint16_t x736 = UINT16_MAX;
	volatile int32_t t180 = 2;

    t180 = (x733<=(x734+(x735>x736)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x738 = 45U;
	int64_t x739 = INT64_MIN;
	uint32_t x740 = UINT32_MAX;
	int32_t t181 = 2649009;

    t181 = (x737<=(x738+(x739>x740)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x741 = 4042171484210244452LLU;
	int8_t x742 = INT8_MAX;
	static volatile uint32_t x743 = 56056U;
	static int8_t x744 = INT8_MAX;
	volatile int32_t t182 = 7734;

    t182 = (x741<=(x742+(x743>x744)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x745 = UINT64_MAX;
	int8_t x746 = -1;
	static volatile uint32_t x747 = 6510077U;
	int32_t x748 = INT32_MAX;
	volatile int32_t t183 = -954411452;

    t183 = (x745<=(x746+(x747>x748)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int64_t x750 = -6621LL;
	int8_t x751 = -1;
	uint16_t x752 = 843U;
	volatile int32_t t184 = 1;

    t184 = (x749<=(x750+(x751>x752)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x754 = UINT64_MAX;
	int64_t x756 = INT64_MIN;
	volatile int32_t t185 = -376742;

    t185 = (x753<=(x754+(x755>x756)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x757 = 32332U;
	uint64_t x758 = UINT64_MAX;
	int16_t x759 = -1;
	int16_t x760 = -94;
	volatile int32_t t186 = -160172946;

    t186 = (x757<=(x758+(x759>x760)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x761 = 4723963949313568LLU;
	static int8_t x762 = INT8_MIN;
	int32_t x763 = INT32_MIN;
	static int64_t x764 = INT64_MIN;
	int32_t t187 = 70;

    t187 = (x761<=(x762+(x763>x764)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x765 = UINT64_MAX;
	uint32_t x766 = 34U;
	uint64_t x768 = UINT64_MAX;
	static volatile int32_t t188 = 5;

    t188 = (x765<=(x766+(x767>x768)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x769 = 122525U;
	int16_t x770 = -4;
	uint64_t x771 = 3511287LLU;
	int8_t x772 = INT8_MAX;
	static volatile int32_t t189 = -79;

    t189 = (x769<=(x770+(x771>x772)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x773 = UINT32_MAX;
	int16_t x774 = -102;
	int64_t x775 = INT64_MAX;
	int32_t t190 = -509;

    t190 = (x773<=(x774+(x775>x776)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x778 = INT8_MIN;
	int16_t x779 = -1;
	uint16_t x780 = 238U;

    t191 = (x777<=(x778+(x779>x780)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x782 = UINT8_MAX;
	int32_t x784 = 265;
	static volatile int32_t t192 = 785;

    t192 = (x781<=(x782+(x783>x784)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x785 = INT16_MIN;
	int16_t x786 = INT16_MAX;
	uint8_t x787 = 15U;
	int32_t t193 = -3297;

    t193 = (x785<=(x786+(x787>x788)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x789 = -1LL;
	int16_t x790 = -1;
	int32_t x791 = -211442643;
	static int32_t x792 = INT32_MIN;
	int32_t t194 = 63;

    t194 = (x789<=(x790+(x791>x792)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x793 = INT16_MAX;
	uint32_t x794 = 256497320U;
	volatile int8_t x795 = -21;
	int16_t x796 = INT16_MIN;
	int32_t t195 = 70;

    t195 = (x793<=(x794+(x795>x796)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x797 = UINT32_MAX;
	uint64_t x799 = 673029LLU;
	uint32_t x800 = UINT32_MAX;
	volatile int32_t t196 = -14;

    t196 = (x797<=(x798+(x799>x800)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x801 = 2LLU;
	int16_t x802 = INT16_MIN;
	uint8_t x803 = 1U;
	volatile int32_t x804 = -11026409;
	volatile int32_t t197 = 6;

    t197 = (x801<=(x802+(x803>x804)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x805 = INT16_MIN;
	static uint8_t x806 = 3U;
	int32_t x808 = -28;
	int32_t t198 = -222538;

    t198 = (x805<=(x806+(x807>x808)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x809 = UINT64_MAX;
	uint64_t x810 = UINT64_MAX;
	uint32_t x811 = UINT32_MAX;
	static int32_t x812 = 392239;
	int32_t t199 = 3302;

    t199 = (x809<=(x810+(x811>x812)));

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

