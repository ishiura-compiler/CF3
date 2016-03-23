
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

static int64_t x6 = INT64_MAX;
volatile int64_t x8 = INT64_MAX;
int16_t x11 = 15;
int64_t t4 = 13133031LL;
int32_t x21 = INT32_MIN;
uint16_t x22 = 4570U;
int32_t x24 = INT32_MIN;
volatile int32_t t5 = -46289;
int32_t x31 = 163244;
int64_t t8 = 165476778731473844LL;
volatile uint64_t t9 = 158LLU;
volatile int8_t x50 = INT8_MAX;
int32_t x56 = INT32_MIN;
uint32_t t14 = 614U;
uint8_t x62 = 8U;
volatile int32_t x63 = INT32_MAX;
uint8_t x65 = 0U;
static int32_t x66 = 4;
volatile int32_t t16 = -27;
int32_t x71 = INT32_MAX;
int64_t x74 = INT64_MIN;
static volatile int32_t x76 = -23575086;
static uint16_t x77 = UINT16_MAX;
int64_t x80 = -119749839LL;
volatile int64_t t19 = 2119LL;
volatile uint64_t x87 = 6665600LLU;
volatile int64_t x88 = -26363376818917861LL;
int32_t x93 = -1;
int8_t x105 = -5;
static int32_t x108 = INT32_MIN;
int32_t x112 = INT32_MIN;
static uint64_t x114 = 8857398187681LLU;
volatile int32_t x119 = INT32_MIN;
uint64_t x120 = UINT64_MAX;
static uint64_t t29 = 269497009104774LLU;
volatile uint16_t x123 = 328U;
int8_t x125 = INT8_MAX;
int16_t x129 = INT16_MIN;
uint64_t t32 = 6545431682LLU;
volatile int16_t x133 = INT16_MAX;
static uint16_t x134 = 504U;
volatile uint32_t x135 = 2848989U;
static volatile int32_t t34 = 2998809;
volatile int64_t x141 = 1LL;
uint64_t x143 = UINT64_MAX;
int32_t x145 = -1;
uint64_t t37 = 1159834124431289LLU;
int16_t x154 = -8;
int8_t x163 = -12;
volatile int16_t x166 = -1;
int64_t x171 = -1920LL;
uint64_t t41 = 461270093142920LLU;
int8_t x181 = -1;
int32_t x182 = INT32_MIN;
uint8_t x184 = UINT8_MAX;
int16_t x186 = INT16_MAX;
int64_t x200 = -54543786505070LL;
int64_t t49 = 2465906560563LL;
uint32_t x218 = 1881454262U;
int64_t x226 = -239LL;
int64_t t53 = 62LL;
static int16_t x230 = 1459;
volatile int32_t x233 = -51247161;
int32_t x235 = INT32_MIN;
int64_t x236 = 3432515342166535LL;
int64_t t57 = 3439LL;
int16_t x249 = INT16_MAX;
int16_t x265 = INT16_MIN;
int32_t x271 = 16;
int64_t x272 = -1LL;
int64_t x279 = INT64_MIN;
uint64_t x280 = 19963LLU;
static volatile uint64_t t64 = 142988850LLU;
volatile uint64_t x282 = UINT64_MAX;
int16_t x284 = INT16_MIN;
static int16_t x286 = -1;
int8_t x288 = -1;
int16_t x291 = INT16_MAX;
int32_t t67 = -527128;
static volatile int64_t x297 = INT64_MAX;
uint64_t t70 = 21297898318811LLU;
int8_t x307 = INT8_MIN;
uint64_t x313 = UINT64_MAX;
int64_t x314 = -1LL;
uint16_t x341 = 2530U;
uint16_t x344 = 1716U;
uint64_t x346 = UINT64_MAX;
volatile int64_t x357 = -1LL;
volatile int64_t t83 = 1194141979124LL;
uint64_t t85 = 65983206065LLU;
uint16_t x380 = UINT16_MAX;
int16_t x381 = -176;
volatile int32_t x386 = -9811;
volatile uint64_t t89 = 49620LLU;
static int16_t x389 = INT16_MIN;
static int16_t x399 = -1;
static int32_t x411 = -1021;
uint64_t x414 = 2742620605776580121LLU;
int32_t x418 = INT32_MIN;
int64_t t99 = 483492LL;
int16_t x429 = -1;
int16_t x432 = -17;
static int32_t t100 = 1080;
static uint32_t x435 = 150309U;
int8_t x436 = INT8_MAX;
static volatile uint32_t t101 = 96328U;
static uint32_t x440 = UINT32_MAX;
volatile uint32_t t102 = 78U;
volatile int64_t t103 = 191525154742LL;
volatile uint64_t x453 = 29498LLU;
uint64_t x457 = UINT64_MAX;
uint64_t t107 = 10877238344433923LLU;
static volatile int32_t t111 = -2321895;
int16_t x484 = INT16_MIN;
uint8_t x491 = 50U;
int16_t x492 = -654;
uint32_t x495 = 443670U;
static int16_t x501 = INT16_MAX;
volatile uint16_t x503 = 122U;
int16_t x509 = INT16_MAX;
int64_t x512 = 1LL;
int8_t x517 = 1;
static uint64_t x520 = UINT64_MAX;
int64_t t120 = 889LL;
uint8_t x531 = UINT8_MAX;
int64_t t125 = 223LL;
int32_t x548 = -1;
int32_t t126 = -7;
static uint8_t x557 = UINT8_MAX;
static uint16_t x559 = UINT16_MAX;
uint64_t x571 = 62303126578LLU;
static volatile int64_t x573 = 30LL;
int16_t x580 = INT16_MIN;
int16_t x582 = 1925;
static volatile int8_t x589 = -1;
static int8_t x592 = -1;
volatile uint64_t t135 = 121264043232203LLU;
int64_t x595 = -352143734414601LL;
volatile int64_t t136 = -778367891267LL;
static uint16_t x602 = 2162U;
uint8_t x614 = UINT8_MAX;
volatile int64_t t141 = -1235872149328912LL;
uint32_t x633 = UINT32_MAX;
int32_t x635 = INT32_MIN;
int8_t x640 = -4;
uint64_t t147 = 24387052755LLU;
uint64_t x646 = 127811949679028701LLU;
int16_t x648 = INT16_MIN;
volatile int32_t t153 = 30906011;
int8_t x670 = INT8_MIN;
int64_t x682 = -62LL;
uint8_t x684 = UINT8_MAX;
uint8_t x696 = UINT8_MAX;
int64_t x699 = -8665226842LL;
int32_t x701 = INT32_MAX;
int32_t x702 = INT32_MAX;
uint8_t x707 = 8U;
int16_t x709 = INT16_MIN;
int16_t x711 = INT16_MAX;
uint8_t x715 = UINT8_MAX;
int32_t x717 = INT32_MIN;
static uint8_t x726 = 1U;
volatile uint16_t x729 = 13587U;
static int64_t x731 = 335398487523916788LL;
static int64_t x736 = -1LL;
static int64_t x739 = INT64_MAX;
int8_t x748 = -1;
uint64_t t173 = 1118548193099883872LLU;
int16_t x754 = INT16_MAX;
int16_t x755 = INT16_MIN;
uint8_t x761 = 6U;
uint16_t x763 = 172U;
uint32_t x766 = UINT32_MAX;
volatile uint64_t t177 = 3293063362239621LLU;
uint16_t x771 = 61U;
static int8_t x774 = INT8_MIN;
static int32_t x778 = -25;
volatile uint32_t x779 = 100U;
int64_t x781 = 128LL;
int64_t t181 = -100LL;
uint32_t t183 = 16805U;
static int32_t x809 = -683920977;
static volatile int8_t x812 = INT8_MIN;
uint32_t t189 = 1440731U;
volatile int16_t x821 = 3939;
int8_t x823 = 33;
int32_t x826 = INT32_MIN;
uint16_t x840 = UINT16_MAX;
volatile int64_t t193 = 35275774930LL;
volatile uint64_t x843 = 133822404063774296LLU;
volatile int32_t t195 = -77;
static uint64_t x858 = UINT64_MAX;
volatile uint64_t x859 = 225502878890LLU;
int32_t x862 = -423905881;
uint64_t x864 = UINT64_MAX;
static int64_t x865 = -1LL;
int64_t t199 = 24405694LL;


