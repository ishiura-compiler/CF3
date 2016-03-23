
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

static uint16_t x8 = 7140U;
int32_t t1 = 1974954;
volatile int16_t x10 = -4;
volatile int16_t x12 = INT16_MAX;
volatile int32_t t2 = -4;
int32_t t3 = 131;
int32_t x17 = -12;
int16_t x22 = INT16_MIN;
uint64_t x24 = UINT64_MAX;
uint8_t x35 = 0U;
static volatile int32_t t8 = 38;
uint64_t x37 = 40LLU;
volatile int32_t t9 = -14583;
static volatile int32_t t13 = 248452223;
volatile uint64_t x63 = 20LLU;
volatile int16_t x66 = -1;
int64_t x69 = -3498828727312173LL;
int8_t x76 = INT8_MIN;
int32_t t18 = -3872;
static volatile int32_t x80 = INT32_MIN;
int8_t x83 = INT8_MAX;
uint16_t x84 = 77U;
int16_t x86 = INT16_MAX;
uint64_t x88 = 506699015539320LLU;
uint64_t x89 = UINT64_MAX;
int32_t x93 = -734;
uint8_t x100 = 0U;
volatile int64_t x108 = INT64_MAX;
volatile int32_t t26 = 8937;
int32_t x117 = INT32_MAX;
int32_t t29 = 1124;
uint16_t x121 = 0U;
int32_t t30 = 13817331;
uint64_t x125 = 4197946926303LLU;
int8_t x126 = INT8_MIN;
volatile int64_t x127 = INT64_MAX;
int16_t x130 = INT16_MAX;
uint8_t x136 = UINT8_MAX;
int16_t x140 = -1;
int16_t x148 = INT16_MIN;
volatile int64_t x155 = INT64_MIN;
static uint16_t x160 = 1831U;
int32_t x162 = 0;
static volatile int64_t x164 = -2LL;
volatile int16_t x167 = INT16_MAX;
int16_t x170 = -3819;
static volatile int8_t x172 = 1;
int8_t x175 = INT8_MAX;
volatile int32_t x176 = INT32_MAX;
int64_t x178 = 905LL;
int8_t x179 = INT8_MIN;
int64_t x180 = INT64_MAX;
volatile int32_t t50 = 4;
int8_t x206 = -1;
static int8_t x210 = 3;
volatile int32_t t52 = -26676311;
volatile int32_t x216 = 1888;
static int16_t x218 = INT16_MAX;
static int8_t x221 = -48;
int32_t x222 = INT32_MIN;
uint64_t x226 = 14654LLU;
uint64_t x228 = 7019713890LLU;
int32_t x232 = -96716;
int32_t x235 = INT32_MIN;
static volatile int64_t x244 = -1LL;
static int32_t t60 = 96505;
uint8_t x247 = 6U;
uint32_t x248 = 143651606U;
int32_t t61 = -1045450;
int64_t x251 = INT64_MAX;
volatile int32_t x255 = 388302;
uint64_t x256 = 9LLU;
int8_t x257 = 5;
int32_t x264 = INT32_MAX;
volatile int64_t x271 = -242592931LL;
volatile int8_t x277 = INT8_MIN;
volatile int32_t x283 = INT32_MAX;
uint64_t x284 = 219087797841651LLU;
int32_t t70 = -797;
volatile int16_t x289 = INT16_MIN;
int32_t x292 = -1;
static int8_t x293 = INT8_MIN;
static int16_t x294 = INT16_MAX;
volatile int32_t x295 = -89;
int16_t x300 = 0;
static int32_t t75 = -7106325;
static volatile int32_t t76 = 1572;
int32_t x309 = -8015;
static int64_t x311 = 5803268042627867LL;
static int8_t x317 = INT8_MIN;
int16_t x322 = -1;
volatile uint32_t x324 = 21016U;
uint8_t x325 = UINT8_MAX;
volatile int64_t x326 = 841515947181LL;
int32_t t81 = 12872;
int64_t x335 = -64LL;
volatile int32_t t83 = -62058;
uint64_t x337 = 3LLU;
int8_t x340 = -1;
static volatile int16_t x341 = INT16_MIN;
int64_t x344 = -1LL;
uint16_t x346 = 2U;
int64_t x354 = -1LL;
int32_t t88 = -1;
int8_t x363 = -1;
static int32_t t90 = -3;
volatile int64_t x367 = -250292672286945LL;
int32_t t92 = 125299710;
uint32_t x385 = 54521U;
volatile int32_t x393 = INT32_MAX;
volatile int8_t x398 = INT8_MIN;
static uint64_t x405 = 3LLU;
int16_t x420 = -1;
int8_t x421 = INT8_MIN;
uint16_t x430 = 27U;
uint32_t x431 = 1308U;
int16_t x436 = INT16_MIN;
volatile int64_t x439 = INT64_MIN;
static int16_t x444 = INT16_MIN;
volatile int8_t x446 = INT8_MIN;
volatile int32_t t111 = -1;
static int64_t x451 = 83670573LL;
int32_t t112 = 1510;
uint32_t x457 = 794469500U;
static volatile int32_t t116 = 31264236;
int32_t x469 = -14;
uint8_t x480 = UINT8_MAX;
int16_t x489 = 479;
volatile int32_t x493 = INT32_MAX;
volatile int32_t t123 = 63957;
uint32_t x498 = 437766U;
static int8_t x500 = -1;
int8_t x502 = 1;
uint16_t x504 = UINT16_MAX;
volatile uint32_t x510 = 3610504U;
int16_t x518 = 60;
int16_t x519 = -1;
int32_t t129 = -41248011;
int8_t x523 = INT8_MIN;
uint8_t x524 = 27U;
uint8_t x527 = 59U;
volatile int8_t x533 = -1;
uint64_t x534 = 1763572LLU;
volatile int32_t t133 = -4343;
int64_t x542 = 64229464LL;
int32_t t136 = 410;
static int32_t x563 = INT32_MIN;
uint64_t x575 = 6082215665611LLU;
uint32_t x580 = 30023969U;
static volatile int32_t t144 = -2312;
uint64_t x582 = UINT64_MAX;
volatile int32_t x604 = 814;
static int16_t x609 = INT16_MIN;
volatile int16_t x622 = 217;
int32_t x625 = -1;
volatile int32_t t157 = -134204072;
int16_t x641 = INT16_MIN;
int32_t x643 = INT32_MAX;
uint32_t x644 = UINT32_MAX;
static int8_t x650 = -1;
volatile int8_t x657 = -1;
volatile int8_t x660 = -1;
static volatile int32_t t165 = 64137;
static int64_t x665 = INT64_MIN;
static int32_t x667 = INT32_MIN;
int64_t x676 = INT64_MIN;
uint8_t x678 = UINT8_MAX;
int32_t t170 = 118;
uint8_t x695 = 13U;
int32_t x696 = INT32_MAX;
int64_t x697 = -33179263LL;
volatile uint8_t x701 = 4U;
uint32_t x705 = 1U;
int32_t t176 = 2;
volatile int64_t x710 = -1LL;
int32_t t177 = 826;
int8_t x714 = 0;
int8_t x726 = 4;
int8_t x727 = 0;
uint32_t x732 = 131U;
static volatile uint8_t x736 = UINT8_MAX;
volatile int32_t t183 = 261844737;
int64_t x740 = 497488175060LL;
volatile int32_t t185 = -22;
static uint16_t x748 = 61U;
volatile int16_t x751 = INT16_MAX;
static int16_t x758 = INT16_MAX;
int64_t x759 = -625843246637385LL;
int8_t x761 = INT8_MAX;
uint64_t x765 = 1051401750LLU;
uint16_t x767 = 9U;
int64_t x770 = INT64_MIN;
uint16_t x776 = 89U;
static int32_t t193 = 82081;
int32_t x778 = -1;
uint32_t x779 = 839U;
uint8_t x781 = 14U;


