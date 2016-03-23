
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

int16_t x3 = INT16_MAX;
int64_t x6 = -1LL;
volatile int64_t x7 = INT64_MIN;
static uint64_t x14 = 12287LLU;
int8_t x15 = -1;
static volatile int8_t x16 = INT8_MIN;
int32_t x18 = INT32_MIN;
int16_t x27 = -1;
volatile int32_t t6 = -1;
int64_t x29 = -1LL;
int32_t x30 = INT32_MIN;
static int8_t x32 = INT8_MIN;
volatile int64_t x34 = INT64_MIN;
volatile int8_t x39 = INT8_MIN;
uint64_t x45 = 179603LLU;
uint32_t x47 = UINT32_MAX;
static int32_t x57 = -4656098;
uint32_t x61 = 1052U;
int16_t x67 = -15186;
static volatile int32_t x74 = INT32_MIN;
volatile int64_t x75 = INT64_MIN;
uint16_t x76 = 5U;
static int16_t x77 = INT16_MAX;
static int8_t x83 = 0;
int8_t x85 = -37;
volatile int8_t x87 = -58;
int64_t x89 = INT64_MIN;
volatile uint16_t x92 = UINT16_MAX;
volatile int16_t x94 = INT16_MAX;
volatile int8_t x99 = 3;
uint16_t x108 = 5494U;
int16_t x113 = INT16_MIN;
int64_t x116 = INT64_MAX;
int8_t x117 = -2;
int8_t x125 = INT8_MIN;
static volatile int32_t t29 = 705851;
uint32_t x130 = 107053U;
volatile int64_t x134 = INT64_MAX;
uint8_t x136 = 66U;
int32_t x140 = 22562;
static uint8_t x142 = 3U;
static int32_t t33 = 176464;
uint32_t x157 = UINT32_MAX;
static uint16_t x162 = UINT16_MAX;
int8_t x170 = INT8_MIN;
int32_t x171 = INT32_MAX;
static int64_t x178 = INT64_MAX;
int64_t x179 = INT64_MIN;
uint8_t x188 = 1U;
uint64_t t44 = 146163211LLU;
static uint64_t t46 = 161LLU;
uint16_t x201 = 218U;
int32_t x211 = 34;
uint64_t x220 = 310611807LLU;
volatile uint16_t x221 = UINT16_MAX;
uint16_t x222 = UINT16_MAX;
volatile int32_t t52 = 237060185;
uint32_t x242 = 49078U;
uint32_t t56 = 265U;
int8_t x251 = -1;
uint8_t x262 = 97U;
int64_t x263 = INT64_MIN;
uint16_t x271 = 4U;
uint32_t x275 = 12201U;
volatile uint32_t t64 = 225074194U;
int16_t x280 = -1138;
int32_t x284 = 4130097;
uint8_t x288 = UINT8_MAX;
static int16_t x292 = -1;
static volatile uint32_t x295 = 22731U;
uint64_t x296 = 39315LLU;
volatile int64_t t70 = 428351LL;
uint32_t x301 = 495U;
uint8_t x311 = 38U;
uint32_t x316 = 29839U;
uint64_t x327 = UINT64_MAX;
volatile int8_t x328 = 36;
uint64_t t77 = 1985103571LLU;
static volatile uint64_t t78 = 1619089296545LLU;
int8_t x334 = -1;
static volatile int64_t t80 = 905391326937226703LL;
uint32_t x351 = 7264U;
volatile uint8_t x363 = 46U;
int32_t x369 = 9;
int16_t x372 = -1;
int64_t t90 = -144488143807LL;
volatile int64_t t92 = 3079819LL;
int32_t x390 = -1;
int32_t x393 = -39785694;
int32_t x401 = 115742;
uint8_t x403 = UINT8_MAX;
int64_t x404 = INT64_MAX;
uint8_t x408 = UINT8_MAX;
int16_t x410 = INT16_MIN;
volatile uint16_t x411 = UINT16_MAX;
int32_t x414 = -65119;
int32_t x419 = -1;
uint8_t x421 = UINT8_MAX;
volatile int8_t x426 = -20;
int32_t t102 = 348746;
volatile uint64_t x431 = 184848449978568LLU;
int8_t x432 = -1;
int32_t x435 = INT32_MAX;
int32_t x444 = 759056;
static uint64_t t107 = 15789248272477LLU;
uint64_t x449 = 29296368741LLU;
uint16_t x454 = UINT16_MAX;
volatile uint64_t t109 = 705623715893051521LLU;
int32_t x461 = -21;
volatile int32_t t111 = 16430158;
volatile int16_t x465 = 3;
int16_t x470 = INT16_MIN;
int64_t x471 = INT64_MIN;
int32_t x474 = 259408528;
int8_t x479 = 6;
volatile uint64_t x480 = 21LLU;
int64_t x490 = INT64_MIN;
int64_t t118 = -297519757LL;
volatile int8_t x497 = 31;
int64_t x499 = INT64_MAX;
uint8_t x500 = 9U;
static uint8_t x502 = 1U;
uint8_t x508 = UINT8_MAX;
int8_t x509 = INT8_MAX;
int16_t x510 = INT16_MIN;
static uint8_t x516 = 104U;
int8_t x525 = INT8_MAX;
volatile int8_t x531 = INT8_MIN;
volatile int32_t t128 = 452;
int32_t x549 = 7;
int16_t x552 = -1;
uint16_t x558 = 119U;
int32_t x561 = -749794;
static uint32_t x565 = 14U;
uint16_t x568 = UINT16_MAX;
int16_t x569 = INT16_MAX;
int16_t x570 = INT16_MIN;
volatile uint64_t t134 = 152101LLU;
uint8_t x574 = 79U;
uint64_t x579 = UINT64_MAX;
int64_t t137 = 4351024478303991LL;
static volatile int64_t x585 = INT64_MIN;
uint64_t t138 = 16206847816616139LLU;
int64_t x589 = INT64_MIN;
static int16_t x603 = INT16_MAX;
int32_t t142 = -9;
static uint32_t x607 = 66545010U;
int8_t x608 = -1;
volatile uint64_t t144 = 203976046730420003LLU;
uint16_t x614 = 9973U;
int8_t x617 = INT8_MAX;
int8_t x618 = INT8_MIN;
int8_t x619 = INT8_MAX;
static volatile int64_t x627 = INT64_MIN;
uint32_t x630 = 292U;
uint64_t x640 = 44467224761LLU;
uint16_t x644 = UINT16_MAX;
uint16_t x649 = UINT16_MAX;
volatile int64_t x654 = INT64_MIN;
static uint32_t x655 = 104471428U;
uint8_t x662 = UINT8_MAX;
static volatile int32_t t155 = -158315;
int16_t x673 = INT16_MAX;
int16_t x678 = 6;
int16_t x685 = INT16_MIN;
int64_t x689 = -1LL;
int32_t x697 = -1;
int32_t x699 = 206128;
int8_t x702 = 1;
volatile int32_t t165 = 474506378;
int8_t x705 = 13;
volatile int32_t x707 = 13606;
volatile int16_t x709 = INT16_MIN;
uint32_t x718 = UINT32_MAX;
int16_t x726 = INT16_MIN;
int8_t x728 = 1;
volatile int64_t t171 = -5LL;
int16_t x730 = 1;
int32_t t172 = -223133;
uint32_t x733 = UINT32_MAX;
volatile int16_t x735 = -18;
int16_t x736 = INT16_MIN;
volatile int64_t x738 = INT64_MIN;
int64_t x741 = 1LL;
static uint64_t x747 = UINT64_MAX;
int64_t x753 = 2425109725504LL;
static uint32_t x760 = UINT32_MAX;
int32_t x772 = -1;
int64_t x776 = -16567647087954262LL;
volatile int16_t x778 = INT16_MAX;
uint16_t x780 = 1U;
volatile int64_t t184 = 5167392935LL;
volatile uint16_t x781 = 2U;
uint64_t x783 = 2LLU;
int64_t x786 = -54103938115LL;
static int64_t t186 = -2072759LL;
int64_t x793 = INT64_MIN;
static volatile int8_t x796 = -14;
uint32_t x797 = 381060618U;
int32_t x800 = -1;
volatile uint32_t t189 = 79875401U;
uint32_t x806 = UINT32_MAX;
int32_t x811 = INT32_MIN;
uint32_t x824 = 8948U;
volatile uint32_t t195 = 5U;
int16_t x825 = INT16_MIN;
int16_t x829 = INT16_MIN;
volatile uint64_t t198 = 1153281846LLU;
volatile int64_t t199 = -18684LL;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	int8_t x2 = -1;
	uint64_t x4 = 13531321608891LLU;
	uint64_t t0 = 17953560916LLU;

    t0 = ((x1%x2)%(x3|x4));

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = 306655459;
	uint32_t x8 = 993U;
	static volatile int64_t t1 = -881304765LL;

    t1 = ((x5%x6)%(x7|x8));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 3U;
	static volatile uint8_t x10 = 81U;
	static int64_t x11 = INT64_MAX;
	static uint16_t x12 = 211U;
	volatile int64_t t2 = 4LL;

    t2 = ((x9%x10)%(x11|x12));

    if (t2 != 3LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 3950U;
	volatile uint64_t t3 = 9LLU;

    t3 = ((x13%x14)%(x15|x16));

    if (t3 != 3950LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -1;
	int32_t x19 = INT32_MIN;
	uint32_t x20 = 1472251606U;
	static uint32_t t4 = 1251188U;

    t4 = ((x17%x18)%(x19|x20));

    if (t4 != 675232041U) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -1LL;
	int16_t x22 = -590;
	volatile int16_t x23 = -42;
	volatile uint16_t x24 = UINT16_MAX;
	int64_t t5 = -18808290977144LL;

    t5 = ((x21%x22)%(x23|x24));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = UINT8_MAX;
	volatile int32_t x26 = INT32_MAX;
	int16_t x28 = INT16_MAX;

    t6 = ((x25%x26)%(x27|x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x31 = INT8_MIN;
	int64_t t7 = -69561302917062LL;

    t7 = ((x29%x30)%(x31|x32));

    if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x33 = 13243318721LL;
	int16_t x35 = -11;
	int64_t x36 = 0LL;
	volatile int64_t t8 = 441574405802LL;

    t8 = ((x33%x34)%(x35|x36));

    if (t8 != 6LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x37 = 0;
	int32_t x38 = INT32_MIN;
	uint64_t x40 = 45088787086LLU;
	static uint64_t t9 = 724LLU;

    t9 = ((x37%x38)%(x39|x40));

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x46 = 120U;
	int8_t x48 = INT8_MIN;
	uint64_t t10 = 63644817816LLU;

    t10 = ((x45%x46)%(x47|x48));

    if (t10 != 83LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x49 = INT16_MAX;
	int64_t x50 = -163764LL;
	int64_t x51 = INT64_MIN;
	static int16_t x52 = -1;
	int64_t t11 = -83279539048LL;

    t11 = ((x49%x50)%(x51|x52));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x53 = 735311U;
	int64_t x54 = INT64_MIN;
	static uint64_t x55 = 184LLU;
	static uint8_t x56 = 88U;
	volatile uint64_t t12 = 62502594064273LLU;

    t12 = ((x53%x54)%(x55|x56));

    if (t12 != 239LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x58 = -43161619295110674LL;
	int64_t x59 = 1210447576616LL;
	static volatile int64_t x60 = INT64_MIN;
	int64_t t13 = 71132099115789LL;

    t13 = ((x57%x58)%(x59|x60));

    if (t13 != -4656098LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x62 = INT8_MAX;
	static volatile uint32_t x63 = 27743974U;
	static uint8_t x64 = 0U;
	volatile uint32_t t14 = 1403U;

    t14 = ((x61%x62)%(x63|x64));

    if (t14 != 36U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x65 = 454U;
	volatile int8_t x66 = -1;
	static int32_t x68 = -16366;
	uint32_t t15 = 99186U;

    t15 = ((x65%x66)%(x67|x68));

    if (t15 != 454U) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x69 = INT32_MIN;
	uint8_t x70 = 5U;
	int16_t x71 = INT16_MIN;
	volatile int64_t x72 = -16370LL;
	int64_t t16 = -40115478641095LL;

    t16 = ((x69%x70)%(x71|x72));

    if (t16 != -3LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x73 = 0U;
	volatile int64_t t17 = -334349134074005LL;

    t17 = ((x73%x74)%(x75|x76));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x78 = 36964116LLU;
	volatile uint8_t x79 = 80U;
	int32_t x80 = INT32_MIN;
	volatile uint64_t t18 = 118158613078434LLU;

    t18 = ((x77%x78)%(x79|x80));

    if (t18 != 32767LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x81 = 10U;
	int16_t x82 = INT16_MAX;
	static int16_t x84 = INT16_MIN;
	int32_t t19 = 201;

    t19 = ((x81%x82)%(x83|x84));

    if (t19 != 10) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x86 = INT64_MIN;
	uint64_t x88 = 53300985051LLU;
	static uint64_t t20 = 33332994984639LLU;

    t20 = ((x85%x86)%(x87|x88));

    if (t20 != 18446744073709551579LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint64_t x90 = 4137316621972185LLU;
	int64_t x91 = -3563852606758216762LL;
	uint64_t t21 = 83630LLU;

    t21 = ((x89%x90)%(x91|x92));

    if (t21 != 1293286478775443LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x93 = -1;
	int16_t x95 = -371;
	int64_t x96 = -118257LL;
	static volatile int64_t t22 = -4376341073316332234LL;

    t22 = ((x93%x94)%(x95|x96));

    if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x97 = -1LL;
	int16_t x98 = -6;
	int16_t x100 = -1;
	static int64_t t23 = -298LL;

    t23 = ((x97%x98)%(x99|x100));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x105 = 190565365LL;
	uint16_t x106 = UINT16_MAX;
	uint64_t x107 = 4493335422LLU;
	uint64_t t24 = 18500576070381LLU;

    t24 = ((x105%x106)%(x107|x108));

    if (t24 != 55120LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint32_t x109 = 686213U;
	uint64_t x110 = 709139709LLU;
	uint16_t x111 = 866U;
	volatile int16_t x112 = INT16_MIN;
	static volatile uint64_t t25 = 5563803LLU;

    t25 = ((x109%x110)%(x111|x112));

    if (t25 != 686213LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x114 = INT32_MIN;
	int8_t x115 = INT8_MIN;
	int64_t t26 = -518902LL;

    t26 = ((x113%x114)%(x115|x116));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x118 = 6U;
	int8_t x119 = -1;
	static uint32_t x120 = 3328U;
	uint32_t t27 = 14483730U;

    t27 = ((x117%x118)%(x119|x120));

    if (t27 != 4294967294U) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x121 = INT32_MAX;
	int8_t x122 = -1;
	int64_t x123 = -8654LL;
	static volatile uint64_t x124 = 15687LLU;
	static volatile uint64_t t28 = 27185028326LLU;

    t28 = ((x121%x122)%(x123|x124));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x126 = 36U;
	int8_t x127 = -1;
	static uint8_t x128 = 6U;

    t29 = ((x125%x126)%(x127|x128));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int16_t x129 = -1;
	static int32_t x131 = -1;
	uint8_t x132 = UINT8_MAX;
	uint32_t t30 = 6490542U;

    t30 = ((x129%x130)%(x131|x132));

    if (t30 != 935U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x133 = 384U;
	static int64_t x135 = -62796LL;
	int64_t t31 = -595125135243073051LL;

    t31 = ((x133%x134)%(x135|x136));

    if (t31 != 384LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x137 = INT8_MIN;
	static uint32_t x138 = 84798147U;
	uint32_t x139 = 2466646U;
	volatile uint32_t t32 = 1U;

    t32 = ((x137%x138)%(x139|x140));

    if (t32 != 297286U) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x141 = INT16_MAX;
	volatile int16_t x143 = INT16_MAX;
	int32_t x144 = -761865;

    t33 = ((x141%x142)%(x143|x144));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x145 = UINT32_MAX;
	int64_t x146 = 8279819LL;
	volatile uint64_t x147 = UINT64_MAX;
	int32_t x148 = INT32_MIN;
	volatile uint64_t t34 = 4716482612102223LLU;

    t34 = ((x145%x146)%(x147|x148));

    if (t34 != 6021053LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x153 = UINT64_MAX;
	uint8_t x154 = 1U;
	uint64_t x155 = 181187763337LLU;
	int8_t x156 = INT8_MAX;
	static volatile uint64_t t35 = 64206211259235145LLU;

    t35 = ((x153%x154)%(x155|x156));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x158 = INT32_MIN;
	uint8_t x159 = 20U;
	static int64_t x160 = INT64_MIN;
	volatile int64_t t36 = 3675111420654004737LL;

    t36 = ((x157%x158)%(x159|x160));

    if (t36 != 2147483647LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x161 = INT8_MIN;
	int64_t x163 = -1LL;
	int8_t x164 = 2;
	volatile int64_t t37 = -3LL;

    t37 = ((x161%x162)%(x163|x164));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x165 = INT8_MAX;
	volatile uint32_t x166 = 513U;
	volatile int16_t x167 = -1;
	uint16_t x168 = UINT16_MAX;
	volatile uint32_t t38 = 31138U;

    t38 = ((x165%x166)%(x167|x168));

    if (t38 != 127U) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x169 = 796280772424LL;
	int32_t x172 = -456541;
	int64_t t39 = 254LL;

    t39 = ((x169%x170)%(x171|x172));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int32_t x173 = INT32_MAX;
	static volatile int64_t x174 = -1LL;
	int8_t x175 = -1;
	int64_t x176 = 341216160LL;
	int64_t t40 = 8434029310LL;

    t40 = ((x173%x174)%(x175|x176));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x177 = 2;
	static uint32_t x180 = UINT32_MAX;
	int64_t t41 = 137974221370988LL;

    t41 = ((x177%x178)%(x179|x180));

    if (t41 != 2LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int64_t x181 = -2469324660043LL;
	int64_t x182 = INT64_MIN;
	int64_t x183 = -2999310LL;
	volatile int32_t x184 = -25;
	volatile int64_t t42 = -42500LL;

    t42 = ((x181%x182)%(x183|x184));

    if (t42 != -4LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x185 = UINT16_MAX;
	int8_t x186 = INT8_MIN;
	static volatile int64_t x187 = 897554330994LL;
	static int64_t t43 = 119079433LL;

    t43 = ((x185%x186)%(x187|x188));

    if (t43 != 127LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x189 = INT64_MIN;
	uint64_t x190 = UINT64_MAX;
	volatile uint16_t x191 = 30085U;
	uint64_t x192 = 7033LLU;

    t44 = ((x189%x190)%(x191|x192));

    if (t44 != 648LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x193 = INT64_MAX;
	static int32_t x194 = 907;
	static int64_t x195 = 23290602398207411LL;
	int16_t x196 = INT16_MAX;
	volatile int64_t t45 = 54229537107923LL;

    t45 = ((x193%x194)%(x195|x196));

    if (t45 != 742LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x197 = INT64_MIN;
	int32_t x198 = INT32_MIN;
	uint64_t x199 = 12845682885518LLU;
	uint32_t x200 = 16U;

    t46 = ((x197%x198)%(x199|x200));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x202 = 32810088LLU;
	uint64_t x203 = 16736857567192988LLU;
	static volatile int64_t x204 = 287LL;
	volatile uint64_t t47 = 39554879004037490LLU;

    t47 = ((x201%x202)%(x203|x204));

    if (t47 != 218LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x209 = -1LL;
	int8_t x210 = INT8_MIN;
	static uint8_t x212 = 0U;
	static int64_t t48 = 1LL;

    t48 = ((x209%x210)%(x211|x212));

    if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x213 = 7U;
	uint64_t x214 = UINT64_MAX;
	static uint16_t x215 = 5233U;
	static volatile uint8_t x216 = 1U;
	uint64_t t49 = 14104349558LLU;

    t49 = ((x213%x214)%(x215|x216));

    if (t49 != 7LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x217 = 1;
	static int64_t x218 = -310LL;
	int32_t x219 = -1;
	volatile uint64_t t50 = 74475366693LLU;

    t50 = ((x217%x218)%(x219|x220));

    if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x223 = INT32_MIN;
	int16_t x224 = INT16_MIN;
	static int32_t t51 = 89429751;

    t51 = ((x221%x222)%(x223|x224));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x225 = -35;
	uint16_t x226 = UINT16_MAX;
	int16_t x227 = 3477;
	uint16_t x228 = UINT16_MAX;

    t52 = ((x225%x226)%(x227|x228));

    if (t52 != -35) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x229 = INT8_MIN;
	uint32_t x230 = 220U;
	int32_t x231 = 45199510;
	static int32_t x232 = 0;
	uint32_t t53 = 3467U;

    t53 = ((x229%x230)%(x231|x232));

    if (t53 != 8U) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x233 = INT8_MIN;
	volatile int64_t x234 = INT64_MIN;
	uint64_t x235 = 1012762210038913722LLU;
	int32_t x236 = -1365;
	volatile uint64_t t54 = 308081245LLU;

    t54 = ((x233%x234)%(x235|x236));

    if (t54 != 1221LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x237 = -1;
	static int32_t x238 = INT32_MIN;
	int8_t x239 = INT8_MIN;
	uint8_t x240 = 3U;
	int32_t t55 = -150378;

    t55 = ((x237%x238)%(x239|x240));

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x241 = 167140130U;
	static int16_t x243 = 14;
	static int16_t x244 = INT16_MIN;

    t56 = ((x241%x242)%(x243|x244));

    if (t56 != 29540U) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x245 = UINT8_MAX;
	uint32_t x246 = UINT32_MAX;
	int16_t x247 = 43;
	int8_t x248 = -1;
	uint32_t t57 = 794U;

    t57 = ((x245%x246)%(x247|x248));

    if (t57 != 255U) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x249 = 1;
	static volatile int16_t x250 = 3165;
	static int8_t x252 = -1;
	volatile int32_t t58 = 50695;

    t58 = ((x249%x250)%(x251|x252));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x253 = UINT16_MAX;
	uint16_t x254 = UINT16_MAX;
	int8_t x255 = 31;
	uint32_t x256 = 4U;
	uint32_t t59 = 25U;

    t59 = ((x253%x254)%(x255|x256));

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x257 = -1LL;
	int8_t x258 = INT8_MIN;
	int64_t x259 = INT64_MIN;
	static int64_t x260 = -69010LL;
	int64_t t60 = -72LL;

    t60 = ((x257%x258)%(x259|x260));

    if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x261 = 19U;
	uint32_t x264 = UINT32_MAX;
	static volatile int64_t t61 = -1LL;

    t61 = ((x261%x262)%(x263|x264));

    if (t61 != 19LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x265 = INT64_MIN;
	uint32_t x266 = 3734927U;
	volatile uint32_t x267 = 10638U;
	volatile uint8_t x268 = UINT8_MAX;
	static int64_t t62 = -53546962313920594LL;

    t62 = ((x265%x266)%(x267|x268));

    if (t62 != -2913LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x269 = UINT32_MAX;
	volatile int64_t x270 = -1LL;
	static uint32_t x272 = 2284410U;
	volatile int64_t t63 = -4311880395698861547LL;

    t63 = ((x269%x270)%(x271|x272));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x273 = 0U;
	uint32_t x274 = 47656U;
	uint32_t x276 = 3U;

    t64 = ((x273%x274)%(x275|x276));

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x277 = INT16_MAX;
	int32_t x278 = -1;
	int16_t x279 = -1;
	int32_t t65 = -819;

    t65 = ((x277%x278)%(x279|x280));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x281 = INT16_MAX;
	int64_t x282 = -17LL;
	int32_t x283 = INT32_MIN;
	int64_t t66 = -5885841206453517LL;

    t66 = ((x281%x282)%(x283|x284));

    if (t66 != 8LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x285 = -367;
	uint8_t x286 = UINT8_MAX;
	int8_t x287 = INT8_MIN;
	volatile int32_t t67 = -2729;

    t67 = ((x285%x286)%(x287|x288));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x289 = 7219;
	volatile int32_t x290 = INT32_MAX;
	volatile uint64_t x291 = 1588LLU;
	uint64_t t68 = 1111562474370308LLU;

    t68 = ((x289%x290)%(x291|x292));

    if (t68 != 7219LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x293 = INT8_MIN;
	static int8_t x294 = INT8_MIN;
	volatile uint64_t t69 = 515429908629785LLU;

    t69 = ((x293%x294)%(x295|x296));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x297 = INT16_MIN;
	volatile int32_t x298 = 55101381;
	int16_t x299 = -1;
	volatile int64_t x300 = INT64_MIN;

    t70 = ((x297%x298)%(x299|x300));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x302 = 172;
	int8_t x303 = 0;
	static int32_t x304 = 616538403;
	volatile uint32_t t71 = 8U;

    t71 = ((x301%x302)%(x303|x304));

    if (t71 != 151U) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x305 = INT64_MIN;
	uint32_t x306 = UINT32_MAX;
	uint8_t x307 = UINT8_MAX;
	int64_t x308 = INT64_MIN;
	volatile int64_t t72 = -3982154155591LL;

    t72 = ((x305%x306)%(x307|x308));

    if (t72 != -2147483648LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x309 = -1;
	int64_t x310 = -6909430003LL;
	int32_t x312 = -1;
	static int64_t t73 = -514142409674178LL;

    t73 = ((x309%x310)%(x311|x312));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x313 = INT64_MIN;
	uint32_t x314 = 43935U;
	static int32_t x315 = INT32_MAX;
	volatile int64_t t74 = -215558863536295900LL;

    t74 = ((x313%x314)%(x315|x316));

    if (t74 != -39278LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x317 = UINT8_MAX;
	uint64_t x318 = 480769311032035LLU;
	int64_t x319 = -1LL;
	uint64_t x320 = 3LLU;
	volatile uint64_t t75 = 4045894514LLU;

    t75 = ((x317%x318)%(x319|x320));

    if (t75 != 255LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x321 = INT32_MAX;
	int64_t x322 = INT64_MIN;
	int16_t x323 = -8;
	int16_t x324 = INT16_MAX;
	static int64_t t76 = -3424956903911986LL;

    t76 = ((x321%x322)%(x323|x324));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x325 = -4336;
	static int32_t x326 = -1;

    t77 = ((x325%x326)%(x327|x328));

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x329 = -1;
	int8_t x330 = -1;
	uint8_t x331 = UINT8_MAX;
	uint64_t x332 = 149LLU;

    t78 = ((x329%x330)%(x331|x332));

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x333 = INT64_MAX;
	uint32_t x335 = UINT32_MAX;
	volatile int32_t x336 = INT32_MIN;
	static volatile int64_t t79 = -981310752LL;

    t79 = ((x333%x334)%(x335|x336));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x337 = INT16_MIN;
	uint8_t x338 = UINT8_MAX;
	static int16_t x339 = 432;
	int64_t x340 = 1032244776LL;

    t80 = ((x337%x338)%(x339|x340));

    if (t80 != -128LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x341 = INT16_MAX;
	uint8_t x342 = 14U;
	uint16_t x343 = 2U;
	uint8_t x344 = 1U;
	volatile int32_t t81 = -1;

    t81 = ((x341%x342)%(x343|x344));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x345 = INT8_MAX;
	int64_t x346 = INT64_MIN;
	uint32_t x347 = 160214499U;
	int8_t x348 = INT8_MIN;
	volatile int64_t t82 = -266448761526LL;

    t82 = ((x345%x346)%(x347|x348));

    if (t82 != 127LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x349 = INT64_MIN;
	int8_t x350 = INT8_MIN;
	int16_t x352 = 0;
	volatile int64_t t83 = 74LL;

    t83 = ((x349%x350)%(x351|x352));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x353 = 3;
	static int8_t x354 = 5;
	uint16_t x355 = 0U;
	volatile int64_t x356 = INT64_MIN;
	int64_t t84 = 80473400LL;

    t84 = ((x353%x354)%(x355|x356));

    if (t84 != 3LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x357 = UINT64_MAX;
	uint16_t x358 = UINT16_MAX;
	int16_t x359 = -5;
	volatile uint16_t x360 = 5948U;
	volatile uint64_t t85 = 11711533418634710LLU;

    t85 = ((x357%x358)%(x359|x360));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x361 = INT8_MIN;
	int8_t x362 = INT8_MIN;
	static int8_t x364 = -46;
	volatile int32_t t86 = 30;

    t86 = ((x361%x362)%(x363|x364));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x365 = INT64_MAX;
	int16_t x366 = INT16_MIN;
	int32_t x367 = -3987;
	int8_t x368 = -1;
	int64_t t87 = -5802LL;

    t87 = ((x365%x366)%(x367|x368));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x370 = INT64_MAX;
	static int32_t x371 = -140367;
	static int64_t t88 = 4169694LL;

    t88 = ((x369%x370)%(x371|x372));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x373 = INT16_MIN;
	static volatile int16_t x374 = INT16_MIN;
	uint32_t x375 = 23U;
	int16_t x376 = INT16_MAX;
	uint32_t t89 = 400U;

    t89 = ((x373%x374)%(x375|x376));

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x377 = INT8_MIN;
	static volatile uint8_t x378 = UINT8_MAX;
	uint16_t x379 = UINT16_MAX;
	volatile int64_t x380 = 22657486997700491LL;

    t90 = ((x377%x378)%(x379|x380));

    if (t90 != -128LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x381 = -10255418;
	int64_t x382 = INT64_MIN;
	uint8_t x383 = UINT8_MAX;
	static int16_t x384 = -1;
	volatile int64_t t91 = 67230569256LL;

    t91 = ((x381%x382)%(x383|x384));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x385 = -1LL;
	int32_t x386 = -28;
	int16_t x387 = -2300;
	volatile uint32_t x388 = UINT32_MAX;

    t92 = ((x385%x386)%(x387|x388));

    if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x389 = 5250206348LLU;
	static int32_t x391 = -1;
	int64_t x392 = INT64_MAX;
	volatile uint64_t t93 = 2127LLU;

    t93 = ((x389%x390)%(x391|x392));

    if (t93 != 5250206348LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x394 = UINT8_MAX;
	volatile int32_t x395 = INT32_MIN;
	int16_t x396 = INT16_MAX;
	int32_t t94 = 113;

    t94 = ((x393%x394)%(x395|x396));

    if (t94 != -84) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x397 = INT16_MIN;
	int32_t x398 = 786825;
	int64_t x399 = INT64_MIN;
	uint16_t x400 = 54U;
	int64_t t95 = -392749LL;

    t95 = ((x397%x398)%(x399|x400));

    if (t95 != -32768LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x402 = -1;
	volatile int64_t t96 = 39846602LL;

    t96 = ((x401%x402)%(x403|x404));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x405 = 297;
	uint32_t x406 = 239475U;
	uint64_t x407 = 2606773905050107750LLU;
	static volatile uint64_t t97 = 240259LLU;

    t97 = ((x405%x406)%(x407|x408));

    if (t97 != 297LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x409 = -1LL;
	uint8_t x412 = 42U;
	static volatile int64_t t98 = 1244784859054LL;

    t98 = ((x409%x410)%(x411|x412));

    if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x413 = 1057296047U;
	static uint8_t x415 = 10U;
	uint16_t x416 = 13641U;
	volatile uint32_t t99 = 1633077U;

    t99 = ((x413%x414)%(x415|x416));

    if (t99 != 4476U) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x417 = 14413;
	uint16_t x418 = 19U;
	int16_t x420 = -2;
	volatile int32_t t100 = 735407718;

    t100 = ((x417%x418)%(x419|x420));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x422 = 1582000LL;
	int32_t x423 = -4;
	uint64_t x424 = 4198703124987LLU;
	uint64_t t101 = 2930492769572LLU;

    t101 = ((x421%x422)%(x423|x424));

    if (t101 != 255LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x425 = 6;
	static int8_t x427 = 3;
	int8_t x428 = INT8_MIN;

    t102 = ((x425%x426)%(x427|x428));

    if (t102 != 6) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x429 = 0;
	uint32_t x430 = UINT32_MAX;
	volatile uint64_t t103 = 10580895602308LLU;

    t103 = ((x429%x430)%(x431|x432));

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x433 = -1011183909;
	volatile int16_t x434 = INT16_MIN;
	int32_t x436 = -515980;
	static int32_t t104 = 909377586;

    t104 = ((x433%x434)%(x435|x436));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x437 = 29989780U;
	static int8_t x438 = 16;
	uint32_t x439 = 708461028U;
	int8_t x440 = INT8_MAX;
	volatile uint32_t t105 = 324567914U;

    t105 = ((x437%x438)%(x439|x440));

    if (t105 != 4U) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x441 = INT8_MIN;
	uint8_t x442 = 1U;
	int32_t x443 = INT32_MAX;
	int32_t t106 = -3;

    t106 = ((x441%x442)%(x443|x444));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint8_t x445 = UINT8_MAX;
	uint64_t x446 = UINT64_MAX;
	int64_t x447 = INT64_MIN;
	volatile int16_t x448 = INT16_MAX;

    t107 = ((x445%x446)%(x447|x448));

    if (t107 != 255LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x450 = -26;
	int16_t x451 = INT16_MIN;
	volatile int16_t x452 = INT16_MIN;
	uint64_t t108 = 3935157017803583LLU;

    t108 = ((x449%x450)%(x451|x452));

    if (t108 != 29296368741LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x453 = 767323769720319403LLU;
	int64_t x455 = -130907723383LL;
	int16_t x456 = INT16_MAX;

    t109 = ((x453%x454)%(x455|x456));

    if (t109 != 65308LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x457 = INT64_MAX;
	uint8_t x458 = 1U;
	static volatile int16_t x459 = -2;
	int64_t x460 = -15589679177742LL;
	int64_t t110 = 283588847139444177LL;

    t110 = ((x457%x458)%(x459|x460));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x462 = 64U;
	volatile int8_t x463 = INT8_MIN;
	volatile int32_t x464 = -1;

    t111 = ((x461%x462)%(x463|x464));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x466 = 38;
	int32_t x467 = INT32_MAX;
	int32_t x468 = INT32_MAX;
	int32_t t112 = -6;

    t112 = ((x465%x466)%(x467|x468));

    if (t112 != 3) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x469 = INT8_MIN;
	int8_t x472 = -30;
	volatile int64_t t113 = -1LL;

    t113 = ((x469%x470)%(x471|x472));

    if (t113 != -8LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x473 = INT64_MIN;
	volatile uint64_t x475 = 4879525427803866409LLU;
	uint32_t x476 = UINT32_MAX;
	volatile uint64_t t114 = 3409882LLU;

    t114 = ((x473%x474)%(x475|x476));

    if (t114 != 3808167778455559219LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x477 = INT8_MIN;
	int64_t x478 = INT64_MIN;
	uint64_t t115 = 1927492434LLU;

    t115 = ((x477%x478)%(x479|x480));

    if (t115 != 16LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint64_t x481 = UINT64_MAX;
	static volatile uint32_t x482 = 17557U;
	static int32_t x483 = INT32_MIN;
	uint64_t x484 = 32712824759440095LLU;
	uint64_t t116 = 67762493142LLU;

    t116 = ((x481%x482)%(x483|x484));

    if (t116 != 6559LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x485 = 49749876698LLU;
	uint64_t x486 = UINT64_MAX;
	int32_t x487 = -587953;
	int8_t x488 = -6;
	uint64_t t117 = 127140512LLU;

    t117 = ((x485%x486)%(x487|x488));

    if (t117 != 49749876698LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x489 = -1427;
	uint8_t x491 = UINT8_MAX;
	int64_t x492 = -1LL;

    t118 = ((x489%x490)%(x491|x492));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x498 = INT32_MIN;
	volatile int64_t t119 = -449197025LL;

    t119 = ((x497%x498)%(x499|x500));

    if (t119 != 31LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int16_t x501 = INT16_MIN;
	uint16_t x503 = UINT16_MAX;
	uint32_t x504 = UINT32_MAX;
	uint32_t t120 = 217699569U;

    t120 = ((x501%x502)%(x503|x504));

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x505 = 117U;
	volatile int64_t x506 = 2782284LL;
	int16_t x507 = -3902;
	static int64_t t121 = -1636LL;

    t121 = ((x505%x506)%(x507|x508));

    if (t121 != 117LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x511 = 0;
	volatile int64_t x512 = 58446852413LL;
	static volatile int64_t t122 = 123LL;

    t122 = ((x509%x510)%(x511|x512));

    if (t122 != 127LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int8_t x513 = -36;
	int8_t x514 = -1;
	static uint32_t x515 = 116U;
	static uint32_t t123 = 48350379U;

    t123 = ((x513%x514)%(x515|x516));

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint8_t x521 = 39U;
	int16_t x522 = -7172;
	uint32_t x523 = 22048U;
	static int64_t x524 = INT64_MAX;
	volatile int64_t t124 = -270371LL;

    t124 = ((x521%x522)%(x523|x524));

    if (t124 != 39LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x526 = INT32_MAX;
	volatile int32_t x527 = -1;
	int16_t x528 = 11858;
	int32_t t125 = -160;

    t125 = ((x525%x526)%(x527|x528));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x529 = 0U;
	uint32_t x530 = 33U;
	int16_t x532 = -1;
	uint32_t t126 = 7853025U;

    t126 = ((x529%x530)%(x531|x532));

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x541 = -1;
	int64_t x542 = -1LL;
	uint8_t x543 = 2U;
	int64_t x544 = -1LL;
	int64_t t127 = -32214789192LL;

    t127 = ((x541%x542)%(x543|x544));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint8_t x545 = 1U;
	int16_t x546 = INT16_MAX;
	int8_t x547 = INT8_MIN;
	volatile uint8_t x548 = UINT8_MAX;

    t128 = ((x545%x546)%(x547|x548));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x550 = INT16_MAX;
	static volatile int32_t x551 = INT32_MIN;
	volatile int32_t t129 = -181559494;

    t129 = ((x549%x550)%(x551|x552));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x553 = 84U;
	int8_t x554 = 54;
	uint32_t x555 = 200U;
	int64_t x556 = INT64_MIN;
	volatile int64_t t130 = 392936549959789384LL;

    t130 = ((x553%x554)%(x555|x556));

    if (t130 != 30LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x557 = INT32_MAX;
	uint8_t x559 = 13U;
	uint64_t x560 = 1LLU;
	uint64_t t131 = 563269976LLU;

    t131 = ((x557%x558)%(x559|x560));

    if (t131 != 8LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x562 = -1LL;
	int32_t x563 = 8050;
	uint32_t x564 = 3665016U;
	int64_t t132 = 331941LL;

    t132 = ((x561%x562)%(x563|x564));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x566 = -244LL;
	static volatile int16_t x567 = -525;
	int64_t t133 = 439390383850LL;

    t133 = ((x565%x566)%(x567|x568));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x571 = 7793988440279158LL;
	uint64_t x572 = UINT64_MAX;

    t134 = ((x569%x570)%(x571|x572));

    if (t134 != 32767LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x573 = INT16_MIN;
	static int8_t x575 = INT8_MIN;
	volatile int32_t x576 = INT32_MIN;
	int32_t t135 = 642029329;

    t135 = ((x573%x574)%(x575|x576));

    if (t135 != -62) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x577 = UINT8_MAX;
	uint32_t x578 = UINT32_MAX;
	uint32_t x580 = 28605U;
	uint64_t t136 = 1105183438088458LLU;

    t136 = ((x577%x578)%(x579|x580));

    if (t136 != 255LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int32_t x581 = -67376378;
	int64_t x582 = INT64_MIN;
	int8_t x583 = -26;
	int32_t x584 = INT32_MAX;

    t137 = ((x581%x582)%(x583|x584));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x586 = 2092U;
	volatile uint64_t x587 = 49LLU;
	int64_t x588 = INT64_MAX;

    t138 = ((x585%x586)%(x587|x588));

    if (t138 != 9223372036854775477LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x590 = UINT32_MAX;
	static uint32_t x591 = 115U;
	int64_t x592 = -866LL;
	volatile int64_t t139 = 50147252558086LL;

    t139 = ((x589%x590)%(x591|x592));

    if (t139 != -394LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x593 = INT64_MIN;
	volatile uint16_t x594 = UINT16_MAX;
	int64_t x595 = INT64_MAX;
	static uint32_t x596 = 1U;
	volatile int64_t t140 = -12527304LL;

    t140 = ((x593%x594)%(x595|x596));

    if (t140 != -32768LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x597 = 395389751262773LLU;
	uint8_t x598 = 27U;
	uint16_t x599 = 6001U;
	volatile int32_t x600 = 37;
	volatile uint64_t t141 = 8907223120977267645LLU;

    t141 = ((x597%x598)%(x599|x600));

    if (t141 != 5LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x601 = INT32_MAX;
	static int32_t x602 = -1;
	static int8_t x604 = INT8_MIN;

    t142 = ((x601%x602)%(x603|x604));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x605 = 8U;
	uint64_t x606 = UINT64_MAX;
	uint64_t t143 = 54LLU;

    t143 = ((x605%x606)%(x607|x608));

    if (t143 != 8LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x609 = 27157300596LLU;
	int16_t x610 = -11849;
	int16_t x611 = 10;
	volatile uint8_t x612 = UINT8_MAX;

    t144 = ((x609%x610)%(x611|x612));

    if (t144 != 6LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x613 = INT16_MAX;
	int8_t x615 = -1;
	int64_t x616 = -107293208124477830LL;
	volatile int64_t t145 = -538LL;

    t145 = ((x613%x614)%(x615|x616));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x620 = 44U;
	int32_t t146 = 478;

    t146 = ((x617%x618)%(x619|x620));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x621 = INT64_MAX;
	static uint64_t x622 = UINT64_MAX;
	uint16_t x623 = UINT16_MAX;
	int8_t x624 = INT8_MIN;
	volatile uint64_t t147 = 76LLU;

    t147 = ((x621%x622)%(x623|x624));

    if (t147 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x625 = 112U;
	uint64_t x626 = UINT64_MAX;
	int64_t x628 = INT64_MAX;
	uint64_t t148 = 1015806245512073LLU;

    t148 = ((x625%x626)%(x627|x628));

    if (t148 != 112LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x629 = INT16_MIN;
	int8_t x631 = -1;
	volatile int64_t x632 = 383486LL;
	static int64_t t149 = -393985711327639413LL;

    t149 = ((x629%x630)%(x631|x632));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint8_t x633 = 12U;
	int64_t x634 = 286822835665LL;
	static int8_t x635 = 1;
	uint32_t x636 = 13283422U;
	volatile int64_t t150 = 1548311LL;

    t150 = ((x633%x634)%(x635|x636));

    if (t150 != 12LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x637 = 41U;
	uint64_t x638 = 1057391LLU;
	volatile uint8_t x639 = 51U;
	volatile uint64_t t151 = 417922235LLU;

    t151 = ((x637%x638)%(x639|x640));

    if (t151 != 41LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x641 = INT64_MIN;
	uint32_t x642 = 45188U;
	static volatile int8_t x643 = INT8_MIN;
	int64_t t152 = -36287489LL;

    t152 = ((x641%x642)%(x643|x644));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x650 = INT16_MIN;
	uint64_t x651 = UINT64_MAX;
	int8_t x652 = INT8_MIN;
	uint64_t t153 = 792739LLU;

    t153 = ((x649%x650)%(x651|x652));

    if (t153 != 32767LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x653 = -1;
	int16_t x656 = INT16_MIN;
	int64_t t154 = -22599607LL;

    t154 = ((x653%x654)%(x655|x656));

    if (t154 != -1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x661 = INT16_MAX;
	volatile int16_t x663 = -94;
	int16_t x664 = INT16_MIN;

    t155 = ((x661%x662)%(x663|x664));

    if (t155 != 33) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x665 = INT32_MAX;
	volatile int8_t x666 = INT8_MIN;
	int64_t x667 = -2874764569LL;
	int8_t x668 = INT8_MIN;
	int64_t t156 = 135653981122LL;

    t156 = ((x665%x666)%(x667|x668));

    if (t156 != 2LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile uint16_t x669 = 14237U;
	static int8_t x670 = INT8_MIN;
	int64_t x671 = INT64_MIN;
	int16_t x672 = 0;
	volatile int64_t t157 = 869216LL;

    t157 = ((x669%x670)%(x671|x672));

    if (t157 != 29LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x674 = INT16_MAX;
	int8_t x675 = INT8_MAX;
	int32_t x676 = INT32_MIN;
	static volatile int32_t t158 = -104846335;

    t158 = ((x673%x674)%(x675|x676));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x677 = 2966392U;
	int64_t x679 = INT64_MAX;
	static uint32_t x680 = 997895365U;
	volatile int64_t t159 = 91971418657643578LL;

    t159 = ((x677%x678)%(x679|x680));

    if (t159 != 4LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x681 = UINT64_MAX;
	int64_t x682 = INT64_MIN;
	uint32_t x683 = 77U;
	volatile int8_t x684 = INT8_MIN;
	volatile uint64_t t160 = 26007LLU;

    t160 = ((x681%x682)%(x683|x684));

    if (t160 != 2147484922LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x686 = UINT32_MAX;
	static uint32_t x687 = UINT32_MAX;
	int64_t x688 = -132700047670390334LL;
	static int64_t t161 = 0LL;

    t161 = ((x685%x686)%(x687|x688));

    if (t161 != 4294934528LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x690 = INT8_MIN;
	static uint64_t x691 = 375201202571028322LLU;
	int16_t x692 = INT16_MIN;
	volatile uint64_t t162 = 41759828933LLU;

    t162 = ((x689%x690)%(x691|x692));

    if (t162 != 22685LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x693 = -1LL;
	int8_t x694 = -6;
	uint16_t x695 = UINT16_MAX;
	int8_t x696 = INT8_MAX;
	volatile int64_t t163 = -21279950LL;

    t163 = ((x693%x694)%(x695|x696));

    if (t163 != -1LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x698 = 1;
	uint64_t x700 = UINT64_MAX;
	volatile uint64_t t164 = 130779180LLU;

    t164 = ((x697%x698)%(x699|x700));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint16_t x701 = 19831U;
	volatile uint16_t x703 = 596U;
	int8_t x704 = INT8_MIN;

    t165 = ((x701%x702)%(x703|x704));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x706 = -1;
	volatile int64_t x708 = -475363154809LL;
	int64_t t166 = -127655700629099914LL;

    t166 = ((x705%x706)%(x707|x708));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile uint64_t x710 = 1678493572235514LLU;
	uint32_t x711 = UINT32_MAX;
	static int8_t x712 = 42;
	volatile uint64_t t167 = 3LLU;

    t167 = ((x709%x710)%(x711|x712));

    if (t167 != 2880499268LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x713 = INT16_MIN;
	static uint16_t x714 = 7033U;
	int64_t x715 = INT64_MAX;
	static volatile uint64_t x716 = UINT64_MAX;
	uint64_t t168 = 114007LLU;

    t168 = ((x713%x714)%(x715|x716));

    if (t168 != 18446744073709546980LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x717 = 929826803522885768LLU;
	int16_t x719 = INT16_MAX;
	int8_t x720 = -1;
	volatile uint64_t t169 = 575LLU;

    t169 = ((x717%x718)%(x719|x720));

    if (t169 != 864403733LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x721 = -1;
	int64_t x722 = -30751568LL;
	int8_t x723 = 1;
	uint16_t x724 = UINT16_MAX;
	int64_t t170 = 644682121501425LL;

    t170 = ((x721%x722)%(x723|x724));

    if (t170 != -1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x725 = -1LL;
	static int32_t x727 = INT32_MIN;

    t171 = ((x725%x726)%(x727|x728));

    if (t171 != -1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x729 = INT16_MIN;
	uint16_t x731 = 12U;
	int32_t x732 = INT32_MAX;

    t172 = ((x729%x730)%(x731|x732));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x734 = INT32_MAX;
	volatile uint32_t t173 = 478204U;

    t173 = ((x733%x734)%(x735|x736));

    if (t173 != 1U) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x737 = 0;
	uint8_t x739 = UINT8_MAX;
	static volatile int32_t x740 = INT32_MIN;
	int64_t t174 = 110592LL;

    t174 = ((x737%x738)%(x739|x740));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x742 = INT64_MIN;
	int64_t x743 = -128029LL;
	volatile uint16_t x744 = 9203U;
	int64_t t175 = 346045795876802179LL;

    t175 = ((x741%x742)%(x743|x744));

    if (t175 != 1LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x745 = 4353973;
	volatile int32_t x746 = INT32_MAX;
	uint64_t x748 = UINT64_MAX;
	volatile uint64_t t176 = 962603LLU;

    t176 = ((x745%x746)%(x747|x748));

    if (t176 != 4353973LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x749 = 15U;
	uint8_t x750 = 43U;
	volatile int32_t x751 = -15423;
	uint16_t x752 = 1U;
	int32_t t177 = -39226;

    t177 = ((x749%x750)%(x751|x752));

    if (t177 != 15) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x754 = INT8_MAX;
	int32_t x755 = INT32_MIN;
	uint64_t x756 = 167559957743LLU;
	static uint64_t t178 = 2264086LLU;

    t178 = ((x753%x754)%(x755|x756));

    if (t178 != 41LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x757 = INT64_MAX;
	int16_t x758 = INT16_MAX;
	volatile int32_t x759 = INT32_MIN;
	int64_t t179 = -1167477LL;

    t179 = ((x757%x758)%(x759|x760));

    if (t179 != 7LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x761 = -1;
	uint32_t x762 = UINT32_MAX;
	int8_t x763 = INT8_MIN;
	int32_t x764 = INT32_MAX;
	uint32_t t180 = 4289212U;

    t180 = ((x761%x762)%(x763|x764));

    if (t180 != 0U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x765 = 1973448986972LLU;
	uint16_t x766 = 8U;
	int8_t x767 = -1;
	int16_t x768 = INT16_MIN;
	uint64_t t181 = 56529999118LLU;

    t181 = ((x765%x766)%(x767|x768));

    if (t181 != 4LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint32_t x769 = 14864358U;
	int8_t x770 = INT8_MIN;
	int32_t x771 = INT32_MIN;
	uint32_t t182 = 1U;

    t182 = ((x769%x770)%(x771|x772));

    if (t182 != 14864358U) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x773 = INT8_MIN;
	static int16_t x774 = 1089;
	static uint8_t x775 = 24U;
	volatile int64_t t183 = -92938105646195905LL;

    t183 = ((x773%x774)%(x775|x776));

    if (t183 != -128LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int64_t x777 = -372092819912LL;
	static int64_t x779 = 16487183LL;

    t184 = ((x777%x778)%(x779|x780));

    if (t184 != -8206LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x782 = INT32_MIN;
	int64_t x784 = -68971603LL;
	static uint64_t t185 = 919001351123018LLU;

    t185 = ((x781%x782)%(x783|x784));

    if (t185 != 2LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x785 = INT8_MAX;
	static int16_t x787 = INT16_MAX;
	int8_t x788 = INT8_MAX;

    t186 = ((x785%x786)%(x787|x788));

    if (t186 != 127LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x789 = 2;
	volatile uint8_t x790 = 1U;
	uint8_t x791 = 41U;
	volatile int8_t x792 = 5;
	volatile int32_t t187 = 200;

    t187 = ((x789%x790)%(x791|x792));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x794 = -1LL;
	int8_t x795 = 4;
	volatile int64_t t188 = -130393290335332LL;

    t188 = ((x793%x794)%(x795|x796));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x798 = INT16_MIN;
	static int16_t x799 = -1;

    t189 = ((x797%x798)%(x799|x800));

    if (t189 != 381060618U) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x801 = INT32_MIN;
	int16_t x802 = -1;
	uint16_t x803 = UINT16_MAX;
	int16_t x804 = INT16_MIN;
	volatile int32_t t190 = -974659038;

    t190 = ((x801%x802)%(x803|x804));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x805 = INT32_MIN;
	int64_t x807 = -31485778LL;
	static volatile int32_t x808 = -1;
	volatile int64_t t191 = 45955764621866LL;

    t191 = ((x805%x806)%(x807|x808));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x809 = INT32_MIN;
	static int64_t x810 = INT64_MIN;
	static volatile uint64_t x812 = UINT64_MAX;
	uint64_t t192 = 5383LLU;

    t192 = ((x809%x810)%(x811|x812));

    if (t192 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x813 = 0U;
	int32_t x814 = -1;
	uint8_t x815 = 12U;
	volatile int32_t x816 = -1;
	int32_t t193 = 506;

    t193 = ((x813%x814)%(x815|x816));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x817 = 3U;
	int32_t x818 = -402206175;
	int16_t x819 = INT16_MIN;
	volatile int16_t x820 = 3;
	static int32_t t194 = 912;

    t194 = ((x817%x818)%(x819|x820));

    if (t194 != 3) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x821 = 1415U;
	uint16_t x822 = 25U;
	int16_t x823 = INT16_MIN;

    t195 = ((x821%x822)%(x823|x824));

    if (t195 != 15U) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int64_t x826 = -12097941124221LL;
	int32_t x827 = INT32_MAX;
	int32_t x828 = INT32_MIN;
	static int64_t t196 = 2552LL;

    t196 = ((x825%x826)%(x827|x828));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x830 = 450U;
	int8_t x831 = INT8_MAX;
	uint32_t x832 = 6U;
	volatile uint32_t t197 = 11827379U;

    t197 = ((x829%x830)%(x831|x832));

    if (t197 != 29U) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x833 = -1LL;
	volatile int32_t x834 = -44881172;
	volatile uint64_t x835 = 19LLU;
	volatile int64_t x836 = -508412LL;

    t198 = ((x833%x834)%(x835|x836));

    if (t198 != 508392LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int32_t x837 = INT32_MIN;
	uint32_t x838 = 999U;
	int64_t x839 = INT64_MIN;
	int64_t x840 = INT64_MIN;

    t199 = ((x837%x838)%(x839|x840));

    if (t199 != 281LL) { NG(); } else { ; }
	
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

