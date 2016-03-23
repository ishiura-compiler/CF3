
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

uint8_t x3 = UINT8_MAX;
volatile uint8_t x7 = UINT8_MAX;
volatile int32_t t3 = -386235;
int64_t x21 = -65090LL;
volatile uint16_t x26 = UINT16_MAX;
uint8_t x29 = UINT8_MAX;
volatile int64_t x30 = INT64_MAX;
volatile int32_t t6 = 14299;
static int32_t x34 = INT32_MIN;
int32_t t8 = 3;
int8_t x45 = 39;
volatile uint64_t x46 = 125821250191827877LLU;
uint8_t x47 = 25U;
int32_t x48 = INT32_MIN;
static volatile uint16_t x49 = 9U;
static int64_t x52 = -95LL;
volatile int64_t x56 = -55662708701LL;
static volatile int32_t t12 = 81795;
volatile int64_t x57 = INT64_MIN;
static volatile int8_t x64 = INT8_MAX;
int32_t t14 = 90;
volatile int16_t x68 = 13575;
uint32_t x70 = 429070832U;
static volatile uint8_t x76 = UINT8_MAX;
int64_t x88 = INT64_MAX;
int8_t x90 = -7;
int16_t x108 = -1;
int64_t x109 = -1LL;
uint16_t x111 = 6U;
int32_t t24 = -39508327;
volatile int8_t x114 = INT8_MAX;
int32_t t25 = 13;
volatile uint16_t x117 = UINT16_MAX;
int16_t x119 = INT16_MIN;
uint8_t x127 = UINT8_MAX;
volatile int32_t t28 = -1;
int32_t x130 = INT32_MIN;
volatile uint8_t x134 = 4U;
static int8_t x144 = INT8_MIN;
static int32_t t32 = 9444172;
static int32_t x150 = INT32_MIN;
static int64_t x156 = INT64_MIN;
uint16_t x157 = 120U;
static int32_t x158 = INT32_MIN;
int8_t x179 = 0;
int16_t x181 = INT16_MIN;
int16_t x187 = INT16_MIN;
static int16_t x195 = INT16_MIN;
static int8_t x197 = INT8_MIN;
int64_t x202 = 4757108LL;
int8_t x208 = INT8_MIN;
int32_t t47 = -351;
int32_t x209 = INT32_MIN;
volatile uint16_t x211 = UINT16_MAX;
int16_t x212 = INT16_MIN;
volatile uint64_t x213 = 2246386552LLU;
volatile uint32_t x217 = 50250536U;
uint32_t x225 = 63639U;
volatile uint64_t x230 = 15798133316130LLU;
uint16_t x232 = UINT16_MAX;
int32_t x235 = -1;
uint8_t x241 = 126U;
int64_t x248 = INT64_MIN;
volatile int32_t x251 = -1;
int32_t t58 = -5412872;
int64_t x256 = -1LL;
int32_t t59 = -93060059;
uint8_t x257 = UINT8_MAX;
static int64_t x260 = 143LL;
int16_t x261 = INT16_MAX;
uint8_t x262 = UINT8_MAX;
static uint64_t x266 = 9450406241771416LLU;
static volatile int64_t x277 = 2LL;
uint64_t x279 = UINT64_MAX;
static int8_t x280 = -1;
volatile int64_t x285 = -1LL;
int64_t x286 = INT64_MAX;
int8_t x290 = 59;
volatile uint8_t x293 = 1U;
uint64_t x294 = 9LLU;
uint8_t x296 = 1U;
volatile int32_t t69 = 1320;
uint32_t x297 = 2U;
int32_t t72 = -800989982;
int64_t x309 = INT64_MIN;
int32_t t73 = 2;
volatile int32_t t74 = 7;
int16_t x333 = -1811;
int16_t x336 = -1;
volatile int32_t t78 = 228031;
static uint32_t x341 = 3487U;
volatile int16_t x342 = 2751;
int32_t x343 = INT32_MIN;
uint64_t x346 = 10516559494718650LLU;
static int8_t x349 = 3;
int8_t x354 = -1;
int8_t x355 = INT8_MAX;
int64_t x364 = INT64_MIN;
static volatile int32_t t85 = 31210542;
int32_t t87 = -282802270;
int64_t x375 = 95711976LL;
static uint32_t x383 = UINT32_MAX;
int64_t x384 = INT64_MIN;
int32_t t90 = -103326051;
uint64_t x389 = UINT64_MAX;
int32_t x391 = INT32_MAX;
int64_t x398 = INT64_MIN;
uint32_t x399 = 26U;
static volatile int32_t x401 = INT32_MAX;
volatile uint64_t x407 = 1812175454471LLU;
int8_t x414 = INT8_MAX;
int16_t x419 = -6971;
int8_t x420 = INT8_MIN;
int64_t x424 = -1LL;
int32_t t100 = 8293525;
static int32_t t101 = -580;
uint8_t x429 = UINT8_MAX;
uint8_t x433 = 113U;
static int8_t x436 = INT8_MIN;
volatile int16_t x444 = INT16_MIN;
static int32_t x455 = 9;
int8_t x471 = INT8_MAX;
static volatile int8_t x477 = INT8_MIN;
int8_t x478 = 13;
int8_t x479 = -1;
static volatile int32_t t114 = -268427940;
uint8_t x481 = 20U;
int8_t x486 = -1;
static uint16_t x490 = UINT16_MAX;
int32_t x492 = INT32_MAX;
int32_t t117 = 1;
int8_t x494 = INT8_MIN;
static int8_t x504 = INT8_MIN;
int16_t x505 = -4;
uint8_t x508 = 56U;
volatile uint32_t x510 = 2858U;
volatile int32_t t122 = -64595770;
static int32_t t124 = -265655368;
volatile int16_t x525 = INT16_MIN;
int8_t x541 = INT8_MIN;
int16_t x545 = INT16_MIN;
volatile uint64_t x546 = 1107229887LLU;
volatile uint16_t x547 = UINT16_MAX;
volatile int32_t x553 = -293061533;
int16_t x554 = -1;
static int16_t x555 = -242;
int64_t x560 = INT64_MAX;
int16_t x569 = INT16_MIN;
volatile int32_t x576 = -1;
static volatile int8_t x580 = INT8_MIN;
static volatile int32_t t138 = -356951;
int64_t x591 = -1LL;
int64_t x592 = INT64_MIN;
static volatile uint64_t x593 = 5257326070LLU;
int16_t x594 = INT16_MAX;
static int32_t t141 = -3683;
int32_t t142 = -205;
int64_t x605 = INT64_MAX;
int16_t x612 = INT16_MAX;
int32_t t145 = 0;
uint16_t x622 = 1U;
volatile uint32_t x624 = 237U;
int8_t x628 = INT8_MAX;
volatile int32_t t149 = -481;
int8_t x632 = INT8_MIN;
int32_t x637 = -129540377;
int32_t x638 = -1;
static int8_t x642 = INT8_MIN;
int32_t t154 = 5498553;
int64_t x657 = INT64_MIN;
uint64_t x662 = 7255LLU;
int32_t t157 = 1182;
volatile int32_t t158 = -262;
int16_t x690 = 1019;
int64_t x691 = -9004202584390LL;
volatile int32_t x693 = INT32_MIN;
static volatile int32_t t164 = -6359;
int64_t x701 = 517238241513LL;
int8_t x722 = INT8_MAX;
static int64_t x724 = INT64_MIN;
int32_t t170 = 4748;
int32_t x728 = 644;
int64_t x735 = -4440322135426328812LL;
int8_t x738 = INT8_MIN;
static uint64_t x745 = 1558476153421202LLU;
int64_t x746 = -1LL;
uint64_t x747 = 2051LLU;
volatile int32_t t175 = -519208;
int16_t x753 = -1;
static volatile int32_t t178 = 29490;
uint8_t x762 = 30U;
static int8_t x771 = 0;
volatile int8_t x773 = INT8_MIN;
static uint64_t x778 = 24200LLU;
uint8_t x781 = 10U;
int8_t x785 = INT8_MIN;
volatile int32_t t185 = 15;
volatile uint64_t x792 = UINT64_MAX;
uint64_t x817 = UINT64_MAX;
int64_t x819 = INT64_MIN;
int64_t x824 = -1LL;
static int32_t t194 = -55337;
static int32_t x832 = INT32_MAX;
int64_t x839 = 15430475864869081LL;


