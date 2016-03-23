
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

static uint32_t x1 = 112U;
int8_t x5 = -4;
int8_t x7 = INT8_MIN;
int32_t t1 = -1;
int64_t x10 = -41573613514695793LL;
int32_t x12 = -1412;
int32_t x15 = INT32_MAX;
volatile int32_t t3 = 335;
uint32_t x17 = 225U;
int8_t x20 = INT8_MIN;
int8_t x21 = INT8_MIN;
int32_t t5 = 208730948;
int16_t x33 = 2314;
uint32_t x47 = 864351077U;
int32_t t12 = -179920418;
int16_t x63 = INT16_MAX;
int8_t x71 = -1;
volatile int32_t t16 = 3;
int32_t t17 = 55019004;
int32_t t18 = 7445;
uint16_t x85 = 4U;
volatile int8_t x88 = INT8_MIN;
volatile int32_t t20 = 222005;
int32_t x92 = INT32_MIN;
int8_t x95 = INT8_MIN;
int64_t x98 = -1LL;
static volatile uint8_t x103 = UINT8_MAX;
static uint64_t x104 = 4257646031765758LLU;
int8_t x106 = INT8_MAX;
int16_t x107 = INT16_MIN;
volatile int64_t x110 = -1LL;
int32_t x113 = 136937719;
uint32_t x117 = UINT32_MAX;
int32_t x120 = -250535;
int16_t x134 = INT16_MAX;
int8_t x135 = -1;
volatile int64_t x136 = INT64_MIN;
uint16_t x140 = 7U;
int8_t x142 = 60;
static int8_t x161 = INT8_MIN;
uint16_t x162 = 0U;
int8_t x163 = 10;
volatile uint16_t x169 = 1368U;
int8_t x171 = INT8_MIN;
int64_t x173 = -235LL;
int8_t x182 = INT8_MIN;
volatile int8_t x187 = INT8_MAX;
uint8_t x197 = 1U;
uint16_t x198 = 1U;
uint16_t x204 = UINT16_MAX;
int32_t x215 = INT32_MAX;
int64_t x218 = INT64_MIN;
int32_t x220 = 956827243;
static int64_t x223 = -1LL;
int32_t x235 = INT32_MAX;
volatile uint64_t x241 = 47900LLU;
int64_t x242 = INT64_MAX;
volatile int32_t x244 = 2;
volatile int32_t t58 = 1;
static uint32_t x261 = 70U;
int64_t x262 = INT64_MIN;
volatile int16_t x263 = INT16_MIN;
int32_t x267 = -196;
int8_t x274 = INT8_MIN;
int8_t x279 = -1;
int16_t x293 = INT16_MAX;
int32_t x296 = -1328;
int32_t t68 = 442345;
static uint16_t x306 = 4U;
static int32_t t69 = 546151281;
int64_t x323 = INT64_MAX;
volatile uint16_t x324 = 6693U;
static int32_t t72 = -58;
int64_t x325 = 912176153415605603LL;
volatile uint32_t x326 = UINT32_MAX;
volatile int32_t t74 = 108;
static int32_t t78 = -11489;
uint8_t x349 = 21U;
uint16_t x351 = UINT16_MAX;
uint64_t x353 = UINT64_MAX;
static volatile int16_t x371 = -8;
volatile uint32_t x382 = UINT32_MAX;
uint64_t x395 = UINT64_MAX;
int32_t t88 = -26620;
uint16_t x398 = UINT16_MAX;
volatile int32_t x399 = INT32_MIN;
volatile int64_t x400 = 291572LL;
volatile int16_t x418 = -4267;
volatile int16_t x426 = 302;
int64_t x429 = -2LL;
static int8_t x430 = 2;
int32_t x432 = -436795535;
static int64_t x435 = 0LL;
volatile int32_t t100 = 9;
static volatile int32_t t102 = -56896987;
int8_t x457 = 13;
int32_t t107 = 975901;
uint16_t x487 = 16329U;
volatile int32_t t112 = -44688144;
uint16_t x507 = 40U;
int64_t x508 = INT64_MIN;
uint16_t x510 = 7675U;
uint64_t x511 = 46278031261859746LLU;
volatile int8_t x522 = 31;
volatile int32_t t116 = -9261009;
static uint8_t x526 = 2U;
uint8_t x527 = 0U;
static int16_t x528 = INT16_MIN;
int32_t x531 = INT32_MIN;
uint32_t x532 = 797448946U;
int32_t t120 = -308409;
volatile int64_t x545 = -1LL;
int32_t t121 = 121;
volatile int64_t x555 = INT64_MIN;
int32_t t123 = -212063;
int32_t x562 = INT32_MIN;
int8_t x565 = -1;
volatile uint16_t x566 = 981U;
static uint8_t x575 = 19U;
static volatile int32_t t127 = 112484694;
int64_t x582 = -194076332959999LL;
uint64_t x584 = UINT64_MAX;
static uint16_t x586 = 127U;
int64_t x590 = 9LL;
static uint32_t x597 = UINT32_MAX;
volatile int16_t x604 = -1;
int32_t x613 = -1;
int64_t x625 = INT64_MIN;
volatile uint64_t x627 = UINT64_MAX;
static int64_t x630 = INT64_MIN;
uint64_t x634 = 26449521804LLU;
int8_t x638 = INT8_MAX;
static int16_t x640 = INT16_MIN;
volatile int32_t t141 = 95619990;
int8_t x666 = INT8_MIN;
uint16_t x667 = UINT16_MAX;
volatile int64_t x673 = 10837513365511LL;
volatile uint64_t x675 = 18878398LLU;
static int16_t x677 = INT16_MAX;
int16_t x686 = 10045;
volatile int16_t x691 = INT16_MIN;
int64_t x692 = INT64_MIN;
uint8_t x695 = 87U;
volatile int32_t t151 = -1641;
volatile int16_t x711 = -1;
uint32_t x712 = UINT32_MAX;
uint64_t x718 = UINT64_MAX;
uint64_t x720 = 939744057LLU;
uint32_t x730 = 1129U;
int32_t x732 = INT32_MIN;
int32_t x734 = INT32_MIN;
int8_t x737 = INT8_MAX;
int32_t x753 = INT32_MAX;
int16_t x754 = -1;
static int8_t x755 = -38;
uint32_t x765 = 4306U;
uint8_t x767 = 3U;
uint8_t x768 = 3U;
volatile int32_t t163 = -169350;
volatile int32_t t164 = 3;
int16_t x791 = 0;
volatile int32_t t167 = -2742;
int32_t x806 = INT32_MIN;
volatile int32_t t172 = -1518;
int64_t x822 = INT64_MIN;
uint32_t x829 = 254186U;
volatile uint32_t x837 = 1035702U;
volatile int32_t t177 = -188130544;
volatile uint64_t x843 = 3451029090969768709LLU;
int16_t x851 = -6;
int8_t x857 = -1;
uint32_t x859 = 0U;
int64_t x861 = -1LL;
static int64_t x872 = -19642127469LL;
int32_t x878 = -1;
int8_t x880 = INT8_MIN;
volatile int64_t x881 = -37545637775LL;
int16_t x886 = INT16_MIN;
uint64_t x887 = 25773446LLU;
int64_t x893 = INT64_MAX;
int8_t x896 = -1;
int32_t t187 = -8775;
int32_t x900 = INT32_MIN;
int32_t t191 = -9;
int32_t x918 = -1;
int8_t x920 = 1;
static uint64_t x924 = 3357885811938450668LLU;
static uint16_t x928 = 13U;
int8_t x930 = -1;
static int16_t x931 = 7500;
uint64_t x934 = 1558986LLU;
int64_t x935 = INT64_MIN;
int32_t x939 = INT32_MAX;
int64_t x955 = -26105085469LL;


