
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

int32_t x3 = 24;
uint16_t x4 = 6U;
volatile int16_t x6 = 3;
volatile int64_t x15 = INT64_MIN;
int16_t x17 = INT16_MAX;
int32_t x18 = -11125;
uint64_t x32 = UINT64_MAX;
int16_t x35 = INT16_MIN;
uint16_t x36 = 2U;
volatile int16_t x41 = INT16_MIN;
int8_t x51 = -8;
uint16_t x54 = 0U;
uint16_t x60 = UINT16_MAX;
static volatile int32_t t15 = -113664;
int8_t x67 = -1;
volatile int32_t t16 = -1042502;
int16_t x75 = INT16_MAX;
int64_t x76 = -42594LL;
int32_t x81 = INT32_MIN;
int16_t x85 = INT16_MIN;
static int8_t x89 = -1;
static int64_t x91 = -35716949005332130LL;
int8_t x94 = INT8_MAX;
uint64_t x96 = 3511770328897511703LLU;
static int8_t x100 = INT8_MIN;
int32_t x101 = INT32_MIN;
volatile uint8_t x104 = 0U;
uint16_t x107 = 27U;
volatile int32_t t26 = -1716;
volatile int32_t x110 = -21657;
static int16_t x111 = INT16_MIN;
int32_t t27 = -1206;
volatile int32_t t28 = 7164412;
volatile int8_t x121 = -1;
volatile uint8_t x137 = UINT8_MAX;
static volatile uint8_t x142 = UINT8_MAX;
uint16_t x151 = UINT16_MAX;
volatile int8_t x152 = INT8_MIN;
static int64_t x153 = -1LL;
static volatile uint8_t x154 = 29U;
static int8_t x160 = INT8_MAX;
uint32_t x164 = UINT32_MAX;
int32_t t40 = -25510106;
int16_t x170 = INT16_MAX;
int8_t x175 = -3;
int8_t x180 = -9;
volatile int16_t x188 = INT16_MIN;
static uint64_t x189 = UINT64_MAX;
static uint8_t x193 = 3U;
int16_t x195 = INT16_MIN;
static uint64_t x207 = 991901852LLU;
uint32_t x210 = UINT32_MAX;
int8_t x215 = INT8_MIN;
static uint16_t x217 = UINT16_MAX;
volatile int8_t x219 = -1;
int8_t x221 = -1;
int32_t x230 = -23958;
volatile int32_t t59 = -1342897;
int32_t x245 = -1026;
static int64_t x246 = INT64_MIN;
int32_t x247 = -1;
static volatile uint16_t x249 = 129U;
volatile int32_t t62 = 15;
int32_t x257 = INT32_MAX;
int16_t x260 = 2832;
int16_t x261 = 1580;
uint16_t x279 = UINT16_MAX;
uint64_t x282 = 125965345458827909LLU;
int32_t t70 = -1;
int16_t x286 = -1;
int32_t t72 = -5;
uint64_t x293 = 293043825819909950LLU;
uint16_t x294 = 7856U;
static uint16_t x295 = 1U;
uint16_t x297 = UINT16_MAX;
static volatile int32_t t76 = 480765;
int64_t x317 = -359015LL;
int16_t x318 = 3;
int32_t x327 = 8332672;
int8_t x336 = INT8_MAX;
volatile uint32_t x338 = 2U;
volatile int8_t x353 = INT8_MIN;
int16_t x355 = INT16_MIN;
int32_t x356 = -3;
int16_t x358 = INT16_MIN;
uint16_t x360 = 248U;
uint16_t x370 = 29351U;
static int8_t x377 = 43;
volatile int32_t t94 = -1252152;
int32_t t95 = 28;
static int64_t x388 = INT64_MAX;
int32_t x403 = -1901442;
int64_t x405 = -1LL;
static int64_t x416 = -1LL;
int8_t x417 = 1;
static int8_t x426 = INT8_MIN;
static int16_t x428 = -1;
int32_t t106 = -78486223;
volatile int32_t t108 = 3404601;
int32_t t109 = 39483;
static uint16_t x442 = 1U;
static uint32_t x443 = 1690224930U;
static int16_t x446 = -3;
volatile uint64_t x448 = 14LLU;
int32_t x449 = INT32_MIN;
int8_t x458 = -1;
int32_t x476 = 7;
uint8_t x478 = UINT8_MAX;
uint64_t x480 = UINT64_MAX;
int8_t x482 = INT8_MIN;
static int8_t x483 = INT8_MIN;
static volatile int32_t t120 = -20;
static int16_t x499 = -240;
int32_t x500 = INT32_MIN;
volatile int32_t t124 = -3;
uint16_t x501 = 3939U;
uint16_t x504 = 59U;
uint8_t x508 = 2U;
uint32_t x510 = UINT32_MAX;
static uint64_t x512 = 95686957900262LLU;
static volatile int32_t t128 = 13;
volatile uint64_t x536 = UINT64_MAX;
int64_t x538 = 407054536593506199LL;
static int8_t x541 = -1;
volatile int64_t x544 = INT64_MIN;
uint8_t x546 = UINT8_MAX;
uint64_t x551 = 29128LLU;
int32_t t138 = -832823854;
volatile uint16_t x560 = 78U;
volatile int32_t t140 = 1;
volatile uint32_t x573 = UINT32_MAX;
int64_t x580 = -119392351805909373LL;
uint64_t x581 = 32LLU;
uint8_t x583 = UINT8_MAX;
int64_t x585 = -1LL;
int8_t x590 = INT8_MAX;
uint16_t x592 = 238U;
int16_t x595 = INT16_MIN;
static int32_t t149 = -4;
int64_t x602 = 866931849402LL;
volatile int32_t t150 = -1130271;
static int64_t x609 = INT64_MIN;
int16_t x615 = INT16_MIN;
volatile uint32_t x619 = UINT32_MAX;
int8_t x620 = 1;
volatile int32_t t154 = 27;
int64_t x622 = -156LL;
int8_t x625 = INT8_MIN;
static int16_t x628 = INT16_MAX;
int32_t x629 = INT32_MIN;
static int64_t x635 = INT64_MIN;
volatile int64_t x639 = INT64_MAX;
uint32_t x642 = UINT32_MAX;
static volatile int32_t t161 = 0;
int32_t x653 = 1738742;
uint8_t x657 = 58U;
uint32_t x662 = 1614142U;
int8_t x663 = INT8_MAX;
volatile int32_t t166 = -3089329;
static volatile int32_t t168 = 794;
int32_t t170 = 1;
int32_t t171 = -41515371;
uint8_t x689 = 1U;
volatile int32_t t173 = -4224683;
volatile int8_t x703 = 10;
int8_t x708 = INT8_MAX;
int32_t x712 = INT32_MAX;
volatile int32_t x719 = INT32_MIN;
static volatile int32_t x721 = INT32_MIN;
int8_t x728 = INT8_MIN;
static int32_t t181 = 216925;
int64_t x732 = 218064LL;
uint32_t x739 = 21787420U;
int8_t x740 = INT8_MIN;
static volatile int32_t t184 = -27291;
volatile int8_t x748 = INT8_MIN;
int32_t x749 = -1;
int8_t x753 = -15;
int32_t t189 = -87;
volatile int32_t t190 = 1244105;
uint16_t x776 = 73U;
uint64_t x779 = UINT64_MAX;
volatile int32_t t194 = -3;
static volatile int8_t x784 = INT8_MIN;
volatile int32_t x785 = INT32_MAX;
uint64_t x787 = 13689634LLU;
volatile int32_t x793 = -1823083;
int32_t t198 = 0;
volatile int64_t x797 = INT64_MIN;


