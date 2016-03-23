
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

int64_t x1 = INT64_MIN;
int32_t x3 = INT32_MIN;
int32_t x4 = 364929;
int8_t x10 = INT8_MAX;
int16_t x12 = -1;
uint32_t x16 = UINT32_MAX;
volatile uint32_t t3 = 933U;
int32_t t5 = -2;
uint8_t x36 = UINT8_MAX;
int64_t x42 = INT64_MIN;
int32_t t11 = -312;
int32_t t13 = 385495;
volatile int64_t x61 = INT64_MIN;
int64_t x62 = -63506957LL;
int16_t x70 = INT16_MIN;
volatile int32_t t15 = -1618;
volatile int64_t t16 = 2LL;
int16_t x79 = INT16_MIN;
uint64_t x83 = 33054379LLU;
int32_t x84 = -1;
uint8_t x89 = UINT8_MAX;
static int64_t t20 = -11406840LL;
volatile int8_t x94 = -1;
volatile int64_t t22 = 11902LL;
int64_t x101 = INT64_MIN;
int32_t x108 = -1;
int64_t x113 = -532542752170LL;
static int32_t x116 = INT32_MAX;
volatile int32_t t26 = 614195758;
uint64_t x117 = UINT64_MAX;
uint16_t x125 = 0U;
volatile uint64_t x126 = 1059376285765LLU;
volatile uint64_t t29 = 147060185515LLU;
uint32_t x131 = UINT32_MAX;
static volatile int32_t t30 = 6;
uint8_t x134 = UINT8_MAX;
static uint8_t x135 = 3U;
int16_t x159 = -12;
volatile int16_t x163 = -3;
static volatile int8_t x165 = -1;
static uint32_t x169 = 3U;
uint64_t x171 = UINT64_MAX;
int8_t x173 = INT8_MAX;
int64_t x175 = -355801LL;
volatile uint8_t x176 = 1U;
static int8_t x184 = INT8_MAX;
static volatile int64_t x186 = -3LL;
int64_t x193 = 46115LL;
volatile int32_t x194 = INT32_MIN;
int16_t x195 = INT16_MIN;
volatile int32_t t47 = 59747143;
int32_t t48 = 95801003;
int16_t x218 = INT16_MIN;
int8_t x220 = -1;
int8_t x225 = 3;
static int64_t x226 = INT64_MAX;
static uint32_t x227 = 6450347U;
static int32_t x231 = INT32_MIN;
static uint32_t x233 = UINT32_MAX;
int32_t x237 = INT32_MIN;
uint64_t x247 = 17172547698LLU;
volatile uint8_t x248 = 10U;
uint16_t x249 = UINT16_MAX;
volatile uint8_t x251 = UINT8_MAX;
int64_t x253 = -1LL;
int32_t x256 = INT32_MIN;
int16_t x257 = -7;
int32_t x260 = INT32_MAX;
int32_t x267 = -43;
volatile int32_t t65 = 896547;
static uint8_t x280 = 101U;
volatile int8_t x281 = INT8_MIN;
uint64_t x283 = UINT64_MAX;
int8_t x289 = INT8_MIN;
static int16_t x291 = 15;
volatile uint64_t t69 = 0LLU;
static uint32_t x298 = 1U;
volatile int32_t t70 = 1;
int64_t x304 = INT64_MIN;
uint64_t x314 = UINT64_MAX;
int64_t t74 = 3LL;
volatile int32_t x317 = -1025291832;
uint32_t x318 = 3691076U;
uint64_t x322 = UINT64_MAX;
int8_t x323 = -1;
int32_t x329 = INT32_MIN;
int8_t x330 = -1;
uint64_t x334 = 528910653LLU;
uint32_t t79 = 352553952U;
static uint32_t x342 = 231262U;
static int8_t x348 = INT8_MAX;
volatile int32_t t82 = 353471423;
static int32_t t83 = 253205177;
volatile int64_t t86 = -105140086LL;
int16_t x382 = INT16_MAX;
static volatile int32_t x383 = 336;
volatile uint8_t x386 = 26U;
static int8_t x391 = -1;
int8_t x398 = INT8_MIN;
uint32_t x400 = 100773U;
volatile int32_t x410 = -1;
volatile int32_t x418 = INT32_MIN;
volatile uint32_t x421 = UINT32_MAX;
volatile int32_t t100 = -45;
int32_t x426 = INT32_MIN;
int8_t x427 = INT8_MAX;
int8_t x429 = INT8_MIN;
static uint32_t x437 = UINT32_MAX;
int16_t x439 = 2;
static volatile int32_t t104 = 227;
int32_t x444 = 18882;
int32_t t105 = 58;
uint32_t x465 = UINT32_MAX;
uint16_t x466 = 299U;
int8_t x467 = INT8_MAX;
static uint32_t x469 = 121U;
int16_t x472 = INT16_MIN;
int16_t x474 = -1;
static volatile int32_t t113 = 27565;
uint16_t x479 = 13U;
volatile int32_t t114 = 382803;
int16_t x483 = -16;
volatile uint8_t x484 = 57U;
static int32_t x485 = INT32_MAX;
static int16_t x487 = 5;
static volatile int64_t x495 = INT64_MAX;
volatile int32_t t118 = 3126256;
int16_t x499 = INT16_MIN;
int16_t x503 = 4705;
int32_t x506 = -110117;
int16_t x514 = -2;
uint32_t x515 = 4971U;
uint64_t x517 = 3016622599995LLU;
static int32_t x523 = INT32_MIN;
uint16_t x524 = UINT16_MAX;
static volatile int32_t x526 = 0;
uint32_t x528 = UINT32_MAX;
int64_t x536 = -1657191105272966580LL;
volatile int32_t x546 = -1;
uint8_t x547 = 7U;
uint32_t x558 = UINT32_MAX;
volatile int64_t t133 = -2766938676284424LL;
int16_t x561 = 30;
int16_t x566 = 1859;
int32_t t135 = 8891;
int8_t x574 = 1;
int64_t x581 = INT64_MAX;
int16_t x585 = -1;
volatile uint32_t x588 = 8533U;
int8_t x590 = INT8_MIN;
int32_t x594 = -1;
static int16_t x604 = INT16_MIN;
uint16_t x606 = UINT16_MAX;
uint64_t x610 = 606923LLU;
int16_t x612 = -1;
int32_t t144 = 949605825;
int32_t x617 = INT32_MIN;
volatile int64_t x623 = INT64_MAX;
int64_t x625 = 8001024LL;
int16_t x626 = INT16_MIN;
uint64_t x627 = 20544115LLU;
int32_t x630 = -11313226;
volatile int32_t x631 = 334;
volatile int32_t x633 = -1;
volatile int32_t t151 = 57;
volatile int64_t x642 = INT64_MIN;
int32_t t153 = -32416;
uint8_t x652 = 27U;
volatile int64_t x660 = INT64_MIN;
static volatile int64_t t157 = 39LL;
int32_t t158 = 285218301;
int32_t x674 = -1;
static uint64_t x675 = 6LLU;
volatile int64_t x683 = INT64_MIN;
int32_t x685 = INT32_MIN;
uint32_t x688 = 983U;
volatile int64_t t164 = 655408408818LL;
volatile uint16_t x700 = UINT16_MAX;
int64_t x702 = 7LL;
int32_t x704 = INT32_MAX;
int8_t x710 = 2;
int8_t x712 = 1;
static int32_t t169 = -210958677;
uint64_t x714 = 273748LLU;
static int8_t x715 = -1;
volatile int64_t t170 = -2413279LL;
int16_t x719 = INT16_MIN;
int16_t x727 = INT16_MAX;
int32_t x739 = 880688911;
int16_t x740 = -576;
int32_t t176 = -45093;
uint64_t x748 = UINT64_MAX;
int16_t x749 = -1;
int64_t x755 = INT64_MAX;
uint8_t x762 = 2U;
static int64_t x765 = -1LL;
int16_t x769 = INT16_MIN;
int64_t t186 = -132631798319153LL;
int64_t x781 = 7788486LL;
uint32_t x788 = 2130U;
static int16_t x790 = -1;
int8_t x792 = INT8_MIN;
volatile int16_t x797 = 325;
uint32_t x816 = 2051394U;
int8_t x819 = INT8_MAX;
static int16_t x823 = INT16_MAX;
int8_t x826 = INT8_MIN;


