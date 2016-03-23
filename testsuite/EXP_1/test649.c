
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

static uint32_t x9 = UINT32_MAX;
int8_t x11 = INT8_MIN;
static volatile int64_t t1 = 7285575LL;
int64_t x25 = -1LL;
volatile int64_t x26 = -1LL;
int8_t x33 = INT8_MIN;
int64_t x34 = INT64_MIN;
int64_t x36 = INT64_MAX;
uint64_t x39 = 292965LLU;
int16_t x42 = INT16_MIN;
volatile int64_t t7 = 0LL;
int8_t x49 = INT8_MIN;
volatile uint16_t x51 = UINT16_MAX;
volatile int16_t x52 = INT16_MIN;
volatile int8_t x54 = -1;
static int8_t x70 = 10;
uint32_t x75 = 877U;
static int32_t x76 = INT32_MIN;
uint32_t t15 = 1281986U;
static int32_t x88 = -1;
int64_t x89 = INT64_MIN;
volatile int16_t x91 = INT16_MAX;
uint64_t x93 = UINT64_MAX;
int8_t x96 = INT8_MAX;
int8_t x98 = INT8_MAX;
int8_t x104 = -1;
uint16_t x105 = UINT16_MAX;
static int64_t x112 = -1LL;
int32_t x113 = INT32_MAX;
static int16_t x116 = -7;
int32_t x125 = -1;
uint64_t x127 = 16735218530691LLU;
uint32_t x128 = 4103529U;
int32_t x136 = INT32_MIN;
static volatile int64_t t29 = -437947LL;
volatile int32_t x139 = INT32_MAX;
static int32_t x147 = INT32_MIN;
uint8_t x148 = 2U;
int8_t x149 = INT8_MIN;
uint8_t x153 = UINT8_MAX;
static volatile int64_t x155 = -1696433LL;
int64_t x156 = INT64_MAX;
static volatile uint64_t x158 = UINT64_MAX;
volatile uint32_t x163 = 110U;
int16_t x167 = 21;
int16_t x168 = INT16_MAX;
int8_t x169 = INT8_MIN;
int16_t x170 = 63;
int64_t x173 = INT64_MIN;
int16_t x175 = INT16_MIN;
volatile int64_t x176 = INT64_MIN;
int64_t t39 = 95583LL;
int64_t x191 = -37208289961249LL;
volatile int64_t t42 = 4LL;
int16_t x195 = -11456;
int8_t x197 = 0;
uint8_t x210 = UINT8_MAX;
static int32_t x231 = INT32_MAX;
int32_t x232 = INT32_MIN;
volatile int64_t x239 = INT64_MIN;
uint64_t t52 = 1678LLU;
int8_t x245 = INT8_MIN;
int8_t x249 = -3;
int16_t x250 = INT16_MIN;
static int8_t x252 = -10;
uint64_t x260 = 944LLU;
uint64_t t56 = 6291200492202080440LLU;
volatile uint32_t x273 = UINT32_MAX;
int8_t x275 = INT8_MIN;
static int16_t x277 = INT16_MAX;
int8_t x279 = 3;
volatile uint32_t t61 = 132U;
static int64_t x283 = INT64_MAX;
uint32_t x285 = 11329020U;
int32_t x291 = 1086748;
static int32_t x294 = 97;
int8_t x295 = INT8_MIN;
uint32_t x303 = 456796U;
static volatile int64_t t67 = 603322596217LL;
volatile int64_t t69 = -29427954LL;
static uint32_t x333 = UINT32_MAX;
volatile int32_t x334 = -1;
static uint64_t t74 = 112028833LLU;
uint64_t x344 = 1046748863LLU;
uint64_t t78 = 47822729606LLU;
static int64_t x354 = -1LL;
uint16_t x356 = UINT16_MAX;
uint8_t x357 = 1U;
static volatile int8_t x360 = -1;
uint8_t x362 = 2U;
static volatile uint32_t t81 = 511801U;
int8_t x365 = INT8_MAX;
volatile int16_t x371 = -3;
static volatile int16_t x379 = INT16_MAX;
int64_t x380 = -46147086332LL;
int64_t x391 = INT64_MIN;
int8_t x404 = INT8_MIN;
int64_t x410 = INT64_MIN;
static int16_t x415 = -1168;
volatile int64_t t92 = -1914497LL;
volatile int16_t x421 = INT16_MIN;
int64_t x428 = -1LL;
uint16_t x437 = 892U;
int64_t x438 = INT64_MIN;
int16_t x440 = -1;
static volatile int64_t t97 = 58445986305LL;
uint8_t x443 = 24U;
uint32_t x445 = UINT32_MAX;
uint64_t t100 = 63LLU;
int16_t x461 = -8327;
int64_t x463 = INT64_MIN;
static int32_t x466 = 4516;
uint64_t x475 = 15223LLU;
volatile uint32_t x476 = 9U;
uint64_t t106 = 3353LLU;
volatile uint32_t x477 = UINT32_MAX;
static uint32_t x478 = 4853979U;
static uint16_t x483 = UINT16_MAX;
volatile uint64_t x503 = UINT64_MAX;
int64_t x504 = INT64_MIN;
int16_t x505 = INT16_MIN;
static int8_t x508 = INT8_MAX;
int32_t x510 = -1;
volatile int64_t t114 = -94730LL;
static uint8_t x515 = UINT8_MAX;
volatile int32_t x517 = 5051044;
int8_t x519 = -6;
int64_t x527 = INT64_MIN;
static int64_t x532 = -479205292347LL;
int32_t x535 = 66813;
int32_t x536 = INT32_MIN;
volatile int64_t t121 = -16LL;
int32_t x544 = -50;
int64_t t123 = -49762942LL;
uint64_t x551 = 192177851619LLU;
volatile uint64_t t124 = 3LLU;
int16_t x556 = -54;
int16_t x560 = INT16_MIN;
uint16_t x566 = 23114U;
int64_t x575 = INT64_MAX;
int16_t x580 = INT16_MIN;
volatile int32_t t131 = -1;
static int16_t x582 = -6399;
int64_t x589 = -1LL;
int64_t x591 = INT64_MAX;
int16_t x595 = 3730;
int64_t x596 = 206LL;
int8_t x598 = 1;
static int8_t x600 = 8;
volatile int8_t x601 = 0;
int64_t x604 = INT64_MIN;
static int64_t t138 = -15115325728LL;
int64_t t139 = 35LL;
volatile int32_t x617 = INT32_MIN;
int32_t x620 = -1;
static int64_t t140 = -1954621094975844LL;
uint32_t x623 = 10905U;
int8_t x628 = -7;
static int64_t x630 = 5625146LL;
volatile uint64_t t143 = 5269720649LLU;
uint8_t x634 = 12U;
static int64_t t144 = 106850968817215343LL;
static volatile int16_t x646 = 2;
int32_t x668 = 6304;
volatile uint64_t t151 = 1688613327439251LLU;
int64_t x669 = 2325563LL;
volatile uint32_t x672 = 1517U;
int16_t x676 = 39;
uint32_t x677 = UINT32_MAX;
int32_t x680 = 67887;
int16_t x683 = 145;
int64_t x685 = INT64_MIN;
volatile int32_t x696 = INT32_MIN;
volatile uint16_t x698 = 59U;
static int64_t t159 = 300102047666438934LL;
uint16_t x703 = UINT16_MAX;
volatile uint8_t x706 = 54U;
int64_t x712 = -1035737049163343LL;
int64_t t162 = -3102179805769143469LL;
static uint64_t x716 = 543394476721634951LLU;
volatile uint64_t t163 = 25LLU;
uint32_t x717 = 8U;
int64_t x721 = -1LL;
int64_t t166 = 75519703LL;
uint64_t x729 = 1546097115422LLU;
int16_t x736 = -4;
static volatile uint32_t t169 = 0U;
int16_t x748 = -1;
int8_t x757 = 7;
int32_t x765 = INT32_MIN;
uint16_t x784 = UINT16_MAX;
volatile int16_t x791 = INT16_MAX;
uint32_t x794 = 44U;
int16_t x795 = 1722;
int32_t x801 = -1;
uint16_t x802 = UINT16_MAX;
int16_t x817 = 205;
static volatile int64_t x818 = INT64_MAX;
static int8_t x825 = INT8_MIN;
int64_t x826 = -1LL;
int32_t x828 = INT32_MIN;
uint8_t x836 = 1U;
static int8_t x851 = 2;
static uint32_t t194 = 299375546U;
volatile int32_t x853 = INT32_MAX;
static int16_t x856 = -1;
volatile int64_t t196 = -709LL;
int64_t x868 = -1LL;
int16_t x872 = -1;


