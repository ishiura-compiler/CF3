
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

static int64_t x1 = -1684LL;
int16_t x7 = -1;
int8_t x12 = -1;
uint32_t x15 = 46622613U;
uint32_t x25 = 1112729621U;
int32_t x42 = 242144;
int64_t x45 = -1LL;
int32_t x53 = -1;
int8_t x54 = INT8_MIN;
volatile uint32_t t11 = 995U;
volatile uint32_t x65 = UINT32_MAX;
volatile uint8_t x66 = 45U;
int32_t x70 = INT32_MIN;
static volatile int8_t x73 = -5;
static int8_t x75 = 6;
int64_t x107 = 1LL;
volatile int8_t x112 = INT8_MIN;
uint8_t x125 = 1U;
int8_t x126 = -57;
volatile uint64_t x127 = UINT64_MAX;
volatile uint32_t x143 = UINT32_MAX;
static uint16_t x144 = 14U;
uint8_t x150 = 11U;
static int8_t x152 = INT8_MIN;
static uint16_t x154 = 3594U;
uint64_t t28 = 4965583921400037LLU;
uint8_t x168 = 14U;
uint8_t x170 = 3U;
static volatile int32_t t30 = -4995;
uint32_t x177 = UINT32_MAX;
int32_t x185 = -1;
static int8_t x192 = INT8_MIN;
volatile int32_t t33 = 54027;
int8_t x193 = INT8_MIN;
volatile int32_t t34 = -901;
int8_t x205 = INT8_MAX;
uint64_t x206 = 29415589381LLU;
static volatile uint64_t x207 = 39078LLU;
static int64_t x208 = -1LL;
uint16_t x213 = 9004U;
uint16_t x218 = UINT16_MAX;
volatile uint32_t t39 = 729U;
int64_t x225 = 4LL;
uint64_t x228 = UINT64_MAX;
int16_t x249 = INT16_MIN;
static uint16_t x256 = UINT16_MAX;
volatile int32_t t45 = 2;
int8_t x264 = INT8_MIN;
static int8_t x269 = -1;
int32_t x276 = -1;
uint16_t x277 = UINT16_MAX;
static volatile uint16_t x279 = 867U;
int32_t t51 = 33397;
int32_t x301 = -1;
int8_t x314 = INT8_MIN;
volatile int64_t x333 = -1LL;
int8_t x337 = INT8_MIN;
uint16_t x340 = 7075U;
static volatile int64_t t62 = -243583917934LL;
static int8_t x363 = -39;
int64_t x370 = -16156LL;
volatile int32_t x372 = INT32_MIN;
uint64_t x378 = UINT64_MAX;
uint16_t x380 = 61U;
int8_t x381 = INT8_MAX;
int16_t x382 = INT16_MIN;
int32_t x395 = INT32_MIN;
static int32_t t68 = 0;
uint64_t x398 = UINT64_MAX;
volatile uint8_t x404 = 1U;
volatile uint64_t t71 = 5745LLU;
uint16_t x434 = UINT16_MAX;
int32_t t77 = -1;
int16_t x438 = -5;
int16_t x439 = INT16_MAX;
int64_t x442 = 1541352045LL;
static uint64_t x444 = UINT64_MAX;
uint32_t x448 = 623454005U;
static uint32_t t80 = 3799U;
volatile int64_t t81 = 11775913036733LL;
volatile uint64_t x461 = 2200357011LLU;
int64_t x463 = -1LL;
volatile int8_t x467 = INT8_MIN;
int8_t x468 = 0;
int32_t x472 = -4072718;
uint32_t x480 = 133U;
volatile int32_t x482 = -51741;
int8_t x483 = -3;
uint64_t x484 = 103LLU;
uint32_t x487 = UINT32_MAX;
static uint32_t x488 = 7U;
static uint32_t x498 = UINT32_MAX;
static int32_t t90 = -579;
int64_t x510 = 2627865515LL;
static int32_t t93 = -2717770;
uint64_t x522 = 2785412074LLU;
static int32_t t94 = -6145;
volatile int64_t x539 = 1675LL;
int64_t x540 = -1LL;
uint8_t x544 = 84U;
static int8_t x545 = -1;
int8_t x551 = -1;
static uint8_t x563 = 31U;
volatile uint64_t x564 = UINT64_MAX;
static uint64_t t101 = 99223833227285356LLU;
int32_t x565 = INT32_MIN;
uint64_t x566 = 930386653996LLU;
int16_t x575 = INT16_MIN;
volatile uint32_t x577 = 411972118U;
volatile uint8_t x578 = 24U;
int16_t x587 = 4;
volatile int32_t t106 = 1368;
static int32_t x593 = INT32_MIN;
int16_t x605 = 510;
int16_t x618 = -1;
static int64_t t114 = -121595750140297435LL;
int16_t x648 = INT16_MIN;
volatile int64_t t118 = -261811LL;
uint16_t x656 = UINT16_MAX;
int32_t x657 = INT32_MAX;
int8_t x663 = INT8_MIN;
volatile int16_t x664 = INT16_MAX;
int16_t x682 = -1;
static volatile uint8_t x684 = UINT8_MAX;
int32_t t125 = 5581684;
static uint32_t x694 = 3316U;
int16_t x696 = -80;
static int8_t x698 = 49;
volatile int32_t t128 = -652;
static uint32_t x705 = 0U;
volatile uint64_t x707 = UINT64_MAX;
static uint8_t x727 = 31U;
int32_t t133 = -7453662;
uint64_t x732 = 15LLU;
static volatile uint64_t t134 = 13467777384979LLU;
int16_t x738 = INT16_MIN;
volatile int32_t t136 = 89;
volatile int32_t t137 = -44481;
uint64_t x748 = UINT64_MAX;
int32_t x749 = INT32_MIN;
int64_t x752 = INT64_MIN;
volatile int8_t x758 = INT8_MIN;
static int16_t x759 = INT16_MAX;
static uint8_t x764 = UINT8_MAX;
static int32_t t144 = 123245;
int32_t x778 = INT32_MAX;
uint64_t x780 = UINT64_MAX;
uint32_t t146 = 200U;
static int32_t x795 = -1;
uint8_t x801 = 47U;
static uint64_t x802 = 4157585148910LLU;
uint16_t x803 = UINT16_MAX;
uint32_t x806 = UINT32_MAX;
volatile int64_t x808 = INT64_MIN;
volatile int64_t x813 = INT64_MAX;
volatile int8_t x814 = -6;
volatile uint64_t x819 = 491080026033900935LLU;
static volatile uint32_t t152 = 11144U;
uint8_t x828 = UINT8_MAX;
uint16_t x829 = 21U;
int32_t x837 = INT32_MAX;
int32_t x838 = INT32_MIN;
volatile int64_t t156 = -24093319632LL;
volatile int8_t x845 = INT8_MIN;
volatile uint32_t t158 = 20U;
int64_t x850 = 362330LL;
volatile int32_t t160 = 5219;
int64_t x867 = 913354119LL;
int32_t t163 = 321448;
int64_t x880 = 786261772657LL;
volatile int32_t x888 = INT32_MIN;
static volatile int32_t t165 = -74;
uint8_t x892 = 2U;
static int8_t x894 = 0;
volatile int64_t x898 = -11461385652567144LL;
int64_t x905 = -1LL;
volatile uint64_t t169 = 116978195535961LLU;
int16_t x910 = INT16_MIN;
int8_t x911 = -1;
uint16_t x912 = 2577U;
int8_t x918 = INT8_MIN;
uint64_t x919 = 1374766053215LLU;
int32_t x920 = 128;
static volatile int32_t t172 = -1;
int8_t x942 = INT8_MIN;
static int8_t x957 = INT8_MAX;
uint16_t x959 = UINT16_MAX;
int16_t x977 = INT16_MIN;
int64_t x979 = -1779212081823LL;
uint64_t t179 = 17437LLU;
int32_t x1015 = INT32_MIN;
int32_t t185 = -1449;
int64_t x1038 = -1LL;
static int32_t x1040 = INT32_MIN;
static volatile int16_t x1044 = INT16_MAX;
int32_t t188 = -20385;
int8_t x1054 = -1;
uint32_t x1066 = 7U;
int64_t x1068 = INT64_MIN;
int32_t t194 = -1;
int64_t x1077 = 232078LL;
int8_t x1078 = -1;
int8_t x1079 = INT8_MAX;
volatile int32_t t195 = 956421;
static int8_t x1084 = INT8_MIN;
volatile int16_t x1090 = INT16_MAX;
volatile uint64_t x1092 = 63761700469897LLU;
volatile int32_t t199 = 1233652;


