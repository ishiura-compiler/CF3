
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

static int32_t x2 = INT32_MIN;
int32_t x5 = -1585;
int32_t x6 = -5616817;
uint8_t x7 = 7U;
static int8_t x8 = -1;
uint64_t x11 = UINT64_MAX;
int8_t x19 = -1;
static int32_t t4 = -1;
int16_t x27 = 1;
volatile int32_t t6 = -1241692;
static volatile int16_t x32 = INT16_MIN;
static int32_t x33 = -26490;
int64_t x34 = -1LL;
static uint16_t x35 = 11U;
volatile int16_t x39 = -1;
volatile int16_t x45 = INT16_MIN;
uint16_t x50 = 20456U;
int32_t x54 = INT32_MIN;
int32_t t13 = -63;
int32_t x62 = INT32_MIN;
volatile int32_t t15 = -16;
static int8_t x65 = INT8_MIN;
static int64_t x66 = INT64_MAX;
static uint64_t x70 = UINT64_MAX;
volatile int32_t t17 = 72602770;
int64_t x99 = INT64_MIN;
uint32_t x100 = 1868U;
int16_t x102 = INT16_MAX;
int16_t x105 = INT16_MIN;
int16_t x106 = INT16_MAX;
int8_t x116 = 2;
static volatile int32_t t27 = -18;
int32_t x119 = INT32_MAX;
uint16_t x122 = UINT16_MAX;
volatile int8_t x123 = INT8_MIN;
uint8_t x131 = 3U;
int32_t x132 = -60;
static volatile int32_t t32 = -362185;
int64_t x138 = -10LL;
uint32_t x144 = UINT32_MAX;
uint64_t x145 = UINT64_MAX;
uint16_t x159 = UINT16_MAX;
int16_t x160 = -2;
volatile int32_t t38 = -510630476;
static int32_t t39 = -40;
int64_t x169 = -120LL;
int32_t x181 = INT32_MAX;
int32_t x182 = INT32_MAX;
uint32_t x194 = 985738108U;
int32_t t46 = -252811;
volatile int32_t t47 = 644;
int16_t x201 = 1;
uint16_t x204 = 113U;
int64_t x214 = INT64_MIN;
uint8_t x215 = 1U;
int16_t x217 = -1069;
int64_t x223 = -62495173737456LL;
static int32_t t54 = 960;
int32_t x243 = -1;
static int32_t x245 = INT32_MAX;
static uint8_t x251 = 0U;
volatile int32_t t59 = 139519;
volatile uint8_t x253 = 70U;
int8_t x264 = INT8_MIN;
int32_t t62 = 178;
int32_t x284 = INT32_MIN;
int64_t x289 = -39919840503124029LL;
volatile int32_t x292 = -28;
int64_t x310 = 3411567LL;
int64_t x322 = INT64_MAX;
int32_t x323 = -196185358;
static int32_t t76 = -29;
static int64_t x327 = -1LL;
volatile int32_t t77 = -271920;
int8_t x335 = INT8_MAX;
int8_t x336 = -1;
int16_t x341 = 1;
int32_t t80 = -118738;
int8_t x347 = INT8_MIN;
volatile int64_t x350 = 600089186818LL;
volatile uint16_t x351 = 9U;
volatile int32_t t83 = 1;
int32_t t84 = 14488;
int64_t x364 = INT64_MIN;
uint16_t x370 = UINT16_MAX;
int32_t t87 = -29660036;
int16_t x374 = -1;
int32_t x377 = INT32_MAX;
static int8_t x382 = -1;
uint8_t x383 = UINT8_MAX;
int64_t x386 = INT64_MIN;
volatile int32_t t91 = 16936848;
uint8_t x402 = 27U;
uint8_t x403 = 3U;
int32_t t95 = -1;
uint8_t x405 = UINT8_MAX;
static int32_t x407 = -1;
volatile int64_t x415 = INT64_MIN;
int32_t x420 = INT32_MIN;
volatile uint32_t x421 = 5192U;
int8_t x424 = INT8_MAX;
int8_t x432 = INT8_MIN;
uint16_t x434 = 7U;
int32_t x447 = 74;
uint64_t x449 = 4535342LLU;
uint64_t x454 = 30380114LLU;
int64_t x456 = INT64_MAX;
uint64_t x457 = 377619300993493071LLU;
int8_t x461 = INT8_MIN;
volatile int32_t t111 = 11587;
static uint32_t x478 = 1938409U;
volatile int32_t t114 = -10;
uint64_t x486 = UINT64_MAX;
volatile int32_t t117 = 336884;
int64_t x497 = -1LL;
uint8_t x500 = UINT8_MAX;
int32_t t119 = -476;
uint16_t x503 = 13998U;
int16_t x505 = INT16_MIN;
static uint8_t x515 = UINT8_MAX;
int16_t x518 = INT16_MAX;
int16_t x520 = INT16_MIN;
int32_t t124 = 252768;
int64_t x533 = INT64_MIN;
int32_t t128 = 97495722;
int16_t x537 = INT16_MAX;
int16_t x540 = INT16_MIN;
volatile int64_t x541 = INT64_MIN;
volatile uint64_t x543 = 19367782780LLU;
int64_t x548 = INT64_MIN;
int32_t x552 = -1;
volatile int32_t t133 = -1384;
static volatile int16_t x567 = INT16_MAX;
static int32_t x573 = -16705;
int32_t x575 = INT32_MIN;
int32_t x577 = -1;
volatile uint64_t x579 = 12362776LLU;
int8_t x582 = INT8_MAX;
int64_t x585 = -1LL;
int32_t t141 = -124;
uint64_t x598 = 2967883LLU;
uint64_t x602 = 69180LLU;
int64_t x608 = INT64_MIN;
int32_t x610 = -1;
volatile int64_t x612 = INT64_MIN;
volatile int32_t t150 = -419185060;
int64_t x636 = INT64_MIN;
uint64_t x640 = 12404764306LLU;
int16_t x644 = 1;
static int64_t x652 = INT64_MIN;
int64_t x657 = INT64_MIN;
int32_t x659 = INT32_MIN;
uint64_t x660 = 22LLU;
volatile int16_t x667 = -1;
volatile int32_t t159 = -3612015;
static uint8_t x683 = 18U;
uint8_t x698 = 1U;
static uint8_t x699 = 41U;
uint64_t x700 = 210811440734LLU;
int64_t x703 = INT64_MIN;
int32_t x710 = INT32_MIN;
int64_t x711 = INT64_MIN;
static uint32_t x712 = 53670U;
int8_t x714 = -1;
int64_t x716 = -3104911LL;
uint8_t x726 = UINT8_MAX;
uint32_t x727 = UINT32_MAX;
int16_t x730 = INT16_MIN;
volatile uint8_t x737 = UINT8_MAX;
static int8_t x739 = INT8_MIN;
int64_t x741 = INT64_MIN;
uint8_t x743 = 0U;
int32_t t175 = 219777;
int32_t x747 = INT32_MIN;
static int32_t x749 = INT32_MAX;
int16_t x750 = INT16_MAX;
int32_t x752 = INT32_MIN;
int32_t x763 = -638865108;
int8_t x774 = -1;
int64_t x780 = 30100159405353LL;
volatile int32_t t183 = -25826816;
int16_t x788 = INT16_MIN;
int8_t x794 = INT8_MAX;
uint32_t x799 = 1U;
volatile int32_t t189 = 4458386;
int32_t x809 = INT32_MIN;
volatile int16_t x817 = -96;
volatile int32_t t194 = -17540;
int32_t t195 = 43;
int16_t x838 = -71;
static volatile int8_t x841 = INT8_MIN;
static int32_t x844 = INT32_MIN;