void f0(void) {
    	int16_t x2 = INT16_MIN;
	uint8_t x3 = UINT8_MAX;
	int32_t x4 = INT32_MIN;
	static volatile int32_t t0 = 975785;

    t0 = ((x1+x2)<=(x3%x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int8_t x6 = -1;
	uint16_t x8 = 11198U;

    t1 = ((x5+x6)<=(x7%x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = UINT32_MAX;
	int8_t x11 = -57;
	volatile int32_t t2 = -1;

    t2 = ((x9+x10)<=(x11%x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -49;
	uint64_t x14 = 694638722807027435LLU;
	volatile int8_t x16 = INT8_MIN;

    t3 = ((x13+x14)<=(x15%x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x18 = 4800U;
	int16_t x19 = -1;
	int32_t t4 = -9;

    t4 = ((x17+x18)<=(x19%x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x22 = -1;
	int64_t x23 = INT64_MAX;
	volatile int64_t x24 = INT64_MIN;

    t5 = ((x21+x22)<=(x23%x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x25 = INT16_MIN;
	static int32_t x26 = INT32_MAX;
	int64_t x27 = INT64_MAX;
	static uint16_t x28 = 874U;
	static volatile int32_t t6 = -7542;

    t6 = ((x25+x26)<=(x27%x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = 14;
	static int32_t x30 = INT32_MIN;
	int8_t x31 = -1;
	int32_t x32 = INT32_MIN;
	int32_t t7 = 633;

    t7 = ((x29+x30)<=(x31%x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x34 = INT16_MIN;
	int64_t x35 = INT64_MIN;
	volatile uint64_t x36 = 38818052901326LLU;
	int32_t t8 = 817289;

    t8 = ((x33+x34)<=(x35%x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	int32_t x38 = -1;
	int32_t x39 = INT32_MIN;
	int16_t x40 = 44;
	int32_t t9 = 11461111;

    t9 = ((x37+x38)<=(x39%x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MAX;
	int16_t x42 = -1;
	int8_t x43 = INT8_MAX;
	static int64_t x44 = INT64_MIN;
	static int32_t t10 = 575380523;

    t10 = ((x41+x42)<=(x43%x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MAX;
	int16_t x46 = INT16_MIN;
	int32_t x48 = INT32_MAX;
	int32_t t11 = -137;

    t11 = ((x45+x46)<=(x47%x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x49 = 1;
	static volatile uint32_t x50 = 2014U;
	int16_t x51 = 39;
	int32_t x52 = INT32_MIN;

    t12 = ((x49+x50)<=(x51%x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = 1729;
	volatile uint32_t x54 = 0U;
	volatile uint16_t x55 = 17U;
	int8_t x56 = INT8_MIN;
	static volatile int32_t t13 = 454756;

    t13 = ((x53+x54)<=(x55%x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x61 = 4;
	int8_t x62 = INT8_MIN;
	int32_t x64 = 6336235;
	int32_t t14 = 2450;

    t14 = ((x61+x62)<=(x63%x64));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x65 = 14671021220983LL;
	volatile uint32_t x66 = 14088U;
	static int8_t x67 = INT8_MAX;
	uint64_t x68 = UINT64_MAX;
	volatile int32_t t15 = 6181814;

    t15 = ((x65+x66)<=(x67%x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x69 = 594U;
	uint64_t x70 = 58699065LLU;
	uint16_t x72 = 13U;

    t16 = ((x69+x70)<=(x71%x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int8_t x73 = 0;
	static uint32_t x74 = UINT32_MAX;
	uint64_t x75 = UINT64_MAX;
	int16_t x76 = 13456;

    t17 = ((x73+x74)<=(x75%x76));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x77 = -1;
	static uint8_t x78 = 98U;
	static int8_t x79 = -1;
	int64_t x80 = -1LL;

    t18 = ((x77+x78)<=(x79%x80));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x81 = -5959;
	uint16_t x82 = 6177U;
	int16_t x83 = -10;
	volatile int8_t x84 = -1;
	static int32_t t19 = -218782;

    t19 = ((x81+x82)<=(x83%x84));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x86 = 25292383823632801LLU;
	int16_t x87 = -54;

    t20 = ((x85+x86)<=(x87%x88));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x89 = INT16_MIN;
	int8_t x90 = INT8_MIN;
	uint64_t x91 = 4074457696513428LLU;
	static int32_t t21 = 46;

    t21 = ((x89+x90)<=(x91%x92));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x93 = 103U;
	uint32_t x94 = 81U;
	static int64_t x96 = INT64_MIN;
	static volatile int32_t t22 = -2798399;

    t22 = ((x93+x94)<=(x95%x96));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x97 = INT32_MIN;
	static int16_t x99 = 5;
	volatile int32_t x100 = INT32_MAX;
	volatile int32_t t23 = -7;

    t23 = ((x97+x98)<=(x99%x100));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint8_t x101 = 0U;
	static volatile uint32_t x102 = UINT32_MAX;
	static volatile int32_t t24 = 300220;

    t24 = ((x101+x102)<=(x103%x104));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x105 = -16;
	int64_t x108 = INT64_MAX;
	int32_t t25 = -28142;

    t25 = ((x105+x106)<=(x107%x108));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x109 = -11306LL;
	volatile int8_t x111 = INT8_MAX;
	static volatile uint16_t x112 = 1464U;
	static volatile int32_t t26 = 0;

    t26 = ((x109+x110)<=(x111%x112));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x114 = -528923979;
	int64_t x115 = -1LL;
	int8_t x116 = INT8_MIN;
	static volatile int32_t t27 = -9965;

    t27 = ((x113+x114)<=(x115%x116));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x118 = INT32_MIN;
	volatile uint64_t x119 = 12566541LLU;
	int32_t t28 = 11386804;

    t28 = ((x117+x118)<=(x119%x120));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x121 = INT64_MIN;
	uint16_t x122 = 629U;
	uint32_t x123 = 1395U;
	volatile int16_t x124 = INT16_MIN;
	int32_t t29 = 1558;

    t29 = ((x121+x122)<=(x123%x124));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x125 = INT64_MIN;
	int16_t x126 = 1;
	int8_t x127 = -19;
	int64_t x128 = INT64_MAX;
	int32_t t30 = 2392;

    t30 = ((x125+x126)<=(x127%x128));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x129 = 1;
	int64_t x130 = -1LL;
	uint16_t x131 = UINT16_MAX;
	volatile int64_t x132 = INT64_MAX;
	volatile int32_t t31 = -36822876;

    t31 = ((x129+x130)<=(x131%x132));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x133 = -1;
	int32_t t32 = -1;

    t32 = ((x133+x134)<=(x135%x136));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint64_t x137 = UINT64_MAX;
	int32_t x138 = INT32_MIN;
	uint8_t x139 = 7U;
	static volatile int32_t t33 = 707;

    t33 = ((x137+x138)<=(x139%x140));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x141 = -1LL;
	int16_t x143 = -1;
	static int32_t x144 = -1;
	volatile int32_t t34 = 941112;

    t34 = ((x141+x142)<=(x143%x144));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x149 = -1LL;
	int64_t x150 = INT64_MAX;
	static volatile int16_t x151 = INT16_MIN;
	volatile int8_t x152 = INT8_MIN;
	static int32_t t35 = 630;

    t35 = ((x149+x150)<=(x151%x152));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x157 = 6169U;
	int32_t x158 = INT32_MIN;
	int16_t x159 = 3723;
	int32_t x160 = INT32_MIN;
	int32_t t36 = 564753;

    t36 = ((x157+x158)<=(x159%x160));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x164 = INT8_MAX;
	int32_t t37 = 6748;

    t37 = ((x161+x162)<=(x163%x164));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x165 = INT32_MIN;
	volatile uint16_t x166 = UINT16_MAX;
	static int64_t x167 = INT64_MIN;
	int32_t x168 = INT32_MIN;
	int32_t t38 = 2498;

    t38 = ((x165+x166)<=(x167%x168));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x170 = INT8_MIN;
	uint16_t x172 = 1814U;
	static int32_t t39 = 79;

    t39 = ((x169+x170)<=(x171%x172));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x174 = 404998042LL;
	volatile int32_t x175 = -1;
	int64_t x176 = INT64_MIN;
	volatile int32_t t40 = 34;

    t40 = ((x173+x174)<=(x175%x176));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x177 = INT32_MIN;
	volatile int32_t x178 = 2028050;
	int8_t x179 = -1;
	int16_t x180 = INT16_MIN;
	int32_t t41 = -9;

    t41 = ((x177+x178)<=(x179%x180));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x181 = UINT64_MAX;
	int16_t x183 = INT16_MAX;
	int8_t x184 = INT8_MIN;
	int32_t t42 = -32187;

    t42 = ((x181+x182)<=(x183%x184));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x185 = 456183637277057644LL;
	uint32_t x186 = 62611U;
	int8_t x188 = INT8_MIN;
	volatile int32_t t43 = 12;

    t43 = ((x185+x186)<=(x187%x188));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int32_t x189 = INT32_MIN;
	uint64_t x190 = 1LLU;
	int32_t x191 = -1;
	static int16_t x192 = 7834;
	int32_t t44 = -319765697;

    t44 = ((x189+x190)<=(x191%x192));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint16_t x193 = UINT16_MAX;
	int16_t x194 = 12;
	uint32_t x195 = UINT32_MAX;
	int8_t x196 = INT8_MIN;
	int32_t t45 = -459597;

    t45 = ((x193+x194)<=(x195%x196));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x199 = 4U;
	int16_t x200 = INT16_MIN;
	int32_t t46 = 2568861;

    t46 = ((x197+x198)<=(x199%x200));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x201 = INT8_MIN;
	int64_t x202 = 1391568407LL;
	int16_t x203 = -6;
	int32_t t47 = -30529;

    t47 = ((x201+x202)<=(x203%x204));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x209 = INT8_MAX;
	uint32_t x210 = 3033548U;
	uint32_t x211 = 16243U;
	volatile int32_t x212 = -1;
	volatile int32_t t48 = -29;

    t48 = ((x209+x210)<=(x211%x212));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x213 = INT8_MIN;
	int16_t x214 = INT16_MAX;
	static int32_t x216 = INT32_MAX;
	volatile int32_t t49 = -283734875;

    t49 = ((x213+x214)<=(x215%x216));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x217 = 0U;
	int64_t x219 = INT64_MIN;
	int32_t t50 = 0;

    t50 = ((x217+x218)<=(x219%x220));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x221 = 1500U;
	uint32_t x222 = 820008U;
	uint64_t x224 = 3307365334LLU;
	static volatile int32_t t51 = 100045;

    t51 = ((x221+x222)<=(x223%x224));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x233 = -1LL;
	int64_t x234 = -86639221968LL;
	uint32_t x236 = 575384736U;
	int32_t t52 = 21;

    t52 = ((x233+x234)<=(x235%x236));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x237 = INT32_MIN;
	uint16_t x238 = UINT16_MAX;
	uint64_t x239 = UINT64_MAX;
	int8_t x240 = INT8_MIN;
	static volatile int32_t t53 = -4476093;

    t53 = ((x237+x238)<=(x239%x240));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x243 = 751985651714377LLU;
	int32_t t54 = 780725;

    t54 = ((x241+x242)<=(x243%x244));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x245 = UINT32_MAX;
	int32_t x246 = INT32_MIN;
	int8_t x247 = -1;
	volatile int64_t x248 = INT64_MAX;
	int32_t t55 = 678;

    t55 = ((x245+x246)<=(x247%x248));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x249 = -38372;
	int16_t x250 = INT16_MIN;
	int32_t x251 = INT32_MAX;
	int16_t x252 = INT16_MIN;
	int32_t t56 = 1;

    t56 = ((x249+x250)<=(x251%x252));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x253 = 57U;
	volatile int32_t x254 = INT32_MIN;
	int16_t x255 = INT16_MAX;
	volatile int16_t x256 = -1;
	int32_t t57 = -33;

    t57 = ((x253+x254)<=(x255%x256));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x257 = 17U;
	uint64_t x258 = UINT64_MAX;
	uint32_t x259 = 145861577U;
	volatile uint16_t x260 = 2810U;

    t58 = ((x257+x258)<=(x259%x260));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x264 = -1;
	volatile int32_t t59 = 1;

    t59 = ((x261+x262)<=(x263%x264));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x265 = UINT32_MAX;
	int16_t x266 = -3191;
	uint16_t x268 = 122U;
	int32_t t60 = -152758;

    t60 = ((x265+x266)<=(x267%x268));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint64_t x273 = 57643LLU;
	volatile uint32_t x275 = 25U;
	static uint64_t x276 = 8946248539LLU;
	int32_t t61 = 7;

    t61 = ((x273+x274)<=(x275%x276));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x277 = 0;
	volatile uint8_t x278 = 3U;
	int64_t x280 = INT64_MIN;
	static int32_t t62 = -722;

    t62 = ((x277+x278)<=(x279%x280));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x281 = INT32_MAX;
	int8_t x282 = INT8_MIN;
	static int16_t x283 = -5827;
	volatile int16_t x284 = INT16_MAX;
	int32_t t63 = 16374890;

    t63 = ((x281+x282)<=(x283%x284));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x285 = -16313LL;
	int64_t x286 = INT64_MAX;
	uint16_t x287 = 25U;
	int64_t x288 = INT64_MAX;
	int32_t t64 = 53377497;

    t64 = ((x285+x286)<=(x287%x288));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x289 = 844565U;
	uint64_t x290 = 1867LLU;
	int8_t x291 = INT8_MIN;
	int64_t x292 = INT64_MIN;
	int32_t t65 = 1;

    t65 = ((x289+x290)<=(x291%x292));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x294 = -1;
	uint64_t x295 = UINT64_MAX;
	int32_t t66 = -1;

    t66 = ((x293+x294)<=(x295%x296));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x297 = 1U;
	volatile int8_t x298 = INT8_MAX;
	uint32_t x299 = UINT32_MAX;
	static int8_t x300 = INT8_MIN;
	volatile int32_t t67 = -29305528;

    t67 = ((x297+x298)<=(x299%x300));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x301 = INT16_MIN;
	int64_t x302 = -664LL;
	int8_t x303 = -21;
	static volatile int32_t x304 = INT32_MIN;

    t68 = ((x301+x302)<=(x303%x304));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint8_t x305 = 2U;
	uint8_t x307 = UINT8_MAX;
	static uint16_t x308 = UINT16_MAX;

    t69 = ((x305+x306)<=(x307%x308));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x309 = 2277U;
	int16_t x310 = INT16_MAX;
	uint32_t x311 = 3333U;
	int16_t x312 = INT16_MIN;
	int32_t t70 = 207595204;

    t70 = ((x309+x310)<=(x311%x312));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x313 = 3U;
	int8_t x314 = -1;
	volatile int32_t x315 = INT32_MAX;
	uint64_t x316 = 1441874961116LLU;
	int32_t t71 = -62404001;

    t71 = ((x313+x314)<=(x315%x316));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x321 = UINT64_MAX;
	static int8_t x322 = 1;

    t72 = ((x321+x322)<=(x323%x324));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x327 = INT32_MAX;
	int8_t x328 = INT8_MIN;
	int32_t t73 = -47828;

    t73 = ((x325+x326)<=(x327%x328));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x329 = 32254302;
	static int64_t x330 = INT64_MIN;
	volatile int32_t x331 = INT32_MIN;
	int16_t x332 = 26;

    t74 = ((x329+x330)<=(x331%x332));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x333 = -1;
	int32_t x334 = -1;
	static int32_t x335 = 9;
	int8_t x336 = 12;
	volatile int32_t t75 = -137;

    t75 = ((x333+x334)<=(x335%x336));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x337 = -71470;
	int8_t x338 = INT8_MIN;
	int16_t x339 = INT16_MAX;
	volatile int32_t x340 = INT32_MIN;
	int32_t t76 = -31919;

    t76 = ((x337+x338)<=(x339%x340));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x341 = INT16_MIN;
	int64_t x342 = -12903LL;
	int64_t x343 = INT64_MIN;
	uint64_t x344 = UINT64_MAX;
	int32_t t77 = 51488;

    t77 = ((x341+x342)<=(x343%x344));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x345 = 1399LLU;
	int16_t x346 = INT16_MIN;
	int32_t x347 = INT32_MIN;
	static volatile int32_t x348 = INT32_MIN;

    t78 = ((x345+x346)<=(x347%x348));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x350 = -1;
	int8_t x352 = INT8_MIN;
	volatile int32_t t79 = -4;

    t79 = ((x349+x350)<=(x351%x352));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x354 = INT64_MIN;
	uint32_t x355 = 1789420U;
	int16_t x356 = INT16_MAX;
	int32_t t80 = -6399;

    t80 = ((x353+x354)<=(x355%x356));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x357 = -238;
	static int64_t x358 = -184888305LL;
	int8_t x359 = 0;
	static volatile int8_t x360 = INT8_MIN;
	static int32_t t81 = -35464;

    t81 = ((x357+x358)<=(x359%x360));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x361 = 730314656U;
	static int64_t x362 = INT64_MIN;
	volatile uint32_t x363 = 2U;
	int16_t x364 = -1;
	volatile int32_t t82 = 35;

    t82 = ((x361+x362)<=(x363%x364));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x369 = -3;
	int16_t x370 = 401;
	int16_t x372 = INT16_MAX;
	static volatile int32_t t83 = 34739567;

    t83 = ((x369+x370)<=(x371%x372));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x373 = 4U;
	uint64_t x374 = UINT64_MAX;
	static int8_t x375 = INT8_MIN;
	uint32_t x376 = 2335670U;
	volatile int32_t t84 = -18;

    t84 = ((x373+x374)<=(x375%x376));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x377 = -1LL;
	int64_t x378 = -1LL;
	int32_t x379 = 127496;
	int8_t x380 = 3;
	static int32_t t85 = -7;

    t85 = ((x377+x378)<=(x379%x380));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x381 = 644435U;
	volatile uint8_t x383 = 23U;
	uint32_t x384 = 881499751U;
	int32_t t86 = -186118;

    t86 = ((x381+x382)<=(x383%x384));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x389 = -1986LL;
	int32_t x390 = INT32_MIN;
	uint64_t x391 = UINT64_MAX;
	int8_t x392 = 49;
	static int32_t t87 = 43;

    t87 = ((x389+x390)<=(x391%x392));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x393 = 2;
	volatile uint8_t x394 = 5U;
	volatile int16_t x396 = -6;

    t88 = ((x393+x394)<=(x395%x396));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x397 = -1;
	volatile int32_t t89 = 0;

    t89 = ((x397+x398)<=(x399%x400));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x401 = -1;
	volatile int8_t x402 = -3;
	int64_t x403 = 467036175287LL;
	static uint32_t x404 = 6U;
	volatile int32_t t90 = -26560556;

    t90 = ((x401+x402)<=(x403%x404));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x405 = -4;
	int64_t x406 = -1LL;
	int8_t x407 = -1;
	static uint16_t x408 = UINT16_MAX;
	int32_t t91 = 22198;

    t91 = ((x405+x406)<=(x407%x408));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x409 = INT64_MIN;
	uint16_t x410 = 2198U;
	uint64_t x411 = 49656712629176LLU;
	int32_t x412 = INT32_MIN;
	static volatile int32_t t92 = 19033;

    t92 = ((x409+x410)<=(x411%x412));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x413 = 20U;
	volatile uint32_t x414 = UINT32_MAX;
	volatile int16_t x415 = INT16_MIN;
	uint64_t x416 = 298LLU;
	int32_t t93 = -505583942;

    t93 = ((x413+x414)<=(x415%x416));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x417 = -1LL;
	int32_t x419 = -1;
	uint8_t x420 = UINT8_MAX;
	int32_t t94 = 12;

    t94 = ((x417+x418)<=(x419%x420));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x421 = 3875U;
	int8_t x422 = INT8_MIN;
	uint64_t x423 = 55360419LLU;
	int8_t x424 = INT8_MIN;
	volatile int32_t t95 = 15269692;

    t95 = ((x421+x422)<=(x423%x424));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x425 = 10958;
	static int16_t x427 = -1;
	int32_t x428 = INT32_MIN;
	int32_t t96 = -817;

    t96 = ((x425+x426)<=(x427%x428));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x431 = -1;
	int32_t t97 = -80;

    t97 = ((x429+x430)<=(x431%x432));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x433 = 35U;
	int8_t x434 = INT8_MIN;
	int64_t x436 = INT64_MIN;
	int32_t t98 = -16640245;

    t98 = ((x433+x434)<=(x435%x436));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x441 = -1LL;
	int32_t x442 = INT32_MIN;
	int64_t x443 = 16578613800LL;
	int16_t x444 = -298;
	static int32_t t99 = 230060;

    t99 = ((x441+x442)<=(x443%x444));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x445 = INT16_MIN;
	static uint32_t x446 = 8105574U;
	int16_t x447 = -7;
	volatile int8_t x448 = INT8_MIN;

    t100 = ((x445+x446)<=(x447%x448));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x449 = INT64_MAX;
	int32_t x450 = -46628;
	int8_t x451 = INT8_MIN;
	int16_t x452 = -1;
	static volatile int32_t t101 = 3586;

    t101 = ((x449+x450)<=(x451%x452));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x453 = 30;
	static int64_t x454 = INT64_MIN;
	int32_t x455 = INT32_MIN;
	int32_t x456 = INT32_MIN;

    t102 = ((x453+x454)<=(x455%x456));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x458 = -495;
	volatile int64_t x459 = INT64_MIN;
	volatile int16_t x460 = -1;
	int32_t t103 = 11804136;

    t103 = ((x457+x458)<=(x459%x460));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x461 = 145;
	uint32_t x462 = 32U;
	volatile uint16_t x463 = 28U;
	int64_t x464 = 51520936506377LL;
	volatile int32_t t104 = -6690;

    t104 = ((x461+x462)<=(x463%x464));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x465 = 10U;
	static uint64_t x466 = 281858726164145LLU;
	int64_t x467 = -1LL;
	uint32_t x468 = UINT32_MAX;
	int32_t t105 = -10;

    t105 = ((x465+x466)<=(x467%x468));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x469 = INT8_MAX;
	uint32_t x470 = 441U;
	static uint16_t x471 = UINT16_MAX;
	uint64_t x472 = 14467LLU;
	volatile int32_t t106 = -219141449;

    t106 = ((x469+x470)<=(x471%x472));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x473 = UINT64_MAX;
	volatile int16_t x474 = -10;
	int64_t x475 = INT64_MIN;
	uint8_t x476 = UINT8_MAX;

    t107 = ((x473+x474)<=(x475%x476));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x477 = 2;
	int16_t x478 = INT16_MIN;
	int16_t x479 = 0;
	int16_t x480 = INT16_MIN;
	volatile int32_t t108 = -84;

    t108 = ((x477+x478)<=(x479%x480));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x481 = UINT8_MAX;
	static volatile int64_t x482 = -57369852205594LL;
	uint64_t x483 = 7977174332LLU;
	int8_t x484 = INT8_MAX;
	static volatile int32_t t109 = 27904;

    t109 = ((x481+x482)<=(x483%x484));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x485 = INT32_MIN;
	volatile int64_t x486 = 768074246125228LL;
	static int32_t x488 = INT32_MAX;
	volatile int32_t t110 = 0;

    t110 = ((x485+x486)<=(x487%x488));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x489 = INT16_MIN;
	int32_t x490 = -1;
	int32_t x491 = 460196;
	static uint64_t x492 = 108000336850384LLU;
	static volatile int32_t t111 = 680;

    t111 = ((x489+x490)<=(x491%x492));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x493 = -1LL;
	volatile int32_t x494 = INT32_MIN;
	static uint16_t x495 = UINT16_MAX;
	uint32_t x496 = UINT32_MAX;

    t112 = ((x493+x494)<=(x495%x496));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x501 = INT64_MIN;
	uint32_t x502 = UINT32_MAX;
	int16_t x503 = INT16_MAX;
	volatile int8_t x504 = -1;
	static int32_t t113 = -1;

    t113 = ((x501+x502)<=(x503%x504));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int64_t x505 = 352037028640218LL;
	int16_t x506 = -73;
	volatile int32_t t114 = 47;

    t114 = ((x505+x506)<=(x507%x508));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x509 = UINT16_MAX;
	volatile int8_t x512 = INT8_MAX;
	volatile int32_t t115 = -119731;

    t115 = ((x509+x510)<=(x511%x512));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x521 = INT8_MIN;
	volatile int16_t x523 = INT16_MIN;
	static uint32_t x524 = 277U;

    t116 = ((x521+x522)<=(x523%x524));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x525 = INT8_MIN;
	int32_t t117 = -33134634;

    t117 = ((x525+x526)<=(x527%x528));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int8_t x529 = INT8_MAX;
	int16_t x530 = INT16_MIN;
	volatile int32_t t118 = -3;

    t118 = ((x529+x530)<=(x531%x532));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x533 = INT16_MIN;
	int8_t x534 = -1;
	int64_t x535 = -1LL;
	volatile int8_t x536 = INT8_MAX;
	volatile int32_t t119 = -719776860;

    t119 = ((x533+x534)<=(x535%x536));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x537 = -2;
	int32_t x538 = 2;
	static uint8_t x539 = 1U;
	int8_t x540 = INT8_MAX;

    t120 = ((x537+x538)<=(x539%x540));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x546 = UINT32_MAX;
	volatile int8_t x547 = INT8_MAX;
	uint8_t x548 = UINT8_MAX;

    t121 = ((x545+x546)<=(x547%x548));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int16_t x549 = -1;
	int16_t x550 = 0;
	uint16_t x551 = 3U;
	uint64_t x552 = UINT64_MAX;
	volatile int32_t t122 = 11004;

    t122 = ((x549+x550)<=(x551%x552));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x553 = 30;
	static uint32_t x554 = 314561U;
	volatile int16_t x556 = -1;

    t123 = ((x553+x554)<=(x555%x556));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x557 = UINT16_MAX;
	static int64_t x558 = 4326991263384782LL;
	int64_t x559 = 3296108956851601466LL;
	volatile uint64_t x560 = UINT64_MAX;
	volatile int32_t t124 = -3109088;

    t124 = ((x557+x558)<=(x559%x560));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x561 = 1;
	int64_t x563 = -1891109462669LL;
	int64_t x564 = -26772096LL;
	static volatile int32_t t125 = -3;

    t125 = ((x561+x562)<=(x563%x564));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x567 = INT32_MIN;
	int16_t x568 = INT16_MAX;
	static int32_t t126 = 64432;

    t126 = ((x565+x566)<=(x567%x568));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x573 = INT16_MAX;
	int64_t x574 = INT64_MIN;
	static int16_t x576 = 1;

    t127 = ((x573+x574)<=(x575%x576));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x581 = INT32_MIN;
	uint64_t x583 = 2689774684673141LLU;
	static int32_t t128 = 441953966;

    t128 = ((x581+x582)<=(x583%x584));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x585 = 68U;
	int32_t x587 = -1;
	volatile uint8_t x588 = UINT8_MAX;
	int32_t t129 = -19;

    t129 = ((x585+x586)<=(x587%x588));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x589 = 24U;
	int8_t x591 = -1;
	volatile uint16_t x592 = 13938U;
	volatile int32_t t130 = 127349;

    t130 = ((x589+x590)<=(x591%x592));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x598 = 10U;
	static int64_t x599 = 3710365010LL;
	static uint32_t x600 = 2523U;
	volatile int32_t t131 = -95717720;

    t131 = ((x597+x598)<=(x599%x600));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x601 = -1;
	static int64_t x602 = 1302LL;
	uint64_t x603 = 908946LLU;
	volatile int32_t t132 = -8970;

    t132 = ((x601+x602)<=(x603%x604));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x605 = 3U;
	uint8_t x606 = 1U;
	volatile uint16_t x607 = UINT16_MAX;
	uint64_t x608 = 61519876LLU;
	static int32_t t133 = -2;

    t133 = ((x605+x606)<=(x607%x608));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint64_t x614 = 162097268593852218LLU;
	int16_t x615 = INT16_MIN;
	int64_t x616 = -6871LL;
	volatile int32_t t134 = -157494116;

    t134 = ((x613+x614)<=(x615%x616));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint8_t x621 = 39U;
	uint32_t x622 = 6U;
	volatile int32_t x623 = INT32_MAX;
	uint8_t x624 = UINT8_MAX;
	static volatile int32_t t135 = 3149;

    t135 = ((x621+x622)<=(x623%x624));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint16_t x626 = 4056U;
	volatile uint32_t x628 = UINT32_MAX;
	volatile int32_t t136 = 7590484;

    t136 = ((x625+x626)<=(x627%x628));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x629 = 27802;
	int8_t x631 = -1;
	static volatile int16_t x632 = INT16_MAX;
	int32_t t137 = -186;

    t137 = ((x629+x630)<=(x631%x632));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x633 = INT64_MIN;
	static int32_t x635 = -215;
	int8_t x636 = 5;
	volatile int32_t t138 = 6;

    t138 = ((x633+x634)<=(x635%x636));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x637 = UINT8_MAX;
	int8_t x639 = -15;
	int32_t t139 = -532176537;

    t139 = ((x637+x638)<=(x639%x640));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x649 = UINT32_MAX;
	static uint8_t x650 = UINT8_MAX;
	int64_t x651 = INT64_MIN;
	uint32_t x652 = 6957430U;
	int32_t t140 = 11023;

    t140 = ((x649+x650)<=(x651%x652));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x653 = INT16_MIN;
	int32_t x654 = -27;
	int16_t x655 = INT16_MAX;
	int64_t x656 = INT64_MIN;

    t141 = ((x653+x654)<=(x655%x656));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x657 = -3;
	int64_t x658 = -13216178LL;
	int64_t x659 = -577176408LL;
	static int64_t x660 = 23228236LL;
	int32_t t142 = 8147;

    t142 = ((x657+x658)<=(x659%x660));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint8_t x665 = UINT8_MAX;
	static int8_t x668 = INT8_MIN;
	volatile int32_t t143 = -25731;

    t143 = ((x665+x666)<=(x667%x668));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x669 = INT32_MAX;
	uint64_t x670 = 26442212453459LLU;
	int16_t x671 = -1;
	static uint8_t x672 = 26U;
	int32_t t144 = 679;

    t144 = ((x669+x670)<=(x671%x672));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x674 = 3U;
	static volatile int32_t x676 = 60827070;
	int32_t t145 = -15;

    t145 = ((x673+x674)<=(x675%x676));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int32_t x678 = -8;
	volatile int16_t x679 = INT16_MIN;
	volatile int16_t x680 = 11;
	volatile int32_t t146 = -29;

    t146 = ((x677+x678)<=(x679%x680));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int16_t x685 = INT16_MIN;
	uint32_t x687 = 10U;
	static uint32_t x688 = 3275U;
	volatile int32_t t147 = 1362154;

    t147 = ((x685+x686)<=(x687%x688));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x689 = 4U;
	int16_t x690 = INT16_MIN;
	int32_t t148 = 20828;

    t148 = ((x689+x690)<=(x691%x692));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint32_t x693 = 57419U;
	int64_t x694 = INT64_MIN;
	uint8_t x696 = 2U;
	volatile int32_t t149 = 0;

    t149 = ((x693+x694)<=(x695%x696));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x697 = -552195397LL;
	int16_t x698 = 2985;
	static int16_t x699 = 1;
	volatile int16_t x700 = -1;
	int32_t t150 = 2978;

    t150 = ((x697+x698)<=(x699%x700));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x701 = -1;
	static int64_t x702 = INT64_MAX;
	volatile int64_t x703 = INT64_MIN;
	volatile int32_t x704 = INT32_MIN;

    t151 = ((x701+x702)<=(x703%x704));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x709 = 5806;
	int16_t x710 = INT16_MAX;
	volatile int32_t t152 = 751;

    t152 = ((x709+x710)<=(x711%x712));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint16_t x713 = 8901U;
	int64_t x714 = INT64_MIN;
	volatile uint32_t x715 = 280U;
	static volatile int32_t x716 = INT32_MAX;
	int32_t t153 = -739;

    t153 = ((x713+x714)<=(x715%x716));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x717 = 1U;
	uint16_t x719 = UINT16_MAX;
	int32_t t154 = 2183;

    t154 = ((x717+x718)<=(x719%x720));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x721 = 49103U;
	int16_t x722 = -2261;
	int64_t x723 = INT64_MAX;
	volatile int32_t x724 = INT32_MAX;
	int32_t t155 = -771;

    t155 = ((x721+x722)<=(x723%x724));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x729 = INT32_MAX;
	int8_t x731 = INT8_MAX;
	int32_t t156 = -286504;

    t156 = ((x729+x730)<=(x731%x732));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x733 = -303677141LL;
	int16_t x735 = -1;
	int32_t x736 = INT32_MAX;
	static volatile int32_t t157 = -48;

    t157 = ((x733+x734)<=(x735%x736));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x738 = INT16_MAX;
	int16_t x739 = INT16_MIN;
	volatile int64_t x740 = -860702664859LL;
	static volatile int32_t t158 = 95387153;

    t158 = ((x737+x738)<=(x739%x740));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x741 = 192LL;
	int8_t x742 = -1;
	volatile uint16_t x743 = 11963U;
	uint32_t x744 = UINT32_MAX;
	static int32_t t159 = 159;

    t159 = ((x741+x742)<=(x743%x744));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x749 = -326;
	int32_t x750 = INT32_MAX;
	volatile int32_t x751 = INT32_MAX;
	int16_t x752 = INT16_MIN;
	volatile int32_t t160 = 5;

    t160 = ((x749+x750)<=(x751%x752));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint32_t x756 = 409780858U;
	int32_t t161 = 106;

    t161 = ((x753+x754)<=(x755%x756));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x766 = UINT32_MAX;
	volatile int32_t t162 = 85702735;

    t162 = ((x765+x766)<=(x767%x768));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x773 = INT8_MAX;
	int32_t x774 = INT32_MIN;
	int8_t x775 = INT8_MIN;
	int8_t x776 = INT8_MIN;

    t163 = ((x773+x774)<=(x775%x776));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x777 = UINT8_MAX;
	int32_t x778 = -1;
	uint16_t x779 = 326U;
	volatile uint64_t x780 = UINT64_MAX;

    t164 = ((x777+x778)<=(x779%x780));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x785 = 2975;
	int32_t x786 = INT32_MIN;
	int32_t x787 = -30;
	static volatile int64_t x788 = INT64_MIN;
	static volatile int32_t t165 = 428087;

    t165 = ((x785+x786)<=(x787%x788));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x789 = INT32_MAX;
	uint64_t x790 = 22716LLU;
	static uint32_t x792 = 12U;
	int32_t t166 = -16724;

    t166 = ((x789+x790)<=(x791%x792));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x793 = INT8_MAX;
	uint64_t x794 = UINT64_MAX;
	int64_t x795 = -1LL;
	static uint16_t x796 = UINT16_MAX;

    t167 = ((x793+x794)<=(x795%x796));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x797 = INT16_MIN;
	volatile uint32_t x798 = UINT32_MAX;
	int8_t x799 = -38;
	int64_t x800 = 45981LL;
	int32_t t168 = -1;

    t168 = ((x797+x798)<=(x799%x800));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x801 = 488U;
	int8_t x802 = 34;
	static uint16_t x803 = 14688U;
	static int32_t x804 = INT32_MIN;
	int32_t t169 = -136363;

    t169 = ((x801+x802)<=(x803%x804));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x805 = 525LLU;
	uint64_t x807 = 301111920LLU;
	volatile int64_t x808 = INT64_MIN;
	volatile int32_t t170 = 291;

    t170 = ((x805+x806)<=(x807%x808));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x809 = 30071755U;
	int64_t x810 = INT64_MIN;
	static uint16_t x811 = 3U;
	volatile int8_t x812 = INT8_MIN;
	int32_t t171 = 1;

    t171 = ((x809+x810)<=(x811%x812));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x813 = UINT64_MAX;
	int8_t x814 = 11;
	static int32_t x815 = -1;
	uint32_t x816 = UINT32_MAX;

    t172 = ((x813+x814)<=(x815%x816));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x817 = INT64_MAX;
	volatile int64_t x818 = INT64_MIN;
	int16_t x819 = INT16_MIN;
	static uint64_t x820 = UINT64_MAX;
	volatile int32_t t173 = -1434;

    t173 = ((x817+x818)<=(x819%x820));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x821 = 76U;
	static uint8_t x823 = 3U;
	volatile int64_t x824 = -1LL;
	int32_t t174 = 37;

    t174 = ((x821+x822)<=(x823%x824));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x830 = -1LL;
	int64_t x831 = INT64_MIN;
	int64_t x832 = INT64_MIN;
	volatile int32_t t175 = -14973;

    t175 = ((x829+x830)<=(x831%x832));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x833 = -1;
	int8_t x834 = INT8_MIN;
	int64_t x835 = 1990385026968025LL;
	static uint16_t x836 = 20U;
	volatile int32_t t176 = 260;

    t176 = ((x833+x834)<=(x835%x836));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x838 = 16247816292150624LLU;
	static int8_t x839 = -16;
	static uint8_t x840 = 31U;

    t177 = ((x837+x838)<=(x839%x840));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x841 = 2863317;
	int64_t x842 = INT64_MIN;
	uint32_t x844 = UINT32_MAX;
	volatile int32_t t178 = -21743700;

    t178 = ((x841+x842)<=(x843%x844));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x845 = INT32_MIN;
	static uint32_t x846 = 213361195U;
	int8_t x847 = -1;
	int8_t x848 = -2;
	int32_t t179 = -835583;

    t179 = ((x845+x846)<=(x847%x848));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x849 = -18924328115LL;
	int16_t x850 = INT16_MIN;
	int64_t x852 = INT64_MIN;
	volatile int32_t t180 = 698528;

    t180 = ((x849+x850)<=(x851%x852));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile uint8_t x858 = 1U;
	int64_t x860 = -7036233688889169LL;
	int32_t t181 = 83;

    t181 = ((x857+x858)<=(x859%x860));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x862 = 173U;
	uint64_t x863 = 38291LLU;
	static uint32_t x864 = 1251530456U;
	int32_t t182 = 0;

    t182 = ((x861+x862)<=(x863%x864));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x869 = -6;
	int16_t x870 = -2308;
	int32_t x871 = INT32_MIN;
	volatile int32_t t183 = -50491912;

    t183 = ((x869+x870)<=(x871%x872));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x877 = 11U;
	uint64_t x879 = 692620988LLU;
	int32_t t184 = -3;

    t184 = ((x877+x878)<=(x879%x880));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int64_t x882 = -579579LL;
	static int8_t x883 = INT8_MIN;
	int8_t x884 = INT8_MIN;
	static volatile int32_t t185 = 618753;

    t185 = ((x881+x882)<=(x883%x884));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x885 = 790044064;
	uint8_t x888 = 113U;
	static int32_t t186 = 289;

    t186 = ((x885+x886)<=(x887%x888));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x894 = -133000167983472LL;
	volatile int32_t x895 = INT32_MIN;

    t187 = ((x893+x894)<=(x895%x896));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x897 = UINT64_MAX;
	uint8_t x898 = 7U;
	static uint64_t x899 = UINT64_MAX;
	volatile int32_t t188 = 579623;

    t188 = ((x897+x898)<=(x899%x900));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint8_t x901 = 3U;
	volatile int64_t x902 = INT64_MIN;
	int16_t x903 = INT16_MAX;
	uint64_t x904 = 175869852328LLU;
	volatile int32_t t189 = -54617563;

    t189 = ((x901+x902)<=(x903%x904));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x905 = INT64_MIN;
	uint8_t x906 = UINT8_MAX;
	int64_t x907 = -1LL;
	int32_t x908 = INT32_MAX;
	int32_t t190 = 563;

    t190 = ((x905+x906)<=(x907%x908));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x909 = UINT64_MAX;
	static volatile int32_t x910 = -1230412;
	int64_t x911 = -6165345660486841LL;
	uint16_t x912 = UINT16_MAX;

    t191 = ((x909+x910)<=(x911%x912));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x917 = INT16_MIN;
	volatile int8_t x919 = 37;
	static volatile int32_t t192 = 3685;

    t192 = ((x917+x918)<=(x919%x920));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x921 = -2244;
	int32_t x922 = 5185407;
	int64_t x923 = INT64_MIN;
	int32_t t193 = -5513132;

    t193 = ((x921+x922)<=(x923%x924));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x925 = 91U;
	uint16_t x926 = 178U;
	int64_t x927 = INT64_MAX;
	volatile int32_t t194 = -20948;

    t194 = ((x925+x926)<=(x927%x928));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x929 = INT8_MIN;
	uint32_t x932 = UINT32_MAX;
	volatile int32_t t195 = -2103272;

    t195 = ((x929+x930)<=(x931%x932));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x933 = INT64_MIN;
	int16_t x936 = -1;
	int32_t t196 = 934314624;

    t196 = ((x933+x934)<=(x935%x936));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x937 = 39092U;
	static uint8_t x938 = 1U;
	uint16_t x940 = 5U;
	volatile int32_t t197 = 765672;

    t197 = ((x937+x938)<=(x939%x940));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x945 = UINT32_MAX;
	uint64_t x946 = 156LLU;
	volatile uint16_t x947 = UINT16_MAX;
	uint32_t x948 = UINT32_MAX;
	int32_t t198 = -70;

    t198 = ((x945+x946)<=(x947%x948));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x953 = UINT16_MAX;
	int16_t x954 = INT16_MIN;
	int16_t x956 = INT16_MIN;
	int32_t t199 = -13226;

    t199 = ((x953+x954)<=(x955%x956));

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

