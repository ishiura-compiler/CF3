
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

int8_t x10 = 1;
volatile int8_t x18 = INT8_MIN;
int32_t x20 = 2210236;
volatile int16_t x24 = INT16_MIN;
volatile int32_t t3 = 7419;
uint64_t x38 = 1004134580774327LLU;
uint8_t x44 = UINT8_MAX;
volatile uint8_t x45 = 1U;
uint8_t x46 = 1U;
volatile int32_t t7 = -1;
int32_t x55 = INT32_MIN;
uint64_t x58 = 127139008430417LLU;
int8_t x59 = INT8_MIN;
int16_t x61 = -1;
int8_t x62 = -1;
int32_t x63 = INT32_MAX;
uint32_t x65 = 119U;
uint32_t x66 = 6U;
uint16_t x68 = UINT16_MAX;
volatile int32_t t11 = 7842;
int32_t x75 = 421074562;
static uint16_t x81 = 6U;
uint8_t x88 = 103U;
uint32_t x101 = 9U;
volatile uint64_t t21 = 807068241LLU;
volatile int8_t x112 = INT8_MIN;
int64_t x118 = -1LL;
uint16_t x128 = 3708U;
static int8_t x139 = INT8_MAX;
volatile int32_t t28 = 253;
uint32_t x142 = 482108067U;
uint64_t x143 = UINT64_MAX;
static uint8_t x145 = UINT8_MAX;
int8_t x147 = -11;
static uint32_t t30 = 151004416U;
uint64_t x156 = 27132LLU;
int32_t x160 = -1;
volatile int16_t x170 = INT16_MAX;
int64_t x171 = -529625048473LL;
uint64_t x186 = 723183778793703254LLU;
uint8_t x192 = UINT8_MAX;
int32_t x199 = INT32_MIN;
int32_t x209 = 996770758;
volatile int64_t t44 = 55017067291265LL;
volatile uint16_t x216 = 24U;
volatile int8_t x222 = INT8_MIN;
int64_t x226 = INT64_MIN;
uint8_t x234 = 1U;
int32_t x243 = -1;
uint32_t x253 = 35923598U;
volatile int32_t t55 = -21577;
int64_t x270 = INT64_MIN;
int64_t x278 = 7LL;
volatile uint16_t x279 = 361U;
volatile int16_t x281 = INT16_MIN;
int64_t x287 = -2913447414930LL;
uint16_t x288 = 318U;
int16_t x291 = -483;
int32_t x295 = 72;
static int8_t x299 = -1;
uint64_t t65 = 139559895LLU;
int8_t x306 = INT8_MIN;
static int8_t x308 = INT8_MAX;
volatile int8_t x317 = INT8_MIN;
int8_t x323 = INT8_MAX;
static int32_t t70 = -1;
volatile uint32_t x325 = 162U;
uint64_t x330 = UINT64_MAX;
volatile int16_t x331 = INT16_MAX;
int32_t t72 = 7175170;
uint8_t x337 = 14U;
volatile int32_t t75 = -1;
volatile uint8_t x361 = UINT8_MAX;
int32_t x364 = -5419;
volatile uint32_t x368 = 90170U;
int32_t x370 = -1;
int64_t x379 = -5908815LL;
static uint8_t x385 = 13U;
static int8_t x387 = INT8_MIN;
volatile int64_t x388 = 3LL;
static int64_t t83 = 5470998828630LL;
static int8_t x394 = -1;
static int8_t x395 = INT8_MIN;
int64_t x399 = -1LL;
int8_t x402 = INT8_MIN;
uint64_t x414 = 1748LLU;
static uint32_t x428 = 427295U;
uint32_t x432 = 6399U;
static volatile uint32_t x446 = 639228U;
uint8_t x448 = 20U;
static uint64_t x463 = 532580472LLU;
static int8_t x465 = 0;
static uint64_t x468 = 4LLU;
volatile int64_t x477 = INT64_MIN;
int8_t x487 = INT8_MIN;
volatile uint8_t x491 = UINT8_MAX;
uint32_t t103 = 2219206U;
static volatile uint16_t x494 = 2416U;
volatile int64_t t104 = 41569161776LL;
static int16_t x497 = INT16_MIN;
static uint64_t x501 = UINT64_MAX;
static int64_t x509 = -1LL;
static volatile uint8_t x512 = 3U;
static volatile int32_t t108 = -15499;
static uint16_t x520 = 1573U;
uint16_t x523 = UINT16_MAX;
volatile uint64_t x524 = 2365731581460LLU;
static int64_t x530 = INT64_MIN;
volatile int64_t x533 = INT64_MAX;
static uint64_t x538 = 80LLU;
int8_t x548 = -24;
volatile uint32_t t116 = 1248U;
uint8_t x564 = UINT8_MAX;
uint32_t x568 = 6438U;
uint8_t x583 = 0U;
volatile int32_t t125 = 1;
int64_t x590 = 510LL;
static int8_t x597 = -1;
uint16_t x604 = UINT16_MAX;
uint32_t x613 = 1609713843U;
int32_t x618 = -1;
int32_t x621 = INT32_MAX;
uint64_t x622 = 234LLU;
int16_t x636 = INT16_MIN;
int16_t x644 = -76;
uint32_t x648 = UINT32_MAX;
static uint16_t x672 = 0U;
int16_t x682 = 5496;
volatile uint8_t x684 = 7U;
int8_t x690 = INT8_MIN;
int64_t x705 = -1LL;
static int64_t t149 = -119334271460420606LL;
int64_t x735 = -1LL;
int16_t x741 = -1;
int8_t x742 = INT8_MIN;
int16_t x752 = -1;
volatile int16_t x759 = -1;
uint8_t x765 = 4U;
static int16_t x770 = 0;
static volatile int64_t x774 = INT64_MIN;
uint32_t t160 = 1865202U;
static int16_t x777 = -1;
int64_t x779 = 522319LL;
volatile int8_t x786 = INT8_MIN;
static uint32_t x788 = 1U;
volatile uint64_t t163 = 40862963240733LLU;
int32_t t164 = -284228381;
uint64_t x802 = 10473597209294847LLU;
int32_t x806 = INT32_MIN;
volatile int32_t t166 = -29822;
static volatile int8_t x810 = 1;
int8_t x812 = INT8_MIN;
volatile int8_t x813 = INT8_MAX;
volatile uint16_t x817 = UINT16_MAX;
int32_t t169 = 61009966;
uint64_t x821 = 256188193LLU;
static uint32_t t170 = 460U;
static int32_t t173 = -2183;
int16_t x847 = INT16_MIN;
uint32_t x851 = UINT32_MAX;
static uint32_t x854 = 796342887U;
uint16_t x867 = 2183U;
static int32_t x870 = -1;
int64_t x886 = 29104219LL;
uint8_t x887 = UINT8_MAX;
int8_t x888 = 14;
int8_t x889 = 1;
int64_t x898 = 48854133373915655LL;
uint8_t x900 = 6U;
volatile uint16_t x902 = 0U;
int16_t x903 = 18;
uint32_t x911 = UINT32_MAX;
uint16_t x913 = UINT16_MAX;
uint16_t x915 = UINT16_MAX;
uint64_t x918 = UINT64_MAX;
int16_t x927 = INT16_MAX;
static uint8_t x928 = 0U;
int64_t x930 = -5308LL;
static uint64_t x931 = 1363173158896LLU;
uint64_t t193 = 500683880762LLU;
uint64_t x948 = 69800LLU;
int64_t x951 = -16311804LL;
int8_t x957 = INT8_MAX;
volatile int32_t x963 = 18967;
int32_t x965 = -184752;


