
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

int32_t x21 = INT32_MAX;
int8_t x24 = INT8_MIN;
static int8_t x25 = INT8_MIN;
int8_t x33 = INT8_MIN;
int8_t x36 = 31;
uint32_t x37 = 127034563U;
volatile uint32_t t8 = 19455420U;
volatile uint64_t x41 = 27128181LLU;
volatile int8_t x43 = 2;
volatile int16_t x50 = INT16_MAX;
int64_t x52 = INT64_MAX;
volatile uint8_t x55 = 116U;
uint32_t x58 = UINT32_MAX;
static volatile uint32_t t13 = 40510U;
int16_t x61 = 90;
int64_t x62 = 60LL;
volatile uint64_t x64 = UINT64_MAX;
int8_t x65 = INT8_MIN;
volatile int64_t t16 = -29868585003933LL;
int16_t x77 = -155;
volatile int32_t x80 = INT32_MIN;
int32_t t17 = 345976;
uint8_t x97 = UINT8_MAX;
int64_t x101 = 8451951242097LL;
uint32_t x102 = UINT32_MAX;
volatile int32_t x114 = INT32_MIN;
static uint32_t x118 = UINT32_MAX;
volatile int16_t x119 = -15515;
uint32_t x121 = 118817378U;
uint64_t x122 = UINT64_MAX;
int32_t x125 = INT32_MAX;
int8_t x129 = INT8_MAX;
volatile uint64_t t28 = 4649LLU;
uint16_t x146 = 304U;
static uint64_t x152 = 767670045583LLU;
int64_t x157 = INT64_MAX;
int32_t x160 = INT32_MIN;
int64_t t31 = -9737383LL;
int64_t x161 = -930729032810035022LL;
int16_t x163 = -1;
volatile uint8_t x169 = 3U;
int16_t x170 = INT16_MIN;
volatile int32_t t35 = 15;
int64_t x182 = -234600860683598LL;
int32_t x199 = INT32_MIN;
int16_t x206 = 5;
static volatile uint32_t t40 = 0U;
volatile uint16_t x214 = UINT16_MAX;
int16_t x217 = -6613;
static int32_t x219 = -6390713;
int8_t x228 = INT8_MIN;
static int64_t x238 = 1332895338890106LL;
volatile int8_t x242 = INT8_MIN;
uint16_t x250 = 1U;
uint8_t x261 = 0U;
volatile int16_t x264 = 76;
uint64_t t52 = 173LLU;
int8_t x266 = INT8_MAX;
uint8_t x267 = 3U;
int32_t x268 = 1;
volatile uint32_t t54 = 1048693091U;
uint64_t x274 = UINT64_MAX;
volatile uint32_t x280 = 1972656399U;
volatile int64_t t56 = 2430050LL;
uint8_t x286 = UINT8_MAX;
int8_t x295 = -1;
int16_t x296 = -3;
volatile uint64_t x301 = 123651858044998LLU;
static int32_t x302 = 2882262;
uint64_t x309 = UINT64_MAX;
volatile uint64_t t63 = 30479684LLU;
int16_t x315 = -3778;
uint64_t t64 = 740622766157146147LLU;
int8_t x328 = -15;
volatile uint8_t x332 = UINT8_MAX;
int16_t x342 = 380;
volatile int32_t t69 = -8452500;
static int64_t x348 = INT64_MIN;
int64_t x352 = -1LL;
static int64_t x354 = 672LL;
static int64_t t72 = 107655LL;
int32_t x366 = -736232817;
int16_t x367 = -1;
static int16_t x373 = INT16_MIN;
uint32_t x374 = 1U;
static volatile int32_t t77 = 106002;
static uint64_t x381 = UINT64_MAX;
int8_t x382 = INT8_MIN;
int16_t x389 = INT16_MIN;
static int8_t x395 = 47;
uint16_t x399 = 1886U;
int32_t x405 = 1060715079;
static uint8_t x414 = UINT8_MAX;
int32_t x417 = 56123337;
uint32_t x421 = UINT32_MAX;
volatile int32_t x426 = INT32_MIN;
volatile uint8_t x428 = 1U;
uint32_t x429 = 93342159U;
uint32_t t88 = 170479U;
int16_t x435 = -461;
int64_t t90 = -217535175636LL;
volatile uint32_t x451 = 1085U;
int8_t x461 = -1;
uint32_t x468 = 73113U;
uint64_t x474 = 24087387697874LLU;
int64_t x486 = -1LL;
int8_t x488 = 30;
uint32_t x490 = 19971051U;
int64_t x496 = -495676239LL;
uint64_t x502 = 3680LLU;
volatile int64_t t105 = -51LL;
uint32_t x526 = UINT32_MAX;
int8_t x527 = INT8_MIN;
int8_t x529 = -1;
static int16_t x540 = -1;
volatile int32_t t108 = -61;
static volatile int8_t x542 = INT8_MIN;
static int8_t x547 = INT8_MIN;
uint64_t x548 = 2440LLU;
uint32_t x553 = 11733U;
uint64_t x554 = UINT64_MAX;
volatile uint64_t t112 = 70139326184071LLU;
static uint16_t x562 = 1062U;
static uint16_t x563 = 14U;
int32_t t114 = 0;
int16_t x567 = INT16_MAX;
int16_t x572 = 20;
uint64_t x576 = 896154LLU;
int16_t x586 = INT16_MIN;
volatile int32_t x595 = INT32_MIN;
uint8_t x596 = UINT8_MAX;
volatile uint64_t t121 = 139032780976716LLU;
volatile uint64_t x604 = 5971800LLU;
volatile int64_t x617 = 1LL;
uint64_t x639 = UINT64_MAX;
uint8_t x641 = 42U;
int32_t t129 = -7411;
static int32_t x654 = -1;
volatile int16_t x657 = -470;
int8_t x665 = -32;
static int16_t x668 = 1;
static int8_t x672 = 0;
int64_t t135 = -15LL;
int32_t x685 = -1;
volatile int8_t x688 = -3;
int8_t x691 = INT8_MAX;
int32_t t139 = -1741714;
uint32_t t140 = 1893U;
uint64_t x718 = UINT64_MAX;
uint8_t x719 = UINT8_MAX;
uint8_t x726 = 55U;
int32_t t142 = -5871838;
uint64_t t144 = 1141096813720772678LLU;
static int16_t x757 = INT16_MIN;
volatile uint32_t x771 = 4154671U;
static uint32_t x773 = 335728U;
volatile int16_t x787 = INT16_MIN;
volatile int64_t x794 = INT64_MIN;
int32_t x798 = -88;
int64_t t155 = 1206594110743LL;
uint64_t x805 = UINT64_MAX;
static uint16_t x806 = 10U;
uint16_t x807 = 11915U;
volatile uint64_t t158 = 799085LLU;
int16_t x831 = INT16_MAX;
volatile int32_t t163 = 11;
uint32_t x837 = 1U;
volatile uint32_t x844 = 4U;
int32_t x845 = -99;
int32_t x846 = INT32_MIN;
static int64_t x848 = INT64_MIN;
volatile uint64_t t168 = 3965054157540715724LLU;
uint64_t x870 = 52085523416641LLU;
int8_t x871 = INT8_MAX;
volatile uint8_t x872 = UINT8_MAX;
int32_t x875 = INT32_MAX;
volatile int16_t x876 = -1;
volatile int8_t x880 = INT8_MIN;
static int32_t t173 = -291266;
int64_t x892 = INT64_MAX;
int64_t t174 = 179286299256LL;
int16_t x901 = -1;
static uint32_t x903 = 66384U;
int32_t t177 = -52;
int32_t x922 = INT32_MIN;
int32_t x923 = -93079598;
volatile int8_t x936 = INT8_MIN;
static uint16_t x948 = 39U;
uint32_t x959 = 31564U;
uint32_t x962 = 658242358U;
int64_t x963 = INT64_MIN;
uint8_t x964 = UINT8_MAX;
uint32_t t189 = 309424U;
int32_t x979 = 26710883;
int8_t x990 = 44;
volatile uint32_t x991 = 6U;
static int64_t x1004 = INT64_MIN;
int16_t x1010 = -28;
static int16_t x1018 = INT16_MIN;


