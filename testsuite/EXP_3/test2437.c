
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

int16_t x3 = INT16_MIN;
int16_t x6 = -5;
uint32_t x8 = UINT32_MAX;
static uint32_t t1 = 932100U;
int32_t t3 = 12469929;
static int16_t x24 = -1;
static uint16_t x25 = 1716U;
static int64_t x30 = 25276990LL;
uint64_t x39 = UINT64_MAX;
volatile int8_t x42 = INT8_MIN;
static int16_t x46 = INT16_MAX;
int32_t x47 = INT32_MIN;
uint16_t x48 = 531U;
static int32_t x51 = -1;
uint8_t x55 = UINT8_MAX;
static int64_t x60 = INT64_MIN;
static volatile uint64_t x61 = 64069276050LLU;
uint16_t x65 = 1706U;
uint32_t x67 = 225822U;
uint32_t t15 = 18U;
volatile int32_t x70 = 20406;
int32_t x76 = INT32_MIN;
uint32_t x77 = UINT32_MAX;
int16_t x78 = INT16_MAX;
uint16_t x83 = 0U;
int32_t t19 = -117373;
int16_t x87 = -1321;
int16_t x90 = -100;
static uint16_t x102 = UINT16_MAX;
static int8_t x105 = -1;
volatile int64_t t25 = -94187423350LL;
static volatile int64_t x109 = INT64_MAX;
static int8_t x110 = INT8_MAX;
uint32_t x119 = 110U;
volatile int8_t x128 = INT8_MIN;
int32_t t29 = 24500;
int32_t x134 = INT32_MAX;
uint64_t x137 = 13782192879LLU;
static uint64_t x138 = UINT64_MAX;
static uint32_t x139 = UINT32_MAX;
uint32_t x157 = UINT32_MAX;
int32_t t35 = -41916;
static int64_t x166 = -3151LL;
uint8_t x179 = 57U;
int64_t x188 = 4161128027328417245LL;
int64_t x189 = -1LL;
int16_t x191 = INT16_MIN;
uint64_t x197 = UINT64_MAX;
uint8_t x199 = 83U;
uint32_t x204 = 42U;
int32_t x207 = INT32_MIN;
static int8_t x209 = -1;
uint32_t x211 = UINT32_MAX;
uint8_t x212 = UINT8_MAX;
uint32_t x217 = UINT32_MAX;
uint32_t t50 = 9619U;
int8_t x227 = -1;
uint8_t x229 = UINT8_MAX;
uint8_t x233 = 25U;
int32_t x235 = 963;
static int32_t t55 = 88;
int64_t x247 = -1LL;
int64_t x250 = -1LL;
int16_t x253 = INT16_MIN;
uint32_t x259 = 882699U;
uint32_t t59 = 190U;
static volatile int32_t x264 = -1;
static volatile int32_t x265 = INT32_MIN;
int32_t x272 = INT32_MIN;
int16_t x278 = 10095;
uint16_t x285 = 14U;
int64_t x293 = INT64_MIN;
volatile int64_t t69 = 13034359337116LL;
int32_t x302 = -699289280;
int16_t x304 = -1;
volatile uint32_t x313 = 96U;
int64_t x323 = INT64_MAX;
int8_t x324 = INT8_MIN;
int32_t x325 = INT32_MIN;
volatile int32_t t76 = 66169035;
static int8_t x337 = INT8_MAX;
uint8_t x340 = 3U;
static volatile int32_t t79 = 353813;
volatile int32_t x342 = -99;
volatile uint32_t x344 = UINT32_MAX;
int16_t x346 = -3829;
int64_t x353 = INT64_MAX;
volatile uint8_t x363 = 14U;
int16_t x364 = -5;
volatile int16_t x365 = -7;
uint16_t x385 = 24268U;
volatile int8_t x386 = -1;
volatile uint8_t x392 = UINT8_MAX;
uint8_t x395 = UINT8_MAX;
volatile uint32_t x396 = 104U;
uint64_t x397 = 10734900393105919LLU;
volatile int64_t x405 = 1LL;
volatile uint64_t t96 = 1601846516LLU;
uint64_t x413 = 1437LLU;
int8_t x416 = -1;
uint16_t x418 = 11U;
int32_t x419 = INT32_MIN;
volatile uint16_t x428 = 241U;
uint32_t x429 = 43U;
uint8_t x431 = 2U;
int16_t x437 = 8032;
int8_t x453 = -15;
int8_t x459 = -1;
int8_t x468 = INT8_MIN;
volatile int32_t x475 = -1950499;
volatile int32_t t112 = -3659;
int8_t x477 = -1;
volatile int16_t x484 = INT16_MIN;
int8_t x498 = INT8_MAX;
static int8_t x504 = 53;
static uint64_t x506 = 108781731LLU;
uint8_t x514 = 3U;
int32_t x524 = INT32_MIN;
uint32_t t128 = 34U;
uint32_t x545 = UINT32_MAX;
int64_t x550 = INT64_MIN;
volatile int32_t x551 = 29635319;
uint32_t t130 = UINT32_MAX;
int64_t x562 = INT64_MIN;
volatile int8_t x564 = 1;
static volatile int32_t t133 = -3599026;
static int16_t x567 = 0;
int32_t x571 = -1;
static volatile int64_t t135 = 490LL;
int16_t x575 = -1;
uint32_t t136 = 0U;
int32_t x578 = -191;
volatile int8_t x580 = -1;
static int64_t x585 = INT64_MIN;
volatile int32_t x587 = -1;
static int64_t x593 = INT64_MIN;
uint16_t x596 = UINT16_MAX;
volatile int64_t t141 = 122732531153445LL;
int8_t x601 = INT8_MIN;
int32_t t142 = -3092;
uint32_t x608 = 201U;
volatile uint16_t x609 = 1U;
int16_t x611 = INT16_MIN;
int64_t t144 = -31014100806LL;
int16_t x613 = INT16_MIN;
volatile uint64_t t145 = 1950554631LLU;
static uint8_t x621 = 38U;
volatile uint8_t x641 = 0U;
int64_t t153 = -82000748336124844LL;
int32_t x649 = 10031853;
int16_t x650 = INT16_MAX;
volatile uint8_t x654 = 21U;
int64_t x655 = -24745666335134796LL;
int64_t x657 = -2939172LL;
static int16_t x665 = INT16_MAX;
int8_t x667 = 1;
volatile int32_t x670 = 937;
int32_t x673 = INT32_MAX;
static volatile int64_t x675 = -1LL;
int64_t x678 = -21691696530LL;
volatile int8_t x693 = -1;
int64_t x695 = INT64_MIN;
static int64_t t165 = -257917329079235416LL;
int64_t t166 = -323580959263LL;
int8_t x702 = INT8_MIN;
volatile uint64_t t168 = 544195LLU;
int64_t x734 = INT64_MIN;
int32_t x738 = 319102;
volatile int64_t x740 = INT64_MIN;
uint64_t x745 = UINT64_MAX;
int16_t x746 = INT16_MAX;
int32_t x757 = INT32_MIN;
volatile int16_t x773 = -1;
static int64_t x774 = INT64_MAX;
uint64_t x779 = 222186898862868916LLU;
volatile int64_t x781 = 6225LL;
int64_t x784 = INT64_MAX;
volatile int64_t t182 = -1768001073LL;
int8_t x794 = 44;
volatile uint32_t x795 = UINT32_MAX;
uint64_t x808 = 124414LLU;
volatile uint64_t t188 = 6409460861LLU;
int8_t x816 = INT8_MAX;
int16_t x819 = -1;
volatile int64_t x824 = -1LL;
static volatile int8_t x828 = INT8_MIN;
volatile int8_t x829 = INT8_MIN;
volatile int32_t x831 = -1;
static int64_t x836 = INT64_MIN;
int8_t x845 = 1;
volatile int32_t x847 = -744347519;
volatile uint8_t x849 = 62U;