void f0(void) {
    	uint8_t x2 = 84U;
	int32_t t0 = 801513966;

    t0 = ((x1>(x2/x3))&x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	int32_t x6 = 122;
	volatile int16_t x7 = -37;
	volatile int16_t x8 = INT16_MIN;
	int32_t t1 = -2022;

    t1 = ((x5>(x6/x7))&x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = 2209907;
	static uint8_t x11 = 5U;
	static int32_t t2 = 1;

    t2 = ((x9>(x10/x11))&x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 510889489U;
	int16_t x14 = -1;
	uint64_t x15 = 3992846661084LLU;

    t3 = ((x13>(x14/x15))&x16);

    if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = 0U;
	int32_t x18 = INT32_MAX;
	uint16_t x19 = 19003U;
	uint64_t x20 = 86LLU;
	uint64_t t4 = 174LLU;

    t4 = ((x17>(x18/x19))&x20);

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 3U;
	static int32_t x22 = -78772662;
	int64_t x23 = INT64_MAX;
	int16_t x24 = -1;

    t5 = ((x21>(x22/x23))&x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x25 = 23U;
	int8_t x26 = -1;
	static uint32_t x27 = UINT32_MAX;
	uint8_t x28 = UINT8_MAX;
	static int32_t t6 = 401945;

    t6 = ((x25>(x26/x27))&x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x29 = INT16_MIN;
	volatile uint16_t x30 = UINT16_MAX;
	volatile int8_t x31 = INT8_MIN;
	uint8_t x32 = 0U;
	int32_t t7 = -844961538;

    t7 = ((x29>(x30/x31))&x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x33 = 114681918;
	int16_t x34 = INT16_MAX;
	static int64_t x35 = INT64_MIN;
	volatile int32_t t8 = 3025965;

    t8 = ((x33>(x34/x35))&x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MIN;
	int64_t x38 = INT64_MAX;
	uint8_t x39 = 21U;
	uint8_t x40 = UINT8_MAX;
	static volatile int32_t t9 = -3;

    t9 = ((x37>(x38/x39))&x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = -1;
	uint16_t x43 = 371U;
	volatile int64_t x44 = INT64_MAX;
	volatile int64_t t10 = 95124735232920469LL;

    t10 = ((x41>(x42/x43))&x44);

    if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x45 = 253000U;
	volatile int64_t x46 = INT64_MIN;
	uint16_t x47 = UINT16_MAX;
	int32_t x48 = INT32_MAX;

    t11 = ((x45>(x46/x47))&x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int32_t x53 = INT32_MIN;
	int64_t x54 = -51LL;
	uint64_t x55 = 3943091982763LLU;
	uint8_t x56 = 5U;
	volatile int32_t t12 = -698778;

    t12 = ((x53>(x54/x55))&x56);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x57 = 9U;
	volatile int8_t x58 = 0;
	uint64_t x59 = 270682938553LLU;
	uint8_t x60 = UINT8_MAX;

    t13 = ((x57>(x58/x59))&x60);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int64_t x63 = -481897377467754570LL;
	static uint8_t x64 = 4U;
	int32_t t14 = 50050;

    t14 = ((x61>(x62/x63))&x64);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x69 = INT64_MAX;
	int16_t x71 = INT16_MIN;
	static int32_t x72 = INT32_MIN;

    t15 = ((x69>(x70/x71))&x72);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x73 = UINT32_MAX;
	uint64_t x74 = 19426610287520704LLU;
	static int64_t x75 = INT64_MIN;
	int64_t x76 = INT64_MIN;

    t16 = ((x73>(x74/x75))&x76);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x77 = 58U;
	static uint32_t x78 = 157926958U;
	int64_t x80 = INT64_MIN;
	int64_t t17 = -477LL;

    t17 = ((x77>(x78/x79))&x80);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x81 = INT16_MIN;
	static uint16_t x82 = 1U;
	volatile int32_t t18 = 17476;

    t18 = ((x81>(x82/x83))&x84);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x85 = INT32_MIN;
	int16_t x86 = -1;
	int16_t x87 = 2205;
	uint64_t x88 = UINT64_MAX;
	static volatile uint64_t t19 = 6031298987198LLU;

    t19 = ((x85>(x86/x87))&x88);

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x90 = INT16_MIN;
	int8_t x91 = -2;
	volatile int64_t x92 = INT64_MAX;

    t20 = ((x89>(x90/x91))&x92);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x93 = INT8_MAX;
	int64_t x95 = -15147LL;
	volatile int16_t x96 = INT16_MIN;
	int32_t t21 = 116629;

    t21 = ((x93>(x94/x95))&x96);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint16_t x97 = 235U;
	int8_t x98 = INT8_MAX;
	int8_t x99 = INT8_MIN;
	int64_t x100 = INT64_MIN;

    t22 = ((x97>(x98/x99))&x100);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x102 = UINT16_MAX;
	static volatile uint8_t x103 = 11U;
	static uint16_t x104 = 8U;
	volatile int32_t t23 = 33546512;

    t23 = ((x101>(x102/x103))&x104);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x105 = -6442920861787LL;
	uint16_t x106 = UINT16_MAX;
	int64_t x107 = -1LL;
	static int32_t t24 = 6395;

    t24 = ((x105>(x106/x107))&x108);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x109 = INT64_MIN;
	int32_t x110 = INT32_MAX;
	int8_t x111 = INT8_MIN;
	int32_t x112 = INT32_MIN;
	volatile int32_t t25 = -102803;

    t25 = ((x109>(x110/x111))&x112);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x114 = -369979723549866LL;
	volatile uint8_t x115 = 42U;

    t26 = ((x113>(x114/x115))&x116);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x118 = UINT32_MAX;
	uint64_t x119 = UINT64_MAX;
	uint64_t x120 = 13LLU;
	static volatile uint64_t t27 = 0LLU;

    t27 = ((x117>(x118/x119))&x120);

    if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x121 = -809;
	int32_t x122 = 21804757;
	static int64_t x123 = -1LL;
	uint32_t x124 = 22690014U;
	volatile uint32_t t28 = 32090U;

    t28 = ((x121>(x122/x123))&x124);

    if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x127 = UINT64_MAX;
	volatile uint64_t x128 = 672LLU;

    t29 = ((x125>(x126/x127))&x128);

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int16_t x129 = INT16_MIN;
	uint8_t x130 = 28U;
	int32_t x132 = 4457962;

    t30 = ((x129>(x130/x131))&x132);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x133 = 80342449LLU;
	volatile uint16_t x136 = 6237U;
	int32_t t31 = -452840;

    t31 = ((x133>(x134/x135))&x136);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x141 = 401470881U;
	volatile int64_t x142 = INT64_MAX;
	static int8_t x143 = INT8_MIN;
	int64_t x144 = -1LL;
	volatile int64_t t32 = 674329466LL;

    t32 = ((x141>(x142/x143))&x144);

    if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x145 = 358482796189306826LLU;
	int32_t x146 = -1;
	uint32_t x147 = 25047981U;
	int64_t x148 = 188384LL;
	int64_t t33 = 86643LL;

    t33 = ((x145>(x146/x147))&x148);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x149 = INT16_MIN;
	int32_t x150 = -346697684;
	int32_t x151 = -1;
	uint8_t x152 = 0U;
	static int32_t t34 = -717862259;

    t34 = ((x149>(x150/x151))&x152);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x153 = -1;
	int16_t x154 = INT16_MAX;
	int16_t x155 = -20;
	int16_t x156 = INT16_MIN;
	static volatile int32_t t35 = 7297547;

    t35 = ((x153>(x154/x155))&x156);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x157 = 5958U;
	uint8_t x158 = 26U;
	uint16_t x160 = UINT16_MAX;
	volatile int32_t t36 = 48555316;

    t36 = ((x157>(x158/x159))&x160);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x161 = UINT16_MAX;
	int8_t x162 = -1;
	static int32_t x164 = INT32_MIN;
	volatile int32_t t37 = 15;

    t37 = ((x161>(x162/x163))&x164);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x166 = 1U;
	static uint32_t x167 = 1747665U;
	int8_t x168 = -1;
	static volatile int32_t t38 = 419310290;

    t38 = ((x165>(x166/x167))&x168);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x170 = INT8_MIN;
	volatile uint32_t x172 = UINT32_MAX;
	uint32_t t39 = 79675532U;

    t39 = ((x169>(x170/x171))&x172);

    if (t39 != 1U) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x174 = -74918LL;
	int32_t t40 = 3;

    t40 = ((x173>(x174/x175))&x176);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x177 = INT16_MIN;
	static int8_t x178 = INT8_MIN;
	static volatile int8_t x179 = -2;
	uint32_t x180 = 267498U;
	volatile uint32_t t41 = 9373913U;

    t41 = ((x177>(x178/x179))&x180);

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x181 = UINT32_MAX;
	static uint8_t x182 = 19U;
	int16_t x183 = INT16_MAX;
	static volatile int32_t t42 = -8133069;

    t42 = ((x181>(x182/x183))&x184);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x185 = UINT64_MAX;
	uint8_t x187 = UINT8_MAX;
	static int64_t x188 = INT64_MAX;
	volatile int64_t t43 = -3961373215949432362LL;

    t43 = ((x185>(x186/x187))&x188);

    if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x189 = UINT64_MAX;
	static uint8_t x190 = UINT8_MAX;
	int64_t x191 = INT64_MIN;
	volatile uint64_t x192 = 499LLU;
	static uint64_t t44 = 54881885202909348LLU;

    t44 = ((x189>(x190/x191))&x192);

    if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x196 = 1273U;
	uint32_t t45 = 1594599766U;

    t45 = ((x193>(x194/x195))&x196);

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x197 = UINT8_MAX;
	int16_t x198 = -1168;
	int32_t x199 = -1;
	uint16_t x200 = 1393U;
	int32_t t46 = -172895;

    t46 = ((x197>(x198/x199))&x200);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x201 = INT64_MIN;
	uint32_t x202 = 0U;
	uint64_t x203 = 34784211706168447LLU;
	static int8_t x204 = 1;

    t47 = ((x201>(x202/x203))&x204);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x205 = INT32_MAX;
	int64_t x206 = -1LL;
	static uint16_t x207 = 108U;
	uint8_t x208 = 0U;

    t48 = ((x205>(x206/x207))&x208);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x209 = 3858;
	uint64_t x210 = UINT64_MAX;
	int32_t x211 = INT32_MIN;
	int32_t x212 = -1;
	static int32_t t49 = 15090;

    t49 = ((x209>(x210/x211))&x212);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x213 = 3U;
	volatile int8_t x214 = INT8_MIN;
	uint8_t x215 = 22U;
	int64_t x216 = 95760814LL;
	int64_t t50 = -3360054165355353LL;

    t50 = ((x213>(x214/x215))&x216);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint8_t x217 = 0U;
	volatile int8_t x219 = INT8_MIN;
	volatile int32_t t51 = -1083;

    t51 = ((x217>(x218/x219))&x220);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint64_t x221 = 52702643024521LLU;
	volatile int64_t x222 = INT64_MIN;
	volatile int32_t x223 = 8348848;
	int16_t x224 = INT16_MAX;
	static volatile int32_t t52 = -7527;

    t52 = ((x221>(x222/x223))&x224);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x228 = -1033782LL;
	static volatile int64_t t53 = 1217754LL;

    t53 = ((x225>(x226/x227))&x228);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x229 = -1;
	int32_t x230 = INT32_MIN;
	volatile int32_t x232 = -1;
	volatile int32_t t54 = 261712481;

    t54 = ((x229>(x230/x231))&x232);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x234 = INT8_MIN;
	volatile int8_t x235 = INT8_MIN;
	static int32_t x236 = -1;
	static volatile int32_t t55 = 1;

    t55 = ((x233>(x234/x235))&x236);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x238 = INT32_MIN;
	uint16_t x239 = UINT16_MAX;
	uint32_t x240 = 1553U;
	volatile uint32_t t56 = 108U;

    t56 = ((x237>(x238/x239))&x240);

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x241 = UINT16_MAX;
	uint64_t x242 = UINT64_MAX;
	uint8_t x243 = UINT8_MAX;
	volatile int64_t x244 = INT64_MIN;
	volatile int64_t t57 = -334703368LL;

    t57 = ((x241>(x242/x243))&x244);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x245 = 16272;
	int16_t x246 = -105;
	volatile int32_t t58 = 1031;

    t58 = ((x245>(x246/x247))&x248);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x250 = UINT32_MAX;
	volatile int8_t x252 = INT8_MIN;
	volatile int32_t t59 = -742623818;

    t59 = ((x249>(x250/x251))&x252);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x254 = INT8_MIN;
	static uint16_t x255 = UINT16_MAX;
	int32_t t60 = -3;

    t60 = ((x253>(x254/x255))&x256);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x258 = 556194653874728LLU;
	int16_t x259 = INT16_MAX;
	static volatile int32_t t61 = 4358416;

    t61 = ((x257>(x258/x259))&x260);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x261 = INT16_MIN;
	static uint32_t x262 = 43055U;
	uint16_t x263 = 11454U;
	uint8_t x264 = 81U;
	volatile int32_t t62 = -997333;

    t62 = ((x261>(x262/x263))&x264);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x265 = 59549140982171LL;
	volatile int32_t x266 = INT32_MIN;
	int16_t x268 = 7;
	volatile int32_t t63 = 1989;

    t63 = ((x265>(x266/x267))&x268);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x269 = UINT32_MAX;
	int8_t x270 = INT8_MAX;
	uint32_t x271 = UINT32_MAX;
	int64_t x272 = -1LL;
	volatile int64_t t64 = 156613560607046LL;

    t64 = ((x269>(x270/x271))&x272);

    if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x273 = INT8_MIN;
	int64_t x274 = -1LL;
	uint32_t x275 = 24U;
	uint16_t x276 = UINT16_MAX;

    t65 = ((x273>(x274/x275))&x276);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x277 = INT32_MAX;
	uint16_t x278 = 3U;
	static uint16_t x279 = UINT16_MAX;
	int32_t t66 = 75267;

    t66 = ((x277>(x278/x279))&x280);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x282 = INT32_MIN;
	int8_t x284 = -1;
	static int32_t t67 = -1;

    t67 = ((x281>(x282/x283))&x284);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int16_t x290 = -1;
	uint64_t x292 = 1773490210LLU;
	uint64_t t68 = 1LLU;

    t68 = ((x289>(x290/x291))&x292);

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x293 = 27U;
	uint16_t x294 = UINT16_MAX;
	static int32_t x295 = INT32_MAX;
	uint64_t x296 = 14476LLU;

    t69 = ((x293>(x294/x295))&x296);

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x297 = 120544518447LLU;
	static int32_t x299 = INT32_MIN;
	int32_t x300 = INT32_MIN;

    t70 = ((x297>(x298/x299))&x300);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x301 = 8278U;
	static uint32_t x302 = 66665181U;
	uint32_t x303 = UINT32_MAX;
	int64_t t71 = 342LL;

    t71 = ((x301>(x302/x303))&x304);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x305 = INT16_MIN;
	int64_t x306 = -1037686656751615LL;
	int16_t x307 = -154;
	volatile uint8_t x308 = 4U;
	int32_t t72 = 0;

    t72 = ((x305>(x306/x307))&x308);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x309 = 7;
	static volatile int16_t x310 = INT16_MIN;
	int16_t x311 = INT16_MIN;
	int16_t x312 = -10259;
	static int32_t t73 = -3221891;

    t73 = ((x309>(x310/x311))&x312);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x313 = 8U;
	int16_t x315 = -1;
	volatile int64_t x316 = -191865734202LL;

    t74 = ((x313>(x314/x315))&x316);

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint8_t x319 = 37U;
	int32_t x320 = INT32_MIN;
	int32_t t75 = -4927;

    t75 = ((x317>(x318/x319))&x320);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x321 = INT32_MIN;
	int16_t x324 = -1;
	volatile int32_t t76 = -6;

    t76 = ((x321>(x322/x323))&x324);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x325 = -1LL;
	int8_t x326 = INT8_MIN;
	uint32_t x327 = 25U;
	int32_t x328 = INT32_MIN;
	int32_t t77 = 15;

    t77 = ((x325>(x326/x327))&x328);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x331 = INT32_MIN;
	int8_t x332 = INT8_MIN;
	int32_t t78 = 1;

    t78 = ((x329>(x330/x331))&x332);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x333 = INT8_MIN;
	volatile uint64_t x335 = 126039LLU;
	static uint32_t x336 = UINT32_MAX;

    t79 = ((x333>(x334/x335))&x336);

    if (t79 != 1U) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x337 = -1;
	uint8_t x338 = UINT8_MAX;
	int32_t x339 = INT32_MIN;
	int32_t x340 = -1;
	volatile int32_t t80 = 528037906;

    t80 = ((x337>(x338/x339))&x340);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x341 = INT64_MIN;
	volatile uint16_t x343 = 12U;
	static int8_t x344 = 1;
	int32_t t81 = 2222678;

    t81 = ((x341>(x342/x343))&x344);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x345 = 0U;
	static volatile int32_t x346 = 7020148;
	uint8_t x347 = 16U;

    t82 = ((x345>(x346/x347))&x348);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x349 = 27808U;
	volatile int64_t x350 = -61LL;
	int16_t x351 = INT16_MIN;
	int16_t x352 = INT16_MIN;

    t83 = ((x349>(x350/x351))&x352);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x353 = -1;
	int8_t x354 = INT8_MAX;
	int8_t x355 = 29;
	int64_t x356 = INT64_MIN;
	volatile int64_t t84 = 19850182LL;

    t84 = ((x353>(x354/x355))&x356);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x357 = -13975;
	volatile uint64_t x358 = 4680081224321793LLU;
	volatile int8_t x359 = INT8_MIN;
	int8_t x360 = INT8_MAX;
	int32_t t85 = 8;

    t85 = ((x357>(x358/x359))&x360);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x361 = INT16_MAX;
	int64_t x362 = 23762764885LL;
	volatile uint8_t x363 = 3U;
	int64_t x364 = 26526697712713739LL;

    t86 = ((x361>(x362/x363))&x364);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x365 = INT64_MIN;
	static volatile int8_t x366 = 6;
	volatile uint32_t x367 = 1693U;
	volatile uint8_t x368 = 1U;
	volatile int32_t t87 = -413926;

    t87 = ((x365>(x366/x367))&x368);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x369 = INT8_MIN;
	static volatile int64_t x370 = 867603373468LL;
	volatile int32_t x371 = -1;
	int16_t x372 = INT16_MAX;
	int32_t t88 = -983;

    t88 = ((x369>(x370/x371))&x372);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x373 = UINT32_MAX;
	volatile int32_t x374 = INT32_MIN;
	int64_t x375 = -1LL;
	int32_t x376 = 1;
	volatile int32_t t89 = 8086;

    t89 = ((x373>(x374/x375))&x376);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint64_t x377 = UINT64_MAX;
	uint8_t x378 = 6U;
	int16_t x379 = -1;
	volatile int64_t x380 = 342965575599782475LL;
	int64_t t90 = 87273LL;

    t90 = ((x377>(x378/x379))&x380);

    if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x381 = INT16_MAX;
	int64_t x384 = INT64_MIN;
	int64_t t91 = -151014002410759LL;

    t91 = ((x381>(x382/x383))&x384);

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x385 = -16610LL;
	static int8_t x387 = INT8_MAX;
	int64_t x388 = INT64_MAX;
	volatile int64_t t92 = 1LL;

    t92 = ((x385>(x386/x387))&x388);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x389 = INT8_MIN;
	static volatile int16_t x390 = INT16_MIN;
	volatile int64_t x392 = -1LL;
	volatile int64_t t93 = 17426802224336614LL;

    t93 = ((x389>(x390/x391))&x392);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x393 = UINT64_MAX;
	volatile int8_t x394 = INT8_MIN;
	static volatile int8_t x395 = INT8_MAX;
	static int64_t x396 = INT64_MIN;
	volatile int64_t t94 = 66345136281LL;

    t94 = ((x393>(x394/x395))&x396);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x397 = 137106384506947201LLU;
	uint16_t x399 = UINT16_MAX;
	uint32_t t95 = 9U;

    t95 = ((x397>(x398/x399))&x400);

    if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x405 = INT64_MAX;
	volatile int32_t x406 = 503015;
	int8_t x407 = INT8_MAX;
	volatile int16_t x408 = INT16_MIN;
	int32_t t96 = -20345114;

    t96 = ((x405>(x406/x407))&x408);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x409 = 634552;
	int8_t x411 = INT8_MIN;
	int32_t x412 = INT32_MIN;
	static int32_t t97 = -511739;

    t97 = ((x409>(x410/x411))&x412);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x413 = 63852110023632507LLU;
	int64_t x414 = INT64_MAX;
	static volatile int32_t x415 = INT32_MIN;
	uint8_t x416 = 106U;
	int32_t t98 = -1;

    t98 = ((x413>(x414/x415))&x416);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x417 = -1;
	static int64_t x419 = INT64_MIN;
	volatile int8_t x420 = INT8_MIN;
	static volatile int32_t t99 = 27601450;

    t99 = ((x417>(x418/x419))&x420);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x422 = -179610883;
	int16_t x423 = INT16_MIN;
	int16_t x424 = INT16_MIN;

    t100 = ((x421>(x422/x423))&x424);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x425 = INT32_MAX;
	uint8_t x428 = UINT8_MAX;
	volatile int32_t t101 = 18;

    t101 = ((x425>(x426/x427))&x428);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x430 = -1;
	uint16_t x431 = UINT16_MAX;
	int64_t x432 = INT64_MIN;
	int64_t t102 = -122837LL;

    t102 = ((x429>(x430/x431))&x432);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x433 = -1;
	int32_t x434 = -1;
	int64_t x435 = 7280737759727001LL;
	int64_t x436 = -1LL;
	int64_t t103 = 671306990926527LL;

    t103 = ((x433>(x434/x435))&x436);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x438 = INT64_MIN;
	int16_t x440 = INT16_MAX;

    t104 = ((x437>(x438/x439))&x440);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x441 = 18613036U;
	int8_t x442 = -1;
	static volatile int64_t x443 = INT64_MIN;

    t105 = ((x441>(x442/x443))&x444);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x445 = UINT8_MAX;
	uint8_t x446 = UINT8_MAX;
	int64_t x447 = -1LL;
	static uint8_t x448 = 51U;
	int32_t t106 = -14998;

    t106 = ((x445>(x446/x447))&x448);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x449 = 26749;
	int32_t x450 = -3;
	uint64_t x451 = 222246046LLU;
	static uint64_t x452 = 672425472741603445LLU;
	volatile uint64_t t107 = 1983993216LLU;

    t107 = ((x449>(x450/x451))&x452);

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x453 = -1LL;
	uint16_t x454 = 3577U;
	volatile int64_t x455 = INT64_MAX;
	int8_t x456 = INT8_MIN;
	int32_t t108 = 1;

    t108 = ((x453>(x454/x455))&x456);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x457 = -9;
	static int8_t x458 = 0;
	uint32_t x459 = 1892471964U;
	int32_t x460 = INT32_MIN;
	volatile int32_t t109 = -1;

    t109 = ((x457>(x458/x459))&x460);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x461 = -1LL;
	int32_t x462 = -1;
	volatile int32_t x463 = -497;
	uint32_t x464 = 746U;
	uint32_t t110 = 22766U;

    t110 = ((x461>(x462/x463))&x464);

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x468 = 787U;
	static uint32_t t111 = 2U;

    t111 = ((x465>(x466/x467))&x468);

    if (t111 != 1U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x470 = 22205U;
	static int8_t x471 = 1;
	volatile int32_t t112 = -677;

    t112 = ((x469>(x470/x471))&x472);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint8_t x473 = 0U;
	int32_t x475 = -1;
	int16_t x476 = 0;

    t113 = ((x473>(x474/x475))&x476);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x477 = 3685U;
	int32_t x478 = INT32_MAX;
	int32_t x480 = INT32_MIN;

    t114 = ((x477>(x478/x479))&x480);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x481 = INT32_MIN;
	static int32_t x482 = -1;
	int32_t t115 = -247;

    t115 = ((x481>(x482/x483))&x484);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x486 = INT32_MIN;
	static int64_t x488 = -1LL;
	static volatile int64_t t116 = 55769LL;

    t116 = ((x485>(x486/x487))&x488);

    if (t116 != 1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x489 = -1;
	int8_t x490 = -1;
	int32_t x491 = -1;
	volatile int64_t x492 = -1LL;
	int64_t t117 = -9LL;

    t117 = ((x489>(x490/x491))&x492);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x493 = -1;
	int16_t x494 = INT16_MIN;
	volatile uint16_t x496 = 22746U;

    t118 = ((x493>(x494/x495))&x496);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x497 = 1;
	int16_t x498 = -1;
	static int8_t x500 = 0;
	int32_t t119 = 4547499;

    t119 = ((x497>(x498/x499))&x500);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x501 = INT8_MIN;
	uint8_t x502 = UINT8_MAX;
	int16_t x504 = INT16_MIN;
	int32_t t120 = -20;

    t120 = ((x501>(x502/x503))&x504);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x505 = INT64_MAX;
	uint16_t x507 = 36U;
	int64_t x508 = 1LL;
	volatile int64_t t121 = 1LL;

    t121 = ((x505>(x506/x507))&x508);

    if (t121 != 1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x513 = UINT64_MAX;
	int64_t x516 = INT64_MIN;
	static int64_t t122 = 10865432LL;

    t122 = ((x513>(x514/x515))&x516);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x518 = INT8_MAX;
	uint16_t x519 = 85U;
	volatile int64_t x520 = -356238592995676106LL;
	volatile int64_t t123 = 576488LL;

    t123 = ((x517>(x518/x519))&x520);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x521 = INT8_MIN;
	uint32_t x522 = UINT32_MAX;
	int32_t t124 = 20301;

    t124 = ((x521>(x522/x523))&x524);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x525 = 21336LLU;
	uint32_t x527 = 65769428U;
	uint32_t t125 = 101885U;

    t125 = ((x525>(x526/x527))&x528);

    if (t125 != 1U) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int32_t x529 = INT32_MAX;
	int32_t x530 = -1;
	uint32_t x531 = UINT32_MAX;
	volatile int32_t x532 = -1;
	static volatile int32_t t126 = -23805;

    t126 = ((x529>(x530/x531))&x532);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x533 = UINT64_MAX;
	int64_t x534 = -10740LL;
	int64_t x535 = INT64_MIN;
	int64_t t127 = -15LL;

    t127 = ((x533>(x534/x535))&x536);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x537 = INT8_MIN;
	static int8_t x538 = INT8_MAX;
	volatile int64_t x539 = -1LL;
	int64_t x540 = INT64_MIN;
	int64_t t128 = 27LL;

    t128 = ((x537>(x538/x539))&x540);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x541 = INT64_MIN;
	int8_t x542 = INT8_MAX;
	volatile uint8_t x543 = 8U;
	int16_t x544 = -64;
	volatile int32_t t129 = -381830141;

    t129 = ((x541>(x542/x543))&x544);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x545 = UINT32_MAX;
	uint16_t x548 = 24499U;
	static volatile int32_t t130 = 108907;

    t130 = ((x545>(x546/x547))&x548);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x549 = -1;
	static int8_t x550 = INT8_MAX;
	int32_t x551 = -5;
	int32_t x552 = INT32_MIN;
	int32_t t131 = 51413;

    t131 = ((x549>(x550/x551))&x552);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x553 = INT8_MIN;
	static int32_t x554 = 13;
	int8_t x555 = INT8_MIN;
	int8_t x556 = INT8_MIN;
	int32_t t132 = 2;

    t132 = ((x553>(x554/x555))&x556);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x557 = 221056287U;
	volatile uint8_t x559 = 3U;
	volatile int64_t x560 = INT64_MAX;

    t133 = ((x557>(x558/x559))&x560);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x562 = 1;
	int16_t x563 = 7706;
	int16_t x564 = -33;
	volatile int32_t t134 = 399216;

    t134 = ((x561>(x562/x563))&x564);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x565 = 3191U;
	volatile int64_t x567 = -1LL;
	uint16_t x568 = UINT16_MAX;

    t135 = ((x565>(x566/x567))&x568);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x569 = -40587275;
	static int64_t x570 = INT64_MAX;
	int8_t x571 = INT8_MIN;
	int8_t x572 = 20;
	static volatile int32_t t136 = -23;

    t136 = ((x569>(x570/x571))&x572);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x573 = -1LL;
	int32_t x575 = -1;
	volatile int16_t x576 = 0;
	int32_t t137 = -27769368;

    t137 = ((x573>(x574/x575))&x576);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x582 = INT16_MIN;
	static int32_t x583 = -1827;
	int32_t x584 = -1;
	int32_t t138 = 377;

    t138 = ((x581>(x582/x583))&x584);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x586 = 182782152LLU;
	static int16_t x587 = -1;
	uint32_t t139 = 337U;

    t139 = ((x585>(x586/x587))&x588);

    if (t139 != 1U) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x589 = 2019463LL;
	uint16_t x591 = UINT16_MAX;
	int8_t x592 = -1;
	volatile int32_t t140 = -298962;

    t140 = ((x589>(x590/x591))&x592);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x593 = UINT16_MAX;
	int64_t x595 = -96343048858673LL;
	volatile int16_t x596 = INT16_MAX;
	int32_t t141 = 0;

    t141 = ((x593>(x594/x595))&x596);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x601 = -14;
	static int16_t x602 = INT16_MIN;
	static uint8_t x603 = 5U;
	volatile int32_t t142 = 1;

    t142 = ((x601>(x602/x603))&x604);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x605 = UINT64_MAX;
	static uint16_t x607 = 11U;
	int64_t x608 = -1LL;
	int64_t t143 = -1460741LL;

    t143 = ((x605>(x606/x607))&x608);

    if (t143 != 1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x609 = INT64_MAX;
	int64_t x611 = INT64_MIN;

    t144 = ((x609>(x610/x611))&x612);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x613 = INT32_MAX;
	int8_t x614 = INT8_MAX;
	volatile int8_t x615 = INT8_MIN;
	static uint64_t x616 = 2265819428972554047LLU;
	uint64_t t145 = 295287636089491LLU;

    t145 = ((x613>(x614/x615))&x616);

    if (t145 != 1LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x618 = 1;
	volatile int16_t x619 = INT16_MAX;
	uint32_t x620 = 209U;
	uint32_t t146 = 12359992U;

    t146 = ((x617>(x618/x619))&x620);

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x621 = INT8_MIN;
	volatile int16_t x622 = INT16_MAX;
	int8_t x624 = INT8_MIN;
	int32_t t147 = 1411439;

    t147 = ((x621>(x622/x623))&x624);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x628 = INT16_MIN;
	volatile int32_t t148 = 27;

    t148 = ((x625>(x626/x627))&x628);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int16_t x629 = INT16_MAX;
	static int8_t x632 = INT8_MIN;
	int32_t t149 = 117;

    t149 = ((x629>(x630/x631))&x632);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x634 = -1;
	int32_t x635 = 444262920;
	int64_t x636 = INT64_MIN;
	volatile int64_t t150 = 3LL;

    t150 = ((x633>(x634/x635))&x636);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x637 = INT8_MAX;
	int8_t x638 = -1;
	volatile int8_t x639 = -1;
	volatile int32_t x640 = INT32_MIN;

    t151 = ((x637>(x638/x639))&x640);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x641 = UINT16_MAX;
	static volatile uint64_t x643 = 5313065133LLU;
	static volatile uint16_t x644 = 11047U;
	static int32_t t152 = -3931978;

    t152 = ((x641>(x642/x643))&x644);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x645 = INT64_MIN;
	volatile int32_t x646 = INT32_MIN;
	uint8_t x647 = 64U;
	int16_t x648 = -1;

    t153 = ((x645>(x646/x647))&x648);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x649 = 3;
	int64_t x650 = -1LL;
	static int64_t x651 = 8237373LL;
	volatile int32_t t154 = 12;

    t154 = ((x649>(x650/x651))&x652);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x653 = INT8_MAX;
	volatile int16_t x654 = 7788;
	volatile uint8_t x655 = 112U;
	int64_t x656 = INT64_MIN;
	volatile int64_t t155 = -949LL;

    t155 = ((x653>(x654/x655))&x656);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x657 = 6U;
	int16_t x658 = 8547;
	static int8_t x659 = INT8_MIN;
	volatile int64_t t156 = 21215477413798LL;

    t156 = ((x657>(x658/x659))&x660);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x661 = -3;
	int64_t x662 = -28941178940LL;
	uint32_t x663 = 5683294U;
	int64_t x664 = -1LL;

    t157 = ((x661>(x662/x663))&x664);

    if (t157 != 1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x665 = 365U;
	volatile int32_t x666 = -1;
	static int32_t x667 = INT32_MAX;
	uint16_t x668 = 2304U;

    t158 = ((x665>(x666/x667))&x668);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x669 = 1U;
	static int64_t x670 = INT64_MIN;
	static uint32_t x671 = UINT32_MAX;
	static int8_t x672 = INT8_MIN;
	volatile int32_t t159 = 0;

    t159 = ((x669>(x670/x671))&x672);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x673 = 2U;
	volatile int64_t x676 = 74523026458785767LL;
	int64_t t160 = -14022LL;

    t160 = ((x673>(x674/x675))&x676);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x677 = -28;
	uint64_t x678 = UINT64_MAX;
	int64_t x679 = INT64_MAX;
	static int64_t x680 = -1LL;
	static int64_t t161 = -83697810LL;

    t161 = ((x677>(x678/x679))&x680);

    if (t161 != 1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x681 = 5720U;
	uint8_t x682 = 20U;
	static uint16_t x684 = UINT16_MAX;
	volatile int32_t t162 = 222;

    t162 = ((x681>(x682/x683))&x684);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x686 = -27;
	static int32_t x687 = INT32_MAX;
	static uint32_t t163 = 1154068U;

    t163 = ((x685>(x686/x687))&x688);

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int16_t x689 = 210;
	volatile int64_t x690 = 128165450LL;
	int16_t x691 = 52;
	int64_t x692 = 595726911LL;

    t164 = ((x689>(x690/x691))&x692);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x693 = UINT64_MAX;
	static uint16_t x694 = 21600U;
	int8_t x695 = INT8_MIN;
	int32_t x696 = INT32_MIN;
	int32_t t165 = 1;

    t165 = ((x693>(x694/x695))&x696);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x697 = 3;
	int64_t x698 = -5260282481LL;
	uint64_t x699 = 716154341613754369LLU;
	volatile int32_t t166 = -246657280;

    t166 = ((x697>(x698/x699))&x700);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x701 = 0;
	volatile uint32_t x703 = 122709U;
	volatile int32_t t167 = -6010337;

    t167 = ((x701>(x702/x703))&x704);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint8_t x705 = 3U;
	int16_t x706 = -1;
	volatile uint16_t x707 = UINT16_MAX;
	uint64_t x708 = UINT64_MAX;
	uint64_t t168 = 1750167238573817LLU;

    t168 = ((x705>(x706/x707))&x708);

    if (t168 != 1LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x709 = 7274087283294LL;
	uint8_t x711 = UINT8_MAX;

    t169 = ((x709>(x710/x711))&x712);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x713 = -1;
	int64_t x716 = -1LL;

    t170 = ((x713>(x714/x715))&x716);

    if (t170 != 1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int16_t x717 = INT16_MAX;
	int32_t x718 = INT32_MIN;
	int32_t x720 = -634;
	static volatile int32_t t171 = 15595150;

    t171 = ((x717>(x718/x719))&x720);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x721 = INT64_MIN;
	static int8_t x722 = INT8_MAX;
	uint32_t x723 = 2487668U;
	static volatile uint8_t x724 = 18U;
	int32_t t172 = -6533384;

    t172 = ((x721>(x722/x723))&x724);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x725 = 31518899U;
	int64_t x726 = -1LL;
	int16_t x728 = INT16_MAX;
	volatile int32_t t173 = 101;

    t173 = ((x725>(x726/x727))&x728);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x729 = UINT32_MAX;
	int32_t x730 = 603;
	static uint32_t x731 = 16114U;
	static uint32_t x732 = UINT32_MAX;
	volatile uint32_t t174 = 207U;

    t174 = ((x729>(x730/x731))&x732);

    if (t174 != 1U) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x733 = INT16_MAX;
	int16_t x734 = -1;
	static volatile uint32_t x735 = 1141U;
	uint8_t x736 = 4U;
	volatile int32_t t175 = -1;

    t175 = ((x733>(x734/x735))&x736);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x737 = INT32_MIN;
	volatile int8_t x738 = -1;

    t176 = ((x737>(x738/x739))&x740);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x741 = INT64_MIN;
	uint64_t x742 = 6LLU;
	uint64_t x743 = UINT64_MAX;
	static int32_t x744 = -13280;
	int32_t t177 = 234401;

    t177 = ((x741>(x742/x743))&x744);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x745 = INT64_MAX;
	static int8_t x746 = -1;
	int64_t x747 = 22LL;
	static volatile uint64_t t178 = 557926LLU;

    t178 = ((x745>(x746/x747))&x748);

    if (t178 != 1LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x750 = UINT64_MAX;
	int16_t x751 = INT16_MAX;
	volatile uint8_t x752 = UINT8_MAX;
	volatile int32_t t179 = 24557;

    t179 = ((x749>(x750/x751))&x752);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x753 = INT32_MAX;
	int64_t x754 = INT64_MIN;
	int16_t x756 = INT16_MAX;
	int32_t t180 = -21962;

    t180 = ((x753>(x754/x755))&x756);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x757 = -1LL;
	volatile int16_t x758 = INT16_MIN;
	int8_t x759 = INT8_MIN;
	static int8_t x760 = -1;
	volatile int32_t t181 = 3686057;

    t181 = ((x757>(x758/x759))&x760);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x761 = 0U;
	int16_t x763 = INT16_MIN;
	static int16_t x764 = -19;
	volatile int32_t t182 = 13;

    t182 = ((x761>(x762/x763))&x764);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x766 = -1;
	uint8_t x767 = UINT8_MAX;
	int8_t x768 = INT8_MIN;
	static int32_t t183 = 429;

    t183 = ((x765>(x766/x767))&x768);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x770 = 13565U;
	uint16_t x771 = 231U;
	int64_t x772 = INT64_MIN;
	static int64_t t184 = 13908057822511421LL;

    t184 = ((x769>(x770/x771))&x772);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x773 = 0U;
	int16_t x774 = INT16_MIN;
	int64_t x775 = INT64_MIN;
	int32_t x776 = -1;
	volatile int32_t t185 = -43;

    t185 = ((x773>(x774/x775))&x776);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x777 = INT32_MAX;
	int32_t x778 = 928;
	static int8_t x779 = 20;
	int64_t x780 = -1LL;

    t186 = ((x777>(x778/x779))&x780);

    if (t186 != 1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x782 = INT8_MIN;
	uint64_t x783 = UINT64_MAX;
	int16_t x784 = INT16_MIN;
	int32_t t187 = -4;

    t187 = ((x781>(x782/x783))&x784);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x785 = 20U;
	static uint16_t x786 = 70U;
	int64_t x787 = INT64_MAX;
	volatile uint32_t t188 = 239U;

    t188 = ((x785>(x786/x787))&x788);

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x789 = INT64_MAX;
	volatile uint32_t x791 = UINT32_MAX;
	volatile int32_t t189 = -1441;

    t189 = ((x789>(x790/x791))&x792);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x793 = -12334;
	volatile int8_t x794 = 16;
	int16_t x795 = INT16_MIN;
	int32_t x796 = INT32_MAX;
	static volatile int32_t t190 = 10;

    t190 = ((x793>(x794/x795))&x796);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x798 = 487U;
	static int16_t x799 = INT16_MIN;
	static volatile int32_t x800 = INT32_MIN;
	int32_t t191 = -4;

    t191 = ((x797>(x798/x799))&x800);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x801 = -1LL;
	static int64_t x802 = INT64_MIN;
	uint32_t x803 = 2U;
	uint8_t x804 = 109U;
	volatile int32_t t192 = 167208804;

    t192 = ((x801>(x802/x803))&x804);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x805 = INT16_MAX;
	uint8_t x806 = UINT8_MAX;
	static int8_t x807 = INT8_MIN;
	int16_t x808 = -1;
	volatile int32_t t193 = 1172;

    t193 = ((x805>(x806/x807))&x808);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x809 = 16;
	int16_t x810 = INT16_MAX;
	uint64_t x811 = 3219962268218LLU;
	uint64_t x812 = 1871054LLU;
	static uint64_t t194 = 831109455LLU;

    t194 = ((x809>(x810/x811))&x812);

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x813 = -5789;
	int16_t x814 = INT16_MIN;
	uint16_t x815 = UINT16_MAX;
	static volatile uint32_t t195 = 301U;

    t195 = ((x813>(x814/x815))&x816);

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x817 = INT64_MIN;
	int8_t x818 = -5;
	volatile int8_t x820 = 43;
	volatile int32_t t196 = -15;

    t196 = ((x817>(x818/x819))&x820);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x821 = UINT16_MAX;
	int64_t x822 = -659LL;
	uint16_t x824 = 136U;
	volatile int32_t t197 = 7;

    t197 = ((x821>(x822/x823))&x824);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x825 = 431257289351LLU;
	int32_t x827 = INT32_MIN;
	int8_t x828 = INT8_MAX;
	int32_t t198 = 397;

    t198 = ((x825>(x826/x827))&x828);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint8_t x829 = 2U;
	static int32_t x830 = INT32_MAX;
	int64_t x831 = INT64_MIN;
	int8_t x832 = INT8_MIN;
	static volatile int32_t t199 = -22424;

    t199 = ((x829>(x830/x831))&x832);

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

