
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

static uint32_t x1 = 16U;
int32_t x8 = -1;
int32_t t2 = -78460;
uint16_t x14 = 50U;
volatile int32_t t3 = 148972642;
volatile int32_t t6 = -3;
static int64_t x34 = INT64_MIN;
int64_t x37 = INT64_MIN;
uint64_t x46 = UINT64_MAX;
int8_t x51 = 14;
uint16_t x61 = UINT16_MAX;
int32_t x67 = INT32_MAX;
int64_t x70 = INT64_MIN;
volatile int8_t x72 = 53;
int16_t x74 = -1;
int64_t x75 = INT64_MIN;
int16_t x77 = -1;
volatile uint16_t x90 = 56U;
int16_t x92 = INT16_MIN;
uint64_t x99 = 362939794427845LLU;
volatile int32_t t25 = -14591494;
volatile uint64_t x106 = 8734547LLU;
uint32_t x109 = 426110U;
static int32_t x111 = 3886;
uint16_t x120 = UINT16_MAX;
static volatile int32_t t30 = -14;
int8_t x126 = INT8_MAX;
int8_t x128 = INT8_MAX;
int16_t x130 = -3;
volatile int32_t t32 = 3627524;
int8_t x135 = -1;
static volatile int32_t t34 = -1;
int16_t x145 = 0;
uint16_t x152 = UINT16_MAX;
int32_t t37 = 3358;
int8_t x156 = INT8_MAX;
int32_t t38 = 177017;
int32_t t40 = -106922;
uint32_t x165 = 79315643U;
int8_t x171 = -1;
volatile uint8_t x175 = UINT8_MAX;
uint32_t x178 = UINT32_MAX;
volatile uint8_t x181 = UINT8_MAX;
static int32_t x183 = INT32_MIN;
uint16_t x186 = 26438U;
int64_t x187 = INT64_MIN;
static uint16_t x189 = 26U;
int16_t x191 = INT16_MAX;
static int8_t x197 = -1;
static volatile uint8_t x220 = 0U;
volatile int32_t t54 = -25;
int16_t x223 = INT16_MIN;
static uint16_t x226 = 0U;
uint32_t x228 = 7U;
int32_t x240 = 434160;
uint64_t x243 = UINT64_MAX;
volatile int8_t x252 = 0;
int32_t t62 = 9377;
uint64_t x253 = 53LLU;
volatile int16_t x255 = INT16_MAX;
int64_t x258 = INT64_MAX;
int64_t x260 = INT64_MAX;
volatile int32_t t64 = 6;
int64_t x262 = INT64_MIN;
int8_t x263 = 0;
int16_t x266 = 2894;
volatile int64_t x272 = -1LL;
int32_t t67 = 2;
uint64_t x274 = UINT64_MAX;
int16_t x276 = INT16_MIN;
int32_t t69 = 1419812;
int32_t x281 = INT32_MIN;
static volatile int32_t t70 = -995371108;
volatile int64_t x285 = INT64_MIN;
uint16_t x286 = 105U;
static volatile uint16_t x287 = 4U;
volatile int32_t t72 = 207103;
volatile int32_t x295 = INT32_MAX;
int8_t x297 = 27;
int8_t x299 = -1;
volatile uint8_t x303 = 10U;
int32_t x306 = INT32_MIN;
volatile uint64_t x307 = 102237567808735476LLU;
volatile int32_t t79 = -444420;
uint64_t x321 = 2918134259217922LLU;
volatile int32_t t80 = 2;
static int8_t x327 = -12;
static uint64_t x328 = UINT64_MAX;
volatile uint64_t x340 = UINT64_MAX;
volatile int32_t t84 = 333;
volatile uint8_t x347 = UINT8_MAX;
volatile int32_t t86 = -91249;
volatile int8_t x352 = -24;
int32_t t88 = -578656;
volatile int32_t t90 = 20439554;
int32_t x366 = INT32_MIN;
uint32_t x368 = 133914351U;
static uint16_t x370 = 1148U;
int8_t x374 = -1;
int64_t x377 = INT64_MIN;
uint8_t x388 = UINT8_MAX;
uint32_t x390 = 187753U;
static volatile int8_t x400 = INT8_MIN;
volatile int32_t t99 = 677834;
int64_t x407 = 0LL;
int8_t x409 = -2;
static int8_t x429 = INT8_MIN;
int64_t x431 = 2733268191706377528LL;
int16_t x434 = INT16_MIN;
static volatile int32_t t108 = 3289096;
volatile uint16_t x443 = 387U;
int32_t t110 = 6038548;
int64_t x448 = -15977LL;
int8_t x456 = INT8_MAX;
int8_t x464 = INT8_MIN;
volatile int32_t t115 = 973808;
volatile uint8_t x468 = 82U;
int32_t x469 = -1;
volatile int64_t x477 = INT64_MIN;
volatile int32_t x480 = INT32_MIN;
volatile int8_t x482 = INT8_MIN;
int32_t x483 = 915111918;
static uint16_t x486 = UINT16_MAX;
uint32_t x487 = 1961U;
static volatile uint16_t x490 = 0U;
int64_t x491 = -987105464438LL;
volatile int8_t x495 = 5;
int64_t x498 = INT64_MIN;
uint16_t x499 = 12U;
int8_t x507 = INT8_MIN;
int16_t x512 = INT16_MAX;
int32_t t127 = 670829;
static int32_t t129 = 12;
volatile uint8_t x522 = UINT8_MAX;
static int16_t x530 = INT16_MIN;
volatile uint8_t x550 = 7U;
static int32_t t137 = -933412;
static volatile int64_t x562 = 1552468843LL;
int64_t x563 = -1LL;
uint64_t x567 = UINT64_MAX;
uint64_t x568 = 1LLU;
int32_t x574 = 771172330;
int32_t x580 = INT32_MIN;
int32_t x585 = INT32_MIN;
int32_t x592 = 6;
int32_t x596 = INT32_MIN;
int32_t t148 = 15;
int8_t x602 = INT8_MIN;
volatile int32_t t152 = 54870677;
int64_t x617 = 958357241482308LL;
volatile uint64_t x619 = 538384688985LLU;
int16_t x627 = INT16_MAX;
static int32_t x632 = -1;
static int32_t t157 = -672505674;
int32_t t159 = 6210;
int8_t x644 = 6;
volatile int32_t t160 = 638;
int16_t x646 = INT16_MIN;
volatile int32_t x659 = INT32_MAX;
uint8_t x669 = 22U;
int16_t x675 = INT16_MIN;
static volatile int32_t t168 = -7;
int16_t x690 = INT16_MIN;
int64_t x700 = -542387642161LL;
volatile int8_t x706 = INT8_MAX;
int16_t x708 = INT16_MIN;
int64_t x709 = INT64_MAX;
int64_t x710 = INT64_MIN;
volatile int8_t x714 = -46;
uint64_t x718 = 359610356LLU;
int32_t x720 = INT32_MIN;
int32_t x724 = INT32_MAX;
uint32_t x725 = UINT32_MAX;
uint32_t x735 = UINT32_MAX;
static int16_t x737 = INT16_MIN;
uint16_t x744 = 0U;
volatile uint8_t x755 = UINT8_MAX;
int64_t x756 = -26306906LL;
volatile uint8_t x763 = 113U;
int64_t x765 = 3710LL;
volatile int32_t t191 = -13485979;
static int32_t x776 = INT32_MAX;
int8_t x777 = -1;
int8_t x779 = -1;
volatile int32_t t194 = 445184;
int16_t x781 = INT16_MIN;
int16_t x782 = -17;
static volatile uint32_t x791 = UINT32_MAX;
int32_t x793 = INT32_MIN;
static uint32_t x795 = UINT32_MAX;
volatile uint32_t x799 = 499U;
int8_t x800 = -1;


