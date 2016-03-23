
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

static int16_t x3 = INT16_MIN;
int32_t x5 = INT32_MIN;
int16_t x10 = -1;
int32_t x13 = INT32_MIN;
int8_t x16 = 52;
uint8_t x19 = UINT8_MAX;
int32_t x20 = -5;
int32_t t5 = 165;
int64_t x27 = INT64_MAX;
static int32_t t6 = 7;
int16_t x31 = -331;
volatile int32_t t7 = -79560;
volatile int32_t t8 = -6091;
uint8_t x38 = 16U;
static uint16_t x41 = 2045U;
static uint16_t x46 = 25551U;
int16_t x47 = 1184;
int16_t x48 = INT16_MIN;
int64_t x51 = INT64_MIN;
volatile int16_t x53 = 4;
static int64_t x56 = -918310580605312LL;
uint8_t x64 = 1U;
int8_t x66 = 10;
volatile int8_t x69 = -1;
volatile int32_t x70 = INT32_MAX;
volatile int32_t t17 = -2575;
uint16_t x75 = 101U;
static int16_t x88 = -1880;
uint8_t x92 = 3U;
int16_t x97 = 393;
int32_t t25 = -983770938;
volatile int64_t x114 = INT64_MIN;
volatile int8_t x118 = INT8_MAX;
static int32_t t29 = -253218;
int32_t x124 = -4043;
int32_t t30 = -195104721;
static volatile uint32_t x132 = UINT32_MAX;
int32_t x146 = INT32_MAX;
int8_t x147 = -1;
uint16_t x154 = 31029U;
uint8_t x157 = 44U;
volatile int8_t x160 = 6;
int32_t x161 = 897729664;
volatile int64_t x163 = INT64_MAX;
volatile int32_t t44 = -555032402;
int8_t x197 = INT8_MIN;
volatile int16_t x205 = 5121;
int8_t x212 = -1;
uint16_t x217 = UINT16_MAX;
int16_t x220 = -1;
int32_t t53 = 4343197;
uint64_t x223 = UINT64_MAX;
int16_t x240 = -1;
uint32_t x245 = 740736204U;
int8_t x251 = INT8_MIN;
int64_t x252 = INT64_MIN;
int32_t t61 = 1;
int32_t t65 = -410;
int64_t x273 = -1LL;
int16_t x280 = INT16_MIN;
int32_t t68 = 8;
int32_t t69 = 3;
static int64_t x289 = INT64_MIN;
static volatile int8_t x290 = -1;
int16_t x291 = INT16_MIN;
volatile int32_t t70 = 23184575;
static int8_t x298 = INT8_MIN;
volatile int32_t t72 = 3002518;
int32_t x301 = INT32_MIN;
uint16_t x304 = 0U;
static int8_t x306 = INT8_MIN;
uint8_t x311 = 12U;
static int8_t x315 = INT8_MIN;
volatile int32_t t76 = -76;
volatile int32_t x317 = -22739;
int32_t t77 = -1;
int32_t t79 = 127;
static uint16_t x336 = 447U;
static int32_t t81 = 254;
uint16_t x347 = 171U;
volatile int32_t t83 = 11;
uint32_t x355 = 725653279U;
uint8_t x357 = 0U;
static int32_t x358 = 121976074;
static int64_t x361 = -4336038097360550LL;
int8_t x363 = 1;
int32_t x366 = INT32_MAX;
int8_t x367 = 1;
uint32_t x371 = UINT32_MAX;
volatile uint64_t x381 = 12LLU;
static int64_t x396 = 117775LL;
uint16_t x403 = 355U;
int32_t x408 = INT32_MIN;
int32_t t98 = -11;
int32_t x418 = INT32_MAX;
volatile int32_t t100 = -53368;
static int64_t x424 = INT64_MIN;
static int32_t x426 = INT32_MAX;
int64_t x436 = 43517012773423LL;
volatile int32_t x444 = INT32_MAX;
static volatile int64_t x445 = INT64_MIN;
static volatile uint32_t x447 = UINT32_MAX;
int8_t x450 = -1;
int16_t x456 = INT16_MIN;
int32_t t109 = 1;
static uint64_t x457 = 13LLU;
int8_t x464 = INT8_MIN;
int32_t t111 = 2;
uint16_t x469 = 1468U;
volatile uint16_t x471 = UINT16_MAX;
volatile uint32_t x480 = UINT32_MAX;
int32_t x482 = -3820;
static int8_t x491 = INT8_MIN;
uint16_t x499 = 50U;
static int64_t x502 = -57218LL;
int64_t x512 = INT64_MIN;
static volatile int32_t t123 = -66430702;
int16_t x516 = 4;
static volatile int8_t x533 = INT8_MAX;
int16_t x536 = 9518;
uint64_t x538 = 930141900LLU;
int32_t t131 = -7346094;
static int16_t x561 = INT16_MIN;
static uint16_t x578 = UINT16_MAX;
volatile uint16_t x590 = 13U;
uint8_t x591 = 7U;
volatile int32_t x602 = INT32_MAX;
static int64_t x606 = INT64_MIN;
uint32_t x627 = 16U;
static uint64_t x628 = 928124LLU;
int32_t x632 = -1;
static volatile int32_t x639 = -1;
int32_t x642 = INT32_MIN;
volatile int8_t x643 = INT8_MIN;
static uint16_t x645 = 21688U;
uint8_t x647 = 24U;
int32_t t155 = -3503329;
int64_t x655 = INT64_MIN;
static int64_t x659 = INT64_MIN;
int8_t x660 = INT8_MAX;
static int32_t t157 = -14589642;
int64_t x665 = 17507656057066018LL;
uint16_t x667 = 7180U;
uint8_t x669 = 124U;
uint16_t x670 = 7961U;
int64_t x673 = 632739924LL;
int32_t x674 = INT32_MAX;
int8_t x675 = -1;
static int16_t x685 = INT16_MAX;
volatile int8_t x687 = -1;
int8_t x688 = INT8_MIN;
static int64_t x695 = INT64_MIN;
volatile int32_t t166 = -36531215;
volatile int32_t t167 = -2;
int8_t x701 = 0;
int64_t x706 = -30380209602891565LL;
volatile int32_t t169 = 18476112;
int32_t x726 = -776131628;
volatile int64_t x728 = INT64_MIN;
int64_t x733 = INT64_MIN;
static int16_t x738 = -1;
int32_t x739 = INT32_MAX;
uint8_t x742 = UINT8_MAX;
static int16_t x743 = INT16_MAX;
volatile int32_t t177 = 47;
uint16_t x750 = UINT16_MAX;
int8_t x752 = INT8_MIN;
uint16_t x754 = 31U;
uint16_t x777 = UINT16_MAX;
uint8_t x782 = 1U;
uint8_t x784 = 0U;
int16_t x788 = INT16_MIN;
int64_t x793 = -1LL;
int32_t x797 = INT32_MIN;
volatile uint8_t x799 = 13U;
int32_t x809 = INT32_MIN;
static int8_t x819 = 2;
int16_t x820 = 403;
volatile int32_t t197 = -58220;
volatile int8_t x826 = INT8_MIN;
int64_t x830 = INT64_MAX;
static int32_t x832 = -413024333;


