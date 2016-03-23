
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

static int16_t x9 = INT16_MIN;
static int16_t x12 = -1;
int32_t t1 = -219;
int8_t x38 = INT8_MAX;
int32_t x40 = INT32_MIN;
volatile int8_t x44 = 1;
int32_t t7 = -25;
int32_t x49 = INT32_MIN;
int64_t x50 = 65268349LL;
static int32_t t9 = 23786584;
int32_t x66 = -8;
int32_t t15 = -4369;
static volatile uint8_t x83 = 2U;
int32_t x93 = INT32_MIN;
uint64_t x94 = 2LLU;
int64_t x96 = -1LL;
static volatile uint8_t x101 = 4U;
int64_t x105 = -1LL;
volatile int32_t t22 = -14246844;
uint16_t x131 = 410U;
int64_t x133 = -1LL;
static volatile int64_t x139 = INT64_MIN;
volatile int8_t x141 = INT8_MIN;
static uint64_t x142 = 534079717191LLU;
static int64_t x147 = INT64_MIN;
int64_t x153 = -1LL;
int16_t x156 = INT16_MAX;
volatile int8_t x157 = 0;
int32_t t33 = -2;
volatile int32_t x172 = INT32_MAX;
int8_t x175 = 7;
static uint8_t x176 = 0U;
int8_t x191 = INT8_MAX;
int8_t x193 = 2;
int16_t x195 = 140;
uint8_t x201 = 1U;
uint16_t x206 = UINT16_MAX;
volatile int32_t t41 = 636311;
volatile int32_t t43 = 242385854;
int32_t x222 = INT32_MIN;
uint64_t x223 = 422431983745370LLU;
int64_t x229 = INT64_MIN;
volatile int32_t x233 = -1;
volatile int32_t x236 = 12;
uint8_t x238 = UINT8_MAX;
volatile int32_t t49 = -32;
volatile int32_t t50 = 85893078;
int32_t x255 = -1;
uint32_t x267 = UINT32_MAX;
int8_t x269 = INT8_MIN;
uint64_t x276 = 114655732546966104LLU;
int16_t x283 = -13;
int32_t t59 = -34;
int16_t x286 = -1;
static uint8_t x289 = 0U;
uint64_t x296 = 791603393741LLU;
int32_t x297 = -1;
int64_t x300 = INT64_MAX;
int8_t x309 = 0;
int64_t x316 = -877527384LL;
volatile int64_t x324 = INT64_MAX;
int8_t x337 = -1;
volatile int32_t t72 = -544774;
volatile int32_t t73 = 6;
uint8_t x345 = UINT8_MAX;
uint32_t x353 = UINT32_MAX;
uint64_t x356 = 1390289LLU;
volatile int64_t x361 = -99782105052614LL;
volatile int32_t t78 = 0;
volatile int64_t x375 = -1LL;
int8_t x377 = INT8_MAX;
static int32_t x379 = INT32_MIN;
int64_t x382 = INT64_MIN;
int8_t x386 = INT8_MAX;
int32_t x402 = -1;
int32_t x405 = 364575;
static uint32_t x409 = UINT32_MAX;
static uint32_t x410 = 933360199U;
int16_t x414 = -1;
int32_t x415 = INT32_MIN;
volatile int32_t t89 = 46350930;
static uint16_t x418 = 1U;
uint8_t x421 = 3U;
int64_t x428 = INT64_MAX;
static int16_t x429 = -1;
static uint8_t x430 = UINT8_MAX;
volatile int32_t t97 = 111751;
volatile uint64_t x456 = 333981197092821LLU;
int32_t x457 = INT32_MIN;
int16_t x463 = INT16_MIN;
volatile int64_t x466 = INT64_MIN;
int16_t x468 = 299;
static int32_t t102 = 103;
static uint16_t x478 = 9734U;
int32_t x479 = -1;
int64_t x491 = -6284LL;
uint16_t x499 = 2038U;
volatile int32_t t108 = -290678;
static volatile int32_t t110 = 950693;
uint32_t x519 = UINT32_MAX;
int64_t x520 = INT64_MIN;
int16_t x523 = -182;
volatile int8_t x525 = INT8_MIN;
uint8_t x533 = 1U;
volatile int32_t t116 = 70949786;
static int32_t x550 = INT32_MIN;
uint8_t x552 = UINT8_MAX;
int64_t x556 = -4705665114656766LL;
uint16_t x557 = 22727U;
uint16_t x559 = 327U;
int8_t x560 = -1;
uint16_t x563 = 3U;
int32_t t121 = -248379;
static volatile int64_t x569 = INT64_MIN;
int32_t x570 = 16531214;
static int8_t x571 = -1;
int32_t x584 = INT32_MIN;
volatile int16_t x585 = INT16_MAX;
volatile int32_t t126 = -761591;
int16_t x594 = INT16_MIN;
uint8_t x597 = UINT8_MAX;
int32_t x598 = -6;
int64_t x600 = INT64_MIN;
int8_t x601 = INT8_MAX;
static int8_t x603 = INT8_MIN;
uint16_t x605 = 8495U;
int8_t x607 = INT8_MAX;
int32_t x612 = -1;
static int8_t x615 = INT8_MIN;
volatile int32_t t133 = 9439;
int16_t x622 = INT16_MIN;
static int64_t x624 = 30864LL;
int8_t x626 = INT8_MIN;
static int16_t x634 = INT16_MAX;
int8_t x635 = INT8_MIN;
int8_t x641 = INT8_MIN;
volatile uint8_t x643 = UINT8_MAX;
static volatile int32_t t139 = -299;
static volatile int32_t t140 = -2965;
int32_t x656 = -1;
volatile int32_t t142 = -245;
static int32_t x657 = -1;
static int32_t t143 = 13912;
static int32_t t145 = -27284627;
int8_t x670 = INT8_MAX;
int64_t x677 = -1LL;
uint16_t x681 = 5607U;
int8_t x684 = INT8_MIN;
uint16_t x686 = 24U;
int8_t x687 = -1;
int64_t x692 = INT64_MIN;
static volatile int64_t x696 = INT64_MIN;
static int16_t x698 = -1;
uint16_t x700 = 4581U;
static volatile uint8_t x704 = 34U;
int8_t x715 = INT8_MIN;
volatile int16_t x721 = -16;
uint32_t x722 = 19U;
int8_t x728 = -1;
uint8_t x750 = UINT8_MAX;
volatile int32_t t163 = 44906069;
int8_t x753 = -1;
int16_t x754 = 1;
static uint64_t x760 = 863972026537469LLU;
int32_t x762 = INT32_MIN;
int32_t t166 = -7779095;
volatile uint64_t x766 = 33662902854776LLU;
volatile int32_t x770 = -39981;
int64_t x772 = INT64_MIN;
int8_t x774 = INT8_MIN;
int16_t x777 = INT16_MAX;
int64_t x779 = INT64_MAX;
int32_t x780 = INT32_MIN;
uint64_t x786 = 287177270713LLU;
int16_t x790 = 1500;
int64_t x805 = INT64_MIN;
int16_t x817 = 1;
uint16_t x819 = 3311U;
static uint8_t x826 = 1U;
int8_t x833 = INT8_MIN;
uint64_t x836 = UINT64_MAX;
int16_t x839 = INT16_MAX;
int16_t x842 = -1;
volatile uint8_t x843 = 8U;
static uint64_t x844 = 6352736LLU;
int32_t t181 = -2417157;
volatile int8_t x847 = INT8_MAX;
int64_t x849 = INT64_MIN;
int32_t x850 = INT32_MIN;
int32_t x851 = -1;
int16_t x856 = INT16_MIN;
volatile int32_t t185 = 0;
static volatile int64_t x865 = -1LL;
int8_t x867 = INT8_MIN;
int32_t t188 = 1;
uint16_t x887 = 2U;
int16_t x890 = INT16_MIN;
int64_t x892 = 1153777172187LL;
uint16_t x897 = 2U;
uint64_t x898 = UINT64_MAX;
int64_t x900 = INT64_MIN;
volatile uint16_t x902 = 1U;
uint64_t x903 = 1LLU;
int8_t x907 = 14;
uint32_t x908 = 8146727U;
volatile int32_t t195 = 133085057;
volatile int32_t t196 = -4151;
int8_t x918 = INT8_MAX;
uint8_t x925 = 1U;
int64_t x927 = INT64_MIN;