void f0(void) {
    	int64_t x2 = INT64_MIN;
	int64_t x3 = INT64_MIN;
	static uint8_t x4 = UINT8_MAX;
	int32_t t0 = 2978;

    t0 = ((x1>x2)&(x3>x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 0U;
	int32_t x6 = INT32_MIN;
	int8_t x7 = -11;
	int32_t t1 = -3326370;

    t1 = ((x5>x6)&(x7>x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -1LL;
	volatile int16_t x10 = -1;
	static uint64_t x11 = UINT64_MAX;
	static int32_t x12 = 2073351;

    t2 = ((x9>x10)&(x11>x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x13 = 12LLU;
	volatile uint64_t x15 = 11122LLU;
	static uint8_t x16 = 0U;

    t3 = ((x13>x14)&(x15>x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 957806U;
	uint64_t x18 = 2144280484071732LLU;
	uint32_t x19 = 243359U;
	static volatile uint16_t x20 = 176U;
	volatile int32_t t4 = -88932864;

    t4 = ((x17>x18)&(x19>x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = 186741051679537LL;
	int16_t x22 = INT16_MIN;
	uint16_t x23 = UINT16_MAX;
	int32_t x24 = INT32_MIN;
	static int32_t t5 = 36133;

    t5 = ((x21>x22)&(x23>x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = 87975647;
	int16_t x26 = -701;
	int8_t x27 = INT8_MAX;
	volatile int32_t x28 = INT32_MAX;

    t6 = ((x25>x26)&(x27>x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MAX;
	uint16_t x30 = 23681U;
	int8_t x31 = 0;
	volatile int8_t x32 = -1;
	volatile int32_t t7 = -16;

    t7 = ((x29>x30)&(x31>x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = 5U;
	uint16_t x35 = UINT16_MAX;
	static int8_t x36 = INT8_MAX;
	int32_t t8 = 10;

    t8 = ((x33>x34)&(x35>x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x38 = 3894U;
	int32_t x39 = -1;
	static int8_t x40 = INT8_MAX;
	int32_t t9 = 9;

    t9 = ((x37>x38)&(x39>x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int8_t x41 = INT8_MIN;
	static int32_t x42 = 1008772;
	int32_t x43 = INT32_MIN;
	static volatile uint64_t x44 = UINT64_MAX;
	static volatile int32_t t10 = 8;

    t10 = ((x41>x42)&(x43>x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x45 = 1U;
	int16_t x47 = INT16_MAX;
	int32_t x48 = 8380390;
	static int32_t t11 = 0;

    t11 = ((x45>x46)&(x47>x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MIN;
	uint16_t x50 = UINT16_MAX;
	int64_t x52 = INT64_MIN;
	int32_t t12 = 7;

    t12 = ((x49>x50)&(x51>x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 6U;
	uint8_t x54 = 1U;
	static int64_t x55 = -1LL;
	volatile int32_t x56 = 318;
	static int32_t t13 = 266399544;

    t13 = ((x53>x54)&(x55>x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = -2;
	int8_t x58 = -1;
	static uint32_t x59 = 687U;
	static uint64_t x60 = UINT64_MAX;
	int32_t t14 = -3;

    t14 = ((x57>x58)&(x59>x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x62 = INT32_MIN;
	uint64_t x63 = UINT64_MAX;
	int8_t x64 = -1;
	volatile int32_t t15 = -954917;

    t15 = ((x61>x62)&(x63>x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x65 = -28LL;
	int16_t x66 = 2;
	uint64_t x68 = UINT64_MAX;
	volatile int32_t t16 = -40432;

    t16 = ((x65>x66)&(x67>x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = 29U;
	int64_t x71 = INT64_MIN;
	volatile int32_t t17 = 2;

    t17 = ((x69>x70)&(x71>x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = 1U;
	static uint64_t x76 = 268LLU;
	static volatile int32_t t18 = 920;

    t18 = ((x73>x74)&(x75>x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x78 = 5185LLU;
	int32_t x79 = 6951600;
	int64_t x80 = -1LL;
	static volatile int32_t t19 = -36;

    t19 = ((x77>x78)&(x79>x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x81 = -11310;
	int32_t x82 = -1;
	uint8_t x83 = UINT8_MAX;
	int32_t x84 = -1;
	int32_t t20 = -93310323;

    t20 = ((x81>x82)&(x83>x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint8_t x85 = UINT8_MAX;
	static int16_t x86 = INT16_MAX;
	int64_t x87 = 234496LL;
	volatile uint16_t x88 = 618U;
	volatile int32_t t21 = 32561690;

    t21 = ((x85>x86)&(x87>x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int32_t x89 = -392;
	volatile int8_t x91 = -1;
	int32_t t22 = -3;

    t22 = ((x89>x90)&(x91>x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x93 = INT64_MIN;
	static int16_t x94 = 5203;
	int8_t x95 = INT8_MIN;
	static int64_t x96 = -1LL;
	int32_t t23 = 24854;

    t23 = ((x93>x94)&(x95>x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x97 = 105098294;
	uint16_t x98 = UINT16_MAX;
	static uint8_t x100 = UINT8_MAX;
	int32_t t24 = 2975;

    t24 = ((x97>x98)&(x99>x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = -8676;
	static volatile int16_t x102 = INT16_MIN;
	uint64_t x103 = UINT64_MAX;
	uint32_t x104 = UINT32_MAX;

    t25 = ((x101>x102)&(x103>x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x105 = UINT8_MAX;
	uint32_t x107 = 3U;
	static uint32_t x108 = 251457467U;
	volatile int32_t t26 = -2455;

    t26 = ((x105>x106)&(x107>x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x110 = 446909LL;
	volatile int32_t x112 = INT32_MAX;
	static volatile int32_t t27 = -12240304;

    t27 = ((x109>x110)&(x111>x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint64_t x113 = 7160120863LLU;
	static int32_t x114 = 159718830;
	static int32_t x115 = INT32_MIN;
	uint64_t x116 = 6370LLU;
	volatile int32_t t28 = 1760445;

    t28 = ((x113>x114)&(x115>x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x117 = 75U;
	int8_t x118 = -8;
	uint64_t x119 = 125512973358043LLU;
	volatile int32_t t29 = 6;

    t29 = ((x117>x118)&(x119>x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x121 = 1U;
	uint64_t x122 = 3377746820LLU;
	int8_t x123 = -19;
	int32_t x124 = INT32_MIN;

    t30 = ((x121>x122)&(x123>x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = 9;
	uint32_t x127 = 420727U;
	volatile int32_t t31 = -8592;

    t31 = ((x125>x126)&(x127>x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x129 = INT8_MIN;
	int8_t x131 = -1;
	volatile uint8_t x132 = 9U;

    t32 = ((x129>x130)&(x131>x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x133 = 8830103080815452LLU;
	volatile uint64_t x134 = UINT64_MAX;
	int64_t x136 = 11197754LL;
	static volatile int32_t t33 = -6974545;

    t33 = ((x133>x134)&(x135>x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint8_t x137 = 20U;
	static int8_t x138 = -1;
	int16_t x139 = -1;
	volatile int32_t x140 = INT32_MIN;

    t34 = ((x137>x138)&(x139>x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = -1;
	int32_t x142 = -1;
	volatile int64_t x143 = INT64_MAX;
	int64_t x144 = INT64_MIN;
	int32_t t35 = 960;

    t35 = ((x141>x142)&(x143>x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x146 = 1;
	int8_t x147 = INT8_MIN;
	int8_t x148 = INT8_MIN;
	volatile int32_t t36 = 90614919;

    t36 = ((x145>x146)&(x147>x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = INT8_MIN;
	static int32_t x150 = INT32_MAX;
	int16_t x151 = 1;

    t37 = ((x149>x150)&(x151>x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x153 = INT8_MIN;
	uint32_t x154 = 752U;
	volatile uint16_t x155 = 1U;

    t38 = ((x153>x154)&(x155>x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x157 = -1LL;
	static int8_t x158 = -2;
	volatile int8_t x159 = -1;
	uint8_t x160 = 0U;
	static volatile int32_t t39 = -1;

    t39 = ((x157>x158)&(x159>x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x161 = INT64_MIN;
	uint64_t x162 = 733327859386450068LLU;
	static volatile int32_t x163 = -535187667;
	int32_t x164 = 16;

    t40 = ((x161>x162)&(x163>x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x166 = INT64_MAX;
	volatile int32_t x167 = 1;
	int8_t x168 = 59;
	int32_t t41 = -117;

    t41 = ((x165>x166)&(x167>x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MIN;
	uint32_t x170 = 86203213U;
	uint64_t x172 = 75489241LLU;
	volatile int32_t t42 = -40;

    t42 = ((x169>x170)&(x171>x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = -1;
	static volatile uint32_t x174 = UINT32_MAX;
	static uint16_t x176 = 259U;
	volatile int32_t t43 = 0;

    t43 = ((x173>x174)&(x175>x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = INT32_MIN;
	uint16_t x179 = UINT16_MAX;
	uint32_t x180 = 48U;
	volatile int32_t t44 = -6838;

    t44 = ((x177>x178)&(x179>x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x182 = 3533121;
	int8_t x184 = -1;
	int32_t t45 = -503836;

    t45 = ((x181>x182)&(x183>x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x185 = INT32_MIN;
	static int16_t x188 = INT16_MIN;
	volatile int32_t t46 = -122795;

    t46 = ((x185>x186)&(x187>x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x190 = 1002U;
	volatile uint8_t x192 = UINT8_MAX;
	volatile int32_t t47 = -211;

    t47 = ((x189>x190)&(x191>x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x193 = -1;
	int16_t x194 = -3872;
	static uint16_t x195 = UINT16_MAX;
	static int64_t x196 = -32550LL;
	volatile int32_t t48 = 8188296;

    t48 = ((x193>x194)&(x195>x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x198 = INT32_MIN;
	static uint8_t x199 = 11U;
	uint32_t x200 = UINT32_MAX;
	int32_t t49 = 46;

    t49 = ((x197>x198)&(x199>x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x201 = 157LLU;
	uint8_t x202 = UINT8_MAX;
	int32_t x203 = 2248;
	uint16_t x204 = 130U;
	int32_t t50 = -90569;

    t50 = ((x201>x202)&(x203>x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x205 = 39U;
	int16_t x206 = INT16_MIN;
	volatile uint8_t x207 = 5U;
	static volatile int32_t x208 = -10;
	int32_t t51 = 3655895;

    t51 = ((x205>x206)&(x207>x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x209 = INT32_MIN;
	static volatile int64_t x210 = -1LL;
	int64_t x211 = -33150737LL;
	volatile int8_t x212 = INT8_MIN;
	int32_t t52 = 2649;

    t52 = ((x209>x210)&(x211>x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x213 = 126215762763LLU;
	static uint8_t x214 = UINT8_MAX;
	int8_t x215 = INT8_MAX;
	int8_t x216 = INT8_MIN;
	volatile int32_t t53 = -146993038;

    t53 = ((x213>x214)&(x215>x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = INT16_MAX;
	static uint64_t x218 = UINT64_MAX;
	static int64_t x219 = -3676635023LL;

    t54 = ((x217>x218)&(x219>x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = INT16_MIN;
	volatile int32_t x222 = INT32_MIN;
	int64_t x224 = INT64_MIN;
	static int32_t t55 = 136;

    t55 = ((x221>x222)&(x223>x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = -1;
	uint16_t x227 = 0U;
	int32_t t56 = 416910176;

    t56 = ((x225>x226)&(x227>x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = -1;
	volatile int64_t x230 = -1LL;
	uint16_t x231 = 482U;
	static int64_t x232 = INT64_MIN;
	static volatile int32_t t57 = -7624615;

    t57 = ((x229>x230)&(x231>x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int64_t x233 = INT64_MIN;
	int8_t x234 = INT8_MIN;
	static uint8_t x235 = 2U;
	int8_t x236 = INT8_MIN;
	volatile int32_t t58 = 567701;

    t58 = ((x233>x234)&(x235>x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = -115303991;
	volatile int64_t x238 = -30763450461LL;
	int8_t x239 = INT8_MAX;
	int32_t t59 = 1;

    t59 = ((x237>x238)&(x239>x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = 1769862495LLU;
	uint32_t x242 = UINT32_MAX;
	volatile uint16_t x244 = 1668U;
	volatile int32_t t60 = -167;

    t60 = ((x241>x242)&(x243>x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x245 = 747675U;
	static int16_t x246 = 10335;
	static int64_t x247 = INT64_MIN;
	uint64_t x248 = 147581782767LLU;
	volatile int32_t t61 = -5321605;

    t61 = ((x245>x246)&(x247>x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = INT8_MIN;
	uint16_t x250 = 100U;
	uint64_t x251 = UINT64_MAX;

    t62 = ((x249>x250)&(x251>x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x254 = UINT32_MAX;
	static uint32_t x256 = 225U;
	volatile int32_t t63 = -125492989;

    t63 = ((x253>x254)&(x255>x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x257 = 3327809U;
	uint8_t x259 = 1U;

    t64 = ((x257>x258)&(x259>x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x261 = INT8_MIN;
	volatile uint8_t x264 = 3U;
	int32_t t65 = 756036886;

    t65 = ((x261>x262)&(x263>x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = -991903000;
	uint32_t x267 = 1U;
	uint16_t x268 = UINT16_MAX;
	int32_t t66 = -1218;

    t66 = ((x265>x266)&(x267>x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x269 = 2437;
	int32_t x270 = INT32_MIN;
	int8_t x271 = 0;

    t67 = ((x269>x270)&(x271>x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = INT32_MIN;
	int16_t x275 = -1;
	volatile int32_t t68 = 3972;

    t68 = ((x273>x274)&(x275>x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x277 = -1LL;
	uint64_t x278 = 254106180511246LLU;
	uint16_t x279 = 91U;
	int32_t x280 = 4;

    t69 = ((x277>x278)&(x279>x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x282 = 2U;
	int8_t x283 = 52;
	int16_t x284 = INT16_MIN;

    t70 = ((x281>x282)&(x283>x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x288 = -1;
	int32_t t71 = -470784;

    t71 = ((x285>x286)&(x287>x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = -3;
	volatile int64_t x290 = -309090823LL;
	volatile int32_t x291 = INT32_MIN;
	int32_t x292 = -253;

    t72 = ((x289>x290)&(x291>x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x293 = UINT8_MAX;
	volatile int8_t x294 = -1;
	volatile uint8_t x296 = UINT8_MAX;
	int32_t t73 = -18073;

    t73 = ((x293>x294)&(x295>x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x298 = 6629;
	int16_t x300 = INT16_MAX;
	volatile int32_t t74 = -125945;

    t74 = ((x297>x298)&(x299>x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x301 = 1U;
	int32_t x302 = -1;
	int8_t x304 = -3;
	int32_t t75 = 22;

    t75 = ((x301>x302)&(x303>x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = -1;
	int32_t x308 = -1;
	int32_t t76 = 0;

    t76 = ((x305>x306)&(x307>x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = -1;
	uint32_t x310 = 121664U;
	uint16_t x311 = 175U;
	int32_t x312 = -15283;
	volatile int32_t t77 = -6400;

    t77 = ((x309>x310)&(x311>x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = 7;
	uint8_t x314 = 9U;
	int64_t x315 = INT64_MAX;
	volatile int64_t x316 = 1332576LL;
	static volatile int32_t t78 = 978;

    t78 = ((x313>x314)&(x315>x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x317 = 951U;
	static int32_t x318 = -907561831;
	static volatile uint32_t x319 = 51U;
	static int16_t x320 = -1;

    t79 = ((x317>x318)&(x319>x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x322 = 2085244170LL;
	static int64_t x323 = INT64_MIN;
	volatile int64_t x324 = INT64_MAX;

    t80 = ((x321>x322)&(x323>x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = -211531933LL;
	volatile int64_t x326 = INT64_MAX;
	int32_t t81 = 54;

    t81 = ((x325>x326)&(x327>x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x329 = -3210462LL;
	int32_t x330 = 29336857;
	uint32_t x331 = 1417U;
	static int32_t x332 = 984;
	int32_t t82 = -2137;

    t82 = ((x329>x330)&(x331>x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = INT64_MIN;
	uint16_t x334 = 3U;
	int32_t x335 = -1;
	volatile int64_t x336 = -1LL;
	volatile int32_t t83 = 0;

    t83 = ((x333>x334)&(x335>x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile uint8_t x337 = UINT8_MAX;
	int32_t x338 = 15;
	int64_t x339 = INT64_MAX;

    t84 = ((x337>x338)&(x339>x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = INT8_MIN;
	int8_t x342 = 2;
	volatile uint16_t x343 = 24U;
	static int16_t x344 = 742;
	volatile int32_t t85 = 20040685;

    t85 = ((x341>x342)&(x343>x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x345 = 62;
	int64_t x346 = INT64_MIN;
	int32_t x348 = INT32_MAX;

    t86 = ((x345>x346)&(x347>x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x349 = 31U;
	uint32_t x350 = UINT32_MAX;
	volatile int64_t x351 = -1LL;
	volatile int32_t t87 = 1;

    t87 = ((x349>x350)&(x351>x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint64_t x353 = 529882863247041568LLU;
	int64_t x354 = -1LL;
	uint64_t x355 = UINT64_MAX;
	int32_t x356 = INT32_MIN;

    t88 = ((x353>x354)&(x355>x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x357 = 250LLU;
	static int32_t x358 = INT32_MAX;
	int64_t x359 = INT64_MAX;
	int32_t x360 = INT32_MIN;
	volatile int32_t t89 = -352;

    t89 = ((x357>x358)&(x359>x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x361 = 491886U;
	int8_t x362 = -8;
	int16_t x363 = INT16_MIN;
	static uint32_t x364 = 4U;

    t90 = ((x361>x362)&(x363>x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x365 = 233U;
	volatile uint8_t x367 = UINT8_MAX;
	static int32_t t91 = -7;

    t91 = ((x365>x366)&(x367>x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x369 = UINT32_MAX;
	static int32_t x371 = INT32_MAX;
	static volatile int64_t x372 = INT64_MIN;
	static volatile int32_t t92 = -202477;

    t92 = ((x369>x370)&(x371>x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = INT16_MAX;
	static int32_t x375 = INT32_MIN;
	int32_t x376 = INT32_MAX;
	static int32_t t93 = 0;

    t93 = ((x373>x374)&(x375>x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x378 = INT32_MIN;
	int8_t x379 = INT8_MIN;
	volatile uint8_t x380 = UINT8_MAX;
	int32_t t94 = 101358375;

    t94 = ((x377>x378)&(x379>x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int64_t x381 = 18960933064375LL;
	uint16_t x382 = UINT16_MAX;
	int32_t x383 = -1;
	volatile int32_t x384 = INT32_MAX;
	int32_t t95 = 0;

    t95 = ((x381>x382)&(x383>x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = 56;
	uint16_t x386 = 27586U;
	uint32_t x387 = 195610406U;
	int32_t t96 = 228975;

    t96 = ((x385>x386)&(x387>x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = INT32_MIN;
	int16_t x391 = INT16_MIN;
	volatile int32_t x392 = 28703919;
	int32_t t97 = 17;

    t97 = ((x389>x390)&(x391>x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x393 = 1010U;
	int8_t x394 = INT8_MIN;
	volatile int8_t x395 = INT8_MIN;
	static int64_t x396 = INT64_MIN;
	static volatile int32_t t98 = 903837;

    t98 = ((x393>x394)&(x395>x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x397 = 126U;
	int32_t x398 = 3919083;
	uint8_t x399 = UINT8_MAX;

    t99 = ((x397>x398)&(x399>x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x401 = 1028497556U;
	int16_t x402 = INT16_MIN;
	int32_t x403 = -1;
	uint8_t x404 = 2U;
	int32_t t100 = -7;

    t100 = ((x401>x402)&(x403>x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x405 = INT64_MIN;
	int32_t x406 = -1;
	static uint8_t x408 = 16U;
	volatile int32_t t101 = -166;

    t101 = ((x405>x406)&(x407>x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x410 = 9;
	int64_t x411 = INT64_MIN;
	int8_t x412 = -29;
	int32_t t102 = -7861;

    t102 = ((x409>x410)&(x411>x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = -6533;
	int32_t x414 = INT32_MIN;
	volatile int32_t x415 = -1240129;
	int32_t x416 = INT32_MIN;
	static int32_t t103 = 215619;

    t103 = ((x413>x414)&(x415>x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = INT32_MAX;
	int8_t x418 = INT8_MIN;
	volatile uint8_t x419 = UINT8_MAX;
	volatile int32_t x420 = -1;
	static int32_t t104 = 4;

    t104 = ((x417>x418)&(x419>x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x421 = -1LL;
	uint8_t x422 = UINT8_MAX;
	static uint8_t x423 = 5U;
	uint32_t x424 = 60496959U;
	static int32_t t105 = -48712823;

    t105 = ((x421>x422)&(x423>x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x425 = INT64_MIN;
	int64_t x426 = -1LL;
	volatile int64_t x427 = 55393912LL;
	int8_t x428 = INT8_MIN;
	volatile int32_t t106 = -199;

    t106 = ((x425>x426)&(x427>x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x430 = 0U;
	int32_t x432 = -26;
	int32_t t107 = -6114;

    t107 = ((x429>x430)&(x431>x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = -1LL;
	int16_t x435 = INT16_MIN;
	int32_t x436 = INT32_MIN;

    t108 = ((x433>x434)&(x435>x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = -16189853;
	volatile uint32_t x438 = 58U;
	int64_t x439 = INT64_MIN;
	static int64_t x440 = -121896748397812LL;
	static volatile int32_t t109 = -503822036;

    t109 = ((x437>x438)&(x439>x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x441 = 11363U;
	int64_t x442 = INT64_MAX;
	static int32_t x444 = -1;

    t110 = ((x441>x442)&(x443>x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = 36509880LL;
	volatile int64_t x446 = INT64_MIN;
	int8_t x447 = 0;
	int32_t t111 = 15;

    t111 = ((x445>x446)&(x447>x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x449 = UINT16_MAX;
	int16_t x450 = -1;
	uint64_t x451 = UINT64_MAX;
	int32_t x452 = -1;
	static int32_t t112 = 635478;

    t112 = ((x449>x450)&(x451>x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x453 = INT16_MIN;
	int16_t x454 = 1;
	volatile uint32_t x455 = UINT32_MAX;
	static volatile int32_t t113 = -337165843;

    t113 = ((x453>x454)&(x455>x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = -1;
	volatile int16_t x458 = 60;
	static int64_t x459 = 36142LL;
	int32_t x460 = INT32_MIN;
	volatile int32_t t114 = -3;

    t114 = ((x457>x458)&(x459>x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x461 = UINT16_MAX;
	static int64_t x462 = INT64_MAX;
	volatile int16_t x463 = INT16_MIN;

    t115 = ((x461>x462)&(x463>x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x465 = 41U;
	int16_t x466 = 4506;
	volatile int16_t x467 = INT16_MAX;
	volatile int32_t t116 = -13197;

    t116 = ((x465>x466)&(x467>x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x470 = 3U;
	int64_t x471 = 451625729LL;
	volatile int16_t x472 = INT16_MIN;
	volatile int32_t t117 = -478106645;

    t117 = ((x469>x470)&(x471>x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x473 = 86315356;
	volatile int16_t x474 = -1;
	volatile uint64_t x475 = UINT64_MAX;
	static int32_t x476 = -1;
	volatile int32_t t118 = -57;

    t118 = ((x473>x474)&(x475>x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint32_t x478 = 51454U;
	volatile int8_t x479 = INT8_MIN;
	volatile int32_t t119 = 50220;

    t119 = ((x477>x478)&(x479>x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x481 = 39791391LLU;
	uint8_t x484 = 1U;
	static volatile int32_t t120 = -2537;

    t120 = ((x481>x482)&(x483>x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x485 = 1LLU;
	int64_t x488 = INT64_MIN;
	volatile int32_t t121 = -3;

    t121 = ((x485>x486)&(x487>x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint8_t x489 = UINT8_MAX;
	int16_t x492 = INT16_MAX;
	volatile int32_t t122 = -14787;

    t122 = ((x489>x490)&(x491>x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x493 = 3U;
	volatile uint8_t x494 = UINT8_MAX;
	static volatile int64_t x496 = INT64_MIN;
	int32_t t123 = 0;

    t123 = ((x493>x494)&(x495>x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = 21;
	int64_t x500 = INT64_MAX;
	volatile int32_t t124 = 65111945;

    t124 = ((x497>x498)&(x499>x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x501 = INT16_MIN;
	static int32_t x502 = INT32_MIN;
	uint16_t x503 = 0U;
	static uint16_t x504 = 210U;
	int32_t t125 = 0;

    t125 = ((x501>x502)&(x503>x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = INT16_MAX;
	static uint8_t x506 = 2U;
	int8_t x508 = -1;
	volatile int32_t t126 = -1086;

    t126 = ((x505>x506)&(x507>x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = INT64_MIN;
	int16_t x510 = 4075;
	uint16_t x511 = 1431U;

    t127 = ((x509>x510)&(x511>x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x513 = INT8_MIN;
	int32_t x514 = INT32_MAX;
	static int64_t x515 = INT64_MAX;
	int64_t x516 = -1LL;
	volatile int32_t t128 = 1;

    t128 = ((x513>x514)&(x515>x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x517 = 6U;
	int64_t x518 = INT64_MIN;
	uint64_t x519 = 154579534105182LLU;
	uint32_t x520 = 176998U;

    t129 = ((x517>x518)&(x519>x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = INT32_MIN;
	static int8_t x523 = 28;
	static uint8_t x524 = 26U;
	volatile int32_t t130 = -5627;

    t130 = ((x521>x522)&(x523>x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x525 = INT64_MIN;
	volatile int8_t x526 = INT8_MIN;
	static int32_t x527 = -1;
	volatile uint64_t x528 = 6042370LLU;
	volatile int32_t t131 = -145751859;

    t131 = ((x525>x526)&(x527>x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = INT8_MIN;
	int64_t x531 = 55342836389235733LL;
	int32_t x532 = -1;
	static int32_t t132 = 61;

    t132 = ((x529>x530)&(x531>x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = INT8_MIN;
	int64_t x534 = INT64_MAX;
	static volatile int64_t x535 = INT64_MIN;
	int32_t x536 = INT32_MAX;
	int32_t t133 = 31;

    t133 = ((x533>x534)&(x535>x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x537 = 37U;
	uint16_t x538 = UINT16_MAX;
	static uint64_t x539 = 1459947LLU;
	volatile int32_t x540 = -1;
	volatile int32_t t134 = -44;

    t134 = ((x537>x538)&(x539>x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = -1;
	uint8_t x542 = 3U;
	int64_t x543 = INT64_MAX;
	static volatile int32_t x544 = -11;
	static volatile int32_t t135 = -103;

    t135 = ((x541>x542)&(x543>x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = INT64_MIN;
	volatile int8_t x546 = -1;
	int32_t x547 = 815214;
	uint8_t x548 = 25U;
	volatile int32_t t136 = -510510564;

    t136 = ((x545>x546)&(x547>x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x549 = 62962LLU;
	volatile int64_t x551 = 8586161320LL;
	int8_t x552 = -27;

    t137 = ((x549>x550)&(x551>x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = INT16_MAX;
	volatile int8_t x554 = -1;
	static int16_t x555 = 8;
	uint64_t x556 = 11683LLU;
	int32_t t138 = 52;

    t138 = ((x553>x554)&(x555>x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x557 = UINT8_MAX;
	static volatile int16_t x558 = INT16_MIN;
	int32_t x559 = INT32_MIN;
	static volatile int16_t x560 = 11489;
	static int32_t t139 = -11764;

    t139 = ((x557>x558)&(x559>x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x561 = INT64_MAX;
	uint64_t x564 = 1278050LLU;
	static volatile int32_t t140 = -58;

    t140 = ((x561>x562)&(x563>x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint32_t x565 = 24072U;
	int8_t x566 = INT8_MIN;
	int32_t t141 = -123;

    t141 = ((x565>x566)&(x567>x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x569 = INT64_MIN;
	int64_t x570 = -1818339944233933LL;
	int16_t x571 = -516;
	int16_t x572 = -212;
	volatile int32_t t142 = -156184863;

    t142 = ((x569>x570)&(x571>x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int64_t x573 = INT64_MAX;
	static int8_t x575 = INT8_MIN;
	int32_t x576 = INT32_MAX;
	volatile int32_t t143 = 73745;

    t143 = ((x573>x574)&(x575>x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = -1172420023270826485LL;
	static int32_t x578 = -400;
	uint16_t x579 = 0U;
	int32_t t144 = 17680097;

    t144 = ((x577>x578)&(x579>x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x581 = -1;
	uint8_t x582 = 3U;
	static int32_t x583 = -1;
	volatile int16_t x584 = INT16_MAX;
	int32_t t145 = 31;

    t145 = ((x581>x582)&(x583>x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x586 = UINT8_MAX;
	uint64_t x587 = 1259LLU;
	volatile int8_t x588 = -21;
	int32_t t146 = 944535;

    t146 = ((x585>x586)&(x587>x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = INT32_MIN;
	static int8_t x590 = INT8_MAX;
	int32_t x591 = -167;
	int32_t t147 = -1233;

    t147 = ((x589>x590)&(x591>x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x593 = UINT16_MAX;
	uint8_t x594 = UINT8_MAX;
	int8_t x595 = 15;

    t148 = ((x593>x594)&(x595>x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x597 = 11;
	static int16_t x598 = INT16_MAX;
	volatile uint64_t x599 = UINT64_MAX;
	uint32_t x600 = 6029212U;
	static volatile int32_t t149 = 66845495;

    t149 = ((x597>x598)&(x599>x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x601 = -968050589747894LL;
	int16_t x603 = INT16_MIN;
	static uint64_t x604 = UINT64_MAX;
	volatile int32_t t150 = 1081047;

    t150 = ((x601>x602)&(x603>x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = INT32_MAX;
	int8_t x606 = -1;
	static int16_t x607 = INT16_MIN;
	static int16_t x608 = INT16_MIN;
	volatile int32_t t151 = 11673;

    t151 = ((x605>x606)&(x607>x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = -1;
	uint16_t x610 = 68U;
	uint64_t x611 = UINT64_MAX;
	int32_t x612 = INT32_MIN;

    t152 = ((x609>x610)&(x611>x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x613 = -2348;
	static int32_t x614 = -1;
	int16_t x615 = INT16_MIN;
	int64_t x616 = INT64_MAX;
	volatile int32_t t153 = -989634;

    t153 = ((x613>x614)&(x615>x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x618 = 1;
	uint8_t x620 = 1U;
	int32_t t154 = 397;

    t154 = ((x617>x618)&(x619>x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x621 = INT8_MAX;
	int64_t x622 = -1LL;
	int32_t x623 = INT32_MIN;
	int8_t x624 = INT8_MAX;
	volatile int32_t t155 = -1026481;

    t155 = ((x621>x622)&(x623>x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x625 = UINT8_MAX;
	uint16_t x626 = UINT16_MAX;
	int16_t x628 = -1;
	static volatile int32_t t156 = -11894;

    t156 = ((x625>x626)&(x627>x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = INT16_MIN;
	int64_t x630 = -18LL;
	uint8_t x631 = UINT8_MAX;

    t157 = ((x629>x630)&(x631>x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = 138613LL;
	volatile int32_t x634 = INT32_MAX;
	int8_t x635 = -1;
	uint16_t x636 = UINT16_MAX;
	volatile int32_t t158 = 44;

    t158 = ((x633>x634)&(x635>x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x637 = INT32_MAX;
	static uint16_t x638 = 14U;
	static int64_t x639 = INT64_MIN;
	int32_t x640 = INT32_MIN;

    t159 = ((x637>x638)&(x639>x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = -1045829LL;
	int64_t x642 = INT64_MIN;
	int8_t x643 = 5;

    t160 = ((x641>x642)&(x643>x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x645 = -107;
	uint32_t x647 = UINT32_MAX;
	uint16_t x648 = UINT16_MAX;
	int32_t t161 = -20584902;

    t161 = ((x645>x646)&(x647>x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x649 = INT64_MAX;
	int32_t x650 = INT32_MAX;
	static int64_t x651 = INT64_MAX;
	int16_t x652 = INT16_MIN;
	volatile int32_t t162 = 996054;

    t162 = ((x649>x650)&(x651>x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = INT8_MAX;
	static uint32_t x654 = 6U;
	volatile uint64_t x655 = 3891800941400034544LLU;
	int64_t x656 = INT64_MIN;
	static int32_t t163 = -39;

    t163 = ((x653>x654)&(x655>x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = INT8_MIN;
	uint8_t x658 = 29U;
	int32_t x660 = INT32_MIN;
	static int32_t t164 = -1;

    t164 = ((x657>x658)&(x659>x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x661 = 346U;
	static int64_t x662 = -1LL;
	int32_t x663 = -1;
	volatile uint8_t x664 = UINT8_MAX;
	static int32_t t165 = -1969825;

    t165 = ((x661>x662)&(x663>x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = -9;
	volatile uint64_t x666 = 5807713289067480LLU;
	int16_t x667 = INT16_MIN;
	static uint64_t x668 = UINT64_MAX;
	int32_t t166 = 58106;

    t166 = ((x665>x666)&(x667>x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x670 = -1LL;
	volatile uint64_t x671 = 1393578604361274178LLU;
	int16_t x672 = 7;
	int32_t t167 = -365637;

    t167 = ((x669>x670)&(x671>x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = 52;
	int8_t x674 = -1;
	volatile uint64_t x676 = UINT64_MAX;

    t168 = ((x673>x674)&(x675>x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = 4;
	static volatile int8_t x678 = INT8_MIN;
	static uint64_t x679 = 21893882950413LLU;
	int8_t x680 = INT8_MIN;
	static int32_t t169 = 13;

    t169 = ((x677>x678)&(x679>x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = INT16_MAX;
	int64_t x682 = -1LL;
	static int8_t x683 = INT8_MIN;
	uint16_t x684 = UINT16_MAX;
	volatile int32_t t170 = 276476;

    t170 = ((x681>x682)&(x683>x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = INT32_MAX;
	static int32_t x686 = -966;
	static int16_t x687 = 216;
	static volatile int8_t x688 = -1;
	int32_t t171 = 7898254;

    t171 = ((x685>x686)&(x687>x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x689 = UINT64_MAX;
	volatile int32_t x691 = INT32_MIN;
	int8_t x692 = INT8_MAX;
	static volatile int32_t t172 = 1;

    t172 = ((x689>x690)&(x691>x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = 974956776966LL;
	int32_t x694 = -1;
	volatile uint16_t x695 = 900U;
	int32_t x696 = -12073;
	int32_t t173 = -927124729;

    t173 = ((x693>x694)&(x695>x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x697 = UINT16_MAX;
	int16_t x698 = 15;
	uint8_t x699 = 7U;
	int32_t t174 = 5475;

    t174 = ((x697>x698)&(x699>x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = INT32_MAX;
	static volatile int64_t x702 = 2587LL;
	int16_t x703 = INT16_MAX;
	uint8_t x704 = 86U;
	int32_t t175 = 57656;

    t175 = ((x701>x702)&(x703>x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x705 = 50U;
	static uint8_t x707 = 64U;
	volatile int32_t t176 = 454585;

    t176 = ((x705>x706)&(x707>x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x711 = 1;
	static volatile int16_t x712 = INT16_MIN;
	int32_t t177 = -7495;

    t177 = ((x709>x710)&(x711>x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = INT32_MIN;
	uint64_t x715 = 5870260LLU;
	volatile int8_t x716 = INT8_MAX;
	volatile int32_t t178 = -28965;

    t178 = ((x713>x714)&(x715>x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint16_t x717 = 1U;
	int8_t x719 = 15;
	volatile int32_t t179 = -120;

    t179 = ((x717>x718)&(x719>x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x721 = 0U;
	static int8_t x722 = -1;
	uint32_t x723 = 1908513099U;
	volatile int32_t t180 = 213779129;

    t180 = ((x721>x722)&(x723>x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x726 = INT8_MIN;
	uint64_t x727 = 56357827924LLU;
	volatile int32_t x728 = -1;
	volatile int32_t t181 = 1;

    t181 = ((x725>x726)&(x727>x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = INT64_MIN;
	uint64_t x730 = 148043302104367LLU;
	int64_t x731 = 7789990783680LL;
	int32_t x732 = -890422;
	static volatile int32_t t182 = 697096;

    t182 = ((x729>x730)&(x731>x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x733 = 1U;
	int16_t x734 = INT16_MAX;
	int64_t x736 = INT64_MAX;
	volatile int32_t t183 = 22904;

    t183 = ((x733>x734)&(x735>x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x738 = 810380LLU;
	int16_t x739 = INT16_MAX;
	uint32_t x740 = UINT32_MAX;
	volatile int32_t t184 = -11521;

    t184 = ((x737>x738)&(x739>x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x741 = INT64_MAX;
	int16_t x742 = INT16_MAX;
	int8_t x743 = INT8_MAX;
	volatile int32_t t185 = -4065;

    t185 = ((x741>x742)&(x743>x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = INT32_MAX;
	uint8_t x746 = UINT8_MAX;
	int32_t x747 = 1;
	volatile int32_t x748 = INT32_MIN;
	volatile int32_t t186 = 1887658;

    t186 = ((x745>x746)&(x747>x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x749 = 153;
	int32_t x750 = INT32_MIN;
	int16_t x751 = -1;
	int32_t x752 = -1;
	int32_t t187 = 5526;

    t187 = ((x749>x750)&(x751>x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x753 = 3U;
	int8_t x754 = -1;
	volatile int32_t t188 = 125065794;

    t188 = ((x753>x754)&(x755>x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x757 = 7908U;
	int16_t x758 = INT16_MIN;
	uint8_t x759 = 5U;
	static int32_t x760 = 10993;
	static int32_t t189 = 0;

    t189 = ((x757>x758)&(x759>x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x761 = 261U;
	static int32_t x762 = -239;
	int16_t x764 = 1;
	volatile int32_t t190 = -359960;

    t190 = ((x761>x762)&(x763>x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x766 = INT8_MAX;
	uint32_t x767 = 26U;
	volatile uint16_t x768 = UINT16_MAX;

    t191 = ((x765>x766)&(x767>x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = INT8_MIN;
	uint32_t x770 = 434125U;
	static int16_t x771 = 487;
	volatile int64_t x772 = 19256896LL;
	int32_t t192 = 52;

    t192 = ((x769>x770)&(x771>x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x773 = UINT64_MAX;
	int32_t x774 = INT32_MAX;
	uint32_t x775 = 202267U;
	volatile int32_t t193 = 57;

    t193 = ((x773>x774)&(x775>x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x778 = -46;
	int64_t x780 = 2284641968760149715LL;

    t194 = ((x777>x778)&(x779>x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint32_t x783 = UINT32_MAX;
	int16_t x784 = -5;
	static volatile int32_t t195 = 1;

    t195 = ((x781>x782)&(x783>x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = 1;
	int64_t x786 = INT64_MIN;
	int8_t x787 = INT8_MIN;
	uint8_t x788 = 1U;
	int32_t t196 = -405;

    t196 = ((x785>x786)&(x787>x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x789 = 2U;
	uint64_t x790 = UINT64_MAX;
	int16_t x792 = INT16_MAX;
	volatile int32_t t197 = -3096;

    t197 = ((x789>x790)&(x791>x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x794 = UINT8_MAX;
	int32_t x796 = -42190922;
	static volatile int32_t t198 = 700386;

    t198 = ((x793>x794)&(x795>x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x797 = UINT32_MAX;
	int8_t x798 = 37;
	volatile int32_t t199 = -107347038;

    t199 = ((x797>x798)&(x799>x800));

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

