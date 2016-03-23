
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

uint8_t x2 = UINT8_MAX;
uint8_t x12 = UINT8_MAX;
int32_t x14 = INT32_MAX;
volatile int64_t x23 = INT64_MIN;
int16_t x24 = INT16_MIN;
static volatile uint16_t x25 = 6202U;
static int8_t x32 = -31;
int8_t x34 = -30;
int32_t x40 = -7;
int8_t x43 = 20;
int8_t x45 = -1;
int16_t x46 = -1730;
uint8_t x51 = 1U;
volatile int32_t x54 = INT32_MAX;
uint8_t x56 = 1U;
static uint64_t t13 = 104361942692LLU;
int16_t x57 = 65;
int8_t x60 = -13;
static int8_t x65 = INT8_MIN;
int64_t x66 = 1002504469467LL;
static int64_t t16 = -94453064756196LL;
int64_t x72 = INT64_MIN;
int64_t x78 = INT64_MIN;
static int8_t x85 = -1;
volatile uint8_t x90 = 50U;
int64_t x91 = -30484578951LL;
uint64_t x93 = 8457841081LLU;
int8_t x97 = -1;
static int16_t x99 = 3258;
volatile int16_t x100 = INT16_MIN;
static volatile int8_t x101 = 0;
static int16_t x105 = -92;
uint64_t t27 = 657993292028LLU;
volatile int32_t t31 = INT32_MAX;
uint64_t x137 = UINT64_MAX;
static uint64_t t34 = 628LLU;
int8_t x143 = 1;
volatile int8_t x144 = -5;
uint32_t t35 = 52U;
static volatile int64_t x145 = -40476LL;
uint32_t x149 = UINT32_MAX;
static volatile int32_t x155 = INT32_MIN;
int8_t x156 = INT8_MIN;
volatile int32_t t40 = 19;
int32_t x165 = -115;
int8_t x170 = -1;
uint64_t x172 = 595383LLU;
int32_t x178 = INT32_MAX;
uint32_t x182 = 27U;
static int8_t x184 = 1;
static uint8_t x185 = UINT8_MAX;
int64_t x188 = -1LL;
volatile int64_t x192 = INT64_MIN;
volatile uint64_t t47 = 4626415375LLU;
int8_t x194 = INT8_MIN;
int64_t x199 = INT64_MAX;
volatile uint64_t t50 = 44494252206916186LLU;
volatile int32_t t51 = 7700266;
volatile uint32_t t52 = 10253388U;
volatile uint64_t x217 = 831165019044LLU;
uint16_t x221 = 46U;
uint8_t x222 = 0U;
int32_t t55 = 7685688;
uint64_t t57 = 13984080829344LLU;
int8_t x235 = INT8_MIN;
uint64_t x242 = UINT64_MAX;
int8_t x243 = INT8_MAX;
static uint8_t x256 = 121U;
volatile int32_t t63 = -153456062;
static uint32_t x257 = 404744U;
volatile uint16_t x261 = UINT16_MAX;
static int32_t x264 = INT32_MIN;
int8_t x268 = INT8_MAX;
volatile int32_t t68 = -22283808;
int32_t x283 = INT32_MIN;
uint32_t x285 = 15740120U;
uint32_t x287 = UINT32_MAX;
static int64_t x288 = -1LL;
uint64_t x291 = UINT64_MAX;
int16_t x293 = 1;
volatile int32_t t73 = -15;
volatile int16_t x300 = INT16_MIN;
int32_t x314 = 37766059;
int32_t x317 = -1;
volatile uint64_t x319 = 326106301632LLU;
int64_t x320 = INT64_MAX;
volatile int32_t t80 = -1;
int64_t x325 = -164982108LL;
int16_t x326 = INT16_MIN;
uint8_t x328 = UINT8_MAX;
uint16_t x332 = UINT16_MAX;
uint32_t t82 = 244296U;
int16_t x341 = 0;
volatile int16_t x348 = INT16_MIN;
uint16_t x352 = 10229U;
volatile int8_t x355 = INT8_MIN;
static uint16_t x358 = 849U;
int32_t x363 = 269;
static int64_t x364 = 183LL;
int8_t x367 = INT8_MIN;
volatile uint64_t x368 = 7175893641072060LLU;
static uint64_t t91 = 5757527086260LLU;
static int64_t x370 = -1LL;
int32_t x371 = -171264;
int16_t x372 = INT16_MIN;
static volatile int32_t x373 = -275;
volatile int16_t x377 = INT16_MAX;
int32_t x378 = INT32_MIN;
int64_t x380 = 359657628LL;
static int32_t x381 = -3;
int64_t x382 = 108LL;
int32_t x393 = 793856;
volatile int64_t t98 = -94755902340328723LL;
static uint32_t x413 = 47U;
int8_t x415 = INT8_MIN;
uint32_t t103 = 816U;
int8_t x420 = INT8_MAX;
int32_t t104 = 324437;
uint8_t x426 = 1U;
volatile uint64_t t106 = 27512450201LLU;
volatile int16_t x431 = INT16_MAX;
static int32_t t107 = -11027789;
uint64_t x434 = 12902425011770LLU;
uint64_t x452 = 0LLU;
volatile uint64_t x453 = 10875170324973850LLU;
volatile uint8_t x456 = 2U;
uint64_t x464 = 20496270722753265LLU;
int16_t x467 = -1;
int16_t x468 = INT16_MAX;
int8_t x471 = 18;
uint16_t x474 = 14U;
uint32_t x478 = 49168U;
int64_t x483 = INT64_MIN;
int16_t x484 = -1;
volatile int64_t t120 = -115096292LL;
int64_t x486 = INT64_MIN;
uint32_t x495 = 1317752135U;
int32_t x497 = -888623;
static volatile int16_t x502 = -1;
uint64_t x503 = UINT64_MAX;
uint32_t t125 = 388785515U;
int64_t x509 = INT64_MIN;
uint8_t x515 = 2U;
volatile int8_t x522 = 7;
static int16_t x524 = INT16_MAX;
int64_t x526 = INT64_MAX;
static int64_t t131 = 0LL;
static int8_t x533 = -16;
static uint16_t x535 = 6032U;
static int64_t t134 = 234352153722414084LL;
int8_t x541 = -1;
uint32_t x552 = 61U;
int32_t t137 = INT32_MIN;
uint64_t x557 = UINT64_MAX;
static volatile uint64_t t139 = 652418109LLU;
volatile int64_t x562 = INT64_MAX;
uint64_t x564 = UINT64_MAX;
volatile int64_t x576 = INT64_MIN;
static uint16_t x584 = UINT16_MAX;
volatile int32_t t147 = 13589;
int64_t x596 = 43596LL;
volatile int32_t t148 = -265039569;
int64_t x597 = INT64_MIN;
volatile int32_t x599 = INT32_MIN;
uint16_t x607 = 1U;
int16_t x610 = -1;
volatile int64_t x615 = INT64_MAX;
uint32_t x616 = UINT32_MAX;
volatile int32_t t153 = -1;
int16_t x637 = -1;
int32_t x638 = -1;
uint64_t t161 = 70LLU;
int16_t x657 = 2040;
int64_t x659 = 81LL;
static int64_t t165 = 1750525534222156685LL;
uint64_t x668 = 5324263088157972600LLU;
volatile int32_t t166 = 2048718;
uint8_t x676 = 9U;
int64_t x680 = 6210708LL;
volatile int32_t t169 = 19147552;
uint16_t x684 = UINT16_MAX;
volatile int64_t x685 = INT64_MIN;
uint64_t x687 = 11559LLU;
uint64_t x688 = 1246444511662775LLU;
int32_t x691 = 810;
static uint16_t x693 = 6163U;
int32_t x696 = INT32_MIN;
int16_t x700 = INT16_MIN;
static volatile uint64_t t175 = 10208915709723018LLU;
int8_t x707 = INT8_MIN;
uint32_t x712 = 1U;
static volatile uint8_t x713 = 6U;
int32_t x714 = INT32_MIN;
volatile int16_t x715 = 0;
uint8_t x716 = 13U;
uint64_t x718 = 0LLU;
static int32_t t180 = 0;
uint32_t x730 = 1533U;
int16_t x732 = 158;
volatile uint32_t t183 = 48U;
volatile int8_t x743 = INT8_MIN;
int8_t x749 = INT8_MIN;
uint16_t x753 = 3U;
int8_t x754 = 0;
int16_t x762 = INT16_MIN;
int32_t x763 = INT32_MIN;
int64_t x770 = INT64_MIN;
int64_t t192 = -1052515888636946470LL;
volatile int16_t x783 = -4447;
volatile int32_t x792 = -1;
static int8_t x797 = INT8_MIN;
int8_t x798 = INT8_MIN;
int32_t x799 = 526;


