
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

static uint16_t x2 = 61U;
int64_t x3 = INT64_MIN;
int32_t x7 = -151;
static int32_t t1 = 1;
static int16_t x12 = INT16_MAX;
int32_t x18 = INT32_MAX;
int32_t t5 = -55482;
uint32_t x25 = 135820U;
uint16_t x26 = 2U;
volatile uint16_t x29 = 2249U;
static volatile int32_t t11 = -16129912;
volatile uint16_t x49 = UINT16_MAX;
int8_t x55 = -3;
static uint64_t x58 = 843250554LLU;
static int8_t x59 = 3;
int32_t x60 = INT32_MIN;
int16_t x64 = INT16_MAX;
uint64_t x65 = 1LLU;
int32_t t19 = -13;
static int64_t x95 = -1154LL;
volatile int8_t x96 = INT8_MIN;
int16_t x99 = -1;
volatile int64_t x106 = INT64_MAX;
uint16_t x110 = 0U;
static int8_t x112 = INT8_MIN;
static uint16_t x113 = 799U;
int32_t x119 = -1;
static volatile int32_t t29 = 69677;
int16_t x123 = INT16_MIN;
int32_t t30 = -994392663;
static int8_t x125 = INT8_MIN;
volatile int32_t x129 = -421;
int16_t x141 = -108;
volatile int32_t x145 = INT32_MIN;
static uint64_t x147 = 62LLU;
uint64_t x152 = UINT64_MAX;
static int32_t x153 = -1;
uint32_t x154 = 339U;
int32_t t38 = -510;
volatile int16_t x159 = INT16_MIN;
int64_t x165 = INT64_MAX;
int32_t x168 = INT32_MIN;
int32_t t42 = -7815561;
static uint32_t x173 = UINT32_MAX;
int64_t x179 = INT64_MIN;
int32_t x181 = INT32_MIN;
int16_t x182 = INT16_MIN;
volatile int32_t t45 = -125614422;
static int32_t t46 = -1;
int16_t x197 = INT16_MIN;
int16_t x199 = 587;
uint16_t x202 = UINT16_MAX;
static int64_t x207 = 1085313LL;
volatile uint8_t x220 = 125U;
static int8_t x221 = INT8_MIN;
volatile uint16_t x230 = UINT16_MAX;
int32_t x233 = -1;
uint16_t x236 = 193U;
volatile int16_t x241 = -2589;
uint64_t x245 = UINT64_MAX;
static uint64_t x248 = UINT64_MAX;
int64_t x250 = INT64_MIN;
volatile int32_t t62 = 1047;
volatile int32_t x254 = 524;
int8_t x255 = INT8_MIN;
int64_t x258 = INT64_MAX;
volatile int16_t x264 = -1;
static volatile int32_t t66 = 23;
static int32_t t67 = -46544;
int32_t x275 = INT32_MIN;
int32_t t69 = -2019756;
static int32_t x285 = INT32_MAX;
static volatile int32_t x288 = -1;
static volatile uint8_t x289 = UINT8_MAX;
volatile int16_t x291 = INT16_MIN;
int8_t x294 = INT8_MIN;
uint16_t x307 = 16395U;
int32_t t78 = 28;
static int8_t x318 = INT8_MIN;
int8_t x319 = INT8_MIN;
static int32_t x323 = INT32_MAX;
int32_t t83 = -620878723;
static int16_t x342 = INT16_MIN;
int16_t x345 = INT16_MIN;
static int32_t t88 = 304536750;
static int16_t x358 = -1;
uint8_t x359 = UINT8_MAX;
int32_t x360 = INT32_MIN;
static uint64_t x361 = 441592828LLU;
volatile int32_t t91 = -328603;
uint16_t x372 = 2013U;
volatile int32_t t92 = -7015822;
volatile int32_t x378 = -1;
int64_t x380 = -211904LL;
int32_t t94 = -648843431;
static uint32_t x381 = 19U;
int8_t x382 = 0;
static volatile uint16_t x383 = 31337U;
volatile uint16_t x385 = 60U;
int8_t x388 = -1;
int32_t x391 = -1;
static uint8_t x392 = UINT8_MAX;
volatile int32_t t97 = -517920514;
static int32_t x393 = -63408;
volatile int32_t x399 = 96035713;
int32_t x402 = INT32_MIN;
int8_t x405 = INT8_MIN;
int8_t x407 = INT8_MAX;
volatile uint8_t x409 = 19U;
int32_t x412 = INT32_MAX;
int32_t x420 = INT32_MAX;
volatile int32_t t105 = 7;
static int32_t x430 = INT32_MIN;
int64_t x436 = -806827LL;
int16_t x438 = INT16_MIN;
int64_t x441 = 46970665371244LL;
int8_t x443 = INT8_MIN;
static int16_t x458 = INT16_MAX;
volatile int8_t x472 = INT8_MAX;
int32_t x473 = -1;
int32_t t118 = 0;
int64_t x478 = INT64_MIN;
static int8_t x480 = INT8_MIN;
int8_t x483 = -1;
uint16_t x492 = UINT16_MAX;
volatile int16_t x496 = INT16_MIN;
int32_t t123 = 2195179;
volatile int32_t x504 = INT32_MAX;
uint64_t x511 = 20LLU;
int32_t t128 = -37775493;
static int8_t x519 = INT8_MIN;
uint16_t x521 = 94U;
volatile int64_t x530 = INT64_MAX;
uint32_t x536 = UINT32_MAX;
volatile int64_t x544 = INT64_MAX;
uint64_t x548 = 8661699479166330LLU;
int16_t x550 = -1;
uint64_t x551 = UINT64_MAX;
volatile int16_t x555 = -1;
static volatile int64_t x560 = INT64_MAX;
volatile uint32_t x563 = 3435182U;
volatile int32_t t140 = -5632725;
volatile int64_t x569 = INT64_MIN;
static uint8_t x573 = UINT8_MAX;
uint16_t x574 = 23119U;
int8_t x592 = 0;
int32_t t149 = -17;
int32_t x611 = 1;
int8_t x619 = 12;
static int16_t x625 = -1;
uint8_t x627 = 1U;
uint8_t x628 = UINT8_MAX;
volatile int32_t t156 = 988805812;
volatile int32_t t159 = -22779;
volatile int8_t x641 = 1;
int32_t x651 = INT32_MIN;
volatile int32_t t162 = -751982424;
int16_t x656 = INT16_MIN;
volatile int32_t t163 = 11;
int8_t x664 = INT8_MAX;
volatile uint32_t x668 = 1535U;
int32_t x670 = -6747188;
int8_t x674 = INT8_MAX;
volatile int32_t x678 = -1;
static int64_t x690 = INT64_MIN;
volatile uint16_t x697 = 462U;
static int32_t x705 = INT32_MIN;
volatile int64_t x710 = INT64_MAX;
volatile int8_t x717 = -1;
volatile int32_t t179 = 28684;
int32_t t180 = -27;
int32_t t181 = -1135;
uint16_t x729 = UINT16_MAX;
int32_t t182 = -942654;
int32_t t183 = 899546112;
int16_t x742 = 4169;
int32_t x743 = INT32_MIN;
static volatile int32_t t185 = -10;
static int32_t x758 = INT32_MIN;
int32_t x763 = INT32_MIN;
int32_t t190 = -58428;
int16_t x774 = -652;
int32_t t194 = 56;
static volatile int32_t t195 = 50;
static volatile int16_t x786 = 1;
int16_t x798 = -229;
volatile int32_t t199 = 2;


