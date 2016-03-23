
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

int16_t x12 = -1;
volatile int32_t t3 = -1;
uint8_t x26 = 66U;
int16_t x27 = 23;
volatile int8_t x31 = INT8_MIN;
int32_t x40 = INT32_MIN;
uint16_t x43 = UINT16_MAX;
int8_t x46 = 37;
int64_t x54 = -41083LL;
int32_t t15 = -2;
volatile uint32_t x67 = UINT32_MAX;
static int64_t x73 = INT64_MIN;
int32_t x75 = INT32_MAX;
volatile int16_t x77 = INT16_MIN;
volatile int16_t x79 = -1;
uint16_t x90 = 13443U;
int16_t x98 = INT16_MIN;
volatile int32_t t26 = 1035121435;
int16_t x110 = INT16_MIN;
static int32_t t27 = 0;
int8_t x120 = -1;
uint32_t x126 = 159127U;
volatile uint64_t x127 = 368750LLU;
uint8_t x128 = 3U;
volatile uint64_t x129 = UINT64_MAX;
volatile int32_t x140 = INT32_MIN;
static uint64_t x143 = 257780034801LLU;
int32_t t37 = -829781;
int16_t x153 = -1;
int64_t x154 = INT64_MIN;
int32_t x162 = INT32_MIN;
int32_t t40 = 32878593;
static uint16_t x165 = UINT16_MAX;
uint64_t x171 = 318LLU;
static volatile int32_t x177 = INT32_MAX;
int32_t x182 = -1;
static int32_t x186 = -446105377;
uint16_t x187 = 25313U;
int32_t t46 = 2906;
static int8_t x189 = -1;
int64_t x190 = INT64_MAX;
volatile int8_t x194 = -1;
volatile int32_t t48 = -138;
static volatile uint8_t x208 = UINT8_MAX;
int64_t x223 = INT64_MIN;
uint64_t x237 = 20LLU;
static volatile int32_t t59 = -2256;
int32_t t61 = -14;
int64_t x255 = INT64_MIN;
int8_t x256 = -18;
static int16_t x257 = INT16_MIN;
volatile int32_t t65 = -6462;
int16_t x269 = -1609;
volatile int32_t x270 = -89;
int64_t x276 = INT64_MIN;
int32_t t68 = -999;
static volatile int16_t x284 = INT16_MAX;
volatile int32_t t70 = 15301900;
int16_t x287 = 158;
int8_t x289 = INT8_MAX;
uint32_t x291 = 45U;
uint32_t x292 = 16200U;
volatile int32_t x297 = -68;
volatile int32_t t75 = 0;
int32_t x323 = INT32_MIN;
uint8_t x324 = 56U;
static int32_t t80 = 7812;
uint8_t x328 = 29U;
static int32_t t81 = -705;
int8_t x329 = INT8_MIN;
static uint8_t x333 = UINT8_MAX;
int64_t x342 = INT64_MIN;
volatile uint64_t x353 = 1147247355103LLU;
uint8_t x356 = 6U;
uint16_t x357 = 372U;
static volatile int32_t x362 = INT32_MAX;
static int64_t x365 = -1LL;
int32_t x366 = -1;
uint8_t x367 = UINT8_MAX;
int64_t x369 = INT64_MIN;
static uint8_t x370 = 39U;
volatile int32_t t94 = 1032281;
uint32_t x385 = 4371U;
volatile int8_t x390 = -1;
uint64_t x397 = UINT64_MAX;
int32_t x398 = INT32_MIN;
uint32_t x400 = UINT32_MAX;
uint32_t x405 = UINT32_MAX;
uint64_t x419 = 3060927279516686LLU;
int8_t x427 = INT8_MAX;
int32_t x430 = INT32_MIN;
int64_t x433 = -646326LL;
volatile int64_t x437 = INT64_MIN;
int16_t x440 = 2160;
static volatile uint64_t x444 = UINT64_MAX;
int64_t x450 = -1LL;
volatile int32_t t112 = -15563197;
int32_t t113 = 111424;
static int8_t x464 = INT8_MIN;
volatile int32_t t116 = 18;
volatile int32_t x471 = INT32_MAX;
volatile int32_t t117 = 1056706;
uint64_t x481 = 7786281540940LLU;
uint16_t x482 = UINT16_MAX;
static volatile uint16_t x484 = 1U;
int32_t x488 = 1424;
volatile int32_t t121 = 28660;
uint8_t x491 = 2U;
static int64_t x495 = INT64_MIN;
uint8_t x519 = 56U;
int64_t x528 = -1LL;
int32_t x531 = INT32_MIN;
int32_t t132 = -2;
uint32_t x537 = 973516335U;
int16_t x539 = -1;
static int64_t x544 = INT64_MIN;
static int32_t t135 = -5;
int64_t x547 = INT64_MAX;
int32_t x548 = -1;
volatile int32_t t136 = -244671583;
int8_t x551 = 1;
volatile uint64_t x565 = UINT64_MAX;
int32_t x571 = 13;
static int32_t t142 = -65234;
int16_t x576 = 154;
uint16_t x578 = UINT16_MAX;
static int8_t x580 = 0;
int32_t x584 = -2;
int8_t x588 = -1;
volatile int16_t x592 = INT16_MIN;
int32_t x593 = INT32_MIN;
static int32_t t148 = 7194024;
static int32_t x597 = 0;
int8_t x605 = INT8_MAX;
static uint16_t x609 = UINT16_MAX;
uint64_t x610 = 122953960000460LLU;
static int16_t x626 = 1;
volatile uint8_t x627 = 3U;
uint32_t x628 = 206309545U;
uint64_t x631 = 310520419823471111LLU;
int16_t x632 = -1;
uint32_t x636 = UINT32_MAX;
int32_t t158 = -57;
uint8_t x638 = 23U;
int32_t t159 = 1;
uint64_t x647 = 1501LLU;
int8_t x663 = 9;
uint32_t x666 = UINT32_MAX;
int32_t t167 = 254110;
int16_t x674 = INT16_MAX;
static volatile uint32_t x678 = 181726417U;
volatile uint16_t x685 = 30552U;
int32_t t171 = 472236;
int64_t x690 = -1LL;
int16_t x691 = INT16_MIN;
uint8_t x697 = UINT8_MAX;
uint16_t x704 = 4U;
volatile int32_t x705 = INT32_MAX;
volatile int32_t x708 = -1;
volatile uint32_t x712 = 59519776U;
volatile int32_t t177 = 94174775;
int16_t x717 = INT16_MIN;
volatile uint8_t x720 = 118U;
int32_t t179 = 69386;
int8_t x723 = INT8_MIN;
static int64_t x725 = -1LL;
static int16_t x728 = -8;
uint16_t x730 = 1918U;
static int8_t x737 = -1;
static volatile int32_t t184 = 80;
int32_t x746 = 34244;
int8_t x748 = INT8_MIN;
int32_t t187 = 17192752;
volatile uint16_t x759 = 1U;
static uint32_t x765 = UINT32_MAX;
volatile int32_t t191 = 113380;
int32_t t194 = -387;
static int64_t x784 = -50236715LL;
int8_t x786 = 53;
static int8_t x789 = 0;
int16_t x794 = INT16_MAX;
int32_t x798 = -1;