void f0(void) {
    	int8_t x1 = -18;
	volatile uint32_t x3 = 863568U;
	volatile uint32_t x4 = 179U;
	static volatile int32_t t0 = 25;

    t0 = (x1^(x2|(x3!=x4)));

    if (t0 != -239) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = 11;
	static int64_t x6 = INT64_MAX;
	int32_t x7 = -1;
	uint16_t x8 = UINT16_MAX;
	volatile int64_t t1 = -6LL;

    t1 = (x5^(x6|(x7!=x8)));

    if (t1 != 9223372036854775796LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MAX;
	uint32_t x10 = UINT32_MAX;
	int32_t x11 = -1;
	volatile uint32_t t2 = 825U;

    t2 = (x9^(x10|(x11!=x12)));

    if (t2 != 4294934528U) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x13 = 908548LL;
	int32_t x15 = 126062;
	uint32_t x16 = 58997U;
	int64_t t3 = -161140804LL;

    t3 = (x13^(x14|(x15!=x16)));

    if (t3 != 2146575099LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	uint16_t x18 = UINT16_MAX;
	static volatile int32_t x19 = INT32_MIN;
	uint64_t x20 = UINT64_MAX;
	static int32_t t4 = -38792307;

    t4 = (x17^(x18|(x19!=x20)));

    if (t4 != -65409) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x21 = 1373U;
	int8_t x22 = -1;
	int32_t t5 = 31583;

    t5 = (x21^(x22|(x23!=x24)));

    if (t5 != -1374) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int64_t x26 = 499389529892LL;
	static uint8_t x27 = 43U;
	int16_t x28 = -1;
	volatile int64_t t6 = -1190626893409582979LL;

    t6 = (x25^(x26|(x27!=x28)));

    if (t6 != 499389523743LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x29 = UINT16_MAX;
	volatile int8_t x30 = INT8_MAX;
	uint32_t x31 = 99383698U;
	int32_t t7 = -68956;

    t7 = (x29^(x30|(x31!=x32)));

    if (t7 != 65408) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x33 = 10;
	static int8_t x35 = INT8_MIN;
	volatile uint64_t x36 = 2632LLU;
	int32_t t8 = -600547;

    t8 = (x33^(x34|(x35!=x36)));

    if (t8 != -23) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x37 = INT16_MIN;
	int8_t x38 = INT8_MIN;
	static int32_t x39 = 88;
	volatile int32_t t9 = -1;

    t9 = (x37^(x38|(x39!=x40)));

    if (t9 != 32641) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x41 = INT16_MIN;
	static uint64_t x42 = 31623LLU;
	volatile uint16_t x44 = UINT16_MAX;
	static uint64_t t10 = 609788028106LLU;

    t10 = (x41^(x42|(x43!=x44)));

    if (t10 != 18446744073709550471LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x47 = 0U;
	uint64_t x48 = 109683878420916LLU;
	static volatile int32_t t11 = -1533976;

    t11 = (x45^(x46|(x47!=x48)));

    if (t11 != 1728) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x49 = 84507381;
	int64_t x50 = INT64_MIN;
	int32_t x52 = 108356026;
	int64_t t12 = -1075876105LL;

    t12 = (x49^(x50|(x51!=x52)));

    if (t12 != -9223372036770268428LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint64_t x53 = 24311744250510040LLU;
	int64_t x55 = INT64_MIN;

    t13 = (x53^(x54|(x55!=x56)));

    if (t13 != 24311745863746855LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x58 = 0U;
	int16_t x59 = -5;
	uint32_t t14 = 130U;

    t14 = (x57^(x58|(x59!=x60)));

    if (t14 != 64U) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x61 = 1LL;
	static volatile int16_t x62 = INT16_MIN;
	uint8_t x63 = 30U;
	volatile int16_t x64 = -565;
	int64_t t15 = -12738808195741541LL;

    t15 = (x61^(x62|(x63!=x64)));

    if (t15 != -32768LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x67 = 81U;
	int8_t x68 = INT8_MAX;

    t16 = (x65^(x66|(x67!=x68)));

    if (t16 != -1002504469413LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x69 = 757;
	uint16_t x70 = UINT16_MAX;
	uint16_t x71 = UINT16_MAX;
	volatile int32_t t17 = -6355285;

    t17 = (x69^(x70|(x71!=x72)));

    if (t17 != 64778) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = INT16_MIN;
	uint32_t x74 = 6978U;
	volatile int64_t x75 = -1LL;
	int8_t x76 = INT8_MAX;
	volatile uint32_t t18 = 23U;

    t18 = (x73^(x74|(x75!=x76)));

    if (t18 != 4294941507U) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = -1LL;
	uint16_t x79 = 7734U;
	volatile int64_t x80 = -1LL;
	volatile int64_t t19 = -1LL;

    t19 = (x77^(x78|(x79!=x80)));

    if (t19 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x81 = 7U;
	int8_t x82 = INT8_MIN;
	static int8_t x83 = -1;
	uint8_t x84 = 8U;
	volatile int32_t t20 = -45270;

    t20 = (x81^(x82|(x83!=x84)));

    if (t20 != -122) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x86 = 2092940;
	volatile uint16_t x87 = 5U;
	volatile int16_t x88 = -165;
	int32_t t21 = -4025;

    t21 = (x85^(x86|(x87!=x88)));

    if (t21 != -2092942) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = UINT64_MAX;
	static uint32_t x92 = 2U;
	uint64_t t22 = 5797694LLU;

    t22 = (x89^(x90|(x91!=x92)));

    if (t22 != 18446744073709551564LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x94 = 239;
	int64_t x95 = INT64_MIN;
	int32_t x96 = INT32_MIN;
	volatile uint64_t t23 = 12070924137843LLU;

    t23 = (x93^(x94|(x95!=x96)));

    if (t23 != 8457840982LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x98 = 0;
	static volatile int32_t t24 = 3;

    t24 = (x97^(x98|(x99!=x100)));

    if (t24 != -2) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x102 = INT64_MAX;
	int16_t x103 = 355;
	static uint8_t x104 = 6U;
	static int64_t t25 = INT64_MAX;

    t25 = (x101^(x102|(x103!=x104)));

    if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x106 = -1;
	volatile uint64_t x107 = 1LLU;
	static int32_t x108 = -1;
	int32_t t26 = 365;

    t26 = (x105^(x106|(x107!=x108)));

    if (t26 != 91) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x109 = 1698386418406LLU;
	volatile uint64_t x110 = 399128966219004116LLU;
	uint8_t x111 = UINT8_MAX;
	static volatile int32_t x112 = -1;

    t27 = (x109^(x110|(x111!=x112)));

    if (t27 != 399127279801033267LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = INT16_MIN;
	volatile int32_t x114 = -1;
	int8_t x115 = INT8_MIN;
	volatile int16_t x116 = 3;
	int32_t t28 = -3405;

    t28 = (x113^(x114|(x115!=x116)));

    if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = -7;
	uint32_t x118 = 120U;
	uint16_t x119 = UINT16_MAX;
	uint64_t x120 = UINT64_MAX;
	static uint32_t t29 = 3U;

    t29 = (x117^(x118|(x119!=x120)));

    if (t29 != 4294967168U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x121 = UINT16_MAX;
	int16_t x122 = INT16_MIN;
	int64_t x123 = -264481LL;
	static uint8_t x124 = 48U;
	volatile int32_t t30 = -7785;

    t30 = (x121^(x122|(x123!=x124)));

    if (t30 != -32770) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = -2;
	int32_t x126 = INT32_MIN;
	int64_t x127 = INT64_MAX;
	int8_t x128 = -1;

    t31 = (x125^(x126|(x127!=x128)));

    if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile uint16_t x129 = 22U;
	volatile int16_t x130 = 439;
	volatile int16_t x131 = INT16_MAX;
	volatile int8_t x132 = INT8_MAX;
	int32_t t32 = 1;

    t32 = (x129^(x130|(x131!=x132)));

    if (t32 != 417) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MAX;
	static uint64_t x134 = 187281295LLU;
	static volatile uint8_t x135 = 0U;
	int8_t x136 = INT8_MIN;
	uint64_t t33 = 3LLU;

    t33 = (x133^(x134|(x135!=x136)));

    if (t33 != 1960202352LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x138 = 19689LL;
	int8_t x139 = -19;
	int16_t x140 = -1;

    t34 = (x137^(x138|(x139!=x140)));

    if (t34 != 18446744073709531926LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MIN;
	uint32_t x142 = 6U;

    t35 = (x141^(x142|(x143!=x144)));

    if (t35 != 4294934535U) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x146 = -1;
	volatile uint16_t x147 = 74U;
	int16_t x148 = -35;
	static volatile int64_t t36 = -114554060905LL;

    t36 = (x145^(x146|(x147!=x148)));

    if (t36 != 40475LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x150 = 9;
	int64_t x151 = 1444325092LL;
	int16_t x152 = -12511;
	volatile uint32_t t37 = 4702U;

    t37 = (x149^(x150|(x151!=x152)));

    if (t37 != 4294967286U) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x153 = 0U;
	int64_t x154 = 23065789LL;
	int64_t t38 = -30222833004633918LL;

    t38 = (x153^(x154|(x155!=x156)));

    if (t38 != 23065789LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MIN;
	int64_t x158 = -132964320806798LL;
	int64_t x159 = -109LL;
	uint32_t x160 = 11471U;
	int64_t t39 = 167LL;

    t39 = (x157^(x158|(x159!=x160)));

    if (t39 != 132964320835699LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x161 = 0;
	int16_t x162 = INT16_MAX;
	static int64_t x163 = 34424061856289LL;
	static int16_t x164 = -1;

    t40 = (x161^(x162|(x163!=x164)));

    if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x166 = 15446007490848LLU;
	volatile int16_t x167 = INT16_MIN;
	int32_t x168 = INT32_MIN;
	uint64_t t41 = 406583006818438LLU;

    t41 = (x165^(x166|(x167!=x168)));

    if (t41 != 18446728627702060716LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x169 = UINT16_MAX;
	int16_t x171 = 12000;
	int32_t t42 = 48696418;

    t42 = (x169^(x170|(x171!=x172)));

    if (t42 != -65536) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = INT64_MIN;
	int32_t x174 = INT32_MIN;
	volatile int64_t x175 = INT64_MIN;
	uint64_t x176 = 560496113448298LLU;
	int64_t t43 = -12043371079539303LL;

    t43 = (x173^(x174|(x175!=x176)));

    if (t43 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x177 = INT16_MIN;
	volatile int64_t x179 = -7905337LL;
	int16_t x180 = INT16_MAX;
	volatile int32_t t44 = -104382;

    t44 = (x177^(x178|(x179!=x180)));

    if (t44 != -2147450881) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MIN;
	uint32_t x183 = 14U;
	static volatile int64_t t45 = 739079246489LL;

    t45 = (x181^(x182|(x183!=x184)));

    if (t45 != -9223372036854775781LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x186 = 124LL;
	static int32_t x187 = INT32_MIN;
	volatile int64_t t46 = -5241176284333294LL;

    t46 = (x185^(x186|(x187!=x188)));

    if (t46 != 130LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x189 = 48657LLU;
	uint8_t x190 = 6U;
	int64_t x191 = 7LL;

    t47 = (x189^(x190|(x191!=x192)));

    if (t47 != 48662LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = 59U;
	uint16_t x195 = 0U;
	int64_t x196 = INT64_MIN;
	volatile int32_t t48 = -29718;

    t48 = (x193^(x194|(x195!=x196)));

    if (t48 != -70) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x197 = INT64_MAX;
	uint8_t x198 = UINT8_MAX;
	int8_t x200 = INT8_MIN;
	volatile int64_t t49 = -34042157119631LL;

    t49 = (x197^(x198|(x199!=x200)));

    if (t49 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = INT16_MIN;
	uint64_t x202 = UINT64_MAX;
	volatile uint8_t x203 = 0U;
	uint32_t x204 = UINT32_MAX;

    t50 = (x201^(x202|(x203!=x204)));

    if (t50 != 32767LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = 17;
	int32_t x206 = INT32_MAX;
	static uint64_t x207 = 415LLU;
	int16_t x208 = -1;

    t51 = (x205^(x206|(x207!=x208)));

    if (t51 != 2147483630) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x209 = 1U;
	uint32_t x210 = 27900996U;
	uint32_t x211 = 6U;
	int8_t x212 = -38;

    t52 = (x209^(x210|(x211!=x212)));

    if (t52 != 27900996U) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MAX;
	uint32_t x214 = 29U;
	volatile int8_t x215 = 30;
	uint64_t x216 = UINT64_MAX;
	uint32_t t53 = 1345094U;

    t53 = (x213^(x214|(x215!=x216)));

    if (t53 != 98U) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x218 = -9LL;
	int8_t x219 = -1;
	int32_t x220 = INT32_MIN;
	uint64_t t54 = 160LLU;

    t54 = (x217^(x218|(x219!=x220)));

    if (t54 != 18446743242544532563LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x223 = 1;
	volatile int32_t x224 = INT32_MIN;

    t55 = (x221^(x222|(x223!=x224)));

    if (t55 != 47) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = INT8_MIN;
	static uint32_t x226 = UINT32_MAX;
	uint64_t x227 = 2960090365604LLU;
	static int8_t x228 = -1;
	static uint32_t t56 = 447234U;

    t56 = (x225^(x226|(x227!=x228)));

    if (t56 != 127U) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x229 = INT16_MAX;
	uint64_t x230 = 7564586052LLU;
	uint8_t x231 = UINT8_MAX;
	volatile int32_t x232 = 61783040;

    t57 = (x229^(x230|(x231!=x232)));

    if (t57 != 7564563386LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = -47;
	int16_t x234 = INT16_MIN;
	volatile int64_t x236 = -1LL;
	volatile int32_t t58 = -1;

    t58 = (x233^(x234|(x235!=x236)));

    if (t58 != 32720) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x237 = -1;
	volatile int32_t x238 = INT32_MIN;
	uint8_t x239 = 85U;
	uint32_t x240 = 204064074U;
	volatile int32_t t59 = 831431068;

    t59 = (x237^(x238|(x239!=x240)));

    if (t59 != 2147483646) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = -7;
	volatile uint64_t x244 = 238LLU;
	uint64_t t60 = 27344262LLU;

    t60 = (x241^(x242|(x243!=x244)));

    if (t60 != 6LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint16_t x245 = 49U;
	static int16_t x246 = INT16_MIN;
	volatile int16_t x247 = INT16_MIN;
	int32_t x248 = INT32_MIN;
	static int32_t t61 = 4150874;

    t61 = (x245^(x246|(x247!=x248)));

    if (t61 != -32720) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = INT8_MIN;
	volatile int16_t x250 = INT16_MIN;
	uint16_t x251 = 14U;
	uint32_t x252 = 16272U;
	volatile int32_t t62 = -257377672;

    t62 = (x249^(x250|(x251!=x252)));

    if (t62 != 32641) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = INT8_MIN;
	volatile int8_t x254 = INT8_MIN;
	int32_t x255 = INT32_MAX;

    t63 = (x253^(x254|(x255!=x256)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x258 = 1;
	static volatile int64_t x259 = -8LL;
	int16_t x260 = -1;
	volatile uint32_t t64 = 17319928U;

    t64 = (x257^(x258|(x259!=x260)));

    if (t64 != 404745U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x262 = UINT32_MAX;
	int64_t x263 = INT64_MIN;
	uint32_t t65 = 99U;

    t65 = (x261^(x262|(x263!=x264)));

    if (t65 != 4294901760U) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = 0;
	static volatile int8_t x266 = -1;
	volatile uint8_t x267 = 42U;
	volatile int32_t t66 = 179;

    t66 = (x265^(x266|(x267!=x268)));

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MIN;
	uint16_t x270 = 455U;
	volatile uint16_t x271 = 19U;
	int16_t x272 = INT16_MIN;
	volatile int32_t t67 = -4517;

    t67 = (x269^(x270|(x271!=x272)));

    if (t67 != -441) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int32_t x273 = INT32_MIN;
	int32_t x274 = INT32_MAX;
	int16_t x275 = INT16_MIN;
	int32_t x276 = -1;

    t68 = (x273^(x274|(x275!=x276)));

    if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x277 = -1;
	static volatile int16_t x278 = -13229;
	volatile int64_t x279 = 1951624281LL;
	int64_t x280 = INT64_MIN;
	int32_t t69 = 260351116;

    t69 = (x277^(x278|(x279!=x280)));

    if (t69 != 13228) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x281 = 42U;
	uint8_t x282 = 0U;
	uint32_t x284 = 100347408U;
	int32_t t70 = -121306334;

    t70 = (x281^(x282|(x283!=x284)));

    if (t70 != 43) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x286 = 118417;
	uint32_t t71 = 442U;

    t71 = (x285^(x286|(x287!=x288)));

    if (t71 != 15852105U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x289 = 468U;
	int16_t x290 = INT16_MIN;
	volatile uint8_t x292 = 23U;
	static int32_t t72 = -69;

    t72 = (x289^(x290|(x291!=x292)));

    if (t72 != -32299) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x294 = INT8_MAX;
	uint32_t x295 = UINT32_MAX;
	uint64_t x296 = 1636LLU;

    t73 = (x293^(x294|(x295!=x296)));

    if (t73 != 126) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x297 = INT8_MIN;
	volatile uint64_t x298 = UINT64_MAX;
	int32_t x299 = INT32_MAX;
	uint64_t t74 = 130765LLU;

    t74 = (x297^(x298|(x299!=x300)));

    if (t74 != 127LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = INT32_MAX;
	static int8_t x302 = -1;
	int16_t x303 = 4158;
	int64_t x304 = -28LL;
	int32_t t75 = INT32_MIN;

    t75 = (x301^(x302|(x303!=x304)));

    if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x305 = 1721538315917033777LLU;
	uint64_t x306 = 1182LLU;
	int8_t x307 = INT8_MIN;
	uint32_t x308 = 114490U;
	volatile uint64_t t76 = 207694431478LLU;

    t76 = (x305^(x306|(x307!=x308)));

    if (t76 != 1721538315917034926LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = 1;
	uint16_t x310 = 753U;
	volatile int64_t x311 = INT64_MIN;
	int64_t x312 = INT64_MIN;
	volatile int32_t t77 = 89;

    t77 = (x309^(x310|(x311!=x312)));

    if (t77 != 752) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = -1;
	volatile int16_t x315 = -1;
	int16_t x316 = -1;
	volatile int32_t t78 = 0;

    t78 = (x313^(x314|(x315!=x316)));

    if (t78 != -37766060) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x318 = -661054451914189612LL;
	int64_t t79 = -119106302958257LL;

    t79 = (x317^(x318|(x319!=x320)));

    if (t79 != 661054451914189610LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = 3;
	volatile int8_t x322 = 0;
	uint32_t x323 = 1861481U;
	static int64_t x324 = -202329072084911LL;

    t80 = (x321^(x322|(x323!=x324)));

    if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x327 = INT64_MAX;
	static int64_t t81 = -13273835598841266LL;

    t81 = (x325^(x326|(x327!=x328)));

    if (t81 != 164958885LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = INT16_MAX;
	volatile uint32_t x330 = 472793U;
	int32_t x331 = -141537108;

    t82 = (x329^(x330|(x331!=x332)));

    if (t82 != 477478U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x333 = 11U;
	uint32_t x334 = UINT32_MAX;
	static uint8_t x335 = UINT8_MAX;
	int32_t x336 = 639893812;
	volatile uint32_t t83 = 20U;

    t83 = (x333^(x334|(x335!=x336)));

    if (t83 != 4294967284U) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint16_t x337 = UINT16_MAX;
	static int64_t x338 = INT64_MIN;
	uint64_t x339 = 696989457497LLU;
	int16_t x340 = -1;
	int64_t t84 = 5651617614792LL;

    t84 = (x337^(x338|(x339!=x340)));

    if (t84 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x342 = INT16_MIN;
	static volatile uint8_t x343 = 79U;
	int64_t x344 = INT64_MIN;
	volatile int32_t t85 = -158375392;

    t85 = (x341^(x342|(x343!=x344)));

    if (t85 != -32767) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x345 = INT32_MAX;
	volatile int64_t x346 = INT64_MIN;
	int64_t x347 = INT64_MIN;
	volatile int64_t t86 = -4LL;

    t86 = (x345^(x346|(x347!=x348)));

    if (t86 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = -1;
	static int64_t x350 = -1LL;
	int16_t x351 = -1929;
	int64_t t87 = 1726875549153LL;

    t87 = (x349^(x350|(x351!=x352)));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x353 = 376281LLU;
	int16_t x354 = INT16_MIN;
	int32_t x356 = INT32_MIN;
	uint64_t t88 = 52925747337777LLU;

    t88 = (x353^(x354|(x355!=x356)));

    if (t88 != 18446744073709174232LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x357 = UINT8_MAX;
	int16_t x359 = INT16_MIN;
	volatile int64_t x360 = INT64_MIN;
	int32_t t89 = -125;

    t89 = (x357^(x358|(x359!=x360)));

    if (t89 != 942) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x361 = INT8_MIN;
	static uint16_t x362 = UINT16_MAX;
	volatile int32_t t90 = -258914938;

    t90 = (x361^(x362|(x363!=x364)));

    if (t90 != -65409) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = INT64_MIN;
	uint64_t x366 = 545531703982885355LLU;

    t91 = (x365^(x366|(x367!=x368)));

    if (t91 != 9768903740837661163LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x369 = 11;
	volatile int64_t t92 = -1547376840731120737LL;

    t92 = (x369^(x370|(x371!=x372)));

    if (t92 != -12LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x374 = UINT64_MAX;
	uint8_t x375 = 18U;
	static uint32_t x376 = UINT32_MAX;
	volatile uint64_t t93 = 148011LLU;

    t93 = (x373^(x374|(x375!=x376)));

    if (t93 != 274LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x379 = INT32_MAX;
	static int32_t t94 = 877728;

    t94 = (x377^(x378|(x379!=x380)));

    if (t94 != -2147450882) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x383 = 477547222LLU;
	int16_t x384 = 3;
	volatile int64_t t95 = 1LL;

    t95 = (x381^(x382|(x383!=x384)));

    if (t95 != -112LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = 4955;
	int64_t x386 = -1LL;
	static int32_t x387 = INT32_MIN;
	int16_t x388 = INT16_MIN;
	volatile int64_t t96 = -10511528640837265LL;

    t96 = (x385^(x386|(x387!=x388)));

    if (t96 != -4956LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = -1;
	uint8_t x390 = 3U;
	uint8_t x391 = UINT8_MAX;
	static uint8_t x392 = UINT8_MAX;
	int32_t t97 = -269;

    t97 = (x389^(x390|(x391!=x392)));

    if (t97 != -4) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x394 = INT64_MIN;
	volatile uint8_t x395 = 1U;
	int64_t x396 = INT64_MIN;

    t98 = (x393^(x394|(x395!=x396)));

    if (t98 != -9223372036853981951LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x397 = UINT32_MAX;
	uint8_t x398 = 48U;
	int8_t x399 = 1;
	volatile int8_t x400 = 3;
	static volatile uint32_t t99 = 5U;

    t99 = (x397^(x398|(x399!=x400)));

    if (t99 != 4294967246U) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = INT32_MIN;
	int64_t x402 = INT64_MIN;
	static volatile int8_t x403 = 50;
	int8_t x404 = INT8_MIN;
	static int64_t t100 = -4859144560529LL;

    t100 = (x401^(x402|(x403!=x404)));

    if (t100 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x405 = -7;
	static int16_t x406 = INT16_MIN;
	volatile int64_t x407 = INT64_MIN;
	uint16_t x408 = UINT16_MAX;
	volatile int32_t t101 = 1;

    t101 = (x405^(x406|(x407!=x408)));

    if (t101 != 32760) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x409 = INT8_MAX;
	uint16_t x410 = UINT16_MAX;
	volatile int64_t x411 = INT64_MAX;
	int64_t x412 = INT64_MIN;
	volatile int32_t t102 = 40063434;

    t102 = (x409^(x410|(x411!=x412)));

    if (t102 != 65408) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x414 = UINT32_MAX;
	uint32_t x416 = UINT32_MAX;

    t103 = (x413^(x414|(x415!=x416)));

    if (t103 != 4294967248U) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x417 = -1;
	static int32_t x418 = INT32_MIN;
	uint64_t x419 = 5819899193093LLU;

    t104 = (x417^(x418|(x419!=x420)));

    if (t104 != 2147483646) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint64_t x421 = 930583124950103LLU;
	uint16_t x422 = 0U;
	int64_t x423 = 18LL;
	int16_t x424 = -1;
	static uint64_t t105 = 162828703349LLU;

    t105 = (x421^(x422|(x423!=x424)));

    if (t105 != 930583124950102LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x425 = 1417LLU;
	int64_t x427 = -1458031820785LL;
	int64_t x428 = INT64_MIN;

    t106 = (x425^(x426|(x427!=x428)));

    if (t106 != 1416LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = INT16_MIN;
	static int8_t x430 = INT8_MAX;
	int8_t x432 = INT8_MIN;

    t107 = (x429^(x430|(x431!=x432)));

    if (t107 != -32641) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x433 = 3;
	int32_t x435 = 416987;
	int64_t x436 = INT64_MAX;
	uint64_t t108 = 107LLU;

    t108 = (x433^(x434|(x435!=x436)));

    if (t108 != 12902425011768LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x437 = UINT32_MAX;
	int8_t x438 = -1;
	uint8_t x439 = 3U;
	int32_t x440 = -115158036;
	volatile uint32_t t109 = 15U;

    t109 = (x437^(x438|(x439!=x440)));

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x441 = 1082961704376845LLU;
	uint64_t x442 = UINT64_MAX;
	volatile uint32_t x443 = 27U;
	volatile int16_t x444 = 806;
	volatile uint64_t t110 = 56139304251838LLU;

    t110 = (x441^(x442|(x443!=x444)));

    if (t110 != 18445661112005174770LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x445 = 61642240504052LLU;
	uint32_t x446 = 92793U;
	uint16_t x447 = 166U;
	volatile int16_t x448 = -1;
	volatile uint64_t t111 = 6735349452966047882LLU;

    t111 = (x445^(x446|(x447!=x448)));

    if (t111 != 61642240449165LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x449 = INT8_MIN;
	int64_t x450 = -1LL;
	int64_t x451 = 480238678LL;
	volatile int64_t t112 = -391526071778LL;

    t112 = (x449^(x450|(x451!=x452)));

    if (t112 != 127LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x454 = -1LL;
	int64_t x455 = -2088476LL;
	volatile uint64_t t113 = 279983LLU;

    t113 = (x453^(x454|(x455!=x456)));

    if (t113 != 18435868903384577765LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = -1;
	int64_t x458 = 185943637LL;
	int8_t x459 = -1;
	static int8_t x460 = 0;
	volatile int64_t t114 = 1674644LL;

    t114 = (x457^(x458|(x459!=x460)));

    if (t114 != -185943638LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = INT8_MIN;
	int32_t x462 = INT32_MIN;
	uint16_t x463 = 492U;
	volatile int32_t t115 = -287230;

    t115 = (x461^(x462|(x463!=x464)));

    if (t115 != 2147483521) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x465 = UINT32_MAX;
	static uint32_t x466 = 13520U;
	uint32_t t116 = 1530076217U;

    t116 = (x465^(x466|(x467!=x468)));

    if (t116 != 4294953774U) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x469 = -1LL;
	int32_t x470 = INT32_MIN;
	static int8_t x472 = INT8_MAX;
	static int64_t t117 = -6026921LL;

    t117 = (x469^(x470|(x471!=x472)));

    if (t117 != 2147483646LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = -1;
	static int32_t x475 = -1;
	uint64_t x476 = 285930460779121008LLU;
	int32_t t118 = 650;

    t118 = (x473^(x474|(x475!=x476)));

    if (t118 != -16) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = INT64_MAX;
	int8_t x479 = -2;
	int16_t x480 = -1;
	static volatile int64_t t119 = -195086723LL;

    t119 = (x477^(x478|(x479!=x480)));

    if (t119 != 9223372036854726638LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x481 = INT32_MIN;
	volatile int64_t x482 = -139447490LL;

    t120 = (x481^(x482|(x483!=x484)));

    if (t120 != 2008036159LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x485 = -1;
	int64_t x487 = INT64_MIN;
	int8_t x488 = -1;
	static int64_t t121 = -61091LL;

    t121 = (x485^(x486|(x487!=x488)));

    if (t121 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x489 = 0U;
	volatile uint64_t x490 = UINT64_MAX;
	static uint8_t x491 = 0U;
	int64_t x492 = 12146465263373133LL;
	static uint64_t t122 = UINT64_MAX;

    t122 = (x489^(x490|(x491!=x492)));

    if (t122 != UINT64_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x493 = 52424952411611LLU;
	int16_t x494 = -7071;
	int8_t x496 = -1;
	uint64_t t123 = 441824929582099855LLU;

    t123 = (x493^(x494|(x495!=x496)));

    if (t123 != 18446691648757141946LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x498 = -1;
	int32_t x499 = 1;
	int32_t x500 = -1;
	volatile int32_t t124 = 520;

    t124 = (x497^(x498|(x499!=x500)));

    if (t124 != 888622) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x501 = 20360U;
	static volatile int8_t x504 = INT8_MIN;

    t125 = (x501^(x502|(x503!=x504)));

    if (t125 != 4294946935U) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x505 = -2;
	int32_t x506 = INT32_MAX;
	uint16_t x507 = 0U;
	int16_t x508 = -14492;
	static int32_t t126 = 374;

    t126 = (x505^(x506|(x507!=x508)));

    if (t126 != -2147483647) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x510 = INT32_MIN;
	int16_t x511 = INT16_MAX;
	uint8_t x512 = 1U;
	int64_t t127 = -248031557035134LL;

    t127 = (x509^(x510|(x511!=x512)));

    if (t127 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = 98LL;
	int8_t x514 = INT8_MIN;
	int8_t x516 = INT8_MIN;
	volatile int64_t t128 = 36587466058957108LL;

    t128 = (x513^(x514|(x515!=x516)));

    if (t128 != -29LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x517 = 115192LLU;
	static int32_t x518 = -767428;
	volatile int16_t x519 = -1;
	static int32_t x520 = -1;
	volatile uint64_t t129 = 5168102195239760150LLU;

    t129 = (x517^(x518|(x519!=x520)));

    if (t129 != 18446744073708866500LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x521 = -1;
	volatile int64_t x523 = -531366705LL;
	volatile int32_t t130 = 3290904;

    t130 = (x521^(x522|(x523!=x524)));

    if (t130 != -8) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x525 = 271987U;
	int64_t x527 = 3495LL;
	int64_t x528 = INT64_MIN;

    t131 = (x525^(x526|(x527!=x528)));

    if (t131 != 9223372036854503820LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x529 = UINT32_MAX;
	int64_t x530 = INT64_MAX;
	int8_t x531 = INT8_MAX;
	int16_t x532 = -1;
	volatile int64_t t132 = 575153196LL;

    t132 = (x529^(x530|(x531!=x532)));

    if (t132 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x534 = 104U;
	volatile int8_t x536 = 10;
	static int32_t t133 = 9803077;

    t133 = (x533^(x534|(x535!=x536)));

    if (t133 != -103) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = INT64_MAX;
	int16_t x538 = INT16_MAX;
	uint8_t x539 = 109U;
	int64_t x540 = 1LL;

    t134 = (x537^(x538|(x539!=x540)));

    if (t134 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x542 = UINT32_MAX;
	int32_t x543 = 41202160;
	int16_t x544 = INT16_MIN;
	volatile uint32_t t135 = 207620585U;

    t135 = (x541^(x542|(x543!=x544)));

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x545 = INT64_MIN;
	uint64_t x546 = UINT64_MAX;
	static int16_t x547 = -1;
	volatile uint16_t x548 = 13U;
	volatile uint64_t t136 = 20966920LLU;

    t136 = (x545^(x546|(x547!=x548)));

    if (t136 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x549 = -1;
	static int32_t x550 = INT32_MAX;
	int64_t x551 = INT64_MIN;

    t137 = (x549^(x550|(x551!=x552)));

    if (t137 != INT32_MIN) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = INT32_MIN;
	int64_t x554 = INT64_MAX;
	static volatile uint16_t x555 = 136U;
	volatile int32_t x556 = INT32_MIN;
	int64_t t138 = 12306558425020104LL;

    t138 = (x553^(x554|(x555!=x556)));

    if (t138 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x558 = 1166;
	int16_t x559 = 0;
	static int16_t x560 = -125;

    t139 = (x557^(x558|(x559!=x560)));

    if (t139 != 18446744073709550448LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x561 = 26LLU;
	int32_t x563 = -1;
	uint64_t t140 = 739187091027660LLU;

    t140 = (x561^(x562|(x563!=x564)));

    if (t140 != 9223372036854775781LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x565 = 3398U;
	uint16_t x566 = 27248U;
	static int64_t x567 = INT64_MIN;
	uint64_t x568 = UINT64_MAX;
	int32_t t141 = -14;

    t141 = (x565^(x566|(x567!=x568)));

    if (t141 != 26423) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = -1;
	uint8_t x570 = 0U;
	static int8_t x571 = -1;
	volatile uint32_t x572 = UINT32_MAX;
	int32_t t142 = 1108051;

    t142 = (x569^(x570|(x571!=x572)));

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = 6;
	int64_t x574 = -1LL;
	uint32_t x575 = UINT32_MAX;
	volatile int64_t t143 = 270364629LL;

    t143 = (x573^(x574|(x575!=x576)));

    if (t143 != -7LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = INT8_MIN;
	int64_t x578 = -55922LL;
	uint32_t x579 = UINT32_MAX;
	int8_t x580 = INT8_MAX;
	volatile int64_t t144 = 222635LL;

    t144 = (x577^(x578|(x579!=x580)));

    if (t144 != 55823LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x581 = UINT32_MAX;
	static int8_t x582 = -1;
	int16_t x583 = INT16_MAX;
	volatile uint32_t t145 = 31U;

    t145 = (x581^(x582|(x583!=x584)));

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = -5;
	uint32_t x586 = 762178U;
	int8_t x587 = -14;
	static uint32_t x588 = 87013U;
	uint32_t t146 = 5030U;

    t146 = (x585^(x586|(x587!=x588)));

    if (t146 != 4294205112U) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = INT8_MIN;
	static int32_t x590 = INT32_MAX;
	static int64_t x591 = INT64_MIN;
	int64_t x592 = INT64_MAX;

    t147 = (x589^(x590|(x591!=x592)));

    if (t147 != -2147483521) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = 2;
	int32_t x594 = INT32_MAX;
	uint16_t x595 = 4U;

    t148 = (x593^(x594|(x595!=x596)));

    if (t148 != 2147483645) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x598 = 4381896321464LLU;
	int8_t x600 = INT8_MAX;
	volatile uint64_t t149 = 62932300208253119LLU;

    t149 = (x597^(x598|(x599!=x600)));

    if (t149 != 9223376418751097273LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x601 = INT32_MAX;
	int32_t x602 = -1;
	uint64_t x603 = 61109LLU;
	uint16_t x604 = 14825U;
	int32_t t150 = INT32_MIN;

    t150 = (x601^(x602|(x603!=x604)));

    if (t150 != INT32_MIN) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = -1;
	int64_t x606 = INT64_MIN;
	uint16_t x608 = UINT16_MAX;
	int64_t t151 = 3489LL;

    t151 = (x605^(x606|(x607!=x608)));

    if (t151 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint64_t x609 = UINT64_MAX;
	int16_t x611 = INT16_MIN;
	volatile int16_t x612 = INT16_MIN;
	volatile uint64_t t152 = 3234738842974624473LLU;

    t152 = (x609^(x610|(x611!=x612)));

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x613 = -3491;
	volatile uint8_t x614 = 1U;

    t153 = (x613^(x614|(x615!=x616)));

    if (t153 != -3492) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = INT8_MIN;
	int64_t x618 = -24735905137LL;
	volatile int64_t x619 = INT64_MIN;
	volatile uint16_t x620 = 8U;
	volatile int64_t t154 = -643458465LL;

    t154 = (x617^(x618|(x619!=x620)));

    if (t154 != 24735905039LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = -1;
	int32_t x622 = INT32_MIN;
	static int32_t x623 = 97627247;
	int16_t x624 = INT16_MIN;
	volatile int32_t t155 = 55508335;

    t155 = (x621^(x622|(x623!=x624)));

    if (t155 != 2147483646) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x625 = 7038U;
	int64_t x626 = INT64_MIN;
	uint32_t x627 = 400736994U;
	uint64_t x628 = 1970937858LLU;
	int64_t t156 = -2364LL;

    t156 = (x625^(x626|(x627!=x628)));

    if (t156 != -9223372036854768769LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = 0;
	int16_t x630 = -2122;
	int8_t x631 = 1;
	uint64_t x632 = 5LLU;
	static int32_t t157 = -12677226;

    t157 = (x629^(x630|(x631!=x632)));

    if (t157 != -2121) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = -3;
	int16_t x634 = INT16_MAX;
	uint16_t x635 = 780U;
	uint16_t x636 = 7851U;
	static int32_t t158 = -8519;

    t158 = (x633^(x634|(x635!=x636)));

    if (t158 != -32766) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x639 = 13317281715838741LLU;
	int8_t x640 = INT8_MAX;
	volatile int32_t t159 = -219654300;

    t159 = (x637^(x638|(x639!=x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = -1;
	int64_t x642 = INT64_MIN;
	static int8_t x643 = -45;
	int8_t x644 = -1;
	int64_t t160 = 804958LL;

    t160 = (x641^(x642|(x643!=x644)));

    if (t160 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = INT8_MIN;
	uint64_t x646 = 248187253712789328LLU;
	uint8_t x647 = 82U;
	static int32_t x648 = INT32_MIN;

    t161 = (x645^(x646|(x647!=x648)));

    if (t161 != 18198556819996762321LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = 379LL;
	int64_t x650 = -9267822LL;
	static int64_t x651 = INT64_MIN;
	volatile int64_t x652 = INT64_MIN;
	int64_t t162 = 1059363254518LL;

    t162 = (x649^(x650|(x651!=x652)));

    if (t162 != -9267991LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x653 = INT32_MIN;
	int8_t x654 = -1;
	int64_t x655 = INT64_MIN;
	static int64_t x656 = INT64_MAX;
	volatile int32_t t163 = INT32_MAX;

    t163 = (x653^(x654|(x655!=x656)));

    if (t163 != INT32_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x658 = 5685041LLU;
	int8_t x660 = INT8_MIN;
	volatile uint64_t t164 = 716560658241LLU;

    t164 = (x657^(x658|(x659!=x660)));

    if (t164 != 5683401LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = -12536514109036757LL;
	int64_t x662 = -50519334229LL;
	static int32_t x663 = 1;
	static volatile int16_t x664 = -3;

    t165 = (x661^(x662|(x663!=x664)));

    if (t165 != 12536560261989760LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x665 = UINT8_MAX;
	int16_t x666 = -1;
	int8_t x667 = INT8_MIN;

    t166 = (x665^(x666|(x667!=x668)));

    if (t166 != -256) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = INT64_MIN;
	int16_t x670 = INT16_MIN;
	uint64_t x671 = 262248207706891579LLU;
	int16_t x672 = INT16_MIN;
	volatile int64_t t167 = 2102878147091923LL;

    t167 = (x669^(x670|(x671!=x672)));

    if (t167 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint16_t x673 = UINT16_MAX;
	volatile int64_t x674 = INT64_MIN;
	static int64_t x675 = INT64_MIN;
	int64_t t168 = -186621952774186158LL;

    t168 = (x673^(x674|(x675!=x676)));

    if (t168 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = -896503711;
	int8_t x678 = -12;
	static int32_t x679 = INT32_MIN;

    t169 = (x677^(x678|(x679!=x680)));

    if (t169 != 896503700) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = INT16_MIN;
	int16_t x682 = 15709;
	uint16_t x683 = 288U;
	volatile int32_t t170 = -32110;

    t170 = (x681^(x682|(x683!=x684)));

    if (t170 != -17059) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x686 = 7984;
	static volatile int64_t t171 = -109660LL;

    t171 = (x685^(x686|(x687!=x688)));

    if (t171 != -9223372036854767823LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = INT16_MAX;
	int16_t x690 = -1;
	volatile uint32_t x692 = 6115U;
	volatile int32_t t172 = 267070;

    t172 = (x689^(x690|(x691!=x692)));

    if (t172 != -32768) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x694 = UINT8_MAX;
	uint64_t x695 = UINT64_MAX;
	int32_t t173 = -741553;

    t173 = (x693^(x694|(x695!=x696)));

    if (t173 != 6380) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = INT16_MIN;
	volatile uint64_t x698 = 280784693342524574LLU;
	static uint32_t x699 = 1U;
	volatile uint64_t t174 = 489760LLU;

    t174 = (x697^(x698|(x699!=x700)));

    if (t174 != 18165959380367037599LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x701 = INT64_MIN;
	volatile uint64_t x702 = 242741672473203607LLU;
	int64_t x703 = -27843983184LL;
	int64_t x704 = -250681981943LL;

    t175 = (x701^(x702|(x703!=x704)));

    if (t175 != 9466113709327979415LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x705 = 3198947603LLU;
	int16_t x706 = INT16_MAX;
	uint64_t x708 = 544607854632944LLU;
	uint64_t t176 = 90517291371435LLU;

    t176 = (x705^(x706|(x707!=x708)));

    if (t176 != 3198971628LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x709 = INT16_MAX;
	volatile int64_t x710 = INT64_MIN;
	int64_t x711 = -23322LL;
	static volatile int64_t t177 = 164684LL;

    t177 = (x709^(x710|(x711!=x712)));

    if (t177 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t t178 = 137778931;

    t178 = (x713^(x714|(x715!=x716)));

    if (t178 != -2147483641) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = -31;
	uint16_t x719 = 0U;
	int8_t x720 = INT8_MAX;
	static uint64_t t179 = 1831259799989040145LLU;

    t179 = (x717^(x718|(x719!=x720)));

    if (t179 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = INT8_MIN;
	int32_t x722 = INT32_MAX;
	int32_t x723 = INT32_MIN;
	int8_t x724 = INT8_MIN;

    t180 = (x721^(x722|(x723!=x724)));

    if (t180 != -2147483521) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x725 = UINT8_MAX;
	volatile int32_t x726 = INT32_MAX;
	volatile int8_t x727 = INT8_MIN;
	int64_t x728 = INT64_MAX;
	static int32_t t181 = -61536542;

    t181 = (x725^(x726|(x727!=x728)));

    if (t181 != 2147483392) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x729 = UINT64_MAX;
	int8_t x731 = -49;
	uint64_t t182 = 254764592631254LLU;

    t182 = (x729^(x730|(x731!=x732)));

    if (t182 != 18446744073709550082LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x733 = INT32_MIN;
	uint32_t x734 = 708U;
	uint8_t x735 = 56U;
	int32_t x736 = INT32_MIN;

    t183 = (x733^(x734|(x735!=x736)));

    if (t183 != 2147484357U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x737 = UINT8_MAX;
	int64_t x738 = INT64_MIN;
	volatile uint64_t x739 = 131806837354705926LLU;
	static uint32_t x740 = 2U;
	int64_t t184 = 10266552LL;

    t184 = (x737^(x738|(x739!=x740)));

    if (t184 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x741 = INT64_MIN;
	uint32_t x742 = 47U;
	volatile int64_t x744 = INT64_MIN;
	static int64_t t185 = -40582LL;

    t185 = (x741^(x742|(x743!=x744)));

    if (t185 != -9223372036854775761LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = -1;
	volatile uint16_t x746 = 10U;
	int8_t x747 = -1;
	volatile int8_t x748 = -1;
	int32_t t186 = -7687566;

    t186 = (x745^(x746|(x747!=x748)));

    if (t186 != -11) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x750 = -1;
	uint16_t x751 = 2U;
	int32_t x752 = INT32_MIN;
	int32_t t187 = -99544788;

    t187 = (x749^(x750|(x751!=x752)));

    if (t187 != 127) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x755 = -5;
	uint64_t x756 = 318312LLU;
	volatile int32_t t188 = 8666;

    t188 = (x753^(x754|(x755!=x756)));

    if (t188 != 2) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int64_t x757 = 519101LL;
	static volatile int16_t x758 = INT16_MIN;
	volatile uint32_t x759 = 20086293U;
	int64_t x760 = 3LL;
	volatile int64_t t189 = -1711707LL;

    t189 = (x757^(x758|(x759!=x760)));

    if (t189 != -496708LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x761 = UINT32_MAX;
	int16_t x764 = -1;
	uint32_t t190 = 50219U;

    t190 = (x761^(x762|(x763!=x764)));

    if (t190 != 32766U) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x765 = 5619822708LL;
	uint32_t x766 = 0U;
	uint16_t x767 = UINT16_MAX;
	int32_t x768 = 211098;
	int64_t t191 = -396403171LL;

    t191 = (x765^(x766|(x767!=x768)));

    if (t191 != 5619822709LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = INT64_MIN;
	static uint8_t x771 = UINT8_MAX;
	uint64_t x772 = 239508176192526LLU;

    t192 = (x769^(x770|(x771!=x772)));

    if (t192 != 1LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x773 = 13001737U;
	int16_t x774 = -7888;
	static volatile int8_t x775 = INT8_MIN;
	volatile int64_t x776 = INT64_MIN;
	uint32_t t193 = 7218801U;

    t193 = (x773^(x774|(x775!=x776)));

    if (t193 != 4281959736U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x777 = UINT32_MAX;
	int64_t x778 = INT64_MIN;
	static int64_t x779 = INT64_MIN;
	volatile int16_t x780 = -1;
	int64_t t194 = 3157250363985099137LL;

    t194 = (x777^(x778|(x779!=x780)));

    if (t194 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x781 = UINT64_MAX;
	static int16_t x782 = -1;
	volatile int64_t x784 = INT64_MAX;
	static volatile uint64_t t195 = 117579891075834LLU;

    t195 = (x781^(x782|(x783!=x784)));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = INT32_MIN;
	volatile uint64_t x786 = UINT64_MAX;
	int64_t x787 = -4LL;
	volatile int64_t x788 = -1LL;
	volatile uint64_t t196 = 30391LLU;

    t196 = (x785^(x786|(x787!=x788)));

    if (t196 != 2147483647LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile uint32_t x789 = 177469084U;
	int32_t x790 = INT32_MIN;
	int32_t x791 = INT32_MAX;
	static volatile uint32_t t197 = 36565238U;

    t197 = (x789^(x790|(x791!=x792)));

    if (t197 != 2324952733U) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = -50;
	int8_t x794 = 4;
	uint16_t x795 = 31U;
	int8_t x796 = INT8_MIN;
	volatile int32_t t198 = -859;

    t198 = (x793^(x794|(x795!=x796)));

    if (t198 != -53) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x800 = -1;
	volatile int32_t t199 = -5;

    t199 = (x797^(x798|(x799!=x800)));

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

