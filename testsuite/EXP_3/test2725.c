
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

static int32_t t0 = -7;
static int64_t x8 = INT64_MIN;
int32_t t2 = 1678790;
int64_t x16 = INT64_MIN;
uint16_t x18 = UINT16_MAX;
int32_t t5 = 138203956;
int64_t x27 = INT64_MAX;
uint64_t x31 = UINT64_MAX;
static int16_t x32 = INT16_MAX;
static uint32_t x35 = 1305148U;
int32_t t8 = -3158;
uint16_t x39 = UINT16_MAX;
volatile int32_t x40 = -97712066;
int8_t x45 = INT8_MIN;
static int32_t x50 = -273;
static int8_t x53 = 1;
static int32_t x60 = INT32_MAX;
static volatile int8_t x65 = INT8_MAX;
volatile int64_t x66 = INT64_MIN;
volatile int32_t t16 = -1338248;
volatile int64_t x78 = INT64_MIN;
uint64_t x80 = UINT64_MAX;
volatile int16_t x81 = INT16_MAX;
static uint16_t x84 = UINT16_MAX;
uint64_t x85 = 482509299927336LLU;
uint64_t x88 = UINT64_MAX;
volatile int32_t t22 = -12;
volatile int64_t x93 = 2156516532903LL;
volatile int32_t x95 = INT32_MAX;
int8_t x97 = INT8_MIN;
uint16_t x98 = 15U;
int32_t t24 = -922432;
volatile int64_t x108 = INT64_MIN;
uint64_t x113 = UINT64_MAX;
int32_t x122 = INT32_MIN;
volatile int32_t x123 = INT32_MIN;
uint8_t x124 = 97U;
uint32_t x127 = 10U;
int8_t x133 = -1;
int32_t t33 = 559;
static int16_t x137 = INT16_MAX;
int16_t x140 = INT16_MIN;
int32_t t34 = -6244;
uint32_t x146 = UINT32_MAX;
static uint32_t x149 = UINT32_MAX;
uint8_t x151 = 0U;
int32_t t37 = 44914227;
int16_t x154 = INT16_MAX;
int8_t x165 = -1;
volatile int32_t t41 = 50768;
int64_t x169 = INT64_MIN;
uint16_t x171 = UINT16_MAX;
volatile int32_t x179 = INT32_MIN;
int16_t x181 = INT16_MIN;
volatile int32_t t45 = -94;
int32_t x192 = 3445776;
int8_t x198 = INT8_MIN;
int32_t t49 = -1;
uint64_t x204 = UINT64_MAX;
volatile int32_t t50 = 12646;
int64_t x208 = -1LL;
uint64_t x212 = 90194860843364228LLU;
int16_t x215 = INT16_MAX;
static int8_t x218 = INT8_MAX;
static int64_t x222 = -1LL;
volatile int8_t x228 = INT8_MIN;
int32_t x240 = -2;
volatile int32_t t61 = -30381;
int64_t x261 = INT64_MIN;
volatile int32_t t65 = 1404587;
int16_t x266 = -1;
int64_t x269 = -17691760266LL;
int8_t x273 = INT8_MAX;
int16_t x283 = INT16_MIN;
int16_t x290 = 404;
volatile uint64_t x294 = 7412831592164LLU;
volatile int32_t x297 = 34823542;
int64_t x299 = -5597166LL;
int32_t t74 = 104430768;
int16_t x309 = 54;
uint8_t x311 = 0U;
int32_t x312 = INT32_MIN;
static int64_t x318 = INT64_MIN;
volatile uint32_t x331 = 60U;
volatile uint32_t x345 = UINT32_MAX;
int64_t x346 = 131553546039LL;
int8_t x349 = INT8_MIN;
int16_t x352 = -1;
volatile uint8_t x357 = 2U;
static uint8_t x359 = 11U;
volatile int8_t x362 = INT8_MIN;
int64_t x364 = -1LL;
volatile int32_t t90 = 79403;
uint8_t x367 = 3U;
int32_t t91 = 5;
static int8_t x374 = -1;
int64_t x375 = INT64_MIN;
static int32_t x377 = -1;
volatile int32_t t94 = -187499198;
uint64_t x382 = UINT64_MAX;
volatile int8_t x397 = INT8_MAX;
uint32_t x399 = UINT32_MAX;
uint64_t x405 = 173828689950LLU;
int16_t x412 = -1;
volatile int32_t t102 = 114;
int8_t x416 = INT8_MAX;
int64_t x419 = -1LL;
int8_t x423 = INT8_MIN;
volatile int32_t t105 = -980144;
int32_t t106 = 27252387;
static uint16_t x443 = UINT16_MAX;
int8_t x444 = 36;
int32_t t110 = -1;
uint32_t x452 = 1367332U;
static uint32_t x455 = 342758583U;
static volatile int32_t t113 = 2740;
int32_t x458 = INT32_MIN;
int64_t x461 = 892027403LL;
int32_t t115 = -15;
volatile int32_t x468 = INT32_MIN;
uint16_t x480 = 547U;
int32_t x485 = INT32_MAX;
static int32_t x487 = INT32_MAX;
int32_t x491 = -1;
int32_t t123 = -359304553;
uint64_t x502 = UINT64_MAX;
uint64_t x503 = 594807383952LLU;
volatile uint64_t x512 = UINT64_MAX;
int32_t t127 = 33015;
int32_t x513 = INT32_MIN;
uint8_t x516 = 79U;
int32_t x521 = INT32_MIN;
int8_t x524 = -57;
uint64_t x533 = 39193603515LLU;
static volatile int32_t x543 = INT32_MAX;
uint32_t x545 = 61178U;
int64_t x552 = INT64_MIN;
volatile int8_t x553 = -1;
uint64_t x554 = 0LLU;
int32_t x556 = 290;
volatile int8_t x560 = -3;
int64_t x564 = INT64_MIN;
int8_t x565 = -27;
uint32_t x568 = 22581973U;
volatile int32_t t142 = 82165;
uint16_t x573 = 207U;
static uint32_t x582 = UINT32_MAX;
int16_t x585 = INT16_MIN;
uint8_t x589 = 4U;
int16_t x591 = INT16_MAX;
static int16_t x595 = -1050;
int16_t x599 = INT16_MIN;
int32_t t150 = -6743253;
volatile int8_t x606 = INT8_MIN;
int16_t x607 = -14347;
static uint8_t x608 = 4U;
uint16_t x615 = UINT16_MAX;
int32_t t154 = 26;
int32_t t155 = -108;
uint32_t x626 = 53370140U;
int16_t x628 = 8782;
uint16_t x634 = 28757U;
uint64_t x643 = 1796868193LLU;
int8_t x644 = 3;
int32_t x646 = INT32_MAX;
volatile int64_t x651 = INT64_MIN;
int32_t x654 = -1;
uint32_t x657 = UINT32_MAX;
uint16_t x658 = 1232U;
int32_t x671 = INT32_MIN;
static int16_t x677 = INT16_MIN;
volatile int32_t t169 = -4799;
uint16_t x700 = 17211U;
static int8_t x710 = INT8_MIN;
int32_t t177 = 112610;
volatile int32_t x714 = INT32_MIN;
int8_t x715 = 12;
int64_t x717 = INT64_MIN;
uint16_t x728 = UINT16_MAX;
volatile int8_t x730 = -1;
uint32_t x735 = 1023151352U;
int16_t x737 = INT16_MIN;
int8_t x738 = 0;
static uint32_t x740 = 3335U;
int16_t x746 = 2914;
volatile int32_t x751 = INT32_MAX;
int64_t x754 = INT64_MIN;
static int32_t x759 = 28688593;
int32_t x765 = 30640;
int16_t x767 = -1;
int8_t x768 = INT8_MIN;
int16_t x770 = -32;
volatile int16_t x773 = INT16_MIN;
static int32_t x774 = 2;
int8_t x776 = INT8_MIN;
volatile int16_t x780 = INT16_MAX;
volatile int32_t x789 = 24;
static int32_t t197 = -365;
int16_t x794 = INT16_MIN;
int8_t x800 = INT8_MIN;