void f0(void) {
    	static int32_t x1 = 1;
	volatile uint64_t x2 = 979728LLU;
	static int16_t x3 = 252;
	int8_t x4 = -1;
	volatile int32_t t0 = 0;

    t0 = ((x1>x2)>>(x3!=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 17U;
	int64_t x6 = -196LL;
	static int32_t x7 = INT32_MAX;

    t1 = ((x5>x6)>>(x7!=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x9 = INT32_MIN;
	static int64_t x11 = -1LL;

    t2 = ((x9>x10)>>(x11!=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = 13U;
	uint64_t x14 = 1579829380624136450LLU;
	int32_t x15 = -1;
	int64_t x16 = INT64_MIN;

    t3 = ((x13>x14)>>(x15!=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x18 = UINT8_MAX;
	static int64_t x19 = INT64_MIN;
	int16_t x20 = INT16_MIN;
	int32_t t4 = 0;

    t4 = ((x17>x18)>>(x19!=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int32_t x21 = 1367893;
	volatile uint8_t x23 = 6U;
	int32_t t5 = 326;

    t5 = ((x21>x22)>>(x23!=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 1975364142U;
	uint32_t x26 = 19U;
	int8_t x27 = -1;
	uint32_t x28 = 7U;
	volatile int32_t t6 = -39;

    t6 = ((x25>x26)>>(x27!=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	volatile int64_t x30 = 1585058008LL;
	int8_t x31 = -1;
	int32_t x32 = INT32_MAX;
	int32_t t7 = 1068079;

    t7 = ((x29>x30)>>(x31!=x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MIN;
	int32_t x34 = INT32_MAX;
	int64_t x36 = INT64_MIN;

    t8 = ((x33>x34)>>(x35!=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x38 = 51150145148642LLU;
	static uint64_t x39 = 14103801LLU;
	int16_t x40 = -1;

    t9 = ((x37>x38)>>(x39!=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = 1;
	uint8_t x42 = UINT8_MAX;
	uint64_t x43 = 3019639808562599872LLU;
	uint8_t x44 = 0U;
	volatile int32_t t10 = 0;

    t10 = ((x41>x42)>>(x43!=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = -1;
	int64_t x46 = INT64_MIN;
	int32_t x47 = INT32_MAX;
	uint8_t x48 = 15U;
	volatile int32_t t11 = -52340927;

    t11 = ((x45>x46)>>(x47!=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x49 = -1;
	volatile int8_t x50 = INT8_MIN;
	volatile int16_t x51 = -1;
	int8_t x52 = INT8_MIN;
	int32_t t12 = 869097;

    t12 = ((x49>x50)>>(x51!=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = -502679336;
	uint64_t x54 = 11169179626LLU;
	volatile uint32_t x55 = 63U;
	int16_t x56 = INT16_MIN;

    t13 = ((x53>x54)>>(x55!=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = 12U;
	static volatile int64_t x58 = INT64_MIN;
	int32_t x59 = INT32_MIN;
	volatile uint16_t x60 = 0U;
	int32_t t14 = 21;

    t14 = ((x57>x58)>>(x59!=x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MIN;
	uint64_t x62 = UINT64_MAX;
	uint16_t x64 = 451U;
	volatile int32_t t15 = -90924668;

    t15 = ((x61>x62)>>(x63!=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = 114U;
	static volatile int32_t x67 = INT32_MAX;
	int8_t x68 = INT8_MIN;
	int32_t t16 = 911777859;

    t16 = ((x65>x66)>>(x67!=x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x70 = INT32_MIN;
	int64_t x71 = INT64_MIN;
	volatile int8_t x72 = -8;
	int32_t t17 = -5555024;

    t17 = ((x69>x70)>>(x71!=x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x73 = -1;
	int32_t x74 = -57301361;
	int32_t x75 = INT32_MAX;

    t18 = ((x73>x74)>>(x75!=x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = -1LL;
	int64_t x78 = -129631542946LL;
	int64_t x79 = INT64_MIN;
	volatile int32_t t19 = -4134;

    t19 = ((x77>x78)>>(x79!=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x81 = INT64_MAX;
	static int8_t x82 = INT8_MAX;
	int32_t t20 = -31268706;

    t20 = ((x81>x82)>>(x83!=x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = INT64_MAX;
	int16_t x87 = -1;
	volatile int32_t t21 = 55909224;

    t21 = ((x85>x86)>>(x87!=x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x90 = -246043007LL;
	uint32_t x91 = 5609623U;
	int64_t x92 = -309913LL;
	int32_t t22 = 2;

    t22 = ((x89>x90)>>(x91!=x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x94 = 5U;
	int16_t x95 = -621;
	static volatile int16_t x96 = -1;
	int32_t t23 = 8050;

    t23 = ((x93>x94)>>(x95!=x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = -1;
	int64_t x98 = INT64_MAX;
	int16_t x99 = INT16_MAX;
	int32_t t24 = -22;

    t24 = ((x97>x98)>>(x99!=x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x101 = 2161;
	int32_t x102 = INT32_MIN;
	int8_t x103 = 3;
	int32_t x104 = -1;
	volatile int32_t t25 = 199481;

    t25 = ((x101>x102)>>(x103!=x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MIN;
	int64_t x106 = -1LL;
	volatile int16_t x107 = -1;

    t26 = ((x105>x106)>>(x107!=x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint8_t x109 = UINT8_MAX;
	static int64_t x110 = INT64_MIN;
	uint8_t x111 = 3U;
	int16_t x112 = 0;
	volatile int32_t t27 = -292101;

    t27 = ((x109>x110)>>(x111!=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x113 = 107LLU;
	int64_t x114 = -20916993752LL;
	volatile int32_t x115 = INT32_MIN;
	int32_t x116 = 136;
	int32_t t28 = 1;

    t28 = ((x113>x114)>>(x115!=x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x118 = 28644816U;
	static volatile int8_t x119 = INT8_MIN;
	int64_t x120 = 386610195651152LL;

    t29 = ((x117>x118)>>(x119!=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x122 = INT16_MAX;
	int8_t x123 = INT8_MAX;
	int32_t x124 = -159;

    t30 = ((x121>x122)>>(x123!=x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x128 = UINT8_MAX;
	static int32_t t31 = 181186;

    t31 = ((x125>x126)>>(x127!=x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x129 = INT8_MAX;
	static int64_t x131 = INT64_MAX;
	uint16_t x132 = UINT16_MAX;
	volatile int32_t t32 = -977645302;

    t32 = ((x129>x130)>>(x131!=x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = INT16_MIN;
	uint16_t x134 = UINT16_MAX;
	static uint64_t x135 = 0LLU;
	volatile int32_t t33 = 0;

    t33 = ((x133>x134)>>(x135!=x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x137 = 25U;
	static int32_t x138 = INT32_MAX;
	int32_t x139 = -1;
	volatile int32_t t34 = 233378784;

    t34 = ((x137>x138)>>(x139!=x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = 47873238U;
	uint8_t x142 = UINT8_MAX;
	int16_t x143 = -399;
	volatile uint64_t x144 = 229250620728LLU;
	volatile int32_t t35 = -93;

    t35 = ((x141>x142)>>(x143!=x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x145 = -1;
	int8_t x146 = -1;
	volatile int32_t x147 = INT32_MIN;
	int32_t t36 = -298047;

    t36 = ((x145>x146)>>(x147!=x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = 122197554761445347LL;
	uint8_t x150 = 4U;
	volatile int64_t x151 = INT64_MIN;
	int32_t x152 = 9050;
	volatile int32_t t37 = 411413;

    t37 = ((x149>x150)>>(x151!=x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x153 = 169U;
	volatile int64_t x154 = -1LL;
	int16_t x156 = 11723;
	static volatile int32_t t38 = -10927;

    t38 = ((x153>x154)>>(x155!=x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x157 = 383U;
	volatile uint64_t x158 = 395LLU;
	int8_t x159 = 0;
	volatile int32_t t39 = -99;

    t39 = ((x157>x158)>>(x159!=x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = INT64_MIN;
	uint32_t x163 = 41564738U;
	int32_t t40 = 95305591;

    t40 = ((x161>x162)>>(x163!=x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x165 = INT64_MIN;
	static uint64_t x166 = 7583001669860772LLU;
	int64_t x168 = -1LL;
	volatile int32_t t41 = -33251792;

    t41 = ((x165>x166)>>(x167!=x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = INT8_MIN;
	int8_t x171 = -1;
	volatile int32_t t42 = -124;

    t42 = ((x169>x170)>>(x171!=x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x173 = 0;
	uint16_t x174 = UINT16_MAX;
	static volatile int32_t t43 = -37679748;

    t43 = ((x173>x174)>>(x175!=x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x177 = INT8_MIN;
	int32_t t44 = 3899;

    t44 = ((x177>x178)>>(x179!=x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint16_t x181 = 556U;
	static int16_t x182 = -155;
	int8_t x183 = INT8_MIN;
	int16_t x184 = -1;
	volatile int32_t t45 = -159611;

    t45 = ((x181>x182)>>(x183!=x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint64_t x185 = 1220394492LLU;
	uint8_t x186 = 0U;
	static volatile uint64_t x187 = 16826600424705LLU;
	static uint32_t x188 = 2U;
	volatile int32_t t46 = -9;

    t46 = ((x185>x186)>>(x187!=x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = INT16_MIN;
	int64_t x190 = 479LL;
	int32_t x191 = INT32_MAX;
	int32_t x192 = 1;
	volatile int32_t t47 = 174445;

    t47 = ((x189>x190)>>(x191!=x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x193 = INT32_MIN;
	static uint32_t x194 = 19414U;
	volatile int16_t x195 = INT16_MAX;
	static volatile uint16_t x196 = UINT16_MAX;
	static int32_t t48 = -109;

    t48 = ((x193>x194)>>(x195!=x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = INT16_MIN;
	int16_t x198 = INT16_MIN;
	volatile uint8_t x199 = 39U;
	uint32_t x200 = 23097370U;
	volatile int32_t t49 = 1006076509;

    t49 = ((x197>x198)>>(x199!=x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = INT16_MIN;
	uint8_t x202 = 81U;
	volatile uint8_t x203 = 4U;
	int32_t x204 = -1;

    t50 = ((x201>x202)>>(x203!=x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x205 = INT16_MIN;
	uint16_t x207 = UINT16_MAX;
	int64_t x208 = INT64_MIN;
	static volatile int32_t t51 = 14;

    t51 = ((x205>x206)>>(x207!=x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MAX;
	int8_t x211 = -1;
	int16_t x212 = INT16_MAX;

    t52 = ((x209>x210)>>(x211!=x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint32_t x213 = 6U;
	uint8_t x214 = 27U;
	uint32_t x215 = UINT32_MAX;
	volatile int32_t t53 = 26420;

    t53 = ((x213>x214)>>(x215!=x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint64_t x217 = 807346770LLU;
	static int16_t x219 = INT16_MIN;
	int8_t x220 = INT8_MIN;
	volatile int32_t t54 = 61;

    t54 = ((x217>x218)>>(x219!=x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x223 = 7199184LLU;
	uint32_t x224 = 82092U;
	volatile int32_t t55 = -31659;

    t55 = ((x221>x222)>>(x223!=x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = INT32_MIN;
	int64_t x227 = 6548LL;
	volatile int32_t t56 = 41791;

    t56 = ((x225>x226)>>(x227!=x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x229 = 0;
	int8_t x230 = INT8_MIN;
	int16_t x231 = -2710;
	int32_t t57 = -517710965;

    t57 = ((x229>x230)>>(x231!=x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x233 = UINT8_MAX;
	int16_t x234 = 26;
	int32_t x236 = INT32_MIN;
	int32_t t58 = 116525;

    t58 = ((x233>x234)>>(x235!=x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = 12366;
	int64_t x238 = INT64_MAX;
	volatile int8_t x239 = INT8_MIN;
	int8_t x240 = -1;
	int32_t t59 = 0;

    t59 = ((x237>x238)>>(x239!=x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = INT8_MIN;
	volatile uint8_t x242 = 19U;
	static uint8_t x243 = UINT8_MAX;

    t60 = ((x241>x242)>>(x243!=x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x245 = UINT16_MAX;
	volatile int32_t x246 = INT32_MAX;

    t61 = ((x245>x246)>>(x247!=x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x249 = -43;
	int64_t x250 = -1LL;
	static uint16_t x252 = UINT16_MAX;
	volatile int32_t t62 = -126297;

    t62 = ((x249>x250)>>(x251!=x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = -7789970;
	volatile int64_t x254 = INT64_MAX;
	int32_t t63 = 1544646;

    t63 = ((x253>x254)>>(x255!=x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x258 = -1;
	uint32_t x259 = UINT32_MAX;
	volatile int16_t x260 = 1030;
	int32_t t64 = -321;

    t64 = ((x257>x258)>>(x259!=x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = INT32_MIN;
	int16_t x262 = INT16_MIN;
	static uint32_t x263 = UINT32_MAX;
	volatile int32_t t65 = -5;

    t65 = ((x261>x262)>>(x263!=x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x265 = INT32_MAX;
	static int64_t x266 = 5738LL;
	int8_t x267 = INT8_MAX;
	int8_t x268 = -1;
	volatile int32_t t66 = -445;

    t66 = ((x265>x266)>>(x267!=x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x269 = 453538101LLU;
	uint32_t x270 = 60419838U;
	int8_t x272 = -1;
	int32_t t67 = -182932115;

    t67 = ((x269>x270)>>(x271!=x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = -2;
	static int64_t x274 = 3054707178523780098LL;
	volatile uint64_t x275 = 30567790LLU;
	static int32_t x276 = INT32_MIN;
	int32_t t68 = 29568;

    t68 = ((x273>x274)>>(x275!=x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x278 = INT8_MAX;
	static uint16_t x279 = 505U;
	int16_t x280 = -504;
	volatile int32_t t69 = 50494933;

    t69 = ((x277>x278)>>(x279!=x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint16_t x281 = 22626U;
	static int16_t x282 = INT16_MIN;

    t70 = ((x281>x282)>>(x283!=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x285 = -9;
	uint8_t x286 = UINT8_MAX;
	volatile int8_t x287 = INT8_MIN;
	uint8_t x288 = 3U;
	static int32_t t71 = 208400337;

    t71 = ((x285>x286)>>(x287!=x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x290 = 30U;
	volatile int8_t x291 = -3;
	int32_t t72 = 1438;

    t72 = ((x289>x290)>>(x291!=x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x296 = 4U;
	volatile int32_t t73 = -30088848;

    t73 = ((x293>x294)>>(x295!=x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x297 = 36046U;
	static int8_t x298 = INT8_MAX;
	uint8_t x299 = UINT8_MAX;
	int32_t t74 = 71620;

    t74 = ((x297>x298)>>(x299!=x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x301 = 7397961949908LL;
	static int32_t x302 = 1;
	int32_t x303 = -1;
	int64_t x304 = -1LL;

    t75 = ((x301>x302)>>(x303!=x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = INT8_MIN;
	volatile int8_t x306 = INT8_MIN;
	int16_t x307 = 0;
	uint16_t x308 = 15U;

    t76 = ((x305>x306)>>(x307!=x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x310 = INT32_MAX;
	int32_t x312 = INT32_MAX;
	int32_t t77 = -24109870;

    t77 = ((x309>x310)>>(x311!=x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x313 = 7486LLU;
	int8_t x314 = INT8_MIN;
	int32_t x315 = -1;
	int32_t x316 = INT32_MAX;
	int32_t t78 = -26258843;

    t78 = ((x313>x314)>>(x315!=x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x318 = UINT16_MAX;
	int64_t x319 = INT64_MIN;
	volatile uint8_t x320 = UINT8_MAX;
	volatile int32_t t79 = -243780;

    t79 = ((x317>x318)>>(x319!=x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int32_t x321 = -1;
	int8_t x323 = -1;
	int32_t t80 = -6;

    t80 = ((x321>x322)>>(x323!=x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x327 = INT32_MIN;
	int16_t x328 = -1;

    t81 = ((x325>x326)>>(x327!=x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x329 = 47526098U;
	int32_t x330 = INT32_MAX;
	static int32_t x331 = INT32_MIN;
	static int64_t x332 = INT64_MIN;
	volatile int32_t t82 = 387;

    t82 = ((x329>x330)>>(x331!=x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile uint8_t x333 = 22U;
	uint16_t x334 = 2840U;
	uint64_t x336 = 7736744LLU;

    t83 = ((x333>x334)>>(x335!=x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x338 = INT16_MIN;
	int8_t x339 = INT8_MAX;
	int32_t t84 = 2073436;

    t84 = ((x337>x338)>>(x339!=x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x342 = INT8_MIN;
	static volatile int16_t x343 = 1;
	volatile int32_t t85 = -63986;

    t85 = ((x341>x342)>>(x343!=x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = INT64_MAX;
	uint64_t x347 = 835410128LLU;
	int32_t x348 = INT32_MIN;
	volatile int32_t t86 = -453715;

    t86 = ((x345>x346)>>(x347!=x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x349 = 23084U;
	volatile uint32_t x350 = UINT32_MAX;
	static int8_t x351 = -1;
	uint8_t x352 = 5U;
	int32_t t87 = 31;

    t87 = ((x349>x350)>>(x351!=x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = 1;
	int64_t x355 = INT64_MIN;
	int64_t x356 = INT64_MIN;

    t88 = ((x353>x354)>>(x355!=x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = INT64_MIN;
	int64_t x358 = INT64_MAX;
	volatile uint32_t x359 = UINT32_MAX;
	static volatile uint8_t x360 = 6U;
	volatile int32_t t89 = 87491068;

    t89 = ((x357>x358)>>(x359!=x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x361 = UINT16_MAX;
	uint16_t x362 = UINT16_MAX;
	int32_t x364 = -3792;

    t90 = ((x361>x362)>>(x363!=x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = -1;
	volatile uint64_t x366 = UINT64_MAX;
	volatile int32_t x368 = INT32_MIN;
	int32_t t91 = 398613535;

    t91 = ((x365>x366)>>(x367!=x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = INT16_MAX;
	int32_t x370 = INT32_MAX;
	int8_t x371 = -7;
	int64_t x372 = 28744645436045593LL;

    t92 = ((x369>x370)>>(x371!=x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = -1;
	uint8_t x374 = 3U;
	volatile uint64_t x375 = 1560165647969898LLU;
	int16_t x376 = INT16_MIN;
	int32_t t93 = -3;

    t93 = ((x373>x374)>>(x375!=x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = -1;
	volatile int32_t x378 = -2;
	int16_t x379 = INT16_MIN;
	int8_t x380 = INT8_MAX;
	volatile int32_t t94 = 59756;

    t94 = ((x377>x378)>>(x379!=x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int8_t x381 = INT8_MAX;
	uint32_t x382 = UINT32_MAX;
	uint16_t x383 = 5U;
	int8_t x384 = INT8_MAX;
	volatile int32_t t95 = -114;

    t95 = ((x381>x382)>>(x383!=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x386 = INT16_MIN;
	uint8_t x387 = 4U;
	int32_t x388 = INT32_MAX;
	int32_t t96 = -112;

    t96 = ((x385>x386)>>(x387!=x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = -1;
	int16_t x390 = -2470;
	volatile uint8_t x391 = 79U;
	static int32_t x392 = -340210173;
	volatile int32_t t97 = 25659400;

    t97 = ((x389>x390)>>(x391!=x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x394 = 493389U;
	int32_t x395 = INT32_MAX;
	static uint8_t x396 = 10U;
	int32_t t98 = 111805;

    t98 = ((x393>x394)>>(x395!=x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x397 = 140147108075525LLU;
	int32_t x399 = -1;
	volatile uint32_t x400 = 2U;
	volatile int32_t t99 = 6713;

    t99 = ((x397>x398)>>(x399!=x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = -1;
	static volatile uint8_t x402 = 103U;
	int32_t x403 = 3;
	int16_t x404 = -1;
	volatile int32_t t100 = 851791;

    t100 = ((x401>x402)>>(x403!=x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x406 = 1;
	int16_t x407 = INT16_MIN;
	uint32_t x408 = UINT32_MAX;
	volatile int32_t t101 = 4;

    t101 = ((x405>x406)>>(x407!=x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x409 = 1U;
	int8_t x410 = 7;
	int64_t x411 = 7142LL;
	volatile uint32_t x412 = 597064U;
	volatile int32_t t102 = 12;

    t102 = ((x409>x410)>>(x411!=x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = INT32_MIN;
	uint32_t x414 = UINT32_MAX;
	static int64_t x415 = 375LL;
	int8_t x416 = INT8_MIN;
	int32_t t103 = -12876;

    t103 = ((x413>x414)>>(x415!=x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = INT32_MIN;
	int16_t x418 = -6438;
	int32_t x419 = INT32_MIN;
	int32_t t104 = 52545;

    t104 = ((x417>x418)>>(x419!=x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x422 = 2U;
	uint32_t x423 = UINT32_MAX;
	static uint8_t x424 = 41U;
	int32_t t105 = -3;

    t105 = ((x421>x422)>>(x423!=x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = -155520213077242LL;
	static int64_t x426 = INT64_MIN;
	int8_t x427 = INT8_MIN;
	uint32_t x428 = UINT32_MAX;
	static volatile int32_t t106 = -1;

    t106 = ((x425>x426)>>(x427!=x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int32_t x429 = -1;
	uint8_t x432 = 12U;
	int32_t t107 = 10;

    t107 = ((x429>x430)>>(x431!=x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = 2475023665858LL;
	static uint32_t x434 = 5U;
	uint8_t x435 = 1U;
	static volatile int32_t t108 = 389370;

    t108 = ((x433>x434)>>(x435!=x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x437 = 2U;
	uint32_t x438 = UINT32_MAX;
	int32_t x440 = INT32_MIN;
	static volatile int32_t t109 = -1768615;

    t109 = ((x437>x438)>>(x439!=x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x441 = INT16_MIN;
	static int32_t x442 = 13;
	uint16_t x443 = 2110U;
	int32_t t110 = -15;

    t110 = ((x441>x442)>>(x443!=x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x445 = INT16_MIN;
	int16_t x447 = 2211;
	uint16_t x448 = UINT16_MAX;

    t111 = ((x445>x446)>>(x447!=x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = INT32_MIN;
	int64_t x450 = -1LL;
	int16_t x452 = -1;

    t112 = ((x449>x450)>>(x451!=x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = -1LL;
	int32_t x454 = INT32_MIN;
	int64_t x455 = 5169LL;
	uint64_t x456 = 296LLU;
	int32_t t113 = -7;

    t113 = ((x453>x454)>>(x455!=x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x458 = INT64_MIN;
	volatile uint8_t x459 = 17U;
	volatile int8_t x460 = INT8_MIN;
	volatile int32_t t114 = 3212;

    t114 = ((x457>x458)>>(x459!=x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x461 = INT32_MIN;
	int32_t x462 = INT32_MIN;
	int8_t x463 = 1;
	volatile int64_t x464 = -1LL;
	volatile int32_t t115 = 1;

    t115 = ((x461>x462)>>(x463!=x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x465 = UINT16_MAX;
	int32_t x466 = INT32_MAX;
	uint32_t x467 = 7144U;
	volatile int8_t x468 = INT8_MIN;

    t116 = ((x465>x466)>>(x467!=x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x470 = INT32_MAX;
	int32_t x471 = INT32_MAX;
	int32_t x472 = 540097;
	int32_t t117 = -14;

    t117 = ((x469>x470)>>(x471!=x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = INT8_MIN;
	int8_t x474 = INT8_MIN;
	int32_t x475 = INT32_MAX;
	static int64_t x476 = -210822651268513LL;
	static int32_t t118 = -235800830;

    t118 = ((x473>x474)>>(x475!=x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = -7;
	int32_t x478 = INT32_MIN;
	static uint16_t x479 = UINT16_MAX;
	int32_t t119 = 721384094;

    t119 = ((x477>x478)>>(x479!=x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = INT64_MIN;
	static uint8_t x482 = 16U;
	volatile uint16_t x483 = 17107U;
	int64_t x484 = INT64_MAX;
	volatile int32_t t120 = -1798638;

    t120 = ((x481>x482)>>(x483!=x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x485 = INT64_MIN;
	int32_t x486 = INT32_MAX;
	static volatile int64_t x487 = 19835671368454683LL;
	int32_t x488 = INT32_MIN;
	static volatile int32_t t121 = -161;

    t121 = ((x485>x486)>>(x487!=x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x490 = 12072030914578725LLU;
	uint16_t x491 = UINT16_MAX;
	int8_t x492 = 0;
	int32_t t122 = 7;

    t122 = ((x489>x490)>>(x491!=x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x494 = -1LL;
	static int32_t x495 = INT32_MIN;
	static int64_t x496 = -30381988764638353LL;

    t123 = ((x493>x494)>>(x495!=x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = -2960;
	static int8_t x499 = -3;
	volatile int32_t t124 = -195396;

    t124 = ((x497>x498)>>(x499!=x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x501 = 92U;
	volatile int64_t x503 = 524433733740284830LL;
	static volatile int32_t t125 = 346643396;

    t125 = ((x501>x502)>>(x503!=x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = -1;
	int8_t x506 = -1;
	volatile int8_t x507 = -5;
	int64_t x508 = INT64_MIN;
	int32_t t126 = 2;

    t126 = ((x505>x506)>>(x507!=x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = -6361;
	int8_t x511 = 13;
	uint32_t x512 = UINT32_MAX;
	volatile int32_t t127 = 15;

    t127 = ((x509>x510)>>(x511!=x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = -1;
	static uint8_t x514 = 2U;
	int64_t x515 = INT64_MIN;
	static int16_t x516 = -218;
	int32_t t128 = -2;

    t128 = ((x513>x514)>>(x515!=x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x517 = 0U;
	static volatile int64_t x520 = -68LL;

    t129 = ((x517>x518)>>(x519!=x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x521 = 614U;
	volatile int16_t x522 = -1;
	int32_t t130 = 737;

    t130 = ((x521>x522)>>(x523!=x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x525 = INT64_MIN;
	volatile int16_t x526 = -1522;
	int64_t x528 = INT64_MIN;
	volatile int32_t t131 = -513;

    t131 = ((x525>x526)>>(x527!=x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = -1;
	uint32_t x530 = 121740U;
	int8_t x531 = 1;
	static uint8_t x532 = UINT8_MAX;
	int32_t t132 = 53702;

    t132 = ((x529>x530)>>(x531!=x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x535 = INT32_MIN;
	static int32_t x536 = -1;

    t133 = ((x533>x534)>>(x535!=x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = -1;
	static int8_t x538 = 14;
	static uint64_t x539 = 11LLU;
	volatile int32_t x540 = INT32_MIN;
	int32_t t134 = -51535138;

    t134 = ((x537>x538)>>(x539!=x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x541 = INT64_MIN;
	uint16_t x543 = 3380U;
	int8_t x544 = 47;
	static volatile int32_t t135 = 43351864;

    t135 = ((x541>x542)>>(x543!=x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x545 = -1LL;
	int64_t x546 = 103882822564LL;
	int32_t x547 = -1;
	int16_t x548 = -1;

    t136 = ((x545>x546)>>(x547!=x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = -1425059209858LL;
	int32_t x550 = INT32_MAX;
	static volatile uint32_t x551 = 21199519U;
	uint16_t x552 = UINT16_MAX;
	int32_t t137 = 1;

    t137 = ((x549>x550)>>(x551!=x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x553 = -1;
	volatile uint64_t x554 = 8190022561982172LLU;
	uint64_t x555 = UINT64_MAX;
	int8_t x556 = 6;
	int32_t t138 = -719;

    t138 = ((x553>x554)>>(x555!=x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = INT8_MIN;
	volatile uint8_t x558 = UINT8_MAX;
	int32_t x559 = -1;
	uint32_t x560 = 1219U;
	volatile int32_t t139 = -29;

    t139 = ((x557>x558)>>(x559!=x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x561 = 73670469U;
	uint64_t x562 = 7776LLU;
	int16_t x564 = INT16_MAX;
	static int32_t t140 = 7;

    t140 = ((x561>x562)>>(x563!=x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = -1LL;
	volatile int8_t x566 = 12;
	static volatile int8_t x567 = INT8_MIN;
	static int8_t x568 = INT8_MIN;
	int32_t t141 = -60039;

    t141 = ((x565>x566)>>(x567!=x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = INT64_MIN;
	int32_t x570 = INT32_MIN;
	int8_t x571 = INT8_MAX;
	int8_t x572 = INT8_MAX;
	volatile int32_t t142 = -2849;

    t142 = ((x569>x570)>>(x571!=x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = -1;
	static uint16_t x574 = 29U;
	int8_t x576 = 0;
	int32_t t143 = -249;

    t143 = ((x573>x574)>>(x575!=x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = INT64_MIN;
	int32_t x578 = INT32_MIN;
	uint64_t x579 = UINT64_MAX;

    t144 = ((x577>x578)>>(x579!=x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x581 = 131411312685863555LLU;
	int32_t x583 = -3;
	uint8_t x584 = 56U;
	int32_t t145 = 251564195;

    t145 = ((x581>x582)>>(x583!=x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x585 = INT8_MIN;
	int16_t x586 = INT16_MIN;
	int16_t x587 = -368;
	int8_t x588 = -39;
	volatile int32_t t146 = 1;

    t146 = ((x585>x586)>>(x587!=x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = INT16_MAX;
	int32_t x590 = -1;
	int32_t x591 = 33574196;
	static uint64_t x592 = UINT64_MAX;
	volatile int32_t t147 = -80;

    t147 = ((x589>x590)>>(x591!=x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = INT64_MIN;
	int8_t x594 = INT8_MAX;
	static int64_t x595 = INT64_MIN;
	uint64_t x596 = UINT64_MAX;
	volatile int32_t t148 = 58378378;

    t148 = ((x593>x594)>>(x595!=x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = INT8_MIN;
	static int8_t x598 = INT8_MIN;
	volatile int64_t x599 = INT64_MIN;
	int16_t x600 = -1;
	int32_t t149 = 16850094;

    t149 = ((x597>x598)>>(x599!=x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x601 = -66;
	volatile uint64_t x602 = 455923075237637685LLU;
	volatile uint8_t x603 = 28U;
	int32_t t150 = -7642;

    t150 = ((x601>x602)>>(x603!=x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = 3;
	uint8_t x606 = 24U;
	int16_t x607 = 172;
	volatile int32_t x608 = 1534;
	static int32_t t151 = -2642;

    t151 = ((x605>x606)>>(x607!=x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x610 = 11972194;
	int8_t x611 = INT8_MAX;
	uint16_t x612 = 3898U;
	volatile int32_t t152 = -1;

    t152 = ((x609>x610)>>(x611!=x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x613 = UINT16_MAX;
	uint8_t x614 = UINT8_MAX;
	int32_t x615 = 81;
	volatile uint64_t x616 = UINT64_MAX;
	int32_t t153 = -6589391;

    t153 = ((x613>x614)>>(x615!=x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = INT8_MAX;
	int8_t x618 = INT8_MIN;
	int16_t x619 = -1;
	int16_t x620 = 3946;
	int32_t t154 = 135254031;

    t154 = ((x617>x618)>>(x619!=x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x621 = INT32_MIN;
	static int8_t x623 = -1;
	int8_t x624 = -62;
	static int32_t t155 = 9;

    t155 = ((x621>x622)>>(x623!=x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x626 = UINT8_MAX;
	uint64_t x627 = UINT64_MAX;
	int8_t x628 = INT8_MAX;
	volatile int32_t t156 = 26648;

    t156 = ((x625>x626)>>(x627!=x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint8_t x629 = UINT8_MAX;
	int32_t x630 = INT32_MIN;
	int32_t x631 = INT32_MAX;
	int32_t x632 = INT32_MAX;

    t157 = ((x629>x630)>>(x631!=x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x633 = INT64_MIN;
	static uint32_t x634 = 8U;
	int16_t x635 = -1;
	static int16_t x636 = -15508;
	int32_t t158 = 3072;

    t158 = ((x633>x634)>>(x635!=x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = 1LL;
	int8_t x638 = INT8_MIN;
	volatile int32_t x639 = -5987;
	uint64_t x640 = UINT64_MAX;
	int32_t t159 = -640;

    t159 = ((x637>x638)>>(x639!=x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint32_t x642 = UINT32_MAX;
	int32_t t160 = -328;

    t160 = ((x641>x642)>>(x643!=x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = -1;
	int8_t x646 = -10;
	static int32_t x647 = 121702563;
	int8_t x648 = INT8_MIN;
	int32_t t161 = -122;

    t161 = ((x645>x646)>>(x647!=x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = -14;
	int32_t x651 = -1;
	static volatile uint16_t x652 = 7653U;
	int32_t t162 = -5873913;

    t162 = ((x649>x650)>>(x651!=x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint8_t x653 = 7U;
	int64_t x654 = 20117954606LL;
	uint32_t x655 = UINT32_MAX;
	int8_t x656 = -1;
	int32_t t163 = 2130841;

    t163 = ((x653>x654)>>(x655!=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x658 = UINT64_MAX;
	static int8_t x659 = INT8_MIN;
	volatile int32_t t164 = -27045;

    t164 = ((x657>x658)>>(x659!=x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = -5065965;
	int8_t x662 = -1;
	uint8_t x663 = UINT8_MAX;
	int64_t x664 = INT64_MIN;

    t165 = ((x661>x662)>>(x663!=x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x666 = 0;
	uint64_t x668 = 2LLU;
	static int32_t t166 = 1;

    t166 = ((x665>x666)>>(x667!=x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x669 = 0;
	uint32_t x670 = 3731U;
	int64_t x671 = INT64_MIN;
	volatile int16_t x672 = -1;
	int32_t t167 = 455617382;

    t167 = ((x669>x670)>>(x671!=x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = INT16_MAX;
	int64_t x674 = INT64_MIN;
	int32_t x675 = -13333;
	volatile int32_t t168 = 1;

    t168 = ((x673>x674)>>(x675!=x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x677 = 1708U;
	int32_t x679 = INT32_MIN;
	int8_t x680 = INT8_MAX;
	int32_t t169 = 360685;

    t169 = ((x677>x678)>>(x679!=x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x681 = INT8_MIN;
	uint32_t x682 = 1882816878U;
	int64_t x683 = -1LL;
	int16_t x684 = INT16_MIN;

    t170 = ((x681>x682)>>(x683!=x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = -1;
	int8_t x686 = INT8_MIN;
	int32_t x687 = INT32_MAX;
	static int8_t x688 = INT8_MAX;
	int32_t t171 = 13;

    t171 = ((x685>x686)>>(x687!=x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = INT16_MIN;
	int16_t x690 = INT16_MIN;
	volatile uint64_t x691 = UINT64_MAX;
	static uint8_t x692 = 1U;
	int32_t t172 = -2;

    t172 = ((x689>x690)>>(x691!=x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x693 = 852943645LLU;
	uint64_t x694 = 50186719152759237LLU;
	int32_t t173 = 5892090;

    t173 = ((x693>x694)>>(x695!=x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x698 = UINT8_MAX;
	uint16_t x699 = 4U;
	static int8_t x700 = INT8_MIN;
	int32_t t174 = -46;

    t174 = ((x697>x698)>>(x699!=x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x702 = INT32_MIN;
	static int8_t x703 = INT8_MIN;
	static uint32_t x704 = 161U;
	static int32_t t175 = 441944518;

    t175 = ((x701>x702)>>(x703!=x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x706 = UINT16_MAX;
	int16_t x707 = INT16_MAX;
	volatile int32_t x708 = -1;

    t176 = ((x705>x706)>>(x707!=x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x709 = UINT64_MAX;
	volatile int8_t x711 = -1;
	static int64_t x712 = -912221336582LL;

    t177 = ((x709>x710)>>(x711!=x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x713 = UINT32_MAX;
	uint64_t x715 = 4876714148790881LLU;
	static volatile int8_t x716 = -1;
	static int32_t t178 = -17;

    t178 = ((x713>x714)>>(x715!=x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x717 = INT64_MAX;
	int8_t x718 = -1;
	int8_t x719 = INT8_MIN;
	volatile uint64_t x720 = UINT64_MAX;
	volatile int32_t t179 = 744729;

    t179 = ((x717>x718)>>(x719!=x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = 449605U;
	int8_t x722 = INT8_MAX;
	int16_t x723 = -41;
	int16_t x724 = -1;
	static volatile int32_t t180 = 15;

    t180 = ((x721>x722)>>(x723!=x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x725 = 349LLU;
	uint8_t x728 = UINT8_MAX;
	static volatile int32_t t181 = -198;

    t181 = ((x725>x726)>>(x727!=x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = -1;
	volatile uint16_t x730 = UINT16_MAX;
	uint64_t x731 = UINT64_MAX;
	volatile int32_t t182 = -28;

    t182 = ((x729>x730)>>(x731!=x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = 662292065241LL;
	uint8_t x734 = UINT8_MAX;
	int16_t x735 = INT16_MIN;

    t183 = ((x733>x734)>>(x735!=x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x737 = 0U;
	uint32_t x738 = 3908807U;
	int16_t x739 = 0;
	static volatile int32_t t184 = 3541;

    t184 = ((x737>x738)>>(x739!=x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x741 = 204383LLU;
	uint32_t x742 = UINT32_MAX;
	int8_t x743 = INT8_MAX;
	int32_t x744 = 1549455;

    t185 = ((x741>x742)>>(x743!=x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x745 = 107U;
	volatile int32_t x746 = INT32_MIN;
	int64_t x747 = INT64_MIN;
	volatile int32_t t186 = 281;

    t186 = ((x745>x746)>>(x747!=x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = INT32_MAX;
	int64_t x750 = INT64_MIN;
	int16_t x752 = -38;
	int32_t t187 = 237;

    t187 = ((x749>x750)>>(x751!=x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x753 = INT16_MIN;
	int16_t x754 = -4803;
	int64_t x755 = -1LL;
	uint32_t x756 = 54630U;
	volatile int32_t t188 = -167;

    t188 = ((x753>x754)>>(x755!=x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int16_t x757 = INT16_MIN;
	int32_t x760 = 25695;
	volatile int32_t t189 = -1;

    t189 = ((x757>x758)>>(x759!=x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x762 = 13LL;
	int64_t x763 = -1LL;
	static int64_t x764 = INT64_MAX;
	volatile int32_t t190 = 1568835;

    t190 = ((x761>x762)>>(x763!=x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x766 = -4933;
	static uint32_t x768 = UINT32_MAX;
	int32_t t191 = 1;

    t191 = ((x765>x766)>>(x767!=x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x769 = UINT32_MAX;
	int16_t x771 = -5370;
	static volatile uint16_t x772 = 650U;
	static int32_t t192 = -1;

    t192 = ((x769>x770)>>(x771!=x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x773 = -1LL;
	int16_t x774 = INT16_MAX;
	uint64_t x775 = 603036731513975768LLU;

    t193 = ((x773>x774)>>(x775!=x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x777 = 1196U;
	int8_t x780 = INT8_MIN;
	volatile int32_t t194 = 0;

    t194 = ((x777>x778)>>(x779!=x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x782 = -25551;
	volatile int32_t x783 = -68;
	int64_t x784 = -1660975744835552LL;
	static int32_t t195 = 14;

    t195 = ((x781>x782)>>(x783!=x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = INT64_MIN;
	static int16_t x786 = INT16_MIN;
	volatile int64_t x787 = -1LL;
	int64_t x788 = INT64_MIN;
	static int32_t t196 = 2;

    t196 = ((x785>x786)>>(x787!=x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = INT64_MIN;
	uint64_t x790 = 485486LLU;
	static int16_t x791 = -251;
	uint32_t x792 = 1033921589U;
	volatile int32_t t197 = 14;

    t197 = ((x789>x790)>>(x791!=x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x793 = INT16_MAX;
	int64_t x794 = 114120482971730LL;
	volatile int8_t x795 = INT8_MIN;
	int32_t x796 = INT32_MIN;
	int32_t t198 = 430903916;

    t198 = ((x793>x794)>>(x795!=x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = INT64_MAX;
	static uint8_t x798 = 19U;
	static volatile int8_t x799 = -1;
	int32_t x800 = -1;
	volatile int32_t t199 = 74880617;

    t199 = ((x797>x798)>>(x799!=x800));

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