void f0(void) {
    	static int64_t x1 = -50089010LL;
	volatile int64_t x2 = -1697818LL;
	int8_t x4 = 0;
	static int32_t t0 = -982696902;

    t0 = ((x1!=x2)+(x3|x4));

    if (t0 != -32767) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = -1;
	int32_t x7 = 20820783;

    t1 = ((x5!=x6)+(x7|x8));

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = INT8_MAX;
	volatile uint16_t x10 = UINT16_MAX;
	volatile int32_t x11 = -1;
	int32_t x12 = INT32_MIN;
	int32_t t2 = -378;

    t2 = ((x9!=x10)+(x11|x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x17 = -8;
	volatile int32_t x18 = -1;
	volatile uint16_t x19 = UINT16_MAX;
	int8_t x20 = INT8_MIN;

    t3 = ((x17!=x18)+(x19|x20));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = -1;
	volatile uint32_t x22 = 668384U;
	int8_t x23 = -12;
	static volatile int32_t t4 = -61;

    t4 = ((x21!=x22)+(x23|x24));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x26 = -1;
	volatile uint32_t x27 = UINT32_MAX;
	static volatile uint32_t x28 = UINT32_MAX;
	volatile uint32_t t5 = 2218U;

    t5 = ((x25!=x26)+(x27|x28));

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x29 = 1436484102714486757LLU;
	uint16_t x31 = 1U;
	uint8_t x32 = 14U;
	volatile int32_t t6 = -56274;

    t6 = ((x29!=x30)+(x31|x32));

    if (t6 != 16) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x33 = -7746260992463LL;
	static uint8_t x34 = UINT8_MAX;
	volatile uint16_t x35 = 1U;
	uint16_t x36 = 16354U;
	int32_t t7 = 111;

    t7 = ((x33!=x34)+(x35|x36));

    if (t7 != 16356) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x37 = INT64_MIN;
	int8_t x38 = -1;
	volatile int8_t x40 = 28;
	volatile uint64_t t8 = 13LLU;

    t8 = ((x37!=x38)+(x39|x40));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x41 = 847LL;
	int8_t x43 = INT8_MIN;
	int16_t x44 = -22;
	int32_t t9 = -1271668;

    t9 = ((x41!=x42)+(x43|x44));

    if (t9 != -21) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x45 = INT32_MIN;
	int32_t t10 = 208;

    t10 = ((x45!=x46)+(x47|x48));

    if (t10 != -2147483116) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x49 = 1940491119LLU;
	static int32_t x50 = INT32_MIN;
	uint8_t x52 = 2U;
	volatile int32_t t11 = -66271071;

    t11 = ((x49!=x50)+(x51|x52));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x53 = INT16_MIN;
	uint64_t x54 = UINT64_MAX;
	int8_t x56 = INT8_MIN;
	volatile int32_t t12 = 114312;

    t12 = ((x53!=x54)+(x55|x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = -1;
	static int64_t x58 = INT64_MIN;
	int8_t x59 = INT8_MAX;
	int64_t t13 = -8746500780883410LL;

    t13 = ((x57!=x58)+(x59|x60));

    if (t13 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x62 = -1;
	volatile uint8_t x63 = 66U;
	uint16_t x64 = 4U;
	volatile int32_t t14 = -4730;

    t14 = ((x61!=x62)+(x63|x64));

    if (t14 != 71) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x66 = 1671U;
	static volatile int32_t x68 = INT32_MAX;

    t15 = ((x65!=x66)+(x67|x68));

    if (t15 != 2147483648U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x69 = UINT8_MAX;
	int16_t x71 = -735;
	int32_t x72 = 1;
	static int32_t t16 = -148231271;

    t16 = ((x69!=x70)+(x71|x72));

    if (t16 != -734) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x73 = UINT16_MAX;
	static uint16_t x74 = 0U;
	uint64_t x75 = UINT64_MAX;
	static uint64_t t17 = 6LLU;

    t17 = ((x73!=x74)+(x75|x76));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint64_t x79 = UINT64_MAX;
	int64_t x80 = INT64_MIN;
	static volatile uint64_t t18 = 324442789495435LLU;

    t18 = ((x77!=x78)+(x79|x80));

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x81 = INT8_MIN;
	int32_t x82 = INT32_MIN;
	int8_t x84 = INT8_MIN;

    t19 = ((x81!=x82)+(x83|x84));

    if (t19 != -127) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x85 = UINT32_MAX;
	int64_t x86 = INT64_MIN;
	int64_t x88 = INT64_MIN;
	int64_t t20 = -91027795074LL;

    t20 = ((x85!=x86)+(x87|x88));

    if (t20 != -1320LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x89 = 257LLU;
	int16_t x91 = INT16_MIN;
	volatile int64_t x92 = -1LL;
	volatile int64_t t21 = 10LL;

    t21 = ((x89!=x90)+(x91|x92));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x93 = -1;
	uint8_t x94 = 0U;
	volatile int64_t x95 = -722597273584006LL;
	int16_t x96 = INT16_MIN;
	volatile int64_t t22 = 16754464762780LL;

    t22 = ((x93!=x94)+(x95|x96));

    if (t22 != -16773LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x97 = INT32_MIN;
	int16_t x98 = 50;
	int64_t x99 = -1LL;
	volatile int32_t x100 = INT32_MIN;
	volatile int64_t t23 = 2304595641394538936LL;

    t23 = ((x97!=x98)+(x99|x100));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x101 = -219146278;
	volatile uint8_t x103 = UINT8_MAX;
	uint8_t x104 = 6U;
	volatile int32_t t24 = 104001095;

    t24 = ((x101!=x102)+(x103|x104));

    if (t24 != 256) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x106 = UINT32_MAX;
	static int64_t x107 = INT64_MIN;
	int16_t x108 = -1;

    t25 = ((x105!=x106)+(x107|x108));

    if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x111 = 1056184763542LLU;
	int32_t x112 = -2733;
	uint64_t t26 = 3864536LLU;

    t26 = ((x109!=x110)+(x111|x112));

    if (t26 != 18446744073709549016LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x117 = -1;
	volatile uint32_t x118 = 5966U;
	int16_t x120 = -13;
	volatile uint32_t t27 = 2551019U;

    t27 = ((x117!=x118)+(x119|x120));

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x121 = INT64_MAX;
	uint8_t x122 = 15U;
	uint64_t x123 = 136444492846810160LLU;
	static uint32_t x124 = 52744867U;
	uint64_t t28 = 31LLU;

    t28 = ((x121!=x122)+(x123|x124));

    if (t28 != 136444492847109812LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x125 = 1920LLU;
	uint64_t x126 = 5923819LLU;
	volatile int8_t x127 = INT8_MIN;

    t29 = ((x125!=x126)+(x127|x128));

    if (t29 != -127) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x133 = -1;
	int32_t x135 = -1;
	int16_t x136 = 3915;
	volatile int32_t t30 = -200337383;

    t30 = ((x133!=x134)+(x135|x136));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x140 = 271;
	static volatile uint32_t t31 = 22U;

    t31 = ((x137!=x138)+(x139|x140));

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x141 = 2721967;
	static int8_t x142 = INT8_MIN;
	volatile uint64_t x143 = UINT64_MAX;
	int32_t x144 = INT32_MAX;
	static uint64_t t32 = 331120LLU;

    t32 = ((x141!=x142)+(x143|x144));

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x145 = INT32_MIN;
	static uint8_t x146 = 0U;
	int16_t x147 = INT16_MIN;
	static int16_t x148 = -1;
	int32_t t33 = -462326579;

    t33 = ((x145!=x146)+(x147|x148));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x149 = INT64_MIN;
	int32_t x150 = 81295836;
	int32_t x151 = INT32_MIN;
	volatile int16_t x152 = INT16_MIN;
	int32_t t34 = 510390;

    t34 = ((x149!=x150)+(x151|x152));

    if (t34 != -32767) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x158 = 6;
	volatile int8_t x159 = -30;
	int32_t x160 = -617;

    t35 = ((x157!=x158)+(x159|x160));

    if (t35 != -8) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x161 = 81818LLU;
	volatile int32_t x162 = INT32_MIN;
	volatile int64_t x163 = INT64_MIN;
	int64_t x164 = -1LL;
	volatile int64_t t36 = 160LL;

    t36 = ((x161!=x162)+(x163|x164));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x165 = 44U;
	int64_t x167 = -1LL;
	int8_t x168 = 14;
	static volatile int64_t t37 = 17538407326782LL;

    t37 = ((x165!=x166)+(x167|x168));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x169 = -66;
	uint32_t x170 = UINT32_MAX;
	uint64_t x171 = 44246879584796174LLU;
	int16_t x172 = -773;
	uint64_t t38 = 25342574915026793LLU;

    t38 = ((x169!=x170)+(x171|x172));

    if (t38 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x173 = INT32_MIN;
	int16_t x174 = -1;
	static int64_t x175 = -1LL;
	volatile int16_t x176 = -1;
	int64_t t39 = -8121483LL;

    t39 = ((x173!=x174)+(x175|x176));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x177 = UINT32_MAX;
	static int16_t x178 = 1;
	uint16_t x180 = 1024U;
	int32_t t40 = 1;

    t40 = ((x177!=x178)+(x179|x180));

    if (t40 != 1082) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x185 = INT32_MIN;
	volatile int16_t x186 = INT16_MIN;
	uint16_t x187 = 621U;
	static volatile int64_t t41 = -543039361709080LL;

    t41 = ((x185!=x186)+(x187|x188));

    if (t41 != 4161128027328417790LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x190 = INT16_MIN;
	uint64_t x192 = 33LLU;
	uint64_t t42 = 53606376123972LLU;

    t42 = ((x189!=x190)+(x191|x192));

    if (t42 != 18446744073709518882LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x193 = INT64_MIN;
	static int16_t x194 = INT16_MAX;
	uint16_t x195 = 14U;
	static int8_t x196 = INT8_MIN;
	int32_t t43 = -692758;

    t43 = ((x193!=x194)+(x195|x196));

    if (t43 != -113) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int32_t x198 = INT32_MIN;
	int8_t x200 = INT8_MIN;
	int32_t t44 = 733143078;

    t44 = ((x197!=x198)+(x199|x200));

    if (t44 != -44) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x201 = INT32_MIN;
	int32_t x202 = -1697;
	int64_t x203 = -1LL;
	int64_t t45 = 3924504878428765LL;

    t45 = ((x201!=x202)+(x203|x204));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x205 = INT32_MIN;
	uint16_t x206 = 5U;
	uint16_t x208 = 1U;
	int32_t t46 = -57;

    t46 = ((x205!=x206)+(x207|x208));

    if (t46 != -2147483646) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x210 = INT8_MIN;
	uint32_t t47 = 18260U;

    t47 = ((x209!=x210)+(x211|x212));

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x213 = UINT8_MAX;
	uint16_t x214 = 967U;
	uint16_t x215 = 0U;
	static int64_t x216 = -1LL;
	volatile int64_t t48 = 329076434334LL;

    t48 = ((x213!=x214)+(x215|x216));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x218 = -1;
	uint64_t x219 = 155042915053346LLU;
	static int32_t x220 = -1;
	static volatile uint64_t t49 = UINT64_MAX;

    t49 = ((x217!=x218)+(x219|x220));

    if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x221 = UINT16_MAX;
	uint32_t x222 = UINT32_MAX;
	uint16_t x223 = 101U;
	volatile uint32_t x224 = 193U;

    t50 = ((x221!=x222)+(x223|x224));

    if (t50 != 230U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x225 = 2U;
	volatile uint32_t x226 = 348707U;
	uint64_t x228 = 76428683LLU;
	uint64_t t51 = 660LLU;

    t51 = ((x225!=x226)+(x227|x228));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x230 = INT8_MAX;
	volatile int16_t x231 = 0;
	static int64_t x232 = INT64_MIN;
	volatile int64_t t52 = 65021689LL;

    t52 = ((x229!=x230)+(x231|x232));

    if (t52 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint64_t x234 = 493174014752860LLU;
	static int16_t x236 = 5486;
	volatile int32_t t53 = -39173645;

    t53 = ((x233!=x234)+(x235|x236));

    if (t53 != 6128) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint64_t x237 = UINT64_MAX;
	static uint64_t x238 = UINT64_MAX;
	int64_t x239 = -1LL;
	static volatile uint32_t x240 = 160U;
	int64_t t54 = -6609670305LL;

    t54 = ((x237!=x238)+(x239|x240));

    if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x241 = -532495420643971456LL;
	int32_t x242 = -1;
	uint16_t x243 = 66U;
	volatile int16_t x244 = 1;

    t55 = ((x241!=x242)+(x243|x244));

    if (t55 != 68) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x245 = -1;
	int16_t x246 = -127;
	uint32_t x248 = UINT32_MAX;
	int64_t t56 = 3107732432343LL;

    t56 = ((x245!=x246)+(x247|x248));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x249 = INT64_MIN;
	uint8_t x251 = 10U;
	int8_t x252 = INT8_MIN;
	int32_t t57 = 7621;

    t57 = ((x249!=x250)+(x251|x252));

    if (t57 != -117) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x254 = -146545758732591340LL;
	uint64_t x255 = 53LLU;
	static int64_t x256 = 19072283LL;
	volatile uint64_t t58 = 214691LLU;

    t58 = ((x253!=x254)+(x255|x256));

    if (t58 != 19072320LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x257 = -452;
	static int32_t x258 = 10289;
	int16_t x260 = -1;

    t59 = ((x257!=x258)+(x259|x260));

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x261 = INT16_MAX;
	int32_t x262 = -1;
	static uint64_t x263 = 999708365LLU;
	uint64_t t60 = 3549420LLU;

    t60 = ((x261!=x262)+(x263|x264));

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x266 = -1;
	static int16_t x267 = INT16_MIN;
	int64_t x268 = INT64_MIN;
	volatile int64_t t61 = -7389076225456LL;

    t61 = ((x265!=x266)+(x267|x268));

    if (t61 != -32767LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x269 = -49;
	volatile int8_t x270 = INT8_MIN;
	uint8_t x271 = UINT8_MAX;
	int32_t t62 = -3;

    t62 = ((x269!=x270)+(x271|x272));

    if (t62 != -2147483392) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x273 = INT16_MAX;
	static int16_t x274 = INT16_MAX;
	uint32_t x275 = 103U;
	uint16_t x276 = 990U;
	uint32_t t63 = 553U;

    t63 = ((x273!=x274)+(x275|x276));

    if (t63 != 1023U) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x277 = -1;
	uint16_t x279 = 6U;
	uint8_t x280 = UINT8_MAX;
	volatile int32_t t64 = -5294425;

    t64 = ((x277!=x278)+(x279|x280));

    if (t64 != 256) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x281 = INT8_MIN;
	int8_t x282 = INT8_MIN;
	static uint8_t x283 = UINT8_MAX;
	uint8_t x284 = 0U;
	int32_t t65 = -94;

    t65 = ((x281!=x282)+(x283|x284));

    if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x286 = -28;
	static int32_t x287 = -1;
	int8_t x288 = INT8_MAX;
	static int32_t t66 = 59347953;

    t66 = ((x285!=x286)+(x287|x288));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x289 = -5;
	int64_t x290 = 16492328946LL;
	static uint16_t x291 = 7601U;
	int8_t x292 = INT8_MAX;
	volatile int32_t t67 = -8;

    t67 = ((x289!=x290)+(x291|x292));

    if (t67 != 7680) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x294 = INT32_MIN;
	uint8_t x295 = 2U;
	int16_t x296 = INT16_MIN;
	volatile int32_t t68 = 1662;

    t68 = ((x293!=x294)+(x295|x296));

    if (t68 != -32765) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x297 = INT8_MIN;
	int64_t x298 = 82007089LL;
	static int64_t x299 = -1LL;
	volatile uint16_t x300 = UINT16_MAX;

    t69 = ((x297!=x298)+(x299|x300));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x301 = -6;
	static int32_t x303 = 178;
	volatile int32_t t70 = 8369982;

    t70 = ((x301!=x302)+(x303|x304));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x305 = INT64_MAX;
	uint16_t x306 = 7820U;
	int16_t x307 = INT16_MIN;
	static volatile int8_t x308 = INT8_MAX;
	static int32_t t71 = 10;

    t71 = ((x305!=x306)+(x307|x308));

    if (t71 != -32640) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x309 = INT64_MIN;
	static uint16_t x310 = UINT16_MAX;
	uint32_t x311 = 117U;
	int16_t x312 = -1;
	volatile uint32_t t72 = 408430972U;

    t72 = ((x309!=x310)+(x311|x312));

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x314 = -2817081;
	volatile int8_t x315 = INT8_MAX;
	int16_t x316 = 500;
	static volatile int32_t t73 = -369;

    t73 = ((x313!=x314)+(x315|x316));

    if (t73 != 512) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int64_t x317 = -1LL;
	volatile uint8_t x318 = 3U;
	uint64_t x319 = 292501433LLU;
	int16_t x320 = INT16_MAX;
	volatile uint64_t t74 = 214964863700LLU;

    t74 = ((x317!=x318)+(x319|x320));

    if (t74 != 292519936LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x321 = -1;
	uint8_t x322 = 80U;
	int64_t t75 = -80678469591LL;

    t75 = ((x321!=x322)+(x323|x324));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x326 = INT8_MAX;
	uint8_t x327 = UINT8_MAX;
	int16_t x328 = INT16_MAX;

    t76 = ((x325!=x326)+(x327|x328));

    if (t76 != 32768) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x329 = 246281049766391LL;
	int16_t x330 = INT16_MAX;
	int32_t x331 = 88;
	static int16_t x332 = INT16_MAX;
	volatile int32_t t77 = -184007;

    t77 = ((x329!=x330)+(x331|x332));

    if (t77 != 32768) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x333 = -21;
	int64_t x334 = INT64_MIN;
	int8_t x335 = INT8_MIN;
	uint64_t x336 = 18881LLU;
	uint64_t t78 = 12682836472185LLU;

    t78 = ((x333!=x334)+(x335|x336));

    if (t78 != 18446744073709551554LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x338 = INT16_MIN;
	int8_t x339 = INT8_MAX;

    t79 = ((x337!=x338)+(x339|x340));

    if (t79 != 128) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x341 = -1;
	int64_t x343 = INT64_MIN;
	volatile int64_t t80 = 6617155LL;

    t80 = ((x341!=x342)+(x343|x344));

    if (t80 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x345 = -18;
	int64_t x347 = 433120LL;
	volatile int64_t x348 = 1549753798LL;
	volatile int64_t t81 = -27968893588340307LL;

    t81 = ((x345!=x346)+(x347|x348));

    if (t81 != 1549787111LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x349 = 8111661960675924LL;
	static uint64_t x350 = 124115LLU;
	int64_t x351 = -1LL;
	volatile int8_t x352 = INT8_MIN;
	volatile int64_t t82 = -214035808LL;

    t82 = ((x349!=x350)+(x351|x352));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x354 = 90U;
	int8_t x355 = 0;
	volatile uint16_t x356 = 19089U;
	static int32_t t83 = 274057;

    t83 = ((x353!=x354)+(x355|x356));

    if (t83 != 19090) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x357 = INT64_MIN;
	uint64_t x358 = UINT64_MAX;
	int16_t x359 = 0;
	static volatile int32_t x360 = -223731;
	int32_t t84 = 713;

    t84 = ((x357!=x358)+(x359|x360));

    if (t84 != -223730) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x361 = INT64_MIN;
	static volatile int8_t x362 = INT8_MIN;
	int32_t t85 = -511251344;

    t85 = ((x361!=x362)+(x363|x364));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x366 = 7;
	uint64_t x367 = UINT64_MAX;
	int64_t x368 = INT64_MIN;
	volatile uint64_t t86 = 3196269696LLU;

    t86 = ((x365!=x366)+(x367|x368));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x369 = 130768131;
	uint16_t x370 = UINT16_MAX;
	int64_t x371 = INT64_MIN;
	int16_t x372 = INT16_MIN;
	static volatile int64_t t87 = 57687795825166132LL;

    t87 = ((x369!=x370)+(x371|x372));

    if (t87 != -32767LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x373 = INT16_MIN;
	volatile int64_t x374 = -1LL;
	uint32_t x375 = UINT32_MAX;
	int16_t x376 = -1;
	static volatile uint32_t t88 = 8771811U;

    t88 = ((x373!=x374)+(x375|x376));

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x381 = 3;
	int16_t x382 = 3642;
	static int32_t x383 = INT32_MIN;
	volatile uint8_t x384 = 0U;
	volatile int32_t t89 = -26401;

    t89 = ((x381!=x382)+(x383|x384));

    if (t89 != -2147483647) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x387 = -1LL;
	uint8_t x388 = 7U;
	int64_t t90 = -552897994835844986LL;

    t90 = ((x385!=x386)+(x387|x388));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x389 = -14;
	uint8_t x390 = 5U;
	int16_t x391 = -1;
	static volatile int32_t t91 = -8563890;

    t91 = ((x389!=x390)+(x391|x392));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x393 = INT32_MIN;
	int32_t x394 = 0;
	uint32_t t92 = 1983U;

    t92 = ((x393!=x394)+(x395|x396));

    if (t92 != 256U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x398 = 1177475596U;
	static uint64_t x399 = 601059843LLU;
	int16_t x400 = INT16_MAX;
	volatile uint64_t t93 = 3834LLU;

    t93 = ((x397!=x398)+(x399|x400));

    if (t93 != 601063424LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x401 = 14LLU;
	static volatile int8_t x402 = INT8_MIN;
	uint32_t x403 = 10407768U;
	uint16_t x404 = 2U;
	static uint32_t t94 = 6423U;

    t94 = ((x401!=x402)+(x403|x404));

    if (t94 != 10407771U) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint8_t x406 = UINT8_MAX;
	volatile int64_t x407 = INT64_MIN;
	static int8_t x408 = -1;
	volatile int64_t t95 = -1LL;

    t95 = ((x405!=x406)+(x407|x408));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x409 = -1;
	static int16_t x410 = 1959;
	volatile int8_t x411 = -1;
	uint64_t x412 = UINT64_MAX;

    t96 = ((x409!=x410)+(x411|x412));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x414 = INT32_MIN;
	int8_t x415 = -1;
	static int32_t t97 = 0;

    t97 = ((x413!=x414)+(x415|x416));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x417 = 5812570LL;
	int32_t x420 = INT32_MIN;
	volatile int32_t t98 = 64113;

    t98 = ((x417!=x418)+(x419|x420));

    if (t98 != -2147483647) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x421 = INT64_MIN;
	int32_t x422 = INT32_MAX;
	uint64_t x423 = 811675891LLU;
	volatile uint16_t x424 = 9222U;
	volatile uint64_t t99 = 4653LLU;

    t99 = ((x421!=x422)+(x423|x424));

    if (t99 != 811676920LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x425 = 115755LL;
	static uint8_t x426 = 0U;
	uint8_t x427 = 46U;
	int32_t t100 = -18;

    t100 = ((x425!=x426)+(x427|x428));

    if (t100 != 256) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x430 = INT8_MAX;
	int16_t x432 = INT16_MIN;
	volatile int32_t t101 = 1;

    t101 = ((x429!=x430)+(x431|x432));

    if (t101 != -32765) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x433 = -1;
	volatile uint64_t x434 = 4LLU;
	volatile int32_t x435 = INT32_MAX;
	static uint64_t x436 = 1LLU;
	uint64_t t102 = 3017358701LLU;

    t102 = ((x433!=x434)+(x435|x436));

    if (t102 != 2147483648LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x438 = -1;
	uint16_t x439 = 185U;
	int16_t x440 = INT16_MIN;
	int32_t t103 = -26;

    t103 = ((x437!=x438)+(x439|x440));

    if (t103 != -32582) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x441 = -1;
	int16_t x442 = -5;
	uint64_t x443 = 6907998048955912838LLU;
	int64_t x444 = -253124480011588LL;
	uint64_t t104 = 21846LLU;

    t104 = ((x441!=x442)+(x443|x444));

    if (t104 != 18446528470065083071LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x445 = -1LL;
	int8_t x446 = -1;
	int16_t x447 = -1;
	static int32_t x448 = INT32_MAX;
	volatile int32_t t105 = -423;

    t105 = ((x445!=x446)+(x447|x448));

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint32_t x449 = UINT32_MAX;
	int16_t x450 = INT16_MAX;
	static int8_t x451 = 1;
	uint8_t x452 = 2U;
	volatile int32_t t106 = 23353039;

    t106 = ((x449!=x450)+(x451|x452));

    if (t106 != 4) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x454 = 15U;
	static volatile int8_t x455 = INT8_MIN;
	uint16_t x456 = UINT16_MAX;
	volatile int32_t t107 = -52242608;

    t107 = ((x453!=x454)+(x455|x456));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x457 = -1;
	int8_t x458 = INT8_MIN;
	uint16_t x460 = 593U;
	volatile int32_t t108 = 1566;

    t108 = ((x457!=x458)+(x459|x460));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile uint8_t x461 = 1U;
	int8_t x462 = -1;
	int32_t x463 = 0;
	int64_t x464 = -1LL;
	static int64_t t109 = 6303440218LL;

    t109 = ((x461!=x462)+(x463|x464));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x465 = INT16_MIN;
	volatile int64_t x466 = -1LL;
	volatile int64_t x467 = 1986024232391299LL;
	int64_t t110 = 16721031849LL;

    t110 = ((x465!=x466)+(x467|x468));

    if (t110 != -124LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x469 = INT16_MAX;
	static int16_t x470 = INT16_MAX;
	static int16_t x471 = INT16_MAX;
	static int16_t x472 = INT16_MIN;
	static int32_t t111 = 1;

    t111 = ((x469!=x470)+(x471|x472));

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile uint8_t x473 = 1U;
	int32_t x474 = 83259;
	volatile uint16_t x476 = 3U;

    t112 = ((x473!=x474)+(x475|x476));

    if (t112 != -1950496) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int8_t x478 = -17;
	int16_t x479 = -1;
	int32_t x480 = INT32_MIN;
	static volatile int32_t t113 = -476;

    t113 = ((x477!=x478)+(x479|x480));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x481 = 297046LLU;
	volatile uint64_t x482 = 42081451861776LLU;
	int8_t x483 = -16;
	volatile int32_t t114 = -12710610;

    t114 = ((x481!=x482)+(x483|x484));

    if (t114 != -15) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x485 = -18799831370664942LL;
	static int64_t x486 = INT64_MAX;
	int64_t x487 = 79431902556363LL;
	static int64_t x488 = INT64_MIN;
	volatile int64_t t115 = -2000LL;

    t115 = ((x485!=x486)+(x487|x488));

    if (t115 != -9223292604952219444LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x489 = UINT32_MAX;
	int32_t x490 = INT32_MAX;
	static int8_t x491 = INT8_MIN;
	uint16_t x492 = 3050U;
	volatile int32_t t116 = 4690008;

    t116 = ((x489!=x490)+(x491|x492));

    if (t116 != -21) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x493 = -35;
	int8_t x494 = -1;
	int64_t x495 = -61262000176539261LL;
	uint8_t x496 = 1U;
	volatile int64_t t117 = -29512693144421168LL;

    t117 = ((x493!=x494)+(x495|x496));

    if (t117 != -61262000176539260LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x497 = INT32_MIN;
	int64_t x499 = 66006540222LL;
	int16_t x500 = 849;
	static volatile int64_t t118 = 25LL;

    t118 = ((x497!=x498)+(x499|x500));

    if (t118 != 66006540288LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x501 = INT16_MAX;
	int16_t x502 = INT16_MIN;
	volatile uint64_t x503 = UINT64_MAX;
	uint64_t t119 = 538412548264918LLU;

    t119 = ((x501!=x502)+(x503|x504));

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x505 = INT64_MIN;
	volatile int64_t x507 = INT64_MIN;
	static int64_t x508 = INT64_MAX;
	int64_t t120 = -9012325151LL;

    t120 = ((x505!=x506)+(x507|x508));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x509 = INT8_MIN;
	int16_t x510 = -1;
	volatile int8_t x511 = INT8_MIN;
	int16_t x512 = INT16_MIN;
	int32_t t121 = -704239;

    t121 = ((x509!=x510)+(x511|x512));

    if (t121 != -127) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x513 = INT32_MAX;
	int32_t x515 = -2;
	volatile int8_t x516 = -1;
	static volatile int32_t t122 = 27;

    t122 = ((x513!=x514)+(x515|x516));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x517 = INT32_MAX;
	int32_t x518 = INT32_MAX;
	int32_t x519 = INT32_MIN;
	static int16_t x520 = INT16_MIN;
	int32_t t123 = -2233240;

    t123 = ((x517!=x518)+(x519|x520));

    if (t123 != -32768) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int8_t x521 = 10;
	uint16_t x522 = 1310U;
	int16_t x523 = -45;
	int32_t t124 = 3;

    t124 = ((x521!=x522)+(x523|x524));

    if (t124 != -44) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x529 = 403LLU;
	uint16_t x530 = 13959U;
	uint64_t x531 = 102385193LLU;
	uint8_t x532 = 26U;
	uint64_t t125 = 1934LLU;

    t125 = ((x529!=x530)+(x531|x532));

    if (t125 != 102385212LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x533 = INT8_MIN;
	int64_t x534 = INT64_MAX;
	int16_t x535 = INT16_MIN;
	int8_t x536 = INT8_MIN;
	volatile int32_t t126 = 1;

    t126 = ((x533!=x534)+(x535|x536));

    if (t126 != -127) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x537 = 17U;
	static int16_t x538 = -40;
	static volatile uint16_t x539 = 2825U;
	int8_t x540 = INT8_MAX;
	volatile int32_t t127 = 74;

    t127 = ((x537!=x538)+(x539|x540));

    if (t127 != 2944) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x541 = INT16_MIN;
	int16_t x542 = -50;
	static uint32_t x543 = 114125U;
	int32_t x544 = 366342649;

    t128 = ((x541!=x542)+(x543|x544));

    if (t128 != 366345726U) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x546 = 959;
	volatile int16_t x547 = -3;
	int16_t x548 = -7274;
	int32_t t129 = -4966;

    t129 = ((x545!=x546)+(x547|x548));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int64_t x549 = INT64_MIN;
	volatile uint32_t x552 = UINT32_MAX;

    t130 = ((x549!=x550)+(x551|x552));

    if (t130 != UINT32_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x553 = 1U;
	int16_t x554 = 0;
	int32_t x555 = -13159;
	static int32_t x556 = INT32_MIN;
	int32_t t131 = -73506907;

    t131 = ((x553!=x554)+(x555|x556));

    if (t131 != -13158) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x557 = 212629875740LL;
	int16_t x558 = INT16_MAX;
	volatile uint32_t x559 = 910U;
	static int16_t x560 = INT16_MAX;
	static uint32_t t132 = 3720U;

    t132 = ((x557!=x558)+(x559|x560));

    if (t132 != 32768U) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint8_t x561 = UINT8_MAX;
	static volatile int8_t x563 = -1;

    t133 = ((x561!=x562)+(x563|x564));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x565 = 76622366609LL;
	uint64_t x566 = 88046173322893178LLU;
	int16_t x568 = INT16_MAX;
	int32_t t134 = -272;

    t134 = ((x565!=x566)+(x567|x568));

    if (t134 != 32768) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x569 = 9U;
	int32_t x570 = 119217692;
	static volatile int64_t x572 = -9088996LL;

    t135 = ((x569!=x570)+(x571|x572));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x573 = 30602925463581173LL;
	static uint32_t x574 = 4511U;
	uint32_t x576 = UINT32_MAX;

    t136 = ((x573!=x574)+(x575|x576));

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x577 = INT8_MAX;
	int32_t x579 = INT32_MIN;
	int32_t t137 = -11354939;

    t137 = ((x577!=x578)+(x579|x580));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x581 = -2988;
	int32_t x582 = -1;
	int64_t x583 = 2329662LL;
	int64_t x584 = INT64_MIN;
	volatile int64_t t138 = 11646518LL;

    t138 = ((x581!=x582)+(x583|x584));

    if (t138 != -9223372036852446145LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x586 = 39U;
	static volatile int32_t x588 = -2310;
	volatile int32_t t139 = -428;

    t139 = ((x585!=x586)+(x587|x588));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int64_t x594 = 13243977LL;
	int8_t x595 = INT8_MIN;
	volatile int32_t t140 = 410;

    t140 = ((x593!=x594)+(x595|x596));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x597 = -1850743136310403619LL;
	static int8_t x598 = 60;
	static int64_t x599 = INT64_MIN;
	uint32_t x600 = 14U;

    t141 = ((x597!=x598)+(x599|x600));

    if (t141 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x602 = INT16_MAX;
	int8_t x603 = 14;
	static int16_t x604 = INT16_MIN;

    t142 = ((x601!=x602)+(x603|x604));

    if (t142 != -32753) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x605 = 75100437;
	int32_t x606 = -2055;
	volatile int32_t x607 = INT32_MIN;
	uint32_t t143 = 117745221U;

    t143 = ((x605!=x606)+(x607|x608));

    if (t143 != 2147483850U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x610 = 86U;
	volatile int64_t x612 = INT64_MIN;

    t144 = ((x609!=x610)+(x611|x612));

    if (t144 != -32767LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint8_t x614 = 1U;
	uint64_t x615 = 480120LLU;
	static int16_t x616 = INT16_MIN;

    t145 = ((x613!=x614)+(x615|x616));

    if (t145 != 18446744073709540217LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint8_t x617 = 6U;
	static volatile int64_t x618 = -757336178931312592LL;
	uint64_t x619 = UINT64_MAX;
	int16_t x620 = -85;
	uint64_t t146 = 381LLU;

    t146 = ((x617!=x618)+(x619|x620));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x622 = -716;
	static uint32_t x623 = UINT32_MAX;
	volatile int32_t x624 = -22;
	volatile uint32_t t147 = 13958U;

    t147 = ((x621!=x622)+(x623|x624));

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x625 = -1;
	int8_t x626 = INT8_MIN;
	int64_t x627 = INT64_MIN;
	volatile uint64_t x628 = UINT64_MAX;
	volatile uint64_t t148 = 64223540234LLU;

    t148 = ((x625!=x626)+(x627|x628));

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x629 = 417209LLU;
	uint64_t x630 = UINT64_MAX;
	static uint16_t x631 = UINT16_MAX;
	static int64_t x632 = 211238LL;
	int64_t t149 = -1951856669LL;

    t149 = ((x629!=x630)+(x631|x632));

    if (t149 != 262144LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x633 = -1;
	int16_t x634 = INT16_MIN;
	int64_t x635 = INT64_MIN;
	volatile uint32_t x636 = UINT32_MAX;
	int64_t t150 = -1462022498928822487LL;

    t150 = ((x633!=x634)+(x635|x636));

    if (t150 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x637 = 121479477U;
	volatile uint32_t x638 = UINT32_MAX;
	static int64_t x639 = INT64_MIN;
	int8_t x640 = -2;
	volatile int64_t t151 = 1130249354208259119LL;

    t151 = ((x637!=x638)+(x639|x640));

    if (t151 != -1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x642 = -293640254;
	int8_t x643 = -1;
	static uint16_t x644 = 25401U;
	static int32_t t152 = 842419;

    t152 = ((x641!=x642)+(x643|x644));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x645 = 31;
	int32_t x646 = 1698;
	volatile int64_t x647 = INT64_MIN;
	volatile int16_t x648 = INT16_MAX;

    t153 = ((x645!=x646)+(x647|x648));

    if (t153 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x651 = -25215901900LL;
	uint32_t x652 = 7338U;
	int64_t t154 = 179405793LL;

    t154 = ((x649!=x650)+(x651|x652));

    if (t154 != -25215901761LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x653 = 203LLU;
	int16_t x656 = -1;
	volatile int64_t t155 = 42447310807767LL;

    t155 = ((x653!=x654)+(x655|x656));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x658 = INT16_MIN;
	uint16_t x659 = 16U;
	uint8_t x660 = 78U;
	volatile int32_t t156 = -1;

    t156 = ((x657!=x658)+(x659|x660));

    if (t156 != 95) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x661 = INT8_MIN;
	int8_t x662 = -1;
	static uint8_t x663 = UINT8_MAX;
	int32_t x664 = -1;
	volatile int32_t t157 = 1;

    t157 = ((x661!=x662)+(x663|x664));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x666 = INT32_MIN;
	int8_t x668 = -1;
	volatile int32_t t158 = 43543;

    t158 = ((x665!=x666)+(x667|x668));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x669 = 1;
	static uint64_t x671 = 1731721580277439LLU;
	static int64_t x672 = INT64_MIN;
	static uint64_t t159 = 8291004033836537LLU;

    t159 = ((x669!=x670)+(x671|x672));

    if (t159 != 9225103758435053248LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x674 = -1;
	uint16_t x676 = 330U;
	int64_t t160 = -7323554118502064LL;

    t160 = ((x673!=x674)+(x675|x676));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x677 = 1;
	static int16_t x679 = INT16_MIN;
	uint64_t x680 = UINT64_MAX;
	static uint64_t t161 = 77645375938656LLU;

    t161 = ((x677!=x678)+(x679|x680));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x681 = INT64_MIN;
	static uint8_t x682 = 18U;
	static volatile uint16_t x683 = 16642U;
	int16_t x684 = -1;
	static volatile int32_t t162 = 6106;

    t162 = ((x681!=x682)+(x683|x684));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x685 = INT32_MAX;
	static int64_t x686 = -1LL;
	static int64_t x687 = -1LL;
	int32_t x688 = INT32_MIN;
	volatile int64_t t163 = 107653727286002527LL;

    t163 = ((x685!=x686)+(x687|x688));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x689 = -1;
	int32_t x690 = INT32_MIN;
	int64_t x691 = 14430508LL;
	static int8_t x692 = INT8_MIN;
	volatile int64_t t164 = 27250795846724613LL;

    t164 = ((x689!=x690)+(x691|x692));

    if (t164 != -83LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x694 = INT8_MIN;
	int8_t x696 = -1;

    t165 = ((x693!=x694)+(x695|x696));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x697 = INT8_MIN;
	volatile int64_t x698 = -1LL;
	uint16_t x699 = UINT16_MAX;
	int64_t x700 = INT64_MIN;

    t166 = ((x697!=x698)+(x699|x700));

    if (t166 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x701 = INT32_MAX;
	static volatile int16_t x703 = -22;
	static int64_t x704 = INT64_MIN;
	int64_t t167 = -6594LL;

    t167 = ((x701!=x702)+(x703|x704));

    if (t167 != -21LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x705 = INT64_MAX;
	int16_t x706 = INT16_MIN;
	int64_t x707 = INT64_MAX;
	uint64_t x708 = UINT64_MAX;

    t168 = ((x705!=x706)+(x707|x708));

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x717 = -115220641698005LL;
	volatile int32_t x718 = 30;
	int32_t x719 = 8292936;
	volatile uint64_t x720 = 52LLU;
	uint64_t t169 = 1439582615135656LLU;

    t169 = ((x717!=x718)+(x719|x720));

    if (t169 != 8292989LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x729 = INT64_MAX;
	int32_t x730 = -1;
	uint64_t x731 = UINT64_MAX;
	int8_t x732 = INT8_MIN;
	volatile uint64_t t170 = 50153272956LLU;

    t170 = ((x729!=x730)+(x731|x732));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x733 = INT8_MIN;
	int16_t x735 = INT16_MIN;
	uint64_t x736 = UINT64_MAX;
	volatile uint64_t t171 = 62326333822325LLU;

    t171 = ((x733!=x734)+(x735|x736));

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x737 = -1;
	int8_t x739 = -1;
	int64_t t172 = -1LL;

    t172 = ((x737!=x738)+(x739|x740));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x741 = INT8_MIN;
	static int16_t x742 = -1;
	int64_t x743 = -1LL;
	volatile int64_t x744 = INT64_MIN;
	int64_t t173 = -1026228090LL;

    t173 = ((x741!=x742)+(x743|x744));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x747 = -61;
	int8_t x748 = INT8_MIN;
	int32_t t174 = 311;

    t174 = ((x745!=x746)+(x747|x748));

    if (t174 != -60) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x749 = 6357530711680166LLU;
	static uint64_t x750 = 7687LLU;
	uint8_t x751 = 83U;
	uint32_t x752 = 791418919U;
	volatile uint32_t t175 = 1969293U;

    t175 = ((x749!=x750)+(x751|x752));

    if (t175 != 791419000U) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x753 = INT8_MAX;
	volatile uint64_t x754 = 2024LLU;
	int16_t x755 = INT16_MIN;
	static uint32_t x756 = 919U;
	uint32_t t176 = 41U;

    t176 = ((x753!=x754)+(x755|x756));

    if (t176 != 4294935448U) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x758 = -1LL;
	static uint8_t x759 = UINT8_MAX;
	int32_t x760 = INT32_MIN;
	volatile int32_t t177 = 1;

    t177 = ((x757!=x758)+(x759|x760));

    if (t177 != -2147483392) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x761 = INT32_MIN;
	static int64_t x762 = -7332LL;
	volatile int16_t x763 = -2767;
	int32_t x764 = INT32_MIN;
	int32_t t178 = 0;

    t178 = ((x761!=x762)+(x763|x764));

    if (t178 != -2766) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x769 = 7016284U;
	static uint32_t x770 = 119003U;
	volatile int64_t x771 = -1LL;
	static volatile uint32_t x772 = 1098395871U;
	int64_t t179 = 1955453LL;

    t179 = ((x769!=x770)+(x771|x772));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x775 = 30;
	uint8_t x776 = UINT8_MAX;
	int32_t t180 = 222190935;

    t180 = ((x773!=x774)+(x775|x776));

    if (t180 != 256) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x777 = 15U;
	int32_t x778 = INT32_MIN;
	int16_t x780 = 835;
	uint64_t t181 = 1LLU;

    t181 = ((x777!=x778)+(x779|x780));

    if (t181 != 222186898862869496LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x782 = -302497LL;
	volatile int64_t x783 = INT64_MIN;

    t182 = ((x781!=x782)+(x783|x784));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x785 = -1;
	int64_t x786 = -1LL;
	uint8_t x787 = UINT8_MAX;
	volatile int32_t x788 = 24047269;
	volatile int32_t t183 = 14;

    t183 = ((x785!=x786)+(x787|x788));

    if (t183 != 24047359) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x789 = INT64_MIN;
	uint32_t x790 = 56U;
	uint32_t x791 = UINT32_MAX;
	int32_t x792 = INT32_MIN;
	volatile uint32_t t184 = 62U;

    t184 = ((x789!=x790)+(x791|x792));

    if (t184 != 0U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x793 = 88U;
	int8_t x796 = INT8_MIN;
	volatile uint32_t t185 = 31230U;

    t185 = ((x793!=x794)+(x795|x796));

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x797 = INT64_MAX;
	static int8_t x798 = INT8_MAX;
	uint8_t x799 = 119U;
	uint16_t x800 = 685U;
	static int32_t t186 = -113226;

    t186 = ((x797!=x798)+(x799|x800));

    if (t186 != 768) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x801 = -1LL;
	volatile int16_t x802 = INT16_MAX;
	int16_t x803 = 2262;
	int8_t x804 = -1;
	int32_t t187 = -172;

    t187 = ((x801!=x802)+(x803|x804));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x805 = INT16_MIN;
	volatile int64_t x806 = 1197744068735046688LL;
	int64_t x807 = -1LL;

    t188 = ((x805!=x806)+(x807|x808));

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint16_t x809 = 1435U;
	static int32_t x810 = -1;
	static uint32_t x811 = UINT32_MAX;
	volatile uint8_t x812 = 7U;
	uint32_t t189 = 20068U;

    t189 = ((x809!=x810)+(x811|x812));

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x813 = 19046U;
	static int8_t x814 = INT8_MIN;
	int16_t x815 = -62;
	int32_t t190 = -738740414;

    t190 = ((x813!=x814)+(x815|x816));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x817 = INT64_MAX;
	uint32_t x818 = UINT32_MAX;
	static volatile int8_t x820 = -19;
	int32_t t191 = 8023216;

    t191 = ((x817!=x818)+(x819|x820));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x821 = 1;
	static int16_t x822 = INT16_MAX;
	int16_t x823 = -2615;
	int64_t t192 = 4104951228497287937LL;

    t192 = ((x821!=x822)+(x823|x824));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x825 = 3U;
	int16_t x826 = INT16_MIN;
	uint16_t x827 = 3U;
	int32_t t193 = -103;

    t193 = ((x825!=x826)+(x827|x828));

    if (t193 != -124) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x830 = INT64_MIN;
	int64_t x832 = INT64_MAX;
	static volatile int64_t t194 = -115578483LL;

    t194 = ((x829!=x830)+(x831|x832));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int16_t x833 = -1;
	int16_t x834 = -26;
	volatile uint32_t x835 = UINT32_MAX;
	static int64_t t195 = 69LL;

    t195 = ((x833!=x834)+(x835|x836));

    if (t195 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x837 = INT8_MIN;
	int8_t x838 = INT8_MIN;
	volatile uint16_t x839 = 555U;
	int32_t x840 = -248214;
	volatile int32_t t196 = -1540620;

    t196 = ((x837!=x838)+(x839|x840));

    if (t196 != -248213) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x841 = UINT16_MAX;
	int64_t x842 = 16321851216LL;
	int32_t x843 = -1;
	int8_t x844 = INT8_MIN;
	volatile int32_t t197 = 14756;

    t197 = ((x841!=x842)+(x843|x844));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x846 = INT64_MAX;
	int16_t x848 = INT16_MAX;
	volatile int32_t t198 = 63362;

    t198 = ((x845!=x846)+(x847|x848));

    if (t198 != -744325120) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint8_t x850 = 44U;
	volatile int32_t x851 = -48;
	volatile uint16_t x852 = 0U;
	static int32_t t199 = 58450517;

    t199 = ((x849!=x850)+(x851|x852));

    if (t199 != -47) { NG(); } else { ; }
	
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