void f0(void) {
    	volatile uint32_t x1 = UINT32_MAX;
	int32_t x2 = -147935;
	volatile int32_t t0 = -342346;

    t0 = ((x1!=x2)==(x3^x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MAX;
	volatile uint16_t x7 = UINT16_MAX;
	static volatile uint64_t x8 = 65322240LLU;
	volatile int32_t t1 = -5967;

    t1 = ((x5!=x6)==(x7^x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = 68698057LL;
	volatile int16_t x10 = -1;
	uint32_t x11 = 300U;
	uint8_t x12 = 3U;
	int32_t t2 = 13013;

    t2 = ((x9!=x10)==(x11^x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = INT32_MIN;
	int8_t x14 = INT8_MIN;
	int8_t x16 = INT8_MAX;
	volatile int32_t t3 = -1;

    t3 = ((x13!=x14)==(x15^x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x19 = 3;
	int32_t x20 = -1;
	volatile int32_t t4 = -54;

    t4 = ((x17!=x18)==(x19^x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MIN;
	int16_t x22 = 402;
	int32_t x23 = INT32_MAX;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = -1115796;

    t5 = ((x21!=x22)==(x23^x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MAX;
	static volatile uint64_t x26 = 32930413752LLU;
	int64_t x27 = INT64_MIN;
	uint64_t x28 = 417LLU;
	int32_t t6 = 131316011;

    t6 = ((x25!=x26)==(x27^x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x29 = INT8_MIN;
	uint16_t x30 = UINT16_MAX;
	int8_t x31 = INT8_MIN;
	int32_t t7 = 3;

    t7 = ((x29!=x30)==(x31^x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 1U;
	uint32_t x34 = UINT32_MAX;
	volatile int32_t t8 = -31805;

    t8 = ((x33!=x34)==(x35^x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int16_t x37 = 1;
	static int32_t x38 = INT32_MIN;
	int8_t x39 = INT8_MAX;
	uint8_t x40 = UINT8_MAX;
	volatile int32_t t9 = -403161;

    t9 = ((x37!=x38)==(x39^x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x42 = INT16_MAX;
	int16_t x43 = 12355;
	uint32_t x44 = UINT32_MAX;
	int32_t t10 = 297437192;

    t10 = ((x41!=x42)==(x43^x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = 13987U;
	static volatile uint16_t x46 = UINT16_MAX;
	volatile int16_t x47 = -49;
	volatile uint16_t x48 = UINT16_MAX;
	static int32_t t11 = -6;

    t11 = ((x45!=x46)==(x47^x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MIN;
	static uint32_t x50 = UINT32_MAX;
	int64_t x52 = INT64_MAX;
	volatile int32_t t12 = 11;

    t12 = ((x49!=x50)==(x51^x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x53 = UINT32_MAX;
	volatile int32_t x55 = INT32_MIN;
	uint16_t x56 = 11U;
	int32_t t13 = -183809;

    t13 = ((x53!=x54)==(x55^x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x57 = -1;
	static uint32_t x58 = 544U;
	static int16_t x59 = 490;
	volatile int32_t t14 = -24212266;

    t14 = ((x57!=x58)==(x59^x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 508875806U;
	static int64_t x62 = -20911353642095LL;
	int16_t x63 = INT16_MIN;
	volatile uint32_t x64 = UINT32_MAX;

    t15 = ((x61!=x62)==(x63^x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = UINT8_MAX;
	int8_t x66 = -1;
	uint64_t x68 = 13039022166168LLU;

    t16 = ((x65!=x66)==(x67^x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = 7847LL;
	uint16_t x70 = 0U;
	int8_t x71 = INT8_MAX;
	int32_t x72 = -387614016;
	int32_t t17 = 27497375;

    t17 = ((x69!=x70)==(x71^x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = UINT8_MAX;
	static volatile int8_t x74 = INT8_MAX;
	volatile int32_t t18 = -29232896;

    t18 = ((x73!=x74)==(x75^x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MIN;
	uint8_t x78 = UINT8_MAX;
	int64_t x79 = -44280205511970LL;
	int64_t x80 = -1LL;
	static volatile int32_t t19 = -463896227;

    t19 = ((x77!=x78)==(x79^x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x82 = 21U;
	volatile int64_t x83 = -1LL;
	static int8_t x84 = INT8_MIN;
	int32_t t20 = 30312039;

    t20 = ((x81!=x82)==(x83^x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x86 = 528695416528626LL;
	int64_t x87 = -1101867397226211LL;
	static volatile uint8_t x88 = 3U;
	int32_t t21 = -2241321;

    t21 = ((x85!=x86)==(x87^x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x90 = INT32_MIN;
	volatile int16_t x92 = INT16_MIN;
	int32_t t22 = 252;

    t22 = ((x89!=x90)==(x91^x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = INT32_MIN;
	uint32_t x95 = UINT32_MAX;
	volatile int32_t t23 = 702677846;

    t23 = ((x93!=x94)==(x95^x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x97 = INT16_MIN;
	int32_t x98 = -248429;
	uint16_t x99 = 21652U;
	int32_t t24 = 1634;

    t24 = ((x97!=x98)==(x99^x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x102 = INT8_MAX;
	int16_t x103 = -101;
	volatile int32_t t25 = -7719;

    t25 = ((x101!=x102)==(x103^x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x105 = 0U;
	uint32_t x106 = 575403U;
	int8_t x108 = INT8_MAX;

    t26 = ((x105!=x106)==(x107^x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int8_t x109 = -49;
	volatile int64_t x112 = -1LL;

    t27 = ((x109!=x110)==(x111^x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x113 = UINT16_MAX;
	uint32_t x114 = UINT32_MAX;
	uint32_t x115 = 948484U;
	int32_t x116 = INT32_MIN;

    t28 = ((x113!=x114)==(x115^x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = INT64_MIN;
	volatile int64_t x118 = 2691578902024LL;
	int32_t x119 = -42474057;
	uint32_t x120 = 11U;
	volatile int32_t t29 = 524573873;

    t29 = ((x117!=x118)==(x119^x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x122 = INT8_MIN;
	int16_t x123 = -1;
	uint64_t x124 = 62115204338LLU;
	volatile int32_t t30 = 625;

    t30 = ((x121!=x122)==(x123^x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x125 = -1;
	int64_t x126 = -1LL;
	volatile uint8_t x127 = UINT8_MAX;
	uint32_t x128 = UINT32_MAX;
	volatile int32_t t31 = 1921686;

    t31 = ((x125!=x126)==(x127^x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x129 = UINT64_MAX;
	volatile int16_t x130 = INT16_MIN;
	int16_t x131 = INT16_MAX;
	int64_t x132 = INT64_MIN;
	volatile int32_t t32 = -1786;

    t32 = ((x129!=x130)==(x131^x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x133 = INT32_MAX;
	int16_t x134 = -1;
	uint8_t x135 = UINT8_MAX;
	static int8_t x136 = 0;
	int32_t t33 = 221304;

    t33 = ((x133!=x134)==(x135^x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x138 = 197096U;
	uint8_t x139 = 0U;
	int32_t x140 = -1;
	static int32_t t34 = 21;

    t34 = ((x137!=x138)==(x139^x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int16_t x141 = INT16_MIN;
	static int8_t x143 = -1;
	int32_t x144 = INT32_MAX;
	int32_t t35 = 231;

    t35 = ((x141!=x142)==(x143^x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = INT8_MIN;
	int8_t x146 = INT8_MIN;
	int32_t x147 = 44;
	uint64_t x148 = UINT64_MAX;
	int32_t t36 = -7589;

    t36 = ((x145!=x146)==(x147^x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = -1;
	volatile uint8_t x150 = UINT8_MAX;
	volatile int32_t t37 = 870;

    t37 = ((x149!=x150)==(x151^x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x155 = INT32_MIN;
	int16_t x156 = INT16_MIN;
	static volatile int32_t t38 = -110870;

    t38 = ((x153!=x154)==(x155^x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x157 = 9U;
	static int8_t x158 = INT8_MAX;
	int8_t x159 = -1;
	int32_t t39 = -1;

    t39 = ((x157!=x158)==(x159^x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = INT32_MAX;
	int16_t x162 = -278;
	uint32_t x163 = 111491124U;

    t40 = ((x161!=x162)==(x163^x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = -1;
	static volatile int64_t x166 = INT64_MAX;
	static int32_t x167 = -1;
	uint64_t x168 = 1312189LLU;
	int32_t t41 = -5807;

    t41 = ((x165!=x166)==(x167^x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int32_t x169 = INT32_MIN;
	uint64_t x171 = UINT64_MAX;
	volatile uint32_t x172 = UINT32_MAX;
	int32_t t42 = 2605;

    t42 = ((x169!=x170)==(x171^x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x173 = -2;
	int8_t x174 = -5;
	static uint16_t x176 = 14398U;
	static volatile int32_t t43 = 13721462;

    t43 = ((x173!=x174)==(x175^x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = -1LL;
	int16_t x178 = -27;
	volatile int8_t x179 = 0;
	volatile int32_t t44 = 25;

    t44 = ((x177!=x178)==(x179^x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = INT8_MAX;
	volatile int16_t x182 = 74;
	volatile int32_t x183 = -1;
	int8_t x184 = -1;
	int32_t t45 = -5603;

    t45 = ((x181!=x182)==(x183^x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x185 = 3U;
	int64_t x186 = -1LL;
	uint16_t x187 = 5U;
	int32_t t46 = -159745236;

    t46 = ((x185!=x186)==(x187^x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x190 = UINT64_MAX;
	static int8_t x191 = INT8_MIN;
	int16_t x192 = INT16_MIN;
	int32_t t47 = 26489695;

    t47 = ((x189!=x190)==(x191^x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x194 = -1LL;
	int16_t x196 = 3;
	int32_t t48 = -56544653;

    t48 = ((x193!=x194)==(x195^x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x197 = INT64_MAX;
	int32_t x198 = 14391878;
	int16_t x199 = 2249;
	int64_t x200 = 22995782952LL;
	volatile int32_t t49 = -13;

    t49 = ((x197!=x198)==(x199^x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = INT8_MIN;
	uint16_t x202 = UINT16_MAX;
	uint32_t x203 = 111829180U;
	static int8_t x204 = INT8_MIN;
	int32_t t50 = 3;

    t50 = ((x201!=x202)==(x203^x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = 34097793272502LLU;
	int16_t x206 = -67;
	int64_t x208 = 670LL;
	int32_t t51 = -4032363;

    t51 = ((x205!=x206)==(x207^x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x209 = 106607U;
	int8_t x211 = -1;
	int32_t x212 = INT32_MAX;
	volatile int32_t t52 = -98;

    t52 = ((x209!=x210)==(x211^x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint8_t x213 = 1U;
	static volatile uint16_t x214 = UINT16_MAX;
	int8_t x216 = INT8_MAX;
	int32_t t53 = -619;

    t53 = ((x213!=x214)==(x215^x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x218 = 631577018U;
	static volatile int32_t x220 = -1;
	int32_t t54 = 25;

    t54 = ((x217!=x218)==(x219^x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x222 = -1;
	uint16_t x223 = 3554U;
	int32_t x224 = INT32_MAX;
	volatile int32_t t55 = -675;

    t55 = ((x221!=x222)==(x223^x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x225 = 34415602U;
	uint64_t x226 = 4278605927308736LLU;
	int32_t x227 = INT32_MIN;
	volatile int8_t x228 = INT8_MIN;
	volatile int32_t t56 = 295410;

    t56 = ((x225!=x226)==(x227^x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = INT32_MIN;
	int8_t x231 = 0;
	static int32_t x232 = INT32_MIN;
	int32_t t57 = 3974713;

    t57 = ((x229!=x230)==(x231^x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x233 = 12U;
	uint8_t x234 = 7U;
	int16_t x235 = INT16_MIN;
	int32_t x236 = INT32_MIN;
	static int32_t t58 = 1;

    t58 = ((x233!=x234)==(x235^x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = -1;
	uint8_t x238 = 1U;
	int8_t x239 = INT8_MAX;
	volatile int64_t x240 = INT64_MAX;

    t59 = ((x237!=x238)==(x239^x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = INT8_MIN;
	int64_t x242 = INT64_MIN;
	uint32_t x243 = UINT32_MAX;
	uint32_t x244 = 433167052U;
	volatile int32_t t60 = -1;

    t60 = ((x241!=x242)==(x243^x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x248 = -34;
	volatile int32_t t61 = -69476;

    t61 = ((x245!=x246)==(x247^x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x250 = UINT8_MAX;
	static int64_t x251 = INT64_MIN;
	volatile uint16_t x252 = UINT16_MAX;

    t62 = ((x249!=x250)==(x251^x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x253 = -23;
	volatile uint8_t x254 = 5U;
	int32_t x255 = INT32_MIN;
	int64_t x256 = INT64_MAX;
	int32_t t63 = 37802557;

    t63 = ((x253!=x254)==(x255^x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint64_t x258 = 1512240376319550LLU;
	int16_t x259 = INT16_MIN;
	static int32_t t64 = -648299967;

    t64 = ((x257!=x258)==(x259^x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x262 = INT64_MIN;
	uint64_t x263 = 416696972251805LLU;
	uint16_t x264 = 15198U;
	int32_t t65 = 677288;

    t65 = ((x261!=x262)==(x263^x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x265 = 894U;
	static int64_t x266 = 14950860890044811LL;
	int16_t x267 = 110;
	uint64_t x268 = 6933152395692225172LLU;
	int32_t t66 = 121432;

    t66 = ((x265!=x266)==(x267^x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = 489231;
	int64_t x270 = -9345LL;
	int16_t x271 = 16153;
	volatile int32_t x272 = INT32_MIN;
	volatile int32_t t67 = 262;

    t67 = ((x269!=x270)==(x271^x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = 1;
	volatile int16_t x274 = INT16_MIN;
	uint16_t x275 = UINT16_MAX;
	int16_t x276 = INT16_MIN;
	volatile int32_t t68 = 426801;

    t68 = ((x273!=x274)==(x275^x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x277 = 332;
	static int64_t x278 = 4058343LL;
	int32_t x280 = -1;
	int32_t t69 = 51;

    t69 = ((x277!=x278)==(x279^x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int64_t x281 = INT64_MAX;
	volatile int8_t x283 = INT8_MIN;
	volatile int16_t x284 = INT16_MIN;

    t70 = ((x281!=x282)==(x283^x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = -1;
	static int16_t x287 = -14275;
	int64_t x288 = INT64_MAX;
	volatile int32_t t71 = -11;

    t71 = ((x285!=x286)==(x287^x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x289 = UINT64_MAX;
	uint8_t x290 = 1U;
	static int32_t x291 = INT32_MAX;
	uint32_t x292 = UINT32_MAX;

    t72 = ((x289!=x290)==(x291^x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x296 = INT8_MIN;
	volatile int32_t t73 = 59956;

    t73 = ((x293!=x294)==(x295^x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x298 = INT64_MIN;
	int16_t x299 = -1;
	uint32_t x300 = 289U;
	volatile int32_t t74 = 134993974;

    t74 = ((x297!=x298)==(x299^x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x301 = -6793;
	volatile uint64_t x302 = 4049393140788LLU;
	int32_t x303 = -1;
	uint16_t x304 = 14359U;
	volatile int32_t t75 = 302800;

    t75 = ((x301!=x302)==(x303^x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x305 = INT16_MAX;
	static uint64_t x306 = UINT64_MAX;
	int64_t x307 = INT64_MIN;
	int16_t x308 = -3649;

    t76 = ((x305!=x306)==(x307^x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = -1;
	uint64_t x310 = 10061521762557677LLU;
	static int16_t x311 = -15047;
	static uint8_t x312 = 30U;
	int32_t t77 = -422;

    t77 = ((x309!=x310)==(x311^x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int64_t x313 = -1LL;
	static volatile int32_t x314 = INT32_MIN;
	static volatile uint16_t x315 = 78U;
	static uint64_t x316 = 64009LLU;
	volatile int32_t t78 = -42432;

    t78 = ((x313!=x314)==(x315^x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x319 = UINT32_MAX;
	uint32_t x320 = UINT32_MAX;
	volatile int32_t t79 = -1;

    t79 = ((x317!=x318)==(x319^x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x321 = 1064645331LLU;
	static int32_t x322 = 12845;
	int16_t x323 = 1421;
	uint8_t x324 = 14U;
	static int32_t t80 = -120024948;

    t80 = ((x321!=x322)==(x323^x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x325 = 142U;
	static int16_t x326 = INT16_MIN;
	static volatile uint8_t x328 = UINT8_MAX;
	static volatile int32_t t81 = -3102971;

    t81 = ((x325!=x326)==(x327^x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = INT16_MIN;
	int8_t x330 = -52;
	int16_t x331 = INT16_MAX;
	static volatile uint32_t x332 = 994056U;
	int32_t t82 = 12577;

    t82 = ((x329!=x330)==(x331^x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x333 = 169283550U;
	volatile int64_t x334 = 4035506872463249378LL;
	static int64_t x335 = INT64_MAX;
	static int32_t t83 = -10;

    t83 = ((x333!=x334)==(x335^x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x337 = 2;
	static int8_t x339 = INT8_MAX;
	uint8_t x340 = 3U;
	volatile int32_t t84 = -21759;

    t84 = ((x337!=x338)==(x339^x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x341 = INT32_MAX;
	int32_t x342 = -1;
	int8_t x343 = 0;
	int8_t x344 = INT8_MAX;
	int32_t t85 = -7;

    t85 = ((x341!=x342)==(x343^x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x345 = 67U;
	int32_t x346 = INT32_MIN;
	static int32_t x347 = -1;
	volatile int16_t x348 = 72;
	int32_t t86 = 36;

    t86 = ((x345!=x346)==(x347^x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = -1170;
	uint8_t x350 = UINT8_MAX;
	static uint64_t x351 = 497640972LLU;
	int16_t x352 = -763;
	volatile int32_t t87 = 8477974;

    t87 = ((x349!=x350)==(x351^x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x354 = 1U;
	volatile int32_t t88 = 1;

    t88 = ((x353!=x354)==(x355^x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = INT16_MIN;
	uint32_t x359 = UINT32_MAX;
	static volatile int32_t t89 = -44624426;

    t89 = ((x357!=x358)==(x359^x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = INT8_MAX;
	volatile int8_t x362 = -1;
	static int64_t x363 = -1LL;
	static int8_t x364 = -16;
	volatile int32_t t90 = -3040;

    t90 = ((x361!=x362)==(x363^x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = 0;
	static uint16_t x366 = 80U;
	static uint64_t x367 = 40479575846438LLU;
	volatile int64_t x368 = INT64_MIN;
	static volatile int32_t t91 = -114630;

    t91 = ((x365!=x366)==(x367^x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x369 = 7LLU;
	int32_t x371 = INT32_MIN;
	uint32_t x372 = 36U;
	volatile int32_t t92 = -3;

    t92 = ((x369!=x370)==(x371^x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x373 = 2412891726176563790LL;
	volatile uint64_t x374 = 2554425900LLU;
	volatile uint32_t x375 = 2712341U;
	int32_t x376 = -1;
	volatile int32_t t93 = -1857;

    t93 = ((x373!=x374)==(x375^x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x378 = INT64_MIN;
	static volatile int64_t x379 = INT64_MAX;
	static uint16_t x380 = 11603U;

    t94 = ((x377!=x378)==(x379^x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = 101882268753LL;
	volatile int32_t x382 = 114838;
	int32_t x383 = -22761;
	static uint16_t x384 = UINT16_MAX;

    t95 = ((x381!=x382)==(x383^x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x385 = 3987804227962LLU;
	uint32_t x386 = UINT32_MAX;
	static volatile int64_t x387 = -1LL;
	volatile int32_t t96 = 44;

    t96 = ((x385!=x386)==(x387^x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = -104743651614044LL;
	int32_t x390 = INT32_MIN;
	uint32_t x391 = 1396418U;
	volatile uint8_t x392 = 3U;
	volatile int32_t t97 = 23649630;

    t97 = ((x389!=x390)==(x391^x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = 289350109952601827LL;
	static uint16_t x394 = 327U;
	int16_t x395 = -2008;
	int32_t x396 = INT32_MIN;
	int32_t t98 = -1;

    t98 = ((x393!=x394)==(x395^x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x397 = 18U;
	int16_t x398 = INT16_MIN;
	int64_t x399 = INT64_MIN;
	int8_t x400 = 2;
	int32_t t99 = -66403423;

    t99 = ((x397!=x398)==(x399^x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x401 = 1299411U;
	int32_t x402 = 33;
	static int64_t x404 = INT64_MIN;
	int32_t t100 = -6356;

    t100 = ((x401!=x402)==(x403^x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x406 = -1;
	volatile int64_t x407 = INT64_MIN;
	int8_t x408 = -47;
	volatile int32_t t101 = 9455;

    t101 = ((x405!=x406)==(x407^x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = INT64_MIN;
	static uint32_t x410 = 1751982U;
	uint32_t x411 = UINT32_MAX;
	static volatile int8_t x412 = -15;
	volatile int32_t t102 = -928944;

    t102 = ((x409!=x410)==(x411^x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x413 = 73U;
	volatile int16_t x414 = -1;
	int32_t x415 = INT32_MAX;
	volatile int32_t t103 = 0;

    t103 = ((x413!=x414)==(x415^x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x418 = INT64_MIN;
	int8_t x419 = INT8_MIN;
	static int32_t x420 = INT32_MIN;
	int32_t t104 = -25811;

    t104 = ((x417!=x418)==(x419^x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x421 = 2U;
	uint16_t x422 = 87U;
	static int16_t x423 = -1;
	int8_t x424 = INT8_MIN;
	static int32_t t105 = -26;

    t105 = ((x421!=x422)==(x423^x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = -7927242761712235LL;
	volatile int16_t x427 = 460;

    t106 = ((x425!=x426)==(x427^x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x429 = INT32_MIN;
	static volatile int64_t x430 = -8LL;
	int8_t x431 = -1;
	int8_t x432 = INT8_MAX;
	volatile int32_t t107 = 2676943;

    t107 = ((x429!=x430)==(x431^x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = INT64_MAX;
	int32_t x434 = -245289;
	static uint32_t x435 = 908598447U;
	volatile uint32_t x436 = 2448U;

    t108 = ((x433!=x434)==(x435^x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x437 = 132370146764LLU;
	int64_t x438 = 25734LL;
	static int16_t x439 = 96;
	uint8_t x440 = UINT8_MAX;

    t109 = ((x437!=x438)==(x439^x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x441 = 1U;
	int64_t x444 = INT64_MAX;
	int32_t t110 = -32950431;

    t110 = ((x441!=x442)==(x443^x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x445 = UINT8_MAX;
	int16_t x447 = INT16_MAX;
	static int32_t t111 = -314;

    t111 = ((x445!=x446)==(x447^x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int64_t x450 = INT64_MIN;
	int64_t x451 = -1LL;
	int16_t x452 = INT16_MIN;
	int32_t t112 = -4;

    t112 = ((x449!=x450)==(x451^x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x453 = INT64_MIN;
	int8_t x454 = -1;
	int16_t x455 = -1;
	int32_t x456 = 2014171;
	volatile int32_t t113 = -4;

    t113 = ((x453!=x454)==(x455^x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x457 = 48;
	volatile uint64_t x459 = 17777630450015991LLU;
	int64_t x460 = INT64_MAX;
	volatile int32_t t114 = 373477599;

    t114 = ((x457!=x458)==(x459^x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x461 = UINT32_MAX;
	uint16_t x462 = 0U;
	static uint32_t x463 = 147U;
	int16_t x464 = -227;
	volatile int32_t t115 = -33;

    t115 = ((x461!=x462)==(x463^x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x465 = 675536U;
	uint64_t x466 = 447060412241890LLU;
	volatile int32_t x467 = 15173241;
	static uint16_t x468 = 3U;
	int32_t t116 = 391476757;

    t116 = ((x465!=x466)==(x467^x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x469 = 47U;
	uint64_t x470 = 79425473757201257LLU;
	int16_t x471 = INT16_MIN;
	int16_t x472 = INT16_MAX;
	static volatile int32_t t117 = 75;

    t117 = ((x469!=x470)==(x471^x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = INT16_MAX;
	volatile uint16_t x474 = 966U;
	static uint32_t x475 = UINT32_MAX;
	int32_t t118 = -3323577;

    t118 = ((x473!=x474)==(x475^x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = -3;
	int64_t x479 = INT64_MAX;
	int32_t t119 = 35138557;

    t119 = ((x477!=x478)==(x479^x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x481 = INT16_MIN;
	int32_t x484 = 1;

    t120 = ((x481!=x482)==(x483^x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = 14;
	int8_t x486 = INT8_MIN;
	volatile int16_t x487 = INT16_MIN;
	int64_t x488 = -1LL;
	volatile int32_t t121 = 1284;

    t121 = ((x485!=x486)==(x487^x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x489 = -1LL;
	static int16_t x490 = INT16_MIN;
	int32_t x491 = -1342;
	uint8_t x492 = 1U;
	static int32_t t122 = 1181749;

    t122 = ((x489!=x490)==(x491^x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x493 = UINT8_MAX;
	int16_t x494 = INT16_MIN;
	int64_t x495 = INT64_MAX;
	volatile uint8_t x496 = 26U;
	volatile int32_t t123 = -86288;

    t123 = ((x493!=x494)==(x495^x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x497 = INT8_MIN;
	volatile int64_t x498 = 1LL;

    t124 = ((x497!=x498)==(x499^x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x502 = -90679884885493948LL;
	int32_t x503 = -1;
	int32_t t125 = 30530925;

    t125 = ((x501!=x502)==(x503^x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x505 = 4U;
	volatile int8_t x506 = -1;
	uint8_t x507 = 2U;
	volatile int32_t t126 = 85748164;

    t126 = ((x505!=x506)==(x507^x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = -97608LL;
	int64_t x511 = INT64_MIN;
	volatile int32_t t127 = -2;

    t127 = ((x509!=x510)==(x511^x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint64_t x513 = UINT64_MAX;
	static int32_t x514 = -13140885;
	int8_t x515 = 2;
	static volatile uint64_t x516 = 191524LLU;

    t128 = ((x513!=x514)==(x515^x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = INT32_MIN;
	volatile int8_t x518 = -1;
	int64_t x519 = INT64_MIN;
	uint32_t x520 = 999644392U;
	static int32_t t129 = -18;

    t129 = ((x517!=x518)==(x519^x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x521 = -2;
	uint8_t x522 = UINT8_MAX;
	int8_t x523 = -1;
	int32_t x524 = INT32_MIN;
	int32_t t130 = 6788536;

    t130 = ((x521!=x522)==(x523^x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = -114;
	uint64_t x526 = UINT64_MAX;
	int32_t x527 = -17655074;
	static int8_t x528 = INT8_MAX;
	volatile int32_t t131 = 75567;

    t131 = ((x525!=x526)==(x527^x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x529 = UINT32_MAX;
	int8_t x530 = -50;
	int64_t x531 = INT64_MAX;
	uint32_t x532 = 936U;
	static volatile int32_t t132 = -1;

    t132 = ((x529!=x530)==(x531^x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x533 = 8U;
	uint8_t x534 = UINT8_MAX;
	int8_t x535 = -1;
	volatile int32_t t133 = 457511;

    t133 = ((x533!=x534)==(x535^x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = -1LL;
	uint32_t x539 = 50854U;
	static uint16_t x540 = UINT16_MAX;
	static int32_t t134 = -1;

    t134 = ((x537!=x538)==(x539^x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x542 = INT32_MIN;
	uint32_t x543 = 460U;
	int32_t t135 = -894169;

    t135 = ((x541!=x542)==(x543^x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x545 = 5246892351022LLU;
	uint16_t x547 = 12138U;
	int64_t x548 = INT64_MAX;
	int32_t t136 = 126868982;

    t136 = ((x545!=x546)==(x547^x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint64_t x549 = 2LLU;
	volatile uint32_t x550 = 204482521U;
	int32_t x552 = INT32_MIN;
	int32_t t137 = 431206165;

    t137 = ((x549!=x550)==(x551^x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x553 = 38U;
	int64_t x554 = INT64_MAX;
	volatile int32_t x555 = -32;
	volatile int16_t x556 = INT16_MIN;

    t138 = ((x553!=x554)==(x555^x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x557 = INT32_MIN;
	volatile uint32_t x558 = 117809U;
	int32_t x559 = 660;
	volatile int32_t t139 = -1354;

    t139 = ((x557!=x558)==(x559^x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x561 = 127U;
	int32_t x562 = -573060;
	volatile uint16_t x563 = 35U;
	int8_t x564 = INT8_MIN;

    t140 = ((x561!=x562)==(x563^x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint16_t x565 = 3677U;
	uint16_t x566 = 113U;
	int64_t x567 = INT64_MAX;
	static int32_t x568 = INT32_MIN;
	static int32_t t141 = -341680;

    t141 = ((x565!=x566)==(x567^x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x569 = UINT16_MAX;
	static int8_t x570 = INT8_MIN;
	int8_t x571 = 13;
	static volatile uint16_t x572 = 12U;
	static volatile int32_t t142 = 0;

    t142 = ((x569!=x570)==(x571^x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint32_t x574 = 598U;
	static volatile uint32_t x575 = 17061U;
	int8_t x576 = -29;
	volatile int32_t t143 = -64895110;

    t143 = ((x573!=x574)==(x575^x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x577 = UINT16_MAX;
	int64_t x578 = -1LL;
	volatile int64_t x579 = 172002995044252LL;
	volatile int32_t t144 = 69;

    t144 = ((x577!=x578)==(x579^x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int64_t x582 = INT64_MIN;
	uint16_t x584 = 0U;
	static int32_t t145 = 0;

    t145 = ((x581!=x582)==(x583^x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x586 = INT8_MAX;
	uint64_t x587 = 110088LLU;
	int64_t x588 = 51LL;
	volatile int32_t t146 = -46511983;

    t146 = ((x585!=x586)==(x587^x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x589 = 2051422421137LLU;
	int16_t x591 = 831;
	int32_t t147 = 35114;

    t147 = ((x589!=x590)==(x591^x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = INT32_MAX;
	int16_t x594 = INT16_MAX;
	volatile int8_t x596 = INT8_MAX;
	int32_t t148 = 363238;

    t148 = ((x593!=x594)==(x595^x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x597 = 1562486057017LLU;
	int16_t x598 = -1;
	volatile int16_t x599 = INT16_MIN;
	int16_t x600 = INT16_MIN;

    t149 = ((x597!=x598)==(x599^x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = INT32_MIN;
	int8_t x603 = INT8_MIN;
	uint64_t x604 = UINT64_MAX;

    t150 = ((x601!=x602)==(x603^x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int32_t x605 = INT32_MIN;
	uint64_t x606 = UINT64_MAX;
	int64_t x607 = -1LL;
	int8_t x608 = -18;
	volatile int32_t t151 = 1;

    t151 = ((x605!=x606)==(x607^x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x610 = INT16_MIN;
	volatile int32_t x611 = 536492;
	int32_t x612 = INT32_MIN;
	static int32_t t152 = -1;

    t152 = ((x609!=x610)==(x611^x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x613 = INT16_MAX;
	int32_t x614 = 7734719;
	uint8_t x616 = 5U;
	volatile int32_t t153 = -248207;

    t153 = ((x613!=x614)==(x615^x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = -25300440LL;
	uint32_t x618 = UINT32_MAX;

    t154 = ((x617!=x618)==(x619^x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x621 = 6167U;
	int64_t x623 = INT64_MIN;
	int64_t x624 = INT64_MAX;
	volatile int32_t t155 = 294913576;

    t155 = ((x621!=x622)==(x623^x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x626 = INT32_MAX;
	int8_t x627 = INT8_MIN;
	volatile int32_t t156 = -22215893;

    t156 = ((x625!=x626)==(x627^x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x630 = -1;
	int32_t x631 = INT32_MAX;
	uint64_t x632 = UINT64_MAX;
	static volatile int32_t t157 = 651412;

    t157 = ((x629!=x630)==(x631^x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint8_t x633 = UINT8_MAX;
	uint64_t x634 = 41344LLU;
	int16_t x636 = INT16_MAX;
	volatile int32_t t158 = 2263;

    t158 = ((x633!=x634)==(x635^x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = -1;
	int32_t x638 = INT32_MIN;
	uint16_t x640 = 1366U;
	int32_t t159 = 2;

    t159 = ((x637!=x638)==(x639^x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x641 = UINT16_MAX;
	int16_t x643 = -1;
	static uint16_t x644 = UINT16_MAX;
	static int32_t t160 = 3134;

    t160 = ((x641!=x642)==(x643^x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = -1LL;
	int16_t x646 = -1;
	uint8_t x647 = 46U;
	int64_t x648 = INT64_MIN;

    t161 = ((x645!=x646)==(x647^x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = -1;
	volatile int16_t x650 = INT16_MIN;
	int64_t x651 = INT64_MAX;
	uint16_t x652 = 1U;
	int32_t t162 = 33570976;

    t162 = ((x649!=x650)==(x651^x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x654 = INT64_MIN;
	int64_t x655 = INT64_MIN;
	volatile uint8_t x656 = 23U;
	volatile int32_t t163 = -14630952;

    t163 = ((x653!=x654)==(x655^x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x658 = INT16_MIN;
	static volatile uint16_t x659 = UINT16_MAX;
	uint8_t x660 = UINT8_MAX;
	volatile int32_t t164 = 92269;

    t164 = ((x657!=x658)==(x659^x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = 0;
	int16_t x664 = INT16_MIN;
	int32_t t165 = 74290;

    t165 = ((x661!=x662)==(x663^x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = -278820433;
	volatile int16_t x666 = 2;
	static volatile int64_t x667 = -1LL;
	int32_t x668 = -3;

    t166 = ((x665!=x666)==(x667^x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int16_t x669 = -1;
	static int64_t x670 = -1LL;
	int64_t x671 = -22529172197LL;
	static int64_t x672 = INT64_MIN;
	static int32_t t167 = 0;

    t167 = ((x669!=x670)==(x671^x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = 1474067259092179LL;
	int32_t x674 = INT32_MAX;
	int64_t x675 = 16698608017697244LL;
	static int16_t x676 = -12;

    t168 = ((x673!=x674)==(x675^x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = INT8_MIN;
	int8_t x678 = -1;
	static volatile uint16_t x679 = 107U;
	uint16_t x680 = 489U;
	int32_t t169 = 218;

    t169 = ((x677!=x678)==(x679^x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = INT32_MAX;
	static int16_t x682 = INT16_MIN;
	static uint32_t x683 = UINT32_MAX;
	uint8_t x684 = 1U;

    t170 = ((x681!=x682)==(x683^x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x685 = 836097784528378030LLU;
	int64_t x686 = INT64_MAX;
	int64_t x687 = INT64_MAX;
	int64_t x688 = INT64_MIN;

    t171 = ((x685!=x686)==(x687^x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x690 = INT8_MIN;
	uint16_t x691 = 0U;
	int64_t x692 = INT64_MIN;
	volatile int32_t t172 = -32;

    t172 = ((x689!=x690)==(x691^x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = INT8_MIN;
	volatile uint16_t x694 = 182U;
	int16_t x695 = INT16_MAX;
	int32_t x696 = -12298689;

    t173 = ((x693!=x694)==(x695^x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x697 = INT16_MIN;
	uint8_t x698 = UINT8_MAX;
	int8_t x699 = INT8_MAX;
	static uint32_t x700 = UINT32_MAX;
	static int32_t t174 = -6;

    t174 = ((x697!=x698)==(x699^x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = INT8_MAX;
	int8_t x702 = -1;
	uint8_t x704 = 5U;
	static volatile int32_t t175 = 112048809;

    t175 = ((x701!=x702)==(x703^x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x705 = -3941;
	int8_t x706 = 20;
	int64_t x707 = INT64_MIN;
	static int32_t t176 = -851734;

    t176 = ((x705!=x706)==(x707^x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = -14641;
	int64_t x710 = INT64_MIN;
	static int16_t x711 = 12678;
	static volatile int32_t t177 = 4;

    t177 = ((x709!=x710)==(x711^x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = INT32_MIN;
	uint64_t x714 = 58290317836168012LLU;
	volatile int32_t x715 = -5311725;
	static volatile int32_t x716 = INT32_MIN;
	volatile int32_t t178 = 65144;

    t178 = ((x713!=x714)==(x715^x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = 9667807;
	int8_t x718 = -54;
	volatile int16_t x720 = -184;
	int32_t t179 = -34;

    t179 = ((x717!=x718)==(x719^x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x722 = 28U;
	int32_t x723 = INT32_MAX;
	int16_t x724 = INT16_MAX;
	int32_t t180 = 7;

    t180 = ((x721!=x722)==(x723^x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x725 = -1315;
	volatile int64_t x726 = INT64_MIN;
	int8_t x727 = INT8_MIN;

    t181 = ((x725!=x726)==(x727^x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint32_t x729 = 119U;
	volatile int16_t x730 = -459;
	int64_t x731 = -1LL;
	static int32_t t182 = -14182734;

    t182 = ((x729!=x730)==(x731^x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = -1;
	uint8_t x734 = 11U;
	volatile uint32_t x735 = 52U;
	uint8_t x736 = UINT8_MAX;
	int32_t t183 = -208;

    t183 = ((x733!=x734)==(x735^x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x737 = 291908793236948203LL;
	volatile int32_t x738 = -1;

    t184 = ((x737!=x738)==(x739^x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x741 = 626U;
	volatile int64_t x742 = -1LL;
	volatile int16_t x743 = -1;
	int64_t x744 = 5373653856LL;
	static int32_t t185 = -77126894;

    t185 = ((x741!=x742)==(x743^x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint64_t x745 = UINT64_MAX;
	uint32_t x746 = 3810U;
	int32_t x747 = INT32_MIN;
	volatile int32_t t186 = 0;

    t186 = ((x745!=x746)==(x747^x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x750 = 406LLU;
	volatile uint16_t x751 = UINT16_MAX;
	uint32_t x752 = 482642U;
	volatile int32_t t187 = 7964;

    t187 = ((x749!=x750)==(x751^x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x754 = INT8_MAX;
	int32_t x755 = -1;
	int64_t x756 = INT64_MAX;
	static int32_t t188 = 863;

    t188 = ((x753!=x754)==(x755^x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = INT16_MIN;
	static int8_t x758 = -5;
	volatile int8_t x759 = 2;
	int64_t x760 = 21863264346995LL;

    t189 = ((x757!=x758)==(x759^x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x761 = INT32_MIN;
	uint64_t x762 = 375LLU;
	volatile int16_t x763 = INT16_MIN;
	volatile uint16_t x764 = UINT16_MAX;

    t190 = ((x761!=x762)==(x763^x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x765 = INT8_MIN;
	static int8_t x766 = INT8_MAX;
	int8_t x767 = 5;
	uint64_t x768 = 3350011LLU;
	int32_t t191 = -151342;

    t191 = ((x765!=x766)==(x767^x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x769 = INT32_MIN;
	uint16_t x770 = 2U;
	int64_t x771 = 1LL;
	uint32_t x772 = 5977077U;
	static volatile int32_t t192 = -1;

    t192 = ((x769!=x770)==(x771^x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = -1106693513797960656LL;
	int8_t x774 = INT8_MAX;
	static int16_t x775 = -1;
	int32_t t193 = 10090498;

    t193 = ((x773!=x774)==(x775^x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = INT64_MAX;
	int32_t x778 = INT32_MAX;
	uint32_t x780 = 1U;

    t194 = ((x777!=x778)==(x779^x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = INT16_MAX;
	int32_t x782 = INT32_MAX;
	static uint8_t x783 = 28U;
	static int32_t t195 = -222709;

    t195 = ((x781!=x782)==(x783^x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int16_t x786 = INT16_MIN;
	uint8_t x788 = 49U;
	volatile int32_t t196 = -13615;

    t196 = ((x785!=x786)==(x787^x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = 15090;
	static int64_t x790 = 86283LL;
	int64_t x791 = -1LL;
	volatile uint64_t x792 = 31167893744864735LLU;
	int32_t t197 = -186079609;

    t197 = ((x789!=x790)==(x791^x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint32_t x794 = 3907U;
	int32_t x795 = -11200;
	volatile int16_t x796 = -1;

    t198 = ((x793!=x794)==(x795^x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint8_t x798 = 84U;
	int64_t x799 = -1LL;
	uint16_t x800 = 3U;
	volatile int32_t t199 = 220268346;

    t199 = ((x797!=x798)==(x799^x800));

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