void f0(void) {
    	int16_t x5 = INT16_MAX;
	static uint32_t x6 = 405209U;
	uint64_t x7 = 5903473684383LLU;
	uint64_t x8 = 101729LLU;
	int32_t t0 = -31;

    t0 = ((x5!=(x6-x7))>x8);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x10 = INT16_MIN;
	volatile uint64_t x11 = UINT64_MAX;

    t1 = ((x9!=(x10-x11))>x12);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x13 = 1;
	int64_t x14 = 1531110LL;
	int8_t x15 = -1;
	int64_t x16 = 2021951700998636LL;
	int32_t t2 = -163786507;

    t2 = ((x13!=(x14-x15))>x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x25 = UINT8_MAX;
	int64_t x26 = -1LL;
	static int64_t x27 = INT64_MAX;
	uint32_t x28 = UINT32_MAX;
	volatile int32_t t3 = -124237781;

    t3 = ((x25!=(x26-x27))>x28);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x29 = 424620970U;
	static int32_t x30 = INT32_MIN;
	volatile int32_t x31 = -1;
	int32_t x32 = 33;
	volatile int32_t t4 = 21;

    t4 = ((x29!=(x30-x31))>x32);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x37 = INT32_MIN;
	volatile int8_t x39 = INT8_MIN;
	static volatile int32_t t5 = 19002;

    t5 = ((x37!=(x38-x39))>x40);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x41 = INT8_MIN;
	uint64_t x42 = 318795747LLU;
	volatile int8_t x43 = -1;
	volatile int32_t t6 = -5507;

    t6 = ((x41!=(x42-x43))>x44);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x45 = 3U;
	uint8_t x46 = 1U;
	uint16_t x47 = 0U;
	static volatile int8_t x48 = -31;

    t7 = ((x45!=(x46-x47))>x48);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x51 = 12U;
	int16_t x52 = INT16_MAX;
	int32_t t8 = -1;

    t8 = ((x49!=(x50-x51))>x52);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x53 = INT32_MIN;
	int32_t x54 = INT32_MIN;
	static int16_t x55 = INT16_MIN;
	uint64_t x56 = 819871560LLU;

    t9 = ((x53!=(x54-x55))>x56);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x57 = -3;
	static int8_t x58 = INT8_MIN;
	volatile int16_t x59 = -8;
	volatile uint16_t x60 = 51U;
	volatile int32_t t10 = -1227;

    t10 = ((x57!=(x58-x59))>x60);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x61 = 6889382LLU;
	int32_t x62 = -34018;
	int32_t x63 = 241;
	static int32_t x64 = 260341092;
	volatile int32_t t11 = -2;

    t11 = ((x61!=(x62-x63))>x64);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x65 = 5565879U;
	uint64_t x67 = 1454786225393841LLU;
	uint16_t x68 = 16U;
	volatile int32_t t12 = -881993336;

    t12 = ((x65!=(x66-x67))>x68);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x69 = 747U;
	int8_t x70 = INT8_MIN;
	volatile uint8_t x71 = 49U;
	static volatile int64_t x72 = INT64_MAX;
	volatile int32_t t13 = -26;

    t13 = ((x69!=(x70-x71))>x72);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x73 = INT8_MAX;
	uint8_t x74 = UINT8_MAX;
	volatile uint16_t x75 = 1249U;
	int32_t x76 = -54519634;
	int32_t t14 = 95;

    t14 = ((x73!=(x74-x75))>x76);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint64_t x77 = UINT64_MAX;
	uint16_t x78 = UINT16_MAX;
	volatile int64_t x79 = -142765784933LL;
	int32_t x80 = INT32_MIN;

    t15 = ((x77!=(x78-x79))>x80);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x81 = 156092LLU;
	uint32_t x82 = UINT32_MAX;
	uint16_t x84 = 870U;
	volatile int32_t t16 = -449691;

    t16 = ((x81!=(x82-x83))>x84);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x85 = 1770U;
	volatile uint32_t x86 = 1U;
	volatile int32_t x87 = INT32_MIN;
	volatile uint8_t x88 = UINT8_MAX;
	volatile int32_t t17 = -1;

    t17 = ((x85!=(x86-x87))>x88);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x95 = 484U;
	volatile int32_t t18 = 1;

    t18 = ((x93!=(x94-x95))>x96);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x97 = 50910185029LLU;
	static int64_t x98 = 125312LL;
	uint16_t x99 = 314U;
	int64_t x100 = 1031402714LL;
	static int32_t t19 = -78140;

    t19 = ((x97!=(x98-x99))>x100);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x102 = INT32_MAX;
	static uint8_t x103 = 15U;
	uint8_t x104 = UINT8_MAX;
	static int32_t t20 = -1;

    t20 = ((x101!=(x102-x103))>x104);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x106 = 2419;
	volatile int8_t x107 = 0;
	int64_t x108 = -1LL;
	volatile int32_t t21 = -15300;

    t21 = ((x105!=(x106-x107))>x108);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int8_t x109 = INT8_MIN;
	int32_t x110 = -1;
	int8_t x111 = INT8_MIN;
	volatile int8_t x112 = INT8_MAX;

    t22 = ((x109!=(x110-x111))>x112);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint8_t x121 = 101U;
	int16_t x122 = -9;
	volatile int16_t x123 = -3;
	volatile uint8_t x124 = 25U;
	static volatile int32_t t23 = 21972;

    t23 = ((x121!=(x122-x123))>x124);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x125 = INT64_MAX;
	int32_t x126 = INT32_MIN;
	int16_t x127 = -14601;
	uint16_t x128 = 1728U;
	volatile int32_t t24 = 0;

    t24 = ((x125!=(x126-x127))>x128);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x129 = -1;
	static uint16_t x130 = 820U;
	int32_t x132 = -4785;
	int32_t t25 = -54423;

    t25 = ((x129!=(x130-x131))>x132);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x134 = UINT8_MAX;
	static volatile int16_t x135 = 3;
	int8_t x136 = 1;
	int32_t t26 = -7664474;

    t26 = ((x133!=(x134-x135))>x136);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x137 = 21724754952LLU;
	int8_t x138 = INT8_MIN;
	int64_t x140 = INT64_MIN;
	volatile int32_t t27 = -71317676;

    t27 = ((x137!=(x138-x139))>x140);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x143 = 25;
	static int8_t x144 = -2;
	volatile int32_t t28 = 0;

    t28 = ((x141!=(x142-x143))>x144);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x145 = -1;
	int64_t x146 = INT64_MIN;
	int16_t x148 = 993;
	volatile int32_t t29 = -362042;

    t29 = ((x145!=(x146-x147))>x148);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x154 = INT16_MIN;
	int32_t x155 = -3;
	int32_t t30 = -145;

    t30 = ((x153!=(x154-x155))>x156);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint64_t x158 = 3886786LLU;
	volatile int8_t x159 = INT8_MIN;
	int16_t x160 = -1;
	int32_t t31 = -12562;

    t31 = ((x157!=(x158-x159))>x160);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x161 = 30018673942918LLU;
	volatile int16_t x162 = -1;
	int64_t x163 = -102732821857878LL;
	int32_t x164 = -3737;
	int32_t t32 = -57;

    t32 = ((x161!=(x162-x163))>x164);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x165 = INT16_MAX;
	static int8_t x166 = -1;
	int32_t x167 = INT32_MAX;
	int16_t x168 = -1;

    t33 = ((x165!=(x166-x167))>x168);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x169 = 25799LLU;
	static volatile int64_t x170 = -4285468120146480356LL;
	int8_t x171 = INT8_MIN;
	int32_t t34 = 70;

    t34 = ((x169!=(x170-x171))>x172);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x173 = -586182352LL;
	int16_t x174 = -2;
	volatile int32_t t35 = 15888;

    t35 = ((x173!=(x174-x175))>x176);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x181 = -1;
	int32_t x182 = -1;
	int16_t x183 = -1;
	static volatile int16_t x184 = -11;
	volatile int32_t t36 = 265676509;

    t36 = ((x181!=(x182-x183))>x184);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x189 = 1U;
	uint32_t x190 = 14868655U;
	int16_t x192 = INT16_MIN;
	volatile int32_t t37 = 12;

    t37 = ((x189!=(x190-x191))>x192);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x194 = INT64_MAX;
	volatile uint64_t x196 = 6085625980LLU;
	volatile int32_t t38 = 40;

    t38 = ((x193!=(x194-x195))>x196);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x197 = INT16_MIN;
	volatile int8_t x198 = -10;
	volatile int16_t x199 = INT16_MIN;
	static volatile uint32_t x200 = UINT32_MAX;
	static int32_t t39 = -16;

    t39 = ((x197!=(x198-x199))>x200);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x202 = 418U;
	int32_t x203 = 553345067;
	volatile uint8_t x204 = 31U;
	static volatile int32_t t40 = -1;

    t40 = ((x201!=(x202-x203))>x204);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x205 = 1863U;
	int16_t x207 = 1;
	int8_t x208 = INT8_MIN;

    t41 = ((x205!=(x206-x207))>x208);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x209 = INT32_MAX;
	volatile uint8_t x210 = 125U;
	int8_t x211 = INT8_MIN;
	static int64_t x212 = 89624802LL;
	volatile int32_t t42 = -186289145;

    t42 = ((x209!=(x210-x211))>x212);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x213 = -378;
	uint16_t x214 = 6U;
	uint32_t x215 = 11U;
	static volatile int32_t x216 = INT32_MIN;

    t43 = ((x213!=(x214-x215))>x216);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x221 = 889;
	static uint16_t x224 = 5749U;
	volatile int32_t t44 = -28;

    t44 = ((x221!=(x222-x223))>x224);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint16_t x225 = 555U;
	int8_t x226 = -1;
	int32_t x227 = INT32_MIN;
	volatile uint16_t x228 = UINT16_MAX;
	int32_t t45 = 3;

    t45 = ((x225!=(x226-x227))>x228);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x230 = -1LL;
	int16_t x231 = -254;
	int16_t x232 = INT16_MAX;
	int32_t t46 = -496457934;

    t46 = ((x229!=(x230-x231))>x232);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x234 = INT32_MAX;
	uint32_t x235 = UINT32_MAX;
	volatile int32_t t47 = -73394;

    t47 = ((x233!=(x234-x235))>x236);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x237 = -1;
	uint8_t x239 = UINT8_MAX;
	volatile int64_t x240 = 2255970579893453905LL;
	int32_t t48 = 48416604;

    t48 = ((x237!=(x238-x239))>x240);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x241 = INT32_MIN;
	static int8_t x242 = INT8_MIN;
	uint16_t x243 = 40U;
	static int8_t x244 = -1;

    t49 = ((x241!=(x242-x243))>x244);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int8_t x245 = INT8_MIN;
	int8_t x246 = -13;
	volatile int8_t x247 = INT8_MIN;
	uint64_t x248 = 406387500148114820LLU;

    t50 = ((x245!=(x246-x247))>x248);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x249 = INT32_MIN;
	uint32_t x250 = UINT32_MAX;
	uint32_t x251 = 5442141U;
	int64_t x252 = 6882818419391LL;
	int32_t t51 = 3;

    t51 = ((x249!=(x250-x251))>x252);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x253 = INT64_MIN;
	int8_t x254 = 0;
	uint32_t x256 = 122U;
	int32_t t52 = -25;

    t52 = ((x253!=(x254-x255))>x256);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x257 = INT64_MAX;
	uint64_t x258 = 4300LLU;
	static uint8_t x259 = 3U;
	volatile int16_t x260 = -54;
	volatile int32_t t53 = -474;

    t53 = ((x257!=(x258-x259))>x260);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x261 = -1LL;
	volatile uint16_t x262 = 24125U;
	int8_t x263 = -1;
	uint16_t x264 = 7410U;
	volatile int32_t t54 = -908732;

    t54 = ((x261!=(x262-x263))>x264);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x265 = -9;
	uint32_t x266 = UINT32_MAX;
	volatile int32_t x268 = INT32_MIN;
	volatile int32_t t55 = 55193;

    t55 = ((x265!=(x266-x267))>x268);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x270 = 1LL;
	uint32_t x271 = 1453096U;
	int8_t x272 = INT8_MAX;
	static volatile int32_t t56 = 5985330;

    t56 = ((x269!=(x270-x271))>x272);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x273 = INT32_MAX;
	static uint16_t x274 = UINT16_MAX;
	static int32_t x275 = 59644;
	volatile int32_t t57 = 102388;

    t57 = ((x273!=(x274-x275))>x276);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x277 = INT16_MIN;
	int32_t x278 = 2;
	static int64_t x279 = INT64_MAX;
	uint8_t x280 = 94U;
	volatile int32_t t58 = -455510096;

    t58 = ((x277!=(x278-x279))>x280);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x281 = INT32_MIN;
	uint16_t x282 = 121U;
	volatile uint8_t x284 = 2U;

    t59 = ((x281!=(x282-x283))>x284);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x285 = 3486188;
	volatile int64_t x287 = INT64_MIN;
	static int8_t x288 = INT8_MIN;
	volatile int32_t t60 = 473355796;

    t60 = ((x285!=(x286-x287))>x288);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x290 = -1LL;
	int16_t x291 = -75;
	int64_t x292 = -1LL;
	static volatile int32_t t61 = 325678;

    t61 = ((x289!=(x290-x291))>x292);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x293 = 59U;
	uint64_t x294 = 16791325788876LLU;
	static volatile uint64_t x295 = 437696999356043LLU;
	static int32_t t62 = -2913346;

    t62 = ((x293!=(x294-x295))>x296);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int64_t x298 = -458605146262635LL;
	static uint32_t x299 = 107078663U;
	volatile int32_t t63 = -5147747;

    t63 = ((x297!=(x298-x299))>x300);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint64_t x305 = 204636248219LLU;
	volatile int32_t x306 = -1;
	int64_t x307 = 405015774815856LL;
	static uint32_t x308 = 2100055055U;
	volatile int32_t t64 = -169;

    t64 = ((x305!=(x306-x307))>x308);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x310 = 3082U;
	int64_t x311 = -50028568LL;
	uint16_t x312 = 881U;
	int32_t t65 = -1957;

    t65 = ((x309!=(x310-x311))>x312);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x313 = 0;
	uint64_t x314 = 203179951620LLU;
	int64_t x315 = INT64_MAX;
	volatile int32_t t66 = 8279532;

    t66 = ((x313!=(x314-x315))>x316);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x317 = UINT32_MAX;
	static int16_t x318 = -1;
	int64_t x319 = -13114219343854LL;
	volatile int64_t x320 = INT64_MIN;
	int32_t t67 = -24515;

    t67 = ((x317!=(x318-x319))>x320);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x321 = 537U;
	volatile int16_t x322 = -1;
	int16_t x323 = -1;
	volatile int32_t t68 = 5590962;

    t68 = ((x321!=(x322-x323))>x324);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x325 = UINT32_MAX;
	uint64_t x326 = 533LLU;
	int64_t x327 = -4875609050LL;
	int32_t x328 = INT32_MIN;
	volatile int32_t t69 = -908;

    t69 = ((x325!=(x326-x327))>x328);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x329 = INT64_MIN;
	int32_t x330 = INT32_MAX;
	static volatile int64_t x331 = -1LL;
	int8_t x332 = INT8_MAX;
	volatile int32_t t70 = -37;

    t70 = ((x329!=(x330-x331))>x332);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x333 = 3981286929113LLU;
	volatile int16_t x334 = -1;
	static int64_t x335 = INT64_MIN;
	volatile int64_t x336 = INT64_MIN;
	int32_t t71 = 46207692;

    t71 = ((x333!=(x334-x335))>x336);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x338 = 0;
	uint16_t x339 = 7U;
	volatile int64_t x340 = INT64_MIN;

    t72 = ((x337!=(x338-x339))>x340);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x341 = INT8_MIN;
	uint32_t x342 = 225U;
	int16_t x343 = INT16_MIN;
	int64_t x344 = -36474LL;

    t73 = ((x341!=(x342-x343))>x344);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x346 = INT64_MIN;
	int16_t x347 = INT16_MIN;
	uint32_t x348 = UINT32_MAX;
	volatile int32_t t74 = -498322634;

    t74 = ((x345!=(x346-x347))>x348);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x349 = INT16_MIN;
	static int8_t x350 = -1;
	uint8_t x351 = 1U;
	volatile uint16_t x352 = UINT16_MAX;
	int32_t t75 = -220605201;

    t75 = ((x349!=(x350-x351))>x352);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x354 = INT16_MIN;
	int8_t x355 = -2;
	int32_t t76 = -9663973;

    t76 = ((x353!=(x354-x355))>x356);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint16_t x362 = 252U;
	int64_t x363 = 23LL;
	int64_t x364 = -1811969268909LL;
	static volatile int32_t t77 = -602151;

    t77 = ((x361!=(x362-x363))>x364);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x365 = 24088263180060581LLU;
	volatile uint8_t x366 = UINT8_MAX;
	volatile uint64_t x367 = UINT64_MAX;
	uint32_t x368 = 8067U;

    t78 = ((x365!=(x366-x367))>x368);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x369 = 1U;
	uint16_t x370 = UINT16_MAX;
	int8_t x371 = -6;
	static uint64_t x372 = UINT64_MAX;
	int32_t t79 = 113200;

    t79 = ((x369!=(x370-x371))>x372);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x373 = -13;
	uint64_t x374 = 24784875709LLU;
	static int8_t x376 = INT8_MAX;
	int32_t t80 = 17274172;

    t80 = ((x373!=(x374-x375))>x376);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x378 = 220024183404LL;
	uint16_t x380 = UINT16_MAX;
	int32_t t81 = -164852;

    t81 = ((x377!=(x378-x379))>x380);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int32_t x381 = INT32_MIN;
	int8_t x383 = INT8_MIN;
	int32_t x384 = -1;
	static int32_t t82 = -262021923;

    t82 = ((x381!=(x382-x383))>x384);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x385 = INT64_MIN;
	uint64_t x387 = 248LLU;
	uint8_t x388 = 12U;
	int32_t t83 = -12325;

    t83 = ((x385!=(x386-x387))>x388);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x393 = 4U;
	int8_t x394 = INT8_MIN;
	int32_t x395 = -85114;
	int16_t x396 = 756;
	int32_t t84 = 1;

    t84 = ((x393!=(x394-x395))>x396);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x397 = -1;
	int8_t x398 = INT8_MAX;
	int16_t x399 = INT16_MIN;
	int64_t x400 = INT64_MAX;
	static volatile int32_t t85 = -53816035;

    t85 = ((x397!=(x398-x399))>x400);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint16_t x401 = 30723U;
	uint16_t x403 = 367U;
	uint64_t x404 = 1290798004746869216LLU;
	static int32_t t86 = 29931169;

    t86 = ((x401!=(x402-x403))>x404);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x406 = 1081900309797060396LLU;
	int8_t x407 = INT8_MIN;
	int64_t x408 = INT64_MIN;
	int32_t t87 = 93;

    t87 = ((x405!=(x406-x407))>x408);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x411 = INT64_MAX;
	volatile int8_t x412 = -1;
	int32_t t88 = 2123763;

    t88 = ((x409!=(x410-x411))>x412);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x413 = -1;
	static volatile int64_t x416 = INT64_MIN;

    t89 = ((x413!=(x414-x415))>x416);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x417 = -1;
	uint16_t x419 = UINT16_MAX;
	volatile int32_t x420 = INT32_MIN;
	int32_t t90 = 7;

    t90 = ((x417!=(x418-x419))>x420);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x422 = -544751887454LL;
	int64_t x423 = INT64_MIN;
	static volatile int32_t x424 = INT32_MAX;
	int32_t t91 = -5;

    t91 = ((x421!=(x422-x423))>x424);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint16_t x425 = 3U;
	int64_t x426 = INT64_MIN;
	uint64_t x427 = 94LLU;
	volatile int32_t t92 = -526181040;

    t92 = ((x425!=(x426-x427))>x428);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x431 = UINT64_MAX;
	int16_t x432 = INT16_MIN;
	int32_t t93 = -20;

    t93 = ((x429!=(x430-x431))>x432);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x433 = UINT32_MAX;
	uint32_t x434 = 3160U;
	int32_t x435 = -107;
	int16_t x436 = INT16_MAX;
	int32_t t94 = 298388737;

    t94 = ((x433!=(x434-x435))>x436);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x441 = -1;
	int64_t x442 = 170452507296414918LL;
	static volatile int16_t x443 = -1;
	int16_t x444 = INT16_MIN;
	static volatile int32_t t95 = -201709;

    t95 = ((x441!=(x442-x443))>x444);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x445 = -1;
	static uint8_t x446 = UINT8_MAX;
	static int64_t x447 = INT64_MAX;
	int8_t x448 = INT8_MIN;
	int32_t t96 = -2;

    t96 = ((x445!=(x446-x447))>x448);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x449 = INT64_MIN;
	uint16_t x450 = UINT16_MAX;
	uint32_t x451 = 697U;
	uint64_t x452 = UINT64_MAX;

    t97 = ((x449!=(x450-x451))>x452);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint16_t x453 = 19583U;
	uint64_t x454 = 116LLU;
	int8_t x455 = INT8_MIN;
	int32_t t98 = 870940930;

    t98 = ((x453!=(x454-x455))>x456);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x458 = 10U;
	static uint16_t x459 = 0U;
	uint8_t x460 = 1U;
	int32_t t99 = 1;

    t99 = ((x457!=(x458-x459))>x460);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x461 = 1705635LLU;
	int8_t x462 = -1;
	int32_t x464 = INT32_MIN;
	volatile int32_t t100 = 3;

    t100 = ((x461!=(x462-x463))>x464);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x465 = 141;
	int8_t x467 = -3;
	static int32_t t101 = -1617;

    t101 = ((x465!=(x466-x467))>x468);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x469 = INT16_MIN;
	uint16_t x470 = UINT16_MAX;
	uint32_t x471 = 27665274U;
	uint64_t x472 = 41506429698831404LLU;

    t102 = ((x469!=(x470-x471))>x472);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x477 = 1721712724LLU;
	int64_t x480 = -1LL;
	int32_t t103 = 494898241;

    t103 = ((x477!=(x478-x479))>x480);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x481 = INT8_MIN;
	int64_t x482 = -1LL;
	uint64_t x483 = UINT64_MAX;
	static uint16_t x484 = 12U;
	volatile int32_t t104 = 26555742;

    t104 = ((x481!=(x482-x483))>x484);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x485 = 6154887;
	int32_t x486 = -1;
	uint32_t x487 = 1079U;
	uint8_t x488 = UINT8_MAX;
	volatile int32_t t105 = -439965266;

    t105 = ((x485!=(x486-x487))>x488);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x489 = INT16_MIN;
	uint8_t x490 = UINT8_MAX;
	volatile int16_t x492 = INT16_MIN;
	int32_t t106 = -709440802;

    t106 = ((x489!=(x490-x491))>x492);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x497 = -1LL;
	int64_t x498 = -1LL;
	volatile int8_t x500 = -1;
	static int32_t t107 = 22407971;

    t107 = ((x497!=(x498-x499))>x500);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x501 = 3U;
	volatile uint32_t x502 = UINT32_MAX;
	uint32_t x503 = 370844U;
	volatile uint8_t x504 = UINT8_MAX;

    t108 = ((x501!=(x502-x503))>x504);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x505 = 121435173189145870LL;
	uint32_t x506 = 47095U;
	int16_t x507 = -1;
	static uint16_t x508 = 132U;
	static int32_t t109 = -23774134;

    t109 = ((x505!=(x506-x507))>x508);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x509 = INT8_MAX;
	int32_t x510 = INT32_MIN;
	int8_t x511 = INT8_MIN;
	int64_t x512 = -1LL;

    t110 = ((x509!=(x510-x511))>x512);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x513 = UINT16_MAX;
	uint32_t x514 = 29537945U;
	int16_t x515 = INT16_MIN;
	int64_t x516 = INT64_MAX;
	volatile int32_t t111 = 24533;

    t111 = ((x513!=(x514-x515))>x516);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x517 = UINT32_MAX;
	int32_t x518 = -1;
	volatile int32_t t112 = -15;

    t112 = ((x517!=(x518-x519))>x520);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x521 = INT32_MAX;
	uint64_t x522 = UINT64_MAX;
	static int64_t x524 = 521429364899LL;
	volatile int32_t t113 = -8173;

    t113 = ((x521!=(x522-x523))>x524);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x526 = INT8_MIN;
	int32_t x527 = 807210;
	uint8_t x528 = 0U;
	int32_t t114 = 14;

    t114 = ((x525!=(x526-x527))>x528);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint32_t x529 = 12785399U;
	int16_t x530 = INT16_MAX;
	static int8_t x531 = -1;
	int64_t x532 = -3475LL;
	int32_t t115 = 1220;

    t115 = ((x529!=(x530-x531))>x532);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x534 = 33U;
	static volatile int8_t x535 = -1;
	int16_t x536 = -1;

    t116 = ((x533!=(x534-x535))>x536);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x537 = UINT64_MAX;
	int64_t x538 = INT64_MIN;
	static int16_t x539 = INT16_MIN;
	uint16_t x540 = UINT16_MAX;
	int32_t t117 = 26784;

    t117 = ((x537!=(x538-x539))>x540);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x549 = INT64_MIN;
	int64_t x551 = -5630LL;
	volatile int32_t t118 = -1;

    t118 = ((x549!=(x550-x551))>x552);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x553 = UINT64_MAX;
	volatile int8_t x554 = INT8_MIN;
	uint64_t x555 = 58730329876706883LLU;
	static int32_t t119 = 3245;

    t119 = ((x553!=(x554-x555))>x556);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x558 = -1;
	int32_t t120 = -32220929;

    t120 = ((x557!=(x558-x559))>x560);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x561 = 63;
	uint64_t x562 = 2437930965185LLU;
	int8_t x564 = 0;

    t121 = ((x561!=(x562-x563))>x564);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x565 = 0U;
	static int8_t x566 = -1;
	static int64_t x567 = -63529791LL;
	int8_t x568 = INT8_MAX;
	volatile int32_t t122 = -4049845;

    t122 = ((x565!=(x566-x567))>x568);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x572 = 5U;
	volatile int32_t t123 = -112208;

    t123 = ((x569!=(x570-x571))>x572);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x573 = 1U;
	volatile int16_t x574 = -1;
	uint32_t x575 = 41451474U;
	volatile uint16_t x576 = UINT16_MAX;
	int32_t t124 = -1;

    t124 = ((x573!=(x574-x575))>x576);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x581 = INT16_MIN;
	static uint8_t x582 = 0U;
	int64_t x583 = INT64_MAX;
	volatile int32_t t125 = -30;

    t125 = ((x581!=(x582-x583))>x584);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x586 = -1592191;
	static uint8_t x587 = 5U;
	int8_t x588 = INT8_MAX;

    t126 = ((x585!=(x586-x587))>x588);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x589 = INT32_MIN;
	static int64_t x590 = -1LL;
	volatile uint64_t x591 = 58792LLU;
	int64_t x592 = -1LL;
	int32_t t127 = 5040973;

    t127 = ((x589!=(x590-x591))>x592);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x593 = INT16_MIN;
	int16_t x595 = INT16_MAX;
	static int64_t x596 = INT64_MAX;
	static volatile int32_t t128 = 1006313807;

    t128 = ((x593!=(x594-x595))>x596);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x599 = UINT64_MAX;
	volatile int32_t t129 = -31455;

    t129 = ((x597!=(x598-x599))>x600);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x602 = -1LL;
	int8_t x604 = INT8_MAX;
	volatile int32_t t130 = -10727;

    t130 = ((x601!=(x602-x603))>x604);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint16_t x606 = UINT16_MAX;
	static int16_t x608 = -516;
	int32_t t131 = 4229;

    t131 = ((x605!=(x606-x607))>x608);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x609 = 5U;
	uint8_t x610 = 7U;
	static uint64_t x611 = 452810062461705154LLU;
	volatile int32_t t132 = 1553909;

    t132 = ((x609!=(x610-x611))>x612);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x613 = INT32_MIN;
	int8_t x614 = -1;
	int32_t x616 = INT32_MAX;

    t133 = ((x613!=(x614-x615))>x616);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x617 = 256000576390LL;
	int8_t x618 = -1;
	uint32_t x619 = 1325281882U;
	static int32_t x620 = INT32_MIN;
	static volatile int32_t t134 = 2340549;

    t134 = ((x617!=(x618-x619))>x620);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x621 = INT64_MIN;
	int32_t x623 = -1;
	int32_t t135 = -221599931;

    t135 = ((x621!=(x622-x623))>x624);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x625 = 1962U;
	uint64_t x627 = UINT64_MAX;
	uint64_t x628 = UINT64_MAX;
	volatile int32_t t136 = 241837;

    t136 = ((x625!=(x626-x627))>x628);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x629 = INT64_MAX;
	volatile uint64_t x630 = 7LLU;
	int64_t x631 = INT64_MAX;
	int32_t x632 = -1;
	int32_t t137 = 833;

    t137 = ((x629!=(x630-x631))>x632);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x633 = INT8_MAX;
	int32_t x636 = INT32_MIN;
	volatile int32_t t138 = 277;

    t138 = ((x633!=(x634-x635))>x636);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x642 = 11;
	int64_t x644 = INT64_MIN;

    t139 = ((x641!=(x642-x643))>x644);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x645 = -14312;
	int32_t x646 = -1;
	int8_t x647 = -1;
	uint16_t x648 = UINT16_MAX;

    t140 = ((x645!=(x646-x647))>x648);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x649 = INT32_MIN;
	int8_t x650 = -1;
	static int16_t x651 = INT16_MIN;
	volatile int16_t x652 = INT16_MAX;
	static int32_t t141 = -45911413;

    t141 = ((x649!=(x650-x651))>x652);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x653 = 4478389092LLU;
	uint32_t x654 = UINT32_MAX;
	int16_t x655 = INT16_MIN;

    t142 = ((x653!=(x654-x655))>x656);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x658 = UINT16_MAX;
	static int32_t x659 = -207137000;
	static uint16_t x660 = 34U;

    t143 = ((x657!=(x658-x659))>x660);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x661 = UINT64_MAX;
	int16_t x662 = INT16_MIN;
	int64_t x663 = INT64_MIN;
	volatile int32_t x664 = INT32_MIN;
	int32_t t144 = -4;

    t144 = ((x661!=(x662-x663))>x664);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x665 = -40;
	uint64_t x666 = 126LLU;
	int32_t x667 = -1;
	int64_t x668 = -10082LL;

    t145 = ((x665!=(x666-x667))>x668);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x669 = -264398730281886LL;
	uint16_t x671 = 77U;
	int16_t x672 = -11691;
	volatile int32_t t146 = 5511721;

    t146 = ((x669!=(x670-x671))>x672);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x673 = INT64_MIN;
	int64_t x674 = -1LL;
	volatile int32_t x675 = INT32_MAX;
	uint16_t x676 = UINT16_MAX;
	int32_t t147 = 2986;

    t147 = ((x673!=(x674-x675))>x676);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x678 = 1023;
	static volatile int16_t x679 = -86;
	int8_t x680 = INT8_MIN;
	int32_t t148 = -1532;

    t148 = ((x677!=(x678-x679))>x680);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x682 = INT32_MAX;
	int8_t x683 = 13;
	volatile int32_t t149 = 599614446;

    t149 = ((x681!=(x682-x683))>x684);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x685 = INT8_MAX;
	volatile int64_t x688 = INT64_MAX;
	static volatile int32_t t150 = -1669;

    t150 = ((x685!=(x686-x687))>x688);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x689 = 21359U;
	uint32_t x690 = 1704U;
	volatile int64_t x691 = -106194888LL;
	volatile int32_t t151 = -8;

    t151 = ((x689!=(x690-x691))>x692);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x693 = 331629616925LLU;
	uint8_t x694 = 33U;
	int32_t x695 = INT32_MAX;
	volatile int32_t t152 = 10799;

    t152 = ((x693!=(x694-x695))>x696);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x697 = 109;
	static int64_t x699 = 3168764037185979680LL;
	volatile int32_t t153 = -172340;

    t153 = ((x697!=(x698-x699))>x700);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x701 = INT32_MIN;
	int64_t x702 = 448533671465355632LL;
	int64_t x703 = -1LL;
	volatile int32_t t154 = -26240460;

    t154 = ((x701!=(x702-x703))>x704);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x713 = -874962;
	volatile uint32_t x714 = 1U;
	volatile int32_t x716 = -1;
	int32_t t155 = 1645707;

    t155 = ((x713!=(x714-x715))>x716);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x723 = -1;
	int8_t x724 = INT8_MIN;
	volatile int32_t t156 = -36;

    t156 = ((x721!=(x722-x723))>x724);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x725 = UINT64_MAX;
	uint32_t x726 = 1048U;
	int8_t x727 = INT8_MIN;
	volatile int32_t t157 = 2;

    t157 = ((x725!=(x726-x727))>x728);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x729 = INT8_MIN;
	int64_t x730 = INT64_MIN;
	int32_t x731 = INT32_MIN;
	volatile int64_t x732 = 31396543427LL;
	int32_t t158 = -1891;

    t158 = ((x729!=(x730-x731))>x732);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x733 = INT8_MIN;
	static uint8_t x734 = 4U;
	int64_t x735 = -1LL;
	int16_t x736 = INT16_MIN;
	int32_t t159 = -735;

    t159 = ((x733!=(x734-x735))>x736);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x737 = INT32_MAX;
	uint64_t x738 = 216736861341242LLU;
	static int64_t x739 = -1LL;
	volatile int16_t x740 = INT16_MIN;
	int32_t t160 = 1;

    t160 = ((x737!=(x738-x739))>x740);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x741 = UINT32_MAX;
	int32_t x742 = -1;
	volatile int8_t x743 = INT8_MAX;
	int32_t x744 = 7023743;
	volatile int32_t t161 = 3;

    t161 = ((x741!=(x742-x743))>x744);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x745 = -186;
	uint8_t x746 = 3U;
	int8_t x747 = -2;
	int8_t x748 = INT8_MIN;
	static volatile int32_t t162 = 14;

    t162 = ((x745!=(x746-x747))>x748);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x749 = -1;
	int8_t x751 = 9;
	static int8_t x752 = 11;

    t163 = ((x749!=(x750-x751))>x752);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x755 = -1;
	volatile uint8_t x756 = UINT8_MAX;
	int32_t t164 = -2038;

    t164 = ((x753!=(x754-x755))>x756);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x757 = 2988LLU;
	static volatile int64_t x758 = -1LL;
	int64_t x759 = -839569271978LL;
	volatile int32_t t165 = -3633101;

    t165 = ((x757!=(x758-x759))>x760);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x761 = INT32_MIN;
	int32_t x763 = INT32_MIN;
	int16_t x764 = -1;

    t166 = ((x761!=(x762-x763))>x764);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x765 = INT32_MAX;
	volatile uint64_t x767 = UINT64_MAX;
	volatile int32_t x768 = -1;
	int32_t t167 = -29582;

    t167 = ((x765!=(x766-x767))>x768);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x769 = 2;
	volatile uint8_t x771 = 0U;
	volatile int32_t t168 = 44563;

    t168 = ((x769!=(x770-x771))>x772);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x773 = -1;
	uint8_t x775 = 0U;
	volatile int8_t x776 = 0;
	static int32_t t169 = 41112299;

    t169 = ((x773!=(x774-x775))>x776);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x778 = 3U;
	int32_t t170 = 719164;

    t170 = ((x777!=(x778-x779))>x780);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x785 = -25624;
	static int64_t x787 = 47058781680606579LL;
	static int32_t x788 = -687987253;
	volatile int32_t t171 = -1483;

    t171 = ((x785!=(x786-x787))>x788);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int16_t x789 = -1;
	static int64_t x791 = -1LL;
	int8_t x792 = -25;
	volatile int32_t t172 = 1;

    t172 = ((x789!=(x790-x791))>x792);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint8_t x801 = UINT8_MAX;
	static int8_t x802 = -1;
	int32_t x803 = INT32_MIN;
	int16_t x804 = -1;
	int32_t t173 = 221531;

    t173 = ((x801!=(x802-x803))>x804);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x806 = INT16_MIN;
	int64_t x807 = -1LL;
	int32_t x808 = -958071;
	int32_t t174 = 765397;

    t174 = ((x805!=(x806-x807))>x808);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x818 = 1751273;
	static int32_t x820 = -7;
	int32_t t175 = 5;

    t175 = ((x817!=(x818-x819))>x820);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x821 = 59196052270217240LL;
	uint64_t x822 = 252067141115737LLU;
	static uint64_t x823 = 63353025LLU;
	int16_t x824 = -100;
	static volatile int32_t t176 = 285248;

    t176 = ((x821!=(x822-x823))>x824);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x825 = -1;
	volatile int8_t x827 = INT8_MIN;
	int64_t x828 = -1LL;
	int32_t t177 = -134;

    t177 = ((x825!=(x826-x827))>x828);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x829 = INT16_MIN;
	uint16_t x830 = 10U;
	volatile uint64_t x831 = UINT64_MAX;
	static int16_t x832 = INT16_MAX;
	volatile int32_t t178 = 4807;

    t178 = ((x829!=(x830-x831))>x832);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x834 = INT16_MIN;
	int64_t x835 = INT64_MIN;
	int32_t t179 = -813967160;

    t179 = ((x833!=(x834-x835))>x836);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x837 = INT16_MIN;
	int16_t x838 = INT16_MIN;
	volatile int64_t x840 = 155539135490LL;
	volatile int32_t t180 = -1;

    t180 = ((x837!=(x838-x839))>x840);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x841 = 5;

    t181 = ((x841!=(x842-x843))>x844);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x845 = INT64_MIN;
	int8_t x846 = INT8_MIN;
	int32_t x848 = INT32_MIN;
	int32_t t182 = 3186529;

    t182 = ((x845!=(x846-x847))>x848);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint32_t x852 = UINT32_MAX;
	static int32_t t183 = 44;

    t183 = ((x849!=(x850-x851))>x852);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x853 = 36684320947LL;
	uint8_t x854 = UINT8_MAX;
	int8_t x855 = INT8_MAX;
	volatile int32_t t184 = 128030;

    t184 = ((x853!=(x854-x855))>x856);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint64_t x857 = UINT64_MAX;
	static int32_t x858 = -6588059;
	int8_t x859 = INT8_MAX;
	volatile int16_t x860 = INT16_MIN;

    t185 = ((x857!=(x858-x859))>x860);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x861 = INT32_MIN;
	int16_t x862 = INT16_MAX;
	int64_t x863 = -1LL;
	uint8_t x864 = UINT8_MAX;
	volatile int32_t t186 = 330539148;

    t186 = ((x861!=(x862-x863))>x864);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x866 = INT16_MAX;
	int32_t x868 = -1;
	int32_t t187 = 378482;

    t187 = ((x865!=(x866-x867))>x868);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x873 = UINT64_MAX;
	int8_t x874 = INT8_MAX;
	volatile uint32_t x875 = 56042364U;
	int16_t x876 = INT16_MIN;

    t188 = ((x873!=(x874-x875))>x876);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x881 = 1;
	int16_t x882 = -110;
	static int64_t x883 = -694983LL;
	static int16_t x884 = INT16_MIN;
	static volatile int32_t t189 = -7;

    t189 = ((x881!=(x882-x883))>x884);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x885 = -1683;
	static uint16_t x886 = UINT16_MAX;
	int64_t x888 = INT64_MIN;
	volatile int32_t t190 = 65013;

    t190 = ((x885!=(x886-x887))>x888);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x889 = INT64_MAX;
	static uint64_t x891 = 7412003480922024LLU;
	volatile int32_t t191 = -12794323;

    t191 = ((x889!=(x890-x891))>x892);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x893 = INT8_MIN;
	static int8_t x894 = 0;
	static volatile int8_t x895 = -1;
	static uint8_t x896 = 1U;
	volatile int32_t t192 = 852184;

    t192 = ((x893!=(x894-x895))>x896);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x899 = 1333;
	int32_t t193 = 13036237;

    t193 = ((x897!=(x898-x899))>x900);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x901 = -1;
	int64_t x904 = 4051784LL;
	volatile int32_t t194 = -4313;

    t194 = ((x901!=(x902-x903))>x904);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x905 = 188643505;
	int16_t x906 = INT16_MIN;

    t195 = ((x905!=(x906-x907))>x908);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x909 = INT32_MAX;
	static volatile uint64_t x910 = 7LLU;
	int16_t x911 = INT16_MIN;
	volatile int32_t x912 = INT32_MAX;

    t196 = ((x909!=(x910-x911))>x912);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x917 = INT64_MIN;
	static uint8_t x919 = 24U;
	int8_t x920 = -1;
	volatile int32_t t197 = -1103892;

    t197 = ((x917!=(x918-x919))>x920);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x921 = -13;
	int16_t x922 = INT16_MIN;
	volatile int8_t x923 = -26;
	volatile int8_t x924 = 2;
	volatile int32_t t198 = -2645;

    t198 = ((x921!=(x922-x923))>x924);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x926 = -528548550;
	int16_t x928 = -1;
	int32_t t199 = 88;

    t199 = ((x925!=(x926-x927))>x928);

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