void f0(void) {
    	uint64_t x1 = UINT64_MAX;
	volatile uint16_t x2 = 56U;
	int32_t x3 = INT32_MIN;
	static uint8_t x4 = 7U;
	volatile int32_t t0 = 3012;

    t0 = (((x1&x2)<=x3)>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int32_t x5 = -1;
	int8_t x6 = -3;
	static uint16_t x7 = UINT16_MAX;
	static uint8_t x8 = 3U;
	volatile int32_t t1 = 4;

    t1 = (((x5&x6)<=x7)>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = INT8_MAX;
	int16_t x10 = INT16_MIN;
	static uint32_t x11 = UINT32_MAX;
	static volatile int32_t t2 = -27168;

    t2 = (((x9&x10)<=x11)>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x13 = -19;
	int32_t x14 = INT32_MAX;
	int16_t x15 = -176;
	int64_t x16 = -1LL;

    t3 = (((x13&x14)<=x15)>x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x17 = INT64_MIN;
	int32_t x18 = INT32_MAX;
	int16_t x19 = INT16_MIN;
	static uint16_t x20 = UINT16_MAX;
	int32_t t4 = 35;

    t4 = (((x17&x18)<=x19)>x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MAX;
	int64_t x22 = INT64_MAX;
	volatile int8_t x23 = 0;
	static volatile int32_t x24 = INT32_MIN;
	volatile int32_t t5 = 224379;

    t5 = (((x21&x22)<=x23)>x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = 10U;
	volatile int16_t x28 = INT16_MIN;
	volatile int32_t t6 = -14;

    t6 = (((x25&x26)<=x27)>x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = UINT16_MAX;
	int32_t x30 = INT32_MIN;
	int64_t x32 = INT64_MIN;
	int32_t t7 = -80;

    t7 = (((x29&x30)<=x31)>x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x33 = UINT64_MAX;
	uint64_t x34 = 846646688LLU;
	uint8_t x35 = UINT8_MAX;
	int64_t x36 = INT64_MIN;
	int32_t t8 = 67926454;

    t8 = (((x33&x34)<=x35)>x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x37 = -1LL;
	int64_t x38 = INT64_MIN;
	int8_t x39 = 1;
	int32_t t9 = 53;

    t9 = (((x37&x38)<=x39)>x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	static uint64_t x42 = UINT64_MAX;
	static volatile int64_t x44 = INT64_MAX;
	int32_t t10 = -3147;

    t10 = (((x41&x42)<=x43)>x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -12;
	int8_t x47 = INT8_MAX;
	int8_t x48 = 33;
	static volatile int32_t t11 = -216;

    t11 = (((x45&x46)<=x47)>x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = 1021;
	int8_t x50 = INT8_MIN;
	int16_t x51 = -1;
	int8_t x52 = -19;
	static int32_t t12 = 3717;

    t12 = (((x49&x50)<=x51)>x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x53 = INT8_MAX;
	static int8_t x55 = INT8_MIN;
	static int32_t x56 = -16444788;
	int32_t t13 = -745420;

    t13 = (((x53&x54)<=x55)>x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MIN;
	uint32_t x58 = UINT32_MAX;
	uint32_t x59 = 23331U;
	static int32_t x60 = -34629;
	volatile int32_t t14 = -301787;

    t14 = (((x57&x58)<=x59)>x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MAX;
	static uint64_t x62 = UINT64_MAX;
	int32_t x63 = -92253;
	static int16_t x64 = 3;

    t15 = (((x61&x62)<=x63)>x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x65 = 6264LL;
	int8_t x66 = INT8_MIN;
	uint16_t x68 = 0U;
	int32_t t16 = 13040077;

    t16 = (((x65&x66)<=x67)>x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x69 = UINT16_MAX;
	uint8_t x70 = 60U;
	uint64_t x71 = 2430277215LLU;
	static uint8_t x72 = 75U;
	int32_t t17 = 566375;

    t17 = (((x69&x70)<=x71)>x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x74 = INT16_MIN;
	int16_t x76 = INT16_MAX;
	volatile int32_t t18 = 5215929;

    t18 = (((x73&x74)<=x75)>x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x78 = -1;
	static int16_t x80 = 28;
	volatile int32_t t19 = 1589556;

    t19 = (((x77&x78)<=x79)>x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = 9U;
	uint64_t x82 = UINT64_MAX;
	static volatile int16_t x83 = INT16_MIN;
	int8_t x84 = INT8_MIN;
	volatile int32_t t20 = -2258;

    t20 = (((x81&x82)<=x83)>x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = 2016258147976550LLU;
	static uint16_t x86 = 9U;
	int16_t x87 = -1;
	int8_t x88 = 0;
	static int32_t t21 = 1;

    t21 = (((x85&x86)<=x87)>x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MIN;
	int8_t x91 = INT8_MAX;
	int8_t x92 = INT8_MIN;
	int32_t t22 = 400218;

    t22 = (((x89&x90)<=x91)>x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = 73U;
	int16_t x94 = INT16_MIN;
	uint16_t x95 = 3787U;
	static uint64_t x96 = UINT64_MAX;
	int32_t t23 = 338523;

    t23 = (((x93&x94)<=x95)>x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x97 = 1778547882097717300LLU;
	int8_t x99 = -1;
	static uint32_t x100 = 15707438U;
	volatile int32_t t24 = 78716980;

    t24 = (((x97&x98)<=x99)>x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = INT8_MIN;
	uint16_t x102 = 2897U;
	uint8_t x103 = UINT8_MAX;
	static int32_t x104 = INT32_MIN;
	static volatile int32_t t25 = -3697;

    t25 = (((x101&x102)<=x103)>x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x105 = INT32_MIN;
	uint64_t x106 = UINT64_MAX;
	static int64_t x107 = -1LL;
	uint32_t x108 = 130U;

    t26 = (((x105&x106)<=x107)>x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x109 = 94703U;
	int8_t x111 = -3;
	int64_t x112 = -1LL;

    t27 = (((x109&x110)<=x111)>x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x113 = 381400118706149420LLU;
	int8_t x114 = INT8_MIN;
	int64_t x115 = INT64_MIN;
	uint8_t x116 = 0U;
	static int32_t t28 = -1960;

    t28 = (((x113&x114)<=x115)>x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = 2493927192578809LLU;
	int16_t x118 = INT16_MIN;
	volatile int32_t x119 = INT32_MAX;
	volatile int32_t t29 = -504288;

    t29 = (((x117&x118)<=x119)>x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = 16;
	static volatile uint32_t x122 = UINT32_MAX;
	int16_t x123 = -3637;
	int32_t x124 = INT32_MAX;
	volatile int32_t t30 = -48455;

    t30 = (((x121&x122)<=x123)>x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x125 = 11592U;
	static int32_t t31 = 11833706;

    t31 = (((x125&x126)<=x127)>x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint8_t x130 = 7U;
	volatile uint64_t x131 = 5457158820028LLU;
	static volatile uint16_t x132 = 102U;
	volatile int32_t t32 = -15;

    t32 = (((x129&x130)<=x131)>x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = -1;
	uint16_t x134 = 2U;
	int32_t x135 = -1;
	volatile int16_t x136 = INT16_MIN;
	int32_t t33 = 71991;

    t33 = (((x133&x134)<=x135)>x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x137 = INT16_MIN;
	int8_t x138 = -17;
	int64_t x139 = INT64_MIN;
	static int32_t t34 = -111790;

    t34 = (((x137&x138)<=x139)>x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x141 = 68052969490757LLU;
	volatile int64_t x142 = -36LL;
	volatile int16_t x144 = INT16_MIN;
	volatile int32_t t35 = -1;

    t35 = (((x141&x142)<=x143)>x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint8_t x145 = 10U;
	int8_t x146 = INT8_MIN;
	int16_t x147 = -1;
	static volatile int8_t x148 = -1;
	static volatile int32_t t36 = -445992224;

    t36 = (((x145&x146)<=x147)>x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = 0;
	int16_t x150 = -1;
	uint64_t x151 = UINT64_MAX;
	uint64_t x152 = 115LLU;

    t37 = (((x149&x150)<=x151)>x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int16_t x155 = -1;
	volatile int64_t x156 = -1747LL;
	static int32_t t38 = 6831;

    t38 = (((x153&x154)<=x155)>x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x157 = 2475677912966076LLU;
	int16_t x158 = 0;
	volatile int32_t x159 = -410062121;
	static int32_t x160 = INT32_MIN;
	volatile int32_t t39 = 29;

    t39 = (((x157&x158)<=x159)>x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x161 = 1115U;
	uint32_t x163 = UINT32_MAX;
	int16_t x164 = INT16_MAX;

    t40 = (((x161&x162)<=x163)>x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint8_t x166 = 11U;
	int8_t x167 = -6;
	int64_t x168 = INT64_MIN;
	volatile int32_t t41 = -84640;

    t41 = (((x165&x166)<=x167)>x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x169 = 30201U;
	static int16_t x170 = 0;
	volatile uint64_t x172 = 236909432LLU;
	volatile int32_t t42 = -47;

    t42 = (((x169&x170)<=x171)>x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x173 = 5U;
	uint8_t x174 = 94U;
	volatile int16_t x175 = INT16_MIN;
	static volatile int8_t x176 = -4;
	int32_t t43 = -227499;

    t43 = (((x173&x174)<=x175)>x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x178 = 2758380460498038356LLU;
	int16_t x179 = INT16_MAX;
	int8_t x180 = INT8_MIN;
	volatile int32_t t44 = 0;

    t44 = (((x177&x178)<=x179)>x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = 1294;
	static volatile int64_t x183 = -1LL;
	int64_t x184 = -384183LL;
	static volatile int32_t t45 = 5079849;

    t45 = (((x181&x182)<=x183)>x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x185 = 2878;
	static int8_t x188 = INT8_MIN;

    t46 = (((x185&x186)<=x187)>x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x191 = 307;
	int64_t x192 = -1LL;
	volatile int32_t t47 = 340686491;

    t47 = (((x189&x190)<=x191)>x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x193 = INT8_MAX;
	int64_t x195 = -1LL;
	uint64_t x196 = 11675012299732LLU;

    t48 = (((x193&x194)<=x195)>x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = -845692;
	volatile int16_t x198 = -369;
	volatile int64_t x199 = INT64_MIN;
	volatile uint64_t x200 = 8081885LLU;
	volatile int32_t t49 = -208034;

    t49 = (((x197&x198)<=x199)>x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x201 = 7;
	int32_t x202 = 15280439;
	volatile int8_t x203 = 3;
	uint32_t x204 = UINT32_MAX;
	volatile int32_t t50 = -308;

    t50 = (((x201&x202)<=x203)>x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = INT64_MIN;
	static volatile uint32_t x206 = 3U;
	volatile int16_t x207 = INT16_MAX;
	int32_t t51 = 39;

    t51 = (((x205&x206)<=x207)>x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x209 = 470795092743LL;
	int8_t x210 = INT8_MAX;
	uint64_t x211 = UINT64_MAX;
	volatile int8_t x212 = INT8_MIN;
	int32_t t52 = 228;

    t52 = (((x209&x210)<=x211)>x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x213 = 590U;
	volatile uint8_t x214 = 25U;
	int8_t x215 = INT8_MIN;
	int16_t x216 = INT16_MIN;
	volatile int32_t t53 = -37;

    t53 = (((x213&x214)<=x215)>x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = -19460;
	volatile int32_t x218 = INT32_MIN;
	int64_t x219 = -1LL;
	static volatile uint64_t x220 = 289LLU;
	int32_t t54 = -3933891;

    t54 = (((x217&x218)<=x219)>x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x221 = 9583979;
	int32_t x222 = INT32_MAX;
	uint8_t x224 = UINT8_MAX;
	volatile int32_t t55 = -1;

    t55 = (((x221&x222)<=x223)>x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int32_t x225 = INT32_MIN;
	int32_t x226 = -1;
	int8_t x227 = -1;
	static int64_t x228 = -7751759618LL;
	int32_t t56 = -45503658;

    t56 = (((x225&x226)<=x227)>x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = -906438763;
	uint8_t x230 = UINT8_MAX;
	volatile int16_t x231 = INT16_MIN;
	volatile int64_t x232 = -1LL;
	volatile int32_t t57 = 1676;

    t57 = (((x229&x230)<=x231)>x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x233 = 7U;
	int32_t x234 = INT32_MIN;
	int16_t x235 = INT16_MIN;
	uint64_t x236 = 181LLU;
	int32_t t58 = -1703;

    t58 = (((x233&x234)<=x235)>x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x238 = 1U;
	int16_t x239 = INT16_MAX;
	int64_t x240 = -1046929021263LL;

    t59 = (((x237&x238)<=x239)>x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x241 = 155U;
	int16_t x242 = INT16_MAX;
	int64_t x243 = INT64_MIN;
	int16_t x244 = INT16_MAX;
	int32_t t60 = -26551;

    t60 = (((x241&x242)<=x243)>x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile uint64_t x245 = UINT64_MAX;
	uint64_t x246 = 336794676LLU;
	uint16_t x247 = 946U;
	int16_t x248 = 16;

    t61 = (((x245&x246)<=x247)>x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x249 = UINT32_MAX;
	static int8_t x250 = INT8_MIN;
	static uint64_t x251 = UINT64_MAX;
	uint32_t x252 = 3096U;
	volatile int32_t t62 = 98;

    t62 = (((x249&x250)<=x251)>x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile uint32_t x253 = 706050927U;
	volatile int16_t x254 = -1;
	int32_t t63 = 275121;

    t63 = (((x253&x254)<=x255)>x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x258 = INT64_MAX;
	int32_t x259 = INT32_MIN;
	uint64_t x260 = 20269773247LLU;
	volatile int32_t t64 = -442333737;

    t64 = (((x257&x258)<=x259)>x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = -1;
	volatile uint32_t x262 = UINT32_MAX;
	static volatile uint64_t x263 = UINT64_MAX;
	uint64_t x264 = UINT64_MAX;

    t65 = (((x261&x262)<=x263)>x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x265 = 4LLU;
	volatile int32_t x266 = INT32_MAX;
	int8_t x267 = 0;
	static uint16_t x268 = 2039U;
	int32_t t66 = -53277;

    t66 = (((x265&x266)<=x267)>x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x271 = INT8_MIN;
	int32_t x272 = 46275916;
	volatile int32_t t67 = -1;

    t67 = (((x269&x270)<=x271)>x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x273 = -1;
	uint32_t x274 = 292U;
	int8_t x275 = -1;

    t68 = (((x273&x274)<=x275)>x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = 1621;
	volatile int64_t x278 = INT64_MIN;
	int64_t x279 = INT64_MIN;
	uint64_t x280 = UINT64_MAX;
	volatile int32_t t69 = 195279;

    t69 = (((x277&x278)<=x279)>x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = -1;
	volatile int64_t x282 = 2327163947LL;
	static int32_t x283 = -7965;

    t70 = (((x281&x282)<=x283)>x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = -474;
	uint32_t x286 = 319440416U;
	static int16_t x288 = INT16_MAX;
	volatile int32_t t71 = 1;

    t71 = (((x285&x286)<=x287)>x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x290 = -1;
	static int32_t t72 = 1;

    t72 = (((x289&x290)<=x291)>x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint8_t x293 = 3U;
	volatile int64_t x294 = INT64_MAX;
	uint16_t x295 = 2267U;
	uint16_t x296 = 3085U;
	volatile int32_t t73 = -18403;

    t73 = (((x293&x294)<=x295)>x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x298 = INT64_MAX;
	int32_t x299 = INT32_MAX;
	int64_t x300 = -2863571815736183137LL;
	volatile int32_t t74 = -35733331;

    t74 = (((x297&x298)<=x299)>x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x301 = 7U;
	int32_t x302 = INT32_MAX;
	uint8_t x303 = 6U;
	volatile int8_t x304 = -1;

    t75 = (((x301&x302)<=x303)>x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x305 = 21U;
	int64_t x306 = -30046721873386700LL;
	uint64_t x307 = 7720621045971LLU;
	static int16_t x308 = INT16_MIN;
	volatile int32_t t76 = 104;

    t76 = (((x305&x306)<=x307)>x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x309 = -1;
	int8_t x310 = INT8_MIN;
	volatile int16_t x311 = INT16_MAX;
	static int64_t x312 = 43500634774659LL;
	volatile int32_t t77 = 1;

    t77 = (((x309&x310)<=x311)>x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x313 = 578091769798613890LLU;
	int64_t x314 = INT64_MIN;
	volatile int8_t x315 = -9;
	volatile int32_t x316 = 11096;
	int32_t t78 = 520900581;

    t78 = (((x313&x314)<=x315)>x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x317 = UINT16_MAX;
	int8_t x318 = INT8_MIN;
	volatile int32_t x319 = INT32_MIN;
	int16_t x320 = INT16_MAX;
	int32_t t79 = 9954117;

    t79 = (((x317&x318)<=x319)>x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = INT8_MIN;
	int8_t x322 = INT8_MIN;

    t80 = (((x321&x322)<=x323)>x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x325 = 88U;
	volatile int8_t x326 = INT8_MIN;
	int64_t x327 = INT64_MAX;

    t81 = (((x325&x326)<=x327)>x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x330 = -1;
	static uint64_t x331 = UINT64_MAX;
	static volatile int64_t x332 = INT64_MAX;
	static volatile int32_t t82 = 41938449;

    t82 = (((x329&x330)<=x331)>x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x334 = 3439646624719182LL;
	uint64_t x335 = 1LLU;
	volatile int64_t x336 = -1LL;
	static int32_t t83 = -3384916;

    t83 = (((x333&x334)<=x335)>x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x337 = 5652212717083114366LLU;
	static uint32_t x338 = 1231122U;
	int16_t x339 = -1;
	int16_t x340 = -1;
	volatile int32_t t84 = 733530;

    t84 = (((x337&x338)<=x339)>x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x341 = INT8_MIN;
	uint64_t x343 = 6943184859182467LLU;
	int64_t x344 = INT64_MIN;
	int32_t t85 = -483;

    t85 = (((x341&x342)<=x343)>x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int8_t x345 = 38;
	int8_t x346 = INT8_MAX;
	int16_t x347 = 0;
	int64_t x348 = -1LL;
	int32_t t86 = -2844;

    t86 = (((x345&x346)<=x347)>x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = -14;
	static int16_t x350 = INT16_MIN;
	int32_t x351 = 905297784;
	int32_t x352 = INT32_MIN;
	static int32_t t87 = -8;

    t87 = (((x349&x350)<=x351)>x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x354 = INT32_MIN;
	int8_t x355 = INT8_MAX;
	static int32_t t88 = 1;

    t88 = (((x353&x354)<=x355)>x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x358 = UINT64_MAX;
	int8_t x359 = INT8_MIN;
	int64_t x360 = -1LL;
	volatile int32_t t89 = -64863541;

    t89 = (((x357&x358)<=x359)>x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = INT8_MIN;
	int32_t x363 = INT32_MIN;
	int8_t x364 = INT8_MIN;
	int32_t t90 = 161;

    t90 = (((x361&x362)<=x363)>x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x368 = INT8_MAX;
	volatile int32_t t91 = 63126;

    t91 = (((x365&x366)<=x367)>x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x371 = 6U;
	static uint16_t x372 = 13U;
	volatile int32_t t92 = -2524;

    t92 = (((x369&x370)<=x371)>x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x373 = INT8_MIN;
	int16_t x374 = INT16_MAX;
	volatile uint64_t x375 = 69608632060314063LLU;
	static volatile uint16_t x376 = 170U;
	int32_t t93 = -18418;

    t93 = (((x373&x374)<=x375)>x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x377 = 2776008073139409LLU;
	int16_t x378 = -1;
	int8_t x379 = INT8_MIN;
	uint64_t x380 = UINT64_MAX;

    t94 = (((x377&x378)<=x379)>x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = INT64_MAX;
	int16_t x382 = 2;
	volatile int8_t x383 = -1;
	int64_t x384 = INT64_MIN;
	volatile int32_t t95 = -44;

    t95 = (((x381&x382)<=x383)>x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x386 = -1LL;
	int64_t x387 = -491LL;
	int16_t x388 = -735;
	static volatile int32_t t96 = -519468;

    t96 = (((x385&x386)<=x387)>x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x389 = 42262LLU;
	volatile int16_t x391 = INT16_MAX;
	int64_t x392 = -1LL;
	int32_t t97 = -63599;

    t97 = (((x389&x390)<=x391)>x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x393 = 52U;
	int64_t x394 = -109336LL;
	int8_t x395 = 1;
	int32_t x396 = INT32_MAX;
	static volatile int32_t t98 = -7;

    t98 = (((x393&x394)<=x395)>x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint16_t x399 = 111U;
	int32_t t99 = -35210;

    t99 = (((x397&x398)<=x399)>x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x401 = INT16_MAX;
	int8_t x402 = INT8_MIN;
	static int8_t x403 = -1;
	int8_t x404 = INT8_MIN;
	static volatile int32_t t100 = -125122;

    t100 = (((x401&x402)<=x403)>x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint64_t x406 = 663456LLU;
	int16_t x407 = -1;
	uint64_t x408 = 4031867089100500LLU;
	volatile int32_t t101 = 2407963;

    t101 = (((x405&x406)<=x407)>x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint16_t x409 = 12U;
	static int8_t x410 = INT8_MIN;
	int64_t x411 = INT64_MIN;
	static uint32_t x412 = 660010U;
	int32_t t102 = -9517;

    t102 = (((x409&x410)<=x411)>x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x413 = -117869627LL;
	uint32_t x414 = 1177073928U;
	int32_t x415 = 1;
	volatile uint64_t x416 = 856198831238LLU;
	int32_t t103 = -27410895;

    t103 = (((x413&x414)<=x415)>x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint32_t x417 = 1U;
	int16_t x418 = -1;
	static int64_t x420 = INT64_MIN;
	volatile int32_t t104 = 989138;

    t104 = (((x417&x418)<=x419)>x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int8_t x421 = INT8_MIN;
	uint8_t x422 = UINT8_MAX;
	int64_t x423 = INT64_MIN;
	int8_t x424 = -1;
	volatile int32_t t105 = -127;

    t105 = (((x421&x422)<=x423)>x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x425 = 416U;
	int32_t x426 = INT32_MAX;
	int64_t x428 = INT64_MAX;
	int32_t t106 = 48;

    t106 = (((x425&x426)<=x427)>x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x429 = 5985LLU;
	int64_t x431 = INT64_MIN;
	int64_t x432 = 2040950789816105732LL;
	int32_t t107 = -54;

    t107 = (((x429&x430)<=x431)>x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x434 = 9810LLU;
	int8_t x435 = INT8_MIN;
	int16_t x436 = INT16_MAX;
	int32_t t108 = -1895821;

    t108 = (((x433&x434)<=x435)>x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint16_t x438 = UINT16_MAX;
	static int16_t x439 = -38;
	static volatile int32_t t109 = -126775402;

    t109 = (((x437&x438)<=x439)>x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = 387;
	int16_t x442 = -23;
	int64_t x443 = INT64_MAX;
	int32_t t110 = 21;

    t110 = (((x441&x442)<=x443)>x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x445 = 17U;
	volatile int64_t x446 = INT64_MIN;
	int16_t x447 = INT16_MAX;
	int8_t x448 = INT8_MAX;
	volatile int32_t t111 = -23940679;

    t111 = (((x445&x446)<=x447)>x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = INT16_MIN;
	uint64_t x451 = 2489807LLU;
	uint8_t x452 = 7U;

    t112 = (((x449&x450)<=x451)>x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x453 = -8LL;
	uint32_t x454 = 0U;
	int8_t x455 = 0;
	int8_t x456 = INT8_MAX;

    t113 = (((x453&x454)<=x455)>x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x457 = INT32_MIN;
	volatile uint16_t x458 = 20352U;
	int32_t x459 = INT32_MIN;
	int16_t x460 = -86;
	int32_t t114 = -1726049;

    t114 = (((x457&x458)<=x459)>x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x461 = 1U;
	int16_t x462 = -247;
	int32_t x463 = 2;
	int32_t t115 = -5;

    t115 = (((x461&x462)<=x463)>x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x465 = 819454U;
	volatile uint8_t x466 = UINT8_MAX;
	uint32_t x467 = 9244415U;
	static int32_t x468 = INT32_MAX;

    t116 = (((x465&x466)<=x467)>x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = INT8_MIN;
	int8_t x470 = INT8_MIN;
	int16_t x472 = INT16_MAX;

    t117 = (((x469&x470)<=x471)>x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x473 = 28U;
	uint8_t x474 = 0U;
	volatile uint8_t x475 = 45U;
	int64_t x476 = -3759456606431LL;
	static int32_t t118 = 87435;

    t118 = (((x473&x474)<=x475)>x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = INT16_MIN;
	volatile int64_t x478 = INT64_MIN;
	uint32_t x479 = 85236U;
	static int16_t x480 = -1927;
	int32_t t119 = 728414201;

    t119 = (((x477&x478)<=x479)>x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x483 = INT64_MIN;
	int32_t t120 = 319737555;

    t120 = (((x481&x482)<=x483)>x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x485 = 1930;
	volatile uint8_t x486 = UINT8_MAX;
	int32_t x487 = INT32_MAX;

    t121 = (((x485&x486)<=x487)>x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = 0;
	uint64_t x490 = UINT64_MAX;
	int32_t x492 = INT32_MAX;
	int32_t t122 = -21771256;

    t122 = (((x489&x490)<=x491)>x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x493 = 320U;
	int64_t x494 = INT64_MIN;
	uint16_t x496 = 139U;
	volatile int32_t t123 = 90;

    t123 = (((x493&x494)<=x495)>x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x497 = 4;
	int8_t x498 = INT8_MIN;
	int8_t x499 = -1;
	int64_t x500 = -21852771353382LL;
	volatile int32_t t124 = -1;

    t124 = (((x497&x498)<=x499)>x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x501 = -14;
	int16_t x502 = -9;
	int8_t x503 = INT8_MAX;
	volatile int32_t x504 = 31;
	volatile int32_t t125 = -584952;

    t125 = (((x501&x502)<=x503)>x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile uint32_t x505 = UINT32_MAX;
	volatile int32_t x506 = -3002;
	uint32_t x507 = UINT32_MAX;
	uint64_t x508 = 62530308112144593LLU;
	int32_t t126 = -465;

    t126 = (((x505&x506)<=x507)>x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x509 = 1721016916297993588LLU;
	volatile int32_t x510 = -2735;
	volatile int64_t x511 = INT64_MIN;
	uint32_t x512 = 66718157U;
	static volatile int32_t t127 = 882;

    t127 = (((x509&x510)<=x511)>x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = INT64_MIN;
	int8_t x514 = INT8_MAX;
	int64_t x515 = 11LL;
	uint8_t x516 = UINT8_MAX;
	volatile int32_t t128 = 8357992;

    t128 = (((x513&x514)<=x515)>x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile uint64_t x517 = UINT64_MAX;
	static int32_t x518 = INT32_MAX;
	int32_t x520 = -807497392;
	int32_t t129 = -496291632;

    t129 = (((x517&x518)<=x519)>x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = -3275286123254603115LL;
	uint64_t x522 = 905862612855063LLU;
	uint8_t x523 = UINT8_MAX;
	uint16_t x524 = 60U;
	volatile int32_t t130 = -1;

    t130 = (((x521&x522)<=x523)>x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = INT32_MAX;
	uint8_t x526 = 6U;
	int64_t x527 = INT64_MIN;
	volatile int32_t t131 = 243;

    t131 = (((x525&x526)<=x527)>x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = INT16_MAX;
	int64_t x530 = -1LL;
	volatile int8_t x532 = INT8_MIN;

    t132 = (((x529&x530)<=x531)>x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = INT64_MIN;
	int8_t x534 = 25;
	static int8_t x535 = 0;
	uint8_t x536 = 2U;
	static volatile int32_t t133 = 1227;

    t133 = (((x533&x534)<=x535)>x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x538 = UINT8_MAX;
	static uint32_t x540 = UINT32_MAX;
	volatile int32_t t134 = 2382;

    t134 = (((x537&x538)<=x539)>x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x541 = UINT16_MAX;
	int64_t x542 = 1999LL;
	volatile int16_t x543 = -19;

    t135 = (((x541&x542)<=x543)>x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x545 = 15065U;
	volatile int64_t x546 = -47043125590743374LL;

    t136 = (((x545&x546)<=x547)>x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = -1;
	volatile int32_t x550 = INT32_MIN;
	int32_t x552 = INT32_MAX;
	volatile int32_t t137 = 719830860;

    t137 = (((x549&x550)<=x551)>x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = INT64_MIN;
	int8_t x554 = INT8_MAX;
	static int32_t x555 = -1;
	static uint16_t x556 = 979U;
	volatile int32_t t138 = 8037;

    t138 = (((x553&x554)<=x555)>x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x557 = -1907;
	int32_t x558 = -11;
	int16_t x559 = -407;
	static int64_t x560 = 261204LL;
	volatile int32_t t139 = -13270;

    t139 = (((x557&x558)<=x559)>x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x561 = 2114635U;
	volatile uint16_t x562 = 17U;
	int64_t x563 = INT64_MIN;
	volatile int64_t x564 = -1LL;
	int32_t t140 = -280;

    t140 = (((x561&x562)<=x563)>x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x566 = 30U;
	int8_t x567 = INT8_MIN;
	static uint8_t x568 = 0U;
	int32_t t141 = -56714185;

    t141 = (((x565&x566)<=x567)>x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x569 = 5U;
	static int64_t x570 = INT64_MIN;
	int32_t x572 = INT32_MIN;

    t142 = (((x569&x570)<=x571)>x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = INT64_MIN;
	int32_t x574 = INT32_MAX;
	volatile uint16_t x575 = 1347U;
	int32_t t143 = 92920;

    t143 = (((x573&x574)<=x575)>x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = -24;
	int64_t x579 = -414LL;
	int32_t t144 = 512;

    t144 = (((x577&x578)<=x579)>x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x581 = 974153870638017LLU;
	volatile int16_t x582 = -2;
	uint16_t x583 = 395U;
	int32_t t145 = -12;

    t145 = (((x581&x582)<=x583)>x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x585 = -1;
	int8_t x586 = -1;
	int16_t x587 = -1;
	volatile int32_t t146 = -3867;

    t146 = (((x585&x586)<=x587)>x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x589 = UINT64_MAX;
	volatile int32_t x590 = INT32_MIN;
	volatile int32_t x591 = -90760872;
	volatile int32_t t147 = 531937;

    t147 = (((x589&x590)<=x591)>x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x594 = 1LLU;
	int64_t x595 = 52LL;
	int8_t x596 = INT8_MIN;

    t148 = (((x593&x594)<=x595)>x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x598 = INT64_MAX;
	int16_t x599 = 177;
	int16_t x600 = INT16_MAX;
	volatile int32_t t149 = 192375529;

    t149 = (((x597&x598)<=x599)>x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint32_t x601 = UINT32_MAX;
	static int8_t x602 = INT8_MIN;
	int32_t x603 = INT32_MIN;
	uint16_t x604 = 202U;
	int32_t t150 = -835890;

    t150 = (((x601&x602)<=x603)>x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x606 = 15598U;
	int8_t x607 = 6;
	int64_t x608 = -1716LL;
	static int32_t t151 = -119151966;

    t151 = (((x605&x606)<=x607)>x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x611 = 9231644U;
	int32_t x612 = INT32_MAX;
	int32_t t152 = -6216;

    t152 = (((x609&x610)<=x611)>x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = -1LL;
	volatile int16_t x614 = -3;
	int32_t x615 = INT32_MAX;
	int8_t x616 = INT8_MIN;
	volatile int32_t t153 = -341;

    t153 = (((x613&x614)<=x615)>x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = INT64_MIN;
	int64_t x618 = INT64_MIN;
	uint32_t x619 = 454369U;
	int32_t x620 = INT32_MIN;
	int32_t t154 = 551851;

    t154 = (((x617&x618)<=x619)>x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint64_t x621 = 597212LLU;
	int16_t x622 = -1;
	volatile uint64_t x623 = 1529799832466225606LLU;
	volatile int16_t x624 = -1;
	int32_t t155 = -686;

    t155 = (((x621&x622)<=x623)>x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x625 = -1LL;
	volatile int32_t t156 = -154;

    t156 = (((x625&x626)<=x627)>x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x629 = UINT32_MAX;
	volatile uint64_t x630 = 632LLU;
	int32_t t157 = -112683955;

    t157 = (((x629&x630)<=x631)>x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x633 = -180LL;
	int8_t x634 = 1;
	int32_t x635 = -1;

    t158 = (((x633&x634)<=x635)>x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = INT8_MIN;
	volatile uint32_t x639 = UINT32_MAX;
	uint8_t x640 = 12U;

    t159 = (((x637&x638)<=x639)>x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = INT16_MIN;
	volatile int32_t x642 = -242281;
	int64_t x643 = -533893746019LL;
	uint8_t x644 = 64U;
	int32_t t160 = -440;

    t160 = (((x641&x642)<=x643)>x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = INT8_MIN;
	uint16_t x646 = UINT16_MAX;
	volatile int64_t x648 = 229767827994002797LL;
	volatile int32_t t161 = -446;

    t161 = (((x645&x646)<=x647)>x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = 4579799751LL;
	int64_t x650 = INT64_MAX;
	int16_t x651 = INT16_MIN;
	int32_t x652 = 31;
	int32_t t162 = -5198;

    t162 = (((x649&x650)<=x651)>x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int8_t x653 = -33;
	int64_t x654 = INT64_MAX;
	int32_t x655 = INT32_MIN;
	int16_t x656 = 18;
	static volatile int32_t t163 = -55;

    t163 = (((x653&x654)<=x655)>x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = -25;
	int8_t x658 = INT8_MIN;
	uint16_t x659 = 146U;
	static int8_t x660 = 2;
	volatile int32_t t164 = 3;

    t164 = (((x657&x658)<=x659)>x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile uint64_t x661 = 13981LLU;
	int32_t x662 = INT32_MAX;
	int64_t x664 = 1LL;
	volatile int32_t t165 = 252284099;

    t165 = (((x661&x662)<=x663)>x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = -472LL;
	volatile uint64_t x667 = UINT64_MAX;
	volatile int8_t x668 = INT8_MIN;
	static volatile int32_t t166 = 0;

    t166 = (((x665&x666)<=x667)>x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = INT64_MIN;
	int64_t x670 = -462223044869957LL;
	static int32_t x671 = INT32_MIN;
	uint16_t x672 = 0U;

    t167 = (((x669&x670)<=x671)>x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = INT16_MAX;
	int16_t x675 = INT16_MIN;
	uint32_t x676 = 16559356U;
	volatile int32_t t168 = -43890;

    t168 = (((x673&x674)<=x675)>x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x677 = UINT64_MAX;
	uint8_t x679 = UINT8_MAX;
	static uint8_t x680 = 2U;
	volatile int32_t t169 = 1301245;

    t169 = (((x677&x678)<=x679)>x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x681 = UINT64_MAX;
	static volatile int64_t x682 = INT64_MIN;
	int64_t x683 = INT64_MAX;
	uint8_t x684 = UINT8_MAX;
	volatile int32_t t170 = 2833648;

    t170 = (((x681&x682)<=x683)>x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x686 = INT16_MAX;
	int64_t x687 = INT64_MIN;
	volatile int32_t x688 = 374;

    t171 = (((x685&x686)<=x687)>x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = -1;
	int32_t x692 = -1;
	volatile int32_t t172 = -113;

    t172 = (((x689&x690)<=x691)>x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint32_t x693 = UINT32_MAX;
	volatile int8_t x694 = 1;
	int16_t x695 = -1;
	uint64_t x696 = 67535376745093LLU;
	volatile int32_t t173 = -978;

    t173 = (((x693&x694)<=x695)>x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x698 = -5987;
	int32_t x699 = INT32_MIN;
	static int8_t x700 = -1;
	int32_t t174 = 6729;

    t174 = (((x697&x698)<=x699)>x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x701 = INT8_MAX;
	int8_t x702 = INT8_MAX;
	int16_t x703 = -51;
	int32_t t175 = 29966;

    t175 = (((x701&x702)<=x703)>x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x706 = -14180;
	int64_t x707 = 608643615005351LL;
	int32_t t176 = -1423245;

    t176 = (((x705&x706)<=x707)>x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x709 = 21U;
	int8_t x710 = -4;
	int32_t x711 = -1;

    t177 = (((x709&x710)<=x711)>x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = -1408LL;
	static int16_t x714 = INT16_MIN;
	int16_t x715 = INT16_MAX;
	volatile int16_t x716 = INT16_MIN;
	int32_t t178 = -4289617;

    t178 = (((x713&x714)<=x715)>x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint8_t x718 = 1U;
	uint16_t x719 = 55U;

    t179 = (((x717&x718)<=x719)>x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x721 = 0;
	static int8_t x722 = 1;
	int64_t x724 = -1LL;
	int32_t t180 = 9853714;

    t180 = (((x721&x722)<=x723)>x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x726 = 0U;
	static int64_t x727 = INT64_MAX;
	int32_t t181 = -427088733;

    t181 = (((x725&x726)<=x727)>x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = -2;
	int64_t x731 = -1LL;
	int64_t x732 = -1LL;
	int32_t t182 = 2;

    t182 = (((x729&x730)<=x731)>x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x733 = 151;
	int32_t x734 = 98;
	volatile uint16_t x735 = 6U;
	int16_t x736 = INT16_MIN;
	int32_t t183 = 636491;

    t183 = (((x733&x734)<=x735)>x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x738 = 229843845;
	static int8_t x739 = 1;
	uint8_t x740 = 17U;

    t184 = (((x737&x738)<=x739)>x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x741 = INT32_MAX;
	static int64_t x742 = -1LL;
	static volatile int64_t x743 = -49658LL;
	int8_t x744 = 0;
	volatile int32_t t185 = 174153167;

    t185 = (((x741&x742)<=x743)>x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x745 = UINT16_MAX;
	int32_t x747 = INT32_MIN;
	static int32_t t186 = 0;

    t186 = (((x745&x746)<=x747)>x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x749 = -15;
	int16_t x750 = INT16_MAX;
	int64_t x751 = -1039253LL;
	int32_t x752 = INT32_MIN;

    t187 = (((x749&x750)<=x751)>x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = 2;
	static int64_t x754 = INT64_MIN;
	volatile int32_t x755 = INT32_MIN;
	static uint32_t x756 = 3U;
	int32_t t188 = 235116613;

    t188 = (((x753&x754)<=x755)>x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = INT8_MIN;
	int64_t x758 = -1LL;
	uint8_t x760 = 0U;
	static volatile int32_t t189 = -406562846;

    t189 = (((x757&x758)<=x759)>x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x761 = 41U;
	static volatile int64_t x762 = INT64_MIN;
	int16_t x763 = -180;
	uint8_t x764 = UINT8_MAX;
	static volatile int32_t t190 = 246128;

    t190 = (((x761&x762)<=x763)>x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x766 = INT32_MAX;
	uint64_t x767 = 113LLU;
	static int16_t x768 = INT16_MAX;

    t191 = (((x765&x766)<=x767)>x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int16_t x769 = -313;
	int64_t x770 = -1LL;
	int32_t x771 = 26854;
	int8_t x772 = 0;
	int32_t t192 = 95;

    t192 = (((x769&x770)<=x771)>x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int32_t x773 = INT32_MIN;
	int8_t x774 = 1;
	volatile uint16_t x775 = 6934U;
	int64_t x776 = 324721651249LL;
	volatile int32_t t193 = 57019;

    t193 = (((x773&x774)<=x775)>x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x777 = INT8_MIN;
	volatile uint32_t x778 = 94U;
	uint32_t x779 = 2084U;
	static uint32_t x780 = UINT32_MAX;

    t194 = (((x777&x778)<=x779)>x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint8_t x781 = 12U;
	volatile uint32_t x782 = 2134745U;
	uint64_t x783 = 284953LLU;
	volatile int32_t t195 = -209;

    t195 = (((x781&x782)<=x783)>x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = -1;
	volatile int32_t x787 = INT32_MIN;
	int8_t x788 = 11;
	volatile int32_t t196 = 0;

    t196 = (((x785&x786)<=x787)>x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x790 = INT32_MAX;
	int16_t x791 = INT16_MIN;
	static volatile int32_t x792 = 60;
	volatile int32_t t197 = -24273;

    t197 = (((x789&x790)<=x791)>x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = INT16_MIN;
	volatile uint32_t x795 = 94949U;
	volatile uint64_t x796 = UINT64_MAX;
	volatile int32_t t198 = -205436120;

    t198 = (((x793&x794)<=x795)>x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = INT16_MAX;
	int64_t x799 = INT64_MIN;
	volatile uint64_t x800 = 13526333584918119LLU;
	volatile int32_t t199 = 216821;

    t199 = (((x797&x798)<=x799)>x800);

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

