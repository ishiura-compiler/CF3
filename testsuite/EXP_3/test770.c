
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

static volatile int64_t x2 = INT64_MIN;
static uint16_t x6 = UINT16_MAX;
uint16_t x7 = UINT16_MAX;
volatile int16_t x13 = INT16_MAX;
int32_t x14 = 23358888;
int32_t x32 = INT32_MIN;
static uint64_t x36 = 2961151445771064848LLU;
uint64_t x38 = 2610440459148812LLU;
uint64_t x39 = 4170258LLU;
int32_t x40 = INT32_MIN;
uint64_t x46 = UINT64_MAX;
static int16_t x49 = INT16_MIN;
int8_t x54 = -13;
volatile int32_t x58 = 667911;
static volatile uint8_t x60 = UINT8_MAX;
uint32_t t14 = 9316U;
int64_t x62 = 4988008509231439LL;
int64_t x75 = 24615LL;
volatile int64_t t18 = 6672496130897538LL;
int64_t x79 = -1LL;
uint64_t x80 = UINT64_MAX;
uint64_t t19 = 912LLU;
int64_t t22 = 1915595076428LL;
static int64_t t23 = 518726006LL;
volatile int8_t x106 = INT8_MIN;
int32_t x109 = 0;
int8_t x110 = INT8_MAX;
int32_t x112 = INT32_MIN;
volatile int32_t t25 = -1661;
int8_t x114 = 0;
static volatile int32_t x116 = INT32_MIN;
int16_t x119 = 8439;
volatile uint16_t x127 = 46U;
static uint64_t x133 = 185746606785LLU;
volatile uint32_t x137 = 64313U;
int16_t x138 = INT16_MIN;
int16_t x146 = INT16_MAX;
uint8_t x150 = 49U;
uint16_t x153 = 1618U;
volatile int64_t x157 = -1LL;
int16_t x160 = INT16_MIN;
uint32_t x161 = 501240U;
uint16_t x163 = 3U;
static int16_t x172 = INT16_MIN;
volatile uint32_t t39 = UINT32_MAX;
uint8_t x174 = 19U;
volatile int64_t x177 = -11323288LL;
int64_t x180 = 669786818899LL;
static int32_t t42 = 693;
static uint16_t x197 = 852U;
static int16_t x200 = INT16_MIN;
int32_t t46 = 6;
int16_t x205 = 14017;
volatile int64_t x206 = 6454684592LL;
uint16_t x208 = 23523U;
int16_t x213 = INT16_MIN;
static volatile int16_t x215 = -1;
uint32_t x217 = 11U;
int32_t x218 = -1;
int64_t x220 = INT64_MIN;
static int64_t x231 = INT64_MIN;
uint16_t x236 = 1830U;
int32_t x245 = 13124;
volatile int32_t t58 = -152994;
volatile int32_t x250 = INT32_MAX;
static int32_t x252 = -1;
int32_t x255 = -65303895;
uint8_t x261 = 0U;
volatile int64_t x264 = -1LL;
volatile int64_t t62 = 62861385833LL;
int8_t x265 = INT8_MAX;
int16_t x267 = INT16_MIN;
int64_t t63 = 1815243843LL;
int8_t x270 = -15;
static int16_t x271 = INT16_MIN;
static volatile int16_t x283 = INT16_MIN;
volatile uint8_t x284 = UINT8_MAX;
static volatile int32_t t67 = -2207710;
static int16_t x286 = -1;
volatile int32_t x289 = INT32_MAX;
volatile int32_t x306 = -5745;
int16_t x315 = 1682;
uint32_t x316 = 256204957U;
static volatile int64_t x322 = INT64_MIN;
static int8_t x323 = -1;
uint8_t x333 = 1U;
int16_t x334 = -1;
int32_t x336 = -11580668;
int32_t x351 = INT32_MIN;
static uint16_t x352 = 14U;
volatile int8_t x359 = 3;
int64_t t84 = 540LL;
static int8_t x361 = INT8_MIN;
static int8_t x364 = INT8_MAX;
static int8_t x366 = INT8_MIN;
volatile int16_t x369 = INT16_MIN;
uint8_t x376 = 3U;
int16_t x381 = INT16_MAX;
int8_t x398 = -1;
uint16_t x403 = UINT16_MAX;
static int64_t x404 = INT64_MAX;
int8_t x411 = 0;
static int16_t x419 = INT16_MAX;
volatile int32_t t100 = -398365073;
volatile int16_t x437 = -1;
uint32_t x438 = 21181126U;
int64_t x441 = INT64_MAX;
static int16_t x447 = 4590;
int8_t x448 = -1;
int32_t x449 = -1;
int16_t x454 = INT16_MAX;
int8_t x456 = INT8_MAX;
int32_t t105 = 912226918;
volatile int16_t x463 = -1;
volatile int64_t x464 = INT64_MIN;
volatile int32_t x472 = INT32_MIN;
uint32_t x474 = 1505U;
static volatile uint64_t x476 = 8804296LLU;
int16_t x491 = -1086;
uint64_t t114 = UINT64_MAX;
uint16_t x497 = UINT16_MAX;
volatile uint32_t t115 = 42281U;
int8_t x502 = INT8_MIN;
volatile int64_t t117 = 91878642082LL;
volatile int16_t x515 = -1;
uint16_t x519 = 106U;
int32_t x521 = 24;
static volatile int32_t x528 = 1038271;
volatile uint32_t t122 = 260833309U;
volatile int64_t x529 = INT64_MAX;
static int64_t x530 = -1LL;
volatile uint8_t x540 = 8U;
volatile int64_t t126 = 16LL;
volatile int64_t t128 = 50250017LL;
volatile int32_t x553 = INT32_MIN;
int8_t x554 = -1;
volatile int32_t x563 = INT32_MAX;
int16_t x567 = INT16_MIN;
static int64_t t133 = -59513055689LL;
uint16_t x582 = 19162U;
uint64_t x584 = 8293320046LLU;
volatile uint32_t t138 = 117761411U;
uint16_t x597 = 3095U;
uint64_t x608 = 17956108LLU;
uint32_t x610 = 24970U;
int16_t x611 = INT16_MIN;
uint8_t x615 = 2U;
static int16_t x619 = -1013;
volatile int16_t x623 = -1;
int32_t t146 = 390835;
int64_t x628 = -1609852278273LL;
int64_t t148 = -212238309169275LL;
volatile uint64_t x641 = 1904566LLU;
volatile uint64_t x643 = 6852796721LLU;
int16_t x644 = -33;
uint32_t t153 = 1761893U;
int8_t x653 = INT8_MIN;
volatile int32_t x654 = INT32_MAX;
static int8_t x656 = INT8_MIN;
uint64_t x659 = 546928260LLU;
uint8_t x671 = UINT8_MAX;
int8_t x672 = INT8_MAX;
int16_t x677 = -76;
int64_t x688 = INT64_MIN;
int8_t x697 = -1;
uint64_t t163 = UINT64_MAX;
uint16_t x708 = 5U;
volatile uint32_t x712 = UINT32_MAX;
int8_t x717 = INT8_MAX;
int64_t t168 = -10893972343418LL;
uint16_t x729 = UINT16_MAX;
int8_t x730 = INT8_MIN;
volatile uint32_t x743 = 72175U;
int8_t x745 = INT8_MIN;
uint16_t x747 = 127U;
static uint16_t x748 = 136U;
volatile int64_t t175 = 4LL;
uint16_t x757 = 96U;
volatile uint64_t t177 = 40852299367LLU;
static uint16_t x767 = UINT16_MAX;
uint16_t x769 = 0U;
volatile int32_t t179 = 624;
static volatile int32_t x780 = -1;
int32_t x788 = INT32_MIN;
static uint64_t t183 = 1651767752831447356LLU;
uint32_t x791 = 1287U;
int16_t x798 = -1;
volatile int64_t t188 = 189LL;
int64_t x812 = -1LL;
int64_t t189 = 15896LL;
int64_t x816 = INT64_MAX;
static int16_t x818 = -1;
int8_t x822 = -1;
int64_t x824 = INT64_MIN;
int16_t x828 = INT16_MAX;
int32_t x829 = -10879128;
int64_t x836 = INT64_MAX;
volatile int64_t t195 = 201225440914568678LL;
int8_t x842 = INT8_MAX;
volatile int32_t t197 = -1912;
int8_t x847 = INT8_MIN;
int16_t x848 = 60;
static uint16_t x851 = 16121U;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	int16_t x3 = -1;
	static uint8_t x4 = UINT8_MAX;
	int64_t t0 = -2169876335049942LL;

    t0 = ((x1|x2)^(x3/x4));

    if (t0 != -2147483648LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = -3;
	volatile uint32_t x8 = 22U;
	static volatile uint32_t t1 = 1268883916U;

    t1 = ((x5|x6)^(x7/x8));

    if (t1 != 4294964317U) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = INT8_MIN;
	int32_t x10 = -856155;
	uint32_t x11 = 79878U;
	int32_t x12 = -9157;
	uint32_t t2 = 75234U;

    t2 = ((x9|x10)^(x11/x12));

    if (t2 != 4294967205U) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x15 = UINT8_MAX;
	int32_t x16 = INT32_MIN;
	int32_t t3 = -23945;

    t3 = ((x13|x14)^(x15/x16));

    if (t3 != 23363583) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x17 = 96774537468LLU;
	int16_t x18 = INT16_MIN;
	volatile int32_t x19 = INT32_MAX;
	int8_t x20 = INT8_MIN;
	static volatile uint64_t t4 = 30964529835LLU;

    t4 = ((x17|x18)^(x19/x20));

    if (t4 != 16761085LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MIN;
	uint64_t x22 = 6LLU;
	volatile int16_t x23 = INT16_MIN;
	int8_t x24 = -2;
	uint64_t t5 = 777314404LLU;

    t5 = ((x21|x22)^(x23/x24));

    if (t5 != 18446744073709535110LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 60U;
	int64_t x26 = -1LL;
	int8_t x27 = INT8_MIN;
	int64_t x28 = INT64_MIN;
	static int64_t t6 = -523300LL;

    t6 = ((x25|x26)^(x27/x28));

    if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = 36LLU;
	uint64_t x30 = 4802210978559LLU;
	volatile int8_t x31 = INT8_MIN;
	uint64_t t7 = 2369494188389443LLU;

    t7 = ((x29|x30)^(x31/x32));

    if (t7 != 4802210978559LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -47;
	static uint32_t x34 = 6363177U;
	int16_t x35 = INT16_MIN;
	static volatile uint64_t t8 = 177238262LLU;

    t8 = ((x33|x34)^(x35/x36));

    if (t8 != 4294967295LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = 226;
	uint64_t t9 = 19125383LLU;

    t9 = ((x37|x38)^(x39/x40));

    if (t9 != 2610440459149038LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x41 = 41U;
	volatile int32_t x42 = -213;
	int8_t x43 = INT8_MIN;
	int64_t x44 = 122012942LL;
	volatile int64_t t10 = 409127530949594142LL;

    t10 = ((x41|x42)^(x43/x44));

    if (t10 != -213LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile uint64_t x45 = UINT64_MAX;
	int16_t x47 = -1;
	int8_t x48 = -1;
	uint64_t t11 = 30855395997368LLU;

    t11 = ((x45|x46)^(x47/x48));

    if (t11 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x50 = 726576573;
	static int32_t x51 = INT32_MIN;
	uint16_t x52 = 7328U;
	static volatile int32_t t12 = 227546;

    t12 = ((x49|x50)^(x51/x52));

    if (t12 != 273144) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MAX;
	static volatile int32_t x55 = INT32_MAX;
	int16_t x56 = INT16_MAX;
	volatile int32_t t13 = -8614;

    t13 = ((x53|x54)^(x55/x56));

    if (t13 != -65539) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = -9661238;
	static uint32_t x59 = UINT32_MAX;

    t14 = ((x57|x58)^(x59/x60));

    if (t14 != 4268733646U) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = -1;
	int64_t x63 = 63951LL;
	volatile uint64_t x64 = UINT64_MAX;
	volatile uint64_t t15 = UINT64_MAX;

    t15 = ((x61|x62)^(x63/x64));

    if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = -1;
	volatile int64_t x66 = -1LL;
	volatile int16_t x67 = 1018;
	int8_t x68 = INT8_MIN;
	volatile int64_t t16 = 160101503392LL;

    t16 = ((x65|x66)^(x67/x68));

    if (t16 != 6LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MIN;
	uint8_t x70 = 2U;
	static int8_t x71 = INT8_MIN;
	volatile int8_t x72 = -1;
	static volatile int32_t t17 = -45608380;

    t17 = ((x69|x70)^(x71/x72));

    if (t17 != -2147483518) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	int8_t x74 = 1;
	int8_t x76 = -1;

    t18 = ((x73|x74)^(x75/x76));

    if (t18 != 2147459032LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x77 = INT32_MIN;
	uint8_t x78 = 0U;

    t19 = ((x77|x78)^(x79/x80));

    if (t19 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x81 = 0U;
	uint16_t x82 = 17238U;
	volatile int16_t x83 = -1;
	int8_t x84 = INT8_MIN;
	volatile int32_t t20 = 10632864;

    t20 = ((x81|x82)^(x83/x84));

    if (t20 != 17238) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = UINT64_MAX;
	int8_t x86 = INT8_MAX;
	uint16_t x87 = UINT16_MAX;
	int8_t x88 = -9;
	volatile uint64_t t21 = 1364213LLU;

    t21 = ((x85|x86)^(x87/x88));

    if (t21 != 7280LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x89 = INT32_MAX;
	volatile uint32_t x90 = 0U;
	int32_t x91 = INT32_MAX;
	int64_t x92 = -1LL;

    t22 = ((x89|x90)^(x91/x92));

    if (t22 != -2LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = INT32_MIN;
	int64_t x94 = INT64_MIN;
	static uint32_t x95 = 1U;
	int64_t x96 = INT64_MIN;

    t23 = ((x93|x94)^(x95/x96));

    if (t23 != -2147483648LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x105 = UINT32_MAX;
	uint32_t x107 = 27852281U;
	uint16_t x108 = 813U;
	volatile uint32_t t24 = 3U;

    t24 = ((x105|x106)^(x107/x108));

    if (t24 != 4294933037U) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x111 = INT16_MIN;

    t25 = ((x109|x110)^(x111/x112));

    if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x113 = INT8_MIN;
	int16_t x115 = -1;
	int32_t t26 = 1;

    t26 = ((x113|x114)^(x115/x116));

    if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x117 = INT8_MAX;
	int8_t x118 = 0;
	int32_t x120 = -27641;
	int32_t t27 = 23;

    t27 = ((x117|x118)^(x119/x120));

    if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x125 = INT64_MIN;
	static int32_t x126 = INT32_MIN;
	uint8_t x128 = 31U;
	volatile int64_t t28 = -126630537LL;

    t28 = ((x125|x126)^(x127/x128));

    if (t28 != -2147483647LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x129 = UINT16_MAX;
	uint16_t x130 = UINT16_MAX;
	volatile uint64_t x131 = UINT64_MAX;
	static int16_t x132 = -1;
	volatile uint64_t t29 = 638627LLU;

    t29 = ((x129|x130)^(x131/x132));

    if (t29 != 65534LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x134 = -7897;
	int16_t x135 = INT16_MIN;
	int32_t x136 = INT32_MAX;
	uint64_t t30 = 1913213LLU;

    t30 = ((x133|x134)^(x135/x136));

    if (t30 != 18446744073709546471LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x139 = 9728684287938LLU;
	static int16_t x140 = 1724;
	static volatile uint64_t t31 = 50LLU;

    t31 = ((x137|x138)^(x139/x140));

    if (t31 != 7241812727LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x141 = INT16_MIN;
	int32_t x142 = INT32_MIN;
	int8_t x143 = -14;
	int64_t x144 = INT64_MIN;
	int64_t t32 = -272320694LL;

    t32 = ((x141|x142)^(x143/x144));

    if (t32 != -32768LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x145 = 116;
	volatile int8_t x147 = INT8_MIN;
	int16_t x148 = INT16_MIN;
	static int32_t t33 = -433516;

    t33 = ((x145|x146)^(x147/x148));

    if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x149 = 27168358;
	volatile int16_t x151 = -12;
	int8_t x152 = 1;
	int32_t t34 = 3;

    t34 = ((x149|x150)^(x151/x152));

    if (t34 != -27168381) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x154 = 43810U;
	int16_t x155 = -1;
	int32_t x156 = INT32_MAX;
	volatile uint32_t t35 = 1316U;

    t35 = ((x153|x154)^(x155/x156));

    if (t35 != 44914U) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x158 = UINT8_MAX;
	uint8_t x159 = 79U;
	static volatile int64_t t36 = 901954083792LL;

    t36 = ((x157|x158)^(x159/x160));

    if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x162 = INT16_MAX;
	int32_t x164 = INT32_MIN;
	static uint32_t t37 = 25U;

    t37 = ((x161|x162)^(x163/x164));

    if (t37 != 524287U) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x165 = INT32_MIN;
	int16_t x166 = 1;
	int64_t x167 = -7LL;
	uint16_t x168 = 121U;
	int64_t t38 = 1LL;

    t38 = ((x165|x166)^(x167/x168));

    if (t38 != -2147483647LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x169 = INT32_MAX;
	int32_t x170 = INT32_MIN;
	uint32_t x171 = 1332909541U;

    t39 = ((x169|x170)^(x171/x172));

    if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x173 = 2U;
	uint32_t x175 = UINT32_MAX;
	int64_t x176 = -389993LL;
	int64_t t40 = -15826993LL;

    t40 = ((x173|x174)^(x175/x176));

    if (t40 != -11025LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x178 = INT64_MIN;
	int16_t x179 = INT16_MIN;
	volatile int64_t t41 = -2011592090004319LL;

    t41 = ((x177|x178)^(x179/x180));

    if (t41 != -11323288LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x181 = -8;
	int16_t x182 = -1;
	uint16_t x183 = 1183U;
	static uint16_t x184 = 142U;

    t42 = ((x181|x182)^(x183/x184));

    if (t42 != -9) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x185 = INT64_MIN;
	int32_t x186 = -1;
	uint32_t x187 = UINT32_MAX;
	volatile uint8_t x188 = 3U;
	static int64_t t43 = -2186545616983LL;

    t43 = ((x185|x186)^(x187/x188));

    if (t43 != -1431655766LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x189 = 254901782088LL;
	static uint8_t x190 = 28U;
	uint16_t x191 = UINT16_MAX;
	static uint64_t x192 = 91269245315LLU;
	uint64_t t44 = 113429349284534150LLU;

    t44 = ((x189|x190)^(x191/x192));

    if (t44 != 254901782108LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x193 = 19U;
	volatile int32_t x194 = INT32_MIN;
	int16_t x195 = -1;
	int8_t x196 = -1;
	int32_t t45 = 1;

    t45 = ((x193|x194)^(x195/x196));

    if (t45 != -2147483630) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x198 = 0;
	static int32_t x199 = -1353;

    t46 = ((x197|x198)^(x199/x200));

    if (t46 != 852) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x201 = INT16_MAX;
	uint8_t x202 = 0U;
	int8_t x203 = 0;
	uint8_t x204 = 1U;
	volatile int32_t t47 = 101;

    t47 = ((x201|x202)^(x203/x204));

    if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x207 = 169U;
	int64_t t48 = 16446817930072202LL;

    t48 = ((x205|x206)^(x207/x208));

    if (t48 != 6454689777LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x209 = 39596322U;
	uint16_t x210 = 90U;
	int64_t x211 = -1LL;
	int8_t x212 = INT8_MIN;
	volatile int64_t t49 = 1766561052667525LL;

    t49 = ((x209|x210)^(x211/x212));

    if (t49 != 39596410LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x214 = INT8_MIN;
	int32_t x216 = 320477848;
	volatile int32_t t50 = -262569443;

    t50 = ((x213|x214)^(x215/x216));

    if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x219 = 53844904493520LLU;
	uint64_t t51 = 3000307769865453LLU;

    t51 = ((x217|x218)^(x219/x220));

    if (t51 != 4294967295LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x221 = 430851169;
	int32_t x222 = INT32_MAX;
	volatile uint16_t x223 = 2U;
	int8_t x224 = -1;
	int32_t t52 = -7;

    t52 = ((x221|x222)^(x223/x224));

    if (t52 != -2147483647) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x225 = UINT64_MAX;
	uint16_t x226 = 981U;
	static uint8_t x227 = 0U;
	uint64_t x228 = UINT64_MAX;
	static uint64_t t53 = UINT64_MAX;

    t53 = ((x225|x226)^(x227/x228));

    if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x229 = INT32_MAX;
	uint32_t x230 = 6302U;
	int8_t x232 = INT8_MIN;
	static int64_t t54 = 42440LL;

    t54 = ((x229|x230)^(x231/x232));

    if (t54 != 72057596185411583LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x233 = -15;
	uint64_t x234 = 48642269145914LLU;
	int64_t x235 = INT64_MIN;
	volatile uint64_t t55 = 207402978310LLU;

    t55 = ((x233|x234)^(x235/x236));

    if (t55 != 5040094009210263LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int16_t x237 = -301;
	static int64_t x238 = INT64_MAX;
	static int32_t x239 = 386;
	int64_t x240 = INT64_MAX;
	static volatile int64_t t56 = -694407901125LL;

    t56 = ((x237|x238)^(x239/x240));

    if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int64_t x241 = INT64_MIN;
	int64_t x242 = INT64_MAX;
	int16_t x243 = INT16_MAX;
	int16_t x244 = 743;
	volatile int64_t t57 = 2479936016645943LL;

    t57 = ((x241|x242)^(x243/x244));

    if (t57 != -45LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x246 = 0U;
	static uint8_t x247 = 20U;
	int32_t x248 = INT32_MIN;

    t58 = ((x245|x246)^(x247/x248));

    if (t58 != 13124) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x249 = INT64_MIN;
	uint32_t x251 = UINT32_MAX;
	static volatile int64_t t59 = 6188459191LL;

    t59 = ((x249|x250)^(x251/x252));

    if (t59 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x253 = INT8_MIN;
	uint8_t x254 = 9U;
	int32_t x256 = -1;
	volatile int32_t t60 = -589;

    t60 = ((x253|x254)^(x255/x256));

    if (t60 != -65303842) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x257 = INT16_MIN;
	uint16_t x258 = 419U;
	uint8_t x259 = UINT8_MAX;
	int16_t x260 = INT16_MAX;
	volatile int32_t t61 = -339744;

    t61 = ((x257|x258)^(x259/x260));

    if (t61 != -32349) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x262 = UINT8_MAX;
	volatile int8_t x263 = -8;

    t62 = ((x261|x262)^(x263/x264));

    if (t62 != 247LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x266 = 525342459978126177LL;
	uint32_t x268 = UINT32_MAX;

    t63 = ((x265|x266)^(x267/x268));

    if (t63 != 525342459978126207LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x269 = 31471076LLU;
	uint8_t x272 = 41U;
	uint64_t t64 = 24LLU;

    t64 = ((x269|x270)^(x271/x272));

    if (t64 != 788LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x273 = INT8_MIN;
	int16_t x274 = 0;
	uint64_t x275 = UINT64_MAX;
	volatile int32_t x276 = -1;
	volatile uint64_t t65 = 81849LLU;

    t65 = ((x273|x274)^(x275/x276));

    if (t65 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x277 = 7530U;
	uint32_t x278 = 1276409048U;
	int64_t x279 = 436LL;
	uint8_t x280 = 4U;
	int64_t t66 = 7752LL;

    t66 = ((x277|x278)^(x279/x280));

    if (t66 != 1276411287LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x281 = INT32_MIN;
	int32_t x282 = 1;

    t67 = ((x281|x282)^(x283/x284));

    if (t67 != 2147483521) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x285 = UINT8_MAX;
	volatile int16_t x287 = INT16_MIN;
	int64_t x288 = -2654023926LL;
	int64_t t68 = 681LL;

    t68 = ((x285|x286)^(x287/x288));

    if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x290 = INT8_MIN;
	uint8_t x291 = 1U;
	int16_t x292 = 7770;
	static int32_t t69 = -15394466;

    t69 = ((x289|x290)^(x291/x292));

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x293 = UINT32_MAX;
	uint16_t x294 = UINT16_MAX;
	int32_t x295 = INT32_MAX;
	int64_t x296 = -353433LL;
	int64_t t70 = -2LL;

    t70 = ((x293|x294)^(x295/x296));

    if (t70 != -4294961221LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x297 = 1;
	int8_t x298 = -1;
	volatile uint8_t x299 = 8U;
	uint8_t x300 = 118U;
	static int32_t t71 = 1;

    t71 = ((x297|x298)^(x299/x300));

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x301 = INT8_MAX;
	volatile int64_t x302 = INT64_MIN;
	static int8_t x303 = INT8_MIN;
	volatile int8_t x304 = -1;
	volatile int64_t t72 = -25359937676LL;

    t72 = ((x301|x302)^(x303/x304));

    if (t72 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x305 = 5;
	uint32_t x307 = 88142U;
	int32_t x308 = -1;
	uint32_t t73 = 6039141U;

    t73 = ((x305|x306)^(x307/x308));

    if (t73 != 4294961551U) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x309 = 152225U;
	volatile int32_t x310 = INT32_MAX;
	int32_t x311 = -1;
	int8_t x312 = 9;
	uint32_t t74 = 56520U;

    t74 = ((x309|x310)^(x311/x312));

    if (t74 != 2147483647U) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x313 = INT32_MIN;
	static int64_t x314 = INT64_MIN;
	int64_t t75 = 22012544982785604LL;

    t75 = ((x313|x314)^(x315/x316));

    if (t75 != -2147483648LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x317 = INT64_MAX;
	int32_t x318 = INT32_MIN;
	int16_t x319 = -1;
	int8_t x320 = -24;
	int64_t t76 = -227478811LL;

    t76 = ((x317|x318)^(x319/x320));

    if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x321 = INT16_MIN;
	int8_t x324 = -1;
	int64_t t77 = -30350924798649LL;

    t77 = ((x321|x322)^(x323/x324));

    if (t77 != -32767LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x329 = UINT32_MAX;
	static int32_t x330 = INT32_MIN;
	static uint16_t x331 = 5895U;
	int32_t x332 = INT32_MIN;
	volatile uint32_t t78 = UINT32_MAX;

    t78 = ((x329|x330)^(x331/x332));

    if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x335 = INT16_MAX;
	static int32_t t79 = 89996;

    t79 = ((x333|x334)^(x335/x336));

    if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x337 = -59372156270LL;
	volatile int32_t x338 = INT32_MIN;
	int8_t x339 = INT8_MIN;
	uint64_t x340 = 430088570499LLU;
	uint64_t t80 = 3693360543591LLU;

    t80 = ((x337|x338)^(x339/x340));

    if (t80 != 18446744072361787352LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x341 = INT64_MAX;
	int8_t x342 = 1;
	uint16_t x343 = UINT16_MAX;
	static uint8_t x344 = 3U;
	volatile int64_t t81 = 2226195193834242LL;

    t81 = ((x341|x342)^(x343/x344));

    if (t81 != 9223372036854753962LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x345 = -1;
	int16_t x346 = -399;
	uint64_t x347 = 20267LLU;
	int8_t x348 = INT8_MIN;
	static uint64_t t82 = UINT64_MAX;

    t82 = ((x345|x346)^(x347/x348));

    if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x349 = 15;
	volatile int32_t x350 = -783617577;
	volatile int32_t t83 = -2454267;

    t83 = ((x349|x350)^(x351/x352));

    if (t83 != 663854184) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x357 = INT64_MIN;
	uint8_t x358 = UINT8_MAX;
	uint16_t x360 = 18501U;

    t84 = ((x357|x358)^(x359/x360));

    if (t84 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x362 = -1;
	int32_t x363 = 42;
	static int32_t t85 = -112809292;

    t85 = ((x361|x362)^(x363/x364));

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x365 = UINT8_MAX;
	volatile int32_t x367 = 216079;
	int32_t x368 = INT32_MIN;
	int32_t t86 = 727;

    t86 = ((x365|x366)^(x367/x368));

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint8_t x370 = UINT8_MAX;
	static int8_t x371 = -1;
	volatile int8_t x372 = INT8_MAX;
	static int32_t t87 = 717499;

    t87 = ((x369|x370)^(x371/x372));

    if (t87 != -32513) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x373 = -1;
	uint64_t x374 = 60LLU;
	int8_t x375 = -1;
	volatile uint64_t t88 = UINT64_MAX;

    t88 = ((x373|x374)^(x375/x376));

    if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint64_t x382 = 78LLU;
	static volatile int8_t x383 = -1;
	int64_t x384 = INT64_MAX;
	volatile uint64_t t89 = 1623179791524763390LLU;

    t89 = ((x381|x382)^(x383/x384));

    if (t89 != 32767LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x385 = -1;
	int16_t x386 = INT16_MAX;
	volatile int8_t x387 = -1;
	volatile uint16_t x388 = 7U;
	volatile int32_t t90 = -14;

    t90 = ((x385|x386)^(x387/x388));

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x389 = INT16_MIN;
	static int8_t x390 = INT8_MIN;
	volatile uint16_t x391 = 98U;
	int32_t x392 = INT32_MIN;
	int32_t t91 = -237644;

    t91 = ((x389|x390)^(x391/x392));

    if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x393 = 0LLU;
	int32_t x394 = INT32_MIN;
	int16_t x395 = INT16_MAX;
	uint16_t x396 = 524U;
	static uint64_t t92 = 3LLU;

    t92 = ((x393|x394)^(x395/x396));

    if (t92 != 18446744071562068030LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x397 = INT32_MAX;
	uint32_t x399 = UINT32_MAX;
	uint64_t x400 = 186603049LLU;
	volatile uint64_t t93 = 1500202LLU;

    t93 = ((x397|x398)^(x399/x400));

    if (t93 != 18446744073709551592LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x401 = INT8_MIN;
	int16_t x402 = INT16_MIN;
	int64_t t94 = 53278662463239639LL;

    t94 = ((x401|x402)^(x403/x404));

    if (t94 != -128LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint8_t x409 = 93U;
	volatile int64_t x410 = -355LL;
	uint16_t x412 = 5502U;
	volatile int64_t t95 = 5845062757246099LL;

    t95 = ((x409|x410)^(x411/x412));

    if (t95 != -291LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x413 = -5570453;
	uint8_t x414 = 78U;
	int32_t x415 = -1;
	static volatile uint32_t x416 = 19U;
	volatile uint32_t t96 = 82605059U;

    t96 = ((x413|x414)^(x415/x416));

    if (t96 != 4073866033U) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x417 = INT8_MIN;
	volatile uint16_t x418 = 322U;
	uint8_t x420 = 2U;
	volatile int32_t t97 = 901601;

    t97 = ((x417|x418)^(x419/x420));

    if (t97 != -16323) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x421 = INT32_MAX;
	int16_t x422 = -1;
	int16_t x423 = INT16_MIN;
	volatile int8_t x424 = 17;
	static volatile int32_t t98 = 2581;

    t98 = ((x421|x422)^(x423/x424));

    if (t98 != 1926) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x425 = 16U;
	uint64_t x426 = 35544LLU;
	int8_t x427 = -1;
	int32_t x428 = -1;
	volatile uint64_t t99 = 2320LLU;

    t99 = ((x425|x426)^(x427/x428));

    if (t99 != 35545LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x433 = UINT16_MAX;
	static volatile int32_t x434 = -5540;
	int16_t x435 = -7004;
	int16_t x436 = 2990;

    t100 = ((x433|x434)^(x435/x436));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x439 = INT8_MAX;
	volatile int16_t x440 = INT16_MIN;
	volatile uint32_t t101 = UINT32_MAX;

    t101 = ((x437|x438)^(x439/x440));

    if (t101 != UINT32_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x442 = 47LL;
	uint8_t x443 = UINT8_MAX;
	int8_t x444 = INT8_MIN;
	int64_t t102 = INT64_MIN;

    t102 = ((x441|x442)^(x443/x444));

    if (t102 != INT64_MIN) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x445 = 3;
	int32_t x446 = -269940961;
	int32_t t103 = -36;

    t103 = ((x445|x446)^(x447/x448));

    if (t103 != 269936909) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x450 = INT64_MIN;
	int64_t x451 = -1LL;
	volatile int64_t x452 = -139686246096331LL;
	volatile int64_t t104 = 8019821725LL;

    t104 = ((x449|x450)^(x451/x452));

    if (t104 != -1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x453 = -1327;
	int32_t x455 = INT32_MAX;

    t105 = ((x453|x454)^(x455/x456));

    if (t105 != -16909321) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int64_t x457 = 41638338045LL;
	volatile int64_t x458 = INT64_MIN;
	int64_t x459 = 7328101796625LL;
	static int16_t x460 = -252;
	int64_t t106 = 21333101250LL;

    t106 = ((x457|x458)^(x459/x460));

    if (t106 != 9223371970473848267LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x461 = INT16_MIN;
	int16_t x462 = 12993;
	int64_t t107 = -184786LL;

    t107 = ((x461|x462)^(x463/x464));

    if (t107 != -19775LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x465 = -1;
	static uint32_t x466 = 109U;
	int32_t x467 = -1;
	static volatile int32_t x468 = INT32_MIN;
	uint32_t t108 = UINT32_MAX;

    t108 = ((x465|x466)^(x467/x468));

    if (t108 != UINT32_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x469 = -1;
	static int64_t x470 = INT64_MIN;
	int8_t x471 = 3;
	volatile int64_t t109 = -438814LL;

    t109 = ((x469|x470)^(x471/x472));

    if (t109 != -1LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x473 = -12145113604007LL;
	static uint16_t x475 = 1084U;
	volatile uint64_t t110 = 27181042LLU;

    t110 = ((x473|x474)^(x475/x476));

    if (t110 != 18446731928595949049LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x477 = 1LL;
	static int32_t x478 = INT32_MIN;
	static volatile int32_t x479 = INT32_MAX;
	int32_t x480 = -1;
	static volatile int64_t t111 = 38419LL;

    t111 = ((x477|x478)^(x479/x480));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x485 = 0U;
	volatile uint64_t x486 = 843LLU;
	int32_t x487 = 2523287;
	volatile uint8_t x488 = 1U;
	static uint64_t t112 = 132342542955LLU;

    t112 = ((x485|x486)^(x487/x488));

    if (t112 != 2524124LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x489 = 9U;
	static int32_t x490 = -4406570;
	volatile int64_t x492 = INT64_MIN;
	int64_t t113 = 14945659LL;

    t113 = ((x489|x490)^(x491/x492));

    if (t113 != -4406561LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x493 = UINT64_MAX;
	volatile int16_t x494 = INT16_MIN;
	int32_t x495 = 11159;
	int64_t x496 = INT64_MAX;

    t114 = ((x493|x494)^(x495/x496));

    if (t114 != UINT64_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x498 = -1;
	int32_t x499 = INT32_MAX;
	uint32_t x500 = 1971620693U;

    t115 = ((x497|x498)^(x499/x500));

    if (t115 != 4294967294U) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x501 = 98U;
	volatile int32_t x503 = -1;
	int64_t x504 = INT64_MIN;
	volatile int64_t t116 = -52LL;

    t116 = ((x501|x502)^(x503/x504));

    if (t116 != -30LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint32_t x505 = UINT32_MAX;
	int32_t x506 = -1;
	int8_t x507 = 1;
	int64_t x508 = INT64_MIN;

    t117 = ((x505|x506)^(x507/x508));

    if (t117 != 4294967295LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x509 = UINT8_MAX;
	static int16_t x510 = INT16_MIN;
	int32_t x511 = INT32_MIN;
	int16_t x512 = INT16_MIN;
	volatile int32_t t118 = -236207818;

    t118 = ((x509|x510)^(x511/x512));

    if (t118 != -98049) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x513 = INT32_MIN;
	int64_t x514 = 9LL;
	int64_t x516 = INT64_MIN;
	static int64_t t119 = 241070785081727LL;

    t119 = ((x513|x514)^(x515/x516));

    if (t119 != -2147483639LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x517 = INT8_MIN;
	int32_t x518 = INT32_MIN;
	uint32_t x520 = UINT32_MAX;
	static uint32_t t120 = 10U;

    t120 = ((x517|x518)^(x519/x520));

    if (t120 != 4294967168U) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x522 = INT8_MAX;
	int64_t x523 = INT64_MAX;
	volatile uint16_t x524 = 7U;
	volatile int64_t t121 = -17320451631310644LL;

    t121 = ((x521|x522)^(x523/x524));

    if (t121 != 1317624576693539382LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x525 = -248;
	int16_t x526 = INT16_MIN;
	volatile uint32_t x527 = 23182U;

    t122 = ((x525|x526)^(x527/x528));

    if (t122 != 4294967048U) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x531 = 1U;
	int32_t x532 = -1;
	static int64_t t123 = 3128194LL;

    t123 = ((x529|x530)^(x531/x532));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x533 = INT16_MIN;
	uint8_t x534 = 0U;
	int8_t x535 = 0;
	static volatile uint64_t x536 = 2085648LLU;
	uint64_t t124 = 302032422041025LLU;

    t124 = ((x533|x534)^(x535/x536));

    if (t124 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x537 = -1;
	static volatile int16_t x538 = -1;
	uint32_t x539 = UINT32_MAX;
	uint32_t t125 = 32162000U;

    t125 = ((x537|x538)^(x539/x540));

    if (t125 != 3758096384U) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x541 = -1LL;
	int16_t x542 = 1;
	volatile uint32_t x543 = 122938535U;
	volatile int64_t x544 = INT64_MIN;

    t126 = ((x541|x542)^(x543/x544));

    if (t126 != -1LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint32_t x545 = UINT32_MAX;
	uint64_t x546 = 251906LLU;
	uint16_t x547 = 25U;
	int16_t x548 = INT16_MIN;
	static volatile uint64_t t127 = 13964696LLU;

    t127 = ((x545|x546)^(x547/x548));

    if (t127 != 4294967295LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x549 = -2;
	uint8_t x550 = 115U;
	volatile int64_t x551 = 1585489208LL;
	int64_t x552 = 2919183117190LL;

    t128 = ((x549|x550)^(x551/x552));

    if (t128 != -1LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x555 = UINT16_MAX;
	int16_t x556 = -1;
	static volatile int32_t t129 = 650625316;

    t129 = ((x553|x554)^(x555/x556));

    if (t129 != 65534) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x557 = INT8_MIN;
	int8_t x558 = INT8_MIN;
	int16_t x559 = -1;
	uint64_t x560 = UINT64_MAX;
	static volatile uint64_t t130 = 0LLU;

    t130 = ((x557|x558)^(x559/x560));

    if (t130 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint32_t x561 = UINT32_MAX;
	int16_t x562 = INT16_MIN;
	volatile uint8_t x564 = 45U;
	static volatile uint32_t t131 = 49U;

    t131 = ((x561|x562)^(x563/x564));

    if (t131 != 4247245437U) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x565 = INT64_MIN;
	static int16_t x566 = -758;
	int8_t x568 = INT8_MAX;
	int64_t t132 = 3372126LL;

    t132 = ((x565|x566)^(x567/x568));

    if (t132 != 1012LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x569 = -1LL;
	int8_t x570 = INT8_MIN;
	uint32_t x571 = 162U;
	int16_t x572 = INT16_MIN;

    t133 = ((x569|x570)^(x571/x572));

    if (t133 != -1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x573 = INT32_MIN;
	int8_t x574 = -15;
	int8_t x575 = -1;
	int16_t x576 = INT16_MIN;
	volatile int32_t t134 = -22091320;

    t134 = ((x573|x574)^(x575/x576));

    if (t134 != -15) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x577 = 94U;
	int8_t x578 = -1;
	int64_t x579 = 788963899457454463LL;
	uint16_t x580 = UINT16_MAX;
	volatile int64_t t135 = 224099403LL;

    t135 = ((x577|x578)^(x579/x580));

    if (t135 != -12038817417525LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x581 = INT16_MIN;
	static int32_t x583 = INT32_MIN;
	uint64_t t136 = 485975LLU;

    t136 = ((x581|x582)^(x583/x584));

    if (t136 != 18446744071485275210LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x585 = 2LL;
	uint64_t x586 = 57966LLU;
	int16_t x587 = -5417;
	uint8_t x588 = 13U;
	uint64_t t137 = 57197LLU;

    t137 = ((x585|x586)^(x587/x588));

    if (t137 != 18446744073709493262LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x589 = -265394;
	static uint16_t x590 = 113U;
	int16_t x591 = -1;
	static uint32_t x592 = UINT32_MAX;

    t138 = ((x589|x590)^(x591/x592));

    if (t138 != 4294701950U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x593 = UINT32_MAX;
	int8_t x594 = -1;
	int64_t x595 = INT64_MIN;
	volatile int32_t x596 = INT32_MIN;
	int64_t t139 = -26840662598935LL;

    t139 = ((x593|x594)^(x595/x596));

    if (t139 != 8589934591LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x598 = 1U;
	int8_t x599 = -1;
	int32_t x600 = INT32_MIN;
	volatile int32_t t140 = 14;

    t140 = ((x597|x598)^(x599/x600));

    if (t140 != 3095) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x601 = INT64_MAX;
	volatile int32_t x602 = INT32_MIN;
	int16_t x603 = 4;
	uint32_t x604 = UINT32_MAX;
	volatile int64_t t141 = 680024LL;

    t141 = ((x601|x602)^(x603/x604));

    if (t141 != -1LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x605 = -1LL;
	int64_t x606 = -275LL;
	static uint32_t x607 = 34597U;
	uint64_t t142 = UINT64_MAX;

    t142 = ((x605|x606)^(x607/x608));

    if (t142 != UINT64_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x609 = -1;
	uint32_t x612 = UINT32_MAX;
	volatile uint32_t t143 = UINT32_MAX;

    t143 = ((x609|x610)^(x611/x612));

    if (t143 != UINT32_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x613 = UINT64_MAX;
	int64_t x614 = -416931859876833090LL;
	volatile uint64_t x616 = 12036589898261176LLU;
	uint64_t t144 = UINT64_MAX;

    t144 = ((x613|x614)^(x615/x616));

    if (t144 != UINT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x617 = -2;
	int16_t x618 = INT16_MIN;
	static int16_t x620 = INT16_MIN;
	int32_t t145 = 462389455;

    t145 = ((x617|x618)^(x619/x620));

    if (t145 != -2) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int32_t x621 = INT32_MIN;
	int16_t x622 = -1;
	int32_t x624 = INT32_MIN;

    t146 = ((x621|x622)^(x623/x624));

    if (t146 != -1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x625 = INT8_MIN;
	int8_t x626 = -1;
	static int8_t x627 = INT8_MIN;
	int64_t t147 = -239576LL;

    t147 = ((x625|x626)^(x627/x628));

    if (t147 != -1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x629 = -1;
	int8_t x630 = INT8_MAX;
	static int8_t x631 = INT8_MIN;
	int64_t x632 = -612691645759LL;

    t148 = ((x629|x630)^(x631/x632));

    if (t148 != -1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x633 = INT8_MIN;
	int64_t x634 = -1LL;
	volatile int8_t x635 = INT8_MIN;
	uint32_t x636 = UINT32_MAX;
	volatile int64_t t149 = -6562298LL;

    t149 = ((x633|x634)^(x635/x636));

    if (t149 != -1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x637 = 1599641449U;
	uint32_t x638 = 29882540U;
	static int64_t x639 = -489884781474719LL;
	uint8_t x640 = 2U;
	int64_t t150 = -27815124315319589LL;

    t150 = ((x637|x638)^(x639/x640));

    if (t150 != -244943191754276LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x642 = -1;
	static volatile uint64_t t151 = UINT64_MAX;

    t151 = ((x641|x642)^(x643/x644));

    if (t151 != UINT64_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x645 = -1;
	int64_t x646 = -12148138145890LL;
	uint8_t x647 = UINT8_MAX;
	uint32_t x648 = 256U;
	int64_t t152 = 37409873415LL;

    t152 = ((x645|x646)^(x647/x648));

    if (t152 != -1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x649 = 5U;
	volatile int8_t x650 = INT8_MAX;
	int32_t x651 = 46252448;
	uint16_t x652 = 39U;

    t153 = ((x649|x650)^(x651/x652));

    if (t153 != 1186007U) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x655 = 0;
	volatile int32_t t154 = 1;

    t154 = ((x653|x654)^(x655/x656));

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x657 = INT64_MAX;
	volatile int32_t x658 = 839431806;
	int32_t x660 = INT32_MIN;
	static volatile uint64_t t155 = 175845760757772994LLU;

    t155 = ((x657|x658)^(x659/x660));

    if (t155 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x665 = 28U;
	int64_t x666 = INT64_MIN;
	int64_t x667 = -1LL;
	static int64_t x668 = -74102059LL;
	volatile int64_t t156 = -30858LL;

    t156 = ((x665|x666)^(x667/x668));

    if (t156 != -9223372036854775780LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x669 = INT64_MAX;
	int64_t x670 = INT64_MIN;
	int64_t t157 = 752343315077061769LL;

    t157 = ((x669|x670)^(x671/x672));

    if (t157 != -3LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x673 = -28428;
	volatile uint32_t x674 = 1172489U;
	static int32_t x675 = -1;
	int8_t x676 = INT8_MAX;
	static uint32_t t158 = 11671613U;

    t158 = ((x673|x674)^(x675/x676));

    if (t158 != 4294964477U) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x678 = 31;
	int16_t x679 = INT16_MAX;
	int64_t x680 = INT64_MIN;
	int64_t t159 = -1059121075793510LL;

    t159 = ((x677|x678)^(x679/x680));

    if (t159 != -65LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x681 = -1332;
	int64_t x682 = INT64_MIN;
	volatile int64_t x683 = INT64_MIN;
	uint16_t x684 = UINT16_MAX;
	volatile int64_t t160 = -1LL;

    t160 = ((x681|x682)^(x683/x684));

    if (t160 != 140739635870412LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x685 = 8;
	volatile uint16_t x686 = 8948U;
	static int16_t x687 = -1;
	volatile int64_t t161 = 3195454LL;

    t161 = ((x685|x686)^(x687/x688));

    if (t161 != 8956LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x693 = INT64_MAX;
	int64_t x694 = INT64_MIN;
	volatile int8_t x695 = -2;
	int8_t x696 = INT8_MIN;
	int64_t t162 = -23661061169464743LL;

    t162 = ((x693|x694)^(x695/x696));

    if (t162 != -1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x698 = -5;
	volatile int16_t x699 = INT16_MAX;
	uint64_t x700 = 30201478453LLU;

    t163 = ((x697|x698)^(x699/x700));

    if (t163 != UINT64_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile uint16_t x701 = UINT16_MAX;
	int16_t x702 = INT16_MIN;
	int32_t x703 = -60097;
	int16_t x704 = -38;
	static volatile int32_t t164 = -215476537;

    t164 = ((x701|x702)^(x703/x704));

    if (t164 != -1582) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x705 = 29096U;
	static volatile uint8_t x706 = 104U;
	int8_t x707 = -1;
	static uint32_t t165 = 48U;

    t165 = ((x705|x706)^(x707/x708));

    if (t165 != 29160U) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x709 = 3U;
	static int32_t x710 = INT32_MIN;
	int8_t x711 = 0;
	uint32_t t166 = 556892337U;

    t166 = ((x709|x710)^(x711/x712));

    if (t166 != 2147483651U) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x713 = INT32_MIN;
	static int64_t x714 = -49012163582LL;
	volatile int32_t x715 = INT32_MAX;
	int64_t x716 = -1LL;
	static int64_t t167 = 12100LL;

    t167 = ((x713|x714)^(x715/x716));

    if (t167 != 379960323LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x718 = 0U;
	int64_t x719 = INT64_MIN;
	volatile uint16_t x720 = 46U;

    t168 = ((x717|x718)^(x719/x720));

    if (t168 != -200508087757712636LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x725 = UINT32_MAX;
	int8_t x726 = INT8_MAX;
	static int32_t x727 = INT32_MIN;
	static int64_t x728 = INT64_MAX;
	static volatile int64_t t169 = 911004956LL;

    t169 = ((x725|x726)^(x727/x728));

    if (t169 != 4294967295LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint32_t x731 = 243U;
	uint64_t x732 = 54925991604844LLU;
	volatile uint64_t t170 = UINT64_MAX;

    t170 = ((x729|x730)^(x731/x732));

    if (t170 != UINT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x733 = INT32_MIN;
	uint32_t x734 = UINT32_MAX;
	uint64_t x735 = 0LLU;
	volatile int64_t x736 = INT64_MAX;
	static uint64_t t171 = 8LLU;

    t171 = ((x733|x734)^(x735/x736));

    if (t171 != 4294967295LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x737 = INT64_MAX;
	volatile int64_t x738 = 20837003559LL;
	static uint32_t x739 = UINT32_MAX;
	int32_t x740 = 1;
	volatile int64_t t172 = 447777LL;

    t172 = ((x737|x738)^(x739/x740));

    if (t172 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x741 = INT32_MIN;
	int16_t x742 = 9;
	volatile int16_t x744 = INT16_MIN;
	uint32_t t173 = 54593116U;

    t173 = ((x741|x742)^(x743/x744));

    if (t173 != 2147483657U) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x746 = INT64_MAX;
	static volatile int64_t t174 = 1698LL;

    t174 = ((x745|x746)^(x747/x748));

    if (t174 != -1LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x749 = INT16_MIN;
	int32_t x750 = INT32_MIN;
	int64_t x751 = INT64_MAX;
	static int8_t x752 = -12;

    t175 = ((x749|x750)^(x751/x752));

    if (t175 != 768614336404575574LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x753 = -1LL;
	static int8_t x754 = -16;
	int32_t x755 = -54678614;
	uint32_t x756 = 745U;
	int64_t t176 = -39018775603LL;

    t176 = ((x753|x754)^(x755/x756));

    if (t176 != -5691663LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x758 = 0U;
	uint64_t x759 = UINT64_MAX;
	int32_t x760 = 213716;

    t177 = ((x757|x758)^(x759/x760));

    if (t177 != 86314286594031LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x765 = UINT16_MAX;
	volatile int8_t x766 = -28;
	volatile int64_t x768 = INT64_MAX;
	volatile int64_t t178 = 184655LL;

    t178 = ((x765|x766)^(x767/x768));

    if (t178 != -1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x770 = INT16_MIN;
	uint16_t x771 = 4497U;
	int32_t x772 = 4136;

    t179 = ((x769|x770)^(x771/x772));

    if (t179 != -32767) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x773 = -5;
	int16_t x774 = -1;
	int8_t x775 = INT8_MAX;
	static volatile int32_t x776 = 2;
	static int32_t t180 = 25097035;

    t180 = ((x773|x774)^(x775/x776));

    if (t180 != -64) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x777 = 1U;
	int64_t x778 = INT64_MIN;
	uint32_t x779 = UINT32_MAX;
	volatile int64_t t181 = INT64_MIN;

    t181 = ((x777|x778)^(x779/x780));

    if (t181 != INT64_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint32_t x781 = 528805417U;
	static volatile int64_t x782 = 55564LL;
	volatile int8_t x783 = INT8_MIN;
	int64_t x784 = 535323225101177LL;
	static int64_t t182 = -685LL;

    t182 = ((x781|x782)^(x783/x784));

    if (t182 != 528809773LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x785 = 3686646;
	volatile uint16_t x786 = 44U;
	uint64_t x787 = 243LLU;

    t183 = ((x785|x786)^(x787/x788));

    if (t183 != 3686654LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x789 = -1;
	static uint64_t x790 = UINT64_MAX;
	uint32_t x792 = UINT32_MAX;
	volatile uint64_t t184 = UINT64_MAX;

    t184 = ((x789|x790)^(x791/x792));

    if (t184 != UINT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x793 = 5852;
	static uint32_t x794 = 14U;
	int32_t x795 = INT32_MIN;
	static volatile int64_t x796 = INT64_MAX;
	static volatile int64_t t185 = 455481165816291774LL;

    t185 = ((x793|x794)^(x795/x796));

    if (t185 != 5854LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x797 = UINT64_MAX;
	int64_t x799 = INT64_MIN;
	uint64_t x800 = UINT64_MAX;
	uint64_t t186 = UINT64_MAX;

    t186 = ((x797|x798)^(x799/x800));

    if (t186 != UINT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x801 = 16290524U;
	int8_t x802 = 0;
	int8_t x803 = -1;
	volatile int16_t x804 = INT16_MAX;
	uint32_t t187 = 1U;

    t187 = ((x801|x802)^(x803/x804));

    if (t187 != 16290524U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x805 = 1698U;
	int64_t x806 = INT64_MIN;
	int32_t x807 = 27731252;
	uint16_t x808 = UINT16_MAX;

    t188 = ((x805|x806)^(x807/x808));

    if (t188 != -9223372036854774011LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x809 = UINT8_MAX;
	int32_t x810 = -418797;
	int8_t x811 = INT8_MAX;

    t189 = ((x809|x810)^(x811/x812));

    if (t189 != 418686LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x813 = 0;
	int64_t x814 = -1LL;
	uint32_t x815 = 264911856U;
	static volatile int64_t t190 = 130LL;

    t190 = ((x813|x814)^(x815/x816));

    if (t190 != -1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x817 = 2;
	int16_t x819 = INT16_MIN;
	int32_t x820 = -454075776;
	int32_t t191 = -3611385;

    t191 = ((x817|x818)^(x819/x820));

    if (t191 != -1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint64_t x821 = 23470LLU;
	volatile int32_t x823 = 5;
	uint64_t t192 = UINT64_MAX;

    t192 = ((x821|x822)^(x823/x824));

    if (t192 != UINT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x825 = -1;
	uint8_t x826 = 1U;
	int64_t x827 = INT64_MAX;
	static int64_t t193 = 132132369525804950LL;

    t193 = ((x825|x826)^(x827/x828));

    if (t193 != -281483566907401LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x830 = 9148U;
	uint32_t x831 = UINT32_MAX;
	uint32_t x832 = 953U;
	volatile uint32_t t194 = 103U;

    t194 = ((x829|x830)^(x831/x832));

    if (t194 != 4280105822U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x833 = 87484U;
	uint8_t x834 = UINT8_MAX;
	uint16_t x835 = UINT16_MAX;

    t195 = ((x833|x834)^(x835/x836));

    if (t195 != 87551LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x837 = -872920526229903357LL;
	uint32_t x838 = 2476453U;
	int16_t x839 = INT16_MIN;
	uint32_t x840 = UINT32_MAX;
	static int64_t t196 = -111000562746LL;

    t196 = ((x837|x838)^(x839/x840));

    if (t196 != -872920526229608025LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x841 = INT8_MIN;
	static uint8_t x843 = UINT8_MAX;
	uint16_t x844 = 516U;

    t197 = ((x841|x842)^(x843/x844));

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x845 = 20;
	int32_t x846 = INT32_MAX;
	int32_t t198 = -83;

    t198 = ((x845|x846)^(x847/x848));

    if (t198 != -2147483647) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint64_t x849 = UINT64_MAX;
	int16_t x850 = INT16_MIN;
	static uint8_t x852 = UINT8_MAX;
	uint64_t t199 = 130522163503208LLU;

    t199 = ((x849|x850)^(x851/x852));

    if (t199 != 18446744073709551552LLU) { NG(); } else { ; }
	
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

