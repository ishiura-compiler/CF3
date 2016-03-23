
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

static int16_t x5 = -4;
static volatile uint8_t x11 = 57U;
static int16_t x12 = INT16_MAX;
int8_t x20 = 0;
uint32_t t4 = 119932288U;
int64_t x24 = INT64_MIN;
uint16_t x25 = UINT16_MAX;
int8_t x26 = INT8_MIN;
int32_t x28 = INT32_MIN;
int32_t t6 = -14033050;
static int64_t t8 = 4955584837LL;
uint32_t x43 = 33426630U;
int8_t x46 = -1;
int64_t x49 = INT64_MIN;
volatile int8_t x57 = INT8_MIN;
int64_t x58 = INT64_MIN;
int8_t x64 = -42;
volatile uint32_t x65 = 7437U;
int64_t x73 = INT64_MIN;
volatile int64_t x74 = -1LL;
int8_t x77 = INT8_MIN;
static int64_t x80 = INT64_MIN;
int32_t t20 = INT32_MIN;
uint64_t x86 = UINT64_MAX;
int16_t x89 = -1;
int64_t x90 = -1LL;
static volatile uint32_t x91 = 130498569U;
int64_t t22 = 200750055LL;
static int64_t x96 = INT64_MIN;
uint16_t x98 = 465U;
uint8_t x99 = 18U;
int8_t x104 = -1;
int8_t x108 = 44;
int8_t x110 = INT8_MIN;
int32_t x112 = INT32_MIN;
static int32_t t28 = -728652;
volatile uint8_t x123 = 0U;
int32_t x132 = -1;
uint64_t t33 = 266141157069003196LLU;
int32_t x146 = 36;
volatile int32_t t36 = 28222;
int32_t x149 = -1;
int16_t x151 = -1;
static int64_t x152 = INT64_MIN;
uint32_t x153 = UINT32_MAX;
volatile uint8_t x158 = 11U;
volatile int32_t t39 = 32949;
static int64_t t41 = 10117035572425557LL;
uint64_t t42 = 650129714647LLU;
volatile int32_t t44 = 1;
static uint64_t x181 = 6631307857LLU;
int8_t x182 = 0;
int8_t x186 = INT8_MIN;
int64_t x187 = -25143LL;
int64_t x191 = -427109827961459512LL;
int64_t x192 = -37399938247LL;
static int16_t x199 = -46;
int32_t x200 = INT32_MAX;
int64_t t49 = 277888184915004LL;
volatile int32_t x204 = INT32_MIN;
static uint64_t t50 = 123170363233411LLU;
static int32_t x210 = INT32_MIN;
int32_t x213 = INT32_MIN;
static uint32_t x225 = UINT32_MAX;
uint8_t x233 = 2U;
uint8_t x243 = UINT8_MAX;
int8_t x244 = INT8_MIN;
int16_t x246 = INT16_MIN;
uint16_t x250 = UINT16_MAX;
uint32_t x258 = 7475U;
static int8_t x259 = 0;
int64_t x263 = INT64_MIN;
volatile int32_t t66 = -32937;
int16_t x269 = 0;
int8_t x276 = INT8_MIN;
volatile int32_t x278 = INT32_MAX;
int64_t x291 = INT64_MIN;
int64_t x297 = INT64_MAX;
uint8_t x300 = 48U;
uint64_t t74 = 24778435860075LLU;
int64_t x305 = INT64_MIN;
int32_t x306 = 149;
static uint16_t x307 = UINT16_MAX;
int16_t x308 = INT16_MIN;
int16_t x311 = INT16_MAX;
int8_t x324 = 4;
volatile int8_t x336 = 1;
volatile int8_t x339 = -15;
uint32_t x344 = 21130U;
volatile uint64_t x346 = 13480LLU;
int8_t x354 = -61;
int16_t x356 = INT16_MAX;
int16_t x360 = -1;
int32_t t89 = 1311100;
int32_t x362 = INT32_MAX;
int32_t x366 = -7686019;
int32_t x371 = -235;
int8_t x376 = 0;
uint8_t x387 = UINT8_MAX;
int32_t x392 = -1;
volatile int32_t t97 = -365;
uint8_t x396 = 3U;
int32_t x399 = -1;
volatile uint64_t t99 = 26527145753274342LLU;
int8_t x404 = -6;
volatile uint16_t x406 = UINT16_MAX;
volatile int8_t x412 = 15;
uint64_t t102 = 131668437139LLU;
uint64_t t103 = 102490LLU;
int32_t x425 = -1;
int32_t x428 = 32318;
int64_t x432 = -416LL;
int32_t x433 = 707644519;
uint32_t x434 = 124U;
volatile int8_t x437 = 18;
int16_t x440 = -319;
static volatile int16_t x449 = INT16_MAX;
int16_t x456 = 4854;
int64_t x461 = 64726409LL;
static uint16_t x464 = 87U;
int16_t x466 = 14921;
int8_t x471 = INT8_MIN;
volatile int32_t x475 = -1;
int8_t x476 = 1;
volatile uint8_t x480 = UINT8_MAX;
int32_t x483 = INT32_MIN;
volatile int64_t x484 = 217LL;
static uint16_t x488 = 34U;
uint64_t t121 = 754486LLU;
static uint64_t x496 = UINT64_MAX;
int8_t x499 = 7;
int16_t x500 = -1;
int64_t x504 = -1LL;
int32_t t125 = -1601;
int8_t x511 = INT8_MAX;
uint8_t x515 = 52U;
int16_t x519 = INT16_MIN;
int8_t x521 = -3;
int16_t x522 = -1;
int64_t x524 = 15664407731209944LL;
int16_t x529 = INT16_MIN;
int16_t x535 = INT16_MIN;
static uint32_t x543 = 522U;
static int32_t x561 = 29208;
volatile int8_t x568 = INT8_MAX;
int32_t t141 = -3577;
int64_t t145 = -1LL;
int64_t x598 = -1LL;
volatile int16_t x600 = -1;
static volatile int64_t t149 = INT64_MAX;
int8_t x601 = INT8_MAX;
int16_t x605 = INT16_MIN;
int16_t x606 = INT16_MIN;
int8_t x609 = -4;
uint16_t x610 = 1840U;
volatile int32_t x612 = INT32_MAX;
int64_t x613 = INT64_MIN;
int32_t x619 = -76;
int32_t x624 = INT32_MIN;
int32_t x625 = INT32_MIN;
int32_t x631 = INT32_MIN;
uint16_t x633 = UINT16_MAX;
volatile uint64_t x642 = 3615700LLU;
int32_t x645 = INT32_MIN;
uint32_t x652 = 0U;
uint64_t t162 = 51116150648372LLU;
int16_t x653 = -1;
volatile int16_t x657 = -1;
int16_t x658 = 198;
static volatile uint32_t x659 = UINT32_MAX;
int16_t x661 = 0;
int32_t x667 = INT32_MAX;
volatile uint8_t x670 = 1U;
uint8_t x671 = UINT8_MAX;
int32_t t168 = INT32_MAX;
static volatile int16_t x681 = -1;
int32_t x685 = INT32_MIN;
int16_t x686 = -1;
volatile int32_t x690 = -415669234;
volatile int16_t x692 = -1;
int32_t x698 = -1;
uint16_t x699 = 3U;
volatile int32_t t174 = -253495;
static uint32_t x702 = 703733039U;
int16_t x708 = -4891;
int8_t x710 = INT8_MAX;
uint16_t x711 = 2U;
static int64_t x714 = -1LL;
uint64_t x716 = 1671183LLU;
volatile uint8_t x721 = 1U;
uint32_t x725 = 28313978U;
static int64_t t181 = 2449949300427LL;
int16_t x729 = INT16_MIN;
uint32_t x747 = 22U;
uint32_t x749 = UINT32_MAX;
int32_t x751 = INT32_MAX;
uint32_t t187 = 0U;
int64_t x759 = INT64_MAX;
int8_t x764 = INT8_MIN;
int64_t x772 = -5114686361055LL;
volatile uint64_t t192 = 8303168429519LLU;
uint8_t x775 = UINT8_MAX;
int16_t x781 = INT16_MAX;
volatile uint32_t t196 = 0U;
int32_t x798 = INT32_MAX;
uint64_t x800 = UINT64_MAX;
volatile int64_t t199 = 151957614531LL;


