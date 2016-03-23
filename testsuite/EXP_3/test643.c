
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

volatile int8_t x2 = 2;
static volatile int8_t x6 = -37;
static int32_t x9 = INT32_MAX;
int16_t x10 = -1;
volatile int64_t t2 = 1658665330667753LL;
volatile int32_t x16 = INT32_MIN;
static uint64_t x21 = 426326970779474LLU;
int64_t x22 = 2639LL;
uint64_t t5 = 77685307715LLU;
volatile uint8_t x32 = 1U;
uint8_t x35 = UINT8_MAX;
int16_t x37 = INT16_MAX;
int16_t x39 = -6;
static int32_t x42 = INT32_MIN;
uint32_t x53 = 925710663U;
int16_t x54 = 33;
static int16_t x56 = -1;
int32_t x57 = -1;
int32_t x67 = INT32_MAX;
uint32_t x68 = UINT32_MAX;
static int16_t x70 = INT16_MIN;
uint16_t x76 = 463U;
static int32_t x80 = -241;
int64_t t20 = 130111731471LL;
int32_t x94 = -1;
static uint64_t t23 = 39764953226683484LLU;
int32_t x102 = 1;
uint8_t x109 = UINT8_MAX;
int64_t t27 = -216177205091162571LL;
volatile int8_t x113 = INT8_MIN;
uint32_t x114 = 3337U;
int32_t x116 = INT32_MAX;
static int32_t x121 = 6887300;
int8_t x123 = INT8_MIN;
volatile int64_t x125 = INT64_MIN;
int64_t x129 = -1LL;
static uint8_t x137 = 31U;
static int32_t t34 = 297971;
int16_t x142 = INT16_MAX;
int8_t x143 = -39;
int16_t x144 = -1;
int8_t x146 = -1;
int64_t x152 = 31352497017LL;
uint64_t t37 = 176588841339163046LLU;
volatile int64_t x161 = INT64_MIN;
int32_t x164 = -1770970;
volatile int64_t t40 = 4981194143253624LL;
volatile int8_t x166 = INT8_MAX;
static int64_t x167 = INT64_MIN;
volatile int64_t t41 = -485921176837LL;
int64_t x170 = 594851LL;
volatile int8_t x174 = INT8_MIN;
static int16_t x176 = -247;
int32_t x178 = INT32_MAX;
int32_t x179 = INT32_MIN;
uint16_t x182 = 74U;
volatile int64_t t45 = -6884344511381LL;
static int8_t x186 = -1;
uint16_t x190 = UINT16_MAX;
int64_t x192 = -1LL;
static int64_t t47 = -82478051LL;
uint32_t x204 = UINT32_MAX;
volatile uint32_t x206 = UINT32_MAX;
int64_t x217 = -1LL;
volatile int16_t x220 = -81;
volatile int8_t x222 = INT8_MIN;
int64_t x223 = -1LL;
int64_t x226 = INT64_MIN;
int8_t x228 = -1;
uint8_t x229 = UINT8_MAX;
static uint16_t x230 = UINT16_MAX;
volatile uint64_t t57 = 1319062356604790LLU;
uint64_t x240 = 57LLU;
volatile uint64_t t59 = 1642907LLU;
static volatile int64_t t60 = 428683239903LL;
volatile int32_t x253 = -55;
uint16_t x261 = 2700U;
int8_t x263 = INT8_MAX;
int8_t x264 = INT8_MIN;
static volatile uint64_t t64 = 1693161968LLU;
uint32_t x278 = UINT32_MAX;
int16_t x282 = INT16_MAX;
int64_t x295 = -1LL;
volatile uint64_t t72 = 12011535124633LLU;
int16_t x305 = INT16_MIN;
uint32_t x308 = 142679U;
uint16_t x309 = 3U;
uint8_t x312 = 3U;
volatile int32_t t76 = 0;
uint8_t x324 = 9U;
static int16_t x335 = INT16_MIN;
uint64_t t81 = 149094870612310LLU;
uint8_t x340 = UINT8_MAX;
volatile int64_t t82 = 9479128LL;
int8_t x341 = -1;
int8_t x342 = -1;
static volatile uint64_t t85 = 70032695640933LLU;
static uint32_t x354 = UINT32_MAX;
int64_t t87 = -1LL;
volatile int32_t x369 = -2401455;
int16_t x372 = INT16_MIN;
int32_t t89 = -26;
int32_t x374 = INT32_MAX;
uint8_t x378 = 20U;
static volatile int8_t x381 = INT8_MIN;
volatile int16_t x388 = 13897;
volatile int32_t t93 = -17;
static volatile uint8_t x390 = UINT8_MAX;
int16_t x393 = INT16_MIN;
int8_t x402 = INT8_MAX;
uint8_t x404 = 21U;
int16_t x408 = INT16_MIN;
volatile int32_t x409 = INT32_MAX;
int64_t t99 = 3077447163325LL;
volatile int8_t x428 = INT8_MIN;
uint32_t t103 = 4766U;
static int32_t x429 = -222094;
volatile int64_t t104 = 1647150314127LL;
uint64_t t105 = 0LLU;
uint16_t x439 = UINT16_MAX;
volatile int64_t x444 = -107928573LL;
static volatile int64_t t108 = -1LL;
static int64_t x455 = -1LL;
int8_t x463 = INT8_MIN;
int64_t x465 = 0LL;
static int8_t x467 = INT8_MIN;
static int64_t x472 = INT64_MIN;
int32_t x474 = INT32_MIN;
int64_t t113 = -3LL;
volatile int64_t x490 = 44893055504LL;
int32_t x492 = INT32_MIN;
volatile uint32_t t117 = 2798U;
int64_t x502 = -72638236173LL;
volatile int64_t t118 = -8051061LL;
static int16_t x514 = INT16_MIN;
int8_t x520 = 49;
uint64_t x526 = 27154631565248359LLU;
int8_t x527 = -1;
static uint64_t x536 = 14020657060LLU;
int8_t x540 = INT8_MIN;
volatile int64_t x573 = INT64_MAX;
int32_t x576 = INT32_MAX;
int64_t x586 = -1LL;
uint32_t x591 = 7U;
volatile int32_t x596 = INT32_MIN;
int64_t t141 = -16231723095956LL;
int16_t x603 = 1481;
int16_t x618 = INT16_MIN;
volatile int32_t t145 = -549;
volatile int64_t t147 = 1194291LL;
int8_t x643 = INT8_MIN;
uint32_t x648 = 6U;
volatile int16_t x651 = INT16_MAX;
int32_t x654 = -1;
int64_t t152 = 66LL;
volatile uint64_t t153 = 4708810372599270LLU;
static int64_t x662 = -1LL;
int16_t x665 = INT16_MIN;
int64_t x670 = -1LL;
int32_t x689 = INT32_MIN;
static volatile uint16_t x692 = 9U;
volatile int64_t t161 = -1LL;
uint64_t x697 = 1LLU;
int64_t x700 = -198LL;
uint64_t t163 = 18919903824368781LLU;
volatile int32_t t164 = -1696774;
int64_t x705 = -1LL;
volatile int64_t x726 = INT64_MIN;
int8_t x734 = INT8_MIN;
uint32_t t173 = 8278U;
static int64_t x749 = 2195324LL;
volatile int64_t t175 = -1632LL;
uint8_t x753 = 2U;
static volatile uint8_t x754 = 6U;
static int8_t x759 = -9;
volatile int32_t x769 = INT32_MAX;
int16_t x772 = INT16_MIN;
volatile int64_t t181 = -25997936993LL;
static volatile int16_t x783 = INT16_MIN;
static volatile int32_t t184 = 576;
static volatile int8_t x790 = INT8_MAX;
volatile uint16_t x794 = UINT16_MAX;
int64_t x798 = -1LL;
volatile int64_t t187 = 72187712072LL;
static int64_t x802 = INT64_MIN;
int64_t x804 = -113731585903738495LL;
int32_t x816 = INT32_MIN;
int64_t x819 = INT64_MIN;
volatile uint16_t x821 = UINT16_MAX;
volatile int16_t x823 = INT16_MIN;
static uint32_t t194 = 2486492U;
int64_t x832 = -351907366429993540LL;
volatile uint32_t x837 = 4339U;
static int32_t x840 = INT32_MIN;
volatile uint32_t x841 = UINT32_MAX;
int64_t x845 = INT64_MAX;


