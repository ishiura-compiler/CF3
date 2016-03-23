
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

uint8_t x5 = 11U;
uint8_t x7 = 43U;
int32_t x8 = 0;
int32_t t1 = -383611;
volatile uint8_t x13 = 98U;
int32_t x15 = -6150;
volatile int32_t t3 = 26298205;
int8_t x22 = INT8_MIN;
static volatile int8_t x30 = INT8_MAX;
uint8_t x38 = 3U;
int8_t x40 = INT8_MIN;
uint32_t x46 = UINT32_MAX;
volatile int32_t t8 = -939714;
volatile int16_t x58 = INT16_MAX;
uint16_t x60 = 7U;
static volatile int16_t x66 = INT16_MIN;
volatile int32_t x68 = INT32_MIN;
int32_t t13 = 788406145;
int32_t t14 = 3;
int32_t t17 = -219;
volatile int16_t x97 = INT16_MAX;
volatile int32_t x99 = -46114349;
volatile int32_t t20 = 44753;
volatile int64_t x113 = INT64_MIN;
static volatile int32_t t25 = 67013;
uint16_t x128 = UINT16_MAX;
int64_t x132 = INT64_MIN;
int16_t x137 = INT16_MIN;
int16_t x141 = -1;
int32_t t30 = 1;
uint64_t x145 = UINT64_MAX;
uint32_t x146 = 4U;
uint32_t x150 = UINT32_MAX;
static int16_t x153 = -1;
int16_t x157 = INT16_MIN;
volatile int32_t t34 = -777236;
static volatile int32_t x162 = -1;
volatile int16_t x168 = INT16_MAX;
volatile int32_t t36 = 2686;
int8_t x172 = INT8_MIN;
int64_t x176 = -48991409LL;
int32_t x181 = INT32_MIN;
int32_t x184 = -1;
int32_t t41 = 61919576;
volatile int8_t x194 = INT8_MAX;
int32_t x195 = -1;
volatile int32_t t45 = -16093;
static volatile int32_t t46 = 10279;
int32_t x215 = INT32_MIN;
int8_t x218 = INT8_MIN;
int8_t x224 = -42;
volatile int32_t t49 = 958011855;
uint32_t x227 = UINT32_MAX;
volatile int32_t t50 = 5093;
uint64_t x230 = 2065086LLU;
uint32_t x235 = UINT32_MAX;
volatile int32_t t52 = -27489237;
volatile int8_t x260 = -1;
int16_t x273 = INT16_MIN;
uint16_t x279 = 1U;
static int32_t x280 = -3;
static volatile int32_t t62 = -7;
volatile uint64_t x283 = 1140128491983795953LLU;
int32_t t66 = 97534;
static int16_t x297 = INT16_MAX;
uint8_t x299 = 3U;
volatile int32_t t68 = -2860;
volatile int32_t t70 = -738328;
volatile int8_t x314 = -1;
volatile int32_t x317 = -181;
int8_t x318 = INT8_MAX;
static int16_t x319 = INT16_MIN;
int8_t x325 = -35;
int8_t x331 = -3;
int32_t t75 = -15735;
int16_t x336 = INT16_MIN;
static int32_t t77 = -13368738;
int8_t x343 = INT8_MIN;
int32_t x344 = -1;
int32_t t79 = 1235623;
volatile int64_t x359 = 93036LL;
int32_t t81 = 48;
int8_t x363 = -1;
static int32_t x364 = -3;
static uint8_t x366 = 0U;
int32_t t83 = 11;
volatile int32_t t84 = 145875;
static int8_t x382 = INT8_MIN;
volatile int16_t x388 = -23;
int32_t t88 = 901437;
static uint32_t x410 = UINT32_MAX;
int16_t x414 = INT16_MIN;
uint32_t x417 = 59U;
volatile int32_t t95 = -40206;
uint64_t x426 = UINT64_MAX;
static int32_t t98 = 7431;
int32_t x443 = -7;
uint16_t x444 = 175U;
static volatile int32_t t101 = 16382;
int16_t x448 = INT16_MIN;
int32_t t102 = 249754;
static int64_t x470 = 29208004181LL;
int8_t x472 = INT8_MIN;
volatile uint64_t x478 = 66433682LLU;
static int8_t x484 = INT8_MIN;
volatile int32_t t110 = -31855468;
static volatile int8_t x491 = -1;
static int32_t x507 = -696270;
int32_t x508 = INT32_MAX;
uint8_t x509 = UINT8_MAX;
static int64_t x522 = -3138691099214024LL;
int16_t x525 = -10;
static uint64_t x529 = 108738639625082LLU;
volatile int8_t x530 = INT8_MIN;
int32_t x533 = INT32_MIN;
uint8_t x539 = 1U;
volatile int8_t x541 = -22;
static uint64_t x542 = 8230970LLU;
volatile int32_t t124 = 0;
int16_t x547 = 0;
int16_t x551 = 23;
int32_t x559 = INT32_MIN;
volatile int32_t t128 = 1079;
static uint64_t x565 = UINT64_MAX;
uint64_t x574 = 1003328323857623795LLU;
static volatile int16_t x575 = INT16_MIN;
uint16_t x578 = 1U;
int64_t x585 = -1LL;
volatile int32_t t135 = -116;
int64_t x589 = -1LL;
static int64_t x599 = INT64_MIN;
volatile int32_t t138 = -1;
volatile int64_t x612 = INT64_MAX;
volatile int32_t t141 = -1832;
volatile uint32_t x621 = UINT32_MAX;
uint64_t x623 = 3182583252LLU;
volatile int32_t x625 = INT32_MAX;
static uint32_t x634 = 8337U;
static int8_t x637 = INT8_MAX;
int32_t t146 = 816278;
static int64_t x648 = -1LL;
volatile int32_t t150 = 6979;
uint32_t x658 = 728U;
int64_t x664 = -3295LL;
int32_t x687 = -1;
static int16_t x694 = 3;
static uint16_t x703 = 886U;
volatile int32_t t161 = -37568;
uint16_t x714 = 1451U;
static volatile int8_t x716 = INT8_MIN;
int32_t x724 = 234;
static int16_t x725 = -1;
int32_t t165 = 62241;
int64_t x729 = INT64_MIN;
volatile int64_t x732 = 3035LL;
int8_t x737 = -1;
volatile int32_t t168 = -1;
uint64_t x748 = 1LLU;
volatile int8_t x751 = 40;
int16_t x752 = 6;
static int32_t t170 = -401587;
volatile int16_t x755 = -28;
static uint16_t x756 = 0U;
volatile int16_t x757 = INT16_MIN;
int16_t x760 = INT16_MAX;
static uint64_t x764 = UINT64_MAX;
uint8_t x767 = 40U;
int16_t x772 = INT16_MIN;
volatile int16_t x777 = 235;
uint16_t x787 = UINT16_MAX;
volatile uint16_t x788 = 112U;
int16_t x797 = -1;
int32_t t184 = 7;
int32_t x824 = -1;
int16_t x831 = 804;
volatile int32_t x833 = INT32_MIN;
uint64_t x836 = 628037LLU;
int32_t t189 = 38011495;
int8_t x841 = INT8_MIN;
volatile int8_t x846 = INT8_MIN;
static int64_t x850 = INT64_MIN;
volatile int32_t t195 = 25100089;
static volatile int32_t x864 = INT32_MIN;
static volatile int32_t t198 = -15805;
static int32_t x877 = -1;