void f0(void) {
    	int64_t x1 = INT64_MAX;
	static int64_t x2 = -1LL;
	volatile int8_t x3 = -1;
	volatile int32_t x4 = INT32_MAX;

    t0 = ((x1|x2)>(x3^x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 2U;
	int64_t x6 = -68LL;
	int16_t x7 = -1198;
	volatile int32_t t1 = -11;

    t1 = ((x5|x6)>(x7^x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MAX;
	int64_t x10 = INT64_MIN;
	int32_t x11 = INT32_MIN;
	int64_t x12 = -1LL;

    t2 = ((x9|x10)>(x11^x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = INT32_MIN;
	int8_t x14 = -22;
	int16_t x15 = INT16_MIN;
	volatile int32_t t3 = -331;

    t3 = ((x13|x14)>(x15^x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint16_t x17 = 2U;
	static uint16_t x19 = 104U;
	volatile int16_t x20 = INT16_MAX;
	int32_t t4 = 539907;

    t4 = ((x17|x18)>(x19^x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x21 = INT32_MAX;
	int16_t x22 = -5;
	uint64_t x23 = 962976LLU;
	int64_t x24 = -1LL;

    t5 = ((x21|x22)>(x23^x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = UINT32_MAX;
	volatile int8_t x26 = INT8_MIN;
	static uint8_t x28 = 114U;
	volatile int32_t t6 = 1775;

    t6 = ((x25|x26)>(x27^x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = UINT32_MAX;
	int8_t x30 = -1;
	int32_t t7 = 15707;

    t7 = ((x29|x30)>(x31^x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x33 = 1318280660LLU;
	uint8_t x34 = UINT8_MAX;
	int64_t x36 = INT64_MAX;

    t8 = ((x33|x34)>(x35^x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = 7;
	int32_t x38 = INT32_MIN;
	static int32_t t9 = -52713757;

    t9 = ((x37|x38)>(x39^x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = UINT8_MAX;
	static uint32_t x42 = 48U;
	int8_t x43 = -34;
	int64_t x44 = -1LL;
	int32_t t10 = 136100009;

    t10 = ((x41|x42)>(x43^x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x46 = INT64_MAX;
	int64_t x47 = INT64_MIN;
	static volatile uint64_t x48 = UINT64_MAX;
	volatile int32_t t11 = -12;

    t11 = ((x45|x46)>(x47^x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x49 = INT32_MAX;
	uint64_t x51 = 188767LLU;
	uint8_t x52 = 14U;
	volatile int32_t t12 = 1005;

    t12 = ((x49|x50)>(x51^x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x54 = UINT16_MAX;
	static uint8_t x55 = 3U;
	static volatile int8_t x56 = INT8_MIN;
	int32_t t13 = 8439;

    t13 = ((x53|x54)>(x55^x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = 45U;
	int32_t x58 = INT32_MAX;
	uint8_t x59 = 61U;
	volatile int32_t t14 = 2378;

    t14 = ((x57|x58)>(x59^x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = -226749LL;
	int8_t x62 = -1;
	int64_t x63 = -1LL;
	int32_t x64 = INT32_MIN;
	int32_t t15 = 1221;

    t15 = ((x61|x62)>(x63^x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int64_t x67 = INT64_MIN;
	static uint8_t x68 = UINT8_MAX;

    t16 = ((x65|x66)>(x67^x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x69 = -1;
	int32_t x70 = 72202;
	volatile uint32_t x71 = 3U;
	int32_t x72 = INT32_MAX;
	volatile int32_t t17 = -22;

    t17 = ((x69|x70)>(x71^x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = 115611U;
	static uint8_t x74 = UINT8_MAX;
	int64_t x75 = 9LL;
	int8_t x76 = INT8_MIN;
	int32_t t18 = 64070820;

    t18 = ((x73|x74)>(x75^x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x77 = 494178;
	static volatile uint8_t x79 = UINT8_MAX;
	volatile int32_t t19 = 880301;

    t19 = ((x77|x78)>(x79^x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x82 = -1;
	volatile int8_t x83 = 5;
	int32_t t20 = 7;

    t20 = ((x81|x82)>(x83^x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x86 = 206U;
	static int8_t x87 = 47;
	static volatile int32_t t21 = 55757276;

    t21 = ((x85|x86)>(x87^x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x89 = 71U;
	volatile int16_t x90 = INT16_MIN;
	uint32_t x91 = 11966U;
	int8_t x92 = INT8_MIN;

    t22 = ((x89|x90)>(x91^x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x94 = UINT64_MAX;
	int32_t x96 = 286111784;
	int32_t t23 = 438982689;

    t23 = ((x93|x94)>(x95^x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x99 = 21LL;
	uint64_t x100 = UINT64_MAX;

    t24 = ((x97|x98)>(x99^x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x101 = -1;
	uint32_t x102 = UINT32_MAX;
	int8_t x103 = INT8_MIN;
	volatile uint8_t x104 = 5U;
	int32_t t25 = 520223;

    t25 = ((x101|x102)>(x103^x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = INT32_MIN;
	static int64_t x106 = INT64_MIN;
	int64_t x107 = INT64_MIN;
	volatile int32_t t26 = 1786;

    t26 = ((x105|x106)>(x107^x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x109 = -1;
	static uint8_t x110 = 17U;
	int32_t x111 = INT32_MIN;
	int16_t x112 = INT16_MIN;
	int32_t t27 = -745241;

    t27 = ((x109|x110)>(x111^x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x114 = 159477376U;
	uint16_t x115 = 1U;
	int32_t x116 = INT32_MAX;
	int32_t t28 = 5704;

    t28 = ((x113|x114)>(x115^x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = -15341;
	int16_t x118 = -97;
	volatile uint32_t x119 = UINT32_MAX;
	static int8_t x120 = -21;
	static int32_t t29 = 15719;

    t29 = ((x117|x118)>(x119^x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = -1182;
	static volatile int32_t t30 = -64252;

    t30 = ((x121|x122)>(x123^x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x125 = UINT16_MAX;
	volatile int64_t x126 = INT64_MAX;
	static int16_t x128 = -1;
	static volatile int32_t t31 = 2306;

    t31 = ((x125|x126)>(x127^x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MAX;
	volatile int8_t x130 = INT8_MIN;
	int64_t x131 = -1LL;
	int64_t x132 = 1166687764301338893LL;
	static volatile int32_t t32 = -1;

    t32 = ((x129|x130)>(x131^x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x134 = 46;
	static int32_t x135 = 1;
	int16_t x136 = 5;

    t33 = ((x133|x134)>(x135^x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x138 = INT64_MIN;
	int64_t x139 = INT64_MAX;

    t34 = ((x137|x138)>(x139^x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int64_t x141 = INT64_MIN;
	static int64_t x142 = -6767484014LL;
	volatile int32_t x143 = INT32_MIN;
	static int64_t x144 = INT64_MAX;
	volatile int32_t t35 = -86824382;

    t35 = ((x141|x142)>(x143^x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = 637;
	static int8_t x147 = INT8_MAX;
	int64_t x148 = -202086940944546LL;
	volatile int32_t t36 = 9220647;

    t36 = ((x145|x146)>(x147^x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x150 = INT8_MIN;
	uint64_t x152 = UINT64_MAX;

    t37 = ((x149|x150)>(x151^x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int64_t x153 = INT64_MIN;
	static uint64_t x155 = UINT64_MAX;
	int8_t x156 = INT8_MAX;
	int32_t t38 = -26;

    t38 = ((x153|x154)>(x155^x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = 3615425178LL;
	uint16_t x158 = UINT16_MAX;
	uint32_t x159 = 3639U;
	volatile int16_t x160 = 0;
	volatile int32_t t39 = -2;

    t39 = ((x157|x158)>(x159^x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = INT32_MAX;
	int8_t x162 = -40;
	static uint32_t x163 = UINT32_MAX;
	int16_t x164 = INT16_MIN;
	int32_t t40 = -25384;

    t40 = ((x161|x162)>(x163^x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x166 = 30U;
	uint64_t x167 = 126830690521866421LLU;
	static int8_t x168 = 0;

    t41 = ((x165|x166)>(x167^x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x170 = UINT16_MAX;
	uint64_t x172 = UINT64_MAX;
	static int32_t t42 = 93;

    t42 = ((x169|x170)>(x171^x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = INT8_MIN;
	int16_t x174 = -1;
	int8_t x175 = 38;
	int64_t x176 = -1LL;
	volatile int32_t t43 = -45;

    t43 = ((x173|x174)>(x175^x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = -1;
	uint64_t x178 = 1039801567499763702LLU;
	int16_t x180 = 4;
	volatile int32_t t44 = 1;

    t44 = ((x177|x178)>(x179^x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x182 = 107429;
	uint16_t x183 = UINT16_MAX;
	int16_t x184 = 239;

    t45 = ((x181|x182)>(x183^x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = -1;
	volatile uint16_t x186 = 7689U;
	int32_t x187 = INT32_MIN;
	volatile int8_t x188 = 0;
	int32_t t46 = 1;

    t46 = ((x185|x186)>(x187^x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = 797930708LL;
	volatile int16_t x190 = INT16_MIN;
	uint64_t x191 = 1198271479757764328LLU;
	int32_t t47 = -329;

    t47 = ((x189|x190)>(x191^x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x193 = INT16_MIN;
	uint64_t x194 = 304361616284017LLU;
	int64_t x195 = -3421044460436911369LL;
	uint64_t x196 = 50821LLU;
	int32_t t48 = -430;

    t48 = ((x193|x194)>(x195^x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x197 = -1;
	int32_t x199 = INT32_MIN;
	int64_t x200 = -298908LL;

    t49 = ((x197|x198)>(x199^x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = INT32_MIN;
	uint64_t x202 = 941748553LLU;
	int64_t x203 = INT64_MIN;

    t50 = ((x201|x202)>(x203^x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = INT16_MIN;
	uint16_t x206 = 4U;
	int8_t x207 = -1;
	int32_t t51 = 3343399;

    t51 = ((x205|x206)>(x207^x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x209 = 240533591U;
	static int16_t x210 = 16;
	int32_t x211 = -5239739;
	static int32_t t52 = -7531081;

    t52 = ((x209|x210)>(x211^x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = INT16_MIN;
	int64_t x214 = INT64_MIN;
	int64_t x216 = -1LL;
	int32_t t53 = -4338635;

    t53 = ((x213|x214)>(x215^x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = 4883;
	int32_t x219 = INT32_MIN;
	static volatile int32_t x220 = 0;
	volatile int32_t t54 = -439;

    t54 = ((x217|x218)>(x219^x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x221 = INT8_MIN;
	static int8_t x223 = -1;
	int16_t x224 = -853;
	int32_t t55 = -11184288;

    t55 = ((x221|x222)>(x223^x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x225 = -1;
	uint8_t x226 = UINT8_MAX;
	int16_t x227 = -1;
	static volatile int32_t t56 = -491758657;

    t56 = ((x225|x226)>(x227^x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = 724U;
	int8_t x230 = INT8_MIN;
	int32_t x231 = INT32_MIN;
	int16_t x232 = -22;
	int32_t t57 = -142284795;

    t57 = ((x229|x230)>(x231^x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x233 = -1;
	int64_t x234 = INT64_MIN;
	volatile int32_t x235 = -4910;
	volatile int64_t x236 = INT64_MIN;
	volatile int32_t t58 = -1359655;

    t58 = ((x233|x234)>(x235^x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x237 = -1;
	int8_t x238 = -1;
	uint16_t x239 = 46U;
	int32_t t59 = 10;

    t59 = ((x237|x238)>(x239^x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x241 = INT32_MIN;
	int8_t x242 = -1;
	uint32_t x243 = UINT32_MAX;
	volatile int32_t x244 = -14307734;
	volatile int32_t t60 = 290488;

    t60 = ((x241|x242)>(x243^x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = INT16_MIN;
	static uint32_t x246 = UINT32_MAX;
	int8_t x247 = INT8_MIN;
	int8_t x248 = -1;

    t61 = ((x245|x246)>(x247^x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = INT16_MAX;
	int16_t x250 = INT16_MIN;
	volatile uint32_t x251 = 1661U;
	static volatile int16_t x252 = -1;
	volatile int32_t t62 = 11;

    t62 = ((x249|x250)>(x251^x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = -1;
	uint32_t x254 = 14407306U;
	int16_t x255 = -229;
	int8_t x256 = INT8_MIN;
	int32_t t63 = 1;

    t63 = ((x253|x254)>(x255^x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = -1LL;
	volatile uint8_t x258 = UINT8_MAX;
	static int8_t x259 = -10;
	int64_t x260 = 710142528229147LL;
	int32_t t64 = -98987;

    t64 = ((x257|x258)>(x259^x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x262 = -12;
	int8_t x263 = 0;
	volatile uint32_t x264 = 697U;

    t65 = ((x261|x262)>(x263^x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x265 = UINT64_MAX;
	uint64_t x267 = UINT64_MAX;
	uint8_t x268 = UINT8_MAX;
	int32_t t66 = 115558013;

    t66 = ((x265|x266)>(x267^x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x270 = 81;
	uint16_t x271 = 1007U;
	volatile int64_t x272 = INT64_MIN;
	static int32_t t67 = -66853346;

    t67 = ((x269|x270)>(x271^x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x274 = 111314045464792529LLU;
	static uint16_t x275 = 1952U;
	uint8_t x276 = 45U;
	volatile int32_t t68 = 0;

    t68 = ((x273|x274)>(x275^x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x277 = 1U;
	static uint64_t x278 = UINT64_MAX;
	uint64_t x279 = UINT64_MAX;
	int32_t x280 = -1;
	int32_t t69 = 547586;

    t69 = ((x277|x278)>(x279^x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = INT64_MIN;
	static uint32_t x282 = 910157987U;
	uint64_t x284 = 1475211572757866LLU;
	int32_t t70 = -76905;

    t70 = ((x281|x282)>(x283^x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = 0;
	uint8_t x286 = 86U;
	uint16_t x287 = UINT16_MAX;
	int64_t x288 = -61896380362LL;
	int32_t t71 = -16933;

    t71 = ((x285|x286)>(x287^x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x289 = -1LL;
	static volatile uint16_t x291 = 6250U;
	uint64_t x292 = 225793637LLU;
	static int32_t t72 = 874129086;

    t72 = ((x289|x290)>(x291^x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = INT8_MAX;
	int32_t x295 = 2328966;
	uint16_t x296 = 5559U;
	volatile int32_t t73 = -499252;

    t73 = ((x293|x294)>(x295^x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x298 = INT8_MAX;
	volatile int32_t x300 = 0;

    t74 = ((x297|x298)>(x299^x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = 7;
	volatile int8_t x302 = INT8_MIN;
	volatile int64_t x303 = -26LL;
	int8_t x304 = -51;
	int32_t t75 = 19579;

    t75 = ((x301|x302)>(x303^x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x305 = UINT64_MAX;
	uint64_t x306 = 1684256443LLU;
	uint32_t x307 = 69U;
	uint16_t x308 = 8835U;
	volatile int32_t t76 = -6376;

    t76 = ((x305|x306)>(x307^x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x310 = 49;
	volatile int32_t t77 = -90873173;

    t77 = ((x309|x310)>(x311^x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x313 = UINT64_MAX;
	uint64_t x314 = 2792859073336LLU;
	volatile int64_t x315 = 14778224LL;
	uint8_t x316 = 60U;
	volatile int32_t t78 = 6;

    t78 = ((x313|x314)>(x315^x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int16_t x317 = -1;
	static volatile int32_t x319 = INT32_MAX;
	int64_t x320 = 1946416LL;
	volatile int32_t t79 = -9519498;

    t79 = ((x317|x318)>(x319^x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = -476463050;
	volatile int32_t x322 = -2199406;
	int32_t x323 = INT32_MAX;
	int16_t x324 = INT16_MIN;
	volatile int32_t t80 = 13531633;

    t80 = ((x321|x322)>(x323^x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x325 = 5U;
	volatile int8_t x326 = INT8_MAX;
	volatile int32_t x327 = 263;
	uint64_t x328 = 1881420031184LLU;
	int32_t t81 = -178158;

    t81 = ((x325|x326)>(x327^x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x329 = 0LLU;
	static uint32_t x330 = 257U;
	volatile int64_t x332 = INT64_MAX;
	int32_t t82 = -65;

    t82 = ((x329|x330)>(x331^x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = INT8_MIN;
	int64_t x334 = INT64_MIN;
	static volatile uint64_t x335 = UINT64_MAX;
	int16_t x336 = INT16_MAX;
	volatile int32_t t83 = 64641;

    t83 = ((x333|x334)>(x335^x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = -1;
	static int16_t x338 = INT16_MIN;
	int8_t x339 = INT8_MIN;
	int16_t x340 = INT16_MIN;
	int32_t t84 = 6199896;

    t84 = ((x337|x338)>(x339^x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = INT16_MAX;
	uint32_t x342 = UINT32_MAX;
	int16_t x343 = INT16_MIN;
	int8_t x344 = INT8_MIN;
	int32_t t85 = -63;

    t85 = ((x341|x342)>(x343^x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x347 = 1128764207328LLU;
	volatile int32_t x348 = INT32_MAX;
	int32_t t86 = 2887344;

    t86 = ((x345|x346)>(x347^x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x350 = INT16_MIN;
	static int16_t x351 = 1;
	int32_t t87 = -842015;

    t87 = ((x349|x350)>(x351^x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x353 = INT8_MAX;
	int64_t x354 = -1LL;
	int16_t x355 = 6;
	int32_t x356 = INT32_MIN;
	int32_t t88 = 0;

    t88 = ((x353|x354)>(x355^x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x358 = UINT64_MAX;
	uint64_t x360 = UINT64_MAX;
	int32_t t89 = -350559101;

    t89 = ((x357|x358)>(x359^x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x361 = UINT32_MAX;
	uint16_t x363 = 405U;

    t90 = ((x361|x362)>(x363^x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = INT32_MIN;
	int64_t x366 = INT64_MIN;
	int16_t x368 = INT16_MAX;

    t91 = ((x365|x366)>(x367^x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x369 = INT64_MAX;
	static volatile int16_t x370 = INT16_MAX;
	static int32_t x371 = INT32_MAX;
	uint8_t x372 = 29U;
	volatile int32_t t92 = 626849;

    t92 = ((x369|x370)>(x371^x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x373 = 1539244LLU;
	volatile int64_t x376 = 21464810826506485LL;
	static int32_t t93 = -113;

    t93 = ((x373|x374)>(x375^x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x378 = 2143979913LL;
	uint8_t x379 = 23U;
	int32_t x380 = INT32_MAX;

    t94 = ((x377|x378)>(x379^x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x381 = 1U;
	int32_t x383 = -1;
	static uint64_t x384 = 4153021LLU;
	static volatile int32_t t95 = 28078442;

    t95 = ((x381|x382)>(x383^x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = -603212;
	uint64_t x386 = 188694587220364679LLU;
	uint64_t x387 = UINT64_MAX;
	volatile uint64_t x388 = 2707961746LLU;
	volatile int32_t t96 = 113424685;

    t96 = ((x385|x386)>(x387^x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x389 = 4213303161149696LLU;
	volatile int32_t x390 = INT32_MIN;
	volatile int8_t x391 = INT8_MIN;
	volatile int8_t x392 = 1;
	static volatile int32_t t97 = -534533;

    t97 = ((x389|x390)>(x391^x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = INT8_MIN;
	static volatile uint64_t x394 = UINT64_MAX;
	static int64_t x395 = -11927730787LL;
	uint8_t x396 = 4U;
	volatile int32_t t98 = 548918;

    t98 = ((x393|x394)>(x395^x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x398 = -1;
	uint32_t x400 = 62533124U;
	int32_t t99 = -277410218;

    t99 = ((x397|x398)>(x399^x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint32_t x401 = UINT32_MAX;
	uint8_t x402 = UINT8_MAX;
	int32_t x403 = 8;
	int32_t x404 = 700;
	int32_t t100 = -3;

    t100 = ((x401|x402)>(x403^x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x406 = INT8_MIN;
	int32_t x407 = -452;
	volatile int64_t x408 = -1LL;
	static volatile int32_t t101 = -388;

    t101 = ((x405|x406)>(x407^x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = 1;
	static int8_t x410 = 24;
	int64_t x411 = 1LL;

    t102 = ((x409|x410)>(x411^x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x413 = UINT32_MAX;
	volatile int8_t x414 = INT8_MIN;
	volatile int16_t x415 = INT16_MAX;
	static volatile int32_t t103 = -50981211;

    t103 = ((x413|x414)>(x415^x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = INT8_MIN;
	static int64_t x418 = -1LL;
	static int16_t x420 = 3011;
	int32_t t104 = -1655631;

    t104 = ((x417|x418)>(x419^x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = -1LL;
	volatile uint8_t x422 = 6U;
	int16_t x424 = -1;

    t105 = ((x421|x422)>(x423^x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = INT32_MIN;
	int32_t x426 = INT32_MAX;
	int64_t x427 = INT64_MIN;
	uint64_t x428 = UINT64_MAX;

    t106 = ((x425|x426)>(x427^x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = INT32_MAX;
	static volatile int32_t x430 = -1;
	int16_t x431 = -23;
	volatile int64_t x432 = -1LL;
	int32_t t107 = 222;

    t107 = ((x429|x430)>(x431^x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x433 = 3740LLU;
	int64_t x434 = INT64_MIN;
	int16_t x435 = INT16_MIN;
	volatile uint8_t x436 = UINT8_MAX;
	int32_t t108 = 30;

    t108 = ((x433|x434)>(x435^x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int64_t x437 = -1LL;
	uint64_t x438 = UINT64_MAX;
	int16_t x439 = INT16_MAX;
	int32_t x440 = INT32_MIN;
	static int32_t t109 = -73;

    t109 = ((x437|x438)>(x439^x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = INT64_MIN;
	static int16_t x442 = 2615;

    t110 = ((x441|x442)>(x443^x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = INT64_MAX;
	int8_t x446 = INT8_MIN;
	uint64_t x447 = 1LLU;
	static int16_t x448 = -485;
	int32_t t111 = -3;

    t111 = ((x445|x446)>(x447^x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x449 = UINT8_MAX;
	int32_t x450 = -117862;
	static int64_t x451 = INT64_MIN;
	volatile int32_t t112 = 11;

    t112 = ((x449|x450)>(x451^x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x453 = UINT8_MAX;
	static int8_t x454 = INT8_MAX;
	int32_t x456 = INT32_MIN;

    t113 = ((x453|x454)>(x455^x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x457 = UINT16_MAX;
	uint64_t x459 = 606845LLU;
	uint16_t x460 = 40U;
	volatile int32_t t114 = -7;

    t114 = ((x457|x458)>(x459^x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x462 = INT32_MIN;
	static uint8_t x463 = UINT8_MAX;
	uint8_t x464 = 41U;

    t115 = ((x461|x462)>(x463^x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x465 = 1;
	int8_t x466 = 3;
	static int8_t x467 = -12;
	volatile int32_t t116 = 12694610;

    t116 = ((x465|x466)>(x467^x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x469 = UINT32_MAX;
	uint16_t x470 = 334U;
	int16_t x471 = INT16_MAX;
	static int32_t x472 = 511402;
	static volatile int32_t t117 = -6595600;

    t117 = ((x469|x470)>(x471^x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x473 = 32072;
	uint8_t x474 = UINT8_MAX;
	int64_t x475 = 1LL;
	int32_t x476 = 3;
	int32_t t118 = -31;

    t118 = ((x473|x474)>(x475^x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x477 = 22U;
	static int8_t x478 = INT8_MIN;
	int8_t x479 = -32;
	volatile int32_t t119 = 280;

    t119 = ((x477|x478)>(x479^x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int16_t x481 = INT16_MAX;
	volatile int16_t x482 = INT16_MAX;
	uint16_t x483 = UINT16_MAX;
	int32_t x484 = -110245;
	int32_t t120 = 503061;

    t120 = ((x481|x482)>(x483^x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x486 = 61463074U;
	volatile int8_t x488 = INT8_MIN;
	int32_t t121 = -367493;

    t121 = ((x485|x486)>(x487^x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x489 = 499U;
	int64_t x490 = -1LL;
	volatile int16_t x492 = INT16_MAX;
	volatile int32_t t122 = 41725761;

    t122 = ((x489|x490)>(x491^x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x493 = INT32_MAX;
	uint64_t x494 = 118162266912LLU;
	uint64_t x495 = 181670100790387LLU;
	int32_t x496 = INT32_MAX;

    t123 = ((x493|x494)>(x495^x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = INT8_MIN;
	uint16_t x498 = 1798U;
	int64_t x499 = -11149261204217852LL;
	uint8_t x500 = 0U;
	static int32_t t124 = -3271234;

    t124 = ((x497|x498)>(x499^x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = -1;
	int64_t x504 = -1LL;
	int32_t t125 = -450314;

    t125 = ((x501|x502)>(x503^x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = 1;
	volatile uint64_t x506 = 208117943LLU;
	int64_t x507 = INT64_MIN;
	uint16_t x508 = 6856U;
	volatile int32_t t126 = -795962531;

    t126 = ((x505|x506)>(x507^x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x509 = UINT16_MAX;
	int64_t x510 = -42361LL;
	static uint64_t x511 = 1890109181768LLU;

    t127 = ((x509|x510)>(x511^x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x514 = INT16_MAX;
	int64_t x515 = -1LL;
	int32_t t128 = 4141330;

    t128 = ((x513|x514)>(x515^x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = -5872176;
	int32_t x518 = -3;
	int64_t x519 = -1LL;
	uint16_t x520 = 13806U;
	volatile int32_t t129 = -61652144;

    t129 = ((x517|x518)>(x519^x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x522 = INT8_MIN;
	int32_t x523 = -1;
	static volatile int32_t t130 = 557;

    t130 = ((x521|x522)>(x523^x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x525 = 30U;
	int32_t x526 = 472158789;
	int16_t x527 = -1;
	uint32_t x528 = 3620428U;
	volatile int32_t t131 = 1368788;

    t131 = ((x525|x526)>(x527^x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = 0;
	volatile uint16_t x530 = 106U;
	int8_t x531 = -57;
	int8_t x532 = INT8_MAX;
	static int32_t t132 = 3217978;

    t132 = ((x529|x530)>(x531^x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint64_t x534 = 454LLU;
	int16_t x535 = -1;
	volatile int32_t x536 = -37627;
	int32_t t133 = 25673;

    t133 = ((x533|x534)>(x535^x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x537 = INT64_MIN;
	int64_t x538 = -41280106LL;
	int8_t x539 = -1;
	int8_t x540 = INT8_MIN;
	int32_t t134 = 5;

    t134 = ((x537|x538)>(x539^x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x541 = UINT16_MAX;
	volatile int16_t x542 = INT16_MAX;
	static int32_t x544 = INT32_MAX;
	int32_t t135 = 26424348;

    t135 = ((x541|x542)>(x543^x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x546 = -1LL;
	static int32_t x547 = -6856863;
	int16_t x548 = 289;
	int32_t t136 = -4027;

    t136 = ((x545|x546)>(x547^x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = -7;
	int64_t x550 = INT64_MIN;
	static int16_t x551 = -1;
	int32_t t137 = -14;

    t137 = ((x549|x550)>(x551^x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x555 = 123322321661705048LL;
	int32_t t138 = 376907;

    t138 = ((x553|x554)>(x555^x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = 51737;
	static uint32_t x558 = UINT32_MAX;
	uint16_t x559 = 192U;
	static volatile int32_t t139 = -5114;

    t139 = ((x557|x558)>(x559^x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x561 = INT32_MAX;
	int32_t x562 = -1;
	static int64_t x563 = INT64_MIN;
	int32_t t140 = 419;

    t140 = ((x561|x562)>(x563^x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x566 = INT32_MIN;
	int8_t x567 = -1;
	int32_t t141 = -192;

    t141 = ((x565|x566)>(x567^x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x569 = 290203398LLU;
	int64_t x570 = 8042300561997LL;
	int16_t x571 = 61;
	int16_t x572 = 6;

    t142 = ((x569|x570)>(x571^x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x574 = 0LL;
	volatile uint8_t x575 = 7U;
	static int8_t x576 = -1;
	volatile int32_t t143 = 184;

    t143 = ((x573|x574)>(x575^x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x577 = 52LLU;
	uint32_t x578 = UINT32_MAX;
	int16_t x579 = INT16_MIN;
	volatile uint8_t x580 = 28U;
	int32_t t144 = 188;

    t144 = ((x577|x578)>(x579^x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = INT32_MAX;
	int32_t x583 = 9902;
	int16_t x584 = INT16_MIN;
	volatile int32_t t145 = -541808;

    t145 = ((x581|x582)>(x583^x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x586 = 3;
	static volatile uint8_t x587 = UINT8_MAX;
	int64_t x588 = 306724866992072LL;
	volatile int32_t t146 = 1509086;

    t146 = ((x585|x586)>(x587^x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x590 = INT8_MAX;
	int32_t x592 = 56;
	int32_t t147 = 55;

    t147 = ((x589|x590)>(x591^x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = 281969499754LL;
	static uint8_t x594 = 7U;
	static int8_t x596 = INT8_MIN;
	volatile int32_t t148 = -9;

    t148 = ((x593|x594)>(x595^x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = -1LL;
	static uint8_t x598 = 18U;
	volatile int16_t x600 = INT16_MIN;
	int32_t t149 = 901967;

    t149 = ((x597|x598)>(x599^x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = 60;
	uint8_t x602 = 0U;
	uint32_t x603 = UINT32_MAX;
	int8_t x604 = INT8_MIN;

    t150 = ((x601|x602)>(x603^x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = INT32_MIN;
	volatile int32_t t151 = 0;

    t151 = ((x605|x606)>(x607^x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x609 = 484166238775LLU;
	volatile int8_t x610 = -1;
	int8_t x611 = -1;
	uint16_t x612 = 3446U;
	int32_t t152 = 3333911;

    t152 = ((x609|x610)>(x611^x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x613 = 30U;
	uint16_t x614 = 51U;
	uint16_t x616 = UINT16_MAX;
	volatile int32_t t153 = 382241;

    t153 = ((x613|x614)>(x615^x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = UINT8_MAX;
	int16_t x618 = INT16_MIN;
	static int64_t x619 = INT64_MIN;
	static int16_t x620 = -1;

    t154 = ((x617|x618)>(x619^x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x621 = UINT8_MAX;
	volatile int16_t x622 = -14171;
	volatile int16_t x623 = -1;
	int32_t x624 = INT32_MIN;

    t155 = ((x621|x622)>(x623^x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = 1;
	int16_t x627 = INT16_MAX;
	volatile int32_t t156 = 371933;

    t156 = ((x625|x626)>(x627^x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = -1LL;
	uint64_t x630 = UINT64_MAX;
	static int32_t x631 = INT32_MIN;
	int64_t x632 = INT64_MIN;
	volatile int32_t t157 = 361948807;

    t157 = ((x629|x630)>(x631^x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = INT16_MIN;
	volatile int64_t x635 = -1LL;
	static int16_t x636 = INT16_MIN;
	volatile int32_t t158 = -7;

    t158 = ((x633|x634)>(x635^x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x637 = UINT64_MAX;
	volatile int32_t x638 = INT32_MAX;
	int8_t x639 = -6;
	volatile int8_t x640 = INT8_MAX;
	int32_t t159 = 3;

    t159 = ((x637|x638)>(x639^x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x641 = INT64_MIN;
	uint16_t x642 = 1525U;
	volatile int32_t t160 = 6223;

    t160 = ((x641|x642)>(x643^x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x645 = 229627623U;
	int8_t x647 = INT8_MIN;
	static volatile uint32_t x648 = 253246879U;
	volatile int32_t t161 = 34719443;

    t161 = ((x645|x646)>(x647^x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x649 = 0U;
	uint8_t x650 = UINT8_MAX;
	volatile int32_t x652 = INT32_MIN;
	int32_t t162 = -130120074;

    t162 = ((x649|x650)>(x651^x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = INT64_MIN;
	uint16_t x655 = 3U;
	static uint8_t x656 = UINT8_MAX;
	static int32_t t163 = -204457350;

    t163 = ((x653|x654)>(x655^x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x659 = -1;
	volatile int64_t x660 = INT64_MIN;
	static volatile int32_t t164 = -1;

    t164 = ((x657|x658)>(x659^x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = -1;
	int64_t x662 = -1LL;
	uint64_t x663 = 830340902013059619LLU;
	int8_t x664 = 1;
	int32_t t165 = 2733;

    t165 = ((x661|x662)>(x663^x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = INT64_MAX;
	static uint32_t x666 = 79071804U;
	uint64_t x667 = UINT64_MAX;
	static int64_t x668 = INT64_MIN;
	static volatile int32_t t166 = -14555147;

    t166 = ((x665|x666)>(x667^x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x669 = 902981744;
	uint32_t x670 = 1117068197U;
	uint16_t x672 = UINT16_MAX;
	int32_t t167 = 2372665;

    t167 = ((x669|x670)>(x671^x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x673 = 1092553U;
	uint32_t x674 = 3998U;
	int16_t x675 = 2;
	int32_t x676 = INT32_MIN;
	static volatile int32_t t168 = 3;

    t168 = ((x673|x674)>(x675^x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x678 = INT64_MIN;
	uint64_t x679 = UINT64_MAX;
	uint32_t x680 = 4186059U;

    t169 = ((x677|x678)>(x679^x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x681 = INT8_MAX;
	uint32_t x682 = 1994896U;
	uint16_t x683 = 85U;
	int32_t x684 = INT32_MIN;
	int32_t t170 = -36427;

    t170 = ((x681|x682)>(x683^x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = -1;
	int8_t x686 = INT8_MIN;
	int16_t x687 = 1009;
	int32_t x688 = INT32_MIN;
	int32_t t171 = -5809803;

    t171 = ((x685|x686)>(x687^x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = INT64_MIN;
	int64_t x690 = -1LL;
	int64_t x691 = -1LL;
	volatile uint32_t x692 = UINT32_MAX;
	int32_t t172 = 21770405;

    t172 = ((x689|x690)>(x691^x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x693 = INT32_MIN;
	int16_t x694 = -1799;
	int8_t x695 = 6;
	int8_t x696 = 3;
	volatile int32_t t173 = 3;

    t173 = ((x693|x694)>(x695^x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = -1LL;
	static int32_t x698 = 16;
	uint16_t x699 = UINT16_MAX;
	volatile int32_t t174 = -11861;

    t174 = ((x697|x698)>(x699^x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x701 = 3914190562281233196LLU;
	int32_t x702 = -1;
	int32_t x703 = INT32_MAX;
	volatile uint64_t x704 = UINT64_MAX;
	volatile int32_t t175 = 1316859;

    t175 = ((x701|x702)>(x703^x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x705 = -15605806;
	uint8_t x706 = 1U;
	uint16_t x707 = 2U;
	volatile uint16_t x708 = 175U;
	volatile int32_t t176 = 3060671;

    t176 = ((x705|x706)>(x707^x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x709 = UINT8_MAX;
	int32_t x711 = INT32_MIN;
	int32_t x712 = INT32_MIN;

    t177 = ((x709|x710)>(x711^x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x713 = 203LLU;
	int32_t x716 = INT32_MAX;
	int32_t t178 = 1;

    t178 = ((x713|x714)>(x715^x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x718 = INT8_MIN;
	static volatile int16_t x719 = -3189;
	int32_t x720 = INT32_MIN;
	static volatile int32_t t179 = -2096280;

    t179 = ((x717|x718)>(x719^x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = INT16_MIN;
	int16_t x722 = INT16_MAX;
	volatile int64_t x723 = -1LL;
	uint64_t x724 = 431939410861118LLU;
	static volatile int32_t t180 = -107264799;

    t180 = ((x721|x722)>(x723^x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = INT32_MIN;
	uint16_t x726 = 4489U;
	int8_t x727 = INT8_MIN;
	volatile int32_t t181 = -7;

    t181 = ((x725|x726)>(x727^x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = -10;
	volatile uint32_t x731 = UINT32_MAX;
	uint32_t x732 = UINT32_MAX;
	volatile int32_t t182 = -53;

    t182 = ((x729|x730)>(x731^x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x733 = 25U;
	int16_t x734 = INT16_MAX;
	int32_t x736 = INT32_MAX;
	static volatile int32_t t183 = 0;

    t183 = ((x733|x734)>(x735^x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x739 = 0;
	int32_t t184 = -232691;

    t184 = ((x737|x738)>(x739^x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x741 = -1;
	int16_t x742 = INT16_MIN;
	int32_t x743 = INT32_MIN;
	static int8_t x744 = -1;
	volatile int32_t t185 = 87908;

    t185 = ((x741|x742)>(x743^x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x745 = 8U;
	int16_t x747 = 6600;
	static uint16_t x748 = 2027U;
	volatile int32_t t186 = 669;

    t186 = ((x745|x746)>(x747^x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = -1;
	uint8_t x750 = 7U;
	int16_t x752 = -1;
	int32_t t187 = 1442;

    t187 = ((x749|x750)>(x751^x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x753 = 167418LLU;
	volatile int32_t x755 = -1;
	uint64_t x756 = 108288LLU;
	int32_t t188 = 219790;

    t188 = ((x753|x754)>(x755^x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x757 = UINT16_MAX;
	uint32_t x758 = 37U;
	uint64_t x760 = 5541936370LLU;
	volatile int32_t t189 = -504;

    t189 = ((x757|x758)>(x759^x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = 686;
	int64_t x762 = 122903475318LL;
	int32_t x763 = -39787;
	uint8_t x764 = 3U;
	int32_t t190 = -52569;

    t190 = ((x761|x762)>(x763^x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x766 = INT32_MIN;
	int32_t t191 = 224777;

    t191 = ((x765|x766)>(x767^x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = -1LL;
	static uint32_t x771 = UINT32_MAX;
	int32_t x772 = 0;
	volatile int32_t t192 = 79951;

    t192 = ((x769|x770)>(x771^x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x775 = INT8_MIN;
	int32_t t193 = -1;

    t193 = ((x773|x774)>(x775^x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x777 = 23105U;
	volatile uint64_t x778 = 939036057820856675LLU;
	volatile int8_t x779 = -1;
	static int32_t t194 = -15;

    t194 = ((x777|x778)>(x779^x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint8_t x781 = 16U;
	int8_t x782 = 1;
	uint64_t x783 = 1794268293627982102LLU;
	static int64_t x784 = -64923755LL;
	int32_t t195 = 6850;

    t195 = ((x781|x782)>(x783^x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x785 = UINT64_MAX;
	int8_t x786 = INT8_MIN;
	int16_t x787 = -9;
	static uint64_t x788 = UINT64_MAX;
	volatile int32_t t196 = -43;

    t196 = ((x785|x786)>(x787^x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x790 = 15;
	uint8_t x791 = 1U;
	static uint32_t x792 = UINT32_MAX;

    t197 = ((x789|x790)>(x791^x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = INT64_MIN;
	static int64_t x795 = 961440065LL;
	uint64_t x796 = UINT64_MAX;
	int32_t t198 = 1663490;

    t198 = ((x793|x794)>(x795^x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = INT64_MAX;
	uint64_t x798 = UINT64_MAX;
	int8_t x799 = -4;
	int32_t t199 = 4358;

    t199 = ((x797|x798)>(x799^x800));

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

