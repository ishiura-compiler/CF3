
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

int16_t x5 = INT16_MIN;
static int8_t x11 = INT8_MIN;
uint8_t x13 = 36U;
uint8_t x20 = 1U;
volatile int8_t x21 = INT8_MIN;
int8_t x23 = INT8_MAX;
static volatile int32_t x24 = 5019167;
static uint64_t x30 = 446164LLU;
volatile uint32_t x35 = UINT32_MAX;
uint8_t x38 = 2U;
uint64_t x46 = UINT64_MAX;
int32_t t12 = 212708;
uint64_t x54 = UINT64_MAX;
uint32_t x66 = 24U;
int16_t x74 = 3;
volatile uint16_t x76 = 363U;
int32_t t19 = 0;
static int16_t x81 = -1;
int8_t x85 = 45;
static int32_t t22 = 2021747;
volatile uint16_t x98 = 1038U;
int16_t x101 = -1;
uint32_t x103 = 2677164U;
uint64_t x105 = 602LLU;
int64_t x116 = INT64_MAX;
static volatile int16_t x127 = 187;
int8_t x129 = INT8_MIN;
int64_t x130 = INT64_MIN;
uint32_t x131 = 335296185U;
int8_t x136 = INT8_MIN;
int64_t x140 = INT64_MIN;
static int8_t x153 = -3;
int64_t x155 = INT64_MIN;
int32_t x159 = 1663184;
volatile int64_t x160 = -1LL;
uint64_t x161 = 397699922214399507LLU;
int16_t x167 = INT16_MIN;
static volatile int64_t x168 = -1LL;
static int64_t x171 = INT64_MIN;
uint64_t x172 = 591513LLU;
uint32_t x179 = 1273U;
int64_t x180 = 1788808LL;
uint32_t x183 = UINT32_MAX;
int32_t t48 = -45117837;
int64_t x200 = INT64_MIN;
volatile int32_t t49 = 48016;
int64_t x210 = INT64_MIN;
int32_t t53 = 779;
static int8_t x219 = INT8_MAX;
volatile int32_t t54 = -31376;
volatile int64_t x221 = 33074474571501409LL;
uint16_t x224 = 0U;
volatile int32_t t55 = 13508;
int64_t x225 = INT64_MIN;
uint8_t x226 = 18U;
int32_t t57 = 1;
volatile uint8_t x233 = UINT8_MAX;
uint8_t x237 = UINT8_MAX;
int8_t x247 = INT8_MAX;
int32_t t61 = -498;
int32_t x249 = INT32_MAX;
int8_t x250 = -1;
int32_t x251 = -1;
static int16_t x256 = 1;
volatile int64_t x257 = -1558LL;
int8_t x260 = -1;
static volatile int32_t x263 = 27302;
uint16_t x265 = UINT16_MAX;
int64_t x266 = INT64_MIN;
int8_t x268 = INT8_MIN;
int32_t t66 = 345314081;
int64_t x270 = INT64_MIN;
int8_t x278 = 1;
static int32_t t69 = 550413468;
static int16_t x286 = 5;
int8_t x291 = 0;
volatile int32_t t72 = -10;
int32_t t73 = 734388197;
int8_t x305 = INT8_MAX;
int8_t x312 = 0;
int32_t t77 = -91132141;
volatile int8_t x316 = -1;
int8_t x325 = -1;
volatile uint64_t x327 = 13006164902LLU;
int32_t x331 = INT32_MIN;
volatile int32_t t83 = 1464;
uint64_t x351 = UINT64_MAX;
int16_t x352 = INT16_MIN;
uint8_t x357 = UINT8_MAX;
int32_t t90 = -31871414;
int16_t x367 = INT16_MIN;
volatile uint64_t x372 = UINT64_MAX;
uint16_t x377 = 6630U;
volatile uint16_t x378 = 27U;
volatile uint32_t x381 = 17756U;
int8_t x392 = INT8_MIN;
int64_t x394 = -56809899LL;
volatile int32_t t98 = -5327749;
uint16_t x397 = 12985U;
volatile int32_t x406 = INT32_MAX;
static volatile uint8_t x408 = 3U;
int32_t x410 = INT32_MAX;
uint16_t x411 = 0U;
int64_t x414 = INT64_MIN;
int16_t x423 = -504;
uint16_t x430 = 1990U;
static int32_t x432 = INT32_MIN;
int32_t x433 = -7;
uint16_t x440 = 15065U;
static int32_t x444 = INT32_MAX;
int16_t x447 = -9;
static int32_t t111 = -3583093;
int32_t x450 = INT32_MIN;
int64_t x451 = INT64_MIN;
static volatile uint64_t x452 = UINT64_MAX;
volatile int64_t x458 = -9020501843238LL;
volatile int16_t x459 = INT16_MAX;
uint8_t x462 = 46U;
uint16_t x469 = UINT16_MAX;
int64_t x471 = INT64_MAX;
int32_t t117 = -526984;
volatile int8_t x473 = INT8_MAX;
uint8_t x483 = 6U;
uint8_t x486 = UINT8_MAX;
static int16_t x487 = -1;
volatile int8_t x494 = -56;
uint64_t x496 = 3966428448050LLU;
int16_t x498 = INT16_MAX;
int16_t x502 = -1;
volatile uint64_t x508 = UINT64_MAX;
int16_t x514 = INT16_MIN;
int8_t x516 = -1;
volatile uint16_t x518 = UINT16_MAX;
uint32_t x523 = 4U;
int8_t x526 = -1;
int8_t x530 = -1;
uint8_t x533 = 13U;
volatile int32_t x535 = -4164686;
volatile uint64_t x539 = 1237677060LLU;
int64_t x544 = -3062888360LL;
volatile int32_t t137 = -11672378;
static volatile int8_t x553 = INT8_MAX;
int16_t x555 = 222;
static int8_t x566 = -3;
int8_t x567 = INT8_MIN;
volatile int64_t x572 = INT64_MAX;
uint16_t x573 = 120U;
int8_t x580 = -1;
static volatile int32_t t146 = 45569273;
int64_t x589 = -71327553LL;
volatile int32_t t147 = -436112053;
int16_t x593 = 8088;
static volatile int32_t x594 = INT32_MIN;
static int32_t x598 = -42050;
int64_t x599 = INT64_MIN;
int32_t x604 = INT32_MAX;
int32_t t153 = -39680847;
volatile int32_t t155 = -202842668;
int32_t t156 = 1;
int64_t x631 = INT64_MAX;
uint32_t x635 = 53157424U;
volatile int8_t x641 = INT8_MIN;
static int16_t x642 = -1;
uint16_t x646 = UINT16_MAX;
int8_t x648 = -17;
int32_t t161 = 356;
int16_t x652 = 19;
uint32_t x654 = UINT32_MAX;
uint64_t x655 = UINT64_MAX;
int64_t x660 = INT64_MAX;
volatile int32_t t165 = -12808234;
static volatile int8_t x665 = INT8_MIN;
volatile uint8_t x667 = 58U;
uint8_t x670 = 115U;
int8_t x671 = -1;
int64_t x672 = 2195834LL;
int16_t x675 = INT16_MIN;
uint64_t x681 = 26084089034257LLU;
int32_t x685 = -1;
int64_t x690 = INT64_MIN;
int64_t x691 = -1LL;
int16_t x701 = 0;
volatile uint8_t x710 = 0U;
int32_t t177 = -100898557;
volatile int64_t x720 = -8786906274968370LL;
volatile int32_t t180 = 7327;
static int64_t x727 = INT64_MIN;
uint8_t x728 = 7U;
int64_t x733 = 1LL;
int32_t t183 = -551791;
int32_t t184 = 75552;
uint8_t x743 = 1U;
uint64_t x752 = 8350478155112LLU;
static int16_t x756 = INT16_MIN;
int16_t x759 = -1;
int16_t x770 = 1;
static volatile uint8_t x773 = 3U;
volatile int32_t x776 = 48;
volatile int32_t t195 = -14834;
int16_t x788 = 0;
static int32_t x794 = -1;
uint16_t x795 = UINT16_MAX;
uint32_t x796 = 2U;
static volatile int32_t t198 = -1810095;
uint32_t x798 = 6965226U;
volatile int32_t t199 = 5245;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	static int8_t x2 = INT8_MIN;
	int8_t x3 = INT8_MIN;
	uint32_t x4 = UINT32_MAX;
	static volatile int32_t t0 = -34544;

    t0 = ((x1!=x2)-(x3==x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x6 = INT8_MAX;
	static int16_t x7 = INT16_MAX;
	uint64_t x8 = UINT64_MAX;
	static int32_t t1 = 867350219;

    t1 = ((x5!=x6)-(x7==x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = -766;
	volatile int16_t x10 = INT16_MIN;
	int64_t x12 = -1LL;
	volatile int32_t t2 = 317940390;

    t2 = ((x9!=x10)-(x11==x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x14 = -31167129730100LL;
	uint16_t x15 = 126U;
	static uint16_t x16 = 7U;
	volatile int32_t t3 = 746;

    t3 = ((x13!=x14)-(x15==x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int8_t x17 = INT8_MIN;
	uint64_t x18 = 1280777LLU;
	volatile int32_t x19 = INT32_MIN;
	volatile int32_t t4 = -1;

    t4 = ((x17!=x18)-(x19==x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x22 = 130548602LLU;
	int32_t t5 = -29126;

    t5 = ((x21!=x22)-(x23==x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = UINT8_MAX;
	static uint8_t x26 = 8U;
	int8_t x27 = 0;
	static uint32_t x28 = 0U;
	int32_t t6 = 31;

    t6 = ((x25!=x26)-(x27==x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = 553932519U;
	int8_t x31 = -1;
	static uint16_t x32 = 58U;
	static volatile int32_t t7 = -30206047;

    t7 = ((x29!=x30)-(x31==x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint16_t x33 = UINT16_MAX;
	int32_t x34 = INT32_MAX;
	int8_t x36 = INT8_MIN;
	int32_t t8 = -343;

    t8 = ((x33!=x34)-(x35==x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x37 = 0U;
	uint16_t x39 = 6U;
	int16_t x40 = 10;
	volatile int32_t t9 = -922;

    t9 = ((x37!=x38)-(x39==x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MIN;
	int32_t x42 = INT32_MIN;
	volatile int32_t x43 = 241187145;
	int64_t x44 = -1250132LL;
	volatile int32_t t10 = 891709;

    t10 = ((x41!=x42)-(x43==x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x45 = 1;
	uint16_t x47 = UINT16_MAX;
	int16_t x48 = -1;
	int32_t t11 = -473;

    t11 = ((x45!=x46)-(x47==x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x49 = INT32_MIN;
	volatile uint64_t x50 = 1LLU;
	volatile uint8_t x51 = 78U;
	int64_t x52 = -40283823314LL;

    t12 = ((x49!=x50)-(x51==x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 214U;
	static int16_t x55 = -5867;
	uint16_t x56 = 31790U;
	int32_t t13 = -4955;

    t13 = ((x53!=x54)-(x55==x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MAX;
	int8_t x58 = INT8_MAX;
	int32_t x59 = -15;
	uint16_t x60 = 1U;
	volatile int32_t t14 = 10826;

    t14 = ((x57!=x58)-(x59==x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = 1LLU;
	int64_t x62 = INT64_MIN;
	int32_t x63 = -1;
	int8_t x64 = 1;
	static int32_t t15 = -21;

    t15 = ((x61!=x62)-(x63==x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x65 = 2017254063587LL;
	uint64_t x67 = 58337902261856LLU;
	uint32_t x68 = UINT32_MAX;
	int32_t t16 = -14967947;

    t16 = ((x65!=x66)-(x67==x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = -772;
	volatile int32_t x70 = INT32_MAX;
	static int32_t x71 = INT32_MIN;
	int8_t x72 = INT8_MIN;
	int32_t t17 = 1343601;

    t17 = ((x69!=x70)-(x71==x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x73 = INT32_MIN;
	static uint8_t x75 = 57U;
	volatile int32_t t18 = 781;

    t18 = ((x73!=x74)-(x75==x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = 2075191438474LLU;
	static int64_t x78 = -1745510528645LL;
	int8_t x79 = INT8_MIN;
	static int64_t x80 = -454LL;

    t19 = ((x77!=x78)-(x79==x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x82 = UINT8_MAX;
	uint64_t x83 = 1095021883874742LLU;
	static int64_t x84 = 20038625377042880LL;
	static int32_t t20 = -103;

    t20 = ((x81!=x82)-(x83==x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x86 = 13U;
	int32_t x87 = INT32_MIN;
	static volatile int16_t x88 = INT16_MIN;
	int32_t t21 = -19986075;

    t21 = ((x85!=x86)-(x87==x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x89 = -6563;
	int16_t x90 = -1;
	int64_t x91 = INT64_MIN;
	int32_t x92 = -1;

    t22 = ((x89!=x90)-(x91==x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = -1;
	volatile uint64_t x94 = 427373451037LLU;
	static volatile int64_t x95 = INT64_MAX;
	int32_t x96 = INT32_MAX;
	static volatile int32_t t23 = -1966;

    t23 = ((x93!=x94)-(x95==x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x97 = INT64_MIN;
	uint32_t x99 = 960215U;
	int8_t x100 = INT8_MAX;
	volatile int32_t t24 = 22623;

    t24 = ((x97!=x98)-(x99==x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x102 = INT16_MIN;
	volatile int64_t x104 = -1LL;
	volatile int32_t t25 = -3;

    t25 = ((x101!=x102)-(x103==x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x106 = -1LL;
	int32_t x107 = -1;
	static int64_t x108 = INT64_MIN;
	volatile int32_t t26 = 38465206;

    t26 = ((x105!=x106)-(x107==x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MAX;
	volatile int8_t x110 = -1;
	static int64_t x111 = -152837LL;
	int64_t x112 = INT64_MIN;
	static volatile int32_t t27 = -7151;

    t27 = ((x109!=x110)-(x111==x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x113 = UINT16_MAX;
	int64_t x114 = -1LL;
	uint8_t x115 = UINT8_MAX;
	int32_t t28 = 7410897;

    t28 = ((x113!=x114)-(x115==x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x117 = 1317813;
	int16_t x118 = -205;
	int8_t x119 = INT8_MIN;
	uint8_t x120 = UINT8_MAX;
	volatile int32_t t29 = -24;

    t29 = ((x117!=x118)-(x119==x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MIN;
	uint64_t x122 = UINT64_MAX;
	int64_t x123 = 16117221383LL;
	int32_t x124 = INT32_MIN;
	volatile int32_t t30 = -89901;

    t30 = ((x121!=x122)-(x123==x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x125 = INT64_MAX;
	int16_t x126 = INT16_MAX;
	static uint64_t x128 = 57258LLU;
	static volatile int32_t t31 = 460;

    t31 = ((x125!=x126)-(x127==x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x132 = 17U;
	volatile int32_t t32 = -2984;

    t32 = ((x129!=x130)-(x131==x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x133 = INT32_MIN;
	int8_t x134 = INT8_MIN;
	uint32_t x135 = UINT32_MAX;
	int32_t t33 = -258293314;

    t33 = ((x133!=x134)-(x135==x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x137 = UINT32_MAX;
	volatile int8_t x138 = -7;
	int64_t x139 = INT64_MAX;
	int32_t t34 = -1008;

    t34 = ((x137!=x138)-(x139==x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x141 = INT8_MIN;
	int8_t x142 = INT8_MIN;
	uint32_t x143 = 515086U;
	int32_t x144 = INT32_MAX;
	int32_t t35 = 72;

    t35 = ((x141!=x142)-(x143==x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x145 = 172918683750LLU;
	volatile int16_t x146 = -1;
	uint64_t x147 = UINT64_MAX;
	uint16_t x148 = UINT16_MAX;
	volatile int32_t t36 = -101863427;

    t36 = ((x145!=x146)-(x147==x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x149 = INT64_MIN;
	int64_t x150 = INT64_MIN;
	int8_t x151 = INT8_MIN;
	int8_t x152 = 59;
	volatile int32_t t37 = 1423;

    t37 = ((x149!=x150)-(x151==x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x154 = UINT16_MAX;
	int64_t x156 = 1849814767419087LL;
	int32_t t38 = -2766184;

    t38 = ((x153!=x154)-(x155==x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = 386;
	uint32_t x158 = 108301672U;
	volatile int32_t t39 = 253;

    t39 = ((x157!=x158)-(x159==x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x162 = -1;
	uint32_t x163 = 0U;
	static int64_t x164 = INT64_MAX;
	int32_t t40 = -7242506;

    t40 = ((x161!=x162)-(x163==x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x165 = -1;
	volatile int16_t x166 = 277;
	volatile int32_t t41 = 4344;

    t41 = ((x165!=x166)-(x167==x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x169 = UINT16_MAX;
	int16_t x170 = -1;
	int32_t t42 = 279618969;

    t42 = ((x169!=x170)-(x171==x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = 23;
	uint32_t x174 = 25774U;
	int32_t x175 = INT32_MIN;
	uint16_t x176 = 10049U;
	int32_t t43 = -14283;

    t43 = ((x173!=x174)-(x175==x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x177 = UINT16_MAX;
	volatile uint32_t x178 = 209341443U;
	int32_t t44 = -401189136;

    t44 = ((x177!=x178)-(x179==x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x181 = UINT64_MAX;
	int64_t x182 = -1LL;
	int64_t x184 = 106778LL;
	int32_t t45 = 30047;

    t45 = ((x181!=x182)-(x183==x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MAX;
	int8_t x186 = -22;
	int32_t x187 = -1;
	int8_t x188 = -1;
	int32_t t46 = 3939;

    t46 = ((x185!=x186)-(x187==x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = INT16_MIN;
	int32_t x190 = 1;
	int32_t x191 = INT32_MAX;
	int32_t x192 = -1;
	volatile int32_t t47 = -82;

    t47 = ((x189!=x190)-(x191==x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x193 = INT64_MAX;
	uint32_t x194 = 8248U;
	int32_t x195 = -31209;
	volatile uint32_t x196 = 572U;

    t48 = ((x193!=x194)-(x195==x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = 24;
	int8_t x198 = -34;
	int32_t x199 = INT32_MAX;

    t49 = ((x197!=x198)-(x199==x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int8_t x201 = -47;
	volatile int16_t x202 = INT16_MAX;
	int16_t x203 = INT16_MIN;
	static int32_t x204 = 38358;
	static int32_t t50 = -6133;

    t50 = ((x201!=x202)-(x203==x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int64_t x205 = -2131LL;
	uint64_t x206 = UINT64_MAX;
	int32_t x207 = -1;
	volatile uint16_t x208 = 4645U;
	int32_t t51 = -95068363;

    t51 = ((x205!=x206)-(x207==x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x209 = UINT32_MAX;
	uint8_t x211 = 5U;
	volatile int64_t x212 = INT64_MAX;
	volatile int32_t t52 = -1;

    t52 = ((x209!=x210)-(x211==x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = 0;
	static int8_t x214 = 23;
	static volatile int16_t x215 = -16;
	static int32_t x216 = 2692;

    t53 = ((x213!=x214)-(x215==x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = -19566;
	int8_t x218 = INT8_MAX;
	int8_t x220 = INT8_MAX;

    t54 = ((x217!=x218)-(x219==x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int64_t x222 = INT64_MIN;
	volatile int8_t x223 = INT8_MIN;

    t55 = ((x221!=x222)-(x223==x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint8_t x227 = 4U;
	int16_t x228 = 203;
	int32_t t56 = 411;

    t56 = ((x225!=x226)-(x227==x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = -1;
	int8_t x230 = 3;
	int8_t x231 = INT8_MAX;
	static int64_t x232 = 1326297504027676LL;

    t57 = ((x229!=x230)-(x231==x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x234 = -1;
	uint16_t x235 = UINT16_MAX;
	uint32_t x236 = UINT32_MAX;
	static int32_t t58 = 40;

    t58 = ((x233!=x234)-(x235==x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x238 = 3U;
	static int16_t x239 = -1;
	int8_t x240 = -1;
	int32_t t59 = 5416235;

    t59 = ((x237!=x238)-(x239==x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x241 = UINT8_MAX;
	int32_t x242 = -61;
	uint32_t x243 = 107U;
	int8_t x244 = -9;
	int32_t t60 = -3;

    t60 = ((x241!=x242)-(x243==x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = INT16_MIN;
	volatile int8_t x246 = INT8_MIN;
	int16_t x248 = INT16_MAX;

    t61 = ((x245!=x246)-(x247==x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x252 = 405185509125630955LLU;
	static volatile int32_t t62 = -9660886;

    t62 = ((x249!=x250)-(x251==x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x253 = -84907249LL;
	int64_t x254 = 3126461445664LL;
	int64_t x255 = INT64_MIN;
	int32_t t63 = 5933;

    t63 = ((x253!=x254)-(x255==x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x258 = 4;
	int32_t x259 = INT32_MIN;
	static int32_t t64 = 2852;

    t64 = ((x257!=x258)-(x259==x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x261 = UINT32_MAX;
	static int64_t x262 = INT64_MIN;
	static int64_t x264 = INT64_MAX;
	int32_t t65 = -391634;

    t65 = ((x261!=x262)-(x263==x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x267 = 0U;

    t66 = ((x265!=x266)-(x267==x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x269 = UINT64_MAX;
	int32_t x271 = INT32_MAX;
	volatile uint64_t x272 = UINT64_MAX;
	int32_t t67 = 185;

    t67 = ((x269!=x270)-(x271==x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x273 = -840;
	int16_t x274 = 228;
	uint64_t x275 = UINT64_MAX;
	static int16_t x276 = INT16_MIN;
	int32_t t68 = 0;

    t68 = ((x273!=x274)-(x275==x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = INT8_MIN;
	static uint16_t x279 = 227U;
	uint16_t x280 = 1U;

    t69 = ((x277!=x278)-(x279==x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x281 = UINT16_MAX;
	int32_t x282 = -1;
	int64_t x283 = INT64_MIN;
	int64_t x284 = INT64_MIN;
	int32_t t70 = 30;

    t70 = ((x281!=x282)-(x283==x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x285 = 112U;
	volatile int8_t x287 = 49;
	int64_t x288 = -165930640882818086LL;
	volatile int32_t t71 = -22498523;

    t71 = ((x285!=x286)-(x287==x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x289 = UINT32_MAX;
	uint16_t x290 = 787U;
	static uint16_t x292 = 18162U;

    t72 = ((x289!=x290)-(x291==x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x293 = -1;
	int8_t x294 = -2;
	uint32_t x295 = 1231358975U;
	uint64_t x296 = 68855771496LLU;

    t73 = ((x293!=x294)-(x295==x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x297 = UINT16_MAX;
	int64_t x298 = INT64_MIN;
	int8_t x299 = INT8_MAX;
	int8_t x300 = -52;
	volatile int32_t t74 = 5;

    t74 = ((x297!=x298)-(x299==x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = INT64_MAX;
	int8_t x302 = 4;
	int32_t x303 = INT32_MAX;
	int64_t x304 = INT64_MAX;
	volatile int32_t t75 = 27002104;

    t75 = ((x301!=x302)-(x303==x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint32_t x306 = 2511U;
	volatile uint32_t x307 = 2U;
	uint8_t x308 = UINT8_MAX;
	volatile int32_t t76 = -274338;

    t76 = ((x305!=x306)-(x307==x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = 3379607569099LL;
	int16_t x310 = -1;
	int8_t x311 = INT8_MIN;

    t77 = ((x309!=x310)-(x311==x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = INT16_MIN;
	int8_t x314 = -1;
	uint32_t x315 = UINT32_MAX;
	volatile int32_t t78 = -5641436;

    t78 = ((x313!=x314)-(x315==x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x317 = 1LLU;
	volatile int32_t x318 = -2;
	int8_t x319 = 3;
	int64_t x320 = INT64_MAX;
	int32_t t79 = 21;

    t79 = ((x317!=x318)-(x319==x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x321 = -16596240;
	int8_t x322 = INT8_MAX;
	int8_t x323 = INT8_MAX;
	uint64_t x324 = 7LLU;
	int32_t t80 = 146601;

    t80 = ((x321!=x322)-(x323==x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x326 = INT8_MIN;
	static int32_t x328 = INT32_MIN;
	static volatile int32_t t81 = 10578;

    t81 = ((x325!=x326)-(x327==x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x329 = INT8_MAX;
	uint8_t x330 = 93U;
	uint32_t x332 = UINT32_MAX;
	int32_t t82 = -1023941745;

    t82 = ((x329!=x330)-(x331==x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x333 = 3U;
	uint64_t x334 = 150150053LLU;
	uint8_t x335 = 75U;
	int32_t x336 = -29;

    t83 = ((x333!=x334)-(x335==x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x337 = -1;
	int64_t x338 = 59LL;
	volatile uint32_t x339 = UINT32_MAX;
	int8_t x340 = INT8_MAX;
	volatile int32_t t84 = -228950293;

    t84 = ((x337!=x338)-(x339==x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = INT8_MAX;
	int64_t x342 = -983857251921214LL;
	int64_t x343 = INT64_MAX;
	int32_t x344 = -20;
	volatile int32_t t85 = 31776;

    t85 = ((x341!=x342)-(x343==x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = -265246556889LL;
	int8_t x346 = INT8_MIN;
	uint64_t x347 = 11428376018864LLU;
	static int8_t x348 = -14;
	int32_t t86 = 14537;

    t86 = ((x345!=x346)-(x347==x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = INT16_MIN;
	static int32_t x350 = -228;
	int32_t t87 = 21;

    t87 = ((x349!=x350)-(x351==x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x353 = -386829525322LL;
	volatile int32_t x354 = 17846913;
	static uint16_t x355 = 53U;
	static volatile int64_t x356 = INT64_MAX;
	volatile int32_t t88 = -3046145;

    t88 = ((x353!=x354)-(x355==x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x358 = 51;
	uint32_t x359 = 40625372U;
	volatile int32_t x360 = INT32_MAX;
	volatile int32_t t89 = 301053;

    t89 = ((x357!=x358)-(x359==x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = INT8_MIN;
	volatile int32_t x362 = -660;
	static int8_t x363 = INT8_MIN;
	volatile uint8_t x364 = 6U;

    t90 = ((x361!=x362)-(x363==x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = INT64_MAX;
	static uint8_t x366 = UINT8_MAX;
	volatile int8_t x368 = INT8_MIN;
	int32_t t91 = 3;

    t91 = ((x365!=x366)-(x367==x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x369 = 4;
	volatile int16_t x370 = INT16_MAX;
	static volatile uint32_t x371 = 4990581U;
	int32_t t92 = -49;

    t92 = ((x369!=x370)-(x371==x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x373 = 62723437870862252LLU;
	uint8_t x374 = 0U;
	int8_t x375 = -54;
	uint16_t x376 = 1U;
	volatile int32_t t93 = -20443;

    t93 = ((x373!=x374)-(x375==x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint8_t x379 = 89U;
	int16_t x380 = 1963;
	int32_t t94 = 51;

    t94 = ((x377!=x378)-(x379==x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x382 = 68375492701487LL;
	static uint32_t x383 = 885U;
	int32_t x384 = -1;
	int32_t t95 = -4;

    t95 = ((x381!=x382)-(x383==x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x385 = INT8_MIN;
	int32_t x386 = -1;
	static int16_t x387 = 155;
	uint16_t x388 = 46U;
	int32_t t96 = -691;

    t96 = ((x385!=x386)-(x387==x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x389 = INT8_MIN;
	uint32_t x390 = UINT32_MAX;
	int64_t x391 = -1LL;
	volatile int32_t t97 = -1412;

    t97 = ((x389!=x390)-(x391==x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x393 = 5344;
	int64_t x395 = INT64_MIN;
	int8_t x396 = INT8_MAX;

    t98 = ((x393!=x394)-(x395==x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x398 = -1;
	int64_t x399 = INT64_MIN;
	int8_t x400 = INT8_MIN;
	volatile int32_t t99 = 203755698;

    t99 = ((x397!=x398)-(x399==x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = INT8_MIN;
	volatile int32_t x402 = INT32_MIN;
	int16_t x403 = -1;
	int32_t x404 = INT32_MIN;
	int32_t t100 = 1023;

    t100 = ((x401!=x402)-(x403==x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x405 = -5;
	int8_t x407 = 62;
	int32_t t101 = -1579021;

    t101 = ((x405!=x406)-(x407==x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x409 = INT32_MIN;
	static int32_t x412 = -1;
	static int32_t t102 = -3182072;

    t102 = ((x409!=x410)-(x411==x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int32_t x413 = INT32_MIN;
	int32_t x415 = INT32_MIN;
	int16_t x416 = 18;
	static int32_t t103 = -3758;

    t103 = ((x413!=x414)-(x415==x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x417 = -1LL;
	int64_t x418 = -1LL;
	static int64_t x419 = INT64_MIN;
	static uint16_t x420 = 280U;
	volatile int32_t t104 = 157209165;

    t104 = ((x417!=x418)-(x419==x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x421 = 1770961U;
	int16_t x422 = -62;
	int64_t x424 = INT64_MIN;
	volatile int32_t t105 = -211048003;

    t105 = ((x421!=x422)-(x423==x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = INT16_MIN;
	int64_t x426 = INT64_MIN;
	volatile int8_t x427 = -22;
	volatile uint16_t x428 = UINT16_MAX;
	int32_t t106 = 59;

    t106 = ((x425!=x426)-(x427==x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = 0;
	int16_t x431 = INT16_MIN;
	static volatile int32_t t107 = 3311;

    t107 = ((x429!=x430)-(x431==x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x434 = -1;
	volatile uint8_t x435 = 1U;
	static int8_t x436 = 27;
	static volatile int32_t t108 = 18634;

    t108 = ((x433!=x434)-(x435==x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x437 = -1;
	int64_t x438 = -34489017240901LL;
	int32_t x439 = INT32_MAX;
	int32_t t109 = -4683617;

    t109 = ((x437!=x438)-(x439==x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x441 = INT16_MIN;
	int8_t x442 = 1;
	volatile int64_t x443 = INT64_MAX;
	int32_t t110 = 1;

    t110 = ((x441!=x442)-(x443==x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = INT16_MAX;
	int8_t x446 = INT8_MAX;
	static uint16_t x448 = UINT16_MAX;

    t111 = ((x445!=x446)-(x447==x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = INT16_MIN;
	static int32_t t112 = -286;

    t112 = ((x449!=x450)-(x451==x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x453 = INT16_MAX;
	int16_t x454 = INT16_MIN;
	volatile int32_t x455 = 2622;
	static int8_t x456 = -1;
	int32_t t113 = -2203;

    t113 = ((x453!=x454)-(x455==x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = 52LLU;
	int64_t x460 = 45971876LL;
	volatile int32_t t114 = -26373663;

    t114 = ((x457!=x458)-(x459==x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x461 = 876893473536753LLU;
	volatile int32_t x463 = INT32_MIN;
	uint64_t x464 = 324329517107340537LLU;
	int32_t t115 = 1;

    t115 = ((x461!=x462)-(x463==x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x465 = 52U;
	volatile int64_t x466 = INT64_MAX;
	int32_t x467 = INT32_MIN;
	int32_t x468 = -1;
	int32_t t116 = 758608;

    t116 = ((x465!=x466)-(x467==x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x470 = UINT8_MAX;
	static uint8_t x472 = 9U;

    t117 = ((x469!=x470)-(x471==x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x474 = UINT16_MAX;
	int64_t x475 = 36LL;
	volatile int32_t x476 = 1065824201;
	static volatile int32_t t118 = 358115;

    t118 = ((x473!=x474)-(x475==x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = INT64_MIN;
	static int32_t x478 = INT32_MIN;
	int32_t x479 = -1;
	int64_t x480 = -31671567316LL;
	int32_t t119 = 0;

    t119 = ((x477!=x478)-(x479==x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x481 = 1486U;
	int32_t x482 = 949965;
	volatile uint64_t x484 = 275353057588340001LLU;
	int32_t t120 = -28;

    t120 = ((x481!=x482)-(x483==x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x485 = 1;
	static int8_t x488 = INT8_MAX;
	int32_t t121 = 7;

    t121 = ((x485!=x486)-(x487==x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = INT16_MIN;
	static int32_t x490 = INT32_MIN;
	volatile int16_t x491 = INT16_MAX;
	int8_t x492 = 0;
	int32_t t122 = 28;

    t122 = ((x489!=x490)-(x491==x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = 50;
	volatile int32_t x495 = INT32_MIN;
	int32_t t123 = -1;

    t123 = ((x493!=x494)-(x495==x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x497 = 1509965U;
	static int8_t x499 = 2;
	int16_t x500 = INT16_MIN;
	int32_t t124 = 56974494;

    t124 = ((x497!=x498)-(x499==x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = -1;
	uint64_t x503 = 44530LLU;
	int64_t x504 = -1LL;
	int32_t t125 = -1;

    t125 = ((x501!=x502)-(x503==x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = 1;
	int64_t x506 = INT64_MAX;
	volatile int16_t x507 = INT16_MAX;
	volatile int32_t t126 = 33;

    t126 = ((x505!=x506)-(x507==x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x509 = -1;
	uint8_t x510 = UINT8_MAX;
	volatile int64_t x511 = INT64_MAX;
	int64_t x512 = INT64_MAX;
	int32_t t127 = 433;

    t127 = ((x509!=x510)-(x511==x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x513 = -1;
	volatile int16_t x515 = INT16_MIN;
	static int32_t t128 = -7239;

    t128 = ((x513!=x514)-(x515==x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x517 = 1U;
	uint16_t x519 = UINT16_MAX;
	volatile int8_t x520 = INT8_MIN;
	volatile int32_t t129 = 727296494;

    t129 = ((x517!=x518)-(x519==x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x521 = -1LL;
	int8_t x522 = INT8_MAX;
	uint8_t x524 = 1U;
	static int32_t t130 = -3;

    t130 = ((x521!=x522)-(x523==x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x525 = -1LL;
	static volatile int32_t x527 = 2040;
	uint64_t x528 = UINT64_MAX;
	volatile int32_t t131 = 15111;

    t131 = ((x525!=x526)-(x527==x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x529 = INT32_MIN;
	int16_t x531 = -707;
	volatile int32_t x532 = INT32_MAX;
	volatile int32_t t132 = -4316488;

    t132 = ((x529!=x530)-(x531==x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x534 = UINT16_MAX;
	int8_t x536 = -1;
	static int32_t t133 = 15885;

    t133 = ((x533!=x534)-(x535==x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = INT32_MIN;
	int64_t x538 = 39025194088LL;
	uint64_t x540 = 12092LLU;
	int32_t t134 = 0;

    t134 = ((x537!=x538)-(x539==x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x541 = -1LL;
	int16_t x542 = INT16_MAX;
	uint16_t x543 = UINT16_MAX;
	volatile int32_t t135 = 13103;

    t135 = ((x541!=x542)-(x543==x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = INT64_MIN;
	int16_t x546 = INT16_MIN;
	uint8_t x547 = 1U;
	int16_t x548 = INT16_MAX;
	volatile int32_t t136 = -26298;

    t136 = ((x545!=x546)-(x547==x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x549 = 4402U;
	int8_t x550 = -34;
	int16_t x551 = -1;
	static int64_t x552 = -1LL;

    t137 = ((x549!=x550)-(x551==x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x554 = UINT16_MAX;
	int8_t x556 = -2;
	volatile int32_t t138 = -54;

    t138 = ((x553!=x554)-(x555==x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint8_t x557 = UINT8_MAX;
	static uint64_t x558 = UINT64_MAX;
	int16_t x559 = INT16_MAX;
	uint8_t x560 = 0U;
	int32_t t139 = -50800;

    t139 = ((x557!=x558)-(x559==x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x561 = UINT16_MAX;
	static int64_t x562 = -130180443LL;
	static int64_t x563 = INT64_MIN;
	static int32_t x564 = -1;
	volatile int32_t t140 = 1;

    t140 = ((x561!=x562)-(x563==x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = 101759;
	volatile int8_t x568 = -1;
	volatile int32_t t141 = -159852;

    t141 = ((x565!=x566)-(x567==x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x569 = UINT8_MAX;
	int64_t x570 = INT64_MIN;
	uint32_t x571 = UINT32_MAX;
	int32_t t142 = 1348330;

    t142 = ((x569!=x570)-(x571==x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x574 = UINT16_MAX;
	int64_t x575 = 1LL;
	volatile int16_t x576 = INT16_MAX;
	volatile int32_t t143 = -1;

    t143 = ((x573!=x574)-(x575==x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x577 = UINT64_MAX;
	static uint8_t x578 = 13U;
	int8_t x579 = 0;
	int32_t t144 = -15458;

    t144 = ((x577!=x578)-(x579==x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = INT64_MAX;
	int8_t x582 = -2;
	int16_t x583 = INT16_MIN;
	static int8_t x584 = -1;
	int32_t t145 = 16732774;

    t145 = ((x581!=x582)-(x583==x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x585 = INT64_MAX;
	uint8_t x586 = 3U;
	int64_t x587 = 501624894867LL;
	int8_t x588 = -1;

    t146 = ((x585!=x586)-(x587==x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x590 = -1;
	int16_t x591 = -1;
	static volatile int8_t x592 = -7;

    t147 = ((x589!=x590)-(x591==x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x595 = INT64_MIN;
	static int32_t x596 = 7;
	volatile int32_t t148 = 9935;

    t148 = ((x593!=x594)-(x595==x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x597 = -209456LL;
	volatile uint16_t x600 = UINT16_MAX;
	static int32_t t149 = 839507;

    t149 = ((x597!=x598)-(x599==x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint32_t x601 = 0U;
	volatile uint16_t x602 = UINT16_MAX;
	int32_t x603 = INT32_MAX;
	volatile int32_t t150 = -3666504;

    t150 = ((x601!=x602)-(x603==x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = 13548;
	int16_t x606 = -62;
	uint16_t x607 = 117U;
	uint16_t x608 = 238U;
	volatile int32_t t151 = -130230;

    t151 = ((x605!=x606)-(x607==x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = INT16_MAX;
	volatile int32_t x610 = -978129279;
	volatile int32_t x611 = 156606;
	uint8_t x612 = 122U;
	volatile int32_t t152 = -25376205;

    t152 = ((x609!=x610)-(x611==x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x613 = 431641361799LLU;
	uint8_t x614 = 0U;
	volatile int64_t x615 = 919822475508531164LL;
	static int32_t x616 = -1;

    t153 = ((x613!=x614)-(x615==x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x617 = 2U;
	int8_t x618 = INT8_MIN;
	static uint16_t x619 = 10104U;
	int32_t x620 = 2232;
	static volatile int32_t t154 = 116255;

    t154 = ((x617!=x618)-(x619==x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = -1;
	int32_t x622 = -29680;
	int16_t x623 = 4;
	int8_t x624 = 8;

    t155 = ((x621!=x622)-(x623==x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint16_t x625 = 3317U;
	volatile uint16_t x626 = 56U;
	uint64_t x627 = 428963802660632785LLU;
	volatile int16_t x628 = -1;

    t156 = ((x625!=x626)-(x627==x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x629 = INT16_MIN;
	uint64_t x630 = 300552293655990LLU;
	uint32_t x632 = UINT32_MAX;
	int32_t t157 = 7298729;

    t157 = ((x629!=x630)-(x631==x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x633 = 0;
	int16_t x634 = INT16_MAX;
	int8_t x636 = 2;
	static volatile int32_t t158 = -1275;

    t158 = ((x633!=x634)-(x635==x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = INT32_MAX;
	static int8_t x638 = 33;
	static int8_t x639 = -1;
	uint8_t x640 = UINT8_MAX;
	static int32_t t159 = 509524;

    t159 = ((x637!=x638)-(x639==x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x643 = -193;
	uint32_t x644 = 99641U;
	int32_t t160 = 119700904;

    t160 = ((x641!=x642)-(x643==x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = -1LL;
	uint16_t x647 = 63U;

    t161 = ((x645!=x646)-(x647==x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = -1LL;
	int32_t x650 = -4153;
	int8_t x651 = -10;
	volatile int32_t t162 = -872260099;

    t162 = ((x649!=x650)-(x651==x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x653 = INT16_MAX;
	volatile int8_t x656 = -1;
	volatile int32_t t163 = -5839;

    t163 = ((x653!=x654)-(x655==x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x657 = UINT64_MAX;
	uint8_t x658 = 0U;
	int32_t x659 = 1318;
	volatile int32_t t164 = -93839140;

    t164 = ((x657!=x658)-(x659==x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x661 = INT64_MIN;
	int16_t x662 = INT16_MIN;
	int8_t x663 = 44;
	uint64_t x664 = 477120467LLU;

    t165 = ((x661!=x662)-(x663==x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x666 = -188445;
	int16_t x668 = INT16_MIN;
	int32_t t166 = -59;

    t166 = ((x665!=x666)-(x667==x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x669 = -25;
	static volatile int32_t t167 = -438;

    t167 = ((x669!=x670)-(x671==x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = INT8_MIN;
	volatile int16_t x674 = -1;
	uint64_t x676 = 0LLU;
	volatile int32_t t168 = -1;

    t168 = ((x673!=x674)-(x675==x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = -1;
	uint8_t x678 = 0U;
	int8_t x679 = -1;
	uint32_t x680 = UINT32_MAX;
	int32_t t169 = 30;

    t169 = ((x677!=x678)-(x679==x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x682 = -1;
	int32_t x683 = INT32_MIN;
	int8_t x684 = -2;
	static int32_t t170 = -7;

    t170 = ((x681!=x682)-(x683==x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x686 = INT64_MIN;
	int8_t x687 = 6;
	int32_t x688 = -6596;
	static volatile int32_t t171 = -1267;

    t171 = ((x685!=x686)-(x687==x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = -1LL;
	int16_t x692 = 39;
	volatile int32_t t172 = 3012;

    t172 = ((x689!=x690)-(x691==x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x693 = 13U;
	static volatile int16_t x694 = 0;
	int16_t x695 = INT16_MAX;
	int16_t x696 = INT16_MIN;
	volatile int32_t t173 = 395425;

    t173 = ((x693!=x694)-(x695==x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = INT8_MIN;
	uint32_t x698 = UINT32_MAX;
	int64_t x699 = 68610683742548LL;
	int16_t x700 = INT16_MAX;
	int32_t t174 = 8;

    t174 = ((x697!=x698)-(x699==x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int32_t x702 = INT32_MIN;
	int8_t x703 = INT8_MIN;
	uint32_t x704 = 1014U;
	volatile int32_t t175 = -2587;

    t175 = ((x701!=x702)-(x703==x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x705 = 28U;
	int8_t x706 = INT8_MIN;
	int16_t x707 = -1703;
	static uint16_t x708 = UINT16_MAX;
	static int32_t t176 = -443;

    t176 = ((x705!=x706)-(x707==x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x709 = 9701718;
	volatile uint16_t x711 = 2U;
	static int32_t x712 = INT32_MAX;

    t177 = ((x709!=x710)-(x711==x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x713 = -1;
	uint16_t x714 = UINT16_MAX;
	volatile int32_t x715 = 2093;
	static int64_t x716 = -1LL;
	volatile int32_t t178 = 0;

    t178 = ((x713!=x714)-(x715==x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = -1;
	int8_t x718 = INT8_MIN;
	uint16_t x719 = 2U;
	volatile int32_t t179 = -49;

    t179 = ((x717!=x718)-(x719==x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = INT16_MIN;
	volatile int64_t x722 = 766367791775LL;
	static volatile uint8_t x723 = 14U;
	volatile int64_t x724 = INT64_MAX;

    t180 = ((x721!=x722)-(x723==x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = INT64_MIN;
	volatile int8_t x726 = INT8_MIN;
	volatile int32_t t181 = -78910705;

    t181 = ((x725!=x726)-(x727==x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x729 = 0LLU;
	int32_t x730 = INT32_MIN;
	int8_t x731 = INT8_MAX;
	int8_t x732 = 1;
	static int32_t t182 = -870;

    t182 = ((x729!=x730)-(x731==x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x734 = 213118551148547LLU;
	int64_t x735 = -1LL;
	volatile int16_t x736 = 24;

    t183 = ((x733!=x734)-(x735==x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = INT8_MIN;
	int32_t x738 = INT32_MIN;
	uint32_t x739 = 7489U;
	uint32_t x740 = UINT32_MAX;

    t184 = ((x737!=x738)-(x739==x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = -1;
	volatile int8_t x742 = INT8_MAX;
	static volatile uint8_t x744 = 18U;
	int32_t t185 = -580;

    t185 = ((x741!=x742)-(x743==x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = INT32_MIN;
	int32_t x746 = INT32_MIN;
	volatile int32_t x747 = -1;
	int64_t x748 = INT64_MIN;
	volatile int32_t t186 = -790278;

    t186 = ((x745!=x746)-(x747==x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x749 = INT64_MAX;
	volatile int32_t x750 = -1;
	static uint32_t x751 = 7U;
	int32_t t187 = 19985;

    t187 = ((x749!=x750)-(x751==x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x753 = 35057U;
	int64_t x754 = -1LL;
	static int32_t x755 = INT32_MIN;
	static volatile int32_t t188 = -2;

    t188 = ((x753!=x754)-(x755==x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = 15;
	static int8_t x758 = 1;
	int32_t x760 = INT32_MIN;
	volatile int32_t t189 = -1888;

    t189 = ((x757!=x758)-(x759==x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x761 = INT16_MIN;
	uint8_t x762 = 5U;
	int64_t x763 = INT64_MAX;
	int16_t x764 = -7;
	static volatile int32_t t190 = -79;

    t190 = ((x761!=x762)-(x763==x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x765 = 282U;
	static int32_t x766 = INT32_MIN;
	uint16_t x767 = 0U;
	int16_t x768 = -1;
	int32_t t191 = 1416814;

    t191 = ((x765!=x766)-(x767==x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int16_t x769 = -1;
	int64_t x771 = INT64_MAX;
	volatile int32_t x772 = INT32_MAX;
	volatile int32_t t192 = -11005;

    t192 = ((x769!=x770)-(x771==x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x774 = 635;
	volatile int64_t x775 = -942001838030LL;
	int32_t t193 = 847466;

    t193 = ((x773!=x774)-(x775==x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x777 = -1;
	uint8_t x778 = 8U;
	uint32_t x779 = 468U;
	uint32_t x780 = 8626U;
	int32_t t194 = -474437;

    t194 = ((x777!=x778)-(x779==x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x781 = 0U;
	int16_t x782 = 9;
	int64_t x783 = INT64_MIN;
	uint32_t x784 = UINT32_MAX;

    t195 = ((x781!=x782)-(x783==x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x785 = UINT16_MAX;
	uint8_t x786 = UINT8_MAX;
	uint8_t x787 = 62U;
	volatile int32_t t196 = -6961;

    t196 = ((x785!=x786)-(x787==x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x789 = 3229203074249LLU;
	int64_t x790 = -1LL;
	int32_t x791 = INT32_MAX;
	int32_t x792 = -1;
	static int32_t t197 = 329417237;

    t197 = ((x789!=x790)-(x791==x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = INT8_MIN;

    t198 = ((x793!=x794)-(x795==x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x797 = INT64_MIN;
	int16_t x799 = INT16_MIN;
	int32_t x800 = INT32_MIN;

    t199 = ((x797!=x798)-(x799==x800));

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

