
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

static int32_t x3 = INT32_MIN;
int64_t x4 = -723533540244440LL;
volatile int32_t x6 = -1;
int32_t x7 = -4996910;
uint16_t x8 = 7752U;
int32_t t1 = 1;
volatile uint8_t x11 = UINT8_MAX;
int32_t x14 = -1;
int8_t x25 = -1;
volatile uint8_t x27 = UINT8_MAX;
static volatile int32_t t6 = -1;
static int32_t t7 = 29600;
uint16_t x35 = UINT16_MAX;
static volatile int8_t x45 = -3;
uint32_t x47 = 1U;
static int64_t x51 = -1LL;
int64_t x56 = 893162LL;
volatile uint32_t x74 = UINT32_MAX;
int32_t t18 = -57229;
int64_t x81 = INT64_MAX;
uint16_t x83 = 9994U;
static volatile uint8_t x84 = 2U;
int32_t x86 = INT32_MIN;
volatile int32_t t21 = 12989117;
static volatile int32_t x89 = INT32_MIN;
static uint32_t x97 = 382181290U;
volatile int64_t x101 = -1LL;
uint8_t x127 = 0U;
int8_t x128 = -13;
static volatile int32_t t31 = -7121851;
static uint32_t x130 = 47842159U;
int64_t x137 = INT64_MIN;
static volatile int32_t t34 = 4;
int16_t x147 = INT16_MAX;
int8_t x148 = 8;
static volatile int32_t t37 = -3;
volatile int32_t t39 = -199;
volatile int32_t t41 = 1;
int16_t x170 = INT16_MIN;
static volatile int32_t t42 = 780015804;
uint32_t x183 = 387482626U;
uint64_t x191 = 14743LLU;
int64_t x198 = INT64_MAX;
volatile int32_t t50 = -3655656;
static int8_t x210 = INT8_MIN;
static int32_t t53 = 2;
int64_t x221 = 145449LL;
uint32_t x225 = 58745U;
static volatile int8_t x227 = -1;
uint8_t x234 = 1U;
int32_t x237 = -1;
int64_t x243 = -1LL;
int32_t x244 = -1;
int32_t t61 = -1;
int32_t x249 = INT32_MIN;
volatile int32_t x253 = 197402;
int16_t x257 = 10492;
uint64_t x263 = UINT64_MAX;
volatile int32_t t68 = 130847154;
int32_t x277 = 391663194;
volatile int32_t t69 = 31064;
static volatile int32_t x281 = INT32_MAX;
volatile int32_t x282 = -40;
int64_t x284 = INT64_MAX;
int16_t x289 = -1;
int32_t x296 = INT32_MIN;
int16_t x306 = 14;
int8_t x307 = INT8_MIN;
volatile uint16_t x322 = UINT16_MAX;
static int32_t x326 = INT32_MIN;
int32_t t82 = -38;
uint32_t x334 = 132U;
volatile int64_t x341 = INT64_MAX;
int16_t x345 = INT16_MIN;
int16_t x370 = -1;
uint8_t x372 = 47U;
volatile int32_t t94 = -3009;
static uint32_t x382 = 1944U;
int32_t x388 = INT32_MIN;
int64_t x391 = INT64_MIN;
volatile int16_t x393 = INT16_MAX;
static int32_t t98 = -32818580;
volatile uint32_t x397 = 1508237U;
uint32_t x398 = UINT32_MAX;
uint64_t x407 = 39189LLU;
int16_t x439 = -1;
static int32_t t109 = 44;
int32_t t110 = 34498;
int64_t x447 = INT64_MIN;
static uint32_t x448 = UINT32_MAX;
static int64_t x452 = -1LL;
int64_t x455 = INT64_MAX;
int16_t x461 = -1;
int32_t x465 = -13110755;
static int64_t x466 = INT64_MAX;
static int8_t x468 = INT8_MIN;
static volatile int32_t t116 = 1;
int16_t x472 = INT16_MAX;
volatile int32_t t117 = -1318;
int32_t t118 = -12548014;
int8_t x480 = -1;
static uint8_t x482 = 0U;
static int64_t x486 = -1LL;
static int16_t x494 = -1;
int32_t t123 = 125;
int8_t x505 = -1;
static int64_t x510 = 696055LL;
int16_t x513 = INT16_MIN;
int32_t x515 = INT32_MIN;
volatile uint64_t x518 = 5298LLU;
uint8_t x521 = 15U;
int32_t x522 = INT32_MIN;
static uint32_t x527 = UINT32_MAX;
static volatile int32_t x531 = INT32_MIN;
volatile int32_t t132 = -748346;
int64_t x536 = -1LL;
static int16_t x538 = INT16_MIN;
int32_t x539 = 52;
static int8_t x543 = INT8_MIN;
int32_t x547 = -1;
int16_t x560 = 25;
int32_t t139 = 18186091;
static int64_t x563 = INT64_MIN;
int32_t x564 = INT32_MIN;
int32_t t141 = 93091859;
int16_t x579 = INT16_MAX;
volatile int8_t x586 = INT8_MIN;
volatile int32_t t146 = -1151;
static int64_t x597 = INT64_MAX;
static int32_t x599 = INT32_MIN;
volatile int32_t t149 = 0;
int32_t t152 = 2856618;
int32_t x614 = INT32_MAX;
volatile int32_t t153 = -1370;
int64_t x617 = -1LL;
static int16_t x619 = -74;
int8_t x624 = INT8_MIN;
static int16_t x625 = 1;
int32_t x630 = -1;
volatile int32_t t157 = 185;
int16_t x634 = INT16_MIN;
uint16_t x639 = UINT16_MAX;
static int32_t x645 = -1;
int32_t t163 = -482330705;
int16_t x657 = INT16_MIN;
int8_t x663 = -1;
int32_t t165 = -1206;
volatile int32_t x670 = 3010194;
volatile int32_t t167 = -156;
volatile int32_t t169 = 408510175;
volatile int64_t x684 = 10434956LL;
int32_t t170 = 106;
volatile int16_t x691 = INT16_MIN;
static volatile int32_t t172 = -171463635;
int8_t x697 = 55;
volatile int32_t t176 = 843;
int16_t x709 = INT16_MAX;
static uint16_t x726 = UINT16_MAX;
int32_t t182 = -283;
static int32_t x734 = INT32_MIN;
static int16_t x736 = INT16_MIN;
int32_t t183 = -8079619;
int64_t x737 = INT64_MIN;
int32_t x738 = INT32_MAX;
int32_t x740 = -1;
int16_t x751 = 1230;
uint32_t x752 = 1884052U;
int16_t x760 = 12935;
static volatile int64_t x769 = INT64_MIN;
volatile int32_t t192 = -1958500;
int8_t x774 = -1;
volatile int64_t x782 = INT64_MIN;
volatile int32_t t196 = 21;
static int64_t x792 = INT64_MIN;
static volatile int32_t t197 = 1985651;
uint32_t x794 = 14032132U;
static int8_t x798 = INT8_MAX;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	uint8_t x2 = UINT8_MAX;
	volatile int32_t t0 = 3788939;

    t0 = ((x1<=x2)&(x3>x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 153U;

    t1 = ((x5<=x6)&(x7>x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	int8_t x10 = INT8_MIN;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -1272233;

    t2 = ((x9<=x10)&(x11>x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x13 = -685LL;
	int64_t x15 = INT64_MAX;
	int32_t x16 = 28;
	int32_t t3 = -14986032;

    t3 = ((x13<=x14)&(x15>x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = 0U;
	int32_t x18 = 514764271;
	static uint8_t x19 = 5U;
	int16_t x20 = INT16_MIN;
	volatile int32_t t4 = -196444;

    t4 = ((x17<=x18)&(x19>x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MIN;
	uint16_t x22 = 2499U;
	int64_t x23 = 7718474LL;
	uint8_t x24 = 37U;
	int32_t t5 = -3363078;

    t5 = ((x21<=x22)&(x23>x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x26 = -6361354;
	static int8_t x28 = INT8_MIN;

    t6 = ((x25<=x26)&(x27>x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = 452;
	volatile uint64_t x30 = 63281872209LLU;
	uint16_t x31 = 1678U;
	int32_t x32 = INT32_MAX;

    t7 = ((x29<=x30)&(x31>x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x33 = 45U;
	uint8_t x34 = 2U;
	uint16_t x36 = 1708U;
	int32_t t8 = 896;

    t8 = ((x33<=x34)&(x35>x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	static uint16_t x38 = 3982U;
	uint8_t x39 = 22U;
	volatile int32_t x40 = INT32_MAX;
	int32_t t9 = 1;

    t9 = ((x37<=x38)&(x39>x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 54U;
	int16_t x42 = INT16_MIN;
	uint16_t x43 = 0U;
	int32_t x44 = 971;
	int32_t t10 = -1224262;

    t10 = ((x41<=x42)&(x43>x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x46 = -1LL;
	int16_t x48 = INT16_MIN;
	int32_t t11 = 3;

    t11 = ((x45<=x46)&(x47>x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x49 = 19405552U;
	int32_t x50 = 3098705;
	uint64_t x52 = 62LLU;
	volatile int32_t t12 = 353415;

    t12 = ((x49<=x50)&(x51>x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = 1213U;
	int16_t x54 = 12;
	int64_t x55 = INT64_MIN;
	volatile int32_t t13 = 2;

    t13 = ((x53<=x54)&(x55>x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MIN;
	uint8_t x58 = 30U;
	int64_t x59 = -7059696196368072LL;
	volatile int16_t x60 = -3227;
	int32_t t14 = 63956;

    t14 = ((x57<=x58)&(x59>x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = -20532592LL;
	static volatile int16_t x62 = 418;
	int64_t x63 = -1LL;
	static volatile uint16_t x64 = 409U;
	int32_t t15 = -1;

    t15 = ((x61<=x62)&(x63>x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = INT16_MIN;
	volatile int64_t x66 = INT64_MIN;
	int32_t x67 = 14291036;
	int32_t x68 = 32106;
	int32_t t16 = -56546;

    t16 = ((x65<=x66)&(x67>x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = 86036U;
	static uint16_t x70 = 52U;
	uint16_t x71 = 53U;
	int64_t x72 = 0LL;
	volatile int32_t t17 = 261578416;

    t17 = ((x69<=x70)&(x71>x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = -1;
	uint32_t x75 = 377148864U;
	static uint32_t x76 = UINT32_MAX;

    t18 = ((x73<=x74)&(x75>x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = UINT16_MAX;
	int32_t x78 = -26;
	uint64_t x79 = 71223LLU;
	int64_t x80 = INT64_MAX;
	int32_t t19 = 17388575;

    t19 = ((x77<=x78)&(x79>x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x82 = -1;
	int32_t t20 = -341;

    t20 = ((x81<=x82)&(x83>x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int8_t x85 = -62;
	uint32_t x87 = 136U;
	uint64_t x88 = 1124LLU;

    t21 = ((x85<=x86)&(x87>x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x90 = INT8_MAX;
	int64_t x91 = 150452950076LL;
	int16_t x92 = INT16_MAX;
	volatile int32_t t22 = -19521976;

    t22 = ((x89<=x90)&(x91>x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = -1;
	uint8_t x94 = 0U;
	int8_t x95 = -1;
	static uint32_t x96 = 617169U;
	static volatile int32_t t23 = -12720;

    t23 = ((x93<=x94)&(x95>x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x98 = 358307LL;
	uint64_t x99 = UINT64_MAX;
	uint64_t x100 = 30LLU;
	volatile int32_t t24 = 1;

    t24 = ((x97<=x98)&(x99>x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x102 = UINT16_MAX;
	volatile int64_t x103 = INT64_MAX;
	int64_t x104 = 18669197176552331LL;
	volatile int32_t t25 = 184;

    t25 = ((x101<=x102)&(x103>x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = 14547587LLU;
	volatile int8_t x106 = -1;
	static volatile int8_t x107 = INT8_MIN;
	uint64_t x108 = UINT64_MAX;
	int32_t t26 = -15203483;

    t26 = ((x105<=x106)&(x107>x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = -118289079088LL;
	int64_t x110 = INT64_MIN;
	int16_t x111 = 580;
	int64_t x112 = INT64_MAX;
	int32_t t27 = 0;

    t27 = ((x109<=x110)&(x111>x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = -1;
	uint64_t x114 = 3290LLU;
	uint8_t x115 = 3U;
	static uint8_t x116 = UINT8_MAX;
	int32_t t28 = 2269943;

    t28 = ((x113<=x114)&(x115>x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = 110189518443543212LL;
	int32_t x118 = 8385227;
	volatile uint8_t x119 = UINT8_MAX;
	int16_t x120 = INT16_MAX;
	volatile int32_t t29 = 1;

    t29 = ((x117<=x118)&(x119>x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x121 = INT64_MIN;
	uint16_t x122 = 1572U;
	int64_t x123 = INT64_MIN;
	uint16_t x124 = UINT16_MAX;
	int32_t t30 = 11188484;

    t30 = ((x121<=x122)&(x123>x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = INT8_MAX;
	int64_t x126 = -4500814182558LL;

    t31 = ((x125<=x126)&(x127>x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = INT16_MIN;
	int32_t x131 = -6873255;
	uint32_t x132 = UINT32_MAX;
	int32_t t32 = -59854;

    t32 = ((x129<=x130)&(x131>x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x133 = 1659999;
	int32_t x134 = -7907262;
	int64_t x135 = INT64_MIN;
	int16_t x136 = INT16_MAX;
	int32_t t33 = 2870481;

    t33 = ((x133<=x134)&(x135>x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x138 = 11527262780LL;
	int64_t x139 = -1LL;
	volatile uint32_t x140 = 1354225U;

    t34 = ((x137<=x138)&(x139>x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint32_t x141 = 516324001U;
	uint64_t x142 = 156674LLU;
	int16_t x143 = INT16_MAX;
	uint64_t x144 = UINT64_MAX;
	int32_t t35 = 86101;

    t35 = ((x141<=x142)&(x143>x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x145 = UINT32_MAX;
	int64_t x146 = -1LL;
	volatile int32_t t36 = -212;

    t36 = ((x145<=x146)&(x147>x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x149 = UINT8_MAX;
	static volatile int16_t x150 = -14;
	int16_t x151 = INT16_MAX;
	volatile int32_t x152 = -1;

    t37 = ((x149<=x150)&(x151>x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x153 = INT16_MIN;
	int64_t x154 = INT64_MAX;
	int8_t x155 = INT8_MAX;
	volatile uint32_t x156 = 0U;
	volatile int32_t t38 = -941521;

    t38 = ((x153<=x154)&(x155>x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = -1;
	int64_t x158 = INT64_MIN;
	volatile int64_t x159 = INT64_MIN;
	uint32_t x160 = UINT32_MAX;

    t39 = ((x157<=x158)&(x159>x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x161 = UINT16_MAX;
	static int64_t x162 = INT64_MAX;
	int16_t x163 = -1;
	int16_t x164 = -1;
	volatile int32_t t40 = 1;

    t40 = ((x161<=x162)&(x163>x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MIN;
	volatile int16_t x166 = INT16_MIN;
	uint64_t x167 = 1636LLU;
	static int32_t x168 = INT32_MAX;

    t41 = ((x165<=x166)&(x167>x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x169 = 204557222656896069LL;
	uint64_t x171 = UINT64_MAX;
	int32_t x172 = INT32_MIN;

    t42 = ((x169<=x170)&(x171>x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = 19LLU;
	int32_t x174 = -174849;
	int64_t x175 = -420LL;
	uint8_t x176 = 0U;
	static volatile int32_t t43 = -193;

    t43 = ((x173<=x174)&(x175>x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint8_t x177 = UINT8_MAX;
	int8_t x178 = -18;
	int64_t x179 = 198974100LL;
	uint32_t x180 = 2413363U;
	static int32_t t44 = 0;

    t44 = ((x177<=x178)&(x179>x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x181 = 1;
	uint32_t x182 = UINT32_MAX;
	uint64_t x184 = UINT64_MAX;
	static int32_t t45 = -15;

    t45 = ((x181<=x182)&(x183>x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x185 = INT16_MIN;
	int16_t x186 = INT16_MIN;
	volatile int16_t x187 = -1;
	int16_t x188 = 13494;
	int32_t t46 = -148972800;

    t46 = ((x185<=x186)&(x187>x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = 4U;
	static int8_t x190 = INT8_MIN;
	static uint16_t x192 = UINT16_MAX;
	volatile int32_t t47 = 966593;

    t47 = ((x189<=x190)&(x191>x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = INT64_MIN;
	int32_t x194 = -407972156;
	uint8_t x195 = 50U;
	uint32_t x196 = 14U;
	static int32_t t48 = 6;

    t48 = ((x193<=x194)&(x195>x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = INT32_MAX;
	static uint32_t x199 = 230818U;
	int16_t x200 = INT16_MIN;
	int32_t t49 = -2316;

    t49 = ((x197<=x198)&(x199>x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x201 = UINT32_MAX;
	int32_t x202 = -1;
	int16_t x203 = -1;
	static int32_t x204 = INT32_MIN;

    t50 = ((x201<=x202)&(x203>x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = 51LLU;
	int16_t x206 = -1;
	volatile uint8_t x207 = UINT8_MAX;
	int64_t x208 = INT64_MAX;
	volatile int32_t t51 = -1519745;

    t51 = ((x205<=x206)&(x207>x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x209 = UINT64_MAX;
	static uint16_t x211 = 28608U;
	volatile uint16_t x212 = 30451U;
	volatile int32_t t52 = 100786469;

    t52 = ((x209<=x210)&(x211>x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = 214750166;
	int64_t x214 = -10546171859892831LL;
	int64_t x215 = 488583645378LL;
	uint16_t x216 = 31U;

    t53 = ((x213<=x214)&(x215>x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x217 = 34U;
	int64_t x218 = 332581956LL;
	static int32_t x219 = INT32_MAX;
	static int8_t x220 = 1;
	static int32_t t54 = 2349268;

    t54 = ((x217<=x218)&(x219>x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x222 = 335039611LLU;
	int8_t x223 = INT8_MAX;
	int8_t x224 = INT8_MAX;
	static int32_t t55 = 4;

    t55 = ((x221<=x222)&(x223>x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x226 = INT64_MIN;
	int64_t x228 = -9207LL;
	volatile int32_t t56 = 1;

    t56 = ((x225<=x226)&(x227>x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = 19504LL;
	static int16_t x230 = 0;
	static int32_t x231 = 64901;
	volatile uint8_t x232 = 0U;
	volatile int32_t t57 = -818844;

    t57 = ((x229<=x230)&(x231>x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x233 = 1189174634U;
	uint64_t x235 = 67LLU;
	int64_t x236 = INT64_MAX;
	volatile int32_t t58 = -3;

    t58 = ((x233<=x234)&(x235>x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint32_t x238 = 1381U;
	int16_t x239 = INT16_MIN;
	static int32_t x240 = INT32_MIN;
	int32_t t59 = 1017099002;

    t59 = ((x237<=x238)&(x239>x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint64_t x241 = 1LLU;
	volatile uint8_t x242 = UINT8_MAX;
	static volatile int32_t t60 = -4892535;

    t60 = ((x241<=x242)&(x243>x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x245 = UINT64_MAX;
	static int8_t x246 = INT8_MIN;
	uint8_t x247 = UINT8_MAX;
	static int16_t x248 = INT16_MIN;

    t61 = ((x245<=x246)&(x247>x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x250 = -48;
	static int32_t x251 = 27;
	int8_t x252 = -1;
	int32_t t62 = -497741926;

    t62 = ((x249<=x250)&(x251>x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x254 = INT8_MIN;
	int16_t x255 = INT16_MIN;
	int16_t x256 = 510;
	static int32_t t63 = 230044283;

    t63 = ((x253<=x254)&(x255>x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x258 = UINT8_MAX;
	int32_t x259 = -1;
	int16_t x260 = 2;
	static int32_t t64 = -345589;

    t64 = ((x257<=x258)&(x259>x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x261 = UINT16_MAX;
	uint64_t x262 = UINT64_MAX;
	uint8_t x264 = 11U;
	int32_t t65 = -1;

    t65 = ((x261<=x262)&(x263>x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = INT64_MIN;
	int16_t x266 = INT16_MIN;
	int8_t x267 = INT8_MIN;
	static int8_t x268 = -1;
	int32_t t66 = -11738;

    t66 = ((x265<=x266)&(x267>x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int16_t x269 = INT16_MAX;
	uint16_t x270 = 1U;
	volatile int32_t x271 = INT32_MAX;
	volatile int8_t x272 = 1;
	volatile int32_t t67 = -4712774;

    t67 = ((x269<=x270)&(x271>x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x273 = INT16_MAX;
	uint8_t x274 = UINT8_MAX;
	int16_t x275 = -1;
	int32_t x276 = INT32_MIN;

    t68 = ((x273<=x274)&(x275>x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x278 = -1;
	uint32_t x279 = 2313U;
	uint8_t x280 = 1U;

    t69 = ((x277<=x278)&(x279>x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x283 = 69LLU;
	static int32_t t70 = -147254;

    t70 = ((x281<=x282)&(x283>x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = -1LL;
	volatile int64_t x286 = -1LL;
	uint16_t x287 = 0U;
	int32_t x288 = -1;
	int32_t t71 = 3526985;

    t71 = ((x285<=x286)&(x287>x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x290 = INT16_MIN;
	static uint16_t x291 = 361U;
	int32_t x292 = -1;
	volatile int32_t t72 = -22394115;

    t72 = ((x289<=x290)&(x291>x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = INT32_MIN;
	volatile uint16_t x294 = 6935U;
	static uint64_t x295 = UINT64_MAX;
	int32_t t73 = 28337;

    t73 = ((x293<=x294)&(x295>x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x297 = -1;
	int64_t x298 = -1LL;
	int32_t x299 = INT32_MAX;
	volatile int16_t x300 = INT16_MIN;
	int32_t t74 = 3719;

    t74 = ((x297<=x298)&(x299>x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x301 = -1;
	int8_t x302 = 1;
	int16_t x303 = 1;
	int8_t x304 = INT8_MIN;
	volatile int32_t t75 = 66413571;

    t75 = ((x301<=x302)&(x303>x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = INT16_MIN;
	int64_t x308 = -130635843548LL;
	int32_t t76 = -1062621591;

    t76 = ((x305<=x306)&(x307>x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x309 = UINT32_MAX;
	static int32_t x310 = INT32_MIN;
	uint8_t x311 = 52U;
	int32_t x312 = -3068;
	static volatile int32_t t77 = 40654246;

    t77 = ((x309<=x310)&(x311>x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x313 = 1982462738515LLU;
	volatile uint32_t x314 = UINT32_MAX;
	int8_t x315 = INT8_MAX;
	uint16_t x316 = 0U;
	int32_t t78 = -1;

    t78 = ((x313<=x314)&(x315>x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = 0;
	int64_t x318 = INT64_MIN;
	volatile uint16_t x319 = UINT16_MAX;
	uint16_t x320 = UINT16_MAX;
	volatile int32_t t79 = 0;

    t79 = ((x317<=x318)&(x319>x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x321 = UINT64_MAX;
	int64_t x323 = INT64_MIN;
	int64_t x324 = INT64_MAX;
	int32_t t80 = -297;

    t80 = ((x321<=x322)&(x323>x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x325 = INT64_MAX;
	int8_t x327 = INT8_MIN;
	int32_t x328 = -1;
	static int32_t t81 = -7194253;

    t81 = ((x325<=x326)&(x327>x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x329 = 1619241241309LLU;
	uint8_t x330 = 0U;
	static int8_t x331 = INT8_MIN;
	static uint64_t x332 = 23452285LLU;

    t82 = ((x329<=x330)&(x331>x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x333 = 11771U;
	uint16_t x335 = 0U;
	uint16_t x336 = 11U;
	int32_t t83 = -263364681;

    t83 = ((x333<=x334)&(x335>x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x337 = 3U;
	static int16_t x338 = -116;
	static int16_t x339 = -1;
	int8_t x340 = -1;
	volatile int32_t t84 = -4274;

    t84 = ((x337<=x338)&(x339>x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x342 = UINT64_MAX;
	int32_t x343 = INT32_MIN;
	int64_t x344 = 1030LL;
	volatile int32_t t85 = -1;

    t85 = ((x341<=x342)&(x343>x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x346 = -1;
	int16_t x347 = -4563;
	int16_t x348 = INT16_MIN;
	volatile int32_t t86 = 196414;

    t86 = ((x345<=x346)&(x347>x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = -1;
	int64_t x350 = -1LL;
	uint64_t x351 = 23325LLU;
	static int8_t x352 = INT8_MAX;
	volatile int32_t t87 = -1895340;

    t87 = ((x349<=x350)&(x351>x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = INT16_MAX;
	int64_t x354 = -1LL;
	int16_t x355 = -1;
	volatile uint8_t x356 = 6U;
	int32_t t88 = -7068;

    t88 = ((x353<=x354)&(x355>x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = 6LL;
	int8_t x358 = INT8_MIN;
	int8_t x359 = -1;
	int32_t x360 = INT32_MIN;
	int32_t t89 = 491893;

    t89 = ((x357<=x358)&(x359>x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x361 = INT32_MIN;
	int32_t x362 = INT32_MIN;
	static int8_t x363 = -1;
	uint64_t x364 = 23430LLU;
	volatile int32_t t90 = -30657;

    t90 = ((x361<=x362)&(x363>x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x365 = 648262LL;
	int64_t x366 = -1LL;
	int32_t x367 = INT32_MIN;
	int16_t x368 = 5616;
	static int32_t t91 = 30397;

    t91 = ((x365<=x366)&(x367>x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = INT8_MIN;
	int8_t x371 = INT8_MIN;
	int32_t t92 = 42;

    t92 = ((x369<=x370)&(x371>x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x373 = 1747342636U;
	int16_t x374 = -1;
	int32_t x375 = INT32_MIN;
	volatile int16_t x376 = -1;
	int32_t t93 = 13;

    t93 = ((x373<=x374)&(x375>x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x377 = UINT64_MAX;
	uint16_t x378 = 804U;
	static int32_t x379 = INT32_MAX;
	uint32_t x380 = 769291878U;

    t94 = ((x377<=x378)&(x379>x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = INT8_MAX;
	uint8_t x383 = UINT8_MAX;
	int64_t x384 = -1LL;
	static int32_t t95 = -159816627;

    t95 = ((x381<=x382)&(x383>x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x385 = UINT32_MAX;
	int8_t x386 = -1;
	int64_t x387 = 478117088222189106LL;
	volatile int32_t t96 = 79799;

    t96 = ((x385<=x386)&(x387>x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x389 = UINT32_MAX;
	int8_t x390 = -1;
	int8_t x392 = -20;
	volatile int32_t t97 = -52863025;

    t97 = ((x389<=x390)&(x391>x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x394 = INT64_MIN;
	int32_t x395 = -1;
	volatile int8_t x396 = -1;

    t98 = ((x393<=x394)&(x395>x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x399 = -1;
	volatile int16_t x400 = INT16_MAX;
	int32_t t99 = 15;

    t99 = ((x397<=x398)&(x399>x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = INT8_MIN;
	int64_t x402 = -101245LL;
	uint16_t x403 = 23865U;
	int32_t x404 = -4340;
	int32_t t100 = -88401;

    t100 = ((x401<=x402)&(x403>x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x405 = 114U;
	int32_t x406 = -1;
	volatile int16_t x408 = INT16_MIN;
	volatile int32_t t101 = -127;

    t101 = ((x405<=x406)&(x407>x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MAX;
	uint32_t x410 = UINT32_MAX;
	volatile int64_t x411 = -615802159198872LL;
	int64_t x412 = INT64_MIN;
	int32_t t102 = 1;

    t102 = ((x409<=x410)&(x411>x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = -1;
	static int16_t x414 = INT16_MIN;
	int8_t x415 = 4;
	int8_t x416 = -1;
	int32_t t103 = -61;

    t103 = ((x413<=x414)&(x415>x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x417 = INT64_MAX;
	uint32_t x418 = 4083511U;
	volatile int32_t x419 = INT32_MIN;
	int32_t x420 = -1;
	int32_t t104 = 4553263;

    t104 = ((x417<=x418)&(x419>x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = INT64_MIN;
	int16_t x422 = INT16_MIN;
	static int8_t x423 = 1;
	volatile uint32_t x424 = 2U;
	int32_t t105 = -1905004;

    t105 = ((x421<=x422)&(x423>x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x425 = -79227;
	int64_t x426 = INT64_MAX;
	int64_t x427 = -1LL;
	int64_t x428 = INT64_MIN;
	int32_t t106 = 800414523;

    t106 = ((x425<=x426)&(x427>x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = 231353;
	volatile int64_t x430 = INT64_MIN;
	int64_t x431 = -1LL;
	int8_t x432 = INT8_MAX;
	int32_t t107 = -156;

    t107 = ((x429<=x430)&(x431>x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = -224;
	static uint64_t x434 = 11248327751826LLU;
	uint16_t x435 = UINT16_MAX;
	int64_t x436 = -1LL;
	static int32_t t108 = -42748380;

    t108 = ((x433<=x434)&(x435>x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint8_t x437 = 0U;
	uint64_t x438 = UINT64_MAX;
	int8_t x440 = INT8_MIN;

    t109 = ((x437<=x438)&(x439>x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = INT8_MAX;
	uint8_t x442 = 5U;
	volatile int32_t x443 = INT32_MIN;
	int8_t x444 = INT8_MIN;

    t110 = ((x441<=x442)&(x443>x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x445 = UINT32_MAX;
	volatile int32_t x446 = INT32_MIN;
	volatile int32_t t111 = 7;

    t111 = ((x445<=x446)&(x447>x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x449 = INT16_MIN;
	int32_t x450 = -204;
	static uint32_t x451 = 5U;
	int32_t t112 = -603;

    t112 = ((x449<=x450)&(x451>x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = INT32_MAX;
	int32_t x454 = 1970582;
	volatile uint64_t x456 = 15400093LLU;
	volatile int32_t t113 = 1;

    t113 = ((x453<=x454)&(x455>x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = -1;
	int32_t x458 = INT32_MAX;
	uint16_t x459 = 204U;
	uint64_t x460 = 52LLU;
	static int32_t t114 = 227865;

    t114 = ((x457<=x458)&(x459>x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x462 = INT16_MIN;
	int64_t x463 = -1LL;
	uint8_t x464 = 14U;
	volatile int32_t t115 = -13;

    t115 = ((x461<=x462)&(x463>x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x467 = UINT32_MAX;

    t116 = ((x465<=x466)&(x467>x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x469 = 16U;
	int16_t x470 = INT16_MIN;
	static int8_t x471 = 0;

    t117 = ((x469<=x470)&(x471>x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = -1;
	volatile int16_t x474 = INT16_MIN;
	int8_t x475 = 21;
	volatile int8_t x476 = INT8_MIN;

    t118 = ((x473<=x474)&(x475>x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = -1;
	volatile int8_t x478 = INT8_MIN;
	uint16_t x479 = 22652U;
	int32_t t119 = 1070549;

    t119 = ((x477<=x478)&(x479>x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x481 = 1;
	volatile int64_t x483 = -10LL;
	static volatile uint32_t x484 = 2U;
	static int32_t t120 = -3;

    t120 = ((x481<=x482)&(x483>x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x485 = UINT16_MAX;
	volatile int64_t x487 = -1LL;
	uint8_t x488 = 29U;
	volatile int32_t t121 = 3;

    t121 = ((x485<=x486)&(x487>x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x489 = 52123LLU;
	static int32_t x490 = -1;
	volatile int32_t x491 = INT32_MIN;
	uint16_t x492 = UINT16_MAX;
	volatile int32_t t122 = 964;

    t122 = ((x489<=x490)&(x491>x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = -1LL;
	int8_t x495 = INT8_MIN;
	int64_t x496 = -225152446283284176LL;

    t123 = ((x493<=x494)&(x495>x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = 7626043333793024LL;
	uint32_t x498 = 2U;
	volatile int32_t x499 = -5301681;
	uint16_t x500 = UINT16_MAX;
	volatile int32_t t124 = -181052167;

    t124 = ((x497<=x498)&(x499>x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x501 = UINT32_MAX;
	static uint32_t x502 = 51562846U;
	uint32_t x503 = 15U;
	volatile int8_t x504 = INT8_MIN;
	volatile int32_t t125 = 929555988;

    t125 = ((x501<=x502)&(x503>x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x506 = 65951354U;
	int64_t x507 = INT64_MIN;
	int32_t x508 = INT32_MIN;
	int32_t t126 = -28;

    t126 = ((x505<=x506)&(x507>x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x509 = INT32_MAX;
	volatile int8_t x511 = 1;
	volatile int8_t x512 = -1;
	volatile int32_t t127 = 48;

    t127 = ((x509<=x510)&(x511>x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x514 = -7;
	int16_t x516 = INT16_MIN;
	static volatile int32_t t128 = 26190;

    t128 = ((x513<=x514)&(x515>x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x517 = INT32_MIN;
	uint16_t x519 = 1579U;
	int16_t x520 = 56;
	volatile int32_t t129 = -1;

    t129 = ((x517<=x518)&(x519>x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint8_t x523 = 5U;
	int8_t x524 = -33;
	int32_t t130 = 97570626;

    t130 = ((x521<=x522)&(x523>x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x525 = 261U;
	int16_t x526 = 1911;
	int8_t x528 = INT8_MIN;
	int32_t t131 = -13942;

    t131 = ((x525<=x526)&(x527>x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = INT8_MIN;
	int8_t x530 = INT8_MIN;
	volatile uint8_t x532 = UINT8_MAX;

    t132 = ((x529<=x530)&(x531>x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x533 = UINT64_MAX;
	uint64_t x534 = UINT64_MAX;
	int64_t x535 = INT64_MAX;
	volatile int32_t t133 = -2;

    t133 = ((x533<=x534)&(x535>x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = INT32_MIN;
	uint8_t x540 = UINT8_MAX;
	volatile int32_t t134 = -5314900;

    t134 = ((x537<=x538)&(x539>x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x541 = 1LL;
	int8_t x542 = -4;
	volatile int16_t x544 = 156;
	int32_t t135 = 1665736;

    t135 = ((x541<=x542)&(x543>x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = INT32_MIN;
	uint16_t x546 = 11U;
	int16_t x548 = -584;
	int32_t t136 = 64669;

    t136 = ((x545<=x546)&(x547>x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x549 = 3;
	int16_t x550 = -1;
	int32_t x551 = -1;
	uint64_t x552 = 3690607903228557LLU;
	static int32_t t137 = -67713745;

    t137 = ((x549<=x550)&(x551>x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = INT16_MAX;
	int8_t x554 = INT8_MIN;
	int8_t x555 = 42;
	uint16_t x556 = 361U;
	static volatile int32_t t138 = -64603614;

    t138 = ((x553<=x554)&(x555>x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x557 = 110626047LLU;
	int64_t x558 = -44652804LL;
	int8_t x559 = -1;

    t139 = ((x557<=x558)&(x559>x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = -1;
	static int32_t x562 = INT32_MIN;
	int32_t t140 = -73;

    t140 = ((x561<=x562)&(x563>x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = -1;
	uint16_t x566 = 846U;
	uint16_t x567 = 30633U;
	int32_t x568 = INT32_MIN;

    t141 = ((x565<=x566)&(x567>x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = INT8_MIN;
	int16_t x570 = INT16_MIN;
	int16_t x571 = -342;
	uint32_t x572 = 41U;
	volatile int32_t t142 = 496;

    t142 = ((x569<=x570)&(x571>x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint64_t x573 = 468022LLU;
	int64_t x574 = INT64_MIN;
	int32_t x575 = 366483603;
	volatile int32_t x576 = INT32_MIN;
	int32_t t143 = -107;

    t143 = ((x573<=x574)&(x575>x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = -1;
	volatile uint8_t x578 = 1U;
	static volatile int64_t x580 = -98585118883LL;
	static int32_t t144 = -939945589;

    t144 = ((x577<=x578)&(x579>x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x581 = 23745U;
	static uint64_t x582 = 73LLU;
	int64_t x583 = INT64_MIN;
	int32_t x584 = -1;
	int32_t t145 = 1365;

    t145 = ((x581<=x582)&(x583>x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x585 = 37U;
	int64_t x587 = INT64_MAX;
	int8_t x588 = -1;

    t146 = ((x585<=x586)&(x587>x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = INT8_MIN;
	volatile int16_t x590 = 5786;
	uint8_t x591 = 39U;
	int32_t x592 = -1;
	int32_t t147 = 473;

    t147 = ((x589<=x590)&(x591>x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x593 = 1243724LLU;
	uint32_t x594 = 1079U;
	static volatile uint64_t x595 = 11LLU;
	int32_t x596 = INT32_MAX;
	int32_t t148 = -230537164;

    t148 = ((x593<=x594)&(x595>x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x598 = INT8_MIN;
	static int16_t x600 = 58;

    t149 = ((x597<=x598)&(x599>x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = -1;
	volatile int32_t x602 = -8006361;
	int64_t x603 = 63974747892824236LL;
	int8_t x604 = 0;
	static int32_t t150 = -50;

    t150 = ((x601<=x602)&(x603>x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x605 = -260980;
	int32_t x606 = -1;
	uint64_t x607 = 5701707996541687908LLU;
	volatile int64_t x608 = INT64_MIN;
	int32_t t151 = 2030026;

    t151 = ((x605<=x606)&(x607>x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x609 = -15356607;
	uint32_t x610 = 4544573U;
	uint32_t x611 = 233U;
	int16_t x612 = -1;

    t152 = ((x609<=x610)&(x611>x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = -1;
	int32_t x615 = INT32_MAX;
	uint16_t x616 = UINT16_MAX;

    t153 = ((x613<=x614)&(x615>x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x618 = 882LLU;
	int16_t x620 = INT16_MIN;
	volatile int32_t t154 = 127133;

    t154 = ((x617<=x618)&(x619>x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x621 = UINT16_MAX;
	static int16_t x622 = -994;
	volatile uint8_t x623 = UINT8_MAX;
	int32_t t155 = -152740426;

    t155 = ((x621<=x622)&(x623>x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x626 = INT16_MIN;
	uint16_t x627 = UINT16_MAX;
	int16_t x628 = INT16_MIN;
	int32_t t156 = -31815147;

    t156 = ((x625<=x626)&(x627>x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x629 = 5844710LLU;
	static int16_t x631 = 839;
	int16_t x632 = 2626;

    t157 = ((x629<=x630)&(x631>x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = 54U;
	uint8_t x635 = 8U;
	volatile int64_t x636 = INT64_MIN;
	int32_t t158 = -1;

    t158 = ((x633<=x634)&(x635>x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint16_t x637 = 470U;
	uint32_t x638 = 0U;
	int32_t x640 = INT32_MAX;
	static int32_t t159 = 7530;

    t159 = ((x637<=x638)&(x639>x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = 796;
	int16_t x642 = INT16_MIN;
	uint16_t x643 = 1363U;
	int16_t x644 = -5429;
	int32_t t160 = 26355;

    t160 = ((x641<=x642)&(x643>x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x646 = INT32_MIN;
	int32_t x647 = INT32_MAX;
	int16_t x648 = INT16_MAX;
	volatile int32_t t161 = -790970830;

    t161 = ((x645<=x646)&(x647>x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x649 = UINT8_MAX;
	int32_t x650 = 88571709;
	int8_t x651 = -1;
	int32_t x652 = -1318;
	int32_t t162 = 261381385;

    t162 = ((x649<=x650)&(x651>x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x653 = UINT32_MAX;
	static int64_t x654 = -1LL;
	int32_t x655 = -656510474;
	volatile uint32_t x656 = UINT32_MAX;

    t163 = ((x653<=x654)&(x655>x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x658 = -81;
	uint8_t x659 = 6U;
	int8_t x660 = INT8_MIN;
	int32_t t164 = 41817;

    t164 = ((x657<=x658)&(x659>x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = 3;
	int32_t x662 = -1;
	int16_t x664 = -1;

    t165 = ((x661<=x662)&(x663>x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = INT32_MIN;
	int8_t x666 = -33;
	volatile int64_t x667 = 64187888965503206LL;
	static int8_t x668 = INT8_MIN;
	volatile int32_t t166 = -1;

    t166 = ((x665<=x666)&(x667>x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = -20745LL;
	uint64_t x671 = 1878624LLU;
	uint64_t x672 = 6372135834664LLU;

    t167 = ((x669<=x670)&(x671>x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = 0;
	int16_t x674 = INT16_MIN;
	volatile int16_t x675 = 0;
	int32_t x676 = -1;
	int32_t t168 = -2;

    t168 = ((x673<=x674)&(x675>x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int8_t x677 = 0;
	int64_t x678 = -1LL;
	int8_t x679 = -2;
	int8_t x680 = -1;

    t169 = ((x677<=x678)&(x679>x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = -1LL;
	uint32_t x682 = UINT32_MAX;
	int64_t x683 = 1573314393340254LL;

    t170 = ((x681<=x682)&(x683>x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x685 = 14U;
	static int16_t x686 = 0;
	int64_t x687 = 6412913LL;
	static uint32_t x688 = 0U;
	volatile int32_t t171 = -12760855;

    t171 = ((x685<=x686)&(x687>x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint16_t x689 = 2U;
	static int64_t x690 = INT64_MAX;
	int16_t x692 = -5983;

    t172 = ((x689<=x690)&(x691>x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = INT32_MIN;
	int32_t x694 = INT32_MIN;
	int8_t x695 = 1;
	volatile uint8_t x696 = UINT8_MAX;
	volatile int32_t t173 = -839792968;

    t173 = ((x693<=x694)&(x695>x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x698 = UINT8_MAX;
	static int8_t x699 = INT8_MAX;
	int64_t x700 = INT64_MIN;
	static volatile int32_t t174 = -2215495;

    t174 = ((x697<=x698)&(x699>x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint32_t x701 = 936645682U;
	int8_t x702 = 0;
	int16_t x703 = INT16_MAX;
	uint8_t x704 = 59U;
	volatile int32_t t175 = -1044329342;

    t175 = ((x701<=x702)&(x703>x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile uint16_t x705 = UINT16_MAX;
	int16_t x706 = 2742;
	int32_t x707 = INT32_MIN;
	uint16_t x708 = 465U;

    t176 = ((x705<=x706)&(x707>x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x710 = 207U;
	static volatile int64_t x711 = INT64_MIN;
	volatile int16_t x712 = 254;
	int32_t t177 = -457620;

    t177 = ((x709<=x710)&(x711>x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = -1;
	static uint64_t x714 = 240413889302231LLU;
	int64_t x715 = INT64_MIN;
	static volatile uint64_t x716 = UINT64_MAX;
	int32_t t178 = 1830;

    t178 = ((x713<=x714)&(x715>x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = 4760;
	uint64_t x718 = UINT64_MAX;
	uint64_t x719 = UINT64_MAX;
	int64_t x720 = INT64_MIN;
	int32_t t179 = -1558914;

    t179 = ((x717<=x718)&(x719>x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x721 = -1LL;
	uint64_t x722 = 9391100743LLU;
	int32_t x723 = INT32_MIN;
	int32_t x724 = -1;
	volatile int32_t t180 = -1;

    t180 = ((x721<=x722)&(x723>x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x725 = 203294416;
	uint32_t x727 = 2742561U;
	volatile int64_t x728 = INT64_MAX;
	int32_t t181 = 5830;

    t181 = ((x725<=x726)&(x727>x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x729 = INT64_MIN;
	int64_t x730 = INT64_MIN;
	int64_t x731 = INT64_MAX;
	static uint16_t x732 = 76U;

    t182 = ((x729<=x730)&(x731>x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint32_t x733 = 29693U;
	volatile int8_t x735 = INT8_MAX;

    t183 = ((x733<=x734)&(x735>x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x739 = INT64_MIN;
	volatile int32_t t184 = -12;

    t184 = ((x737<=x738)&(x739>x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x741 = INT8_MAX;
	volatile int64_t x742 = -1LL;
	static volatile uint64_t x743 = 9326780247137LLU;
	int8_t x744 = INT8_MAX;
	static volatile int32_t t185 = 2;

    t185 = ((x741<=x742)&(x743>x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = -1;
	int32_t x746 = 5;
	int32_t x747 = -15235;
	static int8_t x748 = INT8_MIN;
	int32_t t186 = 1;

    t186 = ((x745<=x746)&(x747>x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x749 = UINT16_MAX;
	static int64_t x750 = 4823873622LL;
	static volatile int32_t t187 = -3;

    t187 = ((x749<=x750)&(x751>x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x753 = 1;
	int64_t x754 = INT64_MAX;
	volatile int64_t x755 = INT64_MIN;
	int16_t x756 = INT16_MIN;
	int32_t t188 = -718600791;

    t188 = ((x753<=x754)&(x755>x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = INT16_MIN;
	int64_t x758 = -1LL;
	uint8_t x759 = 0U;
	int32_t t189 = 242995;

    t189 = ((x757<=x758)&(x759>x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x761 = 9;
	int16_t x762 = 15336;
	volatile uint8_t x763 = 14U;
	volatile uint16_t x764 = 0U;
	volatile int32_t t190 = 2764;

    t190 = ((x761<=x762)&(x763>x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = -5;
	volatile int16_t x766 = -3;
	static volatile int64_t x767 = INT64_MIN;
	volatile uint16_t x768 = UINT16_MAX;
	volatile int32_t t191 = -18;

    t191 = ((x765<=x766)&(x767>x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x770 = INT16_MIN;
	int8_t x771 = -49;
	int32_t x772 = -27;

    t192 = ((x769<=x770)&(x771>x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = INT8_MIN;
	volatile int16_t x775 = INT16_MIN;
	volatile int64_t x776 = INT64_MIN;
	static volatile int32_t t193 = 438;

    t193 = ((x773<=x774)&(x775>x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = 231LL;
	int8_t x778 = INT8_MIN;
	int16_t x779 = INT16_MIN;
	static int32_t x780 = INT32_MAX;
	volatile int32_t t194 = -390167987;

    t194 = ((x777<=x778)&(x779>x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x781 = UINT16_MAX;
	uint8_t x783 = UINT8_MAX;
	uint32_t x784 = 1179U;
	volatile int32_t t195 = 1;

    t195 = ((x781<=x782)&(x783>x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x785 = 57664U;
	volatile int64_t x786 = INT64_MIN;
	static int64_t x787 = -1LL;
	static int8_t x788 = INT8_MIN;

    t196 = ((x785<=x786)&(x787>x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x789 = INT64_MAX;
	volatile int8_t x790 = 13;
	int32_t x791 = -1;

    t197 = ((x789<=x790)&(x791>x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x793 = UINT32_MAX;
	int32_t x795 = INT32_MIN;
	uint32_t x796 = 676441486U;
	int32_t t198 = -3134;

    t198 = ((x793<=x794)&(x795>x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x797 = 1;
	int16_t x799 = 197;
	int16_t x800 = -6236;
	volatile int32_t t199 = 0;

    t199 = ((x797<=x798)&(x799>x800));

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