void f0(void) {
    	int16_t x2 = 1514;
	int32_t x3 = -1;
	int64_t x4 = 30756835360461LL;
	int64_t t0 = 5570161711438LL;

    t0 = ((x1!=(x2*x3))+x4);

    if (t0 != 30756835360462LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = INT16_MIN;
	uint64_t x6 = UINT64_MAX;
	volatile int16_t x8 = 796;
	static int32_t t1 = 827206041;

    t1 = ((x5!=(x6*x7))+x8);

    if (t1 != 797) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 1309265U;
	int32_t x10 = -5064320;
	volatile uint8_t x11 = 0U;
	static int32_t t2 = 154;

    t2 = ((x9!=(x10*x11))+x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MAX;
	volatile uint64_t x14 = 80LLU;
	static uint64_t x16 = UINT64_MAX;
	uint64_t t3 = 16129470639908029LLU;

    t3 = ((x13!=(x14*x15))+x16);

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x21 = INT8_MAX;
	uint64_t x22 = 3LLU;
	int32_t x23 = 29276;
	volatile int8_t x24 = -1;
	volatile int32_t t4 = 6095;

    t4 = ((x21!=(x22*x23))+x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x26 = 108U;
	uint64_t x27 = UINT64_MAX;
	volatile int8_t x28 = 4;
	volatile int32_t t5 = 35075;

    t5 = ((x25!=(x26*x27))+x28);

    if (t5 != 5) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x29 = 8046145670LL;
	static uint16_t x30 = 353U;
	uint64_t x31 = 28047563102135LLU;
	static volatile uint8_t x32 = UINT8_MAX;
	int32_t t6 = 82;

    t6 = ((x29!=(x30*x31))+x32);

    if (t6 != 256) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x33 = 48042002LL;
	uint32_t x34 = UINT32_MAX;
	int16_t x35 = INT16_MIN;
	int8_t x36 = 3;
	static int32_t t7 = -98921;

    t7 = ((x33!=(x34*x35))+x36);

    if (t7 != 4) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x41 = INT16_MIN;
	int32_t x43 = -3103;
	uint8_t x44 = 3U;
	volatile int32_t t8 = -754172868;

    t8 = ((x41!=(x42*x43))+x44);

    if (t8 != 4) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x46 = -1;
	uint32_t x47 = 8U;
	int16_t x48 = INT16_MIN;
	int32_t t9 = -299267093;

    t9 = ((x45!=(x46*x47))+x48);

    if (t9 != -32767) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x49 = INT64_MIN;
	uint64_t x50 = 17350451011395LLU;
	volatile uint32_t x51 = 3U;
	uint32_t x52 = 939U;
	volatile uint32_t t10 = 1U;

    t10 = ((x49!=(x50*x51))+x52);

    if (t10 != 940U) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x55 = INT16_MAX;
	static uint32_t x56 = 1498237U;

    t11 = ((x53!=(x54*x55))+x56);

    if (t11 != 1498238U) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x67 = -1344;
	uint16_t x68 = 23396U;
	volatile int32_t t12 = 3;

    t12 = ((x65!=(x66*x67))+x68);

    if (t12 != 23397) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x69 = INT32_MIN;
	uint16_t x71 = 0U;
	volatile int64_t x72 = -1LL;
	int64_t t13 = 9613271366755LL;

    t13 = ((x69!=(x70*x71))+x72);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x74 = -768;
	static uint64_t x76 = 1312969370LLU;
	volatile uint64_t t14 = 1843104831LLU;

    t14 = ((x73!=(x74*x75))+x76);

    if (t14 != 1312969371LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x81 = INT32_MIN;
	int8_t x82 = INT8_MIN;
	int32_t x83 = 229;
	volatile uint8_t x84 = 68U;
	static int32_t t15 = -1;

    t15 = ((x81!=(x82*x83))+x84);

    if (t15 != 69) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x85 = UINT8_MAX;
	uint16_t x86 = 25738U;
	uint16_t x87 = 288U;
	static uint16_t x88 = 504U;
	static volatile int32_t t16 = -1;

    t16 = ((x85!=(x86*x87))+x88);

    if (t16 != 505) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x93 = -295;
	int16_t x94 = INT16_MIN;
	int16_t x95 = INT16_MIN;
	int32_t x96 = INT32_MIN;
	int32_t t17 = -275065;

    t17 = ((x93!=(x94*x95))+x96);

    if (t17 != -2147483647) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x97 = UINT16_MAX;
	int64_t x98 = -1LL;
	int8_t x99 = -1;
	int16_t x100 = INT16_MIN;
	volatile int32_t t18 = 79;

    t18 = ((x97!=(x98*x99))+x100);

    if (t18 != -32767) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x105 = UINT16_MAX;
	int8_t x106 = -1;
	uint8_t x108 = 5U;
	volatile int32_t t19 = -146882;

    t19 = ((x105!=(x106*x107))+x108);

    if (t19 != 6) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x109 = 8437959;
	volatile int8_t x110 = 0;
	static int32_t x111 = INT32_MIN;
	int32_t t20 = -19480;

    t20 = ((x109!=(x110*x111))+x112);

    if (t20 != -127) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint32_t x113 = UINT32_MAX;
	int8_t x114 = 0;
	int16_t x115 = -1;
	int32_t x116 = -1;
	static int32_t t21 = 3607293;

    t21 = ((x113!=(x114*x115))+x116);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x117 = -1;
	uint32_t x118 = UINT32_MAX;
	int8_t x119 = INT8_MIN;
	int16_t x120 = INT16_MAX;
	volatile int32_t t22 = 23512730;

    t22 = ((x117!=(x118*x119))+x120);

    if (t22 != 32768) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x128 = -1;
	volatile int32_t t23 = -1578072;

    t23 = ((x125!=(x126*x127))+x128);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x141 = UINT32_MAX;
	uint8_t x142 = 38U;
	volatile int32_t t24 = -2543;

    t24 = ((x141!=(x142*x143))+x144);

    if (t24 != 15) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x145 = 9100500698681106822LLU;
	uint64_t x146 = 9630161212618LLU;
	static int16_t x147 = -1;
	int32_t x148 = 17970;
	volatile int32_t t25 = -1;

    t25 = ((x145!=(x146*x147))+x148);

    if (t25 != 17971) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x149 = -1;
	int64_t x151 = -30604LL;
	volatile int32_t t26 = -205693;

    t26 = ((x149!=(x150*x151))+x152);

    if (t26 != -127) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x153 = INT64_MAX;
	int16_t x155 = 0;
	int16_t x156 = -1;
	int32_t t27 = -8;

    t27 = ((x153!=(x154*x155))+x156);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x161 = 7050U;
	int16_t x162 = INT16_MAX;
	volatile int16_t x163 = INT16_MIN;
	uint64_t x164 = 38966950612972LLU;

    t28 = ((x161!=(x162*x163))+x164);

    if (t28 != 38966950612973LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x165 = -1;
	static uint32_t x166 = 6291U;
	uint16_t x167 = 314U;
	volatile int32_t t29 = -2060429;

    t29 = ((x165!=(x166*x167))+x168);

    if (t29 != 15) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x169 = UINT16_MAX;
	static int16_t x171 = INT16_MAX;
	int16_t x172 = INT16_MIN;

    t30 = ((x169!=(x170*x171))+x172);

    if (t30 != -32767) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x178 = 493LL;
	static int32_t x179 = -17;
	static int32_t x180 = -1;
	volatile int32_t t31 = -3048909;

    t31 = ((x177!=(x178*x179))+x180);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x186 = INT16_MAX;
	int16_t x187 = INT16_MIN;
	uint64_t x188 = 1642662LLU;
	volatile uint64_t t32 = 1930086941LLU;

    t32 = ((x185!=(x186*x187))+x188);

    if (t32 != 1642663LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x189 = -3937093;
	int16_t x190 = INT16_MAX;
	volatile uint16_t x191 = UINT16_MAX;

    t33 = ((x189!=(x190*x191))+x192);

    if (t33 != -127) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x194 = 8U;
	int64_t x195 = -1LL;
	uint8_t x196 = 2U;

    t34 = ((x193!=(x194*x195))+x196);

    if (t34 != 3) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x197 = INT8_MIN;
	volatile int64_t x198 = -1408260974209LL;
	uint16_t x199 = 44U;
	int16_t x200 = 3;
	volatile int32_t t35 = 21;

    t35 = ((x197!=(x198*x199))+x200);

    if (t35 != 4) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x201 = 4U;
	int64_t x202 = INT64_MIN;
	uint8_t x203 = 1U;
	int64_t x204 = -7624LL;
	static volatile int64_t t36 = -132LL;

    t36 = ((x201!=(x202*x203))+x204);

    if (t36 != -7623LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int64_t t37 = -114708323LL;

    t37 = ((x205!=(x206*x207))+x208);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile uint64_t x214 = UINT64_MAX;
	uint8_t x215 = UINT8_MAX;
	int16_t x216 = 1;
	volatile int32_t t38 = -257430902;

    t38 = ((x213!=(x214*x215))+x216);

    if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x217 = -1;
	uint64_t x219 = UINT64_MAX;
	static uint32_t x220 = 2265318U;

    t39 = ((x217!=(x218*x219))+x220);

    if (t39 != 2265319U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x226 = 79U;
	uint64_t x227 = UINT64_MAX;
	volatile uint64_t t40 = 6LLU;

    t40 = ((x225!=(x226*x227))+x228);

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int32_t x229 = 14413;
	int64_t x230 = 21755201LL;
	int8_t x231 = -14;
	uint64_t x232 = UINT64_MAX;
	uint64_t t41 = 9237083LLU;

    t41 = ((x229!=(x230*x231))+x232);

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x241 = 534999U;
	uint8_t x242 = 1U;
	int64_t x243 = INT64_MAX;
	static int8_t x244 = -1;
	int32_t t42 = -204;

    t42 = ((x241!=(x242*x243))+x244);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x245 = 1230LLU;
	uint32_t x246 = 3052U;
	int8_t x247 = INT8_MIN;
	volatile uint8_t x248 = UINT8_MAX;
	int32_t t43 = 953292290;

    t43 = ((x245!=(x246*x247))+x248);

    if (t43 != 256) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x250 = UINT64_MAX;
	static int32_t x251 = INT32_MIN;
	int32_t x252 = 8;
	int32_t t44 = 1779;

    t44 = ((x249!=(x250*x251))+x252);

    if (t44 != 9) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x253 = UINT16_MAX;
	static int32_t x254 = INT32_MIN;
	volatile int64_t x255 = 1LL;

    t45 = ((x253!=(x254*x255))+x256);

    if (t45 != 65536) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x257 = UINT32_MAX;
	int8_t x258 = 18;
	static int64_t x259 = -3413913481LL;
	volatile int32_t x260 = -146;
	volatile int32_t t46 = -1;

    t46 = ((x257!=(x258*x259))+x260);

    if (t46 != -145) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x261 = INT16_MAX;
	uint8_t x262 = 60U;
	int32_t x263 = -185;
	static volatile int32_t t47 = -38;

    t47 = ((x261!=(x262*x263))+x264);

    if (t47 != -127) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x270 = 43LL;
	volatile int16_t x271 = -78;
	volatile int8_t x272 = INT8_MAX;
	static int32_t t48 = 99539013;

    t48 = ((x269!=(x270*x271))+x272);

    if (t48 != 128) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x273 = 5404;
	volatile int64_t x274 = -1LL;
	volatile int64_t x275 = -1LL;
	int32_t t49 = 41639;

    t49 = ((x273!=(x274*x275))+x276);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x278 = 0U;
	int16_t x280 = INT16_MAX;
	static volatile int32_t t50 = -12575;

    t50 = ((x277!=(x278*x279))+x280);

    if (t50 != 32768) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x281 = INT32_MIN;
	static int16_t x282 = INT16_MIN;
	volatile uint16_t x283 = 186U;
	uint16_t x284 = UINT16_MAX;

    t51 = ((x281!=(x282*x283))+x284);

    if (t51 != 65536) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x289 = 1;
	static volatile int32_t x290 = -5;
	volatile uint64_t x291 = 320458LLU;
	int16_t x292 = -1;
	int32_t t52 = 190025;

    t52 = ((x289!=(x290*x291))+x292);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x293 = INT32_MIN;
	volatile int8_t x294 = INT8_MIN;
	volatile uint16_t x295 = 4U;
	volatile int16_t x296 = -1;
	static int32_t t53 = -37;

    t53 = ((x293!=(x294*x295))+x296);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x302 = -1;
	static volatile uint16_t x303 = 4U;
	int16_t x304 = INT16_MIN;
	volatile int32_t t54 = -1041671002;

    t54 = ((x301!=(x302*x303))+x304);

    if (t54 != -32767) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x305 = UINT16_MAX;
	uint32_t x306 = 1019920173U;
	int8_t x307 = -1;
	int32_t x308 = -57418913;
	int32_t t55 = -4848919;

    t55 = ((x305!=(x306*x307))+x308);

    if (t55 != -57418912) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int32_t x313 = 12;
	int64_t x315 = -1LL;
	static volatile int32_t x316 = -238380;
	volatile int32_t t56 = 8736;

    t56 = ((x313!=(x314*x315))+x316);

    if (t56 != -238379) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x325 = UINT64_MAX;
	uint64_t x326 = 1LLU;
	int8_t x327 = -1;
	int32_t x328 = -3451176;
	static volatile int32_t t57 = 1254163;

    t57 = ((x325!=(x326*x327))+x328);

    if (t57 != -3451176) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x329 = 144295012U;
	volatile int64_t x330 = -29335403LL;
	int32_t x331 = -1;
	static int16_t x332 = INT16_MAX;
	int32_t t58 = -39924588;

    t58 = ((x329!=(x330*x331))+x332);

    if (t58 != 32768) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x334 = INT16_MIN;
	static volatile int8_t x335 = -2;
	volatile int8_t x336 = 0;
	volatile int32_t t59 = 171045;

    t59 = ((x333!=(x334*x335))+x336);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x338 = 0U;
	int32_t x339 = INT32_MIN;
	volatile int32_t t60 = -672310;

    t60 = ((x337!=(x338*x339))+x340);

    if (t60 != 7076) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int8_t x341 = -1;
	static volatile int8_t x342 = -4;
	static int8_t x343 = INT8_MAX;
	uint64_t x344 = 418624984LLU;
	volatile uint64_t t61 = 8865LLU;

    t61 = ((x341!=(x342*x343))+x344);

    if (t61 != 418624985LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x349 = 1;
	volatile int8_t x350 = 0;
	volatile int64_t x351 = INT64_MIN;
	int64_t x352 = -123237492775915967LL;

    t62 = ((x349!=(x350*x351))+x352);

    if (t62 != -123237492775915966LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x353 = 9678437387043063LL;
	volatile int32_t x354 = INT32_MAX;
	int64_t x355 = -1LL;
	static uint32_t x356 = 203956771U;
	uint32_t t63 = 2733952U;

    t63 = ((x353!=(x354*x355))+x356);

    if (t63 != 203956772U) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x361 = INT8_MIN;
	volatile int64_t x362 = -1LL;
	int32_t x364 = -1;
	volatile int32_t t64 = -795293215;

    t64 = ((x361!=(x362*x363))+x364);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint8_t x369 = 23U;
	uint8_t x371 = 0U;
	int32_t t65 = 6;

    t65 = ((x369!=(x370*x371))+x372);

    if (t65 != -2147483647) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x377 = 1;
	static uint8_t x379 = UINT8_MAX;
	volatile int32_t t66 = 0;

    t66 = ((x377!=(x378*x379))+x380);

    if (t66 != 62) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x383 = -1;
	int64_t x384 = -250984570173902557LL;
	int64_t t67 = 221329102486LL;

    t67 = ((x381!=(x382*x383))+x384);

    if (t67 != -250984570173902556LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x393 = INT32_MAX;
	int16_t x394 = 0;
	static int8_t x396 = -28;

    t68 = ((x393!=(x394*x395))+x396);

    if (t68 != -27) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x397 = 1;
	static int8_t x399 = INT8_MIN;
	int64_t x400 = INT64_MIN;
	volatile int64_t t69 = -158038103495LL;

    t69 = ((x397!=(x398*x399))+x400);

    if (t69 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int32_t x401 = INT32_MIN;
	static int16_t x402 = INT16_MIN;
	uint64_t x403 = UINT64_MAX;
	volatile int32_t t70 = 95668968;

    t70 = ((x401!=(x402*x403))+x404);

    if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x405 = INT64_MIN;
	int16_t x406 = 1;
	int8_t x407 = -1;
	volatile uint64_t x408 = 161717LLU;

    t71 = ((x405!=(x406*x407))+x408);

    if (t71 != 161718LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x409 = 43U;
	static volatile int64_t x410 = -266594061450LL;
	int16_t x411 = -1;
	int8_t x412 = INT8_MAX;
	static volatile int32_t t72 = 215;

    t72 = ((x409!=(x410*x411))+x412);

    if (t72 != 128) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint64_t x413 = UINT64_MAX;
	static int32_t x414 = -1;
	int64_t x415 = INT64_MAX;
	uint32_t x416 = 6541U;
	static volatile uint32_t t73 = 59203U;

    t73 = ((x413!=(x414*x415))+x416);

    if (t73 != 6542U) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x417 = 1069873LL;
	int64_t x418 = INT64_MAX;
	uint64_t x419 = UINT64_MAX;
	uint16_t x420 = 114U;
	volatile int32_t t74 = -115898941;

    t74 = ((x417!=(x418*x419))+x420);

    if (t74 != 115) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int32_t x421 = INT32_MAX;
	uint32_t x422 = 45655434U;
	int32_t x423 = 819972;
	volatile int64_t x424 = INT64_MIN;
	static volatile int64_t t75 = 1747514751LL;

    t75 = ((x421!=(x422*x423))+x424);

    if (t75 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x425 = INT16_MIN;
	volatile int16_t x426 = INT16_MAX;
	int64_t x427 = -1LL;
	uint16_t x428 = 178U;
	int32_t t76 = -3;

    t76 = ((x425!=(x426*x427))+x428);

    if (t76 != 179) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x433 = UINT32_MAX;
	int16_t x435 = -2655;
	static int16_t x436 = INT16_MIN;

    t77 = ((x433!=(x434*x435))+x436);

    if (t77 != -32767) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x437 = UINT32_MAX;
	static uint32_t x440 = UINT32_MAX;
	volatile uint32_t t78 = 567261986U;

    t78 = ((x437!=(x438*x439))+x440);

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x441 = 5805;
	uint16_t x443 = 42U;
	uint64_t t79 = 1306LLU;

    t79 = ((x441!=(x442*x443))+x444);

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x445 = 63;
	int64_t x446 = -2677990360LL;
	uint8_t x447 = UINT8_MAX;

    t80 = ((x445!=(x446*x447))+x448);

    if (t80 != 623454006U) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x453 = INT64_MIN;
	uint32_t x454 = 334U;
	int8_t x455 = INT8_MIN;
	int64_t x456 = -1358548409879911628LL;

    t81 = ((x453!=(x454*x455))+x456);

    if (t81 != -1358548409879911627LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x462 = INT32_MAX;
	int64_t x464 = -13LL;
	volatile int64_t t82 = -201209184541LL;

    t82 = ((x461!=(x462*x463))+x464);

    if (t82 != -12LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x465 = 8;
	static int16_t x466 = INT16_MIN;
	int32_t t83 = 1;

    t83 = ((x465!=(x466*x467))+x468);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x469 = 2;
	uint32_t x470 = UINT32_MAX;
	static uint32_t x471 = 14U;
	int32_t t84 = -29;

    t84 = ((x469!=(x470*x471))+x472);

    if (t84 != -4072717) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x473 = INT16_MIN;
	int16_t x474 = INT16_MIN;
	uint8_t x475 = UINT8_MAX;
	uint64_t x476 = 4908173LLU;
	static uint64_t t85 = 7LLU;

    t85 = ((x473!=(x474*x475))+x476);

    if (t85 != 4908174LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x477 = INT64_MIN;
	volatile uint8_t x478 = 1U;
	volatile int8_t x479 = INT8_MIN;
	uint32_t t86 = 3055U;

    t86 = ((x477!=(x478*x479))+x480);

    if (t86 != 134U) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x481 = 16238U;
	static uint64_t t87 = 511734400706LLU;

    t87 = ((x481!=(x482*x483))+x484);

    if (t87 != 104LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x485 = -5;
	static int64_t x486 = -13LL;
	volatile uint32_t t88 = 5U;

    t88 = ((x485!=(x486*x487))+x488);

    if (t88 != 8U) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x493 = 183;
	uint64_t x494 = 15876937121211280LLU;
	static int8_t x495 = INT8_MIN;
	int16_t x496 = 85;
	static volatile int32_t t89 = -263217952;

    t89 = ((x493!=(x494*x495))+x496);

    if (t89 != 86) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x497 = INT8_MIN;
	uint8_t x499 = 3U;
	int16_t x500 = INT16_MAX;

    t90 = ((x497!=(x498*x499))+x500);

    if (t90 != 32768) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x501 = UINT64_MAX;
	static int16_t x502 = INT16_MIN;
	int16_t x503 = -12108;
	static int16_t x504 = INT16_MIN;
	volatile int32_t t91 = 50476214;

    t91 = ((x501!=(x502*x503))+x504);

    if (t91 != -32767) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x509 = INT32_MIN;
	uint64_t x511 = 30705998498LLU;
	static uint16_t x512 = 180U;
	int32_t t92 = -45345448;

    t92 = ((x509!=(x510*x511))+x512);

    if (t92 != 181) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x513 = -4;
	uint64_t x514 = 31598LLU;
	int8_t x515 = 6;
	uint16_t x516 = UINT16_MAX;

    t93 = ((x513!=(x514*x515))+x516);

    if (t93 != 65536) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x521 = 19U;
	static uint32_t x523 = 69697U;
	static volatile uint8_t x524 = 87U;

    t94 = ((x521!=(x522*x523))+x524);

    if (t94 != 88) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x533 = -1;
	uint64_t x534 = 10193521385668655LLU;
	volatile int16_t x535 = -186;
	int8_t x536 = 0;
	int32_t t95 = 2691;

    t95 = ((x533!=(x534*x535))+x536);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x537 = -1;
	uint64_t x538 = UINT64_MAX;
	volatile int64_t t96 = 40933065LL;

    t96 = ((x537!=(x538*x539))+x540);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x541 = 47LL;
	int32_t x542 = -26689941;
	volatile int64_t x543 = -1LL;
	volatile int32_t t97 = 2;

    t97 = ((x541!=(x542*x543))+x544);

    if (t97 != 85) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x546 = -1LL;
	int8_t x547 = -1;
	int32_t x548 = 56874327;
	int32_t t98 = -43;

    t98 = ((x545!=(x546*x547))+x548);

    if (t98 != 56874328) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x549 = INT16_MIN;
	volatile uint64_t x550 = 2220900966LLU;
	volatile int16_t x552 = -3065;
	volatile int32_t t99 = -180;

    t99 = ((x549!=(x550*x551))+x552);

    if (t99 != -3064) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x553 = INT64_MAX;
	int16_t x554 = 1;
	int64_t x555 = INT64_MIN;
	int16_t x556 = INT16_MAX;
	int32_t t100 = 44969066;

    t100 = ((x553!=(x554*x555))+x556);

    if (t100 != 32768) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int16_t x561 = INT16_MIN;
	int8_t x562 = INT8_MIN;

    t101 = ((x561!=(x562*x563))+x564);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x567 = 86U;
	volatile int16_t x568 = INT16_MIN;
	static int32_t t102 = -1363211;

    t102 = ((x565!=(x566*x567))+x568);

    if (t102 != -32767) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x569 = INT16_MAX;
	int32_t x570 = 1;
	int8_t x571 = INT8_MAX;
	int16_t x572 = INT16_MAX;
	int32_t t103 = 0;

    t103 = ((x569!=(x570*x571))+x572);

    if (t103 != 32768) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x573 = 1;
	volatile uint8_t x574 = 5U;
	uint8_t x576 = 1U;
	volatile int32_t t104 = 12;

    t104 = ((x573!=(x574*x575))+x576);

    if (t104 != 2) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x579 = 1;
	int32_t x580 = -1;
	volatile int32_t t105 = -215;

    t105 = ((x577!=(x578*x579))+x580);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x585 = INT8_MIN;
	volatile uint32_t x586 = 29337582U;
	int16_t x588 = INT16_MIN;

    t106 = ((x585!=(x586*x587))+x588);

    if (t106 != -32767) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x589 = 55;
	int32_t x590 = INT32_MAX;
	static volatile uint32_t x591 = 1042U;
	int8_t x592 = INT8_MIN;
	int32_t t107 = 9418;

    t107 = ((x589!=(x590*x591))+x592);

    if (t107 != -127) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x594 = UINT64_MAX;
	static int8_t x595 = -1;
	int64_t x596 = INT64_MIN;
	int64_t t108 = -1066008169338749LL;

    t108 = ((x593!=(x594*x595))+x596);

    if (t108 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x606 = -236;
	int64_t x607 = -1LL;
	int16_t x608 = -1;
	volatile int32_t t109 = 1870895;

    t109 = ((x605!=(x606*x607))+x608);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x609 = 6;
	int16_t x610 = INT16_MIN;
	uint16_t x611 = 59U;
	static uint8_t x612 = 14U;
	volatile int32_t t110 = -29032;

    t110 = ((x609!=(x610*x611))+x612);

    if (t110 != 15) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x617 = 349895451015456LLU;
	int32_t x619 = -1;
	volatile int16_t x620 = INT16_MIN;
	int32_t t111 = 3;

    t111 = ((x617!=(x618*x619))+x620);

    if (t111 != -32767) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x621 = -1;
	volatile uint16_t x622 = UINT16_MAX;
	volatile int8_t x623 = INT8_MIN;
	static int16_t x624 = INT16_MIN;
	volatile int32_t t112 = -10522;

    t112 = ((x621!=(x622*x623))+x624);

    if (t112 != -32767) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x625 = INT16_MIN;
	int8_t x626 = INT8_MIN;
	int16_t x627 = -1;
	int8_t x628 = 3;
	int32_t t113 = 1051215051;

    t113 = ((x625!=(x626*x627))+x628);

    if (t113 != 4) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x633 = 1U;
	static uint16_t x634 = UINT16_MAX;
	uint32_t x635 = UINT32_MAX;
	int64_t x636 = INT64_MIN;

    t114 = ((x633!=(x634*x635))+x636);

    if (t114 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x637 = 799542859369LL;
	int32_t x638 = 15044610;
	uint32_t x639 = UINT32_MAX;
	int16_t x640 = -1;
	volatile int32_t t115 = -1;

    t115 = ((x637!=(x638*x639))+x640);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x641 = -47;
	int32_t x642 = -28058;
	volatile int32_t x643 = -1;
	static uint32_t x644 = 1U;
	uint32_t t116 = 105845083U;

    t116 = ((x641!=(x642*x643))+x644);

    if (t116 != 2U) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x645 = 0U;
	volatile int32_t x646 = -987;
	int16_t x647 = INT16_MIN;
	volatile int32_t t117 = 196268787;

    t117 = ((x645!=(x646*x647))+x648);

    if (t117 != -32767) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x649 = -3024LL;
	volatile uint64_t x650 = UINT64_MAX;
	int32_t x651 = INT32_MAX;
	int64_t x652 = INT64_MIN;

    t118 = ((x649!=(x650*x651))+x652);

    if (t118 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x653 = INT8_MIN;
	uint8_t x654 = 19U;
	uint64_t x655 = 16605171897LLU;
	volatile int32_t t119 = -802523291;

    t119 = ((x653!=(x654*x655))+x656);

    if (t119 != 65536) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x658 = -2;
	static volatile int16_t x659 = INT16_MIN;
	int8_t x660 = 0;
	int32_t t120 = 10339;

    t120 = ((x657!=(x658*x659))+x660);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x661 = INT32_MAX;
	uint64_t x662 = 87LLU;
	static volatile int32_t t121 = 19;

    t121 = ((x661!=(x662*x663))+x664);

    if (t121 != 32768) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x673 = -1;
	int16_t x674 = -1;
	static int8_t x675 = 0;
	uint64_t x676 = UINT64_MAX;
	uint64_t t122 = 87LLU;

    t122 = ((x673!=(x674*x675))+x676);

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x677 = INT8_MIN;
	int16_t x678 = INT16_MIN;
	static volatile uint32_t x679 = UINT32_MAX;
	uint8_t x680 = 14U;
	int32_t t123 = -949401154;

    t123 = ((x677!=(x678*x679))+x680);

    if (t123 != 15) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x681 = -1;
	int16_t x683 = -1;
	int32_t t124 = -39;

    t124 = ((x681!=(x682*x683))+x684);

    if (t124 != 256) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x685 = 25LLU;
	uint64_t x686 = 36212286906LLU;
	static int64_t x687 = INT64_MAX;
	int16_t x688 = -1172;

    t125 = ((x685!=(x686*x687))+x688);

    if (t125 != -1171) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x689 = UINT16_MAX;
	volatile uint64_t x690 = 15915565LLU;
	int32_t x691 = -493010801;
	static uint8_t x692 = 12U;
	volatile int32_t t126 = 978;

    t126 = ((x689!=(x690*x691))+x692);

    if (t126 != 13) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x693 = 82587349LL;
	volatile int32_t x695 = INT32_MIN;
	volatile int32_t t127 = -529008725;

    t127 = ((x693!=(x694*x695))+x696);

    if (t127 != -79) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x697 = UINT16_MAX;
	int16_t x699 = INT16_MIN;
	int8_t x700 = 1;

    t128 = ((x697!=(x698*x699))+x700);

    if (t128 != 2) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x701 = 0U;
	int8_t x702 = INT8_MIN;
	int32_t x703 = 59898;
	int16_t x704 = INT16_MAX;
	volatile int32_t t129 = -558783;

    t129 = ((x701!=(x702*x703))+x704);

    if (t129 != 32768) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int16_t x706 = 6;
	int16_t x708 = -1;
	int32_t t130 = -225503658;

    t130 = ((x705!=(x706*x707))+x708);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x709 = INT64_MAX;
	static uint64_t x710 = 25LLU;
	int8_t x711 = 0;
	static uint32_t x712 = 865112U;
	volatile uint32_t t131 = 5067760U;

    t131 = ((x709!=(x710*x711))+x712);

    if (t131 != 865113U) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x717 = INT64_MIN;
	uint32_t x718 = 1230U;
	static volatile uint16_t x719 = UINT16_MAX;
	int8_t x720 = 52;
	int32_t t132 = 18501918;

    t132 = ((x717!=(x718*x719))+x720);

    if (t132 != 53) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x725 = INT16_MAX;
	uint16_t x726 = UINT16_MAX;
	int16_t x728 = -13;

    t133 = ((x725!=(x726*x727))+x728);

    if (t133 != -12) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x729 = UINT8_MAX;
	uint64_t x730 = 9200046056LLU;
	uint16_t x731 = 1U;

    t134 = ((x729!=(x730*x731))+x732);

    if (t134 != 16LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint64_t x733 = 5422218129951298LLU;
	int16_t x734 = -30;
	int8_t x735 = -1;
	volatile int8_t x736 = 28;
	int32_t t135 = -178;

    t135 = ((x733!=(x734*x735))+x736);

    if (t135 != 29) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x737 = UINT8_MAX;
	volatile int32_t x739 = 1;
	static int8_t x740 = INT8_MAX;

    t136 = ((x737!=(x738*x739))+x740);

    if (t136 != 128) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x741 = INT32_MAX;
	static uint16_t x742 = 1U;
	int16_t x743 = -72;
	int16_t x744 = INT16_MAX;

    t137 = ((x741!=(x742*x743))+x744);

    if (t137 != 32768) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x745 = 17442U;
	static uint32_t x746 = 22016U;
	volatile uint16_t x747 = UINT16_MAX;
	uint64_t t138 = 14194082591119210LLU;

    t138 = ((x745!=(x746*x747))+x748);

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint64_t x750 = 43683256LLU;
	int64_t x751 = -7572105614LL;
	volatile int64_t t139 = -64225LL;

    t139 = ((x749!=(x750*x751))+x752);

    if (t139 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x753 = 0U;
	static int8_t x754 = INT8_MIN;
	static uint16_t x755 = UINT16_MAX;
	int64_t x756 = 23458815LL;
	volatile int64_t t140 = 52992LL;

    t140 = ((x753!=(x754*x755))+x756);

    if (t140 != 23458816LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x757 = INT16_MAX;
	int32_t x760 = INT32_MIN;
	static volatile int32_t t141 = -377436228;

    t141 = ((x757!=(x758*x759))+x760);

    if (t141 != -2147483647) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint8_t x761 = 1U;
	int16_t x762 = INT16_MAX;
	int16_t x763 = -1;
	static int32_t t142 = -12821;

    t142 = ((x761!=(x762*x763))+x764);

    if (t142 != 256) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x769 = INT16_MAX;
	volatile int64_t x770 = -1LL;
	int64_t x771 = -1LL;
	volatile uint32_t x772 = 1661466731U;
	static volatile uint32_t t143 = 519U;

    t143 = ((x769!=(x770*x771))+x772);

    if (t143 != 1661466732U) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x773 = INT64_MAX;
	uint8_t x774 = 3U;
	static volatile uint8_t x775 = 3U;
	static uint16_t x776 = 18189U;

    t144 = ((x773!=(x774*x775))+x776);

    if (t144 != 18190) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x777 = 126LLU;
	uint64_t x779 = 48642869702318592LLU;
	volatile uint64_t t145 = 3197666430526427875LLU;

    t145 = ((x777!=(x778*x779))+x780);

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x785 = INT32_MIN;
	uint16_t x786 = 11U;
	static volatile uint8_t x787 = UINT8_MAX;
	uint32_t x788 = 333492U;

    t146 = ((x785!=(x786*x787))+x788);

    if (t146 != 333493U) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x789 = -1;
	static uint16_t x790 = 3U;
	volatile uint32_t x791 = 11536605U;
	int64_t x792 = INT64_MIN;
	int64_t t147 = 8069787882927LL;

    t147 = ((x789!=(x790*x791))+x792);

    if (t147 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x793 = 895U;
	uint8_t x794 = 0U;
	static uint32_t x796 = 4958392U;
	uint32_t t148 = 241539U;

    t148 = ((x793!=(x794*x795))+x796);

    if (t148 != 4958393U) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x804 = -1;
	static volatile int32_t t149 = -190928;

    t149 = ((x801!=(x802*x803))+x804);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x805 = INT16_MIN;
	int64_t x807 = -8LL;
	volatile int64_t t150 = 41819LL;

    t150 = ((x805!=(x806*x807))+x808);

    if (t150 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x815 = UINT32_MAX;
	uint8_t x816 = 6U;
	static volatile int32_t t151 = 1762349;

    t151 = ((x813!=(x814*x815))+x816);

    if (t151 != 7) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x817 = UINT64_MAX;
	int32_t x818 = INT32_MIN;
	uint32_t x820 = 765U;

    t152 = ((x817!=(x818*x819))+x820);

    if (t152 != 766U) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint8_t x825 = 20U;
	int32_t x826 = 531936;
	uint8_t x827 = UINT8_MAX;
	volatile int32_t t153 = -56;

    t153 = ((x825!=(x826*x827))+x828);

    if (t153 != 256) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint64_t x830 = UINT64_MAX;
	volatile int16_t x831 = -1;
	static int32_t x832 = -1;
	int32_t t154 = -1;

    t154 = ((x829!=(x830*x831))+x832);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x833 = INT64_MIN;
	uint32_t x834 = 939835799U;
	volatile int32_t x835 = INT32_MIN;
	static uint32_t x836 = 103U;
	uint32_t t155 = 6U;

    t155 = ((x833!=(x834*x835))+x836);

    if (t155 != 104U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x839 = 13036LLU;
	volatile int64_t x840 = -177LL;

    t156 = ((x837!=(x838*x839))+x840);

    if (t156 != -176LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x841 = UINT64_MAX;
	uint32_t x842 = 2087048269U;
	int8_t x843 = INT8_MIN;
	int16_t x844 = INT16_MIN;
	int32_t t157 = -267;

    t157 = ((x841!=(x842*x843))+x844);

    if (t157 != -32767) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x846 = INT64_MIN;
	volatile int8_t x847 = 1;
	uint32_t x848 = 6018U;

    t158 = ((x845!=(x846*x847))+x848);

    if (t158 != 6019U) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x849 = INT8_MIN;
	int16_t x851 = INT16_MAX;
	int8_t x852 = -1;
	int32_t t159 = 207866591;

    t159 = ((x849!=(x850*x851))+x852);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x853 = 1;
	int16_t x854 = 57;
	uint32_t x855 = 1U;
	static int8_t x856 = 0;

    t160 = ((x853!=(x854*x855))+x856);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x861 = 931460006412333LLU;
	volatile int16_t x862 = -1;
	int32_t x863 = -509942;
	int32_t x864 = -1;
	int32_t t161 = -141739;

    t161 = ((x861!=(x862*x863))+x864);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x865 = -521994033;
	volatile uint64_t x866 = UINT64_MAX;
	int16_t x868 = -1;
	static volatile int32_t t162 = 2822755;

    t162 = ((x865!=(x866*x867))+x868);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x869 = 269U;
	int64_t x870 = 375235LL;
	static volatile uint64_t x871 = 27LLU;
	int32_t x872 = -6947;

    t163 = ((x869!=(x870*x871))+x872);

    if (t163 != -6946) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x877 = -1;
	int8_t x878 = INT8_MIN;
	int8_t x879 = -18;
	int64_t t164 = -14572511367357LL;

    t164 = ((x877!=(x878*x879))+x880);

    if (t164 != 786261772658LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x885 = INT16_MIN;
	volatile int32_t x886 = -1;
	static uint8_t x887 = 3U;

    t165 = ((x885!=(x886*x887))+x888);

    if (t165 != -2147483647) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x889 = UINT8_MAX;
	uint8_t x890 = 0U;
	static volatile uint32_t x891 = 544U;
	int32_t t166 = -53702907;

    t166 = ((x889!=(x890*x891))+x892);

    if (t166 != 3) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x893 = UINT16_MAX;
	static uint32_t x895 = 51U;
	int64_t x896 = INT64_MIN;
	static volatile int64_t t167 = -2131185965LL;

    t167 = ((x893!=(x894*x895))+x896);

    if (t167 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x897 = INT8_MAX;
	static volatile int64_t x899 = -1LL;
	int8_t x900 = 37;
	volatile int32_t t168 = -62921;

    t168 = ((x897!=(x898*x899))+x900);

    if (t168 != 38) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x906 = INT8_MIN;
	volatile int16_t x907 = INT16_MAX;
	uint64_t x908 = 4598699040557LLU;

    t169 = ((x905!=(x906*x907))+x908);

    if (t169 != 4598699040558LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x909 = -27;
	volatile int32_t t170 = 6137;

    t170 = ((x909!=(x910*x911))+x912);

    if (t170 != 2578) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint32_t x913 = 6327725U;
	uint16_t x914 = 1U;
	static uint8_t x915 = UINT8_MAX;
	int64_t x916 = 0LL;
	volatile int64_t t171 = -473099LL;

    t171 = ((x913!=(x914*x915))+x916);

    if (t171 != 1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int8_t x917 = -1;

    t172 = ((x917!=(x918*x919))+x920);

    if (t172 != 129) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x937 = 481;
	int8_t x938 = -1;
	uint8_t x939 = UINT8_MAX;
	volatile int32_t x940 = 923805691;
	int32_t t173 = -9768;

    t173 = ((x937!=(x938*x939))+x940);

    if (t173 != 923805692) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x941 = UINT64_MAX;
	int16_t x943 = INT16_MAX;
	int32_t x944 = -155;
	int32_t t174 = -316499592;

    t174 = ((x941!=(x942*x943))+x944);

    if (t174 != -154) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x958 = 315;
	volatile int16_t x960 = -14067;
	volatile int32_t t175 = -1957;

    t175 = ((x957!=(x958*x959))+x960);

    if (t175 != -14066) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x965 = -1;
	static uint64_t x966 = UINT64_MAX;
	int8_t x967 = INT8_MAX;
	static uint32_t x968 = 315920719U;
	volatile uint32_t t176 = 152054U;

    t176 = ((x965!=(x966*x967))+x968);

    if (t176 != 315920720U) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x969 = INT8_MAX;
	volatile int16_t x970 = -1;
	int64_t x971 = INT64_MAX;
	volatile uint32_t x972 = 867411005U;
	uint32_t t177 = 8U;

    t177 = ((x969!=(x970*x971))+x972);

    if (t177 != 867411006U) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x973 = INT8_MIN;
	uint32_t x974 = 525249U;
	uint64_t x975 = 1055LLU;
	volatile uint32_t x976 = 1934451U;
	uint32_t t178 = 1031594914U;

    t178 = ((x973!=(x974*x975))+x976);

    if (t178 != 1934452U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x978 = 142631U;
	static uint64_t x980 = UINT64_MAX;

    t179 = ((x977!=(x978*x979))+x980);

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x981 = INT8_MIN;
	volatile int16_t x982 = INT16_MAX;
	volatile int8_t x983 = INT8_MAX;
	int64_t x984 = INT64_MIN;
	volatile int64_t t180 = -26822709680354LL;

    t180 = ((x981!=(x982*x983))+x984);

    if (t180 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x989 = 916315208;
	static uint32_t x990 = 388U;
	int8_t x991 = INT8_MIN;
	int8_t x992 = 0;
	int32_t t181 = -12;

    t181 = ((x989!=(x990*x991))+x992);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x997 = INT8_MAX;
	volatile int32_t x998 = 754691;
	int8_t x999 = INT8_MAX;
	uint8_t x1000 = 56U;
	int32_t t182 = 2061284;

    t182 = ((x997!=(x998*x999))+x1000);

    if (t182 != 57) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int32_t x1001 = -1;
	int8_t x1002 = -54;
	int64_t x1003 = -1LL;
	int16_t x1004 = INT16_MIN;
	volatile int32_t t183 = 22880;

    t183 = ((x1001!=(x1002*x1003))+x1004);

    if (t183 != -32767) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x1009 = -1;
	int8_t x1010 = 21;
	uint32_t x1011 = UINT32_MAX;
	static volatile uint64_t x1012 = 5181768484456LLU;
	static volatile uint64_t t184 = 11061204328249400LLU;

    t184 = ((x1009!=(x1010*x1011))+x1012);

    if (t184 != 5181768484457LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int32_t x1013 = -1;
	int16_t x1014 = 1;
	int16_t x1016 = INT16_MIN;

    t185 = ((x1013!=(x1014*x1015))+x1016);

    if (t185 != -32767) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1033 = 2692;
	int16_t x1034 = -15569;
	uint16_t x1035 = 111U;
	int32_t x1036 = 1;
	int32_t t186 = -30212;

    t186 = ((x1033!=(x1034*x1035))+x1036);

    if (t186 != 2) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1037 = INT16_MAX;
	int32_t x1039 = INT32_MAX;
	int32_t t187 = 745980;

    t187 = ((x1037!=(x1038*x1039))+x1040);

    if (t187 != -2147483647) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x1041 = INT32_MIN;
	uint64_t x1042 = 5000996172217163LLU;
	static volatile uint64_t x1043 = 2340275360671LLU;

    t188 = ((x1041!=(x1042*x1043))+x1044);

    if (t188 != 32768) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint16_t x1045 = 1818U;
	int8_t x1046 = -1;
	int8_t x1047 = 3;
	volatile int32_t x1048 = 19874;
	static volatile int32_t t189 = 164;

    t189 = ((x1045!=(x1046*x1047))+x1048);

    if (t189 != 19875) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint8_t x1049 = 0U;
	static uint8_t x1050 = 3U;
	uint16_t x1051 = 77U;
	volatile int16_t x1052 = INT16_MIN;
	static volatile int32_t t190 = -2308;

    t190 = ((x1049!=(x1050*x1051))+x1052);

    if (t190 != -32767) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1053 = 6578501554028LL;
	uint64_t x1055 = 176532727726LLU;
	static int32_t x1056 = INT32_MIN;
	int32_t t191 = -764426982;

    t191 = ((x1053!=(x1054*x1055))+x1056);

    if (t191 != -2147483647) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1061 = INT8_MIN;
	static uint64_t x1062 = 127092454826LLU;
	static int32_t x1063 = -254;
	static int32_t x1064 = 4452;
	int32_t t192 = 22078555;

    t192 = ((x1061!=(x1062*x1063))+x1064);

    if (t192 != 4453) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x1065 = -1;
	uint16_t x1067 = 32746U;
	int64_t t193 = 1985611380024252346LL;

    t193 = ((x1065!=(x1066*x1067))+x1068);

    if (t193 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1073 = INT16_MIN;
	static uint16_t x1074 = 0U;
	int32_t x1075 = -88826;
	uint16_t x1076 = UINT16_MAX;

    t194 = ((x1073!=(x1074*x1075))+x1076);

    if (t194 != 65536) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1080 = INT32_MIN;

    t195 = ((x1077!=(x1078*x1079))+x1080);

    if (t195 != -2147483647) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x1081 = -1;
	uint32_t x1082 = 1U;
	static volatile int64_t x1083 = 2423545576461LL;
	int32_t t196 = -2591;

    t196 = ((x1081!=(x1082*x1083))+x1084);

    if (t196 != -127) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1085 = 61;
	int8_t x1086 = -1;
	static int8_t x1087 = INT8_MIN;
	int32_t x1088 = INT32_MIN;
	volatile int32_t t197 = -351144999;

    t197 = ((x1085!=(x1086*x1087))+x1088);

    if (t197 != -2147483647) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1089 = INT8_MAX;
	static volatile uint8_t x1091 = 12U;
	volatile uint64_t t198 = 69473540801685575LLU;

    t198 = ((x1089!=(x1090*x1091))+x1092);

    if (t198 != 63761700469898LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1093 = -1;
	int16_t x1094 = -991;
	int8_t x1095 = INT8_MAX;
	uint16_t x1096 = 0U;

    t199 = ((x1093!=(x1094*x1095))+x1096);

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

