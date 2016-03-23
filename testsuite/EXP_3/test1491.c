
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

static int32_t x8 = -2020;
static int8_t x10 = 8;
static int32_t t3 = -1201422;
int8_t x20 = INT8_MAX;
int64_t x21 = -1LL;
volatile int32_t t5 = -125;
int8_t x28 = INT8_MIN;
int8_t x34 = INT8_MAX;
volatile int8_t x35 = -1;
static volatile int32_t t8 = -12484092;
static volatile int8_t x38 = 1;
static uint32_t x44 = 9U;
volatile int8_t x48 = INT8_MIN;
volatile int32_t t11 = 20;
static int64_t x50 = INT64_MIN;
uint8_t x53 = UINT8_MAX;
static int16_t x55 = INT16_MAX;
uint32_t x56 = 9402U;
uint8_t x59 = 0U;
int16_t x61 = -1;
int16_t x64 = INT16_MAX;
static int8_t x68 = -39;
uint64_t x73 = UINT64_MAX;
uint8_t x84 = 1U;
static volatile int32_t x90 = INT32_MIN;
uint64_t x99 = UINT64_MAX;
int64_t x102 = INT64_MIN;
uint64_t x103 = 4955076835LLU;
int8_t x104 = -1;
int8_t x108 = INT8_MIN;
static volatile int32_t t26 = -437;
static uint8_t x119 = UINT8_MAX;
volatile int32_t x124 = 6;
volatile int32_t x132 = -231084;
int16_t x137 = INT16_MIN;
int16_t x148 = -1;
volatile int8_t x153 = INT8_MIN;
int64_t x154 = -1LL;
volatile int32_t t38 = -444963033;
int64_t x160 = 15778060501698LL;
int32_t t39 = -669685177;
static int32_t x163 = INT32_MAX;
static int8_t x164 = -1;
int32_t t40 = -85;
static uint32_t x168 = UINT32_MAX;
uint64_t x173 = 6370860606414732131LLU;
volatile uint8_t x176 = 7U;
volatile int16_t x178 = INT16_MIN;
int32_t t45 = 105476;
volatile int32_t t47 = 685;
uint32_t x197 = 7082181U;
static uint32_t x199 = 26636962U;
uint32_t x200 = UINT32_MAX;
volatile int8_t x207 = 43;
volatile int32_t t51 = -96;
int16_t x211 = -15953;
int16_t x212 = 819;
volatile uint32_t x213 = UINT32_MAX;
int8_t x215 = -1;
static volatile int32_t t53 = -4021098;
static uint64_t x219 = UINT64_MAX;
int16_t x220 = INT16_MIN;
volatile int64_t x221 = INT64_MAX;
static int32_t x224 = INT32_MAX;
static int16_t x234 = 8507;
static uint8_t x235 = 1U;
volatile uint64_t x239 = 1167LLU;
int16_t x244 = -1;
static volatile int32_t x247 = INT32_MIN;
int64_t x248 = INT64_MIN;
int64_t x249 = INT64_MAX;
volatile int32_t t64 = -79681;
uint16_t x263 = UINT16_MAX;
int64_t x264 = INT64_MIN;
int16_t x266 = INT16_MIN;
static volatile int32_t t66 = 29166324;
int16_t x278 = 25;
uint8_t x288 = 0U;
int32_t x289 = INT32_MAX;
volatile uint32_t x294 = 5685717U;
int32_t x299 = 7116043;
int32_t t74 = 259423113;
static uint64_t x304 = 46414886LLU;
int8_t x308 = INT8_MIN;
int32_t x310 = INT32_MIN;
static int16_t x314 = -1;
uint64_t x317 = UINT64_MAX;
int64_t x318 = -2048880395792891426LL;
int16_t x319 = 8;
int32_t t79 = -3862009;
int32_t t80 = 7390115;
int8_t x325 = -1;
static uint16_t x326 = 1379U;
int32_t x329 = INT32_MAX;
volatile int8_t x340 = -1;
int16_t x356 = INT16_MIN;
static int32_t t88 = -40051101;
volatile int32_t t89 = 501196893;
int32_t x362 = INT32_MIN;
int16_t x363 = 14744;
int64_t x365 = -170LL;
static volatile int64_t x379 = 0LL;
int64_t x381 = -30271493LL;
int16_t x382 = INT16_MIN;
int32_t x383 = -1;
int16_t x417 = INT16_MAX;
volatile uint64_t x422 = 12964LLU;
static volatile int32_t t105 = 6145;
int16_t x427 = -1;
int16_t x430 = -1;
int16_t x431 = -4671;
volatile int16_t x432 = -1;
int32_t t108 = -267266811;
uint32_t x441 = 6039539U;
int16_t x456 = INT16_MAX;
int8_t x463 = 0;
static int8_t x464 = INT8_MAX;
uint16_t x469 = 3U;
uint32_t x470 = 78U;
static int64_t x473 = INT64_MIN;
static volatile uint32_t x474 = 434109U;
int32_t x480 = 867;
int32_t x486 = INT32_MIN;
uint64_t x488 = UINT64_MAX;
uint64_t x492 = 108462088965LLU;
volatile int32_t t122 = -13583536;
uint32_t x498 = UINT32_MAX;
static volatile int32_t t124 = -240656;
static int32_t x503 = INT32_MIN;
volatile int32_t t125 = 21;
static uint8_t x507 = 0U;
int32_t t126 = 201;
int64_t x512 = INT64_MIN;
uint16_t x522 = 17U;
uint32_t x524 = 257798U;
int16_t x526 = INT16_MAX;
static volatile int32_t x529 = 309;
int32_t x530 = INT32_MIN;
volatile int8_t x532 = INT8_MIN;
static int32_t t133 = -5;
int8_t x538 = INT8_MIN;
int64_t x540 = -1LL;
int16_t x544 = -1;
static int8_t x549 = 3;
volatile int64_t x550 = INT64_MIN;
int64_t x551 = INT64_MIN;
volatile int32_t t137 = -4162981;
uint64_t x554 = UINT64_MAX;
volatile int32_t t139 = -63755;
volatile int32_t t140 = 1137;
int64_t x567 = 830035LL;
volatile int32_t t141 = 951910097;
static volatile int32_t t142 = 1000;
volatile int8_t x578 = 1;
volatile int8_t x579 = 1;
int64_t x598 = -1LL;
uint64_t x604 = 2928159421112LLU;
uint16_t x606 = 28U;
int64_t x608 = INT64_MIN;
volatile int8_t x609 = -1;
volatile int64_t x611 = INT64_MAX;
uint16_t x613 = 0U;
static volatile uint64_t x642 = 21292494149LLU;
volatile int32_t t160 = 54047628;
int16_t x645 = -2;
int16_t x646 = INT16_MIN;
static int8_t x647 = -1;
uint16_t x650 = 10U;
int64_t x655 = INT64_MIN;
uint8_t x670 = 34U;
int64_t x678 = 5578LL;
uint32_t x679 = UINT32_MAX;
int32_t x680 = INT32_MAX;
uint64_t x682 = UINT64_MAX;
static int32_t t170 = -13;
uint16_t x686 = 448U;
int32_t t172 = 1;
volatile int32_t t173 = 44938913;
uint64_t x697 = 927636338450271LLU;
static int32_t t174 = 12299535;
volatile int32_t t176 = 32064;
volatile uint32_t x710 = UINT32_MAX;
uint32_t x711 = 3394884U;
volatile int32_t t180 = -8156922;
int16_t x726 = INT16_MIN;
volatile int8_t x728 = -13;
int64_t x733 = 464395423522LL;
volatile uint64_t x734 = 991766423078086494LLU;
int16_t x735 = INT16_MIN;
static int64_t x736 = INT64_MIN;
int32_t t184 = -924127783;
static int64_t x742 = 364360799937LL;
uint32_t x751 = UINT32_MAX;
int16_t x755 = INT16_MIN;
volatile int32_t t188 = -15816;
uint32_t x757 = 43U;
uint64_t x759 = 30218832LLU;
int16_t x762 = -1;
uint64_t x763 = 5396931LLU;
static int64_t x765 = -62808300LL;
int32_t x768 = -108;
int32_t t192 = -202218;
static volatile int64_t x774 = -1LL;
int64_t x782 = 257002728LL;
int8_t x789 = INT8_MAX;
int64_t x794 = -1900219882886769LL;