void f0(void) {
    	int64_t x1 = INT64_MAX;
	int8_t x3 = 15;
	int64_t x4 = 442548008LL;
	static volatile int64_t t0 = 2408892286842698LL;

    t0 = ((x1/x2)|(x3/x4));

    if (t0 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MAX;
	uint32_t x7 = 231221U;
	uint16_t x8 = UINT16_MAX;
	volatile uint32_t t1 = 1929402791U;

    t1 = ((x5/x6)|(x7/x8));

    if (t1 != 4236927199U) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x11 = INT16_MIN;
	int64_t x12 = 10010098401233814LL;

    t2 = ((x9/x10)|(x11/x12));

    if (t2 != -2147483647LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MAX;
	uint8_t x14 = 3U;
	int8_t x15 = -59;
	volatile int32_t t3 = -25924249;

    t3 = ((x13/x14)|(x15/x16));

    if (t3 != 715827882) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint8_t x17 = UINT8_MAX;
	int16_t x18 = 64;
	int16_t x19 = -11;
	volatile int8_t x20 = -1;
	int32_t t4 = -10210598;

    t4 = ((x17/x18)|(x19/x20));

    if (t4 != 11) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x23 = UINT64_MAX;
	static uint32_t x24 = 1033221922U;

    t5 = ((x21/x22)|(x23/x24));

    if (t5 != 162087683023LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	int32_t x26 = INT32_MAX;
	uint8_t x27 = 44U;
	int16_t x28 = 13;
	volatile int32_t t6 = 51598;

    t6 = ((x25/x26)|(x27/x28));

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x29 = INT16_MIN;
	volatile int16_t x30 = -1;
	uint8_t x31 = UINT8_MAX;
	volatile int32_t t7 = 148982;

    t7 = ((x29/x30)|(x31/x32));

    if (t7 != 33023) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = 69;
	uint32_t x34 = 5632U;
	int32_t x36 = -1;
	volatile uint32_t t8 = 114193110U;

    t8 = ((x33/x34)|(x35/x36));

    if (t8 != 4294967041U) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x38 = INT64_MAX;
	static uint32_t x40 = 59491910U;
	int64_t t9 = 275236283570607LL;

    t9 = ((x37/x38)|(x39/x40));

    if (t9 != 72LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = -1LL;
	static int8_t x43 = INT8_MIN;
	int64_t x44 = INT64_MAX;
	static volatile int64_t t10 = -976LL;

    t10 = ((x41/x42)|(x43/x44));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MAX;
	int16_t x46 = INT16_MIN;
	static uint8_t x47 = 97U;
	uint32_t x48 = 5115801U;
	static volatile uint32_t t11 = 360U;

    t11 = ((x45/x46)|(x47/x48));

    if (t11 != 4294901761U) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = 16804790468LL;
	int64_t x50 = INT64_MIN;
	uint16_t x51 = 6U;
	static int64_t x52 = INT64_MIN;
	static int64_t t12 = 2387077886LL;

    t12 = ((x49/x50)|(x51/x52));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x55 = 5U;
	uint32_t t13 = UINT32_MAX;

    t13 = ((x53/x54)|(x55/x56));

    if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x58 = -1;
	int32_t x59 = INT32_MAX;
	int8_t x60 = 1;
	volatile int32_t t14 = INT32_MAX;

    t14 = ((x57/x58)|(x59/x60));

    if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MIN;
	int8_t x62 = INT8_MIN;
	int16_t x63 = INT16_MIN;
	static int16_t x64 = INT16_MIN;
	volatile int32_t t15 = 3144168;

    t15 = ((x61/x62)|(x63/x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MAX;
	uint16_t x66 = UINT16_MAX;
	static volatile uint32_t t16 = 104046733U;

    t16 = ((x65/x66)|(x67/x68));

    if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MIN;
	static volatile int32_t x71 = -141175952;
	volatile int8_t x72 = INT8_MIN;
	int64_t t17 = -22LL;

    t17 = ((x69/x70)|(x71/x72));

    if (t17 != 281474977813593LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = 5U;
	uint8_t x74 = UINT8_MAX;
	static int32_t x75 = INT32_MAX;
	volatile int32_t t18 = -105653779;

    t18 = ((x73/x74)|(x75/x76));

    if (t18 != 4638193) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = -1;
	static int32_t x78 = INT32_MIN;
	int16_t x79 = -1;
	int32_t t19 = 45880;

    t19 = ((x77/x78)|(x79/x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = 7U;
	volatile int8_t x82 = INT8_MIN;
	int64_t x83 = -1LL;
	uint16_t x84 = UINT16_MAX;

    t20 = ((x81/x82)|(x83/x84));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = -7LL;
	int64_t x86 = -1LL;
	int16_t x87 = INT16_MIN;
	volatile int32_t x88 = 3;
	volatile int64_t t21 = 1828772438LL;

    t21 = ((x85/x86)|(x87/x88));

    if (t21 != -10921LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x89 = INT32_MAX;
	int8_t x90 = INT8_MAX;
	int8_t x91 = -1;
	volatile uint32_t x92 = UINT32_MAX;
	volatile uint32_t t22 = 68925453U;

    t22 = ((x89/x90)|(x91/x92));

    if (t22 != 16909321U) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = INT32_MAX;
	volatile uint64_t x95 = 1440270848630701489LLU;
	volatile int64_t x96 = INT64_MIN;

    t23 = ((x93/x94)|(x95/x96));

    if (t23 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x97 = -1LL;
	volatile int32_t x98 = INT32_MAX;
	uint8_t x99 = 36U;
	volatile int32_t x100 = INT32_MIN;
	int64_t t24 = -209773213LL;

    t24 = ((x97/x98)|(x99/x100));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x101 = UINT16_MAX;
	int32_t x103 = 2736;
	uint8_t x104 = UINT8_MAX;
	volatile int32_t t25 = -397;

    t25 = ((x101/x102)|(x103/x104));

    if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = -1;
	uint64_t x106 = 1266743470719298LLU;
	volatile uint8_t x107 = 1U;
	uint64_t x108 = 935912072258387815LLU;
	volatile uint64_t t26 = 4851953542807578LLU;

    t26 = ((x105/x106)|(x107/x108));

    if (t26 != 14562LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x110 = 18535184007117LL;
	uint16_t x111 = 2269U;
	int64_t x112 = INT64_MAX;

    t27 = ((x109/x110)|(x111/x112));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x115 = INT64_MIN;
	volatile int64_t t28 = 22812243LL;

    t28 = ((x113/x114)|(x115/x116));

    if (t28 != -4294967298LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x117 = 39;
	int64_t x118 = INT64_MIN;
	int32_t x119 = 9758;
	volatile int64_t x120 = -1LL;
	int64_t t29 = 591533451LL;

    t29 = ((x117/x118)|(x119/x120));

    if (t29 != -9758LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x122 = INT16_MAX;
	int32_t x124 = -2691;
	int32_t t30 = 0;

    t30 = ((x121/x122)|(x123/x124));

    if (t30 != 210) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x126 = INT8_MIN;
	int8_t x127 = -28;
	uint32_t x128 = UINT32_MAX;
	volatile int64_t t31 = -2855331719387LL;

    t31 = ((x125/x126)|(x127/x128));

    if (t31 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x130 = 995533955166LLU;
	uint16_t x131 = 6U;
	int32_t x132 = INT32_MIN;
	volatile uint64_t t32 = 20287810613912LLU;

    t32 = ((x129/x130)|(x131/x132));

    if (t32 != 18529497LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x133 = -1;
	int8_t x134 = -1;
	int16_t x135 = INT16_MIN;
	int8_t x136 = -1;
	int32_t t33 = -108;

    t33 = ((x133/x134)|(x135/x136));

    if (t33 != 32769) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x138 = -1;
	int32_t x139 = -2475836;
	int32_t x140 = -1;

    t34 = ((x137/x138)|(x139/x140));

    if (t34 != -3) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = -62;
	volatile int32_t t35 = -78298721;

    t35 = ((x141/x142)|(x143/x144));

    if (t35 != 39) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint8_t x145 = 63U;
	static int64_t x147 = INT64_MIN;
	uint64_t x148 = UINT64_MAX;
	uint64_t t36 = 498LLU;

    t36 = ((x145/x146)|(x147/x148));

    if (t36 != 18446744073709551553LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = 1769U;
	int64_t x150 = -1LL;
	static uint64_t x151 = UINT64_MAX;

    t37 = ((x149/x150)|(x151/x152));

    if (t37 != 18446744073709550047LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x153 = -1;
	int16_t x154 = INT16_MIN;
	uint8_t x155 = 4U;
	int32_t x156 = -1;
	volatile int32_t t38 = 5453;

    t38 = ((x153/x154)|(x155/x156));

    if (t38 != -4) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MAX;
	static uint32_t x158 = 14331U;
	int32_t x159 = -13687;
	volatile int64_t x160 = -9183980361777LL;
	static volatile int64_t t39 = -67LL;

    t39 = ((x157/x158)|(x159/x160));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x162 = 132270;
	static volatile int32_t x163 = INT32_MAX;

    t40 = ((x161/x162)|(x163/x164));

    if (t40 != -35LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x165 = 207236873129277866LL;
	static int64_t x168 = INT64_MIN;

    t41 = ((x165/x166)|(x167/x168));

    if (t41 != 1631786402592739LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = INT32_MIN;
	static int32_t x171 = -1;
	volatile int8_t x172 = -1;
	volatile int64_t t42 = -408223185798340150LL;

    t42 = ((x169/x170)|(x171/x172));

    if (t42 != -3609LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = 19811556LLU;
	static int32_t x175 = INT32_MAX;
	uint64_t t43 = 20504800688LLU;

    t43 = ((x173/x174)|(x175/x176));

    if (t43 != 18446744073700857351LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x177 = INT32_MIN;
	uint64_t x180 = UINT64_MAX;
	uint64_t t44 = UINT64_MAX;

    t44 = ((x177/x178)|(x179/x180));

    if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = -431LL;
	volatile int64_t x183 = -1LL;
	int64_t x184 = INT64_MIN;

    t45 = ((x181/x182)|(x183/x184));

    if (t45 != -5LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x185 = 1U;
	uint16_t x187 = 851U;
	uint8_t x188 = UINT8_MAX;
	int32_t t46 = 91;

    t46 = ((x185/x186)|(x187/x188));

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = -1;
	int8_t x191 = INT8_MAX;

    t47 = ((x189/x190)|(x191/x192));

    if (t47 != -127LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x193 = 5311378383LL;
	int32_t x194 = INT32_MIN;
	int16_t x195 = INT16_MAX;
	int8_t x196 = 1;
	volatile int64_t t48 = 538897LL;

    t48 = ((x193/x194)|(x195/x196));

    if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x197 = UINT8_MAX;
	static int16_t x198 = -51;
	int64_t x199 = 72941073482350258LL;
	volatile int8_t x200 = INT8_MIN;
	volatile int64_t t49 = -359540194954LL;

    t49 = ((x197/x198)|(x199/x200));

    if (t49 != -5LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x201 = -4;
	uint64_t x202 = 82602998025968357LLU;
	volatile uint16_t x203 = UINT16_MAX;
	uint64_t t50 = 44704LLU;

    t50 = ((x201/x202)|(x203/x204));

    if (t50 != 223LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x205 = INT8_MIN;
	int8_t x207 = 26;
	uint16_t x208 = 248U;
	static uint32_t t51 = 2U;

    t51 = ((x205/x206)|(x207/x208));

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x213 = INT16_MIN;
	static volatile int32_t x214 = 6961568;
	static int16_t x215 = INT16_MIN;
	uint32_t x216 = 3U;
	volatile uint32_t t52 = 22333753U;

    t52 = ((x213/x214)|(x215/x216));

    if (t52 != 1431644842U) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x218 = INT64_MAX;
	int8_t x219 = INT8_MAX;
	volatile int64_t t53 = 17937497443995059LL;

    t53 = ((x217/x218)|(x219/x220));

    if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x221 = 1U;
	int16_t x224 = -514;
	volatile int64_t t54 = 6664869978LL;

    t54 = ((x221/x222)|(x223/x224));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x225 = 60003349527LL;
	int8_t x227 = -1;
	volatile int64_t t55 = 3LL;

    t55 = ((x225/x226)|(x227/x228));

    if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x231 = UINT8_MAX;
	volatile int64_t x232 = -4610912860241281289LL;
	volatile int64_t t56 = -1802825461016LL;

    t56 = ((x229/x230)|(x231/x232));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint64_t x233 = 3819164LLU;
	uint8_t x234 = 113U;
	int32_t x235 = -1;
	uint64_t x236 = 1088175295618LLU;

    t57 = ((x233/x234)|(x235/x236));

    if (t57 != 16953021LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x237 = INT16_MIN;
	int32_t x238 = INT32_MIN;
	volatile int64_t x239 = 163744918311LL;
	static uint64_t t58 = 2LLU;

    t58 = ((x237/x238)|(x239/x240));

    if (t58 != 2872717865LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x241 = 47852678449908300LLU;
	int32_t x242 = INT32_MIN;
	uint64_t x243 = 8545LLU;
	int16_t x244 = -4;

    t59 = ((x241/x242)|(x243/x244));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x245 = UINT32_MAX;
	int32_t x246 = 27020;
	static int64_t x247 = -1LL;
	int8_t x248 = 13;

    t60 = ((x245/x246)|(x247/x248));

    if (t60 != 158955LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x254 = 14675;
	int16_t x255 = INT16_MIN;
	int8_t x256 = INT8_MAX;
	int32_t t61 = 139493;

    t61 = ((x253/x254)|(x255/x256));

    if (t61 != -258) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x257 = 93;
	uint64_t x258 = 34274648237LLU;
	int8_t x259 = 1;
	volatile uint32_t x260 = 5U;
	volatile uint64_t t62 = 22932510733386424LLU;

    t62 = ((x257/x258)|(x259/x260));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x262 = 917U;
	int32_t t63 = 10;

    t63 = ((x261/x262)|(x263/x264));

    if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x265 = 21U;
	uint64_t x266 = 27234LLU;
	static uint64_t x267 = UINT64_MAX;
	uint8_t x268 = 16U;

    t64 = ((x265/x266)|(x267/x268));

    if (t64 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x269 = UINT16_MAX;
	int16_t x270 = -1;
	uint32_t x271 = 96U;
	int32_t x272 = INT32_MIN;
	static uint32_t t65 = 331827804U;

    t65 = ((x269/x270)|(x271/x272));

    if (t65 != 4294901761U) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x273 = -1;
	volatile int8_t x274 = -1;
	uint64_t x275 = UINT64_MAX;
	uint8_t x276 = UINT8_MAX;
	volatile uint64_t t66 = 974209489303991LLU;

    t66 = ((x273/x274)|(x275/x276));

    if (t66 != 72340172838076673LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x277 = -15;
	volatile int8_t x279 = INT8_MAX;
	volatile int8_t x280 = 31;
	volatile uint32_t t67 = 2048U;

    t67 = ((x277/x278)|(x279/x280));

    if (t67 != 4U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x281 = UINT64_MAX;
	uint64_t x283 = 247969LLU;
	uint32_t x284 = 5U;
	volatile uint64_t t68 = 10870524775544LLU;

    t68 = ((x281/x282)|(x283/x284));

    if (t68 != 562967133864377LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x285 = 32;
	uint64_t x286 = UINT64_MAX;
	int32_t x287 = INT32_MAX;
	int32_t x288 = 3;
	volatile uint64_t t69 = 20799621850350LLU;

    t69 = ((x285/x286)|(x287/x288));

    if (t69 != 715827882LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x289 = INT64_MIN;
	int32_t x290 = INT32_MAX;
	int32_t x291 = -1599192;
	int32_t x292 = INT32_MIN;
	int64_t t70 = 3538LL;

    t70 = ((x289/x290)|(x291/x292));

    if (t70 != -4294967298LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x293 = 65U;
	uint64_t x294 = 124517LLU;
	int64_t x296 = 299554264LL;
	volatile uint64_t t71 = 13292976LLU;

    t71 = ((x293/x294)|(x295/x296));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x297 = 686U;
	uint64_t x298 = 2537LLU;
	volatile uint16_t x299 = 2279U;
	static volatile int8_t x300 = 1;

    t72 = ((x297/x298)|(x299/x300));

    if (t72 != 2279LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x301 = INT8_MAX;
	uint32_t x302 = 81048124U;
	int8_t x303 = INT8_MAX;
	volatile uint8_t x304 = UINT8_MAX;
	uint32_t t73 = 66843115U;

    t73 = ((x301/x302)|(x303/x304));

    if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x306 = 228830603;
	volatile int32_t x307 = INT32_MIN;
	volatile uint32_t t74 = 57133U;

    t74 = ((x305/x306)|(x307/x308));

    if (t74 != 15051U) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x310 = INT32_MIN;
	static int16_t x311 = INT16_MIN;
	int32_t t75 = 1;

    t75 = ((x309/x310)|(x311/x312));

    if (t75 != -10922) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x313 = INT8_MIN;
	uint16_t x314 = 3U;
	static int8_t x315 = 47;
	int8_t x316 = -3;

    t76 = ((x313/x314)|(x315/x316));

    if (t76 != -9) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x317 = 1U;
	int32_t x318 = -252388178;
	uint8_t x319 = 1U;
	int32_t x320 = INT32_MIN;
	int32_t t77 = -1;

    t77 = ((x317/x318)|(x319/x320));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x321 = -38;
	int64_t x322 = INT64_MIN;
	int16_t x323 = -3;
	int64_t t78 = 12508798335LL;

    t78 = ((x321/x322)|(x323/x324));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x325 = INT32_MIN;
	static volatile uint32_t x326 = UINT32_MAX;
	int16_t x327 = INT16_MIN;
	static int8_t x328 = 4;
	uint32_t t79 = 84653287U;

    t79 = ((x325/x326)|(x327/x328));

    if (t79 != 4294959104U) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x329 = INT16_MAX;
	static volatile int32_t x330 = -713138;
	int8_t x331 = INT8_MIN;
	uint32_t x332 = 45U;
	volatile uint32_t t80 = 37998392U;

    t80 = ((x329/x330)|(x331/x332));

    if (t80 != 95443714U) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x333 = INT64_MIN;
	uint8_t x334 = 7U;
	static uint64_t x336 = 106LLU;

    t81 = ((x333/x334)|(x335/x336));

    if (t81 != 17293501511573143543LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x337 = INT8_MIN;
	static volatile int64_t x338 = 1488437985LL;
	int8_t x339 = INT8_MAX;

    t82 = ((x337/x338)|(x339/x340));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x343 = INT16_MAX;
	uint32_t x344 = 7U;
	volatile uint32_t t83 = 3840U;

    t83 = ((x341/x342)|(x343/x344));

    if (t83 != 4681U) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x345 = INT32_MAX;
	uint64_t x346 = UINT64_MAX;
	int16_t x347 = 506;
	int16_t x348 = 48;
	volatile uint64_t t84 = 30884453496LLU;

    t84 = ((x345/x346)|(x347/x348));

    if (t84 != 10LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x349 = 5266126LLU;
	uint64_t x350 = UINT64_MAX;
	int16_t x351 = -1;
	int8_t x352 = INT8_MIN;

    t85 = ((x349/x350)|(x351/x352));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x353 = INT8_MAX;
	int32_t x355 = -1;
	volatile int64_t x356 = -427300384136809LL;
	int64_t t86 = 3147203907928LL;

    t86 = ((x353/x354)|(x355/x356));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x357 = INT64_MIN;
	int8_t x358 = INT8_MAX;
	static uint16_t x359 = UINT16_MAX;
	static volatile int64_t x360 = -1LL;

    t87 = ((x357/x358)|(x359/x360));

    if (t87 != -16513LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x365 = 1654626LL;
	int8_t x366 = 1;
	int64_t x367 = INT64_MIN;
	int64_t x368 = -506589335253LL;
	volatile int64_t t88 = 48281687LL;

    t88 = ((x365/x366)|(x367/x368));

    if (t88 != 18743154LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x370 = INT8_MIN;
	int8_t x371 = -1;

    t89 = ((x369/x370)|(x371/x372));

    if (t89 != 18761) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x373 = INT64_MIN;
	uint64_t x375 = 265170362166648099LLU;
	int16_t x376 = 7;
	uint64_t t90 = UINT64_MAX;

    t90 = ((x373/x374)|(x375/x376));

    if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x377 = UINT16_MAX;
	uint32_t x379 = 14618U;
	uint16_t x380 = 31U;
	volatile uint32_t t91 = 1419725U;

    t91 = ((x377/x378)|(x379/x380));

    if (t91 != 3551U) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x382 = INT8_MIN;
	static int16_t x383 = 10;
	static int64_t x384 = INT64_MIN;
	volatile int64_t t92 = 8039132961LL;

    t92 = ((x381/x382)|(x383/x384));

    if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x385 = -1;
	static int8_t x386 = INT8_MIN;
	uint16_t x387 = 24683U;

    t93 = ((x385/x386)|(x387/x388));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x389 = INT32_MIN;
	int32_t x391 = 415633777;
	static int32_t x392 = -25699;
	int32_t t94 = -399092025;

    t94 = ((x389/x390)|(x391/x392));

    if (t94 != -45) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x394 = INT16_MIN;
	static uint8_t x395 = 49U;
	int8_t x396 = INT8_MIN;
	volatile int32_t t95 = 213626;

    t95 = ((x393/x394)|(x395/x396));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x397 = -42;
	static uint32_t x398 = UINT32_MAX;
	int16_t x399 = INT16_MIN;
	int32_t x400 = 87;
	uint32_t t96 = 508812737U;

    t96 = ((x397/x398)|(x399/x400));

    if (t96 != 4294966920U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x401 = UINT16_MAX;
	volatile int32_t x403 = INT32_MAX;
	volatile int32_t t97 = -1892;

    t97 = ((x401/x402)|(x403/x404));

    if (t97 != 102261638) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x405 = 43050630468120LLU;
	volatile int8_t x406 = 10;
	volatile uint16_t x407 = UINT16_MAX;
	uint64_t t98 = UINT64_MAX;

    t98 = ((x405/x406)|(x407/x408));

    if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x410 = -1;
	uint16_t x411 = 1U;
	volatile int64_t x412 = INT64_MIN;

    t99 = ((x409/x410)|(x411/x412));

    if (t99 != -2147483647LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint16_t x413 = 6U;
	int32_t x414 = -1;
	int64_t x415 = -1080126LL;
	int64_t x416 = INT64_MIN;
	static volatile int64_t t100 = -3577077286337LL;

    t100 = ((x413/x414)|(x415/x416));

    if (t100 != -6LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x417 = INT32_MIN;
	int16_t x418 = INT16_MIN;
	static int64_t x419 = INT64_MIN;
	int32_t x420 = INT32_MIN;
	int64_t t101 = -25857244660547524LL;

    t101 = ((x417/x418)|(x419/x420));

    if (t101 != 4295032832LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x421 = INT32_MAX;
	static int16_t x422 = INT16_MIN;
	volatile int8_t x423 = 47;
	volatile int64_t x424 = INT64_MIN;
	volatile int64_t t102 = -14608618LL;

    t102 = ((x421/x422)|(x423/x424));

    if (t102 != -65535LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x425 = -1;
	int16_t x426 = 27;
	uint32_t x427 = 6511U;

    t103 = ((x425/x426)|(x427/x428));

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x430 = 2726382626953400504LL;
	int64_t x431 = INT64_MAX;
	int64_t x432 = INT64_MAX;

    t104 = ((x429/x430)|(x431/x432));

    if (t104 != 1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x433 = 225645977709378LLU;
	uint64_t x434 = 21193209451204LLU;
	int8_t x435 = INT8_MIN;
	volatile int8_t x436 = -1;

    t105 = ((x433/x434)|(x435/x436));

    if (t105 != 138LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x437 = -1;
	volatile int16_t x438 = 60;
	uint16_t x440 = 735U;
	static volatile int32_t t106 = 6895199;

    t106 = ((x437/x438)|(x439/x440));

    if (t106 != 89) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x441 = INT64_MIN;
	int16_t x442 = 2738;
	uint32_t x443 = 115769620U;
	volatile int64_t t107 = -99231892357241LL;

    t107 = ((x441/x442)|(x443/x444));

    if (t107 != -1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x445 = -15;
	static int16_t x446 = INT16_MIN;
	volatile int16_t x447 = INT16_MIN;
	volatile int64_t x448 = -71475103LL;

    t108 = ((x445/x446)|(x447/x448));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int64_t x453 = -1LL;
	static int16_t x454 = INT16_MIN;
	static uint8_t x456 = UINT8_MAX;
	static int64_t t109 = -598795088954182LL;

    t109 = ((x453/x454)|(x455/x456));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int8_t x461 = INT8_MIN;
	volatile int32_t x462 = INT32_MIN;
	static volatile int16_t x464 = 5;
	static volatile int32_t t110 = 1302353;

    t110 = ((x461/x462)|(x463/x464));

    if (t110 != -25) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x466 = 234340U;
	volatile int16_t x468 = -1;
	int64_t t111 = -43236807234718800LL;

    t111 = ((x465/x466)|(x467/x468));

    if (t111 != 128LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x469 = 13393178701LL;
	uint32_t x470 = 197984229U;
	uint16_t x471 = 272U;
	static volatile int64_t t112 = 276LL;

    t112 = ((x469/x470)|(x471/x472));

    if (t112 != 67LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x473 = -1LL;
	int16_t x475 = INT16_MAX;
	int8_t x476 = INT8_MAX;

    t113 = ((x473/x474)|(x475/x476));

    if (t113 != 258LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x477 = -4;
	volatile int8_t x478 = -25;
	uint8_t x479 = 3U;
	static int64_t x480 = -833536449799997LL;
	static int64_t t114 = -24000303309LL;

    t114 = ((x477/x478)|(x479/x480));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x481 = INT8_MIN;
	uint16_t x482 = 252U;
	volatile int8_t x483 = INT8_MAX;
	volatile int32_t x484 = INT32_MIN;
	int32_t t115 = 0;

    t115 = ((x481/x482)|(x483/x484));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x489 = INT32_MIN;
	int32_t x491 = INT32_MIN;
	volatile int64_t t116 = -232076500488179LL;

    t116 = ((x489/x490)|(x491/x492));

    if (t116 != 1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x493 = UINT32_MAX;
	int32_t x494 = INT32_MAX;
	static int32_t x495 = -1;
	static volatile int32_t x496 = INT32_MIN;

    t117 = ((x493/x494)|(x495/x496));

    if (t117 != 2U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x501 = 0U;
	int64_t x503 = INT64_MAX;
	int32_t x504 = -1;

    t118 = ((x501/x502)|(x503/x504));

    if (t118 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint8_t x505 = UINT8_MAX;
	int16_t x506 = -6;
	volatile uint8_t x507 = 0U;
	int8_t x508 = INT8_MIN;
	volatile int32_t t119 = -4172398;

    t119 = ((x505/x506)|(x507/x508));

    if (t119 != -42) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x509 = 1U;
	static int16_t x510 = INT16_MIN;
	uint8_t x511 = 1U;
	static int8_t x512 = INT8_MIN;
	int32_t t120 = 9051492;

    t120 = ((x509/x510)|(x511/x512));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x513 = INT32_MIN;
	int64_t x515 = INT64_MIN;
	uint16_t x516 = UINT16_MAX;
	int64_t t121 = -505743129074807LL;

    t121 = ((x513/x514)|(x515/x516));

    if (t121 != -140739635871744LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x517 = INT64_MIN;
	static int8_t x518 = INT8_MIN;
	int64_t x519 = -6443005424LL;
	volatile int64_t t122 = 3088657LL;

    t122 = ((x517/x518)|(x519/x520));

    if (t122 != -131489906LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x521 = -4898044164LL;
	uint16_t x522 = UINT16_MAX;
	static int64_t x523 = -1457819774145215LL;
	uint8_t x524 = 2U;
	int64_t t123 = 3705704475024101802LL;

    t123 = ((x521/x522)|(x523/x524));

    if (t123 != -8531LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int32_t x525 = -1;
	int64_t x528 = -30LL;
	uint64_t t124 = 898390LLU;

    t124 = ((x525/x526)|(x527/x528));

    if (t124 != 679LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x533 = INT16_MIN;
	int16_t x534 = -1;
	volatile uint16_t x535 = UINT16_MAX;
	volatile uint64_t t125 = 91LLU;

    t125 = ((x533/x534)|(x535/x536));

    if (t125 != 32768LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x537 = 10;
	uint8_t x538 = 1U;
	int16_t x539 = INT16_MIN;
	volatile int32_t t126 = -27084;

    t126 = ((x537/x538)|(x539/x540));

    if (t126 != 266) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x541 = 2090;
	volatile int32_t x542 = INT32_MIN;
	int16_t x543 = INT16_MIN;
	int16_t x544 = INT16_MIN;
	static int32_t t127 = 8022379;

    t127 = ((x541/x542)|(x543/x544));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x545 = -1;
	static int32_t x546 = 78361;
	int16_t x547 = INT16_MAX;
	static volatile int16_t x548 = -1;
	int32_t t128 = 73134;

    t128 = ((x545/x546)|(x547/x548));

    if (t128 != -32767) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x549 = INT64_MIN;
	uint64_t x550 = UINT64_MAX;
	int8_t x551 = INT8_MAX;
	int16_t x552 = -1;
	uint64_t t129 = 7124688037138869LLU;

    t129 = ((x549/x550)|(x551/x552));

    if (t129 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x553 = 1911091315U;
	static int8_t x554 = 9;
	volatile int8_t x555 = INT8_MIN;
	int32_t x556 = -21;
	uint32_t t130 = 1984222U;

    t130 = ((x553/x554)|(x555/x556));

    if (t130 != 212343479U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x557 = 3LLU;
	int8_t x558 = 1;
	int8_t x559 = INT8_MIN;
	int32_t x560 = INT32_MIN;
	volatile uint64_t t131 = 3697LLU;

    t131 = ((x557/x558)|(x559/x560));

    if (t131 != 3LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x561 = INT64_MIN;
	static uint32_t x562 = 11422055U;
	int8_t x563 = INT8_MIN;
	static uint8_t x564 = 71U;
	int64_t t132 = 494320532723LL;

    t132 = ((x561/x562)|(x563/x564));

    if (t132 != -1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x565 = -3;
	volatile uint16_t x566 = 20U;
	uint8_t x567 = 38U;
	volatile int64_t x568 = -9163765075LL;
	volatile int64_t t133 = -264471107086LL;

    t133 = ((x565/x566)|(x567/x568));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x569 = 7U;
	static int64_t x570 = -1LL;
	int16_t x571 = INT16_MIN;
	int32_t x572 = 414939761;
	int64_t t134 = -123712493185675LL;

    t134 = ((x569/x570)|(x571/x572));

    if (t134 != -7LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x574 = -5;
	uint32_t x575 = UINT32_MAX;
	static volatile int64_t t135 = 6873LL;

    t135 = ((x573/x574)|(x575/x576));

    if (t135 != -1844674407370955161LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x577 = INT8_MIN;
	volatile int64_t x578 = INT64_MAX;
	int64_t x579 = 61059689352LL;
	int32_t x580 = INT32_MAX;
	volatile int64_t t136 = -6433LL;

    t136 = ((x577/x578)|(x579/x580));

    if (t136 != 28LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x581 = 62LLU;
	uint8_t x582 = UINT8_MAX;
	uint32_t x583 = 814U;
	volatile int64_t x584 = 389926262055LL;
	static uint64_t t137 = 839686778LLU;

    t137 = ((x581/x582)|(x583/x584));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int64_t x585 = -393850LL;
	uint64_t x587 = 3227350392689683940LLU;
	volatile int32_t x588 = -1;
	volatile uint64_t t138 = 1420680LLU;

    t138 = ((x585/x586)|(x587/x588));

    if (t138 != 393850LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x589 = 2112034730303LL;
	int16_t x590 = INT16_MIN;
	int64_t x592 = INT64_MIN;
	static volatile int64_t t139 = -9569308LL;

    t139 = ((x589/x590)|(x591/x592));

    if (t139 != -64454184LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x593 = INT8_MIN;
	int8_t x594 = INT8_MIN;
	static int16_t x595 = INT16_MAX;
	static int32_t t140 = -40842898;

    t140 = ((x593/x594)|(x595/x596));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x597 = -322376LL;
	int64_t x598 = INT64_MAX;
	volatile uint16_t x599 = UINT16_MAX;
	uint16_t x600 = 107U;

    t141 = ((x597/x598)|(x599/x600));

    if (t141 != 612LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x601 = 7570562453104LLU;
	int64_t x602 = 165866126824590LL;
	volatile int32_t x604 = -1;
	static volatile uint64_t t142 = 430122LLU;

    t142 = ((x601/x602)|(x603/x604));

    if (t142 != 18446744073709550135LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x605 = INT16_MIN;
	int8_t x606 = -1;
	uint64_t x607 = 4008LLU;
	int64_t x608 = INT64_MAX;
	volatile uint64_t t143 = 383160LLU;

    t143 = ((x605/x606)|(x607/x608));

    if (t143 != 32768LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x613 = INT64_MIN;
	static volatile int64_t x614 = INT64_MIN;
	uint16_t x615 = 29U;
	uint8_t x616 = 9U;
	volatile int64_t t144 = -1305363897622LL;

    t144 = ((x613/x614)|(x615/x616));

    if (t144 != 3LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x617 = 2U;
	static uint16_t x619 = UINT16_MAX;
	int8_t x620 = 1;

    t145 = ((x617/x618)|(x619/x620));

    if (t145 != 65535) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x621 = 0;
	uint64_t x622 = 82LLU;
	int64_t x623 = 259LL;
	int64_t x624 = 219452734992LL;
	static volatile uint64_t t146 = 2018LLU;

    t146 = ((x621/x622)|(x623/x624));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x633 = -1;
	int8_t x634 = 22;
	int64_t x635 = -1LL;
	volatile int16_t x636 = INT16_MIN;

    t147 = ((x633/x634)|(x635/x636));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x637 = INT32_MAX;
	static int8_t x638 = INT8_MIN;
	uint64_t x639 = 24241930998880LLU;
	int8_t x640 = INT8_MAX;
	static volatile uint64_t t148 = 3674375452144653LLU;

    t148 = ((x637/x638)|(x639/x640));

    if (t148 != 18446744073699734415LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x641 = INT32_MIN;
	uint16_t x642 = 14U;
	int32_t x644 = INT32_MIN;
	int32_t t149 = -184;

    t149 = ((x641/x642)|(x643/x644));

    if (t149 != -153391689) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x645 = 1;
	static uint32_t x646 = UINT32_MAX;
	static int16_t x647 = INT16_MAX;
	uint32_t t150 = 82160529U;

    t150 = ((x645/x646)|(x647/x648));

    if (t150 != 5461U) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x649 = 898738LL;
	int8_t x650 = 52;
	int32_t x652 = -99151;
	int64_t t151 = -23514930092153348LL;

    t151 = ((x649/x650)|(x651/x652));

    if (t151 != 17283LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x653 = 2615895294250556LL;
	static uint32_t x655 = 7U;
	int16_t x656 = INT16_MAX;

    t152 = ((x653/x654)|(x655/x656));

    if (t152 != -2615895294250556LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x657 = 10120016LLU;
	int64_t x658 = INT64_MAX;
	static int64_t x659 = -1868914784469232076LL;
	int64_t x660 = INT64_MAX;

    t153 = ((x657/x658)|(x659/x660));

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x661 = -9;
	static int8_t x663 = 3;
	uint64_t x664 = 1131404217LLU;
	static uint64_t t154 = 7213593LLU;

    t154 = ((x661/x662)|(x663/x664));

    if (t154 != 9LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x666 = -1LL;
	uint32_t x667 = 99659U;
	int32_t x668 = INT32_MIN;
	int64_t t155 = -270583901247608LL;

    t155 = ((x665/x666)|(x667/x668));

    if (t155 != 32768LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x669 = 65576285023LLU;
	int64_t x671 = -1592472690653LL;
	int32_t x672 = INT32_MAX;
	uint64_t t156 = 6734616900LLU;

    t156 = ((x669/x670)|(x671/x672));

    if (t156 != 18446744073709550875LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x673 = INT32_MIN;
	static volatile int16_t x674 = INT16_MIN;
	int8_t x675 = -1;
	int8_t x676 = INT8_MIN;
	static volatile int32_t t157 = 18458635;

    t157 = ((x673/x674)|(x675/x676));

    if (t157 != 65536) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x677 = -1;
	int16_t x678 = INT16_MIN;
	volatile uint8_t x679 = 1U;
	uint16_t x680 = 24U;
	int32_t t158 = 1772164;

    t158 = ((x677/x678)|(x679/x680));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x681 = INT16_MIN;
	volatile uint16_t x682 = UINT16_MAX;
	int8_t x683 = -62;
	uint8_t x684 = 99U;
	static volatile int32_t t159 = 430755530;

    t159 = ((x681/x682)|(x683/x684));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x685 = UINT64_MAX;
	int8_t x686 = INT8_MIN;
	int32_t x687 = INT32_MIN;
	uint8_t x688 = 2U;
	volatile uint64_t t160 = 0LLU;

    t160 = ((x685/x686)|(x687/x688));

    if (t160 != 18446744072635809793LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x690 = 359042915030320022LL;
	int16_t x691 = INT16_MAX;

    t161 = ((x689/x690)|(x691/x692));

    if (t161 != 3640LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x693 = 172129224LLU;
	volatile uint32_t x694 = 9566U;
	uint32_t x695 = 28484994U;
	int8_t x696 = -1;
	uint64_t t162 = 456099418871047177LLU;

    t162 = ((x693/x694)|(x695/x696));

    if (t162 != 17993LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x698 = 1829U;
	uint64_t x699 = 4005670883424160662LLU;

    t163 = ((x697/x698)|(x699/x700));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x701 = -1;
	volatile uint8_t x702 = 1U;
	static int8_t x703 = -1;
	static int8_t x704 = INT8_MIN;

    t164 = ((x701/x702)|(x703/x704));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x706 = INT64_MIN;
	int64_t x707 = INT64_MIN;
	uint16_t x708 = UINT16_MAX;
	static volatile int64_t t165 = 11444937227494893LL;

    t165 = ((x705/x706)|(x707/x708));

    if (t165 != -140739635871744LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x709 = INT32_MIN;
	int16_t x710 = -3;
	uint32_t x711 = 24U;
	uint16_t x712 = UINT16_MAX;
	static volatile uint32_t t166 = 14259315U;

    t166 = ((x709/x710)|(x711/x712));

    if (t166 != 715827882U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x713 = 8U;
	int64_t x714 = -382221508LL;
	int64_t x715 = -5LL;
	static uint16_t x716 = UINT16_MAX;
	volatile int64_t t167 = -8497873948LL;

    t167 = ((x713/x714)|(x715/x716));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x717 = 248U;
	int8_t x718 = INT8_MAX;
	uint64_t x719 = 45820110023LLU;
	int64_t x720 = INT64_MAX;
	static uint64_t t168 = 32295646LLU;

    t168 = ((x717/x718)|(x719/x720));

    if (t168 != 1LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x721 = -1;
	volatile uint64_t x722 = UINT64_MAX;
	int8_t x723 = INT8_MAX;
	int32_t x724 = -1;
	volatile uint64_t t169 = 81094723097697LLU;

    t169 = ((x721/x722)|(x723/x724));

    if (t169 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x725 = -1126307917LL;
	uint32_t x727 = 1192U;
	int16_t x728 = INT16_MAX;
	static int64_t t170 = 1373585LL;

    t170 = ((x725/x726)|(x727/x728));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x729 = 948300563980026LLU;
	uint64_t x730 = 1609LLU;
	uint64_t x731 = 1103191386LLU;
	int32_t x732 = INT32_MIN;
	volatile uint64_t t171 = 1LLU;

    t171 = ((x729/x730)|(x731/x732));

    if (t171 != 589372631435LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x733 = INT64_MIN;
	int32_t x735 = -1;
	static int64_t x736 = -1LL;
	int64_t t172 = 2085385734688LL;

    t172 = ((x733/x734)|(x735/x736));

    if (t172 != 72057594037927937LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x737 = 9;
	int32_t x738 = INT32_MIN;
	volatile uint32_t x739 = UINT32_MAX;
	volatile int16_t x740 = INT16_MIN;

    t173 = ((x737/x738)|(x739/x740));

    if (t173 != 1U) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x741 = UINT32_MAX;
	int32_t x742 = -7;
	uint16_t x743 = 28878U;
	int16_t x744 = INT16_MAX;
	uint32_t t174 = 312429931U;

    t174 = ((x741/x742)|(x743/x744));

    if (t174 != 1U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x750 = 61U;
	int32_t x751 = -70;
	uint16_t x752 = UINT16_MAX;

    t175 = ((x749/x750)|(x751/x752));

    if (t175 != 35988LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x755 = 1322921728LL;
	int32_t x756 = -1;
	int64_t t176 = 1LL;

    t176 = ((x753/x754)|(x755/x756));

    if (t176 != -1322921728LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x757 = -89693408;
	volatile int32_t x758 = 24645302;
	int16_t x760 = INT16_MAX;
	static int32_t t177 = 2094800;

    t177 = ((x757/x758)|(x759/x760));

    if (t177 != -3) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x761 = UINT16_MAX;
	int32_t x762 = INT32_MIN;
	uint16_t x763 = 15099U;
	uint64_t x764 = 209381LLU;
	static uint64_t t178 = 119865678999186096LLU;

    t178 = ((x761/x762)|(x763/x764));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x765 = INT32_MIN;
	volatile uint16_t x766 = 35U;
	int64_t x767 = -1LL;
	static uint16_t x768 = 4655U;
	volatile int64_t t179 = 779143922LL;

    t179 = ((x765/x766)|(x767/x768));

    if (t179 != -61356675LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x770 = UINT64_MAX;
	static volatile int8_t x771 = INT8_MIN;
	uint64_t t180 = 1465061716217LLU;

    t180 = ((x769/x770)|(x771/x772));

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x773 = -813LL;
	int16_t x774 = INT16_MIN;
	int16_t x775 = -1;
	uint8_t x776 = 30U;

    t181 = ((x773/x774)|(x775/x776));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int8_t x777 = INT8_MIN;
	static volatile int32_t x778 = INT32_MIN;
	int32_t x779 = INT32_MIN;
	static uint8_t x780 = 3U;
	int32_t t182 = -95886;

    t182 = ((x777/x778)|(x779/x780));

    if (t182 != -715827882) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x781 = INT8_MIN;
	uint32_t x782 = UINT32_MAX;
	int16_t x784 = -1;
	uint32_t t183 = 1663206702U;

    t183 = ((x781/x782)|(x783/x784));

    if (t183 != 32768U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x785 = 43U;
	volatile uint16_t x786 = 1601U;
	uint8_t x787 = 3U;
	static volatile uint16_t x788 = 42U;

    t184 = ((x785/x786)|(x787/x788));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x789 = INT16_MIN;
	int32_t x791 = -303074199;
	static int8_t x792 = INT8_MAX;
	volatile int32_t t185 = 1708;

    t185 = ((x789/x790)|(x791/x792));

    if (t185 != -257) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint8_t x793 = 14U;
	volatile uint16_t x795 = 18583U;
	static int8_t x796 = INT8_MIN;
	int32_t t186 = -153079705;

    t186 = ((x793/x794)|(x795/x796));

    if (t186 != -145) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x797 = INT32_MIN;
	int64_t x799 = 8LL;
	int64_t x800 = 12844583223LL;

    t187 = ((x797/x798)|(x799/x800));

    if (t187 != 2147483648LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x801 = UINT32_MAX;
	int16_t x803 = -2135;
	volatile int64_t t188 = -147492432971225LL;

    t188 = ((x801/x802)|(x803/x804));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint16_t x805 = 679U;
	uint16_t x806 = 1U;
	uint8_t x807 = UINT8_MAX;
	int64_t x808 = INT64_MIN;
	int64_t t189 = -15LL;

    t189 = ((x805/x806)|(x807/x808));

    if (t189 != 679LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x809 = 33U;
	volatile int32_t x810 = -673179600;
	volatile uint32_t x811 = 41017747U;
	uint8_t x812 = UINT8_MAX;
	uint32_t t190 = 21630436U;

    t190 = ((x809/x810)|(x811/x812));

    if (t190 != 160853U) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x813 = INT16_MAX;
	uint64_t x814 = UINT64_MAX;
	int16_t x815 = 77;
	static uint64_t t191 = 290067303LLU;

    t191 = ((x813/x814)|(x815/x816));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x817 = 515614545U;
	uint32_t x818 = UINT32_MAX;
	volatile uint32_t x820 = UINT32_MAX;
	volatile int64_t t192 = 3598783LL;

    t192 = ((x817/x818)|(x819/x820));

    if (t192 != -2147483648LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x822 = -1;
	int64_t x824 = INT64_MAX;
	static volatile int64_t t193 = -7LL;

    t193 = ((x821/x822)|(x823/x824));

    if (t193 != -65535LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x825 = 1897U;
	int8_t x826 = INT8_MIN;
	uint32_t x827 = 7U;
	uint8_t x828 = 7U;

    t194 = ((x825/x826)|(x827/x828));

    if (t194 != 4294967283U) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x829 = -6174714225108488LL;
	uint8_t x830 = UINT8_MAX;
	static uint8_t x831 = UINT8_MAX;
	volatile int64_t t195 = -91178082LL;

    t195 = ((x829/x830)|(x831/x832));

    if (t195 != -24214565588660LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x833 = INT32_MIN;
	volatile int8_t x834 = -4;
	int16_t x835 = 28;
	uint64_t x836 = 13382LLU;
	volatile uint64_t t196 = 1510724266584539LLU;

    t196 = ((x833/x834)|(x835/x836));

    if (t196 != 536870912LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x838 = -1LL;
	int64_t x839 = -3987057055524884LL;
	volatile int64_t t197 = 10534922096770008LL;

    t197 = ((x837/x838)|(x839/x840));

    if (t197 != -145LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x842 = 443U;
	static volatile int16_t x843 = -1;
	uint8_t x844 = 55U;
	volatile uint32_t t198 = 0U;

    t198 = ((x841/x842)|(x843/x844));

    if (t198 != 9695185U) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x846 = INT64_MAX;
	int64_t x847 = 454368925090864LL;
	int32_t x848 = INT32_MAX;
	volatile int64_t t199 = -878LL;

    t199 = ((x845/x846)|(x847/x848));

    if (t199 != 211583LL) { NG(); } else { ; }
	
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