void f0(void) {
    	uint32_t x6 = 3179U;
	int32_t t0 = 129603;

    t0 = ((x5-x6)!=(x7>x8));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x9 = 60;
	int16_t x10 = INT16_MIN;
	static int64_t x11 = -5LL;
	uint16_t x12 = 1U;

    t1 = ((x9-x10)!=(x11>x12));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x14 = UINT8_MAX;
	static int16_t x16 = -1;
	volatile int32_t t2 = -29083057;

    t2 = ((x13-x14)!=(x15>x16));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x17 = -1;
	uint64_t x18 = UINT64_MAX;
	static int32_t x19 = INT32_MIN;
	int32_t x20 = -2521;

    t3 = ((x17-x18)!=(x19>x20));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x21 = INT16_MIN;
	int32_t x23 = INT32_MIN;
	static int8_t x24 = -1;
	volatile int32_t t4 = 27220;

    t4 = ((x21-x22)!=(x23>x24));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x29 = INT8_MIN;
	uint8_t x31 = UINT8_MAX;
	volatile uint32_t x32 = 15034U;
	static volatile int32_t t5 = 61875;

    t5 = ((x29-x30)!=(x31>x32));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x33 = UINT16_MAX;
	int16_t x34 = INT16_MIN;
	static uint16_t x35 = 906U;
	int16_t x36 = INT16_MAX;
	int32_t t6 = -8794;

    t6 = ((x33-x34)!=(x35>x36));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x37 = INT16_MIN;
	uint64_t x39 = 16092190LLU;
	volatile int32_t t7 = 184;

    t7 = ((x37-x38)!=(x39>x40));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x45 = INT32_MIN;
	int16_t x47 = -1;
	uint64_t x48 = UINT64_MAX;

    t8 = ((x45-x46)!=(x47>x48));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x49 = -198;
	static int16_t x50 = -1;
	static uint64_t x51 = 3897613LLU;
	int64_t x52 = 3914743067380369LL;
	int32_t t9 = 4832;

    t9 = ((x49-x50)!=(x51>x52));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x53 = -1;
	volatile uint32_t x54 = 7163701U;
	uint64_t x55 = 14303163110879LLU;
	uint32_t x56 = 4128105U;
	volatile int32_t t10 = -38887723;

    t10 = ((x53-x54)!=(x55>x56));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x57 = -1;
	int32_t x59 = -12543122;
	volatile int32_t t11 = -15750;

    t11 = ((x57-x58)!=(x59>x60));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x61 = 200183042986851191LL;
	int32_t x62 = INT32_MAX;
	uint8_t x63 = 0U;
	volatile int16_t x64 = 8014;
	volatile int32_t t12 = 78;

    t12 = ((x61-x62)!=(x63>x64));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x65 = INT16_MAX;
	int32_t x67 = -58508;

    t13 = ((x65-x66)!=(x67>x68));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x69 = 0;
	uint16_t x70 = 39U;
	int32_t x71 = -1;
	int8_t x72 = INT8_MIN;

    t14 = ((x69-x70)!=(x71>x72));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x73 = INT16_MIN;
	static uint32_t x74 = 718169498U;
	int16_t x75 = -5026;
	int8_t x76 = INT8_MIN;
	volatile int32_t t15 = 11;

    t15 = ((x73-x74)!=(x75>x76));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint16_t x81 = 8712U;
	static volatile int16_t x82 = 0;
	uint32_t x83 = 1595896678U;
	int32_t x84 = INT32_MAX;
	volatile int32_t t16 = 29807;

    t16 = ((x81-x82)!=(x83>x84));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x85 = INT16_MIN;
	int8_t x86 = INT8_MIN;
	static uint8_t x87 = 3U;
	static int16_t x88 = -5;

    t17 = ((x85-x86)!=(x87>x88));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x89 = INT32_MAX;
	uint16_t x90 = 5U;
	int32_t x91 = -7273;
	static uint16_t x92 = 1638U;
	static int32_t t18 = 82637;

    t18 = ((x89-x90)!=(x91>x92));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint16_t x93 = 568U;
	uint8_t x94 = 56U;
	uint32_t x95 = 3386901U;
	int8_t x96 = INT8_MIN;
	int32_t t19 = 114576140;

    t19 = ((x93-x94)!=(x95>x96));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x98 = UINT64_MAX;
	int8_t x100 = 2;

    t20 = ((x97-x98)!=(x99>x100));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x101 = UINT32_MAX;
	int32_t x102 = -1;
	volatile int32_t x103 = INT32_MAX;
	uint32_t x104 = 55U;
	volatile int32_t t21 = 92176;

    t21 = ((x101-x102)!=(x103>x104));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x105 = 7533U;
	static volatile uint32_t x106 = 181699U;
	uint16_t x107 = 58U;
	uint32_t x108 = UINT32_MAX;
	int32_t t22 = -586573;

    t22 = ((x105-x106)!=(x107>x108));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x109 = 98195506U;
	int32_t x110 = INT32_MAX;
	volatile uint16_t x111 = UINT16_MAX;
	uint8_t x112 = 0U;
	static int32_t t23 = -113033;

    t23 = ((x109-x110)!=(x111>x112));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x114 = INT16_MIN;
	int32_t x115 = 9451;
	static volatile int32_t x116 = 126157;
	static int32_t t24 = 2724;

    t24 = ((x113-x114)!=(x115>x116));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x117 = -1;
	int32_t x118 = INT32_MAX;
	uint16_t x119 = 514U;
	uint8_t x120 = UINT8_MAX;

    t25 = ((x117-x118)!=(x119>x120));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x121 = UINT8_MAX;
	int8_t x122 = INT8_MIN;
	int64_t x123 = INT64_MAX;
	uint64_t x124 = 52102063LLU;
	volatile int32_t t26 = 78233027;

    t26 = ((x121-x122)!=(x123>x124));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint32_t x125 = 663476U;
	int16_t x126 = 282;
	uint16_t x127 = UINT16_MAX;
	int32_t t27 = -11944187;

    t27 = ((x125-x126)!=(x127>x128));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x129 = INT16_MAX;
	static uint64_t x130 = UINT64_MAX;
	uint64_t x131 = 18846053025032222LLU;
	static int32_t t28 = 1100459;

    t28 = ((x129-x130)!=(x131>x132));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x138 = -12942948LL;
	volatile uint8_t x139 = 123U;
	int32_t x140 = INT32_MIN;
	static int32_t t29 = -1;

    t29 = ((x137-x138)!=(x139>x140));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x142 = INT64_MIN;
	static int32_t x143 = 26;
	uint8_t x144 = 6U;

    t30 = ((x141-x142)!=(x143>x144));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x147 = 738884907U;
	int64_t x148 = INT64_MIN;
	volatile int32_t t31 = 216;

    t31 = ((x145-x146)!=(x147>x148));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x149 = -458LL;
	int16_t x151 = -1;
	uint16_t x152 = 110U;
	int32_t t32 = 0;

    t32 = ((x149-x150)!=(x151>x152));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x154 = -1;
	int8_t x155 = -9;
	volatile int8_t x156 = INT8_MAX;
	int32_t t33 = 5779;

    t33 = ((x153-x154)!=(x155>x156));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x158 = UINT8_MAX;
	int8_t x159 = -16;
	static uint64_t x160 = 128156965482LLU;

    t34 = ((x157-x158)!=(x159>x160));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x161 = INT64_MIN;
	volatile int64_t x163 = INT64_MIN;
	static int16_t x164 = INT16_MAX;
	volatile int32_t t35 = -41594883;

    t35 = ((x161-x162)!=(x163>x164));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x165 = -9238;
	uint64_t x166 = 12LLU;
	volatile int32_t x167 = INT32_MIN;

    t36 = ((x165-x166)!=(x167>x168));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x169 = INT32_MIN;
	int32_t x170 = -162284;
	int16_t x171 = 1;
	static int32_t t37 = -2371081;

    t37 = ((x169-x170)!=(x171>x172));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x173 = INT64_MAX;
	static int16_t x174 = INT16_MAX;
	int16_t x175 = -1;
	int32_t t38 = 127;

    t38 = ((x173-x174)!=(x175>x176));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x177 = 2;
	static uint32_t x178 = 16U;
	static int32_t x179 = -6514;
	int32_t x180 = -14;
	static int32_t t39 = 14172;

    t39 = ((x177-x178)!=(x179>x180));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x182 = INT16_MIN;
	int64_t x183 = -27941767LL;
	volatile int32_t t40 = -2;

    t40 = ((x181-x182)!=(x183>x184));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile uint64_t x185 = 7178917LLU;
	int16_t x186 = INT16_MIN;
	uint16_t x187 = 1U;
	volatile int32_t x188 = 52336200;

    t41 = ((x185-x186)!=(x187>x188));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x189 = -1LL;
	static int32_t x190 = -1;
	int32_t x191 = -73;
	int32_t x192 = INT32_MIN;
	volatile int32_t t42 = -4;

    t42 = ((x189-x190)!=(x191>x192));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x193 = -1LL;
	int32_t x196 = -1;
	volatile int32_t t43 = -21020;

    t43 = ((x193-x194)!=(x195>x196));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x197 = INT8_MAX;
	int32_t x198 = -1;
	int8_t x199 = -1;
	int16_t x200 = INT16_MAX;
	volatile int32_t t44 = 1;

    t44 = ((x197-x198)!=(x199>x200));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x201 = 202256U;
	uint64_t x202 = 1668849721805425LLU;
	static int8_t x203 = INT8_MIN;
	int8_t x204 = 2;

    t45 = ((x201-x202)!=(x203>x204));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x205 = INT8_MIN;
	int8_t x206 = INT8_MIN;
	int64_t x207 = -8751690388358297LL;
	volatile uint8_t x208 = UINT8_MAX;

    t46 = ((x205-x206)!=(x207>x208));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x213 = 43;
	uint64_t x214 = 673639LLU;
	uint64_t x216 = 307918375797LLU;
	volatile int32_t t47 = -211;

    t47 = ((x213-x214)!=(x215>x216));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x217 = 575U;
	int16_t x219 = -1;
	volatile uint8_t x220 = 6U;
	int32_t t48 = -1166;

    t48 = ((x217-x218)!=(x219>x220));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x221 = -397;
	int32_t x222 = INT32_MIN;
	uint32_t x223 = UINT32_MAX;

    t49 = ((x221-x222)!=(x223>x224));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x225 = 207158U;
	uint64_t x226 = UINT64_MAX;
	static uint16_t x228 = 5791U;

    t50 = ((x225-x226)!=(x227>x228));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x229 = -1;
	int64_t x231 = -1LL;
	int64_t x232 = -14LL;
	int32_t t51 = -443865;

    t51 = ((x229-x230)!=(x231>x232));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x233 = -1LL;
	uint32_t x234 = 1U;
	int8_t x236 = INT8_MIN;

    t52 = ((x233-x234)!=(x235>x236));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x237 = UINT16_MAX;
	int16_t x238 = INT16_MAX;
	uint64_t x239 = 300486914539317LLU;
	int16_t x240 = INT16_MIN;
	int32_t t53 = 7497;

    t53 = ((x237-x238)!=(x239>x240));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x241 = 2093;
	int32_t x242 = INT32_MAX;
	int32_t x243 = INT32_MAX;
	uint32_t x244 = 1516U;
	volatile int32_t t54 = 2;

    t54 = ((x241-x242)!=(x243>x244));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x245 = -671039LL;
	static uint8_t x246 = 20U;
	static volatile uint8_t x247 = 8U;
	int8_t x248 = INT8_MAX;
	int32_t t55 = -23010;

    t55 = ((x245-x246)!=(x247>x248));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x249 = 248170157601LL;
	int64_t x250 = INT64_MAX;
	int64_t x251 = 1311LL;
	volatile int32_t x252 = -1;
	static volatile int32_t t56 = 150;

    t56 = ((x249-x250)!=(x251>x252));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x253 = 221;
	volatile int16_t x254 = -1;
	int64_t x255 = -1LL;
	static uint64_t x256 = UINT64_MAX;
	volatile int32_t t57 = -423155727;

    t57 = ((x253-x254)!=(x255>x256));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int16_t x257 = -4;
	uint16_t x258 = 3U;
	int32_t x259 = INT32_MIN;
	static int32_t t58 = -5321;

    t58 = ((x257-x258)!=(x259>x260));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x265 = 8829;
	int8_t x266 = INT8_MAX;
	static int16_t x267 = INT16_MIN;
	uint32_t x268 = 27706U;
	static int32_t t59 = -222540433;

    t59 = ((x265-x266)!=(x267>x268));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x269 = 1U;
	static volatile uint32_t x270 = 34320096U;
	int64_t x271 = -1LL;
	uint32_t x272 = 5445U;
	int32_t t60 = 5235;

    t60 = ((x269-x270)!=(x271>x272));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x274 = -1;
	volatile uint16_t x275 = 0U;
	int32_t x276 = INT32_MIN;
	static int32_t t61 = -15111270;

    t61 = ((x273-x274)!=(x275>x276));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x277 = INT32_MIN;
	uint32_t x278 = 33U;

    t62 = ((x277-x278)!=(x279>x280));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x281 = -28;
	int8_t x282 = INT8_MIN;
	uint8_t x284 = 0U;
	volatile int32_t t63 = 6373;

    t63 = ((x281-x282)!=(x283>x284));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x285 = INT16_MIN;
	int8_t x286 = INT8_MAX;
	uint16_t x287 = 1614U;
	static int32_t x288 = INT32_MAX;
	volatile int32_t t64 = 6831;

    t64 = ((x285-x286)!=(x287>x288));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x289 = -1LL;
	int16_t x290 = -1;
	int16_t x291 = INT16_MIN;
	int8_t x292 = 0;
	volatile int32_t t65 = 947910618;

    t65 = ((x289-x290)!=(x291>x292));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x293 = 26U;
	static int8_t x294 = -1;
	uint64_t x295 = 117722620359774666LLU;
	int8_t x296 = INT8_MAX;

    t66 = ((x293-x294)!=(x295>x296));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x298 = 18224U;
	int64_t x300 = -304120721285075LL;
	static int32_t t67 = 495767964;

    t67 = ((x297-x298)!=(x299>x300));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int8_t x301 = INT8_MAX;
	uint64_t x302 = 34LLU;
	int16_t x303 = INT16_MIN;
	volatile int32_t x304 = -1;

    t68 = ((x301-x302)!=(x303>x304));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x305 = 57041425769LLU;
	static int64_t x306 = INT64_MAX;
	int16_t x307 = 0;
	int16_t x308 = INT16_MIN;
	static int32_t t69 = -20481;

    t69 = ((x305-x306)!=(x307>x308));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x309 = 0U;
	uint16_t x310 = 7706U;
	volatile int64_t x311 = INT64_MIN;
	int64_t x312 = INT64_MIN;

    t70 = ((x309-x310)!=(x311>x312));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x313 = -570703082;
	volatile uint32_t x315 = 141213136U;
	uint8_t x316 = UINT8_MAX;
	int32_t t71 = -3409;

    t71 = ((x313-x314)!=(x315>x316));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x320 = -182;
	volatile int32_t t72 = 240561;

    t72 = ((x317-x318)!=(x319>x320));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x321 = INT16_MIN;
	int16_t x322 = INT16_MIN;
	volatile uint16_t x323 = UINT16_MAX;
	static volatile uint32_t x324 = 243U;
	int32_t t73 = 10929;

    t73 = ((x321-x322)!=(x323>x324));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x326 = -156903024338LL;
	int8_t x327 = -1;
	int8_t x328 = 0;
	int32_t t74 = 111139;

    t74 = ((x325-x326)!=(x327>x328));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x329 = -1;
	static uint8_t x330 = 19U;
	volatile int32_t x332 = INT32_MIN;

    t75 = ((x329-x330)!=(x331>x332));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint64_t x333 = UINT64_MAX;
	uint8_t x334 = 0U;
	volatile uint64_t x335 = 3458802893LLU;
	static volatile int32_t t76 = 15394;

    t76 = ((x333-x334)!=(x335>x336));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x337 = INT16_MIN;
	int16_t x338 = INT16_MIN;
	uint8_t x339 = 7U;
	int32_t x340 = INT32_MAX;

    t77 = ((x337-x338)!=(x339>x340));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x341 = -1;
	int16_t x342 = INT16_MIN;
	volatile int32_t t78 = 93377597;

    t78 = ((x341-x342)!=(x343>x344));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x349 = INT64_MAX;
	uint8_t x350 = UINT8_MAX;
	int8_t x351 = INT8_MIN;
	static uint8_t x352 = 1U;

    t79 = ((x349-x350)!=(x351>x352));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x353 = -1LL;
	uint64_t x354 = 2LLU;
	uint8_t x355 = 0U;
	int64_t x356 = INT64_MIN;
	int32_t t80 = 167433747;

    t80 = ((x353-x354)!=(x355>x356));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x357 = 8475497486LL;
	volatile int8_t x358 = INT8_MIN;
	int64_t x360 = 2094652583806947158LL;

    t81 = ((x357-x358)!=(x359>x360));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x361 = 14U;
	int16_t x362 = INT16_MIN;
	volatile int32_t t82 = 79;

    t82 = ((x361-x362)!=(x363>x364));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x365 = 0;
	int32_t x367 = INT32_MIN;
	uint8_t x368 = 13U;

    t83 = ((x365-x366)!=(x367>x368));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x369 = 11453LLU;
	int8_t x370 = -1;
	int8_t x371 = INT8_MAX;
	volatile int8_t x372 = 5;

    t84 = ((x369-x370)!=(x371>x372));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x373 = INT8_MIN;
	int16_t x374 = -24;
	int64_t x375 = INT64_MAX;
	volatile int8_t x376 = -47;
	int32_t t85 = 0;

    t85 = ((x373-x374)!=(x375>x376));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint64_t x377 = 245221322148729LLU;
	uint16_t x378 = 2253U;
	int8_t x379 = -1;
	int32_t x380 = INT32_MIN;
	int32_t t86 = 60;

    t86 = ((x377-x378)!=(x379>x380));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x381 = 86LLU;
	int64_t x383 = INT64_MIN;
	int32_t x384 = INT32_MIN;
	static volatile int32_t t87 = -7248;

    t87 = ((x381-x382)!=(x383>x384));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x385 = -1;
	int8_t x386 = INT8_MIN;
	int16_t x387 = 1;

    t88 = ((x385-x386)!=(x387>x388));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x389 = -1;
	volatile int32_t x390 = -7601;
	volatile int64_t x391 = -1LL;
	int16_t x392 = -1;
	int32_t t89 = 1021;

    t89 = ((x389-x390)!=(x391>x392));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x393 = -2977;
	volatile uint64_t x394 = UINT64_MAX;
	int8_t x395 = -1;
	volatile int8_t x396 = INT8_MIN;
	volatile int32_t t90 = 221763;

    t90 = ((x393-x394)!=(x395>x396));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x397 = UINT64_MAX;
	uint16_t x398 = 15U;
	static int16_t x399 = INT16_MIN;
	volatile int8_t x400 = 2;
	int32_t t91 = -117;

    t91 = ((x397-x398)!=(x399>x400));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x401 = -6793;
	int8_t x402 = -1;
	int16_t x403 = -1;
	uint16_t x404 = UINT16_MAX;
	static int32_t t92 = 0;

    t92 = ((x401-x402)!=(x403>x404));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x409 = INT32_MIN;
	int32_t x411 = 53565191;
	int16_t x412 = 1;
	int32_t t93 = -7945757;

    t93 = ((x409-x410)!=(x411>x412));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x413 = INT16_MAX;
	volatile int8_t x415 = INT8_MIN;
	volatile uint32_t x416 = 299966012U;
	volatile int32_t t94 = 423;

    t94 = ((x413-x414)!=(x415>x416));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x418 = INT64_MAX;
	uint64_t x419 = UINT64_MAX;
	int8_t x420 = INT8_MIN;

    t95 = ((x417-x418)!=(x419>x420));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x421 = UINT16_MAX;
	int64_t x422 = INT64_MAX;
	static volatile int32_t x423 = -1;
	static uint8_t x424 = 52U;
	int32_t t96 = 303;

    t96 = ((x421-x422)!=(x423>x424));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint8_t x425 = 7U;
	int16_t x427 = -1;
	static uint8_t x428 = 3U;
	int32_t t97 = -3;

    t97 = ((x425-x426)!=(x427>x428));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x429 = INT32_MIN;
	int16_t x430 = INT16_MIN;
	uint16_t x431 = UINT16_MAX;
	uint64_t x432 = 1LLU;

    t98 = ((x429-x430)!=(x431>x432));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint16_t x433 = 0U;
	int32_t x434 = -1497733;
	int64_t x435 = INT64_MIN;
	static volatile uint32_t x436 = 31099133U;
	int32_t t99 = -1426;

    t99 = ((x433-x434)!=(x435>x436));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x437 = INT16_MIN;
	uint32_t x438 = UINT32_MAX;
	int16_t x439 = INT16_MIN;
	int64_t x440 = -1LL;
	int32_t t100 = 3751659;

    t100 = ((x437-x438)!=(x439>x440));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x441 = -876;
	uint64_t x442 = UINT64_MAX;

    t101 = ((x441-x442)!=(x443>x444));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x445 = -1;
	int8_t x446 = INT8_MIN;
	int32_t x447 = INT32_MAX;

    t102 = ((x445-x446)!=(x447>x448));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x449 = UINT64_MAX;
	int16_t x450 = INT16_MIN;
	volatile uint32_t x451 = 114384U;
	int16_t x452 = INT16_MIN;
	volatile int32_t t103 = 149352;

    t103 = ((x449-x450)!=(x451>x452));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint32_t x457 = 0U;
	int32_t x458 = 3581606;
	int16_t x459 = INT16_MIN;
	uint8_t x460 = 13U;
	int32_t t104 = -1960071;

    t104 = ((x457-x458)!=(x459>x460));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x461 = -4LL;
	int64_t x462 = INT64_MIN;
	int32_t x463 = -1;
	static uint16_t x464 = UINT16_MAX;
	int32_t t105 = 5182;

    t105 = ((x461-x462)!=(x463>x464));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x465 = 182U;
	static int16_t x466 = INT16_MAX;
	uint32_t x467 = 3403U;
	int16_t x468 = 19;
	volatile int32_t t106 = -723694;

    t106 = ((x465-x466)!=(x467>x468));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x469 = UINT64_MAX;
	int16_t x471 = -1;
	int32_t t107 = -4;

    t107 = ((x469-x470)!=(x471>x472));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x477 = 280U;
	static int32_t x479 = INT32_MIN;
	static uint8_t x480 = 69U;
	volatile int32_t t108 = 78090;

    t108 = ((x477-x478)!=(x479>x480));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x481 = 395742LLU;
	uint64_t x482 = 889535760729168LLU;
	uint64_t x483 = 48221244190LLU;
	int32_t t109 = -1207;

    t109 = ((x481-x482)!=(x483>x484));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x485 = -1;
	int64_t x486 = INT64_MIN;
	static int16_t x487 = 1560;
	uint8_t x488 = 30U;

    t110 = ((x485-x486)!=(x487>x488));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x489 = INT64_MAX;
	static uint32_t x490 = 12107U;
	uint8_t x492 = 15U;
	static int32_t t111 = 18156939;

    t111 = ((x489-x490)!=(x491>x492));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x493 = 189298227248913LL;
	uint16_t x494 = 708U;
	int8_t x495 = 0;
	static int8_t x496 = -1;
	static volatile int32_t t112 = -2243;

    t112 = ((x493-x494)!=(x495>x496));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x497 = 3U;
	static volatile uint64_t x498 = 2744LLU;
	static uint16_t x499 = 0U;
	int8_t x500 = INT8_MIN;
	volatile int32_t t113 = -16035323;

    t113 = ((x497-x498)!=(x499>x500));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x501 = INT64_MIN;
	int64_t x502 = INT64_MIN;
	static int32_t x503 = 36446289;
	volatile uint64_t x504 = UINT64_MAX;
	volatile int32_t t114 = 15994523;

    t114 = ((x501-x502)!=(x503>x504));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x505 = -1;
	int8_t x506 = 1;
	volatile int32_t t115 = -1;

    t115 = ((x505-x506)!=(x507>x508));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x510 = UINT64_MAX;
	uint16_t x511 = 0U;
	int8_t x512 = INT8_MIN;
	int32_t t116 = 114;

    t116 = ((x509-x510)!=(x511>x512));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x513 = 12112U;
	uint32_t x514 = UINT32_MAX;
	volatile int64_t x515 = -1LL;
	int64_t x516 = -1LL;
	int32_t t117 = 481922782;

    t117 = ((x513-x514)!=(x515>x516));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x517 = INT16_MAX;
	volatile int16_t x518 = -842;
	uint32_t x519 = 13860979U;
	volatile int64_t x520 = 264545012874567466LL;
	int32_t t118 = 280177;

    t118 = ((x517-x518)!=(x519>x520));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x521 = -1LL;
	volatile uint32_t x523 = 52891U;
	static int16_t x524 = INT16_MIN;
	volatile int32_t t119 = -161057;

    t119 = ((x521-x522)!=(x523>x524));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x526 = -1;
	volatile uint64_t x527 = 80028LLU;
	static int16_t x528 = 5997;
	volatile int32_t t120 = -50568;

    t120 = ((x525-x526)!=(x527>x528));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x531 = INT8_MIN;
	int64_t x532 = -526957085LL;
	static volatile int32_t t121 = -121;

    t121 = ((x529-x530)!=(x531>x532));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x534 = INT32_MIN;
	int64_t x535 = 4347775874088722383LL;
	int8_t x536 = 1;
	int32_t t122 = -294503883;

    t122 = ((x533-x534)!=(x535>x536));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x537 = -1;
	static uint32_t x538 = 11743443U;
	uint64_t x540 = 8309149719LLU;
	volatile int32_t t123 = 4679163;

    t123 = ((x537-x538)!=(x539>x540));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x543 = UINT64_MAX;
	uint32_t x544 = 20898586U;

    t124 = ((x541-x542)!=(x543>x544));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x545 = UINT8_MAX;
	static int8_t x546 = INT8_MAX;
	volatile uint16_t x548 = 16178U;
	int32_t t125 = 18;

    t125 = ((x545-x546)!=(x547>x548));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x549 = 1412918604U;
	uint8_t x550 = 88U;
	static volatile int32_t x552 = INT32_MIN;
	volatile int32_t t126 = 2;

    t126 = ((x549-x550)!=(x551>x552));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x553 = INT16_MAX;
	int8_t x554 = -1;
	int8_t x555 = 12;
	uint16_t x556 = 43U;
	volatile int32_t t127 = -1;

    t127 = ((x553-x554)!=(x555>x556));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x557 = INT64_MAX;
	int8_t x558 = 1;
	uint16_t x560 = 2234U;

    t128 = ((x557-x558)!=(x559>x560));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint64_t x561 = 0LLU;
	volatile uint16_t x562 = 92U;
	volatile uint8_t x563 = 5U;
	static int8_t x564 = 3;
	volatile int32_t t129 = -1502714;

    t129 = ((x561-x562)!=(x563>x564));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x566 = -1;
	int16_t x567 = INT16_MIN;
	int64_t x568 = -3322757LL;
	int32_t t130 = 1;

    t130 = ((x565-x566)!=(x567>x568));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x569 = UINT32_MAX;
	int8_t x570 = INT8_MAX;
	uint16_t x571 = 3U;
	static volatile int64_t x572 = -1LL;
	volatile int32_t t131 = -1;

    t131 = ((x569-x570)!=(x571>x572));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x573 = 1792U;
	uint32_t x576 = 1U;
	int32_t t132 = 5806;

    t132 = ((x573-x574)!=(x575>x576));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x577 = INT8_MAX;
	int32_t x579 = -1;
	static volatile int16_t x580 = INT16_MIN;
	volatile int32_t t133 = -987486;

    t133 = ((x577-x578)!=(x579>x580));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x581 = INT8_MIN;
	int32_t x582 = INT32_MIN;
	volatile int32_t x583 = INT32_MIN;
	volatile uint16_t x584 = 0U;
	int32_t t134 = -1838;

    t134 = ((x581-x582)!=(x583>x584));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x586 = -1LL;
	int8_t x587 = INT8_MIN;
	volatile int8_t x588 = INT8_MIN;

    t135 = ((x585-x586)!=(x587>x588));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x590 = UINT8_MAX;
	uint32_t x591 = 1U;
	volatile int32_t x592 = 10899;
	int32_t t136 = -163374;

    t136 = ((x589-x590)!=(x591>x592));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x593 = INT8_MIN;
	volatile int8_t x594 = INT8_MIN;
	volatile int32_t x595 = -20;
	static uint64_t x596 = 169136865LLU;
	int32_t t137 = 215738313;

    t137 = ((x593-x594)!=(x595>x596));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x597 = 844405U;
	volatile int32_t x598 = -1;
	static int16_t x600 = INT16_MIN;

    t138 = ((x597-x598)!=(x599>x600));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x605 = -1;
	int32_t x606 = INT32_MIN;
	static volatile int32_t x607 = INT32_MIN;
	static volatile uint16_t x608 = 339U;
	static int32_t t139 = -6733;

    t139 = ((x605-x606)!=(x607>x608));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x609 = 11882U;
	int64_t x610 = INT64_MAX;
	int32_t x611 = -3;
	int32_t t140 = 1;

    t140 = ((x609-x610)!=(x611>x612));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x613 = INT32_MAX;
	uint16_t x614 = UINT16_MAX;
	static int64_t x615 = -1LL;
	int64_t x616 = -1LL;

    t141 = ((x613-x614)!=(x615>x616));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x622 = 19113397U;
	int32_t x624 = INT32_MAX;
	int32_t t142 = 9341;

    t142 = ((x621-x622)!=(x623>x624));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x626 = UINT16_MAX;
	uint64_t x627 = UINT64_MAX;
	static uint32_t x628 = 577U;
	volatile int32_t t143 = 743631056;

    t143 = ((x625-x626)!=(x627>x628));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x629 = INT64_MIN;
	int16_t x630 = -41;
	static int64_t x631 = INT64_MIN;
	int16_t x632 = -1;
	int32_t t144 = -144;

    t144 = ((x629-x630)!=(x631>x632));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x633 = -10046;
	static uint32_t x635 = UINT32_MAX;
	int32_t x636 = -240312;
	volatile int32_t t145 = -50564;

    t145 = ((x633-x634)!=(x635>x636));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int16_t x638 = 7549;
	int16_t x639 = -7;
	int32_t x640 = INT32_MIN;

    t146 = ((x637-x638)!=(x639>x640));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile uint64_t x641 = UINT64_MAX;
	int64_t x642 = INT64_MIN;
	int64_t x643 = INT64_MIN;
	static int8_t x644 = INT8_MIN;
	static volatile int32_t t147 = 553;

    t147 = ((x641-x642)!=(x643>x644));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x645 = 193899761U;
	int16_t x646 = -1;
	static volatile int32_t x647 = -1;
	static int32_t t148 = 14298;

    t148 = ((x645-x646)!=(x647>x648));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x649 = 12728U;
	uint32_t x650 = 90512365U;
	int32_t x651 = INT32_MIN;
	uint32_t x652 = UINT32_MAX;
	static int32_t t149 = -73008;

    t149 = ((x649-x650)!=(x651>x652));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x653 = INT64_MAX;
	uint64_t x654 = 35553254808304634LLU;
	uint64_t x655 = 469202LLU;
	int16_t x656 = 1;

    t150 = ((x653-x654)!=(x655>x656));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x657 = INT8_MIN;
	int8_t x659 = -1;
	uint32_t x660 = 154U;
	int32_t t151 = 1058874560;

    t151 = ((x657-x658)!=(x659>x660));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x661 = UINT64_MAX;
	volatile int16_t x662 = INT16_MIN;
	uint16_t x663 = UINT16_MAX;
	int32_t t152 = 5384905;

    t152 = ((x661-x662)!=(x663>x664));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x665 = 55428444438673171LLU;
	volatile int32_t x666 = -1;
	int16_t x667 = INT16_MIN;
	int16_t x668 = INT16_MAX;
	volatile int32_t t153 = 257526;

    t153 = ((x665-x666)!=(x667>x668));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x673 = INT16_MIN;
	int32_t x674 = -156354078;
	int32_t x675 = -1;
	int16_t x676 = -65;
	volatile int32_t t154 = 12;

    t154 = ((x673-x674)!=(x675>x676));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x677 = UINT8_MAX;
	volatile int64_t x678 = 74123823972LL;
	int8_t x679 = INT8_MIN;
	static int8_t x680 = 17;
	volatile int32_t t155 = -4;

    t155 = ((x677-x678)!=(x679>x680));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x681 = -735;
	uint16_t x682 = 2U;
	int16_t x683 = 193;
	uint64_t x684 = 7474LLU;
	int32_t t156 = -6787434;

    t156 = ((x681-x682)!=(x683>x684));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x685 = -1;
	int64_t x686 = INT64_MIN;
	int16_t x688 = -1424;
	int32_t t157 = -25;

    t157 = ((x685-x686)!=(x687>x688));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint8_t x693 = 24U;
	volatile int64_t x695 = -1LL;
	int32_t x696 = INT32_MIN;
	static volatile int32_t t158 = -356398;

    t158 = ((x693-x694)!=(x695>x696));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x697 = -1;
	int8_t x698 = -1;
	volatile int16_t x699 = INT16_MIN;
	static int64_t x700 = INT64_MAX;
	static int32_t t159 = 1;

    t159 = ((x697-x698)!=(x699>x700));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x701 = 341;
	static uint16_t x702 = 0U;
	uint16_t x704 = 3U;
	static int32_t t160 = 67;

    t160 = ((x701-x702)!=(x703>x704));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x709 = 6899U;
	uint32_t x710 = 15314U;
	int8_t x711 = INT8_MAX;
	uint64_t x712 = 384546988439LLU;

    t161 = ((x709-x710)!=(x711>x712));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x713 = -181895640158758077LL;
	static int32_t x715 = -455111;
	static volatile int32_t t162 = 1;

    t162 = ((x713-x714)!=(x715>x716));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x717 = 19376472LLU;
	int16_t x718 = INT16_MAX;
	volatile uint8_t x719 = UINT8_MAX;
	volatile int32_t x720 = 747361;
	static int32_t t163 = -54;

    t163 = ((x717-x718)!=(x719>x720));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x721 = -195;
	int8_t x722 = -1;
	int64_t x723 = INT64_MIN;
	volatile int32_t t164 = 23;

    t164 = ((x721-x722)!=(x723>x724));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x726 = -972210LL;
	int16_t x727 = 2;
	static int16_t x728 = -13;

    t165 = ((x725-x726)!=(x727>x728));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x730 = UINT64_MAX;
	volatile int16_t x731 = INT16_MAX;
	int32_t t166 = -941;

    t166 = ((x729-x730)!=(x731>x732));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x733 = UINT16_MAX;
	static int8_t x734 = INT8_MAX;
	static uint32_t x735 = 10244U;
	static int32_t x736 = 7542175;
	int32_t t167 = 0;

    t167 = ((x733-x734)!=(x735>x736));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x738 = -7;
	int8_t x739 = INT8_MIN;
	uint64_t x740 = 1912634603342272221LLU;

    t168 = ((x737-x738)!=(x739>x740));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint16_t x745 = UINT16_MAX;
	static int32_t x746 = 344202;
	int8_t x747 = INT8_MAX;
	static volatile int32_t t169 = 13309;

    t169 = ((x745-x746)!=(x747>x748));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x749 = -30639;
	uint16_t x750 = UINT16_MAX;

    t170 = ((x749-x750)!=(x751>x752));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x753 = 359025248LLU;
	uint16_t x754 = 75U;
	static volatile int32_t t171 = 12458;

    t171 = ((x753-x754)!=(x755>x756));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x758 = 224092U;
	int64_t x759 = INT64_MIN;
	int32_t t172 = -3810;

    t172 = ((x757-x758)!=(x759>x760));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x761 = INT8_MIN;
	int16_t x762 = INT16_MIN;
	int8_t x763 = INT8_MIN;
	volatile int32_t t173 = 199126;

    t173 = ((x761-x762)!=(x763>x764));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x765 = INT32_MAX;
	uint16_t x766 = 0U;
	uint32_t x768 = UINT32_MAX;
	int32_t t174 = 175166902;

    t174 = ((x765-x766)!=(x767>x768));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x769 = INT64_MAX;
	int16_t x770 = INT16_MAX;
	int32_t x771 = INT32_MIN;
	static int32_t t175 = -3762503;

    t175 = ((x769-x770)!=(x771>x772));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x778 = -22;
	volatile int32_t x779 = -662850;
	static int8_t x780 = -1;
	volatile int32_t t176 = -1669;

    t176 = ((x777-x778)!=(x779>x780));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x781 = INT16_MIN;
	int64_t x782 = -1LL;
	uint32_t x783 = UINT32_MAX;
	int8_t x784 = INT8_MIN;
	volatile int32_t t177 = 1;

    t177 = ((x781-x782)!=(x783>x784));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x785 = -1LL;
	int64_t x786 = 356915LL;
	volatile int32_t t178 = 950;

    t178 = ((x785-x786)!=(x787>x788));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x793 = 120U;
	static volatile int8_t x794 = -11;
	uint8_t x795 = 1U;
	volatile int32_t x796 = INT32_MIN;
	volatile int32_t t179 = -212013230;

    t179 = ((x793-x794)!=(x795>x796));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x798 = -1;
	int16_t x799 = 429;
	int64_t x800 = 631631450281398728LL;
	volatile int32_t t180 = 15620628;

    t180 = ((x797-x798)!=(x799>x800));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x801 = INT16_MIN;
	uint16_t x802 = 750U;
	static volatile int16_t x803 = 2717;
	static int8_t x804 = -8;
	int32_t t181 = 4199;

    t181 = ((x801-x802)!=(x803>x804));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x805 = 46U;
	uint32_t x806 = UINT32_MAX;
	int16_t x807 = INT16_MIN;
	uint32_t x808 = 26U;
	volatile int32_t t182 = -1500557;

    t182 = ((x805-x806)!=(x807>x808));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x809 = UINT8_MAX;
	volatile int8_t x810 = -23;
	int32_t x811 = 4931562;
	int8_t x812 = -1;
	volatile int32_t t183 = 83095979;

    t183 = ((x809-x810)!=(x811>x812));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x813 = INT16_MIN;
	uint32_t x814 = UINT32_MAX;
	static uint64_t x815 = 3LLU;
	static uint32_t x816 = 4739U;

    t184 = ((x813-x814)!=(x815>x816));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x817 = -130221753234957713LL;
	uint32_t x818 = UINT32_MAX;
	static int32_t x819 = 77576;
	int32_t x820 = -1;
	volatile int32_t t185 = 95;

    t185 = ((x817-x818)!=(x819>x820));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x821 = UINT16_MAX;
	uint64_t x822 = 2974844655942LLU;
	int16_t x823 = -1;
	static volatile int32_t t186 = 97;

    t186 = ((x821-x822)!=(x823>x824));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x825 = INT8_MAX;
	int16_t x826 = INT16_MIN;
	uint8_t x827 = 61U;
	int32_t x828 = INT32_MIN;
	static int32_t t187 = 4;

    t187 = ((x825-x826)!=(x827>x828));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x829 = -1;
	volatile int16_t x830 = 5679;
	int8_t x832 = -1;
	int32_t t188 = -2611;

    t188 = ((x829-x830)!=(x831>x832));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x834 = 103110852300LLU;
	volatile uint32_t x835 = 95633741U;

    t189 = ((x833-x834)!=(x835>x836));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x837 = INT8_MAX;
	int16_t x838 = INT16_MIN;
	int32_t x839 = -1;
	static int16_t x840 = INT16_MIN;
	int32_t t190 = -1806233;

    t190 = ((x837-x838)!=(x839>x840));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x842 = 60LL;
	int64_t x843 = 50LL;
	static int8_t x844 = INT8_MIN;
	volatile int32_t t191 = 662;

    t191 = ((x841-x842)!=(x843>x844));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x845 = 893LL;
	volatile int8_t x847 = INT8_MIN;
	int64_t x848 = -23786LL;
	volatile int32_t t192 = -368340;

    t192 = ((x845-x846)!=(x847>x848));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x849 = -1;
	int32_t x851 = INT32_MIN;
	int8_t x852 = INT8_MIN;
	int32_t t193 = -6621586;

    t193 = ((x849-x850)!=(x851>x852));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x853 = INT16_MIN;
	uint8_t x854 = 15U;
	static volatile int8_t x855 = -1;
	uint32_t x856 = 91U;
	static volatile int32_t t194 = 4;

    t194 = ((x853-x854)!=(x855>x856));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint32_t x857 = UINT32_MAX;
	int8_t x858 = 1;
	volatile int16_t x859 = -1;
	int64_t x860 = 207897271120LL;

    t195 = ((x857-x858)!=(x859>x860));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x861 = 27287U;
	uint64_t x862 = UINT64_MAX;
	uint32_t x863 = 3U;
	volatile int32_t t196 = -8027;

    t196 = ((x861-x862)!=(x863>x864));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x865 = INT64_MIN;
	int32_t x866 = -1;
	int64_t x867 = INT64_MIN;
	volatile int8_t x868 = INT8_MIN;
	int32_t t197 = -480855;

    t197 = ((x865-x866)!=(x867>x868));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x869 = INT16_MIN;
	int8_t x870 = 11;
	static uint32_t x871 = 950868U;
	uint16_t x872 = UINT16_MAX;

    t198 = ((x869-x870)!=(x871>x872));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x878 = INT16_MAX;
	int32_t x879 = INT32_MAX;
	uint32_t x880 = 831U;
	int32_t t199 = 0;

    t199 = ((x877-x878)!=(x879>x880));

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