void f0(void) {
    	volatile int16_t x1 = INT16_MAX;
	int32_t x2 = -1;
	static int16_t x3 = -2952;
	int16_t x4 = -1;
	int32_t t0 = -3107934;

    t0 = ((x1==x2)&(x3-x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x9 = INT64_MAX;
	volatile int8_t x11 = INT8_MAX;
	static int8_t x12 = INT8_MAX;
	int32_t t1 = 766856;

    t1 = ((x9==x10)&(x11-x12));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x17 = INT16_MIN;
	uint32_t x19 = UINT32_MAX;
	uint32_t t2 = 3U;

    t2 = ((x17==x18)&(x19-x20));

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x21 = UINT8_MAX;
	uint32_t x22 = 1639812642U;
	int16_t x23 = -3;

    t3 = ((x21==x22)&(x23-x24));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x33 = -2;
	volatile uint32_t x34 = UINT32_MAX;
	int64_t x35 = -1LL;
	uint32_t x36 = 598943501U;
	int64_t t4 = -2LL;

    t4 = ((x33==x34)&(x35-x36));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x37 = -1;
	uint16_t x39 = 1450U;
	int8_t x40 = -1;
	volatile int32_t t5 = -16987;

    t5 = ((x37==x38)&(x39-x40));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x41 = 211LLU;
	volatile int64_t x42 = INT64_MIN;
	static int8_t x43 = INT8_MAX;
	static int32_t t6 = 95999681;

    t6 = ((x41==x42)&(x43-x44));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x47 = 4204;
	int8_t x48 = -1;

    t7 = ((x45==x46)&(x47-x48));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x53 = INT64_MIN;
	static volatile int32_t x54 = INT32_MIN;
	static uint32_t x56 = UINT32_MAX;
	uint32_t t8 = 1902U;

    t8 = ((x53==x54)&(x55-x56));

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x57 = -5816322;
	int64_t x60 = INT64_MIN;
	int64_t t9 = 270LL;

    t9 = ((x57==x58)&(x59-x60));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x64 = INT32_MAX;
	static int32_t t10 = 918;

    t10 = ((x61==x62)&(x63-x64));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x67 = UINT16_MAX;

    t11 = ((x65==x66)&(x67-x68));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x69 = INT32_MAX;
	uint8_t x70 = 6U;
	int32_t x71 = INT32_MIN;
	static int32_t x72 = INT32_MIN;
	int32_t t12 = 113819566;

    t12 = ((x69==x70)&(x71-x72));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x73 = INT8_MIN;
	int64_t x74 = INT64_MAX;
	static uint16_t x76 = 1U;
	static volatile int32_t t13 = 2100;

    t13 = ((x73==x74)&(x75-x76));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x77 = UINT32_MAX;
	volatile uint32_t x78 = 521346378U;
	static volatile uint8_t x79 = 3U;
	int8_t x80 = -1;
	volatile int32_t t14 = -4;

    t14 = ((x77==x78)&(x79-x80));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint64_t x82 = 184300LLU;
	int32_t x83 = INT32_MIN;
	int8_t x84 = -13;
	static int32_t t15 = 1071;

    t15 = ((x81==x82)&(x83-x84));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x85 = 84U;
	volatile int32_t x86 = -88968587;
	int64_t x87 = -1903499321LL;
	volatile int64_t t16 = -2LL;

    t16 = ((x85==x86)&(x87-x88));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x89 = -1;
	static int32_t x90 = INT32_MIN;
	uint32_t x91 = 21U;
	int32_t x92 = -1;
	volatile uint32_t t17 = 9U;

    t17 = ((x89==x90)&(x91-x92));

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x93 = -1LL;
	volatile int32_t x94 = INT32_MIN;
	static uint16_t x95 = 2450U;
	int8_t x96 = -44;
	volatile int32_t t18 = 473665;

    t18 = ((x93==x94)&(x95-x96));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x97 = 271U;
	int8_t x98 = 20;
	uint8_t x99 = 38U;
	uint32_t x100 = UINT32_MAX;
	uint32_t t19 = 265017803U;

    t19 = ((x97==x98)&(x99-x100));

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x102 = 1077141094441348LLU;
	uint16_t x103 = 4U;
	uint64_t x104 = 86623706203148675LLU;
	uint64_t t20 = 8083665674LLU;

    t20 = ((x101==x102)&(x103-x104));

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x105 = -1;
	uint8_t x106 = 1U;
	static volatile int64_t x107 = -1LL;
	volatile uint64_t x108 = UINT64_MAX;

    t21 = ((x105==x106)&(x107-x108));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x109 = INT16_MIN;
	volatile uint32_t x110 = UINT32_MAX;
	int8_t x111 = 39;
	volatile int32_t t22 = -767875;

    t22 = ((x109==x110)&(x111-x112));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x113 = 22;
	int32_t x114 = 183812254;
	int64_t x115 = 27249990418LL;
	int16_t x116 = 15;
	volatile int64_t t23 = -1LL;

    t23 = ((x113==x114)&(x115-x116));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x117 = INT32_MIN;
	volatile uint32_t x119 = 32U;
	volatile uint32_t x120 = 3803448U;
	volatile uint32_t t24 = 55849U;

    t24 = ((x117==x118)&(x119-x120));

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x125 = 4U;
	uint32_t x126 = UINT32_MAX;
	int8_t x127 = 1;
	static int32_t t25 = -53382;

    t25 = ((x125==x126)&(x127-x128));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x129 = INT16_MIN;
	static uint64_t x130 = 0LLU;
	int32_t x131 = 2865;
	int64_t x132 = -1LL;
	static volatile int64_t t26 = 100108953620LL;

    t26 = ((x129==x130)&(x131-x132));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x133 = 3388868U;
	static uint32_t x134 = 7062595U;
	int64_t x135 = -2LL;
	uint64_t x136 = 0LLU;
	uint64_t t27 = 36222897LLU;

    t27 = ((x133==x134)&(x135-x136));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x137 = 880U;
	static uint16_t x138 = 8U;
	uint8_t x140 = UINT8_MAX;

    t28 = ((x137==x138)&(x139-x140));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x141 = -1;
	int16_t x144 = 0;
	volatile uint64_t t29 = 221336206203178276LLU;

    t29 = ((x141==x142)&(x143-x144));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int8_t x146 = INT8_MIN;
	uint32_t x148 = 0U;

    t30 = ((x145==x146)&(x147-x148));

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x149 = INT32_MIN;
	uint8_t x150 = UINT8_MAX;
	static volatile int32_t x151 = INT32_MIN;
	volatile int32_t x152 = INT32_MIN;
	int32_t t31 = 1;

    t31 = ((x149==x150)&(x151-x152));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x153 = UINT32_MAX;
	uint32_t x154 = 60749683U;
	int64_t x155 = -1LL;
	static volatile uint64_t t32 = 8903816LLU;

    t32 = ((x153==x154)&(x155-x156));

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x157 = -92068989LL;
	static volatile int64_t x158 = INT64_MIN;
	uint8_t x159 = 0U;
	volatile int32_t t33 = -63405687;

    t33 = ((x157==x158)&(x159-x160));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x161 = 3734530717692523421LLU;
	uint32_t x162 = UINT32_MAX;
	int8_t x163 = -47;
	int64_t x164 = INT64_MIN;
	int64_t t34 = 146584538807865LL;

    t34 = ((x161==x162)&(x163-x164));

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x165 = INT64_MIN;
	static volatile uint16_t x166 = 1485U;
	int8_t x167 = INT8_MIN;
	int64_t x168 = INT64_MIN;
	static volatile int64_t t35 = 4569812021828LL;

    t35 = ((x165==x166)&(x167-x168));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x169 = INT8_MIN;
	uint32_t x172 = 70U;
	static int64_t t36 = -2044578LL;

    t36 = ((x169==x170)&(x171-x172));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x173 = -57348;
	int32_t x174 = INT32_MAX;
	uint64_t x175 = 554369LLU;
	int8_t x176 = INT8_MAX;
	uint64_t t37 = 1679LLU;

    t37 = ((x173==x174)&(x175-x176));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x177 = 2;
	uint32_t x178 = 7060102U;
	int8_t x179 = -1;
	static int16_t x180 = INT16_MAX;
	int32_t t38 = -1;

    t38 = ((x177==x178)&(x179-x180));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x185 = 702U;
	volatile int32_t x187 = -1;
	uint64_t x188 = UINT64_MAX;
	static uint64_t t39 = 3231606490LLU;

    t39 = ((x185==x186)&(x187-x188));

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x189 = 26U;
	volatile int8_t x190 = 1;
	int8_t x191 = INT8_MAX;
	volatile int32_t t40 = 396;

    t40 = ((x189==x190)&(x191-x192));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x197 = 42U;
	int8_t x198 = -2;
	int8_t x200 = INT8_MIN;
	int32_t t41 = 31625;

    t41 = ((x197==x198)&(x199-x200));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x201 = 4194016LL;
	int16_t x202 = INT16_MIN;
	static int16_t x203 = INT16_MAX;
	int32_t x204 = 1;
	volatile int32_t t42 = 654576;

    t42 = ((x201==x202)&(x203-x204));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int32_t x205 = INT32_MIN;
	int8_t x206 = 14;
	volatile int16_t x207 = INT16_MIN;
	volatile int32_t x208 = -207658;
	volatile int32_t t43 = -369;

    t43 = ((x205==x206)&(x207-x208));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x210 = -4;
	volatile int64_t x211 = -112752LL;
	int8_t x212 = -7;

    t44 = ((x209==x210)&(x211-x212));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x213 = 16609232LLU;
	int32_t x214 = -1;
	int8_t x215 = 1;
	int32_t t45 = -3547;

    t45 = ((x213==x214)&(x215-x216));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x221 = 166;
	volatile int16_t x223 = INT16_MIN;
	uint16_t x224 = UINT16_MAX;
	volatile int32_t t46 = 3;

    t46 = ((x221==x222)&(x223-x224));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x225 = 0;
	static volatile int16_t x227 = -126;
	int64_t x228 = 881229LL;
	int64_t t47 = -7161761789LL;

    t47 = ((x225==x226)&(x227-x228));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x233 = 1;
	int64_t x235 = 1621015764134126LL;
	uint32_t x236 = UINT32_MAX;
	volatile int64_t t48 = 1002765279931LL;

    t48 = ((x233==x234)&(x235-x236));

    if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint64_t x237 = 213LLU;
	static uint16_t x238 = 2652U;
	volatile uint64_t x239 = 59588761405027LLU;
	int64_t x240 = -57162200549031LL;
	static volatile uint64_t t49 = 1187LLU;

    t49 = ((x237==x238)&(x239-x240));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x241 = INT32_MIN;
	int8_t x242 = INT8_MAX;
	int16_t x244 = -10;
	volatile int32_t t50 = -268262;

    t50 = ((x241==x242)&(x243-x244));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x245 = INT64_MIN;
	uint64_t x246 = 226749855LLU;
	volatile int32_t x247 = INT32_MAX;
	uint64_t x248 = 130414LLU;
	volatile uint64_t t51 = 99535325875765LLU;

    t51 = ((x245==x246)&(x247-x248));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x249 = UINT32_MAX;
	volatile uint8_t x250 = 116U;
	uint8_t x251 = 0U;
	int16_t x252 = INT16_MIN;
	int32_t t52 = 2;

    t52 = ((x249==x250)&(x251-x252));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x254 = UINT32_MAX;
	int32_t x255 = 20574288;
	uint64_t x256 = 1145028LLU;
	volatile uint64_t t53 = 23757462514376119LLU;

    t53 = ((x253==x254)&(x255-x256));

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x257 = -1;
	static int64_t x258 = INT64_MIN;
	volatile uint8_t x259 = UINT8_MAX;
	int64_t x260 = -13818410120418787LL;
	int64_t t54 = -483LL;

    t54 = ((x257==x258)&(x259-x260));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x261 = 4553U;
	uint32_t x262 = 0U;
	int8_t x263 = -1;
	int16_t x264 = -1;

    t55 = ((x261==x262)&(x263-x264));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x265 = -1;
	volatile int8_t x266 = 56;
	int32_t x267 = -1;
	int16_t x268 = 463;
	static int32_t t56 = -340101648;

    t56 = ((x265==x266)&(x267-x268));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x269 = INT32_MIN;
	uint32_t x271 = UINT32_MAX;
	int32_t x272 = -1;
	static uint32_t t57 = 6U;

    t57 = ((x269==x270)&(x271-x272));

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x273 = -2;
	int8_t x274 = -23;
	static uint8_t x275 = 4U;
	static volatile uint64_t x276 = UINT64_MAX;
	uint64_t t58 = 60894238793721611LLU;

    t58 = ((x273==x274)&(x275-x276));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x277 = 1;
	int32_t x280 = 2;
	int32_t t59 = -961386;

    t59 = ((x277==x278)&(x279-x280));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x282 = -1258953;
	uint16_t x283 = 20468U;
	int8_t x284 = INT8_MIN;
	volatile int32_t t60 = -810221;

    t60 = ((x281==x282)&(x283-x284));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x285 = UINT32_MAX;
	int8_t x286 = 0;
	int64_t t61 = -2012527972484609LL;

    t61 = ((x285==x286)&(x287-x288));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x289 = 2U;
	volatile int16_t x290 = INT16_MIN;
	volatile int32_t x292 = -1;
	static volatile int32_t t62 = -2462983;

    t62 = ((x289==x290)&(x291-x292));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x293 = UINT64_MAX;
	static volatile int32_t x294 = INT32_MIN;
	int32_t x296 = -53;
	volatile int32_t t63 = 7;

    t63 = ((x293==x294)&(x295-x296));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x297 = 687557011497958526LLU;
	uint8_t x298 = 81U;
	uint32_t x300 = 1978106942U;
	volatile uint32_t t64 = 2833U;

    t64 = ((x297==x298)&(x299-x300));

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint8_t x301 = 29U;
	uint8_t x302 = UINT8_MAX;
	uint64_t x303 = 7871401030065593LLU;
	volatile int8_t x304 = -13;

    t65 = ((x301==x302)&(x303-x304));

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int16_t x305 = -1;
	volatile uint16_t x307 = UINT16_MAX;
	int32_t t66 = -1833643;

    t66 = ((x305==x306)&(x307-x308));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x309 = 458891727936526LLU;
	static int16_t x310 = INT16_MAX;
	uint8_t x311 = 3U;
	static uint16_t x312 = 313U;
	volatile int32_t t67 = 749169110;

    t67 = ((x309==x310)&(x311-x312));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x313 = -1LL;
	uint16_t x314 = 14U;
	volatile int8_t x315 = -1;
	volatile uint64_t x316 = 22LLU;
	uint64_t t68 = 52LLU;

    t68 = ((x313==x314)&(x315-x316));

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x318 = 848973;
	volatile int8_t x319 = INT8_MIN;
	static int8_t x320 = INT8_MAX;
	volatile int32_t t69 = -116;

    t69 = ((x317==x318)&(x319-x320));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x321 = INT32_MAX;
	uint32_t x322 = 169325U;
	volatile int32_t x324 = 4;

    t70 = ((x321==x322)&(x323-x324));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x326 = UINT16_MAX;
	int16_t x327 = INT16_MIN;
	uint32_t x328 = 132445767U;
	volatile uint32_t t71 = 122932530U;

    t71 = ((x325==x326)&(x327-x328));

    if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x329 = -1;
	int16_t x332 = INT16_MIN;

    t72 = ((x329==x330)&(x331-x332));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x333 = INT16_MAX;
	static uint32_t x334 = 92314971U;
	uint16_t x335 = 3U;
	volatile int64_t x336 = 0LL;
	volatile int64_t t73 = 2087LL;

    t73 = ((x333==x334)&(x335-x336));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x338 = 3327000;
	int8_t x339 = -1;
	int16_t x340 = INT16_MAX;
	volatile int32_t t74 = 1;

    t74 = ((x337==x338)&(x339-x340));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint8_t x341 = 1U;
	static int32_t x342 = INT32_MIN;
	int16_t x343 = INT16_MIN;
	static int8_t x344 = -1;

    t75 = ((x341==x342)&(x343-x344));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x345 = 63U;
	static volatile int32_t x346 = INT32_MIN;
	int16_t x347 = -1;
	static volatile int64_t x348 = -85728LL;
	int64_t t76 = 655337760097025LL;

    t76 = ((x345==x346)&(x347-x348));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x353 = INT64_MIN;
	int64_t x354 = -30LL;
	uint16_t x355 = UINT16_MAX;
	static int16_t x356 = INT16_MIN;
	static volatile int32_t t77 = 0;

    t77 = ((x353==x354)&(x355-x356));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x362 = INT32_MAX;
	int8_t x363 = INT8_MIN;
	volatile int32_t t78 = -7362;

    t78 = ((x361==x362)&(x363-x364));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int32_t x365 = INT32_MAX;
	static int32_t x366 = INT32_MIN;
	uint8_t x367 = UINT8_MAX;
	volatile uint32_t t79 = 8600816U;

    t79 = ((x365==x366)&(x367-x368));

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x369 = -1;
	int64_t x371 = INT64_MIN;
	int16_t x372 = -153;
	static volatile int64_t t80 = 14609546227657982LL;

    t80 = ((x369==x370)&(x371-x372));

    if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x373 = 1LL;
	volatile int16_t x374 = INT16_MIN;
	int16_t x375 = -1;
	static int64_t x376 = -241405860943810894LL;
	volatile int64_t t81 = -9483350LL;

    t81 = ((x373==x374)&(x375-x376));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x377 = -1;
	int64_t x378 = INT64_MIN;
	uint8_t x380 = UINT8_MAX;
	volatile int64_t t82 = -7LL;

    t82 = ((x377==x378)&(x379-x380));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x386 = -1;

    t83 = ((x385==x386)&(x387-x388));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x389 = 2219U;
	static int64_t x390 = 519719231419158LL;
	static int64_t x391 = -1LL;
	int64_t x392 = INT64_MIN;
	int64_t t84 = 73760284037LL;

    t84 = ((x389==x390)&(x391-x392));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x393 = -280434;
	int8_t x396 = -1;
	volatile int32_t t85 = -83497223;

    t85 = ((x393==x394)&(x395-x396));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x397 = UINT16_MAX;
	uint32_t x398 = 67275889U;
	int8_t x400 = -1;
	int64_t t86 = 38421457LL;

    t86 = ((x397==x398)&(x399-x400));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint8_t x401 = 12U;
	static volatile int8_t x403 = INT8_MAX;
	uint32_t x404 = UINT32_MAX;
	volatile uint32_t t87 = 51U;

    t87 = ((x401==x402)&(x403-x404));

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x405 = -1;
	int64_t x406 = INT64_MIN;
	int32_t x407 = -1;
	int8_t x408 = INT8_MIN;
	static volatile int32_t t88 = 289936078;

    t88 = ((x405==x406)&(x407-x408));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x413 = 1;
	int64_t x415 = -1LL;
	uint32_t x416 = UINT32_MAX;
	int64_t t89 = 2LL;

    t89 = ((x413==x414)&(x415-x416));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x417 = 250341;
	volatile uint32_t x418 = 10U;
	volatile int8_t x419 = INT8_MIN;
	volatile int16_t x420 = INT16_MIN;
	static volatile int32_t t90 = 93852;

    t90 = ((x417==x418)&(x419-x420));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x425 = INT32_MAX;
	static volatile uint8_t x426 = UINT8_MAX;
	int32_t x427 = -1055060904;
	volatile uint32_t t91 = 63U;

    t91 = ((x425==x426)&(x427-x428));

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint16_t x429 = 1758U;
	int8_t x430 = INT8_MAX;
	static uint32_t x431 = 27332U;
	uint32_t t92 = 1U;

    t92 = ((x429==x430)&(x431-x432));

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x441 = INT16_MIN;
	uint8_t x442 = 113U;
	int64_t x443 = INT64_MIN;
	int16_t x444 = -15;
	int64_t t93 = 570876997282678LL;

    t93 = ((x441==x442)&(x443-x444));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x445 = UINT64_MAX;
	int16_t x447 = INT16_MIN;
	int32_t t94 = 104;

    t94 = ((x445==x446)&(x447-x448));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x449 = 4;
	int16_t x450 = -1;
	int64_t x451 = INT64_MIN;
	int8_t x452 = -3;
	volatile int64_t t95 = 797330702396LL;

    t95 = ((x449==x450)&(x451-x452));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x453 = 7U;
	int32_t x454 = -57386446;
	uint16_t x455 = 1U;
	int8_t x456 = INT8_MIN;
	volatile int32_t t96 = 3;

    t96 = ((x453==x454)&(x455-x456));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x457 = 17980U;
	static uint8_t x458 = 3U;
	volatile uint32_t x459 = 14236252U;
	volatile int16_t x460 = -1;
	static uint32_t t97 = 585379U;

    t97 = ((x457==x458)&(x459-x460));

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x461 = 357U;
	static uint8_t x462 = 0U;
	int32_t x464 = 248806;
	uint64_t t98 = 2140018738739LLU;

    t98 = ((x461==x462)&(x463-x464));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x466 = INT16_MIN;
	static uint8_t x467 = 31U;
	uint64_t t99 = 110084789LLU;

    t99 = ((x465==x466)&(x467-x468));

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint64_t x478 = 7061477947LLU;
	volatile int32_t x479 = INT32_MIN;
	uint64_t x480 = 1308871152992LLU;
	volatile uint64_t t100 = 1880503627LLU;

    t100 = ((x477==x478)&(x479-x480));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x481 = 1;
	volatile int32_t x482 = INT32_MIN;
	volatile int8_t x483 = 0;
	uint32_t x484 = 209141581U;
	uint32_t t101 = 239U;

    t101 = ((x481==x482)&(x483-x484));

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x485 = 89U;
	uint32_t x486 = UINT32_MAX;
	static int32_t x488 = -241300;
	volatile int32_t t102 = 6998;

    t102 = ((x485==x486)&(x487-x488));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x489 = -1LL;
	uint16_t x490 = UINT16_MAX;
	volatile uint32_t x492 = 13088144U;

    t103 = ((x489==x490)&(x491-x492));

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x493 = -1300;
	int16_t x495 = -1;
	int64_t x496 = -13225749603LL;

    t104 = ((x493==x494)&(x495-x496));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x498 = 292LLU;
	static int64_t x499 = 168LL;
	uint32_t x500 = UINT32_MAX;
	volatile int64_t t105 = -1983406236LL;

    t105 = ((x497==x498)&(x499-x500));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x502 = 540563685192LLU;
	static int32_t x503 = INT32_MAX;
	int32_t x504 = 4838633;
	int32_t t106 = 175869571;

    t106 = ((x501==x502)&(x503-x504));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x505 = INT64_MIN;
	uint8_t x506 = 100U;
	static volatile uint8_t x507 = 14U;
	int16_t x508 = -608;
	int32_t t107 = 0;

    t107 = ((x505==x506)&(x507-x508));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x510 = INT16_MIN;
	static int16_t x511 = INT16_MIN;

    t108 = ((x509==x510)&(x511-x512));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x513 = 1;
	int64_t x514 = -1LL;
	int32_t x515 = INT32_MIN;
	volatile int16_t x516 = INT16_MIN;
	int32_t t109 = 51523;

    t109 = ((x513==x514)&(x515-x516));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x517 = 128169583410448LLU;
	static uint8_t x518 = UINT8_MAX;
	static int8_t x519 = INT8_MIN;
	int32_t t110 = 175260625;

    t110 = ((x517==x518)&(x519-x520));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x521 = INT8_MIN;
	uint64_t x522 = 369070985078920976LLU;
	static uint64_t t111 = 232299842347LLU;

    t111 = ((x521==x522)&(x523-x524));

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x525 = -219593368;
	uint32_t x526 = 61841886U;
	volatile int64_t x527 = -1LL;
	uint16_t x528 = 1085U;
	volatile int64_t t112 = 884LL;

    t112 = ((x525==x526)&(x527-x528));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x529 = INT8_MAX;
	int32_t x531 = 1093;
	uint16_t x532 = 1439U;
	volatile int32_t t113 = -1;

    t113 = ((x529==x530)&(x531-x532));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x534 = -24;
	static uint16_t x535 = UINT16_MAX;
	static int16_t x536 = -27;
	volatile int32_t t114 = 685264240;

    t114 = ((x533==x534)&(x535-x536));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x537 = UINT32_MAX;
	volatile uint32_t x539 = UINT32_MAX;
	static int8_t x540 = -62;
	volatile uint32_t t115 = 8142360U;

    t115 = ((x537==x538)&(x539-x540));

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x545 = 11428899U;
	int8_t x546 = 0;
	uint32_t x547 = 1188173U;

    t116 = ((x545==x546)&(x547-x548));

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x549 = -1;
	volatile uint8_t x550 = UINT8_MAX;
	int8_t x551 = -1;
	static int64_t x552 = 6434666LL;
	volatile int64_t t117 = 0LL;

    t117 = ((x549==x550)&(x551-x552));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x553 = 2;
	uint8_t x554 = UINT8_MAX;
	volatile uint32_t x555 = UINT32_MAX;
	uint32_t x556 = UINT32_MAX;
	uint32_t t118 = 4U;

    t118 = ((x553==x554)&(x555-x556));

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x557 = -8;
	uint16_t x558 = 9U;
	volatile int32_t x559 = -58992;
	volatile int8_t x560 = INT8_MAX;
	volatile int32_t t119 = 14;

    t119 = ((x557==x558)&(x559-x560));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x561 = -1;
	int32_t x562 = INT32_MIN;
	int16_t x563 = -1;
	int32_t t120 = -362221610;

    t120 = ((x561==x562)&(x563-x564));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x565 = INT16_MIN;
	static volatile uint32_t x566 = UINT32_MAX;
	int32_t x567 = INT32_MIN;
	volatile uint32_t t121 = 18311U;

    t121 = ((x565==x566)&(x567-x568));

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x573 = INT32_MIN;
	static volatile uint8_t x574 = 93U;
	static volatile uint32_t x575 = 2039777U;
	int16_t x576 = INT16_MAX;
	uint32_t t122 = 53670619U;

    t122 = ((x573==x574)&(x575-x576));

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x577 = INT32_MIN;
	uint32_t x578 = 123654U;
	volatile int16_t x579 = INT16_MIN;
	static int16_t x580 = INT16_MAX;
	static volatile int32_t t123 = 988;

    t123 = ((x577==x578)&(x579-x580));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x581 = 294396532U;
	volatile uint8_t x582 = 1U;
	static volatile uint16_t x584 = 25U;
	static volatile int32_t t124 = -371;

    t124 = ((x581==x582)&(x583-x584));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x585 = 1U;
	static volatile int32_t x586 = -443154;
	int32_t x587 = INT32_MIN;
	int16_t x588 = -1;

    t125 = ((x585==x586)&(x587-x588));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x589 = 0U;
	int64_t x591 = -15308969603LL;
	uint16_t x592 = 3U;
	int64_t t126 = 711088613LL;

    t126 = ((x589==x590)&(x591-x592));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x593 = -1;
	int16_t x594 = -1;
	int64_t x595 = 102906430LL;
	uint16_t x596 = 490U;
	volatile int64_t t127 = 189177LL;

    t127 = ((x593==x594)&(x595-x596));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x598 = INT32_MIN;
	int32_t x599 = -1;
	volatile int8_t x600 = INT8_MIN;
	volatile int32_t t128 = 146;

    t128 = ((x597==x598)&(x599-x600));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x601 = 4171U;
	int8_t x602 = -4;
	static uint32_t x603 = 1176916U;
	static uint32_t t129 = 33664U;

    t129 = ((x601==x602)&(x603-x604));

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile uint64_t x605 = 138374663LLU;
	int8_t x606 = INT8_MAX;
	volatile uint64_t x607 = 22575604729LLU;
	static int16_t x608 = 496;
	volatile uint64_t t130 = 2LLU;

    t130 = ((x605==x606)&(x607-x608));

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x609 = 908163832LL;
	int32_t x610 = 14309482;
	int16_t x611 = 890;
	uint16_t x612 = 0U;
	volatile int32_t t131 = -147989;

    t131 = ((x609==x610)&(x611-x612));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x614 = UINT32_MAX;
	static uint64_t x615 = 38087189910LLU;
	int32_t x616 = INT32_MIN;
	volatile uint64_t t132 = 1849LLU;

    t132 = ((x613==x614)&(x615-x616));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x617 = 398;
	int64_t x619 = 7101861034882988LL;
	uint16_t x620 = 8U;
	volatile int64_t t133 = 1164150LL;

    t133 = ((x617==x618)&(x619-x620));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x623 = INT64_MAX;
	uint16_t x624 = UINT16_MAX;
	int64_t t134 = 20LL;

    t134 = ((x621==x622)&(x623-x624));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x629 = -1;
	int8_t x630 = 0;
	int64_t x631 = 159LL;
	static volatile int32_t x632 = -1;
	int64_t t135 = -2693492337039034105LL;

    t135 = ((x629==x630)&(x631-x632));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x633 = 9LLU;
	static volatile uint8_t x634 = 9U;
	volatile int32_t x635 = -126410;
	int32_t t136 = 7;

    t136 = ((x633==x634)&(x635-x636));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint64_t x637 = 46556LLU;
	int8_t x638 = -1;
	uint16_t x639 = UINT16_MAX;
	uint32_t x640 = 3U;
	volatile uint32_t t137 = 6U;

    t137 = ((x637==x638)&(x639-x640));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint64_t x641 = UINT64_MAX;
	int32_t x642 = 61972435;
	int8_t x643 = INT8_MIN;
	volatile int32_t t138 = 88756;

    t138 = ((x641==x642)&(x643-x644));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x645 = 6U;
	volatile uint16_t x646 = 1694U;
	uint64_t x647 = UINT64_MAX;
	uint64_t t139 = 2955473LLU;

    t139 = ((x645==x646)&(x647-x648));

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x649 = 897660;
	int32_t x650 = -1;
	uint64_t x651 = 1065049711256346282LLU;
	static volatile int8_t x652 = -1;
	static uint64_t t140 = 5LLU;

    t140 = ((x649==x650)&(x651-x652));

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x653 = 1U;
	int16_t x654 = INT16_MIN;
	int64_t x655 = -1LL;
	static int32_t x656 = -1;
	static int64_t t141 = 727111704LL;

    t141 = ((x653==x654)&(x655-x656));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x661 = -1339;
	static int64_t x662 = -1LL;
	volatile uint16_t x663 = 409U;
	int64_t x664 = 453396165LL;
	int64_t t142 = 105028322LL;

    t142 = ((x661==x662)&(x663-x664));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x669 = 23589LLU;
	uint64_t x670 = 103696519640023606LLU;
	int16_t x671 = INT16_MIN;
	int32_t t143 = 1;

    t143 = ((x669==x670)&(x671-x672));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x673 = INT16_MIN;
	static int64_t x674 = -29949733094LL;
	int8_t x675 = INT8_MAX;
	int16_t x676 = INT16_MIN;
	volatile int32_t t144 = -1;

    t144 = ((x673==x674)&(x675-x676));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint32_t x681 = 0U;
	uint64_t x683 = 2481752LLU;
	static uint64_t t145 = 749046096053688252LLU;

    t145 = ((x681==x682)&(x683-x684));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x685 = INT8_MIN;
	static int16_t x686 = INT16_MAX;
	static int8_t x687 = 7;
	int64_t x688 = 359086828LL;
	int64_t t146 = 32493284LL;

    t146 = ((x685==x686)&(x687-x688));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x689 = UINT8_MAX;
	int16_t x691 = INT16_MIN;
	static int16_t x692 = 0;
	volatile int32_t t147 = -81511;

    t147 = ((x689==x690)&(x691-x692));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x701 = INT16_MIN;
	uint32_t x702 = 616045857U;
	static volatile int8_t x703 = INT8_MIN;
	static int32_t x704 = -192271;
	volatile int32_t t148 = 730393;

    t148 = ((x701==x702)&(x703-x704));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x706 = INT16_MAX;
	int16_t x707 = 502;
	volatile int64_t x708 = INT64_MAX;

    t149 = ((x705==x706)&(x707-x708));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x717 = UINT16_MAX;
	int32_t x718 = INT32_MAX;
	int64_t x719 = INT64_MIN;
	int64_t x720 = INT64_MIN;
	int64_t t150 = 44730207612395LL;

    t150 = ((x717==x718)&(x719-x720));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int16_t x721 = INT16_MIN;
	int64_t x722 = INT64_MIN;
	int16_t x723 = -190;
	uint32_t x724 = 1U;
	uint32_t t151 = 1897U;

    t151 = ((x721==x722)&(x723-x724));

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x733 = -1LL;
	int8_t x734 = 1;
	int32_t x736 = INT32_MAX;
	int64_t t152 = 425432853336705726LL;

    t152 = ((x733==x734)&(x735-x736));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x743 = 15248946852077882LL;
	int32_t x744 = INT32_MIN;
	int64_t t153 = -11944410130485836LL;

    t153 = ((x741==x742)&(x743-x744));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint16_t x745 = 204U;
	static volatile uint64_t x746 = 4357952LLU;
	volatile int8_t x747 = -38;
	int8_t x748 = INT8_MIN;
	volatile int32_t t154 = -8;

    t154 = ((x745==x746)&(x747-x748));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x749 = UINT16_MAX;
	uint32_t x750 = 14U;
	int8_t x751 = -7;
	volatile int32_t t155 = 96564130;

    t155 = ((x749==x750)&(x751-x752));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x757 = INT8_MIN;
	volatile uint64_t x758 = 276093775LLU;
	volatile int64_t x760 = INT64_MIN;
	volatile int64_t t156 = 64999LL;

    t156 = ((x757==x758)&(x759-x760));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x761 = INT64_MAX;
	int64_t x762 = -1LL;
	static uint8_t x763 = 68U;
	volatile int16_t x764 = INT16_MAX;
	int32_t t157 = 1;

    t157 = ((x761==x762)&(x763-x764));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x766 = 1;
	volatile uint16_t x767 = 18U;
	uint32_t x768 = 11092589U;
	uint32_t t158 = 347967U;

    t158 = ((x765==x766)&(x767-x768));

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x769 = INT8_MIN;
	static uint32_t x771 = 2U;
	uint64_t x772 = 18271LLU;
	volatile uint64_t t159 = 297760372025869146LLU;

    t159 = ((x769==x770)&(x771-x772));

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x773 = 5585586;
	uint16_t x775 = UINT16_MAX;
	uint32_t x776 = 692697754U;

    t160 = ((x773==x774)&(x775-x776));

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x778 = 2LL;
	uint16_t x780 = 2963U;
	volatile int64_t t161 = 2053426LL;

    t161 = ((x777==x778)&(x779-x780));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x785 = 146670237017177LLU;
	static int32_t x787 = -1;
	volatile uint32_t t162 = 2605U;

    t162 = ((x785==x786)&(x787-x788));

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x789 = 16133U;
	int8_t x790 = INT8_MAX;
	uint64_t x791 = 7932LLU;
	static int64_t x792 = INT64_MIN;

    t163 = ((x789==x790)&(x791-x792));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int64_t x797 = INT64_MAX;
	uint16_t x798 = 94U;
	int16_t x799 = INT16_MIN;
	static uint16_t x800 = 4622U;

    t164 = ((x797==x798)&(x799-x800));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x801 = -55;
	uint64_t x803 = 3677626950604611298LLU;
	int64_t x804 = INT64_MAX;
	uint64_t t165 = 199LLU;

    t165 = ((x801==x802)&(x803-x804));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x805 = -97087;
	volatile int32_t x807 = -1;
	int16_t x808 = INT16_MAX;

    t166 = ((x805==x806)&(x807-x808));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x809 = 80U;
	uint64_t x811 = 50094290LLU;
	static uint64_t t167 = 44076668731034LLU;

    t167 = ((x809==x810)&(x811-x812));

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x814 = INT64_MIN;
	uint16_t x815 = 78U;
	volatile int64_t x816 = -561296526899683202LL;
	volatile int64_t t168 = 3081359LL;

    t168 = ((x813==x814)&(x815-x816));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x818 = -1LL;
	int8_t x819 = -1;
	int8_t x820 = INT8_MIN;

    t169 = ((x817==x818)&(x819-x820));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x822 = INT16_MAX;
	int16_t x823 = -549;
	uint32_t x824 = 16627203U;

    t170 = ((x821==x822)&(x823-x824));

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x829 = 321U;
	int32_t x830 = -489655983;
	int8_t x831 = INT8_MIN;
	static int32_t x832 = -162102;
	volatile int32_t t171 = 2315026;

    t171 = ((x829==x830)&(x831-x832));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint16_t x833 = UINT16_MAX;
	int32_t x834 = INT32_MAX;
	int16_t x835 = 0;
	volatile int8_t x836 = -12;
	volatile int32_t t172 = 3385303;

    t172 = ((x833==x834)&(x835-x836));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int32_t x837 = INT32_MIN;
	uint32_t x838 = UINT32_MAX;
	static int16_t x839 = -24;
	static int8_t x840 = INT8_MIN;

    t173 = ((x837==x838)&(x839-x840));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x841 = INT16_MIN;
	uint16_t x842 = 47U;
	uint16_t x843 = UINT16_MAX;
	uint64_t x844 = UINT64_MAX;
	static uint64_t t174 = 33137187665625LLU;

    t174 = ((x841==x842)&(x843-x844));

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x845 = INT32_MAX;
	int64_t x846 = 4LL;
	int16_t x848 = 1;
	int32_t t175 = 781;

    t175 = ((x845==x846)&(x847-x848));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile uint16_t x849 = 11959U;
	uint16_t x850 = 0U;
	int16_t x852 = -1;
	uint32_t t176 = 2444237U;

    t176 = ((x849==x850)&(x851-x852));

    if (t176 != 0U) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x853 = -8;
	volatile int8_t x855 = -1;
	volatile int64_t x856 = INT64_MIN;
	int64_t t177 = 1LL;

    t177 = ((x853==x854)&(x855-x856));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x857 = 122U;
	uint16_t x858 = 1U;
	int8_t x859 = -1;
	volatile int64_t x860 = -1LL;
	int64_t t178 = 317493415LL;

    t178 = ((x857==x858)&(x859-x860));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x865 = INT16_MAX;
	volatile int32_t x866 = INT32_MIN;
	static volatile int8_t x868 = 2;
	volatile int32_t t179 = -346308;

    t179 = ((x865==x866)&(x867-x868));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x869 = UINT16_MAX;
	uint8_t x871 = 54U;
	uint8_t x872 = 1U;
	static volatile int32_t t180 = 82792;

    t180 = ((x869==x870)&(x871-x872));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x877 = -1LL;
	int64_t x878 = INT64_MIN;
	static int16_t x879 = -1;
	int8_t x880 = INT8_MIN;
	volatile int32_t t181 = 420793;

    t181 = ((x877==x878)&(x879-x880));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x881 = -1;
	int32_t x882 = -1;
	volatile uint16_t x883 = UINT16_MAX;
	int8_t x884 = 41;
	volatile int32_t t182 = 19;

    t182 = ((x881==x882)&(x883-x884));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x885 = 41U;
	volatile int32_t t183 = 1;

    t183 = ((x885==x886)&(x887-x888));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x890 = 493222150;
	int64_t x891 = 1LL;
	uint32_t x892 = UINT32_MAX;
	int64_t t184 = -2LL;

    t184 = ((x889==x890)&(x891-x892));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x897 = INT8_MAX;
	uint16_t x899 = 53U;
	int32_t t185 = -417994695;

    t185 = ((x897==x898)&(x899-x900));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x901 = INT8_MIN;
	static int64_t x904 = -20078825719LL;
	int64_t t186 = -48817144735005704LL;

    t186 = ((x901==x902)&(x903-x904));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x909 = INT8_MIN;
	uint16_t x910 = 189U;
	int8_t x912 = -51;
	uint32_t t187 = 1505047U;

    t187 = ((x909==x910)&(x911-x912));

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x914 = 185221U;
	int16_t x916 = INT16_MAX;
	volatile int32_t t188 = 3;

    t188 = ((x913==x914)&(x915-x916));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x917 = 7755187;
	static int64_t x919 = -1LL;
	volatile int32_t x920 = 699251682;
	int64_t t189 = -3028099322616172232LL;

    t189 = ((x917==x918)&(x919-x920));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint8_t x925 = 2U;
	int64_t x926 = INT64_MAX;
	static int32_t t190 = -838242;

    t190 = ((x925==x926)&(x927-x928));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x929 = INT8_MIN;
	uint64_t x932 = 8168738785212985856LLU;
	uint64_t t191 = 15561343797LLU;

    t191 = ((x929==x930)&(x931-x932));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x937 = -1LL;
	uint64_t x938 = UINT64_MAX;
	int8_t x939 = INT8_MAX;
	volatile int16_t x940 = -10;
	int32_t t192 = 5;

    t192 = ((x937==x938)&(x939-x940));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x941 = -23821;
	uint8_t x942 = 0U;
	int16_t x943 = -1;
	uint64_t x944 = 126547374166472LLU;

    t193 = ((x941==x942)&(x943-x944));

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x945 = INT64_MIN;
	static volatile uint64_t x946 = 28LLU;
	uint16_t x947 = 5U;
	static volatile uint64_t t194 = 719817801LLU;

    t194 = ((x945==x946)&(x947-x948));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x949 = INT64_MAX;
	int16_t x950 = INT16_MAX;
	uint16_t x952 = UINT16_MAX;
	volatile int64_t t195 = -49752378808078LL;

    t195 = ((x949==x950)&(x951-x952));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x953 = 2529059422241LL;
	uint8_t x954 = 31U;
	int64_t x955 = -1LL;
	static uint32_t x956 = UINT32_MAX;
	volatile int64_t t196 = -13940444899928LL;

    t196 = ((x953==x954)&(x955-x956));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x958 = INT32_MIN;
	uint32_t x959 = 1774161U;
	uint32_t x960 = UINT32_MAX;
	uint32_t t197 = 142122635U;

    t197 = ((x957==x958)&(x959-x960));

    if (t197 != 0U) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x961 = INT64_MIN;
	uint32_t x962 = 21957U;
	int32_t x964 = 372216201;
	static int32_t t198 = 26;

    t198 = ((x961==x962)&(x963-x964));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x966 = -1;
	volatile int32_t x967 = 31828315;
	uint32_t x968 = 34677U;
	uint32_t t199 = 3U;

    t199 = ((x965==x966)&(x967-x968));

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

