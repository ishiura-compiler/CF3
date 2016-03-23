
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

int8_t x2 = 7;
uint32_t x4 = 14U;
static uint32_t x8 = 5U;
volatile uint16_t x12 = 12U;
int32_t t3 = -320867;
int8_t x21 = -1;
int64_t x33 = INT64_MIN;
int16_t x40 = INT16_MIN;
int64_t x41 = INT64_MAX;
int8_t x44 = -1;
static volatile int64_t t9 = 2LL;
volatile uint64_t t10 = 7302903787384LLU;
int16_t x52 = -1;
uint64_t t11 = 132733LLU;
static volatile int8_t x53 = INT8_MIN;
uint32_t t12 = 147205765U;
int32_t x62 = INT32_MIN;
volatile int64_t x67 = 85256767LL;
volatile int64_t t17 = 5598709635132122LL;
uint64_t x83 = 299298046LLU;
volatile uint64_t t19 = 31285330722818820LLU;
int16_t x85 = INT16_MIN;
int64_t x88 = -1LL;
volatile int64_t t20 = 523225LL;
int8_t x89 = INT8_MAX;
int16_t x90 = INT16_MAX;
uint8_t x95 = UINT8_MAX;
int64_t x98 = INT64_MIN;
volatile int16_t x100 = 29;
static int8_t x102 = -1;
static int8_t x104 = INT8_MIN;
volatile int64_t t29 = 1433857009050527558LL;
static volatile int64_t t30 = 44152640352446564LL;
int64_t x135 = -1LL;
int16_t x139 = INT16_MIN;
static int32_t x141 = INT32_MAX;
uint16_t x144 = UINT16_MAX;
volatile int32_t x149 = 15680;
uint64_t x151 = 47LLU;
int32_t x154 = -1;
static int8_t x155 = INT8_MIN;
int16_t x159 = INT16_MIN;
volatile int64_t t39 = 1LL;
static int32_t x170 = INT32_MAX;
uint64_t x174 = UINT64_MAX;
uint64_t x175 = 41LLU;
static uint8_t x176 = 12U;
volatile uint64_t t41 = 6633LLU;
int16_t x185 = INT16_MIN;
int64_t x188 = INT64_MIN;
int32_t x189 = INT32_MIN;
int32_t x200 = -1;
uint8_t x205 = UINT8_MAX;
volatile uint32_t x210 = 29579265U;
volatile int32_t x211 = -1;
volatile int32_t x213 = INT32_MIN;
static volatile int64_t t52 = 3297353LL;
volatile int32_t x222 = INT32_MIN;
static volatile int8_t x232 = -1;
int16_t x259 = INT16_MIN;
int32_t t60 = -1923308;
int16_t x262 = INT16_MAX;
int8_t x263 = INT8_MAX;
volatile int32_t t61 = INT32_MAX;
uint16_t x266 = 4272U;
static volatile uint8_t x269 = 60U;
int32_t t63 = 1;
int8_t x279 = -1;
volatile int64_t t65 = 3435475978LL;
int8_t x285 = -29;
uint32_t x288 = 5U;
static volatile int64_t t67 = 506204407LL;
int32_t t71 = INT32_MAX;
volatile int32_t x309 = -1;
int16_t x311 = -60;
volatile int32_t x313 = INT32_MIN;
volatile int32_t x320 = INT32_MAX;
uint8_t x322 = 3U;
uint64_t x328 = UINT64_MAX;
int8_t x329 = INT8_MAX;
uint32_t t78 = 6U;
int16_t x341 = -236;
int64_t x342 = 668685979LL;
int8_t x344 = -6;
uint32_t x346 = 60U;
int16_t x347 = INT16_MAX;
volatile uint16_t x352 = 2316U;
static volatile int8_t x354 = INT8_MAX;
volatile uint64_t t85 = 14LLU;
static int16_t x374 = INT16_MIN;
int64_t x378 = INT64_MIN;
int64_t t88 = -1LL;
uint8_t x386 = 92U;
uint64_t x388 = UINT64_MAX;
int8_t x398 = INT8_MAX;
uint8_t x399 = UINT8_MAX;
int16_t x401 = INT16_MIN;
volatile uint32_t t94 = 12122817U;
uint16_t x411 = 0U;
int8_t x413 = -5;
uint8_t x432 = UINT8_MAX;
static int8_t x440 = INT8_MIN;
static uint8_t x446 = 12U;
static int8_t x450 = INT8_MIN;
int32_t x451 = 237296405;
int64_t t105 = -1019LL;
static uint8_t x459 = 77U;
int32_t t107 = -53;
volatile int64_t x461 = INT64_MAX;
static volatile int64_t t108 = -1LL;
int16_t x465 = -1;
volatile int8_t x476 = INT8_MIN;
uint8_t x481 = 9U;
int32_t x486 = INT32_MIN;
int32_t x489 = -1;
volatile uint64_t x494 = UINT64_MAX;
volatile int16_t x504 = INT16_MIN;
uint64_t x506 = UINT64_MAX;
uint8_t x510 = 78U;
volatile int32_t x513 = INT32_MIN;
int32_t x530 = 110;
uint64_t t125 = 237551LLU;
static uint8_t x534 = 10U;
int64_t x536 = INT64_MAX;
volatile int64_t t126 = -1792844020LL;
int8_t x542 = INT8_MIN;
volatile uint16_t x548 = 27972U;
int64_t x551 = INT64_MAX;
uint16_t x552 = UINT16_MAX;
volatile uint16_t x557 = 3468U;
int16_t x558 = INT16_MAX;
uint8_t x560 = UINT8_MAX;
uint64_t x567 = UINT64_MAX;
uint64_t t134 = 6940321721LLU;
uint16_t x572 = UINT16_MAX;
int32_t t135 = -586846;
uint16_t x575 = 47U;
static volatile int32_t t136 = -1;
int16_t x580 = INT16_MIN;
uint64_t t138 = 10LLU;
int16_t x588 = -116;
volatile int64_t t139 = 1799LL;
int16_t x592 = INT16_MAX;
volatile uint64_t t140 = 1468577636123978LLU;
volatile int64_t x594 = -11393LL;
int64_t x595 = INT64_MAX;
volatile int32_t x599 = INT32_MAX;
static volatile int64_t t142 = 7117956205LL;
static uint32_t x606 = 142401U;
volatile uint64_t x620 = 291LLU;
int16_t x624 = -1;
volatile uint64_t t148 = 90586LLU;
int32_t x627 = INT32_MAX;
uint64_t t149 = 58612601502540332LLU;
int8_t x642 = -1;
volatile uint32_t t152 = 18760438U;
int64_t x646 = 792189893077384LL;
static int16_t x655 = INT16_MIN;
volatile int32_t t155 = 3;
volatile int64_t t156 = 3275LL;
volatile uint8_t x667 = 78U;
uint16_t x669 = 58U;
volatile uint32_t x670 = 7U;
int64_t x673 = INT64_MIN;
uint32_t x677 = 611U;
static uint64_t x680 = 353LLU;
int64_t x684 = INT64_MIN;
int8_t x689 = INT8_MIN;
volatile uint32_t x690 = 30U;
volatile int8_t x692 = INT8_MIN;
int64_t t164 = -1078304215161LL;
int8_t x701 = -14;
int32_t x702 = -1;
int16_t x709 = INT16_MIN;
int16_t x710 = -1;
uint8_t x712 = 49U;
int32_t x721 = 131464;
int16_t x732 = 150;
int32_t x741 = INT32_MAX;
int16_t x742 = -7975;
volatile uint8_t x745 = 4U;
uint16_t x752 = 209U;
volatile uint64_t x753 = 153733760288935884LLU;
int16_t x757 = INT16_MIN;
volatile int16_t x758 = -3251;
int64_t x760 = INT64_MIN;
int64_t x766 = INT64_MIN;
int16_t x767 = 2074;
static int8_t x768 = INT8_MIN;
volatile int64_t t185 = 1051462763835855LL;
int8_t x791 = -1;
volatile int32_t x795 = 18450;
int32_t x796 = 1032197080;
int16_t x804 = INT16_MAX;
int64_t x806 = -18257LL;
volatile uint64_t x808 = 62235371LLU;
static int8_t x809 = -1;
int32_t t193 = -4472502;
uint8_t x817 = 6U;
static uint64_t x829 = UINT64_MAX;
int64_t x832 = INT64_MIN;
static volatile int64_t t198 = 3832899003219708336LL;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	int64_t x3 = INT64_MAX;
	int64_t t0 = 2060LL;

    t0 = ((x1|x2)+(x3/x4));

    if (t0 != 658812288346769579LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = INT16_MIN;
	int8_t x6 = INT8_MAX;
	int64_t x7 = -1LL;
	volatile int64_t t1 = 1614538177906LL;

    t1 = ((x5|x6)+(x7/x8));

    if (t1 != -32641LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint16_t x9 = 14U;
	int16_t x10 = INT16_MIN;
	int16_t x11 = INT16_MIN;
	volatile int32_t t2 = -112518223;

    t2 = ((x9|x10)+(x11/x12));

    if (t2 != -35484) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x17 = 9922;
	int32_t x18 = INT32_MIN;
	int16_t x19 = -16139;
	uint16_t x20 = UINT16_MAX;

    t3 = ((x17|x18)+(x19/x20));

    if (t3 != -2147473726) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x22 = UINT8_MAX;
	uint32_t x23 = UINT32_MAX;
	int16_t x24 = -1;
	uint32_t t4 = 2008U;

    t4 = ((x21|x22)+(x23/x24));

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x25 = 584LLU;
	int32_t x26 = 4230286;
	int16_t x27 = INT16_MIN;
	static int64_t x28 = INT64_MAX;
	static volatile uint64_t t5 = 847439730170964LLU;

    t5 = ((x25|x26)+(x27/x28));

    if (t5 != 4230862LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x29 = INT64_MIN;
	uint64_t x30 = UINT64_MAX;
	static uint32_t x31 = 767986U;
	static int64_t x32 = INT64_MIN;
	static volatile uint64_t t6 = UINT64_MAX;

    t6 = ((x29|x30)+(x31/x32));

    if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x34 = INT8_MIN;
	int32_t x35 = INT32_MIN;
	uint64_t x36 = UINT64_MAX;
	uint64_t t7 = 59171LLU;

    t7 = ((x33|x34)+(x35/x36));

    if (t7 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x37 = -1902486;
	uint16_t x38 = 263U;
	int64_t x39 = INT64_MIN;
	static volatile int64_t t8 = -243827LL;

    t8 = ((x37|x38)+(x39/x40));

    if (t8 != 281474974808431LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint32_t x42 = 236U;
	uint16_t x43 = 161U;

    t9 = ((x41|x42)+(x43/x44));

    if (t9 != 9223372036854775646LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x45 = INT16_MIN;
	uint64_t x46 = UINT64_MAX;
	uint16_t x47 = UINT16_MAX;
	uint8_t x48 = UINT8_MAX;

    t10 = ((x45|x46)+(x47/x48));

    if (t10 != 256LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x49 = 489;
	uint64_t x50 = 16LLU;
	static int64_t x51 = -533295LL;

    t11 = ((x49|x50)+(x51/x52));

    if (t11 != 533800LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x54 = -1;
	static uint32_t x55 = UINT32_MAX;
	int16_t x56 = -1;

    t12 = ((x53|x54)+(x55/x56));

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x57 = INT32_MIN;
	int32_t x58 = INT32_MAX;
	int64_t x59 = INT64_MIN;
	volatile int16_t x60 = INT16_MIN;
	volatile int64_t t13 = -68183904086LL;

    t13 = ((x57|x58)+(x59/x60));

    if (t13 != 281474976710655LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = INT64_MIN;
	int16_t x63 = 1;
	static int8_t x64 = INT8_MIN;
	volatile int64_t t14 = 121805540355935584LL;

    t14 = ((x61|x62)+(x63/x64));

    if (t14 != -2147483648LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x65 = 40U;
	uint16_t x66 = 438U;
	int64_t x68 = INT64_MAX;
	volatile int64_t t15 = -2475189LL;

    t15 = ((x65|x66)+(x67/x68));

    if (t15 != 446LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = 25791898653LL;
	uint32_t x70 = 418U;
	uint16_t x71 = UINT16_MAX;
	int16_t x72 = 1;
	static volatile int64_t t16 = -5251LL;

    t16 = ((x69|x70)+(x71/x72));

    if (t16 != 25791964606LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x73 = INT8_MAX;
	int32_t x74 = -1;
	int16_t x75 = INT16_MIN;
	int64_t x76 = INT64_MIN;

    t17 = ((x73|x74)+(x75/x76));

    if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x77 = 83237816U;
	int16_t x78 = INT16_MIN;
	uint64_t x79 = 273299LLU;
	uint32_t x80 = 141311113U;
	uint64_t t18 = 3501051047550LLU;

    t18 = ((x77|x78)+(x79/x80));

    if (t18 != 4294941624LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int16_t x81 = 0;
	int16_t x82 = 54;
	uint16_t x84 = 256U;

    t19 = ((x81|x82)+(x83/x84));

    if (t19 != 1169186LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile uint32_t x86 = 587293077U;
	int8_t x87 = INT8_MAX;

    t20 = ((x85|x86)+(x87/x88));

    if (t20 != 4294959382LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x91 = -1;
	volatile int8_t x92 = INT8_MIN;
	volatile int32_t t21 = -7612;

    t21 = ((x89|x90)+(x91/x92));

    if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x93 = INT8_MIN;
	uint32_t x94 = UINT32_MAX;
	uint16_t x96 = 3U;
	static uint32_t t22 = 737U;

    t22 = ((x93|x94)+(x95/x96));

    if (t22 != 84U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x97 = UINT8_MAX;
	static uint64_t x99 = UINT64_MAX;
	static volatile uint64_t t23 = 3977LLU;

    t23 = ((x97|x98)+(x99/x100));

    if (t23 != 9859466660086139911LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x101 = -27;
	int32_t x103 = INT32_MIN;
	volatile int32_t t24 = -192212;

    t24 = ((x101|x102)+(x103/x104));

    if (t24 != 16777215) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x105 = UINT64_MAX;
	static int16_t x106 = -1;
	uint16_t x107 = 98U;
	int8_t x108 = INT8_MAX;
	volatile uint64_t t25 = UINT64_MAX;

    t25 = ((x105|x106)+(x107/x108));

    if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x109 = 0LL;
	int16_t x110 = INT16_MIN;
	static int64_t x111 = -1LL;
	uint64_t x112 = 106057792261566LLU;
	static volatile uint64_t t26 = 14625906LLU;

    t26 = ((x109|x110)+(x111/x112));

    if (t26 != 141163LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x113 = -1498288410690599LL;
	int32_t x114 = INT32_MIN;
	int64_t x115 = INT64_MIN;
	int16_t x116 = -15301;
	static int64_t t27 = -160263202623768LL;

    t27 = ((x113|x114)+(x115/x116));

    if (t27 != 602793420877212LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x117 = 68267015310788LLU;
	static uint64_t x118 = UINT64_MAX;
	volatile uint64_t x119 = 18570LLU;
	uint8_t x120 = UINT8_MAX;
	volatile uint64_t t28 = 116427LLU;

    t28 = ((x117|x118)+(x119/x120));

    if (t28 != 71LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x121 = INT64_MIN;
	volatile int8_t x122 = 1;
	static int32_t x123 = INT32_MIN;
	int8_t x124 = -6;

    t29 = ((x121|x122)+(x123/x124));

    if (t29 != -9223372036496861866LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint32_t x125 = 1878671U;
	uint8_t x126 = UINT8_MAX;
	static volatile int8_t x127 = INT8_MIN;
	int64_t x128 = INT64_MIN;

    t30 = ((x125|x126)+(x127/x128));

    if (t30 != 1878783LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x129 = 1;
	int8_t x130 = -1;
	static volatile int64_t x131 = -2073230LL;
	int64_t x132 = INT64_MIN;
	volatile int64_t t31 = 13622331LL;

    t31 = ((x129|x130)+(x131/x132));

    if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x133 = -1;
	uint8_t x134 = UINT8_MAX;
	int32_t x136 = -13047;
	int64_t t32 = 4684LL;

    t32 = ((x133|x134)+(x135/x136));

    if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x137 = UINT16_MAX;
	static int8_t x138 = 5;
	int64_t x140 = 9049LL;
	int64_t t33 = 3477LL;

    t33 = ((x137|x138)+(x139/x140));

    if (t33 != 65532LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x142 = 21240U;
	int32_t x143 = INT32_MIN;
	volatile uint32_t t34 = 639093U;

    t34 = ((x141|x142)+(x143/x144));

    if (t34 != 2147450879U) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x150 = INT32_MIN;
	volatile int64_t x152 = 9LL;
	volatile uint64_t t35 = 5753282LLU;

    t35 = ((x149|x150)+(x151/x152));

    if (t35 != 18446744071562083653LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint8_t x153 = 0U;
	int32_t x156 = INT32_MAX;
	int32_t t36 = -230455565;

    t36 = ((x153|x154)+(x155/x156));

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x157 = UINT8_MAX;
	int64_t x158 = INT64_MIN;
	int32_t x160 = -1;
	int64_t t37 = 3316719359749046140LL;

    t37 = ((x157|x158)+(x159/x160));

    if (t37 != -9223372036854742785LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x161 = 199U;
	uint32_t x162 = 1U;
	static uint32_t x163 = 3671978U;
	static int8_t x164 = INT8_MAX;
	volatile uint32_t t38 = 5851U;

    t38 = ((x161|x162)+(x163/x164));

    if (t38 != 29112U) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x165 = INT16_MAX;
	volatile int64_t x166 = -1LL;
	uint8_t x167 = UINT8_MAX;
	volatile int32_t x168 = INT32_MAX;

    t39 = ((x165|x166)+(x167/x168));

    if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x169 = 33536793996LL;
	int8_t x171 = INT8_MIN;
	static int64_t x172 = -1LL;
	static int64_t t40 = -212665792LL;

    t40 = ((x169|x170)+(x171/x172));

    if (t40 != 34359738495LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x173 = 39LLU;

    t41 = ((x173|x174)+(x175/x176));

    if (t41 != 2LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint16_t x177 = 95U;
	int16_t x178 = INT16_MAX;
	int16_t x179 = 378;
	static uint32_t x180 = 1U;
	volatile uint32_t t42 = 217485404U;

    t42 = ((x177|x178)+(x179/x180));

    if (t42 != 33145U) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x181 = -1;
	int16_t x182 = -1;
	volatile uint16_t x183 = 929U;
	int16_t x184 = INT16_MAX;
	int32_t t43 = 477350;

    t43 = ((x181|x182)+(x183/x184));

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint8_t x186 = 6U;
	int8_t x187 = INT8_MIN;
	volatile int64_t t44 = -678903LL;

    t44 = ((x185|x186)+(x187/x188));

    if (t44 != -32762LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x190 = INT16_MIN;
	int8_t x191 = INT8_MAX;
	static uint64_t x192 = UINT64_MAX;
	uint64_t t45 = 55800785LLU;

    t45 = ((x189|x190)+(x191/x192));

    if (t45 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x193 = 272LLU;
	int16_t x194 = 2614;
	uint32_t x195 = 526439604U;
	int64_t x196 = INT64_MIN;
	uint64_t t46 = 7241829137156LLU;

    t46 = ((x193|x194)+(x195/x196));

    if (t46 != 2870LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x197 = 26U;
	int8_t x198 = -2;
	int16_t x199 = -8623;
	static volatile uint32_t t47 = 449527U;

    t47 = ((x197|x198)+(x199/x200));

    if (t47 != 8621U) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x201 = INT8_MAX;
	static uint64_t x202 = 5729414550LLU;
	volatile int8_t x203 = -1;
	int32_t x204 = INT32_MAX;
	volatile uint64_t t48 = 245144LLU;

    t48 = ((x201|x202)+(x203/x204));

    if (t48 != 5729414655LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x206 = 24U;
	int16_t x207 = -1;
	volatile int8_t x208 = -1;
	uint32_t t49 = 766157716U;

    t49 = ((x205|x206)+(x207/x208));

    if (t49 != 256U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x209 = UINT64_MAX;
	int32_t x212 = INT32_MIN;
	volatile uint64_t t50 = UINT64_MAX;

    t50 = ((x209|x210)+(x211/x212));

    if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x214 = INT64_MAX;
	int32_t x215 = INT32_MIN;
	static int64_t x216 = INT64_MIN;
	int64_t t51 = 3004171633639920762LL;

    t51 = ((x213|x214)+(x215/x216));

    if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint32_t x217 = UINT32_MAX;
	static int8_t x218 = INT8_MAX;
	int64_t x219 = -1LL;
	static int8_t x220 = -15;

    t52 = ((x217|x218)+(x219/x220));

    if (t52 != 4294967295LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x221 = INT64_MIN;
	static int8_t x223 = -1;
	uint16_t x224 = 15U;
	int64_t t53 = -601LL;

    t53 = ((x221|x222)+(x223/x224));

    if (t53 != -2147483648LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x225 = 83237U;
	uint8_t x226 = 0U;
	uint16_t x227 = UINT16_MAX;
	int8_t x228 = -1;
	volatile uint32_t t54 = 246877U;

    t54 = ((x225|x226)+(x227/x228));

    if (t54 != 17702U) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x229 = 4192017242LLU;
	static uint32_t x230 = 23U;
	uint32_t x231 = 529078U;
	volatile uint64_t t55 = 1567LLU;

    t55 = ((x229|x230)+(x231/x232));

    if (t55 != 4192017247LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x241 = 1U;
	volatile int32_t x242 = INT32_MAX;
	uint32_t x243 = UINT32_MAX;
	static uint8_t x244 = UINT8_MAX;
	uint32_t t56 = 13U;

    t56 = ((x241|x242)+(x243/x244));

    if (t56 != 2164326656U) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x245 = UINT32_MAX;
	uint64_t x246 = UINT64_MAX;
	uint32_t x247 = 56631U;
	static int8_t x248 = INT8_MIN;
	uint64_t t57 = UINT64_MAX;

    t57 = ((x245|x246)+(x247/x248));

    if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x249 = INT16_MAX;
	int8_t x250 = -1;
	static uint64_t x251 = 3767004950403LLU;
	volatile int16_t x252 = INT16_MIN;
	volatile uint64_t t58 = UINT64_MAX;

    t58 = ((x249|x250)+(x251/x252));

    if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x253 = -1;
	int8_t x254 = INT8_MIN;
	uint8_t x255 = UINT8_MAX;
	static volatile int8_t x256 = INT8_MIN;
	volatile int32_t t59 = -42609280;

    t59 = ((x253|x254)+(x255/x256));

    if (t59 != -2) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x257 = INT16_MIN;
	volatile int16_t x258 = INT16_MIN;
	static uint16_t x260 = 114U;

    t60 = ((x257|x258)+(x259/x260));

    if (t60 != -33055) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x261 = INT32_MAX;
	volatile int16_t x264 = INT16_MIN;

    t61 = ((x261|x262)+(x263/x264));

    if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x265 = INT64_MAX;
	int32_t x267 = INT32_MIN;
	uint64_t x268 = 995953LLU;
	volatile uint64_t t62 = 59745315562879381LLU;

    t62 = ((x265|x266)+(x267/x268));

    if (t62 != 9223390558556172923LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x270 = 1;
	int16_t x271 = INT16_MAX;
	uint8_t x272 = 7U;

    t63 = ((x269|x270)+(x271/x272));

    if (t63 != 4742) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x273 = INT8_MIN;
	uint64_t x274 = 262591LLU;
	int32_t x275 = -243;
	int64_t x276 = 687171LL;
	volatile uint64_t t64 = 614651379LLU;

    t64 = ((x273|x274)+(x275/x276));

    if (t64 != 18446744073709551551LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x277 = INT32_MAX;
	int32_t x278 = -734706;
	int64_t x280 = -1LL;

    t65 = ((x277|x278)+(x279/x280));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x281 = 11;
	volatile int8_t x282 = INT8_MIN;
	static uint8_t x283 = UINT8_MAX;
	int8_t x284 = 22;
	int32_t t66 = -51938;

    t66 = ((x281|x282)+(x283/x284));

    if (t66 != -106) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x286 = -1LL;
	static int16_t x287 = INT16_MAX;

    t67 = ((x285|x286)+(x287/x288));

    if (t67 != 6552LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x293 = INT8_MAX;
	int8_t x294 = 19;
	volatile int16_t x295 = INT16_MAX;
	static uint8_t x296 = UINT8_MAX;
	int32_t t68 = 1;

    t68 = ((x293|x294)+(x295/x296));

    if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x297 = -12;
	int32_t x298 = 31;
	int16_t x299 = -1;
	uint32_t x300 = UINT32_MAX;
	volatile uint32_t t69 = 3716U;

    t69 = ((x297|x298)+(x299/x300));

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x301 = -1;
	int8_t x302 = INT8_MAX;
	static volatile int32_t x303 = -735684188;
	uint8_t x304 = 33U;
	volatile int32_t t70 = 17429987;

    t70 = ((x301|x302)+(x303/x304));

    if (t70 != -22293461) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x305 = INT16_MAX;
	int32_t x306 = INT32_MAX;
	static int8_t x307 = INT8_MAX;
	uint16_t x308 = 15870U;

    t71 = ((x305|x306)+(x307/x308));

    if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x310 = -1;
	static int64_t x312 = -1LL;
	volatile int64_t t72 = 3519986658LL;

    t72 = ((x309|x310)+(x311/x312));

    if (t72 != 59LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x314 = 1378;
	uint8_t x315 = 7U;
	int8_t x316 = -1;
	int32_t t73 = 1431;

    t73 = ((x313|x314)+(x315/x316));

    if (t73 != -2147482277) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int16_t x317 = -1;
	uint16_t x318 = 20310U;
	int16_t x319 = INT16_MIN;
	volatile int32_t t74 = 0;

    t74 = ((x317|x318)+(x319/x320));

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x321 = -1;
	int16_t x323 = INT16_MAX;
	static volatile int16_t x324 = 7;
	static int32_t t75 = -54035725;

    t75 = ((x321|x322)+(x323/x324));

    if (t75 != 4680) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x325 = INT16_MIN;
	static uint64_t x326 = UINT64_MAX;
	uint16_t x327 = 280U;
	uint64_t t76 = UINT64_MAX;

    t76 = ((x325|x326)+(x327/x328));

    if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x330 = 30LLU;
	uint64_t x331 = UINT64_MAX;
	static int16_t x332 = INT16_MIN;
	volatile uint64_t t77 = 1963190128LLU;

    t77 = ((x329|x330)+(x331/x332));

    if (t77 != 128LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x333 = 91787U;
	int16_t x334 = -1;
	int32_t x335 = INT32_MAX;
	uint16_t x336 = 6641U;

    t78 = ((x333|x334)+(x335/x336));

    if (t78 != 323366U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x337 = UINT64_MAX;
	uint8_t x338 = 6U;
	static uint64_t x339 = 301LLU;
	int8_t x340 = INT8_MAX;
	uint64_t t79 = 787704LLU;

    t79 = ((x337|x338)+(x339/x340));

    if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x343 = 1;
	int64_t t80 = 5808LL;

    t80 = ((x341|x342)+(x343/x344));

    if (t80 != -97LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint16_t x345 = 42U;
	static uint64_t x348 = UINT64_MAX;
	static uint64_t t81 = 1238505397LLU;

    t81 = ((x345|x346)+(x347/x348));

    if (t81 != 62LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x349 = INT32_MAX;
	uint64_t x350 = 2507762248480LLU;
	uint32_t x351 = 5U;
	volatile uint64_t t82 = 120345562565038LLU;

    t82 = ((x349|x350)+(x351/x352));

    if (t82 != 2508260900863LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x353 = -6;
	int64_t x355 = INT64_MIN;
	static int64_t x356 = INT64_MAX;
	int64_t t83 = 3145704LL;

    t83 = ((x353|x354)+(x355/x356));

    if (t83 != -2LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x357 = 437U;
	int16_t x358 = INT16_MIN;
	int16_t x359 = 12;
	static int16_t x360 = -1;
	uint32_t t84 = 72123856U;

    t84 = ((x357|x358)+(x359/x360));

    if (t84 != 4294934953U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x361 = 16953LLU;
	int32_t x362 = INT32_MIN;
	uint8_t x363 = 2U;
	uint16_t x364 = UINT16_MAX;

    t85 = ((x361|x362)+(x363/x364));

    if (t85 != 18446744071562084921LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x369 = UINT64_MAX;
	int64_t x370 = INT64_MIN;
	uint16_t x371 = 6138U;
	static uint16_t x372 = 3036U;
	volatile uint64_t t86 = 6969807960228555LLU;

    t86 = ((x369|x370)+(x371/x372));

    if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x373 = 9;
	uint64_t x375 = 32428515868909841LLU;
	int8_t x376 = INT8_MAX;
	volatile uint64_t t87 = 344021638409282LLU;

    t87 = ((x373|x374)+(x375/x376));

    if (t87 != 255342644604326LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x377 = UINT32_MAX;
	int16_t x379 = 709;
	volatile int64_t x380 = -1LL;

    t88 = ((x377|x378)+(x379/x380));

    if (t88 != -9223372032559809222LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x381 = 2U;
	uint64_t x382 = 60897163260878LLU;
	int16_t x383 = -387;
	int8_t x384 = -1;
	static volatile uint64_t t89 = 1982808LLU;

    t89 = ((x381|x382)+(x383/x384));

    if (t89 != 60897163261265LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x385 = 0;
	static int32_t x387 = INT32_MIN;
	static uint64_t t90 = 15664237606LLU;

    t90 = ((x385|x386)+(x387/x388));

    if (t90 != 92LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x389 = 0;
	uint16_t x390 = 0U;
	static int64_t x391 = -1LL;
	int16_t x392 = -1;
	int64_t t91 = 190804580608723LL;

    t91 = ((x389|x390)+(x391/x392));

    if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x393 = 88U;
	volatile int8_t x394 = INT8_MIN;
	static uint16_t x395 = 2U;
	int16_t x396 = INT16_MAX;
	int32_t t92 = -113248;

    t92 = ((x393|x394)+(x395/x396));

    if (t92 != -40) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x397 = INT64_MIN;
	uint8_t x400 = 31U;
	int64_t t93 = 29217966LL;

    t93 = ((x397|x398)+(x399/x400));

    if (t93 != -9223372036854775673LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x402 = -501;
	int8_t x403 = INT8_MIN;
	static uint32_t x404 = UINT32_MAX;

    t94 = ((x401|x402)+(x403/x404));

    if (t94 != 4294966795U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x405 = UINT64_MAX;
	volatile int64_t x406 = INT64_MIN;
	volatile int64_t x407 = INT64_MIN;
	volatile int32_t x408 = 10573;
	uint64_t t95 = 526975515716LLU;

    t95 = ((x405|x406)+(x407/x408));

    if (t95 != 18445871722244796600LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x409 = INT64_MIN;
	static uint8_t x410 = UINT8_MAX;
	static int64_t x412 = INT64_MIN;
	static int64_t t96 = 15066LL;

    t96 = ((x409|x410)+(x411/x412));

    if (t96 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x414 = 3428003458633LLU;
	volatile uint32_t x415 = 1865860149U;
	int8_t x416 = INT8_MAX;
	static volatile uint64_t t97 = 64658789LLU;

    t97 = ((x413|x414)+(x415/x416));

    if (t97 != 14691807LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint16_t x421 = 46U;
	volatile int64_t x422 = 667540LL;
	uint8_t x423 = 11U;
	int32_t x424 = -1;
	volatile int64_t t98 = -1076284439647LL;

    t98 = ((x421|x422)+(x423/x424));

    if (t98 != 667571LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x425 = INT64_MAX;
	int8_t x426 = 59;
	static volatile int16_t x427 = INT16_MIN;
	int32_t x428 = -3827199;
	volatile int64_t t99 = INT64_MAX;

    t99 = ((x425|x426)+(x427/x428));

    if (t99 != INT64_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x429 = INT64_MIN;
	uint16_t x430 = 1U;
	int16_t x431 = 7636;
	int64_t t100 = 28828890584547455LL;

    t100 = ((x429|x430)+(x431/x432));

    if (t100 != -9223372036854775778LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x433 = 20U;
	uint8_t x434 = 1U;
	uint32_t x435 = 8787038U;
	int8_t x436 = INT8_MIN;
	volatile uint32_t t101 = 1902U;

    t101 = ((x433|x434)+(x435/x436));

    if (t101 != 21U) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x437 = -1;
	static int8_t x438 = 1;
	int8_t x439 = INT8_MIN;
	volatile int32_t t102 = 533868;

    t102 = ((x437|x438)+(x439/x440));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x441 = 2019009U;
	volatile int32_t x442 = -14963;
	static volatile int16_t x443 = INT16_MIN;
	int32_t x444 = INT32_MAX;
	volatile uint32_t t103 = 605088631U;

    t103 = ((x441|x442)+(x443/x444));

    if (t103 != 4294954957U) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x445 = UINT8_MAX;
	int32_t x447 = 36;
	uint8_t x448 = UINT8_MAX;
	volatile int32_t t104 = -7967;

    t104 = ((x445|x446)+(x447/x448));

    if (t104 != 255) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x449 = INT32_MAX;
	int64_t x452 = INT64_MIN;

    t105 = ((x449|x450)+(x451/x452));

    if (t105 != -1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x453 = 117764249U;
	volatile int16_t x454 = INT16_MAX;
	uint8_t x455 = 61U;
	int64_t x456 = -843975956557663189LL;
	static int64_t t106 = -7433369LL;

    t106 = ((x453|x454)+(x455/x456));

    if (t106 != 117768191LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x457 = INT8_MAX;
	static uint8_t x458 = UINT8_MAX;
	int16_t x460 = 76;

    t107 = ((x457|x458)+(x459/x460));

    if (t107 != 256) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x462 = -1;
	int8_t x463 = -4;
	static uint32_t x464 = UINT32_MAX;

    t108 = ((x461|x462)+(x463/x464));

    if (t108 != -1LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int8_t x466 = 5;
	static int16_t x467 = INT16_MIN;
	volatile uint32_t x468 = UINT32_MAX;
	volatile uint32_t t109 = UINT32_MAX;

    t109 = ((x465|x466)+(x467/x468));

    if (t109 != UINT32_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint64_t x469 = UINT64_MAX;
	int64_t x470 = INT64_MAX;
	int16_t x471 = -1;
	static int16_t x472 = 2481;
	uint64_t t110 = UINT64_MAX;

    t110 = ((x469|x470)+(x471/x472));

    if (t110 != UINT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint16_t x473 = 1U;
	int64_t x474 = -1LL;
	static uint32_t x475 = 1366249405U;
	static int64_t t111 = 370LL;

    t111 = ((x473|x474)+(x475/x476));

    if (t111 != -1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint8_t x477 = 0U;
	static int16_t x478 = -1;
	int32_t x479 = INT32_MAX;
	int8_t x480 = -46;
	int32_t t112 = 17129;

    t112 = ((x477|x478)+(x479/x480));

    if (t112 != -46684428) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x482 = INT16_MIN;
	uint32_t x483 = UINT32_MAX;
	static int8_t x484 = -3;
	volatile uint32_t t113 = 5262879U;

    t113 = ((x481|x482)+(x483/x484));

    if (t113 != 4294934538U) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint32_t x485 = 12198122U;
	int32_t x487 = -1;
	uint8_t x488 = 24U;
	volatile uint32_t t114 = 36062355U;

    t114 = ((x485|x486)+(x487/x488));

    if (t114 != 2159681770U) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x490 = INT8_MIN;
	int8_t x491 = INT8_MIN;
	uint8_t x492 = UINT8_MAX;
	int32_t t115 = 11;

    t115 = ((x489|x490)+(x491/x492));

    if (t115 != -1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x493 = INT64_MIN;
	int16_t x495 = INT16_MIN;
	int32_t x496 = -1;
	uint64_t t116 = 5090445961562753LLU;

    t116 = ((x493|x494)+(x495/x496));

    if (t116 != 32767LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x497 = UINT32_MAX;
	static uint8_t x498 = UINT8_MAX;
	int32_t x499 = -15621;
	int16_t x500 = INT16_MIN;
	uint32_t t117 = UINT32_MAX;

    t117 = ((x497|x498)+(x499/x500));

    if (t117 != UINT32_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x501 = INT64_MAX;
	int8_t x502 = 0;
	volatile int8_t x503 = 13;
	volatile int64_t t118 = INT64_MAX;

    t118 = ((x501|x502)+(x503/x504));

    if (t118 != INT64_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x505 = 83;
	int64_t x507 = INT64_MAX;
	uint8_t x508 = 12U;
	static volatile uint64_t t119 = 4087158246130LLU;

    t119 = ((x505|x506)+(x507/x508));

    if (t119 != 768614336404564649LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x509 = -2033525834LL;
	volatile uint32_t x511 = UINT32_MAX;
	int16_t x512 = INT16_MAX;
	volatile int64_t t120 = 6764LL;

    t120 = ((x509|x510)+(x511/x512));

    if (t120 != -2033394686LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x514 = 1U;
	int8_t x515 = INT8_MIN;
	static int8_t x516 = INT8_MIN;
	volatile int32_t t121 = -449047935;

    t121 = ((x513|x514)+(x515/x516));

    if (t121 != -2147483646) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x517 = -1LL;
	volatile int16_t x518 = INT16_MAX;
	int64_t x519 = 38511623550589LL;
	int32_t x520 = -91554088;
	volatile int64_t t122 = -166446800LL;

    t122 = ((x517|x518)+(x519/x520));

    if (t122 != -420644LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint64_t x521 = UINT64_MAX;
	volatile uint8_t x522 = 7U;
	static uint32_t x523 = 1249890063U;
	static int64_t x524 = INT64_MAX;
	uint64_t t123 = UINT64_MAX;

    t123 = ((x521|x522)+(x523/x524));

    if (t123 != UINT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x525 = -1;
	int16_t x526 = 2;
	volatile uint16_t x527 = 4487U;
	uint32_t x528 = 220262U;
	uint32_t t124 = UINT32_MAX;

    t124 = ((x525|x526)+(x527/x528));

    if (t124 != UINT32_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint64_t x529 = 2812LLU;
	int8_t x531 = -35;
	int32_t x532 = 207;

    t125 = ((x529|x530)+(x531/x532));

    if (t125 != 2814LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x533 = UINT16_MAX;
	int8_t x535 = INT8_MAX;

    t126 = ((x533|x534)+(x535/x536));

    if (t126 != 65535LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x537 = UINT64_MAX;
	int32_t x538 = -1;
	int32_t x539 = 7;
	int32_t x540 = -1;
	volatile uint64_t t127 = 724653273LLU;

    t127 = ((x537|x538)+(x539/x540));

    if (t127 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x541 = 2000U;
	static uint64_t x543 = UINT64_MAX;
	volatile int64_t x544 = INT64_MAX;
	uint64_t t128 = 14880LLU;

    t128 = ((x541|x542)+(x543/x544));

    if (t128 != 18446744073709551570LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x545 = INT8_MAX;
	volatile int8_t x546 = -1;
	int32_t x547 = INT32_MIN;
	volatile int32_t t129 = -1111824;

    t129 = ((x545|x546)+(x547/x548));

    if (t129 != -76773) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile uint32_t x549 = 145760271U;
	volatile int16_t x550 = INT16_MIN;
	static int64_t t130 = -11537506606425LL;

    t130 = ((x549|x550)+(x551/x552));

    if (t130 != 140743930814479LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x553 = INT8_MIN;
	int16_t x554 = -1;
	int16_t x555 = -3697;
	static int16_t x556 = 171;
	static int32_t t131 = 494;

    t131 = ((x553|x554)+(x555/x556));

    if (t131 != -22) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x559 = 4953U;
	volatile int32_t t132 = 144987;

    t132 = ((x557|x558)+(x559/x560));

    if (t132 != 32786) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x561 = 29981049173792LLU;
	int64_t x562 = INT64_MIN;
	int32_t x563 = 61372;
	int64_t x564 = INT64_MIN;
	uint64_t t133 = 293616036227745395LLU;

    t133 = ((x561|x562)+(x563/x564));

    if (t133 != 9223402017903949600LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint64_t x565 = 52574826648623LLU;
	int16_t x566 = INT16_MAX;
	volatile int32_t x568 = INT32_MIN;

    t134 = ((x565|x566)+(x567/x568));

    if (t134 != 52574826659840LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x569 = 4;
	int16_t x570 = INT16_MAX;
	int8_t x571 = INT8_MIN;

    t135 = ((x569|x570)+(x571/x572));

    if (t135 != 32767) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x573 = -25;
	static volatile int16_t x574 = -1;
	int8_t x576 = INT8_MIN;

    t136 = ((x573|x574)+(x575/x576));

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x577 = INT16_MIN;
	int16_t x578 = -1;
	int16_t x579 = INT16_MIN;
	int32_t t137 = -480;

    t137 = ((x577|x578)+(x579/x580));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x581 = INT64_MIN;
	uint64_t x582 = 108172908562720LLU;
	int16_t x583 = 10217;
	static uint64_t x584 = 128694992174014LLU;

    t138 = ((x581|x582)+(x583/x584));

    if (t138 != 9223480209763338528LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int64_t x585 = INT64_MIN;
	int8_t x586 = -1;
	int16_t x587 = INT16_MIN;

    t139 = ((x585|x586)+(x587/x588));

    if (t139 != 281LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x589 = -116772758;
	uint64_t x590 = 123787900880227916LLU;
	static int64_t x591 = INT64_MIN;

    t140 = ((x589|x590)+(x591/x592));

    if (t140 != 18446462590067097190LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x593 = UINT32_MAX;
	static volatile uint64_t x596 = 2115869022674449322LLU;
	volatile uint64_t t141 = 5838236887869052LLU;

    t141 = ((x593|x594)+(x595/x596));

    if (t141 != 3LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x597 = INT64_MIN;
	volatile uint16_t x598 = 13U;
	int16_t x600 = 23;

    t142 = ((x597|x598)+(x599/x600));

    if (t142 != -9223372036761406941LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x601 = -3;
	int16_t x602 = -14;
	static int8_t x603 = -31;
	int8_t x604 = -1;
	volatile int32_t t143 = 488840519;

    t143 = ((x601|x602)+(x603/x604));

    if (t143 != 30) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x605 = INT8_MIN;
	volatile int16_t x607 = 13;
	uint16_t x608 = UINT16_MAX;
	volatile uint32_t t144 = 23890U;

    t144 = ((x605|x606)+(x607/x608));

    if (t144 != 4294967233U) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x609 = -1;
	volatile uint16_t x610 = 118U;
	int64_t x611 = -1LL;
	int64_t x612 = -11421455091248LL;
	volatile int64_t t145 = 62667754898457527LL;

    t145 = ((x609|x610)+(x611/x612));

    if (t145 != -1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x613 = INT8_MIN;
	volatile int16_t x614 = INT16_MIN;
	int8_t x615 = -1;
	int16_t x616 = INT16_MAX;
	volatile int32_t t146 = -148845;

    t146 = ((x613|x614)+(x615/x616));

    if (t146 != -128) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x617 = UINT16_MAX;
	uint32_t x618 = 158U;
	int32_t x619 = INT32_MAX;
	uint64_t t147 = 23192302884524LLU;

    t147 = ((x617|x618)+(x619/x620));

    if (t147 != 7445203LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x621 = -1LL;
	uint64_t x622 = 6692908915892LLU;
	int64_t x623 = 3467431244LL;

    t148 = ((x621|x622)+(x623/x624));

    if (t148 != 18446744070242120371LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x625 = 8U;
	uint64_t x626 = UINT64_MAX;
	static volatile int8_t x628 = INT8_MAX;

    t149 = ((x625|x626)+(x627/x628));

    if (t149 != 16909319LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x629 = -1;
	uint8_t x630 = 0U;
	static uint64_t x631 = UINT64_MAX;
	static int32_t x632 = INT32_MIN;
	uint64_t t150 = 141817470779LLU;

    t150 = ((x629|x630)+(x631/x632));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x633 = INT32_MAX;
	int16_t x634 = INT16_MIN;
	int32_t x635 = INT32_MAX;
	static uint16_t x636 = 25040U;
	int32_t t151 = 177314;

    t151 = ((x633|x634)+(x635/x636));

    if (t151 != 85761) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint32_t x641 = UINT32_MAX;
	uint8_t x643 = 126U;
	static uint8_t x644 = 11U;

    t152 = ((x641|x642)+(x643/x644));

    if (t152 != 10U) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x645 = -1;
	int64_t x647 = -1LL;
	static int32_t x648 = INT32_MIN;
	static int64_t t153 = 12773357452LL;

    t153 = ((x645|x646)+(x647/x648));

    if (t153 != -1LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x649 = 1;
	int16_t x650 = INT16_MAX;
	int64_t x651 = -256973LL;
	volatile int8_t x652 = 1;
	int64_t t154 = 475248584471193181LL;

    t154 = ((x649|x650)+(x651/x652));

    if (t154 != -224206LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x653 = INT8_MIN;
	volatile int16_t x654 = -1;
	int32_t x656 = INT32_MIN;

    t155 = ((x653|x654)+(x655/x656));

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x657 = 8U;
	uint32_t x658 = 82U;
	int8_t x659 = INT8_MIN;
	int64_t x660 = INT64_MIN;

    t156 = ((x657|x658)+(x659/x660));

    if (t156 != 90LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x661 = 4768945543708688065LLU;
	static int8_t x662 = INT8_MIN;
	int8_t x663 = 0;
	int64_t x664 = -1LL;
	volatile uint64_t t157 = 27241566913595309LLU;

    t157 = ((x661|x662)+(x663/x664));

    if (t157 != 18446744073709551553LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x665 = 173471937LLU;
	int64_t x666 = INT64_MIN;
	uint8_t x668 = 21U;
	uint64_t t158 = 60754581914289LLU;

    t158 = ((x665|x666)+(x667/x668));

    if (t158 != 9223372037028247748LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x671 = INT32_MAX;
	int8_t x672 = -1;
	uint32_t t159 = 174457395U;

    t159 = ((x669|x670)+(x671/x672));

    if (t159 != 2147483712U) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x674 = INT8_MAX;
	int8_t x675 = -1;
	uint8_t x676 = UINT8_MAX;
	static volatile int64_t t160 = 13285368LL;

    t160 = ((x673|x674)+(x675/x676));

    if (t160 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint16_t x678 = UINT16_MAX;
	uint64_t x679 = UINT64_MAX;
	static volatile uint64_t t161 = 5952204LLU;

    t161 = ((x677|x678)+(x679/x680));

    if (t161 != 52257065364681828LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x681 = INT16_MAX;
	int8_t x682 = -1;
	uint16_t x683 = UINT16_MAX;
	int64_t t162 = -21LL;

    t162 = ((x681|x682)+(x683/x684));

    if (t162 != -1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile uint64_t x685 = 7224501LLU;
	uint64_t x686 = 162355204168LLU;
	int16_t x687 = 322;
	uint32_t x688 = 290304U;
	uint64_t t163 = 449847LLU;

    t163 = ((x685|x686)+(x687/x688));

    if (t163 != 162361507069LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x691 = 3476666879221403LL;

    t164 = ((x689|x690)+(x691/x692));

    if (t164 != -27157165026719LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x693 = INT8_MAX;
	int16_t x694 = -1;
	volatile int32_t x695 = -1;
	uint32_t x696 = UINT32_MAX;
	volatile uint32_t t165 = 107439212U;

    t165 = ((x693|x694)+(x695/x696));

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x697 = INT16_MIN;
	uint16_t x698 = 3138U;
	int8_t x699 = 0;
	uint64_t x700 = 568LLU;
	volatile uint64_t t166 = 332397138598799LLU;

    t166 = ((x697|x698)+(x699/x700));

    if (t166 != 18446744073709521986LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x703 = INT16_MIN;
	volatile uint8_t x704 = 15U;
	static volatile int32_t t167 = -162092245;

    t167 = ((x701|x702)+(x703/x704));

    if (t167 != -2185) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x705 = 3527894U;
	uint8_t x706 = UINT8_MAX;
	volatile int32_t x707 = 105735143;
	static uint8_t x708 = 18U;
	volatile uint32_t t168 = 15U;

    t168 = ((x705|x706)+(x707/x708));

    if (t168 != 9402109U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x711 = 4971709U;
	volatile uint32_t t169 = 1U;

    t169 = ((x709|x710)+(x711/x712));

    if (t169 != 101462U) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x713 = INT64_MIN;
	int16_t x714 = INT16_MIN;
	uint8_t x715 = UINT8_MAX;
	uint32_t x716 = 15534U;
	volatile int64_t t170 = -622427707504823LL;

    t170 = ((x713|x714)+(x715/x716));

    if (t170 != -32768LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x717 = -1;
	volatile uint8_t x718 = 11U;
	static uint16_t x719 = 7U;
	volatile int8_t x720 = -31;
	volatile int32_t t171 = 6;

    t171 = ((x717|x718)+(x719/x720));

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x722 = UINT64_MAX;
	int8_t x723 = INT8_MIN;
	int16_t x724 = INT16_MAX;
	uint64_t t172 = UINT64_MAX;

    t172 = ((x721|x722)+(x723/x724));

    if (t172 != UINT64_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x725 = 145;
	int16_t x726 = 6661;
	int64_t x727 = INT64_MIN;
	static int8_t x728 = INT8_MIN;
	volatile int64_t t173 = -1151090032150LL;

    t173 = ((x725|x726)+(x727/x728));

    if (t173 != 72057594037934741LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x729 = 0U;
	volatile int32_t x730 = -957;
	int32_t x731 = INT32_MIN;
	static uint32_t t174 = 2527U;

    t174 = ((x729|x730)+(x731/x732));

    if (t174 != 4280649782U) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x733 = 1;
	uint64_t x734 = 3708151455888202910LLU;
	int16_t x735 = INT16_MIN;
	uint32_t x736 = 5993964U;
	uint64_t t175 = 6LLU;

    t175 = ((x733|x734)+(x735/x736));

    if (t175 != 3708151455888203627LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x737 = -56;
	static uint64_t x738 = UINT64_MAX;
	int8_t x739 = 0;
	int8_t x740 = INT8_MIN;
	static volatile uint64_t t176 = UINT64_MAX;

    t176 = ((x737|x738)+(x739/x740));

    if (t176 != UINT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x743 = UINT16_MAX;
	int8_t x744 = INT8_MIN;
	volatile int32_t t177 = -169635;

    t177 = ((x741|x742)+(x743/x744));

    if (t177 != -512) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x746 = UINT8_MAX;
	int32_t x747 = INT32_MIN;
	volatile int8_t x748 = INT8_MIN;
	int32_t t178 = 0;

    t178 = ((x745|x746)+(x747/x748));

    if (t178 != 16777471) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x749 = 63U;
	int16_t x750 = -1;
	uint64_t x751 = UINT64_MAX;
	uint64_t t179 = 15070530LLU;

    t179 = ((x749|x750)+(x751/x752));

    if (t179 != 88261933367031346LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x754 = 0U;
	static uint8_t x755 = 0U;
	int32_t x756 = 41;
	volatile uint64_t t180 = 17LLU;

    t180 = ((x753|x754)+(x755/x756));

    if (t180 != 153733760288935884LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x759 = -930;
	volatile int64_t t181 = 1561446418106LL;

    t181 = ((x757|x758)+(x759/x760));

    if (t181 != -3251LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x761 = -947;
	static uint8_t x762 = UINT8_MAX;
	int8_t x763 = INT8_MAX;
	static uint8_t x764 = 2U;
	int32_t t182 = -70754182;

    t182 = ((x761|x762)+(x763/x764));

    if (t182 != -706) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x765 = UINT8_MAX;
	volatile int64_t t183 = -2990765039207384LL;

    t183 = ((x765|x766)+(x767/x768));

    if (t183 != -9223372036854775569LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x769 = 90123415749473LLU;
	static uint8_t x770 = 13U;
	int8_t x771 = -3;
	int16_t x772 = -1;
	volatile uint64_t t184 = 39485430189LLU;

    t184 = ((x769|x770)+(x771/x772));

    if (t184 != 90123415749488LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x773 = -1LL;
	static int8_t x774 = INT8_MAX;
	static uint8_t x775 = 65U;
	uint8_t x776 = 46U;

    t185 = ((x773|x774)+(x775/x776));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x777 = INT8_MIN;
	int16_t x778 = INT16_MIN;
	int32_t x779 = INT32_MAX;
	static volatile int64_t x780 = -1LL;
	int64_t t186 = -2793217LL;

    t186 = ((x777|x778)+(x779/x780));

    if (t186 != -2147483775LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x781 = INT8_MIN;
	uint8_t x782 = 8U;
	uint8_t x783 = 39U;
	volatile int16_t x784 = INT16_MIN;
	int32_t t187 = 739931557;

    t187 = ((x781|x782)+(x783/x784));

    if (t187 != -120) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x789 = UINT16_MAX;
	static volatile uint8_t x790 = 2U;
	uint32_t x792 = 7979510U;
	volatile uint32_t t188 = 53U;

    t188 = ((x789|x790)+(x791/x792));

    if (t188 != 66073U) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x793 = -7073171LL;
	int32_t x794 = 11401269;
	volatile int64_t t189 = -205004393399411496LL;

    t189 = ((x793|x794)+(x795/x796));

    if (t189 != -4326787LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x797 = UINT64_MAX;
	volatile int64_t x798 = -1LL;
	volatile uint32_t x799 = 119944825U;
	volatile int8_t x800 = -7;
	uint64_t t190 = UINT64_MAX;

    t190 = ((x797|x798)+(x799/x800));

    if (t190 != UINT64_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x801 = INT32_MIN;
	static volatile uint8_t x802 = 0U;
	uint32_t x803 = UINT32_MAX;
	static uint32_t t191 = 4U;

    t191 = ((x801|x802)+(x803/x804));

    if (t191 != 2147614724U) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int8_t x805 = INT8_MIN;
	static int8_t x807 = INT8_MAX;
	volatile uint64_t t192 = 2241826LLU;

    t192 = ((x805|x806)+(x807/x808));

    if (t192 != 18446744073709551535LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint8_t x810 = 10U;
	static volatile int32_t x811 = 19;
	static int16_t x812 = -1176;

    t193 = ((x809|x810)+(x811/x812));

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x813 = 2;
	uint64_t x814 = UINT64_MAX;
	int8_t x815 = -25;
	volatile int64_t x816 = -1LL;
	volatile uint64_t t194 = 688243271809LLU;

    t194 = ((x813|x814)+(x815/x816));

    if (t194 != 24LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x818 = INT32_MAX;
	int32_t x819 = INT32_MIN;
	volatile int64_t x820 = 174266581877728LL;
	volatile int64_t t195 = -411498LL;

    t195 = ((x817|x818)+(x819/x820));

    if (t195 != 2147483647LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x821 = UINT16_MAX;
	uint16_t x822 = 3U;
	int64_t x823 = INT64_MIN;
	volatile int64_t x824 = -206278777067LL;
	volatile int64_t t196 = 17613487707642807LL;

    t196 = ((x821|x822)+(x823/x824));

    if (t196 != 44778675LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x830 = INT8_MIN;
	uint8_t x831 = 26U;
	uint64_t t197 = UINT64_MAX;

    t197 = ((x829|x830)+(x831/x832));

    if (t197 != UINT64_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x833 = 7798U;
	static volatile int8_t x834 = INT8_MAX;
	volatile int64_t x835 = -672938367LL;
	int64_t x836 = 110035472693439LL;

    t198 = ((x833|x834)+(x835/x836));

    if (t198 != 7807LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x841 = 1;
	static volatile uint16_t x842 = 1804U;
	int32_t x843 = 14;
	uint8_t x844 = 65U;
	static int32_t t199 = -22;

    t199 = ((x841|x842)+(x843/x844));

    if (t199 != 1805) { NG(); } else { ; }
	
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