void f0(void) {
    	static volatile int16_t x1 = -1;
	uint16_t x2 = UINT16_MAX;
	int8_t x3 = -1;
	volatile int8_t x4 = INT8_MAX;
	int32_t t0 = 5;

    t0 = (((x1/x2)%x3)/x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint64_t x5 = UINT64_MAX;
	static int32_t x7 = INT32_MIN;
	volatile uint64_t t1 = 9450067961594LLU;

    t1 = (((x5/x6)%x7)/x8);

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = INT8_MIN;
	static int16_t x10 = -13;
	int16_t x12 = -1;
	static volatile int32_t t2 = 605199265;

    t2 = (((x9/x10)%x11)/x12);

    if (t2 != -9) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	uint16_t x14 = UINT16_MAX;
	static int8_t x15 = -11;
	int8_t x16 = INT8_MIN;
	static volatile int32_t t3 = -1892;

    t3 = (((x13/x14)%x15)/x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 1698U;
	int64_t x18 = INT64_MAX;
	uint32_t x19 = UINT32_MAX;
	static volatile int64_t x20 = INT64_MIN;

    t4 = (((x17/x18)%x19)/x20);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x23 = -1;

    t5 = (((x21/x22)%x23)/x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 64454U;
	static int16_t x26 = INT16_MIN;
	static volatile int32_t x27 = INT32_MAX;
	static int16_t x28 = INT16_MIN;
	volatile uint32_t t6 = 1116400U;

    t6 = (((x25/x26)%x27)/x28);

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -1;
	int16_t x30 = INT16_MAX;
	int16_t x32 = INT16_MAX;
	volatile int32_t t7 = -11673;

    t7 = (((x29/x30)%x31)/x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x33 = UINT8_MAX;
	static int16_t x34 = 244;
	int64_t x35 = -531787818209LL;
	int8_t x36 = -1;

    t8 = (((x33/x34)%x35)/x36);

    if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	int16_t x38 = 4;
	uint64_t x39 = 891681LLU;
	volatile uint16_t x40 = 1786U;

    t9 = (((x37/x38)%x39)/x40);

    if (t9 != 54LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = 35494;
	static int16_t x42 = 3;
	int8_t x43 = -8;
	int64_t x44 = INT64_MIN;
	int64_t t10 = -602222193LL;

    t10 = (((x41/x42)%x43)/x44);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -1;
	volatile int64_t x46 = INT64_MIN;
	int16_t x47 = INT16_MAX;
	int32_t x48 = INT32_MAX;
	int64_t t11 = -1LL;

    t11 = (((x45/x46)%x47)/x48);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x49 = -1;
	int8_t x51 = -1;
	static int32_t x52 = INT32_MAX;
	int32_t t12 = 199;

    t12 = (((x49/x50)%x51)/x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MIN;
	static uint32_t x54 = 295555U;
	int16_t x55 = -51;
	volatile uint32_t t13 = 780966212U;

    t13 = (((x53/x54)%x55)/x56);

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MAX;
	uint32_t x58 = 1923U;
	static uint32_t x59 = UINT32_MAX;
	int8_t x60 = INT8_MAX;

    t14 = (((x57/x58)%x59)/x60);

    if (t14 != 8793U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = UINT64_MAX;
	static volatile int8_t x64 = INT8_MIN;
	static uint64_t t15 = 426889445716942LLU;

    t15 = (((x61/x62)%x63)/x64);

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x67 = 15242U;
	static int8_t x68 = -1;

    t16 = (((x65/x66)%x67)/x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x69 = 3U;
	int32_t x70 = -224113820;
	volatile int64_t x72 = INT64_MAX;
	int64_t t17 = -56LL;

    t17 = (((x69/x70)%x71)/x72);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = UINT8_MAX;
	static volatile int32_t x75 = INT32_MIN;
	int64_t t18 = -910358487LL;

    t18 = (((x73/x74)%x75)/x76);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x78 = INT64_MIN;
	volatile int8_t x79 = INT8_MIN;

    t19 = (((x77/x78)%x79)/x80);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = -1;
	uint16_t x82 = UINT16_MAX;
	uint32_t x83 = 2733130U;
	uint32_t x84 = UINT32_MAX;
	volatile uint32_t t20 = 1214519U;

    t20 = (((x81/x82)%x83)/x84);

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x85 = INT16_MIN;
	int8_t x86 = INT8_MIN;
	static uint64_t t21 = 8027LLU;

    t21 = (((x85/x86)%x87)/x88);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = 0;
	static volatile int32_t x90 = 13787555;
	static uint16_t x91 = UINT16_MAX;
	int32_t x92 = INT32_MIN;
	volatile int32_t t22 = 2327;

    t22 = (((x89/x90)%x91)/x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x94 = -1;
	volatile int64_t x95 = INT64_MAX;
	volatile int32_t x96 = INT32_MIN;
	int64_t t23 = -38091213LL;

    t23 = (((x93/x94)%x95)/x96);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x97 = INT8_MAX;
	static int8_t x98 = INT8_MIN;
	volatile int8_t x99 = 1;
	int8_t x100 = -1;
	volatile int32_t t24 = 1;

    t24 = (((x97/x98)%x99)/x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = 1593733485193748LL;
	uint32_t x102 = 353760U;
	static volatile int64_t x103 = -1LL;
	int32_t x104 = INT32_MIN;
	static int64_t t25 = -940577687LL;

    t25 = (((x101/x102)%x103)/x104);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x106 = 317U;
	int32_t x107 = 6276;
	uint32_t t26 = 194U;

    t26 = (((x105/x106)%x107)/x108);

    if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x109 = UINT64_MAX;
	volatile uint8_t x110 = UINT8_MAX;
	uint64_t x111 = UINT64_MAX;
	volatile uint64_t t27 = 765LLU;

    t27 = (((x109/x110)%x111)/x112);

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = INT32_MAX;
	int32_t x115 = INT32_MIN;
	static volatile uint16_t x116 = 5967U;
	uint64_t t28 = 3124512690319440LLU;

    t28 = (((x113/x114)%x115)/x116);

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x117 = UINT16_MAX;
	int64_t x118 = INT64_MIN;

    t29 = (((x117/x118)%x119)/x120);

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x121 = UINT32_MAX;
	uint16_t x122 = UINT16_MAX;
	int32_t x124 = -24;
	uint32_t t30 = 878U;

    t30 = (((x121/x122)%x123)/x124);

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x126 = 1U;
	uint64_t x127 = 221135789104830LLU;
	int8_t x128 = INT8_MIN;
	uint64_t t31 = 6699376939LLU;

    t31 = (((x125/x126)%x127)/x128);

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x130 = 2936748;
	int32_t x131 = -106;
	uint64_t x132 = 3070518485990LLU;

    t32 = (((x129/x130)%x131)/x132);

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x136 = INT8_MIN;
	uint32_t t33 = 404477U;

    t33 = (((x133/x134)%x135)/x136);

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x137 = 4632U;
	int16_t x138 = -1;
	uint16_t x139 = 11030U;
	int16_t x140 = -1;

    t34 = (((x137/x138)%x139)/x140);

    if (t34 != 4632) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x142 = 2635359266049432LLU;
	static int32_t x144 = -1;
	static volatile uint64_t t35 = 466959001860035LLU;

    t35 = (((x141/x142)%x143)/x144);

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x146 = INT16_MIN;
	int8_t x147 = -32;
	int32_t x148 = INT32_MIN;
	static int32_t t36 = -7871912;

    t36 = (((x145/x146)%x147)/x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MIN;
	static uint64_t x150 = UINT64_MAX;
	uint32_t x151 = UINT32_MAX;
	static int8_t x152 = INT8_MAX;

    t37 = (((x149/x150)%x151)/x152);

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MIN;
	int16_t x155 = INT16_MIN;
	int16_t x156 = -941;
	static volatile int32_t t38 = -1016832;

    t38 = (((x153/x154)%x155)/x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x161 = 3;
	int8_t x162 = INT8_MAX;
	int64_t x164 = INT64_MIN;
	static volatile int64_t t39 = -17058966316LL;

    t39 = (((x161/x162)%x163)/x164);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x165 = 3623U;
	static volatile int16_t x167 = -1;
	int64_t x168 = -247519607853674LL;
	int64_t t40 = -6LL;

    t40 = (((x165/x166)%x167)/x168);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x169 = 1163168917968LLU;
	uint32_t x170 = UINT32_MAX;
	static int8_t x172 = INT8_MIN;

    t41 = (((x169/x170)%x171)/x172);

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x173 = INT8_MIN;
	int8_t x174 = INT8_MIN;
	int32_t x175 = INT32_MIN;
	int64_t x176 = 5792794364527099LL;
	static volatile int64_t t42 = -11770937863013LL;

    t42 = (((x173/x174)%x175)/x176);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x183 = 1U;
	volatile int32_t t43 = -674127;

    t43 = (((x181/x182)%x183)/x184);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint8_t x185 = UINT8_MAX;
	uint64_t x187 = UINT64_MAX;
	static int64_t x188 = 99479388289820LL;
	static uint64_t t44 = 7LLU;

    t44 = (((x185/x186)%x187)/x188);

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x193 = INT32_MIN;
	uint16_t x194 = UINT16_MAX;
	static volatile int64_t x195 = 52884679594LL;
	int16_t x196 = 2705;
	volatile int64_t t45 = 551944660607218LL;

    t45 = (((x193/x194)%x195)/x196);

    if (t45 != -12LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x197 = INT8_MIN;
	volatile int8_t x198 = INT8_MIN;
	volatile int16_t x199 = INT16_MAX;
	volatile int64_t t46 = 18LL;

    t46 = (((x197/x198)%x199)/x200);

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x201 = INT16_MIN;
	uint32_t x202 = 221768888U;
	volatile int32_t x203 = INT32_MAX;
	volatile int16_t x204 = INT16_MIN;
	volatile uint32_t t47 = 1U;

    t47 = (((x201/x202)%x203)/x204);

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int64_t x205 = -1LL;
	int32_t x206 = INT32_MIN;
	volatile uint32_t x207 = 498U;
	int8_t x208 = -20;
	volatile int64_t t48 = 33401788634LL;

    t48 = (((x205/x206)%x207)/x208);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x209 = -1612;
	static volatile int64_t x210 = INT64_MIN;
	uint8_t x211 = UINT8_MAX;
	static volatile int32_t x212 = INT32_MIN;

    t49 = (((x209/x210)%x211)/x212);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x213 = INT16_MAX;
	uint32_t x214 = 2U;
	uint64_t x215 = UINT64_MAX;
	int32_t x216 = 370;
	volatile uint64_t t50 = 19367LLU;

    t50 = (((x213/x214)%x215)/x216);

    if (t50 != 44LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x217 = -154304;
	int16_t x219 = INT16_MAX;
	int16_t x220 = -5147;
	uint32_t t51 = 226U;

    t51 = (((x217/x218)%x219)/x220);

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x221 = 114U;
	volatile uint64_t x222 = 22285LLU;
	int8_t x223 = -1;
	int16_t x224 = 228;
	static uint64_t t52 = 202945261LLU;

    t52 = (((x221/x222)%x223)/x224);

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x225 = INT8_MAX;
	uint16_t x227 = 361U;
	static int64_t x228 = INT64_MIN;

    t53 = (((x225/x226)%x227)/x228);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x229 = INT8_MAX;
	static int16_t x231 = INT16_MAX;
	static uint16_t x232 = UINT16_MAX;
	static int32_t t54 = 98136;

    t54 = (((x229/x230)%x231)/x232);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x234 = 1;
	int64_t t55 = -236168896986190329LL;

    t55 = (((x233/x234)%x235)/x236);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x237 = INT8_MIN;
	static uint64_t x238 = UINT64_MAX;
	static int64_t x239 = 1229LL;
	int64_t x240 = INT64_MIN;
	uint64_t t56 = 21329783184033242LLU;

    t56 = (((x237/x238)%x239)/x240);

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x245 = -1;
	volatile uint8_t x246 = 27U;
	static int64_t x247 = INT64_MIN;
	int64_t x248 = -1LL;

    t57 = (((x245/x246)%x247)/x248);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x250 = -1283186183LL;
	volatile uint8_t x251 = 1U;
	uint16_t x252 = 1788U;
	static volatile int64_t t58 = 19727388974880454LL;

    t58 = (((x249/x250)%x251)/x252);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x253 = INT32_MIN;
	uint16_t x254 = 20U;
	uint8_t x255 = UINT8_MAX;
	static uint64_t x256 = 586930903LLU;
	uint64_t t59 = 61759019329199LLU;

    t59 = (((x253/x254)%x255)/x256);

    if (t59 != 31429157979LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x257 = INT64_MIN;
	volatile uint8_t x258 = 7U;
	int32_t x259 = INT32_MAX;
	volatile int8_t x260 = INT8_MAX;
	int64_t t60 = -8196746275691019LL;

    t60 = (((x257/x258)%x259)/x260);

    if (t60 != -14493702LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x261 = UINT16_MAX;
	static uint32_t x262 = 81U;
	static uint16_t x263 = 1U;
	volatile int16_t x264 = INT16_MIN;
	uint32_t t61 = 143696U;

    t61 = (((x261/x262)%x263)/x264);

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x266 = 10458U;
	int64_t x267 = -1LL;
	static uint8_t x268 = UINT8_MAX;
	static volatile int64_t t62 = -6416401522LL;

    t62 = (((x265/x266)%x267)/x268);

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x269 = 17U;
	int16_t x270 = 149;
	volatile int64_t t63 = -4616505LL;

    t63 = (((x269/x270)%x271)/x272);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x277 = INT32_MIN;
	int8_t x278 = INT8_MIN;

    t64 = (((x277/x278)%x279)/x280);

    if (t64 != 840LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x281 = INT32_MIN;
	uint64_t x283 = 8691972073428530298LLU;
	volatile uint64_t t65 = 10LLU;

    t65 = (((x281/x282)%x283)/x284);

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x285 = UINT32_MAX;
	uint64_t x287 = 6LLU;
	volatile uint64_t t66 = 7842996LLU;

    t66 = (((x285/x286)%x287)/x288);

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x289 = -1;
	int32_t x290 = -290980;
	int8_t x292 = INT8_MAX;

    t67 = (((x289/x290)%x291)/x292);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x293 = 25U;
	int8_t x294 = -1;
	int16_t x295 = -1;
	int32_t x296 = INT32_MAX;
	int32_t t68 = 506;

    t68 = (((x293/x294)%x295)/x296);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x298 = INT8_MIN;
	static volatile int32_t x299 = INT32_MAX;
	int64_t x300 = INT64_MAX;
	int64_t t69 = 671316331LL;

    t69 = (((x297/x298)%x299)/x300);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x301 = -1;
	volatile int32_t x302 = INT32_MAX;
	int8_t x303 = -7;
	uint64_t x304 = UINT64_MAX;

    t70 = (((x301/x302)%x303)/x304);

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x305 = 28U;
	volatile int32_t x306 = 13;
	uint64_t x308 = 1233LLU;
	volatile uint64_t t71 = 5882528465275621975LLU;

    t71 = (((x305/x306)%x307)/x308);

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x309 = INT32_MIN;
	static int32_t x310 = -3888;
	static uint64_t x311 = UINT64_MAX;
	uint32_t x312 = 43105170U;
	uint64_t t72 = 15765499LLU;

    t72 = (((x309/x310)%x311)/x312);

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x315 = -908244903;
	int16_t x316 = INT16_MIN;
	volatile uint64_t t73 = 6922309442211617500LLU;

    t73 = (((x313/x314)%x315)/x316);

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x317 = 0;
	uint32_t x318 = 117652522U;
	static int32_t x319 = -2575530;
	static int16_t x320 = -1;
	static volatile uint32_t t74 = 16575U;

    t74 = (((x317/x318)%x319)/x320);

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x321 = INT16_MIN;
	volatile int16_t x322 = INT16_MIN;
	int64_t x323 = INT64_MIN;
	volatile int8_t x324 = -1;
	static int64_t t75 = 2LL;

    t75 = (((x321/x322)%x323)/x324);

    if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x325 = UINT16_MAX;
	static int64_t x326 = -16197944961327LL;
	int16_t x327 = INT16_MAX;
	uint64_t x328 = UINT64_MAX;
	uint64_t t76 = 3462877354461976LLU;

    t76 = (((x325/x326)%x327)/x328);

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x329 = INT64_MIN;
	uint8_t x330 = 23U;
	int64_t x331 = 11169LL;
	static uint8_t x332 = 3U;
	int64_t t77 = 34728054422LL;

    t77 = (((x329/x330)%x331)/x332);

    if (t77 != -2397LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x333 = INT64_MIN;
	volatile int32_t x334 = INT32_MIN;
	static int8_t x335 = INT8_MIN;
	volatile uint16_t x336 = 98U;
	volatile int64_t t78 = 773377892457956244LL;

    t78 = (((x333/x334)%x335)/x336);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x337 = -3511;
	static int16_t x338 = INT16_MIN;
	int32_t x339 = INT32_MAX;
	volatile int64_t x340 = -6340000832LL;
	volatile int64_t t79 = 42274752270900LL;

    t79 = (((x337/x338)%x339)/x340);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x342 = 15962838LL;
	volatile uint16_t x343 = 923U;
	volatile int64_t t80 = -247933LL;

    t80 = (((x341/x342)%x343)/x344);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x345 = 14U;
	uint32_t x347 = UINT32_MAX;
	static uint64_t x348 = UINT64_MAX;
	uint64_t t81 = 16593269510LLU;

    t81 = (((x345/x346)%x347)/x348);

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x353 = 28354787801451LL;
	int64_t x354 = -1LL;
	int32_t x355 = INT32_MIN;
	int16_t x356 = INT16_MIN;
	int64_t t82 = 132683572LL;

    t82 = (((x353/x354)%x355)/x356);

    if (t82 != 47643LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x358 = INT8_MAX;
	int32_t x359 = -118;
	static int8_t x360 = INT8_MIN;

    t83 = (((x357/x358)%x359)/x360);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x361 = INT32_MIN;
	volatile int8_t x362 = INT8_MIN;
	int64_t x363 = 104457632691LL;
	uint16_t x364 = UINT16_MAX;
	volatile int64_t t84 = -2102053583LL;

    t84 = (((x361/x362)%x363)/x364);

    if (t84 != 256LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x365 = 3199921734219636LLU;
	int64_t x366 = 665943543839LL;
	int64_t x367 = INT64_MIN;
	int16_t x368 = INT16_MAX;

    t85 = (((x365/x366)%x367)/x368);

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x369 = -1;
	int16_t x370 = INT16_MIN;
	static volatile uint64_t x371 = UINT64_MAX;
	uint8_t x372 = 1U;
	uint64_t t86 = 1061080LLU;

    t86 = (((x369/x370)%x371)/x372);

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x377 = 11682739U;
	uint64_t x378 = UINT64_MAX;
	uint64_t x379 = 10222LLU;
	uint64_t t87 = 18039646774LLU;

    t87 = (((x377/x378)%x379)/x380);

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x382 = 449U;
	int16_t x383 = INT16_MAX;
	int8_t x384 = INT8_MAX;
	static uint32_t t88 = 13417962U;

    t88 = (((x381/x382)%x383)/x384);

    if (t88 != 239U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x385 = UINT64_MAX;
	static volatile uint64_t x387 = 998770043727LLU;
	uint8_t x388 = 10U;

    t89 = (((x385/x386)%x387)/x388);

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x390 = 308907577221LL;
	volatile uint8_t x391 = UINT8_MAX;
	int8_t x392 = -1;
	volatile int64_t t90 = 481LL;

    t90 = (((x389/x390)%x391)/x392);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x393 = 1001U;
	int32_t x394 = INT32_MIN;
	int8_t x395 = -56;
	int64_t x396 = INT64_MIN;
	volatile int64_t t91 = 6179170784498376LL;

    t91 = (((x393/x394)%x395)/x396);

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x397 = 88U;
	int32_t x398 = INT32_MAX;
	uint32_t x400 = 4082740U;
	static volatile uint32_t t92 = 2U;

    t92 = (((x397/x398)%x399)/x400);

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x401 = INT8_MAX;
	int8_t x402 = -1;
	int8_t x403 = -1;
	uint8_t x404 = UINT8_MAX;
	static int32_t t93 = -31770;

    t93 = (((x401/x402)%x403)/x404);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x405 = 1U;
	volatile int64_t x406 = INT64_MIN;
	static int8_t x407 = INT8_MIN;
	static uint16_t x408 = 452U;
	static volatile int64_t t94 = 1304353447277LL;

    t94 = (((x405/x406)%x407)/x408);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x409 = INT32_MIN;
	static uint64_t x410 = UINT64_MAX;
	static volatile int8_t x412 = -1;
	volatile uint64_t t95 = 527505876536LLU;

    t95 = (((x409/x410)%x411)/x412);

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x413 = 21U;
	int32_t x415 = -1;
	int16_t x416 = INT16_MIN;
	volatile uint64_t t96 = 4983772LLU;

    t96 = (((x413/x414)%x415)/x416);

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x417 = INT64_MIN;
	uint16_t x419 = UINT16_MAX;
	int32_t x420 = -31;
	volatile int64_t t97 = -24858237128065LL;

    t97 = (((x417/x418)%x419)/x420);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x421 = 250061784275LLU;
	uint16_t x422 = 156U;
	int32_t x423 = 287;
	volatile int32_t x424 = -338;
	volatile uint64_t t98 = 113707095LLU;

    t98 = (((x421/x422)%x423)/x424);

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x425 = 23U;
	int64_t x426 = -229950251LL;
	volatile int64_t x427 = INT64_MAX;
	static uint32_t x428 = 52963U;

    t99 = (((x425/x426)%x427)/x428);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x430 = INT32_MIN;
	int16_t x431 = INT16_MIN;

    t100 = (((x429/x430)%x431)/x432);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x433 = -1;
	int8_t x434 = 46;

    t101 = (((x433/x434)%x435)/x436);

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x437 = -1;
	int8_t x438 = INT8_MAX;
	int16_t x439 = INT16_MIN;

    t102 = (((x437/x438)%x439)/x440);

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x445 = INT64_MAX;
	int16_t x446 = INT16_MAX;
	uint8_t x447 = UINT8_MAX;
	uint8_t x448 = 16U;

    t103 = (((x445/x446)%x447)/x448);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint16_t x449 = 10U;
	uint8_t x450 = 86U;
	int32_t x451 = INT32_MAX;
	volatile int8_t x452 = -1;
	static volatile int32_t t104 = 275;

    t104 = (((x449/x450)%x451)/x452);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x454 = INT16_MAX;
	uint16_t x455 = 1U;
	volatile int16_t x456 = INT16_MIN;
	uint64_t t105 = 3291018259LLU;

    t105 = (((x453/x454)%x455)/x456);

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x458 = -1;
	volatile int64_t x459 = -1LL;
	int32_t x460 = INT32_MIN;
	volatile uint64_t t106 = 0LLU;

    t106 = (((x457/x458)%x459)/x460);

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x461 = 0U;
	static volatile int16_t x462 = INT16_MIN;
	volatile int16_t x463 = INT16_MAX;
	uint64_t x464 = 106872245687248802LLU;

    t107 = (((x461/x462)%x463)/x464);

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x465 = INT16_MIN;
	int8_t x466 = INT8_MIN;
	int64_t x467 = -1LL;
	int16_t x468 = INT16_MIN;
	int64_t t108 = 13613008178LL;

    t108 = (((x465/x466)%x467)/x468);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x469 = INT32_MIN;
	static int32_t x470 = INT32_MAX;
	int16_t x471 = INT16_MAX;
	volatile int16_t x472 = INT16_MAX;
	volatile int32_t t109 = -2;

    t109 = (((x469/x470)%x471)/x472);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x473 = INT8_MIN;
	int32_t x474 = INT32_MIN;
	int64_t x475 = -429446960588LL;
	int64_t x476 = INT64_MIN;
	volatile int64_t t110 = -264296291565LL;

    t110 = (((x473/x474)%x475)/x476);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint16_t x477 = 33U;
	int8_t x478 = INT8_MIN;
	int8_t x479 = 1;
	static int16_t x480 = INT16_MIN;

    t111 = (((x477/x478)%x479)/x480);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x481 = INT64_MAX;
	int64_t x482 = INT64_MIN;
	static uint16_t x483 = UINT16_MAX;
	static int64_t t112 = 1999252105LL;

    t112 = (((x481/x482)%x483)/x484);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x485 = INT64_MIN;
	int64_t x486 = INT64_MIN;
	uint16_t x487 = UINT16_MAX;
	int32_t x488 = 3357;
	volatile int64_t t113 = -32586733445LL;

    t113 = (((x485/x486)%x487)/x488);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x489 = -1LL;
	static volatile int16_t x490 = -1;
	int64_t t114 = 3308136882739824LL;

    t114 = (((x489/x490)%x491)/x492);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x493 = -1;
	int16_t x494 = INT16_MIN;
	uint16_t x496 = UINT16_MAX;
	uint32_t t115 = 4931U;

    t115 = (((x493/x494)%x495)/x496);

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x497 = 14;
	int32_t x498 = INT32_MIN;
	volatile int16_t x499 = -1300;
	int32_t x500 = INT32_MIN;
	int32_t t116 = 220613845;

    t116 = (((x497/x498)%x499)/x500);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x502 = -236021;
	int8_t x504 = INT8_MIN;
	volatile int32_t t117 = -4;

    t117 = (((x501/x502)%x503)/x504);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x510 = 18;
	static uint64_t x511 = 511LLU;
	static uint64_t t118 = 20LLU;

    t118 = (((x509/x510)%x511)/x512);

    if (t118 != 287LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x518 = INT64_MIN;
	int8_t x519 = -36;
	static volatile uint64_t t119 = 1LLU;

    t119 = (((x517/x518)%x519)/x520);

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x521 = INT64_MIN;
	uint8_t x522 = UINT8_MAX;
	int8_t x523 = INT8_MAX;
	uint8_t x524 = 67U;

    t120 = (((x521/x522)%x523)/x524);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x525 = 0U;
	uint8_t x526 = 3U;
	static uint16_t x527 = 1709U;
	int8_t x528 = 4;
	int32_t t121 = 62;

    t121 = (((x525/x526)%x527)/x528);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x529 = INT16_MIN;
	static volatile int64_t x530 = 26811211848373749LL;
	uint8_t x532 = 12U;
	int64_t t122 = -86120601824LL;

    t122 = (((x529/x530)%x531)/x532);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x533 = UINT32_MAX;
	static int16_t x534 = INT16_MIN;
	uint16_t x535 = 5U;
	int64_t x536 = INT64_MAX;
	volatile int64_t t123 = -1LL;

    t123 = (((x533/x534)%x535)/x536);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x537 = INT64_MIN;
	volatile uint32_t x538 = UINT32_MAX;
	int16_t x539 = INT16_MIN;
	int64_t x540 = -1LL;
	int64_t t124 = -449LL;

    t124 = (((x537/x538)%x539)/x540);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x541 = INT32_MIN;
	int32_t x542 = INT32_MIN;
	uint16_t x543 = 67U;
	int64_t x544 = INT64_MIN;

    t125 = (((x541/x542)%x543)/x544);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x545 = INT32_MIN;
	static int32_t x546 = INT32_MIN;
	int8_t x547 = INT8_MIN;

    t126 = (((x545/x546)%x547)/x548);

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x549 = -1616508LL;
	int32_t x550 = 7;
	int32_t x551 = INT32_MIN;
	static uint32_t x552 = 19233142U;
	static int64_t t127 = -1012376LL;

    t127 = (((x549/x550)%x551)/x552);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x553 = INT8_MAX;
	static volatile int32_t x554 = -1;
	int32_t x555 = INT32_MIN;
	int64_t x556 = -1LL;
	volatile int64_t t128 = -51839LL;

    t128 = (((x553/x554)%x555)/x556);

    if (t128 != 127LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x558 = 49487004U;
	uint16_t x560 = 4U;
	uint32_t t129 = 51224083U;

    t129 = (((x557/x558)%x559)/x560);

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x561 = 10;
	static int64_t x562 = INT64_MIN;
	int64_t x563 = INT64_MAX;
	int16_t x564 = INT16_MIN;
	int64_t t130 = -703LL;

    t130 = (((x561/x562)%x563)/x564);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int8_t x569 = INT8_MIN;
	int64_t x570 = INT64_MIN;
	static uint16_t x572 = UINT16_MAX;
	uint64_t t131 = 704763195LLU;

    t131 = (((x569/x570)%x571)/x572);

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x574 = 19318115LLU;
	uint16_t x575 = 23U;
	int8_t x576 = INT8_MIN;
	static volatile uint64_t t132 = 415804601810480147LLU;

    t132 = (((x573/x574)%x575)/x576);

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x577 = -14;
	int64_t x578 = INT64_MIN;
	int16_t x579 = INT16_MIN;
	volatile int64_t t133 = 5818LL;

    t133 = (((x577/x578)%x579)/x580);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int8_t x581 = INT8_MIN;
	int8_t x583 = 41;
	int32_t x584 = INT32_MAX;
	int32_t t134 = 694;

    t134 = (((x581/x582)%x583)/x584);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x590 = -488;
	uint64_t x591 = 2154895943126LLU;

    t135 = (((x589/x590)%x591)/x592);

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x593 = UINT16_MAX;
	static int8_t x594 = INT8_MIN;
	int32_t x596 = -1;

    t136 = (((x593/x594)%x595)/x596);

    if (t136 != 511LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x597 = 26;
	int64_t x598 = INT64_MIN;
	uint32_t x599 = 2670U;
	int32_t x600 = INT32_MIN;
	volatile int64_t t137 = 7365829LL;

    t137 = (((x597/x598)%x599)/x600);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x601 = INT8_MIN;
	static volatile int8_t x603 = -1;
	int8_t x604 = INT8_MIN;
	volatile int32_t t138 = 0;

    t138 = (((x601/x602)%x603)/x604);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint16_t x605 = 157U;
	int32_t x606 = 171;
	uint8_t x607 = 35U;
	static int64_t x608 = INT64_MIN;
	volatile int64_t t139 = -41129LL;

    t139 = (((x605/x606)%x607)/x608);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x609 = INT16_MIN;
	int8_t x610 = INT8_MAX;
	static volatile uint16_t x611 = UINT16_MAX;
	int16_t x612 = INT16_MIN;
	int32_t t140 = 3167;

    t140 = (((x609/x610)%x611)/x612);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x613 = 68U;
	int64_t x615 = -809214649293545129LL;
	uint32_t x616 = UINT32_MAX;

    t141 = (((x613/x614)%x615)/x616);

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x617 = 0U;
	volatile int64_t x618 = INT64_MAX;
	volatile int8_t x619 = INT8_MIN;
	uint16_t x620 = 645U;
	static int64_t t142 = 34037867118827LL;

    t142 = (((x617/x618)%x619)/x620);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x621 = -1LL;
	int32_t x622 = INT32_MIN;
	static int32_t x623 = INT32_MAX;
	static uint64_t x624 = 925884502609617861LLU;
	volatile uint64_t t143 = 13926179LLU;

    t143 = (((x621/x622)%x623)/x624);

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x625 = 425909U;
	volatile int16_t x626 = INT16_MAX;
	volatile int64_t x627 = INT64_MAX;
	volatile uint8_t x628 = UINT8_MAX;
	volatile int64_t t144 = -42226433LL;

    t144 = (((x625/x626)%x627)/x628);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x629 = 306025;
	volatile uint8_t x630 = 109U;
	int8_t x631 = INT8_MIN;
	int8_t x632 = 11;
	static int32_t t145 = 3922;

    t145 = (((x629/x630)%x631)/x632);

    if (t145 != 10) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x634 = INT16_MAX;
	volatile int16_t x636 = INT16_MIN;
	volatile uint32_t t146 = 5637069U;

    t146 = (((x633/x634)%x635)/x636);

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x637 = INT64_MAX;
	static uint64_t x638 = UINT64_MAX;
	int8_t x639 = -1;

    t147 = (((x637/x638)%x639)/x640);

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x641 = INT32_MIN;
	int64_t x642 = -17114296009LL;
	uint32_t x643 = 14U;
	int64_t x644 = INT64_MIN;
	int64_t t148 = 72149091LL;

    t148 = (((x641/x642)%x643)/x644);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint64_t x645 = 1209938970414LLU;
	int64_t x647 = INT64_MIN;
	volatile uint64_t t149 = 3LLU;

    t149 = (((x645/x646)%x647)/x648);

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x649 = INT8_MIN;
	volatile int64_t x650 = INT64_MIN;
	uint64_t x651 = UINT64_MAX;
	int32_t x652 = INT32_MIN;
	uint64_t t150 = 13LLU;

    t150 = (((x649/x650)%x651)/x652);

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x653 = 66845842U;
	int8_t x654 = 3;
	volatile uint64_t x655 = 65156974873LLU;
	volatile int32_t x656 = INT32_MAX;
	uint64_t t151 = 567838355574476LLU;

    t151 = (((x653/x654)%x655)/x656);

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x661 = 0;
	int16_t x662 = INT16_MAX;
	static int8_t x663 = -17;
	static int8_t x664 = 2;
	int32_t t152 = 235;

    t152 = (((x661/x662)%x663)/x664);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x665 = -1;
	int32_t x666 = INT32_MAX;
	uint16_t x667 = 7386U;
	static int16_t x668 = INT16_MIN;

    t153 = (((x665/x666)%x667)/x668);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x669 = 244U;
	uint8_t x671 = UINT8_MAX;
	static volatile int16_t x672 = -1;
	uint32_t t154 = 0U;

    t154 = (((x669/x670)%x671)/x672);

    if (t154 != 0U) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x673 = INT8_MIN;
	static volatile int32_t x674 = INT32_MIN;
	int8_t x675 = INT8_MIN;
	static int64_t x676 = INT64_MAX;
	volatile int64_t t155 = -1634797326748954134LL;

    t155 = (((x673/x674)%x675)/x676);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x681 = 0U;
	static volatile uint64_t x683 = 28783LLU;
	uint64_t t156 = 7979100811052LLU;

    t156 = (((x681/x682)%x683)/x684);

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x685 = -1;
	int16_t x686 = -6;
	int32_t x687 = INT32_MIN;
	int16_t x688 = INT16_MIN;
	int32_t t157 = -1;

    t157 = (((x685/x686)%x687)/x688);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x689 = 1520040407367011LL;
	uint32_t x690 = UINT32_MAX;
	static uint8_t x691 = 18U;
	int16_t x692 = INT16_MIN;
	static volatile int64_t t158 = -26654131376689LL;

    t158 = (((x689/x690)%x691)/x692);

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x693 = INT32_MIN;
	volatile int64_t x694 = 6869910LL;
	static uint8_t x695 = UINT8_MAX;
	volatile int64_t t159 = -3089915721145LL;

    t159 = (((x693/x694)%x695)/x696);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x697 = 104064U;
	int64_t x698 = INT64_MIN;
	int32_t x700 = INT32_MIN;
	int64_t t160 = -2125LL;

    t160 = (((x697/x698)%x699)/x700);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x703 = -2;
	volatile int64_t x704 = -1LL;
	int64_t t161 = -6511950976131LL;

    t161 = (((x701/x702)%x703)/x704);

    if (t161 != -1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x705 = INT64_MIN;
	int64_t x706 = -14LL;
	volatile int64_t x708 = -702200LL;
	int64_t t162 = -66LL;

    t162 = (((x705/x706)%x707)/x708);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x710 = 47;
	volatile int32_t x712 = INT32_MAX;
	static int32_t t163 = 26468729;

    t163 = (((x709/x710)%x711)/x712);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x713 = INT16_MAX;
	int8_t x714 = -6;
	static int8_t x716 = INT8_MIN;
	volatile int32_t t164 = -13918;

    t164 = (((x713/x714)%x715)/x716);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint16_t x718 = 1929U;
	static int64_t x719 = -1LL;
	static volatile int64_t x720 = INT64_MIN;
	volatile int64_t t165 = 1962811620157989861LL;

    t165 = (((x717/x718)%x719)/x720);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x721 = INT16_MIN;
	uint8_t x722 = UINT8_MAX;
	static volatile uint64_t x723 = UINT64_MAX;
	uint16_t x724 = 3382U;
	static volatile uint64_t t166 = 3046938128LLU;

    t166 = (((x721/x722)%x723)/x724);

    if (t166 != 5454389140659240LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x725 = 411938854772LLU;
	int32_t x727 = INT32_MIN;
	int64_t x728 = 713584815619479LL;
	volatile uint64_t t167 = 1LLU;

    t167 = (((x725/x726)%x727)/x728);

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint16_t x730 = 10378U;
	static volatile uint8_t x732 = 27U;
	volatile int64_t t168 = -108LL;

    t168 = (((x729/x730)%x731)/x732);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x733 = 7U;
	int8_t x734 = 6;
	static uint16_t x735 = 26U;
	volatile int64_t t169 = -595069930087772LL;

    t169 = (((x733/x734)%x735)/x736);

    if (t169 != -1LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x737 = 697U;
	static volatile uint8_t x738 = 13U;
	int64_t x740 = -2793715457563LL;
	volatile int64_t t170 = 102928LL;

    t170 = (((x737/x738)%x739)/x740);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x741 = -3;
	int8_t x742 = -1;
	int32_t x743 = INT32_MAX;
	int16_t x744 = INT16_MIN;
	int32_t t171 = -153673;

    t171 = (((x741/x742)%x743)/x744);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint16_t x745 = 7948U;
	uint64_t x746 = 29964736LLU;
	int64_t x747 = INT64_MIN;
	uint64_t t172 = 1972063603271657LLU;

    t172 = (((x745/x746)%x747)/x748);

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x749 = -87165;
	uint64_t x750 = UINT64_MAX;
	int16_t x751 = INT16_MIN;
	volatile int32_t x752 = -1;

    t173 = (((x749/x750)%x751)/x752);

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x753 = 2142U;
	int16_t x756 = -1;
	volatile uint32_t t174 = 140U;

    t174 = (((x753/x754)%x755)/x756);

    if (t174 != 0U) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x757 = 18329678751287361LL;
	uint64_t x758 = 3211LLU;
	volatile int64_t x759 = -53123LL;
	static int8_t x760 = -4;
	static uint64_t t175 = 15064LLU;

    t175 = (((x757/x758)%x759)/x760);

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x762 = -529823517238LL;
	volatile int8_t x764 = INT8_MAX;
	static volatile int64_t t176 = 3594LL;

    t176 = (((x761/x762)%x763)/x764);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x765 = -1;
	static volatile uint64_t x767 = UINT64_MAX;
	uint16_t x768 = 5U;

    t177 = (((x765/x766)%x767)/x768);

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x769 = INT16_MIN;
	uint64_t x770 = 5188941290LLU;
	volatile uint8_t x772 = UINT8_MAX;
	volatile uint64_t t178 = 10156LLU;

    t178 = (((x769/x770)%x771)/x772);

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x773 = INT32_MIN;
	int32_t x775 = INT32_MAX;
	int8_t x776 = INT8_MIN;
	volatile int32_t t179 = -13465002;

    t179 = (((x773/x774)%x775)/x776);

    if (t179 != -131072) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x777 = 27U;
	uint8_t x780 = UINT8_MAX;
	uint32_t t180 = 184915655U;

    t180 = (((x777/x778)%x779)/x780);

    if (t180 != 0U) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x782 = 6;
	int64_t x783 = INT64_MIN;
	uint32_t x784 = 2065184035U;

    t181 = (((x781/x782)%x783)/x784);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x785 = INT64_MIN;
	int32_t x786 = INT32_MAX;
	uint8_t x787 = UINT8_MAX;
	int32_t x788 = 12;
	volatile int64_t t182 = -573439136496LL;

    t182 = (((x785/x786)%x787)/x788);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x789 = 17169U;
	int32_t x790 = INT32_MIN;
	static uint32_t x791 = 16U;
	uint8_t x792 = 17U;

    t183 = (((x789/x790)%x791)/x792);

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x793 = INT16_MIN;
	static uint32_t x794 = 3568013U;
	int16_t x795 = INT16_MIN;
	int16_t x796 = -678;
	static uint32_t t184 = 402175322U;

    t184 = (((x793/x794)%x795)/x796);

    if (t184 != 0U) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x801 = INT32_MAX;
	int32_t x802 = -13;
	int16_t x803 = INT16_MIN;
	int32_t x804 = -1;
	int32_t t185 = -10;

    t185 = (((x801/x802)%x803)/x804);

    if (t185 != 7561) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x805 = 51322254202182LLU;
	int16_t x806 = 161;
	int8_t x807 = INT8_MAX;
	int64_t x808 = -248015LL;
	uint64_t t186 = 181976631266616800LLU;

    t186 = (((x805/x806)%x807)/x808);

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x810 = 216819268LLU;
	int16_t x811 = INT16_MAX;
	uint64_t t187 = 1093LLU;

    t187 = (((x809/x810)%x811)/x812);

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x813 = INT64_MIN;
	static int16_t x814 = INT16_MIN;
	int16_t x815 = -1;
	int64_t x816 = 4148865971LL;
	volatile int64_t t188 = -94558972616450LL;

    t188 = (((x813/x814)%x815)/x816);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x817 = INT8_MIN;
	uint16_t x818 = UINT16_MAX;
	int16_t x819 = INT16_MAX;
	uint32_t x820 = 460U;

    t189 = (((x817/x818)%x819)/x820);

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x822 = INT32_MIN;
	static int64_t x824 = INT64_MIN;
	volatile int64_t t190 = 3484865694750537195LL;

    t190 = (((x821/x822)%x823)/x824);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile uint64_t x825 = UINT64_MAX;
	uint8_t x827 = UINT8_MAX;
	int32_t x828 = INT32_MIN;
	uint64_t t191 = 8096308844996747646LLU;

    t191 = (((x825/x826)%x827)/x828);

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x829 = 1U;
	int8_t x830 = -1;
	int64_t x831 = INT64_MIN;
	int32_t x832 = -1;
	volatile int64_t t192 = 6656125434LL;

    t192 = (((x829/x830)%x831)/x832);

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x837 = UINT16_MAX;
	int8_t x838 = INT8_MIN;
	int64_t x839 = -1LL;

    t193 = (((x837/x838)%x839)/x840);

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint8_t x841 = UINT8_MAX;
	volatile int64_t x842 = 2375265LL;
	uint8_t x844 = 1U;
	volatile uint64_t t194 = 12LLU;

    t194 = (((x841/x842)%x843)/x844);

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x849 = 2U;
	int16_t x850 = INT16_MIN;
	int16_t x851 = INT16_MIN;
	static uint16_t x852 = 33U;

    t195 = (((x849/x850)%x851)/x852);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x853 = UINT16_MAX;
	uint8_t x854 = UINT8_MAX;
	static int64_t x855 = INT64_MIN;
	static int32_t x856 = INT32_MAX;
	int64_t t196 = 419663344LL;

    t196 = (((x853/x854)%x855)/x856);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint32_t x857 = UINT32_MAX;
	int16_t x860 = INT16_MIN;
	uint64_t t197 = 26423LLU;

    t197 = (((x857/x858)%x859)/x860);

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile uint32_t x861 = 16573018U;
	int8_t x863 = INT8_MIN;
	uint64_t t198 = 1LLU;

    t198 = (((x861/x862)%x863)/x864);

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint16_t x866 = 851U;
	uint32_t x867 = 66098031U;
	int16_t x868 = 1;

    t199 = (((x865/x866)%x867)/x868);

    if (t199 != 0LL) { NG(); } else { ; }
	
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

