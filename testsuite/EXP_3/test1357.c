
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

static int64_t x1 = INT64_MIN;
int64_t x11 = -1LL;
int32_t x12 = -1;
static int16_t x13 = INT16_MAX;
int64_t x21 = INT64_MIN;
int64_t t5 = 1865652836791LL;
uint32_t x29 = 191157176U;
int8_t x35 = -9;
uint8_t x43 = UINT8_MAX;
int16_t x51 = 227;
int8_t x60 = INT8_MAX;
volatile uint32_t t14 = 228532U;
static int16_t x63 = -1;
volatile int64_t t15 = 63906304952LL;
uint32_t x69 = UINT32_MAX;
int8_t x74 = INT8_MIN;
static uint32_t t18 = UINT32_MAX;
uint32_t x81 = UINT32_MAX;
volatile int8_t x88 = INT8_MIN;
static uint16_t x89 = UINT16_MAX;
volatile uint64_t t22 = 8397010375542795407LLU;
static volatile uint16_t x95 = 240U;
static int32_t t23 = 2456901;
static volatile int32_t t25 = 61;
int32_t x107 = -3260;
int8_t x115 = 2;
volatile int8_t x116 = INT8_MIN;
static int32_t t28 = 13;
int64_t x132 = INT64_MIN;
volatile int32_t t32 = 2;
int32_t x134 = -1;
static int64_t x135 = -1LL;
static uint64_t x136 = 24237024072LLU;
int64_t x137 = -3668596803116LL;
volatile uint64_t x141 = 10235357277801805LLU;
int8_t x142 = INT8_MIN;
static uint8_t x166 = 9U;
uint32_t x169 = 555787296U;
static uint64_t x177 = 18LLU;
int32_t x179 = INT32_MIN;
int8_t x182 = INT8_MIN;
volatile uint32_t x183 = 38U;
uint8_t x186 = 7U;
int64_t x196 = INT64_MIN;
int8_t x205 = 19;
static int8_t x207 = -1;
volatile uint8_t x216 = 0U;
int8_t x217 = -1;
static int8_t x221 = INT8_MIN;
int8_t x222 = -1;
int32_t t55 = -60939410;
static volatile int64_t x236 = INT64_MIN;
volatile uint64_t x237 = 8028881580351LLU;
uint16_t x247 = UINT16_MAX;
volatile uint64_t x248 = 0LLU;
int32_t x251 = INT32_MIN;
int64_t t62 = INT64_MAX;
int64_t x272 = -1LL;
static int8_t x276 = INT8_MIN;
int32_t x278 = INT32_MIN;
int16_t x280 = INT16_MIN;
volatile int8_t x285 = -1;
int16_t x290 = -1;
int32_t x297 = INT32_MIN;
static int32_t x299 = INT32_MAX;
static int32_t t76 = 134186612;
static int16_t x309 = INT16_MIN;
int16_t x316 = INT16_MAX;
int32_t x317 = INT32_MAX;
int8_t x320 = 57;
volatile uint64_t t83 = 11157593LLU;
int64_t x340 = INT64_MIN;
uint64_t t84 = UINT64_MAX;
static int32_t x346 = INT32_MAX;
int64_t x352 = INT64_MIN;
uint32_t x365 = 1154677U;
uint32_t t91 = 252680U;
volatile int16_t x369 = 1;
int32_t x386 = -818743;
volatile uint8_t x391 = 7U;
uint32_t x396 = 1147797580U;
volatile uint32_t t98 = 600215U;
int32_t x402 = 8977769;
volatile uint64_t x403 = 23188573665003882LLU;
int32_t x412 = -1269;
uint16_t x416 = UINT16_MAX;
volatile uint32_t t103 = 4790U;
int32_t x419 = 19917152;
volatile uint32_t t104 = UINT32_MAX;
static int32_t x422 = 86352579;
int32_t x427 = -1;
int8_t x429 = INT8_MIN;
int8_t x430 = 1;
static volatile int32_t t107 = -3625;
int8_t x433 = -1;
uint32_t x439 = UINT32_MAX;
static uint64_t x444 = 573988650LLU;
volatile int64_t x448 = INT64_MIN;
static int16_t x449 = 1;
volatile uint32_t x451 = 50U;
uint8_t x456 = 82U;
int64_t x457 = INT64_MAX;
static uint8_t x459 = 1U;
volatile uint32_t x472 = 3257U;
static uint16_t x478 = 3U;
int64_t t119 = 533666009579816LL;
static uint16_t x483 = UINT16_MAX;
int8_t x485 = INT8_MAX;
uint8_t x487 = 4U;
int16_t x488 = -1;
int64_t x490 = INT64_MIN;
volatile int64_t x495 = INT64_MAX;
int64_t x502 = INT64_MAX;
int8_t x507 = INT8_MIN;
volatile int32_t t126 = 97889939;
uint64_t x512 = 178344784313816477LLU;
int32_t x514 = INT32_MAX;
static uint32_t x517 = 541121U;
uint32_t x518 = 447U;
int16_t x520 = INT16_MIN;
static int16_t x539 = INT16_MIN;
uint64_t t135 = 32LLU;
int64_t x546 = -1896886127499LL;
volatile int64_t x554 = 302218037LL;
static int16_t x555 = 9;
static volatile int64_t x556 = -3077120715639LL;
volatile uint32_t t139 = 364U;
uint64_t x563 = UINT64_MAX;
uint16_t x571 = UINT16_MAX;
volatile int32_t x572 = 1685916;
int32_t x575 = INT32_MIN;
uint16_t x577 = UINT16_MAX;
volatile uint8_t x579 = 63U;
static int64_t x583 = INT64_MAX;
int64_t x585 = INT64_MIN;
volatile uint32_t x591 = 230U;
int16_t x599 = INT16_MIN;
uint16_t x600 = UINT16_MAX;
int32_t t149 = -8572;
uint64_t x601 = UINT64_MAX;
int64_t x602 = INT64_MIN;
int32_t x604 = 0;
uint8_t x607 = 19U;
uint64_t x609 = UINT64_MAX;
uint32_t x624 = UINT32_MAX;
uint16_t x625 = 437U;
volatile uint8_t x626 = 49U;
volatile int32_t x632 = -252;
static volatile int16_t x636 = INT16_MIN;
int64_t x640 = INT64_MIN;
int16_t x646 = INT16_MIN;
uint64_t x647 = UINT64_MAX;
static volatile int64_t x651 = -1LL;
int32_t t162 = -37365355;
static int16_t x657 = 3;
static uint8_t x659 = UINT8_MAX;
int32_t t164 = 114186;
volatile uint8_t x663 = 65U;
uint64_t x668 = 800462628677308445LLU;
static uint16_t x672 = 44U;
static int64_t t167 = -16340603444331721LL;
volatile int64_t t168 = -722294LL;
static int16_t x683 = -1;
int32_t x685 = INT32_MIN;
static uint16_t x691 = UINT16_MAX;
static int16_t x693 = -1;
volatile uint32_t t174 = 3U;
int32_t x703 = -1;
int16_t x705 = INT16_MAX;
uint32_t x706 = 112451533U;
uint16_t x707 = 87U;
int16_t x709 = INT16_MIN;
static volatile uint16_t x713 = UINT16_MAX;
volatile int16_t x714 = 2;
int32_t x715 = INT32_MIN;
uint64_t x716 = 132822635487772504LLU;
uint32_t t179 = UINT32_MAX;
int16_t x721 = INT16_MAX;
volatile uint32_t t181 = UINT32_MAX;
static uint16_t x733 = UINT16_MAX;
int8_t x736 = INT8_MIN;
static volatile int8_t x737 = 0;
int16_t x749 = INT16_MIN;
int8_t x752 = -1;
int64_t t188 = -28835611LL;
volatile int8_t x758 = -44;
static volatile uint64_t x762 = 129746078632099LLU;
uint16_t x763 = 4013U;
int32_t x767 = -2;
volatile int16_t x770 = 4;
uint64_t x778 = UINT64_MAX;
static volatile uint16_t x780 = UINT16_MAX;
int64_t x782 = -1LL;
int32_t t196 = 201316697;
int32_t x790 = INT32_MIN;
int16_t x794 = -1;
volatile int32_t t198 = -760289;
int64_t x798 = INT64_MIN;


