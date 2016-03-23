
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

static int32_t x1 = -6309;
volatile int32_t x2 = INT32_MIN;
int64_t x9 = INT64_MIN;
int64_t x10 = INT64_MAX;
volatile int32_t t3 = -13;
uint32_t x18 = 10U;
int32_t t4 = 25;
volatile int64_t x21 = 99595128352LL;
volatile int32_t t6 = -12759839;
static volatile int64_t x34 = INT64_MAX;
uint64_t x41 = 69449470371763895LLU;
volatile int8_t x43 = -6;
static int16_t x46 = -1;
volatile int32_t t14 = -23367036;
int64_t x63 = INT64_MIN;
volatile uint32_t x67 = UINT32_MAX;
volatile int64_t x73 = INT64_MAX;
static int8_t x75 = INT8_MIN;
int32_t x78 = INT32_MIN;
int32_t x82 = -1;
volatile uint64_t x84 = UINT64_MAX;
uint64_t x85 = 77148794481772388LLU;
static volatile int32_t t22 = 843972;
static int64_t x96 = 1753280231643LL;
int32_t t23 = 645237;
volatile int32_t t24 = 1;
volatile int16_t x104 = 787;
static int64_t x105 = INT64_MAX;
int64_t x109 = INT64_MIN;
uint64_t x112 = 937433710499LLU;
int32_t t27 = -7532;
volatile uint32_t x122 = 1428U;
int8_t x131 = INT8_MIN;
volatile int32_t t32 = -316211;
uint32_t x133 = 434U;
uint32_t x134 = UINT32_MAX;
uint16_t x137 = 0U;
int64_t x139 = INT64_MIN;
volatile uint8_t x140 = UINT8_MAX;
volatile int32_t t34 = 105426;
static volatile int32_t x144 = 81986;
int64_t x148 = INT64_MIN;
int8_t x150 = -1;
static volatile uint64_t x152 = 99799281124LLU;
int16_t x162 = INT16_MIN;
uint32_t x164 = UINT32_MAX;
uint8_t x167 = 1U;
int8_t x169 = INT8_MIN;
int64_t x170 = 568935777882248811LL;
int64_t x181 = 2LL;
volatile int64_t x182 = INT64_MIN;
uint8_t x184 = 20U;
volatile int16_t x197 = INT16_MIN;
uint64_t x198 = UINT64_MAX;
volatile int32_t x200 = -452273381;
static uint16_t x211 = 556U;
int64_t x214 = INT64_MIN;
int32_t t53 = 60366766;
int32_t x221 = INT32_MIN;
volatile uint64_t x222 = UINT64_MAX;
static int32_t t55 = -117634;
volatile int32_t t56 = 410777;
volatile int64_t x233 = INT64_MIN;
uint8_t x235 = 0U;
int32_t x237 = INT32_MIN;
int16_t x247 = INT16_MIN;
int64_t x248 = INT64_MIN;
volatile int64_t x252 = 0LL;
static uint64_t x255 = 707185LLU;
static int32_t x260 = -1;
int8_t x262 = INT8_MIN;
int8_t x266 = INT8_MIN;
int16_t x268 = INT16_MIN;
int32_t t66 = -12039;
int32_t x271 = INT32_MIN;
volatile int64_t x275 = -1LL;
static uint64_t x282 = UINT64_MAX;
int32_t t73 = -269274;
uint64_t x304 = 29LLU;
int8_t x309 = INT8_MAX;
static int64_t x312 = -186817377177LL;
volatile int32_t t77 = -186337;
int32_t x315 = INT32_MIN;
uint8_t x318 = 1U;
uint32_t x333 = UINT32_MAX;
int32_t x334 = 0;
static int16_t x337 = 499;
volatile int16_t x338 = -3587;
int16_t x345 = -6875;
int64_t x346 = -8692992399LL;
int32_t t87 = 70675;
uint64_t x356 = 19189567LLU;
volatile uint32_t x357 = 13U;
int32_t x358 = INT32_MIN;
static int16_t x359 = INT16_MAX;
int32_t x362 = INT32_MIN;
int32_t t90 = 101234522;
int8_t x366 = 19;
static volatile int32_t t91 = 404;
int64_t x372 = -1116725LL;
volatile int32_t t92 = 24094587;
volatile int32_t x374 = 3672;
uint32_t x376 = 853649U;
int64_t x378 = INT64_MIN;
uint8_t x381 = 45U;
int16_t x384 = -1;
int8_t x388 = -2;
uint8_t x394 = 24U;
static int64_t x396 = INT64_MIN;
int32_t t99 = 156466912;
static int32_t x406 = INT32_MAX;
int8_t x409 = INT8_MIN;
int64_t x415 = INT64_MIN;
int8_t x420 = 1;
static volatile int8_t x424 = -1;
static int8_t x435 = INT8_MIN;
uint8_t x438 = UINT8_MAX;
static int16_t x439 = INT16_MAX;
int16_t x450 = INT16_MAX;
int32_t x453 = -1;
static volatile uint16_t x459 = 1U;
int8_t x465 = -1;
static int32_t t118 = -78723;
int8_t x477 = INT8_MIN;
static int8_t x478 = -1;
volatile uint64_t x480 = 3384LLU;
volatile int32_t t119 = -238185;
volatile int16_t x482 = INT16_MAX;
static volatile int32_t t120 = -87567275;
int16_t x488 = INT16_MAX;
int16_t x489 = INT16_MIN;
uint16_t x490 = UINT16_MAX;
int32_t t123 = 53;
int32_t x499 = 133430609;
volatile int64_t x503 = INT64_MAX;
int16_t x507 = INT16_MIN;
static volatile int32_t t128 = -2;
int64_t x517 = INT64_MIN;
int64_t x536 = -1LL;
volatile int32_t x538 = INT32_MAX;
volatile uint8_t x540 = 94U;
int64_t x544 = -15652749101603LL;
volatile int32_t t135 = 24;
int64_t x555 = -1LL;
static uint64_t x561 = 78192832LLU;
static int64_t x564 = -32446461LL;
static uint8_t x567 = 2U;
static volatile uint64_t x568 = 87695608821LLU;
volatile int32_t t141 = 421;
static uint64_t x572 = 30967824894359217LLU;
static volatile uint32_t x574 = 0U;
int16_t x582 = INT16_MIN;
int16_t x585 = -63;
int64_t x586 = 613546879807LL;
int8_t x591 = 1;
int8_t x594 = -1;
int64_t x596 = -6LL;
int16_t x599 = INT16_MAX;
int16_t x602 = INT16_MIN;
int8_t x603 = -1;
volatile int8_t x606 = 25;
static uint64_t x611 = UINT64_MAX;
int32_t t152 = -30;
volatile uint16_t x618 = UINT16_MAX;
int32_t t154 = 2;
static volatile uint16_t x621 = UINT16_MAX;
static int16_t x622 = INT16_MIN;
int32_t t157 = -6;
int8_t x639 = -1;
int32_t t159 = -10443031;
int8_t x645 = -1;
volatile int8_t x646 = 0;
static uint64_t x647 = 218342040LLU;
uint16_t x649 = 5837U;
uint32_t x651 = 28U;
int64_t x652 = INT64_MAX;
static volatile int32_t x654 = INT32_MIN;
int32_t x666 = 1;
static uint32_t x667 = 29070613U;
int8_t x670 = -1;
int8_t x671 = 0;
int32_t x677 = -1;
int16_t x681 = INT16_MIN;
int32_t t174 = -239323;
static int32_t t175 = 0;
volatile int64_t x710 = -85331099540LL;
int64_t x716 = INT64_MAX;
volatile uint64_t x717 = 206427354810LLU;
uint16_t x721 = 833U;
volatile int16_t x726 = -1;
int8_t x727 = 0;
static volatile int32_t t181 = 100705;
static int16_t x734 = 75;
uint16_t x735 = UINT16_MAX;
volatile int32_t x736 = 1844;
volatile uint64_t x749 = 67553LLU;
static uint32_t x753 = 39147249U;
static volatile int16_t x762 = -196;
static uint64_t x765 = UINT64_MAX;
volatile uint32_t x767 = 8U;
static uint16_t x770 = 21U;
static uint32_t x773 = UINT32_MAX;
volatile int32_t t193 = 3;
int32_t x781 = INT32_MAX;
int16_t x782 = 3914;
uint16_t x784 = 36U;
uint32_t x787 = 52280734U;
volatile int16_t x799 = 1;