void f0(void) {
    	volatile int8_t x1 = -1;
	uint64_t x2 = 8256521333191867663LLU;
	int16_t x4 = INT16_MIN;
	int32_t t0 = -115285508;

    t0 = (((x1^x2)-x3)<=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = 1;
	int8_t x6 = -1;
	static int8_t x8 = INT8_MAX;
	static int32_t t1 = 100213;

    t1 = (((x5^x6)-x7)<=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = -2;
	uint64_t x14 = 2688880268131970302LLU;
	uint32_t x15 = 9110U;
	int8_t x16 = INT8_MAX;
	static int32_t t2 = -3723;

    t2 = (((x13^x14)-x15)<=x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x17 = 24U;
	uint32_t x18 = 133006U;
	static int64_t x19 = -1LL;
	int32_t x20 = INT32_MIN;

    t3 = (((x17^x18)-x19)<=x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x22 = 2209747;
	int64_t x23 = 117LL;
	static uint32_t x24 = UINT32_MAX;
	int32_t t4 = -1211;

    t4 = (((x21^x22)-x23)<=x24);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x25 = 93660891261850994LL;
	static int8_t x27 = INT8_MIN;
	int8_t x28 = -1;
	volatile int32_t t5 = 1395178;

    t5 = (((x25^x26)-x27)<=x28);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x31 = 136087976557364133LL;
	int32_t x32 = -1;

    t6 = (((x29^x30)-x31)<=x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x33 = -70462272LL;
	volatile int64_t x35 = -1LL;
	static int8_t x36 = -1;
	volatile int32_t t7 = 127130754;

    t7 = (((x33^x34)-x35)<=x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x37 = 592699681U;
	static volatile uint32_t x38 = 10102987U;
	int16_t x39 = 3514;
	int64_t x40 = -1LL;

    t8 = (((x37^x38)-x39)<=x40);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x41 = 14416LLU;
	volatile int64_t x42 = INT64_MAX;
	int64_t x43 = INT64_MIN;
	uint8_t x44 = 8U;
	volatile int32_t t9 = -2588;

    t9 = (((x41^x42)-x43)<=x44);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t t10 = -492;

    t10 = (((x45^x46)-x47)<=x48);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x50 = 18758LLU;
	volatile uint32_t x51 = 1946200U;
	int32_t t11 = -3;

    t11 = (((x49^x50)-x51)<=x52);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x53 = 508;
	uint8_t x54 = 13U;
	int8_t x55 = INT8_MIN;

    t12 = (((x53^x54)-x55)<=x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x58 = INT8_MAX;
	volatile uint8_t x59 = 0U;
	int64_t x60 = INT64_MAX;
	volatile int32_t t13 = 749;

    t13 = (((x57^x58)-x59)<=x60);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x61 = 9U;
	int64_t x62 = 66760089058LL;
	int64_t x63 = -4953684798822LL;

    t14 = (((x61^x62)-x63)<=x64);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x65 = INT64_MIN;
	uint8_t x66 = 1U;
	static int8_t x67 = INT8_MIN;
	volatile int32_t t15 = 175;

    t15 = (((x65^x66)-x67)<=x68);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x69 = INT32_MIN;
	int8_t x71 = INT8_MIN;
	static int8_t x72 = -1;
	static int32_t t16 = 60;

    t16 = (((x69^x70)-x71)<=x72);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x73 = INT64_MIN;
	int64_t x74 = INT64_MAX;
	int8_t x75 = INT8_MIN;
	int32_t t17 = -15326;

    t17 = (((x73^x74)-x75)<=x76);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x77 = -1;
	int16_t x78 = 179;
	static int8_t x79 = INT8_MAX;
	int32_t x80 = INT32_MAX;
	static volatile int32_t t18 = -4046497;

    t18 = (((x77^x78)-x79)<=x80);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x85 = -1195LL;
	int16_t x86 = INT16_MAX;
	uint8_t x87 = 7U;
	static volatile int32_t t19 = 31;

    t19 = (((x85^x86)-x87)<=x88);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x89 = 1;
	int16_t x91 = -1;
	int64_t x92 = INT64_MIN;
	static volatile int32_t t20 = 0;

    t20 = (((x89^x90)-x91)<=x92);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint8_t x93 = UINT8_MAX;
	int16_t x94 = 1;
	int8_t x95 = 45;
	uint16_t x96 = 3623U;
	int32_t t21 = 1258;

    t21 = (((x93^x94)-x95)<=x96);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x97 = 5LLU;
	int16_t x98 = -77;
	static int64_t x99 = INT64_MIN;
	int16_t x100 = INT16_MAX;
	volatile int32_t t22 = 250203195;

    t22 = (((x97^x98)-x99)<=x100);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x105 = -1;
	volatile int32_t x106 = -31;
	static int64_t x107 = -1LL;
	static volatile int32_t t23 = 0;

    t23 = (((x105^x106)-x107)<=x108);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint8_t x110 = 30U;
	uint64_t x112 = 4526LLU;

    t24 = (((x109^x110)-x111)<=x112);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x113 = INT8_MIN;
	int8_t x115 = -2;
	int64_t x116 = INT64_MIN;

    t25 = (((x113^x114)-x115)<=x116);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x118 = INT32_MIN;
	int32_t x120 = -44;
	volatile int32_t t26 = -1;

    t26 = (((x117^x118)-x119)<=x120);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x121 = -1;
	uint8_t x122 = 3U;
	int64_t x123 = 4811208LL;
	int32_t x124 = INT32_MAX;
	volatile int32_t t27 = -28660496;

    t27 = (((x121^x122)-x123)<=x124);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x125 = INT8_MIN;
	volatile uint32_t x126 = UINT32_MAX;
	volatile uint32_t x128 = 1490U;

    t28 = (((x125^x126)-x127)<=x128);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x129 = INT64_MAX;
	static uint16_t x131 = 1889U;
	uint64_t x132 = 2233070355LLU;
	volatile int32_t t29 = -524930092;

    t29 = (((x129^x130)-x131)<=x132);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x133 = INT16_MAX;
	uint64_t x135 = UINT64_MAX;
	int16_t x136 = INT16_MIN;
	volatile int32_t t30 = -50;

    t30 = (((x133^x134)-x135)<=x136);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x137 = 1U;
	int64_t x138 = INT64_MIN;
	static uint16_t x139 = 1U;
	uint64_t x140 = UINT64_MAX;
	static int32_t t31 = 4;

    t31 = (((x137^x138)-x139)<=x140);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x141 = -2;
	volatile int16_t x142 = 12;
	int8_t x143 = INT8_MIN;

    t32 = (((x141^x142)-x143)<=x144);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x149 = 224354468571590054LLU;
	int16_t x151 = INT16_MIN;
	uint64_t x152 = 31LLU;
	static int32_t t33 = 76922;

    t33 = (((x149^x150)-x151)<=x152);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x153 = 101092610616253LLU;
	int8_t x154 = INT8_MAX;
	int32_t x155 = 1897;
	volatile int32_t t34 = 134122;

    t34 = (((x153^x154)-x155)<=x156);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x159 = INT8_MIN;
	int32_t x160 = -1;
	volatile int32_t t35 = 17986;

    t35 = (((x157^x158)-x159)<=x160);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x161 = INT16_MIN;
	volatile int8_t x162 = INT8_MIN;
	static int8_t x163 = -1;
	uint64_t x164 = 1LLU;
	volatile int32_t t36 = -61;

    t36 = (((x161^x162)-x163)<=x164);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint16_t x165 = UINT16_MAX;
	static int8_t x166 = INT8_MIN;
	int32_t x167 = INT32_MIN;
	static volatile int32_t x168 = 54308615;
	static volatile int32_t t37 = 4;

    t37 = (((x165^x166)-x167)<=x168);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x169 = -5997;
	static uint16_t x170 = 132U;
	static int8_t x171 = INT8_MIN;
	static int64_t x172 = -270029709224825LL;
	int32_t t38 = 0;

    t38 = (((x169^x170)-x171)<=x172);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint16_t x173 = 750U;
	static uint32_t x174 = UINT32_MAX;
	int16_t x175 = INT16_MIN;
	uint8_t x176 = UINT8_MAX;
	static int32_t t39 = 5908176;

    t39 = (((x173^x174)-x175)<=x176);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x177 = 3083128839890762LLU;
	int16_t x178 = INT16_MAX;
	int8_t x180 = INT8_MIN;
	int32_t t40 = -10054;

    t40 = (((x177^x178)-x179)<=x180);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x182 = INT16_MIN;
	static volatile int16_t x183 = INT16_MAX;
	int16_t x184 = INT16_MAX;
	volatile int32_t t41 = -641864227;

    t41 = (((x181^x182)-x183)<=x184);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x185 = INT16_MAX;
	uint32_t x186 = 3U;
	static volatile int64_t x188 = -1349374133744LL;
	volatile int32_t t42 = -3060489;

    t42 = (((x185^x186)-x187)<=x188);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x189 = -1;
	int32_t x190 = INT32_MIN;
	static int32_t x191 = 114;
	uint64_t x192 = UINT64_MAX;
	int32_t t43 = -105;

    t43 = (((x189^x190)-x191)<=x192);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x193 = -1;
	int8_t x194 = INT8_MIN;
	int8_t x196 = INT8_MIN;
	volatile int32_t t44 = -14009590;

    t44 = (((x193^x194)-x195)<=x196);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x198 = UINT16_MAX;
	uint32_t x199 = UINT32_MAX;
	int64_t x200 = -1LL;
	volatile int32_t t45 = 1545;

    t45 = (((x197^x198)-x199)<=x200);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x201 = 176788544038954979LL;
	static int8_t x203 = 25;
	volatile uint8_t x204 = UINT8_MAX;
	int32_t t46 = 1687;

    t46 = (((x201^x202)-x203)<=x204);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x205 = 0;
	static uint16_t x206 = 1U;
	int64_t x207 = -10405673437128014LL;

    t47 = (((x205^x206)-x207)<=x208);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x210 = UINT32_MAX;
	int32_t t48 = 308778;

    t48 = (((x209^x210)-x211)<=x212);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x214 = INT8_MIN;
	static int16_t x215 = -10;
	static int16_t x216 = -1;
	int32_t t49 = 3891;

    t49 = (((x213^x214)-x215)<=x216);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x218 = 0U;
	int16_t x219 = INT16_MIN;
	int8_t x220 = -1;
	volatile int32_t t50 = 499;

    t50 = (((x217^x218)-x219)<=x220);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x221 = INT32_MIN;
	int16_t x222 = 3287;
	uint64_t x223 = 1931077126413LLU;
	uint16_t x224 = UINT16_MAX;
	int32_t t51 = -8;

    t51 = (((x221^x222)-x223)<=x224);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint32_t x226 = UINT32_MAX;
	volatile int8_t x227 = 3;
	volatile int8_t x228 = INT8_MAX;
	static volatile int32_t t52 = -4972904;

    t52 = (((x225^x226)-x227)<=x228);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x229 = -1;
	uint8_t x231 = 10U;
	volatile int32_t t53 = -374;

    t53 = (((x229^x230)-x231)<=x232);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x233 = INT16_MAX;
	uint32_t x234 = 86267475U;
	int64_t x236 = -7517644112346619LL;
	static int32_t t54 = -2013;

    t54 = (((x233^x234)-x235)<=x236);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x237 = 22181;
	int16_t x238 = 6;
	int32_t x239 = 1;
	int32_t x240 = INT32_MAX;
	volatile int32_t t55 = 1;

    t55 = (((x237^x238)-x239)<=x240);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x242 = -154688876406496LL;
	uint16_t x243 = 28U;
	static int8_t x244 = INT8_MIN;
	static volatile int32_t t56 = 15590036;

    t56 = (((x241^x242)-x243)<=x244);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x245 = 182U;
	static int16_t x246 = INT16_MIN;
	int16_t x247 = -1;
	volatile int32_t t57 = -6745;

    t57 = (((x245^x246)-x247)<=x248);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x249 = -1LL;
	int8_t x250 = INT8_MIN;
	int32_t x252 = INT32_MAX;

    t58 = (((x249^x250)-x251)<=x252);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x253 = 6U;
	int64_t x254 = -182LL;
	volatile uint16_t x255 = 3U;

    t59 = (((x253^x254)-x255)<=x256);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x258 = 10641U;
	volatile int8_t x259 = INT8_MAX;
	int32_t t60 = -4620670;

    t60 = (((x257^x258)-x259)<=x260);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x263 = INT8_MIN;
	volatile int16_t x264 = INT16_MIN;
	volatile int32_t t61 = -1;

    t61 = (((x261^x262)-x263)<=x264);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x265 = 1068993858LLU;
	int8_t x267 = INT8_MAX;
	int16_t x268 = -1;
	volatile int32_t t62 = -610097;

    t62 = (((x265^x266)-x267)<=x268);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x269 = INT8_MIN;
	int8_t x270 = INT8_MAX;
	static uint16_t x271 = 450U;
	volatile int16_t x272 = 0;
	static int32_t t63 = -648658;

    t63 = (((x269^x270)-x271)<=x272);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x273 = INT16_MIN;
	static volatile int16_t x274 = INT16_MAX;
	volatile int8_t x275 = INT8_MIN;
	int16_t x276 = INT16_MAX;
	volatile int32_t t64 = -1029156055;

    t64 = (((x273^x274)-x275)<=x276);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x278 = INT32_MAX;
	volatile int32_t t65 = -236722429;

    t65 = (((x277^x278)-x279)<=x280);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x281 = INT16_MIN;
	int16_t x282 = INT16_MIN;
	int8_t x283 = -1;
	volatile uint32_t x284 = UINT32_MAX;
	int32_t t66 = 6;

    t66 = (((x281^x282)-x283)<=x284);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x287 = INT32_MIN;
	static uint8_t x288 = 49U;
	int32_t t67 = 127576003;

    t67 = (((x285^x286)-x287)<=x288);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x289 = UINT64_MAX;
	volatile uint8_t x291 = 13U;
	static int16_t x292 = 6;
	int32_t t68 = 37;

    t68 = (((x289^x290)-x291)<=x292);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x295 = -1;

    t69 = (((x293^x294)-x295)<=x296);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x298 = 14684698955989LLU;
	volatile int16_t x299 = INT16_MIN;
	int16_t x300 = -28;
	volatile int32_t t70 = 199575158;

    t70 = (((x297^x298)-x299)<=x300);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x301 = INT32_MAX;
	int16_t x302 = INT16_MIN;
	volatile int16_t x303 = 0;
	int32_t x304 = -7400;
	volatile int32_t t71 = 1;

    t71 = (((x301^x302)-x303)<=x304);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint64_t x305 = 912983877578074LLU;
	static uint8_t x306 = 1U;
	uint8_t x307 = 14U;
	int8_t x308 = -1;

    t72 = (((x305^x306)-x307)<=x308);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x310 = 647LLU;
	volatile int8_t x311 = INT8_MIN;
	int32_t x312 = -1;

    t73 = (((x309^x310)-x311)<=x312);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x317 = 237U;
	int64_t x318 = -1LL;
	int32_t x319 = INT32_MIN;
	static uint32_t x320 = 2010164429U;

    t74 = (((x317^x318)-x319)<=x320);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x321 = -1LL;
	static uint32_t x322 = 2U;
	volatile uint32_t x323 = 1817137948U;
	static int16_t x324 = -1;
	volatile int32_t t75 = 118;

    t75 = (((x321^x322)-x323)<=x324);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x325 = 7;
	int16_t x326 = INT16_MIN;
	int64_t x327 = -1LL;
	static volatile int16_t x328 = -1;
	int32_t t76 = 17771954;

    t76 = (((x325^x326)-x327)<=x328);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x329 = INT8_MIN;
	int64_t x330 = -42282494403420864LL;
	int8_t x331 = -1;
	static uint8_t x332 = 2U;
	volatile int32_t t77 = -452383;

    t77 = (((x329^x330)-x331)<=x332);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x334 = 18U;
	static uint8_t x335 = 23U;

    t78 = (((x333^x334)-x335)<=x336);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x337 = -1;
	uint32_t x338 = 620042069U;
	uint16_t x339 = 4339U;
	volatile uint32_t x340 = UINT32_MAX;
	int32_t t79 = -228577;

    t79 = (((x337^x338)-x339)<=x340);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x344 = INT8_MIN;
	int32_t t80 = -648078595;

    t80 = (((x341^x342)-x343)<=x344);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x345 = 983985U;
	volatile int8_t x347 = INT8_MIN;
	int32_t x348 = INT32_MIN;
	int32_t t81 = -1;

    t81 = (((x345^x346)-x347)<=x348);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint8_t x350 = 30U;
	int32_t x351 = 1;
	uint64_t x352 = 3198446470531973065LLU;
	int32_t t82 = 346392995;

    t82 = (((x349^x350)-x351)<=x352);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x353 = -1;
	static int32_t x356 = -1;
	int32_t t83 = 112;

    t83 = (((x353^x354)-x355)<=x356);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x357 = INT32_MAX;
	int16_t x358 = INT16_MIN;
	static int32_t x359 = -1;
	volatile int32_t x360 = INT32_MAX;
	static volatile int32_t t84 = -53;

    t84 = (((x357^x358)-x359)<=x360);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x361 = -1LL;
	static int32_t x362 = INT32_MAX;
	int64_t x363 = -1LL;

    t85 = (((x361^x362)-x363)<=x364);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x365 = 214LLU;
	int64_t x366 = 26998LL;
	int8_t x367 = INT8_MIN;
	volatile uint32_t x368 = 156981U;
	volatile int32_t t86 = -704;

    t86 = (((x365^x366)-x367)<=x368);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x369 = -1;
	static int16_t x370 = INT16_MIN;
	volatile int8_t x371 = -1;
	volatile uint32_t x372 = 69726032U;

    t87 = (((x369^x370)-x371)<=x372);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x373 = INT16_MAX;
	int16_t x374 = INT16_MAX;
	uint32_t x376 = 411U;
	static int32_t t88 = 6;

    t88 = (((x373^x374)-x375)<=x376);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x377 = UINT32_MAX;
	int8_t x378 = INT8_MIN;
	int32_t x379 = -1;
	int64_t x380 = INT64_MIN;
	volatile int32_t t89 = -104;

    t89 = (((x377^x378)-x379)<=x380);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int32_t x381 = -5196;
	volatile int8_t x382 = INT8_MAX;

    t90 = (((x381^x382)-x383)<=x384);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x385 = 63521617U;
	static int64_t x386 = -1LL;
	static uint8_t x387 = 1U;
	int16_t x388 = INT16_MIN;
	static volatile int32_t t91 = 22000811;

    t91 = (((x385^x386)-x387)<=x388);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x390 = INT16_MIN;
	int64_t x392 = 26595823699304710LL;
	volatile int32_t t92 = -139432583;

    t92 = (((x389^x390)-x391)<=x392);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x393 = 189574628754070LLU;
	uint32_t x394 = 6570210U;
	int32_t x395 = INT32_MIN;
	int32_t x396 = INT32_MIN;
	static volatile int32_t t93 = -32374785;

    t93 = (((x393^x394)-x395)<=x396);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x397 = INT8_MAX;
	int32_t x400 = -32443062;
	volatile int32_t t94 = 28;

    t94 = (((x397^x398)-x399)<=x400);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x402 = 39;
	uint64_t x403 = UINT64_MAX;
	uint32_t x404 = UINT32_MAX;
	volatile int32_t t95 = -2;

    t95 = (((x401^x402)-x403)<=x404);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x405 = 23U;
	static int32_t x406 = INT32_MIN;
	static volatile uint32_t x408 = 14229699U;
	volatile int32_t t96 = -157;

    t96 = (((x405^x406)-x407)<=x408);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x409 = INT8_MIN;
	uint64_t x410 = 137453355LLU;
	int8_t x411 = -1;
	int16_t x412 = INT16_MAX;
	volatile int32_t t97 = 2;

    t97 = (((x409^x410)-x411)<=x412);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x413 = 423755266U;
	uint32_t x415 = UINT32_MAX;
	uint64_t x416 = 5352305495LLU;
	volatile int32_t t98 = 45252807;

    t98 = (((x413^x414)-x415)<=x416);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x417 = 5247118442345230LL;
	uint32_t x418 = UINT32_MAX;
	volatile int32_t t99 = 11;

    t99 = (((x417^x418)-x419)<=x420);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x421 = INT64_MIN;
	uint64_t x422 = 6228045473926205901LLU;
	volatile uint32_t x423 = UINT32_MAX;

    t100 = (((x421^x422)-x423)<=x424);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x425 = 227;
	static volatile int32_t x426 = INT32_MAX;
	int8_t x427 = INT8_MAX;
	int32_t x428 = INT32_MIN;

    t101 = (((x425^x426)-x427)<=x428);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x430 = INT8_MIN;
	int64_t x431 = 280651214LL;
	int16_t x432 = INT16_MIN;
	volatile int32_t t102 = -65693754;

    t102 = (((x429^x430)-x431)<=x432);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int16_t x434 = 121;
	int8_t x435 = INT8_MIN;
	volatile int32_t t103 = 377164;

    t103 = (((x433^x434)-x435)<=x436);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x437 = -41;
	int8_t x438 = 0;
	static volatile uint16_t x439 = UINT16_MAX;
	volatile int16_t x440 = -24;
	volatile int32_t t104 = -9;

    t104 = (((x437^x438)-x439)<=x440);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x441 = 1U;
	volatile int64_t x442 = INT64_MAX;
	uint32_t x443 = 92U;
	int32_t t105 = -861486;

    t105 = (((x441^x442)-x443)<=x444);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x445 = -1;
	int16_t x446 = INT16_MAX;
	int32_t x447 = INT32_MIN;
	static int64_t x448 = 0LL;
	volatile int32_t t106 = -83;

    t106 = (((x445^x446)-x447)<=x448);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x449 = INT64_MIN;
	int64_t x450 = -3799130LL;
	volatile uint8_t x451 = UINT8_MAX;
	int16_t x452 = INT16_MIN;
	volatile int32_t t107 = 5;

    t107 = (((x449^x450)-x451)<=x452);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x453 = INT16_MAX;
	static uint32_t x454 = UINT32_MAX;
	int32_t x456 = -1;
	volatile int32_t t108 = -7028085;

    t108 = (((x453^x454)-x455)<=x456);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x457 = INT64_MAX;
	volatile uint32_t x458 = 1430423743U;
	uint16_t x459 = 2U;
	uint16_t x460 = 16U;
	int32_t t109 = 11144537;

    t109 = (((x457^x458)-x459)<=x460);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x461 = 14U;
	uint32_t x462 = 0U;
	static uint64_t x463 = 551945382484824LLU;
	int8_t x464 = INT8_MIN;
	static volatile int32_t t110 = 48183221;

    t110 = (((x461^x462)-x463)<=x464);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x465 = 950;
	static uint32_t x466 = UINT32_MAX;
	static int32_t x467 = INT32_MAX;
	int8_t x468 = INT8_MAX;
	volatile int32_t t111 = 145243;

    t111 = (((x465^x466)-x467)<=x468);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x469 = UINT64_MAX;
	uint16_t x470 = 13144U;
	int32_t x472 = INT32_MAX;
	static int32_t t112 = -1823916;

    t112 = (((x469^x470)-x471)<=x472);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x473 = -1;
	int8_t x474 = 63;
	volatile int32_t x475 = -1;
	static uint32_t x476 = UINT32_MAX;
	volatile int32_t t113 = -243512364;

    t113 = (((x473^x474)-x475)<=x476);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint32_t x480 = 0U;

    t114 = (((x477^x478)-x479)<=x480);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x482 = -16605722970059827LL;
	volatile uint32_t x483 = UINT32_MAX;
	static int32_t x484 = -1;
	int32_t t115 = -1811971;

    t115 = (((x481^x482)-x483)<=x484);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x485 = 1U;
	static int16_t x487 = 3;
	uint32_t x488 = 10356707U;
	static int32_t t116 = -1355;

    t116 = (((x485^x486)-x487)<=x488);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x489 = INT8_MIN;
	int32_t x491 = INT32_MIN;

    t117 = (((x489^x490)-x491)<=x492);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x493 = 4191LLU;
	uint32_t x495 = UINT32_MAX;
	uint64_t x496 = UINT64_MAX;
	volatile int32_t t118 = -1;

    t118 = (((x493^x494)-x495)<=x496);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x497 = 1;
	uint16_t x498 = 189U;
	uint16_t x499 = 31U;
	static int64_t x500 = -219856360982328LL;
	int32_t t119 = 364553022;

    t119 = (((x497^x498)-x499)<=x500);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x501 = 4461659LLU;
	int16_t x502 = INT16_MIN;
	static int16_t x503 = 15;
	static volatile int32_t t120 = 1833;

    t120 = (((x501^x502)-x503)<=x504);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x506 = INT32_MAX;
	int32_t x507 = -3619184;
	volatile int32_t t121 = -250;

    t121 = (((x505^x506)-x507)<=x508);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x509 = 133604617U;
	volatile int8_t x511 = 20;
	int16_t x512 = -1;

    t122 = (((x509^x510)-x511)<=x512);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint8_t x513 = 69U;
	uint64_t x514 = UINT64_MAX;
	int32_t x515 = 74970;
	static uint64_t x516 = 121080LLU;
	volatile int32_t t123 = -211;

    t123 = (((x513^x514)-x515)<=x516);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x517 = INT16_MIN;
	static volatile int64_t x518 = INT64_MAX;
	uint32_t x519 = 5184U;
	uint64_t x520 = 1848888784447337317LLU;

    t124 = (((x517^x518)-x519)<=x520);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x521 = INT32_MIN;
	uint8_t x522 = UINT8_MAX;
	uint8_t x523 = 41U;
	int32_t x524 = INT32_MAX;
	volatile int32_t t125 = -60;

    t125 = (((x521^x522)-x523)<=x524);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x526 = INT8_MIN;
	int16_t x527 = -1;
	int32_t x528 = 2;
	volatile int32_t t126 = -217;

    t126 = (((x525^x526)-x527)<=x528);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int64_t x529 = INT64_MIN;
	static int16_t x530 = 1381;
	int8_t x531 = INT8_MIN;
	uint32_t x532 = 1959U;
	volatile int32_t t127 = 7022;

    t127 = (((x529^x530)-x531)<=x532);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x542 = 1;
	int16_t x543 = INT16_MAX;
	int8_t x544 = -1;
	int32_t t128 = 852420824;

    t128 = (((x541^x542)-x543)<=x544);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x548 = -1LL;
	volatile int32_t t129 = -14;

    t129 = (((x545^x546)-x547)<=x548);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint16_t x549 = 21U;
	int32_t x550 = 132223400;
	uint8_t x551 = 3U;
	int16_t x552 = INT16_MIN;
	volatile int32_t t130 = 452;

    t130 = (((x549^x550)-x551)<=x552);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x556 = UINT64_MAX;
	volatile int32_t t131 = -114;

    t131 = (((x553^x554)-x555)<=x556);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x557 = INT8_MIN;
	int16_t x558 = INT16_MIN;
	volatile uint64_t x559 = UINT64_MAX;
	static volatile int32_t t132 = 2;

    t132 = (((x557^x558)-x559)<=x560);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x561 = UINT16_MAX;
	int8_t x562 = INT8_MIN;
	static int16_t x563 = 3488;
	int8_t x564 = 30;
	volatile int32_t t133 = 1;

    t133 = (((x561^x562)-x563)<=x564);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x565 = UINT64_MAX;
	int16_t x566 = 0;
	volatile int32_t x567 = -1;
	uint32_t x568 = UINT32_MAX;
	int32_t t134 = 25;

    t134 = (((x565^x566)-x567)<=x568);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x570 = -1321306LL;
	volatile int16_t x571 = -1917;
	uint32_t x572 = 233948386U;
	static volatile int32_t t135 = 0;

    t135 = (((x569^x570)-x571)<=x572);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x573 = INT16_MAX;
	uint16_t x574 = 27U;
	volatile int32_t x575 = -730;
	int32_t t136 = -191;

    t136 = (((x573^x574)-x575)<=x576);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x577 = 26;
	volatile int32_t x578 = INT32_MIN;
	int64_t x579 = INT64_MIN;
	int32_t t137 = -1;

    t137 = (((x577^x578)-x579)<=x580);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x581 = 685U;
	uint16_t x582 = 1026U;
	uint64_t x583 = 163374LLU;
	int32_t x584 = -76991958;

    t138 = (((x581^x582)-x583)<=x584);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x585 = INT8_MIN;
	uint8_t x586 = 94U;
	uint32_t x587 = 989667209U;
	int64_t x588 = -1LL;
	volatile int32_t t139 = 1;

    t139 = (((x585^x586)-x587)<=x588);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x589 = -1;
	static int16_t x590 = INT16_MIN;
	volatile int32_t t140 = -6;

    t140 = (((x589^x590)-x591)<=x592);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x595 = 1580767799897727262LL;
	int32_t x596 = INT32_MAX;

    t141 = (((x593^x594)-x595)<=x596);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x597 = INT16_MIN;
	int32_t x598 = -1;
	uint16_t x599 = UINT16_MAX;
	volatile uint32_t x600 = UINT32_MAX;

    t142 = (((x597^x598)-x599)<=x600);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x601 = UINT8_MAX;
	uint8_t x602 = 3U;
	int64_t x603 = -1LL;
	uint16_t x604 = 149U;
	int32_t t143 = 0;

    t143 = (((x601^x602)-x603)<=x604);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x606 = UINT16_MAX;
	uint16_t x607 = 18U;
	volatile uint32_t x608 = 11U;
	int32_t t144 = 70983;

    t144 = (((x605^x606)-x607)<=x608);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x609 = 87U;
	uint32_t x610 = UINT32_MAX;
	static uint64_t x611 = 27LLU;

    t145 = (((x609^x610)-x611)<=x612);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x613 = INT32_MIN;
	int16_t x614 = 2118;
	volatile uint32_t x615 = UINT32_MAX;
	int16_t x616 = -6285;
	int32_t t146 = 334590;

    t146 = (((x613^x614)-x615)<=x616);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x617 = INT64_MIN;
	static uint8_t x618 = UINT8_MAX;
	uint8_t x619 = 3U;
	static uint32_t x620 = 0U;
	volatile int32_t t147 = 787802;

    t147 = (((x617^x618)-x619)<=x620);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x621 = INT16_MIN;
	int8_t x623 = -53;
	int32_t t148 = 314058628;

    t148 = (((x621^x622)-x623)<=x624);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x625 = 18517U;
	volatile int32_t x626 = -1;
	int16_t x627 = -1;

    t149 = (((x625^x626)-x627)<=x628);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x629 = 1U;
	uint16_t x630 = 828U;
	uint8_t x631 = 15U;
	static int32_t t150 = -15;

    t150 = (((x629^x630)-x631)<=x632);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x633 = -30939;
	int16_t x634 = INT16_MIN;
	int8_t x635 = -1;
	static int64_t x636 = INT64_MAX;
	int32_t t151 = 12351908;

    t151 = (((x633^x634)-x635)<=x636);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x639 = INT32_MAX;
	static uint64_t x640 = 1LLU;
	volatile int32_t t152 = 866858;

    t152 = (((x637^x638)-x639)<=x640);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x641 = -4187628LL;
	int8_t x643 = 13;
	int32_t x644 = INT32_MIN;
	volatile int32_t t153 = -14;

    t153 = (((x641^x642)-x643)<=x644);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x645 = 1563176130871915396LLU;
	static uint64_t x646 = 358389608060383LLU;
	int64_t x647 = INT64_MIN;
	volatile int32_t x648 = INT32_MAX;

    t154 = (((x645^x646)-x647)<=x648);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x653 = INT8_MIN;
	uint64_t x654 = 1430765318LLU;
	int64_t x655 = -1LL;
	int64_t x656 = INT64_MIN;
	volatile int32_t t155 = 23364;

    t155 = (((x653^x654)-x655)<=x656);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x658 = 102U;
	int16_t x659 = INT16_MIN;
	int8_t x660 = -1;
	int32_t t156 = 319629;

    t156 = (((x657^x658)-x659)<=x660);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x661 = INT32_MIN;
	int32_t x663 = 201785763;
	uint8_t x664 = 5U;

    t157 = (((x661^x662)-x663)<=x664);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x665 = 30966LLU;
	volatile uint64_t x666 = UINT64_MAX;
	int8_t x667 = 1;
	uint64_t x668 = 510225926LLU;

    t158 = (((x665^x666)-x667)<=x668);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x669 = INT8_MAX;
	int8_t x670 = -1;
	int32_t x671 = -1;
	int16_t x672 = INT16_MAX;
	volatile int32_t t159 = 570454399;

    t159 = (((x669^x670)-x671)<=x672);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x673 = -1;
	static int16_t x674 = INT16_MIN;
	int64_t x675 = 953486928859170LL;
	uint16_t x676 = UINT16_MAX;
	volatile int32_t t160 = 4914883;

    t160 = (((x673^x674)-x675)<=x676);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x677 = -1;
	volatile int64_t x678 = INT64_MIN;
	int32_t x679 = 3;
	int64_t x680 = 5750042113984LL;
	int32_t t161 = -119;

    t161 = (((x677^x678)-x679)<=x680);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int32_t x685 = INT32_MAX;
	int64_t x686 = INT64_MAX;
	uint16_t x687 = 26008U;
	uint64_t x688 = 3213LLU;
	static int32_t t162 = -12654;

    t162 = (((x685^x686)-x687)<=x688);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x689 = INT8_MAX;
	uint64_t x692 = UINT64_MAX;
	volatile int32_t t163 = 0;

    t163 = (((x689^x690)-x691)<=x692);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x694 = 2832264268236388LLU;
	static int8_t x695 = INT8_MIN;
	uint32_t x696 = 194U;

    t164 = (((x693^x694)-x695)<=x696);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x697 = INT32_MIN;
	volatile uint16_t x698 = 3U;
	static int64_t x699 = -1LL;
	static volatile int32_t x700 = INT32_MIN;
	int32_t t165 = 3719;

    t165 = (((x697^x698)-x699)<=x700);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x702 = INT64_MIN;
	uint64_t x703 = UINT64_MAX;
	uint64_t x704 = 638349LLU;
	volatile int32_t t166 = -2917;

    t166 = (((x701^x702)-x703)<=x704);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x705 = 739U;
	static uint64_t x706 = 29LLU;
	volatile int32_t x707 = INT32_MIN;
	volatile int8_t x708 = -1;
	volatile int32_t t167 = -31821;

    t167 = (((x705^x706)-x707)<=x708);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x709 = INT32_MIN;
	volatile int32_t x710 = INT32_MIN;
	static int8_t x711 = -1;
	uint8_t x712 = 2U;
	static int32_t t168 = 651;

    t168 = (((x709^x710)-x711)<=x712);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x717 = 1;
	uint64_t x718 = 55753988LLU;
	static int8_t x719 = -1;
	volatile int8_t x720 = INT8_MAX;
	int32_t t169 = 6267503;

    t169 = (((x717^x718)-x719)<=x720);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x721 = -1;
	uint8_t x723 = UINT8_MAX;

    t170 = (((x721^x722)-x723)<=x724);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x725 = -4238644;
	static volatile uint16_t x726 = 446U;
	uint8_t x727 = 62U;
	static int32_t t171 = -5485;

    t171 = (((x725^x726)-x727)<=x728);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x729 = 12;
	int64_t x730 = 1465995LL;
	uint8_t x731 = 0U;
	int32_t x732 = 24987;
	int32_t t172 = -968;

    t172 = (((x729^x730)-x731)<=x732);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x733 = INT32_MAX;
	uint8_t x734 = 15U;
	int16_t x736 = 997;
	volatile int32_t t173 = -7273;

    t173 = (((x733^x734)-x735)<=x736);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x737 = INT16_MIN;
	uint32_t x739 = 1U;
	static int64_t x740 = INT64_MAX;
	int32_t t174 = 568277;

    t174 = (((x737^x738)-x739)<=x740);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x748 = -1;

    t175 = (((x745^x746)-x747)<=x748);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x749 = 6657;
	int8_t x750 = -30;
	int64_t x751 = 1LL;
	volatile uint8_t x752 = UINT8_MAX;
	int32_t t176 = 0;

    t176 = (((x749^x750)-x751)<=x752);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint64_t x754 = 10746750298LLU;
	int32_t x755 = INT32_MAX;
	volatile int8_t x756 = INT8_MIN;
	volatile int32_t t177 = -988512403;

    t177 = (((x753^x754)-x755)<=x756);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x757 = INT32_MIN;
	int64_t x758 = INT64_MIN;
	static uint32_t x759 = UINT32_MAX;
	int64_t x760 = INT64_MAX;

    t178 = (((x757^x758)-x759)<=x760);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x761 = INT8_MAX;
	int16_t x763 = INT16_MIN;
	int8_t x764 = INT8_MIN;
	int32_t t179 = 908004997;

    t179 = (((x761^x762)-x763)<=x764);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x765 = 8;
	int64_t x766 = INT64_MIN;
	int32_t x767 = INT32_MIN;
	int8_t x768 = INT8_MAX;
	int32_t t180 = 0;

    t180 = (((x765^x766)-x767)<=x768);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x769 = INT32_MIN;
	int64_t x770 = -1LL;
	static int16_t x772 = -1;
	volatile int32_t t181 = 84;

    t181 = (((x769^x770)-x771)<=x772);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x774 = -1;
	int8_t x775 = -1;
	volatile uint16_t x776 = 5U;
	static volatile int32_t t182 = 27850;

    t182 = (((x773^x774)-x775)<=x776);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x777 = -1LL;
	static uint8_t x779 = 90U;
	int8_t x780 = INT8_MIN;
	static volatile int32_t t183 = 208;

    t183 = (((x777^x778)-x779)<=x780);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x782 = 949579966LLU;
	volatile int16_t x783 = -1;
	uint32_t x784 = UINT32_MAX;
	volatile int32_t t184 = 980455;

    t184 = (((x781^x782)-x783)<=x784);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x786 = INT64_MAX;
	static int64_t x787 = INT64_MIN;
	uint8_t x788 = 25U;

    t185 = (((x785^x786)-x787)<=x788);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x789 = INT32_MIN;
	static int32_t x790 = INT32_MIN;
	volatile int8_t x791 = -54;
	static volatile int32_t t186 = -918242822;

    t186 = (((x789^x790)-x791)<=x792);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x793 = INT32_MAX;
	uint16_t x794 = 2U;
	int8_t x795 = 1;
	int32_t x796 = 6013422;
	volatile int32_t t187 = -201656042;

    t187 = (((x793^x794)-x795)<=x796);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x797 = INT8_MIN;
	uint16_t x798 = 29U;
	int8_t x799 = INT8_MAX;
	uint8_t x800 = 1U;
	volatile int32_t t188 = -5583895;

    t188 = (((x797^x798)-x799)<=x800);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x805 = 14136355609912801LL;
	uint16_t x806 = UINT16_MAX;
	uint8_t x807 = UINT8_MAX;
	static int64_t x808 = 1LL;
	volatile int32_t t189 = -3;

    t189 = (((x805^x806)-x807)<=x808);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x809 = -1;
	static int32_t x810 = INT32_MIN;
	volatile uint64_t x811 = 113881718LLU;
	uint32_t x812 = 3U;
	static int32_t t190 = -908640;

    t190 = (((x809^x810)-x811)<=x812);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x813 = INT16_MIN;
	static uint16_t x814 = 402U;
	int32_t x815 = INT32_MIN;
	static int8_t x816 = INT8_MIN;
	static volatile int32_t t191 = -40;

    t191 = (((x813^x814)-x815)<=x816);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x818 = 0LLU;
	int8_t x820 = -1;
	int32_t t192 = -1048581917;

    t192 = (((x817^x818)-x819)<=x820);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x821 = 52U;
	int8_t x822 = -36;
	int16_t x823 = 1761;
	static volatile int32_t t193 = -294;

    t193 = (((x821^x822)-x823)<=x824);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x825 = INT32_MIN;
	int64_t x826 = INT64_MIN;
	uint8_t x827 = 0U;
	volatile int32_t x828 = -1;

    t194 = (((x825^x826)-x827)<=x828);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x829 = -1;
	int8_t x830 = INT8_MAX;
	int64_t x831 = 10551LL;
	volatile int32_t t195 = 1539;

    t195 = (((x829^x830)-x831)<=x832);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int16_t x833 = -1;
	uint16_t x834 = 350U;
	static int16_t x835 = INT16_MIN;
	volatile int32_t x836 = -97;
	volatile int32_t t196 = 1223407;

    t196 = (((x833^x834)-x835)<=x836);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x837 = INT16_MIN;
	int32_t x838 = 8646506;
	volatile uint16_t x840 = 86U;
	static volatile int32_t t197 = 1;

    t197 = (((x837^x838)-x839)<=x840);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x841 = INT16_MAX;
	volatile int16_t x842 = -1;
	uint16_t x843 = UINT16_MAX;
	int16_t x844 = INT16_MAX;
	volatile int32_t t198 = -145;

    t198 = (((x841^x842)-x843)<=x844);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x845 = INT16_MIN;
	volatile uint64_t x846 = 3451LLU;
	int32_t x847 = INT32_MIN;
	volatile uint8_t x848 = UINT8_MAX;
	volatile int32_t t199 = -45;

    t199 = (((x845^x846)-x847)<=x848);

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

