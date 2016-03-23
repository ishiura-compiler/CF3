
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

static uint32_t x1 = 3U;
int64_t x2 = INT64_MAX;
int32_t x5 = INT32_MIN;
static int16_t x6 = INT16_MIN;
uint8_t x7 = 0U;
int16_t x11 = -1;
int8_t x15 = -1;
uint8_t x16 = UINT8_MAX;
int32_t x19 = INT32_MAX;
static int64_t x21 = INT64_MIN;
static int16_t x22 = INT16_MIN;
uint8_t x23 = 11U;
volatile int16_t x31 = 1;
int16_t x35 = -3;
int32_t x40 = INT32_MAX;
static int16_t x44 = -7;
int32_t x47 = -52522;
int32_t x49 = -1;
int8_t x50 = -1;
uint32_t x56 = UINT32_MAX;
static uint32_t x57 = UINT32_MAX;
volatile int8_t x58 = -1;
volatile int64_t t14 = INT64_MAX;
uint8_t x63 = UINT8_MAX;
volatile uint16_t x65 = 17U;
uint32_t x69 = 4151U;
uint16_t x71 = UINT16_MAX;
static uint32_t x72 = 62U;
volatile int32_t x76 = INT32_MAX;
int8_t x82 = INT8_MIN;
volatile int32_t t20 = -13697612;
int8_t x86 = -1;
volatile int16_t x88 = -24;
int64_t x90 = INT64_MIN;
static uint16_t x91 = UINT16_MAX;
int64_t t22 = 688016237507560LL;
volatile uint8_t x96 = 1U;
static volatile int8_t x100 = -16;
int16_t x104 = -1;
volatile int64_t t26 = -211LL;
int8_t x118 = INT8_MIN;
int16_t x119 = -13444;
int32_t x120 = INT32_MIN;
volatile int64_t t29 = -1932143LL;
uint16_t x126 = UINT16_MAX;
volatile int64_t t33 = -158835077650769404LL;
int16_t x137 = 4;
int64_t x138 = INT64_MIN;
static int64_t x139 = INT64_MIN;
int32_t x140 = -3528;
int16_t x142 = INT16_MAX;
uint16_t x145 = 521U;
static uint8_t x148 = UINT8_MAX;
volatile int32_t x161 = -1;
static int64_t x165 = -1LL;
static int64_t x166 = INT64_MIN;
int64_t x167 = 53296959875012640LL;
int8_t x182 = -1;
int32_t x190 = INT32_MIN;
int64_t x197 = -43559LL;
volatile int64_t t50 = -10851LL;
uint64_t x220 = UINT64_MAX;
volatile uint16_t x223 = 4647U;
int8_t x225 = 0;
int8_t x226 = INT8_MIN;
static int64_t x229 = INT64_MIN;
volatile int64_t t57 = 277034897LL;
int32_t x237 = -12264;
uint16_t x238 = 2383U;
uint8_t x239 = 19U;
int16_t x243 = INT16_MIN;
volatile uint8_t x246 = 1U;
int64_t x247 = INT64_MIN;
static int64_t x249 = -1LL;
uint64_t t65 = 108203062037724LLU;
int64_t x276 = -1LL;
static int64_t x280 = INT64_MIN;
uint8_t x294 = 11U;
int64_t x296 = -1LL;
uint64_t t73 = 86655LLU;
uint16_t x302 = 428U;
volatile uint64_t x313 = 16124905026LLU;
volatile uint64_t t76 = 0LLU;
uint32_t x317 = 6740469U;
uint8_t x319 = UINT8_MAX;
uint32_t t77 = 154204824U;
int64_t t78 = -1701052571LL;
volatile uint32_t x325 = 0U;
int32_t x331 = INT32_MIN;
uint16_t x332 = UINT16_MAX;
uint64_t x333 = UINT64_MAX;
uint32_t x343 = 15799U;
int8_t x347 = -1;
int16_t x348 = -4812;
int64_t t84 = 8299304563LL;
int64_t x362 = -14481760770882LL;
static volatile uint8_t x369 = 5U;
static uint16_t x371 = 59U;
int16_t x374 = -1;
int16_t x376 = -2316;
volatile int32_t t90 = -686346;
volatile int64_t x381 = INT64_MAX;
uint8_t x390 = 108U;
static uint64_t x391 = UINT64_MAX;
int32_t x392 = 470685;
static volatile uint64_t t94 = 783533LLU;
uint8_t x397 = 17U;
int64_t t96 = 144447846LL;
int32_t x405 = INT32_MAX;
static int64_t t98 = 50425762070414LL;
static volatile uint32_t x415 = UINT32_MAX;
int8_t x423 = 0;
volatile int64_t t102 = 149164029768LL;
static volatile int32_t x433 = -1;
uint64_t x434 = 650LLU;
uint64_t x435 = 2047358301LLU;
volatile int32_t t106 = -24;
int64_t x447 = 1625395423203806LL;
volatile int64_t t108 = -125973734421LL;
static int64_t x452 = INT64_MIN;
volatile uint64_t t109 = 80181092945117471LLU;
int16_t x457 = 14520;
volatile uint32_t t112 = UINT32_MAX;
static int64_t x467 = INT64_MIN;
volatile uint64_t t113 = 32276824725074LLU;
volatile uint16_t x482 = 18254U;
int8_t x483 = INT8_MIN;
int32_t x486 = INT32_MIN;
int64_t x495 = 2262382780263LL;
volatile uint64_t t120 = 332455146457901853LLU;
int16_t x497 = -1;
volatile uint16_t x499 = 48U;
volatile int64_t x504 = 1217376936284514490LL;
static int64_t t122 = -15445086977427229LL;
int8_t x506 = INT8_MIN;
static int8_t x510 = INT8_MIN;
int32_t x511 = INT32_MIN;
int16_t x518 = 10100;
uint16_t x524 = 4109U;
volatile uint64_t t128 = UINT64_MAX;
static volatile int16_t x530 = INT16_MAX;
int32_t x531 = INT32_MIN;
int8_t x535 = INT8_MAX;
int16_t x540 = -54;
static uint64_t x541 = 3391LLU;
int8_t x549 = -1;
volatile uint32_t t133 = 289693941U;
static volatile int64_t t135 = -232267189LL;
uint32_t t136 = 0U;
static volatile int64_t x567 = -456869660LL;
int32_t x584 = -1;
static int8_t x592 = INT8_MAX;
static volatile int32_t t143 = -8;
volatile uint64_t t144 = UINT64_MAX;
int64_t x607 = INT64_MIN;
int64_t t147 = 1983LL;
int32_t x609 = INT32_MIN;
volatile int32_t x611 = INT32_MAX;
int16_t x625 = INT16_MIN;
int32_t x626 = 1361125;
int32_t t151 = 441966;
int16_t x630 = INT16_MAX;
int8_t x633 = -48;
int8_t x634 = -1;
int32_t x639 = INT32_MIN;
volatile uint32_t t154 = 1506086U;
uint8_t x642 = 1U;
volatile int32_t x650 = INT32_MIN;
int64_t x651 = -2LL;
uint32_t x658 = 1276U;
volatile uint8_t x660 = 96U;
int16_t x667 = 664;
int64_t t160 = 493037547749221949LL;
int16_t x670 = -5985;
uint64_t t161 = 78LLU;
static uint64_t x678 = 132281066405316351LLU;
int64_t x680 = -5943LL;
volatile uint64_t t163 = 4860085126359LLU;
static uint16_t x681 = 24U;
uint32_t x682 = 5U;
static volatile int16_t x686 = -1;
int16_t x687 = INT16_MIN;
uint8_t x689 = UINT8_MAX;
static int64_t x690 = -213118267LL;
int64_t t166 = 371994230LL;
uint16_t x696 = 1362U;
uint8_t x697 = UINT8_MAX;
uint64_t x704 = 34549456960814334LLU;
uint8_t x711 = 31U;
int64_t t171 = 187362LL;
uint32_t x714 = 2U;
volatile int8_t x717 = INT8_MIN;
static int16_t x723 = INT16_MIN;
volatile int16_t x725 = -1;
static volatile uint8_t x728 = UINT8_MAX;
uint16_t x729 = 32338U;
static uint16_t x731 = 805U;
int64_t x735 = INT64_MAX;
int64_t t178 = INT64_MAX;
static volatile int64_t x746 = INT64_MIN;
volatile int16_t x747 = 7;
static volatile int64_t x758 = INT64_MIN;
int32_t x768 = 775960;
volatile uint32_t t185 = 7471083U;
int32_t x779 = INT32_MIN;
static volatile int64_t t188 = 1LL;
int32_t x783 = INT32_MIN;
int32_t x802 = INT32_MIN;
uint64_t x803 = UINT64_MAX;
int8_t x804 = 5;
int16_t x807 = -1;
volatile int32_t x816 = -257451;