void f0(void) {
    	int8_t x1 = -1;
	static volatile int8_t x2 = INT8_MAX;
	int16_t x3 = INT16_MAX;
	uint16_t x4 = 9U;
	volatile int32_t t0 = 892390037;

    t0 = ((x1^x2)|(x3<=x4));

    if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x6 = 114U;
	int32_t x7 = INT32_MAX;
	static uint32_t x8 = 10755U;
	volatile int32_t t1 = -330328;

    t1 = ((x5^x6)|(x7<=x8));

    if (t1 != -114) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MAX;
	int64_t x10 = INT64_MIN;
	int64_t t2 = 7885208460LL;

    t2 = ((x9^x10)|(x11<=x12));

    if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = 987;
	int64_t x14 = -1LL;
	static int64_t x15 = 2128252LL;
	int64_t x16 = 1LL;
	volatile int64_t t3 = 349885791534LL;

    t3 = ((x13^x14)|(x15<=x16));

    if (t3 != -988LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 4U;
	int32_t x18 = INT32_MAX;
	uint8_t x19 = 8U;

    t4 = ((x17^x18)|(x19<=x20));

    if (t4 != 2147483643U) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MIN;
	volatile int8_t x22 = 4;
	static uint32_t x23 = 11139U;
	volatile int64_t t5 = -4037685LL;

    t5 = ((x21^x22)|(x23<=x24));

    if (t5 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x27 = 377U;

    t6 = ((x25^x26)|(x27<=x28));

    if (t6 != -65409) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = UINT8_MAX;
	int16_t x30 = INT16_MIN;
	int64_t x31 = 441134331371LL;
	volatile int32_t x32 = -1;
	int32_t t7 = -126;

    t7 = ((x29^x30)|(x31<=x32));

    if (t7 != -32513) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = 885987;
	static int64_t x34 = INT64_MAX;
	static uint32_t x35 = 10U;
	static uint32_t x36 = UINT32_MAX;

    t8 = ((x33^x34)|(x35<=x36));

    if (t8 != 9223372036853889821LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x37 = 4725792U;
	int8_t x38 = INT8_MAX;
	int64_t x39 = 2165LL;
	uint32_t x40 = UINT32_MAX;
	volatile uint32_t t9 = 118280327U;

    t9 = ((x37^x38)|(x39<=x40));

    if (t9 != 4725855U) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = -1;
	int8_t x42 = -1;
	uint64_t x44 = UINT64_MAX;
	int32_t t10 = 1;

    t10 = ((x41^x42)|(x43<=x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MAX;
	uint32_t x47 = 5U;
	static int64_t x48 = -122LL;
	int32_t t11 = -6875670;

    t11 = ((x45^x46)|(x47<=x48));

    if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x50 = INT8_MIN;
	uint32_t x51 = 65498U;
	int16_t x52 = 6779;
	volatile int64_t t12 = 37511935LL;

    t12 = ((x49^x50)|(x51<=x52));

    if (t12 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = -1LL;
	uint32_t x54 = 2U;
	int64_t x55 = 16437220943LL;
	int16_t x56 = INT16_MAX;
	int64_t t13 = 29LL;

    t13 = ((x53^x54)|(x55<=x56));

    if (t13 != -3LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x59 = 1U;
	int8_t x60 = INT8_MAX;
	int64_t t14 = 31910663474316LL;

    t14 = ((x57^x58)|(x59<=x60));

    if (t14 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = UINT64_MAX;
	int32_t x62 = -11808;
	int32_t x63 = INT32_MAX;
	uint64_t t15 = 8438457589788432971LLU;

    t15 = ((x61^x62)|(x63<=x64));

    if (t15 != 11807LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x66 = -1;
	volatile uint16_t x67 = 3U;
	volatile int16_t x68 = -1;
	uint32_t t16 = 42846712U;

    t16 = ((x65^x66)|(x67<=x68));

    if (t16 != 4294959858U) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x69 = INT64_MIN;
	int64_t x70 = 16LL;
	volatile uint32_t x71 = 3504103U;
	uint32_t x72 = UINT32_MAX;
	volatile int64_t t17 = -101LL;

    t17 = ((x69^x70)|(x71<=x72));

    if (t17 != -9223372036854775791LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x75 = INT64_MIN;
	uint8_t x76 = UINT8_MAX;
	static volatile int64_t t18 = INT64_MAX;

    t18 = ((x73^x74)|(x75<=x76));

    if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x78 = INT64_MAX;
	int64_t x79 = 23462027LL;
	int64_t t19 = -29467159431LL;

    t19 = ((x77^x78)|(x79<=x80));

    if (t19 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x81 = INT32_MAX;
	int16_t x82 = -1;
	int64_t x83 = 1051830517235827LL;
	int64_t x84 = INT64_MIN;

    t20 = ((x81^x82)|(x83<=x84));

    if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x85 = 52U;
	static uint64_t x87 = 2LLU;
	int32_t x88 = -1;
	static volatile uint64_t t21 = 0LLU;

    t21 = ((x85^x86)|(x87<=x88));

    if (t21 != 18446744073709551563LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x92 = UINT32_MAX;

    t22 = ((x89^x90)|(x91<=x92));

    if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x93 = 1;
	int32_t x94 = INT32_MIN;
	uint16_t x95 = UINT16_MAX;
	volatile int32_t t23 = -3385;

    t23 = ((x93^x94)|(x95<=x96));

    if (t23 != -2147483647) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = -1;
	static int8_t x100 = 1;
	volatile int32_t t24 = -53615;

    t24 = ((x97^x98)|(x99<=x100));

    if (t24 != -466) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x101 = -1;
	uint16_t x102 = 2U;
	static int32_t x103 = 3898;
	int32_t t25 = 836;

    t25 = ((x101^x102)|(x103<=x104));

    if (t25 != -3) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x105 = -1;
	uint32_t x106 = 8340945U;
	uint16_t x107 = UINT16_MAX;
	volatile uint32_t t26 = 0U;

    t26 = ((x105^x106)|(x107<=x108));

    if (t26 != 4286626350U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint32_t x109 = 0U;
	uint16_t x111 = 0U;
	static uint32_t t27 = 686241U;

    t27 = ((x109^x110)|(x111<=x112));

    if (t27 != 4294967168U) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MIN;
	int16_t x114 = -623;
	int16_t x115 = INT16_MIN;
	int32_t x116 = -919650;

    t28 = ((x113^x114)|(x115<=x116));

    if (t28 != 529) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x117 = 361U;
	uint16_t x118 = UINT16_MAX;
	uint64_t x119 = UINT64_MAX;
	volatile int8_t x120 = -1;
	int32_t t29 = 41889;

    t29 = ((x117^x118)|(x119<=x120));

    if (t29 != 65175) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = INT8_MIN;
	int32_t x122 = INT32_MIN;
	int32_t x124 = INT32_MIN;
	static volatile int32_t t30 = -284001578;

    t30 = ((x121^x122)|(x123<=x124));

    if (t30 != 2147483520) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x125 = INT8_MIN;
	uint32_t x126 = 5780U;
	int16_t x127 = 1;
	uint64_t x128 = 2434236508LLU;
	uint32_t t31 = 121601995U;

    t31 = ((x125^x126)|(x127<=x128));

    if (t31 != 4294961429U) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = INT64_MAX;
	static uint16_t x130 = 452U;
	uint8_t x131 = UINT8_MAX;
	volatile int64_t t32 = 0LL;

    t32 = ((x129^x130)|(x131<=x132));

    if (t32 != 9223372036854775355LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = 701060863LL;
	static volatile uint64_t x134 = 3703664732LLU;
	uint64_t x135 = UINT64_MAX;
	int16_t x136 = 480;

    t33 = ((x133^x134)|(x135<=x136));

    if (t33 != 4110952099LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x137 = 9U;
	static volatile int8_t x138 = INT8_MIN;
	volatile int64_t x139 = INT64_MAX;
	int64_t x140 = INT64_MIN;
	int32_t t34 = 62178;

    t34 = ((x137^x138)|(x139<=x140));

    if (t34 != -119) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = -1;
	uint64_t x142 = UINT64_MAX;
	uint32_t x143 = 234U;
	static int64_t x144 = 0LL;
	uint64_t t35 = 19876456346095LLU;

    t35 = ((x141^x142)|(x143<=x144));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x145 = -3179;
	int64_t x147 = INT64_MIN;
	int8_t x148 = 26;

    t36 = ((x145^x146)|(x147<=x148));

    if (t36 != -3151) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x150 = INT8_MIN;
	static volatile int32_t t37 = 1016;

    t37 = ((x149^x150)|(x151<=x152));

    if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x154 = UINT16_MAX;
	static uint32_t x155 = 357702U;
	static uint8_t x156 = UINT8_MAX;
	uint32_t t38 = 249415849U;

    t38 = ((x153^x154)|(x155<=x156));

    if (t38 != 4294901760U) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = -1;
	uint16_t x159 = 34U;
	int32_t x160 = -4;

    t39 = ((x157^x158)|(x159<=x160));

    if (t39 != -12) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = -9;
	volatile int8_t x162 = -29;
	int32_t x163 = 13182;
	static int16_t x164 = 26;
	volatile int32_t t40 = 9;

    t40 = ((x161^x162)|(x163<=x164));

    if (t40 != 20) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MAX;
	int64_t x166 = INT64_MIN;
	volatile uint8_t x167 = 57U;
	int32_t x168 = -1;

    t41 = ((x165^x166)|(x167<=x168));

    if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int32_t x169 = INT32_MIN;
	static uint64_t x170 = 0LLU;
	int32_t x171 = -217;
	int32_t x172 = 694;

    t42 = ((x169^x170)|(x171<=x172));

    if (t42 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x173 = 1U;
	uint64_t x174 = 693LLU;
	static int64_t x175 = INT64_MIN;
	static volatile int32_t x176 = INT32_MIN;
	uint64_t t43 = 1408826627689494881LLU;

    t43 = ((x173^x174)|(x175<=x176));

    if (t43 != 693LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x177 = -11;
	uint16_t x178 = 1U;
	int64_t x179 = -1LL;
	volatile int8_t x180 = INT8_MIN;

    t44 = ((x177^x178)|(x179<=x180));

    if (t44 != -12) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x183 = INT8_MAX;
	uint64_t x184 = 9481LLU;
	uint64_t t45 = 116311056054129LLU;

    t45 = ((x181^x182)|(x183<=x184));

    if (t45 != 6631307857LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int32_t x185 = -1;
	uint16_t x188 = UINT16_MAX;
	static volatile int32_t t46 = 3;

    t46 = ((x185^x186)|(x187<=x188));

    if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x189 = 7746471U;
	static volatile int64_t x190 = INT64_MIN;
	static int64_t t47 = 709757842LL;

    t47 = ((x189^x190)|(x191<=x192));

    if (t47 != -9223372036847029337LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x193 = 460877015U;
	int64_t x194 = -1LL;
	volatile int8_t x195 = 50;
	int16_t x196 = -796;
	volatile int64_t t48 = -3148982050957LL;

    t48 = ((x193^x194)|(x195<=x196));

    if (t48 != -460877016LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x197 = INT8_MIN;
	int64_t x198 = INT64_MIN;

    t49 = ((x197^x198)|(x199<=x200));

    if (t49 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = INT32_MIN;
	uint64_t x202 = 52339037LLU;
	int8_t x203 = INT8_MIN;

    t50 = ((x201^x202)|(x203<=x204));

    if (t50 != 18446744071614407005LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = INT32_MIN;
	static volatile uint8_t x206 = 1U;
	static uint8_t x207 = UINT8_MAX;
	static uint32_t x208 = 0U;
	static volatile int32_t t51 = 3885267;

    t51 = ((x205^x206)|(x207<=x208));

    if (t51 != -2147483647) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = -1LL;
	uint64_t x211 = UINT64_MAX;
	int8_t x212 = INT8_MIN;
	int64_t t52 = 1277292234LL;

    t52 = ((x209^x210)|(x211<=x212));

    if (t52 != 2147483647LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x214 = -1;
	int64_t x215 = 24396LL;
	int32_t x216 = INT32_MIN;
	int32_t t53 = INT32_MAX;

    t53 = ((x213^x214)|(x215<=x216));

    if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x217 = -264288654243502091LL;
	uint64_t x218 = 9LLU;
	volatile int16_t x219 = -40;
	static int32_t x220 = INT32_MAX;
	volatile uint64_t t54 = 8819039051172206274LLU;

    t54 = ((x217^x218)|(x219<=x220));

    if (t54 != 18182455419466049533LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = INT8_MIN;
	int32_t x222 = -1;
	volatile uint16_t x223 = UINT16_MAX;
	volatile int8_t x224 = 0;
	static volatile int32_t t55 = 1;

    t55 = ((x221^x222)|(x223<=x224));

    if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x226 = -55091668;
	static volatile uint32_t x227 = UINT32_MAX;
	int64_t x228 = INT64_MIN;
	volatile uint32_t t56 = 592U;

    t56 = ((x225^x226)|(x227<=x228));

    if (t56 != 55091667U) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int32_t x229 = INT32_MIN;
	uint16_t x230 = UINT16_MAX;
	int32_t x231 = 172956;
	static uint16_t x232 = UINT16_MAX;
	static volatile int32_t t57 = 1;

    t57 = ((x229^x230)|(x231<=x232));

    if (t57 != -2147418113) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int16_t x234 = 182;
	static int16_t x235 = INT16_MAX;
	int16_t x236 = -1;
	volatile int32_t t58 = -9141;

    t58 = ((x233^x234)|(x235<=x236));

    if (t58 != 180) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = 6;
	static uint8_t x238 = 5U;
	static int64_t x239 = -1LL;
	uint8_t x240 = UINT8_MAX;
	volatile int32_t t59 = -24201319;

    t59 = ((x237^x238)|(x239<=x240));

    if (t59 != 3) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x241 = -1;
	uint8_t x242 = UINT8_MAX;
	static int32_t t60 = -258942638;

    t60 = ((x241^x242)|(x243<=x244));

    if (t60 != -256) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x245 = 0U;
	uint64_t x247 = UINT64_MAX;
	static int32_t x248 = -1;
	volatile int32_t t61 = -220561;

    t61 = ((x245^x246)|(x247<=x248));

    if (t61 != -32767) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = INT32_MAX;
	static int16_t x251 = -1;
	static uint16_t x252 = 1U;
	volatile int32_t t62 = -71578;

    t62 = ((x249^x250)|(x251<=x252));

    if (t62 != 2147418113) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x253 = 56U;
	int32_t x254 = INT32_MIN;
	uint64_t x255 = 1976284LLU;
	int64_t x256 = INT64_MIN;
	int32_t t63 = 462344;

    t63 = ((x253^x254)|(x255<=x256));

    if (t63 != -2147483591) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = INT16_MIN;
	volatile int16_t x260 = 2;
	static uint32_t t64 = 146117U;

    t64 = ((x257^x258)|(x259<=x260));

    if (t64 != 4294942003U) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint8_t x261 = 19U;
	uint16_t x262 = UINT16_MAX;
	static int32_t x264 = INT32_MIN;
	volatile int32_t t65 = 55304854;

    t65 = ((x261^x262)|(x263<=x264));

    if (t65 != 65517) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = INT16_MIN;
	static int32_t x266 = INT32_MIN;
	int32_t x267 = -4633;
	static int32_t x268 = INT32_MIN;

    t66 = ((x265^x266)|(x267<=x268));

    if (t66 != 2147450880) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x270 = 0U;
	static volatile int8_t x271 = 1;
	static uint16_t x272 = 597U;
	volatile int32_t t67 = -1;

    t67 = ((x269^x270)|(x271<=x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x273 = 500U;
	int32_t x274 = 724757;
	volatile uint8_t x275 = UINT8_MAX;
	volatile int32_t t68 = -44;

    t68 = ((x273^x274)|(x275<=x276));

    if (t68 != 724705) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x277 = -380949064;
	int32_t x279 = INT32_MIN;
	uint8_t x280 = 45U;
	int32_t t69 = 1180;

    t69 = ((x277^x278)|(x279<=x280));

    if (t69 != -1766534585) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int8_t x281 = INT8_MAX;
	static volatile int8_t x282 = INT8_MIN;
	int64_t x283 = 515794633674775805LL;
	int8_t x284 = INT8_MIN;
	int32_t t70 = 9257671;

    t70 = ((x281^x282)|(x283<=x284));

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x285 = 15U;
	static int16_t x286 = INT16_MAX;
	volatile int64_t x287 = INT64_MAX;
	uint32_t x288 = UINT32_MAX;
	volatile int32_t t71 = 9;

    t71 = ((x285^x286)|(x287<=x288));

    if (t71 != 32752) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = 14;
	int64_t x290 = -193369486930LL;
	int32_t x292 = -1;
	int64_t t72 = 7068469LL;

    t72 = ((x289^x290)|(x291<=x292));

    if (t72 != -193369486943LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x293 = INT32_MIN;
	uint64_t x294 = 821244657399LLU;
	int64_t x295 = -103517337115854LL;
	uint8_t x296 = 111U;
	static volatile uint64_t t73 = 1946392069039532LLU;

    t73 = ((x293^x294)|(x295<=x296));

    if (t73 != 18446743252129218295LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint64_t x298 = 733478820442LLU;
	int64_t x299 = 418583LL;

    t74 = ((x297^x298)|(x299<=x300));

    if (t74 != 9223371303375955365LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = INT64_MIN;
	static int16_t x302 = INT16_MIN;
	static uint16_t x303 = 47U;
	uint16_t x304 = 2U;
	static volatile int64_t t75 = 1375246077497413924LL;

    t75 = ((x301^x302)|(x303<=x304));

    if (t75 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t t76 = 417923531LL;

    t76 = ((x305^x306)|(x307<=x308));

    if (t76 != -9223372036854775659LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = INT32_MAX;
	int8_t x310 = 1;
	int64_t x312 = -1LL;
	int32_t t77 = -3;

    t77 = ((x309^x310)|(x311<=x312));

    if (t77 != 2147483646) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x313 = UINT32_MAX;
	uint64_t x314 = 804070LLU;
	int8_t x315 = -1;
	static int16_t x316 = INT16_MIN;
	volatile uint64_t t78 = 7485031729532037LLU;

    t78 = ((x313^x314)|(x315<=x316));

    if (t78 != 4294163225LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x317 = 122U;
	uint32_t x318 = 62U;
	uint32_t x319 = 18U;
	static volatile int32_t x320 = INT32_MIN;
	static volatile uint32_t t79 = 130146U;

    t79 = ((x317^x318)|(x319<=x320));

    if (t79 != 69U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = 26824756U;
	uint8_t x322 = 27U;
	volatile int64_t x323 = 691884LL;
	volatile uint32_t t80 = 1304590590U;

    t80 = ((x321^x322)|(x323<=x324));

    if (t80 != 26824751U) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x325 = -1LL;
	volatile uint16_t x326 = 1581U;
	static int8_t x327 = INT8_MIN;
	uint32_t x328 = 106U;
	int64_t t81 = 541LL;

    t81 = ((x325^x326)|(x327<=x328));

    if (t81 != -1582LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint16_t x329 = 13U;
	int16_t x330 = 1;
	int8_t x331 = -1;
	volatile int32_t x332 = 82436645;
	static int32_t t82 = 11647;

    t82 = ((x329^x330)|(x331<=x332));

    if (t82 != 13) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x333 = UINT16_MAX;
	volatile uint64_t x334 = 4843032019510LLU;
	volatile int32_t x335 = -1;
	static uint64_t t83 = 147158518641682618LLU;

    t83 = ((x333^x334)|(x335<=x336));

    if (t83 != 4843032083913LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint8_t x337 = 0U;
	int8_t x338 = -11;
	uint8_t x340 = 9U;
	static int32_t t84 = -973851894;

    t84 = ((x337^x338)|(x339<=x340));

    if (t84 != -11) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = INT64_MIN;
	int64_t x342 = INT64_MAX;
	int16_t x343 = -5593;
	volatile int64_t t85 = 1350869191515944851LL;

    t85 = ((x341^x342)|(x343<=x344));

    if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = INT16_MAX;
	volatile int32_t x347 = INT32_MAX;
	int16_t x348 = INT16_MAX;
	volatile uint64_t t86 = 25536389947LLU;

    t86 = ((x345^x346)|(x347<=x348));

    if (t86 != 19287LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x349 = 0;
	volatile int8_t x350 = -8;
	static int32_t x351 = -1888;
	static int16_t x352 = INT16_MIN;
	int32_t t87 = -91;

    t87 = ((x349^x350)|(x351<=x352));

    if (t87 != -8) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = 142704LL;
	static int64_t x355 = INT64_MIN;
	static int64_t t88 = -11791468856LL;

    t88 = ((x353^x354)|(x355<=x356));

    if (t88 != -142669LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x357 = 1;
	uint8_t x358 = 14U;
	static uint32_t x359 = 1357U;

    t89 = ((x357^x358)|(x359<=x360));

    if (t89 != 15) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = -1;
	static volatile uint64_t x363 = UINT64_MAX;
	int8_t x364 = INT8_MAX;
	static volatile int32_t t90 = INT32_MIN;

    t90 = ((x361^x362)|(x363<=x364));

    if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x365 = -1266740580128095LL;
	uint32_t x367 = UINT32_MAX;
	int16_t x368 = INT16_MAX;
	volatile int64_t t91 = 793800451LL;

    t91 = ((x365^x366)|(x367<=x368));

    if (t91 != 1266740578767580LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = INT64_MIN;
	int64_t x370 = -852341563LL;
	int64_t x372 = 102740LL;
	volatile int64_t t92 = 388LL;

    t92 = ((x369^x370)|(x371<=x372));

    if (t92 != 9223372036002434245LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = 7487;
	static uint64_t x374 = 936627784731469LLU;
	volatile uint32_t x375 = UINT32_MAX;
	volatile uint64_t t93 = 27329945LLU;

    t93 = ((x373^x374)|(x375<=x376));

    if (t93 != 936627784734322LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x377 = INT64_MIN;
	int64_t x378 = -1LL;
	int8_t x379 = 2;
	volatile int64_t x380 = INT64_MAX;
	volatile int64_t t94 = INT64_MAX;

    t94 = ((x377^x378)|(x379<=x380));

    if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x381 = 25U;
	int64_t x382 = 272345887946126854LL;
	uint64_t x383 = 1134400491LLU;
	uint32_t x384 = 63096U;
	static int64_t t95 = 10434284941LL;

    t95 = ((x381^x382)|(x383<=x384));

    if (t95 != 272345887946126879LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint32_t x385 = 62U;
	int16_t x386 = 81;
	int8_t x388 = -2;
	uint32_t t96 = 30U;

    t96 = ((x385^x386)|(x387<=x388));

    if (t96 != 111U) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = INT16_MIN;
	int16_t x390 = 1;
	uint64_t x391 = 3931494LLU;

    t97 = ((x389^x390)|(x391<=x392));

    if (t97 != -32767) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x393 = UINT16_MAX;
	static uint8_t x394 = 0U;
	volatile int16_t x395 = INT16_MAX;
	volatile int32_t t98 = -15;

    t98 = ((x393^x394)|(x395<=x396));

    if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x397 = 12LLU;
	uint64_t x398 = 96752350LLU;
	volatile int8_t x400 = 33;

    t99 = ((x397^x398)|(x399<=x400));

    if (t99 != 96752339LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x401 = 93534LLU;
	uint32_t x402 = 10254634U;
	volatile int8_t x403 = INT8_MAX;
	uint64_t t100 = 130LLU;

    t100 = ((x401^x402)|(x403<=x404));

    if (t100 != 10294388LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x405 = INT64_MIN;
	int32_t x407 = -1;
	uint64_t x408 = UINT64_MAX;
	static volatile int64_t t101 = -61LL;

    t101 = ((x405^x406)|(x407<=x408));

    if (t101 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = INT32_MIN;
	uint64_t x410 = 1475LLU;
	volatile int16_t x411 = INT16_MAX;

    t102 = ((x409^x410)|(x411<=x412));

    if (t102 != 18446744071562069443LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = INT32_MIN;
	uint64_t x414 = 191925041163582LLU;
	int8_t x415 = INT8_MIN;
	uint16_t x416 = UINT16_MAX;

    t103 = ((x413^x414)|(x415<=x416));

    if (t103 != 18446552146786053439LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x417 = UINT16_MAX;
	uint16_t x418 = 82U;
	static int8_t x419 = INT8_MAX;
	int8_t x420 = -46;
	static int32_t t104 = -312495;

    t104 = ((x417^x418)|(x419<=x420));

    if (t104 != 65453) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = INT32_MIN;
	int32_t x422 = INT32_MIN;
	static int16_t x423 = INT16_MAX;
	uint64_t x424 = UINT64_MAX;
	static int32_t t105 = 7165092;

    t105 = ((x421^x422)|(x423<=x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x426 = INT8_MAX;
	int64_t x427 = INT64_MIN;
	volatile int32_t t106 = -8;

    t106 = ((x425^x426)|(x427<=x428));

    if (t106 != -127) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x429 = 2U;
	int64_t x430 = -1LL;
	int64_t x431 = -1LL;
	int64_t t107 = 7524LL;

    t107 = ((x429^x430)|(x431<=x432));

    if (t107 != -3LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x435 = INT8_MIN;
	int32_t x436 = 540806747;
	static uint32_t t108 = 441U;

    t108 = ((x433^x434)|(x435<=x436));

    if (t108 != 707644443U) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x438 = INT32_MIN;
	uint16_t x439 = 24975U;
	int32_t t109 = -34223;

    t109 = ((x437^x438)|(x439<=x440));

    if (t109 != -2147483630) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = INT16_MIN;
	int8_t x442 = INT8_MIN;
	uint16_t x443 = 4814U;
	int64_t x444 = -1LL;
	int32_t t110 = 2112;

    t110 = ((x441^x442)|(x443<=x444));

    if (t110 != 32640) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x445 = -21;
	static int32_t x446 = -2017;
	uint32_t x447 = 21333U;
	uint8_t x448 = UINT8_MAX;
	volatile int32_t t111 = 423911417;

    t111 = ((x445^x446)|(x447<=x448));

    if (t111 != 2036) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x450 = INT8_MIN;
	int32_t x451 = 554139;
	uint16_t x452 = UINT16_MAX;
	int32_t t112 = -4826693;

    t112 = ((x449^x450)|(x451<=x452));

    if (t112 != -32641) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x453 = UINT8_MAX;
	int32_t x454 = 43332;
	uint8_t x455 = 3U;
	static int32_t t113 = -1;

    t113 = ((x453^x454)|(x455<=x456));

    if (t113 != 43451) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x457 = -2;
	int8_t x458 = INT8_MAX;
	int16_t x459 = INT16_MIN;
	int8_t x460 = 3;
	volatile int32_t t114 = -787652;

    t114 = ((x457^x458)|(x459<=x460));

    if (t114 != -127) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x462 = 20024712;
	volatile uint64_t x463 = 55959099158300LLU;
	volatile int64_t t115 = 247399229957690LL;

    t115 = ((x461^x462)|(x463<=x464));

    if (t115 != 48900097LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = 62238613905LL;
	int16_t x467 = INT16_MAX;
	volatile int8_t x468 = INT8_MIN;
	volatile int64_t t116 = 1011860468305LL;

    t116 = ((x465^x466)|(x467<=x468));

    if (t116 != 62238612440LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int8_t x469 = 8;
	int8_t x470 = INT8_MIN;
	int32_t x472 = INT32_MIN;
	int32_t t117 = -289314;

    t117 = ((x469^x470)|(x471<=x472));

    if (t117 != -120) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = -16;
	volatile uint8_t x474 = 1U;
	int32_t t118 = -2;

    t118 = ((x473^x474)|(x475<=x476));

    if (t118 != -15) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = INT64_MIN;
	uint32_t x478 = 0U;
	uint64_t x479 = 331631741LLU;
	int64_t t119 = INT64_MIN;

    t119 = ((x477^x478)|(x479<=x480));

    if (t119 != INT64_MIN) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = 3;
	int64_t x482 = INT64_MAX;
	static volatile int64_t t120 = 57308821821212LL;

    t120 = ((x481^x482)|(x483<=x484));

    if (t120 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x485 = 10264233800LLU;
	int64_t x486 = -4354876135817LL;
	int64_t x487 = INT64_MIN;

    t121 = ((x485^x486)|(x487<=x488));

    if (t121 != 18446739711883764031LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = INT16_MIN;
	int32_t x490 = 374775;
	static int64_t x491 = -1LL;
	int8_t x492 = -56;
	volatile int32_t t122 = -989608;

    t122 = ((x489^x490)|(x491<=x492));

    if (t122 != -378889) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x493 = 181U;
	int64_t x494 = 364640LL;
	int16_t x495 = INT16_MIN;
	static volatile int64_t t123 = 1304LL;

    t123 = ((x493^x494)|(x495<=x496));

    if (t123 != 364757LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x497 = UINT64_MAX;
	uint32_t x498 = 1117509127U;
	volatile uint64_t t124 = 858753594LLU;

    t124 = ((x497^x498)|(x499<=x500));

    if (t124 != 18446744072592042488LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = INT16_MIN;
	uint8_t x502 = UINT8_MAX;
	uint8_t x503 = 10U;

    t125 = ((x501^x502)|(x503<=x504));

    if (t125 != -32513) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x505 = INT32_MIN;
	static uint16_t x506 = 23U;
	static int16_t x507 = 48;
	volatile uint8_t x508 = 1U;
	volatile int32_t t126 = 218397922;

    t126 = ((x505^x506)|(x507<=x508));

    if (t126 != -2147483625) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = INT64_MIN;
	static uint8_t x510 = UINT8_MAX;
	uint32_t x512 = 45835127U;
	volatile int64_t t127 = 343989LL;

    t127 = ((x509^x510)|(x511<=x512));

    if (t127 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x513 = UINT16_MAX;
	uint16_t x514 = 59U;
	volatile int8_t x516 = -2;
	volatile int32_t t128 = -42570;

    t128 = ((x513^x514)|(x515<=x516));

    if (t128 != 65476) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = 2823;
	int32_t x518 = -1;
	int8_t x520 = INT8_MIN;
	int32_t t129 = 100;

    t129 = ((x517^x518)|(x519<=x520));

    if (t129 != -2823) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x523 = INT64_MAX;
	static int32_t t130 = 14;

    t130 = ((x521^x522)|(x523<=x524));

    if (t130 != 2) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = -1;
	volatile int32_t x526 = 324543;
	int32_t x527 = INT32_MIN;
	static uint16_t x528 = UINT16_MAX;
	volatile int32_t t131 = 216916119;

    t131 = ((x525^x526)|(x527<=x528));

    if (t131 != -324543) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x530 = -508LL;
	uint32_t x531 = 494U;
	int32_t x532 = -1;
	volatile int64_t t132 = 3782259486107037LL;

    t132 = ((x529^x530)|(x531<=x532));

    if (t132 != 32261LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint64_t x533 = 45410076481LLU;
	int8_t x534 = 1;
	uint64_t x536 = 16694430LLU;
	volatile uint64_t t133 = 31811LLU;

    t133 = ((x533^x534)|(x535<=x536));

    if (t133 != 45410076480LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint64_t x537 = UINT64_MAX;
	volatile uint8_t x538 = UINT8_MAX;
	int32_t x539 = 1;
	int8_t x540 = INT8_MIN;
	static volatile uint64_t t134 = 5375098036619LLU;

    t134 = ((x537^x538)|(x539<=x540));

    if (t134 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile uint16_t x541 = UINT16_MAX;
	static int16_t x542 = INT16_MAX;
	int8_t x544 = -1;
	volatile int32_t t135 = 37616;

    t135 = ((x541^x542)|(x543<=x544));

    if (t135 != 32769) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = INT64_MIN;
	uint16_t x546 = 0U;
	static int8_t x547 = INT8_MAX;
	uint32_t x548 = UINT32_MAX;
	int64_t t136 = 38775543LL;

    t136 = ((x545^x546)|(x547<=x548));

    if (t136 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = INT16_MIN;
	uint16_t x550 = 15U;
	int8_t x551 = INT8_MIN;
	static int16_t x552 = -1071;
	static volatile int32_t t137 = 56315297;

    t137 = ((x549^x550)|(x551<=x552));

    if (t137 != -32753) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = INT32_MIN;
	static int32_t x554 = INT32_MAX;
	static uint16_t x555 = 6U;
	int16_t x556 = -1;
	int32_t t138 = -1;

    t138 = ((x553^x554)|(x555<=x556));

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x557 = UINT64_MAX;
	static uint32_t x558 = UINT32_MAX;
	int64_t x559 = 4193242LL;
	uint8_t x560 = UINT8_MAX;
	uint64_t t139 = 5LLU;

    t139 = ((x557^x558)|(x559<=x560));

    if (t139 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x562 = 57U;
	int16_t x563 = INT16_MIN;
	static uint32_t x564 = 1773581992U;
	static int32_t t140 = 4161;

    t140 = ((x561^x562)|(x563<=x564));

    if (t140 != 29217) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = 4055;
	volatile uint16_t x566 = 58U;
	uint64_t x567 = 198160LLU;

    t141 = ((x565^x566)|(x567<=x568));

    if (t141 != 4077) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = INT64_MAX;
	int32_t x570 = INT32_MIN;
	int8_t x571 = -1;
	volatile uint16_t x572 = UINT16_MAX;
	volatile int64_t t142 = 742089764031LL;

    t142 = ((x569^x570)|(x571<=x572));

    if (t142 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x573 = UINT64_MAX;
	static int32_t x574 = 124903;
	static int8_t x575 = INT8_MIN;
	int32_t x576 = INT32_MIN;
	volatile uint64_t t143 = 11057LLU;

    t143 = ((x573^x574)|(x575<=x576));

    if (t143 != 18446744073709426712LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = INT16_MIN;
	static uint8_t x578 = 23U;
	volatile int64_t x579 = -1LL;
	int32_t x580 = INT32_MIN;
	int32_t t144 = -15328677;

    t144 = ((x577^x578)|(x579<=x580));

    if (t144 != -32745) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = INT64_MIN;
	int32_t x582 = INT32_MAX;
	volatile int64_t x583 = -1LL;
	uint64_t x584 = UINT64_MAX;

    t145 = ((x581^x582)|(x583<=x584));

    if (t145 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = INT16_MAX;
	uint8_t x586 = 10U;
	static volatile int8_t x587 = -11;
	int16_t x588 = 460;
	volatile int32_t t146 = -789218762;

    t146 = ((x585^x586)|(x587<=x588));

    if (t146 != 32757) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = 1;
	int64_t x590 = INT64_MIN;
	int64_t x591 = -91269914LL;
	volatile int64_t x592 = -1LL;
	static volatile int64_t t147 = -13264296321401LL;

    t147 = ((x589^x590)|(x591<=x592));

    if (t147 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = -1LL;
	volatile int16_t x594 = INT16_MIN;
	uint64_t x595 = UINT64_MAX;
	int16_t x596 = INT16_MIN;
	int64_t t148 = -14111417006LL;

    t148 = ((x593^x594)|(x595<=x596));

    if (t148 != 32767LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x597 = INT64_MIN;
	static int16_t x599 = INT16_MAX;

    t149 = ((x597^x598)|(x599<=x600));

    if (t149 != INT64_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x602 = INT32_MIN;
	static volatile uint32_t x603 = 1014U;
	static uint8_t x604 = 3U;
	volatile int32_t t150 = -27;

    t150 = ((x601^x602)|(x603<=x604));

    if (t150 != -2147483521) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x607 = INT8_MAX;
	static int32_t x608 = -1;
	int32_t t151 = 10429;

    t151 = ((x605^x606)|(x607<=x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x611 = INT16_MAX;
	volatile int32_t t152 = 44529097;

    t152 = ((x609^x610)|(x611<=x612));

    if (t152 != -1843) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint32_t x614 = UINT32_MAX;
	static int8_t x615 = -4;
	volatile int8_t x616 = -1;
	static int64_t t153 = -83701848043754LL;

    t153 = ((x613^x614)|(x615<=x616));

    if (t153 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x617 = UINT64_MAX;
	int64_t x618 = -1LL;
	static int8_t x620 = -13;
	static uint64_t t154 = 274627LLU;

    t154 = ((x617^x618)|(x619<=x620));

    if (t154 != 1LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x621 = -162859903442872036LL;
	uint8_t x622 = UINT8_MAX;
	static int32_t x623 = INT32_MAX;
	volatile int64_t t155 = 451204563LL;

    t155 = ((x621^x622)|(x623<=x624));

    if (t155 != -162859903442871837LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x626 = 0U;
	int64_t x627 = 141884617889204LL;
	uint8_t x628 = UINT8_MAX;
	volatile int32_t t156 = INT32_MIN;

    t156 = ((x625^x626)|(x627<=x628));

    if (t156 != INT32_MIN) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = INT64_MIN;
	volatile uint16_t x630 = 1U;
	volatile int16_t x632 = 339;
	int64_t t157 = -14166776LL;

    t157 = ((x629^x630)|(x631<=x632));

    if (t157 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x634 = 11651U;
	static int8_t x635 = -24;
	int16_t x636 = -1854;
	int32_t t158 = 19352;

    t158 = ((x633^x634)|(x635<=x636));

    if (t158 != 53884) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x637 = UINT32_MAX;
	int8_t x638 = -63;
	volatile int8_t x639 = -14;
	volatile int8_t x640 = INT8_MIN;
	uint32_t t159 = 1573U;

    t159 = ((x637^x638)|(x639<=x640));

    if (t159 != 62U) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = 9402730;
	uint32_t x643 = UINT32_MAX;
	int64_t x644 = -12LL;
	uint64_t t160 = 1031991001706LLU;

    t160 = ((x641^x642)|(x643<=x644));

    if (t160 != 12079806LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x646 = INT64_MAX;
	static volatile uint64_t x647 = 4713712744155544LLU;
	uint32_t x648 = UINT32_MAX;
	static int64_t t161 = 3157LL;

    t161 = ((x645^x646)|(x647<=x648));

    if (t161 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t x649 = UINT64_MAX;
	volatile uint64_t x650 = UINT64_MAX;
	int64_t x651 = INT64_MAX;

    t162 = ((x649^x650)|(x651<=x652));

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint64_t x654 = UINT64_MAX;
	static volatile int32_t x655 = INT32_MAX;
	static int8_t x656 = 4;
	uint64_t t163 = 482942794777262705LLU;

    t163 = ((x653^x654)|(x655<=x656));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x660 = 1;
	volatile int32_t t164 = 169663;

    t164 = ((x657^x658)|(x659<=x660));

    if (t164 != -199) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x662 = 6997624151506LLU;
	int64_t x663 = -1LL;
	int8_t x664 = INT8_MIN;
	volatile uint64_t t165 = 11818157LLU;

    t165 = ((x661^x662)|(x663<=x664));

    if (t165 != 6997624151506LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = 30;
	volatile int32_t x666 = 53195254;
	static int64_t x668 = INT64_MIN;
	static volatile int32_t t166 = -496901705;

    t166 = ((x665^x666)|(x667<=x668));

    if (t166 != 53195240) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x669 = UINT8_MAX;
	int64_t x672 = INT64_MAX;
	int32_t t167 = -7;

    t167 = ((x669^x670)|(x671<=x672));

    if (t167 != 255) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = -1;
	static int32_t x674 = INT32_MIN;
	int16_t x675 = INT16_MIN;
	int32_t x676 = -1;

    t168 = ((x673^x674)|(x675<=x676));

    if (t168 != INT32_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = INT8_MIN;
	int64_t x678 = -21694245LL;
	static volatile int32_t x679 = -1;
	static volatile int32_t x680 = 2;
	int64_t t169 = -232LL;

    t169 = ((x677^x678)|(x679<=x680));

    if (t169 != 21694299LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x682 = INT64_MAX;
	static uint16_t x683 = 924U;
	int8_t x684 = INT8_MIN;
	volatile int64_t t170 = INT64_MIN;

    t170 = ((x681^x682)|(x683<=x684));

    if (t170 != INT64_MIN) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x687 = 1841849186U;
	volatile uint16_t x688 = 2U;
	int32_t t171 = INT32_MAX;

    t171 = ((x685^x686)|(x687<=x688));

    if (t171 != INT32_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x689 = 86U;
	int8_t x691 = -7;
	static int32_t t172 = -222152;

    t172 = ((x689^x690)|(x691<=x692));

    if (t172 != -415669159) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x693 = -1;
	uint8_t x694 = UINT8_MAX;
	static int8_t x695 = INT8_MIN;
	volatile int64_t x696 = -159843178755042142LL;
	int32_t t173 = 13;

    t173 = ((x693^x694)|(x695<=x696));

    if (t173 != -256) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint8_t x697 = 4U;
	int64_t x700 = 7262522798LL;

    t174 = ((x697^x698)|(x699<=x700));

    if (t174 != -5) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = INT8_MIN;
	int16_t x703 = 1;
	static volatile int16_t x704 = INT16_MIN;
	volatile uint32_t t175 = 418U;

    t175 = ((x701^x702)|(x703<=x704));

    if (t175 != 3591234223U) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = INT8_MIN;
	int8_t x706 = -3;
	int16_t x707 = INT16_MIN;
	int32_t t176 = -18427;

    t176 = ((x705^x706)|(x707<=x708));

    if (t176 != 125) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = 6;
	static int64_t x712 = -1LL;
	int32_t t177 = 381;

    t177 = ((x709^x710)|(x711<=x712));

    if (t177 != 121) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = 1;
	uint16_t x715 = 887U;
	static volatile int64_t t178 = 565844LL;

    t178 = ((x713^x714)|(x715<=x716));

    if (t178 != -1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = -1;
	int8_t x718 = -3;
	uint8_t x719 = 122U;
	uint64_t x720 = 1937343515286LLU;
	int32_t t179 = 54;

    t179 = ((x717^x718)|(x719<=x720));

    if (t179 != 3) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x722 = -1;
	int16_t x723 = -254;
	static int8_t x724 = 38;
	int32_t t180 = -7418;

    t180 = ((x721^x722)|(x723<=x724));

    if (t180 != -1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x726 = -640259803LL;
	volatile int16_t x727 = INT16_MIN;
	uint8_t x728 = 6U;

    t181 = ((x725^x726)|(x727<=x728));

    if (t181 != -664379297LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x730 = INT64_MAX;
	int32_t x731 = INT32_MIN;
	int64_t x732 = INT64_MIN;
	volatile int64_t t182 = 363449674851517050LL;

    t182 = ((x729^x730)|(x731<=x732));

    if (t182 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x733 = 1U;
	uint64_t x734 = UINT64_MAX;
	static int64_t x735 = 41LL;
	uint16_t x736 = 9877U;
	volatile uint64_t t183 = UINT64_MAX;

    t183 = ((x733^x734)|(x735<=x736));

    if (t183 != UINT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint16_t x737 = 518U;
	uint8_t x738 = 5U;
	int64_t x739 = 11LL;
	uint32_t x740 = UINT32_MAX;
	static volatile int32_t t184 = 45103;

    t184 = ((x737^x738)|(x739<=x740));

    if (t184 != 515) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x741 = 1905582LLU;
	volatile int64_t x742 = -1LL;
	uint64_t x743 = UINT64_MAX;
	uint64_t x744 = UINT64_MAX;
	uint64_t t185 = 376985516LLU;

    t185 = ((x741^x742)|(x743<=x744));

    if (t185 != 18446744073707646033LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x745 = INT32_MAX;
	static volatile uint8_t x746 = 2U;
	int64_t x748 = -1LL;
	volatile int32_t t186 = -13165822;

    t186 = ((x745^x746)|(x747<=x748));

    if (t186 != 2147483645) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x750 = 7012U;
	int64_t x752 = 16240771791526950LL;

    t187 = ((x749^x750)|(x751<=x752));

    if (t187 != 4294960283U) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x753 = INT32_MIN;
	static uint16_t x754 = 1642U;
	uint16_t x755 = UINT16_MAX;
	uint32_t x756 = 118U;
	volatile int32_t t188 = 3681;

    t188 = ((x753^x754)|(x755<=x756));

    if (t188 != -2147482006) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = INT8_MIN;
	int64_t x758 = -1LL;
	uint32_t x760 = 31085U;
	int64_t t189 = 410629LL;

    t189 = ((x757^x758)|(x759<=x760));

    if (t189 != 127LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x761 = -39783;
	int8_t x762 = INT8_MAX;
	int8_t x763 = -1;
	volatile int32_t t190 = 5391156;

    t190 = ((x761^x762)|(x763<=x764));

    if (t190 != -39706) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = -1;
	int32_t x766 = INT32_MAX;
	int8_t x767 = 29;
	uint32_t x768 = 36908852U;
	int32_t t191 = -12730017;

    t191 = ((x765^x766)|(x767<=x768));

    if (t191 != -2147483647) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x769 = 3564LLU;
	static volatile int16_t x770 = INT16_MAX;
	uint64_t x771 = 232988009473LLU;

    t192 = ((x769^x770)|(x771<=x772));

    if (t192 != 29203LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint32_t x773 = 87777282U;
	volatile int8_t x774 = INT8_MIN;
	volatile uint64_t x776 = 5656956168624268LLU;
	volatile uint32_t t193 = 41110U;

    t193 = ((x773^x774)|(x775<=x776));

    if (t193 != 4207189891U) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x777 = -103;
	uint32_t x778 = 2552777U;
	volatile uint16_t x779 = 0U;
	uint32_t x780 = 127023521U;
	volatile uint32_t t194 = 471850022U;

    t194 = ((x777^x778)|(x779<=x780));

    if (t194 != 4292414545U) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x782 = INT64_MIN;
	int64_t x783 = 90390296940401980LL;
	uint32_t x784 = UINT32_MAX;
	int64_t t195 = -95144559160LL;

    t195 = ((x781^x782)|(x783<=x784));

    if (t195 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x785 = INT8_MIN;
	uint32_t x786 = 4U;
	int8_t x787 = -1;
	uint32_t x788 = 7126576U;

    t196 = ((x785^x786)|(x787<=x788));

    if (t196 != 4294967172U) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = 5;
	volatile int8_t x790 = 12;
	volatile int64_t x791 = INT64_MIN;
	static int8_t x792 = INT8_MIN;
	volatile int32_t t197 = 1369278;

    t197 = ((x789^x790)|(x791<=x792));

    if (t197 != 9) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = INT16_MIN;
	int16_t x794 = -1;
	int32_t x795 = -1;
	static int32_t x796 = INT32_MIN;
	int32_t t198 = -227;

    t198 = ((x793^x794)|(x795<=x796));

    if (t198 != 32767) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x797 = INT64_MAX;
	int16_t x799 = INT16_MIN;

    t199 = ((x797^x798)|(x799<=x800));

    if (t199 != 9223372034707292161LL) { NG(); } else { ; }
	
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