void f0(void) {
    	static int8_t x2 = INT8_MAX;
	static uint64_t x3 = UINT64_MAX;
	uint8_t x4 = UINT8_MAX;
	int64_t t0 = 1083591449LL;

    t0 = ((x1|x2)|(x3!=x4));

    if (t0 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	int16_t x6 = INT16_MIN;
	int32_t x7 = INT32_MIN;
	int8_t x8 = -4;
	volatile int64_t t1 = -7209366805959075LL;

    t1 = ((x5|x6)|(x7!=x8));

    if (t1 != -32767LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = 0;
	int32_t x10 = INT32_MIN;
	int32_t t2 = INT32_MIN;

    t2 = ((x9|x10)|(x11!=x12));

    if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int32_t x14 = -14;
	static volatile int8_t x15 = INT8_MAX;
	int64_t x16 = INT64_MIN;
	int32_t t3 = 24184997;

    t3 = ((x13|x14)|(x15!=x16));

    if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint16_t x17 = 6838U;
	static uint64_t x18 = 0LLU;
	uint16_t x19 = 355U;
	static volatile int16_t x20 = INT16_MIN;
	uint64_t t4 = 15857777973981402LLU;

    t4 = ((x17|x18)|(x19!=x20));

    if (t4 != 6839LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x22 = 28U;
	static int16_t x23 = 2;
	static int32_t x24 = INT32_MIN;

    t5 = ((x21|x22)|(x23!=x24));

    if (t5 != -9223372036854775779LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x25 = 7U;
	uint32_t x26 = UINT32_MAX;
	uint8_t x27 = 3U;
	static volatile int64_t x28 = INT64_MIN;
	volatile uint32_t t6 = UINT32_MAX;

    t6 = ((x25|x26)|(x27!=x28));

    if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x30 = INT64_MIN;
	uint32_t x31 = 949780U;
	static volatile int64_t x32 = INT64_MIN;
	int64_t t7 = -176409845473LL;

    t7 = ((x29|x30)|(x31!=x32));

    if (t7 != -9223372036663618631LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x33 = INT16_MIN;
	uint32_t x34 = UINT32_MAX;
	int8_t x36 = INT8_MAX;
	volatile uint32_t t8 = UINT32_MAX;

    t8 = ((x33|x34)|(x35!=x36));

    if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = UINT64_MAX;
	volatile int64_t x38 = INT64_MIN;
	int64_t x39 = -83939646LL;
	static int64_t x40 = INT64_MIN;
	volatile uint64_t t9 = UINT64_MAX;

    t9 = ((x37|x38)|(x39!=x40));

    if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = -15;
	uint16_t x42 = 192U;
	int32_t x44 = INT32_MIN;
	volatile int32_t t10 = 29797856;

    t10 = ((x41|x42)|(x43!=x44));

    if (t10 != -15) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = -1;
	static volatile int32_t x46 = -1;
	static uint16_t x47 = 78U;
	static int64_t x48 = INT64_MIN;
	int32_t t11 = -67030605;

    t11 = ((x45|x46)|(x47!=x48));

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x49 = 1;
	uint16_t x50 = 2U;
	static int8_t x52 = -1;
	volatile int32_t t12 = -1;

    t12 = ((x49|x50)|(x51!=x52));

    if (t12 != 3) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = UINT16_MAX;
	volatile int8_t x54 = INT8_MIN;
	static volatile uint16_t x55 = 85U;
	uint32_t x56 = 1781871926U;
	volatile int32_t t13 = -1;

    t13 = ((x53|x54)|(x55!=x56));

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = 0U;
	int32_t x58 = 191698;
	int8_t x59 = INT8_MIN;

    t14 = ((x57|x58)|(x59!=x60));

    if (t14 != 191699U) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = -1LL;
	volatile uint32_t x62 = 22U;
	static int32_t x64 = INT32_MAX;

    t15 = ((x61|x62)|(x63!=x64));

    if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x65 = -286579LL;
	int64_t x66 = INT64_MIN;
	static int32_t x67 = 340764;
	int32_t x68 = INT32_MIN;
	int64_t t16 = 827365554460LL;

    t16 = ((x65|x66)|(x67!=x68));

    if (t16 != -286579LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x70 = 524U;
	uint8_t x71 = 0U;
	uint8_t x72 = 60U;
	volatile uint32_t t17 = UINT32_MAX;

    t17 = ((x69|x70)|(x71!=x72));

    if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = UINT32_MAX;
	int32_t x75 = 174;
	static uint8_t x76 = UINT8_MAX;

    t18 = ((x73|x74)|(x75!=x76));

    if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = 3U;
	int16_t x78 = -295;
	int8_t x79 = -1;
	volatile int64_t x80 = INT64_MIN;
	static uint32_t t19 = 2664915U;

    t19 = ((x77|x78)|(x79!=x80));

    if (t19 != 4294967003U) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x82 = INT16_MIN;
	volatile uint64_t x83 = 8473660661LLU;
	int8_t x84 = INT8_MAX;
	volatile uint32_t t20 = UINT32_MAX;

    t20 = ((x81|x82)|(x83!=x84));

    if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MIN;
	uint64_t x86 = 937191387221822LLU;
	static int8_t x87 = -49;
	volatile uint64_t t21 = 911957962757257LLU;

    t21 = ((x85|x86)|(x87!=x88));

    if (t21 != 18446744073709539135LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x90 = 42LLU;
	static volatile int64_t x91 = -1LL;
	int64_t x92 = INT64_MIN;

    t22 = ((x89|x90)|(x91!=x92));

    if (t22 != 65535LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = INT16_MIN;
	volatile uint8_t x94 = 2U;
	volatile int64_t x96 = 53234LL;

    t23 = ((x93|x94)|(x95!=x96));

    if (t23 != -32765) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x97 = INT32_MIN;
	static int8_t x98 = INT8_MAX;
	int16_t x99 = INT16_MIN;
	uint32_t x100 = 44866U;
	volatile int32_t t24 = 29076;

    t24 = ((x97|x98)|(x99!=x100));

    if (t24 != -2147483521) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x101 = INT8_MAX;
	int8_t x102 = INT8_MIN;
	static uint16_t x103 = 297U;
	int32_t x104 = -1;

    t25 = ((x101|x102)|(x103!=x104));

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = INT32_MIN;
	int64_t x106 = -244LL;
	uint16_t x108 = UINT16_MAX;
	int64_t t26 = -240766999917599LL;

    t26 = ((x105|x106)|(x107!=x108));

    if (t26 != -243LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = INT16_MIN;
	int32_t x110 = 3;
	int32_t x111 = -262048108;
	int16_t x112 = INT16_MIN;
	int32_t t27 = 1;

    t27 = ((x109|x110)|(x111!=x112));

    if (t27 != -32765) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = INT32_MIN;
	int32_t x114 = 148365;

    t28 = ((x113|x114)|(x115!=x116));

    if (t28 != -2147335283) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x117 = UINT32_MAX;
	int64_t x118 = INT64_MAX;
	static int16_t x119 = -16;
	int32_t x120 = 123214;
	volatile int64_t t29 = INT64_MAX;

    t29 = ((x117|x118)|(x119!=x120));

    if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = -1;
	uint16_t x122 = UINT16_MAX;
	static int16_t x123 = -1;
	static int32_t x124 = -604;
	static int32_t t30 = 263267031;

    t30 = ((x121|x122)|(x123!=x124));

    if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x125 = -1;
	int32_t x126 = -1;
	int16_t x127 = INT16_MAX;
	int16_t x128 = 0;
	volatile int32_t t31 = -797;

    t31 = ((x125|x126)|(x127!=x128));

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MIN;
	volatile int32_t x130 = -107574043;
	int64_t x131 = INT64_MIN;

    t32 = ((x129|x130)|(x131!=x132));

    if (t32 != -27) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = -1;
	volatile int32_t t33 = -64;

    t33 = ((x133|x134)|(x135!=x136));

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x138 = INT64_MIN;
	static int8_t x139 = -1;
	uint64_t x140 = 90569096452770092LLU;
	int64_t t34 = -7660905341695989LL;

    t34 = ((x137|x138)|(x139!=x140));

    if (t34 != -3668596803115LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint16_t x143 = 391U;
	uint8_t x144 = UINT8_MAX;
	uint64_t t35 = 8LLU;

    t35 = ((x141|x142)|(x143!=x144));

    if (t35 != 18446744073709551565LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = INT64_MIN;
	uint64_t x146 = UINT64_MAX;
	int8_t x147 = INT8_MAX;
	int64_t x148 = INT64_MIN;
	uint64_t t36 = UINT64_MAX;

    t36 = ((x145|x146)|(x147!=x148));

    if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint16_t x149 = 0U;
	volatile int16_t x150 = 0;
	static volatile int32_t x151 = 12657;
	static int8_t x152 = -44;
	volatile int32_t t37 = 17338;

    t37 = ((x149|x150)|(x151!=x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x153 = UINT16_MAX;
	uint32_t x154 = UINT32_MAX;
	uint64_t x155 = 14699LLU;
	int32_t x156 = INT32_MIN;
	uint32_t t38 = UINT32_MAX;

    t38 = ((x153|x154)|(x155!=x156));

    if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x157 = INT8_MAX;
	int64_t x158 = INT64_MAX;
	int32_t x159 = -1;
	int64_t x160 = INT64_MAX;
	int64_t t39 = INT64_MAX;

    t39 = ((x157|x158)|(x159!=x160));

    if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x161 = 43094960796LLU;
	uint8_t x162 = 87U;
	int8_t x163 = INT8_MIN;
	volatile uint32_t x164 = 41U;
	volatile uint64_t t40 = 31706LLU;

    t40 = ((x161|x162)|(x163!=x164));

    if (t40 != 43094960863LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x165 = 376512803;
	int8_t x167 = INT8_MIN;
	int32_t x168 = INT32_MIN;
	volatile int32_t t41 = -22282;

    t41 = ((x165|x166)|(x167!=x168));

    if (t41 != 376512811) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x170 = INT8_MAX;
	int8_t x171 = INT8_MIN;
	int8_t x172 = -1;
	volatile uint32_t t42 = 77587485U;

    t42 = ((x169|x170)|(x171!=x172));

    if (t42 != 555787391U) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = -1;
	int32_t x174 = -1;
	uint16_t x175 = UINT16_MAX;
	static uint8_t x176 = UINT8_MAX;
	int32_t t43 = 486481;

    t43 = ((x173|x174)|(x175!=x176));

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x178 = 577U;
	volatile int8_t x180 = -6;
	static uint64_t t44 = 1787195168477213401LLU;

    t44 = ((x177|x178)|(x179!=x180));

    if (t44 != 595LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint8_t x181 = 4U;
	int32_t x184 = 46352933;
	volatile int32_t t45 = -6;

    t45 = ((x181|x182)|(x183!=x184));

    if (t45 != -123) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint16_t x185 = UINT16_MAX;
	int64_t x187 = 4420590921792246673LL;
	uint32_t x188 = 2448918U;
	static int32_t t46 = -2319;

    t46 = ((x185|x186)|(x187!=x188));

    if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int8_t x189 = INT8_MIN;
	static int32_t x190 = INT32_MIN;
	int8_t x191 = 3;
	int8_t x192 = INT8_MAX;
	volatile int32_t t47 = 903516937;

    t47 = ((x189|x190)|(x191!=x192));

    if (t47 != -127) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint16_t x193 = 314U;
	static uint8_t x194 = 12U;
	int64_t x195 = INT64_MIN;
	volatile int32_t t48 = -174;

    t48 = ((x193|x194)|(x195!=x196));

    if (t48 != 318) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = INT16_MIN;
	int8_t x198 = -1;
	static volatile int8_t x199 = INT8_MIN;
	uint64_t x200 = 69619765879LLU;
	int32_t t49 = 805;

    t49 = ((x197|x198)|(x199!=x200));

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x201 = INT8_MIN;
	int16_t x202 = INT16_MIN;
	static volatile int64_t x203 = -1LL;
	uint16_t x204 = UINT16_MAX;
	int32_t t50 = -1767214;

    t50 = ((x201|x202)|(x203!=x204));

    if (t50 != -127) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x206 = -1LL;
	uint32_t x208 = 614049305U;
	int64_t t51 = 0LL;

    t51 = ((x205|x206)|(x207!=x208));

    if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MIN;
	volatile uint16_t x210 = UINT16_MAX;
	volatile int32_t x211 = -1;
	int16_t x212 = 4;
	int64_t t52 = -11506404707LL;

    t52 = ((x209|x210)|(x211!=x212));

    if (t52 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint32_t x213 = UINT32_MAX;
	volatile int16_t x214 = -7;
	volatile int32_t x215 = 838;
	volatile uint32_t t53 = UINT32_MAX;

    t53 = ((x213|x214)|(x215!=x216));

    if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x218 = 82U;
	int8_t x219 = -1;
	uint16_t x220 = 248U;
	static volatile int32_t t54 = 3606665;

    t54 = ((x217|x218)|(x219!=x220));

    if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x223 = 1;
	int32_t x224 = INT32_MIN;

    t55 = ((x221|x222)|(x223!=x224));

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = INT64_MAX;
	uint8_t x226 = 14U;
	uint16_t x227 = UINT16_MAX;
	uint32_t x228 = 35U;
	int64_t t56 = INT64_MAX;

    t56 = ((x225|x226)|(x227!=x228));

    if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x229 = INT64_MAX;
	uint8_t x230 = 12U;
	volatile uint64_t x231 = 5765625LLU;
	volatile int16_t x232 = 5;
	volatile int64_t t57 = INT64_MAX;

    t57 = ((x229|x230)|(x231!=x232));

    if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x233 = UINT16_MAX;
	int32_t x234 = 8665743;
	static int8_t x235 = INT8_MAX;
	int32_t t58 = 28526706;

    t58 = ((x233|x234)|(x235!=x236));

    if (t58 != 8716287) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x238 = -1;
	uint32_t x239 = UINT32_MAX;
	uint32_t x240 = 781U;
	uint64_t t59 = UINT64_MAX;

    t59 = ((x237|x238)|(x239!=x240));

    if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x241 = 5588124U;
	static int16_t x242 = -1;
	uint32_t x243 = 6342U;
	int16_t x244 = -1;
	uint32_t t60 = UINT32_MAX;

    t60 = ((x241|x242)|(x243!=x244));

    if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x245 = INT32_MIN;
	int32_t x246 = INT32_MIN;
	volatile int32_t t61 = 1509;

    t61 = ((x245|x246)|(x247!=x248));

    if (t61 != -2147483647) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x249 = 1;
	int64_t x250 = INT64_MAX;
	int16_t x252 = -1;

    t62 = ((x249|x250)|(x251!=x252));

    if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x253 = 776809891113442625LLU;
	uint64_t x254 = 803679829404LLU;
	static int64_t x255 = -1442538LL;
	int64_t x256 = 26354105265078LL;
	volatile uint64_t t63 = 517584LLU;

    t63 = ((x253|x254)|(x255!=x256));

    if (t63 != 776810445399915997LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x257 = INT8_MIN;
	static uint8_t x258 = 3U;
	uint8_t x259 = 6U;
	static volatile int32_t x260 = 118;
	volatile int32_t t64 = 176;

    t64 = ((x257|x258)|(x259!=x260));

    if (t64 != -125) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x261 = INT32_MIN;
	int8_t x262 = -1;
	int16_t x263 = -1;
	int8_t x264 = -1;
	volatile int32_t t65 = -1730;

    t65 = ((x261|x262)|(x263!=x264));

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = INT16_MIN;
	uint64_t x266 = 0LLU;
	uint16_t x267 = UINT16_MAX;
	static int64_t x268 = -7379493LL;
	static volatile uint64_t t66 = 6310226LLU;

    t66 = ((x265|x266)|(x267!=x268));

    if (t66 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = 7LL;
	static int16_t x270 = INT16_MAX;
	volatile int8_t x271 = INT8_MIN;
	int64_t t67 = -23699850LL;

    t67 = ((x269|x270)|(x271!=x272));

    if (t67 != 32767LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x273 = INT32_MIN;
	int8_t x274 = INT8_MIN;
	int32_t x275 = -468525;
	int32_t t68 = -6449444;

    t68 = ((x273|x274)|(x275!=x276));

    if (t68 != -127) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x277 = 965U;
	volatile int8_t x279 = INT8_MAX;
	volatile int32_t t69 = -820545;

    t69 = ((x277|x278)|(x279!=x280));

    if (t69 != -2147482683) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x281 = INT64_MIN;
	int64_t x282 = INT64_MIN;
	int32_t x283 = INT32_MAX;
	uint16_t x284 = UINT16_MAX;
	int64_t t70 = -24466648284229LL;

    t70 = ((x281|x282)|(x283!=x284));

    if (t70 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint32_t x286 = 8356U;
	int8_t x287 = INT8_MAX;
	int32_t x288 = -3250459;
	uint32_t t71 = UINT32_MAX;

    t71 = ((x285|x286)|(x287!=x288));

    if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = 0;
	uint64_t x291 = 562879821LLU;
	uint16_t x292 = 10802U;
	int32_t t72 = 11440;

    t72 = ((x289|x290)|(x291!=x292));

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = INT16_MIN;
	int64_t x294 = -844124LL;
	uint8_t x295 = UINT8_MAX;
	int16_t x296 = 2;
	int64_t t73 = 10LL;

    t73 = ((x293|x294)|(x295!=x296));

    if (t73 != -24923LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x298 = INT64_MIN;
	static volatile uint16_t x300 = 156U;
	volatile int64_t t74 = 19816845LL;

    t74 = ((x297|x298)|(x299!=x300));

    if (t74 != -2147483647LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = -15280;
	int16_t x302 = INT16_MIN;
	volatile uint16_t x303 = UINT16_MAX;
	volatile int64_t x304 = INT64_MAX;
	volatile int32_t t75 = 43393;

    t75 = ((x301|x302)|(x303!=x304));

    if (t75 != -15279) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = INT16_MIN;
	static int16_t x306 = -1145;
	int32_t x307 = -680684;
	static volatile int64_t x308 = INT64_MIN;

    t76 = ((x305|x306)|(x307!=x308));

    if (t76 != -1145) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x310 = -1;
	int16_t x311 = INT16_MIN;
	volatile uint64_t x312 = 65349922046077LLU;
	volatile int32_t t77 = 298;

    t77 = ((x309|x310)|(x311!=x312));

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x313 = 243U;
	uint32_t x314 = 84696U;
	int16_t x315 = INT16_MAX;
	uint32_t t78 = 2984100U;

    t78 = ((x313|x314)|(x315!=x316));

    if (t78 != 84731U) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x318 = -2;
	int64_t x319 = -138602396716466LL;
	volatile int32_t t79 = -2648;

    t79 = ((x317|x318)|(x319!=x320));

    if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x321 = INT8_MIN;
	uint8_t x322 = 94U;
	int8_t x323 = INT8_MIN;
	volatile uint16_t x324 = 44U;
	int32_t t80 = 1449601;

    t80 = ((x321|x322)|(x323!=x324));

    if (t80 != -33) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x325 = 331U;
	uint8_t x326 = 126U;
	uint16_t x327 = 467U;
	static volatile uint8_t x328 = 0U;
	volatile int32_t t81 = 72155;

    t81 = ((x325|x326)|(x327!=x328));

    if (t81 != 383) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = INT64_MAX;
	static volatile int32_t x330 = INT32_MAX;
	int16_t x331 = INT16_MIN;
	int8_t x332 = 1;
	int64_t t82 = INT64_MAX;

    t82 = ((x329|x330)|(x331!=x332));

    if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x333 = 3349LLU;
	int64_t x334 = 11LL;
	uint32_t x335 = UINT32_MAX;
	int16_t x336 = INT16_MIN;

    t83 = ((x333|x334)|(x335!=x336));

    if (t83 != 3359LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x337 = UINT64_MAX;
	static uint16_t x338 = 214U;
	uint8_t x339 = 4U;

    t84 = ((x337|x338)|(x339!=x340));

    if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = INT64_MIN;
	int32_t x342 = INT32_MIN;
	int8_t x343 = INT8_MIN;
	uint32_t x344 = 250U;
	volatile int64_t t85 = 43074998881LL;

    t85 = ((x341|x342)|(x343!=x344));

    if (t85 != -2147483647LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = INT8_MAX;
	int64_t x347 = 2585505840971LL;
	uint8_t x348 = 1U;
	static volatile int32_t t86 = INT32_MAX;

    t86 = ((x345|x346)|(x347!=x348));

    if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = INT8_MAX;
	uint64_t x350 = 27045471790LLU;
	int32_t x351 = INT32_MAX;
	uint64_t t87 = 4639LLU;

    t87 = ((x349|x350)|(x351!=x352));

    if (t87 != 27045471871LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = INT64_MAX;
	uint32_t x354 = 15U;
	static int8_t x355 = INT8_MAX;
	volatile int16_t x356 = INT16_MAX;
	volatile int64_t t88 = INT64_MAX;

    t88 = ((x353|x354)|(x355!=x356));

    if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = 11;
	uint32_t x358 = UINT32_MAX;
	int16_t x359 = 1;
	volatile int16_t x360 = INT16_MIN;
	static volatile uint32_t t89 = UINT32_MAX;

    t89 = ((x357|x358)|(x359!=x360));

    if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = INT32_MIN;
	int16_t x362 = INT16_MIN;
	int16_t x363 = -1;
	uint64_t x364 = UINT64_MAX;
	volatile int32_t t90 = 219;

    t90 = ((x361|x362)|(x363!=x364));

    if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x366 = INT32_MIN;
	int32_t x367 = INT32_MIN;
	static int64_t x368 = -426LL;

    t91 = ((x365|x366)|(x367!=x368));

    if (t91 != 2148638325U) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x370 = -1;
	int32_t x371 = -485915269;
	static uint32_t x372 = 45712419U;
	static volatile int32_t t92 = -16214280;

    t92 = ((x369|x370)|(x371!=x372));

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = INT64_MIN;
	int8_t x374 = -1;
	static uint16_t x375 = 394U;
	static int16_t x376 = -4911;
	int64_t t93 = 191048276189967087LL;

    t93 = ((x373|x374)|(x375!=x376));

    if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MIN;
	int8_t x378 = -52;
	int8_t x379 = -6;
	int8_t x380 = INT8_MIN;
	int32_t t94 = -2979;

    t94 = ((x377|x378)|(x379!=x380));

    if (t94 != -51) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x381 = 284U;
	int64_t x382 = -2LL;
	static int8_t x383 = 3;
	int64_t x384 = -2125667829089580871LL;
	volatile int64_t t95 = 4790409080LL;

    t95 = ((x381|x382)|(x383!=x384));

    if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x385 = 3U;
	int16_t x387 = INT16_MAX;
	static volatile int32_t x388 = INT32_MIN;
	volatile uint32_t t96 = 38U;

    t96 = ((x385|x386)|(x387!=x388));

    if (t96 != 4294148555U) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x389 = -1875773;
	static int16_t x390 = 810;
	static volatile int16_t x392 = 101;
	volatile int32_t t97 = -8;

    t97 = ((x389|x390)|(x391!=x392));

    if (t97 != -1874965) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint32_t x393 = 983376966U;
	uint8_t x394 = 64U;
	static int16_t x395 = INT16_MAX;

    t98 = ((x393|x394)|(x395!=x396));

    if (t98 != 983376967U) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = -1LL;
	int32_t x398 = 385;
	int32_t x399 = 74029528;
	volatile int32_t x400 = INT32_MIN;
	volatile int64_t t99 = 1366074LL;

    t99 = ((x397|x398)|(x399!=x400));

    if (t99 != -1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x401 = 6U;
	int64_t x404 = INT64_MIN;
	int32_t t100 = -1;

    t100 = ((x401|x402)|(x403!=x404));

    if (t100 != 8977775) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MIN;
	volatile int64_t x406 = INT64_MAX;
	volatile int8_t x407 = INT8_MIN;
	int16_t x408 = INT16_MIN;
	static volatile int64_t t101 = -4428696062867LL;

    t101 = ((x405|x406)|(x407!=x408));

    if (t101 != -1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = -1;
	int64_t x410 = INT64_MIN;
	volatile uint8_t x411 = 36U;
	static volatile int64_t t102 = 14365693690LL;

    t102 = ((x409|x410)|(x411!=x412));

    if (t102 != -1LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x413 = 2;
	volatile uint32_t x414 = 551989911U;
	uint16_t x415 = 2399U;

    t103 = ((x413|x414)|(x415!=x416));

    if (t103 != 551989911U) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x417 = 1U;
	int32_t x418 = -1;
	static int16_t x420 = -11370;

    t104 = ((x417|x418)|(x419!=x420));

    if (t104 != UINT32_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = INT8_MAX;
	uint8_t x423 = 1U;
	int64_t x424 = INT64_MIN;
	volatile int32_t t105 = -1114625;

    t105 = ((x421|x422)|(x423!=x424));

    if (t105 != 86352639) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = INT16_MIN;
	static int8_t x426 = 5;
	static uint64_t x428 = 57882178014LLU;
	int32_t t106 = -106263937;

    t106 = ((x425|x426)|(x427!=x428));

    if (t106 != -32763) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x431 = INT32_MIN;
	volatile int32_t x432 = -1;

    t107 = ((x429|x430)|(x431!=x432));

    if (t107 != -127) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x434 = 4784U;
	int32_t x435 = 76;
	static uint32_t x436 = UINT32_MAX;
	static volatile uint32_t t108 = UINT32_MAX;

    t108 = ((x433|x434)|(x435!=x436));

    if (t108 != UINT32_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = -1;
	uint64_t x438 = UINT64_MAX;
	uint32_t x440 = 3405U;
	static volatile uint64_t t109 = UINT64_MAX;

    t109 = ((x437|x438)|(x439!=x440));

    if (t109 != UINT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint64_t x441 = 8309744341289195045LLU;
	int8_t x442 = INT8_MAX;
	int64_t x443 = -17740381LL;
	uint64_t t110 = 539799833088LLU;

    t110 = ((x441|x442)|(x443!=x444));

    if (t110 != 8309744341289195135LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = -42056;
	static int16_t x446 = -1;
	static int64_t x447 = -1LL;
	static int32_t t111 = -3;

    t111 = ((x445|x446)|(x447!=x448));

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x450 = UINT32_MAX;
	static int8_t x452 = INT8_MIN;
	volatile uint32_t t112 = UINT32_MAX;

    t112 = ((x449|x450)|(x451!=x452));

    if (t112 != UINT32_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x453 = -1;
	static int32_t x454 = INT32_MAX;
	int16_t x455 = -6;
	static volatile int32_t t113 = -75169;

    t113 = ((x453|x454)|(x455!=x456));

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x458 = INT8_MIN;
	static uint32_t x460 = UINT32_MAX;
	int64_t t114 = 241030204LL;

    t114 = ((x457|x458)|(x459!=x460));

    if (t114 != -1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = INT64_MIN;
	int16_t x462 = INT16_MIN;
	int32_t x463 = INT32_MAX;
	static uint8_t x464 = UINT8_MAX;
	static int64_t t115 = -495342224610845495LL;

    t115 = ((x461|x462)|(x463!=x464));

    if (t115 != -32767LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x465 = 22U;
	uint16_t x466 = 115U;
	int64_t x467 = 4249834099022522923LL;
	volatile int16_t x468 = INT16_MIN;
	int32_t t116 = 10;

    t116 = ((x465|x466)|(x467!=x468));

    if (t116 != 119) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = INT8_MIN;
	int8_t x470 = INT8_MAX;
	static int64_t x471 = INT64_MAX;
	int32_t t117 = -6547109;

    t117 = ((x469|x470)|(x471!=x472));

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x473 = 887952970819LL;
	uint8_t x474 = 4U;
	int16_t x475 = INT16_MAX;
	uint32_t x476 = UINT32_MAX;
	int64_t t118 = -61089851817LL;

    t118 = ((x473|x474)|(x475!=x476));

    if (t118 != 887952970823LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = -1LL;
	int8_t x479 = INT8_MIN;
	int16_t x480 = INT16_MAX;

    t119 = ((x477|x478)|(x479!=x480));

    if (t119 != -1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x481 = -3;
	int64_t x482 = INT64_MIN;
	static int32_t x484 = 1052534859;
	static volatile int64_t t120 = -6LL;

    t120 = ((x481|x482)|(x483!=x484));

    if (t120 != -3LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x486 = -47;
	static int32_t t121 = -15631955;

    t121 = ((x485|x486)|(x487!=x488));

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x489 = -1;
	static int8_t x491 = 1;
	int64_t x492 = 257953LL;
	volatile int64_t t122 = 8140102720102LL;

    t122 = ((x489|x490)|(x491!=x492));

    if (t122 != -1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = INT32_MAX;
	static int8_t x494 = 1;
	static uint32_t x496 = 36U;
	volatile int32_t t123 = INT32_MAX;

    t123 = ((x493|x494)|(x495!=x496));

    if (t123 != INT32_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = INT8_MIN;
	int32_t x498 = INT32_MIN;
	static int64_t x499 = INT64_MIN;
	static uint64_t x500 = 389840173085003616LLU;
	int32_t t124 = -1;

    t124 = ((x497|x498)|(x499!=x500));

    if (t124 != -127) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x501 = -1;
	int16_t x503 = INT16_MIN;
	int64_t x504 = -1LL;
	volatile int64_t t125 = 40366893607LL;

    t125 = ((x501|x502)|(x503!=x504));

    if (t125 != -1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x505 = INT16_MIN;
	int16_t x506 = -1;
	uint8_t x508 = 104U;

    t126 = ((x505|x506)|(x507!=x508));

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x509 = 19351033U;
	int64_t x510 = INT64_MIN;
	int64_t x511 = -1LL;
	volatile int64_t t127 = -8LL;

    t127 = ((x509|x510)|(x511!=x512));

    if (t127 != -9223372036835424775LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = -1LL;
	int8_t x515 = INT8_MAX;
	static int8_t x516 = INT8_MIN;
	volatile int64_t t128 = -11370373536LL;

    t128 = ((x513|x514)|(x515!=x516));

    if (t128 != -1LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int32_t x519 = 55647413;
	volatile uint32_t t129 = 3U;

    t129 = ((x517|x518)|(x519!=x520));

    if (t129 != 541183U) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x521 = -1;
	int64_t x522 = -138249712536652LL;
	uint16_t x523 = 0U;
	int8_t x524 = INT8_MIN;
	volatile int64_t t130 = 225745854061301LL;

    t130 = ((x521|x522)|(x523!=x524));

    if (t130 != -1LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x525 = INT16_MIN;
	static int32_t x526 = -1;
	uint64_t x527 = 1235LLU;
	uint8_t x528 = 4U;
	int32_t t131 = -2066708;

    t131 = ((x525|x526)|(x527!=x528));

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x529 = INT32_MIN;
	volatile int16_t x530 = 0;
	int32_t x531 = -1773;
	static uint16_t x532 = 15403U;
	int32_t t132 = 28;

    t132 = ((x529|x530)|(x531!=x532));

    if (t132 != -2147483647) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x533 = INT16_MIN;
	int32_t x534 = INT32_MAX;
	int8_t x535 = 1;
	volatile int16_t x536 = INT16_MIN;
	volatile int32_t t133 = 124;

    t133 = ((x533|x534)|(x535!=x536));

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = -1;
	int8_t x538 = -1;
	static uint16_t x540 = 12U;
	volatile int32_t t134 = -11063605;

    t134 = ((x537|x538)|(x539!=x540));

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x541 = 3;
	volatile uint64_t x542 = 105392099101LLU;
	int64_t x543 = INT64_MIN;
	volatile int16_t x544 = INT16_MAX;

    t135 = ((x541|x542)|(x543!=x544));

    if (t135 != 105392099103LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = INT64_MIN;
	int64_t x547 = -13004914739LL;
	int8_t x548 = INT8_MIN;
	static int64_t t136 = -16347461LL;

    t136 = ((x545|x546)|(x547!=x548));

    if (t136 != -1896886127499LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x549 = UINT64_MAX;
	volatile int32_t x550 = -675;
	int32_t x551 = -17101;
	int16_t x552 = INT16_MAX;
	static uint64_t t137 = UINT64_MAX;

    t137 = ((x549|x550)|(x551!=x552));

    if (t137 != UINT64_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x553 = UINT64_MAX;
	uint64_t t138 = UINT64_MAX;

    t138 = ((x553|x554)|(x555!=x556));

    if (t138 != UINT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = 182418334;
	static uint32_t x558 = 502U;
	volatile uint16_t x559 = 2U;
	volatile int64_t x560 = 1LL;

    t139 = ((x557|x558)|(x559!=x560));

    if (t139 != 182418431U) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = INT64_MIN;
	int64_t x562 = -1LL;
	int8_t x564 = 52;
	int64_t t140 = -31311LL;

    t140 = ((x561|x562)|(x563!=x564));

    if (t140 != -1LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x565 = UINT64_MAX;
	int32_t x566 = INT32_MIN;
	static int64_t x567 = 310176209117414LL;
	volatile int32_t x568 = -1;
	volatile uint64_t t141 = UINT64_MAX;

    t141 = ((x565|x566)|(x567!=x568));

    if (t141 != UINT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x569 = 7U;
	int64_t x570 = INT64_MIN;
	volatile int64_t t142 = 5308415LL;

    t142 = ((x569|x570)|(x571!=x572));

    if (t142 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = -1LL;
	int32_t x574 = -1;
	int8_t x576 = INT8_MIN;
	volatile int64_t t143 = -823745925LL;

    t143 = ((x573|x574)|(x575!=x576));

    if (t143 != -1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint16_t x578 = 8U;
	static int64_t x580 = -80640605878356LL;
	int32_t t144 = -171095;

    t144 = ((x577|x578)|(x579!=x580));

    if (t144 != 65535) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x581 = 6915U;
	int16_t x582 = INT16_MIN;
	int64_t x584 = INT64_MIN;
	volatile int32_t t145 = -22;

    t145 = ((x581|x582)|(x583!=x584));

    if (t145 != -25853) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x586 = INT16_MAX;
	int8_t x587 = INT8_MAX;
	static int16_t x588 = -34;
	volatile int64_t t146 = 11837672863LL;

    t146 = ((x585|x586)|(x587!=x588));

    if (t146 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x589 = 26LLU;
	int32_t x590 = INT32_MAX;
	int16_t x592 = INT16_MIN;
	uint64_t t147 = 29385796884LLU;

    t147 = ((x589|x590)|(x591!=x592));

    if (t147 != 2147483647LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int64_t x593 = INT64_MIN;
	volatile int32_t x594 = -7;
	static int16_t x595 = 1603;
	uint8_t x596 = UINT8_MAX;
	int64_t t148 = -221179892156370625LL;

    t148 = ((x593|x594)|(x595!=x596));

    if (t148 != -7LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x597 = INT8_MAX;
	volatile int8_t x598 = -1;

    t149 = ((x597|x598)|(x599!=x600));

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x603 = -1LL;
	uint64_t t150 = UINT64_MAX;

    t150 = ((x601|x602)|(x603!=x604));

    if (t150 != UINT64_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = INT16_MAX;
	volatile int64_t x606 = INT64_MIN;
	uint8_t x608 = 16U;
	static int64_t t151 = -606049LL;

    t151 = ((x605|x606)|(x607!=x608));

    if (t151 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x610 = INT64_MIN;
	int8_t x611 = INT8_MIN;
	static int8_t x612 = INT8_MAX;
	uint64_t t152 = UINT64_MAX;

    t152 = ((x609|x610)|(x611!=x612));

    if (t152 != UINT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = -6LL;
	volatile uint16_t x614 = 16201U;
	uint32_t x615 = 0U;
	int8_t x616 = 1;
	volatile int64_t t153 = 141080014103635LL;

    t153 = ((x613|x614)|(x615!=x616));

    if (t153 != -5LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x617 = UINT16_MAX;
	int16_t x618 = INT16_MAX;
	static int16_t x619 = INT16_MIN;
	static uint64_t x620 = 4108622780802104853LLU;
	volatile int32_t t154 = -74053049;

    t154 = ((x617|x618)|(x619!=x620));

    if (t154 != 65535) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint16_t x621 = 35U;
	int16_t x622 = INT16_MAX;
	static volatile int8_t x623 = -1;
	int32_t t155 = -1;

    t155 = ((x621|x622)|(x623!=x624));

    if (t155 != 32767) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x627 = -1;
	int32_t x628 = 562;
	volatile int32_t t156 = -3;

    t156 = ((x625|x626)|(x627!=x628));

    if (t156 != 437) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = -972;
	uint8_t x630 = UINT8_MAX;
	int16_t x631 = 515;
	static int32_t t157 = -2397;

    t157 = ((x629|x630)|(x631!=x632));

    if (t157 != -769) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = INT64_MIN;
	uint16_t x634 = UINT16_MAX;
	int16_t x635 = INT16_MIN;
	static int64_t t158 = 168134129LL;

    t158 = ((x633|x634)|(x635!=x636));

    if (t158 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x637 = 1319256500U;
	uint8_t x638 = UINT8_MAX;
	int64_t x639 = -1LL;
	uint32_t t159 = 16920U;

    t159 = ((x637|x638)|(x639!=x640));

    if (t159 != 1319256575U) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = -1LL;
	int32_t x642 = -286060;
	int64_t x643 = 2226297008751LL;
	volatile int32_t x644 = 417913613;
	static int64_t t160 = 166243LL;

    t160 = ((x641|x642)|(x643!=x644));

    if (t160 != -1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x645 = UINT64_MAX;
	uint8_t x648 = 21U;
	uint64_t t161 = UINT64_MAX;

    t161 = ((x645|x646)|(x647!=x648));

    if (t161 != UINT64_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int8_t x649 = -1;
	int8_t x650 = -1;
	int8_t x652 = INT8_MIN;

    t162 = ((x649|x650)|(x651!=x652));

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x653 = INT16_MIN;
	int32_t x654 = INT32_MIN;
	int8_t x655 = 19;
	uint8_t x656 = UINT8_MAX;
	static volatile int32_t t163 = 475399;

    t163 = ((x653|x654)|(x655!=x656));

    if (t163 != -32767) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x658 = 429U;
	volatile uint64_t x660 = 6324886765571LLU;

    t164 = ((x657|x658)|(x659!=x660));

    if (t164 != 431) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int16_t x661 = -6;
	uint64_t x662 = UINT64_MAX;
	int32_t x664 = 21708;
	volatile uint64_t t165 = UINT64_MAX;

    t165 = ((x661|x662)|(x663!=x664));

    if (t165 != UINT64_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = -1;
	uint16_t x666 = UINT16_MAX;
	int32_t x667 = INT32_MIN;
	volatile int32_t t166 = -98610550;

    t166 = ((x665|x666)|(x667!=x668));

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x669 = 16U;
	volatile int64_t x670 = INT64_MIN;
	int64_t x671 = 25278349651192LL;

    t167 = ((x669|x670)|(x671!=x672));

    if (t167 != -9223372036854775791LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = INT64_MIN;
	int64_t x674 = INT64_MIN;
	int64_t x675 = 4424276238526470014LL;
	volatile int8_t x676 = -14;

    t168 = ((x673|x674)|(x675!=x676));

    if (t168 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = -5991;
	int32_t x678 = 1200339;
	static int8_t x679 = INT8_MIN;
	uint8_t x680 = UINT8_MAX;
	static int32_t t169 = -829556;

    t169 = ((x677|x678)|(x679!=x680));

    if (t169 != -1829) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x681 = 10U;
	int8_t x682 = INT8_MAX;
	static int64_t x684 = INT64_MAX;
	static int32_t t170 = 2870;

    t170 = ((x681|x682)|(x683!=x684));

    if (t170 != 127) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x686 = 8114U;
	int8_t x687 = -1;
	static int64_t x688 = INT64_MIN;
	volatile uint32_t t171 = 689684876U;

    t171 = ((x685|x686)|(x687!=x688));

    if (t171 != 2147491763U) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = -1;
	int8_t x690 = INT8_MIN;
	int8_t x692 = INT8_MAX;
	volatile int32_t t172 = 110943;

    t172 = ((x689|x690)|(x691!=x692));

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x694 = INT8_MAX;
	int32_t x695 = -1;
	int8_t x696 = INT8_MAX;
	int32_t t173 = -38;

    t173 = ((x693|x694)|(x695!=x696));

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x697 = 0U;
	volatile uint16_t x698 = 1U;
	uint8_t x699 = UINT8_MAX;
	uint64_t x700 = 117276817762991LLU;

    t174 = ((x697|x698)|(x699!=x700));

    if (t174 != 1U) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int8_t x701 = -5;
	static volatile uint64_t x702 = UINT64_MAX;
	int32_t x704 = INT32_MIN;
	static uint64_t t175 = UINT64_MAX;

    t175 = ((x701|x702)|(x703!=x704));

    if (t175 != UINT64_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x708 = -1;
	uint32_t t176 = 4U;

    t176 = ((x705|x706)|(x707!=x708));

    if (t176 != 112459775U) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x710 = 2;
	static volatile int16_t x711 = 548;
	volatile uint8_t x712 = 70U;
	static volatile int32_t t177 = 20970;

    t177 = ((x709|x710)|(x711!=x712));

    if (t177 != -32765) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t t178 = -914;

    t178 = ((x713|x714)|(x715!=x716));

    if (t178 != 65535) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x717 = 191677U;
	static int16_t x718 = -1;
	volatile uint16_t x719 = UINT16_MAX;
	uint32_t x720 = 45726251U;

    t179 = ((x717|x718)|(x719!=x720));

    if (t179 != UINT32_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x722 = 1LL;
	uint64_t x723 = UINT64_MAX;
	int8_t x724 = -1;
	static int64_t t180 = 1889623767LL;

    t180 = ((x721|x722)|(x723!=x724));

    if (t180 != 32767LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int16_t x725 = -2;
	static uint32_t x726 = UINT32_MAX;
	uint16_t x727 = 510U;
	int8_t x728 = -1;

    t181 = ((x725|x726)|(x727!=x728));

    if (t181 != UINT32_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint32_t x729 = 25717256U;
	int32_t x730 = INT32_MAX;
	uint32_t x731 = 29085U;
	static volatile int16_t x732 = INT16_MIN;
	volatile uint32_t t182 = 6U;

    t182 = ((x729|x730)|(x731!=x732));

    if (t182 != 2147483647U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x734 = UINT64_MAX;
	static volatile uint8_t x735 = 4U;
	volatile uint64_t t183 = UINT64_MAX;

    t183 = ((x733|x734)|(x735!=x736));

    if (t183 != UINT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x738 = -1;
	uint64_t x739 = 1173853788LLU;
	int16_t x740 = -123;
	volatile int32_t t184 = 35118257;

    t184 = ((x737|x738)|(x739!=x740));

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = -1LL;
	int16_t x742 = 15;
	int64_t x743 = 58LL;
	int64_t x744 = -7827LL;
	int64_t t185 = -7LL;

    t185 = ((x741|x742)|(x743!=x744));

    if (t185 != -1LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = -1;
	int8_t x746 = INT8_MIN;
	int8_t x747 = 0;
	int32_t x748 = -1;
	int32_t t186 = 23398499;

    t186 = ((x745|x746)|(x747!=x748));

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x750 = 330;
	int32_t x751 = INT32_MIN;
	int32_t t187 = 25874426;

    t187 = ((x749|x750)|(x751!=x752));

    if (t187 != -32437) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = 397858LL;
	static uint32_t x754 = 3339U;
	uint32_t x755 = UINT32_MAX;
	volatile uint8_t x756 = 41U;

    t188 = ((x753|x754)|(x755!=x756));

    if (t188 != 401195LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = INT16_MIN;
	volatile int32_t x759 = 14839;
	uint64_t x760 = 5277964798162795LLU;
	volatile int32_t t189 = -598;

    t189 = ((x757|x758)|(x759!=x760));

    if (t189 != -43) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x761 = 44090U;
	int8_t x764 = 3;
	static uint64_t t190 = 64LLU;

    t190 = ((x761|x762)|(x763!=x764));

    if (t190 != 129746078641339LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = 109;
	int16_t x766 = -1;
	uint32_t x768 = 878U;
	int32_t t191 = -42;

    t191 = ((x765|x766)|(x767!=x768));

    if (t191 != -1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x769 = 0;
	volatile int16_t x771 = INT16_MIN;
	static uint32_t x772 = 134518529U;
	int32_t t192 = -1333;

    t192 = ((x769|x770)|(x771!=x772));

    if (t192 != 5) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = INT16_MIN;
	volatile int32_t x774 = 1;
	uint16_t x775 = UINT16_MAX;
	volatile int64_t x776 = INT64_MIN;
	volatile int32_t t193 = 26;

    t193 = ((x773|x774)|(x775!=x776));

    if (t193 != -32767) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = -1;
	volatile int32_t x779 = -1010142107;
	uint64_t t194 = UINT64_MAX;

    t194 = ((x777|x778)|(x779!=x780));

    if (t194 != UINT64_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x781 = 12U;
	volatile int32_t x783 = -1;
	int32_t x784 = INT32_MIN;
	int64_t t195 = 373314220544864214LL;

    t195 = ((x781|x782)|(x783!=x784));

    if (t195 != -1LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = INT8_MAX;
	volatile int16_t x786 = 13;
	int64_t x787 = -1LL;
	int16_t x788 = INT16_MAX;

    t196 = ((x785|x786)|(x787!=x788));

    if (t196 != 127) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x789 = INT64_MIN;
	static int32_t x791 = INT32_MIN;
	int64_t x792 = -1LL;
	int64_t t197 = -175423515932LL;

    t197 = ((x789|x790)|(x791!=x792));

    if (t197 != -2147483647LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = INT8_MIN;
	volatile int8_t x795 = 18;
	int8_t x796 = -6;

    t198 = ((x793|x794)|(x795!=x796));

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x797 = UINT64_MAX;
	volatile int64_t x799 = INT64_MIN;
	static uint8_t x800 = 1U;
	static uint64_t t199 = UINT64_MAX;

    t199 = ((x797|x798)|(x799!=x800));

    if (t199 != UINT64_MAX) { NG(); } else { ; }
	
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

