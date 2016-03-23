
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

uint8_t x1 = 4U;
uint32_t x10 = 86U;
int32_t x21 = INT32_MAX;
static uint8_t x27 = 0U;
int32_t x28 = INT32_MIN;
int16_t x29 = INT16_MIN;
static int64_t x36 = -1LL;
int32_t x37 = INT32_MIN;
volatile int32_t x39 = -3;
volatile int64_t x40 = -1LL;
int32_t t8 = 187;
static int32_t x51 = -1;
volatile int32_t x56 = -1;
static int8_t x59 = INT8_MIN;
int64_t x64 = -1LL;
static int64_t x65 = 615072LL;
static int64_t x67 = -3923586710889718015LL;
static int64_t x69 = -1LL;
int64_t x80 = -1LL;
int32_t x90 = -1;
int32_t t20 = 2;
volatile int64_t x99 = INT64_MIN;
uint8_t x100 = 24U;
volatile int16_t x107 = INT16_MIN;
int32_t t23 = 85799905;
uint32_t x110 = 9U;
int64_t x113 = 231355810997267817LL;
volatile uint32_t x119 = 1950397764U;
volatile int8_t x134 = INT8_MAX;
static volatile int16_t x151 = 422;
int32_t x154 = INT32_MIN;
int32_t t34 = 3;
volatile int32_t t35 = -20;
int16_t x162 = INT16_MAX;
volatile int32_t x176 = -60832;
int16_t x180 = INT16_MAX;
volatile int8_t x181 = 27;
volatile int32_t t40 = 45;
uint16_t x208 = 11719U;
static int64_t x209 = INT64_MIN;
static int32_t x215 = -1;
volatile int32_t t48 = -28254723;
int8_t x226 = INT8_MIN;
int32_t t49 = -3754;
volatile int32_t t53 = 1;
static int32_t x256 = -460168;
int32_t x260 = -64;
volatile int32_t t57 = -1853;
int8_t x266 = 14;
int32_t x271 = 1;
uint64_t x272 = UINT64_MAX;
static int64_t x280 = 48LL;
int64_t x299 = -1LL;
static int8_t x305 = 0;
volatile int8_t x308 = -41;
volatile uint64_t x309 = 120832666805360LLU;
int32_t t67 = -705;
volatile int32_t t69 = 1;
static int8_t x338 = 49;
int16_t x341 = INT16_MIN;
static volatile int32_t x344 = -4367380;
uint16_t x351 = UINT16_MAX;
uint16_t x359 = 15U;
static int16_t x360 = -1;
static int32_t t76 = -637782498;
uint64_t x362 = 287629426333265569LLU;
int32_t t77 = -1167;
uint64_t x366 = UINT64_MAX;
int16_t x376 = -7;
int32_t t79 = 7579697;
static int16_t x378 = INT16_MIN;
uint8_t x406 = 3U;
volatile int32_t t85 = 0;
int8_t x413 = 15;
int64_t x414 = -12807LL;
int16_t x423 = INT16_MIN;
int16_t x424 = -1;
static int32_t t89 = 699711290;
uint16_t x426 = 1688U;
uint8_t x427 = UINT8_MAX;
volatile int64_t x429 = -1LL;
int8_t x435 = -2;
volatile int16_t x439 = -1;
int64_t x441 = INT64_MIN;
int8_t x450 = 1;
volatile int32_t x451 = -15490485;
int32_t t96 = -219929;
int32_t x456 = INT32_MAX;
int16_t x458 = INT16_MAX;
int32_t t99 = 8964;
uint32_t x465 = 371938U;
int32_t x477 = INT32_MIN;
int32_t t105 = 10264;
int8_t x498 = INT8_MIN;
static uint64_t x500 = 1079332342775312510LLU;
static int64_t x512 = 267074674828LL;
int16_t x528 = -1;
uint8_t x540 = 2U;
int8_t x542 = 16;
volatile int8_t x543 = INT8_MIN;
int8_t x552 = INT8_MIN;
volatile int32_t t121 = 32459;
volatile int64_t x558 = INT64_MAX;
static uint32_t x560 = 378U;
volatile int32_t t122 = -29531;
int16_t x565 = INT16_MIN;
static volatile int32_t t123 = -1;
int8_t x570 = INT8_MAX;
int8_t x571 = 0;
static uint64_t x572 = 4LLU;
int8_t x582 = INT8_MIN;
int32_t t128 = 37213;
int32_t x591 = INT32_MIN;
int16_t x600 = INT16_MIN;
int16_t x607 = INT16_MAX;
int32_t x610 = -21617;
uint8_t x612 = 11U;
int64_t x614 = INT64_MAX;
volatile int32_t t136 = 752;
volatile int32_t t137 = 0;
int32_t x629 = INT32_MAX;
static uint64_t x630 = UINT64_MAX;
volatile int32_t t138 = -25334984;
uint64_t x634 = 25LLU;
int32_t t139 = 13896257;
static uint32_t x640 = UINT32_MAX;
int32_t t141 = 12837997;
uint32_t x645 = 21922447U;
int64_t x646 = INT64_MAX;
uint64_t x658 = 2536118379728LLU;
volatile int16_t x681 = -7;
uint64_t x683 = 7710696558LLU;
uint64_t x688 = 294672902820LLU;
uint64_t x692 = UINT64_MAX;
int8_t x696 = -50;
uint8_t x697 = 1U;
int32_t x711 = 1;
volatile int64_t x713 = 683455LL;
volatile int32_t x718 = -29287884;
volatile int32_t t158 = 59770854;
int32_t x723 = INT32_MIN;
int16_t x733 = -1;
int32_t x739 = 2;
int16_t x750 = 250;
uint64_t x751 = UINT64_MAX;
int32_t x754 = -1;
int32_t x755 = INT32_MIN;
volatile int16_t x759 = INT16_MAX;
int64_t x760 = INT64_MIN;
uint8_t x761 = UINT8_MAX;
int32_t x763 = INT32_MIN;
static uint64_t x765 = 9164662370599401813LLU;
volatile int32_t t168 = -55198634;
int8_t x770 = INT8_MIN;
int32_t x772 = -1;
volatile int32_t t169 = 82359;
int64_t x777 = 847730782961299267LL;
int32_t x779 = -1;
volatile uint64_t x781 = UINT64_MAX;
volatile uint16_t x782 = 5013U;
int16_t x784 = 0;
volatile int8_t x786 = 0;
static int32_t t174 = -291;
volatile int32_t t177 = 3716906;
int16_t x805 = -1;
int32_t t178 = -167786;
uint32_t x809 = 1077U;
int32_t t179 = 35774623;
int32_t x815 = -96;
static int32_t x817 = -1;
int32_t t181 = -54;
static uint64_t x827 = UINT64_MAX;
uint64_t x832 = 214362968762798LLU;
int32_t x833 = INT32_MIN;
uint64_t x840 = 13986578LLU;
volatile int64_t x841 = INT64_MAX;
static int8_t x843 = INT8_MAX;
int16_t x844 = INT16_MIN;
uint32_t x852 = 69U;
volatile uint8_t x855 = 5U;
static int32_t t190 = 1863575;
int32_t t192 = -23663;
int8_t x869 = INT8_MIN;
uint16_t x871 = 102U;
int32_t x872 = INT32_MIN;
volatile int32_t t193 = -4763;
static uint64_t x874 = UINT64_MAX;
uint16_t x876 = UINT16_MAX;
int32_t t194 = -61;
uint64_t x880 = 16499982606LLU;
int32_t t196 = 1033288;
int64_t x887 = 15979177116896LL;