void f0(void) {
    	volatile uint32_t x1 = 799098U;
	static int8_t x2 = -1;
	int64_t x3 = 5812LL;
	static volatile int16_t x4 = -1;
	volatile uint32_t t0 = 4128170U;

    t0 = ((x1/x2)<<(x3<=x4));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x9 = INT32_MIN;
	int16_t x10 = -748;
	uint8_t x11 = UINT8_MAX;
	int8_t x12 = INT8_MIN;
	static int32_t t1 = 63686756;

    t1 = ((x9/x10)<<(x11<=x12));

    if (t1 != 2870967) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x13 = INT8_MIN;
	static int32_t x14 = 724802;
	uint64_t x15 = 1LLU;
	static volatile int64_t x16 = -1LL;
	volatile int32_t t2 = 531160724;

    t2 = ((x13/x14)<<(x15<=x16));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = -1;
	uint16_t x18 = UINT16_MAX;
	volatile int16_t x19 = INT16_MIN;
	int64_t x20 = INT64_MIN;
	int32_t t3 = 44;

    t3 = ((x17/x18)<<(x19<=x20));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x22 = INT64_MAX;
	int32_t x23 = INT32_MIN;
	volatile int64_t t4 = -8724853863LL;

    t4 = ((x21/x22)<<(x23<=x24));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x26 = UINT16_MAX;
	int8_t x27 = INT8_MIN;
	int32_t x28 = 57824482;
	static int32_t t5 = 28;

    t5 = ((x25/x26)<<(x27<=x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x29 = INT32_MIN;
	static int64_t x30 = INT64_MIN;
	uint16_t x31 = UINT16_MAX;
	volatile uint16_t x32 = 3U;
	int64_t t6 = 851LL;

    t6 = ((x29/x30)<<(x31<=x32));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x34 = -1854080568LL;
	int64_t x35 = INT64_MAX;
	volatile int64_t t7 = -1LL;

    t7 = ((x33/x34)<<(x35<=x36));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x38 = INT16_MIN;
	volatile int64_t x39 = -1LL;
	static uint32_t x40 = 548313710U;

    t8 = ((x37/x38)<<(x39<=x40));

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x42 = 3U;
	volatile int16_t x44 = INT16_MAX;
	volatile uint64_t t9 = 0LLU;

    t9 = ((x41/x42)<<(x43<=x44));

    if (t9 != 18085454LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x45 = 214LLU;
	int16_t x46 = INT16_MIN;
	int64_t x47 = INT64_MIN;
	volatile int32_t x48 = INT32_MIN;
	volatile uint64_t t10 = 824LLU;

    t10 = ((x45/x46)<<(x47<=x48));

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x49 = INT32_MAX;
	int32_t x51 = INT32_MAX;
	int32_t t11 = -242;

    t11 = ((x49/x50)<<(x51<=x52));

    if (t11 != 131076) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x53 = INT8_MIN;
	int8_t x54 = -3;
	uint8_t x56 = 23U;
	static volatile int32_t t12 = -3;

    t12 = ((x53/x54)<<(x55<=x56));

    if (t12 != 42) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x57 = INT32_MIN;
	static int8_t x59 = -22;
	int16_t x60 = -266;

    t13 = ((x57/x58)<<(x59<=x60));

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x63 = INT16_MAX;
	int64_t t14 = -180467515951084258LL;

    t14 = ((x61/x62)<<(x63<=x64));

    if (t14 != 2LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x66 = INT32_MIN;
	uint8_t x67 = UINT8_MAX;
	int64_t x68 = -4240806092586423LL;
	int32_t t15 = 1;

    t15 = ((x65/x66)<<(x67<=x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x73 = -1;
	int64_t x74 = -1LL;
	static volatile uint32_t x75 = 9689U;
	static int64_t x76 = -1LL;

    t16 = ((x73/x74)<<(x75<=x76));

    if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x78 = UINT8_MAX;
	int32_t x79 = INT32_MIN;

    t17 = ((x77/x78)<<(x79<=x80));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x81 = INT16_MIN;
	int8_t x82 = -15;
	int16_t x83 = -4;
	int64_t x84 = INT64_MAX;
	int32_t t18 = 2805623;

    t18 = ((x81/x82)<<(x83<=x84));

    if (t18 != 4368) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x89 = 191372433057387795LL;
	uint8_t x90 = 34U;
	volatile int32_t x91 = INT32_MIN;
	uint64_t x92 = UINT64_MAX;
	int64_t t19 = -54LL;

    t19 = ((x89/x90)<<(x91<=x92));

    if (t19 != 11257201944552222LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x98 = 1155;
	uint64_t x99 = 54401822146LLU;
	static uint8_t x100 = 19U;
	int32_t t20 = -711;

    t20 = ((x97/x98)<<(x99<=x100));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x103 = INT16_MIN;
	volatile int16_t x104 = INT16_MAX;
	int64_t t21 = -1076LL;

    t21 = ((x101/x102)<<(x103<=x104));

    if (t21 != 3934LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x109 = 0;
	uint64_t x110 = UINT64_MAX;
	int16_t x111 = INT16_MIN;
	int16_t x112 = INT16_MIN;
	uint64_t t22 = 68487717713993LLU;

    t22 = ((x109/x110)<<(x111<=x112));

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x113 = INT32_MIN;
	int32_t x115 = INT32_MIN;
	int64_t x116 = INT64_MIN;
	static volatile int32_t t23 = 27894;

    t23 = ((x113/x114)<<(x115<=x116));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x117 = UINT32_MAX;
	uint32_t x120 = 5981675U;
	static uint32_t t24 = 107308186U;

    t24 = ((x117/x118)<<(x119<=x120));

    if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x123 = 2567U;
	int32_t x124 = INT32_MAX;
	volatile uint64_t t25 = 1986396LLU;

    t25 = ((x121/x122)<<(x123<=x124));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x126 = 167U;
	int8_t x127 = 1;
	int8_t x128 = INT8_MIN;
	volatile int32_t t26 = 488755;

    t26 = ((x125/x126)<<(x127<=x128));

    if (t26 != 12859183) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x130 = 728;
	uint64_t x131 = 106455000LLU;
	volatile int32_t x132 = -1;
	volatile int32_t t27 = 544655423;

    t27 = ((x129/x130)<<(x131<=x132));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x133 = 4434U;
	static uint64_t x134 = UINT64_MAX;
	static int16_t x135 = -1;
	int8_t x136 = INT8_MIN;

    t28 = ((x133/x134)<<(x135<=x136));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x145 = UINT8_MAX;
	uint8_t x147 = 0U;
	int16_t x148 = -1;
	int32_t t29 = 6;

    t29 = ((x145/x146)<<(x147<=x148));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x149 = -70;
	uint16_t x150 = 11495U;
	uint8_t x151 = UINT8_MAX;
	int32_t t30 = 91884374;

    t30 = ((x149/x150)<<(x151<=x152));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x158 = INT16_MAX;
	int32_t x159 = 0;

    t31 = ((x157/x158)<<(x159<=x160));

    if (t31 != 281483566907400LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x162 = -736154301;
	uint64_t x164 = 26979914LLU;
	int64_t t32 = -890799078806LL;

    t32 = ((x161/x162)<<(x163<=x164));

    if (t32 != 1264312429LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x171 = -1;
	uint32_t x172 = 4013197U;
	volatile int32_t t33 = 1;

    t33 = ((x169/x170)<<(x171<=x172));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x173 = 493281188;
	volatile uint8_t x174 = 1U;
	int64_t x175 = -1LL;
	uint8_t x176 = 7U;
	int32_t t34 = -3;

    t34 = ((x173/x174)<<(x175<=x176));

    if (t34 != 986562376) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x177 = -1;
	static int16_t x178 = 351;
	int8_t x179 = -16;
	static volatile int16_t x180 = INT16_MIN;

    t35 = ((x177/x178)<<(x179<=x180));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x181 = -1;
	uint64_t x183 = 463217LLU;
	uint16_t x184 = 9U;
	volatile int64_t t36 = -72676176448LL;

    t36 = ((x181/x182)<<(x183<=x184));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x193 = 0LLU;
	static uint64_t x194 = UINT64_MAX;
	uint8_t x195 = UINT8_MAX;
	volatile int8_t x196 = 8;
	uint64_t t37 = 7303LLU;

    t37 = ((x193/x194)<<(x195<=x196));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint64_t x197 = UINT64_MAX;
	int64_t x198 = INT64_MIN;
	uint8_t x200 = 1U;
	uint64_t t38 = 74107048725256225LLU;

    t38 = ((x197/x198)<<(x199<=x200));

    if (t38 != 2LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x201 = INT32_MAX;
	uint64_t x202 = 70LLU;
	int8_t x203 = INT8_MAX;
	uint32_t x204 = 4003307U;
	static uint64_t t39 = 177413952LLU;

    t39 = ((x201/x202)<<(x203<=x204));

    if (t39 != 61356674LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x205 = UINT32_MAX;
	int8_t x207 = 0;
	static uint64_t x208 = 55840624400LLU;

    t40 = ((x205/x206)<<(x207<=x208));

    if (t40 != 1717986918U) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x209 = -1LL;
	uint32_t x210 = UINT32_MAX;
	volatile int16_t x211 = INT16_MAX;
	static int32_t x212 = INT32_MAX;
	int64_t t41 = -20272456018LL;

    t41 = ((x209/x210)<<(x211<=x212));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x213 = INT8_MAX;
	int64_t x215 = -1LL;
	int8_t x216 = INT8_MAX;
	int32_t t42 = -67896;

    t42 = ((x213/x214)<<(x215<=x216));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x218 = INT32_MAX;
	int16_t x220 = -203;
	volatile int32_t t43 = 1853187;

    t43 = ((x217/x218)<<(x219<=x220));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x225 = INT32_MIN;
	static uint64_t x226 = UINT64_MAX;
	volatile int32_t x227 = -1;
	uint64_t t44 = 1957062271LLU;

    t44 = ((x225/x226)<<(x227<=x228));

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint8_t x229 = 0U;
	volatile int8_t x230 = INT8_MIN;
	int32_t x231 = INT32_MIN;
	int16_t x232 = -1;
	volatile int32_t t45 = 317197907;

    t45 = ((x229/x230)<<(x231<=x232));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int8_t x233 = INT8_MIN;
	volatile int16_t x234 = INT16_MAX;
	volatile int8_t x235 = INT8_MAX;
	static int8_t x236 = INT8_MAX;
	int32_t t46 = 51;

    t46 = ((x233/x234)<<(x235<=x236));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x237 = UINT16_MAX;
	int8_t x239 = INT8_MAX;
	int8_t x240 = -16;
	int64_t t47 = 59LL;

    t47 = ((x237/x238)<<(x239<=x240));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int16_t x241 = -500;
	static volatile int64_t x243 = INT64_MAX;
	int32_t x244 = INT32_MIN;
	int32_t t48 = 31751;

    t48 = ((x241/x242)<<(x243<=x244));

    if (t48 != 3) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x245 = 2212;
	static uint8_t x246 = UINT8_MAX;
	static uint16_t x247 = 1U;
	int64_t x248 = -2336499LL;
	volatile int32_t t49 = -29927859;

    t49 = ((x245/x246)<<(x247<=x248));

    if (t49 != 8) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x249 = 173275U;
	int16_t x251 = INT16_MIN;
	static int64_t x252 = -1LL;
	volatile uint32_t t50 = 163367U;

    t50 = ((x249/x250)<<(x251<=x252));

    if (t50 != 346550U) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint8_t x257 = UINT8_MAX;
	uint64_t x258 = 15031561LLU;
	uint32_t x259 = UINT32_MAX;
	int64_t x260 = INT64_MAX;
	volatile uint64_t t51 = 59589LLU;

    t51 = ((x257/x258)<<(x259<=x260));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x262 = 1716969500174LLU;
	volatile uint8_t x263 = 8U;

    t52 = ((x261/x262)<<(x263<=x264));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x265 = 6;
	int32_t t53 = -9834;

    t53 = ((x265/x266)<<(x267<=x268));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x269 = 1;
	uint32_t x270 = UINT32_MAX;
	volatile int32_t x271 = INT32_MIN;
	volatile int64_t x272 = INT64_MIN;

    t54 = ((x269/x270)<<(x271<=x272));

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x273 = 772153LLU;
	int8_t x275 = INT8_MIN;
	static int64_t x276 = INT64_MAX;
	uint64_t t55 = 921306954466LLU;

    t55 = ((x273/x274)<<(x275<=x276));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint16_t x277 = 1917U;
	volatile int64_t x278 = -22791455401550LL;
	static volatile int8_t x279 = INT8_MIN;

    t56 = ((x277/x278)<<(x279<=x280));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x281 = UINT32_MAX;
	int64_t x282 = INT64_MIN;
	int8_t x283 = INT8_MAX;
	uint16_t x284 = 2038U;
	volatile int64_t t57 = 23650LL;

    t57 = ((x281/x282)<<(x283<=x284));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x285 = 4069399367472594LL;
	int16_t x287 = INT16_MIN;
	volatile uint64_t x288 = UINT64_MAX;
	int64_t t58 = -508139444652758LL;

    t58 = ((x285/x286)<<(x287<=x288));

    if (t58 != 31916857784098LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x289 = INT32_MIN;
	int64_t x290 = INT64_MIN;
	volatile uint16_t x291 = 1144U;
	uint64_t x292 = UINT64_MAX;
	int64_t t59 = 7223182313063LL;

    t59 = ((x289/x290)<<(x291<=x292));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x293 = INT64_MIN;
	int8_t x294 = -25;
	volatile int64_t t60 = 0LL;

    t60 = ((x293/x294)<<(x295<=x296));

    if (t60 != 368934881474191032LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x297 = INT8_MIN;
	static int8_t x298 = INT8_MIN;
	int32_t x299 = INT32_MAX;
	int8_t x300 = INT8_MIN;
	volatile int32_t t61 = 126928;

    t61 = ((x297/x298)<<(x299<=x300));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x303 = UINT32_MAX;
	static volatile uint32_t x304 = 2597U;
	uint64_t t62 = 1003850478433228673LLU;

    t62 = ((x301/x302)<<(x303<=x304));

    if (t62 != 42900977LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int32_t x310 = INT32_MIN;
	int64_t x311 = INT64_MIN;
	static int16_t x312 = INT16_MIN;

    t63 = ((x309/x310)<<(x311<=x312));

    if (t63 != 2LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x313 = UINT64_MAX;
	uint32_t x314 = UINT32_MAX;
	int8_t x316 = -1;

    t64 = ((x313/x314)<<(x315<=x316));

    if (t64 != 8589934594LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x321 = INT64_MIN;
	static int8_t x322 = INT8_MIN;
	int8_t x323 = INT8_MIN;
	uint16_t x324 = 0U;
	int64_t t65 = -14297LL;

    t65 = ((x321/x322)<<(x323<=x324));

    if (t65 != 144115188075855872LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x325 = -1;
	int16_t x326 = -1;
	static int8_t x327 = INT8_MAX;
	int32_t t66 = 947;

    t66 = ((x325/x326)<<(x327<=x328));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x329 = 41LL;
	volatile int32_t x330 = INT32_MAX;
	int32_t x331 = -509781;
	volatile int64_t t67 = 22451189297459LL;

    t67 = ((x329/x330)<<(x331<=x332));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x333 = 7903;
	int64_t x334 = 14LL;
	int64_t x335 = INT64_MIN;
	int32_t x336 = -6;
	volatile int64_t t68 = -5357LL;

    t68 = ((x333/x334)<<(x335<=x336));

    if (t68 != 1128LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x341 = INT32_MAX;
	uint8_t x343 = 22U;
	static uint16_t x344 = 73U;

    t69 = ((x341/x342)<<(x343<=x344));

    if (t69 != 11302544) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint32_t x345 = UINT32_MAX;
	int16_t x346 = -1;
	uint64_t x347 = 429071832257856LLU;
	uint32_t t70 = 383405561U;

    t70 = ((x345/x346)<<(x347<=x348));

    if (t70 != 2U) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x349 = -2;
	uint16_t x350 = 41U;
	int64_t x351 = -1LL;
	int32_t t71 = -10715104;

    t71 = ((x349/x350)<<(x351<=x352));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x353 = INT8_MIN;
	int8_t x355 = INT8_MAX;
	uint64_t x356 = UINT64_MAX;

    t72 = ((x353/x354)<<(x355<=x356));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x361 = 2;
	int32_t x362 = 7972865;
	static int8_t x363 = INT8_MIN;
	volatile uint8_t x364 = UINT8_MAX;
	int32_t t73 = 65353812;

    t73 = ((x361/x362)<<(x363<=x364));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x365 = INT64_MIN;
	int16_t x368 = INT16_MIN;
	volatile int64_t t74 = -102044897LL;

    t74 = ((x365/x366)<<(x367<=x368));

    if (t74 != 12527792600LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x369 = -1;
	uint32_t x370 = UINT32_MAX;
	int32_t x371 = -1;
	uint32_t x372 = 1591614U;
	uint32_t t75 = 4816774U;

    t75 = ((x369/x370)<<(x371<=x372));

    if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x375 = 19122U;
	int32_t x376 = INT32_MIN;
	volatile uint32_t t76 = 149999U;

    t76 = ((x373/x374)<<(x375<=x376));

    if (t76 != 4294934528U) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x377 = 6;
	uint8_t x378 = 12U;
	int16_t x379 = -1;
	int64_t x380 = INT64_MIN;

    t77 = ((x377/x378)<<(x379<=x380));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x383 = -1;
	static uint32_t x384 = 102U;
	volatile uint64_t t78 = 544344527544435437LLU;

    t78 = ((x381/x382)<<(x383<=x384));

    if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x385 = UINT64_MAX;
	int16_t x386 = INT16_MIN;
	volatile uint8_t x387 = 11U;
	int32_t x388 = -1;
	volatile uint64_t t79 = 107LLU;

    t79 = ((x385/x386)<<(x387<=x388));

    if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x390 = INT32_MIN;
	static int32_t x391 = INT32_MAX;
	int32_t x392 = INT32_MAX;
	int32_t t80 = -59934;

    t80 = ((x389/x390)<<(x391<=x392));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x393 = -1;
	static int64_t x394 = -1LL;
	int16_t x396 = -42;
	int64_t t81 = -5566599959LL;

    t81 = ((x393/x394)<<(x395<=x396));

    if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x397 = INT16_MIN;
	static int16_t x398 = INT16_MIN;
	uint8_t x400 = UINT8_MAX;
	int32_t t82 = 301803;

    t82 = ((x397/x398)<<(x399<=x400));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x406 = 61;
	uint8_t x407 = UINT8_MAX;
	volatile int64_t x408 = -1150LL;
	volatile int32_t t83 = -285486542;

    t83 = ((x405/x406)<<(x407<=x408));

    if (t83 != 17388771) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x413 = 0U;
	uint8_t x415 = UINT8_MAX;
	int32_t x416 = INT32_MAX;
	volatile int32_t t84 = 986281;

    t84 = ((x413/x414)<<(x415<=x416));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x418 = UINT64_MAX;
	uint8_t x419 = 23U;
	int16_t x420 = INT16_MAX;
	uint64_t t85 = 37145429475183141LLU;

    t85 = ((x417/x418)<<(x419<=x420));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x422 = UINT32_MAX;
	static volatile int32_t x423 = 183;
	uint32_t x424 = 27U;
	uint32_t t86 = 9164U;

    t86 = ((x421/x422)<<(x423<=x424));

    if (t86 != 1U) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x425 = INT32_MIN;
	volatile uint16_t x427 = 3U;
	int32_t t87 = 215;

    t87 = ((x425/x426)<<(x427<=x428));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x430 = 5;
	uint16_t x431 = UINT16_MAX;
	int32_t x432 = INT32_MIN;

    t88 = ((x429/x430)<<(x431<=x432));

    if (t88 != 18668431U) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int8_t x433 = INT8_MIN;
	int8_t x434 = INT8_MIN;
	uint16_t x436 = 24U;
	static volatile int32_t t89 = 10916722;

    t89 = ((x433/x434)<<(x435<=x436));

    if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint8_t x437 = 5U;
	static int64_t x438 = -62754275407LL;
	volatile int32_t x439 = -1556488;
	int16_t x440 = INT16_MIN;

    t90 = ((x437/x438)<<(x439<=x440));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x445 = INT16_MAX;
	uint16_t x446 = UINT16_MAX;
	volatile int64_t x447 = 56639579LL;
	uint64_t x448 = 25125LLU;
	int32_t t91 = 100157;

    t91 = ((x445/x446)<<(x447<=x448));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x449 = 1337;
	static uint64_t x450 = 6033429793465598894LLU;
	static int32_t x452 = 306391539;
	uint64_t t92 = 514289467969358LLU;

    t92 = ((x449/x450)<<(x451<=x452));

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x453 = -1;
	int16_t x454 = 273;
	int16_t x455 = 0;
	uint8_t x456 = 5U;
	static volatile int32_t t93 = 1972;

    t93 = ((x453/x454)<<(x455<=x456));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x462 = INT64_MIN;
	static volatile int64_t x463 = -538309LL;
	int64_t x464 = 30856072820LL;
	int64_t t94 = 4914049LL;

    t94 = ((x461/x462)<<(x463<=x464));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x465 = -1;
	static volatile uint64_t x466 = UINT64_MAX;
	int32_t x467 = INT32_MIN;
	volatile uint64_t t95 = 1LLU;

    t95 = ((x465/x466)<<(x467<=x468));

    if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x473 = INT8_MIN;
	static int16_t x475 = INT16_MIN;
	int16_t x476 = INT16_MAX;
	volatile uint64_t t96 = 313312526083344LLU;

    t96 = ((x473/x474)<<(x475<=x476));

    if (t96 != 1531650LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x481 = INT32_MIN;
	static int32_t x482 = -1430080;
	volatile int16_t x483 = -1;
	volatile int32_t x484 = -1;
	int32_t t97 = -6769625;

    t97 = ((x481/x482)<<(x483<=x484));

    if (t97 != 3002) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x485 = INT32_MIN;
	static uint32_t x487 = 42240U;
	static volatile int64_t t98 = -174LL;

    t98 = ((x485/x486)<<(x487<=x488));

    if (t98 != 2147483648LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x489 = -402;
	static uint8_t x491 = 13U;
	uint64_t x492 = 62835300126394LLU;
	uint32_t t99 = 1039266U;

    t99 = ((x489/x490)<<(x491<=x492));

    if (t99 != 430U) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint8_t x493 = 7U;
	volatile int8_t x494 = INT8_MAX;
	volatile int8_t x495 = -1;
	int32_t t100 = -646406208;

    t100 = ((x493/x494)<<(x495<=x496));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x497 = 1;
	int8_t x498 = INT8_MIN;
	static int64_t x499 = INT64_MIN;
	int16_t x500 = INT16_MIN;
	int32_t t101 = 196;

    t101 = ((x497/x498)<<(x499<=x500));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x501 = INT16_MIN;
	int16_t x503 = INT16_MIN;
	static uint16_t x504 = UINT16_MAX;
	static volatile uint64_t t102 = 401LLU;

    t102 = ((x501/x502)<<(x503<=x504));

    if (t102 != 10025404387885608LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x509 = 1781429;
	static uint64_t x510 = 135660LLU;
	static volatile uint8_t x511 = 47U;
	uint64_t x512 = 54LLU;
	volatile uint64_t t103 = 2224575557051689LLU;

    t103 = ((x509/x510)<<(x511<=x512));

    if (t103 != 26LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x517 = INT32_MAX;
	uint32_t x518 = UINT32_MAX;
	static int16_t x519 = -2;
	uint64_t x520 = 9211084513287512622LLU;
	volatile uint32_t t104 = 508U;

    t104 = ((x517/x518)<<(x519<=x520));

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x521 = INT8_MIN;
	int64_t x522 = INT64_MIN;
	int8_t x523 = INT8_MIN;
	int8_t x524 = INT8_MAX;

    t105 = ((x521/x522)<<(x523<=x524));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x525 = 0U;
	static volatile uint64_t x528 = 974LLU;
	uint32_t t106 = 1673634U;

    t106 = ((x525/x526)<<(x527<=x528));

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint8_t x530 = UINT8_MAX;
	volatile int64_t x531 = INT64_MAX;
	static int8_t x532 = INT8_MAX;
	int32_t t107 = -1855;

    t107 = ((x529/x530)<<(x531<=x532));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x537 = 1U;
	uint16_t x538 = UINT16_MAX;
	int8_t x539 = -10;

    t108 = ((x537/x538)<<(x539<=x540));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x541 = 14463101169LLU;
	volatile int8_t x543 = -20;
	int64_t x544 = INT64_MIN;
	volatile uint64_t t109 = 906207663140838471LLU;

    t109 = ((x541/x542)<<(x543<=x544));

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int8_t x545 = 0;
	int8_t x546 = -1;
	volatile int32_t t110 = 1809597;

    t110 = ((x545/x546)<<(x547<=x548));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x549 = -1;
	int16_t x550 = INT16_MIN;
	uint64_t x551 = 4LLU;
	uint16_t x552 = 6U;
	static int32_t t111 = -1;

    t111 = ((x549/x550)<<(x551<=x552));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x555 = -1;
	volatile uint32_t x556 = UINT32_MAX;

    t112 = ((x553/x554)<<(x555<=x556));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x557 = -3;
	static volatile int16_t x558 = -1;
	int16_t x559 = -57;
	static int32_t x560 = 31961731;
	int32_t t113 = -1;

    t113 = ((x557/x558)<<(x559<=x560));

    if (t113 != 6) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x561 = 73U;
	volatile int32_t x564 = -1;

    t114 = ((x561/x562)<<(x563<=x564));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x565 = -80345212903LL;
	int32_t x566 = -1;
	static int8_t x568 = -1;
	volatile int64_t t115 = 104LL;

    t115 = ((x565/x566)<<(x567<=x568));

    if (t115 != 80345212903LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x569 = -1;
	static int64_t x570 = INT64_MIN;
	uint32_t x571 = 84U;
	int64_t t116 = -35235010047LL;

    t116 = ((x569/x570)<<(x571<=x572));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x573 = UINT64_MAX;
	int32_t x574 = INT32_MIN;
	volatile int32_t x575 = INT32_MIN;
	uint64_t t117 = 28154857LLU;

    t117 = ((x573/x574)<<(x575<=x576));

    if (t117 != 1LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x581 = -1LL;
	volatile int32_t x582 = -1;
	int8_t x583 = -15;
	int16_t x584 = INT16_MIN;
	int64_t t118 = -3733516011LL;

    t118 = ((x581/x582)<<(x583<=x584));

    if (t118 != 1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x585 = -1;
	volatile uint64_t x587 = 3895220438284497LLU;
	uint16_t x588 = UINT16_MAX;
	int32_t t119 = 214050;

    t119 = ((x585/x586)<<(x587<=x588));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x589 = INT8_MIN;
	int64_t x590 = INT64_MIN;
	uint16_t x591 = 817U;
	uint16_t x592 = UINT16_MAX;
	int64_t t120 = 0LL;

    t120 = ((x589/x590)<<(x591<=x592));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x593 = 6046802430LLU;
	int32_t x594 = 148605185;

    t121 = ((x593/x594)<<(x595<=x596));

    if (t121 != 80LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x597 = INT8_MIN;
	int8_t x598 = -1;
	static volatile int32_t x599 = INT32_MAX;
	volatile uint16_t x600 = 1U;
	int32_t t122 = 40990002;

    t122 = ((x597/x598)<<(x599<=x600));

    if (t122 != 128) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x601 = -28480;
	int64_t x602 = -1LL;
	volatile int16_t x603 = INT16_MAX;
	int64_t t123 = -258106483643554647LL;

    t123 = ((x601/x602)<<(x603<=x604));

    if (t123 != 56960LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x618 = INT64_MAX;
	int32_t x619 = -1;
	int32_t x620 = INT32_MIN;
	volatile int64_t t124 = -60846267239LL;

    t124 = ((x617/x618)<<(x619<=x620));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x621 = 186808U;
	static volatile int64_t x622 = 25998350LL;
	uint16_t x623 = UINT16_MAX;
	static uint64_t x624 = 1LLU;
	volatile int64_t t125 = -304286275920LL;

    t125 = ((x621/x622)<<(x623<=x624));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x629 = INT8_MIN;
	static uint16_t x630 = UINT16_MAX;
	int32_t x631 = INT32_MAX;
	int8_t x632 = -1;
	static int32_t t126 = 886426;

    t126 = ((x629/x630)<<(x631<=x632));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x633 = INT8_MIN;
	static int32_t x634 = 761;
	volatile uint8_t x635 = 1U;
	int32_t x636 = -15128;
	static int32_t t127 = 797376;

    t127 = ((x633/x634)<<(x635<=x636));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x637 = UINT8_MAX;
	int32_t x638 = -633766379;
	static volatile int8_t x640 = INT8_MIN;
	int32_t t128 = 1452;

    t128 = ((x637/x638)<<(x639<=x640));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x642 = -51;
	uint64_t x643 = 8158LLU;
	uint8_t x644 = UINT8_MAX;

    t129 = ((x641/x642)<<(x643<=x644));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x649 = -1;
	int64_t x650 = -1LL;
	uint16_t x651 = 583U;
	int32_t x652 = 18530;
	int64_t t130 = 842LL;

    t130 = ((x649/x650)<<(x651<=x652));

    if (t130 != 2LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x653 = -15384181;
	static int64_t x655 = INT64_MAX;
	uint8_t x656 = UINT8_MAX;
	int32_t t131 = 16919;

    t131 = ((x653/x654)<<(x655<=x656));

    if (t131 != 15384181) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x658 = INT32_MIN;
	volatile uint64_t x659 = UINT64_MAX;
	int32_t x660 = INT32_MIN;
	int32_t t132 = -7799390;

    t132 = ((x657/x658)<<(x659<=x660));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x666 = INT32_MAX;
	int64_t x667 = 29710LL;
	volatile int32_t t133 = 206;

    t133 = ((x665/x666)<<(x667<=x668));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x669 = UINT16_MAX;
	static int64_t x670 = 15602627424LL;
	int32_t x671 = INT32_MIN;
	volatile int64_t t134 = -495396990LL;

    t134 = ((x669/x670)<<(x671<=x672));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x673 = INT8_MIN;
	static int64_t x674 = -109572LL;
	static volatile int32_t x675 = -1;
	volatile int32_t x676 = 1628817;

    t135 = ((x673/x674)<<(x675<=x676));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x677 = 6U;
	int32_t x678 = INT32_MAX;
	static int16_t x679 = -1;
	int8_t x680 = 2;
	static volatile int32_t t136 = -1760;

    t136 = ((x677/x678)<<(x679<=x680));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x686 = INT8_MIN;
	int32_t x687 = INT32_MIN;
	volatile int32_t t137 = 0;

    t137 = ((x685/x686)<<(x687<=x688));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x689 = INT16_MIN;
	static uint64_t x690 = UINT64_MAX;
	uint32_t x692 = UINT32_MAX;
	static uint64_t t138 = 48478989174363LLU;

    t138 = ((x689/x690)<<(x691<=x692));

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint8_t x693 = 3U;
	static int32_t x694 = INT32_MAX;
	int64_t x695 = -1LL;
	int32_t x696 = INT32_MIN;

    t139 = ((x693/x694)<<(x695<=x696));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x697 = 59U;
	uint32_t x698 = 31360U;
	static uint16_t x699 = 1826U;
	volatile int64_t x700 = -1LL;

    t140 = ((x697/x698)<<(x699<=x700));

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x717 = INT8_MIN;
	int8_t x720 = INT8_MIN;
	uint64_t t141 = 4632048949629LLU;

    t141 = ((x717/x718)<<(x719<=x720));

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x725 = -21;
	static volatile int32_t x727 = -1;
	uint8_t x728 = 3U;

    t142 = ((x725/x726)<<(x727<=x728));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x729 = -1;
	int16_t x730 = -1;
	uint8_t x731 = UINT8_MAX;
	volatile uint16_t x732 = 2112U;
	int32_t t143 = 7;

    t143 = ((x729/x730)<<(x731<=x732));

    if (t143 != 2) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint64_t x745 = 970943747287653LLU;
	int16_t x746 = INT16_MIN;
	int8_t x747 = 5;
	volatile int16_t x748 = 148;

    t144 = ((x745/x746)<<(x747<=x748));

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x753 = INT8_MAX;
	int64_t x754 = INT64_MAX;
	int32_t x755 = -1;
	volatile int64_t x756 = INT64_MIN;
	volatile int64_t t145 = 508514LL;

    t145 = ((x753/x754)<<(x755<=x756));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x758 = 11113552879462591LLU;
	static int16_t x759 = INT16_MIN;
	static volatile int16_t x760 = INT16_MIN;
	uint64_t t146 = 617407LLU;

    t146 = ((x757/x758)<<(x759<=x760));

    if (t146 != 3318LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x761 = 1U;
	int16_t x762 = INT16_MIN;
	volatile int64_t x763 = INT64_MIN;
	int8_t x764 = INT8_MAX;
	int32_t t147 = 717;

    t147 = ((x761/x762)<<(x763<=x764));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint64_t x769 = 2051996893077950LLU;
	volatile int32_t x770 = -32;
	int16_t x772 = INT16_MAX;
	volatile uint64_t t148 = 5LLU;

    t148 = ((x769/x770)<<(x771<=x772));

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x774 = INT8_MIN;
	static int64_t x775 = INT64_MIN;
	int32_t x776 = INT32_MAX;
	uint32_t t149 = 103749U;

    t149 = ((x773/x774)<<(x775<=x776));

    if (t149 != 0U) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x777 = INT32_MAX;
	int64_t x778 = INT64_MAX;
	static volatile uint32_t x779 = 0U;
	uint16_t x780 = UINT16_MAX;
	int64_t t150 = 22955948555670LL;

    t150 = ((x777/x778)<<(x779<=x780));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x785 = INT32_MIN;
	int16_t x786 = INT16_MIN;
	uint8_t x788 = UINT8_MAX;
	volatile int32_t t151 = -2419;

    t151 = ((x785/x786)<<(x787<=x788));

    if (t151 != 131072) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x789 = -1;
	uint16_t x790 = UINT16_MAX;
	volatile int8_t x791 = 46;
	int64_t x792 = INT64_MAX;
	volatile int32_t t152 = -90705;

    t152 = ((x789/x790)<<(x791<=x792));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x793 = -1;
	int16_t x795 = INT16_MIN;
	int64_t x796 = INT64_MIN;
	volatile int64_t t153 = 2835253091554442371LL;

    t153 = ((x793/x794)<<(x795<=x796));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x797 = 0U;
	volatile int8_t x799 = -5;
	uint64_t x800 = 649517797256LLU;
	volatile int32_t t154 = 1029886000;

    t154 = ((x797/x798)<<(x799<=x800));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x801 = INT64_MAX;
	uint32_t x802 = UINT32_MAX;
	uint16_t x803 = 300U;
	uint32_t x804 = 446348U;

    t155 = ((x801/x802)<<(x803<=x804));

    if (t155 != 4294967296LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x808 = INT32_MAX;
	static volatile uint64_t t156 = 1176459443526LLU;

    t156 = ((x805/x806)<<(x807<=x808));

    if (t156 != 3689348814741910322LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x809 = -1LL;
	int32_t x810 = INT32_MIN;
	static int64_t x811 = 149401188960885698LL;
	uint8_t x812 = UINT8_MAX;
	int64_t t157 = 563069703LL;

    t157 = ((x809/x810)<<(x811<=x812));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x813 = 84961LLU;
	static int8_t x814 = -1;
	int16_t x815 = INT16_MIN;
	static volatile int32_t x816 = INT32_MIN;

    t158 = ((x813/x814)<<(x815<=x816));

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x817 = 106U;
	uint64_t x818 = 8890489332004676490LLU;
	volatile uint16_t x819 = 7U;
	int64_t x820 = INT64_MIN;
	volatile uint64_t t159 = 1451011LLU;

    t159 = ((x817/x818)<<(x819<=x820));

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x821 = INT16_MIN;
	volatile int32_t x822 = INT32_MIN;
	int32_t x823 = 0;
	volatile int16_t x824 = INT16_MIN;
	volatile int32_t t160 = 201972;

    t160 = ((x821/x822)<<(x823<=x824));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x825 = INT8_MIN;
	static int32_t x826 = -1;
	int8_t x827 = -1;
	uint32_t x828 = 5U;
	static volatile int32_t t161 = -2379312;

    t161 = ((x825/x826)<<(x827<=x828));

    if (t161 != 128) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x829 = INT16_MAX;
	uint8_t x830 = UINT8_MAX;
	volatile int16_t x832 = -7570;
	volatile int32_t t162 = 0;

    t162 = ((x829/x830)<<(x831<=x832));

    if (t162 != 128) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int8_t x833 = INT8_MIN;
	volatile uint16_t x834 = 157U;
	uint8_t x835 = UINT8_MAX;
	int64_t x836 = INT64_MIN;

    t163 = ((x833/x834)<<(x835<=x836));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x838 = 170507868742370893LLU;
	int16_t x839 = 204;
	uint8_t x840 = 10U;
	uint64_t t164 = 17299630486LLU;

    t164 = ((x837/x838)<<(x839<=x840));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x841 = 74557LLU;
	int64_t x842 = INT64_MAX;
	uint16_t x843 = UINT16_MAX;
	volatile uint64_t t165 = 33802504004782828LLU;

    t165 = ((x841/x842)<<(x843<=x844));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x847 = INT64_MAX;
	volatile int32_t t166 = 474;

    t166 = ((x845/x846)<<(x847<=x848));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x849 = UINT32_MAX;
	int16_t x850 = -1;
	int32_t x851 = -122;
	static uint8_t x852 = UINT8_MAX;
	static uint32_t t167 = 2U;

    t167 = ((x849/x850)<<(x851<=x852));

    if (t167 != 2U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x853 = 56U;
	uint64_t x854 = 12LLU;
	uint64_t x855 = 56597LLU;
	int16_t x856 = -41;

    t168 = ((x853/x854)<<(x855<=x856));

    if (t168 != 8LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x869 = INT16_MIN;
	static volatile uint64_t t169 = 9LLU;

    t169 = ((x869/x870)<<(x871<=x872));

    if (t169 != 708324LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x873 = INT16_MAX;
	uint16_t x874 = 8054U;
	static int32_t t170 = -66423937;

    t170 = ((x873/x874)<<(x875<=x876));

    if (t170 != 4) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x877 = 245233LLU;
	int16_t x878 = INT16_MIN;
	static volatile int8_t x879 = -4;
	volatile uint64_t t171 = 96567895247915LLU;

    t171 = ((x877/x878)<<(x879<=x880));

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x881 = 97178175LL;
	uint32_t x882 = UINT32_MAX;
	int64_t x883 = -1LL;
	static int32_t x884 = INT32_MAX;
	static volatile int64_t t172 = 2LL;

    t172 = ((x881/x882)<<(x883<=x884));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x885 = UINT8_MAX;
	volatile uint8_t x886 = 11U;
	int32_t x887 = -1;
	int16_t x888 = 0;

    t173 = ((x885/x886)<<(x887<=x888));

    if (t173 != 46) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x889 = -156239;
	static int64_t x890 = 1592005LL;
	volatile uint8_t x891 = 1U;

    t174 = ((x889/x890)<<(x891<=x892));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x893 = UINT8_MAX;
	int32_t x894 = INT32_MAX;
	volatile int64_t x895 = INT64_MIN;
	static uint64_t x896 = 50920LLU;
	static volatile int32_t t175 = 972088761;

    t175 = ((x893/x894)<<(x895<=x896));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x897 = 207;
	static int32_t x898 = INT32_MIN;
	int16_t x899 = -1;
	uint16_t x900 = 6U;
	int32_t t176 = 1050525155;

    t176 = ((x897/x898)<<(x899<=x900));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x902 = 6U;
	int16_t x904 = -1;

    t177 = ((x901/x902)<<(x903<=x904));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x905 = 1U;
	int32_t x906 = 2;
	int16_t x907 = -643;
	int16_t x908 = -4381;
	static uint32_t t178 = 32460084U;

    t178 = ((x905/x906)<<(x907<=x908));

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x909 = -1LL;
	int32_t x910 = -12;
	static volatile uint32_t x911 = 12U;
	volatile int64_t x912 = INT64_MIN;
	int64_t t179 = -140835LL;

    t179 = ((x909/x910)<<(x911<=x912));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x917 = 1U;
	uint64_t x918 = UINT64_MAX;
	int8_t x919 = -1;
	uint16_t x920 = 9179U;
	volatile uint64_t t180 = 1825377LLU;

    t180 = ((x917/x918)<<(x919<=x920));

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x921 = INT32_MIN;
	int64_t x924 = INT64_MIN;
	int32_t t181 = -40161338;

    t181 = ((x921/x922)<<(x923<=x924));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x925 = -1;
	int32_t x926 = INT32_MAX;
	static volatile int32_t x927 = -1;
	volatile int16_t x928 = -6009;
	volatile int32_t t182 = -54;

    t182 = ((x925/x926)<<(x927<=x928));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x929 = -1;
	static int32_t x930 = -1;
	volatile uint16_t x931 = 227U;
	uint64_t x932 = UINT64_MAX;
	int32_t t183 = -10;

    t183 = ((x929/x930)<<(x931<=x932));

    if (t183 != 2) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x933 = UINT32_MAX;
	int32_t x934 = 1;
	volatile int64_t x935 = 74417119453404329LL;
	volatile uint32_t t184 = UINT32_MAX;

    t184 = ((x933/x934)<<(x935<=x936));

    if (t184 != UINT32_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x941 = INT8_MAX;
	volatile int8_t x942 = 25;
	volatile int64_t x943 = 14560745992LL;
	uint64_t x944 = UINT64_MAX;
	volatile int32_t t185 = 248192;

    t185 = ((x941/x942)<<(x943<=x944));

    if (t185 != 10) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x945 = INT32_MIN;
	uint32_t x946 = 85U;
	uint16_t x947 = 12888U;
	static volatile uint32_t t186 = 27U;

    t186 = ((x945/x946)<<(x947<=x948));

    if (t186 != 25264513U) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint32_t x953 = 0U;
	volatile int64_t x954 = INT64_MAX;
	volatile int64_t x955 = 94589572LL;
	static int16_t x956 = INT16_MIN;
	volatile int64_t t187 = -77LL;

    t187 = ((x953/x954)<<(x955<=x956));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x957 = 57629693017LLU;
	volatile int32_t x958 = INT32_MIN;
	static uint32_t x960 = 571801U;
	uint64_t t188 = 507482LLU;

    t188 = ((x957/x958)<<(x959<=x960));

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x961 = 0U;

    t189 = ((x961/x962)<<(x963<=x964));

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x965 = INT16_MIN;
	int64_t x966 = -1LL;
	static uint32_t x967 = 907611261U;
	int8_t x968 = INT8_MAX;
	volatile int64_t t190 = -16054818LL;

    t190 = ((x965/x966)<<(x967<=x968));

    if (t190 != 32768LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x969 = 0;
	int64_t x970 = INT64_MIN;
	int64_t x971 = -112751307592732109LL;
	static int64_t x972 = 12LL;
	int64_t t191 = 118547437784951LL;

    t191 = ((x969/x970)<<(x971<=x972));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint32_t x973 = 9082789U;
	uint16_t x974 = UINT16_MAX;
	volatile int16_t x975 = -18;
	int16_t x976 = -1;
	uint32_t t192 = 13039U;

    t192 = ((x973/x974)<<(x975<=x976));

    if (t192 != 276U) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x977 = INT16_MIN;
	static int64_t x978 = 6481834LL;
	volatile uint8_t x980 = UINT8_MAX;
	volatile int64_t t193 = 788LL;

    t193 = ((x977/x978)<<(x979<=x980));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x985 = -9613475LL;
	int64_t x986 = INT64_MAX;
	int32_t x987 = INT32_MIN;
	uint64_t x988 = 3598178063LLU;
	static int64_t t194 = 258258LL;

    t194 = ((x985/x986)<<(x987<=x988));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x989 = 1;
	volatile uint64_t x992 = 28LLU;
	volatile int32_t t195 = -1;

    t195 = ((x989/x990)<<(x991<=x992));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x997 = 189U;
	volatile int8_t x998 = INT8_MAX;
	volatile int8_t x999 = INT8_MIN;
	uint32_t x1000 = UINT32_MAX;
	static int32_t t196 = 3;

    t196 = ((x997/x998)<<(x999<=x1000));

    if (t196 != 2) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x1001 = 347807746LLU;
	int64_t x1002 = INT64_MIN;
	uint8_t x1003 = UINT8_MAX;
	volatile uint64_t t197 = 2619748595061LLU;

    t197 = ((x1001/x1002)<<(x1003<=x1004));

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1009 = -1;
	uint8_t x1011 = 9U;
	uint16_t x1012 = 10U;
	static int32_t t198 = 956407;

    t198 = ((x1009/x1010)<<(x1011<=x1012));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x1017 = 5901U;
	uint32_t x1019 = 1U;
	static int16_t x1020 = -6;
	uint32_t t199 = 220302U;

    t199 = ((x1017/x1018)<<(x1019<=x1020));

    if (t199 != 0U) { NG(); } else { ; }
	
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

