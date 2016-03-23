
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

int8_t x1 = INT8_MIN;
int8_t x7 = -1;
static int32_t t1 = 4;
int8_t x15 = INT8_MIN;
int64_t x18 = -1LL;
int32_t t4 = 1;
int8_t x22 = -1;
uint8_t x30 = 44U;
static volatile int32_t t7 = 1;
static int8_t x33 = INT8_MAX;
uint64_t x35 = 426LLU;
int8_t x37 = INT8_MAX;
volatile uint16_t x48 = 1831U;
int32_t t11 = 26622;
int64_t x50 = INT64_MAX;
int8_t x53 = -1;
uint32_t x64 = 108U;
uint64_t x69 = UINT64_MAX;
static uint16_t x73 = 32U;
uint16_t x78 = 8617U;
volatile int64_t x80 = INT64_MAX;
int8_t x82 = INT8_MIN;
int32_t x86 = INT32_MIN;
static int64_t x88 = INT64_MAX;
static uint64_t x98 = UINT64_MAX;
int32_t t24 = -391;
int64_t x104 = INT64_MIN;
int16_t x108 = INT16_MIN;
uint16_t x109 = 3607U;
uint32_t x110 = 20114265U;
int16_t x111 = 231;
volatile int32_t t27 = 3536;
int64_t x119 = INT64_MAX;
int32_t t29 = 0;
static int32_t x124 = INT32_MIN;
int32_t t31 = 157561;
int16_t x130 = 31;
static uint8_t x131 = 81U;
uint32_t x139 = 7664870U;
static int32_t t34 = 71772071;
static int8_t x141 = INT8_MIN;
int8_t x146 = -1;
int32_t t37 = 14;
volatile int16_t x155 = INT16_MIN;
int16_t x157 = INT16_MIN;
int32_t x169 = INT32_MIN;
int8_t x170 = -1;
int16_t x179 = INT16_MIN;
int8_t x182 = -24;
int32_t t45 = -1;
static volatile uint8_t x187 = 9U;
uint8_t x190 = 0U;
int64_t x191 = INT64_MAX;
uint64_t x193 = 12LLU;
int16_t x198 = -1;
int32_t x209 = INT32_MIN;
int16_t x210 = -1;
uint32_t x211 = 1985287U;
static volatile int32_t t52 = 2755870;
int16_t x227 = -6;
static volatile int32_t t56 = 270;
uint64_t x229 = UINT64_MAX;
static volatile int8_t x230 = INT8_MIN;
volatile int32_t t58 = 109919839;
static uint16_t x240 = UINT16_MAX;
int32_t t60 = 2;
uint8_t x250 = 68U;
static uint8_t x268 = 33U;
int32_t t66 = 2;
uint8_t x270 = 92U;
volatile int16_t x271 = -184;
uint16_t x273 = UINT16_MAX;
int32_t x275 = -1;
int32_t t69 = 136;
volatile int32_t t70 = 0;
static volatile int64_t x288 = -509528LL;
int8_t x301 = 1;
static int16_t x308 = -7;
static int8_t x313 = -1;
volatile int64_t x319 = 130664906368118233LL;
uint32_t x321 = UINT32_MAX;
int32_t x329 = INT32_MIN;
volatile uint8_t x331 = 0U;
volatile int32_t t83 = 12;
int16_t x341 = INT16_MAX;
uint8_t x342 = 5U;
int8_t x343 = INT8_MIN;
volatile int64_t x345 = INT64_MIN;
static volatile int8_t x346 = INT8_MIN;
int8_t x355 = INT8_MAX;
int64_t x364 = INT64_MAX;
int32_t x375 = -235050;
int8_t x388 = -1;
volatile int32_t t97 = 235314;
volatile int64_t x410 = INT64_MAX;
int16_t x413 = 391;
int32_t x417 = INT32_MIN;
int64_t x426 = INT64_MIN;
int64_t x427 = -22LL;
uint8_t x429 = UINT8_MAX;
int64_t x431 = INT64_MIN;
static volatile int32_t x437 = -1;
uint16_t x444 = UINT16_MAX;
volatile int32_t t110 = 3353;
int32_t x455 = -5;
int64_t x462 = INT64_MIN;
int8_t x463 = 9;
uint8_t x465 = 0U;
uint16_t x467 = UINT16_MAX;
uint8_t x468 = 8U;
uint32_t x469 = UINT32_MAX;
uint16_t x470 = 15U;
static uint64_t x474 = 236212356128LLU;
volatile int32_t t119 = -3065;
int32_t x483 = INT32_MAX;
static int32_t x484 = INT32_MAX;
volatile int32_t t120 = -40277;
uint8_t x489 = UINT8_MAX;
static int32_t x492 = INT32_MIN;
int32_t x495 = -1;
volatile int32_t t123 = 796908317;
int8_t x500 = INT8_MIN;
int64_t x503 = 6LL;
int32_t x504 = -1092109;
volatile int32_t t125 = 1644;
volatile int16_t x505 = INT16_MIN;
uint64_t x510 = 543462391076281LLU;
volatile int16_t x511 = 1;
volatile int32_t t127 = -99;
static int32_t x514 = INT32_MIN;
volatile uint32_t x522 = 121U;
volatile int16_t x523 = 55;
volatile int32_t t130 = -505;
static volatile int32_t x532 = -1;
int32_t t132 = 24;
static uint64_t x533 = 21734LLU;
int64_t x534 = INT64_MIN;
int32_t x536 = INT32_MIN;
int16_t x537 = INT16_MIN;
static uint8_t x539 = 12U;
uint32_t x543 = 51517772U;
uint16_t x544 = 11658U;
volatile int8_t x548 = -1;
uint16_t x549 = UINT16_MAX;
uint16_t x553 = 126U;
volatile int8_t x554 = 41;
volatile uint32_t x555 = 3U;
int16_t x557 = -1;
static int16_t x559 = INT16_MIN;
volatile int64_t x566 = -6281787LL;
volatile int32_t t141 = 104672;
int32_t x573 = INT32_MIN;
static volatile int64_t x575 = INT64_MIN;
int16_t x582 = INT16_MAX;
static int8_t x585 = -15;
static volatile uint64_t x586 = UINT64_MAX;
int16_t x605 = -1;
int32_t x608 = INT32_MAX;
static int32_t t151 = 10;
uint64_t x610 = 92086581481LLU;
int32_t t153 = -248324;
static uint8_t x619 = 1U;
int32_t x620 = -1;
int32_t x628 = -1;
int32_t t156 = -209315;
int8_t x631 = INT8_MAX;
volatile int32_t t158 = -18;
static int8_t x640 = -1;
static int32_t x643 = INT32_MIN;
static volatile uint64_t x646 = 46LLU;
static int32_t t161 = 82333244;
int64_t x653 = INT64_MIN;
uint64_t x655 = 17548004113575LLU;
uint8_t x661 = 20U;
int16_t x662 = INT16_MAX;
int64_t x664 = INT64_MIN;
int16_t x667 = -1;
int8_t x669 = INT8_MIN;
volatile uint32_t x682 = UINT32_MAX;
static int8_t x685 = 1;
uint32_t x686 = 383U;
volatile int64_t x688 = INT64_MIN;
int16_t x689 = INT16_MAX;
volatile int16_t x695 = INT16_MIN;
volatile int32_t x700 = INT32_MIN;
uint64_t x703 = 48424852LLU;
uint32_t x713 = 1413U;
volatile int32_t x714 = INT32_MAX;
uint64_t x719 = 1096069LLU;
int16_t x724 = -1;
uint16_t x726 = 202U;
static int8_t x727 = INT8_MIN;
int8_t x734 = INT8_MAX;
int8_t x737 = INT8_MIN;
int8_t x738 = 50;
int64_t x741 = INT64_MAX;
int32_t x743 = INT32_MIN;
int32_t x745 = INT32_MAX;
int64_t x746 = INT64_MIN;
int32_t x753 = INT32_MIN;
static int8_t x777 = -1;
volatile uint8_t x785 = 0U;
int16_t x793 = -1;
static int32_t t198 = -212;
uint8_t x799 = 0U;