void f0(void) {
    	static int16_t x5 = INT16_MIN;
	uint64_t x6 = 196285428LLU;
	int16_t x7 = INT16_MAX;
	static volatile int64_t x8 = INT64_MIN;
	uint64_t t0 = 145873476679026LLU;

    t0 = (((x5/x6)%x7)%x8);

    if (t0 != 18801LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x10 = -185458LL;
	int64_t x12 = INT64_MIN;

    t1 = (((x9/x10)%x11)%x12);

    if (t1 != -118LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint8_t x13 = 75U;
	uint32_t x14 = 105903U;
	int32_t x15 = INT32_MAX;
	int16_t x16 = -2321;
	static uint32_t t2 = 93U;

    t2 = (((x13/x14)%x15)%x16);

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x27 = INT16_MIN;
	static int64_t x28 = 183263LL;
	volatile int64_t t3 = 2446LL;

    t3 = (((x25/x26)%x27)%x28);

    if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x29 = UINT16_MAX;
	uint32_t x30 = 4532341U;
	int64_t x31 = -18522120844LL;
	int64_t x32 = INT64_MIN;
	volatile int64_t t4 = -41009600955492LL;

    t4 = (((x29/x30)%x31)%x32);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int64_t x35 = INT64_MIN;
	int64_t t5 = 9517909708189LL;

    t5 = (((x33/x34)%x35)%x36);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x37 = 1998U;
	int8_t x38 = INT8_MIN;
	int64_t x40 = INT64_MIN;
	uint64_t t6 = 9344684LLU;

    t6 = (((x37/x38)%x39)%x40);

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x41 = INT64_MIN;
	volatile uint8_t x43 = 10U;
	volatile int8_t x44 = INT8_MIN;

    t7 = (((x41/x42)%x43)%x44);

    if (t7 != 6LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint16_t x45 = UINT16_MAX;
	int64_t x46 = 1306944180LL;
	int32_t x47 = INT32_MIN;
	uint32_t x48 = 104801473U;
	volatile int64_t t8 = 43231422499LL;

    t8 = (((x45/x46)%x47)%x48);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x50 = INT64_MIN;
	int64_t t9 = -6768269252LL;

    t9 = (((x49/x50)%x51)%x52);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x53 = 1562954U;
	static int16_t x55 = INT16_MAX;
	uint16_t x56 = 5U;
	uint32_t t10 = 720913343U;

    t10 = (((x53/x54)%x55)%x56);

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x57 = INT16_MIN;
	int8_t x58 = -1;
	static uint16_t x59 = 1165U;
	volatile int16_t x60 = 374;
	volatile int32_t t11 = 8;

    t11 = (((x57/x58)%x59)%x60);

    if (t11 != 148) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x61 = -1;
	int64_t x62 = INT64_MIN;
	static int8_t x63 = 2;
	uint16_t x64 = 14U;
	int64_t t12 = 2101998812042622LL;

    t12 = (((x61/x62)%x63)%x64);

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x65 = INT16_MIN;
	int16_t x66 = -1;
	static uint64_t x67 = 12238120658LLU;
	uint16_t x68 = 53U;
	uint64_t t13 = 6525LLU;

    t13 = (((x65/x66)%x67)%x68);

    if (t13 != 14LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x69 = -1LL;
	uint64_t x71 = 1463LLU;
	static uint64_t x72 = UINT64_MAX;
	volatile uint64_t t14 = 2LLU;

    t14 = (((x69/x70)%x71)%x72);

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x73 = INT8_MIN;
	int16_t x74 = INT16_MIN;

    t15 = (((x73/x74)%x75)%x76);

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x77 = INT16_MAX;
	volatile uint64_t x78 = 6582LLU;
	int16_t x79 = INT16_MIN;
	volatile uint16_t x80 = 227U;
	volatile uint64_t t16 = 861LLU;

    t16 = (((x77/x78)%x79)%x80);

    if (t16 != 4LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x85 = -18290;
	uint16_t x86 = UINT16_MAX;
	volatile uint16_t x87 = UINT16_MAX;
	volatile int32_t t17 = -23622415;

    t17 = (((x85/x86)%x87)%x88);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x90 = INT16_MIN;
	int8_t x92 = -2;
	int64_t t18 = -1149756348LL;

    t18 = (((x89/x90)%x91)%x92);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x94 = 985U;
	uint64_t x95 = UINT64_MAX;
	uint64_t t19 = 4041722972017458902LLU;

    t19 = (((x93/x94)%x95)%x96);

    if (t19 != 6LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x97 = INT16_MAX;
	static int8_t x99 = INT8_MIN;
	static volatile int64_t x100 = -55LL;
	static volatile int64_t t20 = -2558921LL;

    t20 = (((x97/x98)%x99)%x100);

    if (t20 != 2LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x101 = 1;
	static uint8_t x102 = 72U;
	volatile int8_t x103 = INT8_MIN;
	int32_t t21 = -152;

    t21 = (((x101/x102)%x103)%x104);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x106 = 3;
	uint8_t x107 = 60U;
	volatile int8_t x108 = 2;
	volatile int32_t t22 = -6409208;

    t22 = (((x105/x106)%x107)%x108);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x109 = 26;
	int64_t x110 = -15LL;
	static uint32_t x111 = 297727U;
	static int64_t t23 = 3548LL;

    t23 = (((x109/x110)%x111)%x112);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x114 = 15;
	int8_t x115 = INT8_MIN;
	volatile int32_t t24 = -233405138;

    t24 = (((x113/x114)%x115)%x116);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x117 = INT64_MIN;
	volatile int32_t x118 = INT32_MIN;
	int8_t x119 = INT8_MIN;
	int16_t x120 = -50;
	int64_t t25 = 4738333283987412LL;

    t25 = (((x117/x118)%x119)%x120);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x121 = 29U;
	int64_t x122 = INT64_MIN;
	int32_t x123 = 948002;
	int16_t x124 = INT16_MAX;
	volatile int64_t t26 = -3890785240213530LL;

    t26 = (((x121/x122)%x123)%x124);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x126 = UINT64_MAX;
	volatile uint64_t t27 = 386096734829422989LLU;

    t27 = (((x125/x126)%x127)%x128);

    if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint8_t x129 = 10U;
	int32_t x130 = 26224705;
	uint64_t x131 = UINT64_MAX;
	int32_t x132 = -1;
	uint64_t t28 = 213132676LLU;

    t28 = (((x129/x130)%x131)%x132);

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x133 = INT64_MIN;
	uint8_t x134 = UINT8_MAX;
	int16_t x135 = -1;

    t29 = (((x133/x134)%x135)%x136);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x137 = INT32_MIN;
	static uint32_t x138 = 322963U;
	uint64_t x140 = UINT64_MAX;
	static volatile uint64_t t30 = 6LLU;

    t30 = (((x137/x138)%x139)%x140);

    if (t30 != 6649LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x141 = 6;
	static volatile uint64_t x142 = UINT64_MAX;
	volatile int32_t x143 = -1;
	int64_t x144 = 149901244716464LL;
	volatile uint64_t t31 = 5628411726957LLU;

    t31 = (((x141/x142)%x143)%x144);

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x145 = INT32_MIN;
	uint64_t x146 = 16578009LLU;
	volatile uint64_t t32 = 119913105783562578LLU;

    t32 = (((x145/x146)%x147)%x148);

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x150 = -1;
	volatile int8_t x151 = INT8_MAX;
	static int8_t x152 = -1;
	int32_t t33 = -4986861;

    t33 = (((x149/x150)%x151)%x152);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x154 = -1LL;
	volatile int64_t t34 = 636023LL;

    t34 = (((x153/x154)%x155)%x156);

    if (t34 != -255LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x157 = INT32_MAX;
	uint8_t x159 = 2U;
	uint64_t x160 = 793417917224013919LLU;
	static uint64_t t35 = 2521029194821LLU;

    t35 = (((x157/x158)%x159)%x160);

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x161 = 44LLU;
	static int16_t x162 = -1;
	static uint32_t x164 = 116480453U;
	uint64_t t36 = 5LLU;

    t36 = (((x161/x162)%x163)%x164);

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x165 = INT32_MIN;
	static uint32_t x166 = 729864428U;
	uint32_t t37 = 5U;

    t37 = (((x165/x166)%x167)%x168);

    if (t37 != 2U) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x171 = -1LL;
	uint64_t x172 = UINT64_MAX;
	uint64_t t38 = 3705165191840LLU;

    t38 = (((x169/x170)%x171)%x172);

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x174 = 1699;

    t39 = (((x173/x174)%x175)%x176);

    if (t39 != -15024LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x177 = INT16_MIN;
	int8_t x178 = -1;
	volatile uint8_t x179 = 14U;
	static int8_t x180 = INT8_MAX;
	volatile int32_t t40 = 1720;

    t40 = (((x177/x178)%x179)%x180);

    if (t40 != 8) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int32_t x185 = -1;
	static uint8_t x186 = 96U;
	uint32_t x187 = 16U;
	uint64_t x188 = 152875315427708LLU;
	uint64_t t41 = 3077993162956LLU;

    t41 = (((x185/x186)%x187)%x188);

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint16_t x189 = 52U;
	static uint8_t x190 = 94U;
	int16_t x192 = INT16_MIN;

    t42 = (((x189/x190)%x191)%x192);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x193 = 1;
	int32_t x194 = INT32_MAX;
	volatile uint16_t x196 = UINT16_MAX;
	volatile int32_t t43 = -25;

    t43 = (((x193/x194)%x195)%x196);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x198 = INT8_MIN;
	int8_t x199 = INT8_MAX;
	int64_t x200 = INT64_MIN;
	int64_t t44 = -3335158LL;

    t44 = (((x197/x198)%x199)%x200);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int64_t x201 = INT64_MIN;
	int16_t x202 = INT16_MIN;
	volatile int32_t x203 = INT32_MAX;
	int8_t x204 = 61;
	int64_t t45 = -10249990272LL;

    t45 = (((x201/x202)%x203)%x204);

    if (t45 != 44LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x205 = 1U;
	static int8_t x206 = INT8_MIN;
	static volatile int16_t x207 = INT16_MAX;
	int16_t x208 = -1;
	static int32_t t46 = 11753016;

    t46 = (((x205/x206)%x207)%x208);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x209 = 57113LLU;
	int64_t x211 = -1030957LL;
	static int8_t x212 = INT8_MIN;
	uint64_t t47 = 121LLU;

    t47 = (((x209/x210)%x211)%x212);

    if (t47 != 223LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x221 = INT32_MIN;
	uint32_t x222 = 39U;
	int16_t x223 = -3348;
	static int32_t x224 = -1;
	static volatile uint32_t t48 = 4U;

    t48 = (((x221/x222)%x223)%x224);

    if (t48 != 55063683U) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x225 = INT64_MIN;
	int16_t x226 = 1;
	volatile uint64_t x227 = 70731280922441143LLU;
	uint16_t x228 = 9U;
	uint64_t t49 = 169046615LLU;

    t49 = (((x225/x226)%x227)%x228);

    if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x229 = INT16_MAX;
	int16_t x230 = INT16_MIN;
	volatile int32_t t50 = 3;

    t50 = (((x229/x230)%x231)%x232);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x237 = 15965168U;
	static volatile int64_t x238 = INT64_MIN;
	volatile int64_t x240 = -14987226020LL;
	volatile int64_t t51 = 39231LL;

    t51 = (((x237/x238)%x239)%x240);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x241 = INT32_MIN;
	uint64_t x242 = 7324029LLU;
	uint32_t x243 = 427U;
	volatile int16_t x244 = -16;

    t52 = (((x241/x242)%x243)%x244);

    if (t52 != 273LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x246 = INT8_MIN;
	static volatile int8_t x247 = INT8_MIN;
	int16_t x248 = INT16_MAX;
	volatile int32_t t53 = 497;

    t53 = (((x245/x246)%x247)%x248);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x251 = -1;
	volatile int32_t t54 = 839643779;

    t54 = (((x249/x250)%x251)%x252);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint8_t x253 = 6U;
	int8_t x254 = 44;
	int32_t x255 = INT32_MAX;
	uint16_t x256 = 201U;
	volatile int32_t t55 = 6388594;

    t55 = (((x253/x254)%x255)%x256);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x257 = 9156U;
	volatile int32_t x258 = INT32_MIN;
	int32_t x259 = -1;

    t56 = (((x257/x258)%x259)%x260);

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int32_t x261 = 0;
	int8_t x262 = 1;
	volatile int64_t x263 = 9197402LL;
	int8_t x264 = -1;
	volatile int64_t t57 = 6216LL;

    t57 = (((x261/x262)%x263)%x264);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x265 = 462110LLU;
	uint64_t x266 = 5309860346180051166LLU;
	volatile int8_t x267 = INT8_MIN;
	static volatile int32_t x268 = INT32_MAX;
	uint64_t t58 = 1892611866460705LLU;

    t58 = (((x265/x266)%x267)%x268);

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint8_t x269 = 34U;
	static volatile uint32_t x270 = 4768755U;
	static uint16_t x271 = UINT16_MAX;
	int64_t x272 = 276365284859139084LL;
	volatile int64_t t59 = -182LL;

    t59 = (((x269/x270)%x271)%x272);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x274 = INT16_MIN;
	int64_t x276 = 81637558964LL;
	int64_t t60 = 72646309068LL;

    t60 = (((x273/x274)%x275)%x276);

    if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x278 = 19457U;
	static int32_t x280 = INT32_MIN;

    t61 = (((x277/x278)%x279)%x280);

    if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x281 = 29U;
	uint16_t x282 = 1U;
	int64_t x284 = INT64_MAX;
	volatile int64_t t62 = 246498523794147152LL;

    t62 = (((x281/x282)%x283)%x284);

    if (t62 != 29LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x286 = -39852;
	uint32_t x287 = 4U;
	int8_t x288 = 3;
	static volatile uint32_t t63 = 18394U;

    t63 = (((x285/x286)%x287)%x288);

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x289 = INT8_MAX;
	uint8_t x290 = 1U;
	uint64_t x292 = 6LLU;
	uint64_t t64 = 10189304687LLU;

    t64 = (((x289/x290)%x291)%x292);

    if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x293 = -1;
	static volatile int32_t x296 = INT32_MIN;
	int32_t t65 = 435410287;

    t65 = (((x293/x294)%x295)%x296);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x297 = UINT8_MAX;
	static int64_t x298 = -136677588465518LL;
	static volatile int8_t x299 = -1;
	volatile int32_t x300 = INT32_MIN;
	volatile int64_t t66 = -847199071996549604LL;

    t66 = (((x297/x298)%x299)%x300);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x301 = INT64_MAX;
	volatile int16_t x302 = INT16_MIN;
	int8_t x304 = -35;

    t67 = (((x301/x302)%x303)%x304);

    if (t67 != -17LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x305 = INT16_MIN;
	volatile int32_t x306 = INT32_MIN;
	int64_t x307 = INT64_MIN;
	uint16_t x308 = 1U;
	volatile int64_t t68 = 3566LL;

    t68 = (((x305/x306)%x307)%x308);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x309 = 0U;
	uint8_t x310 = 3U;
	uint8_t x311 = UINT8_MAX;
	int64_t x312 = INT64_MIN;

    t69 = (((x309/x310)%x311)%x312);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x313 = 103079372332684973LL;
	int32_t x314 = INT32_MAX;
	static uint8_t x315 = 26U;
	uint64_t x316 = UINT64_MAX;
	uint64_t t70 = 113891571549917823LLU;

    t70 = (((x313/x314)%x315)%x316);

    if (t70 != 17LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x317 = INT64_MIN;
	int64_t x318 = 56242232729LL;
	uint16_t x319 = UINT16_MAX;
	int8_t x320 = -1;
	int64_t t71 = 5494444099976902LL;

    t71 = (((x317/x318)%x319)%x320);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile uint8_t x321 = UINT8_MAX;
	int64_t x322 = -1LL;
	volatile uint16_t x323 = 33U;
	int32_t x324 = INT32_MAX;
	int64_t t72 = -1LL;

    t72 = (((x321/x322)%x323)%x324);

    if (t72 != -24LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x329 = INT16_MAX;
	int64_t x330 = -1LL;
	uint8_t x331 = UINT8_MAX;
	uint8_t x332 = 42U;
	int64_t t73 = -1657776236867364129LL;

    t73 = (((x329/x330)%x331)%x332);

    if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x335 = INT16_MAX;
	volatile uint64_t x336 = 251452221067474LLU;

    t74 = (((x333/x334)%x335)%x336);

    if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x337 = UINT32_MAX;
	int32_t x338 = INT32_MAX;
	static int16_t x339 = INT16_MIN;
	int32_t x340 = INT32_MIN;
	uint32_t t75 = 2138615137U;

    t75 = (((x337/x338)%x339)%x340);

    if (t75 != 2U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x341 = INT8_MAX;
	volatile int16_t x342 = INT16_MAX;
	int8_t x343 = INT8_MIN;
	volatile uint64_t t76 = 43634159LLU;

    t76 = (((x341/x342)%x343)%x344);

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int16_t x345 = INT16_MAX;
	int8_t x346 = INT8_MIN;
	int8_t x347 = 56;
	int8_t x348 = INT8_MIN;
	int32_t t77 = -3;

    t77 = (((x345/x346)%x347)%x348);

    if (t77 != -31) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x349 = UINT32_MAX;
	uint64_t x350 = 54LLU;
	static int64_t x351 = INT64_MIN;
	int64_t x352 = -1LL;

    t78 = (((x349/x350)%x351)%x352);

    if (t78 != 79536431LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x353 = -1;
	int64_t x355 = -1LL;
	int64_t t79 = 100577LL;

    t79 = (((x353/x354)%x355)%x356);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x358 = 1U;
	int8_t x359 = INT8_MIN;
	volatile uint32_t t80 = 12U;

    t80 = (((x357/x358)%x359)%x360);

    if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x361 = 6708225U;
	uint32_t x363 = 22U;
	int8_t x364 = -1;

    t81 = (((x361/x362)%x363)%x364);

    if (t81 != 14U) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x366 = -2;
	int32_t x367 = INT32_MAX;
	static int16_t x368 = -1;
	int32_t t82 = 1034795;

    t82 = (((x365/x366)%x367)%x368);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x369 = -112;
	static int32_t x370 = -1;
	static uint16_t x372 = UINT16_MAX;
	volatile int32_t t83 = -78514386;

    t83 = (((x369/x370)%x371)%x372);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile uint16_t x373 = UINT16_MAX;
	int16_t x374 = INT16_MAX;
	uint8_t x375 = 9U;
	uint32_t x376 = 6U;
	uint32_t t84 = 1306U;

    t84 = (((x373/x374)%x375)%x376);

    if (t84 != 2U) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x377 = -31;
	volatile uint32_t x378 = 928555040U;
	int64_t t85 = 1151998LL;

    t85 = (((x377/x378)%x379)%x380);

    if (t85 != 4LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x381 = -1LL;
	int64_t x382 = INT64_MIN;
	int16_t x383 = INT16_MIN;
	uint8_t x384 = 74U;
	int64_t t86 = 1180352923LL;

    t86 = (((x381/x382)%x383)%x384);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x385 = INT32_MAX;
	uint8_t x386 = 7U;
	static int8_t x387 = -1;
	int8_t x388 = 7;
	volatile int32_t t87 = -1;

    t87 = (((x385/x386)%x387)%x388);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x389 = 1418302LLU;
	int8_t x390 = 9;
	volatile int32_t x392 = -1966781;
	uint64_t t88 = 2LLU;

    t88 = (((x389/x390)%x391)%x392);

    if (t88 != 157589LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x397 = INT32_MIN;
	int32_t x398 = INT32_MAX;
	int64_t x399 = INT64_MIN;
	int32_t x400 = 102;
	int64_t t89 = 2LL;

    t89 = (((x397/x398)%x399)%x400);

    if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x401 = 14561368263LLU;
	static uint8_t x402 = 107U;
	static uint8_t x403 = UINT8_MAX;
	static volatile uint64_t t90 = 79011LLU;

    t90 = (((x401/x402)%x403)%x404);

    if (t90 != 173LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x409 = -1;
	int16_t x411 = INT16_MIN;
	volatile int8_t x412 = INT8_MAX;
	int64_t t91 = 56072419636LL;

    t91 = (((x409/x410)%x411)%x412);

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x413 = -17030039LL;
	int64_t x414 = -1LL;
	int16_t x416 = INT16_MIN;

    t92 = (((x413/x414)%x415)%x416);

    if (t92 != 599LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x417 = UINT16_MAX;
	uint8_t x418 = 30U;
	static int64_t x419 = INT64_MIN;
	int64_t x420 = INT64_MAX;
	static int64_t t93 = 1LL;

    t93 = (((x417/x418)%x419)%x420);

    if (t93 != 2184LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x422 = -8406;
	int32_t x423 = INT32_MAX;
	int16_t x424 = INT16_MIN;
	int32_t t94 = -1;

    t94 = (((x421/x422)%x423)%x424);

    if (t94 != 3) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x425 = 3U;
	int16_t x426 = INT16_MIN;
	int16_t x427 = -1;
	volatile int64_t t95 = -17025LL;

    t95 = (((x425/x426)%x427)%x428);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint16_t x433 = UINT16_MAX;
	volatile int16_t x434 = INT16_MAX;
	int64_t x435 = -34520973LL;
	static int8_t x436 = INT8_MIN;
	volatile int64_t t96 = -2066990595358LL;

    t96 = (((x433/x434)%x435)%x436);

    if (t96 != 2LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x439 = 197;

    t97 = (((x437/x438)%x439)%x440);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x441 = -1LL;
	int64_t x442 = 40LL;
	uint64_t x444 = 2958LLU;
	volatile uint64_t t98 = 7331LLU;

    t98 = (((x441/x442)%x443)%x444);

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x446 = 702;
	static int64_t x447 = -1LL;
	uint8_t x448 = 5U;
	int64_t t99 = -4673550414481LL;

    t99 = (((x445/x446)%x447)%x448);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x449 = 21730939172LLU;
	static uint64_t x450 = 314046LLU;
	static int8_t x451 = INT8_MAX;
	static int8_t x452 = INT8_MAX;

    t100 = (((x449/x450)%x451)%x452);

    if (t100 != 108LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x453 = -1;
	static int32_t x454 = -16132276;
	volatile int8_t x455 = INT8_MIN;
	int16_t x456 = -1;
	volatile int32_t t101 = -17;

    t101 = (((x453/x454)%x455)%x456);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x457 = -1;
	int8_t x458 = -1;
	volatile int64_t x459 = INT64_MAX;
	int8_t x460 = -1;
	volatile int64_t t102 = 293972025552LL;

    t102 = (((x457/x458)%x459)%x460);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x462 = -1;
	static int64_t x464 = -1LL;
	int64_t t103 = -138099647473LL;

    t103 = (((x461/x462)%x463)%x464);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x465 = -1;
	volatile uint16_t x467 = 765U;
	uint16_t x468 = 15268U;
	volatile int32_t t104 = 379087;

    t104 = (((x465/x466)%x467)%x468);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x469 = 11U;
	int32_t x470 = INT32_MAX;
	int16_t x471 = INT16_MIN;
	uint32_t x472 = 4U;
	uint32_t t105 = 525851059U;

    t105 = (((x469/x470)%x471)%x472);

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x473 = -30695993;
	uint64_t x474 = UINT64_MAX;

    t106 = (((x473/x474)%x475)%x476);

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x479 = INT8_MAX;
	int32_t x480 = INT32_MAX;
	volatile uint32_t t107 = 546049U;

    t107 = (((x477/x478)%x479)%x480);

    if (t107 != 122U) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x481 = INT64_MIN;
	uint16_t x482 = 5924U;
	int32_t x484 = INT32_MIN;
	volatile int64_t t108 = -3041614634015160780LL;

    t108 = (((x481/x482)%x483)%x484);

    if (t108 != -9917LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x489 = 1;
	uint32_t x490 = UINT32_MAX;
	volatile int32_t x491 = 54156741;
	volatile uint16_t x492 = 1U;
	uint32_t t109 = 409U;

    t109 = (((x489/x490)%x491)%x492);

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x493 = INT8_MIN;
	int8_t x494 = -4;
	int8_t x495 = -4;
	int32_t x496 = INT32_MAX;
	volatile int32_t t110 = 2;

    t110 = (((x493/x494)%x495)%x496);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x497 = -1LL;
	uint16_t x498 = UINT16_MAX;
	volatile int64_t x499 = -7959057LL;
	volatile int64_t x500 = -8257110637180628LL;
	volatile int64_t t111 = -4576LL;

    t111 = (((x497/x498)%x499)%x500);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x501 = INT8_MAX;
	int8_t x502 = -48;
	volatile uint64_t t112 = 1191085387812818536LLU;

    t112 = (((x501/x502)%x503)%x504);

    if (t112 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x506 = -9;
	volatile int16_t x507 = INT16_MIN;
	static int32_t t113 = 30;

    t113 = (((x505/x506)%x507)%x508);

    if (t113 != 84) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x509 = -12;
	int64_t x511 = INT64_MIN;
	uint16_t x512 = UINT16_MAX;

    t114 = (((x509/x510)%x511)%x512);

    if (t114 != 12LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x513 = -1;
	static uint16_t x514 = UINT16_MAX;
	int16_t x516 = INT16_MAX;
	int32_t t115 = 33504330;

    t115 = (((x513/x514)%x515)%x516);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x518 = INT8_MAX;
	volatile int32_t x520 = -167862241;
	int32_t t116 = 72;

    t116 = (((x517/x518)%x519)%x520);

    if (t116 != 4) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x521 = 20796609;
	volatile int8_t x522 = -1;
	int64_t x523 = -1LL;
	uint32_t x524 = UINT32_MAX;
	int64_t t117 = -70845429LL;

    t117 = (((x521/x522)%x523)%x524);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x525 = INT16_MIN;
	int64_t x526 = -520140921026009LL;
	volatile int32_t x528 = -1;
	volatile int64_t t118 = -1502031599538LL;

    t118 = (((x525/x526)%x527)%x528);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x529 = INT16_MAX;
	int64_t x530 = INT64_MIN;
	volatile int32_t x531 = -1;
	static volatile int64_t t119 = -113297LL;

    t119 = (((x529/x530)%x531)%x532);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x533 = 15653018717962LLU;
	uint16_t x534 = 2U;
	static volatile uint64_t t120 = 123678150319460LLU;

    t120 = (((x533/x534)%x535)%x536);

    if (t120 != 63473LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int8_t x537 = -25;
	static int32_t x538 = -1;
	int64_t x539 = 2490889941386576LL;
	int8_t x540 = 1;

    t121 = (((x537/x538)%x539)%x540);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x541 = 104U;
	uint16_t x542 = 9004U;
	int32_t x543 = INT32_MIN;
	volatile int32_t t122 = -16;

    t122 = (((x541/x542)%x543)%x544);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x545 = 22352U;
	int64_t x546 = -176LL;
	int8_t x547 = -56;
	static int16_t x548 = INT16_MIN;

    t123 = (((x545/x546)%x547)%x548);

    if (t123 != -15LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x549 = UINT16_MAX;
	int8_t x550 = INT8_MIN;
	volatile int8_t x552 = INT8_MIN;

    t124 = (((x549/x550)%x551)%x552);

    if (t124 != 90380728242LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint16_t x553 = UINT16_MAX;
	volatile int32_t x554 = INT32_MIN;
	volatile int16_t x555 = INT16_MAX;
	volatile int32_t t125 = -3;

    t125 = (((x553/x554)%x555)%x556);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x557 = 144809706981LLU;
	int32_t x558 = INT32_MIN;
	volatile uint64_t x559 = 6873LLU;
	volatile uint64_t t126 = 844052108LLU;

    t126 = (((x557/x558)%x559)%x560);

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x561 = 11;
	static int16_t x562 = -2988;
	int8_t x563 = INT8_MIN;
	uint32_t x564 = 53360679U;
	static uint32_t t127 = 1308311U;

    t127 = (((x561/x562)%x563)%x564);

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x565 = 415011LLU;
	volatile uint32_t x567 = UINT32_MAX;
	int8_t x568 = INT8_MIN;
	uint64_t t128 = 519498480591LLU;

    t128 = (((x565/x566)%x567)%x568);

    if (t128 != 17LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int32_t x569 = INT32_MIN;
	static int16_t x570 = 1687;
	volatile int8_t x571 = -21;
	static int64_t x572 = 506189935LL;
	volatile int64_t t129 = -6832016962492LL;

    t129 = (((x569/x570)%x571)%x572);

    if (t129 != -3LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x573 = INT8_MIN;
	volatile int16_t x574 = -1;
	int64_t x576 = INT64_MAX;
	int64_t t130 = -12LL;

    t130 = (((x573/x574)%x575)%x576);

    if (t130 != 128LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x577 = 25;
	int8_t x578 = -1;
	uint8_t x579 = UINT8_MAX;

    t131 = (((x577/x578)%x579)%x580);

    if (t131 != -25) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint8_t x581 = 0U;
	uint32_t x583 = UINT32_MAX;
	volatile int32_t x584 = 326581936;
	uint32_t t132 = 3U;

    t132 = (((x581/x582)%x583)%x584);

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x585 = UINT32_MAX;
	int64_t x586 = INT64_MAX;
	volatile int8_t x587 = -1;
	int16_t x588 = -603;
	static volatile int64_t t133 = -542199713835LL;

    t133 = (((x585/x586)%x587)%x588);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x590 = INT16_MAX;
	volatile uint32_t x592 = 94929U;
	static int64_t t134 = 234935529303LL;

    t134 = (((x589/x590)%x591)%x592);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile uint16_t x593 = UINT16_MAX;
	volatile int64_t x594 = INT64_MIN;
	static volatile int64_t t135 = 162653686976216927LL;

    t135 = (((x593/x594)%x595)%x596);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x597 = -1;
	int8_t x599 = -1;
	static int32_t t136 = -89;

    t136 = (((x597/x598)%x599)%x600);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x602 = 33212;
	static int32_t x603 = INT32_MAX;
	volatile int64_t t137 = -40818068LL;

    t137 = (((x601/x602)%x603)%x604);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x605 = INT64_MAX;
	int16_t x606 = INT16_MIN;
	int64_t x607 = INT64_MIN;
	int32_t x608 = -1;

    t138 = (((x605/x606)%x607)%x608);

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x609 = -1;
	int32_t x610 = 113048249;
	int64_t x611 = INT64_MIN;
	uint16_t x612 = 5U;

    t139 = (((x609/x610)%x611)%x612);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x618 = INT16_MIN;
	int64_t x619 = 17131803846LL;

    t140 = (((x617/x618)%x619)%x620);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x621 = 3U;
	int64_t x622 = INT64_MAX;
	volatile uint64_t x624 = 14LLU;
	volatile uint64_t t141 = 1876176168LLU;

    t141 = (((x621/x622)%x623)%x624);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x625 = 105900467095326152LL;
	int32_t x626 = -1;
	volatile int32_t x627 = -1;
	int64_t t142 = 12570053828LL;

    t142 = (((x625/x626)%x627)%x628);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x629 = INT8_MAX;
	int64_t x631 = 57291LL;
	static uint64_t x632 = UINT64_MAX;

    t143 = (((x629/x630)%x631)%x632);

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x633 = -1LL;
	static int8_t x635 = 1;
	int16_t x636 = INT16_MAX;

    t144 = (((x633/x634)%x635)%x636);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x637 = 233U;
	int8_t x638 = INT8_MAX;
	int64_t x639 = INT64_MAX;
	static int16_t x640 = 36;
	int64_t t145 = 14763557750LL;

    t145 = (((x637/x638)%x639)%x640);

    if (t145 != 1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int32_t x641 = INT32_MAX;
	uint8_t x642 = 2U;
	int32_t x643 = -1;
	int32_t x644 = -1;
	int32_t t146 = -79;

    t146 = (((x641/x642)%x643)%x644);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x645 = 261323387LL;
	uint64_t x647 = UINT64_MAX;
	int64_t x648 = 56329LL;
	volatile uint64_t t147 = 55835446LLU;

    t147 = (((x645/x646)%x647)%x648);

    if (t147 != 34742LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint64_t x649 = UINT64_MAX;
	int16_t x650 = -1;
	int8_t x651 = -1;
	uint64_t x652 = 266619784346LLU;
	volatile uint64_t t148 = 14LLU;

    t148 = (((x649/x650)%x651)%x652);

    if (t148 != 1LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x653 = INT8_MAX;
	int16_t x654 = 5854;
	int16_t x655 = -1;
	int8_t x656 = -1;
	int32_t t149 = 1087723;

    t149 = (((x653/x654)%x655)%x656);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x657 = INT8_MIN;
	static int32_t x658 = -16;
	uint32_t x659 = UINT32_MAX;
	int16_t x660 = -1;
	uint32_t t150 = 52U;

    t150 = (((x657/x658)%x659)%x660);

    if (t150 != 8U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x665 = INT16_MAX;
	uint64_t x666 = UINT64_MAX;
	static uint8_t x667 = 107U;

    t151 = (((x665/x666)%x667)%x668);

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x670 = -1;
	int8_t x671 = -1;
	volatile int64_t t152 = 1769708506LL;

    t152 = (((x669/x670)%x671)%x672);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x673 = INT64_MIN;
	volatile uint8_t x674 = 52U;
	static int64_t x675 = 2096038212820654735LL;
	int64_t t153 = 170LL;

    t153 = (((x673/x674)%x675)%x676);

    if (t153 != -30LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x678 = INT32_MIN;
	int64_t x679 = INT64_MIN;
	int64_t t154 = 20LL;

    t154 = (((x677/x678)%x679)%x680);

    if (t154 != 1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x681 = UINT8_MAX;
	volatile int64_t x682 = -3876644950792782895LL;
	uint32_t x684 = UINT32_MAX;
	int64_t t155 = 4177006LL;

    t155 = (((x681/x682)%x683)%x684);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x686 = INT16_MIN;
	int32_t x687 = INT32_MIN;
	int16_t x688 = INT16_MAX;
	static volatile int64_t t156 = 34685816840794LL;

    t156 = (((x685/x686)%x687)%x688);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x689 = INT16_MIN;
	volatile int8_t x690 = INT8_MAX;
	uint32_t x691 = 467U;
	volatile int8_t x692 = INT8_MIN;
	static uint32_t t157 = 7199318U;

    t157 = (((x689/x690)%x691)%x692);

    if (t157 != 261U) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x693 = -1;
	static volatile int16_t x694 = 113;
	volatile uint64_t x695 = 7270279LLU;
	uint64_t t158 = 1499LLU;

    t158 = (((x693/x694)%x695)%x696);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint16_t x697 = 0U;
	static int8_t x699 = 1;
	static volatile int64_t x700 = INT64_MIN;

    t159 = (((x697/x698)%x699)%x700);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int8_t x701 = -1;
	static uint32_t x702 = UINT32_MAX;
	uint64_t x704 = 382227684524225566LLU;
	volatile uint64_t t160 = 27409874LLU;

    t160 = (((x701/x702)%x703)%x704);

    if (t160 != 1LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x705 = -4;
	int64_t x707 = -1LL;
	int64_t x708 = INT64_MIN;
	int64_t t161 = -442151525271LL;

    t161 = (((x705/x706)%x707)%x708);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x709 = 3;
	static int64_t x710 = INT64_MIN;
	static int16_t x711 = -146;

    t162 = (((x709/x710)%x711)%x712);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x713 = -1;
	int32_t x714 = -21634;
	uint8_t x715 = 1U;

    t163 = (((x713/x714)%x715)%x716);

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x718 = 6U;
	volatile int16_t x719 = INT16_MAX;
	volatile int32_t x720 = 960958723;
	volatile uint32_t t164 = 906010802U;

    t164 = (((x717/x718)%x719)%x720);

    if (t164 != 1U) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x722 = INT32_MAX;
	int64_t x723 = INT64_MIN;
	int8_t x724 = -34;
	int64_t t165 = -29836LL;

    t165 = (((x721/x722)%x723)%x724);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x725 = -36;
	static int8_t x726 = INT8_MIN;
	uint32_t x727 = 3122205U;
	static int64_t x728 = 667480107442170309LL;

    t166 = (((x725/x726)%x727)%x728);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x730 = -1;
	int16_t x731 = 2;
	volatile uint8_t x732 = 19U;
	volatile uint64_t t167 = 272604090132311LLU;

    t167 = (((x729/x730)%x731)%x732);

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x733 = 3221U;
	int64_t x734 = -1LL;
	int64_t x735 = INT64_MIN;
	int64_t t168 = -15820975958001244LL;

    t168 = (((x733/x734)%x735)%x736);

    if (t168 != -1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint32_t x737 = UINT32_MAX;
	static int8_t x738 = INT8_MIN;
	uint16_t x739 = 1170U;
	int32_t x740 = INT32_MAX;

    t169 = (((x737/x738)%x739)%x740);

    if (t169 != 1U) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x741 = INT8_MIN;
	static int16_t x742 = INT16_MIN;
	volatile int32_t x743 = -1;
	static uint32_t x744 = 347878U;
	uint32_t t170 = 53816U;

    t170 = (((x741/x742)%x743)%x744);

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int32_t x745 = INT32_MAX;
	volatile int64_t x746 = 3066256088913LL;
	int32_t x747 = INT32_MIN;
	volatile int64_t t171 = 340023498024755LL;

    t171 = (((x745/x746)%x747)%x748);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int32_t x749 = -26524184;
	volatile int64_t x750 = INT64_MIN;
	int8_t x751 = INT8_MIN;
	volatile uint8_t x752 = 1U;
	volatile int64_t t172 = 98505462828167LL;

    t172 = (((x749/x750)%x751)%x752);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint64_t x753 = 7869900813059288714LLU;
	static int64_t x754 = -1LL;
	uint32_t x755 = 185139400U;
	uint64_t x756 = UINT64_MAX;
	uint64_t t173 = 7LLU;

    t173 = (((x753/x754)%x755)%x756);

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x758 = INT32_MAX;
	static int64_t x759 = -1LL;
	volatile int8_t x760 = -57;
	volatile int64_t t174 = 5845475781423LL;

    t174 = (((x757/x758)%x759)%x760);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x761 = 77U;
	int16_t x762 = -5005;
	volatile uint32_t x763 = 14U;
	uint8_t x764 = 127U;
	uint32_t t175 = 262248U;

    t175 = (((x761/x762)%x763)%x764);

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x766 = 3253508U;
	int8_t x767 = 21;
	int32_t x768 = 7;
	uint32_t t176 = 130040U;

    t176 = (((x765/x766)%x767)%x768);

    if (t176 != 2U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x769 = 140529U;
	int64_t x770 = -1LL;
	static uint32_t x771 = UINT32_MAX;
	int64_t x772 = -1LL;
	int64_t t177 = 12659034562481LL;

    t177 = (((x769/x770)%x771)%x772);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x773 = INT32_MIN;
	static int64_t x774 = -1LL;
	static int16_t x775 = -1;
	static volatile int8_t x776 = -1;
	volatile int64_t t178 = -3538LL;

    t178 = (((x773/x774)%x775)%x776);

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x777 = -1;
	volatile int32_t x778 = INT32_MIN;
	static volatile uint16_t x779 = UINT16_MAX;
	int32_t x780 = 2480;
	static int32_t t179 = -1619774;

    t179 = (((x777/x778)%x779)%x780);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x781 = -228520LL;
	int64_t x782 = INT64_MIN;
	int8_t x783 = INT8_MIN;
	int64_t t180 = 267909174LL;

    t180 = (((x781/x782)%x783)%x784);

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x789 = UINT32_MAX;
	static int16_t x790 = -1;
	int64_t x792 = 27381LL;
	int64_t t181 = -1362719386043LL;

    t181 = (((x789/x790)%x791)%x792);

    if (t181 != 1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x793 = -1LL;
	uint16_t x796 = UINT16_MAX;
	int64_t t182 = -7LL;

    t182 = (((x793/x794)%x795)%x796);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x797 = INT8_MAX;
	volatile uint8_t x798 = UINT8_MAX;
	int32_t x799 = -7501931;
	uint16_t x800 = 528U;
	volatile int32_t t183 = -1;

    t183 = (((x797/x798)%x799)%x800);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x803 = -1;
	volatile int64_t x804 = INT64_MIN;
	int64_t t184 = -51661107617445LL;

    t184 = (((x801/x802)%x803)%x804);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x809 = INT64_MIN;
	static uint32_t x810 = 635864U;
	int8_t x811 = INT8_MIN;
	volatile int32_t x812 = INT32_MIN;
	int64_t t185 = -2LL;

    t185 = (((x809/x810)%x811)%x812);

    if (t185 != -62LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x813 = -1LL;
	int64_t x814 = INT64_MIN;
	int32_t x815 = 1;
	static int8_t x816 = INT8_MIN;
	int64_t t186 = -3110606435473756LL;

    t186 = (((x813/x814)%x815)%x816);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x819 = 447;
	volatile uint64_t x820 = 211695159599490LLU;
	volatile uint64_t t187 = 928LLU;

    t187 = (((x817/x818)%x819)%x820);

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x827 = -1;
	int64_t t188 = 10804882788LL;

    t188 = (((x825/x826)%x827)%x828);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x829 = 73649;
	int64_t x830 = INT64_MIN;
	int64_t x831 = -1LL;
	int32_t x832 = INT32_MIN;
	volatile int64_t t189 = -63555133687362403LL;

    t189 = (((x829/x830)%x831)%x832);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x833 = -1;
	uint32_t x834 = 13286188U;
	uint64_t x835 = 30LLU;
	volatile uint64_t t190 = 15241067355LLU;

    t190 = (((x833/x834)%x835)%x836);

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x837 = INT32_MAX;
	static int32_t x838 = INT32_MIN;
	volatile uint32_t x839 = 61U;
	int32_t x840 = INT32_MIN;
	uint32_t t191 = 19U;

    t191 = (((x837/x838)%x839)%x840);

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x841 = 85U;
	static int16_t x842 = INT16_MAX;
	volatile int16_t x843 = 1;
	volatile int8_t x844 = -18;
	int32_t t192 = 233939;

    t192 = (((x841/x842)%x843)%x844);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x845 = UINT8_MAX;
	static int64_t x846 = INT64_MIN;
	int8_t x847 = INT8_MIN;
	static uint32_t x848 = 2890941U;
	volatile int64_t t193 = 152995635842LL;

    t193 = (((x845/x846)%x847)%x848);

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x849 = 527U;
	int16_t x850 = -1;
	int8_t x852 = 1;

    t194 = (((x849/x850)%x851)%x852);

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x854 = INT8_MIN;
	int64_t x855 = 17535151579216LL;
	int64_t t195 = -2203115LL;

    t195 = (((x853/x854)%x855)%x856);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x857 = -1LL;
	int16_t x858 = 4;
	uint32_t x859 = UINT32_MAX;
	static int64_t x860 = INT64_MAX;

    t196 = (((x857/x858)%x859)%x860);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x861 = -1;
	static uint64_t x862 = 58694419049180000LLU;
	volatile uint16_t x863 = 2610U;
	uint32_t x864 = UINT32_MAX;
	volatile uint64_t t197 = 5074196158331080770LLU;

    t197 = (((x861/x862)%x863)%x864);

    if (t197 != 314LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x865 = INT32_MIN;
	static int8_t x866 = 7;
	volatile uint8_t x867 = 6U;
	static volatile int64_t t198 = -40839239LL;

    t198 = (((x865/x866)%x867)%x868);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x869 = 247261LLU;
	uint16_t x870 = 25U;
	int16_t x871 = 315;
	static uint64_t t199 = 20LLU;

    t199 = (((x869/x870)%x871)%x872);

    if (t199 != 125LLU) { NG(); } else { ; }
	
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