void f0(void) {
    	int8_t x3 = -1;
	static uint16_t x4 = 145U;
	volatile int64_t t0 = -2827LL;

    t0 = (((x1%x2)^x3)|x4);

    if (t0 != -3LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x8 = 86601377U;
	volatile uint32_t t1 = 283235863U;

    t1 = (((x5%x6)^x7)|x8);

    if (t1 != 86601377U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 47U;
	int32_t x10 = INT32_MAX;
	int64_t x12 = INT64_MIN;
	int64_t t2 = 1353652LL;

    t2 = (((x9%x10)^x11)|x12);

    if (t2 != -48LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = -1;
	int8_t x14 = INT8_MIN;
	static volatile int32_t t3 = -95897018;

    t3 = (((x13%x14)^x15)|x16);

    if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x17 = INT32_MAX;
	int16_t x18 = INT16_MIN;
	int16_t x20 = -155;
	int32_t t4 = -212881;

    t4 = (((x17%x18)^x19)|x20);

    if (t4 != -155) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x24 = UINT16_MAX;
	int64_t t5 = 2LL;

    t5 = (((x21%x22)^x23)|x24);

    if (t5 != 65535LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x25 = INT32_MAX;
	uint16_t x26 = UINT16_MAX;
	int64_t x27 = -1LL;
	int16_t x28 = 3;
	int64_t t6 = -84322419333LL;

    t6 = (((x25%x26)^x27)|x28);

    if (t6 != -32765LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 12U;
	volatile int32_t x30 = 124496460;
	static int64_t x32 = -1LL;
	static volatile int64_t t7 = 403LL;

    t7 = (((x29%x30)^x31)|x32);

    if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MIN;
	static int8_t x34 = INT8_MIN;
	int64_t x36 = -8032155660718LL;
	static int64_t t8 = -95LL;

    t8 = (((x33%x34)^x35)|x36);

    if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MIN;
	static int64_t x38 = 7501623127977LL;
	int64_t x39 = INT64_MIN;
	volatile int64_t t9 = INT64_MAX;

    t9 = (((x37%x38)^x39)|x40);

    if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x41 = 5451U;
	volatile uint16_t x42 = 2811U;
	int16_t x43 = INT16_MIN;
	int32_t t10 = 0;

    t10 = (((x41%x42)^x43)|x44);

    if (t10 != -7) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MIN;
	int64_t x46 = -1LL;
	static int16_t x48 = -1;
	int64_t t11 = 17521316969598879LL;

    t11 = (((x45%x46)^x47)|x48);

    if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x51 = INT8_MIN;
	int64_t x52 = 1554055125673454757LL;
	int64_t t12 = -1036571257511783465LL;

    t12 = (((x49%x50)^x51)|x52);

    if (t12 != -91LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MIN;
	static volatile uint8_t x54 = UINT8_MAX;
	int64_t x55 = INT64_MIN;
	volatile int64_t t13 = INT64_MAX;

    t13 = (((x53%x54)^x55)|x56);

    if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x59 = INT8_MIN;
	static int64_t x60 = INT64_MAX;

    t14 = (((x57%x58)^x59)|x60);

    if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = 176019470LLU;
	int16_t x62 = INT16_MIN;
	int32_t x64 = INT32_MAX;
	volatile uint64_t t15 = 55LLU;

    t15 = (((x61%x62)^x63)|x64);

    if (t15 != 2147483647LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x66 = -965;
	int32_t x67 = INT32_MIN;
	int16_t x68 = 0;
	int32_t t16 = -56783;

    t16 = (((x65%x66)^x67)|x68);

    if (t16 != -2147483631) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x70 = INT64_MIN;
	int64_t t17 = 26929245632LL;

    t17 = (((x69%x70)^x71)|x72);

    if (t17 != 61438LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = 29;
	volatile int16_t x74 = INT16_MAX;
	uint8_t x75 = 9U;
	int32_t t18 = INT32_MAX;

    t18 = (((x73%x74)^x75)|x76);

    if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x77 = -1;
	int8_t x78 = -1;
	int8_t x79 = -1;
	int32_t x80 = INT32_MAX;
	static int32_t t19 = -241;

    t19 = (((x77%x78)^x79)|x80);

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x81 = INT16_MIN;
	static int8_t x83 = INT8_MIN;
	uint16_t x84 = 1089U;

    t20 = (((x81%x82)^x83)|x84);

    if (t20 != -63) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = INT32_MAX;
	volatile int32_t x87 = INT32_MAX;
	int32_t t21 = -1;

    t21 = (((x85%x86)^x87)|x88);

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MAX;
	static volatile int64_t x92 = -55021714414366950LL;

    t22 = (((x89%x90)^x91)|x92);

    if (t22 != -61670LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = INT32_MIN;
	uint8_t x94 = 18U;
	static int32_t x95 = INT32_MIN;
	volatile int32_t t23 = INT32_MAX;

    t23 = (((x93%x94)^x95)|x96);

    if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int16_t x97 = -1;
	uint64_t x98 = UINT64_MAX;
	int32_t x99 = INT32_MIN;
	uint64_t t24 = 110242128925098LLU;

    t24 = (((x97%x98)^x99)|x100);

    if (t24 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x101 = UINT16_MAX;
	uint64_t x102 = 14780595648LLU;
	volatile int64_t x103 = INT64_MIN;
	static volatile uint64_t t25 = UINT64_MAX;

    t25 = (((x101%x102)^x103)|x104);

    if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = 60585756;
	int64_t x106 = INT64_MIN;
	volatile uint8_t x107 = 0U;
	int8_t x108 = INT8_MAX;

    t26 = (((x105%x106)^x107)|x108);

    if (t26 != 60585855LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MAX;
	volatile int16_t x110 = INT16_MIN;
	int16_t x111 = -1;
	volatile int16_t x112 = INT16_MIN;
	volatile int64_t t27 = 70LL;

    t27 = (((x109%x110)^x111)|x112);

    if (t27 != -32768LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = UINT8_MAX;
	int8_t x114 = INT8_MIN;
	int64_t x115 = INT64_MIN;
	int64_t x116 = -1LL;
	volatile int64_t t28 = 147LL;

    t28 = (((x113%x114)^x115)|x116);

    if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x117 = 116671409544796LL;

    t29 = (((x117%x118)^x119)|x120);

    if (t29 != -13536LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x121 = INT8_MIN;
	int16_t x122 = INT16_MIN;
	static volatile uint32_t x123 = UINT32_MAX;
	volatile int16_t x124 = INT16_MIN;
	static volatile uint32_t t30 = 245U;

    t30 = (((x121%x122)^x123)|x124);

    if (t30 != 4294934655U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x125 = 28205U;
	int32_t x127 = 1;
	uint8_t x128 = 2U;
	volatile uint32_t t31 = 174827267U;

    t31 = (((x125%x126)^x127)|x128);

    if (t31 != 28206U) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = INT16_MAX;
	uint64_t x130 = 163742282LLU;
	volatile int8_t x131 = INT8_MIN;
	static volatile int16_t x132 = INT16_MIN;
	uint64_t t32 = 511185LLU;

    t32 = (((x129%x130)^x131)|x132);

    if (t32 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MIN;
	int32_t x134 = INT32_MAX;
	static int64_t x135 = -1LL;
	static int16_t x136 = -1;

    t33 = (((x133%x134)^x135)|x136);

    if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t t34 = -3238646686649LL;

    t34 = (((x137%x138)^x139)|x140);

    if (t34 != -3524LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x141 = 4929U;
	uint8_t x143 = 103U;
	uint16_t x144 = 1931U;
	volatile int32_t t35 = 1592;

    t35 = (((x141%x142)^x143)|x144);

    if (t35 != 6063) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x146 = INT8_MIN;
	int32_t x147 = -1;
	int32_t t36 = 626;

    t36 = (((x145%x146)^x147)|x148);

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MIN;
	static int16_t x150 = INT16_MIN;
	int64_t x151 = INT64_MAX;
	int32_t x152 = -1;
	int64_t t37 = 1808932968513LL;

    t37 = (((x149%x150)^x151)|x152);

    if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x153 = 12U;
	static int16_t x154 = INT16_MIN;
	uint64_t x155 = 26278012437602833LLU;
	uint16_t x156 = 25U;
	volatile uint64_t t38 = 708407718147095410LLU;

    t38 = (((x153%x154)^x155)|x156);

    if (t38 != 26278012437602845LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x157 = 5430783U;
	volatile int64_t x158 = INT64_MAX;
	volatile uint16_t x159 = 365U;
	int64_t x160 = INT64_MAX;
	volatile int64_t t39 = INT64_MAX;

    t39 = (((x157%x158)^x159)|x160);

    if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x162 = INT32_MIN;
	int8_t x163 = -1;
	int16_t x164 = 418;
	static volatile int32_t t40 = -100318497;

    t40 = (((x161%x162)^x163)|x164);

    if (t40 != 418) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x168 = 37U;
	volatile int64_t t41 = -46403478198946229LL;

    t41 = (((x165%x166)^x167)|x168);

    if (t41 != -53296959875012609LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x169 = INT64_MIN;
	uint32_t x170 = 11803580U;
	int16_t x171 = INT16_MIN;
	int8_t x172 = -60;
	int64_t t42 = -528059627LL;

    t42 = (((x169%x170)^x171)|x172);

    if (t42 != -44LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int64_t x173 = 106096855LL;
	int32_t x174 = 6168529;
	uint32_t x175 = 168448U;
	uint8_t x176 = 6U;
	volatile int64_t t43 = -28562114997LL;

    t43 = (((x173%x174)^x175)|x176);

    if (t43 != 1071606LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = -1LL;
	static volatile int64_t x178 = 1244LL;
	volatile int64_t x179 = -130LL;
	int64_t x180 = INT64_MIN;
	static int64_t t44 = 286408LL;

    t44 = (((x177%x178)^x179)|x180);

    if (t44 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = INT32_MIN;
	uint16_t x183 = 10U;
	static volatile uint32_t x184 = 89730715U;
	static uint32_t t45 = 968888U;

    t45 = (((x181%x182)^x183)|x184);

    if (t45 != 89730715U) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = 23435108LL;
	int32_t x186 = INT32_MAX;
	uint16_t x187 = 3U;
	int32_t x188 = -1;
	static int64_t t46 = -21967009089629421LL;

    t46 = (((x185%x186)^x187)|x188);

    if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = INT64_MIN;
	uint8_t x191 = 0U;
	static volatile int16_t x192 = INT16_MAX;
	volatile int64_t t47 = 130163161488LL;

    t47 = (((x189%x190)^x191)|x192);

    if (t47 != 32767LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int32_t x193 = INT32_MIN;
	volatile int8_t x194 = 1;
	int32_t x195 = INT32_MIN;
	uint8_t x196 = 3U;
	volatile int32_t t48 = -1;

    t48 = (((x193%x194)^x195)|x196);

    if (t48 != -2147483645) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x198 = -1;
	uint32_t x199 = 0U;
	int32_t x200 = 33107;
	volatile int64_t t49 = 1860LL;

    t49 = (((x197%x198)^x199)|x200);

    if (t49 != 33107LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint16_t x201 = 129U;
	int64_t x202 = INT64_MIN;
	int64_t x203 = INT64_MIN;
	static int64_t x204 = -26669596799353LL;

    t50 = (((x201%x202)^x203)|x204);

    if (t50 != -26669596799353LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = -1;
	int64_t x206 = INT64_MIN;
	static int64_t x207 = INT64_MAX;
	int16_t x208 = -1;
	int64_t t51 = 1273006694LL;

    t51 = (((x205%x206)^x207)|x208);

    if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x209 = -1;
	int16_t x210 = -8;
	uint16_t x211 = 3U;
	uint8_t x212 = UINT8_MAX;
	int32_t t52 = 25;

    t52 = (((x209%x210)^x211)|x212);

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = INT64_MAX;
	static volatile int32_t x214 = -28537679;
	int16_t x215 = INT16_MAX;
	static int32_t x216 = INT32_MIN;
	int64_t t53 = 1LL;

    t53 = (((x213%x214)^x215)|x216);

    if (t53 != -2142248985LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = INT16_MAX;
	volatile uint32_t x218 = 2039467U;
	int64_t x219 = -1LL;
	uint64_t t54 = UINT64_MAX;

    t54 = (((x217%x218)^x219)|x220);

    if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x221 = -10;
	int8_t x222 = -1;
	int64_t x224 = -224407LL;
	static int64_t t55 = 252746LL;

    t55 = (((x221%x222)^x223)|x224);

    if (t55 != -224401LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x227 = INT64_MIN;
	static volatile int64_t x228 = INT64_MAX;
	int64_t t56 = -568005738235675398LL;

    t56 = (((x225%x226)^x227)|x228);

    if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x230 = INT64_MIN;
	static int16_t x231 = -2236;
	static uint8_t x232 = 1U;

    t57 = (((x229%x230)^x231)|x232);

    if (t57 != -2235LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = 2;
	volatile int16_t x234 = INT16_MAX;
	volatile int16_t x235 = INT16_MAX;
	uint16_t x236 = 152U;
	volatile int32_t t58 = 4364;

    t58 = (((x233%x234)^x235)|x236);

    if (t58 != 32765) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x240 = -1796LL;
	int64_t t59 = 4167606993483LL;

    t59 = (((x237%x238)^x239)|x240);

    if (t59 != -260LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x241 = 1U;
	static int8_t x242 = INT8_MIN;
	uint8_t x244 = UINT8_MAX;
	static int32_t t60 = -187013;

    t60 = (((x241%x242)^x243)|x244);

    if (t60 != -32513) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x245 = 66U;
	volatile int64_t x248 = -1LL;
	int64_t t61 = 3194863381943483LL;

    t61 = (((x245%x246)^x247)|x248);

    if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x250 = 12084LL;
	static uint32_t x251 = UINT32_MAX;
	static int16_t x252 = INT16_MAX;
	volatile int64_t t62 = 81938542LL;

    t62 = (((x249%x250)^x251)|x252);

    if (t62 != -4294934529LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int64_t x253 = -202935LL;
	int16_t x254 = 1975;
	int8_t x255 = INT8_MIN;
	int16_t x256 = INT16_MIN;
	volatile int64_t t63 = 561747LL;

    t63 = (((x253%x254)^x255)|x256);

    if (t63 != -31309LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x257 = -1;
	int8_t x258 = INT8_MIN;
	int8_t x259 = INT8_MAX;
	uint16_t x260 = 2U;
	volatile int32_t t64 = 447036477;

    t64 = (((x257%x258)^x259)|x260);

    if (t64 != -126) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = -41;
	int64_t x262 = -3770LL;
	int8_t x263 = INT8_MIN;
	uint64_t x264 = 14LLU;

    t65 = (((x261%x262)^x263)|x264);

    if (t65 != 95LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = INT32_MIN;
	volatile uint32_t x266 = 62005663U;
	volatile int8_t x267 = INT8_MAX;
	static int8_t x268 = INT8_MIN;
	static volatile uint32_t t66 = 769302135U;

    t66 = (((x265%x266)^x267)|x268);

    if (t66 != 4294967197U) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = INT64_MAX;
	static uint16_t x270 = UINT16_MAX;
	static int8_t x271 = INT8_MIN;
	static uint16_t x272 = 2U;
	static volatile int64_t t67 = 355047999316019041LL;

    t67 = (((x269%x270)^x271)|x272);

    if (t67 != -32641LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x273 = UINT8_MAX;
	volatile uint8_t x274 = UINT8_MAX;
	int8_t x275 = -1;
	int64_t t68 = -18LL;

    t68 = (((x273%x274)^x275)|x276);

    if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x277 = INT32_MIN;
	int16_t x278 = INT16_MIN;
	volatile uint64_t x279 = 16548550775457LLU;
	uint64_t t69 = 1926060LLU;

    t69 = (((x277%x278)^x279)|x280);

    if (t69 != 9223388585405551265LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x285 = INT64_MIN;
	int64_t x286 = -1272546067LL;
	int32_t x287 = -1;
	int16_t x288 = INT16_MAX;
	static volatile int64_t t70 = -508803774359LL;

    t70 = (((x285%x286)^x287)|x288);

    if (t70 != 1096581119LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint32_t x289 = 8U;
	int64_t x290 = INT64_MIN;
	int16_t x291 = INT16_MIN;
	volatile uint8_t x292 = 26U;
	int64_t t71 = -1451452182LL;

    t71 = (((x289%x290)^x291)|x292);

    if (t71 != -32742LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x293 = 50721037606LL;
	int8_t x295 = INT8_MIN;
	int64_t t72 = -9061LL;

    t72 = (((x293%x294)^x295)|x296);

    if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x297 = 3U;
	int64_t x298 = -1LL;
	int16_t x299 = INT16_MIN;
	uint64_t x300 = 9LLU;

    t73 = (((x297%x298)^x299)|x300);

    if (t73 != 18446744073709518857LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x301 = UINT32_MAX;
	static uint64_t x303 = UINT64_MAX;
	static int32_t x304 = INT32_MIN;
	volatile uint64_t t74 = 173820835955LLU;

    t74 = (((x301%x302)^x303)|x304);

    if (t74 != 18446744073709551480LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x305 = -1;
	static uint64_t x306 = UINT64_MAX;
	static int64_t x307 = INT64_MAX;
	static int64_t x308 = INT64_MIN;
	volatile uint64_t t75 = UINT64_MAX;

    t75 = (((x305%x306)^x307)|x308);

    if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int8_t x314 = INT8_MAX;
	int8_t x315 = -1;
	static int32_t x316 = -485;

    t76 = (((x313%x314)^x315)|x316);

    if (t76 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x318 = 6825;
	uint8_t x320 = 3U;

    t77 = (((x317%x318)^x319)|x320);

    if (t77 != 4255U) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int8_t x321 = 12;
	int64_t x322 = INT64_MIN;
	volatile uint8_t x323 = 64U;
	volatile uint16_t x324 = 326U;

    t78 = (((x321%x322)^x323)|x324);

    if (t78 != 334LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x326 = UINT64_MAX;
	int32_t x327 = -117546031;
	static int16_t x328 = -1;
	static volatile uint64_t t79 = UINT64_MAX;

    t79 = (((x325%x326)^x327)|x328);

    if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x329 = -1;
	int16_t x330 = -1;
	int32_t t80 = 59;

    t80 = (((x329%x330)^x331)|x332);

    if (t80 != -2147418113) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x334 = INT64_MAX;
	static uint64_t x335 = UINT64_MAX;
	volatile uint32_t x336 = 67179899U;
	static uint64_t t81 = UINT64_MAX;

    t81 = (((x333%x334)^x335)|x336);

    if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x341 = INT16_MAX;
	int64_t x342 = INT64_MAX;
	int16_t x344 = -6;
	static int64_t t82 = 191747112145LL;

    t82 = (((x341%x342)^x343)|x344);

    if (t82 != -6LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x345 = -1;
	static int32_t x346 = INT32_MIN;
	static int32_t t83 = -1;

    t83 = (((x345%x346)^x347)|x348);

    if (t83 != -4812) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x349 = INT8_MIN;
	static int64_t x350 = INT64_MAX;
	int8_t x351 = INT8_MIN;
	int16_t x352 = INT16_MIN;

    t84 = (((x349%x350)^x351)|x352);

    if (t84 != -32768LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x353 = -1;
	int8_t x354 = INT8_MAX;
	int32_t x355 = INT32_MAX;
	int32_t x356 = INT32_MIN;
	int32_t t85 = INT32_MIN;

    t85 = (((x353%x354)^x355)|x356);

    if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x357 = 558284191LLU;
	int32_t x358 = INT32_MIN;
	int8_t x359 = 3;
	uint32_t x360 = 1U;
	static uint64_t t86 = 8LLU;

    t86 = (((x357%x358)^x359)|x360);

    if (t86 != 558284189LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x361 = 0;
	static volatile int64_t x363 = INT64_MIN;
	volatile int16_t x364 = -186;
	static int64_t t87 = 243850007347057207LL;

    t87 = (((x361%x362)^x363)|x364);

    if (t87 != -186LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x365 = 186LLU;
	uint32_t x366 = UINT32_MAX;
	int32_t x367 = 1907;
	static int16_t x368 = -6715;
	static volatile uint64_t t88 = 13045989LLU;

    t88 = (((x365%x366)^x367)|x368);

    if (t88 != 18446744073709545421LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x370 = 38U;
	int32_t x372 = 14582632;
	int32_t t89 = 95931;

    t89 = (((x369%x370)^x371)|x372);

    if (t89 != 14582654) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint16_t x373 = 1U;
	static volatile int16_t x375 = -1;

    t90 = (((x373%x374)^x375)|x376);

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x377 = INT32_MIN;
	uint16_t x378 = UINT16_MAX;
	uint8_t x379 = 7U;
	static volatile int32_t x380 = -1;
	volatile int32_t t91 = 18;

    t91 = (((x377%x378)^x379)|x380);

    if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x382 = INT64_MIN;
	int8_t x383 = INT8_MIN;
	int8_t x384 = INT8_MAX;
	int64_t t92 = 6228983377083LL;

    t92 = (((x381%x382)^x383)|x384);

    if (t92 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x385 = INT32_MIN;
	int8_t x386 = INT8_MAX;
	static volatile int16_t x387 = INT16_MIN;
	static int8_t x388 = INT8_MIN;
	volatile int32_t t93 = 77159;

    t93 = (((x385%x386)^x387)|x388);

    if (t93 != -8) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x389 = -1;

    t94 = (((x389%x390)^x391)|x392);

    if (t94 != 470685LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x393 = -1;
	int8_t x394 = INT8_MIN;
	static int8_t x395 = -23;
	int8_t x396 = 14;
	int32_t t95 = -3;

    t95 = (((x393%x394)^x395)|x396);

    if (t95 != 30) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x398 = -1LL;
	static int32_t x399 = INT32_MIN;
	int16_t x400 = 12171;

    t96 = (((x397%x398)^x399)|x400);

    if (t96 != -2147471477LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint8_t x401 = 22U;
	int64_t x402 = INT64_MIN;
	int64_t x403 = 6668LL;
	int32_t x404 = INT32_MIN;
	int64_t t97 = -48LL;

    t97 = (((x401%x402)^x403)|x404);

    if (t97 != -2147476966LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x406 = -1LL;
	int16_t x407 = 17;
	uint32_t x408 = 44417145U;

    t98 = (((x405%x406)^x407)|x408);

    if (t98 != 44417145LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x409 = INT8_MIN;
	uint8_t x410 = UINT8_MAX;
	volatile int16_t x411 = INT16_MAX;
	int16_t x412 = INT16_MAX;
	volatile int32_t t99 = -518046609;

    t99 = (((x409%x410)^x411)|x412);

    if (t99 != -1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint64_t x413 = UINT64_MAX;
	int8_t x414 = 1;
	int64_t x416 = INT64_MIN;
	uint64_t t100 = 5125530LLU;

    t100 = (((x413%x414)^x415)|x416);

    if (t100 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x417 = 7552U;
	int32_t x418 = -1;
	volatile int8_t x419 = 0;
	static volatile uint16_t x420 = 0U;
	uint32_t t101 = 1226827359U;

    t101 = (((x417%x418)^x419)|x420);

    if (t101 != 7552U) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x421 = INT8_MIN;
	uint32_t x422 = UINT32_MAX;
	static int64_t x424 = 32504LL;

    t102 = (((x421%x422)^x423)|x424);

    if (t102 != 4294967288LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x425 = 0LL;
	int16_t x426 = INT16_MIN;
	int8_t x427 = -1;
	int8_t x428 = INT8_MIN;
	volatile int64_t t103 = 3896LL;

    t103 = (((x425%x426)^x427)|x428);

    if (t103 != -1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x429 = INT32_MIN;
	int32_t x430 = INT32_MIN;
	static int32_t x431 = INT32_MIN;
	int64_t x432 = INT64_MAX;
	int64_t t104 = -536776891LL;

    t104 = (((x429%x430)^x431)|x432);

    if (t104 != -1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x436 = -1;
	uint64_t t105 = UINT64_MAX;

    t105 = (((x433%x434)^x435)|x436);

    if (t105 != UINT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x437 = INT16_MIN;
	int8_t x438 = INT8_MIN;
	volatile int32_t x439 = 7;
	int16_t x440 = INT16_MAX;

    t106 = (((x437%x438)^x439)|x440);

    if (t106 != 32767) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x441 = UINT64_MAX;
	static int64_t x442 = INT64_MAX;
	int32_t x443 = INT32_MIN;
	uint32_t x444 = UINT32_MAX;
	uint64_t t107 = UINT64_MAX;

    t107 = (((x441%x442)^x443)|x444);

    if (t107 != UINT64_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x445 = -59;
	static int8_t x446 = INT8_MAX;
	volatile int32_t x448 = -112168488;

    t108 = (((x445%x446)^x447)|x448);

    if (t108 != -75595813LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x449 = INT8_MIN;
	volatile uint8_t x450 = UINT8_MAX;
	uint64_t x451 = 5171365641796354070LLU;

    t109 = (((x449%x450)^x451)|x452);

    if (t109 != 13275378431913197462LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x453 = INT64_MIN;
	static int8_t x454 = -1;
	int32_t x455 = 3895991;
	int32_t x456 = -1;
	static volatile int64_t t110 = -207LL;

    t110 = (((x453%x454)^x455)|x456);

    if (t110 != -1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x458 = -1LL;
	int8_t x459 = INT8_MAX;
	int8_t x460 = INT8_MIN;
	static volatile int64_t t111 = -9403310384085LL;

    t111 = (((x457%x458)^x459)|x460);

    if (t111 != -1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x461 = INT8_MIN;
	volatile uint32_t x462 = UINT32_MAX;
	int16_t x463 = -1;
	int16_t x464 = -43;

    t112 = (((x461%x462)^x463)|x464);

    if (t112 != UINT32_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x465 = -1;
	static int64_t x466 = -42LL;
	uint64_t x468 = 1803449LLU;

    t113 = (((x465%x466)^x467)|x468);

    if (t113 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x469 = 0U;
	static uint8_t x470 = 20U;
	static volatile int16_t x471 = INT16_MIN;
	int16_t x472 = -1;
	int32_t t114 = -768;

    t114 = (((x469%x470)^x471)|x472);

    if (t114 != -1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x473 = UINT64_MAX;
	uint16_t x474 = UINT16_MAX;
	int16_t x475 = -540;
	volatile uint32_t x476 = 18064379U;
	volatile uint64_t t115 = UINT64_MAX;

    t115 = (((x473%x474)^x475)|x476);

    if (t115 != UINT64_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x477 = 3U;
	uint8_t x478 = 4U;
	static int16_t x479 = -1;
	static int32_t x480 = INT32_MIN;
	int32_t t116 = 155257899;

    t116 = (((x477%x478)^x479)|x480);

    if (t116 != -4) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint64_t x481 = 400349602975835LLU;
	uint64_t x484 = 2203122130935LLU;
	uint64_t t117 = UINT64_MAX;

    t117 = (((x481%x482)^x483)|x484);

    if (t117 != UINT64_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint64_t x485 = 71272222LLU;
	volatile uint64_t x487 = 3966086LLU;
	static int32_t x488 = 475191699;
	volatile uint64_t t118 = 1870216088593LLU;

    t118 = (((x485%x486)^x487)|x488);

    if (t118 != 475257755LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x489 = 924LL;
	static int32_t x490 = INT32_MIN;
	uint32_t x491 = 13418799U;
	int16_t x492 = INT16_MIN;
	int64_t t119 = 58889LL;

    t119 = (((x489%x490)^x491)|x492);

    if (t119 != -15693LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x493 = 4758363362493978545LLU;
	uint16_t x494 = 193U;
	static volatile uint32_t x496 = 25U;

    t120 = (((x493%x494)^x495)|x496);

    if (t120 != 2262382780255LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x498 = 70555U;
	uint32_t x500 = 53U;
	static uint32_t t121 = 1U;

    t121 = (((x497%x498)^x499)|x500);

    if (t121 != 2229U) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x501 = INT16_MIN;
	static int8_t x502 = -1;
	int64_t x503 = -1LL;

    t122 = (((x501%x502)^x503)|x504);

    if (t122 != -1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x505 = -1;
	static volatile int16_t x507 = 1566;
	uint16_t x508 = 6U;
	int32_t t123 = -279;

    t123 = (((x505%x506)^x507)|x508);

    if (t123 != -1561) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint16_t x509 = 9U;
	int8_t x512 = -1;
	volatile int32_t t124 = 1;

    t124 = (((x509%x510)^x511)|x512);

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x513 = -3;
	int32_t x514 = INT32_MIN;
	volatile uint8_t x515 = 26U;
	static int64_t x516 = -1LL;
	volatile int64_t t125 = -9594153011483767LL;

    t125 = (((x513%x514)^x515)|x516);

    if (t125 != -1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x517 = 259665896LLU;
	int32_t x519 = INT32_MAX;
	int16_t x520 = INT16_MIN;
	uint64_t t126 = 8876LLU;

    t126 = (((x517%x518)^x519)|x520);

    if (t126 != 18446744073709546619LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x521 = INT64_MIN;
	static volatile int64_t x522 = INT64_MIN;
	int16_t x523 = INT16_MAX;
	int64_t t127 = -19017037476LL;

    t127 = (((x521%x522)^x523)|x524);

    if (t127 != 32767LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x525 = -1;
	uint64_t x526 = 89LLU;
	int8_t x527 = INT8_MIN;
	int64_t x528 = -1LL;

    t128 = (((x525%x526)^x527)|x528);

    if (t128 != UINT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x529 = INT64_MAX;
	volatile int16_t x532 = INT16_MIN;
	static volatile int64_t t129 = 106574962LL;

    t129 = (((x529%x530)^x531)|x532);

    if (t129 != -32761LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x533 = INT16_MAX;
	int64_t x534 = INT64_MAX;
	volatile int8_t x536 = INT8_MAX;
	volatile int64_t t130 = -1407857LL;

    t130 = (((x533%x534)^x535)|x536);

    if (t130 != 32767LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x537 = INT32_MIN;
	static uint64_t x538 = UINT64_MAX;
	volatile uint8_t x539 = 3U;
	uint64_t t131 = 126691303374121640LLU;

    t131 = (((x537%x538)^x539)|x540);

    if (t131 != 18446744073709551563LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x542 = 319121U;
	static uint16_t x543 = 841U;
	static uint16_t x544 = 14U;
	volatile uint64_t t132 = 284912562818060545LLU;

    t132 = (((x541%x542)^x543)|x544);

    if (t132 != 3710LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x550 = -1;
	uint32_t x551 = 13U;
	uint16_t x552 = 26911U;

    t133 = (((x549%x550)^x551)|x552);

    if (t133 != 26911U) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x553 = INT64_MIN;
	static uint8_t x554 = 102U;
	int8_t x555 = INT8_MAX;
	static int8_t x556 = INT8_MAX;
	int64_t t134 = -7586767074579LL;

    t134 = (((x553%x554)^x555)|x556);

    if (t134 != -1LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x557 = INT8_MIN;
	uint32_t x558 = 593U;
	int64_t x559 = -644298760196884LL;
	static int32_t x560 = 14649;

    t135 = (((x557%x558)^x559)|x560);

    if (t135 != -644298760192645LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x561 = UINT16_MAX;
	int32_t x562 = -99376;
	static volatile uint32_t x563 = 8007U;
	static volatile uint16_t x564 = 62U;

    t136 = (((x561%x562)^x563)|x564);

    if (t136 != 57534U) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x565 = INT8_MIN;
	static int32_t x566 = 20992068;
	volatile int64_t x568 = INT64_MAX;
	static int64_t t137 = INT64_MAX;

    t137 = (((x565%x566)^x567)|x568);

    if (t137 != INT64_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x569 = INT8_MAX;
	int32_t x570 = INT32_MIN;
	int32_t x571 = 389683211;
	volatile int16_t x572 = -1;
	int32_t t138 = 355115;

    t138 = (((x569%x570)^x571)|x572);

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint8_t x573 = 61U;
	uint8_t x574 = UINT8_MAX;
	uint32_t x575 = 9700U;
	int32_t x576 = -423801378;
	volatile uint32_t t139 = 303814268U;

    t139 = (((x573%x574)^x575)|x576);

    if (t139 != 3871174111U) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x577 = INT16_MIN;
	uint32_t x578 = 199659854U;
	int16_t x579 = INT16_MIN;
	volatile int64_t x580 = 2740663LL;
	static volatile int64_t t140 = 14958878LL;

    t140 = (((x577%x578)^x579)|x580);

    if (t140 != 4192982463LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x581 = -1LL;
	static int16_t x582 = INT16_MIN;
	volatile int64_t x583 = 11181199053LL;
	volatile int64_t t141 = 166874959715169682LL;

    t141 = (((x581%x582)^x583)|x584);

    if (t141 != -1LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x585 = 1227822911261210LLU;
	int32_t x586 = -1;
	static int16_t x587 = INT16_MIN;
	static uint8_t x588 = UINT8_MAX;
	volatile uint64_t t142 = 277933LLU;

    t142 = (((x585%x586)^x587)|x588);

    if (t142 != 18445516250798263039LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x589 = -1;
	int32_t x590 = INT32_MIN;
	int16_t x591 = INT16_MAX;

    t143 = (((x589%x590)^x591)|x592);

    if (t143 != -32641) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint64_t x593 = 558709782755866039LLU;
	uint64_t x594 = UINT64_MAX;
	int16_t x595 = -3;
	int32_t x596 = -1;

    t144 = (((x593%x594)^x595)|x596);

    if (t144 != UINT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x597 = INT32_MAX;
	static uint32_t x598 = 317U;
	int16_t x599 = -1;
	static int8_t x600 = INT8_MIN;
	volatile uint32_t t145 = 199205U;

    t145 = (((x597%x598)^x599)|x600);

    if (t145 != 4294967180U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x601 = UINT8_MAX;
	static int64_t x602 = 249173794857029LL;
	static uint32_t x603 = UINT32_MAX;
	int32_t x604 = -187017;
	volatile int64_t t146 = -242461LL;

    t146 = (((x601%x602)^x603)|x604);

    if (t146 != -137LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x605 = INT8_MAX;
	int8_t x606 = -1;
	volatile uint8_t x608 = 1U;

    t147 = (((x605%x606)^x607)|x608);

    if (t147 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x610 = UINT8_MAX;
	static int16_t x612 = -12;
	int32_t t148 = 8662;

    t148 = (((x609%x610)^x611)|x612);

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x613 = INT16_MIN;
	static int32_t x614 = INT32_MIN;
	static uint8_t x615 = 1U;
	int64_t x616 = -5063651541LL;
	volatile int64_t t149 = -1759952953LL;

    t149 = (((x613%x614)^x615)|x616);

    if (t149 != -12501LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x621 = INT16_MIN;
	volatile int32_t x622 = 999078390;
	uint16_t x623 = 13196U;
	static int8_t x624 = INT8_MIN;
	volatile int32_t t150 = -29025;

    t150 = (((x621%x622)^x623)|x624);

    if (t150 != -116) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int8_t x627 = 24;
	static volatile int16_t x628 = INT16_MIN;

    t151 = (((x625%x626)^x627)|x628);

    if (t151 != -32744) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x629 = UINT32_MAX;
	static uint8_t x631 = UINT8_MAX;
	uint32_t x632 = 709401U;
	uint32_t t152 = 91U;

    t152 = (((x629%x630)^x631)|x632);

    if (t152 != 709629U) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x635 = 5U;
	static int16_t x636 = -1;
	static volatile int32_t t153 = 38;

    t153 = (((x633%x634)^x635)|x636);

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x637 = 7U;
	uint32_t x638 = 31851U;
	uint16_t x640 = 1769U;

    t154 = (((x637%x638)^x639)|x640);

    if (t154 != 2147485423U) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x641 = INT16_MIN;
	int32_t x643 = -1753013;
	int8_t x644 = 1;
	volatile int32_t t155 = -104;

    t155 = (((x641%x642)^x643)|x644);

    if (t155 != -1753013) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x645 = -17;
	int16_t x646 = -897;
	static int16_t x647 = 169;
	uint16_t x648 = 453U;
	int32_t t156 = -2;

    t156 = (((x645%x646)^x647)|x648);

    if (t156 != -57) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x649 = 3467314959500291LLU;
	uint64_t x652 = UINT64_MAX;
	uint64_t t157 = UINT64_MAX;

    t157 = (((x649%x650)^x651)|x652);

    if (t157 != UINT64_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x657 = -1;
	uint64_t x659 = 431246990873LLU;
	volatile uint64_t t158 = 904LLU;

    t158 = (((x657%x658)^x659)|x660);

    if (t158 != 431246989946LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x661 = INT8_MIN;
	uint16_t x662 = UINT16_MAX;
	int16_t x663 = INT16_MAX;
	int64_t x664 = INT64_MIN;
	int64_t t159 = -290097111050302LL;

    t159 = (((x661%x662)^x663)|x664);

    if (t159 != -32641LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x665 = INT64_MIN;
	int16_t x666 = INT16_MIN;
	int64_t x668 = -65365277LL;

    t160 = (((x665%x666)^x667)|x668);

    if (t160 != -65365253LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x669 = 694261714907LLU;
	uint16_t x671 = UINT16_MAX;
	uint32_t x672 = 61307210U;

    t161 = (((x669%x670)^x671)|x672);

    if (t161 != 694304110958LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x673 = -1;
	volatile int64_t x674 = -2257138LL;
	int64_t x675 = INT64_MAX;
	static int64_t x676 = INT64_MIN;
	static volatile int64_t t162 = INT64_MIN;

    t162 = (((x673%x674)^x675)|x676);

    if (t162 != INT64_MIN) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x677 = -57LL;
	int32_t x679 = INT32_MAX;

    t163 = (((x677%x678)^x679)|x680);

    if (t163 != 18446744073709546733LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x683 = 24U;
	static uint8_t x684 = 0U;
	uint32_t t164 = 124U;

    t164 = (((x681%x682)^x683)|x684);

    if (t164 != 28U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x685 = UINT64_MAX;
	int32_t x688 = -1;
	volatile uint64_t t165 = UINT64_MAX;

    t165 = (((x685%x686)^x687)|x688);

    if (t165 != UINT64_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x691 = INT8_MAX;
	volatile int32_t x692 = INT32_MAX;

    t166 = (((x689%x690)^x691)|x692);

    if (t166 != 2147483647LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x693 = INT64_MAX;
	volatile int32_t x694 = -1;
	static uint8_t x695 = 1U;
	volatile int64_t t167 = -1061724209534013LL;

    t167 = (((x693%x694)^x695)|x696);

    if (t167 != 1363LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x698 = UINT32_MAX;
	volatile uint32_t x699 = 2440351U;
	uint16_t x700 = UINT16_MAX;
	uint32_t t168 = 195948343U;

    t168 = (((x697%x698)^x699)|x700);

    if (t168 != 2490367U) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x701 = INT8_MIN;
	int32_t x702 = 42;
	int32_t x703 = INT32_MIN;
	volatile uint64_t t169 = 55784093679LLU;

    t169 = (((x701%x702)^x703)|x704);

    if (t169 != 34549457810882558LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x705 = -376LL;
	volatile uint8_t x706 = 46U;
	int32_t x707 = INT32_MIN;
	int8_t x708 = -1;
	volatile int64_t t170 = 44LL;

    t170 = (((x705%x706)^x707)|x708);

    if (t170 != -1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x709 = UINT16_MAX;
	static int64_t x710 = -440068040472663625LL;
	uint32_t x712 = 980054U;

    t171 = (((x709%x710)^x711)|x712);

    if (t171 != 983030LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x713 = -1;
	int8_t x715 = INT8_MIN;
	int32_t x716 = 117284340;
	volatile uint32_t t172 = 265U;

    t172 = (((x713%x714)^x715)|x716);

    if (t172 != 4294967285U) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x718 = -1;
	uint8_t x719 = UINT8_MAX;
	uint8_t x720 = 4U;
	static int32_t t173 = -5454;

    t173 = (((x717%x718)^x719)|x720);

    if (t173 != 255) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x721 = -2062834340400563LL;
	int8_t x722 = -18;
	volatile uint32_t x724 = 123392U;
	int64_t t174 = -19198LL;

    t174 = (((x721%x722)^x723)|x724);

    if (t174 != 131067LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x726 = INT16_MIN;
	volatile int32_t x727 = INT32_MIN;
	static int32_t t175 = INT32_MAX;

    t175 = (((x725%x726)^x727)|x728);

    if (t175 != INT32_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x730 = 339957829393802LLU;
	volatile int16_t x732 = -1;
	uint64_t t176 = UINT64_MAX;

    t176 = (((x729%x730)^x731)|x732);

    if (t176 != UINT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x733 = INT8_MIN;
	static int32_t x734 = INT32_MAX;
	uint32_t x736 = 4679773U;
	int64_t t177 = 7LL;

    t177 = (((x733%x734)^x735)|x736);

    if (t177 != -9223372036850096001LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x737 = 9U;
	uint16_t x738 = 1018U;
	uint32_t x739 = UINT32_MAX;
	int64_t x740 = INT64_MAX;

    t178 = (((x737%x738)^x739)|x740);

    if (t178 != INT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x741 = -27;
	int16_t x742 = INT16_MAX;
	static int16_t x743 = 159;
	int8_t x744 = 32;
	int32_t t179 = -413;

    t179 = (((x741%x742)^x743)|x744);

    if (t179 != -134) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x745 = INT16_MIN;
	volatile int8_t x748 = -3;
	volatile int64_t t180 = -118658901330545457LL;

    t180 = (((x745%x746)^x747)|x748);

    if (t180 != -1LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x749 = INT64_MIN;
	int8_t x750 = INT8_MIN;
	int16_t x751 = 452;
	volatile uint64_t x752 = 34354512188LLU;
	uint64_t t181 = 1LLU;

    t181 = (((x749%x750)^x751)|x752);

    if (t181 != 34354512380LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x753 = 3615927044567236LLU;
	uint8_t x754 = UINT8_MAX;
	int64_t x755 = -1LL;
	int16_t x756 = INT16_MAX;
	uint64_t t182 = UINT64_MAX;

    t182 = (((x753%x754)^x755)|x756);

    if (t182 != UINT64_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x757 = 5U;
	int16_t x759 = -12391;
	uint16_t x760 = 2624U;
	volatile int64_t t183 = -17640410862539LL;

    t183 = (((x757%x758)^x759)|x760);

    if (t183 != -12324LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x761 = 1754U;
	volatile uint32_t x762 = 63003599U;
	uint64_t x763 = 494656082932211LLU;
	int32_t x764 = -1;
	volatile uint64_t t184 = UINT64_MAX;

    t184 = (((x761%x762)^x763)|x764);

    if (t184 != UINT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x765 = 39U;
	int16_t x766 = INT16_MIN;
	uint32_t x767 = 15070540U;

    t185 = (((x765%x766)^x767)|x768);

    if (t185 != 15726459U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x769 = 184LLU;
	int8_t x770 = INT8_MIN;
	static uint16_t x771 = 2217U;
	static int16_t x772 = -1;
	volatile uint64_t t186 = UINT64_MAX;

    t186 = (((x769%x770)^x771)|x772);

    if (t186 != UINT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x773 = -1;
	int8_t x774 = INT8_MIN;
	int32_t x775 = -1;
	int8_t x776 = 0;
	int32_t t187 = 148532;

    t187 = (((x773%x774)^x775)|x776);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint8_t x777 = 127U;
	int64_t x778 = -1LL;
	int64_t x780 = INT64_MAX;

    t188 = (((x777%x778)^x779)|x780);

    if (t188 != -1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x781 = -1;
	int8_t x782 = INT8_MAX;
	static uint16_t x784 = 1U;
	static int32_t t189 = INT32_MAX;

    t189 = (((x781%x782)^x783)|x784);

    if (t189 != INT32_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x785 = -1;
	int32_t x786 = INT32_MIN;
	int16_t x787 = INT16_MAX;
	int8_t x788 = 3;
	volatile int32_t t190 = -692387;

    t190 = (((x785%x786)^x787)|x788);

    if (t190 != -32765) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x789 = -12;
	uint16_t x790 = 28U;
	int8_t x791 = -12;
	int32_t x792 = 0;
	int32_t t191 = 1637319;

    t191 = (((x789%x790)^x791)|x792);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x793 = 26585U;
	int8_t x794 = -1;
	volatile int16_t x795 = 1693;
	int64_t x796 = -1LL;
	static int64_t t192 = 50LL;

    t192 = (((x793%x794)^x795)|x796);

    if (t192 != -1LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x797 = UINT64_MAX;
	int32_t x798 = -592;
	static volatile int8_t x799 = INT8_MIN;
	int64_t x800 = INT64_MIN;
	uint64_t t193 = 2176335255LLU;

    t193 = (((x797%x798)^x799)|x800);

    if (t193 != 18446744073709551055LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int16_t x801 = -1;
	volatile uint64_t t194 = 28997557LLU;

    t194 = (((x801%x802)^x803)|x804);

    if (t194 != 5LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x805 = INT8_MIN;
	static uint32_t x806 = 1556739045U;
	static uint8_t x808 = 50U;
	static uint32_t t195 = 143U;

    t195 = (((x805%x806)^x807)|x808);

    if (t195 != 3113478267U) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x809 = INT16_MIN;
	volatile int8_t x810 = -4;
	volatile int16_t x811 = INT16_MAX;
	static int64_t x812 = INT64_MIN;
	int64_t t196 = -5459LL;

    t196 = (((x809%x810)^x811)|x812);

    if (t196 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x813 = 26960994;
	static uint64_t x814 = 56550990167840LLU;
	volatile int32_t x815 = 2;
	static volatile uint64_t t197 = 5693697LLU;

    t197 = (((x813%x814)^x815)|x816);

    if (t197 != 18446744073709516405LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x817 = -1;
	int16_t x818 = -1;
	int32_t x819 = -1;
	int64_t x820 = INT64_MIN;
	static volatile int64_t t198 = -1938863120946LL;

    t198 = (((x817%x818)^x819)|x820);

    if (t198 != -1LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint64_t x821 = 386LLU;
	uint64_t x822 = 415LLU;
	int32_t x823 = INT32_MAX;
	static int8_t x824 = INT8_MIN;
	uint64_t t199 = 100811628495477909LLU;

    t199 = (((x821%x822)^x823)|x824);

    if (t199 != 18446744073709551613LLU) { NG(); } else { ; }
	
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