void f0(void) {
    	static uint64_t x1 = 15024LLU;
	volatile uint16_t x2 = 20U;
	static int64_t x4 = INT64_MIN;
	int32_t t0 = -4;

    t0 = ((x1!=(x2%x3))!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = -4498572LL;
	uint8_t x7 = UINT8_MAX;
	volatile int8_t x8 = 4;
	static int32_t t1 = 624;

    t1 = ((x5!=(x6%x7))!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MAX;
	int64_t x11 = INT64_MIN;
	int16_t x12 = INT16_MIN;
	int32_t t2 = 1375975;

    t2 = ((x9!=(x10%x11))!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x14 = INT64_MIN;
	uint8_t x15 = UINT8_MAX;
	static volatile int32_t t3 = -19772;

    t3 = ((x13!=(x14%x15))!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -1;
	int32_t x18 = INT32_MIN;
	int32_t t4 = 92693330;

    t4 = ((x17!=(x18%x19))!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = 464;
	volatile uint32_t x22 = 54528U;
	int8_t x23 = INT8_MIN;
	static volatile uint8_t x24 = UINT8_MAX;

    t5 = ((x21!=(x22%x23))!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x25 = INT8_MIN;
	uint16_t x26 = UINT16_MAX;
	volatile uint32_t x28 = 20799143U;

    t6 = ((x25!=(x26%x27))!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MAX;
	int16_t x30 = INT16_MIN;
	uint8_t x32 = 0U;

    t7 = ((x29!=(x30%x31))!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	static int32_t x34 = INT32_MAX;
	int16_t x35 = 3;
	uint64_t x36 = 1618913LLU;

    t8 = ((x33!=(x34%x35))!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MAX;
	uint32_t x39 = 13U;
	int8_t x40 = INT8_MIN;
	static int32_t t9 = 124824830;

    t9 = ((x37!=(x38%x39))!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x42 = UINT32_MAX;
	static int16_t x43 = -9;
	int16_t x44 = 1;
	volatile int32_t t10 = 177216;

    t10 = ((x41!=(x42%x43))!=x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = UINT16_MAX;
	int32_t t11 = 1;

    t11 = ((x45!=(x46%x47))!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x49 = INT32_MIN;
	int8_t x50 = -1;
	int64_t x52 = INT64_MIN;
	int32_t t12 = 573;

    t12 = ((x49!=(x50%x51))!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x54 = -1;
	uint64_t x55 = 27385050574LLU;
	volatile int32_t t13 = -36902798;

    t13 = ((x53!=(x54%x55))!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = 48U;
	int32_t x58 = -1;
	int32_t x59 = INT32_MAX;
	int8_t x60 = INT8_MAX;
	volatile int32_t t14 = -10;

    t14 = ((x57!=(x58%x59))!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = 30070;
	uint32_t x62 = 1022427U;
	int32_t x63 = -471918342;
	static volatile int32_t t15 = 8;

    t15 = ((x61!=(x62%x63))!=x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x65 = -1;
	volatile uint32_t x67 = 1U;
	int16_t x68 = -176;
	volatile int32_t t16 = -246;

    t16 = ((x65!=(x66%x67))!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x71 = -423;
	volatile int32_t x72 = -1;

    t17 = ((x69!=(x70%x71))!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = -11513;
	int8_t x74 = INT8_MIN;
	int8_t x76 = INT8_MIN;
	volatile int32_t t18 = -215;

    t18 = ((x73!=(x74%x75))!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x77 = INT32_MAX;
	int16_t x78 = -1;
	static int8_t x79 = INT8_MAX;
	int16_t x80 = INT16_MAX;
	static int32_t t19 = 0;

    t19 = ((x77!=(x78%x79))!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x81 = INT16_MIN;
	int64_t x82 = -17495650661477656LL;
	uint8_t x83 = 2U;
	int32_t x84 = INT32_MAX;
	int32_t t20 = 6;

    t20 = ((x81!=(x82%x83))!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = -7;
	static int16_t x86 = -1;
	int32_t x87 = INT32_MAX;
	volatile int32_t t21 = -21;

    t21 = ((x85!=(x86%x87))!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = -4;
	static uint16_t x90 = 2822U;
	static volatile int32_t x91 = INT32_MIN;
	volatile int32_t t22 = 43;

    t22 = ((x89!=(x90%x91))!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MIN;
	uint64_t x94 = 1474168529LLU;
	static int8_t x95 = INT8_MIN;
	int8_t x96 = 0;
	volatile int32_t t23 = -1720823;

    t23 = ((x93!=(x94%x95))!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x98 = INT8_MIN;
	uint16_t x99 = 113U;
	int64_t x100 = -1LL;
	volatile int32_t t24 = -74;

    t24 = ((x97!=(x98%x99))!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x101 = 0U;
	int64_t x102 = INT64_MAX;
	int32_t x103 = INT32_MAX;
	uint32_t x104 = UINT32_MAX;

    t25 = ((x101!=(x102%x103))!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int16_t x105 = INT16_MIN;
	static int16_t x106 = 27;
	int64_t x107 = -14309LL;
	uint32_t x108 = UINT32_MAX;
	volatile int32_t t26 = 1262;

    t26 = ((x105!=(x106%x107))!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = 22;
	volatile int16_t x110 = -1601;
	int16_t x111 = INT16_MAX;
	static volatile int64_t x112 = INT64_MIN;
	volatile int32_t t27 = -15054;

    t27 = ((x109!=(x110%x111))!=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x113 = 197309864842LLU;
	volatile uint8_t x115 = 1U;
	static volatile int64_t x116 = 2155921525LL;
	volatile int32_t t28 = -5899;

    t28 = ((x113!=(x114%x115))!=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = INT64_MIN;
	volatile uint64_t x119 = 285501151LLU;
	int32_t x120 = INT32_MIN;

    t29 = ((x117!=(x118%x119))!=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x121 = INT64_MIN;
	uint64_t x122 = 588082LLU;
	static int16_t x123 = INT16_MIN;

    t30 = ((x121!=(x122%x123))!=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MIN;
	uint64_t x126 = 14424110465LLU;
	int32_t x127 = INT32_MIN;
	int64_t x128 = -1LL;
	int32_t t31 = -3416482;

    t31 = ((x125!=(x126%x127))!=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x129 = 41U;
	int64_t x130 = INT64_MIN;
	int8_t x131 = 1;
	static int32_t t32 = 2497;

    t32 = ((x129!=(x130%x131))!=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MAX;
	int8_t x134 = 0;
	uint16_t x135 = 834U;
	uint64_t x136 = 4LLU;
	int32_t t33 = -1;

    t33 = ((x133!=(x134%x135))!=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = INT64_MIN;
	uint16_t x138 = 863U;
	int8_t x139 = 1;
	static int64_t x140 = -10666057120404165LL;
	static volatile int32_t t34 = -994;

    t34 = ((x137!=(x138%x139))!=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = -1LL;
	uint16_t x142 = 20U;
	int8_t x143 = INT8_MAX;
	uint32_t x144 = 2123489791U;
	volatile int32_t t35 = -16290;

    t35 = ((x141!=(x142%x143))!=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x145 = -174089;
	int64_t x148 = INT64_MIN;
	volatile int32_t t36 = 0;

    t36 = ((x145!=(x146%x147))!=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x149 = -1;
	uint8_t x150 = 74U;
	static volatile int64_t x151 = 142389873478962LL;
	int16_t x152 = 495;
	volatile int32_t t37 = -2982663;

    t37 = ((x149!=(x150%x151))!=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x153 = INT64_MIN;
	int32_t x155 = -1;
	static volatile int64_t x156 = INT64_MIN;
	static volatile int32_t t38 = 439989512;

    t38 = ((x153!=(x154%x155))!=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x158 = UINT8_MAX;
	volatile uint32_t x159 = 12300U;
	int32_t t39 = -2986;

    t39 = ((x157!=(x158%x159))!=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x162 = INT64_MIN;
	static uint64_t x164 = UINT64_MAX;
	int32_t t40 = 560;

    t40 = ((x161!=(x162%x163))!=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x165 = UINT64_MAX;
	uint8_t x166 = UINT8_MAX;
	uint16_t x167 = UINT16_MAX;
	int32_t x168 = -120;
	int32_t t41 = 100187;

    t41 = ((x165!=(x166%x167))!=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x169 = 11367U;
	static uint8_t x170 = 9U;
	int8_t x171 = -1;
	int32_t x172 = INT32_MAX;
	volatile int32_t t42 = -7;

    t42 = ((x169!=(x170%x171))!=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x173 = -503856928;
	static int32_t x174 = -3160;
	int64_t x175 = 2201832763696380LL;
	int16_t x176 = -319;
	static volatile int32_t t43 = 439649;

    t43 = ((x173!=(x174%x175))!=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x181 = INT8_MAX;
	static int32_t x182 = 851576;
	static int8_t x183 = INT8_MAX;
	static volatile int32_t x184 = -1;

    t44 = ((x181!=(x182%x183))!=x184);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x185 = -1;
	volatile int8_t x186 = INT8_MIN;
	uint32_t x187 = 51U;
	uint16_t x188 = 7032U;
	volatile int32_t t45 = -855981;

    t45 = ((x185!=(x186%x187))!=x188);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x189 = INT32_MIN;
	static volatile uint8_t x190 = UINT8_MAX;
	int16_t x191 = -1;
	static int8_t x192 = -1;
	volatile int32_t t46 = 60318;

    t46 = ((x189!=(x190%x191))!=x192);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x193 = INT64_MIN;
	static int64_t x194 = -1LL;
	int32_t x195 = INT32_MAX;
	volatile int16_t x196 = INT16_MAX;
	volatile int32_t t47 = -385915647;

    t47 = ((x193!=(x194%x195))!=x196);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x198 = 0U;
	static uint32_t x199 = UINT32_MAX;
	uint64_t x200 = 3646867511192325LLU;
	volatile int32_t t48 = 113113;

    t48 = ((x197!=(x198%x199))!=x200);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x201 = 5;
	uint16_t x202 = 11355U;
	int64_t x203 = -1LL;
	int32_t x204 = -611;
	volatile int32_t t49 = -2947;

    t49 = ((x201!=(x202%x203))!=x204);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x206 = -1LL;
	static uint8_t x207 = 2U;
	static int32_t x208 = 224621;
	volatile int32_t t50 = 1537477;

    t50 = ((x205!=(x206%x207))!=x208);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x209 = 838641385074301200LLU;
	int64_t x210 = -1LL;
	int8_t x211 = INT8_MIN;
	static volatile int32_t t51 = -163556;

    t51 = ((x209!=(x210%x211))!=x212);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x213 = 1227103091985LL;
	int64_t x214 = INT64_MIN;
	static int64_t x215 = -573481563499838LL;
	uint32_t x216 = UINT32_MAX;
	int32_t t52 = 411100502;

    t52 = ((x213!=(x214%x215))!=x216);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x218 = 985867928U;
	static uint32_t x219 = 191395U;

    t53 = ((x217!=(x218%x219))!=x220);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x221 = INT8_MIN;
	uint32_t x222 = 7U;
	int8_t x224 = 1;
	static int32_t t54 = -660647974;

    t54 = ((x221!=(x222%x223))!=x224);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint64_t x225 = UINT64_MAX;
	int16_t x226 = INT16_MIN;
	static int8_t x227 = -1;
	int64_t x228 = INT64_MAX;
	int32_t t55 = 1205147;

    t55 = ((x225!=(x226%x227))!=x228);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int8_t x229 = INT8_MIN;
	int16_t x230 = 2843;
	uint8_t x231 = UINT8_MAX;
	int32_t x232 = INT32_MIN;
	static int32_t t56 = 1;

    t56 = ((x229!=(x230%x231))!=x232);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x233 = INT16_MIN;
	int8_t x234 = 8;
	static int64_t x235 = INT64_MAX;
	int32_t x236 = INT32_MIN;
	static int32_t t57 = 6;

    t57 = ((x233!=(x234%x235))!=x236);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x237 = UINT8_MAX;
	static int8_t x238 = 1;
	uint16_t x239 = 54U;
	int32_t t58 = -19;

    t58 = ((x237!=(x238%x239))!=x240);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int8_t x241 = INT8_MIN;
	static int16_t x242 = INT16_MAX;
	int16_t x243 = 9;
	uint64_t x244 = UINT64_MAX;
	int32_t t59 = -114;

    t59 = ((x241!=(x242%x243))!=x244);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x246 = INT64_MAX;
	volatile uint16_t x247 = UINT16_MAX;
	int32_t x248 = INT32_MIN;
	int32_t t60 = -8;

    t60 = ((x245!=(x246%x247))!=x248);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x249 = INT64_MIN;
	int32_t x250 = 745;

    t61 = ((x249!=(x250%x251))!=x252);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x257 = 1979303LLU;
	static int16_t x258 = INT16_MIN;
	uint8_t x259 = UINT8_MAX;
	int16_t x260 = -1;
	volatile int32_t t62 = -3029150;

    t62 = ((x257!=(x258%x259))!=x260);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x261 = 37;
	int32_t x262 = 742901;
	int64_t x263 = INT64_MIN;
	volatile int8_t x264 = -1;
	volatile int32_t t63 = 4379;

    t63 = ((x261!=(x262%x263))!=x264);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x265 = INT16_MAX;
	static int32_t x266 = -1;
	uint64_t x267 = UINT64_MAX;
	uint16_t x268 = 32U;
	volatile int32_t t64 = 345378500;

    t64 = ((x265!=(x266%x267))!=x268);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x269 = INT32_MAX;
	static int16_t x270 = INT16_MAX;
	int64_t x271 = INT64_MAX;
	static int8_t x272 = INT8_MAX;

    t65 = ((x269!=(x270%x271))!=x272);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x274 = -1;
	volatile uint32_t x275 = 25774812U;
	int32_t x276 = -1;
	volatile int32_t t66 = -3116118;

    t66 = ((x273!=(x274%x275))!=x276);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x277 = -1LL;
	int64_t x278 = INT64_MIN;
	int32_t x279 = INT32_MAX;
	int32_t t67 = -14;

    t67 = ((x277!=(x278%x279))!=x280);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x281 = -83;
	int16_t x282 = INT16_MIN;
	static int8_t x283 = INT8_MIN;
	uint32_t x284 = 16U;

    t68 = ((x281!=(x282%x283))!=x284);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x285 = 160;
	uint64_t x286 = 15LLU;
	int16_t x287 = INT16_MAX;
	int32_t x288 = INT32_MIN;

    t69 = ((x285!=(x286%x287))!=x288);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x292 = 1440358619101404518LLU;

    t70 = ((x289!=(x290%x291))!=x292);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x293 = INT32_MAX;
	volatile uint16_t x294 = UINT16_MAX;
	int8_t x295 = 12;
	volatile int32_t x296 = INT32_MIN;
	volatile int32_t t71 = -775742011;

    t71 = ((x293!=(x294%x295))!=x296);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x297 = -1;
	int8_t x299 = INT8_MIN;
	static int64_t x300 = INT64_MAX;

    t72 = ((x297!=(x298%x299))!=x300);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x302 = -1;
	int8_t x303 = INT8_MIN;
	int32_t t73 = -10;

    t73 = ((x301!=(x302%x303))!=x304);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x305 = -1494202;
	static uint32_t x307 = UINT32_MAX;
	int8_t x308 = INT8_MIN;
	volatile int32_t t74 = -12227;

    t74 = ((x305!=(x306%x307))!=x308);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x309 = -1191;
	uint64_t x310 = UINT64_MAX;
	int64_t x312 = -26551LL;
	static int32_t t75 = 2405;

    t75 = ((x309!=(x310%x311))!=x312);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x313 = -1;
	static volatile int8_t x314 = -36;
	uint32_t x316 = UINT32_MAX;

    t76 = ((x313!=(x314%x315))!=x316);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint8_t x318 = 3U;
	int32_t x319 = -1;
	int64_t x320 = INT64_MIN;

    t77 = ((x317!=(x318%x319))!=x320);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x321 = 4068U;
	uint64_t x322 = 844123LLU;
	int32_t x323 = -1265;
	static uint8_t x324 = UINT8_MAX;
	int32_t t78 = -1;

    t78 = ((x321!=(x322%x323))!=x324);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x325 = INT8_MIN;
	int64_t x326 = -761788315287513LL;
	uint8_t x327 = UINT8_MAX;
	volatile int32_t x328 = 0;

    t79 = ((x325!=(x326%x327))!=x328);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x333 = 2;
	int16_t x334 = INT16_MAX;
	volatile int8_t x335 = INT8_MAX;
	int32_t t80 = -1;

    t80 = ((x333!=(x334%x335))!=x336);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x337 = 1;
	volatile uint32_t x338 = 39126233U;
	int64_t x339 = -3992755924207608499LL;
	uint16_t x340 = 2U;

    t81 = ((x337!=(x338%x339))!=x340);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x341 = UINT8_MAX;
	volatile int8_t x342 = -57;
	static uint64_t x343 = 101591118958LLU;
	uint16_t x344 = UINT16_MAX;
	int32_t t82 = -142;

    t82 = ((x341!=(x342%x343))!=x344);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x345 = INT8_MIN;
	int8_t x346 = INT8_MIN;
	uint32_t x348 = 30U;

    t83 = ((x345!=(x346%x347))!=x348);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x349 = UINT8_MAX;
	uint64_t x350 = 467LLU;
	int64_t x351 = 203LL;
	uint8_t x352 = 1U;
	int32_t t84 = -512687271;

    t84 = ((x349!=(x350%x351))!=x352);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x353 = 54524LLU;
	uint8_t x354 = 66U;
	int16_t x356 = -92;
	int32_t t85 = -212887;

    t85 = ((x353!=(x354%x355))!=x356);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x359 = INT16_MAX;
	uint16_t x360 = UINT16_MAX;
	static volatile int32_t t86 = -641;

    t86 = ((x357!=(x358%x359))!=x360);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x362 = INT32_MIN;
	int8_t x364 = INT8_MAX;
	volatile int32_t t87 = -1776676;

    t87 = ((x361!=(x362%x363))!=x364);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x365 = 767;
	static int64_t x368 = INT64_MIN;
	volatile int32_t t88 = -130432;

    t88 = ((x365!=(x366%x367))!=x368);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x369 = -8LL;
	int32_t x370 = -1013449;
	int16_t x372 = INT16_MIN;
	int32_t t89 = -4161023;

    t89 = ((x369!=(x370%x371))!=x372);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x373 = INT16_MAX;
	uint16_t x374 = 11U;
	static int8_t x375 = 2;
	volatile int8_t x376 = INT8_MIN;
	volatile int32_t t90 = 4831568;

    t90 = ((x373!=(x374%x375))!=x376);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x377 = INT8_MAX;
	int64_t x378 = INT64_MAX;
	static int32_t x379 = INT32_MIN;
	uint8_t x380 = 12U;
	static volatile int32_t t91 = 23358;

    t91 = ((x377!=(x378%x379))!=x380);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile uint32_t x382 = 63U;
	uint64_t x383 = 210494152837222281LLU;
	static uint64_t x384 = 893LLU;
	volatile int32_t t92 = -1;

    t92 = ((x381!=(x382%x383))!=x384);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x385 = INT64_MIN;
	int8_t x386 = -8;
	volatile uint16_t x387 = UINT16_MAX;
	int32_t x388 = -867527258;
	volatile int32_t t93 = 55484;

    t93 = ((x385!=(x386%x387))!=x388);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x389 = UINT8_MAX;
	volatile int64_t x390 = -1LL;
	static volatile uint64_t x391 = 3LLU;
	volatile int64_t x392 = INT64_MIN;
	volatile int32_t t94 = 102465962;

    t94 = ((x389!=(x390%x391))!=x392);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x393 = -1;
	volatile int32_t x394 = -439401770;
	uint8_t x395 = 28U;
	volatile int32_t t95 = 94684;

    t95 = ((x393!=(x394%x395))!=x396);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x401 = INT64_MAX;
	int64_t x402 = 51565597587972608LL;
	int8_t x404 = INT8_MIN;
	int32_t t96 = -1248510;

    t96 = ((x401!=(x402%x403))!=x404);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x405 = UINT64_MAX;
	uint16_t x406 = 3U;
	static int16_t x407 = -1;
	static int32_t t97 = 903385;

    t97 = ((x405!=(x406%x407))!=x408);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x409 = INT16_MIN;
	int64_t x410 = INT64_MIN;
	int16_t x411 = -1;
	uint32_t x412 = 5310U;

    t98 = ((x409!=(x410%x411))!=x412);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x413 = 1U;
	int8_t x414 = 3;
	volatile uint32_t x415 = UINT32_MAX;
	uint16_t x416 = UINT16_MAX;
	volatile int32_t t99 = 12629;

    t99 = ((x413!=(x414%x415))!=x416);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x417 = -82204543566995909LL;
	int8_t x419 = -11;
	int64_t x420 = INT64_MIN;

    t100 = ((x417!=(x418%x419))!=x420);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x421 = INT64_MIN;
	static uint16_t x422 = 462U;
	uint64_t x423 = 437655LLU;
	int32_t t101 = -932922;

    t101 = ((x421!=(x422%x423))!=x424);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x425 = INT64_MAX;
	int32_t x427 = -1;
	uint64_t x428 = 94194376902311104LLU;
	int32_t t102 = -463486;

    t102 = ((x425!=(x426%x427))!=x428);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x429 = -6;
	static uint16_t x430 = UINT16_MAX;
	int8_t x431 = -1;
	uint32_t x432 = 219U;
	int32_t t103 = -4286;

    t103 = ((x429!=(x430%x431))!=x432);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x433 = -2013477;
	uint16_t x434 = 54U;
	volatile uint16_t x435 = 3973U;
	static volatile int32_t t104 = 291452;

    t104 = ((x433!=(x434%x435))!=x436);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x437 = INT64_MIN;
	static volatile int16_t x438 = -1;
	int32_t x439 = INT32_MIN;
	int32_t x440 = -1;
	int32_t t105 = -11441076;

    t105 = ((x437!=(x438%x439))!=x440);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x441 = 29028498U;
	int8_t x442 = 0;
	volatile int32_t x443 = -1;
	static int32_t t106 = 3670;

    t106 = ((x441!=(x442%x443))!=x444);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x446 = -164958361;
	static int32_t x448 = INT32_MAX;
	volatile int32_t t107 = -200806686;

    t107 = ((x445!=(x446%x447))!=x448);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x449 = INT64_MIN;
	int16_t x451 = INT16_MAX;
	int8_t x452 = 5;
	static int32_t t108 = 19407;

    t108 = ((x449!=(x450%x451))!=x452);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x453 = INT16_MIN;
	uint8_t x454 = 1U;
	uint32_t x455 = 19194U;

    t109 = ((x453!=(x454%x455))!=x456);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x458 = INT16_MIN;
	int16_t x459 = 2;
	int64_t x460 = -1LL;
	volatile int32_t t110 = -57;

    t110 = ((x457!=(x458%x459))!=x460);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x461 = 273U;
	int8_t x462 = INT8_MIN;
	volatile int64_t x463 = INT64_MIN;

    t111 = ((x461!=(x462%x463))!=x464);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x465 = INT16_MIN;
	int16_t x466 = -7;
	volatile int64_t x467 = 428682794485173LL;
	int16_t x468 = INT16_MIN;
	static int32_t t112 = -4128574;

    t112 = ((x465!=(x466%x467))!=x468);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x470 = 889U;
	int8_t x472 = 30;
	static int32_t t113 = 227860;

    t113 = ((x469!=(x470%x471))!=x472);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x473 = -1LL;
	volatile int64_t x474 = -1LL;
	uint16_t x475 = 11423U;
	int32_t x476 = -3620;
	int32_t t114 = -154;

    t114 = ((x473!=(x474%x475))!=x476);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x477 = -29;
	uint64_t x478 = UINT64_MAX;
	int64_t x479 = -460870313972LL;
	static volatile int32_t t115 = -1;

    t115 = ((x477!=(x478%x479))!=x480);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x481 = UINT32_MAX;
	int16_t x483 = INT16_MIN;
	int16_t x484 = INT16_MIN;
	volatile int32_t t116 = -11523373;

    t116 = ((x481!=(x482%x483))!=x484);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x485 = UINT64_MAX;
	volatile int64_t x486 = INT64_MAX;
	volatile int64_t x487 = INT64_MIN;
	volatile uint64_t x488 = UINT64_MAX;
	volatile int32_t t117 = -1031606;

    t117 = ((x485!=(x486%x487))!=x488);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x489 = 82U;
	volatile uint16_t x490 = 14U;
	static uint8_t x492 = 0U;
	volatile int32_t t118 = -60;

    t118 = ((x489!=(x490%x491))!=x492);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x493 = INT16_MIN;
	int64_t x494 = -1LL;
	volatile int16_t x495 = INT16_MAX;
	uint8_t x496 = 3U;
	volatile int32_t t119 = -41525158;

    t119 = ((x493!=(x494%x495))!=x496);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x497 = INT8_MIN;
	uint32_t x498 = 358U;
	static volatile uint16_t x500 = 184U;
	int32_t t120 = -281918552;

    t120 = ((x497!=(x498%x499))!=x500);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x501 = 56;
	static int64_t x503 = -1LL;
	int64_t x504 = 3LL;
	int32_t t121 = 126;

    t121 = ((x501!=(x502%x503))!=x504);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x505 = INT64_MAX;
	int64_t x506 = -1LL;
	int8_t x507 = INT8_MIN;
	int8_t x508 = 5;
	int32_t t122 = 938608936;

    t122 = ((x505!=(x506%x507))!=x508);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x509 = INT8_MAX;
	int16_t x510 = -1;
	uint32_t x511 = 1484255177U;

    t123 = ((x509!=(x510%x511))!=x512);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x513 = 176064533U;
	int64_t x514 = -1LL;
	int8_t x515 = INT8_MIN;
	static int32_t t124 = -338589088;

    t124 = ((x513!=(x514%x515))!=x516);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x521 = INT32_MIN;
	volatile int64_t x522 = 2245406898438LL;
	int8_t x523 = 24;
	int64_t x524 = INT64_MAX;
	static volatile int32_t t125 = -10;

    t125 = ((x521!=(x522%x523))!=x524);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x529 = -1;
	int64_t x530 = 24349590210210034LL;
	int32_t x531 = -1;
	static uint8_t x532 = UINT8_MAX;
	volatile int32_t t126 = 1;

    t126 = ((x529!=(x530%x531))!=x532);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x534 = -1191686073LL;
	int64_t x535 = INT64_MIN;
	volatile int32_t t127 = -24098364;

    t127 = ((x533!=(x534%x535))!=x536);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x537 = 1;
	uint16_t x539 = 18390U;
	volatile int16_t x540 = INT16_MIN;
	volatile int32_t t128 = -7;

    t128 = ((x537!=(x538%x539))!=x540);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x541 = INT8_MAX;
	int16_t x542 = INT16_MIN;
	uint32_t x543 = 7687U;
	int64_t x544 = -198LL;
	int32_t t129 = 948204;

    t129 = ((x541!=(x542%x543))!=x544);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x545 = INT8_MAX;
	uint16_t x546 = 10526U;
	static uint32_t x547 = 4255U;
	uint32_t x548 = 151719096U;
	int32_t t130 = -3031;

    t130 = ((x545!=(x546%x547))!=x548);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x549 = 169LL;
	int64_t x550 = INT64_MAX;
	uint32_t x551 = 6U;
	volatile int8_t x552 = INT8_MIN;

    t131 = ((x549!=(x550%x551))!=x552);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x553 = 170U;
	int64_t x554 = -7297098893LL;
	uint64_t x555 = 889LLU;
	int8_t x556 = INT8_MAX;
	int32_t t132 = -364;

    t132 = ((x553!=(x554%x555))!=x556);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x557 = INT8_MAX;
	int16_t x558 = INT16_MAX;
	volatile int16_t x559 = 13439;
	int16_t x560 = 125;
	int32_t t133 = -43835;

    t133 = ((x557!=(x558%x559))!=x560);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x562 = INT32_MIN;
	volatile int16_t x563 = -23;
	volatile uint8_t x564 = UINT8_MAX;
	static volatile int32_t t134 = 39;

    t134 = ((x561!=(x562%x563))!=x564);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x565 = -6;
	int16_t x566 = INT16_MAX;
	int16_t x567 = 10;
	uint8_t x568 = 30U;
	int32_t t135 = -129;

    t135 = ((x565!=(x566%x567))!=x568);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int32_t x569 = INT32_MAX;
	static int16_t x570 = -1;
	uint8_t x571 = 56U;
	uint8_t x572 = 1U;
	int32_t t136 = -7795;

    t136 = ((x569!=(x570%x571))!=x572);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x573 = INT64_MAX;
	int8_t x574 = INT8_MAX;
	int16_t x575 = INT16_MIN;
	int32_t x576 = 2026426;
	volatile int32_t t137 = -78572;

    t137 = ((x573!=(x574%x575))!=x576);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x577 = -1;
	volatile int64_t x579 = INT64_MIN;
	uint64_t x580 = UINT64_MAX;
	int32_t t138 = 279;

    t138 = ((x577!=(x578%x579))!=x580);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x581 = UINT64_MAX;
	static int64_t x582 = -2272842825647874219LL;
	static int64_t x583 = 41LL;
	int64_t x584 = 25LL;
	volatile int32_t t139 = -7854;

    t139 = ((x581!=(x582%x583))!=x584);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x585 = INT16_MIN;
	int16_t x586 = INT16_MAX;
	int16_t x587 = 2366;
	static int64_t x588 = INT64_MIN;
	volatile int32_t t140 = -657;

    t140 = ((x585!=(x586%x587))!=x588);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x589 = INT8_MIN;
	static int16_t x592 = -70;
	int32_t t141 = 98112902;

    t141 = ((x589!=(x590%x591))!=x592);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x593 = INT8_MIN;
	volatile uint8_t x594 = 1U;
	static int16_t x595 = INT16_MIN;
	uint8_t x596 = 3U;
	volatile int32_t t142 = -6117;

    t142 = ((x593!=(x594%x595))!=x596);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint8_t x597 = UINT8_MAX;
	int64_t x598 = INT64_MIN;
	uint32_t x599 = 9U;
	static uint32_t x600 = 3U;
	static volatile int32_t t143 = -8188615;

    t143 = ((x597!=(x598%x599))!=x600);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x601 = INT16_MIN;
	volatile uint32_t x603 = UINT32_MAX;
	uint64_t x604 = 318260287485088875LLU;
	int32_t t144 = -176232;

    t144 = ((x601!=(x602%x603))!=x604);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x605 = -1;
	uint64_t x607 = 65260341924154997LLU;
	int64_t x608 = -1LL;
	volatile int32_t t145 = 558642;

    t145 = ((x605!=(x606%x607))!=x608);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x609 = 2331927LL;
	uint64_t x610 = 785361LLU;
	uint64_t x611 = UINT64_MAX;
	int16_t x612 = -3174;
	volatile int32_t t146 = -604;

    t146 = ((x609!=(x610%x611))!=x612);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x613 = 927693;
	uint32_t x614 = 451384579U;
	uint16_t x615 = 120U;
	uint16_t x616 = 16266U;
	volatile int32_t t147 = 11942440;

    t147 = ((x613!=(x614%x615))!=x616);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint64_t x621 = 3787416498LLU;
	static volatile uint32_t x622 = 57U;
	static int8_t x623 = INT8_MIN;
	uint32_t x624 = 13U;
	volatile int32_t t148 = -684364723;

    t148 = ((x621!=(x622%x623))!=x624);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x625 = -1;
	static volatile int64_t x626 = 2LL;
	int32_t t149 = 488815436;

    t149 = ((x625!=(x626%x627))!=x628);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x629 = -1LL;
	int32_t x630 = 79330;
	volatile int64_t x631 = INT64_MIN;
	int32_t t150 = -4853336;

    t150 = ((x629!=(x630%x631))!=x632);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x633 = -11576564;
	static int16_t x634 = INT16_MIN;
	int16_t x635 = 1691;
	volatile int64_t x636 = 529583374698LL;
	static volatile int32_t t151 = 30008107;

    t151 = ((x633!=(x634%x635))!=x636);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x637 = INT8_MAX;
	int16_t x638 = 35;
	volatile int32_t x640 = INT32_MAX;
	int32_t t152 = 16;

    t152 = ((x637!=(x638%x639))!=x640);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x641 = INT8_MIN;
	uint32_t x644 = 12591U;
	volatile int32_t t153 = 47;

    t153 = ((x641!=(x642%x643))!=x644);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x646 = -1602LL;
	uint16_t x648 = 14076U;
	volatile int32_t t154 = 1;

    t154 = ((x645!=(x646%x647))!=x648);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x649 = -27;
	volatile int16_t x650 = -35;
	volatile int64_t x651 = INT64_MAX;
	uint16_t x652 = 15010U;

    t155 = ((x649!=(x650%x651))!=x652);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x653 = INT32_MAX;
	int16_t x654 = INT16_MIN;
	volatile int32_t x656 = INT32_MIN;
	static volatile int32_t t156 = -162173106;

    t156 = ((x653!=(x654%x655))!=x656);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x657 = UINT8_MAX;
	volatile uint64_t x658 = 7976207457309961LLU;

    t157 = ((x657!=(x658%x659))!=x660);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x661 = UINT32_MAX;
	volatile int32_t x662 = -1;
	int64_t x663 = INT64_MIN;
	int32_t x664 = -1;
	int32_t t158 = -1099;

    t158 = ((x661!=(x662%x663))!=x664);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int32_t x666 = INT32_MIN;
	int8_t x668 = INT8_MAX;
	static volatile int32_t t159 = -437544;

    t159 = ((x665!=(x666%x667))!=x668);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x671 = -2840780;
	int16_t x672 = -1;
	int32_t t160 = -1;

    t160 = ((x669!=(x670%x671))!=x672);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x676 = UINT64_MAX;
	static volatile int32_t t161 = -1;

    t161 = ((x673!=(x674%x675))!=x676);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x677 = -3;
	static int8_t x678 = INT8_MIN;
	int8_t x679 = INT8_MIN;
	volatile int32_t x680 = INT32_MAX;
	volatile int32_t t162 = -675758;

    t162 = ((x677!=(x678%x679))!=x680);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x681 = 0LL;
	int16_t x682 = -1;
	int16_t x683 = INT16_MIN;
	volatile int64_t x684 = INT64_MIN;
	int32_t t163 = -13344;

    t163 = ((x681!=(x682%x683))!=x684);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x686 = INT8_MIN;
	int32_t t164 = 200487;

    t164 = ((x685!=(x686%x687))!=x688);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x689 = UINT64_MAX;
	int64_t x690 = -1LL;
	volatile uint16_t x691 = UINT16_MAX;
	int64_t x692 = INT64_MIN;
	static volatile int32_t t165 = 63899113;

    t165 = ((x689!=(x690%x691))!=x692);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x693 = -857428114245973423LL;
	uint32_t x694 = 234U;
	volatile uint32_t x696 = UINT32_MAX;

    t166 = ((x693!=(x694%x695))!=x696);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x697 = -119172019655LL;
	int32_t x698 = -1;
	volatile uint32_t x699 = 57120U;
	static int16_t x700 = INT16_MIN;

    t167 = ((x697!=(x698%x699))!=x700);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x702 = INT64_MIN;
	static volatile int8_t x703 = INT8_MIN;
	int64_t x704 = -1LL;
	volatile int32_t t168 = 117807495;

    t168 = ((x701!=(x702%x703))!=x704);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x705 = INT64_MIN;
	int64_t x707 = -1LL;
	int16_t x708 = -1240;

    t169 = ((x705!=(x706%x707))!=x708);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x713 = 7U;
	volatile int8_t x714 = -1;
	volatile uint32_t x715 = 948U;
	int8_t x716 = -12;
	static int32_t t170 = 201035;

    t170 = ((x713!=(x714%x715))!=x716);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x717 = INT64_MAX;
	int8_t x718 = -1;
	uint64_t x719 = UINT64_MAX;
	static int8_t x720 = INT8_MAX;
	volatile int32_t t171 = -212010255;

    t171 = ((x717!=(x718%x719))!=x720);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x721 = INT64_MIN;
	volatile int16_t x722 = -183;
	volatile int64_t x723 = 69146462225LL;
	volatile uint64_t x724 = UINT64_MAX;
	static int32_t t172 = 627660;

    t172 = ((x721!=(x722%x723))!=x724);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x725 = 11651;
	static uint16_t x727 = UINT16_MAX;
	volatile int32_t t173 = 950450;

    t173 = ((x725!=(x726%x727))!=x728);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x729 = INT8_MIN;
	int8_t x730 = -1;
	int64_t x731 = INT64_MIN;
	int8_t x732 = INT8_MIN;
	volatile int32_t t174 = -50;

    t174 = ((x729!=(x730%x731))!=x732);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x734 = -87921LL;
	uint32_t x735 = 367017458U;
	uint8_t x736 = 61U;
	int32_t t175 = 117;

    t175 = ((x733!=(x734%x735))!=x736);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x737 = -6;
	static int16_t x740 = 105;
	int32_t t176 = -8;

    t176 = ((x737!=(x738%x739))!=x740);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x741 = 74U;
	int32_t x744 = INT32_MIN;

    t177 = ((x741!=(x742%x743))!=x744);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x745 = -3;
	int64_t x746 = INT64_MIN;
	uint32_t x747 = 272688436U;
	uint64_t x748 = UINT64_MAX;
	static int32_t t178 = -1006;

    t178 = ((x745!=(x746%x747))!=x748);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x749 = UINT64_MAX;
	uint8_t x751 = UINT8_MAX;
	int32_t t179 = 517390;

    t179 = ((x749!=(x750%x751))!=x752);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x753 = 14U;
	int64_t x755 = INT64_MAX;
	int8_t x756 = INT8_MAX;
	volatile int32_t t180 = 244062409;

    t180 = ((x753!=(x754%x755))!=x756);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint64_t x757 = UINT64_MAX;
	uint32_t x758 = 1916687U;
	volatile int64_t x759 = -9075744557LL;
	int64_t x760 = 113LL;
	int32_t t181 = -504918;

    t181 = ((x757!=(x758%x759))!=x760);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x761 = -1;
	volatile uint64_t x762 = 21658LLU;
	static int16_t x763 = INT16_MIN;
	int16_t x764 = INT16_MAX;
	volatile int32_t t182 = 121;

    t182 = ((x761!=(x762%x763))!=x764);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x765 = 115U;
	int32_t x766 = INT32_MAX;
	volatile uint16_t x767 = 30U;
	uint16_t x768 = 885U;
	volatile int32_t t183 = -368959462;

    t183 = ((x765!=(x766%x767))!=x768);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int32_t x769 = INT32_MIN;
	static uint32_t x770 = UINT32_MAX;
	uint16_t x771 = UINT16_MAX;
	uint8_t x772 = 63U;
	volatile int32_t t184 = 106;

    t184 = ((x769!=(x770%x771))!=x772);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x773 = -1;
	int64_t x774 = INT64_MIN;
	int64_t x775 = INT64_MIN;
	int16_t x776 = INT16_MAX;
	volatile int32_t t185 = -957;

    t185 = ((x773!=(x774%x775))!=x776);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x778 = INT32_MAX;
	uint8_t x779 = UINT8_MAX;
	uint64_t x780 = 2489352LLU;
	static int32_t t186 = 2009913;

    t186 = ((x777!=(x778%x779))!=x780);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x781 = INT8_MIN;
	uint32_t x783 = 157U;
	volatile int32_t t187 = -20;

    t187 = ((x781!=(x782%x783))!=x784);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x785 = INT16_MIN;
	static int64_t x786 = -1LL;
	int8_t x787 = INT8_MIN;
	int32_t t188 = 73557046;

    t188 = ((x785!=(x786%x787))!=x788);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x789 = 513043526253LLU;
	int32_t x790 = INT32_MIN;
	uint32_t x791 = UINT32_MAX;
	volatile int16_t x792 = INT16_MAX;
	volatile int32_t t189 = 15024;

    t189 = ((x789!=(x790%x791))!=x792);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x794 = -1LL;
	uint32_t x795 = 725640U;
	int32_t x796 = 72502;
	int32_t t190 = 83;

    t190 = ((x793!=(x794%x795))!=x796);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x798 = 0;
	int64_t x800 = 3205823434LL;
	volatile int32_t t191 = -1418620;

    t191 = ((x797!=(x798%x799))!=x800);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x801 = 5;
	volatile uint32_t x802 = UINT32_MAX;
	int16_t x803 = -234;
	int8_t x804 = INT8_MIN;
	int32_t t192 = 24;

    t192 = ((x801!=(x802%x803))!=x804);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x805 = -1;
	int8_t x806 = -1;
	int8_t x807 = -1;
	int16_t x808 = 658;
	static int32_t t193 = 59680;

    t193 = ((x805!=(x806%x807))!=x808);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint32_t x810 = UINT32_MAX;
	volatile int16_t x811 = INT16_MAX;
	int32_t x812 = INT32_MIN;
	volatile int32_t t194 = -54748956;

    t194 = ((x809!=(x810%x811))!=x812);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x813 = 62U;
	int32_t x814 = INT32_MIN;
	static int64_t x815 = -1LL;
	int32_t x816 = -1;
	int32_t t195 = -510362385;

    t195 = ((x813!=(x814%x815))!=x816);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x817 = -1;
	volatile int16_t x818 = INT16_MAX;
	volatile int32_t t196 = 176;

    t196 = ((x817!=(x818%x819))!=x820);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x821 = 193LLU;
	uint16_t x822 = 7U;
	volatile int16_t x823 = INT16_MIN;
	volatile uint8_t x824 = 20U;

    t197 = ((x821!=(x822%x823))!=x824);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x825 = INT64_MIN;
	uint64_t x827 = 891800585262LLU;
	int16_t x828 = INT16_MIN;
	int32_t t198 = 8;

    t198 = ((x825!=(x826%x827))!=x828);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x829 = UINT64_MAX;
	volatile int16_t x831 = -1;
	static volatile int32_t t199 = 2874;

    t199 = ((x829!=(x830%x831))!=x832);

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