void f0(void) {
    	static int32_t x1 = INT32_MIN;
	volatile int16_t x3 = -10813;
	uint8_t x4 = 56U;
	int32_t t0 = -790023;

    t0 = (x1!=(x2-(x3/x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t t1 = 102484519;

    t1 = (x5!=(x6-(x7/x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 3288639247651LLU;
	uint16_t x10 = 5U;
	int64_t x12 = -10997421069LL;
	volatile int32_t t2 = -7;

    t2 = (x9!=(x10-(x11/x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -1;
	int8_t x14 = INT8_MAX;
	int32_t x15 = -49983872;
	int8_t x16 = -1;
	volatile int32_t t3 = -657224;

    t3 = (x13!=(x14-(x15/x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x17 = INT8_MIN;
	int64_t x18 = 39676523LL;
	uint16_t x20 = 1U;

    t4 = (x17!=(x18-(x19/x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = UINT16_MAX;
	static int64_t x22 = -46646877673LL;
	volatile uint16_t x23 = 21U;
	int8_t x24 = INT8_MAX;
	volatile int32_t t5 = 121;

    t5 = (x21!=(x22-(x23/x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x25 = -55;
	int16_t x26 = INT16_MIN;
	static uint16_t x28 = UINT16_MAX;

    t6 = (x25!=(x26-(x27/x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -1;
	int8_t x30 = -37;
	int64_t x31 = INT64_MIN;
	int32_t t7 = -630163373;

    t7 = (x29!=(x30-(x31/x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x36 = 1469941LLU;
	volatile int32_t t8 = 96;

    t8 = (x33!=(x34-(x35/x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	static int64_t x38 = 679262723760LL;
	uint8_t x40 = UINT8_MAX;
	int32_t t9 = -2226;

    t9 = (x37!=(x38-(x39/x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MIN;
	int16_t x42 = INT16_MAX;
	static uint32_t x43 = 706305734U;
	static int16_t x44 = 120;
	volatile int32_t t10 = 662159108;

    t10 = (x41!=(x42-(x43/x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int8_t x46 = -60;
	int64_t x47 = 15657561339LL;
	int32_t x48 = INT32_MAX;
	int32_t t11 = -46266;

    t11 = (x45!=(x46-(x47/x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x49 = 1U;
	uint16_t x51 = 22U;
	int8_t x52 = INT8_MIN;
	volatile int32_t t12 = -10484;

    t12 = (x49!=(x50-(x51/x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MAX;
	volatile int64_t x55 = -1LL;
	int16_t x56 = INT16_MAX;

    t13 = (x53!=(x54-(x55/x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = 48151611U;
	static uint32_t x58 = 4097163U;
	int32_t x59 = INT32_MAX;
	static volatile uint16_t x60 = 11U;
	int32_t t14 = 1;

    t14 = (x57!=(x58-(x59/x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 127989U;
	uint64_t x63 = UINT64_MAX;
	uint32_t x64 = 1659246954U;

    t15 = (x61!=(x62-(x63/x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x67 = UINT8_MAX;
	static int64_t x68 = INT64_MAX;
	volatile int32_t t16 = 26545;

    t16 = (x65!=(x66-(x67/x68)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = -5854;
	uint8_t x71 = 0U;
	uint64_t x72 = UINT64_MAX;

    t17 = (x69!=(x70-(x71/x72)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = -15827;
	uint16_t x74 = 16U;
	int8_t x75 = INT8_MAX;
	int32_t x76 = -1;
	int32_t t18 = -7;

    t18 = (x73!=(x74-(x75/x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MIN;
	int32_t x78 = INT32_MIN;
	volatile int8_t x79 = 11;
	static uint32_t x80 = 1358899U;
	static volatile int32_t t19 = 1;

    t19 = (x77!=(x78-(x79/x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = -4892LL;
	volatile int16_t x82 = INT16_MIN;
	volatile int64_t x83 = INT64_MIN;
	static volatile int32_t x84 = INT32_MIN;
	static int32_t t20 = -2000;

    t20 = (x81!=(x82-(x83/x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = -1;
	volatile int16_t x86 = 1;
	volatile int8_t x87 = INT8_MIN;
	int32_t x88 = -164;
	volatile int32_t t21 = 583;

    t21 = (x85!=(x86-(x87/x88)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MIN;
	static uint32_t x90 = UINT32_MAX;
	int32_t x91 = 1591067;
	uint8_t x92 = UINT8_MAX;
	int32_t t22 = 679;

    t22 = (x89!=(x90-(x91/x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MIN;
	int32_t x94 = -1;
	int16_t x95 = INT16_MIN;
	int32_t x96 = INT32_MIN;
	static volatile int32_t t23 = 168;

    t23 = (x93!=(x94-(x95/x96)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = -1;
	int32_t x98 = INT32_MIN;
	volatile int32_t t24 = 3900832;

    t24 = (x97!=(x98-(x99/x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = -6944;
	uint16_t x103 = 2U;
	int16_t x104 = -1;
	int32_t t25 = 269383684;

    t25 = (x101!=(x102-(x103/x104)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x107 = 26033U;
	static volatile uint32_t x108 = 690U;
	int32_t t26 = -13;

    t26 = (x105!=(x106-(x107/x108)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x113 = -915331018459025237LL;
	static volatile int64_t x114 = -14937496384282LL;
	int16_t x115 = INT16_MIN;

    t27 = (x113!=(x114-(x115/x116)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x117 = INT8_MIN;
	uint16_t x118 = 32U;
	uint32_t x120 = 804450U;
	static volatile int32_t t28 = 1;

    t28 = (x117!=(x118-(x119/x120)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x121 = 62U;
	int16_t x124 = -229;
	int32_t t29 = -136;

    t29 = (x121!=(x122-(x123/x124)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile uint16_t x125 = 2U;
	static uint8_t x126 = 9U;
	static uint64_t x127 = 1546112LLU;
	int32_t x128 = INT32_MIN;
	volatile int32_t t30 = -215728;

    t30 = (x125!=(x126-(x127/x128)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x129 = -14385021967012759LL;
	int32_t x130 = INT32_MIN;
	volatile int32_t t31 = -156161;

    t31 = (x129!=(x130-(x131/x132)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x133 = INT8_MIN;
	uint8_t x134 = UINT8_MAX;
	uint32_t x135 = 59695891U;
	int8_t x136 = INT8_MIN;

    t32 = (x133!=(x134-(x135/x136)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x137 = INT64_MIN;
	int64_t x139 = INT64_MAX;
	int32_t x140 = INT32_MIN;
	volatile int32_t t33 = -46589;

    t33 = (x137!=(x138-(x139/x140)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x141 = 1U;
	uint32_t x142 = 89220351U;
	int16_t x143 = INT16_MAX;
	volatile int32_t t34 = 25;

    t34 = (x141!=(x142-(x143/x144)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x146 = UINT16_MAX;
	uint16_t x147 = 967U;
	int64_t x148 = 128540635952659LL;
	volatile int32_t t35 = -15310534;

    t35 = (x145!=(x146-(x147/x148)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x149 = 2707331455519737LL;
	int32_t x150 = -1;
	int16_t x151 = INT16_MIN;
	int8_t x152 = INT8_MAX;
	static int32_t t36 = 26575822;

    t36 = (x149!=(x150-(x151/x152)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x157 = 70;
	int8_t x158 = -1;
	volatile int32_t t37 = 975464289;

    t37 = (x157!=(x158-(x159/x160)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x161 = INT32_MIN;
	volatile int64_t x162 = INT64_MAX;
	int8_t x163 = INT8_MIN;
	int8_t x164 = INT8_MIN;

    t38 = (x161!=(x162-(x163/x164)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x165 = 18U;
	static int8_t x166 = INT8_MAX;
	volatile uint64_t x167 = 761169554LLU;
	static int32_t x168 = -1;

    t39 = (x165!=(x166-(x167/x168)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x170 = 121484508U;
	volatile int8_t x171 = INT8_MAX;
	int8_t x172 = -24;
	volatile int32_t t40 = -52371373;

    t40 = (x169!=(x170-(x171/x172)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint16_t x173 = 58U;
	int8_t x174 = -2;
	uint8_t x175 = 5U;
	uint64_t x176 = 11130380LLU;
	int32_t t41 = 670;

    t41 = (x173!=(x174-(x175/x176)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x177 = 1916172;
	int32_t x178 = -1;
	int64_t x179 = INT64_MIN;
	uint32_t x180 = 510U;
	static int32_t t42 = 1615942;

    t42 = (x177!=(x178-(x179/x180)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x183 = -1390;
	volatile int64_t x184 = INT64_MIN;
	int32_t t43 = 1968361;

    t43 = (x181!=(x182-(x183/x184)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x185 = 77U;
	int32_t x186 = -1;
	int64_t x187 = INT64_MIN;
	volatile int16_t x188 = -14;
	volatile int32_t t44 = -1;

    t44 = (x185!=(x186-(x187/x188)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int32_t x189 = 985496;
	int16_t x190 = 11;
	uint16_t x191 = UINT16_MAX;
	volatile int64_t x192 = -1LL;
	int32_t t45 = 199;

    t45 = (x189!=(x190-(x191/x192)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x193 = UINT16_MAX;
	int16_t x195 = INT16_MIN;
	int16_t x196 = INT16_MIN;

    t46 = (x193!=(x194-(x195/x196)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x197 = 50061U;
	uint64_t x198 = UINT64_MAX;
	static uint32_t x199 = 731084U;
	uint16_t x200 = UINT16_MAX;

    t47 = (x197!=(x198-(x199/x200)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x202 = -1;
	static int32_t x203 = INT32_MIN;
	volatile int32_t t48 = 201;

    t48 = (x201!=(x202-(x203/x204)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x205 = -1;
	int64_t x206 = -1LL;
	int64_t x207 = INT64_MIN;
	int64_t x208 = INT64_MIN;
	volatile int32_t t49 = 202;

    t49 = (x205!=(x206-(x207/x208)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x209 = -223810968;
	uint64_t x210 = 4890330275601063LLU;
	int8_t x211 = INT8_MIN;
	volatile uint64_t x212 = UINT64_MAX;
	int32_t t50 = 79435;

    t50 = (x209!=(x210-(x211/x212)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x213 = 172910102;
	int8_t x216 = INT8_MIN;
	volatile int32_t t51 = -1226;

    t51 = (x213!=(x214-(x215/x216)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x218 = INT8_MIN;
	volatile int64_t x219 = 15704411LL;
	uint16_t x220 = UINT16_MAX;
	int32_t t52 = -34770;

    t52 = (x217!=(x218-(x219/x220)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x221 = -494065045398231LL;
	int16_t x222 = -3;
	int32_t x224 = -738218293;
	int32_t t53 = 0;

    t53 = (x221!=(x222-(x223/x224)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint64_t x225 = 4049047414777585LLU;
	uint16_t x226 = 4U;
	uint16_t x227 = 12U;
	int8_t x228 = -1;

    t54 = (x225!=(x226-(x227/x228)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x229 = INT16_MIN;
	static volatile int16_t x230 = INT16_MIN;
	int16_t x231 = INT16_MAX;
	int64_t x232 = INT64_MIN;
	volatile int32_t t55 = 84;

    t55 = (x229!=(x230-(x231/x232)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x237 = INT16_MIN;
	static uint64_t x238 = 1120730590607016LLU;
	int32_t x239 = INT32_MAX;
	int64_t x240 = -1LL;
	int32_t t56 = -2820;

    t56 = (x237!=(x238-(x239/x240)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x241 = INT32_MIN;
	uint64_t x242 = 19331LLU;
	static int8_t x244 = -3;
	volatile int32_t t57 = -7899;

    t57 = (x241!=(x242-(x243/x244)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x246 = INT16_MIN;
	int16_t x247 = -1;
	int64_t x248 = INT64_MIN;
	static volatile int32_t t58 = 2113;

    t58 = (x245!=(x246-(x247/x248)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x249 = INT32_MAX;
	int64_t x250 = INT64_MIN;
	static int16_t x252 = INT16_MIN;

    t59 = (x249!=(x250-(x251/x252)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x254 = INT16_MIN;
	uint32_t x255 = UINT32_MAX;
	uint64_t x256 = 49976LLU;
	volatile int32_t t60 = 309552017;

    t60 = (x253!=(x254-(x255/x256)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint8_t x257 = 0U;
	uint64_t x258 = UINT64_MAX;
	uint64_t x259 = UINT64_MAX;
	int16_t x260 = -1;
	int32_t t61 = 14;

    t61 = (x257!=(x258-(x259/x260)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x261 = 587U;
	uint64_t x262 = 64683180294LLU;
	static uint8_t x263 = UINT8_MAX;

    t62 = (x261!=(x262-(x263/x264)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x265 = 2U;
	static uint64_t x266 = 92951815LLU;
	int8_t x267 = 61;
	uint32_t x268 = UINT32_MAX;
	volatile int32_t t63 = 3585758;

    t63 = (x265!=(x266-(x267/x268)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x269 = 46U;
	static int16_t x270 = INT16_MIN;
	uint64_t x271 = 277062152127050LLU;
	volatile int32_t x272 = INT32_MIN;
	volatile int32_t t64 = 1;

    t64 = (x269!=(x270-(x271/x272)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x273 = -1;
	static uint16_t x274 = 5U;
	volatile int32_t x275 = INT32_MIN;
	int8_t x276 = -55;
	int32_t t65 = 1665468;

    t65 = (x273!=(x274-(x275/x276)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x277 = INT16_MIN;
	volatile int64_t x278 = INT64_MAX;
	static int16_t x279 = INT16_MIN;
	int64_t x280 = INT64_MIN;
	volatile int32_t t66 = -1;

    t66 = (x277!=(x278-(x279/x280)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int32_t x281 = 971293380;
	int32_t x282 = INT32_MAX;
	volatile int32_t x283 = -1;
	volatile int32_t t67 = 24982;

    t67 = (x281!=(x282-(x283/x284)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x290 = 2U;
	static uint8_t x291 = 0U;
	volatile int32_t t68 = 84590569;

    t68 = (x289!=(x290-(x291/x292)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x293 = INT64_MIN;
	int16_t x294 = -7965;
	int64_t x295 = -1179021636LL;
	volatile int32_t x296 = -85922;
	static int32_t t69 = 13801717;

    t69 = (x293!=(x294-(x295/x296)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x297 = -650028311;
	int8_t x298 = -1;
	volatile uint8_t x299 = 7U;
	static int16_t x300 = INT16_MAX;
	static int32_t t70 = 10611;

    t70 = (x297!=(x298-(x299/x300)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x301 = UINT32_MAX;
	uint8_t x302 = 9U;
	static volatile int64_t x303 = 14091689882LL;
	int64_t x304 = INT64_MIN;
	volatile int32_t t71 = -247;

    t71 = (x301!=(x302-(x303/x304)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x305 = INT64_MIN;
	static volatile int8_t x306 = INT8_MIN;
	int16_t x307 = 30;
	int16_t x308 = -1;
	volatile int32_t t72 = -452058;

    t72 = (x305!=(x306-(x307/x308)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x309 = -1LL;
	static int64_t x311 = -9891558375LL;
	volatile int64_t x312 = -321LL;
	volatile int32_t t73 = -24527205;

    t73 = (x309!=(x310-(x311/x312)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x313 = -1;
	int8_t x314 = 7;
	int64_t x315 = -1LL;
	static int16_t x316 = 6;
	volatile int32_t t74 = 60360190;

    t74 = (x313!=(x314-(x315/x316)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x317 = -26423163422502091LL;
	uint64_t x318 = UINT64_MAX;
	uint8_t x319 = 1U;
	volatile int64_t x320 = -871203LL;
	int32_t t75 = 363;

    t75 = (x317!=(x318-(x319/x320)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x321 = INT64_MAX;
	int8_t x324 = INT8_MIN;

    t76 = (x321!=(x322-(x323/x324)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint16_t x325 = UINT16_MAX;
	int16_t x326 = 1936;
	int32_t x328 = -28007;

    t77 = (x325!=(x326-(x327/x328)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x329 = -1;
	uint32_t x330 = 2U;
	volatile int32_t x331 = INT32_MIN;
	uint32_t x332 = 52101463U;
	static int32_t t78 = -107621;

    t78 = (x329!=(x330-(x331/x332)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x333 = -1LL;
	int8_t x334 = INT8_MIN;
	static volatile int32_t t79 = -573;

    t79 = (x333!=(x334-(x335/x336)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x342 = UINT32_MAX;
	int32_t x343 = INT32_MAX;
	int32_t x344 = INT32_MIN;

    t80 = (x341!=(x342-(x343/x344)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x345 = INT32_MIN;
	static int32_t x346 = INT32_MAX;
	volatile int16_t x348 = -1;
	volatile int32_t t81 = 2;

    t81 = (x345!=(x346-(x347/x348)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x349 = -1;
	static volatile int64_t x352 = INT64_MIN;
	int32_t t82 = 164;

    t82 = (x349!=(x350-(x351/x352)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x353 = 30257686678010LLU;
	volatile uint16_t x354 = 5U;
	int16_t x355 = -12;
	int32_t x356 = 16;

    t83 = (x353!=(x354-(x355/x356)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x357 = INT16_MIN;
	static uint64_t x358 = UINT64_MAX;
	uint16_t x359 = 23918U;
	volatile int64_t x360 = INT64_MAX;

    t84 = (x357!=(x358-(x359/x360)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x361 = INT64_MIN;
	uint8_t x362 = 1U;
	uint64_t x363 = 100128019030249959LLU;
	static int32_t t85 = 102751203;

    t85 = (x361!=(x362-(x363/x364)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x365 = UINT8_MAX;
	uint16_t x366 = UINT16_MAX;
	uint16_t x367 = 0U;
	int32_t x368 = 441682;
	static int32_t t86 = 884073;

    t86 = (x365!=(x366-(x367/x368)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint8_t x369 = 21U;
	uint8_t x371 = UINT8_MAX;
	static uint64_t x372 = UINT64_MAX;

    t87 = (x369!=(x370-(x371/x372)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x373 = INT64_MIN;
	static volatile int8_t x375 = 0;
	static int16_t x376 = INT16_MAX;
	int32_t t88 = 302;

    t88 = (x373!=(x374-(x375/x376)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x378 = -1;
	uint8_t x379 = 20U;
	int8_t x380 = INT8_MIN;
	static volatile int32_t t89 = 266665188;

    t89 = (x377!=(x378-(x379/x380)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x381 = 28U;
	uint8_t x384 = 30U;
	volatile int32_t t90 = 1;

    t90 = (x381!=(x382-(x383/x384)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x385 = -1;
	volatile int32_t x387 = 10833;
	uint64_t x388 = 173LLU;

    t91 = (x385!=(x386-(x387/x388)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x389 = INT8_MIN;
	int8_t x390 = INT8_MIN;
	int8_t x391 = INT8_MAX;
	int8_t x392 = INT8_MIN;
	int32_t t92 = -104647135;

    t92 = (x389!=(x390-(x391/x392)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint16_t x393 = 29029U;
	int16_t x394 = 5902;
	int8_t x395 = INT8_MIN;
	volatile int64_t x396 = -1LL;
	static volatile int32_t t93 = -1;

    t93 = (x393!=(x394-(x395/x396)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x397 = 4U;
	volatile int32_t x398 = INT32_MIN;
	uint64_t x399 = UINT64_MAX;
	static uint32_t x400 = 6U;
	volatile int32_t t94 = 0;

    t94 = (x397!=(x398-(x399/x400)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x401 = -81;
	uint64_t x404 = UINT64_MAX;

    t95 = (x401!=(x402-(x403/x404)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x406 = INT16_MIN;
	uint8_t x408 = UINT8_MAX;
	int32_t t96 = -159;

    t96 = (x405!=(x406-(x407/x408)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x409 = 2723011;
	int64_t x410 = 149844639086LL;
	volatile int32_t x411 = INT32_MAX;
	uint16_t x412 = 1U;
	volatile int32_t t97 = 19;

    t97 = (x409!=(x410-(x411/x412)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x413 = INT64_MAX;
	uint32_t x414 = 422U;
	volatile int64_t x416 = INT64_MIN;
	static int32_t t98 = 1;

    t98 = (x413!=(x414-(x415/x416)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x417 = INT32_MAX;
	uint32_t x418 = 85655500U;
	volatile int32_t x419 = INT32_MIN;
	volatile int32_t t99 = 1091394;

    t99 = (x417!=(x418-(x419/x420)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x422 = 7715;
	static uint32_t x423 = 6U;
	volatile int32_t t100 = -14572;

    t100 = (x421!=(x422-(x423/x424)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x425 = 12;
	static int16_t x426 = INT16_MIN;
	int64_t x427 = INT64_MIN;
	volatile uint32_t x428 = UINT32_MAX;
	volatile int32_t t101 = -113;

    t101 = (x425!=(x426-(x427/x428)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint32_t x429 = 394083609U;
	int8_t x430 = INT8_MIN;
	int64_t x431 = INT64_MAX;
	volatile int32_t t102 = 43082;

    t102 = (x429!=(x430-(x431/x432)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x433 = -39;
	int16_t x435 = INT16_MAX;
	int32_t x436 = -224218;
	int32_t t103 = -9673995;

    t103 = (x433!=(x434-(x435/x436)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int64_t x437 = INT64_MIN;
	static int8_t x438 = -1;
	static int32_t x439 = INT32_MIN;
	int8_t x440 = -7;
	volatile int32_t t104 = -1320;

    t104 = (x437!=(x438-(x439/x440)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x441 = UINT32_MAX;
	static int8_t x442 = INT8_MIN;
	volatile int32_t x443 = 10188;
	volatile int64_t x444 = 146996LL;
	int32_t t105 = 3072350;

    t105 = (x441!=(x442-(x443/x444)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint8_t x445 = UINT8_MAX;
	int64_t x446 = -1LL;
	volatile int64_t x448 = 155293877LL;
	int32_t t106 = 524694333;

    t106 = (x445!=(x446-(x447/x448)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x450 = 198996679U;
	volatile int16_t x451 = INT16_MAX;
	volatile uint32_t x452 = UINT32_MAX;
	int32_t t107 = -3661830;

    t107 = (x449!=(x450-(x451/x452)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x453 = INT8_MIN;
	int16_t x455 = INT16_MAX;
	int32_t t108 = 18;

    t108 = (x453!=(x454-(x455/x456)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x458 = -1LL;
	volatile int32_t x459 = INT32_MIN;
	uint16_t x460 = 322U;
	int32_t t109 = -76;

    t109 = (x457!=(x458-(x459/x460)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x462 = 434862500LL;
	int64_t x463 = -1LL;
	volatile uint16_t x464 = 1214U;
	volatile int32_t t110 = -62;

    t110 = (x461!=(x462-(x463/x464)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint32_t x465 = 61U;
	int64_t x466 = -1LL;
	uint64_t x467 = UINT64_MAX;
	volatile uint8_t x468 = UINT8_MAX;

    t111 = (x465!=(x466-(x467/x468)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x469 = 69U;
	uint16_t x470 = 19U;
	int32_t x471 = -5958669;
	int8_t x472 = -1;
	volatile int32_t t112 = -1;

    t112 = (x469!=(x470-(x471/x472)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint8_t x473 = 15U;
	volatile int8_t x474 = INT8_MIN;
	uint8_t x475 = UINT8_MAX;
	static uint16_t x476 = 150U;
	int32_t t113 = -1973;

    t113 = (x473!=(x474-(x475/x476)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x477 = INT32_MAX;
	static volatile int16_t x479 = -16;
	uint64_t x480 = UINT64_MAX;

    t114 = (x477!=(x478-(x479/x480)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint64_t x481 = 2981835771LLU;
	volatile int32_t x482 = INT32_MIN;
	static volatile int64_t x483 = -1LL;
	int32_t x484 = -1;
	volatile int32_t t115 = 3400;

    t115 = (x481!=(x482-(x483/x484)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x485 = INT16_MIN;
	int16_t x487 = INT16_MAX;
	int8_t x488 = -43;
	volatile int32_t t116 = -893981597;

    t116 = (x485!=(x486-(x487/x488)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x489 = INT16_MAX;
	int8_t x490 = -1;
	uint8_t x491 = 43U;
	static int32_t x492 = -1;

    t117 = (x489!=(x490-(x491/x492)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x493 = 5274389LLU;
	static uint8_t x494 = 7U;
	uint16_t x495 = UINT16_MAX;
	int8_t x496 = INT8_MIN;
	static int32_t t118 = -3193837;

    t118 = (x493!=(x494-(x495/x496)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x498 = UINT64_MAX;
	static int8_t x499 = INT8_MIN;

    t119 = (x497!=(x498-(x499/x500)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x501 = 26282204;
	int32_t x502 = -1;
	uint64_t x504 = 2554863686881LLU;
	int32_t t120 = 1673;

    t120 = (x501!=(x502-(x503/x504)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x506 = 13308651023707263LL;
	int64_t x507 = INT64_MIN;
	int64_t x508 = INT64_MAX;
	int32_t t121 = -897478899;

    t121 = (x505!=(x506-(x507/x508)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x509 = 1;
	static volatile int8_t x510 = INT8_MIN;
	uint64_t x511 = 15728112452LLU;
	uint8_t x512 = 60U;
	volatile int32_t t122 = -31158;

    t122 = (x509!=(x510-(x511/x512)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x513 = 38727383;
	uint64_t x514 = 276898942378LLU;
	int16_t x516 = INT16_MAX;
	static int32_t t123 = -2935;

    t123 = (x513!=(x514-(x515/x516)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int8_t x517 = 0;
	static int8_t x519 = INT8_MIN;

    t124 = (x517!=(x518-(x519/x520)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x521 = -1LL;
	static uint16_t x522 = 2U;
	static volatile int8_t x523 = 57;
	volatile int8_t x524 = -1;
	volatile int32_t t125 = 32440;

    t125 = (x521!=(x522-(x523/x524)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x525 = 485U;
	volatile int64_t x526 = -1LL;
	uint64_t x527 = 6706366838772LLU;
	volatile int16_t x528 = INT16_MIN;
	int32_t t126 = -3306;

    t126 = (x525!=(x526-(x527/x528)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int32_t x529 = INT32_MAX;
	int16_t x530 = INT16_MIN;
	static int16_t x531 = -13890;
	int32_t x532 = INT32_MAX;
	volatile int32_t t127 = -314091;

    t127 = (x529!=(x530-(x531/x532)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x534 = -1LL;
	static volatile int32_t x535 = 16405;
	static int8_t x536 = INT8_MIN;

    t128 = (x533!=(x534-(x535/x536)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x538 = -1026744173LL;
	int32_t x539 = -4397;
	int32_t t129 = -4;

    t129 = (x537!=(x538-(x539/x540)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x542 = 3865U;
	uint16_t x544 = UINT16_MAX;
	volatile int32_t t130 = -161196;

    t130 = (x541!=(x542-(x543/x544)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint64_t x545 = UINT64_MAX;
	int16_t x546 = INT16_MIN;
	uint8_t x547 = 5U;
	volatile int32_t t131 = 11;

    t131 = (x545!=(x546-(x547/x548)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x549 = 666485834077312LL;
	int64_t x550 = -1LL;
	int16_t x551 = INT16_MIN;
	volatile int32_t t132 = 2245882;

    t132 = (x549!=(x550-(x551/x552)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x557 = 1;
	int64_t x558 = 329964689428492013LL;
	int32_t x559 = -351913;
	int8_t x560 = INT8_MAX;

    t133 = (x557!=(x558-(x559/x560)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x565 = INT64_MAX;
	uint64_t x566 = 1484808916LLU;
	volatile uint32_t x568 = 97334U;
	static int32_t t134 = 8126941;

    t134 = (x565!=(x566-(x567/x568)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int32_t x569 = INT32_MIN;
	int8_t x570 = -7;
	static uint16_t x571 = 250U;
	uint32_t x572 = 2990U;
	int32_t t135 = -3748;

    t135 = (x569!=(x570-(x571/x572)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x574 = INT8_MIN;
	int16_t x576 = INT16_MAX;
	int32_t t136 = 3525;

    t136 = (x573!=(x574-(x575/x576)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x578 = INT64_MIN;
	int8_t x580 = -4;
	volatile int32_t t137 = 211667;

    t137 = (x577!=(x578-(x579/x580)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x581 = -1;
	volatile int8_t x583 = -1;
	int8_t x584 = INT8_MIN;
	int32_t t138 = 1;

    t138 = (x581!=(x582-(x583/x584)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x586 = INT16_MAX;
	uint64_t x587 = 70859002143LLU;
	static volatile int32_t x588 = -184416;
	int32_t t139 = 2281;

    t139 = (x585!=(x586-(x587/x588)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x589 = 7U;
	int8_t x590 = -1;
	volatile int32_t x591 = -1;
	int16_t x592 = -78;
	int32_t t140 = -42273506;

    t140 = (x589!=(x590-(x591/x592)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x593 = UINT8_MAX;
	int32_t x594 = -48976406;
	static int8_t x595 = -1;
	static volatile int64_t x596 = INT64_MAX;

    t141 = (x593!=(x594-(x595/x596)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x597 = INT16_MIN;
	int16_t x599 = -410;
	int32_t x600 = 3;
	volatile int32_t t142 = -2187962;

    t142 = (x597!=(x598-(x599/x600)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x601 = 3U;
	volatile uint16_t x603 = 0U;
	static uint16_t x604 = 165U;
	static int32_t t143 = -1;

    t143 = (x601!=(x602-(x603/x604)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x605 = 277642361U;
	static volatile int16_t x606 = -1;
	uint32_t x607 = UINT32_MAX;
	volatile int32_t t144 = 28;

    t144 = (x605!=(x606-(x607/x608)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x609 = 20;
	int64_t x611 = -1LL;
	volatile int32_t t145 = -11;

    t145 = (x609!=(x610-(x611/x612)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x613 = INT8_MIN;
	int32_t x614 = INT32_MIN;
	static int16_t x615 = 5;
	int32_t x616 = INT32_MAX;
	volatile int32_t t146 = -6688740;

    t146 = (x613!=(x614-(x615/x616)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x617 = 18188LL;
	uint8_t x618 = 1U;
	int64_t x619 = INT64_MIN;
	uint64_t x620 = 213LLU;
	int32_t t147 = 238;

    t147 = (x617!=(x618-(x619/x620)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x621 = -5992908;
	uint32_t x622 = 9771899U;
	int8_t x623 = -1;
	static int64_t x624 = -1LL;
	static volatile int32_t t148 = -18;

    t148 = (x621!=(x622-(x623/x624)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x625 = INT64_MIN;
	static int16_t x626 = INT16_MAX;
	volatile uint32_t x627 = 24318122U;
	static int8_t x628 = -1;
	static int32_t t149 = -192617103;

    t149 = (x625!=(x626-(x627/x628)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x629 = INT32_MAX;
	uint16_t x630 = 22U;
	int16_t x631 = -1;
	int16_t x632 = INT16_MIN;

    t150 = (x629!=(x630-(x631/x632)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x633 = -1;
	static int8_t x634 = INT8_MIN;
	int16_t x635 = INT16_MIN;
	int32_t t151 = 1;

    t151 = (x633!=(x634-(x635/x636)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x637 = UINT64_MAX;
	int32_t x638 = -1;
	int32_t x639 = -1;
	int32_t t152 = 12088;

    t152 = (x637!=(x638-(x639/x640)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x641 = INT16_MIN;
	int64_t x642 = INT64_MAX;
	static uint8_t x643 = 1U;
	volatile int32_t t153 = -98051769;

    t153 = (x641!=(x642-(x643/x644)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x645 = INT16_MIN;
	uint64_t x646 = 44217623386LLU;
	int8_t x647 = INT8_MIN;
	uint32_t x648 = 879149431U;
	volatile int32_t t154 = 1280764;

    t154 = (x645!=(x646-(x647/x648)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x649 = INT32_MIN;
	int64_t x650 = INT64_MIN;
	int8_t x651 = INT8_MIN;
	volatile int32_t t155 = -472876;

    t155 = (x649!=(x650-(x651/x652)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t x653 = UINT64_MAX;
	int64_t x654 = INT64_MIN;
	int32_t x655 = -13;
	int16_t x656 = INT16_MIN;
	volatile int32_t t156 = -237074;

    t156 = (x653!=(x654-(x655/x656)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x658 = INT32_MIN;
	volatile int32_t t157 = 1;

    t157 = (x657!=(x658-(x659/x660)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x661 = INT8_MIN;
	static uint64_t x662 = 194666LLU;
	static volatile int8_t x663 = 0;
	volatile int64_t x664 = INT64_MIN;
	int32_t t158 = 45540;

    t158 = (x661!=(x662-(x663/x664)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x665 = -466342253396359999LL;
	volatile int16_t x666 = -143;
	uint8_t x668 = 80U;

    t159 = (x665!=(x666-(x667/x668)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x673 = -1LL;
	static uint16_t x674 = 14U;
	static volatile int8_t x675 = 1;
	uint16_t x676 = UINT16_MAX;
	volatile int32_t t160 = 21953;

    t160 = (x673!=(x674-(x675/x676)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x677 = 776U;
	int32_t x678 = INT32_MIN;
	uint32_t x679 = UINT32_MAX;
	static uint64_t x680 = 3LLU;
	int32_t t161 = -234162;

    t161 = (x677!=(x678-(x679/x680)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int64_t x681 = 277LL;
	static int8_t x682 = 1;
	static uint64_t x684 = 38602667954LLU;
	static int32_t t162 = 354135;

    t162 = (x681!=(x682-(x683/x684)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x685 = 0U;
	int32_t x686 = INT32_MAX;
	static uint32_t x687 = 3034431U;
	static int32_t x688 = -1;
	volatile int32_t t163 = 0;

    t163 = (x685!=(x686-(x687/x688)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x689 = -1;
	static int8_t x690 = -1;
	int16_t x691 = INT16_MIN;
	int64_t x692 = INT64_MIN;
	volatile int32_t t164 = 114437613;

    t164 = (x689!=(x690-(x691/x692)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x693 = 3U;
	uint8_t x694 = UINT8_MAX;
	int32_t x695 = -383783870;
	volatile int16_t x696 = INT16_MIN;
	int32_t t165 = 106870368;

    t165 = (x693!=(x694-(x695/x696)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x697 = -67;
	volatile int32_t t166 = -2500141;

    t166 = (x697!=(x698-(x699/x700)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x701 = -1LL;
	volatile uint16_t x702 = UINT16_MAX;
	static volatile int8_t x704 = INT8_MAX;
	static int32_t t167 = 31;

    t167 = (x701!=(x702-(x703/x704)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x709 = INT8_MAX;
	volatile int32_t t168 = 6422;

    t168 = (x709!=(x710-(x711/x712)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x713 = -1;
	uint16_t x715 = 6151U;
	volatile int32_t t169 = -6524;

    t169 = (x713!=(x714-(x715/x716)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x721 = -8928;
	int8_t x722 = 0;
	volatile uint8_t x723 = 6U;
	int32_t x724 = INT32_MIN;
	volatile int32_t t170 = 408902804;

    t170 = (x721!=(x722-(x723/x724)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile uint16_t x725 = 234U;
	int8_t x728 = INT8_MIN;
	volatile int32_t t171 = 46052106;

    t171 = (x725!=(x726-(x727/x728)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x729 = 56U;
	volatile uint32_t x731 = 1588U;
	volatile int16_t x732 = INT16_MIN;
	volatile int32_t t172 = 11576075;

    t172 = (x729!=(x730-(x731/x732)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x733 = INT64_MIN;
	static uint64_t x734 = UINT64_MAX;
	volatile uint8_t x735 = 74U;
	static volatile int16_t x736 = INT16_MIN;
	int32_t t173 = 2;

    t173 = (x733!=(x734-(x735/x736)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x738 = UINT16_MAX;
	int64_t x740 = INT64_MIN;
	volatile int32_t t174 = -20649;

    t174 = (x737!=(x738-(x739/x740)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x742 = 4422U;
	int16_t x744 = -1;

    t175 = (x741!=(x742-(x743/x744)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x745 = UINT32_MAX;
	volatile int16_t x746 = 0;
	volatile int64_t x748 = INT64_MIN;
	volatile int32_t t176 = 593;

    t176 = (x745!=(x746-(x747/x748)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint32_t x751 = 2228401U;
	static volatile int32_t t177 = 29502712;

    t177 = (x749!=(x750-(x751/x752)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x761 = 0U;
	uint8_t x762 = 5U;
	volatile int16_t x764 = INT16_MIN;
	static int32_t t178 = -53368;

    t178 = (x761!=(x762-(x763/x764)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x765 = 7;
	int16_t x766 = -1245;
	int16_t x767 = INT16_MAX;
	static int32_t x768 = -1;
	int32_t t179 = -92;

    t179 = (x765!=(x766-(x767/x768)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x769 = 32818455881LLU;
	int32_t x770 = -12;
	uint16_t x771 = 19U;
	int8_t x772 = -1;
	volatile int32_t t180 = -485203;

    t180 = (x769!=(x770-(x771/x772)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x773 = 8U;
	volatile uint32_t x775 = 15641424U;
	uint32_t x776 = UINT32_MAX;
	int32_t t181 = 328;

    t181 = (x773!=(x774-(x775/x776)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x777 = -1LL;
	int32_t x778 = 332;
	volatile int8_t x779 = INT8_MIN;
	int32_t t182 = 22629;

    t182 = (x777!=(x778-(x779/x780)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x781 = -100;
	int8_t x782 = 0;
	int8_t x783 = INT8_MIN;
	uint8_t x784 = UINT8_MAX;

    t183 = (x781!=(x782-(x783/x784)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x785 = UINT64_MAX;
	int32_t x786 = INT32_MAX;
	static int64_t x787 = -26615062LL;
	volatile int32_t t184 = -3782440;

    t184 = (x785!=(x786-(x787/x788)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x789 = 3183U;
	int8_t x790 = -1;
	uint8_t x791 = 12U;
	static int32_t x792 = -1;
	volatile int32_t t185 = 3809;

    t185 = (x789!=(x790-(x791/x792)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x793 = UINT32_MAX;
	static uint64_t x795 = 8450196388499LLU;
	static int64_t x796 = 235612LL;
	int32_t t186 = 81;

    t186 = (x793!=(x794-(x795/x796)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x797 = -1;
	int8_t x798 = INT8_MIN;
	uint8_t x800 = 53U;
	int32_t t187 = 791246551;

    t187 = (x797!=(x798-(x799/x800)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x801 = -1;
	static int16_t x802 = INT16_MIN;
	int32_t x803 = -209260085;
	static uint32_t x804 = 11U;
	int32_t t188 = 1994437;

    t188 = (x801!=(x802-(x803/x804)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x805 = INT64_MIN;
	volatile int16_t x806 = 1;
	uint8_t x807 = UINT8_MAX;
	uint32_t x808 = UINT32_MAX;

    t189 = (x805!=(x806-(x807/x808)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x810 = INT8_MAX;
	volatile int8_t x811 = INT8_MIN;
	volatile int64_t x812 = INT64_MAX;
	volatile int32_t t190 = 81;

    t190 = (x809!=(x810-(x811/x812)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x813 = INT32_MAX;
	volatile int8_t x814 = -30;
	int16_t x815 = 0;
	int64_t x816 = -503289185122LL;
	int32_t t191 = 532;

    t191 = (x813!=(x814-(x815/x816)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x818 = -1;
	int16_t x819 = -1;
	static uint32_t x820 = 374241U;
	static volatile int32_t t192 = -404556509;

    t192 = (x817!=(x818-(x819/x820)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x821 = INT8_MIN;
	uint64_t x822 = UINT64_MAX;
	int64_t x823 = 1516164304938088LL;
	int8_t x824 = 13;
	int32_t t193 = -12;

    t193 = (x821!=(x822-(x823/x824)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x825 = INT32_MIN;
	int16_t x826 = 211;
	uint32_t x827 = 431U;
	uint16_t x828 = 19637U;

    t194 = (x825!=(x826-(x827/x828)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x829 = -1;
	int16_t x830 = 4056;
	volatile int64_t x831 = INT64_MIN;
	int64_t x832 = INT64_MIN;

    t195 = (x829!=(x830-(x831/x832)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x833 = -27;
	uint16_t x834 = UINT16_MAX;
	int64_t x835 = 3803691LL;
	uint16_t x836 = UINT16_MAX;
	volatile int32_t t196 = 10;

    t196 = (x833!=(x834-(x835/x836)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x837 = UINT8_MAX;
	uint32_t x839 = 405U;
	static uint32_t x840 = UINT32_MAX;
	int32_t t197 = -7301871;

    t197 = (x837!=(x838-(x839/x840)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x842 = INT8_MIN;
	int32_t x843 = INT32_MIN;
	volatile int32_t t198 = -623;

    t198 = (x841!=(x842-(x843/x844)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x845 = 1868934LLU;
	volatile uint16_t x846 = 809U;
	int8_t x847 = -3;
	int64_t x848 = INT64_MIN;
	volatile int32_t t199 = 8;

    t199 = (x845!=(x846-(x847/x848)));

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