void f0(void) {
    	static int32_t x2 = INT32_MIN;
	volatile int32_t x3 = -1;
	int64_t x4 = 13114425965LL;
	volatile int32_t t0 = -435;

    t0 = ((x1|x2)<=(x3+x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = 119LL;
	volatile int64_t x6 = INT64_MAX;
	int64_t x7 = -1LL;
	int64_t x8 = -11LL;
	int32_t t1 = -2;

    t1 = ((x5|x6)<=(x7+x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MAX;
	int16_t x11 = -1;
	int32_t x12 = INT32_MAX;
	int32_t t2 = -52417;

    t2 = ((x9|x10)<=(x11+x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x17 = -385246040530452663LL;
	int8_t x18 = -31;
	int64_t x19 = 64451556917LL;
	static int64_t x20 = -1LL;
	int32_t t3 = -3928948;

    t3 = ((x17|x18)<=(x19+x20));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x22 = -1LL;
	int8_t x23 = 2;
	static volatile int16_t x24 = 0;
	int32_t t4 = -3;

    t4 = ((x21|x22)<=(x23+x24));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = INT8_MIN;
	int32_t x26 = 1;
	volatile int32_t t5 = 4;

    t5 = ((x25|x26)<=(x27+x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x30 = -1;
	int64_t x31 = INT64_MAX;
	int32_t x32 = INT32_MIN;
	volatile int32_t t6 = -201;

    t6 = ((x29|x30)<=(x31+x32));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = INT8_MIN;
	uint64_t x34 = 887839259436LLU;
	int32_t x35 = INT32_MIN;
	volatile int32_t t7 = 3365;

    t7 = ((x33|x34)<=(x35+x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x38 = 9;

    t8 = ((x37|x38)<=(x39+x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x41 = 5;
	int16_t x42 = -1;
	static uint64_t x43 = 798635LLU;
	int32_t x44 = 64940523;
	int32_t t9 = 2966227;

    t9 = ((x41|x42)<=(x43+x44));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = INT64_MIN;
	int32_t x46 = -1;
	uint32_t x47 = 832U;
	uint64_t x48 = 81572980016968LLU;
	static volatile int32_t t10 = -9147;

    t10 = ((x45|x46)<=(x47+x48));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x49 = UINT8_MAX;
	uint8_t x50 = 79U;
	uint64_t x52 = UINT64_MAX;
	int32_t t11 = 2;

    t11 = ((x49|x50)<=(x51+x52));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x53 = -1LL;
	int32_t x54 = INT32_MIN;
	int32_t x55 = INT32_MAX;
	int32_t t12 = -2071931;

    t12 = ((x53|x54)<=(x55+x56));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x57 = 2011213245LLU;
	int32_t x58 = 817236252;
	int64_t x60 = -13506268238LL;
	static volatile int32_t t13 = -9030170;

    t13 = ((x57|x58)<=(x59+x60));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x61 = 1590996;
	static volatile int8_t x62 = INT8_MIN;
	int16_t x63 = INT16_MIN;
	int32_t t14 = -656;

    t14 = ((x61|x62)<=(x63+x64));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x66 = INT64_MIN;
	volatile uint64_t x68 = 1305196556LLU;
	int32_t t15 = -108;

    t15 = ((x65|x66)<=(x67+x68));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x70 = 107305889U;
	volatile int32_t x71 = INT32_MIN;
	int32_t x72 = 59225;
	int32_t t16 = -52;

    t16 = ((x69|x70)<=(x71+x72));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x73 = 12U;
	uint16_t x74 = UINT16_MAX;
	uint16_t x75 = 3U;
	int32_t x76 = INT32_MIN;
	static volatile int32_t t17 = 60;

    t17 = ((x73|x74)<=(x75+x76));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x77 = 372038860373827LLU;
	int8_t x78 = 43;
	int32_t x79 = INT32_MIN;
	int32_t t18 = -114603;

    t18 = ((x77|x78)<=(x79+x80));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x85 = UINT64_MAX;
	int64_t x86 = INT64_MAX;
	static int8_t x87 = INT8_MIN;
	uint8_t x88 = 1U;
	static int32_t t19 = -1054741831;

    t19 = ((x85|x86)<=(x87+x88));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x89 = -860289;
	volatile uint32_t x91 = UINT32_MAX;
	int64_t x92 = -1LL;

    t20 = ((x89|x90)<=(x91+x92));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x93 = INT64_MAX;
	static int32_t x94 = 62;
	volatile uint16_t x95 = 233U;
	uint8_t x96 = UINT8_MAX;
	static volatile int32_t t21 = 200714;

    t21 = ((x93|x94)<=(x95+x96));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x97 = INT16_MIN;
	uint8_t x98 = 8U;
	int32_t t22 = -44;

    t22 = ((x97|x98)<=(x99+x100));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x105 = -8088;
	uint8_t x106 = UINT8_MAX;
	volatile int8_t x108 = INT8_MAX;

    t23 = ((x105|x106)<=(x107+x108));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x109 = INT64_MAX;
	uint64_t x111 = UINT64_MAX;
	uint32_t x112 = 2327878U;
	static int32_t t24 = -54;

    t24 = ((x109|x110)<=(x111+x112));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x114 = 3U;
	int8_t x115 = INT8_MIN;
	int64_t x116 = -1LL;
	volatile int32_t t25 = -4;

    t25 = ((x113|x114)<=(x115+x116));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x117 = UINT16_MAX;
	volatile int64_t x118 = INT64_MIN;
	int32_t x120 = INT32_MIN;
	int32_t t26 = 2043285;

    t26 = ((x117|x118)<=(x119+x120));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x121 = 1763LLU;
	volatile uint32_t x122 = 300408134U;
	static volatile int32_t x123 = 1;
	static volatile uint8_t x124 = 1U;
	volatile int32_t t27 = -3382;

    t27 = ((x121|x122)<=(x123+x124));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x125 = 2;
	static int64_t x126 = -1LL;
	uint64_t x127 = 1LLU;
	static int32_t x128 = INT32_MAX;
	volatile int32_t t28 = 1;

    t28 = ((x125|x126)<=(x127+x128));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x129 = -36LL;
	uint8_t x130 = UINT8_MAX;
	uint32_t x131 = UINT32_MAX;
	uint64_t x132 = UINT64_MAX;
	volatile int32_t t29 = -60787924;

    t29 = ((x129|x130)<=(x131+x132));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x133 = INT32_MIN;
	int32_t x135 = INT32_MIN;
	volatile int32_t x136 = 30899;
	int32_t t30 = 15946313;

    t30 = ((x133|x134)<=(x135+x136));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x141 = 251;
	uint8_t x142 = 50U;
	uint32_t x143 = UINT32_MAX;
	uint16_t x144 = UINT16_MAX;
	static int32_t t31 = -6430;

    t31 = ((x141|x142)<=(x143+x144));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x145 = 0LLU;
	int64_t x146 = -1LL;
	int8_t x147 = -1;
	static int8_t x148 = -1;
	int32_t t32 = 3065;

    t32 = ((x145|x146)<=(x147+x148));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x149 = 0U;
	int8_t x150 = -1;
	volatile uint32_t x152 = 3754U;
	volatile int32_t t33 = -6352;

    t33 = ((x149|x150)<=(x151+x152));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x153 = 2769813765254701282LL;
	static int64_t x155 = INT64_MIN;
	uint16_t x156 = 62U;

    t34 = ((x153|x154)<=(x155+x156));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x157 = INT64_MIN;
	uint64_t x158 = 25874LLU;
	static volatile int32_t x159 = -1625216;
	volatile int8_t x160 = INT8_MIN;

    t35 = ((x157|x158)<=(x159+x160));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x161 = UINT64_MAX;
	uint8_t x163 = 2U;
	static volatile int8_t x164 = INT8_MIN;
	int32_t t36 = -1;

    t36 = ((x161|x162)<=(x163+x164));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x169 = INT16_MIN;
	int16_t x170 = INT16_MIN;
	int64_t x171 = INT64_MIN;
	int32_t x172 = 1;
	static int32_t t37 = 1;

    t37 = ((x169|x170)<=(x171+x172));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x173 = INT64_MIN;
	int8_t x174 = -59;
	static int8_t x175 = INT8_MIN;
	volatile int32_t t38 = 88;

    t38 = ((x173|x174)<=(x175+x176));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x177 = 0U;
	int64_t x178 = INT64_MIN;
	int16_t x179 = -1;
	static int32_t t39 = 30;

    t39 = ((x177|x178)<=(x179+x180));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x182 = 8U;
	uint32_t x183 = 1128265671U;
	volatile uint16_t x184 = UINT16_MAX;

    t40 = ((x181|x182)<=(x183+x184));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x185 = 6;
	volatile int16_t x186 = INT16_MIN;
	volatile uint64_t x187 = 8247766LLU;
	volatile uint16_t x188 = 12845U;
	int32_t t41 = -2089043;

    t41 = ((x185|x186)<=(x187+x188));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x189 = UINT32_MAX;
	uint16_t x190 = 2U;
	int16_t x191 = INT16_MAX;
	static int16_t x192 = INT16_MAX;
	int32_t t42 = 506961841;

    t42 = ((x189|x190)<=(x191+x192));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x193 = 1451U;
	static int64_t x194 = INT64_MIN;
	uint8_t x195 = 6U;
	volatile int8_t x196 = INT8_MIN;
	static int32_t t43 = -4250;

    t43 = ((x193|x194)<=(x195+x196));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x201 = INT8_MIN;
	uint64_t x202 = UINT64_MAX;
	static uint64_t x203 = UINT64_MAX;
	static int64_t x204 = INT64_MAX;
	int32_t t44 = -785;

    t44 = ((x201|x202)<=(x203+x204));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x205 = INT8_MIN;
	uint32_t x206 = 10U;
	static int8_t x207 = -27;
	static volatile int32_t t45 = -1068652;

    t45 = ((x205|x206)<=(x207+x208));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x210 = UINT8_MAX;
	int16_t x211 = -1097;
	int16_t x212 = -7;
	int32_t t46 = -9211278;

    t46 = ((x209|x210)<=(x211+x212));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint64_t x213 = UINT64_MAX;
	static int64_t x214 = -2635150206132LL;
	int16_t x216 = INT16_MIN;
	static volatile int32_t t47 = -240748;

    t47 = ((x213|x214)<=(x215+x216));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x221 = INT32_MIN;
	static uint16_t x222 = UINT16_MAX;
	static volatile uint8_t x223 = 0U;
	static int32_t x224 = -7967;

    t48 = ((x221|x222)<=(x223+x224));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x225 = 487629U;
	uint64_t x227 = 242519179LLU;
	int8_t x228 = INT8_MAX;

    t49 = ((x225|x226)<=(x227+x228));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x233 = -1;
	int32_t x234 = -1;
	static int16_t x235 = INT16_MIN;
	static int64_t x236 = 2LL;
	int32_t t50 = -228;

    t50 = ((x233|x234)<=(x235+x236));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x237 = 2590900U;
	uint16_t x238 = UINT16_MAX;
	int8_t x239 = 1;
	int16_t x240 = INT16_MIN;
	int32_t t51 = 4246524;

    t51 = ((x237|x238)<=(x239+x240));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x241 = INT8_MIN;
	uint16_t x242 = UINT16_MAX;
	int32_t x243 = INT32_MIN;
	uint8_t x244 = 9U;
	int32_t t52 = -93684275;

    t52 = ((x241|x242)<=(x243+x244));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x245 = 1223225U;
	volatile int8_t x246 = -23;
	int16_t x247 = INT16_MIN;
	static int16_t x248 = INT16_MIN;

    t53 = ((x245|x246)<=(x247+x248));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x249 = INT8_MAX;
	int8_t x250 = INT8_MIN;
	int8_t x251 = 0;
	uint64_t x252 = 153545103259372LLU;
	int32_t t54 = 0;

    t54 = ((x249|x250)<=(x251+x252));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint8_t x253 = UINT8_MAX;
	uint32_t x254 = 248U;
	static int8_t x255 = INT8_MIN;
	int32_t t55 = 210;

    t55 = ((x253|x254)<=(x255+x256));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x257 = 105798794LLU;
	volatile int16_t x258 = 7346;
	static int16_t x259 = INT16_MIN;
	volatile int32_t t56 = -106;

    t56 = ((x257|x258)<=(x259+x260));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x261 = UINT32_MAX;
	int32_t x262 = INT32_MIN;
	volatile int32_t x263 = -2705;
	int16_t x264 = -1;

    t57 = ((x261|x262)<=(x263+x264));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x265 = 0U;
	int8_t x267 = INT8_MIN;
	static volatile int16_t x268 = -1;
	volatile int32_t t58 = -25;

    t58 = ((x265|x266)<=(x267+x268));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x269 = -1;
	uint8_t x270 = UINT8_MAX;
	volatile int32_t t59 = 1205;

    t59 = ((x269|x270)<=(x271+x272));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x277 = UINT32_MAX;
	uint8_t x278 = 10U;
	uint32_t x279 = UINT32_MAX;
	volatile int32_t t60 = 290807;

    t60 = ((x277|x278)<=(x279+x280));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint32_t x281 = 0U;
	int32_t x282 = INT32_MAX;
	uint8_t x283 = UINT8_MAX;
	uint16_t x284 = 2U;
	volatile int32_t t61 = 911;

    t61 = ((x281|x282)<=(x283+x284));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x285 = INT8_MAX;
	volatile int16_t x286 = INT16_MAX;
	uint16_t x287 = 3543U;
	int16_t x288 = INT16_MIN;
	int32_t t62 = -773567117;

    t62 = ((x285|x286)<=(x287+x288));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x289 = INT16_MAX;
	static volatile int16_t x290 = -103;
	int32_t x291 = -10661770;
	int8_t x292 = INT8_MIN;
	volatile int32_t t63 = -7426313;

    t63 = ((x289|x290)<=(x291+x292));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x297 = -13LL;
	volatile int8_t x298 = -1;
	uint8_t x300 = UINT8_MAX;
	int32_t t64 = 9;

    t64 = ((x297|x298)<=(x299+x300));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x301 = INT16_MIN;
	static uint64_t x302 = UINT64_MAX;
	static uint32_t x303 = 42807326U;
	uint32_t x304 = UINT32_MAX;
	volatile int32_t t65 = -67;

    t65 = ((x301|x302)<=(x303+x304));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x306 = -1;
	volatile int32_t x307 = 8232945;
	int32_t t66 = -260351537;

    t66 = ((x305|x306)<=(x307+x308));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x310 = UINT32_MAX;
	int16_t x311 = -1;
	int64_t x312 = -1103466869LL;

    t67 = ((x309|x310)<=(x311+x312));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x321 = -1;
	uint64_t x322 = 92378057302326LLU;
	static int8_t x323 = INT8_MAX;
	volatile uint32_t x324 = UINT32_MAX;
	volatile int32_t t68 = -55727;

    t68 = ((x321|x322)<=(x323+x324));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x325 = -1;
	static uint8_t x326 = UINT8_MAX;
	int8_t x327 = INT8_MAX;
	volatile int16_t x328 = -1;

    t69 = ((x325|x326)<=(x327+x328));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x329 = 1494049U;
	volatile int16_t x330 = 40;
	uint64_t x331 = UINT64_MAX;
	volatile uint32_t x332 = 507376773U;
	int32_t t70 = 127;

    t70 = ((x329|x330)<=(x331+x332));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile uint16_t x333 = 425U;
	int16_t x334 = 34;
	uint64_t x335 = 958113096695093065LLU;
	uint8_t x336 = 127U;
	int32_t t71 = -5662858;

    t71 = ((x333|x334)<=(x335+x336));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x337 = 0U;
	uint32_t x339 = 21472U;
	int64_t x340 = 452078085426666LL;
	volatile int32_t t72 = 204814374;

    t72 = ((x337|x338)<=(x339+x340));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x342 = -450;
	volatile uint16_t x343 = 252U;
	static int32_t t73 = 21417;

    t73 = ((x341|x342)<=(x343+x344));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int64_t x345 = INT64_MIN;
	static int32_t x346 = INT32_MAX;
	volatile int32_t x347 = -4;
	int8_t x348 = 1;
	volatile int32_t t74 = 1;

    t74 = ((x345|x346)<=(x347+x348));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x349 = -32;
	int64_t x350 = INT64_MIN;
	uint16_t x352 = 1886U;
	volatile int32_t t75 = 222051;

    t75 = ((x349|x350)<=(x351+x352));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x357 = INT32_MIN;
	uint64_t x358 = 6115980960598LLU;

    t76 = ((x357|x358)<=(x359+x360));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x361 = 101U;
	int8_t x363 = -55;
	volatile uint16_t x364 = 17U;

    t77 = ((x361|x362)<=(x363+x364));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x365 = 643281426;
	static int32_t x367 = -1;
	uint8_t x368 = UINT8_MAX;
	int32_t t78 = -445931232;

    t78 = ((x365|x366)<=(x367+x368));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x373 = -171675LL;
	volatile int32_t x374 = -1;
	volatile int8_t x375 = INT8_MAX;

    t79 = ((x373|x374)<=(x375+x376));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x377 = UINT64_MAX;
	static int8_t x379 = INT8_MAX;
	volatile int8_t x380 = INT8_MIN;
	int32_t t80 = -519770285;

    t80 = ((x377|x378)<=(x379+x380));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x381 = -1;
	int64_t x382 = INT64_MIN;
	uint16_t x383 = UINT16_MAX;
	uint8_t x384 = 15U;
	volatile int32_t t81 = 8463381;

    t81 = ((x381|x382)<=(x383+x384));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x385 = INT8_MIN;
	volatile int8_t x386 = INT8_MIN;
	static volatile int8_t x387 = 0;
	int32_t x388 = 165536;
	int32_t t82 = -10253507;

    t82 = ((x385|x386)<=(x387+x388));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x397 = 0;
	uint32_t x398 = 1422620U;
	int64_t x399 = INT64_MIN;
	volatile int8_t x400 = 5;
	static int32_t t83 = -8;

    t83 = ((x397|x398)<=(x399+x400));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x401 = 403536864LL;
	static uint64_t x402 = 4398957685237252LLU;
	volatile int32_t x403 = -1;
	uint32_t x404 = UINT32_MAX;
	int32_t t84 = -6;

    t84 = ((x401|x402)<=(x403+x404));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x405 = INT8_MIN;
	int8_t x407 = INT8_MAX;
	uint16_t x408 = 5876U;

    t85 = ((x405|x406)<=(x407+x408));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x409 = INT32_MIN;
	uint32_t x410 = 59U;
	int16_t x411 = -17;
	int32_t x412 = -28;
	volatile int32_t t86 = 14921340;

    t86 = ((x409|x410)<=(x411+x412));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x415 = INT64_MAX;
	volatile int16_t x416 = -6;
	int32_t t87 = 29604334;

    t87 = ((x413|x414)<=(x415+x416));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x417 = 24U;
	static uint32_t x418 = 4U;
	static uint8_t x419 = 80U;
	static int8_t x420 = INT8_MIN;
	volatile int32_t t88 = -78266868;

    t88 = ((x417|x418)<=(x419+x420));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x421 = 25U;
	int16_t x422 = 10;

    t89 = ((x421|x422)<=(x423+x424));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x425 = INT32_MAX;
	uint64_t x428 = UINT64_MAX;
	static int32_t t90 = 2;

    t90 = ((x425|x426)<=(x427+x428));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x430 = UINT8_MAX;
	int8_t x431 = INT8_MIN;
	uint8_t x432 = 3U;
	volatile int32_t t91 = -457;

    t91 = ((x429|x430)<=(x431+x432));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x433 = INT32_MIN;
	int16_t x434 = -1;
	uint64_t x436 = 578942LLU;
	volatile int32_t t92 = 44857410;

    t92 = ((x433|x434)<=(x435+x436));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x437 = -19;
	uint32_t x438 = 464U;
	static int8_t x440 = INT8_MIN;
	volatile int32_t t93 = 281324314;

    t93 = ((x437|x438)<=(x439+x440));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x442 = INT8_MAX;
	volatile uint64_t x443 = 3320LLU;
	int64_t x444 = -1LL;
	int32_t t94 = 160366714;

    t94 = ((x441|x442)<=(x443+x444));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x445 = INT64_MIN;
	uint8_t x446 = 0U;
	static volatile int16_t x447 = INT16_MIN;
	static int16_t x448 = 1;
	int32_t t95 = 1018129741;

    t95 = ((x445|x446)<=(x447+x448));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x449 = INT8_MIN;
	uint16_t x452 = 3U;

    t96 = ((x449|x450)<=(x451+x452));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x453 = INT16_MAX;
	uint8_t x454 = 8U;
	static volatile int64_t x455 = INT64_MIN;
	volatile int32_t t97 = 110;

    t97 = ((x453|x454)<=(x455+x456));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int32_t x457 = INT32_MIN;
	int64_t x459 = INT64_MIN;
	int16_t x460 = INT16_MAX;
	volatile int32_t t98 = -64072941;

    t98 = ((x457|x458)<=(x459+x460));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x461 = 48608548557635795LL;
	volatile uint64_t x462 = 2270692092347125591LLU;
	uint8_t x463 = UINT8_MAX;
	int64_t x464 = -1LL;

    t99 = ((x461|x462)<=(x463+x464));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x466 = INT32_MIN;
	volatile uint16_t x467 = 1U;
	int8_t x468 = -1;
	volatile int32_t t100 = -30152780;

    t100 = ((x465|x466)<=(x467+x468));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x469 = 112U;
	int8_t x470 = -2;
	int64_t x471 = INT64_MAX;
	uint64_t x472 = 26151337244LLU;
	volatile int32_t t101 = 5;

    t101 = ((x469|x470)<=(x471+x472));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint64_t x473 = 472193204653LLU;
	uint8_t x474 = 3U;
	volatile int64_t x475 = INT64_MAX;
	int32_t x476 = -1;
	int32_t t102 = 233;

    t102 = ((x473|x474)<=(x475+x476));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x478 = INT8_MAX;
	int32_t x479 = INT32_MIN;
	volatile int8_t x480 = 3;
	static int32_t t103 = -16573388;

    t103 = ((x477|x478)<=(x479+x480));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x485 = INT64_MAX;
	static volatile int16_t x486 = INT16_MIN;
	uint8_t x487 = UINT8_MAX;
	uint64_t x488 = 7058715557690811LLU;
	int32_t t104 = -12;

    t104 = ((x485|x486)<=(x487+x488));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x489 = UINT16_MAX;
	int64_t x490 = INT64_MAX;
	int16_t x491 = INT16_MAX;
	uint8_t x492 = UINT8_MAX;

    t105 = ((x489|x490)<=(x491+x492));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint32_t x493 = 0U;
	volatile uint32_t x494 = 17537U;
	uint16_t x495 = 1370U;
	uint64_t x496 = UINT64_MAX;
	volatile int32_t t106 = 414;

    t106 = ((x493|x494)<=(x495+x496));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x497 = INT16_MIN;
	volatile int8_t x499 = INT8_MIN;
	volatile int32_t t107 = -127621650;

    t107 = ((x497|x498)<=(x499+x500));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x501 = -36525811684LL;
	static int64_t x502 = -3966570764590490LL;
	uint64_t x503 = 770455158262LLU;
	int32_t x504 = INT32_MIN;
	int32_t t108 = 2474;

    t108 = ((x501|x502)<=(x503+x504));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x505 = UINT32_MAX;
	int32_t x506 = INT32_MAX;
	volatile uint64_t x507 = 40LLU;
	uint32_t x508 = 50575U;
	volatile int32_t t109 = 426287;

    t109 = ((x505|x506)<=(x507+x508));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint8_t x509 = UINT8_MAX;
	int8_t x510 = -3;
	int64_t x511 = INT64_MIN;
	int32_t t110 = -14;

    t110 = ((x509|x510)<=(x511+x512));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint16_t x513 = 1861U;
	uint16_t x514 = 408U;
	int32_t x515 = -18193142;
	int8_t x516 = INT8_MIN;
	int32_t t111 = 2421;

    t111 = ((x513|x514)<=(x515+x516));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x517 = INT16_MIN;
	static uint8_t x518 = 27U;
	int16_t x519 = INT16_MIN;
	int8_t x520 = INT8_MIN;
	int32_t t112 = 10284664;

    t112 = ((x517|x518)<=(x519+x520));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x521 = INT64_MIN;
	volatile uint16_t x522 = 0U;
	volatile uint64_t x523 = 7582405370LLU;
	volatile int8_t x524 = INT8_MIN;
	int32_t t113 = -3;

    t113 = ((x521|x522)<=(x523+x524));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int16_t x525 = 1;
	int8_t x526 = INT8_MIN;
	static volatile int32_t x527 = 55697;
	volatile int32_t t114 = 0;

    t114 = ((x525|x526)<=(x527+x528));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x529 = 1339418U;
	uint8_t x530 = 31U;
	uint8_t x531 = 54U;
	int16_t x532 = -1441;
	static int32_t t115 = 872811;

    t115 = ((x529|x530)<=(x531+x532));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint16_t x533 = 4032U;
	int64_t x534 = INT64_MIN;
	int16_t x535 = -1;
	static volatile int16_t x536 = -15481;
	int32_t t116 = -775356;

    t116 = ((x533|x534)<=(x535+x536));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint64_t x537 = 719813883428364837LLU;
	volatile uint64_t x538 = 7270428832587LLU;
	int8_t x539 = 1;
	static volatile int32_t t117 = 0;

    t117 = ((x537|x538)<=(x539+x540));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x541 = INT16_MIN;
	int32_t x544 = INT32_MAX;
	int32_t t118 = 70;

    t118 = ((x541|x542)<=(x543+x544));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x545 = -2062110697007LL;
	volatile int64_t x546 = INT64_MIN;
	int8_t x547 = 32;
	uint32_t x548 = 481375191U;
	static int32_t t119 = -1011;

    t119 = ((x545|x546)<=(x547+x548));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x549 = INT64_MAX;
	volatile int64_t x550 = INT64_MAX;
	int64_t x551 = INT64_MAX;
	int32_t t120 = -723;

    t120 = ((x549|x550)<=(x551+x552));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x553 = INT64_MIN;
	int32_t x554 = INT32_MIN;
	int32_t x555 = -1711;
	int16_t x556 = INT16_MAX;

    t121 = ((x553|x554)<=(x555+x556));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x557 = 51;
	int32_t x559 = -1;

    t122 = ((x557|x558)<=(x559+x560));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x566 = INT16_MIN;
	int32_t x567 = -6;
	int64_t x568 = 6707901LL;

    t123 = ((x565|x566)<=(x567+x568));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x569 = UINT8_MAX;
	int32_t t124 = -6;

    t124 = ((x569|x570)<=(x571+x572));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x573 = INT32_MIN;
	uint8_t x574 = 5U;
	static int8_t x575 = INT8_MIN;
	uint16_t x576 = UINT16_MAX;
	int32_t t125 = 7128583;

    t125 = ((x573|x574)<=(x575+x576));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x577 = INT8_MIN;
	uint16_t x578 = 28U;
	volatile uint32_t x579 = UINT32_MAX;
	static uint16_t x580 = UINT16_MAX;
	volatile int32_t t126 = -31309;

    t126 = ((x577|x578)<=(x579+x580));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x581 = -1LL;
	uint64_t x583 = 218LLU;
	int64_t x584 = -34046655519LL;
	int32_t t127 = 7328017;

    t127 = ((x581|x582)<=(x583+x584));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x585 = 6;
	static int16_t x586 = 14;
	uint8_t x587 = 16U;
	volatile int64_t x588 = -1LL;

    t128 = ((x585|x586)<=(x587+x588));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x589 = -1;
	int16_t x590 = -1;
	uint8_t x592 = 1U;
	volatile int32_t t129 = 207276999;

    t129 = ((x589|x590)<=(x591+x592));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x593 = 16374U;
	static int32_t x594 = -1;
	uint64_t x595 = UINT64_MAX;
	int32_t x596 = INT32_MAX;
	volatile int32_t t130 = -1;

    t130 = ((x593|x594)<=(x595+x596));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x597 = 56777U;
	int64_t x598 = -4793128LL;
	uint8_t x599 = 47U;
	volatile int32_t t131 = 0;

    t131 = ((x597|x598)<=(x599+x600));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x601 = UINT32_MAX;
	uint64_t x602 = 8406115921LLU;
	volatile int8_t x603 = -1;
	int64_t x604 = 75658LL;
	volatile int32_t t132 = 8370547;

    t132 = ((x601|x602)<=(x603+x604));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x605 = 12;
	uint16_t x606 = UINT16_MAX;
	int16_t x608 = -1;
	static volatile int32_t t133 = 11718;

    t133 = ((x605|x606)<=(x607+x608));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x609 = 539U;
	volatile uint32_t x611 = UINT32_MAX;
	volatile int32_t t134 = 5370;

    t134 = ((x609|x610)<=(x611+x612));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x613 = 454202LL;
	int64_t x615 = -1069458LL;
	static uint16_t x616 = 2U;
	volatile int32_t t135 = 26;

    t135 = ((x613|x614)<=(x615+x616));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x621 = -8;
	int16_t x622 = INT16_MIN;
	uint16_t x623 = UINT16_MAX;
	uint8_t x624 = UINT8_MAX;

    t136 = ((x621|x622)<=(x623+x624));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint8_t x625 = 61U;
	uint16_t x626 = UINT16_MAX;
	uint32_t x627 = UINT32_MAX;
	int16_t x628 = INT16_MAX;

    t137 = ((x625|x626)<=(x627+x628));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x631 = 120639868800LLU;
	static uint64_t x632 = 32289250797897LLU;

    t138 = ((x629|x630)<=(x631+x632));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint32_t x633 = UINT32_MAX;
	int32_t x635 = 751854063;
	static int16_t x636 = -7241;

    t139 = ((x633|x634)<=(x635+x636));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x637 = INT16_MIN;
	volatile int64_t x638 = 33358499181LL;
	volatile int64_t x639 = -3LL;
	volatile int32_t t140 = -91335;

    t140 = ((x637|x638)<=(x639+x640));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x641 = INT32_MIN;
	volatile uint32_t x642 = UINT32_MAX;
	uint16_t x643 = 19842U;
	int16_t x644 = -32;

    t141 = ((x641|x642)<=(x643+x644));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x647 = INT16_MIN;
	int8_t x648 = 13;
	int32_t t142 = 30;

    t142 = ((x645|x646)<=(x647+x648));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x649 = -7;
	int64_t x650 = 49040424135342070LL;
	int8_t x651 = 9;
	int32_t x652 = INT32_MIN;
	volatile int32_t t143 = 40;

    t143 = ((x649|x650)<=(x651+x652));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x653 = INT16_MIN;
	volatile uint16_t x654 = UINT16_MAX;
	uint8_t x655 = 4U;
	int8_t x656 = INT8_MIN;
	static int32_t t144 = 317087;

    t144 = ((x653|x654)<=(x655+x656));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x657 = -1;
	uint16_t x659 = 3U;
	volatile int32_t x660 = INT32_MIN;
	int32_t t145 = 47692;

    t145 = ((x657|x658)<=(x659+x660));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x661 = -1;
	static volatile int64_t x662 = 1LL;
	uint16_t x663 = 27U;
	int16_t x664 = 1023;
	int32_t t146 = -412355;

    t146 = ((x661|x662)<=(x663+x664));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int64_t x669 = -1LL;
	volatile int64_t x670 = INT64_MIN;
	static uint64_t x671 = UINT64_MAX;
	static int16_t x672 = INT16_MAX;
	volatile int32_t t147 = 187;

    t147 = ((x669|x670)<=(x671+x672));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x673 = -1LL;
	static volatile int8_t x674 = -1;
	int16_t x675 = INT16_MIN;
	uint32_t x676 = UINT32_MAX;
	static int32_t t148 = -2553;

    t148 = ((x673|x674)<=(x675+x676));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x677 = -51;
	int64_t x678 = -20422821487556LL;
	volatile int16_t x679 = 214;
	int64_t x680 = -1LL;
	volatile int32_t t149 = 8181768;

    t149 = ((x677|x678)<=(x679+x680));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x682 = 0;
	uint8_t x684 = UINT8_MAX;
	int32_t t150 = -152;

    t150 = ((x681|x682)<=(x683+x684));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x685 = INT16_MAX;
	uint16_t x686 = UINT16_MAX;
	int16_t x687 = -101;
	int32_t t151 = 109;

    t151 = ((x685|x686)<=(x687+x688));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x689 = INT8_MIN;
	static int16_t x690 = INT16_MAX;
	volatile int32_t x691 = INT32_MIN;
	static int32_t t152 = -803;

    t152 = ((x689|x690)<=(x691+x692));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x693 = INT32_MIN;
	int64_t x694 = 111016186629896LL;
	int8_t x695 = 3;
	volatile int32_t t153 = -52682368;

    t153 = ((x693|x694)<=(x695+x696));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x698 = INT64_MIN;
	int16_t x699 = -657;
	int32_t x700 = -1;
	int32_t t154 = 1;

    t154 = ((x697|x698)<=(x699+x700));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x705 = -1;
	volatile int16_t x706 = INT16_MAX;
	int64_t x707 = -726707834LL;
	int32_t x708 = -1;
	volatile int32_t t155 = 1190;

    t155 = ((x705|x706)<=(x707+x708));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x709 = INT64_MIN;
	volatile int8_t x710 = 51;
	uint32_t x712 = UINT32_MAX;
	volatile int32_t t156 = 58909276;

    t156 = ((x709|x710)<=(x711+x712));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x714 = 117;
	volatile int64_t x715 = INT64_MIN;
	static uint8_t x716 = 125U;
	volatile int32_t t157 = 410;

    t157 = ((x713|x714)<=(x715+x716));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x717 = UINT32_MAX;
	static uint16_t x719 = UINT16_MAX;
	static int64_t x720 = INT64_MIN;

    t158 = ((x717|x718)<=(x719+x720));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x721 = UINT8_MAX;
	int32_t x722 = 4;
	volatile int32_t x724 = 33722;
	volatile int32_t t159 = -1490638;

    t159 = ((x721|x722)<=(x723+x724));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x729 = UINT32_MAX;
	int8_t x730 = INT8_MIN;
	static uint8_t x731 = UINT8_MAX;
	int16_t x732 = INT16_MAX;
	int32_t t160 = 1;

    t160 = ((x729|x730)<=(x731+x732));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x734 = INT16_MIN;
	uint32_t x735 = UINT32_MAX;
	volatile int8_t x736 = 0;
	volatile int32_t t161 = 676629132;

    t161 = ((x733|x734)<=(x735+x736));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x737 = -1;
	int64_t x738 = INT64_MIN;
	int64_t x740 = 17696269LL;
	volatile int32_t t162 = -508740762;

    t162 = ((x737|x738)<=(x739+x740));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x745 = 8221U;
	int8_t x746 = INT8_MIN;
	int64_t x747 = -1LL;
	uint16_t x748 = 106U;
	int32_t t163 = -303;

    t163 = ((x745|x746)<=(x747+x748));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x749 = 3U;
	volatile int64_t x752 = -1LL;
	static volatile int32_t t164 = 185;

    t164 = ((x749|x750)<=(x751+x752));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x753 = 9097U;
	uint32_t x756 = 706U;
	int32_t t165 = -1647318;

    t165 = ((x753|x754)<=(x755+x756));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x757 = INT32_MAX;
	uint8_t x758 = UINT8_MAX;
	volatile int32_t t166 = 112;

    t166 = ((x757|x758)<=(x759+x760));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint16_t x762 = 12093U;
	static int64_t x764 = INT64_MAX;
	volatile int32_t t167 = -103801315;

    t167 = ((x761|x762)<=(x763+x764));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x766 = -1;
	uint32_t x767 = 19U;
	int32_t x768 = -1;

    t168 = ((x765|x766)<=(x767+x768));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x769 = 15LLU;
	static uint64_t x771 = 1410843390082668LLU;

    t169 = ((x769|x770)<=(x771+x772));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x773 = -1;
	volatile int64_t x774 = 620LL;
	static int64_t x775 = -2LL;
	int32_t x776 = INT32_MIN;
	volatile int32_t t170 = 11;

    t170 = ((x773|x774)<=(x775+x776));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x778 = INT64_MIN;
	int16_t x780 = 3;
	static volatile int32_t t171 = -1;

    t171 = ((x777|x778)<=(x779+x780));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x783 = 1U;
	static volatile int32_t t172 = 58382;

    t172 = ((x781|x782)<=(x783+x784));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x785 = UINT16_MAX;
	uint16_t x787 = 22892U;
	int16_t x788 = INT16_MAX;
	volatile int32_t t173 = -409800080;

    t173 = ((x785|x786)<=(x787+x788));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x789 = 3606755901209547LLU;
	uint16_t x790 = 0U;
	int8_t x791 = INT8_MIN;
	static int8_t x792 = 1;

    t174 = ((x789|x790)<=(x791+x792));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x793 = 0;
	int64_t x794 = -1LL;
	static int16_t x795 = -122;
	int32_t x796 = 11898;
	int32_t t175 = 622274418;

    t175 = ((x793|x794)<=(x795+x796));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x797 = UINT64_MAX;
	volatile int16_t x798 = INT16_MAX;
	uint64_t x799 = 82643775363399792LLU;
	int64_t x800 = INT64_MIN;
	static volatile int32_t t176 = 1840175;

    t176 = ((x797|x798)<=(x799+x800));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x801 = INT32_MAX;
	int8_t x802 = -28;
	int32_t x803 = -1;
	static volatile int8_t x804 = INT8_MIN;

    t177 = ((x801|x802)<=(x803+x804));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint64_t x806 = 247628870059646LLU;
	int16_t x807 = INT16_MIN;
	int64_t x808 = 1155955577LL;

    t178 = ((x805|x806)<=(x807+x808));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x810 = INT64_MIN;
	int16_t x811 = INT16_MIN;
	volatile int8_t x812 = -4;

    t179 = ((x809|x810)<=(x811+x812));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x813 = INT8_MIN;
	volatile int32_t x814 = INT32_MIN;
	uint8_t x816 = 3U;
	int32_t t180 = -1120;

    t180 = ((x813|x814)<=(x815+x816));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x818 = UINT16_MAX;
	int64_t x819 = 1027225LL;
	static int16_t x820 = 3192;

    t181 = ((x817|x818)<=(x819+x820));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint64_t x825 = 5751446146LLU;
	volatile int32_t x826 = INT32_MAX;
	uint32_t x828 = 25748U;
	static volatile int32_t t182 = 2;

    t182 = ((x825|x826)<=(x827+x828));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x829 = UINT32_MAX;
	uint16_t x830 = UINT16_MAX;
	int8_t x831 = 1;
	static int32_t t183 = 0;

    t183 = ((x829|x830)<=(x831+x832));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x834 = INT8_MAX;
	uint16_t x835 = 26U;
	int16_t x836 = -1;
	int32_t t184 = -27;

    t184 = ((x833|x834)<=(x835+x836));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x837 = UINT64_MAX;
	static uint8_t x838 = 104U;
	static int32_t x839 = -1;
	int32_t t185 = -11;

    t185 = ((x837|x838)<=(x839+x840));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x842 = UINT16_MAX;
	volatile int32_t t186 = 3406856;

    t186 = ((x841|x842)<=(x843+x844));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x845 = INT16_MIN;
	int64_t x846 = -48847983663LL;
	int8_t x847 = INT8_MIN;
	uint8_t x848 = 0U;
	int32_t t187 = -14525;

    t187 = ((x845|x846)<=(x847+x848));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x849 = INT16_MIN;
	uint32_t x850 = 7953U;
	volatile int16_t x851 = INT16_MAX;
	int32_t t188 = -74850;

    t188 = ((x849|x850)<=(x851+x852));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x853 = 4U;
	volatile int32_t x854 = INT32_MAX;
	int32_t x856 = INT32_MIN;
	volatile int32_t t189 = -58990688;

    t189 = ((x853|x854)<=(x855+x856));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x857 = -21499LL;
	int32_t x858 = -1;
	static uint8_t x859 = 24U;
	uint16_t x860 = 19U;

    t190 = ((x857|x858)<=(x859+x860));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint8_t x861 = UINT8_MAX;
	int16_t x862 = INT16_MAX;
	volatile int32_t x863 = 1423102;
	uint64_t x864 = 102810LLU;
	static int32_t t191 = 2466;

    t191 = ((x861|x862)<=(x863+x864));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x865 = INT16_MAX;
	int64_t x866 = INT64_MAX;
	volatile uint8_t x867 = UINT8_MAX;
	volatile uint64_t x868 = UINT64_MAX;

    t192 = ((x865|x866)<=(x867+x868));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x870 = INT16_MIN;

    t193 = ((x869|x870)<=(x871+x872));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x873 = UINT64_MAX;
	int8_t x875 = INT8_MIN;

    t194 = ((x873|x874)<=(x875+x876));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x877 = -1;
	volatile int32_t x878 = INT32_MAX;
	int32_t x879 = INT32_MIN;
	volatile int32_t t195 = 12472846;

    t195 = ((x877|x878)<=(x879+x880));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x881 = 0U;
	uint16_t x882 = 12352U;
	int8_t x883 = INT8_MAX;
	volatile int64_t x884 = INT64_MIN;

    t196 = ((x881|x882)<=(x883+x884));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x885 = 6450;
	int32_t x886 = 59647272;
	static int64_t x888 = 1LL;
	int32_t t197 = -2;

    t197 = ((x885|x886)<=(x887+x888));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x889 = INT8_MIN;
	static int32_t x890 = INT32_MIN;
	uint64_t x891 = UINT64_MAX;
	int8_t x892 = INT8_MAX;
	volatile int32_t t198 = 575817373;

    t198 = ((x889|x890)<=(x891+x892));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x893 = 1;
	static uint32_t x894 = UINT32_MAX;
	static uint8_t x895 = 11U;
	static volatile int32_t x896 = 131453;
	int32_t t199 = -12228;

    t199 = ((x893|x894)<=(x895+x896));

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

