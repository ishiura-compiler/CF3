
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

static int16_t x5 = 0;
static uint32_t x16 = 373483U;
uint8_t x20 = UINT8_MAX;
int32_t t4 = 816;
static int64_t x22 = -1LL;
uint64_t x33 = 68LLU;
volatile int32_t t9 = -24;
static int32_t x42 = 0;
int8_t x46 = INT8_MIN;
int16_t x53 = 496;
int64_t x62 = -1LL;
int8_t x63 = INT8_MIN;
int64_t t14 = 4344199762939LL;
volatile int16_t x68 = -5748;
int32_t x71 = INT32_MIN;
volatile int32_t t16 = -52354;
volatile int32_t x84 = INT32_MIN;
static int32_t x87 = INT32_MAX;
volatile int16_t x90 = INT16_MAX;
volatile int32_t t20 = -1;
volatile int8_t x93 = INT8_MAX;
int32_t x100 = -1;
uint64_t x101 = 0LLU;
uint32_t x102 = 784231966U;
volatile uint16_t x111 = 5304U;
volatile int32_t x126 = -43;
int32_t t30 = 465;
int8_t x146 = INT8_MIN;
static int32_t t34 = -35805;
static int32_t t37 = 6285090;
static int16_t x169 = -1;
int16_t x172 = -1;
static int64_t x175 = 32950350394LL;
int8_t x183 = -10;
uint16_t x184 = 556U;
int8_t x204 = INT8_MIN;
volatile int32_t t44 = -1723;
static volatile int32_t t47 = -226245089;
int8_t x219 = INT8_MIN;
static int64_t x232 = -97811570522933LL;
volatile int64_t t50 = -250761273LL;
static uint32_t x236 = 3217U;
uint32_t t51 = 104810121U;
uint64_t x244 = 6188248989087895LLU;
static uint32_t x250 = 5185649U;
int8_t x255 = INT8_MIN;
int32_t x260 = INT32_MIN;
static int16_t x266 = 220;
uint16_t x270 = 5U;
int64_t x272 = INT64_MAX;
static volatile int64_t t58 = -14197112090LL;
int16_t x274 = INT16_MIN;
static int8_t x275 = INT8_MIN;
int64_t x276 = INT64_MAX;
int32_t x291 = 1845162;
volatile int32_t x296 = -1;
int64_t x300 = INT64_MAX;
int32_t x307 = -1;
static int64_t x316 = 841569881LL;
volatile uint16_t x317 = UINT16_MAX;
int64_t t67 = 12547146032133195LL;
static int32_t t68 = 4;
int64_t x333 = INT64_MIN;
static int8_t x339 = INT8_MIN;
uint64_t x345 = 10173724525LLU;
volatile uint64_t x355 = 3590243230706748654LLU;
static uint8_t x359 = 6U;
int16_t x360 = INT16_MAX;
uint16_t x364 = 28062U;
int64_t x371 = INT64_MIN;
int64_t x372 = INT64_MIN;
static volatile int64_t t78 = -38669336666779332LL;
static int64_t t80 = -37218554122705148LL;
int8_t x387 = -7;
int32_t x396 = -1;
int32_t t84 = -4;
uint16_t x409 = UINT16_MAX;
int16_t x416 = -65;
int64_t x417 = 24506LL;
volatile int32_t t93 = 76;
volatile uint8_t x443 = 2U;
static int32_t x444 = -1;
volatile int32_t t96 = 1;
int32_t t97 = 0;
static volatile int16_t x450 = INT16_MAX;
volatile uint64_t x453 = UINT64_MAX;
uint16_t x454 = UINT16_MAX;
static int32_t x461 = INT32_MIN;
int8_t x462 = INT8_MAX;
volatile int32_t x466 = -1;
uint64_t x473 = 268439677212737LLU;
uint64_t x479 = 60061958702LLU;
int8_t x480 = INT8_MIN;
int32_t t105 = 383016863;
int32_t t106 = -5;
int32_t x486 = -4;
int8_t x487 = -1;
uint8_t x491 = 2U;
static volatile uint64_t x500 = 3541133692475352LLU;
static int16_t x506 = 671;
volatile int32_t t111 = -2539;
volatile int32_t x512 = INT32_MAX;
int8_t x516 = INT8_MIN;
volatile int32_t t114 = -115453585;
int8_t x536 = 33;
int64_t x539 = INT64_MAX;
uint16_t x545 = UINT16_MAX;
volatile int16_t x546 = INT16_MIN;
uint16_t x547 = UINT16_MAX;
static volatile int32_t t121 = -116092;
uint32_t x554 = 1123891000U;
volatile int32_t x562 = -1;
static int8_t x568 = INT8_MAX;
volatile uint16_t x569 = 12U;
volatile int16_t x570 = INT16_MIN;
int32_t x572 = -1;
static volatile int32_t t126 = -1751;
static int8_t x578 = INT8_MAX;
uint16_t x584 = UINT16_MAX;
int8_t x590 = 1;
int8_t x609 = 2;
static int32_t x613 = INT32_MIN;
int32_t x614 = INT32_MIN;
int8_t x616 = 10;
int8_t x623 = 4;
int16_t x624 = INT16_MIN;
uint32_t x630 = 1331095U;
int32_t x631 = INT32_MAX;
int64_t x632 = -1LL;
int64_t t136 = 127725486179LL;
uint8_t x639 = 1U;
volatile int64_t t138 = 100672LL;
static int64_t x649 = INT64_MAX;
volatile int32_t x655 = 6;
volatile uint16_t x660 = 3821U;
static int64_t x665 = INT64_MIN;
static volatile int64_t x669 = 881157106753225090LL;
int64_t x670 = INT64_MIN;
volatile int64_t t146 = -456804105634LL;
static volatile uint64_t x690 = 1935948697538LLU;
int16_t x694 = INT16_MAX;
int8_t x704 = INT8_MAX;
volatile uint8_t x705 = 29U;
int32_t x717 = -1;
int8_t x728 = -19;
int64_t x730 = INT64_MIN;
int32_t x732 = -17096967;
static volatile int16_t x733 = 0;
volatile uint64_t t159 = 3626306776564946249LLU;
int64_t x738 = INT64_MIN;
int32_t t160 = 1021339;
static int64_t x742 = INT64_MIN;
static volatile uint64_t x750 = 198015LLU;
uint16_t x764 = 1988U;
volatile int32_t t165 = -185;
volatile uint64_t x765 = 96575473643LLU;
int8_t x767 = INT8_MAX;
static int32_t t166 = 14;
volatile uint64_t x773 = 38LLU;
int32_t x774 = 716882456;
static int32_t t168 = 0;
uint8_t x781 = 23U;
int32_t x788 = INT32_MIN;
int32_t t171 = 1;
volatile int16_t x810 = INT16_MIN;
volatile int16_t x812 = INT16_MIN;
uint64_t x813 = 2168563933189230539LLU;
int8_t x814 = INT8_MIN;
int64_t x820 = INT64_MIN;
int64_t t178 = 1LL;
static uint16_t x824 = UINT16_MAX;
volatile uint64_t x826 = 763LLU;
int32_t x831 = -574;
volatile int32_t x833 = -273165;
int16_t x852 = INT16_MIN;
volatile uint32_t x854 = UINT32_MAX;
int8_t x862 = -27;
uint16_t x871 = UINT16_MAX;
uint32_t x872 = 26U;
volatile uint32_t t190 = 86U;
int8_t x886 = INT8_MIN;
uint8_t x892 = 5U;
volatile int32_t t193 = -472837650;
volatile uint8_t x895 = UINT8_MAX;
static uint32_t x897 = 6375011U;
volatile uint32_t x898 = 316063U;
volatile uint8_t x902 = UINT8_MAX;
int64_t t196 = -1940713172970956584LL;
uint16_t x905 = UINT16_MAX;
static uint32_t x911 = 2798U;
int16_t x912 = INT16_MAX;