void f0(void) {
    	int64_t x2 = -1LL;
	static int64_t x3 = -1383LL;
	volatile uint32_t x4 = 4314555U;
	volatile int32_t t0 = 56;

    t0 = ((x1&x2)!=(x3==x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -1;
	int8_t x6 = 6;
	uint8_t x8 = 0U;

    t1 = ((x5&x6)!=(x7==x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 412430U;
	volatile int16_t x10 = 284;
	static uint32_t x11 = UINT32_MAX;
	uint32_t x12 = 6668U;
	int32_t t2 = 151070;

    t2 = ((x9&x10)!=(x11==x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x13 = -1LL;
	volatile int16_t x14 = INT16_MIN;
	volatile int64_t x16 = INT64_MAX;
	volatile int32_t t3 = 94390;

    t3 = ((x13&x14)!=(x15==x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x17 = UINT8_MAX;
	int8_t x19 = INT8_MIN;
	int64_t x20 = -70522242LL;

    t4 = ((x17&x18)!=(x19==x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 199279251137LLU;
	static uint8_t x23 = UINT8_MAX;
	volatile int16_t x24 = -1;
	volatile int32_t t5 = -172;

    t5 = ((x21&x22)!=(x23==x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -1LL;
	int8_t x26 = INT8_MIN;
	volatile int32_t x27 = 1;
	int16_t x28 = INT16_MAX;
	static int32_t t6 = -232031;

    t6 = ((x25&x26)!=(x27==x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	uint32_t x31 = 34373998U;
	volatile int32_t x32 = -90266180;

    t7 = ((x29&x30)!=(x31==x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x34 = INT16_MIN;
	int32_t x36 = INT32_MIN;
	volatile int32_t t8 = 12655396;

    t8 = ((x33&x34)!=(x35==x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x38 = INT32_MIN;
	int16_t x39 = INT16_MAX;
	uint64_t x40 = UINT64_MAX;
	volatile int32_t t9 = -3;

    t9 = ((x37&x38)!=(x39==x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = -1;
	int32_t x42 = -1;
	volatile int8_t x43 = -9;
	uint16_t x44 = 461U;
	static int32_t t10 = -1;

    t10 = ((x41&x42)!=(x43==x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x45 = -6;
	volatile uint64_t x46 = 45970930545LLU;
	int64_t x47 = -238133117253942LL;

    t11 = ((x45&x46)!=(x47==x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x49 = 0U;
	volatile uint32_t x51 = UINT32_MAX;
	static int16_t x52 = INT16_MAX;
	volatile int32_t t12 = -5007049;

    t12 = ((x49&x50)!=(x51==x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x54 = -1;
	int64_t x55 = INT64_MAX;
	int32_t x56 = -252;
	static volatile int32_t t13 = 29933;

    t13 = ((x53&x54)!=(x55==x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = 1U;
	volatile uint16_t x58 = 1U;
	int8_t x59 = INT8_MAX;
	static int64_t x60 = INT64_MIN;
	static volatile int32_t t14 = -27804797;

    t14 = ((x57&x58)!=(x59==x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = -10655;
	uint8_t x62 = 3U;
	int8_t x63 = INT8_MAX;
	static int32_t t15 = 132;

    t15 = ((x61&x62)!=(x63==x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x65 = 79431301LLU;
	static int16_t x66 = INT16_MIN;
	uint32_t x67 = 8235U;
	volatile uint32_t x68 = UINT32_MAX;
	volatile int32_t t16 = -1550624;

    t16 = ((x65&x66)!=(x67==x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x70 = -1;
	int64_t x71 = INT64_MIN;
	int32_t x72 = INT32_MIN;
	int32_t t17 = 31;

    t17 = ((x69&x70)!=(x71==x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x74 = -1;
	int32_t x75 = 1;
	volatile int32_t x76 = 65;
	int32_t t18 = 1;

    t18 = ((x73&x74)!=(x75==x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = 17178U;
	int64_t x79 = INT64_MAX;
	int32_t t19 = -926;

    t19 = ((x77&x78)!=(x79==x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MIN;
	static int64_t x83 = INT64_MAX;
	int8_t x84 = -9;
	int32_t t20 = 4829;

    t20 = ((x81&x82)!=(x83==x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x85 = INT16_MAX;
	static volatile int8_t x87 = INT8_MIN;
	volatile int32_t t21 = 1000477818;

    t21 = ((x85&x86)!=(x87==x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MAX;
	uint64_t x90 = 598889754835LLU;
	static uint32_t x91 = 13132053U;
	int8_t x92 = INT8_MIN;
	int32_t t22 = 34140053;

    t22 = ((x89&x90)!=(x91==x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MAX;
	int32_t x94 = INT32_MAX;
	uint32_t x95 = 23U;
	int32_t x96 = INT32_MAX;
	int32_t t23 = 30416760;

    t23 = ((x93&x94)!=(x95==x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x97 = 3635U;
	uint64_t x99 = 2085498383253421962LLU;
	int16_t x100 = INT16_MAX;

    t24 = ((x97&x98)!=(x99==x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x101 = UINT64_MAX;
	int32_t x102 = INT32_MIN;
	int64_t x103 = -410244058LL;
	volatile int32_t t25 = -749764;

    t25 = ((x101&x102)!=(x103==x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x105 = -8;
	int8_t x106 = -6;
	volatile int32_t x107 = -1;
	volatile int32_t t26 = 1;

    t26 = ((x105&x106)!=(x107==x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x112 = -1;

    t27 = ((x109&x110)!=(x111==x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x113 = 44U;
	volatile int32_t x114 = INT32_MAX;
	int64_t x115 = INT64_MAX;
	int64_t x116 = INT64_MIN;
	int32_t t28 = 1;

    t28 = ((x113&x114)!=(x115==x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MAX;
	static int8_t x118 = 2;
	uint8_t x120 = UINT8_MAX;

    t29 = ((x117&x118)!=(x119==x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = -1;
	int8_t x122 = INT8_MAX;
	int64_t x123 = -1LL;
	int32_t t30 = -80676731;

    t30 = ((x121&x122)!=(x123==x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MIN;
	uint16_t x126 = 1869U;
	int64_t x127 = INT64_MIN;
	uint32_t x128 = UINT32_MAX;

    t31 = ((x125&x126)!=(x127==x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x129 = UINT64_MAX;
	volatile uint8_t x132 = 10U;
	int32_t t32 = 1;

    t32 = ((x129&x130)!=(x131==x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int64_t x133 = 5059484598875LL;
	volatile int32_t x134 = -171;
	int16_t x135 = 7303;
	int8_t x136 = INT8_MIN;
	static int32_t t33 = -14060722;

    t33 = ((x133&x134)!=(x135==x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x137 = 25696087897690LLU;
	uint8_t x138 = 1U;
	int64_t x140 = INT64_MIN;

    t34 = ((x137&x138)!=(x139==x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x142 = UINT8_MAX;
	uint16_t x143 = UINT16_MAX;
	volatile int8_t x144 = INT8_MIN;
	volatile int32_t t35 = 5034;

    t35 = ((x141&x142)!=(x143==x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x145 = 3854424376LLU;
	static int8_t x147 = -1;
	static volatile int8_t x148 = 3;
	static volatile int32_t t36 = 44;

    t36 = ((x145&x146)!=(x147==x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = -1275724574490812LL;
	int8_t x150 = -1;
	int64_t x151 = -219733126781851849LL;
	int8_t x152 = INT8_MIN;

    t37 = ((x149&x150)!=(x151==x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = -133899813;
	static uint8_t x154 = 16U;
	uint16_t x156 = 58U;
	static volatile int32_t t38 = -2864610;

    t38 = ((x153&x154)!=(x155==x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x158 = 10563U;
	int8_t x159 = INT8_MIN;
	int64_t x160 = INT64_MIN;
	volatile int32_t t39 = 228;

    t39 = ((x157&x158)!=(x159==x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x161 = 1;
	int16_t x162 = INT16_MIN;
	volatile int16_t x163 = 223;
	static int32_t x164 = 89771469;
	int32_t t40 = 28368;

    t40 = ((x161&x162)!=(x163==x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = -971667072774416151LL;
	uint16_t x166 = 14U;
	volatile int64_t x167 = -763LL;
	int64_t x168 = INT64_MIN;
	volatile int32_t t41 = -13025630;

    t41 = ((x165&x166)!=(x167==x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x171 = 6442;
	int32_t x172 = INT32_MIN;
	static volatile int32_t t42 = 404;

    t42 = ((x169&x170)!=(x171==x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = -1;
	static volatile uint16_t x174 = UINT16_MAX;
	int16_t x175 = INT16_MIN;
	int16_t x176 = 6511;
	int32_t t43 = -81783;

    t43 = ((x173&x174)!=(x175==x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x177 = 25451LLU;
	static int64_t x178 = INT64_MIN;
	int64_t x180 = INT64_MAX;
	int32_t t44 = 73213293;

    t44 = ((x177&x178)!=(x179==x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x181 = 5;
	static uint8_t x183 = 3U;
	volatile uint16_t x184 = UINT16_MAX;

    t45 = ((x181&x182)!=(x183==x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x185 = -1;
	int16_t x186 = INT16_MIN;
	volatile int16_t x188 = -7;
	int32_t t46 = 207059;

    t46 = ((x185&x186)!=(x187==x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = -2961186814LL;
	volatile int8_t x192 = 2;
	int32_t t47 = -738669;

    t47 = ((x189&x190)!=(x191==x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x194 = -1;
	int8_t x195 = INT8_MIN;
	uint8_t x196 = UINT8_MAX;
	int32_t t48 = 84673154;

    t48 = ((x193&x194)!=(x195==x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x197 = 2849;
	volatile uint8_t x199 = 1U;
	static int32_t x200 = INT32_MIN;
	int32_t t49 = -24075383;

    t49 = ((x197&x198)!=(x199==x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = INT8_MAX;
	volatile int32_t x202 = 583;
	volatile uint16_t x203 = 50U;
	int16_t x204 = 73;
	volatile int32_t t50 = 55957;

    t50 = ((x201&x202)!=(x203==x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x205 = INT32_MIN;
	volatile int32_t x206 = 1;
	static int32_t x207 = INT32_MIN;
	uint8_t x208 = UINT8_MAX;
	volatile int32_t t51 = -32204483;

    t51 = ((x205&x206)!=(x207==x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x212 = INT64_MIN;

    t52 = ((x209&x210)!=(x211==x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x213 = INT64_MIN;
	int64_t x214 = 100457495958361LL;
	int32_t x215 = INT32_MIN;
	static int32_t x216 = INT32_MIN;
	volatile int32_t t53 = -1059;

    t53 = ((x213&x214)!=(x215==x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = INT32_MIN;
	uint64_t x218 = 21215405558747LLU;
	int16_t x219 = 17;
	uint64_t x220 = 11871755135LLU;
	int32_t t54 = 77944;

    t54 = ((x217&x218)!=(x219==x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = 1;
	int32_t x222 = INT32_MAX;
	int8_t x223 = 0;
	volatile int8_t x224 = INT8_MAX;
	int32_t t55 = -5178;

    t55 = ((x221&x222)!=(x223==x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x225 = INT8_MIN;
	static int8_t x226 = INT8_MAX;
	volatile int16_t x228 = INT16_MAX;

    t56 = ((x225&x226)!=(x227==x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x231 = INT64_MIN;
	int16_t x232 = -1;
	int32_t t57 = 32222725;

    t57 = ((x229&x230)!=(x231==x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = -1;
	static uint16_t x234 = UINT16_MAX;
	static uint8_t x235 = UINT8_MAX;
	int32_t x236 = 1;

    t58 = ((x233&x234)!=(x235==x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x237 = 17013LL;
	int64_t x238 = -1LL;
	int64_t x239 = INT64_MIN;
	volatile int32_t t59 = 17;

    t59 = ((x237&x238)!=(x239==x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = 2LLU;
	int64_t x242 = INT64_MIN;
	uint32_t x243 = UINT32_MAX;
	int8_t x244 = INT8_MIN;

    t60 = ((x241&x242)!=(x243==x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x245 = UINT32_MAX;
	uint32_t x246 = 117U;
	int8_t x247 = -6;
	static volatile uint64_t x248 = UINT64_MAX;
	volatile int32_t t61 = -10;

    t61 = ((x245&x246)!=(x247==x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x249 = 6179U;
	volatile int64_t x251 = INT64_MIN;
	uint64_t x252 = UINT64_MAX;
	int32_t t62 = 376047145;

    t62 = ((x249&x250)!=(x251==x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x253 = 4U;
	uint32_t x254 = UINT32_MAX;
	int16_t x255 = -1;
	uint64_t x256 = UINT64_MAX;
	volatile int32_t t63 = 0;

    t63 = ((x253&x254)!=(x255==x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x257 = -2;
	uint32_t x258 = UINT32_MAX;
	volatile int8_t x259 = INT8_MIN;
	int64_t x260 = 14228607404LL;
	volatile int32_t t64 = -94593;

    t64 = ((x257&x258)!=(x259==x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = -3;
	static volatile int64_t x262 = INT64_MIN;
	volatile int64_t x263 = INT64_MIN;
	int64_t x264 = INT64_MAX;
	int32_t t65 = -377127;

    t65 = ((x261&x262)!=(x263==x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = -1;
	int32_t x266 = INT32_MAX;
	volatile uint8_t x267 = 42U;

    t66 = ((x265&x266)!=(x267==x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint8_t x269 = 1U;
	int16_t x272 = -1;
	volatile int32_t t67 = 36717634;

    t67 = ((x269&x270)!=(x271==x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x274 = 0;
	volatile int64_t x276 = INT64_MIN;
	int32_t t68 = -3029617;

    t68 = ((x273&x274)!=(x275==x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = -1;
	int32_t x278 = INT32_MIN;
	volatile int8_t x279 = INT8_MIN;
	int64_t x280 = INT64_MIN;

    t69 = ((x277&x278)!=(x279==x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x281 = INT16_MAX;
	uint16_t x282 = UINT16_MAX;
	int8_t x283 = -1;
	uint64_t x284 = 5972228732353LLU;

    t70 = ((x281&x282)!=(x283==x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = INT8_MIN;
	int32_t x286 = -22;
	int64_t x287 = 727734535690885LL;
	volatile int32_t t71 = 166;

    t71 = ((x285&x286)!=(x287==x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = INT16_MAX;
	int64_t x290 = 40LL;
	int32_t x291 = INT32_MIN;
	uint32_t x292 = 16573687U;
	volatile int32_t t72 = -19950906;

    t72 = ((x289&x290)!=(x291==x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x293 = INT64_MAX;
	uint16_t x294 = UINT16_MAX;
	int8_t x295 = 6;
	int32_t x296 = INT32_MIN;
	static int32_t t73 = 1694217;

    t73 = ((x293&x294)!=(x295==x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint8_t x297 = UINT8_MAX;
	int32_t x298 = 55;
	static int8_t x299 = 10;
	int16_t x300 = INT16_MAX;
	int32_t t74 = -56813;

    t74 = ((x297&x298)!=(x299==x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x302 = -48;
	volatile int8_t x303 = INT8_MIN;
	int8_t x304 = 0;
	volatile int32_t t75 = 46848;

    t75 = ((x301&x302)!=(x303==x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x305 = 1U;
	volatile int32_t x306 = 10166916;
	static int8_t x307 = INT8_MIN;
	volatile int32_t t76 = -108;

    t76 = ((x305&x306)!=(x307==x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x309 = UINT64_MAX;
	static volatile int32_t x310 = INT32_MIN;
	volatile int32_t x311 = 81646;
	int32_t x312 = INT32_MIN;
	volatile int32_t t77 = -25;

    t77 = ((x309&x310)!=(x311==x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x314 = -602;
	int32_t x315 = 226078584;
	uint8_t x316 = 0U;
	static int32_t t78 = 139453364;

    t78 = ((x313&x314)!=(x315==x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = 14;
	int32_t x318 = -1;
	volatile int64_t x320 = -1LL;
	int32_t t79 = -196790;

    t79 = ((x317&x318)!=(x319==x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x322 = INT64_MAX;
	static int16_t x323 = 398;
	int64_t x324 = INT64_MIN;
	int32_t t80 = -213;

    t80 = ((x321&x322)!=(x323==x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int8_t x325 = -1;
	int32_t x326 = -1;
	int8_t x327 = -6;
	volatile uint64_t x328 = 376368310235067LLU;
	volatile int32_t t81 = -131;

    t81 = ((x325&x326)!=(x327==x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x330 = UINT16_MAX;
	volatile int16_t x332 = INT16_MIN;
	volatile int32_t t82 = 53;

    t82 = ((x329&x330)!=(x331==x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x333 = INT64_MIN;
	uint32_t x334 = UINT32_MAX;
	uint64_t x335 = UINT64_MAX;
	int64_t x336 = 280715401618427517LL;

    t83 = ((x333&x334)!=(x335==x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x337 = -2;
	int8_t x338 = INT8_MIN;
	uint64_t x339 = 42270905LLU;
	volatile int64_t x340 = -1LL;
	int32_t t84 = 869;

    t84 = ((x337&x338)!=(x339==x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x344 = 0U;
	int32_t t85 = -973;

    t85 = ((x341&x342)!=(x343==x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x347 = UINT8_MAX;
	static uint32_t x348 = UINT32_MAX;
	volatile int32_t t86 = 700;

    t86 = ((x345&x346)!=(x347==x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = INT8_MAX;
	static uint64_t x350 = UINT64_MAX;
	int8_t x351 = -6;
	int64_t x352 = INT64_MAX;
	int32_t t87 = -255;

    t87 = ((x349&x350)!=(x351==x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = -3744;
	uint32_t x354 = UINT32_MAX;
	volatile int64_t x356 = -1LL;
	static volatile int32_t t88 = 1;

    t88 = ((x353&x354)!=(x355==x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x357 = UINT8_MAX;
	volatile int32_t x358 = -1;
	uint8_t x359 = UINT8_MAX;
	volatile int32_t x360 = -116215751;
	static int32_t t89 = -57;

    t89 = ((x357&x358)!=(x359==x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = INT16_MAX;
	int64_t x362 = -1LL;
	volatile uint16_t x363 = 1U;
	static int32_t t90 = 1298;

    t90 = ((x361&x362)!=(x363==x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x365 = 116U;
	int8_t x366 = INT8_MIN;
	volatile int32_t x367 = 632;
	static uint32_t x368 = 0U;
	volatile int32_t t91 = -4514361;

    t91 = ((x365&x366)!=(x367==x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = 596148;
	uint16_t x370 = 6U;
	int64_t x371 = -8173809LL;
	int64_t x372 = INT64_MIN;
	int32_t t92 = -22235876;

    t92 = ((x369&x370)!=(x371==x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x373 = 4977112567863453LLU;
	int8_t x374 = INT8_MAX;
	uint64_t x376 = UINT64_MAX;
	static volatile int32_t t93 = 740136498;

    t93 = ((x373&x374)!=(x375==x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x377 = -1;
	volatile int8_t x378 = INT8_MIN;
	uint32_t x379 = 1U;
	uint32_t x380 = 27U;
	int32_t t94 = -38861;

    t94 = ((x377&x378)!=(x379==x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x381 = -1;
	int8_t x382 = -1;
	uint64_t x383 = UINT64_MAX;
	static uint32_t x384 = 211U;
	int32_t t95 = 0;

    t95 = ((x381&x382)!=(x383==x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x385 = INT64_MIN;
	int16_t x386 = INT16_MIN;
	int16_t x387 = INT16_MIN;
	static volatile int32_t t96 = 9137;

    t96 = ((x385&x386)!=(x387==x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = INT8_MIN;
	int8_t x390 = -1;
	uint16_t x391 = 1U;
	static volatile int32_t x392 = INT32_MIN;

    t97 = ((x389&x390)!=(x391==x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x393 = UINT8_MAX;
	uint64_t x394 = 6951811306772074LLU;
	int32_t x395 = -283;
	int8_t x396 = INT8_MAX;
	int32_t t98 = -360;

    t98 = ((x393&x394)!=(x395==x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x397 = UINT16_MAX;
	int16_t x398 = 3481;
	volatile int8_t x399 = INT8_MIN;
	volatile int32_t x400 = INT32_MIN;
	static int32_t t99 = 0;

    t99 = ((x397&x398)!=(x399==x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x401 = UINT8_MAX;
	uint64_t x402 = 2LLU;
	uint64_t x403 = UINT64_MAX;
	int16_t x404 = 1;
	static int32_t t100 = 0;

    t100 = ((x401&x402)!=(x403==x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = INT64_MAX;
	static volatile uint8_t x406 = 51U;
	uint32_t x407 = 1U;
	int8_t x408 = -1;
	int32_t t101 = 0;

    t101 = ((x405&x406)!=(x407==x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = INT16_MIN;
	int32_t x411 = 111;
	int32_t x412 = 19878978;
	volatile int32_t t102 = 1016555;

    t102 = ((x409&x410)!=(x411==x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x414 = UINT64_MAX;
	int64_t x415 = INT64_MIN;
	static uint16_t x416 = 11163U;
	volatile int32_t t103 = 10092;

    t103 = ((x413&x414)!=(x415==x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x418 = INT8_MAX;
	static int8_t x419 = INT8_MIN;
	int64_t x420 = INT64_MIN;
	int32_t t104 = 5408859;

    t104 = ((x417&x418)!=(x419==x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = INT32_MIN;
	uint64_t x422 = 3498LLU;
	volatile int32_t x423 = INT32_MIN;
	volatile int64_t x424 = INT64_MAX;
	int32_t t105 = -1;

    t105 = ((x421&x422)!=(x423==x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x425 = UINT8_MAX;
	uint64_t x428 = 1030558495596LLU;
	int32_t t106 = -291015889;

    t106 = ((x425&x426)!=(x427==x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint64_t x430 = 3427189495321748149LLU;
	volatile int8_t x432 = INT8_MAX;
	volatile int32_t t107 = 0;

    t107 = ((x429&x430)!=(x431==x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x433 = INT64_MAX;
	int16_t x434 = INT16_MIN;
	volatile int32_t x435 = INT32_MIN;
	volatile uint16_t x436 = 32U;
	volatile int32_t t108 = -50;

    t108 = ((x433&x434)!=(x435==x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x438 = INT8_MAX;
	int16_t x439 = -1;
	uint32_t x440 = 296U;
	int32_t t109 = 398758849;

    t109 = ((x437&x438)!=(x439==x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x441 = 1U;
	int32_t x442 = -1;
	static int8_t x443 = INT8_MAX;

    t110 = ((x441&x442)!=(x443==x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = INT64_MAX;
	static int16_t x446 = INT16_MIN;
	int16_t x447 = -15427;
	uint16_t x448 = 0U;
	int32_t t111 = 10983;

    t111 = ((x445&x446)!=(x447==x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = INT8_MIN;
	volatile int16_t x450 = -1;
	volatile uint8_t x451 = UINT8_MAX;
	int64_t x452 = INT64_MIN;
	volatile int32_t t112 = 43666204;

    t112 = ((x449&x450)!=(x451==x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x453 = 46871LL;
	volatile int64_t x454 = INT64_MIN;
	static int32_t x456 = INT32_MAX;
	volatile int32_t t113 = 4274;

    t113 = ((x453&x454)!=(x455==x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = 179739LLU;
	int64_t x458 = INT64_MIN;
	uint8_t x459 = 1U;
	int32_t x460 = -1;
	static volatile int32_t t114 = -91823;

    t114 = ((x457&x458)!=(x459==x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x461 = 1U;
	uint16_t x464 = 15U;
	int32_t t115 = 409;

    t115 = ((x461&x462)!=(x463==x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x466 = 809629U;
	int32_t t116 = -28330;

    t116 = ((x465&x466)!=(x467==x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x471 = INT32_MAX;
	int8_t x472 = INT8_MIN;
	int32_t t117 = -1133038;

    t117 = ((x469&x470)!=(x471==x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = INT64_MAX;
	static uint16_t x475 = 8091U;
	uint64_t x476 = 1723835LLU;
	static volatile int32_t t118 = 514831907;

    t118 = ((x473&x474)!=(x475==x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = -1;
	uint64_t x478 = 4242LLU;
	uint64_t x479 = UINT64_MAX;
	uint8_t x480 = 5U;

    t119 = ((x477&x478)!=(x479==x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = -1;
	volatile int16_t x482 = -2;

    t120 = ((x481&x482)!=(x483==x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = -124;
	int8_t x486 = -36;
	volatile uint32_t x487 = UINT32_MAX;
	int16_t x488 = INT16_MIN;
	static int32_t t121 = 4663206;

    t121 = ((x485&x486)!=(x487==x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x490 = 72153454748931164LLU;
	volatile int16_t x491 = INT16_MAX;
	int32_t t122 = -69446237;

    t122 = ((x489&x490)!=(x491==x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x493 = 280463213333078LLU;
	int64_t x494 = INT64_MIN;
	uint64_t x496 = UINT64_MAX;

    t123 = ((x493&x494)!=(x495==x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = 1;
	volatile uint16_t x498 = 4U;
	volatile int64_t x499 = -6773041264741024LL;
	int32_t t124 = -708588;

    t124 = ((x497&x498)!=(x499==x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = INT8_MIN;
	int8_t x502 = 60;

    t125 = ((x501&x502)!=(x503==x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x506 = INT16_MIN;
	uint16_t x507 = 97U;
	int16_t x508 = INT16_MAX;
	volatile int32_t t126 = 669;

    t126 = ((x505&x506)!=(x507==x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x509 = INT16_MIN;
	int8_t x512 = INT8_MIN;

    t127 = ((x509&x510)!=(x511==x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = INT16_MIN;
	volatile int16_t x515 = INT16_MIN;
	uint8_t x516 = UINT8_MAX;
	volatile int32_t t128 = -1;

    t128 = ((x513&x514)!=(x515==x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x517 = -1;
	volatile uint64_t x518 = 4LLU;
	uint32_t x519 = 21966664U;
	int64_t x520 = INT64_MIN;
	static volatile int32_t t129 = 35;

    t129 = ((x517&x518)!=(x519==x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x521 = 3091LLU;
	static int8_t x524 = -3;

    t130 = ((x521&x522)!=(x523==x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = 1LL;
	static int64_t x526 = INT64_MIN;
	volatile int64_t x527 = INT64_MIN;
	int16_t x528 = 19;
	int32_t t131 = -925631266;

    t131 = ((x525&x526)!=(x527==x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = INT8_MIN;
	int8_t x530 = INT8_MIN;
	static int32_t x531 = INT32_MIN;

    t132 = ((x529&x530)!=(x531==x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x535 = INT8_MIN;
	volatile int32_t t133 = -7743;

    t133 = ((x533&x534)!=(x535==x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x538 = INT8_MIN;
	uint16_t x540 = 165U;
	int32_t t134 = 177958;

    t134 = ((x537&x538)!=(x539==x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = -12;
	int64_t x542 = 1874285860182LL;
	static int32_t t135 = 13387528;

    t135 = ((x541&x542)!=(x543==x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x545 = INT32_MIN;
	int64_t x546 = INT64_MIN;
	int16_t x547 = 9;
	int32_t t136 = -2025072;

    t136 = ((x545&x546)!=(x547==x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x550 = 84U;
	static volatile int8_t x551 = -17;
	int32_t x552 = INT32_MIN;
	int32_t t137 = -3;

    t137 = ((x549&x550)!=(x551==x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x556 = UINT8_MAX;
	volatile int32_t t138 = 44711;

    t138 = ((x553&x554)!=(x555==x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x558 = 0U;
	int8_t x560 = INT8_MIN;
	int32_t t139 = -257919;

    t139 = ((x557&x558)!=(x559==x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x561 = UINT16_MAX;
	static int64_t x562 = 1LL;
	static uint32_t x563 = UINT32_MAX;
	uint8_t x564 = UINT8_MAX;
	volatile int32_t t140 = -108869367;

    t140 = ((x561&x562)!=(x563==x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = 0;
	static int64_t x567 = INT64_MIN;
	int8_t x568 = INT8_MAX;

    t141 = ((x565&x566)!=(x567==x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x569 = 77566169LLU;
	volatile uint32_t x570 = 245U;
	static volatile int16_t x571 = INT16_MIN;
	static volatile int16_t x572 = 1;
	volatile int32_t t142 = -29341234;

    t142 = ((x569&x570)!=(x571==x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x574 = INT64_MIN;
	uint8_t x576 = 4U;
	int32_t t143 = -2474;

    t143 = ((x573&x574)!=(x575==x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = -23;
	static volatile int16_t x578 = INT16_MAX;
	uint64_t x579 = UINT64_MAX;
	int64_t x580 = INT64_MIN;
	int32_t t144 = -225216709;

    t144 = ((x577&x578)!=(x579==x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = -30947616LL;
	uint64_t x583 = 73543126127108LLU;
	int32_t x584 = -1;
	int32_t t145 = -54752;

    t145 = ((x581&x582)!=(x583==x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x587 = 3U;
	uint32_t x588 = 784818056U;
	static int32_t t146 = -1;

    t146 = ((x585&x586)!=(x587==x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile uint16_t x589 = 7U;
	int32_t x590 = INT32_MAX;
	int64_t x591 = -51564LL;
	volatile int16_t x592 = INT16_MAX;
	int32_t t147 = -1940708;

    t147 = ((x589&x590)!=(x591==x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint16_t x593 = 46U;
	volatile int64_t x594 = 236920LL;
	static int16_t x595 = INT16_MAX;
	static int64_t x596 = INT64_MIN;
	volatile int32_t t148 = 299;

    t148 = ((x593&x594)!=(x595==x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = INT64_MAX;
	static uint8_t x598 = 1U;
	volatile uint32_t x599 = 2911248U;
	int8_t x600 = -1;
	int32_t t149 = -1;

    t149 = ((x597&x598)!=(x599==x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = 6278;
	int64_t x602 = -68875255098729LL;
	static int16_t x603 = INT16_MAX;
	static uint8_t x604 = UINT8_MAX;
	volatile int32_t t150 = -23434;

    t150 = ((x601&x602)!=(x603==x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int32_t x606 = -8953789;
	volatile int64_t x607 = 1091031118LL;

    t151 = ((x605&x606)!=(x607==x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint32_t x609 = 3141U;
	uint32_t x611 = 56116008U;
	int32_t x612 = 1;
	volatile int32_t t152 = -2701083;

    t152 = ((x609&x610)!=(x611==x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = INT64_MIN;
	int64_t x614 = 418LL;
	volatile int32_t x615 = -1;
	int8_t x616 = 31;

    t153 = ((x613&x614)!=(x615==x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = -1;
	int64_t x618 = -1LL;
	int32_t t154 = 1209;

    t154 = ((x617&x618)!=(x619==x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int16_t x621 = INT16_MAX;
	int32_t x622 = INT32_MAX;
	static int64_t x623 = -1LL;
	static int32_t x624 = INT32_MIN;
	static volatile int32_t t155 = 585282700;

    t155 = ((x621&x622)!=(x623==x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = INT16_MAX;
	int16_t x626 = -1;
	uint16_t x627 = 1U;

    t156 = ((x625&x626)!=(x627==x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = INT64_MIN;
	int64_t x630 = INT64_MIN;
	static int32_t x632 = INT32_MIN;
	int32_t t157 = -709;

    t157 = ((x629&x630)!=(x631==x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = -8;
	uint8_t x634 = UINT8_MAX;
	int64_t x635 = INT64_MIN;
	int8_t x636 = 28;

    t158 = ((x633&x634)!=(x635==x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = -1;
	static int16_t x638 = INT16_MAX;
	static volatile int8_t x639 = 12;
	volatile int32_t t159 = -20850;

    t159 = ((x637&x638)!=(x639==x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = 101396788LL;
	int32_t x642 = -1;
	volatile int64_t x644 = 928424LL;
	int32_t t160 = -814;

    t160 = ((x641&x642)!=(x643==x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x645 = UINT8_MAX;
	static uint16_t x647 = 46U;
	volatile int8_t x648 = INT8_MIN;

    t161 = ((x645&x646)!=(x647==x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = INT16_MAX;
	int64_t x650 = -1LL;
	int64_t x651 = 898935303672098LL;
	int16_t x652 = -1;
	int32_t t162 = 10;

    t162 = ((x649&x650)!=(x651==x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x654 = 15U;
	int64_t x656 = -1LL;
	static int32_t t163 = 1;

    t163 = ((x653&x654)!=(x655==x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x657 = -1;
	int8_t x658 = INT8_MAX;
	uint32_t x659 = UINT32_MAX;
	uint32_t x660 = 407566U;
	volatile int32_t t164 = -334;

    t164 = ((x657&x658)!=(x659==x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint32_t x663 = 1U;
	static int32_t t165 = 84;

    t165 = ((x661&x662)!=(x663==x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x665 = 41;
	uint8_t x666 = 88U;
	int8_t x668 = -1;
	int32_t t166 = 31;

    t166 = ((x665&x666)!=(x667==x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x670 = 29U;
	volatile int64_t x671 = -1LL;
	int64_t x672 = 4LL;
	int32_t t167 = 45;

    t167 = ((x669&x670)!=(x671==x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x673 = UINT32_MAX;
	int16_t x674 = INT16_MIN;
	int8_t x675 = 33;
	volatile uint8_t x676 = 1U;
	volatile int32_t t168 = 49224353;

    t168 = ((x673&x674)!=(x675==x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int8_t x677 = 3;
	int64_t x678 = 4LL;
	volatile int32_t x679 = INT32_MIN;
	volatile int32_t x680 = -2;
	int32_t t169 = 43069;

    t169 = ((x677&x678)!=(x679==x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = INT32_MIN;
	int8_t x683 = 0;
	int64_t x684 = 12LL;
	static int32_t t170 = -2529618;

    t170 = ((x681&x682)!=(x683==x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x687 = UINT16_MAX;
	static volatile int32_t t171 = -9;

    t171 = ((x685&x686)!=(x687==x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x690 = -1;
	int8_t x691 = -2;
	int16_t x692 = 1;
	int32_t t172 = 20;

    t172 = ((x689&x690)!=(x691==x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = INT8_MIN;
	uint64_t x694 = UINT64_MAX;
	int32_t x696 = INT32_MIN;
	static int32_t t173 = 1421840;

    t173 = ((x693&x694)!=(x695==x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x697 = 87U;
	int32_t x698 = -1;
	static int16_t x699 = 1;
	volatile int32_t t174 = -6147;

    t174 = ((x697&x698)!=(x699==x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x701 = 49U;
	int32_t x702 = -1;
	int8_t x704 = 11;
	volatile int32_t t175 = -28915;

    t175 = ((x701&x702)!=(x703==x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = -5428144;
	volatile uint32_t x706 = 2696506U;
	int16_t x707 = INT16_MIN;
	uint8_t x708 = UINT8_MAX;
	volatile int32_t t176 = 22;

    t176 = ((x705&x706)!=(x707==x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = -17633;
	int32_t x710 = -1;
	int64_t x711 = INT64_MIN;
	static volatile int8_t x712 = INT8_MIN;
	int32_t t177 = -42625;

    t177 = ((x709&x710)!=(x711==x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x715 = INT32_MIN;
	static uint64_t x716 = 3448326LLU;
	int32_t t178 = 14527002;

    t178 = ((x713&x714)!=(x715==x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = INT64_MAX;
	uint16_t x718 = 1U;
	static int16_t x720 = -1;
	int32_t t179 = 0;

    t179 = ((x717&x718)!=(x719==x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = INT64_MIN;
	int64_t x722 = -15LL;
	volatile int8_t x723 = 0;
	static volatile int32_t t180 = -54286;

    t180 = ((x721&x722)!=(x723==x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x725 = UINT16_MAX;
	uint16_t x728 = 5874U;
	int32_t t181 = 1;

    t181 = ((x725&x726)!=(x727==x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x729 = INT64_MIN;
	uint16_t x730 = UINT16_MAX;
	int32_t x731 = INT32_MIN;
	uint8_t x732 = 8U;
	volatile int32_t t182 = -201696111;

    t182 = ((x729&x730)!=(x731==x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x733 = INT16_MIN;
	uint8_t x735 = UINT8_MAX;
	uint64_t x736 = UINT64_MAX;
	volatile int32_t t183 = 979025182;

    t183 = ((x733&x734)!=(x735==x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x739 = UINT64_MAX;
	int8_t x740 = 9;
	int32_t t184 = 4164;

    t184 = ((x737&x738)!=(x739==x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x742 = INT64_MIN;
	int16_t x744 = INT16_MIN;
	int32_t t185 = 716103;

    t185 = ((x741&x742)!=(x743==x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x747 = 52U;
	volatile int64_t x748 = -1523736LL;
	static int32_t t186 = 30227324;

    t186 = ((x745&x746)!=(x747==x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x749 = 397017444U;
	int32_t x750 = 863301;
	static volatile uint8_t x751 = 1U;
	static volatile uint64_t x752 = UINT64_MAX;
	static int32_t t187 = 155269;

    t187 = ((x749&x750)!=(x751==x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x754 = UINT8_MAX;
	volatile int8_t x755 = 53;
	uint8_t x756 = 0U;
	volatile int32_t t188 = -11;

    t188 = ((x753&x754)!=(x755==x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x757 = INT16_MIN;
	volatile int32_t x758 = INT32_MIN;
	int64_t x759 = INT64_MIN;
	uint8_t x760 = 15U;
	int32_t t189 = 1270;

    t189 = ((x757&x758)!=(x759==x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x761 = 34U;
	uint64_t x762 = 475444LLU;
	static uint8_t x763 = 7U;
	uint16_t x764 = 27U;
	int32_t t190 = -310796154;

    t190 = ((x761&x762)!=(x763==x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int8_t x765 = -1;
	static volatile int16_t x766 = INT16_MIN;
	int16_t x767 = INT16_MIN;
	int64_t x768 = INT64_MIN;
	volatile int32_t t191 = 1;

    t191 = ((x765&x766)!=(x767==x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x769 = INT8_MIN;
	uint32_t x770 = 718U;
	uint64_t x771 = 36LLU;
	int64_t x772 = INT64_MIN;
	int32_t t192 = -35800805;

    t192 = ((x769&x770)!=(x771==x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x773 = INT64_MAX;
	uint32_t x774 = 4570223U;
	volatile int16_t x775 = 1;
	int8_t x776 = INT8_MIN;
	int32_t t193 = -117375855;

    t193 = ((x773&x774)!=(x775==x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x778 = INT32_MIN;
	int64_t x779 = -102515401LL;
	static volatile uint16_t x780 = 408U;
	volatile int32_t t194 = -230493632;

    t194 = ((x777&x778)!=(x779==x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = INT32_MIN;
	uint16_t x782 = 63U;
	int32_t x783 = INT32_MIN;
	int32_t x784 = 220037168;
	volatile int32_t t195 = -508985949;

    t195 = ((x781&x782)!=(x783==x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x786 = -1;
	volatile uint16_t x787 = 0U;
	uint16_t x788 = 13U;
	static int32_t t196 = 388;

    t196 = ((x785&x786)!=(x787==x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint16_t x789 = UINT16_MAX;
	int16_t x790 = -8;
	int64_t x791 = -7556816194LL;
	volatile int8_t x792 = -1;
	int32_t t197 = -604315;

    t197 = ((x789&x790)!=(x791==x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x794 = INT16_MIN;
	uint32_t x795 = 144U;
	uint8_t x796 = UINT8_MAX;

    t198 = ((x793&x794)!=(x795==x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x797 = 17U;
	int32_t x798 = -3;
	int32_t x800 = -38109;
	int32_t t199 = 131021;

    t199 = ((x797&x798)!=(x799==x800));

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