void f0(void) {
    	static volatile int64_t x1 = INT64_MIN;
	int8_t x4 = INT8_MAX;
	int32_t t0 = -51841;

    t0 = ((x1^x2)>(x3<=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int16_t x5 = INT16_MIN;
	uint16_t x6 = 741U;
	volatile uint64_t x8 = 4423596LLU;

    t1 = ((x5^x6)>(x7<=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = -412;
	static uint16_t x10 = UINT16_MAX;
	static int32_t x11 = INT32_MIN;
	int32_t t2 = -9464;

    t2 = ((x9^x10)>(x11<=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x13 = 11;
	int16_t x14 = INT16_MIN;
	int16_t x15 = -1;
	static int64_t x16 = INT64_MIN;
	volatile int32_t t3 = 13085;

    t3 = ((x13^x14)>(x15<=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = UINT32_MAX;
	uint32_t x19 = 121U;
	volatile uint32_t x20 = 87081478U;
	static int32_t t4 = 25965;

    t4 = ((x17^x18)>(x19<=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = -1;
	volatile int32_t x22 = -1;
	uint16_t x23 = 323U;
	volatile int16_t x24 = -19;

    t5 = ((x21^x22)>(x23<=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x27 = 6U;
	uint16_t x28 = 221U;
	int32_t t6 = 603221306;

    t6 = ((x25^x26)>(x27<=x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x30 = 1U;
	volatile uint16_t x31 = UINT16_MAX;
	int16_t x32 = -14;
	int32_t t7 = 59650;

    t7 = ((x29^x30)>(x31<=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 237LLU;
	volatile int16_t x34 = INT16_MIN;
	uint8_t x35 = UINT8_MAX;
	int64_t x36 = INT64_MAX;
	int32_t t8 = -110830;

    t8 = ((x33^x34)>(x35<=x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x37 = -7;
	int8_t x38 = 57;
	uint32_t x39 = UINT32_MAX;
	volatile uint32_t x40 = 254007184U;
	int32_t t9 = -37886;

    t9 = ((x37^x38)>(x39<=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = 11820LL;
	uint16_t x42 = 0U;
	uint8_t x43 = UINT8_MAX;
	uint16_t x44 = UINT16_MAX;
	int32_t t10 = 36365476;

    t10 = ((x41^x42)>(x43<=x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = 5648082205LL;
	int8_t x46 = 14;
	static int32_t x47 = -1;
	int64_t x48 = -1LL;

    t11 = ((x45^x46)>(x47<=x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x50 = INT16_MIN;
	volatile int16_t x51 = -1;
	uint64_t x52 = 2863001831982349LLU;
	int32_t t12 = 3741;

    t12 = ((x49^x50)>(x51<=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x53 = 128290125U;
	int64_t x54 = -6LL;
	int16_t x56 = INT16_MAX;
	int32_t t13 = 3195;

    t13 = ((x53^x54)>(x55<=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = -1;
	volatile int32_t t14 = -4;

    t14 = ((x57^x58)>(x59<=x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = -842LL;
	int64_t x62 = INT64_MIN;
	uint32_t x63 = UINT32_MAX;
	volatile int32_t t15 = 1799494;

    t15 = ((x61^x62)>(x63<=x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x66 = -1;
	volatile int32_t x67 = INT32_MAX;
	int16_t x68 = INT16_MIN;
	static volatile int32_t t16 = -24227751;

    t16 = ((x65^x66)>(x67<=x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = -1;
	static uint8_t x70 = UINT8_MAX;
	static int32_t x71 = INT32_MAX;
	volatile uint64_t x72 = UINT64_MAX;
	int32_t t17 = 3843;

    t17 = ((x69^x70)>(x71<=x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MAX;
	volatile int32_t x74 = INT32_MIN;
	int8_t x75 = INT8_MIN;
	int16_t x76 = INT16_MIN;
	volatile int32_t t18 = 9139775;

    t18 = ((x73^x74)>(x75<=x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MAX;
	static uint64_t x78 = UINT64_MAX;
	int32_t x79 = INT32_MIN;
	int32_t x80 = -1;

    t19 = ((x77^x78)>(x79<=x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint32_t x81 = 694U;
	int16_t x82 = -5823;
	static int32_t x83 = INT32_MIN;
	int16_t x84 = 12;
	static volatile int32_t t20 = -812980;

    t20 = ((x81^x82)>(x83<=x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint64_t x85 = 20004229984180LLU;
	int32_t x86 = INT32_MIN;
	int16_t x87 = INT16_MIN;
	int8_t x88 = INT8_MAX;
	int32_t t21 = 37405;

    t21 = ((x85^x86)>(x87<=x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = 210662LLU;
	int64_t x90 = 128279LL;
	uint8_t x91 = 15U;
	uint8_t x92 = 2U;
	int32_t t22 = 123747;

    t22 = ((x89^x90)>(x91<=x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x93 = UINT32_MAX;
	volatile uint32_t x94 = 799084U;
	volatile int32_t t23 = -1;

    t23 = ((x93^x94)>(x95<=x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x97 = 0;
	static uint32_t x98 = 518110U;
	volatile int16_t x100 = 0;
	static int32_t t24 = 3;

    t24 = ((x97^x98)>(x99<=x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = INT64_MIN;
	volatile uint16_t x102 = 247U;
	static int32_t x103 = 2325159;
	int16_t x104 = -5719;
	volatile int32_t t25 = 10;

    t25 = ((x101^x102)>(x103<=x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x105 = INT16_MIN;
	int16_t x107 = 5;
	int32_t x108 = -1;
	int32_t t26 = 3;

    t26 = ((x105^x106)>(x107<=x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = -16349426838449007LL;
	int8_t x111 = -1;
	volatile int32_t t27 = 930155;

    t27 = ((x109^x110)>(x111<=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x114 = -138160774;
	static int8_t x115 = INT8_MAX;
	int16_t x116 = 329;
	int32_t t28 = -1053479;

    t28 = ((x113^x114)>(x115<=x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = 803706348LL;
	volatile uint16_t x118 = 1U;
	int64_t x120 = -1LL;

    t29 = ((x117^x118)>(x119<=x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = INT64_MIN;
	int8_t x122 = INT8_MIN;
	int16_t x124 = INT16_MIN;

    t30 = ((x121^x122)>(x123<=x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x126 = 127;
	int16_t x127 = INT16_MAX;
	volatile int8_t x128 = INT8_MIN;
	static int32_t t31 = 6201049;

    t31 = ((x125^x126)>(x127<=x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x130 = -9;
	static int8_t x131 = INT8_MAX;
	volatile uint64_t x132 = 45945298LLU;
	int32_t t32 = 49249;

    t32 = ((x129^x130)>(x131<=x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MAX;
	volatile uint32_t x134 = 31645U;
	int32_t x135 = INT32_MAX;
	int32_t x136 = -1;
	volatile int32_t t33 = -869;

    t33 = ((x133^x134)>(x135<=x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = INT16_MAX;
	int8_t x138 = INT8_MAX;
	int8_t x139 = -27;
	volatile int16_t x140 = INT16_MIN;
	int32_t t34 = -467;

    t34 = ((x137^x138)>(x139<=x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x142 = INT64_MIN;
	static uint64_t x143 = 1842105913361443206LLU;
	int32_t x144 = INT32_MIN;
	int32_t t35 = 13;

    t35 = ((x141^x142)>(x143<=x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x146 = 5U;
	uint8_t x148 = 15U;
	int32_t t36 = 2;

    t36 = ((x145^x146)>(x147<=x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = -58906331;
	static int32_t x150 = -1;
	volatile int32_t x151 = INT32_MIN;
	int32_t t37 = 120336207;

    t37 = ((x149^x150)>(x151<=x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x155 = -1;
	int32_t x156 = INT32_MIN;

    t38 = ((x153^x154)>(x155<=x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = -1;
	int8_t x158 = INT8_MAX;
	static int8_t x160 = -1;
	volatile int32_t t39 = 221449144;

    t39 = ((x157^x158)>(x159<=x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = INT8_MAX;
	uint64_t x162 = 9328847LLU;
	static int16_t x163 = INT16_MIN;
	static int32_t x164 = INT32_MAX;
	int32_t t40 = -3289;

    t40 = ((x161^x162)>(x163<=x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x166 = 74U;
	uint32_t x167 = UINT32_MAX;
	volatile int32_t t41 = -12431473;

    t41 = ((x165^x166)>(x167<=x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MIN;
	static volatile int8_t x170 = -1;
	int16_t x171 = INT16_MAX;
	uint32_t x172 = 1U;

    t42 = ((x169^x170)>(x171<=x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint8_t x174 = 15U;
	uint8_t x175 = UINT8_MAX;
	uint16_t x176 = 7943U;
	static int32_t t43 = -1266;

    t43 = ((x173^x174)>(x175<=x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x177 = INT32_MAX;
	int8_t x178 = INT8_MAX;
	uint16_t x180 = 1015U;
	volatile int32_t t44 = -257;

    t44 = ((x177^x178)>(x179<=x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint8_t x183 = UINT8_MAX;
	int32_t x184 = -8331;

    t45 = ((x181^x182)>(x183<=x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x185 = 696457971549LL;
	int8_t x186 = -52;
	int32_t x187 = INT32_MIN;
	int8_t x188 = INT8_MIN;

    t46 = ((x185^x186)>(x187<=x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = INT8_MAX;
	int8_t x190 = -19;
	static volatile int32_t x191 = INT32_MAX;
	int16_t x192 = -1;
	int32_t t47 = -2601567;

    t47 = ((x189^x190)>(x191<=x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = -1872981;
	static uint8_t x194 = 40U;
	int16_t x195 = -5234;
	uint64_t x196 = UINT64_MAX;
	int32_t t48 = 1;

    t48 = ((x193^x194)>(x195<=x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x198 = INT64_MIN;
	volatile int8_t x200 = 10;
	volatile int32_t t49 = -3978;

    t49 = ((x197^x198)>(x199<=x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x201 = 2305U;
	int32_t x203 = -139471656;
	static volatile int64_t x204 = 798LL;
	volatile int32_t t50 = 7141656;

    t50 = ((x201^x202)>(x203<=x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x205 = 2862;
	int8_t x206 = INT8_MIN;
	int64_t x208 = 853869441800588LL;
	static int32_t t51 = 928;

    t51 = ((x205^x206)>(x207<=x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = -1;
	int64_t x210 = -3236362524819LL;
	int64_t x211 = INT64_MIN;
	static int32_t x212 = INT32_MAX;
	int32_t t52 = 2773760;

    t52 = ((x209^x210)>(x211<=x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x213 = INT16_MIN;
	int8_t x214 = INT8_MIN;
	uint8_t x215 = 40U;
	uint16_t x216 = 2U;
	volatile int32_t t53 = 2959234;

    t53 = ((x213^x214)>(x215<=x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x217 = -1;
	uint32_t x218 = UINT32_MAX;
	uint16_t x219 = UINT16_MAX;
	volatile int32_t t54 = -4617;

    t54 = ((x217^x218)>(x219<=x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint16_t x222 = UINT16_MAX;
	uint32_t x223 = 440666U;
	volatile int64_t x224 = -1LL;
	static volatile int32_t t55 = -18;

    t55 = ((x221^x222)>(x223<=x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile uint32_t x225 = 1028251525U;
	volatile int64_t x226 = -1LL;
	int8_t x227 = INT8_MAX;
	int8_t x228 = INT8_MIN;
	volatile int32_t t56 = -102472157;

    t56 = ((x225^x226)>(x227<=x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x229 = INT16_MAX;
	int32_t x231 = 0;
	volatile uint16_t x232 = 1U;
	int32_t t57 = 559247;

    t57 = ((x229^x230)>(x231<=x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x234 = -1;
	uint64_t x235 = UINT64_MAX;
	int32_t t58 = 3802;

    t58 = ((x233^x234)>(x235<=x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = -1;
	uint8_t x238 = 0U;
	uint64_t x239 = 7715785580698972LLU;
	int8_t x240 = -1;
	int32_t t59 = -1698656;

    t59 = ((x237^x238)>(x239<=x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x242 = INT8_MAX;
	static uint32_t x243 = 19235U;
	static uint16_t x244 = 688U;
	int32_t t60 = 1444;

    t60 = ((x241^x242)>(x243<=x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x246 = -1LL;
	uint16_t x247 = 1U;
	volatile int32_t t61 = -10;

    t61 = ((x245^x246)>(x247<=x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x249 = 12U;
	int32_t x251 = -1;
	uint8_t x252 = 3U;

    t62 = ((x249^x250)>(x251<=x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = -1;
	int16_t x256 = -12;
	int32_t t63 = -2685;

    t63 = ((x253^x254)>(x255<=x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = -3896;
	int32_t x259 = INT32_MIN;
	uint8_t x260 = UINT8_MAX;
	int32_t t64 = 30;

    t64 = ((x257^x258)>(x259<=x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = 505989;
	int32_t x262 = INT32_MIN;
	static int16_t x263 = INT16_MIN;
	int32_t t65 = 855186458;

    t65 = ((x261^x262)>(x263<=x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x265 = 3LLU;
	int8_t x266 = INT8_MIN;
	volatile int32_t x267 = 236;
	int32_t x268 = INT32_MAX;

    t66 = ((x265^x266)>(x267<=x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x269 = UINT16_MAX;
	uint64_t x270 = 23044036098966LLU;
	uint64_t x271 = 4314834458304824924LLU;
	int8_t x272 = 0;

    t67 = ((x269^x270)>(x271<=x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x273 = UINT64_MAX;
	volatile int16_t x274 = INT16_MIN;
	uint64_t x276 = 15LLU;
	int32_t t68 = -366368109;

    t68 = ((x273^x274)>(x275<=x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x277 = 0U;
	int16_t x278 = INT16_MIN;
	static int8_t x279 = -1;
	static int8_t x280 = -1;

    t69 = ((x277^x278)>(x279<=x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = 0;
	uint32_t x282 = UINT32_MAX;
	volatile int8_t x283 = INT8_MIN;
	volatile int64_t x284 = INT64_MIN;
	volatile int32_t t70 = 35613149;

    t70 = ((x281^x282)>(x283<=x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x286 = -2;
	int16_t x287 = -4;
	volatile int32_t t71 = 18279;

    t71 = ((x285^x286)>(x287<=x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x290 = -1LL;
	static int8_t x292 = -1;
	int32_t t72 = -48;

    t72 = ((x289^x290)>(x291<=x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int16_t x293 = -1;
	uint32_t x295 = 54407U;
	static uint32_t x296 = 1U;
	int32_t t73 = 11;

    t73 = ((x293^x294)>(x295<=x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x297 = 1756304444082216904LLU;
	int8_t x298 = INT8_MIN;
	static int16_t x299 = INT16_MIN;
	int64_t x300 = 1051455192141635120LL;
	volatile int32_t t74 = 1224351;

    t74 = ((x297^x298)>(x299<=x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x301 = 22U;
	int64_t x302 = INT64_MIN;
	uint64_t x303 = UINT64_MAX;
	uint16_t x304 = UINT16_MAX;
	int32_t t75 = -13405;

    t75 = ((x301^x302)>(x303<=x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = -9LL;
	uint8_t x306 = UINT8_MAX;
	int8_t x308 = 2;
	volatile int32_t t76 = -73;

    t76 = ((x305^x306)>(x307<=x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = INT32_MIN;
	uint64_t x310 = UINT64_MAX;
	uint32_t x311 = 55461942U;
	int64_t x312 = INT64_MIN;
	volatile int32_t t77 = 2217321;

    t77 = ((x309^x310)>(x311<=x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x313 = 498U;
	uint16_t x314 = UINT16_MAX;
	uint16_t x315 = 12U;
	static int64_t x316 = 1015LL;

    t78 = ((x313^x314)>(x315<=x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = INT8_MIN;
	static int64_t x320 = 14811092324235267LL;
	int32_t t79 = 0;

    t79 = ((x317^x318)>(x319<=x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x321 = 15921359096LLU;
	volatile int64_t x322 = -217488469LL;
	static volatile uint32_t x324 = 304614616U;
	static volatile int32_t t80 = 5;

    t80 = ((x321^x322)>(x323<=x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x325 = -7169818LL;
	uint16_t x326 = UINT16_MAX;
	volatile uint8_t x327 = UINT8_MAX;
	static volatile int8_t x328 = INT8_MIN;
	volatile int32_t t81 = 2947;

    t81 = ((x325^x326)>(x327<=x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x329 = 114U;
	volatile uint64_t x330 = 201270651LLU;
	static int16_t x331 = INT16_MAX;
	int32_t x332 = INT32_MIN;
	int32_t t82 = -50072788;

    t82 = ((x329^x330)>(x331<=x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x333 = INT32_MIN;
	int16_t x334 = 0;
	static int32_t x335 = INT32_MAX;
	uint32_t x336 = UINT32_MAX;

    t83 = ((x333^x334)>(x335<=x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x337 = 2189;
	volatile int16_t x338 = -1;
	uint16_t x339 = 44U;
	int8_t x340 = INT8_MIN;
	volatile int32_t t84 = -115385625;

    t84 = ((x337^x338)>(x339<=x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = INT64_MIN;
	int64_t x343 = -4307867420063LL;
	int8_t x344 = -1;
	volatile int32_t t85 = -2130;

    t85 = ((x341^x342)>(x343<=x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x346 = -1;
	uint8_t x347 = UINT8_MAX;
	int32_t x348 = INT32_MAX;
	static volatile int32_t t86 = -55339;

    t86 = ((x345^x346)>(x347<=x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x349 = 11U;
	static uint16_t x350 = UINT16_MAX;
	int8_t x351 = INT8_MIN;
	int8_t x352 = INT8_MIN;
	int32_t t87 = -956985;

    t87 = ((x349^x350)>(x351<=x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MIN;
	volatile uint8_t x354 = 33U;
	volatile uint32_t x355 = UINT32_MAX;
	int32_t x356 = INT32_MIN;

    t88 = ((x353^x354)>(x355<=x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = INT32_MIN;
	volatile int32_t t89 = -1866707;

    t89 = ((x357^x358)>(x359<=x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x362 = UINT32_MAX;
	int8_t x363 = INT8_MIN;
	int16_t x364 = INT16_MAX;
	volatile int32_t t90 = 191661134;

    t90 = ((x361^x362)>(x363<=x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = 6354672;
	int16_t x366 = INT16_MIN;
	int8_t x367 = 5;
	int64_t x368 = -1LL;

    t91 = ((x365^x366)>(x367<=x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = -722357314559047396LL;
	uint32_t x370 = UINT32_MAX;
	static int16_t x371 = INT16_MIN;

    t92 = ((x369^x370)>(x371<=x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = INT64_MIN;
	uint8_t x374 = 37U;
	int64_t x375 = -1718679531068808459LL;
	int32_t x376 = 3025706;
	int32_t t93 = 20597;

    t93 = ((x373^x374)>(x375<=x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x377 = INT64_MAX;
	int8_t x379 = 46;

    t94 = ((x377^x378)>(x379<=x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x384 = 2992973;
	volatile int32_t t95 = 859;

    t95 = ((x381^x382)>(x383<=x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x386 = 1U;
	uint32_t x387 = UINT32_MAX;
	static int32_t t96 = -11178664;

    t96 = ((x385^x386)>(x387<=x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x389 = 446U;
	static volatile uint32_t x390 = 121U;

    t97 = ((x389^x390)>(x391<=x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x394 = INT8_MAX;
	uint32_t x395 = UINT32_MAX;
	int64_t x396 = -187109730LL;
	int32_t t98 = 0;

    t98 = ((x393^x394)>(x395<=x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile uint32_t x397 = 65738193U;
	int8_t x398 = 0;
	int16_t x400 = -1767;
	int32_t t99 = 403240;

    t99 = ((x397^x398)>(x399<=x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint64_t x401 = 201827290LLU;
	uint64_t x403 = 115853044584379408LLU;
	uint32_t x404 = UINT32_MAX;
	volatile int32_t t100 = 109651910;

    t100 = ((x401^x402)>(x403<=x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x406 = -1LL;
	int16_t x408 = INT16_MIN;
	static volatile int32_t t101 = 0;

    t101 = ((x405^x406)>(x407<=x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x410 = 1LL;
	int16_t x411 = 713;
	volatile int32_t t102 = -3735870;

    t102 = ((x409^x410)>(x411<=x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = -1LL;
	int64_t x414 = 2076996207291LL;
	static int8_t x415 = -1;
	int32_t x416 = INT32_MIN;
	volatile int32_t t103 = 913795;

    t103 = ((x413^x414)>(x415<=x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = 3;
	uint32_t x418 = UINT32_MAX;
	int16_t x419 = -913;
	int32_t t104 = -108276910;

    t104 = ((x417^x418)>(x419<=x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x421 = -1;
	volatile uint8_t x422 = 4U;
	int16_t x423 = INT16_MIN;
	uint32_t x424 = 10077608U;

    t105 = ((x421^x422)>(x423<=x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = -1;
	static uint64_t x426 = 70897088063LLU;
	int32_t x427 = -6249;
	int16_t x428 = INT16_MAX;
	int32_t t106 = 0;

    t106 = ((x425^x426)>(x427<=x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint64_t x429 = 3LLU;
	int64_t x431 = INT64_MIN;
	static volatile int32_t x432 = 4;
	static volatile int32_t t107 = 48;

    t107 = ((x429^x430)>(x431<=x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x433 = 20384U;
	int32_t x434 = INT32_MAX;
	uint32_t x435 = UINT32_MAX;
	static volatile int32_t t108 = 4;

    t108 = ((x433^x434)>(x435<=x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int8_t x437 = -1;
	int8_t x439 = INT8_MIN;
	volatile int32_t x440 = INT32_MIN;
	int32_t t109 = 9695;

    t109 = ((x437^x438)>(x439<=x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x442 = -1;
	uint16_t x444 = UINT16_MAX;
	volatile int32_t t110 = 0;

    t110 = ((x441^x442)>(x443<=x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x445 = -3;
	int64_t x446 = INT64_MIN;
	uint32_t x447 = 129362U;
	static volatile int32_t x448 = INT32_MAX;
	int32_t t111 = 10217301;

    t111 = ((x445^x446)>(x447<=x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = 3;
	int8_t x450 = INT8_MIN;
	int32_t x451 = 51343;
	volatile int16_t x452 = -1;
	int32_t t112 = -253;

    t112 = ((x449^x450)>(x451<=x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x453 = UINT32_MAX;
	volatile int8_t x454 = -1;
	int8_t x455 = INT8_MIN;
	int64_t x456 = -1LL;
	int32_t t113 = 0;

    t113 = ((x453^x454)>(x455<=x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x457 = 3816;
	volatile uint8_t x459 = 1U;
	static int16_t x460 = INT16_MIN;
	volatile int32_t t114 = 18916;

    t114 = ((x457^x458)>(x459<=x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x461 = -121704053328LL;
	volatile int32_t x462 = -1;
	int64_t x463 = INT64_MIN;
	static int8_t x464 = INT8_MAX;
	volatile int32_t t115 = -11;

    t115 = ((x461^x462)>(x463<=x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = 5;
	int64_t x466 = -1LL;
	uint16_t x467 = 66U;
	int32_t x468 = INT32_MAX;
	int32_t t116 = 2869275;

    t116 = ((x465^x466)>(x467<=x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = -1;
	int16_t x470 = INT16_MIN;
	uint8_t x471 = 2U;
	int32_t t117 = 4;

    t117 = ((x469^x470)>(x471<=x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x474 = 844;
	uint32_t x475 = 138U;
	volatile uint64_t x476 = UINT64_MAX;

    t118 = ((x473^x474)>(x475<=x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x477 = 517948115;
	static int16_t x479 = INT16_MAX;
	int32_t t119 = -4785;

    t119 = ((x477^x478)>(x479<=x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = -161215LL;
	volatile uint8_t x482 = 1U;
	static int8_t x484 = 4;
	static volatile int32_t t120 = -3571692;

    t120 = ((x481^x482)>(x483<=x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = INT32_MAX;
	int32_t x486 = -1;
	uint64_t x487 = UINT64_MAX;
	static uint16_t x488 = 1326U;
	int32_t t121 = -202;

    t121 = ((x485^x486)>(x487<=x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = -6;
	int8_t x490 = INT8_MAX;
	int8_t x491 = 0;
	static volatile int32_t t122 = 0;

    t122 = ((x489^x490)>(x491<=x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x493 = UINT32_MAX;
	static int32_t x494 = INT32_MAX;
	volatile int64_t x495 = -19520958LL;

    t123 = ((x493^x494)>(x495<=x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = -1;
	volatile int64_t x498 = -62586304521599LL;
	static int64_t x499 = -9176583290730633LL;
	int16_t x500 = -1;
	volatile int32_t t124 = 177;

    t124 = ((x497^x498)>(x499<=x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x501 = -1;
	int8_t x502 = -8;
	int8_t x503 = -1;
	static int32_t t125 = 6475331;

    t125 = ((x501^x502)>(x503<=x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = INT8_MAX;
	volatile uint16_t x506 = UINT16_MAX;
	int8_t x507 = -2;
	uint64_t x508 = 2528LLU;
	int32_t t126 = 3;

    t126 = ((x505^x506)>(x507<=x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = INT32_MIN;
	int8_t x510 = -21;
	volatile int8_t x512 = INT8_MIN;
	int32_t t127 = -22934267;

    t127 = ((x509^x510)>(x511<=x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x513 = 264066516U;
	volatile int32_t x514 = -1;
	static uint16_t x515 = 157U;
	static int32_t x516 = -1;

    t128 = ((x513^x514)>(x515<=x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = INT64_MIN;
	uint8_t x518 = UINT8_MAX;
	volatile int16_t x520 = -224;
	int32_t t129 = 3489;

    t129 = ((x517^x518)>(x519<=x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x522 = 3;
	int64_t x523 = INT64_MIN;
	volatile uint32_t x524 = UINT32_MAX;
	volatile int32_t t130 = 3541;

    t130 = ((x521^x522)>(x523<=x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint8_t x525 = 15U;
	volatile int8_t x526 = 36;
	int32_t x527 = INT32_MAX;
	int32_t x528 = 895307651;
	static volatile int32_t t131 = -26645021;

    t131 = ((x525^x526)>(x527<=x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x529 = 44;
	volatile uint8_t x531 = UINT8_MAX;
	static uint16_t x532 = 7439U;
	volatile int32_t t132 = 56832552;

    t132 = ((x529^x530)>(x531<=x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x533 = INT64_MIN;
	static uint64_t x534 = UINT64_MAX;
	static int8_t x535 = INT8_MIN;
	volatile int32_t t133 = -8232307;

    t133 = ((x533^x534)>(x535<=x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint64_t x537 = 371406643LLU;
	volatile int16_t x538 = INT16_MAX;
	volatile int32_t x539 = INT32_MIN;
	static volatile int64_t x540 = 481773184LL;
	static int32_t t134 = -257753;

    t134 = ((x537^x538)>(x539<=x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = -1;
	int32_t x542 = INT32_MAX;
	int64_t x543 = INT64_MIN;
	volatile int32_t t135 = -18120;

    t135 = ((x541^x542)>(x543<=x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = 961366086LL;
	int32_t x546 = -1;
	int64_t x547 = -1LL;
	volatile int32_t t136 = 665162125;

    t136 = ((x545^x546)>(x547<=x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = 149;
	int8_t x552 = -1;
	int32_t t137 = 1536268;

    t137 = ((x549^x550)>(x551<=x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x553 = 1023LLU;
	int64_t x554 = 1927123994LL;
	volatile uint32_t x556 = 1728U;
	volatile int32_t t138 = 64555095;

    t138 = ((x553^x554)>(x555<=x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x557 = -72;
	uint32_t x558 = UINT32_MAX;
	int32_t x559 = INT32_MAX;
	int32_t t139 = 182406;

    t139 = ((x557^x558)>(x559<=x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x561 = UINT64_MAX;
	int32_t x562 = INT32_MAX;
	int16_t x564 = -1;

    t140 = ((x561^x562)>(x563<=x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = -25419;
	uint8_t x566 = UINT8_MAX;
	volatile int64_t x567 = INT64_MAX;
	int16_t x568 = -1;
	int32_t t141 = 864112977;

    t141 = ((x565^x566)>(x567<=x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x570 = 1;
	int32_t x571 = INT32_MAX;
	static int8_t x572 = INT8_MIN;
	int32_t t142 = -116;

    t142 = ((x569^x570)>(x571<=x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x575 = 2;
	int16_t x576 = INT16_MIN;
	volatile int32_t t143 = 11977678;

    t143 = ((x573^x574)>(x575<=x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = INT8_MIN;
	uint16_t x578 = UINT16_MAX;
	int32_t x579 = INT32_MAX;
	int8_t x580 = INT8_MIN;
	volatile int32_t t144 = 1006071;

    t144 = ((x577^x578)>(x579<=x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = 0;
	int32_t x582 = -1;
	static volatile uint16_t x583 = 6717U;
	int8_t x584 = INT8_MIN;
	int32_t t145 = 5432714;

    t145 = ((x581^x582)>(x583<=x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x585 = 9231U;
	uint8_t x586 = UINT8_MAX;
	static int16_t x587 = INT16_MIN;
	static int16_t x588 = INT16_MIN;
	volatile int32_t t146 = -6;

    t146 = ((x585^x586)>(x587<=x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x589 = -940256670874200190LL;
	int32_t x590 = INT32_MAX;
	volatile int64_t x591 = INT64_MIN;
	volatile int32_t t147 = 9536238;

    t147 = ((x589^x590)>(x591<=x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = INT8_MIN;
	static int32_t x594 = INT32_MIN;
	int32_t x595 = -119;
	int16_t x596 = 7457;
	int32_t t148 = -69735;

    t148 = ((x593^x594)>(x595<=x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = -1;
	static int16_t x598 = INT16_MIN;
	uint8_t x599 = 4U;
	volatile int16_t x600 = INT16_MIN;

    t149 = ((x597^x598)>(x599<=x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x601 = INT16_MIN;
	int8_t x602 = -5;
	static int8_t x603 = 1;
	static volatile int8_t x604 = 35;
	volatile int32_t t150 = -65593150;

    t150 = ((x601^x602)>(x603<=x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = INT8_MAX;
	uint64_t x606 = UINT64_MAX;
	static volatile int64_t x607 = 31480478737319791LL;
	uint8_t x608 = UINT8_MAX;
	static int32_t t151 = 61950624;

    t151 = ((x605^x606)>(x607<=x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = -1;
	int8_t x610 = -1;
	int8_t x612 = INT8_MIN;
	int32_t t152 = -52376;

    t152 = ((x609^x610)>(x611<=x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x613 = UINT16_MAX;
	uint64_t x614 = 912870LLU;
	static int64_t x615 = INT64_MIN;
	int8_t x616 = INT8_MIN;
	volatile int32_t t153 = -672802;

    t153 = ((x613^x614)>(x615<=x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = -1;
	int64_t x618 = INT64_MIN;
	volatile int8_t x620 = INT8_MIN;
	int32_t t154 = 123904;

    t154 = ((x617^x618)>(x619<=x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = INT64_MAX;
	int64_t x622 = 103159392141378711LL;
	uint8_t x623 = 1U;
	volatile int64_t x624 = 47835LL;
	int32_t t155 = -1;

    t155 = ((x621^x622)>(x623<=x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x626 = INT16_MAX;

    t156 = ((x625^x626)>(x627<=x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = -428;
	int16_t x630 = INT16_MAX;
	int16_t x631 = -1;
	static int16_t x632 = 2417;
	volatile int32_t t157 = -30;

    t157 = ((x629^x630)>(x631<=x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = -1;
	uint64_t x634 = 2293702404900406LLU;
	int32_t x635 = INT32_MIN;
	uint32_t x636 = UINT32_MAX;
	volatile int32_t t158 = -153;

    t158 = ((x633^x634)>(x635<=x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x637 = -1924107608188LL;
	volatile int8_t x638 = -1;
	static int16_t x639 = INT16_MAX;
	int32_t x640 = -721043586;

    t159 = ((x637^x638)>(x639<=x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x642 = 56048380;
	volatile int16_t x643 = -1;
	int64_t x644 = -233044596272256LL;
	volatile int32_t t160 = -1;

    t160 = ((x641^x642)>(x643<=x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int8_t x645 = INT8_MIN;
	int64_t x646 = INT64_MAX;
	uint8_t x647 = 68U;
	int16_t x648 = INT16_MAX;
	int32_t t161 = 29;

    t161 = ((x645^x646)>(x647<=x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x649 = 7U;
	int64_t x650 = INT64_MAX;
	int8_t x652 = -1;

    t162 = ((x649^x650)>(x651<=x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = INT16_MIN;
	static int8_t x654 = INT8_MAX;
	uint8_t x655 = UINT8_MAX;

    t163 = ((x653^x654)>(x655<=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x657 = 679606334U;
	static volatile int32_t x658 = INT32_MIN;
	static int64_t x659 = 3LL;
	static int8_t x660 = -1;
	volatile int32_t t164 = 2682971;

    t164 = ((x657^x658)>(x659<=x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x661 = 257625920632316LLU;
	uint8_t x662 = 86U;
	volatile int64_t x663 = 240521144965881LL;
	volatile int32_t t165 = 127;

    t165 = ((x661^x662)>(x663<=x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x665 = 1U;
	volatile uint64_t x666 = UINT64_MAX;
	static int64_t x667 = 36850996434LL;
	int32_t t166 = -1340;

    t166 = ((x665^x666)>(x667<=x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = -1602942;
	volatile int16_t x671 = INT16_MAX;
	int8_t x672 = INT8_MIN;
	int32_t t167 = 2334040;

    t167 = ((x669^x670)>(x671<=x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x673 = 23U;
	int16_t x675 = INT16_MIN;
	int32_t x676 = INT32_MAX;
	volatile int32_t t168 = -2223772;

    t168 = ((x673^x674)>(x675<=x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x677 = -1LL;
	static int64_t x679 = -39LL;
	int16_t x680 = 590;
	int32_t t169 = 203;

    t169 = ((x677^x678)>(x679<=x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x681 = UINT16_MAX;
	int8_t x682 = 6;
	static int16_t x683 = -75;
	uint16_t x684 = 7U;
	volatile int32_t t170 = -11928;

    t170 = ((x681^x682)>(x683<=x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x685 = 37958U;
	int64_t x686 = INT64_MAX;
	static int8_t x687 = -1;
	static volatile uint64_t x688 = UINT64_MAX;
	volatile int32_t t171 = 33208084;

    t171 = ((x685^x686)>(x687<=x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = INT64_MIN;
	int16_t x691 = 22;
	volatile int16_t x692 = INT16_MAX;
	int32_t t172 = 32123;

    t172 = ((x689^x690)>(x691<=x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = INT8_MAX;
	static int32_t x694 = INT32_MAX;
	uint8_t x695 = 108U;
	static uint64_t x696 = 65277471164LLU;
	int32_t t173 = -3748;

    t173 = ((x693^x694)>(x695<=x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x698 = 28U;
	int16_t x699 = 7;
	uint16_t x700 = 181U;
	volatile int32_t t174 = 829;

    t174 = ((x697^x698)>(x699<=x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = -1;
	uint16_t x702 = 5U;
	int8_t x703 = INT8_MIN;
	static int16_t x704 = -3437;
	static volatile int32_t t175 = 64;

    t175 = ((x701^x702)>(x703<=x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x706 = INT16_MIN;
	int32_t x707 = -1;
	uint16_t x708 = 370U;
	int32_t t176 = -104;

    t176 = ((x705^x706)>(x707<=x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x709 = INT32_MIN;
	static int32_t x711 = INT32_MIN;
	static int32_t x712 = -1;
	static volatile int32_t t177 = 391628;

    t177 = ((x709^x710)>(x711<=x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = INT16_MIN;
	uint64_t x714 = UINT64_MAX;
	static int32_t x715 = -7396;
	static int64_t x716 = 1019641612134LL;
	volatile int32_t t178 = 4777;

    t178 = ((x713^x714)>(x715<=x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x718 = 61231873516LLU;
	volatile uint64_t x719 = 7627672071030LLU;
	volatile uint32_t x720 = 100370838U;

    t179 = ((x717^x718)>(x719<=x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x721 = INT8_MAX;
	static uint32_t x722 = UINT32_MAX;
	uint64_t x723 = 2144LLU;
	volatile int16_t x724 = INT16_MIN;

    t180 = ((x721^x722)>(x723<=x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x725 = 2U;
	int16_t x726 = INT16_MIN;
	int64_t x727 = 28731962884LL;
	volatile uint8_t x728 = UINT8_MAX;

    t181 = ((x725^x726)>(x727<=x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x730 = INT32_MAX;
	volatile int16_t x731 = -1;
	static uint32_t x732 = UINT32_MAX;

    t182 = ((x729^x730)>(x731<=x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x733 = 0U;
	uint8_t x734 = UINT8_MAX;
	uint32_t x735 = 10217U;
	int16_t x736 = INT16_MIN;

    t183 = ((x733^x734)>(x735<=x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x737 = 45506200758LLU;
	int8_t x738 = INT8_MIN;
	volatile int64_t x739 = -1LL;
	int64_t x740 = INT64_MAX;
	volatile int32_t t184 = 3969;

    t184 = ((x737^x738)>(x739<=x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x741 = -1LL;
	int64_t x744 = -498429183LL;

    t185 = ((x741^x742)>(x743<=x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x745 = UINT8_MAX;
	int8_t x746 = -22;
	int8_t x747 = INT8_MIN;
	volatile int8_t x748 = 42;
	volatile int32_t t186 = -3;

    t186 = ((x745^x746)>(x747<=x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = -1;
	int64_t x750 = INT64_MAX;
	int64_t x751 = INT64_MIN;
	uint32_t x752 = UINT32_MAX;
	volatile int32_t t187 = -20708;

    t187 = ((x749^x750)>(x751<=x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = INT8_MIN;
	int64_t x754 = INT64_MIN;
	uint64_t x755 = UINT64_MAX;
	static uint16_t x756 = 3U;
	static volatile int32_t t188 = 0;

    t188 = ((x753^x754)>(x755<=x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x757 = UINT8_MAX;
	uint32_t x759 = 37428U;
	int32_t x760 = INT32_MIN;
	int32_t t189 = -13673939;

    t189 = ((x757^x758)>(x759<=x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x761 = INT32_MIN;
	uint16_t x762 = 3305U;
	volatile int32_t x764 = -8551945;

    t190 = ((x761^x762)>(x763<=x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = INT8_MIN;
	int8_t x766 = INT8_MIN;
	volatile uint32_t x767 = 175U;
	static uint16_t x768 = 2026U;
	int32_t t191 = -310;

    t191 = ((x765^x766)>(x767<=x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = INT32_MIN;
	int8_t x770 = -1;
	int8_t x771 = INT8_MIN;
	int16_t x772 = -16;
	static volatile int32_t t192 = 88709;

    t192 = ((x769^x770)>(x771<=x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = 15;
	int8_t x775 = 1;
	static int16_t x776 = INT16_MAX;
	static int32_t t193 = -34;

    t193 = ((x773^x774)>(x775<=x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = INT64_MAX;
	static int8_t x778 = 36;
	uint32_t x779 = 5770410U;
	volatile uint64_t x780 = UINT64_MAX;

    t194 = ((x777^x778)>(x779<=x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x781 = 0LL;
	static int16_t x782 = -23;
	volatile uint64_t x783 = 11293973475297970LLU;
	uint64_t x784 = 3LLU;

    t195 = ((x781^x782)>(x783<=x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = -678354;
	int16_t x787 = INT16_MAX;
	static int8_t x788 = INT8_MIN;
	static volatile int32_t t196 = -14337;

    t196 = ((x785^x786)>(x787<=x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = INT16_MIN;
	uint32_t x790 = 1858U;
	static uint16_t x791 = 2U;
	int64_t x792 = INT64_MAX;
	int32_t t197 = -33603;

    t197 = ((x789^x790)>(x791<=x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x793 = UINT32_MAX;
	uint16_t x794 = UINT16_MAX;
	volatile int32_t x795 = -1;
	uint64_t x796 = UINT64_MAX;
	volatile int32_t t198 = 0;

    t198 = ((x793^x794)>(x795<=x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = INT32_MAX;
	static int32_t x799 = INT32_MAX;
	static int16_t x800 = -1;

    t199 = ((x797^x798)>(x799<=x800));

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