void f0(void) {
    	volatile uint8_t x1 = 95U;
	static uint64_t x2 = 128351397573756LLU;
	static int8_t x3 = -41;
	uint32_t x4 = 11U;
	volatile int32_t t0 = 85064;

    t0 = ((x1>x2)!=(x3==x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = UINT32_MAX;
	static int32_t x6 = INT32_MAX;
	int32_t x7 = -1;
	int32_t t1 = -263;

    t1 = ((x5>x6)!=(x7==x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -1317;
	int8_t x11 = INT8_MAX;
	int8_t x12 = 56;
	volatile int32_t t2 = 40266057;

    t2 = ((x9>x10)!=(x11==x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = UINT32_MAX;
	int64_t x14 = INT64_MIN;
	int16_t x15 = 1;
	uint8_t x16 = 36U;

    t3 = ((x13>x14)!=(x15==x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = 52U;
	int32_t x18 = INT32_MAX;
	uint8_t x19 = 6U;
	volatile int32_t t4 = 292854391;

    t4 = ((x17>x18)!=(x19==x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x22 = INT64_MIN;
	uint32_t x23 = 4054608U;
	int32_t x24 = INT32_MIN;

    t5 = ((x21>x22)!=(x23==x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MIN;
	int8_t x26 = INT8_MIN;
	uint64_t x27 = 10943541286LLU;
	volatile int32_t t6 = 3;

    t6 = ((x25>x26)!=(x27==x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MIN;
	volatile uint64_t x30 = 114300LLU;
	uint32_t x31 = 355767U;
	int16_t x32 = INT16_MAX;
	volatile int32_t t7 = 16974001;

    t7 = ((x29>x30)!=(x31==x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 83U;
	int32_t x36 = INT32_MIN;

    t8 = ((x33>x34)!=(x35==x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	int16_t x39 = -1056;
	int8_t x40 = -56;
	int32_t t9 = 191662076;

    t9 = ((x37>x38)!=(x39==x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = -1;
	uint64_t x42 = 127757841LLU;
	uint16_t x43 = 3U;
	volatile int32_t t10 = -175;

    t10 = ((x41>x42)!=(x43==x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x45 = UINT64_MAX;
	int64_t x46 = 218LL;
	int32_t x47 = INT32_MIN;

    t11 = ((x45>x46)!=(x47==x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x49 = 2;
	int32_t x51 = INT32_MIN;
	int16_t x52 = 1;
	volatile int32_t t12 = 30792;

    t12 = ((x49>x50)!=(x51==x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x54 = 19592205LLU;
	static int32_t t13 = -2886633;

    t13 = ((x53>x54)!=(x55==x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = UINT32_MAX;
	volatile uint32_t x58 = 18518535U;
	static uint64_t x60 = UINT64_MAX;
	int32_t t14 = 547;

    t14 = ((x57>x58)!=(x59==x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x62 = UINT64_MAX;
	int32_t x63 = 1;
	static volatile int32_t t15 = 31;

    t15 = ((x61>x62)!=(x63==x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = 538728865770396LLU;
	int8_t x66 = -30;
	volatile uint32_t x67 = 258824017U;
	int32_t t16 = -76;

    t16 = ((x65>x66)!=(x67==x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x69 = 7995418U;
	static volatile int32_t x70 = 123329;
	int64_t x71 = -1LL;
	static uint16_t x72 = 333U;
	volatile int32_t t17 = -2240510;

    t17 = ((x69>x70)!=(x71==x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint8_t x74 = 120U;
	int16_t x75 = INT16_MAX;
	volatile int8_t x76 = -1;
	volatile int32_t t18 = 310;

    t18 = ((x73>x74)!=(x75==x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = 1;
	int16_t x78 = -14;
	int8_t x79 = -1;
	int16_t x80 = INT16_MIN;
	int32_t t19 = -5;

    t19 = ((x77>x78)!=(x79==x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x81 = UINT64_MAX;
	int32_t x82 = INT32_MAX;
	int32_t x83 = -14;
	volatile int32_t t20 = 49951;

    t20 = ((x81>x82)!=(x83==x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint16_t x85 = 10647U;
	static int16_t x86 = INT16_MIN;
	int16_t x87 = INT16_MAX;
	int32_t x88 = INT32_MIN;
	static volatile int32_t t21 = -3091925;

    t21 = ((x85>x86)!=(x87==x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x89 = -68;
	int16_t x91 = INT16_MIN;
	int32_t x92 = INT32_MIN;
	int32_t t22 = -8484886;

    t22 = ((x89>x90)!=(x91==x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MIN;
	static int32_t x94 = INT32_MIN;
	volatile int16_t x95 = INT16_MAX;
	int16_t x96 = -536;
	volatile int32_t t23 = 904;

    t23 = ((x93>x94)!=(x95==x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x97 = INT16_MIN;
	uint16_t x98 = 484U;
	static uint64_t x100 = 1891LLU;
	int32_t t24 = -45837346;

    t24 = ((x97>x98)!=(x99==x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = 390403999248726498LLU;
	static volatile int32_t t25 = -223093;

    t25 = ((x101>x102)!=(x103==x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x105 = INT64_MAX;
	uint8_t x106 = 2U;
	uint16_t x107 = UINT16_MAX;

    t26 = ((x105>x106)!=(x107==x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x109 = 20U;
	int32_t x110 = -1;
	uint32_t x111 = 110850U;
	static uint64_t x112 = 0LLU;
	int32_t t27 = 1472;

    t27 = ((x109>x110)!=(x111==x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = -1;
	int16_t x114 = INT16_MIN;
	int16_t x115 = -1;
	volatile int16_t x116 = -1;
	int32_t t28 = -36;

    t28 = ((x113>x114)!=(x115==x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x117 = -1;
	int64_t x118 = 103510256469949LL;
	int32_t x120 = -49;
	static int32_t t29 = 124;

    t29 = ((x117>x118)!=(x119==x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MIN;
	int16_t x122 = INT16_MIN;
	int16_t x123 = INT16_MAX;
	volatile int32_t t30 = -252;

    t30 = ((x121>x122)!=(x123==x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x125 = INT64_MAX;
	static volatile int16_t x126 = -1;
	static volatile int32_t x127 = -1;
	int64_t x128 = INT64_MIN;
	volatile int32_t t31 = 31760980;

    t31 = ((x125>x126)!=(x127==x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x129 = UINT32_MAX;
	volatile uint64_t x130 = 259863603267LLU;
	uint8_t x131 = 34U;
	int32_t t32 = 100;

    t32 = ((x129>x130)!=(x131==x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MIN;
	volatile uint64_t x134 = 20934827647LLU;
	uint32_t x135 = UINT32_MAX;
	static int16_t x136 = INT16_MIN;
	static int32_t t33 = -1;

    t33 = ((x133>x134)!=(x135==x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x138 = 1U;
	static int32_t x139 = 0;
	int16_t x140 = -3;
	int32_t t34 = 690154372;

    t34 = ((x137>x138)!=(x139==x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int32_t x141 = INT32_MIN;
	volatile uint32_t x142 = UINT32_MAX;
	int16_t x143 = -51;
	volatile int8_t x144 = -1;
	volatile int32_t t35 = -13;

    t35 = ((x141>x142)!=(x143==x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x145 = -489372LL;
	int32_t x146 = -118;
	static int64_t x147 = INT64_MAX;
	int32_t t36 = -895;

    t36 = ((x145>x146)!=(x147==x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x149 = INT8_MIN;
	int8_t x150 = INT8_MIN;
	uint32_t x151 = 288U;
	int32_t x152 = INT32_MIN;
	int32_t t37 = 65172;

    t37 = ((x149>x150)!=(x151==x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x155 = 6;
	int32_t x156 = 2707;

    t38 = ((x153>x154)!=(x155==x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x157 = INT64_MIN;
	volatile uint8_t x158 = 1U;
	int16_t x159 = INT16_MAX;

    t39 = ((x157>x158)!=(x159==x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = 57;
	int32_t x162 = 1405;

    t40 = ((x161>x162)!=(x163==x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x165 = 1U;
	uint8_t x166 = 7U;
	int32_t x167 = INT32_MIN;
	int32_t t41 = 129;

    t41 = ((x165>x166)!=(x167==x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MIN;
	int64_t x170 = INT64_MIN;
	volatile int64_t x171 = INT64_MAX;
	int8_t x172 = INT8_MIN;
	int32_t t42 = 873603011;

    t42 = ((x169>x170)!=(x171==x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x174 = -11141692392LL;
	volatile uint32_t x175 = UINT32_MAX;
	volatile int32_t t43 = -1;

    t43 = ((x173>x174)!=(x175==x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = INT8_MAX;
	volatile int32_t x179 = 1;
	static volatile int32_t x180 = INT32_MAX;
	static int32_t t44 = -388394;

    t44 = ((x177>x178)!=(x179==x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = INT8_MIN;
	static int8_t x182 = INT8_MIN;
	int64_t x183 = 304973246323987LL;
	uint16_t x184 = 127U;

    t45 = ((x181>x182)!=(x183==x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x185 = 0U;
	static int64_t x186 = INT64_MAX;
	volatile uint32_t x187 = UINT32_MAX;
	volatile uint32_t x188 = 30799403U;
	int32_t t46 = -25;

    t46 = ((x185>x186)!=(x187==x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x189 = 71U;
	int64_t x190 = -1LL;
	uint64_t x191 = 16372601152581LLU;
	int64_t x192 = -48LL;

    t47 = ((x189>x190)!=(x191==x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = INT8_MAX;
	int64_t x194 = -43680505452120LL;
	volatile int64_t x195 = INT64_MAX;
	uint32_t x196 = 1005083U;
	int32_t t48 = -794714921;

    t48 = ((x193>x194)!=(x195==x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x198 = -671LL;
	int32_t t49 = -3356847;

    t49 = ((x197>x198)!=(x199==x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x201 = 1300700U;
	int32_t x202 = -1;
	static volatile int16_t x203 = -1;
	int64_t x204 = 890LL;
	volatile int32_t t50 = 8;

    t50 = ((x201>x202)!=(x203==x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = INT16_MIN;
	int16_t x206 = 26;
	volatile int64_t x208 = -1LL;

    t51 = ((x205>x206)!=(x207==x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x209 = INT64_MIN;
	static int64_t x210 = 13559614549635883LL;
	int32_t t52 = 8041583;

    t52 = ((x209>x210)!=(x211==x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x214 = INT64_MIN;
	uint8_t x216 = UINT8_MAX;

    t53 = ((x213>x214)!=(x215==x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint8_t x217 = 1U;
	volatile int32_t x218 = INT32_MIN;
	static volatile int32_t t54 = 19;

    t54 = ((x217>x218)!=(x219==x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x222 = 6;
	uint32_t x223 = 950992U;
	static int32_t t55 = -1076240;

    t55 = ((x221>x222)!=(x223==x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = 1021;
	uint8_t x226 = 8U;
	static int8_t x227 = INT8_MIN;
	int32_t x228 = INT32_MAX;
	int32_t t56 = -15;

    t56 = ((x225>x226)!=(x227==x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = INT64_MIN;
	uint8_t x230 = UINT8_MAX;
	uint32_t x231 = UINT32_MAX;
	int64_t x232 = INT64_MAX;
	int32_t t57 = -46694755;

    t57 = ((x229>x230)!=(x231==x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x233 = 1U;
	int16_t x236 = 3022;
	volatile int32_t t58 = -65440;

    t58 = ((x233>x234)!=(x235==x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x237 = -1LL;
	uint16_t x238 = UINT16_MAX;
	int64_t x240 = -1LL;
	int32_t t59 = 4;

    t59 = ((x237>x238)!=(x239==x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x241 = INT8_MAX;
	int8_t x242 = INT8_MIN;
	uint32_t x243 = UINT32_MAX;
	static volatile int32_t t60 = 2413;

    t60 = ((x241>x242)!=(x243==x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x245 = 0U;
	int8_t x246 = -25;
	int32_t t61 = -5365294;

    t61 = ((x245>x246)!=(x247==x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x250 = UINT16_MAX;
	int8_t x251 = INT8_MIN;
	uint16_t x252 = UINT16_MAX;
	static int32_t t62 = -36;

    t62 = ((x249>x250)!=(x251==x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x253 = INT64_MAX;
	volatile uint16_t x254 = 12U;
	int32_t x255 = -1;
	static volatile int8_t x256 = INT8_MAX;
	volatile int32_t t63 = 49215479;

    t63 = ((x253>x254)!=(x255==x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x257 = 3U;
	volatile int8_t x258 = -3;
	volatile int16_t x259 = INT16_MIN;
	int16_t x260 = INT16_MAX;

    t64 = ((x257>x258)!=(x259==x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = INT64_MIN;
	int8_t x262 = INT8_MIN;
	static volatile int32_t t65 = 7985648;

    t65 = ((x261>x262)!=(x263==x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x265 = -1;
	uint64_t x267 = 0LLU;
	int16_t x268 = INT16_MIN;

    t66 = ((x265>x266)!=(x267==x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = INT64_MAX;
	uint8_t x270 = 125U;
	uint64_t x271 = 1011466869517LLU;
	uint8_t x272 = 0U;
	int32_t t67 = -521890693;

    t67 = ((x269>x270)!=(x271==x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x273 = 79U;
	uint64_t x274 = 1356743LLU;
	int8_t x275 = -1;
	int8_t x276 = -47;
	static int32_t t68 = 145469;

    t68 = ((x273>x274)!=(x275==x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x277 = 109U;
	static uint8_t x279 = UINT8_MAX;
	int32_t x280 = INT32_MIN;
	volatile int32_t t69 = 1;

    t69 = ((x277>x278)!=(x279==x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = 21032506601313252LL;
	int8_t x282 = INT8_MAX;
	int16_t x283 = -5044;
	static volatile uint16_t x284 = 228U;
	int32_t t70 = 940;

    t70 = ((x281>x282)!=(x283==x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = INT16_MAX;
	static volatile int32_t x286 = 18;
	int8_t x287 = INT8_MIN;
	volatile int32_t t71 = 269843082;

    t71 = ((x285>x286)!=(x287==x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x290 = UINT16_MAX;
	int16_t x291 = INT16_MAX;
	uint64_t x292 = 40469686479406LLU;
	int32_t t72 = 124421;

    t72 = ((x289>x290)!=(x291==x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x293 = 2U;
	int16_t x295 = INT16_MAX;
	static int16_t x296 = INT16_MIN;
	int32_t t73 = -264444482;

    t73 = ((x293>x294)!=(x295==x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x297 = INT16_MAX;
	uint16_t x298 = 28768U;
	uint64_t x300 = 56875949LLU;

    t74 = ((x297>x298)!=(x299==x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = INT16_MIN;
	uint8_t x302 = 96U;
	int16_t x303 = -3;
	int32_t t75 = 79704;

    t75 = ((x301>x302)!=(x303==x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x305 = 1U;
	static uint8_t x306 = UINT8_MAX;
	int32_t x307 = INT32_MIN;
	static volatile int32_t t76 = -472633;

    t76 = ((x305>x306)!=(x307==x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = -742554273376007LL;
	int16_t x311 = INT16_MAX;
	uint16_t x312 = UINT16_MAX;
	volatile int32_t t77 = -19868;

    t77 = ((x309>x310)!=(x311==x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x313 = INT64_MIN;
	volatile uint16_t x315 = 109U;
	int16_t x316 = -4;
	volatile int32_t t78 = 8918;

    t78 = ((x313>x314)!=(x315==x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x320 = 1413U;

    t79 = ((x317>x318)!=(x319==x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x321 = 1;
	volatile uint8_t x322 = 3U;
	int64_t x323 = INT64_MAX;
	static int16_t x324 = INT16_MAX;

    t80 = ((x321>x322)!=(x323==x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint8_t x327 = 1U;
	int32_t x328 = INT32_MAX;
	int32_t t81 = -1;

    t81 = ((x325>x326)!=(x327==x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x330 = 88157316059LL;
	volatile int8_t x331 = 27;
	int16_t x332 = 65;
	static int32_t t82 = -575629846;

    t82 = ((x329>x330)!=(x331==x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = -1;
	int32_t x334 = -1;
	static volatile int16_t x335 = -1;
	uint32_t x336 = 7361U;
	int32_t t83 = 19;

    t83 = ((x333>x334)!=(x335==x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = 5;
	volatile int64_t x338 = -1LL;
	uint16_t x339 = 4560U;
	volatile int32_t t84 = -87951462;

    t84 = ((x337>x338)!=(x339==x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = -1;
	static int32_t x342 = -1;
	int64_t x343 = -117065287980681LL;
	int64_t x344 = INT64_MIN;
	volatile int32_t t85 = -1;

    t85 = ((x341>x342)!=(x343==x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x345 = UINT32_MAX;
	int16_t x346 = INT16_MIN;
	uint8_t x347 = 123U;
	uint64_t x348 = UINT64_MAX;
	volatile int32_t t86 = 43919;

    t86 = ((x345>x346)!=(x347==x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = -36;
	volatile int32_t x350 = -1;
	int8_t x351 = INT8_MIN;
	int32_t x352 = INT32_MAX;
	int32_t t87 = 45557502;

    t87 = ((x349>x350)!=(x351==x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint8_t x353 = 2U;
	int8_t x354 = -2;
	uint32_t x355 = 10080U;

    t88 = ((x353>x354)!=(x355==x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x357 = UINT32_MAX;
	uint16_t x358 = UINT16_MAX;
	static int64_t x359 = INT64_MIN;
	uint8_t x360 = UINT8_MAX;

    t89 = ((x357>x358)!=(x359==x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = -3;
	static int8_t x364 = 36;
	volatile int32_t t90 = 0;

    t90 = ((x361>x362)!=(x363==x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x366 = -1;
	uint64_t x367 = UINT64_MAX;
	int32_t x368 = -3891457;
	int32_t t91 = -699841930;

    t91 = ((x365>x366)!=(x367==x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = 0;
	uint64_t x370 = 580774434LLU;
	uint32_t x371 = UINT32_MAX;
	volatile int16_t x372 = -97;
	volatile int32_t t92 = -139;

    t92 = ((x369>x370)!=(x371==x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x373 = -2;
	uint8_t x374 = 41U;
	uint64_t x375 = 1551129LLU;
	static volatile uint32_t x376 = 609211U;
	int32_t t93 = 11;

    t93 = ((x373>x374)!=(x375==x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x377 = 4477U;
	static uint8_t x378 = 36U;
	uint16_t x380 = UINT16_MAX;
	volatile int32_t t94 = -2;

    t94 = ((x377>x378)!=(x379==x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x384 = -749LL;
	volatile int32_t t95 = 40021;

    t95 = ((x381>x382)!=(x383==x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = INT16_MAX;
	int16_t x386 = INT16_MAX;
	int64_t x387 = -10021580688223578LL;
	uint8_t x388 = UINT8_MAX;
	volatile int32_t t96 = 3167;

    t96 = ((x385>x386)!=(x387==x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = -29LL;
	int64_t x390 = INT64_MIN;
	volatile uint16_t x391 = 14U;
	int8_t x392 = INT8_MAX;
	int32_t t97 = 6360;

    t97 = ((x389>x390)!=(x391==x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x393 = -2LL;
	uint8_t x394 = UINT8_MAX;
	uint32_t x395 = 135U;
	uint8_t x396 = UINT8_MAX;
	volatile int32_t t98 = 38130534;

    t98 = ((x393>x394)!=(x395==x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x397 = -2;
	uint32_t x398 = 470U;
	static int16_t x399 = INT16_MIN;
	uint8_t x400 = UINT8_MAX;
	volatile int32_t t99 = -1;

    t99 = ((x397>x398)!=(x399==x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x401 = UINT16_MAX;
	uint32_t x402 = 223857U;
	static volatile int64_t x403 = -1LL;
	int16_t x404 = INT16_MIN;
	volatile int32_t t100 = 91049;

    t100 = ((x401>x402)!=(x403==x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = -372626899866LL;
	int16_t x406 = -1;
	static volatile int64_t x407 = -1558LL;
	uint8_t x408 = UINT8_MAX;
	int32_t t101 = 987649;

    t101 = ((x405>x406)!=(x407==x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x409 = 272591331348735806LL;
	int64_t x410 = -507LL;
	static int8_t x411 = INT8_MIN;
	int16_t x412 = INT16_MIN;
	volatile int32_t t102 = -5;

    t102 = ((x409>x410)!=(x411==x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x413 = 64228U;
	static int8_t x414 = -1;
	int64_t x415 = INT64_MAX;
	int8_t x416 = -1;
	volatile int32_t t103 = 448422;

    t103 = ((x413>x414)!=(x415==x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x418 = INT16_MIN;
	static uint8_t x419 = UINT8_MAX;
	uint8_t x420 = UINT8_MAX;
	volatile int32_t t104 = 1;

    t104 = ((x417>x418)!=(x419==x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x421 = UINT8_MAX;
	volatile int32_t x423 = 6;
	int64_t x424 = 6749572830296954LL;

    t105 = ((x421>x422)!=(x423==x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = INT16_MIN;
	uint32_t x426 = 157U;
	int64_t x428 = 51111LL;
	int32_t t106 = -772;

    t106 = ((x425>x426)!=(x427==x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = INT64_MAX;
	static int32_t t107 = -15568018;

    t107 = ((x429>x430)!=(x431==x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x433 = UINT32_MAX;
	static volatile uint32_t x434 = UINT32_MAX;
	uint32_t x435 = 76U;
	int32_t x436 = -1;

    t108 = ((x433>x434)!=(x435==x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = -1;
	static uint64_t x438 = 3LLU;
	int32_t x439 = -1;
	static int32_t x440 = INT32_MAX;
	volatile int32_t t109 = 0;

    t109 = ((x437>x438)!=(x439==x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x442 = INT16_MIN;
	int32_t x443 = INT32_MIN;
	int16_t x444 = -1;
	volatile int32_t t110 = 392943;

    t110 = ((x441>x442)!=(x443==x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int16_t x445 = INT16_MIN;
	volatile int16_t x446 = INT16_MAX;
	static volatile uint64_t x447 = 8770868185468942LLU;
	int16_t x448 = -6;
	int32_t t111 = -7337613;

    t111 = ((x445>x446)!=(x447==x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x449 = INT16_MAX;
	volatile uint64_t x450 = 265845123LLU;
	uint32_t x451 = UINT32_MAX;
	static int8_t x452 = -11;
	volatile int32_t t112 = -5760;

    t112 = ((x449>x450)!=(x451==x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x453 = 280LL;
	static uint16_t x454 = 188U;
	volatile uint32_t x455 = 521642U;
	static int32_t t113 = 1;

    t113 = ((x453>x454)!=(x455==x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = 0;
	volatile int16_t x458 = INT16_MIN;
	int64_t x459 = 4721885234203LL;
	volatile int64_t x460 = 114899154915004LL;
	static int32_t t114 = 837838687;

    t114 = ((x457>x458)!=(x459==x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x461 = UINT32_MAX;
	int32_t x462 = 0;
	int32_t t115 = 2;

    t115 = ((x461>x462)!=(x463==x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x465 = 5289436651533716LLU;
	uint64_t x466 = 1307090747472127587LLU;
	uint32_t x467 = 13U;
	int8_t x468 = -1;
	static volatile int32_t t116 = -243;

    t116 = ((x465>x466)!=(x467==x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint32_t x471 = 0U;
	volatile uint8_t x472 = 53U;
	volatile int32_t t117 = -1167471;

    t117 = ((x469>x470)!=(x471==x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x475 = 46349;
	int64_t x476 = INT64_MIN;
	int32_t t118 = -103703342;

    t118 = ((x473>x474)!=(x475==x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = -79181404109166LL;
	volatile uint32_t x478 = 11677696U;
	static volatile uint32_t x479 = UINT32_MAX;
	volatile int32_t t119 = 305283;

    t119 = ((x477>x478)!=(x479==x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = -1;
	static int16_t x482 = INT16_MIN;
	uint16_t x483 = 489U;
	int8_t x484 = INT8_MIN;
	volatile int32_t t120 = 138809181;

    t120 = ((x481>x482)!=(x483==x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x485 = -10286LL;
	uint16_t x487 = 6U;
	int32_t t121 = 69975137;

    t121 = ((x485>x486)!=(x487==x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x489 = 1325U;
	uint32_t x490 = 250963U;
	int16_t x491 = INT16_MIN;

    t122 = ((x489>x490)!=(x491==x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x493 = -84;
	volatile int8_t x494 = INT8_MIN;
	static int16_t x495 = -1;
	static volatile int16_t x496 = INT16_MAX;
	volatile int32_t t123 = 7029;

    t123 = ((x493>x494)!=(x495==x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = -237;
	int32_t x499 = -6;
	uint16_t x500 = UINT16_MAX;

    t124 = ((x497>x498)!=(x499==x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x501 = 11U;
	int16_t x502 = -1;
	int32_t x504 = -51;

    t125 = ((x501>x502)!=(x503==x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = 68;
	int32_t x506 = INT32_MAX;
	int32_t x508 = -33581;

    t126 = ((x505>x506)!=(x507==x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x509 = INT16_MAX;
	int16_t x510 = INT16_MIN;
	uint64_t x511 = 25727115981502LLU;
	volatile int32_t t127 = 147310551;

    t127 = ((x509>x510)!=(x511==x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x513 = 1;
	int64_t x514 = -18644979325745LL;
	int16_t x515 = -2466;
	static int64_t x516 = 58746LL;
	volatile int32_t t128 = -62;

    t128 = ((x513>x514)!=(x515==x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x517 = INT16_MIN;
	int64_t x518 = 5917595202468020LL;
	volatile int64_t x519 = INT64_MIN;
	uint8_t x520 = UINT8_MAX;
	volatile int32_t t129 = -17888989;

    t129 = ((x517>x518)!=(x519==x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = INT16_MIN;
	int32_t x523 = INT32_MAX;
	volatile int32_t t130 = 921938065;

    t130 = ((x521>x522)!=(x523==x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = -3613;
	static int64_t x527 = 146311507964LL;
	int64_t x528 = 2LL;
	static volatile int32_t t131 = 559;

    t131 = ((x525>x526)!=(x527==x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x531 = INT64_MIN;
	int32_t t132 = 1317362;

    t132 = ((x529>x530)!=(x531==x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = INT32_MAX;
	int8_t x534 = INT8_MAX;
	int8_t x535 = INT8_MIN;
	volatile uint16_t x536 = 22U;

    t133 = ((x533>x534)!=(x535==x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = -1LL;
	int64_t x539 = -3204221LL;
	int32_t t134 = 1106;

    t134 = ((x537>x538)!=(x539==x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x541 = INT8_MIN;
	volatile uint8_t x542 = UINT8_MAX;
	static volatile int32_t x543 = INT32_MIN;
	int32_t t135 = -19;

    t135 = ((x541>x542)!=(x543==x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x545 = -1;
	static uint16_t x546 = UINT16_MAX;
	static uint64_t x547 = 2574252LLU;
	uint32_t x548 = 12U;
	static volatile int32_t t136 = -1;

    t136 = ((x545>x546)!=(x547==x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x552 = INT32_MAX;

    t137 = ((x549>x550)!=(x551==x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x553 = 190U;
	int8_t x555 = INT8_MAX;
	int32_t x556 = INT32_MAX;
	volatile int32_t t138 = -1;

    t138 = ((x553>x554)!=(x555==x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x557 = INT64_MAX;
	int16_t x558 = -1;
	uint16_t x559 = UINT16_MAX;
	int8_t x560 = -22;

    t139 = ((x557>x558)!=(x559==x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x561 = UINT8_MAX;
	int64_t x562 = INT64_MIN;
	int8_t x563 = -2;
	int16_t x564 = -355;

    t140 = ((x561>x562)!=(x563==x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x565 = 1073778LLU;
	int64_t x566 = 897597885LL;
	uint16_t x568 = 367U;

    t141 = ((x565>x566)!=(x567==x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x569 = 64005171184571363LLU;
	int8_t x570 = INT8_MAX;
	int16_t x571 = -1;
	int8_t x572 = INT8_MIN;

    t142 = ((x569>x570)!=(x571==x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = INT8_MIN;
	int16_t x574 = INT16_MAX;
	int8_t x575 = INT8_MAX;
	int32_t x576 = INT32_MIN;
	int32_t t143 = -5777065;

    t143 = ((x573>x574)!=(x575==x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = INT8_MIN;
	uint8_t x580 = 1U;
	volatile int32_t t144 = 10763384;

    t144 = ((x577>x578)!=(x579==x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x581 = INT64_MIN;
	int64_t x582 = INT64_MIN;
	static int64_t x583 = INT64_MAX;
	int16_t x584 = -5;
	static int32_t t145 = 272522;

    t145 = ((x581>x582)!=(x583==x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = INT64_MIN;
	uint8_t x586 = 3U;
	volatile int16_t x587 = INT16_MIN;
	int16_t x588 = 3239;
	volatile int32_t t146 = 373191498;

    t146 = ((x585>x586)!=(x587==x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = INT32_MAX;
	uint16_t x590 = UINT16_MAX;
	int64_t x591 = -42746013199961662LL;
	static int64_t x592 = -1LL;
	volatile int32_t t147 = 169476;

    t147 = ((x589>x590)!=(x591==x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = -1;
	int16_t x594 = -7400;
	static int16_t x595 = INT16_MIN;
	static uint16_t x596 = 17875U;
	volatile int32_t t148 = -16801460;

    t148 = ((x593>x594)!=(x595==x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x597 = INT8_MIN;
	uint32_t x599 = 389550U;
	volatile uint64_t x600 = 74810572791LLU;
	static volatile int32_t t149 = 704175;

    t149 = ((x597>x598)!=(x599==x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = INT8_MAX;
	int16_t x602 = INT16_MIN;
	int8_t x603 = INT8_MAX;
	volatile int32_t t150 = 522;

    t150 = ((x601>x602)!=(x603==x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = 5;
	uint64_t x607 = 119LLU;
	volatile int32_t t151 = -29468502;

    t151 = ((x605>x606)!=(x607==x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x610 = -3869087174026LL;
	volatile int32_t x612 = 6;
	int32_t t152 = -28410;

    t152 = ((x609>x610)!=(x611==x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x614 = INT64_MIN;
	volatile int8_t x615 = INT8_MAX;
	volatile int16_t x616 = INT16_MIN;
	volatile int32_t t153 = 1808;

    t153 = ((x613>x614)!=(x615==x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = 0;
	int64_t x618 = 1559633943LL;
	volatile uint32_t x619 = 1039U;
	uint16_t x620 = 10283U;
	static volatile int32_t t154 = 1;

    t154 = ((x617>x618)!=(x619==x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int16_t x621 = INT16_MIN;
	volatile int8_t x622 = INT8_MIN;
	static int64_t x623 = 86LL;
	static uint8_t x624 = UINT8_MAX;
	int32_t t155 = -956773;

    t155 = ((x621>x622)!=(x623==x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = INT32_MAX;
	volatile int16_t x626 = INT16_MIN;
	volatile uint32_t x627 = UINT32_MAX;
	int32_t x628 = INT32_MAX;
	int32_t t156 = 309534;

    t156 = ((x625>x626)!=(x627==x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x629 = INT32_MAX;
	int16_t x630 = INT16_MIN;
	int64_t x631 = -1LL;
	int64_t x632 = 31819400368442LL;
	volatile int32_t t157 = 1636335;

    t157 = ((x629>x630)!=(x631==x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x633 = INT64_MIN;
	static volatile int32_t x634 = -1;
	volatile int8_t x635 = -1;
	int8_t x636 = INT8_MIN;
	static volatile int32_t t158 = 1567213;

    t158 = ((x633>x634)!=(x635==x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = INT32_MIN;
	int8_t x638 = INT8_MIN;
	int8_t x639 = 0;
	static int64_t x640 = INT64_MIN;
	volatile int32_t t159 = -45771;

    t159 = ((x637>x638)!=(x639==x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = -1;
	int8_t x643 = INT8_MAX;
	int64_t x644 = -1LL;

    t160 = ((x641>x642)!=(x643==x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x648 = -1LL;
	volatile int32_t t161 = 1621;

    t161 = ((x645>x646)!=(x647==x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x649 = -1;
	uint64_t x651 = UINT64_MAX;
	volatile int32_t x652 = 8298;
	static int32_t t162 = -284;

    t162 = ((x649>x650)!=(x651==x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = -1;
	int8_t x654 = INT8_MIN;
	uint8_t x656 = 3U;
	volatile int32_t t163 = 192;

    t163 = ((x653>x654)!=(x655==x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x657 = INT64_MAX;
	volatile int16_t x658 = INT16_MAX;
	int8_t x659 = 5;
	int8_t x660 = -1;
	int32_t t164 = 1;

    t164 = ((x657>x658)!=(x659==x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x661 = 18U;
	uint16_t x662 = 885U;
	volatile uint16_t x663 = 6U;
	volatile uint16_t x664 = UINT16_MAX;
	static volatile int32_t t165 = 3768090;

    t165 = ((x661>x662)!=(x663==x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = INT64_MAX;
	int64_t x666 = 4LL;
	int32_t x667 = INT32_MAX;
	static uint64_t x668 = 3665003369344465182LLU;
	volatile int32_t t166 = 172841;

    t166 = ((x665>x666)!=(x667==x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x669 = -1;
	static volatile int8_t x671 = INT8_MIN;
	int32_t x672 = INT32_MAX;
	volatile int32_t t167 = -7252709;

    t167 = ((x669>x670)!=(x671==x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = 13091578324727LL;
	volatile int16_t x674 = 0;
	int32_t x675 = -1;
	uint8_t x676 = 22U;
	int32_t t168 = 14566355;

    t168 = ((x673>x674)!=(x675==x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = -260043LL;
	volatile int32_t t169 = 96757;

    t169 = ((x677>x678)!=(x679==x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = INT8_MIN;
	uint32_t x683 = 1386U;
	int32_t x684 = INT32_MIN;

    t170 = ((x681>x682)!=(x683==x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x685 = INT8_MIN;
	static uint64_t x687 = UINT64_MAX;
	int8_t x688 = INT8_MAX;
	volatile int32_t t171 = -89868;

    t171 = ((x685>x686)!=(x687==x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = -9LL;
	int64_t x690 = 1LL;
	int32_t x691 = INT32_MIN;
	static int32_t x692 = 1909287;

    t172 = ((x689>x690)!=(x691==x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = INT16_MIN;
	uint64_t x694 = 244910001759LLU;
	int32_t x695 = INT32_MAX;
	static volatile int32_t x696 = 61;

    t173 = ((x693>x694)!=(x695==x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x698 = -1;
	uint8_t x699 = UINT8_MAX;
	uint8_t x700 = 0U;

    t174 = ((x697>x698)!=(x699==x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = INT32_MAX;
	int16_t x702 = INT16_MIN;
	volatile int8_t x703 = -1;
	int64_t x704 = 103LL;
	static int32_t t175 = 1;

    t175 = ((x701>x702)!=(x703==x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = INT64_MAX;
	static int8_t x706 = INT8_MIN;
	static uint16_t x707 = UINT16_MAX;
	int32_t x708 = -310229;

    t176 = ((x705>x706)!=(x707==x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = INT32_MIN;
	int32_t x712 = -1;
	volatile int32_t t177 = -527;

    t177 = ((x709>x710)!=(x711==x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = -1;
	int16_t x714 = INT16_MIN;
	volatile int8_t x715 = -1;
	int8_t x716 = -1;
	volatile int32_t t178 = -394322662;

    t178 = ((x713>x714)!=(x715==x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x717 = 0U;
	int8_t x718 = -1;
	static int16_t x719 = INT16_MIN;
	int16_t x720 = INT16_MIN;
	int32_t t179 = -12405;

    t179 = ((x717>x718)!=(x719==x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int32_t x721 = INT32_MIN;
	int8_t x722 = INT8_MAX;
	int64_t x723 = -1251392223750LL;
	int16_t x724 = -1;

    t180 = ((x721>x722)!=(x723==x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x725 = UINT8_MAX;
	int8_t x727 = -3;
	int32_t t181 = 20;

    t181 = ((x725>x726)!=(x727==x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int32_t x729 = INT32_MIN;
	volatile int32_t x730 = INT32_MAX;
	int32_t x731 = -78610823;
	uint32_t x732 = UINT32_MAX;
	int32_t t182 = 730;

    t182 = ((x729>x730)!=(x731==x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t t183 = -4212192;

    t183 = ((x733>x734)!=(x735==x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = 41838680LL;
	volatile int8_t x738 = INT8_MIN;
	volatile int16_t x739 = INT16_MIN;
	int32_t x740 = 1;

    t184 = ((x737>x738)!=(x739==x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = INT64_MAX;
	int16_t x743 = 181;
	int8_t x744 = INT8_MIN;
	volatile int32_t t185 = -812296943;

    t185 = ((x741>x742)!=(x743==x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x745 = 27U;
	static int64_t x746 = 13694LL;
	int8_t x747 = 2;
	static int64_t x748 = INT64_MIN;
	int32_t t186 = 32592272;

    t186 = ((x745>x746)!=(x747==x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x749 = INT16_MIN;
	int16_t x750 = 1330;
	static uint16_t x752 = 246U;
	volatile int32_t t187 = -26;

    t187 = ((x749>x750)!=(x751==x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = 7243825932717702LL;
	static int8_t x754 = -1;
	static volatile int8_t x756 = INT8_MIN;

    t188 = ((x753>x754)!=(x755==x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x758 = -7966;
	int16_t x760 = -1;
	static int32_t t189 = 1403;

    t189 = ((x757>x758)!=(x759==x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = INT16_MAX;
	static int8_t x764 = INT8_MAX;
	volatile int32_t t190 = 13;

    t190 = ((x761>x762)!=(x763==x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x766 = -1932LL;
	int32_t x767 = INT32_MIN;
	volatile int32_t t191 = 97;

    t191 = ((x765>x766)!=(x767==x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = INT64_MIN;
	volatile uint32_t x770 = 64351612U;
	uint16_t x771 = UINT16_MAX;
	static volatile uint32_t x772 = 15U;

    t192 = ((x769>x770)!=(x771==x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x773 = 31U;
	static uint64_t x775 = 82LLU;
	int16_t x776 = 1;
	int32_t t193 = 117;

    t193 = ((x773>x774)!=(x775==x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x777 = 276;
	int32_t x778 = INT32_MIN;
	uint16_t x779 = 5466U;
	uint8_t x780 = 61U;
	volatile int32_t t194 = -1184;

    t194 = ((x777>x778)!=(x779==x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x781 = 161673519U;
	int8_t x783 = INT8_MIN;
	static uint32_t x784 = 6825460U;
	volatile int32_t t195 = -17206863;

    t195 = ((x781>x782)!=(x783==x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x785 = UINT16_MAX;
	int64_t x786 = 93951093LL;
	int16_t x787 = INT16_MAX;
	int32_t x788 = 67;
	int32_t t196 = 0;

    t196 = ((x785>x786)!=(x787==x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x790 = -24914;
	int8_t x791 = INT8_MIN;
	int8_t x792 = -1;
	int32_t t197 = 186;

    t197 = ((x789>x790)!=(x791==x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = INT32_MAX;
	int16_t x795 = INT16_MAX;
	uint8_t x796 = UINT8_MAX;
	int32_t t198 = -446;

    t198 = ((x793>x794)!=(x795==x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x797 = 102532554513731505LLU;
	static uint64_t x798 = UINT64_MAX;
	int16_t x799 = INT16_MIN;
	int32_t x800 = -119;
	static int32_t t199 = -48943;

    t199 = ((x797>x798)!=(x799==x800));

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

