
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

static volatile int64_t x1 = INT64_MAX;
volatile int16_t x2 = INT16_MIN;
uint64_t x3 = 1805227423LLU;
uint16_t x4 = UINT16_MAX;
int32_t x15 = -1;
int32_t x16 = INT32_MIN;
uint32_t x19 = UINT32_MAX;
uint32_t t4 = 111U;
int64_t x23 = -1LL;
uint64_t x24 = 13542419474269209LLU;
volatile uint64_t t5 = 90LLU;
uint64_t x25 = 15953709LLU;
int16_t x27 = INT16_MIN;
int8_t x30 = 21;
int64_t x42 = 7389008402410445LL;
uint32_t x47 = 30227317U;
uint64_t t11 = 8396082585099358LLU;
static volatile int64_t x53 = INT64_MAX;
volatile int64_t x55 = -9371LL;
uint64_t x56 = 3587LLU;
uint16_t x58 = 110U;
static int16_t x61 = -1;
uint8_t x63 = UINT8_MAX;
volatile uint64_t x64 = 544505999337LLU;
int16_t x69 = -1;
uint32_t t17 = 102256U;
static int8_t x75 = -2;
volatile int16_t x76 = INT16_MAX;
int64_t x79 = INT64_MIN;
static int64_t x89 = INT64_MIN;
volatile int64_t x92 = -91LL;
uint32_t x95 = UINT32_MAX;
static int32_t t26 = -39039;
volatile int16_t x112 = 273;
volatile int64_t t27 = -163347964960LL;
uint16_t x116 = UINT16_MAX;
volatile int64_t t28 = -114725554LL;
static uint16_t x123 = 3347U;
int32_t t30 = -11;
volatile int32_t t32 = 11;
int64_t x133 = INT64_MIN;
int16_t x135 = 34;
int32_t x136 = -1090;
static int32_t x137 = -1;
static volatile int32_t x140 = 0;
int8_t x154 = INT8_MIN;
volatile int32_t t38 = -67;
int32_t x158 = -1;
volatile int32_t t40 = 61;
static int64_t x171 = INT64_MIN;
static int32_t x173 = INT32_MIN;
static int32_t x177 = -3416957;
volatile int32_t t45 = 527022866;
volatile int64_t x191 = INT64_MIN;
static int64_t x195 = INT64_MIN;
int64_t x198 = INT64_MIN;
int8_t x201 = -1;
int8_t x204 = -1;
int64_t x205 = 127579029LL;
static uint8_t x211 = UINT8_MAX;
volatile int64_t x213 = INT64_MIN;
uint32_t t53 = 948U;
int32_t x219 = -1;
volatile int64_t x221 = INT64_MAX;
int8_t x222 = INT8_MIN;
uint32_t x223 = 105U;
uint32_t x224 = UINT32_MAX;
int32_t x228 = -7394;
static uint16_t x234 = UINT16_MAX;
uint8_t x236 = 1U;
int32_t t58 = 0;
volatile int32_t t60 = 1342;
static int16_t x251 = -1;
static int32_t t63 = 107273884;
int64_t t64 = -209885357281553733LL;
static int32_t x265 = INT32_MIN;
static int64_t x268 = INT64_MIN;
int8_t x269 = 1;
uint64_t t67 = 1564LLU;
volatile int16_t x274 = INT16_MAX;
static uint16_t x287 = 187U;
int64_t x291 = 10200LL;
int64_t x292 = 723535LL;
uint16_t x293 = 37U;
int8_t x300 = -1;
int64_t t76 = 8275864LL;
uint64_t t77 = 0LLU;
static uint32_t x317 = 267U;
volatile uint32_t t81 = 78593U;
uint32_t x332 = UINT32_MAX;
uint64_t x333 = 8245820571LLU;
int8_t x335 = -1;
uint64_t t83 = 0LLU;
int32_t x337 = -6012;
uint64_t x360 = UINT64_MAX;
volatile int16_t x367 = INT16_MIN;
volatile int16_t x370 = INT16_MAX;
volatile int32_t t92 = 35512;
int64_t x374 = INT64_MIN;
static uint64_t x376 = 326297350LLU;
int32_t x380 = INT32_MIN;
int32_t x388 = INT32_MIN;
volatile int16_t x392 = 2144;
int32_t x393 = INT32_MIN;
int32_t x394 = INT32_MIN;
volatile int32_t t98 = INT32_MIN;
static int32_t x397 = INT32_MAX;
volatile uint32_t x401 = UINT32_MAX;
uint64_t t100 = 6296894530911LLU;
int64_t x405 = 480LL;
volatile int32_t t104 = -2071680;
volatile int64_t x422 = 1151287913822LL;
int16_t x424 = INT16_MIN;
uint8_t x428 = UINT8_MAX;
static volatile int32_t t106 = -43;
static volatile uint16_t x429 = 475U;
static volatile int64_t x431 = INT64_MIN;
int16_t x440 = 1;
int64_t x446 = 818685305LL;
volatile uint8_t x447 = UINT8_MAX;
uint16_t x448 = 63U;
uint32_t x452 = 338U;
int16_t x454 = INT16_MIN;
volatile int32_t t115 = -4093;
int32_t x467 = 6934386;
volatile int32_t t117 = 288539;
int64_t x475 = INT64_MAX;
static volatile int64_t t118 = 1LL;
int32_t x477 = INT32_MAX;
int8_t x479 = 1;
int32_t t119 = -1;
int32_t t120 = -5565812;
uint32_t x489 = 7119U;
uint8_t x490 = 49U;
int64_t x494 = -501289526LL;
int32_t t124 = -57327;
static int8_t x507 = 1;
uint16_t x517 = UINT16_MAX;
volatile uint64_t t131 = 6LLU;
int64_t x532 = -7822453249974315LL;
volatile uint16_t x533 = 25U;
uint32_t x544 = UINT32_MAX;
int32_t x545 = -1;
static uint16_t x547 = UINT16_MAX;
volatile uint8_t x561 = 22U;
int16_t x563 = 780;
volatile int64_t t141 = -1LL;
int64_t x578 = INT64_MIN;
int8_t x584 = INT8_MAX;
static int8_t x585 = INT8_MAX;
static int16_t x587 = INT16_MIN;
volatile int32_t t146 = 802005713;
uint32_t x593 = 7277253U;
uint8_t x596 = 0U;
int8_t x600 = -1;
volatile int32_t t149 = 5993;
uint32_t t150 = 3294091U;
int64_t x606 = INT64_MIN;
uint64_t x608 = 1847953LLU;
volatile int16_t x612 = INT16_MAX;
int8_t x615 = INT8_MIN;
static uint8_t x622 = 5U;
int64_t t156 = 1LL;
int64_t x629 = INT64_MIN;
int64_t x633 = INT64_MIN;
int64_t x634 = -1LL;
volatile int32_t x635 = 811579399;
int32_t t158 = 5;
uint8_t x637 = UINT8_MAX;
int64_t x641 = INT64_MAX;
volatile uint64_t t162 = 16734662852686LLU;
uint32_t x655 = 866049032U;
volatile uint32_t t163 = 1969301793U;
int8_t x662 = -1;
int32_t x671 = INT32_MIN;
volatile uint8_t x676 = 10U;
volatile int16_t x678 = -1;
volatile int32_t t169 = -2689426;
int64_t x682 = INT64_MIN;
volatile int16_t x690 = INT16_MAX;
static int64_t x694 = -1LL;
uint32_t x699 = UINT32_MAX;
int32_t x703 = INT32_MAX;
static int32_t t175 = 82661;
int64_t t176 = -15LL;
uint64_t x715 = UINT64_MAX;
int8_t x716 = INT8_MAX;
static int64_t x717 = INT64_MIN;
int16_t x724 = INT16_MAX;
volatile uint64_t t183 = 2444838244LLU;
int16_t x741 = INT16_MIN;
uint64_t x742 = 10690LLU;
static int32_t x746 = 866416611;
uint64_t x752 = 49LLU;
int32_t x753 = 1322;
static volatile int32_t x756 = INT32_MAX;
int8_t x769 = INT8_MIN;
int8_t x784 = -2;
volatile uint64_t t195 = 393984090236LLU;
int16_t x786 = -1;
static int32_t t197 = -5802597;