void f0(void) {
    	static int64_t x1 = -932366LL;
	volatile uint16_t x2 = UINT16_MAX;
	volatile int16_t x3 = INT16_MIN;
	volatile int8_t x4 = 1;
	int32_t t0 = 1692;

    t0 = ((x1!=(x2-x3))&x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x6 = UINT64_MAX;
	int64_t x7 = INT64_MIN;
	static uint32_t x8 = 6034191U;
	static uint32_t t1 = 15U;

    t1 = ((x5!=(x6-x7))&x8);

    if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x9 = -42LL;
	volatile int32_t x10 = INT32_MIN;
	int32_t x11 = -1;
	int16_t x12 = 0;
	int32_t t2 = -74664632;

    t2 = ((x9!=(x10-x11))&x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x13 = 0U;
	int32_t x14 = -1;
	static int32_t x15 = -1;
	volatile uint32_t t3 = 26U;

    t3 = ((x13!=(x14-x15))&x16);

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -61639LL;
	int8_t x18 = -1;
	int32_t x19 = -15;

    t4 = ((x17!=(x18-x19))&x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MIN;
	int8_t x23 = INT8_MIN;
	static int16_t x24 = -14;
	static volatile int32_t t5 = -295363871;

    t5 = ((x21!=(x22-x23))&x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = 855138;
	int64_t x26 = INT64_MIN;
	static volatile uint64_t x27 = 31826129512LLU;
	int16_t x28 = INT16_MIN;
	static int32_t t6 = 202693;

    t6 = ((x25!=(x26-x27))&x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = UINT32_MAX;
	volatile int8_t x30 = INT8_MIN;
	volatile int16_t x31 = INT16_MAX;
	int64_t x32 = -1LL;
	volatile int64_t t7 = 1LL;

    t7 = ((x29!=(x30-x31))&x32);

    if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x34 = INT8_MAX;
	uint8_t x35 = 38U;
	int64_t x36 = -22595728741LL;
	int64_t t8 = -32296627374371790LL;

    t8 = ((x33!=(x34-x35))&x36);

    if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MAX;
	uint32_t x38 = 3U;
	static int8_t x39 = INT8_MAX;
	static volatile int32_t x40 = 215049619;

    t9 = ((x37!=(x38-x39))&x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint8_t x41 = UINT8_MAX;
	int64_t x43 = -1LL;
	int32_t x44 = INT32_MIN;
	volatile int32_t t10 = 925851098;

    t10 = ((x41!=(x42-x43))&x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = UINT8_MAX;
	int64_t x47 = -3585008LL;
	int8_t x48 = INT8_MIN;
	volatile int32_t t11 = -2;

    t11 = ((x45!=(x46-x47))&x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MIN;
	int16_t x50 = INT16_MIN;
	volatile int16_t x51 = INT16_MIN;
	volatile int16_t x52 = INT16_MIN;
	static int32_t t12 = 412;

    t12 = ((x49!=(x50-x51))&x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x54 = -1;
	volatile uint64_t x55 = 4305375443499LLU;
	int16_t x56 = INT16_MIN;
	int32_t t13 = 121834;

    t13 = ((x53!=(x54-x55))&x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x61 = 11U;
	int64_t x64 = INT64_MIN;

    t14 = ((x61!=(x62-x63))&x64);

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x65 = UINT64_MAX;
	static int32_t x66 = INT32_MAX;
	volatile uint32_t x67 = 52806070U;
	volatile int32_t t15 = 199528049;

    t15 = ((x65!=(x66-x67))&x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x69 = -33119;
	static uint64_t x70 = 1011LLU;
	int8_t x72 = -1;

    t16 = ((x69!=(x70-x71))&x72);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x77 = INT16_MIN;
	int8_t x78 = INT8_MIN;
	uint64_t x79 = UINT64_MAX;
	volatile int32_t x80 = INT32_MIN;
	volatile int32_t t17 = 492;

    t17 = ((x77!=(x78-x79))&x80);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x81 = -1LL;
	uint32_t x82 = 8U;
	int32_t x83 = INT32_MAX;
	volatile int32_t t18 = 116;

    t18 = ((x81!=(x82-x83))&x84);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x85 = UINT32_MAX;
	int32_t x86 = -1;
	int8_t x88 = INT8_MIN;
	int32_t t19 = 395628328;

    t19 = ((x85!=(x86-x87))&x88);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x89 = INT32_MAX;
	static uint16_t x91 = 1446U;
	int16_t x92 = -3;

    t20 = ((x89!=(x90-x91))&x92);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x94 = INT16_MAX;
	uint16_t x95 = 1U;
	static int64_t x96 = -35265LL;
	int64_t t21 = 2613618939LL;

    t21 = ((x93!=(x94-x95))&x96);

    if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x97 = INT8_MIN;
	static volatile int32_t x98 = -1;
	volatile uint64_t x99 = 6968LLU;
	static volatile int32_t t22 = 1815165;

    t22 = ((x97!=(x98-x99))&x100);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x103 = INT32_MIN;
	int32_t x104 = -11;
	int32_t t23 = -67778;

    t23 = ((x101!=(x102-x103))&x104);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x105 = UINT16_MAX;
	static uint16_t x106 = UINT16_MAX;
	int64_t x107 = 2556978914900402491LL;
	uint32_t x108 = 11120249U;
	volatile uint32_t t24 = 104942735U;

    t24 = ((x105!=(x106-x107))&x108);

    if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x109 = -1;
	int64_t x110 = -1LL;
	int32_t x112 = INT32_MIN;
	volatile int32_t t25 = -4;

    t25 = ((x109!=(x110-x111))&x112);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x113 = INT32_MIN;
	volatile int8_t x114 = -13;
	int32_t x115 = 3;
	volatile int16_t x116 = INT16_MIN;
	static int32_t t26 = 577259375;

    t26 = ((x113!=(x114-x115))&x116);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x117 = 209652416082LLU;
	int32_t x118 = INT32_MIN;
	volatile int64_t x119 = -1LL;
	static uint8_t x120 = UINT8_MAX;
	volatile int32_t t27 = 74;

    t27 = ((x117!=(x118-x119))&x120);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x121 = INT16_MAX;
	static int32_t x122 = -1;
	static int32_t x123 = INT32_MIN;
	volatile int64_t x124 = INT64_MIN;
	volatile int64_t t28 = 30849006827244800LL;

    t28 = ((x121!=(x122-x123))&x124);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x125 = UINT16_MAX;
	static uint32_t x127 = UINT32_MAX;
	uint16_t x128 = UINT16_MAX;
	static volatile int32_t t29 = 28058274;

    t29 = ((x125!=(x126-x127))&x128);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x129 = 7U;
	int16_t x130 = -6;
	volatile int32_t x131 = -1;
	uint8_t x132 = 3U;

    t30 = ((x129!=(x130-x131))&x132);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x133 = -1;
	static uint8_t x134 = UINT8_MAX;
	int8_t x135 = -1;
	static uint8_t x136 = 0U;
	static int32_t t31 = -3344;

    t31 = ((x133!=(x134-x135))&x136);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x137 = 775671U;
	static int16_t x138 = -4767;
	static volatile int8_t x139 = INT8_MIN;
	int64_t x140 = INT64_MAX;
	int64_t t32 = -23338856LL;

    t32 = ((x137!=(x138-x139))&x140);

    if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x141 = 44411855U;
	int32_t x142 = 27969443;
	int32_t x143 = -1;
	volatile uint16_t x144 = 5U;
	int32_t t33 = -789832;

    t33 = ((x141!=(x142-x143))&x144);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x145 = INT64_MIN;
	static int64_t x147 = 41734LL;
	int8_t x148 = 2;

    t34 = ((x145!=(x146-x147))&x148);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x149 = INT16_MIN;
	int64_t x150 = -1361731542377LL;
	int16_t x151 = 0;
	volatile int8_t x152 = INT8_MIN;
	volatile int32_t t35 = 23777997;

    t35 = ((x149!=(x150-x151))&x152);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x153 = INT64_MIN;
	int16_t x154 = INT16_MIN;
	static int32_t x155 = -31;
	int16_t x156 = INT16_MIN;
	static int32_t t36 = 129346;

    t36 = ((x153!=(x154-x155))&x156);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x161 = 3U;
	static volatile uint16_t x162 = 7625U;
	int64_t x163 = INT64_MAX;
	volatile uint16_t x164 = UINT16_MAX;

    t37 = ((x161!=(x162-x163))&x164);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x165 = INT16_MIN;
	static uint16_t x166 = UINT16_MAX;
	int8_t x167 = INT8_MAX;
	int16_t x168 = INT16_MIN;
	static volatile int32_t t38 = -133206300;

    t38 = ((x165!=(x166-x167))&x168);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x170 = 0;
	int8_t x171 = INT8_MIN;
	int32_t t39 = -148813304;

    t39 = ((x169!=(x170-x171))&x172);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x173 = INT8_MAX;
	int32_t x174 = INT32_MIN;
	uint16_t x176 = 26369U;
	volatile int32_t t40 = -1832;

    t40 = ((x173!=(x174-x175))&x176);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x181 = INT32_MIN;
	uint32_t x182 = UINT32_MAX;
	int32_t t41 = 73907607;

    t41 = ((x181!=(x182-x183))&x184);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x185 = INT32_MAX;
	uint32_t x186 = 243U;
	int64_t x187 = -32010LL;
	int8_t x188 = -1;
	volatile int32_t t42 = -6547567;

    t42 = ((x185!=(x186-x187))&x188);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x189 = 23181LLU;
	static uint16_t x190 = UINT16_MAX;
	volatile int64_t x191 = 517294LL;
	int16_t x192 = -1;
	volatile int32_t t43 = -125;

    t43 = ((x189!=(x190-x191))&x192);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x201 = 41377U;
	volatile int8_t x202 = 60;
	int64_t x203 = -51399263090LL;

    t44 = ((x201!=(x202-x203))&x204);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x205 = INT16_MIN;
	static volatile int8_t x206 = INT8_MAX;
	volatile uint8_t x207 = 0U;
	int8_t x208 = INT8_MIN;
	int32_t t45 = 293823416;

    t45 = ((x205!=(x206-x207))&x208);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x209 = INT8_MIN;
	int16_t x210 = INT16_MIN;
	int32_t x211 = INT32_MIN;
	static uint16_t x212 = 247U;
	volatile int32_t t46 = 367;

    t46 = ((x209!=(x210-x211))&x212);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x213 = 17U;
	int64_t x214 = -7173628512834891LL;
	volatile int8_t x215 = -1;
	volatile int32_t x216 = INT32_MIN;

    t47 = ((x213!=(x214-x215))&x216);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x217 = 908868072U;
	uint16_t x218 = 126U;
	uint32_t x220 = 12U;
	uint32_t t48 = 10281U;

    t48 = ((x217!=(x218-x219))&x220);

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x221 = 0;
	uint32_t x222 = 167500543U;
	int16_t x223 = 10;
	volatile int64_t x224 = -1LL;
	int64_t t49 = -27048LL;

    t49 = ((x221!=(x222-x223))&x224);

    if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x229 = INT16_MIN;
	int8_t x230 = 1;
	int16_t x231 = 10;

    t50 = ((x229!=(x230-x231))&x232);

    if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x233 = -68;
	int16_t x234 = 50;
	volatile int8_t x235 = INT8_MAX;

    t51 = ((x233!=(x234-x235))&x236);

    if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x237 = 1161415729744LL;
	volatile int16_t x238 = 61;
	int8_t x239 = INT8_MIN;
	int64_t x240 = -205476478659735120LL;
	int64_t t52 = 16781218992382LL;

    t52 = ((x237!=(x238-x239))&x240);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x241 = INT16_MIN;
	int8_t x242 = 24;
	uint16_t x243 = 24U;
	volatile uint64_t t53 = 403298049LLU;

    t53 = ((x241!=(x242-x243))&x244);

    if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x249 = 3U;
	int32_t x251 = INT32_MIN;
	uint32_t x252 = 1014U;
	volatile uint32_t t54 = 151U;

    t54 = ((x249!=(x250-x251))&x252);

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x253 = UINT8_MAX;
	static int8_t x254 = -1;
	uint16_t x256 = 2017U;
	volatile int32_t t55 = 62;

    t55 = ((x253!=(x254-x255))&x256);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x257 = INT64_MIN;
	int16_t x258 = 14235;
	int8_t x259 = 15;
	volatile int32_t t56 = 133780;

    t56 = ((x257!=(x258-x259))&x260);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x265 = INT16_MIN;
	volatile uint64_t x267 = 1LLU;
	int16_t x268 = 1;
	int32_t t57 = -47340814;

    t57 = ((x265!=(x266-x267))&x268);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x269 = 1;
	int64_t x271 = INT64_MAX;

    t58 = ((x269!=(x270-x271))&x272);

    if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x273 = 2128448775348811498LL;
	volatile int64_t t59 = -1LL;

    t59 = ((x273!=(x274-x275))&x276);

    if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x285 = INT64_MIN;
	static int64_t x286 = 1LL;
	uint64_t x287 = 1718293355835063601LLU;
	uint64_t x288 = 554691793327057736LLU;
	uint64_t t60 = 3LLU;

    t60 = ((x285!=(x286-x287))&x288);

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x289 = 121U;
	static int64_t x290 = -330984395LL;
	static int32_t x292 = INT32_MIN;
	static int32_t t61 = -3;

    t61 = ((x289!=(x290-x291))&x292);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x293 = 720LLU;
	volatile int32_t x294 = INT32_MAX;
	volatile uint64_t x295 = 1248219389LLU;
	volatile int32_t t62 = 491;

    t62 = ((x293!=(x294-x295))&x296);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x297 = INT16_MIN;
	static int16_t x298 = -22;
	uint64_t x299 = 140740816LLU;
	volatile int64_t t63 = 6LL;

    t63 = ((x297!=(x298-x299))&x300);

    if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x301 = 3;
	static volatile int8_t x302 = 62;
	int16_t x303 = -1;
	int8_t x304 = -1;
	static int32_t t64 = 6;

    t64 = ((x301!=(x302-x303))&x304);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x305 = UINT32_MAX;
	uint16_t x306 = UINT16_MAX;
	uint32_t x308 = UINT32_MAX;
	uint32_t t65 = 0U;

    t65 = ((x305!=(x306-x307))&x308);

    if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x313 = INT8_MIN;
	int64_t x314 = -1LL;
	volatile int32_t x315 = -1;
	int64_t t66 = -2LL;

    t66 = ((x313!=(x314-x315))&x316);

    if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x318 = INT16_MAX;
	uint32_t x319 = 931071U;
	int64_t x320 = -1LL;

    t67 = ((x317!=(x318-x319))&x320);

    if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x325 = INT8_MIN;
	volatile int32_t x326 = INT32_MIN;
	uint32_t x327 = 125293U;
	int16_t x328 = 6;

    t68 = ((x325!=(x326-x327))&x328);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x329 = 981092987U;
	volatile int64_t x330 = 249LL;
	uint64_t x331 = 502505641138013LLU;
	static volatile uint32_t x332 = UINT32_MAX;
	volatile uint32_t t69 = 52U;

    t69 = ((x329!=(x330-x331))&x332);

    if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x334 = -216797201;
	static uint32_t x335 = UINT32_MAX;
	static uint64_t x336 = 868547875388LLU;
	volatile uint64_t t70 = 11380969935530958LLU;

    t70 = ((x333!=(x334-x335))&x336);

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x337 = INT16_MIN;
	int8_t x338 = INT8_MIN;
	int16_t x340 = -7004;
	volatile int32_t t71 = -837219473;

    t71 = ((x337!=(x338-x339))&x340);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x341 = 40U;
	int64_t x342 = INT64_MIN;
	int64_t x343 = -5008750LL;
	volatile uint64_t x344 = 1LLU;
	volatile uint64_t t72 = 679928154LLU;

    t72 = ((x341!=(x342-x343))&x344);

    if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x346 = -5220;
	uint8_t x347 = 10U;
	int16_t x348 = INT16_MIN;
	int32_t t73 = 5241801;

    t73 = ((x345!=(x346-x347))&x348);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x349 = INT16_MIN;
	uint64_t x350 = UINT64_MAX;
	uint32_t x351 = UINT32_MAX;
	static volatile int64_t x352 = -18232353381LL;
	int64_t t74 = -2459374LL;

    t74 = ((x349!=(x350-x351))&x352);

    if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x353 = INT16_MIN;
	static int32_t x354 = INT32_MIN;
	volatile int16_t x356 = -1;
	static volatile int32_t t75 = 38;

    t75 = ((x353!=(x354-x355))&x356);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x357 = -1363;
	int8_t x358 = -12;
	int32_t t76 = -36;

    t76 = ((x357!=(x358-x359))&x360);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x361 = -1;
	static int8_t x362 = -1;
	static int32_t x363 = 3567;
	int32_t t77 = -247620988;

    t77 = ((x361!=(x362-x363))&x364);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x369 = UINT8_MAX;
	int64_t x370 = INT64_MIN;

    t78 = ((x369!=(x370-x371))&x372);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x373 = UINT8_MAX;
	int8_t x374 = INT8_MIN;
	uint64_t x375 = UINT64_MAX;
	volatile uint16_t x376 = UINT16_MAX;
	volatile int32_t t79 = 3907007;

    t79 = ((x373!=(x374-x375))&x376);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x377 = INT16_MIN;
	volatile int8_t x378 = 11;
	static uint16_t x379 = UINT16_MAX;
	int64_t x380 = INT64_MIN;

    t80 = ((x377!=(x378-x379))&x380);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x381 = INT16_MIN;
	static int8_t x382 = INT8_MAX;
	int64_t x383 = -2661449356LL;
	uint32_t x384 = 163970U;
	volatile uint32_t t81 = 504970U;

    t81 = ((x381!=(x382-x383))&x384);

    if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x385 = INT64_MIN;
	int16_t x386 = INT16_MAX;
	int64_t x388 = INT64_MAX;
	int64_t t82 = -66756986389895LL;

    t82 = ((x385!=(x386-x387))&x388);

    if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint8_t x389 = 0U;
	static uint32_t x390 = 347U;
	int8_t x391 = INT8_MIN;
	int32_t x392 = INT32_MIN;
	static int32_t t83 = -6;

    t83 = ((x389!=(x390-x391))&x392);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x393 = -1835777682033623640LL;
	int32_t x394 = -1;
	uint32_t x395 = 12U;

    t84 = ((x393!=(x394-x395))&x396);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x397 = UINT64_MAX;
	static int64_t x398 = -1LL;
	uint64_t x399 = UINT64_MAX;
	uint16_t x400 = UINT16_MAX;
	int32_t t85 = -2607154;

    t85 = ((x397!=(x398-x399))&x400);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x401 = INT64_MAX;
	static uint8_t x402 = 68U;
	static int16_t x403 = INT16_MAX;
	volatile int64_t x404 = INT64_MIN;
	volatile int64_t t86 = -35342216887448459LL;

    t86 = ((x401!=(x402-x403))&x404);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x405 = -1;
	int8_t x406 = INT8_MIN;
	static volatile int64_t x407 = -6699098983LL;
	static int64_t x408 = INT64_MIN;
	static volatile int64_t t87 = -964501935770LL;

    t87 = ((x405!=(x406-x407))&x408);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x410 = 6751930041LL;
	int64_t x411 = -1LL;
	int32_t x412 = -1;
	volatile int32_t t88 = 60;

    t88 = ((x409!=(x410-x411))&x412);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x413 = 16U;
	int16_t x414 = -1;
	static int64_t x415 = -15175LL;
	volatile int32_t t89 = 0;

    t89 = ((x413!=(x414-x415))&x416);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x418 = -1LL;
	static int8_t x419 = INT8_MAX;
	static int32_t x420 = INT32_MAX;
	static int32_t t90 = 28;

    t90 = ((x417!=(x418-x419))&x420);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x421 = UINT64_MAX;
	int16_t x422 = -1;
	volatile uint64_t x423 = 149608563556913LLU;
	volatile int16_t x424 = INT16_MIN;
	int32_t t91 = 1534069;

    t91 = ((x421!=(x422-x423))&x424);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x425 = INT8_MIN;
	int16_t x426 = INT16_MIN;
	int16_t x427 = INT16_MIN;
	uint8_t x428 = 2U;
	volatile int32_t t92 = -14455301;

    t92 = ((x425!=(x426-x427))&x428);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x429 = INT8_MIN;
	uint64_t x430 = 11709272LLU;
	int64_t x431 = -1LL;
	int16_t x432 = INT16_MIN;

    t93 = ((x429!=(x430-x431))&x432);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x433 = 0LLU;
	volatile int64_t x434 = -235396384189LL;
	int32_t x435 = INT32_MIN;
	uint16_t x436 = 3U;
	static int32_t t94 = 1361876;

    t94 = ((x433!=(x434-x435))&x436);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int32_t x437 = INT32_MIN;
	int16_t x438 = INT16_MIN;
	uint16_t x439 = 2647U;
	static uint64_t x440 = 3193935544835765LLU;
	volatile uint64_t t95 = 16159570593266131LLU;

    t95 = ((x437!=(x438-x439))&x440);

    if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x441 = INT64_MAX;
	static int8_t x442 = -1;

    t96 = ((x441!=(x442-x443))&x444);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x445 = UINT32_MAX;
	static int32_t x446 = INT32_MIN;
	static uint64_t x447 = 111570443666815LLU;
	volatile int16_t x448 = -1;

    t97 = ((x445!=(x446-x447))&x448);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x449 = 0U;
	volatile int16_t x451 = INT16_MIN;
	static int32_t x452 = 884750;
	volatile int32_t t98 = -4673067;

    t98 = ((x449!=(x450-x451))&x452);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int16_t x455 = INT16_MIN;
	volatile int64_t x456 = 13LL;
	int64_t t99 = 99408559LL;

    t99 = ((x453!=(x454-x455))&x456);

    if (t99 != 1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x457 = INT64_MIN;
	uint32_t x458 = 361711298U;
	int64_t x459 = 320553LL;
	static int8_t x460 = INT8_MIN;
	volatile int32_t t100 = 12;

    t100 = ((x457!=(x458-x459))&x460);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x463 = INT16_MIN;
	static int32_t x464 = 697896037;
	volatile int32_t t101 = -43861;

    t101 = ((x461!=(x462-x463))&x464);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x465 = INT32_MIN;
	int16_t x467 = INT16_MIN;
	int8_t x468 = -3;
	volatile int32_t t102 = 1044;

    t102 = ((x465!=(x466-x467))&x468);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x469 = 1U;
	uint64_t x470 = 714658167927LLU;
	int8_t x471 = INT8_MAX;
	uint8_t x472 = 103U;
	volatile int32_t t103 = 516091903;

    t103 = ((x469!=(x470-x471))&x472);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x474 = 94U;
	static int8_t x475 = INT8_MIN;
	int64_t x476 = INT64_MIN;
	int64_t t104 = -12LL;

    t104 = ((x473!=(x474-x475))&x476);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x477 = 9;
	int32_t x478 = INT32_MAX;

    t105 = ((x477!=(x478-x479))&x480);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x481 = 1;
	int8_t x482 = 3;
	int64_t x483 = -1LL;
	int16_t x484 = -281;

    t106 = ((x481!=(x482-x483))&x484);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x485 = -1;
	static volatile int8_t x488 = -1;
	static volatile int32_t t107 = 931710801;

    t107 = ((x485!=(x486-x487))&x488);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x489 = INT64_MIN;
	uint8_t x490 = 35U;
	uint64_t x492 = 35LLU;
	uint64_t t108 = 68809944548LLU;

    t108 = ((x489!=(x490-x491))&x492);

    if (t108 != 1LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x497 = INT32_MIN;
	uint8_t x498 = UINT8_MAX;
	volatile uint16_t x499 = 6382U;
	static uint64_t t109 = 2414324LLU;

    t109 = ((x497!=(x498-x499))&x500);

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x501 = 287207;
	volatile int32_t x502 = 496645;
	static uint8_t x503 = UINT8_MAX;
	uint32_t x504 = 1295001670U;
	uint32_t t110 = 1U;

    t110 = ((x501!=(x502-x503))&x504);

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint64_t x505 = 4204410850574978872LLU;
	int32_t x507 = 83;
	int16_t x508 = INT16_MIN;

    t111 = ((x505!=(x506-x507))&x508);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x509 = 2;
	static int64_t x510 = -1LL;
	uint32_t x511 = UINT32_MAX;
	int32_t t112 = -150;

    t112 = ((x509!=(x510-x511))&x512);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint64_t x513 = UINT64_MAX;
	uint8_t x514 = 2U;
	volatile int32_t x515 = -1;
	int32_t t113 = -43791839;

    t113 = ((x513!=(x514-x515))&x516);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x517 = 21;
	static int8_t x518 = INT8_MAX;
	static volatile int16_t x519 = INT16_MAX;
	static uint8_t x520 = 122U;

    t114 = ((x517!=(x518-x519))&x520);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x521 = 184U;
	static volatile int8_t x522 = 0;
	uint8_t x523 = UINT8_MAX;
	int8_t x524 = INT8_MAX;
	int32_t t115 = -2;

    t115 = ((x521!=(x522-x523))&x524);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint16_t x529 = UINT16_MAX;
	int8_t x530 = INT8_MIN;
	static int16_t x531 = 983;
	volatile int32_t x532 = INT32_MIN;
	volatile int32_t t116 = 14524;

    t116 = ((x529!=(x530-x531))&x532);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x533 = INT64_MIN;
	int16_t x534 = INT16_MIN;
	static int16_t x535 = -446;
	volatile int32_t t117 = 1;

    t117 = ((x533!=(x534-x535))&x536);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x537 = UINT32_MAX;
	uint64_t x538 = 58984919393LLU;
	static int64_t x540 = -254211LL;
	int64_t t118 = 20957912891817LL;

    t118 = ((x537!=(x538-x539))&x540);

    if (t118 != 1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x541 = INT64_MIN;
	int8_t x542 = INT8_MIN;
	uint16_t x543 = UINT16_MAX;
	int16_t x544 = -81;
	volatile int32_t t119 = -95642229;

    t119 = ((x541!=(x542-x543))&x544);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x548 = INT32_MIN;
	int32_t t120 = -86406;

    t120 = ((x545!=(x546-x547))&x548);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x549 = 27U;
	volatile int64_t x550 = INT64_MAX;
	int64_t x551 = INT64_MAX;
	int8_t x552 = INT8_MIN;

    t121 = ((x549!=(x550-x551))&x552);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x553 = INT64_MIN;
	uint16_t x555 = 894U;
	int16_t x556 = -16113;
	static volatile int32_t t122 = 36;

    t122 = ((x553!=(x554-x555))&x556);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x561 = INT8_MIN;
	int8_t x563 = INT8_MIN;
	uint64_t x564 = 28658046900161031LLU;
	uint64_t t123 = 5546770LLU;

    t123 = ((x561!=(x562-x563))&x564);

    if (t123 != 1LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x565 = INT32_MIN;
	volatile uint8_t x566 = UINT8_MAX;
	uint64_t x567 = UINT64_MAX;
	volatile int32_t t124 = 274243411;

    t124 = ((x565!=(x566-x567))&x568);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x571 = -1;
	int32_t t125 = 435960;

    t125 = ((x569!=(x570-x571))&x572);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x573 = INT16_MIN;
	int16_t x574 = INT16_MIN;
	volatile uint32_t x575 = UINT32_MAX;
	uint16_t x576 = 26U;

    t126 = ((x573!=(x574-x575))&x576);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x577 = -1;
	volatile uint64_t x579 = 245298855LLU;
	static uint32_t x580 = 1663U;
	volatile uint32_t t127 = 520104114U;

    t127 = ((x577!=(x578-x579))&x580);

    if (t127 != 1U) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint64_t x581 = 3390049803799057LLU;
	int64_t x582 = 81292856061260LL;
	int16_t x583 = 2638;
	static int32_t t128 = -432;

    t128 = ((x581!=(x582-x583))&x584);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x585 = 2U;
	uint8_t x586 = 0U;
	int16_t x587 = INT16_MIN;
	int8_t x588 = 1;
	static int32_t t129 = -12;

    t129 = ((x585!=(x586-x587))&x588);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x589 = INT16_MIN;
	int32_t x591 = INT32_MAX;
	uint32_t x592 = 0U;
	volatile uint32_t t130 = 2715U;

    t130 = ((x589!=(x590-x591))&x592);

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x593 = -1;
	static volatile uint8_t x594 = 14U;
	int32_t x595 = 132;
	int64_t x596 = -1LL;
	static volatile int64_t t131 = -836460451199028LL;

    t131 = ((x593!=(x594-x595))&x596);

    if (t131 != 1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint8_t x610 = 6U;
	int8_t x611 = INT8_MAX;
	uint64_t x612 = 0LLU;
	volatile uint64_t t132 = 744LLU;

    t132 = ((x609!=(x610-x611))&x612);

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x615 = INT32_MIN;
	volatile int32_t t133 = 15726074;

    t133 = ((x613!=(x614-x615))&x616);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x621 = 1518U;
	int64_t x622 = INT64_MAX;
	int32_t t134 = 46076;

    t134 = ((x621!=(x622-x623))&x624);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x625 = INT8_MIN;
	static int8_t x626 = INT8_MIN;
	static int64_t x627 = 123LL;
	static int16_t x628 = INT16_MIN;
	volatile int32_t t135 = 2;

    t135 = ((x625!=(x626-x627))&x628);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int16_t x629 = INT16_MAX;

    t136 = ((x629!=(x630-x631))&x632);

    if (t136 != 1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x637 = INT64_MIN;
	static uint16_t x638 = 20997U;
	volatile uint32_t x640 = UINT32_MAX;
	uint32_t t137 = 202430874U;

    t137 = ((x637!=(x638-x639))&x640);

    if (t137 != 1U) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x641 = -1;
	static uint8_t x642 = UINT8_MAX;
	int16_t x643 = INT16_MAX;
	volatile int64_t x644 = -963023LL;

    t138 = ((x641!=(x642-x643))&x644);

    if (t138 != 1LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x645 = 14U;
	volatile int64_t x646 = 69LL;
	static uint16_t x647 = 11U;
	int16_t x648 = -1;
	volatile int32_t t139 = -520479;

    t139 = ((x645!=(x646-x647))&x648);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x650 = INT16_MAX;
	uint64_t x651 = 44904130590LLU;
	uint64_t x652 = UINT64_MAX;
	static uint64_t t140 = 854929933215673709LLU;

    t140 = ((x649!=(x650-x651))&x652);

    if (t140 != 1LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint8_t x653 = UINT8_MAX;
	int64_t x654 = -4001954250683LL;
	uint16_t x656 = 6979U;
	volatile int32_t t141 = -1;

    t141 = ((x653!=(x654-x655))&x656);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x657 = 123U;
	int16_t x658 = INT16_MIN;
	int8_t x659 = INT8_MIN;
	int32_t t142 = 5074135;

    t142 = ((x657!=(x658-x659))&x660);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x661 = UINT32_MAX;
	int16_t x662 = -1;
	uint8_t x663 = 12U;
	int64_t x664 = -1LL;
	volatile int64_t t143 = 269LL;

    t143 = ((x661!=(x662-x663))&x664);

    if (t143 != 1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x666 = UINT64_MAX;
	uint16_t x667 = 4259U;
	int64_t x668 = 3735278LL;
	int64_t t144 = -1167LL;

    t144 = ((x665!=(x666-x667))&x668);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x671 = -1;
	int64_t x672 = INT64_MIN;
	static int64_t t145 = -7548004141509720LL;

    t145 = ((x669!=(x670-x671))&x672);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint16_t x673 = 2U;
	uint8_t x674 = UINT8_MAX;
	static int8_t x675 = 0;
	int64_t x676 = INT64_MIN;

    t146 = ((x673!=(x674-x675))&x676);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x677 = -1;
	uint16_t x678 = 14U;
	static int32_t x679 = -184;
	int32_t x680 = 1908;
	int32_t t147 = 913;

    t147 = ((x677!=(x678-x679))&x680);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x681 = 4100U;
	int32_t x682 = 234224;
	int8_t x683 = INT8_MIN;
	volatile int64_t x684 = -1LL;
	int64_t t148 = 2213447392011098689LL;

    t148 = ((x681!=(x682-x683))&x684);

    if (t148 != 1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x685 = 454;
	int16_t x686 = INT16_MIN;
	int64_t x687 = 6LL;
	static int16_t x688 = -7;
	volatile int32_t t149 = 120147111;

    t149 = ((x685!=(x686-x687))&x688);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x689 = INT32_MIN;
	uint32_t x691 = UINT32_MAX;
	volatile uint8_t x692 = UINT8_MAX;
	static volatile int32_t t150 = 3;

    t150 = ((x689!=(x690-x691))&x692);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x693 = -1;
	static uint8_t x695 = UINT8_MAX;
	int32_t x696 = INT32_MIN;
	int32_t t151 = 155;

    t151 = ((x693!=(x694-x695))&x696);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x701 = 687346861290558LLU;
	int32_t x702 = 3219;
	static int16_t x703 = INT16_MIN;
	volatile int32_t t152 = 4;

    t152 = ((x701!=(x702-x703))&x704);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x706 = 18375U;
	volatile uint8_t x707 = 1U;
	int16_t x708 = -1;
	int32_t t153 = 83;

    t153 = ((x705!=(x706-x707))&x708);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x713 = 5912172;
	volatile int8_t x714 = -18;
	uint64_t x715 = UINT64_MAX;
	int16_t x716 = INT16_MIN;
	volatile int32_t t154 = 1;

    t154 = ((x713!=(x714-x715))&x716);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint16_t x718 = UINT16_MAX;
	uint64_t x719 = UINT64_MAX;
	int8_t x720 = INT8_MIN;
	volatile int32_t t155 = 60114;

    t155 = ((x717!=(x718-x719))&x720);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x721 = INT64_MIN;
	static int32_t x722 = -1;
	volatile int8_t x723 = -1;
	uint16_t x724 = 29U;
	static int32_t t156 = -8;

    t156 = ((x721!=(x722-x723))&x724);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint8_t x725 = 62U;
	static volatile uint32_t x726 = 47716U;
	int32_t x727 = -1820177;
	int32_t t157 = -752289;

    t157 = ((x725!=(x726-x727))&x728);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x729 = UINT32_MAX;
	uint64_t x731 = 53663761622415LLU;
	static volatile int32_t t158 = -3423;

    t158 = ((x729!=(x730-x731))&x732);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x734 = -7401608;
	int16_t x735 = INT16_MIN;
	uint64_t x736 = UINT64_MAX;

    t159 = ((x733!=(x734-x735))&x736);

    if (t159 != 1LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x737 = INT16_MIN;
	int8_t x739 = INT8_MIN;
	int8_t x740 = INT8_MIN;

    t160 = ((x737!=(x738-x739))&x740);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int32_t x741 = INT32_MAX;
	int16_t x743 = -1;
	int32_t x744 = -1;
	volatile int32_t t161 = -60;

    t161 = ((x741!=(x742-x743))&x744);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x749 = -56590985;
	int64_t x751 = INT64_MAX;
	uint32_t x752 = UINT32_MAX;
	uint32_t t162 = 10553U;

    t162 = ((x749!=(x750-x751))&x752);

    if (t162 != 1U) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x753 = -1;
	uint8_t x754 = 0U;
	int16_t x755 = 0;
	static int8_t x756 = -1;
	int32_t t163 = -2883540;

    t163 = ((x753!=(x754-x755))&x756);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x757 = INT16_MIN;
	int64_t x758 = -1LL;
	volatile uint64_t x759 = UINT64_MAX;
	int8_t x760 = INT8_MAX;
	volatile int32_t t164 = 3;

    t164 = ((x757!=(x758-x759))&x760);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x761 = -1LL;
	int32_t x762 = INT32_MAX;
	int16_t x763 = INT16_MAX;

    t165 = ((x761!=(x762-x763))&x764);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x766 = -29;
	int16_t x768 = 3;

    t166 = ((x765!=(x766-x767))&x768);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x769 = -1;
	volatile uint32_t x770 = 2531036U;
	uint32_t x771 = 139116857U;
	int16_t x772 = -1;
	volatile int32_t t167 = 0;

    t167 = ((x769!=(x770-x771))&x772);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x775 = UINT32_MAX;
	uint8_t x776 = UINT8_MAX;

    t168 = ((x773!=(x774-x775))&x776);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint32_t x777 = 4350U;
	uint64_t x778 = 32488749223993LLU;
	int16_t x779 = INT16_MAX;
	int16_t x780 = -1;
	volatile int32_t t169 = 245305287;

    t169 = ((x777!=(x778-x779))&x780);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint32_t x782 = UINT32_MAX;
	volatile int8_t x783 = INT8_MIN;
	volatile int32_t x784 = INT32_MAX;
	volatile int32_t t170 = 5846;

    t170 = ((x781!=(x782-x783))&x784);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x785 = -1LL;
	volatile uint64_t x786 = UINT64_MAX;
	static int64_t x787 = 8117763185189039LL;

    t171 = ((x785!=(x786-x787))&x788);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x789 = 497U;
	uint64_t x790 = 8332338432991971427LLU;
	volatile int64_t x791 = 3420477485247LL;
	int64_t x792 = -2089486479682287354LL;
	static int64_t t172 = 177996989036LL;

    t172 = ((x789!=(x790-x791))&x792);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x797 = INT64_MIN;
	uint32_t x798 = 122188999U;
	int16_t x799 = INT16_MIN;
	static volatile int64_t x800 = INT64_MIN;
	int64_t t173 = -51952714081LL;

    t173 = ((x797!=(x798-x799))&x800);

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x801 = INT32_MAX;
	int16_t x802 = INT16_MAX;
	int8_t x803 = INT8_MAX;
	volatile int64_t x804 = -152294732098046LL;
	static volatile int64_t t174 = -4759230428794911LL;

    t174 = ((x801!=(x802-x803))&x804);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x805 = 953703514109139LL;
	int8_t x806 = INT8_MIN;
	static int8_t x807 = INT8_MAX;
	uint16_t x808 = 185U;
	volatile int32_t t175 = -77;

    t175 = ((x805!=(x806-x807))&x808);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x809 = INT8_MAX;
	int16_t x811 = 0;
	volatile int32_t t176 = -2268;

    t176 = ((x809!=(x810-x811))&x812);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x815 = UINT16_MAX;
	volatile int8_t x816 = INT8_MIN;
	int32_t t177 = 67035;

    t177 = ((x813!=(x814-x815))&x816);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int8_t x817 = -3;
	volatile int8_t x818 = INT8_MIN;
	int64_t x819 = INT64_MIN;

    t178 = ((x817!=(x818-x819))&x820);

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x821 = -1LL;
	volatile uint8_t x822 = 25U;
	uint32_t x823 = UINT32_MAX;
	int32_t t179 = 214;

    t179 = ((x821!=(x822-x823))&x824);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x825 = 3516713053LLU;
	static uint32_t x827 = UINT32_MAX;
	uint64_t x828 = 371711794890628LLU;
	volatile uint64_t t180 = 8600622768427690499LLU;

    t180 = ((x825!=(x826-x827))&x828);

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x829 = INT16_MIN;
	uint16_t x830 = 3U;
	int16_t x832 = INT16_MIN;
	int32_t t181 = 176;

    t181 = ((x829!=(x830-x831))&x832);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x834 = 111U;
	volatile int8_t x835 = -1;
	volatile int8_t x836 = INT8_MIN;
	int32_t t182 = 6774;

    t182 = ((x833!=(x834-x835))&x836);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x837 = -1;
	int64_t x838 = INT64_MIN;
	int32_t x839 = INT32_MIN;
	uint8_t x840 = 11U;
	volatile int32_t t183 = -59;

    t183 = ((x837!=(x838-x839))&x840);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x841 = -1;
	uint8_t x842 = 0U;
	volatile int64_t x843 = INT64_MAX;
	uint64_t x844 = 1489265LLU;
	uint64_t t184 = 7LLU;

    t184 = ((x841!=(x842-x843))&x844);

    if (t184 != 1LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint16_t x845 = 40U;
	uint8_t x846 = 7U;
	uint32_t x847 = 12U;
	volatile int16_t x848 = -1;
	volatile int32_t t185 = -139359880;

    t185 = ((x845!=(x846-x847))&x848);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x849 = INT8_MIN;
	int16_t x850 = 104;
	int8_t x851 = -1;
	volatile int32_t t186 = 1520;

    t186 = ((x849!=(x850-x851))&x852);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x853 = 119;
	uint64_t x855 = 10654LLU;
	static int32_t x856 = 226;
	int32_t t187 = -188;

    t187 = ((x853!=(x854-x855))&x856);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x857 = INT64_MIN;
	int16_t x858 = INT16_MIN;
	int32_t x859 = -1;
	volatile int32_t x860 = -1;
	static volatile int32_t t188 = 330455;

    t188 = ((x857!=(x858-x859))&x860);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x861 = -18;
	int8_t x863 = -1;
	uint8_t x864 = UINT8_MAX;
	int32_t t189 = 113;

    t189 = ((x861!=(x862-x863))&x864);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x869 = -1;
	int32_t x870 = -21;

    t190 = ((x869!=(x870-x871))&x872);

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x877 = 1856;
	uint8_t x878 = 5U;
	int8_t x879 = INT8_MIN;
	int32_t x880 = 0;
	volatile int32_t t191 = 8168;

    t191 = ((x877!=(x878-x879))&x880);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x885 = 7;
	int8_t x887 = 12;
	int8_t x888 = -1;
	int32_t t192 = 1570674;

    t192 = ((x885!=(x886-x887))&x888);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x889 = 14443332739538LL;
	int32_t x890 = 26738;
	volatile int8_t x891 = 63;

    t193 = ((x889!=(x890-x891))&x892);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x893 = INT8_MAX;
	volatile uint32_t x894 = UINT32_MAX;
	int64_t x896 = INT64_MIN;
	static int64_t t194 = 66628665120LL;

    t194 = ((x893!=(x894-x895))&x896);

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x899 = INT32_MIN;
	volatile int16_t x900 = INT16_MIN;
	static volatile int32_t t195 = -702377022;

    t195 = ((x897!=(x898-x899))&x900);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x901 = 108U;
	volatile uint64_t x903 = 8961841548177989758LLU;
	static int64_t x904 = 27808337805187LL;

    t196 = ((x901!=(x902-x903))&x904);

    if (t196 != 1LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x906 = 1007748085U;
	uint8_t x907 = UINT8_MAX;
	uint64_t x908 = UINT64_MAX;
	uint64_t t197 = 437668191570334288LLU;

    t197 = ((x905!=(x906-x907))&x908);

    if (t197 != 1LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x909 = 13U;
	int32_t x910 = INT32_MIN;
	volatile int32_t t198 = -2;

    t198 = ((x909!=(x910-x911))&x912);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x917 = INT32_MIN;
	static volatile int32_t x918 = -2;
	uint32_t x919 = UINT32_MAX;
	uint8_t x920 = UINT8_MAX;
	int32_t t199 = 12426;

    t199 = ((x917!=(x918-x919))&x920);

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