void f0(void) {
    	int64_t x3 = -1LL;
	int32_t x4 = INT32_MIN;
	int32_t t0 = 7346;

    t0 = ((x1==x2)>(x3<=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = INT16_MIN;
	int16_t x6 = INT16_MAX;
	int32_t x7 = INT32_MIN;
	int64_t x8 = -1LL;
	int32_t t1 = -1;

    t1 = ((x5==x6)>(x7<=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x11 = -1LL;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = 0;

    t2 = ((x9==x10)>(x11<=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint32_t x13 = 12541U;
	static uint32_t x14 = 2U;
	int32_t x15 = -1;
	volatile int16_t x16 = INT16_MAX;

    t3 = ((x13==x14)>(x15<=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = UINT16_MAX;
	volatile int64_t x19 = INT64_MAX;
	int32_t x20 = -28479153;

    t4 = ((x17==x18)>(x19<=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x22 = -247281108LL;
	int64_t x23 = -313497999LL;
	int8_t x24 = -5;
	volatile int32_t t5 = 371;

    t5 = ((x21==x22)>(x23<=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -1LL;
	int8_t x26 = INT8_MIN;
	uint32_t x27 = UINT32_MAX;
	int8_t x28 = INT8_MIN;

    t6 = ((x25==x26)>(x27<=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x29 = 2;
	volatile int16_t x30 = -2;
	volatile uint8_t x31 = 4U;
	int8_t x32 = -1;
	int32_t t7 = -3139429;

    t7 = ((x29==x30)>(x31<=x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x33 = -15;
	uint64_t x35 = 53094229LLU;
	uint16_t x36 = 81U;
	int32_t t8 = 1587914;

    t8 = ((x33==x34)>(x35<=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x37 = INT32_MIN;
	static volatile uint64_t x38 = 0LLU;
	volatile int32_t x39 = -27;
	int64_t x40 = -4544014352168215496LL;
	volatile int32_t t9 = 76;

    t9 = ((x37==x38)>(x39<=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x42 = -1LL;
	int64_t x44 = 16551918133LL;
	volatile int32_t t10 = 106;

    t10 = ((x41==x42)>(x43<=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = 103U;
	int64_t x47 = 686819506LL;
	int8_t x48 = -5;
	int32_t t11 = -1556002;

    t11 = ((x45==x46)>(x47<=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MIN;
	int64_t x50 = INT64_MIN;
	static uint16_t x51 = 235U;
	uint8_t x52 = 103U;
	volatile int32_t t12 = -406921594;

    t12 = ((x49==x50)>(x51<=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x53 = INT16_MIN;
	int8_t x54 = -22;
	static uint64_t x55 = UINT64_MAX;
	int8_t x56 = 1;
	int32_t t13 = 505932205;

    t13 = ((x53==x54)>(x55<=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MIN;
	int64_t x58 = INT64_MIN;
	int8_t x59 = INT8_MIN;
	uint8_t x60 = UINT8_MAX;

    t14 = ((x57==x58)>(x59<=x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint16_t x61 = UINT16_MAX;
	int32_t x62 = INT32_MIN;
	int16_t x64 = -127;
	int32_t t15 = -16155;

    t15 = ((x61==x62)>(x63<=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = INT64_MIN;
	int64_t x66 = INT64_MIN;
	volatile int32_t x68 = 4;
	static int32_t t16 = 25427730;

    t16 = ((x65==x66)>(x67<=x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = 0;
	static int64_t x70 = -6431755630LL;
	int8_t x71 = INT8_MIN;
	uint32_t x72 = 116U;
	volatile int32_t t17 = -8371;

    t17 = ((x69==x70)>(x71<=x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x74 = 1;
	int16_t x76 = INT16_MAX;
	volatile int32_t t18 = 721;

    t18 = ((x73==x74)>(x75<=x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x77 = UINT8_MAX;
	static int64_t x79 = INT64_MIN;
	static int32_t x80 = 207393;
	volatile int32_t t19 = -36573544;

    t19 = ((x77==x78)>(x79<=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MIN;
	volatile int64_t x83 = INT64_MIN;
	int32_t t20 = -1;

    t20 = ((x81==x82)>(x83<=x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x86 = INT32_MIN;
	int16_t x87 = INT16_MIN;
	static int8_t x88 = INT8_MIN;
	volatile int32_t t21 = 0;

    t21 = ((x85==x86)>(x87<=x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = 7U;
	volatile int8_t x90 = INT8_MIN;
	volatile int16_t x91 = INT16_MIN;
	static uint64_t x92 = 498747017LLU;

    t22 = ((x89==x90)>(x91<=x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MIN;
	uint16_t x94 = 18U;
	int64_t x95 = 405083LL;

    t23 = ((x93==x94)>(x95<=x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x97 = INT64_MIN;
	static int64_t x98 = INT64_MIN;
	int16_t x99 = 20;
	static int8_t x100 = 0;

    t24 = ((x97==x98)>(x99<=x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = INT32_MAX;
	int64_t x102 = INT64_MIN;
	int16_t x103 = -10;
	static int32_t t25 = -65972;

    t25 = ((x101==x102)>(x103<=x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x106 = 91U;
	static int32_t x107 = -1;
	static uint64_t x108 = 37LLU;
	static int32_t t26 = 2731;

    t26 = ((x105==x106)>(x107<=x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint32_t x110 = 57695460U;
	int64_t x111 = INT64_MIN;

    t27 = ((x109==x110)>(x111<=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = -1;
	int64_t x114 = -1LL;
	static int16_t x115 = INT16_MIN;
	int16_t x116 = -534;
	volatile int32_t t28 = -142;

    t28 = ((x113==x114)>(x115<=x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x117 = UINT8_MAX;
	int16_t x118 = -1;
	static int8_t x119 = INT8_MAX;
	static int16_t x120 = -219;
	int32_t t29 = 39899;

    t29 = ((x117==x118)>(x119<=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = INT8_MAX;
	int8_t x123 = INT8_MAX;
	int8_t x124 = INT8_MAX;
	volatile int32_t t30 = 1;

    t30 = ((x121==x122)>(x123<=x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = -1;
	uint64_t x126 = UINT64_MAX;
	int16_t x127 = -1;
	uint8_t x128 = 4U;
	int32_t t31 = -4;

    t31 = ((x125==x126)>(x127<=x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MAX;
	static int64_t x130 = INT64_MIN;
	int64_t x132 = INT64_MAX;

    t32 = ((x129==x130)>(x131<=x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x135 = INT32_MIN;
	volatile int64_t x136 = INT64_MAX;
	int32_t t33 = 3;

    t33 = ((x133==x134)>(x135<=x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x138 = UINT64_MAX;

    t34 = ((x137==x138)>(x139<=x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x141 = 2464LLU;
	int8_t x142 = INT8_MIN;
	int8_t x143 = 1;
	volatile int32_t t35 = -474406825;

    t35 = ((x141==x142)>(x143<=x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = 0U;
	uint64_t x146 = UINT64_MAX;
	int8_t x147 = 3;
	volatile int32_t t36 = 3;

    t36 = ((x145==x146)>(x147<=x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x149 = -35;
	uint32_t x151 = 12136312U;
	int32_t t37 = -1;

    t37 = ((x149==x150)>(x151<=x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = -13;
	static int8_t x154 = 0;
	int32_t x155 = 14883;
	volatile int16_t x156 = -1;
	int32_t t38 = 7139176;

    t38 = ((x153==x154)>(x155<=x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = -6;
	uint8_t x158 = 113U;
	static uint8_t x159 = UINT8_MAX;
	int32_t x160 = -331466734;
	static volatile int32_t t39 = -21293;

    t39 = ((x157==x158)>(x159<=x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x161 = 8U;
	static int16_t x163 = INT16_MAX;
	int32_t t40 = 2;

    t40 = ((x161==x162)>(x163<=x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x165 = INT16_MIN;
	int16_t x166 = INT16_MIN;
	volatile int8_t x168 = 6;
	static int32_t t41 = 2969894;

    t41 = ((x165==x166)>(x167<=x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x171 = 531U;
	int32_t x172 = INT32_MIN;
	int32_t t42 = -741249995;

    t42 = ((x169==x170)>(x171<=x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = UINT64_MAX;
	int16_t x174 = -13072;
	int8_t x175 = INT8_MIN;
	static int16_t x176 = INT16_MAX;
	int32_t t43 = 0;

    t43 = ((x173==x174)>(x175<=x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = -1;
	static uint64_t x178 = UINT64_MAX;
	static volatile int16_t x179 = -1;
	int16_t x180 = -1;
	volatile int32_t t44 = 70;

    t44 = ((x177==x178)>(x179<=x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x183 = INT64_MIN;
	int32_t t45 = 1665120;

    t45 = ((x181==x182)>(x183<=x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x185 = UINT8_MAX;
	static int32_t x186 = -1;
	uint32_t x187 = UINT32_MAX;
	int8_t x188 = -1;
	static volatile int32_t t46 = -63;

    t46 = ((x185==x186)>(x187<=x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = INT64_MIN;
	int32_t x190 = INT32_MIN;
	uint16_t x191 = 1U;
	static int64_t x192 = 3078545539LL;
	int32_t t47 = 4129240;

    t47 = ((x189==x190)>(x191<=x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x193 = 13U;
	static uint64_t x194 = 2105309480096LLU;
	int8_t x195 = -1;
	volatile int16_t x196 = 168;
	int32_t t48 = -1;

    t48 = ((x193==x194)>(x195<=x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x199 = INT16_MIN;
	int32_t t49 = -108941;

    t49 = ((x197==x198)>(x199<=x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x201 = 15LLU;
	static int32_t x202 = INT32_MAX;
	volatile int8_t x203 = INT8_MIN;
	uint64_t x204 = 696LLU;
	volatile int32_t t50 = 11625991;

    t50 = ((x201==x202)>(x203<=x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x205 = UINT16_MAX;
	int64_t x206 = -33146089603057LL;
	volatile int8_t x207 = INT8_MIN;
	static int32_t x208 = INT32_MIN;
	volatile int32_t t51 = 61216;

    t51 = ((x205==x206)>(x207<=x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x209 = 4978459LLU;
	static uint16_t x210 = 23U;
	volatile int32_t x212 = INT32_MAX;
	int32_t t52 = 89;

    t52 = ((x209==x210)>(x211<=x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = INT64_MIN;
	int32_t x215 = 3309032;
	int8_t x216 = -1;

    t53 = ((x213==x214)>(x215<=x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x217 = INT64_MAX;
	int64_t x218 = 3626552145880555948LL;
	int8_t x219 = 2;
	uint16_t x220 = 2U;
	int32_t t54 = -630714513;

    t54 = ((x217==x218)>(x219<=x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x223 = INT64_MIN;
	static int16_t x224 = -1;

    t55 = ((x221==x222)>(x223<=x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x225 = UINT16_MAX;
	int32_t x226 = 0;
	uint8_t x227 = UINT8_MAX;
	uint64_t x228 = 1871LLU;

    t56 = ((x225==x226)>(x227<=x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x229 = 6299853474652LLU;
	int64_t x230 = INT64_MAX;
	static int32_t x231 = -1;
	int64_t x232 = INT64_MIN;
	static int32_t t57 = -26192097;

    t57 = ((x229==x230)>(x231<=x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x234 = UINT8_MAX;
	uint64_t x236 = UINT64_MAX;
	int32_t t58 = 867708;

    t58 = ((x233==x234)>(x235<=x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x238 = INT16_MIN;
	volatile int64_t x239 = -15254077846352LL;
	uint16_t x240 = UINT16_MAX;
	volatile int32_t t59 = -1;

    t59 = ((x237==x238)>(x239<=x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x241 = INT64_MAX;
	int32_t x242 = INT32_MIN;
	uint64_t x243 = 1656917797015334855LLU;
	int32_t x244 = INT32_MAX;
	volatile int32_t t60 = -45670;

    t60 = ((x241==x242)>(x243<=x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x245 = UINT16_MAX;
	uint16_t x246 = 462U;
	int32_t t61 = 43;

    t61 = ((x245==x246)>(x247<=x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = INT64_MIN;
	int8_t x250 = 7;
	static int8_t x251 = -25;
	volatile int32_t t62 = 295;

    t62 = ((x249==x250)>(x251<=x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = 15004086037818LL;
	int16_t x254 = INT16_MIN;
	uint32_t x256 = 169206U;
	int32_t t63 = 124979739;

    t63 = ((x253==x254)>(x255<=x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = -4610019;
	int64_t x258 = 49LL;
	static volatile int8_t x259 = INT8_MIN;
	int32_t t64 = 1;

    t64 = ((x257==x258)>(x259<=x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int16_t x261 = 59;
	volatile int8_t x263 = INT8_MIN;
	uint8_t x264 = UINT8_MAX;
	static volatile int32_t t65 = -67;

    t65 = ((x261==x262)>(x263<=x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x265 = -1LL;
	static int8_t x267 = INT8_MIN;

    t66 = ((x265==x266)>(x267<=x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x269 = UINT64_MAX;
	volatile int64_t x270 = -1LL;
	uint64_t x272 = 1200267800246752LLU;
	volatile int32_t t67 = -38492052;

    t67 = ((x269==x270)>(x271<=x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x273 = UINT8_MAX;
	int64_t x274 = -134LL;
	uint16_t x276 = 59U;
	int32_t t68 = -864534974;

    t68 = ((x273==x274)>(x275<=x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x277 = UINT64_MAX;
	int64_t x278 = INT64_MIN;
	static int8_t x279 = -1;
	uint16_t x280 = UINT16_MAX;
	volatile int32_t t69 = -28042;

    t69 = ((x277==x278)>(x279<=x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = INT32_MIN;
	int32_t x283 = INT32_MIN;
	static int16_t x284 = INT16_MIN;
	int32_t t70 = -9341409;

    t70 = ((x281==x282)>(x283<=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = -1;
	int32_t x286 = -1;
	int16_t x287 = INT16_MAX;
	static uint8_t x288 = UINT8_MAX;
	int32_t t71 = 45162118;

    t71 = ((x285==x286)>(x287<=x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x289 = 21U;
	static int8_t x290 = -2;
	static uint32_t x291 = UINT32_MAX;
	uint8_t x292 = UINT8_MAX;
	volatile int32_t t72 = 41112328;

    t72 = ((x289==x290)>(x291<=x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = INT64_MIN;
	volatile int16_t x294 = INT16_MAX;
	int16_t x295 = -1;
	static int8_t x296 = -1;

    t73 = ((x293==x294)>(x295<=x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = -1;
	volatile uint16_t x298 = 37U;
	uint16_t x299 = UINT16_MAX;
	int32_t x300 = INT32_MIN;
	volatile int32_t t74 = -14;

    t74 = ((x297==x298)>(x299<=x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x301 = -1;
	int64_t x302 = INT64_MAX;
	uint64_t x303 = 3094LLU;
	static int32_t t75 = -1245079;

    t75 = ((x301==x302)>(x303<=x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = 30;
	uint16_t x306 = 96U;
	int8_t x307 = 3;
	int64_t x308 = INT64_MIN;
	int32_t t76 = 1;

    t76 = ((x305==x306)>(x307<=x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x310 = UINT16_MAX;
	static uint16_t x311 = UINT16_MAX;

    t77 = ((x309==x310)>(x311<=x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = -1;
	static uint64_t x314 = UINT64_MAX;
	static uint32_t x316 = 633347844U;
	int32_t t78 = 0;

    t78 = ((x313==x314)>(x315<=x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x317 = INT32_MIN;
	int32_t x319 = -4;
	uint16_t x320 = 643U;
	volatile int32_t t79 = -9;

    t79 = ((x317==x318)>(x319<=x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x321 = 0U;
	uint8_t x322 = 1U;
	int64_t x323 = -1LL;
	uint32_t x324 = UINT32_MAX;
	int32_t t80 = -20073895;

    t80 = ((x321==x322)>(x323<=x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = -1;
	volatile uint8_t x326 = UINT8_MAX;
	static uint8_t x327 = 1U;
	int8_t x328 = -52;
	volatile int32_t t81 = -13050;

    t81 = ((x325==x326)>(x327<=x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = 15918012984LL;
	int8_t x330 = 21;
	static int16_t x331 = -1;
	static uint64_t x332 = 122084950LLU;
	int32_t t82 = 8;

    t82 = ((x329==x330)>(x331<=x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x335 = UINT64_MAX;
	int8_t x336 = -7;
	static volatile int32_t t83 = -322399470;

    t83 = ((x333==x334)>(x335<=x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x339 = -1;
	uint32_t x340 = UINT32_MAX;
	volatile int32_t t84 = -476649408;

    t84 = ((x337==x338)>(x339<=x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = INT32_MIN;
	int64_t x342 = INT64_MIN;
	static int16_t x343 = 42;
	int8_t x344 = 5;
	volatile int32_t t85 = -125769;

    t85 = ((x341==x342)>(x343<=x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x347 = 27;
	static int32_t x348 = INT32_MAX;
	volatile int32_t t86 = 23591436;

    t86 = ((x345==x346)>(x347<=x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x349 = INT64_MIN;
	static uint8_t x350 = UINT8_MAX;
	int16_t x351 = INT16_MAX;
	static int16_t x352 = INT16_MIN;

    t87 = ((x349==x350)>(x351<=x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x353 = 15051090U;
	static volatile int8_t x354 = INT8_MAX;
	static int16_t x355 = 6;
	volatile int32_t t88 = 1;

    t88 = ((x353==x354)>(x355<=x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x360 = 7403525U;
	int32_t t89 = -4156540;

    t89 = ((x357==x358)>(x359<=x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x361 = INT16_MIN;
	static int16_t x363 = -1;
	static int8_t x364 = INT8_MAX;

    t90 = ((x361==x362)>(x363<=x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x365 = -1;
	volatile int32_t x367 = INT32_MIN;
	int64_t x368 = INT64_MAX;

    t91 = ((x365==x366)>(x367<=x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = -1;
	int8_t x370 = INT8_MIN;
	int64_t x371 = -3700338234294LL;

    t92 = ((x369==x370)>(x371<=x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x373 = 9735U;
	static uint16_t x375 = 231U;
	volatile int32_t t93 = 852275;

    t93 = ((x373==x374)>(x375<=x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = INT8_MIN;
	uint16_t x379 = 55U;
	volatile int64_t x380 = INT64_MAX;
	static int32_t t94 = 13918426;

    t94 = ((x377==x378)>(x379<=x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x382 = INT8_MIN;
	volatile int32_t x383 = INT32_MIN;
	int32_t t95 = 510;

    t95 = ((x381==x382)>(x383<=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x385 = 0;
	uint16_t x386 = 29U;
	uint16_t x387 = 1583U;
	volatile int32_t t96 = -2082507;

    t96 = ((x385==x386)>(x387<=x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x389 = INT64_MIN;
	uint16_t x390 = 470U;
	static uint16_t x391 = 9370U;
	volatile uint32_t x392 = UINT32_MAX;
	static int32_t t97 = -32;

    t97 = ((x389==x390)>(x391<=x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x393 = 4U;
	static uint8_t x395 = 3U;
	int32_t t98 = -7;

    t98 = ((x393==x394)>(x395<=x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = -1LL;
	static uint16_t x398 = 1U;
	static int32_t x399 = INT32_MIN;
	static uint32_t x400 = 2917U;

    t99 = ((x397==x398)>(x399<=x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = -1056680073LL;
	static uint16_t x402 = 2823U;
	static int64_t x403 = -34350889068155LL;
	static int16_t x404 = INT16_MIN;
	static volatile int32_t t100 = -1419;

    t100 = ((x401==x402)>(x403<=x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x405 = 13433430134231LLU;
	uint32_t x407 = UINT32_MAX;
	uint64_t x408 = 163446145043735053LLU;
	static int32_t t101 = -1;

    t101 = ((x405==x406)>(x407<=x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x410 = 0U;
	int16_t x411 = -506;
	static int16_t x412 = -1;
	volatile int32_t t102 = -27;

    t102 = ((x409==x410)>(x411<=x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = INT8_MAX;
	uint8_t x414 = 7U;
	uint8_t x416 = 1U;
	static volatile int32_t t103 = -459;

    t103 = ((x413==x414)>(x415<=x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = INT64_MIN;
	uint16_t x418 = 5U;
	volatile uint8_t x419 = 14U;
	volatile int32_t t104 = -169;

    t104 = ((x417==x418)>(x419<=x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = INT8_MAX;
	int64_t x422 = INT64_MAX;
	int16_t x423 = INT16_MIN;
	static volatile int32_t t105 = 5964;

    t105 = ((x421==x422)>(x423<=x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x425 = INT64_MIN;
	uint64_t x426 = UINT64_MAX;
	uint64_t x427 = 1172872082LLU;
	int8_t x428 = INT8_MIN;
	volatile int32_t t106 = 1;

    t106 = ((x425==x426)>(x427<=x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint16_t x429 = 111U;
	int64_t x430 = -238329584LL;
	uint32_t x431 = 78U;
	uint16_t x432 = 568U;
	volatile int32_t t107 = -5045604;

    t107 = ((x429==x430)>(x431<=x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = 1468553LL;
	int64_t x434 = INT64_MAX;
	static volatile int16_t x436 = 505;
	static int32_t t108 = 7;

    t108 = ((x433==x434)>(x435<=x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = INT32_MAX;
	static int64_t x440 = 11LL;
	volatile int32_t t109 = -211;

    t109 = ((x437==x438)>(x439<=x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = INT8_MIN;
	int32_t x442 = -1;
	uint16_t x443 = 2198U;
	int32_t x444 = 28233;
	static int32_t t110 = 20;

    t110 = ((x441==x442)>(x443<=x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = INT32_MIN;
	int8_t x446 = INT8_MIN;
	static int8_t x447 = INT8_MAX;
	uint32_t x448 = UINT32_MAX;
	volatile int32_t t111 = 1323;

    t111 = ((x445==x446)>(x447<=x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x449 = -7978240;
	static uint16_t x451 = 110U;
	static uint64_t x452 = UINT64_MAX;
	volatile int32_t t112 = 186427;

    t112 = ((x449==x450)>(x451<=x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x454 = -1;
	volatile uint8_t x455 = UINT8_MAX;
	int8_t x456 = INT8_MIN;
	int32_t t113 = 8008;

    t113 = ((x453==x454)>(x455<=x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = 5;
	static int64_t x458 = -1LL;
	static volatile int64_t x460 = INT64_MIN;
	int32_t t114 = -497846956;

    t114 = ((x457==x458)>(x459<=x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x461 = INT8_MIN;
	int8_t x462 = INT8_MIN;
	uint8_t x463 = 57U;
	uint16_t x464 = UINT16_MAX;
	volatile int32_t t115 = -109703600;

    t115 = ((x461==x462)>(x463<=x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint32_t x466 = 2U;
	int8_t x467 = INT8_MAX;
	int32_t x468 = INT32_MAX;
	int32_t t116 = -72;

    t116 = ((x465==x466)>(x467<=x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x469 = UINT32_MAX;
	volatile int64_t x470 = 337238365711LL;
	volatile int32_t x471 = 1681283;
	int32_t x472 = -28298877;
	volatile int32_t t117 = 18086;

    t117 = ((x469==x470)>(x471<=x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = INT64_MIN;
	int16_t x474 = INT16_MAX;
	uint32_t x475 = 71U;
	int8_t x476 = -1;

    t118 = ((x473==x474)>(x475<=x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x479 = INT32_MIN;

    t119 = ((x477==x478)>(x479<=x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x481 = INT8_MIN;
	uint64_t x483 = 0LLU;
	static uint64_t x484 = UINT64_MAX;

    t120 = ((x481==x482)>(x483<=x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = -25;
	int16_t x486 = 1;
	volatile int16_t x487 = INT16_MIN;
	volatile int32_t t121 = -394;

    t121 = ((x485==x486)>(x487<=x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x491 = -5289535168956221LL;
	static int16_t x492 = -1;
	static volatile int32_t t122 = -3770225;

    t122 = ((x489==x490)>(x491<=x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x493 = 43923276318LL;
	int32_t x494 = INT32_MAX;
	static volatile uint32_t x495 = 852151U;
	uint16_t x496 = 5050U;

    t123 = ((x493==x494)>(x495<=x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x497 = UINT32_MAX;
	static volatile uint32_t x498 = 265343U;
	uint64_t x500 = 398LLU;
	volatile int32_t t124 = -205;

    t124 = ((x497==x498)>(x499<=x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x501 = UINT16_MAX;
	static int8_t x502 = INT8_MIN;
	static uint64_t x504 = UINT64_MAX;
	int32_t t125 = 24;

    t125 = ((x501==x502)>(x503<=x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x505 = INT8_MIN;
	int64_t x506 = -310178130981369185LL;
	static volatile int8_t x508 = INT8_MIN;
	int32_t t126 = -227917626;

    t126 = ((x505==x506)>(x507<=x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x509 = INT32_MIN;
	static int32_t x510 = INT32_MAX;
	int64_t x511 = INT64_MIN;
	uint64_t x512 = UINT64_MAX;
	volatile int32_t t127 = -87;

    t127 = ((x509==x510)>(x511<=x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x513 = 279U;
	volatile int16_t x514 = INT16_MAX;
	int64_t x515 = -39863081LL;
	volatile int32_t x516 = INT32_MAX;

    t128 = ((x513==x514)>(x515<=x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x518 = 130431U;
	uint64_t x519 = 1LLU;
	int16_t x520 = INT16_MAX;
	int32_t t129 = -146;

    t129 = ((x517==x518)>(x519<=x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x521 = 506U;
	uint64_t x522 = UINT64_MAX;
	volatile uint16_t x523 = UINT16_MAX;
	static int64_t x524 = INT64_MIN;
	int32_t t130 = 7553;

    t130 = ((x521==x522)>(x523<=x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x525 = UINT64_MAX;
	int8_t x526 = -1;
	volatile int8_t x527 = INT8_MAX;
	volatile int64_t x528 = INT64_MAX;
	volatile int32_t t131 = 7;

    t131 = ((x525==x526)>(x527<=x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x529 = 1U;
	uint64_t x530 = 27857578243LLU;
	static volatile int16_t x531 = INT16_MIN;
	int32_t x532 = INT32_MIN;
	static int32_t t132 = 23;

    t132 = ((x529==x530)>(x531<=x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = -4185;
	int32_t x534 = -1;
	int16_t x535 = -1;
	int32_t t133 = -1;

    t133 = ((x533==x534)>(x535<=x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x537 = 13U;
	volatile uint8_t x539 = 4U;
	int32_t t134 = 733637811;

    t134 = ((x537==x538)>(x539<=x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int8_t x541 = INT8_MIN;
	static uint8_t x542 = 1U;
	static volatile int32_t x543 = -4973;

    t135 = ((x541==x542)>(x543<=x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x545 = 125LLU;
	int64_t x546 = INT64_MIN;
	int64_t x547 = -1LL;
	uint64_t x548 = 439008074536629297LLU;
	int32_t t136 = 84583;

    t136 = ((x545==x546)>(x547<=x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x549 = INT64_MIN;
	int8_t x550 = -2;
	volatile int8_t x551 = 1;
	volatile uint16_t x552 = 0U;
	int32_t t137 = 125912900;

    t137 = ((x549==x550)>(x551<=x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = -27;
	int8_t x554 = INT8_MAX;
	static int64_t x556 = INT64_MIN;
	volatile int32_t t138 = 22503242;

    t138 = ((x553==x554)>(x555<=x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x557 = 54LLU;
	int64_t x558 = INT64_MIN;
	int32_t x559 = INT32_MAX;
	int64_t x560 = 866294004513437LL;
	volatile int32_t t139 = 1500680;

    t139 = ((x557==x558)>(x559<=x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x562 = INT8_MAX;
	int16_t x563 = INT16_MAX;
	volatile int32_t t140 = -1483006;

    t140 = ((x561==x562)>(x563<=x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = -1;
	int8_t x566 = -1;

    t141 = ((x565==x566)>(x567<=x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = -381313782664215331LL;
	int32_t x570 = INT32_MIN;
	uint32_t x571 = UINT32_MAX;
	volatile int32_t t142 = -192337476;

    t142 = ((x569==x570)>(x571<=x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x573 = 956U;
	static int64_t x575 = INT64_MAX;
	volatile uint32_t x576 = 1903150U;
	static int32_t t143 = 0;

    t143 = ((x573==x574)>(x575<=x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int8_t x577 = -1;
	uint8_t x578 = UINT8_MAX;
	int16_t x579 = INT16_MAX;
	volatile int32_t x580 = INT32_MIN;
	static volatile int32_t t144 = -4603185;

    t144 = ((x577==x578)>(x579<=x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x581 = UINT16_MAX;
	static uint32_t x583 = 4196597U;
	static uint8_t x584 = 6U;
	int32_t t145 = 900;

    t145 = ((x581==x582)>(x583<=x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x587 = 78U;
	int64_t x588 = -51426912695454LL;
	int32_t t146 = 19;

    t146 = ((x585==x586)>(x587<=x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = INT8_MAX;
	int8_t x590 = INT8_MAX;
	volatile int8_t x592 = -7;
	int32_t t147 = 4574323;

    t147 = ((x589==x590)>(x591<=x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile uint32_t x593 = 5U;
	uint64_t x595 = 3316295738677403LLU;
	volatile int32_t t148 = 519103407;

    t148 = ((x593==x594)>(x595<=x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x597 = 43U;
	uint64_t x598 = UINT64_MAX;
	int8_t x600 = INT8_MIN;
	int32_t t149 = -1;

    t149 = ((x597==x598)>(x599<=x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = -61952701792754LL;
	static uint32_t x604 = 141204U;
	volatile int32_t t150 = -477427;

    t150 = ((x601==x602)>(x603<=x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x605 = UINT64_MAX;
	volatile int32_t x607 = -40980462;
	uint64_t x608 = 3832908714288LLU;
	volatile int32_t t151 = -223368585;

    t151 = ((x605==x606)>(x607<=x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x609 = UINT16_MAX;
	uint8_t x610 = 1U;
	uint8_t x612 = 2U;

    t152 = ((x609==x610)>(x611<=x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x613 = -28LL;
	static uint32_t x614 = 1291432395U;
	int16_t x615 = -1;
	uint64_t x616 = 3LLU;
	int32_t t153 = -63182396;

    t153 = ((x613==x614)>(x615<=x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x617 = 120U;
	int64_t x619 = -1LL;
	uint32_t x620 = UINT32_MAX;

    t154 = ((x617==x618)>(x619<=x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x623 = 1U;
	uint8_t x624 = UINT8_MAX;
	int32_t t155 = -1;

    t155 = ((x621==x622)>(x623<=x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x625 = 10U;
	static int32_t x626 = INT32_MAX;
	int8_t x627 = INT8_MIN;
	int64_t x628 = INT64_MIN;
	volatile int32_t t156 = 30671829;

    t156 = ((x625==x626)>(x627<=x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int32_t x629 = INT32_MAX;
	volatile uint64_t x630 = 2337LLU;
	int8_t x631 = -1;
	int16_t x632 = INT16_MIN;

    t157 = ((x629==x630)>(x631<=x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint16_t x633 = 949U;
	uint32_t x634 = UINT32_MAX;
	int64_t x635 = INT64_MIN;
	volatile uint32_t x636 = 663U;
	int32_t t158 = -106;

    t158 = ((x633==x634)>(x635<=x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = -2370;
	int16_t x638 = INT16_MIN;
	int16_t x640 = INT16_MAX;

    t159 = ((x637==x638)>(x639<=x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = -4;
	int32_t x642 = INT32_MAX;
	int16_t x643 = INT16_MIN;
	uint8_t x644 = 3U;
	int32_t t160 = -12158;

    t160 = ((x641==x642)>(x643<=x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x648 = 8U;
	volatile int32_t t161 = 9;

    t161 = ((x645==x646)>(x647<=x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x650 = INT16_MAX;
	int32_t t162 = 7;

    t162 = ((x649==x650)>(x651<=x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x653 = -1LL;
	static uint8_t x655 = 4U;
	uint16_t x656 = UINT16_MAX;
	int32_t t163 = -1;

    t163 = ((x653==x654)>(x655<=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = INT32_MIN;
	int32_t x658 = 3653;
	static volatile uint64_t x659 = 108683LLU;
	int8_t x660 = INT8_MAX;
	int32_t t164 = -238;

    t164 = ((x657==x658)>(x659<=x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x661 = INT8_MIN;
	int8_t x662 = 62;
	volatile int32_t x663 = INT32_MAX;
	uint64_t x664 = 12374LLU;
	volatile int32_t t165 = -46560;

    t165 = ((x661==x662)>(x663<=x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = -1LL;
	volatile uint16_t x668 = 386U;
	volatile int32_t t166 = -195376014;

    t166 = ((x665==x666)>(x667<=x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = INT32_MAX;
	int8_t x672 = -1;
	volatile int32_t t167 = -1;

    t167 = ((x669==x670)>(x671<=x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = INT32_MIN;
	volatile uint16_t x674 = UINT16_MAX;
	static volatile int16_t x675 = INT16_MAX;
	int16_t x676 = 16042;
	static int32_t t168 = 5;

    t168 = ((x673==x674)>(x675<=x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x678 = INT16_MIN;
	static int64_t x679 = -3907012597013167564LL;
	volatile uint16_t x680 = 8U;
	static volatile int32_t t169 = -591433;

    t169 = ((x677==x678)>(x679<=x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x682 = 6137;
	volatile int64_t x683 = INT64_MIN;
	static uint16_t x684 = UINT16_MAX;
	volatile int32_t t170 = -71529564;

    t170 = ((x681==x682)>(x683<=x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = 82;
	int64_t x686 = INT64_MAX;
	static int8_t x687 = INT8_MIN;
	int8_t x688 = 1;
	int32_t t171 = -3;

    t171 = ((x685==x686)>(x687<=x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = INT8_MIN;
	uint64_t x690 = 122335LLU;
	int64_t x691 = INT64_MIN;
	int16_t x692 = INT16_MIN;
	int32_t t172 = -16;

    t172 = ((x689==x690)>(x691<=x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x693 = INT64_MIN;
	uint64_t x694 = UINT64_MAX;
	int16_t x695 = INT16_MIN;
	volatile int8_t x696 = -1;
	static int32_t t173 = 165108820;

    t173 = ((x693==x694)>(x695<=x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x697 = INT8_MIN;
	int16_t x698 = -1;
	volatile int8_t x699 = 1;
	int32_t x700 = INT32_MAX;

    t174 = ((x697==x698)>(x699<=x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = INT32_MIN;
	volatile uint32_t x702 = 138291515U;
	volatile int32_t x703 = INT32_MIN;
	static int16_t x704 = INT16_MIN;

    t175 = ((x701==x702)>(x703<=x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x705 = UINT16_MAX;
	int64_t x706 = -1LL;
	int32_t x707 = INT32_MAX;
	int8_t x708 = 55;
	int32_t t176 = -7;

    t176 = ((x705==x706)>(x707<=x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = -1040450340469332LL;
	static int8_t x711 = INT8_MIN;
	volatile int16_t x712 = INT16_MIN;
	volatile int32_t t177 = 611721;

    t177 = ((x709==x710)>(x711<=x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x713 = UINT16_MAX;
	int8_t x714 = INT8_MIN;
	uint32_t x715 = UINT32_MAX;
	int32_t t178 = -27525;

    t178 = ((x713==x714)>(x715<=x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x718 = 5U;
	uint32_t x719 = 184388387U;
	int16_t x720 = 56;
	int32_t t179 = -337707012;

    t179 = ((x717==x718)>(x719<=x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x722 = 358819377107633LL;
	uint16_t x723 = 1U;
	volatile uint64_t x724 = 305098909238866LLU;
	volatile int32_t t180 = -6;

    t180 = ((x721==x722)>(x723<=x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x725 = 456;
	int32_t x728 = INT32_MAX;

    t181 = ((x725==x726)>(x727<=x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = INT32_MIN;
	int64_t x730 = INT64_MIN;
	int64_t x731 = 61LL;
	uint32_t x732 = 163942U;
	static volatile int32_t t182 = -464146432;

    t182 = ((x729==x730)>(x731<=x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = INT8_MIN;
	int32_t t183 = -29;

    t183 = ((x733==x734)>(x735<=x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x737 = -1LL;
	int8_t x738 = 1;
	int8_t x739 = -1;
	int16_t x740 = -14;
	static int32_t t184 = 1;

    t184 = ((x737==x738)>(x739<=x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = INT32_MIN;
	uint32_t x742 = UINT32_MAX;
	uint32_t x743 = 12U;
	int32_t x744 = INT32_MIN;
	int32_t t185 = 0;

    t185 = ((x741==x742)>(x743<=x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x745 = 0U;
	int8_t x746 = INT8_MIN;
	uint32_t x747 = 126151U;
	int16_t x748 = INT16_MIN;
	volatile int32_t t186 = 280601;

    t186 = ((x745==x746)>(x747<=x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x750 = INT16_MIN;
	int16_t x751 = 59;
	uint16_t x752 = 338U;
	int32_t t187 = 1;

    t187 = ((x749==x750)>(x751<=x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x754 = INT16_MIN;
	volatile uint16_t x755 = 215U;
	int8_t x756 = -1;
	static volatile int32_t t188 = -636698006;

    t188 = ((x753==x754)>(x755<=x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = -2;
	uint32_t x758 = 154601278U;
	int64_t x759 = INT64_MIN;
	int64_t x760 = INT64_MAX;
	volatile int32_t t189 = -853;

    t189 = ((x757==x758)>(x759<=x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = -5;
	int32_t x763 = -1;
	int32_t x764 = 12442;
	static int32_t t190 = 152659;

    t190 = ((x761==x762)>(x763<=x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x766 = INT64_MIN;
	static int32_t x768 = INT32_MAX;
	int32_t t191 = -99828;

    t191 = ((x765==x766)>(x767<=x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x769 = INT16_MIN;
	uint64_t x771 = UINT64_MAX;
	static int16_t x772 = -1;
	volatile int32_t t192 = 0;

    t192 = ((x769==x770)>(x771<=x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x774 = INT8_MAX;
	int64_t x775 = INT64_MIN;
	static uint16_t x776 = UINT16_MAX;

    t193 = ((x773==x774)>(x775<=x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x777 = UINT8_MAX;
	int8_t x778 = INT8_MAX;
	int16_t x779 = -1;
	int8_t x780 = INT8_MIN;
	volatile int32_t t194 = 3;

    t194 = ((x777==x778)>(x779<=x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x783 = UINT32_MAX;
	volatile int32_t t195 = 5170673;

    t195 = ((x781==x782)>(x783<=x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = -1;
	uint16_t x786 = UINT16_MAX;
	int16_t x788 = -982;
	volatile int32_t t196 = -14720;

    t196 = ((x785==x786)>(x787<=x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x789 = INT64_MIN;
	int8_t x790 = INT8_MIN;
	uint32_t x791 = UINT32_MAX;
	uint16_t x792 = 2U;
	volatile int32_t t197 = -996779826;

    t197 = ((x789==x790)>(x791<=x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x793 = -1;
	int16_t x794 = INT16_MIN;
	static volatile int16_t x795 = 7;
	uint64_t x796 = 2008644802267688291LLU;
	volatile int32_t t198 = -35;

    t198 = ((x793==x794)>(x795<=x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint16_t x797 = UINT16_MAX;
	int64_t x798 = -820966135LL;
	int64_t x800 = INT64_MIN;
	int32_t t199 = 108982430;

    t199 = ((x797==x798)>(x799<=x800));

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