void f0(void) {
    	uint64_t t0 = 32610LLU;

    t0 = (((x1!=x2)^x3)&x4);

    if (t0 != 38302LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = INT8_MIN;
	uint64_t x6 = UINT64_MAX;
	int16_t x7 = 1622;
	uint64_t x8 = 154910398526LLU;
	uint64_t t1 = 49352699LLU;

    t1 = (((x5!=x6)^x7)&x8);

    if (t1 != 22LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x9 = -10;
	int8_t x10 = INT8_MAX;
	uint32_t x11 = 1U;
	int32_t x12 = 0;
	volatile uint32_t t2 = 7U;

    t2 = (((x9!=x10)^x11)&x12);

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x13 = INT32_MIN;
	uint32_t x14 = 14214064U;
	int32_t t3 = INT32_MIN;

    t3 = (((x13!=x14)^x15)&x16);

    if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = UINT64_MAX;
	uint16_t x18 = 9U;
	static volatile int8_t x20 = INT8_MIN;

    t4 = (((x17!=x18)^x19)&x20);

    if (t4 != 4294967168U) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x21 = -1;
	int8_t x22 = INT8_MAX;

    t5 = (((x21!=x22)^x23)&x24);

    if (t5 != 13542419474269208LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x26 = -15518;
	int8_t x28 = -1;
	volatile int32_t t6 = 3;

    t6 = (((x25!=x26)^x27)&x28);

    if (t6 != -32767) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MAX;
	uint16_t x31 = 347U;
	uint32_t x32 = 315U;
	uint32_t t7 = 6868192U;

    t7 = (((x29!=x30)^x31)&x32);

    if (t7 != 282U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 450U;
	int32_t x34 = INT32_MAX;
	int16_t x35 = 607;
	int64_t x36 = 160794879LL;
	int64_t t8 = 43359602389332LL;

    t8 = (((x33!=x34)^x35)&x36);

    if (t8 != 94LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = UINT32_MAX;
	int8_t x38 = INT8_MIN;
	uint8_t x39 = 54U;
	int32_t x40 = INT32_MAX;
	volatile int32_t t9 = 682262;

    t9 = (((x37!=x38)^x39)&x40);

    if (t9 != 55) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = 122435U;
	static int64_t x43 = INT64_MAX;
	int8_t x44 = INT8_MIN;
	static int64_t t10 = -12490597LL;

    t10 = (((x41!=x42)^x43)&x44);

    if (t10 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int64_t x45 = 5LL;
	int16_t x46 = -1;
	static volatile uint64_t x48 = UINT64_MAX;

    t11 = (((x45!=x46)^x47)&x48);

    if (t11 != 30227316LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x49 = INT16_MIN;
	static int16_t x50 = 106;
	uint64_t x51 = UINT64_MAX;
	int16_t x52 = -182;
	uint64_t t12 = 843082497LLU;

    t12 = (((x49!=x50)^x51)&x52);

    if (t12 != 18446744073709551434LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x54 = INT64_MAX;
	static volatile uint64_t t13 = 140535LLU;

    t13 = (((x53!=x54)^x55)&x56);

    if (t13 != 2561LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = -1;
	int8_t x59 = -23;
	uint8_t x60 = 124U;
	volatile int32_t t14 = 12659354;

    t14 = (((x57!=x58)^x59)&x60);

    if (t14 != 104) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x62 = -1;
	volatile uint64_t t15 = 4887485083664745LLU;

    t15 = (((x61!=x62)^x63)&x64);

    if (t15 != 233LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x65 = 1U;
	static uint64_t x66 = 1833786LLU;
	static uint8_t x67 = 71U;
	static int16_t x68 = -2239;
	static volatile int32_t t16 = 47;

    t16 = (((x65!=x66)^x67)&x68);

    if (t16 != 64) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x70 = 7144883031LLU;
	uint16_t x71 = 10U;
	uint32_t x72 = UINT32_MAX;

    t17 = (((x69!=x70)^x71)&x72);

    if (t17 != 11U) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x73 = -1;
	int64_t x74 = INT64_MIN;
	volatile int32_t t18 = -172;

    t18 = (((x73!=x74)^x75)&x76);

    if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x77 = 1U;
	int16_t x78 = 544;
	static int32_t x80 = 1;
	volatile int64_t t19 = 3119589LL;

    t19 = (((x77!=x78)^x79)&x80);

    if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MIN;
	static int32_t x82 = INT32_MIN;
	int64_t x83 = INT64_MIN;
	volatile int64_t x84 = INT64_MIN;
	static volatile int64_t t20 = INT64_MIN;

    t20 = (((x81!=x82)^x83)&x84);

    if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = UINT8_MAX;
	int16_t x86 = -198;
	uint32_t x87 = UINT32_MAX;
	uint64_t x88 = 15823038376323642LLU;
	volatile uint64_t t21 = 1861544960640LLU;

    t21 = (((x85!=x86)^x87)&x88);

    if (t21 != 900737594LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x90 = -1;
	int8_t x91 = INT8_MIN;
	volatile int64_t t22 = 5366126520430LL;

    t22 = (((x89!=x90)^x91)&x92);

    if (t22 != -127LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = -1;
	static int8_t x94 = -1;
	int64_t x96 = INT64_MIN;
	int64_t t23 = 3854273385134LL;

    t23 = (((x93!=x94)^x95)&x96);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = -1LL;
	int8_t x98 = 2;
	int16_t x99 = INT16_MAX;
	int64_t x100 = -1LL;
	volatile int64_t t24 = 8LL;

    t24 = (((x97!=x98)^x99)&x100);

    if (t24 != 32766LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = INT16_MAX;
	int32_t x102 = INT32_MIN;
	uint32_t x103 = 10U;
	static int32_t x104 = -11;
	volatile uint32_t t25 = 1339746U;

    t25 = (((x101!=x102)^x103)&x104);

    if (t25 != 1U) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = 16161;
	static uint32_t x106 = 2470U;
	int32_t x107 = -399;
	int32_t x108 = INT32_MAX;

    t26 = (((x105!=x106)^x107)&x108);

    if (t26 != 2147483248) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = INT8_MIN;
	static int64_t x110 = -234708941LL;
	int64_t x111 = 109074774652LL;

    t27 = (((x109!=x110)^x111)&x112);

    if (t27 != 17LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = INT64_MAX;
	int16_t x114 = INT16_MAX;
	int64_t x115 = -1LL;

    t28 = (((x113!=x114)^x115)&x116);

    if (t28 != 65534LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x117 = 1U;
	volatile int32_t x118 = -142688;
	static int16_t x119 = 46;
	int8_t x120 = INT8_MIN;
	int32_t t29 = -1180;

    t29 = (((x117!=x118)^x119)&x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = -7579572;
	volatile uint32_t x122 = 127787431U;
	static int8_t x124 = INT8_MAX;

    t30 = (((x121!=x122)^x123)&x124);

    if (t30 != 18) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x125 = -1;
	int64_t x126 = INT64_MAX;
	int16_t x127 = INT16_MIN;
	uint8_t x128 = UINT8_MAX;
	int32_t t31 = 466504271;

    t31 = (((x125!=x126)^x127)&x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x129 = 61;
	static int16_t x130 = INT16_MIN;
	int16_t x131 = -1;
	uint8_t x132 = 2U;

    t32 = (((x129!=x130)^x131)&x132);

    if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x134 = 14880U;
	static volatile int32_t t33 = 102;

    t33 = (((x133!=x134)^x135)&x136);

    if (t33 != 34) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x138 = UINT8_MAX;
	volatile uint64_t x139 = 28534LLU;
	uint64_t t34 = 8112594LLU;

    t34 = (((x137!=x138)^x139)&x140);

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = -1;
	volatile int32_t x142 = 7198;
	volatile uint8_t x143 = UINT8_MAX;
	int8_t x144 = -3;
	int32_t t35 = 35;

    t35 = (((x141!=x142)^x143)&x144);

    if (t35 != 252) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x145 = 19909323;
	int64_t x146 = INT64_MIN;
	int16_t x147 = -14827;
	int64_t x148 = INT64_MAX;
	int64_t t36 = 1428922LL;

    t36 = (((x145!=x146)^x147)&x148);

    if (t36 != 9223372036854760980LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MIN;
	static uint64_t x150 = UINT64_MAX;
	volatile int8_t x151 = 1;
	static uint32_t x152 = 10800U;
	volatile uint32_t t37 = 22167376U;

    t37 = (((x149!=x150)^x151)&x152);

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = INT16_MAX;
	int16_t x155 = 496;
	int16_t x156 = -1;

    t38 = (((x153!=x154)^x155)&x156);

    if (t38 != 497) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = 29;
	static int16_t x159 = INT16_MIN;
	int8_t x160 = -1;
	volatile int32_t t39 = -1;

    t39 = (((x157!=x158)^x159)&x160);

    if (t39 != -32767) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = 231752206;
	static int16_t x162 = INT16_MIN;
	int8_t x163 = INT8_MIN;
	volatile int8_t x164 = INT8_MIN;

    t40 = (((x161!=x162)^x163)&x164);

    if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x165 = INT64_MIN;
	int32_t x166 = INT32_MIN;
	int16_t x167 = INT16_MAX;
	int16_t x168 = INT16_MAX;
	volatile int32_t t41 = 1660;

    t41 = (((x165!=x166)^x167)&x168);

    if (t41 != 32766) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = -1LL;
	volatile int16_t x170 = -1;
	int32_t x172 = -683451294;
	int64_t t42 = INT64_MIN;

    t42 = (((x169!=x170)^x171)&x172);

    if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x174 = -4490025991505117761LL;
	int32_t x175 = INT32_MAX;
	int8_t x176 = INT8_MIN;
	volatile int32_t t43 = 30;

    t43 = (((x173!=x174)^x175)&x176);

    if (t43 != 2147483520) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint16_t x178 = 434U;
	volatile uint16_t x179 = 15555U;
	static volatile int64_t x180 = INT64_MIN;
	int64_t t44 = -4053LL;

    t44 = (((x177!=x178)^x179)&x180);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x181 = 2;
	uint64_t x182 = 63876278725161598LLU;
	uint16_t x183 = 10251U;
	uint16_t x184 = UINT16_MAX;

    t45 = (((x181!=x182)^x183)&x184);

    if (t45 != 10250) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x185 = 0U;
	uint16_t x186 = UINT16_MAX;
	uint8_t x187 = 4U;
	int16_t x188 = -103;
	volatile int32_t t46 = 0;

    t46 = (((x185!=x186)^x187)&x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x189 = 27596921U;
	static int64_t x190 = 1000LL;
	int16_t x192 = INT16_MIN;
	int64_t t47 = INT64_MIN;

    t47 = (((x189!=x190)^x191)&x192);

    if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = -1;
	static volatile int16_t x194 = INT16_MIN;
	uint8_t x196 = 3U;
	int64_t t48 = -25777249197451LL;

    t48 = (((x193!=x194)^x195)&x196);

    if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = -1;
	volatile int64_t x199 = INT64_MIN;
	int32_t x200 = -1;
	int64_t t49 = 51980928204177LL;

    t49 = (((x197!=x198)^x199)&x200);

    if (t49 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x202 = -28;
	uint8_t x203 = 9U;
	static volatile int32_t t50 = 0;

    t50 = (((x201!=x202)^x203)&x204);

    if (t50 != 8) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x206 = INT8_MIN;
	uint16_t x207 = 7756U;
	volatile int32_t x208 = -1;
	volatile int32_t t51 = -10501659;

    t51 = (((x205!=x206)^x207)&x208);

    if (t51 != 7757) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = -4;
	int8_t x210 = INT8_MIN;
	int8_t x212 = -31;
	volatile int32_t t52 = -50;

    t52 = (((x209!=x210)^x211)&x212);

    if (t52 != 224) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x214 = 3201LLU;
	uint32_t x215 = 125172U;
	static int16_t x216 = INT16_MIN;

    t53 = (((x213!=x214)^x215)&x216);

    if (t53 != 98304U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x217 = 2U;
	int64_t x218 = INT64_MIN;
	int32_t x220 = INT32_MIN;
	int32_t t54 = INT32_MIN;

    t54 = (((x217!=x218)^x219)&x220);

    if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t t55 = 23U;

    t55 = (((x221!=x222)^x223)&x224);

    if (t55 != 104U) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = INT8_MIN;
	int32_t x226 = -7;
	int32_t x227 = 17930;
	volatile int32_t t56 = -53848;

    t56 = (((x225!=x226)^x227)&x228);

    if (t56 != 16906) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x229 = -1;
	int32_t x230 = INT32_MIN;
	int32_t x231 = INT32_MIN;
	int16_t x232 = INT16_MIN;
	volatile int32_t t57 = INT32_MIN;

    t57 = (((x229!=x230)^x231)&x232);

    if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x233 = UINT16_MAX;
	static int8_t x235 = INT8_MAX;

    t58 = (((x233!=x234)^x235)&x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = INT16_MIN;
	static uint32_t x238 = UINT32_MAX;
	static volatile int32_t x239 = -1;
	volatile uint8_t x240 = UINT8_MAX;
	static volatile int32_t t59 = -1272860;

    t59 = (((x237!=x238)^x239)&x240);

    if (t59 != 254) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x241 = 47;
	volatile int32_t x242 = INT32_MIN;
	uint16_t x243 = 6U;
	uint8_t x244 = 15U;

    t60 = (((x241!=x242)^x243)&x244);

    if (t60 != 7) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x245 = -1LL;
	uint64_t x246 = UINT64_MAX;
	int64_t x247 = -1LL;
	int64_t x248 = INT64_MIN;
	volatile int64_t t61 = INT64_MIN;

    t61 = (((x245!=x246)^x247)&x248);

    if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x249 = INT16_MIN;
	uint64_t x250 = 63026022312LLU;
	static volatile int16_t x252 = INT16_MIN;
	static int32_t t62 = 375294;

    t62 = (((x249!=x250)^x251)&x252);

    if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x253 = INT16_MAX;
	uint16_t x254 = UINT16_MAX;
	int32_t x255 = INT32_MIN;
	int16_t x256 = -117;

    t63 = (((x253!=x254)^x255)&x256);

    if (t63 != -2147483647) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = -1;
	uint64_t x258 = 8363150010933414LLU;
	int8_t x259 = 0;
	int64_t x260 = INT64_MIN;

    t64 = (((x257!=x258)^x259)&x260);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint32_t x261 = 2U;
	static volatile int64_t x262 = INT64_MAX;
	uint8_t x263 = 30U;
	static volatile int64_t x264 = 916940LL;
	int64_t t65 = 64632266406LL;

    t65 = (((x261!=x262)^x263)&x264);

    if (t65 != 12LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint32_t x266 = 347734U;
	static int16_t x267 = INT16_MIN;
	volatile int64_t t66 = INT64_MIN;

    t66 = (((x265!=x266)^x267)&x268);

    if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x270 = -1;
	volatile int8_t x271 = INT8_MIN;
	uint64_t x272 = 5178334LLU;

    t67 = (((x269!=x270)^x271)&x272);

    if (t67 != 5178240LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x273 = INT64_MAX;
	volatile int64_t x275 = 239982892LL;
	int64_t x276 = 64685545LL;
	int64_t t68 = -225761816868342896LL;

    t68 = (((x273!=x274)^x275)&x276);

    if (t68 != 38338857LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x277 = -1LL;
	static uint8_t x278 = 0U;
	int16_t x279 = 1450;
	volatile int16_t x280 = INT16_MAX;
	static volatile int32_t t69 = -11;

    t69 = (((x277!=x278)^x279)&x280);

    if (t69 != 1451) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = -48;
	static int32_t x282 = INT32_MAX;
	int32_t x283 = INT32_MIN;
	volatile uint16_t x284 = UINT16_MAX;
	volatile int32_t t70 = -6808701;

    t70 = (((x281!=x282)^x283)&x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x285 = 11;
	uint32_t x286 = 61827U;
	static int16_t x288 = INT16_MIN;
	volatile int32_t t71 = -1;

    t71 = (((x285!=x286)^x287)&x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x289 = UINT64_MAX;
	uint8_t x290 = 5U;
	volatile int64_t t72 = -632326098504908802LL;

    t72 = (((x289!=x290)^x291)&x292);

    if (t72 != 585LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x294 = 182595613314LLU;
	int32_t x295 = INT32_MIN;
	static volatile int32_t x296 = INT32_MIN;
	volatile int32_t t73 = INT32_MIN;

    t73 = (((x293!=x294)^x295)&x296);

    if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x297 = INT64_MIN;
	int32_t x298 = INT32_MAX;
	uint64_t x299 = 1589293260910LLU;
	volatile uint64_t t74 = 47LLU;

    t74 = (((x297!=x298)^x299)&x300);

    if (t74 != 1589293260911LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = -4;
	int16_t x302 = -1;
	int64_t x303 = 2736474263LL;
	int16_t x304 = 1;
	static volatile int64_t t75 = -1843231779463LL;

    t75 = (((x301!=x302)^x303)&x304);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = -13;
	static int32_t x306 = -1;
	static uint32_t x307 = 7U;
	static int64_t x308 = -1LL;

    t76 = (((x305!=x306)^x307)&x308);

    if (t76 != 6LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = INT16_MIN;
	static uint32_t x310 = 45366U;
	uint64_t x311 = 3LLU;
	int8_t x312 = -1;

    t77 = (((x309!=x310)^x311)&x312);

    if (t77 != 2LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x313 = -1;
	int8_t x314 = INT8_MIN;
	uint32_t x315 = 187873U;
	int64_t x316 = -66328813568LL;
	int64_t t78 = 198609944185984125LL;

    t78 = (((x313!=x314)^x315)&x316);

    if (t78 != 163840LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x318 = 2872787746491119LLU;
	static int64_t x319 = -394067047LL;
	volatile uint8_t x320 = UINT8_MAX;
	int64_t t79 = -80911074023LL;

    t79 = (((x317!=x318)^x319)&x320);

    if (t79 != 152LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = -5;
	int16_t x322 = -1;
	int8_t x323 = -4;
	static uint16_t x324 = 7U;
	int32_t t80 = 2047;

    t80 = (((x321!=x322)^x323)&x324);

    if (t80 != 5) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x325 = -6;
	uint16_t x326 = 240U;
	static int16_t x327 = 62;
	uint32_t x328 = 5504200U;

    t81 = (((x325!=x326)^x327)&x328);

    if (t81 != 8U) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x329 = 94009U;
	static volatile int32_t x330 = 7992171;
	static volatile int64_t x331 = INT64_MIN;
	int64_t t82 = -12837527059LL;

    t82 = (((x329!=x330)^x331)&x332);

    if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x334 = 117U;
	uint64_t x336 = 1744742876267LLU;

    t83 = (((x333!=x334)^x335)&x336);

    if (t83 != 1744742876266LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x338 = INT16_MAX;
	int64_t x339 = 174095921LL;
	uint32_t x340 = 235912U;
	static int64_t t84 = 4LL;

    t84 = (((x337!=x338)^x339)&x340);

    if (t84 != 6144LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x341 = 0U;
	volatile int32_t x342 = 2911;
	int32_t x343 = -2637;
	int8_t x344 = INT8_MAX;
	int32_t t85 = 200060761;

    t85 = (((x341!=x342)^x343)&x344);

    if (t85 != 50) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x345 = 5;
	uint64_t x346 = UINT64_MAX;
	static int8_t x347 = 14;
	uint64_t x348 = UINT64_MAX;
	uint64_t t86 = 1611287990442LLU;

    t86 = (((x345!=x346)^x347)&x348);

    if (t86 != 15LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint64_t x349 = 134669904847162LLU;
	int64_t x350 = -1432312877902LL;
	uint8_t x351 = UINT8_MAX;
	int32_t x352 = INT32_MIN;
	volatile int32_t t87 = 4070011;

    t87 = (((x349!=x350)^x351)&x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint8_t x353 = 1U;
	static int16_t x354 = 0;
	static int32_t x355 = 327479;
	volatile uint64_t x356 = 103077266016105625LLU;
	static volatile uint64_t t88 = 397371419413423099LLU;

    t88 = (((x353!=x354)^x355)&x356);

    if (t88 != 324624LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x357 = 4U;
	int64_t x358 = INT64_MAX;
	static int32_t x359 = -1;
	volatile uint64_t t89 = 855LLU;

    t89 = (((x357!=x358)^x359)&x360);

    if (t89 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x361 = 370620U;
	int16_t x362 = INT16_MIN;
	int16_t x363 = 15261;
	int64_t x364 = 2854252308LL;
	int64_t t90 = -111489353983998837LL;

    t90 = (((x361!=x362)^x363)&x364);

    if (t90 != 11028LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x365 = INT8_MIN;
	static int16_t x366 = 222;
	int8_t x368 = 1;
	volatile int32_t t91 = 19112725;

    t91 = (((x365!=x366)^x367)&x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = INT16_MAX;
	volatile uint8_t x371 = 8U;
	int16_t x372 = 113;

    t92 = (((x369!=x370)^x371)&x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = 124;
	int16_t x375 = INT16_MIN;
	volatile uint64_t t93 = 1328321739099437LLU;

    t93 = (((x373!=x374)^x375)&x376);

    if (t93 != 326270976LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x377 = 1619561748LLU;
	int16_t x378 = -1;
	static uint8_t x379 = 2U;
	int32_t t94 = -2;

    t94 = (((x377!=x378)^x379)&x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x381 = 71U;
	uint32_t x382 = 415662541U;
	uint16_t x383 = 454U;
	uint64_t x384 = 1449LLU;
	volatile uint64_t t95 = 702932LLU;

    t95 = (((x381!=x382)^x383)&x384);

    if (t95 != 385LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x385 = 26862U;
	int8_t x386 = -1;
	volatile uint16_t x387 = 337U;
	static volatile int32_t t96 = 116947;

    t96 = (((x385!=x386)^x387)&x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = INT32_MIN;
	int64_t x390 = -1057084211176583126LL;
	int64_t x391 = INT64_MIN;
	static volatile int64_t t97 = -205LL;

    t97 = (((x389!=x390)^x391)&x392);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x395 = INT32_MIN;
	int8_t x396 = -16;

    t98 = (((x393!=x394)^x395)&x396);

    if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x398 = 11U;
	uint8_t x399 = 45U;
	int16_t x400 = INT16_MIN;
	int32_t t99 = -14422;

    t99 = (((x397!=x398)^x399)&x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x402 = UINT8_MAX;
	static uint64_t x403 = 1095395760896783690LLU;
	int8_t x404 = INT8_MIN;

    t100 = (((x401!=x402)^x403)&x404);

    if (t100 != 1095395760896783616LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x406 = INT32_MIN;
	volatile int32_t x407 = INT32_MIN;
	volatile uint16_t x408 = UINT16_MAX;
	static volatile int32_t t101 = -3027;

    t101 = (((x405!=x406)^x407)&x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x409 = INT32_MAX;
	static volatile int64_t x410 = -1LL;
	uint16_t x411 = 0U;
	int8_t x412 = -41;
	volatile int32_t t102 = 245;

    t102 = (((x409!=x410)^x411)&x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = INT8_MAX;
	uint64_t x414 = 1865948LLU;
	volatile int8_t x415 = -14;
	static int64_t x416 = -1LL;
	static volatile int64_t t103 = -9695213931900LL;

    t103 = (((x413!=x414)^x415)&x416);

    if (t103 != -13LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = -1;
	int16_t x418 = 41;
	static int32_t x419 = -2456;
	static uint8_t x420 = UINT8_MAX;

    t104 = (((x417!=x418)^x419)&x420);

    if (t104 != 105) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int16_t x421 = INT16_MAX;
	volatile uint8_t x423 = UINT8_MAX;
	volatile int32_t t105 = 1960;

    t105 = (((x421!=x422)^x423)&x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x425 = INT16_MAX;
	static int32_t x426 = INT32_MIN;
	int16_t x427 = INT16_MAX;

    t106 = (((x425!=x426)^x427)&x428);

    if (t106 != 254) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x430 = -51397892022LL;
	uint64_t x432 = 7038235404762140LLU;
	volatile uint64_t t107 = 2151LLU;

    t107 = (((x429!=x430)^x431)&x432);

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = 521;
	int64_t x434 = 4226420729444002977LL;
	static int64_t x435 = 6828516766LL;
	int64_t x436 = INT64_MIN;
	volatile int64_t t108 = -1881830LL;

    t108 = (((x433!=x434)^x435)&x436);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = -1;
	static volatile int16_t x438 = INT16_MIN;
	static int8_t x439 = INT8_MIN;
	volatile int32_t t109 = -26860419;

    t109 = (((x437!=x438)^x439)&x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x441 = UINT8_MAX;
	int16_t x442 = INT16_MIN;
	volatile uint64_t x443 = UINT64_MAX;
	int32_t x444 = INT32_MAX;
	uint64_t t110 = 6177340LLU;

    t110 = (((x441!=x442)^x443)&x444);

    if (t110 != 2147483646LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x445 = -39LL;
	static volatile int32_t t111 = 3;

    t111 = (((x445!=x446)^x447)&x448);

    if (t111 != 62) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int64_t x449 = 433160800910805LL;
	static volatile uint32_t x450 = UINT32_MAX;
	static int16_t x451 = -1;
	uint32_t t112 = 852595973U;

    t112 = (((x449!=x450)^x451)&x452);

    if (t112 != 338U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x453 = 1U;
	uint8_t x455 = UINT8_MAX;
	int32_t x456 = -1;
	int32_t t113 = 3483;

    t113 = (((x453!=x454)^x455)&x456);

    if (t113 != 254) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = INT16_MIN;
	int16_t x458 = 1315;
	int64_t x459 = -5526LL;
	static volatile uint64_t x460 = 4856LLU;
	static volatile uint64_t t114 = 15076LLU;

    t114 = (((x457!=x458)^x459)&x460);

    if (t114 != 616LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = -1;
	uint16_t x462 = 1046U;
	int32_t x463 = -12;
	volatile int16_t x464 = INT16_MIN;

    t115 = (((x461!=x462)^x463)&x464);

    if (t115 != -32768) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x465 = UINT64_MAX;
	volatile int16_t x466 = -1;
	uint16_t x468 = UINT16_MAX;
	volatile int32_t t116 = -363816;

    t116 = (((x465!=x466)^x467)&x468);

    if (t116 != 53106) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int16_t x469 = -14168;
	uint8_t x470 = UINT8_MAX;
	int8_t x471 = INT8_MIN;
	int8_t x472 = -7;

    t117 = (((x469!=x470)^x471)&x472);

    if (t117 != -127) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = 7;
	uint8_t x474 = 29U;
	int64_t x476 = 16554796227LL;

    t118 = (((x473!=x474)^x475)&x476);

    if (t118 != 16554796226LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x478 = UINT8_MAX;
	static int16_t x480 = INT16_MIN;

    t119 = (((x477!=x478)^x479)&x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x481 = 2647LLU;
	int32_t x482 = 1010137;
	static uint8_t x483 = 1U;
	volatile int32_t x484 = INT32_MAX;

    t120 = (((x481!=x482)^x483)&x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = INT16_MIN;
	uint16_t x486 = UINT16_MAX;
	int8_t x487 = -1;
	uint8_t x488 = 120U;
	static volatile int32_t t121 = -37;

    t121 = (((x485!=x486)^x487)&x488);

    if (t121 != 120) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x491 = INT64_MAX;
	volatile int64_t x492 = INT64_MAX;
	volatile int64_t t122 = -1511LL;

    t122 = (((x489!=x490)^x491)&x492);

    if (t122 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x493 = UINT16_MAX;
	volatile int16_t x495 = -3;
	static uint64_t x496 = 879LLU;
	volatile uint64_t t123 = 1625827760685898456LLU;

    t123 = (((x493!=x494)^x495)&x496);

    if (t123 != 876LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x497 = UINT32_MAX;
	static volatile int8_t x498 = 0;
	int32_t x499 = INT32_MIN;
	int16_t x500 = INT16_MAX;

    t124 = (((x497!=x498)^x499)&x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = INT16_MIN;
	int8_t x502 = -1;
	static int16_t x503 = -1;
	uint64_t x504 = UINT64_MAX;
	uint64_t t125 = 759860LLU;

    t125 = (((x501!=x502)^x503)&x504);

    if (t125 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x505 = 0;
	int64_t x506 = -30637479067LL;
	volatile int8_t x508 = 2;
	volatile int32_t t126 = -118896;

    t126 = (((x505!=x506)^x507)&x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = INT8_MAX;
	uint16_t x510 = 3U;
	static volatile uint16_t x511 = UINT16_MAX;
	volatile int64_t x512 = INT64_MAX;
	int64_t t127 = 247LL;

    t127 = (((x509!=x510)^x511)&x512);

    if (t127 != 65534LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int16_t x513 = -3;
	int32_t x514 = 4;
	uint8_t x515 = 1U;
	static int16_t x516 = 5158;
	int32_t t128 = 5690339;

    t128 = (((x513!=x514)^x515)&x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x518 = UINT16_MAX;
	volatile int16_t x519 = INT16_MAX;
	int32_t x520 = INT32_MIN;
	int32_t t129 = -17759919;

    t129 = (((x517!=x518)^x519)&x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x521 = -11;
	int64_t x522 = -944596LL;
	volatile int32_t x523 = INT32_MIN;
	uint16_t x524 = 120U;
	volatile int32_t t130 = -16394244;

    t130 = (((x521!=x522)^x523)&x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = 1;
	volatile uint16_t x526 = UINT16_MAX;
	int64_t x527 = 3345337LL;
	uint64_t x528 = UINT64_MAX;

    t131 = (((x525!=x526)^x527)&x528);

    if (t131 != 3345336LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x529 = -1;
	int8_t x530 = 3;
	int64_t x531 = INT64_MIN;
	int64_t t132 = -13640LL;

    t132 = (((x529!=x530)^x531)&x532);

    if (t132 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x534 = 57LL;
	uint8_t x535 = 1U;
	volatile int8_t x536 = INT8_MAX;
	volatile int32_t t133 = 63;

    t133 = (((x533!=x534)^x535)&x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x537 = 0;
	uint32_t x538 = 77085311U;
	uint16_t x539 = 2U;
	static int32_t x540 = INT32_MIN;
	int32_t t134 = 4593;

    t134 = (((x537!=x538)^x539)&x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = INT16_MIN;
	volatile int8_t x542 = -12;
	static int32_t x543 = -5;
	uint32_t t135 = 1000212U;

    t135 = (((x541!=x542)^x543)&x544);

    if (t135 != 4294967290U) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint32_t x546 = 274317704U;
	uint32_t x548 = 173U;
	volatile uint32_t t136 = 4408506U;

    t136 = (((x545!=x546)^x547)&x548);

    if (t136 != 172U) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x549 = 3559;
	int64_t x550 = -1LL;
	int64_t x551 = 912232815264371406LL;
	int32_t x552 = INT32_MAX;
	volatile int64_t t137 = 79884LL;

    t137 = (((x549!=x550)^x551)&x552);

    if (t137 != 172593871LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = 0;
	uint8_t x554 = UINT8_MAX;
	static uint8_t x555 = UINT8_MAX;
	int32_t x556 = -1;
	int32_t t138 = 37;

    t138 = (((x553!=x554)^x555)&x556);

    if (t138 != 254) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = -1LL;
	uint8_t x558 = 10U;
	uint8_t x559 = 19U;
	volatile uint8_t x560 = 38U;
	int32_t t139 = 352327052;

    t139 = (((x557!=x558)^x559)&x560);

    if (t139 != 2) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x562 = 1180813131U;
	static uint32_t x564 = 10U;
	volatile uint32_t t140 = 11U;

    t140 = (((x561!=x562)^x563)&x564);

    if (t140 != 8U) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint32_t x565 = 0U;
	static volatile int8_t x566 = INT8_MAX;
	int64_t x567 = -1LL;
	uint8_t x568 = 15U;

    t141 = (((x565!=x566)^x567)&x568);

    if (t141 != 14LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x569 = 2742U;
	int64_t x570 = -53999LL;
	uint32_t x571 = 3048939U;
	int8_t x572 = -1;
	uint32_t t142 = 77376U;

    t142 = (((x569!=x570)^x571)&x572);

    if (t142 != 3048938U) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = INT8_MIN;
	uint8_t x574 = 82U;
	uint32_t x575 = 2015990U;
	uint8_t x576 = UINT8_MAX;
	volatile uint32_t t143 = 2985U;

    t143 = (((x573!=x574)^x575)&x576);

    if (t143 != 247U) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint64_t x577 = 266891033403296427LLU;
	static volatile int16_t x579 = -1;
	int8_t x580 = -1;
	volatile int32_t t144 = -420603174;

    t144 = (((x577!=x578)^x579)&x580);

    if (t144 != -2) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x581 = -1526340;
	static uint16_t x582 = 27U;
	static int16_t x583 = INT16_MAX;
	volatile int32_t t145 = 83794042;

    t145 = (((x581!=x582)^x583)&x584);

    if (t145 != 126) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint8_t x586 = UINT8_MAX;
	static uint16_t x588 = UINT16_MAX;

    t146 = (((x585!=x586)^x587)&x588);

    if (t146 != 32769) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x589 = UINT64_MAX;
	int8_t x590 = INT8_MIN;
	static uint16_t x591 = UINT16_MAX;
	int32_t x592 = INT32_MIN;
	volatile int32_t t147 = 16607045;

    t147 = (((x589!=x590)^x591)&x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x594 = INT8_MIN;
	uint16_t x595 = 23U;
	volatile int32_t t148 = 578348476;

    t148 = (((x593!=x594)^x595)&x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x597 = -1;
	static uint8_t x598 = 0U;
	uint8_t x599 = 4U;

    t149 = (((x597!=x598)^x599)&x600);

    if (t149 != 5) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x601 = UINT16_MAX;
	int8_t x602 = INT8_MIN;
	static uint32_t x603 = UINT32_MAX;
	int8_t x604 = 5;

    t150 = (((x601!=x602)^x603)&x604);

    if (t150 != 4U) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = INT8_MIN;
	volatile int32_t x607 = INT32_MAX;
	volatile uint64_t t151 = 1482686LLU;

    t151 = (((x605!=x606)^x607)&x608);

    if (t151 != 1847952LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint32_t x609 = UINT32_MAX;
	uint16_t x610 = 108U;
	volatile int64_t x611 = INT64_MAX;
	static volatile int64_t t152 = 3412952LL;

    t152 = (((x609!=x610)^x611)&x612);

    if (t152 != 32766LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x613 = INT32_MIN;
	static int8_t x614 = -1;
	int64_t x616 = INT64_MAX;
	volatile int64_t t153 = 4277066228040851736LL;

    t153 = (((x613!=x614)^x615)&x616);

    if (t153 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = INT16_MAX;
	uint64_t x618 = 15784949LLU;
	volatile uint16_t x619 = 14256U;
	int8_t x620 = INT8_MIN;
	volatile int32_t t154 = -7380438;

    t154 = (((x617!=x618)^x619)&x620);

    if (t154 != 14208) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = INT16_MAX;
	uint32_t x623 = 12339U;
	static uint64_t x624 = UINT64_MAX;
	volatile uint64_t t155 = 12323955105LLU;

    t155 = (((x621!=x622)^x623)&x624);

    if (t155 != 12338LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x625 = -1LL;
	int16_t x626 = 0;
	uint8_t x627 = UINT8_MAX;
	int64_t x628 = INT64_MIN;

    t156 = (((x625!=x626)^x627)&x628);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x630 = INT64_MIN;
	uint16_t x631 = 2U;
	static uint8_t x632 = 8U;
	int32_t t157 = -79077;

    t157 = (((x629!=x630)^x631)&x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x636 = INT16_MAX;

    t158 = (((x633!=x634)^x635)&x636);

    if (t158 != 14342) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x638 = -13919LL;
	int16_t x639 = INT16_MIN;
	int16_t x640 = INT16_MAX;
	int32_t t159 = 242842;

    t159 = (((x637!=x638)^x639)&x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x642 = 100U;
	int16_t x643 = INT16_MAX;
	uint16_t x644 = UINT16_MAX;
	int32_t t160 = -71325567;

    t160 = (((x641!=x642)^x643)&x644);

    if (t160 != 32766) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint16_t x645 = 2884U;
	static int8_t x646 = INT8_MAX;
	int16_t x647 = INT16_MAX;
	int32_t x648 = INT32_MIN;
	static volatile int32_t t161 = -3118186;

    t161 = (((x645!=x646)^x647)&x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = 3;
	int64_t x650 = INT64_MIN;
	uint16_t x651 = 834U;
	static uint64_t x652 = 50909368113219LLU;

    t162 = (((x649!=x650)^x651)&x652);

    if (t162 != 67LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = INT16_MAX;
	int8_t x654 = -1;
	int32_t x656 = INT32_MIN;

    t163 = (((x653!=x654)^x655)&x656);

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x657 = UINT64_MAX;
	int16_t x658 = INT16_MAX;
	int32_t x659 = INT32_MIN;
	volatile int64_t x660 = -2536LL;
	int64_t t164 = 10821831LL;

    t164 = (((x657!=x658)^x659)&x660);

    if (t164 != -2147483648LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = INT16_MAX;
	static int16_t x663 = INT16_MIN;
	int64_t x664 = INT64_MIN;
	int64_t t165 = INT64_MIN;

    t165 = (((x661!=x662)^x663)&x664);

    if (t165 != INT64_MIN) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = 3;
	int8_t x666 = INT8_MIN;
	int32_t x667 = INT32_MAX;
	uint64_t x668 = UINT64_MAX;
	static volatile uint64_t t166 = 171611027841LLU;

    t166 = (((x665!=x666)^x667)&x668);

    if (t166 != 2147483646LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = INT64_MIN;
	static int64_t x670 = -80436555742784752LL;
	volatile int32_t x672 = INT32_MIN;
	static int32_t t167 = INT32_MIN;

    t167 = (((x669!=x670)^x671)&x672);

    if (t167 != INT32_MIN) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile uint8_t x673 = UINT8_MAX;
	int16_t x674 = -1;
	int64_t x675 = INT64_MIN;
	volatile int64_t t168 = -5624175473LL;

    t168 = (((x673!=x674)^x675)&x676);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = 0;
	uint8_t x679 = 30U;
	int8_t x680 = 2;

    t169 = (((x677!=x678)^x679)&x680);

    if (t169 != 2) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int64_t x681 = -1LL;
	static volatile int64_t x683 = -4957079847775LL;
	static int16_t x684 = INT16_MIN;
	volatile int64_t t170 = 442LL;

    t170 = (((x681!=x682)^x683)&x684);

    if (t170 != -4957079863296LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = 13;
	int32_t x686 = 51692390;
	static uint16_t x687 = UINT16_MAX;
	uint16_t x688 = UINT16_MAX;
	volatile int32_t t171 = 3210;

    t171 = (((x685!=x686)^x687)&x688);

    if (t171 != 65534) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x689 = 609;
	static int64_t x691 = INT64_MAX;
	uint16_t x692 = 7U;
	int64_t t172 = -6379471LL;

    t172 = (((x689!=x690)^x691)&x692);

    if (t172 != 6LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = 40;
	volatile int64_t x695 = -104861793LL;
	uint8_t x696 = 2U;
	int64_t t173 = 11551632938LL;

    t173 = (((x693!=x694)^x695)&x696);

    if (t173 != 2LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = -1;
	uint32_t x698 = 738308559U;
	int16_t x700 = 8;
	volatile uint32_t t174 = 331626659U;

    t174 = (((x697!=x698)^x699)&x700);

    if (t174 != 8U) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x701 = INT64_MIN;
	static uint64_t x702 = 35017321469138874LLU;
	static int8_t x704 = INT8_MIN;

    t175 = (((x701!=x702)^x703)&x704);

    if (t175 != 2147483520) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x705 = -1LL;
	static uint64_t x706 = 1267906869LLU;
	int32_t x707 = -1;
	int64_t x708 = INT64_MAX;

    t176 = (((x705!=x706)^x707)&x708);

    if (t176 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = INT16_MIN;
	uint32_t x710 = 753619446U;
	int64_t x711 = -1001978372988840146LL;
	uint64_t x712 = UINT64_MAX;
	uint64_t t177 = 68875561972LLU;

    t177 = (((x709!=x710)^x711)&x712);

    if (t177 != 17444765700720711471LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = -1811456;
	volatile int16_t x714 = -1;
	volatile uint64_t t178 = 2525LLU;

    t178 = (((x713!=x714)^x715)&x716);

    if (t178 != 126LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x718 = INT64_MIN;
	static volatile uint32_t x719 = 6U;
	static int64_t x720 = 3966553LL;
	int64_t t179 = 6623646LL;

    t179 = (((x717!=x718)^x719)&x720);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x721 = INT16_MAX;
	int8_t x722 = INT8_MIN;
	volatile uint16_t x723 = 9U;
	volatile int32_t t180 = 10;

    t180 = (((x721!=x722)^x723)&x724);

    if (t180 != 8) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = -1;
	uint64_t x726 = 1488810660503137LLU;
	int8_t x727 = INT8_MIN;
	uint64_t x728 = UINT64_MAX;
	uint64_t t181 = 1804527LLU;

    t181 = (((x725!=x726)^x727)&x728);

    if (t181 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x729 = 9349118035022964LLU;
	volatile uint32_t x730 = 760355U;
	uint16_t x731 = 75U;
	static volatile int32_t x732 = INT32_MIN;
	int32_t t182 = -33223567;

    t182 = (((x729!=x730)^x731)&x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = INT64_MAX;
	int16_t x734 = -1345;
	int32_t x735 = -50498;
	uint64_t x736 = 848129505LLU;

    t183 = (((x733!=x734)^x735)&x736);

    if (t183 != 848111777LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x737 = UINT8_MAX;
	uint32_t x738 = 101665U;
	static int8_t x739 = INT8_MIN;
	uint16_t x740 = 296U;
	int32_t t184 = 164496147;

    t184 = (((x737!=x738)^x739)&x740);

    if (t184 != 256) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x743 = 7410LL;
	int32_t x744 = 57496;
	int64_t t185 = 19852LL;

    t185 = (((x741!=x742)^x743)&x744);

    if (t185 != 144LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = INT16_MAX;
	int16_t x747 = 103;
	volatile uint64_t x748 = UINT64_MAX;
	volatile uint64_t t186 = 29353LLU;

    t186 = (((x745!=x746)^x747)&x748);

    if (t186 != 102LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x749 = 52562904U;
	uint32_t x750 = 1217842406U;
	static volatile int16_t x751 = INT16_MIN;
	static uint64_t t187 = 350315317LLU;

    t187 = (((x749!=x750)^x751)&x752);

    if (t187 != 1LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x754 = -59;
	int16_t x755 = INT16_MIN;
	volatile int32_t t188 = 670014193;

    t188 = (((x753!=x754)^x755)&x756);

    if (t188 != 2147450881) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x757 = -1;
	int8_t x758 = INT8_MIN;
	volatile uint32_t x759 = 7U;
	volatile int8_t x760 = -1;
	volatile uint32_t t189 = 136U;

    t189 = (((x757!=x758)^x759)&x760);

    if (t189 != 6U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x761 = 37LLU;
	volatile int64_t x762 = 1023103511490LL;
	volatile int16_t x763 = -3;
	int8_t x764 = -3;
	int32_t t190 = -8086238;

    t190 = (((x761!=x762)^x763)&x764);

    if (t190 != -4) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = INT16_MIN;
	static int8_t x766 = INT8_MIN;
	uint32_t x767 = UINT32_MAX;
	uint64_t x768 = 51313919531756LLU;
	volatile uint64_t t191 = 70639110035834039LLU;

    t191 = (((x765!=x766)^x767)&x768);

    if (t191 != 1945246444LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x770 = 117U;
	int32_t x771 = INT32_MAX;
	static uint8_t x772 = 5U;
	int32_t t192 = -364511634;

    t192 = (((x769!=x770)^x771)&x772);

    if (t192 != 4) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = -487LL;
	volatile uint16_t x774 = 7576U;
	static volatile uint16_t x775 = 13U;
	static int32_t x776 = INT32_MIN;
	static volatile int32_t t193 = -985317;

    t193 = (((x773!=x774)^x775)&x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = -47059970369443959LL;
	uint64_t x778 = 1377047684699LLU;
	uint8_t x779 = 6U;
	uint16_t x780 = 5U;
	volatile int32_t t194 = -789035138;

    t194 = (((x777!=x778)^x779)&x780);

    if (t194 != 5) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = -1;
	static int8_t x782 = 0;
	uint64_t x783 = 1354453402913773LLU;

    t195 = (((x781!=x782)^x783)&x784);

    if (t195 != 1354453402913772LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = -1LL;
	int32_t x787 = -1;
	int8_t x788 = INT8_MAX;
	static volatile int32_t t196 = 13093;

    t196 = (((x785!=x786)^x787)&x788);

    if (t196 != 127) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x789 = 65353596235463441LLU;
	int8_t x790 = 2;
	uint8_t x791 = UINT8_MAX;
	int32_t x792 = INT32_MIN;

    t197 = (((x789!=x790)^x791)&x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x793 = UINT8_MAX;
	static uint32_t x794 = 95896U;
	volatile int32_t x795 = -318080;
	static uint32_t x796 = 0U;
	uint32_t t198 = 80094697U;

    t198 = (((x793!=x794)^x795)&x796);

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = -1LL;
	static int64_t x798 = -8798489454848LL;
	int16_t x799 = -42;
	int64_t x800 = -1LL;
	volatile int64_t t199 = -1LL;

    t199 = (((x797!=x798)^x799)&x800);

    if (t199 != -41LL) { NG(); } else { ; }
	
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

