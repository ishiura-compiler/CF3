
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

volatile uint8_t x2 = 3U;
int8_t x8 = 1;
int64_t x9 = INT64_MAX;
int8_t x11 = -61;
static int32_t x19 = INT32_MIN;
volatile int32_t t4 = -351726;
static uint8_t x23 = 13U;
int64_t x27 = -1LL;
int64_t x29 = INT64_MIN;
int32_t x33 = INT32_MIN;
static int32_t x37 = INT32_MIN;
int64_t x48 = 2023796930LL;
volatile uint8_t x49 = UINT8_MAX;
uint64_t x51 = 7969244LLU;
int32_t t12 = -6794737;
uint64_t x68 = 23374482995106419LLU;
int8_t x69 = -18;
uint64_t x74 = 8261761401LLU;
volatile int64_t x77 = -28957480LL;
volatile int32_t x78 = -1;
static uint32_t x82 = 11207333U;
volatile int32_t t20 = -121051;
static uint8_t x89 = UINT8_MAX;
volatile uint32_t x90 = UINT32_MAX;
int32_t x92 = -1;
static uint16_t x102 = UINT16_MAX;
int32_t t26 = -166;
volatile int32_t t27 = -474058;
volatile int64_t x115 = 12LL;
int64_t x120 = 1512LL;
static int8_t x121 = INT8_MIN;
int8_t x145 = INT8_MAX;
int64_t x149 = INT64_MAX;
int16_t x152 = INT16_MIN;
volatile int32_t t37 = 767503;
int32_t x154 = INT32_MAX;
volatile int32_t t38 = 2462552;
uint32_t x157 = 379927400U;
volatile int32_t t39 = -4137842;
uint8_t x170 = UINT8_MAX;
static int32_t t42 = 0;
static uint8_t x176 = 3U;
volatile int32_t t44 = 936650;
int32_t x182 = -94;
int64_t x183 = -1LL;
uint8_t x184 = 1U;
static int8_t x187 = INT8_MIN;
volatile uint8_t x190 = 63U;
int8_t x192 = INT8_MIN;
int8_t x194 = INT8_MIN;
static volatile int32_t t48 = -92396;
uint8_t x199 = 3U;
volatile int32_t t49 = 29937;
uint64_t x201 = 172449436LLU;
static int16_t x209 = -418;
static volatile uint16_t x216 = UINT16_MAX;
int64_t x217 = INT64_MIN;
volatile uint32_t x220 = 19061U;
uint32_t x229 = 15039338U;
static int32_t t57 = 0;
volatile int64_t x237 = -1155674191LL;
int32_t x239 = INT32_MIN;
int32_t x241 = 4;
int32_t x244 = INT32_MIN;
static int16_t x246 = 12898;
int16_t x247 = INT16_MIN;
uint64_t x252 = 907364432036LLU;
uint32_t x254 = 11416353U;
int64_t x256 = 1985448LL;
static int16_t x259 = INT16_MAX;
static volatile int32_t t64 = -34768;
int32_t x262 = INT32_MAX;
volatile int8_t x265 = 1;
static volatile int32_t t66 = 3601;
uint8_t x269 = 0U;
int8_t x270 = INT8_MAX;
int16_t x274 = -1;
uint64_t x276 = 193051190LLU;
int16_t x279 = 1;
volatile int64_t x286 = INT64_MAX;
int16_t x289 = 3;
uint8_t x290 = 2U;
uint8_t x299 = 0U;
int64_t x304 = INT64_MIN;
uint8_t x314 = UINT8_MAX;
uint16_t x323 = 12U;
static int16_t x328 = INT16_MIN;
int32_t t81 = 122505475;
int8_t x333 = 23;
int8_t x338 = -1;
int8_t x348 = INT8_MIN;
int64_t x351 = INT64_MAX;
int32_t x354 = INT32_MAX;
int64_t x358 = -1LL;
int16_t x361 = INT16_MIN;
int32_t x364 = 154;
volatile uint16_t x367 = UINT16_MAX;
volatile int32_t t91 = 50;
int32_t x372 = INT32_MIN;
int32_t x376 = INT32_MIN;
int32_t t93 = -1;
uint8_t x387 = 6U;
static volatile int32_t t96 = -8074;
static volatile uint16_t x390 = 39U;
static int32_t t100 = -10633;
int64_t x406 = 11499LL;
static volatile uint32_t x408 = 17618470U;
volatile int16_t x409 = INT16_MIN;
volatile int32_t t104 = 4139655;
int32_t t106 = 191;
int8_t x429 = -1;
volatile int64_t x431 = -713800111563434257LL;
static int64_t x440 = -1LL;
static int16_t x444 = INT16_MAX;
volatile int8_t x446 = 1;
volatile uint16_t x447 = UINT16_MAX;
int8_t x448 = 14;
uint32_t x449 = 1403U;
volatile int64_t x450 = INT64_MIN;
uint64_t x451 = UINT64_MAX;
static int16_t x457 = -1;
static int16_t x460 = INT16_MIN;
uint32_t x466 = 212779238U;
static volatile int64_t x477 = INT64_MIN;
static int64_t x480 = 0LL;
uint32_t x488 = 47550064U;
int32_t t122 = -226;
static uint8_t x494 = 37U;
int8_t x495 = INT8_MIN;
int32_t x510 = 5;
volatile int32_t t127 = -13604058;
volatile uint32_t x516 = 48415U;
volatile uint64_t x517 = UINT64_MAX;
int8_t x519 = INT8_MIN;
volatile int32_t t129 = -37996774;
int8_t x522 = -1;
int64_t x524 = INT64_MIN;
uint16_t x528 = 2U;
int32_t x533 = INT32_MIN;
int16_t x535 = INT16_MAX;
int32_t x538 = -1;
int16_t x540 = 1663;
volatile int32_t t134 = -1;
volatile uint64_t x541 = 1297690358200143138LLU;
static volatile int16_t x543 = INT16_MIN;
int16_t x549 = INT16_MAX;
int8_t x550 = INT8_MIN;
volatile int16_t x553 = INT16_MAX;
uint32_t x554 = 148429598U;
volatile int32_t t138 = 1064854619;
uint16_t x567 = 271U;
volatile int32_t t141 = -195079109;
static int32_t x577 = INT32_MIN;
static uint16_t x585 = 20168U;
int32_t t147 = 27;
uint16_t x595 = 1289U;
static uint64_t x614 = 24348327LLU;
volatile int64_t x621 = INT64_MAX;
int32_t t155 = 3338658;
int16_t x628 = INT16_MIN;
volatile int8_t x634 = 1;
int8_t x636 = INT8_MIN;
static int16_t x638 = INT16_MAX;
int64_t x642 = INT64_MIN;
int32_t t160 = 74322468;
volatile int16_t x650 = INT16_MIN;
int32_t t162 = 95057020;
int32_t t164 = -8670;
uint8_t x661 = 101U;
int64_t x662 = -1LL;
int16_t x666 = INT16_MIN;
int64_t x669 = -1LL;
static volatile int16_t x672 = -2466;
volatile uint32_t x673 = UINT32_MAX;
volatile uint64_t x679 = 341005081812251LLU;
int32_t t169 = 0;
int8_t x682 = -35;
volatile int8_t x683 = -1;
int64_t x686 = -7188942680652602LL;
volatile int64_t x692 = 7LL;
int32_t x693 = 0;
int64_t x698 = -1LL;
int32_t t174 = -14471;
volatile uint16_t x706 = UINT16_MAX;
volatile int32_t x720 = 5874;
static uint32_t x724 = 3137U;
static int32_t t180 = -696196116;
uint32_t x729 = UINT32_MAX;
int64_t x734 = 144386173LL;
uint64_t x737 = UINT64_MAX;
static int64_t x739 = INT64_MIN;
volatile int64_t x744 = INT64_MAX;
int16_t x754 = INT16_MAX;
int32_t x759 = INT32_MIN;
uint8_t x763 = 77U;
volatile int16_t x766 = INT16_MIN;
volatile int64_t x768 = 80561113LL;
int32_t t192 = 139345610;
static int16_t x773 = INT16_MIN;
volatile int8_t x782 = -1;
int8_t x787 = -47;
int8_t x790 = INT8_MIN;


void f0(void) {
    	uint32_t x1 = 3946U;
	int16_t x3 = INT16_MIN;
	static int16_t x4 = -1;
	int32_t t0 = -53991378;

    t0 = (((x1^x2)!=x3)!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	uint16_t x6 = 2U;
	uint16_t x7 = 8150U;
	volatile int32_t t1 = 12;

    t1 = (((x5^x6)!=x7)!=x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x10 = -1LL;
	int64_t x12 = 2238693148755043988LL;
	int32_t t2 = 1;

    t2 = (((x9^x10)!=x11)!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 4525U;
	int8_t x14 = -1;
	int8_t x15 = INT8_MAX;
	static int8_t x16 = -6;
	int32_t t3 = 238;

    t3 = (((x13^x14)!=x15)!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 0U;
	int8_t x18 = -1;
	int64_t x20 = INT64_MIN;

    t4 = (((x17^x18)!=x19)!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = 20139U;
	int64_t x22 = INT64_MIN;
	int64_t x24 = -533LL;
	int32_t t5 = 44;

    t5 = (((x21^x22)!=x23)!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = -23;
	volatile int16_t x26 = INT16_MAX;
	volatile int32_t x28 = 950736438;
	static volatile int32_t t6 = 53384034;

    t6 = (((x25^x26)!=x27)!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x30 = UINT64_MAX;
	int64_t x31 = INT64_MIN;
	uint64_t x32 = 121268LLU;
	volatile int32_t t7 = 11579;

    t7 = (((x29^x30)!=x31)!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x34 = -12047234259LL;
	volatile int8_t x35 = INT8_MIN;
	uint16_t x36 = 26411U;
	int32_t t8 = -3;

    t8 = (((x33^x34)!=x35)!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x38 = INT16_MAX;
	volatile uint64_t x39 = 7504798LLU;
	volatile int8_t x40 = INT8_MIN;
	int32_t t9 = 8;

    t9 = (((x37^x38)!=x39)!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MAX;
	volatile uint16_t x42 = UINT16_MAX;
	uint8_t x43 = UINT8_MAX;
	int32_t x44 = -1;
	volatile int32_t t10 = -15017;

    t10 = (((x41^x42)!=x43)!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = -11;
	uint16_t x46 = UINT16_MAX;
	int32_t x47 = 25;
	volatile int32_t t11 = 19;

    t11 = (((x45^x46)!=x47)!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x50 = 28U;
	static uint64_t x52 = 13065907975LLU;

    t12 = (((x49^x50)!=x51)!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	int16_t x54 = INT16_MIN;
	volatile int8_t x55 = -5;
	int8_t x56 = 0;
	volatile int32_t t13 = -47320;

    t13 = (((x53^x54)!=x55)!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = -4;
	static uint32_t x58 = 2763829U;
	int16_t x59 = -7;
	int8_t x60 = INT8_MIN;
	volatile int32_t t14 = -13665;

    t14 = (((x57^x58)!=x59)!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x61 = 137896U;
	static int32_t x62 = INT32_MIN;
	uint32_t x63 = 1113U;
	static volatile int32_t x64 = INT32_MIN;
	static volatile int32_t t15 = 52121138;

    t15 = (((x61^x62)!=x63)!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x65 = -1LL;
	volatile uint32_t x66 = UINT32_MAX;
	volatile int64_t x67 = -378450170LL;
	int32_t t16 = -2064;

    t16 = (((x65^x66)!=x67)!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x70 = 397231732000461LLU;
	int8_t x71 = INT8_MAX;
	static int32_t x72 = -1;
	volatile int32_t t17 = -14118876;

    t17 = (((x69^x70)!=x71)!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = 41004524895884121LL;
	volatile uint64_t x75 = 3280591431984412598LLU;
	int64_t x76 = INT64_MAX;
	volatile int32_t t18 = -18570426;

    t18 = (((x73^x74)!=x75)!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x79 = INT8_MIN;
	static int32_t x80 = INT32_MIN;
	volatile int32_t t19 = 2471;

    t19 = (((x77^x78)!=x79)!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = 137;
	int8_t x83 = INT8_MAX;
	int64_t x84 = INT64_MIN;

    t20 = (((x81^x82)!=x83)!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x85 = UINT32_MAX;
	static uint8_t x86 = 94U;
	int32_t x87 = -1;
	int64_t x88 = -4089562206257LL;
	volatile int32_t t21 = 74533;

    t21 = (((x85^x86)!=x87)!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x91 = -1LL;
	static int32_t t22 = 1;

    t22 = (((x89^x90)!=x91)!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MIN;
	uint32_t x94 = 0U;
	int16_t x95 = -5;
	int16_t x96 = -10;
	int32_t t23 = 956905231;

    t23 = (((x93^x94)!=x95)!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x97 = INT8_MAX;
	int8_t x98 = INT8_MAX;
	volatile int64_t x99 = -73017161352LL;
	uint64_t x100 = UINT64_MAX;
	volatile int32_t t24 = 453645;

    t24 = (((x97^x98)!=x99)!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = 5U;
	volatile int64_t x103 = INT64_MAX;
	uint8_t x104 = 40U;
	static volatile int32_t t25 = -192396536;

    t25 = (((x101^x102)!=x103)!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x105 = -1;
	int32_t x106 = 227;
	uint8_t x107 = UINT8_MAX;
	uint64_t x108 = 1LLU;

    t26 = (((x105^x106)!=x107)!=x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int16_t x109 = INT16_MAX;
	static int16_t x110 = INT16_MIN;
	int8_t x111 = -1;
	volatile uint64_t x112 = UINT64_MAX;

    t27 = (((x109^x110)!=x111)!=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x113 = 987;
	volatile uint32_t x114 = 628193U;
	uint64_t x116 = 1604LLU;
	volatile int32_t t28 = -6078246;

    t28 = (((x113^x114)!=x115)!=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MAX;
	int16_t x118 = INT16_MAX;
	static int16_t x119 = 2155;
	static int32_t t29 = -117861;

    t29 = (((x117^x118)!=x119)!=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x122 = UINT32_MAX;
	uint8_t x123 = UINT8_MAX;
	static uint64_t x124 = 0LLU;
	int32_t t30 = -13;

    t30 = (((x121^x122)!=x123)!=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x125 = -3;
	int64_t x126 = INT64_MAX;
	int64_t x127 = INT64_MIN;
	volatile int16_t x128 = -800;
	int32_t t31 = -8792;

    t31 = (((x125^x126)!=x127)!=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x129 = -1;
	int8_t x130 = INT8_MAX;
	int64_t x131 = INT64_MIN;
	uint64_t x132 = 33266377077312165LLU;
	volatile int32_t t32 = -68717379;

    t32 = (((x129^x130)!=x131)!=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint32_t x133 = 343U;
	static int8_t x134 = -6;
	int64_t x135 = -1LL;
	int32_t x136 = INT32_MIN;
	static int32_t t33 = -165;

    t33 = (((x133^x134)!=x135)!=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = -1LL;
	int8_t x138 = INT8_MAX;
	uint32_t x139 = 6670225U;
	static uint8_t x140 = 3U;
	static int32_t t34 = -3094;

    t34 = (((x137^x138)!=x139)!=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = -1;
	static int16_t x142 = -63;
	int16_t x143 = INT16_MAX;
	volatile int16_t x144 = INT16_MIN;
	int32_t t35 = 143628;

    t35 = (((x141^x142)!=x143)!=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x146 = INT32_MAX;
	int64_t x147 = INT64_MIN;
	int64_t x148 = -393898992LL;
	volatile int32_t t36 = 80064446;

    t36 = (((x145^x146)!=x147)!=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x150 = 3564;
	static volatile uint64_t x151 = 191274757LLU;

    t37 = (((x149^x150)!=x151)!=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = INT16_MIN;
	int64_t x155 = -1LL;
	volatile int32_t x156 = -143431048;

    t38 = (((x153^x154)!=x155)!=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x158 = UINT64_MAX;
	int64_t x159 = -1LL;
	int32_t x160 = INT32_MAX;

    t39 = (((x157^x158)!=x159)!=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = 22825182;
	volatile int64_t x162 = -1LL;
	int32_t x163 = INT32_MAX;
	int64_t x164 = -522388LL;
	volatile int32_t t40 = -6038990;

    t40 = (((x161^x162)!=x163)!=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = -253;
	int16_t x166 = INT16_MIN;
	static int8_t x167 = 2;
	volatile int8_t x168 = INT8_MAX;
	static volatile int32_t t41 = 15049730;

    t41 = (((x165^x166)!=x167)!=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = -16074LL;
	int32_t x171 = INT32_MIN;
	int64_t x172 = -69LL;

    t42 = (((x169^x170)!=x171)!=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x173 = -3LL;
	int8_t x174 = -1;
	uint16_t x175 = 18973U;
	static volatile int32_t t43 = 57510213;

    t43 = (((x173^x174)!=x175)!=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = 24;
	volatile int8_t x178 = INT8_MIN;
	uint32_t x179 = UINT32_MAX;
	int64_t x180 = INT64_MIN;

    t44 = (((x177^x178)!=x179)!=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = -1;
	volatile int32_t t45 = -2543;

    t45 = (((x181^x182)!=x183)!=x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = 15957;
	int8_t x186 = INT8_MIN;
	uint64_t x188 = 426919629621383LLU;
	int32_t t46 = 157546;

    t46 = (((x185^x186)!=x187)!=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x189 = -10;
	uint64_t x191 = 2859306052282258036LLU;
	int32_t t47 = 32277485;

    t47 = (((x189^x190)!=x191)!=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = 0;
	int32_t x195 = INT32_MIN;
	volatile int64_t x196 = -4LL;

    t48 = (((x193^x194)!=x195)!=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = 183LL;
	static uint16_t x198 = UINT16_MAX;
	static int64_t x200 = INT64_MAX;

    t49 = (((x197^x198)!=x199)!=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x202 = INT8_MAX;
	static int32_t x203 = 39833207;
	int16_t x204 = INT16_MIN;
	int32_t t50 = 289982394;

    t50 = (((x201^x202)!=x203)!=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = 2;
	int8_t x206 = -7;
	int8_t x207 = -1;
	int64_t x208 = -1LL;
	volatile int32_t t51 = 3650;

    t51 = (((x205^x206)!=x207)!=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x210 = 7721U;
	int32_t x211 = INT32_MAX;
	static volatile int8_t x212 = INT8_MIN;
	volatile int32_t t52 = 240;

    t52 = (((x209^x210)!=x211)!=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MAX;
	int32_t x214 = INT32_MIN;
	int16_t x215 = INT16_MAX;
	volatile int32_t t53 = 116896710;

    t53 = (((x213^x214)!=x215)!=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x218 = -1;
	uint64_t x219 = UINT64_MAX;
	int32_t t54 = 7;

    t54 = (((x217^x218)!=x219)!=x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = INT8_MIN;
	volatile int8_t x222 = INT8_MIN;
	static uint64_t x223 = UINT64_MAX;
	int16_t x224 = -1;
	int32_t t55 = 80586;

    t55 = (((x221^x222)!=x223)!=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x225 = 117708068LLU;
	uint16_t x226 = 0U;
	int8_t x227 = INT8_MIN;
	int16_t x228 = INT16_MAX;
	static int32_t t56 = -2658;

    t56 = (((x225^x226)!=x227)!=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x230 = 14U;
	static uint64_t x231 = 16216110701LLU;
	static uint32_t x232 = UINT32_MAX;

    t57 = (((x229^x230)!=x231)!=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x233 = UINT32_MAX;
	int16_t x234 = -103;
	int64_t x235 = INT64_MIN;
	int32_t x236 = -1;
	volatile int32_t t58 = -66886714;

    t58 = (((x233^x234)!=x235)!=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x238 = INT16_MIN;
	int32_t x240 = INT32_MIN;
	volatile int32_t t59 = -189;

    t59 = (((x237^x238)!=x239)!=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x242 = 1U;
	uint32_t x243 = 16U;
	int32_t t60 = 567022;

    t60 = (((x241^x242)!=x243)!=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = -1LL;
	uint16_t x248 = 116U;
	volatile int32_t t61 = 30601656;

    t61 = (((x245^x246)!=x247)!=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = INT16_MIN;
	int16_t x250 = INT16_MIN;
	int32_t x251 = INT32_MAX;
	volatile int32_t t62 = -250;

    t62 = (((x249^x250)!=x251)!=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = INT8_MIN;
	static int32_t x255 = 1;
	volatile int32_t t63 = -1;

    t63 = (((x253^x254)!=x255)!=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = INT8_MIN;
	int64_t x258 = 4489955851LL;
	uint8_t x260 = UINT8_MAX;

    t64 = (((x257^x258)!=x259)!=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x261 = -50400232;
	int16_t x263 = 61;
	int16_t x264 = INT16_MIN;
	volatile int32_t t65 = 99549;

    t65 = (((x261^x262)!=x263)!=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x266 = -1;
	volatile uint16_t x267 = 34U;
	volatile int64_t x268 = -503813396889LL;

    t66 = (((x265^x266)!=x267)!=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x271 = INT32_MIN;
	int64_t x272 = INT64_MIN;
	volatile int32_t t67 = -344;

    t67 = (((x269^x270)!=x271)!=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = -1LL;
	int8_t x275 = INT8_MIN;
	volatile int32_t t68 = 8;

    t68 = (((x273^x274)!=x275)!=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = INT32_MAX;
	uint32_t x278 = 7131152U;
	int32_t x280 = INT32_MIN;
	static volatile int32_t t69 = 57647542;

    t69 = (((x277^x278)!=x279)!=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint16_t x281 = UINT16_MAX;
	int8_t x282 = -10;
	int16_t x283 = 3060;
	volatile uint32_t x284 = 39568079U;
	volatile int32_t t70 = 110;

    t70 = (((x281^x282)!=x283)!=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x285 = -63050696;
	int16_t x287 = 2;
	int32_t x288 = 26701;
	int32_t t71 = -8;

    t71 = (((x285^x286)!=x287)!=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x291 = UINT64_MAX;
	int64_t x292 = -1LL;
	volatile int32_t t72 = -137;

    t72 = (((x289^x290)!=x291)!=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x293 = 0U;
	int32_t x294 = INT32_MIN;
	static int16_t x295 = INT16_MAX;
	int64_t x296 = 46060604967945706LL;
	static int32_t t73 = 2273;

    t73 = (((x293^x294)!=x295)!=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = -1547102699841987405LL;
	uint32_t x298 = 216U;
	int8_t x300 = 9;
	int32_t t74 = 1252;

    t74 = (((x297^x298)!=x299)!=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x301 = 1343965U;
	int16_t x302 = -1;
	int32_t x303 = INT32_MIN;
	volatile int32_t t75 = 114571;

    t75 = (((x301^x302)!=x303)!=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = INT8_MAX;
	volatile uint32_t x306 = 1687962U;
	volatile int8_t x307 = 1;
	int8_t x308 = 1;
	volatile int32_t t76 = -62354744;

    t76 = (((x305^x306)!=x307)!=x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = INT32_MIN;
	int64_t x310 = -1LL;
	volatile uint8_t x311 = 7U;
	int32_t x312 = INT32_MIN;
	int32_t t77 = -29185935;

    t77 = (((x309^x310)!=x311)!=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = INT8_MAX;
	int8_t x315 = 1;
	int8_t x316 = INT8_MIN;
	volatile int32_t t78 = 8035;

    t78 = (((x313^x314)!=x315)!=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x317 = INT32_MIN;
	uint8_t x318 = 1U;
	static volatile int64_t x319 = 1621830642055053LL;
	static int32_t x320 = -1;
	volatile int32_t t79 = -98;

    t79 = (((x317^x318)!=x319)!=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = -11264100491106680LL;
	volatile int32_t x322 = INT32_MIN;
	uint16_t x324 = UINT16_MAX;
	int32_t t80 = -182835757;

    t80 = (((x321^x322)!=x323)!=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x325 = UINT32_MAX;
	int64_t x326 = -1LL;
	int8_t x327 = INT8_MIN;

    t81 = (((x325^x326)!=x327)!=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = -7;
	volatile uint64_t x330 = UINT64_MAX;
	static int64_t x331 = 51137602470405256LL;
	int8_t x332 = INT8_MAX;
	volatile int32_t t82 = -3457879;

    t82 = (((x329^x330)!=x331)!=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x334 = -8;
	volatile int32_t x335 = INT32_MIN;
	int16_t x336 = 2124;
	int32_t t83 = -30;

    t83 = (((x333^x334)!=x335)!=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = -84;
	volatile int16_t x339 = -1;
	int8_t x340 = INT8_MIN;
	int32_t t84 = -90;

    t84 = (((x337^x338)!=x339)!=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = -1;
	int64_t x342 = 45392663519LL;
	static int32_t x343 = INT32_MIN;
	static int16_t x344 = -2094;
	int32_t t85 = -1054270549;

    t85 = (((x341^x342)!=x343)!=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int32_t x345 = -1545;
	uint8_t x346 = UINT8_MAX;
	volatile uint16_t x347 = 21866U;
	volatile int32_t t86 = 463571;

    t86 = (((x345^x346)!=x347)!=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x349 = 1014419U;
	int8_t x350 = -13;
	int32_t x352 = INT32_MIN;
	volatile int32_t t87 = 50158263;

    t87 = (((x349^x350)!=x351)!=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = -1;
	int64_t x355 = 0LL;
	int8_t x356 = INT8_MAX;
	int32_t t88 = 243;

    t88 = (((x353^x354)!=x355)!=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x357 = UINT8_MAX;
	static int32_t x359 = 371;
	int32_t x360 = -1;
	static volatile int32_t t89 = 6;

    t89 = (((x357^x358)!=x359)!=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x362 = -35;
	volatile int32_t x363 = INT32_MIN;
	static volatile int32_t t90 = -165979;

    t90 = (((x361^x362)!=x363)!=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = 41442385;
	int16_t x366 = INT16_MIN;
	int32_t x368 = -403772644;

    t91 = (((x365^x366)!=x367)!=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x369 = -1950;
	uint16_t x370 = 1348U;
	int64_t x371 = -3833572311LL;
	volatile int32_t t92 = -50;

    t92 = (((x369^x370)!=x371)!=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x373 = 20619321559338LLU;
	uint32_t x374 = 482U;
	int8_t x375 = INT8_MIN;

    t93 = (((x373^x374)!=x375)!=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x377 = -1;
	int8_t x378 = -14;
	int16_t x379 = INT16_MIN;
	uint32_t x380 = 608671551U;
	int32_t t94 = 1714;

    t94 = (((x377^x378)!=x379)!=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = -1;
	static volatile uint16_t x382 = UINT16_MAX;
	int8_t x383 = INT8_MIN;
	uint64_t x384 = 276LLU;
	volatile int32_t t95 = -330332;

    t95 = (((x381^x382)!=x383)!=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x385 = 1;
	static uint16_t x386 = 1U;
	uint8_t x388 = UINT8_MAX;

    t96 = (((x385^x386)!=x387)!=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = 47;
	int64_t x391 = -1724985836857LL;
	volatile int8_t x392 = INT8_MIN;
	static int32_t t97 = 33;

    t97 = (((x389^x390)!=x391)!=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x393 = -1;
	static int8_t x394 = INT8_MIN;
	uint64_t x395 = 263577157436551391LLU;
	int32_t x396 = INT32_MIN;
	volatile int32_t t98 = 2203211;

    t98 = (((x393^x394)!=x395)!=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = 55;
	static int64_t x398 = INT64_MAX;
	int16_t x399 = -96;
	int16_t x400 = INT16_MAX;
	volatile int32_t t99 = -2360006;

    t99 = (((x397^x398)!=x399)!=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x401 = 7U;
	int16_t x402 = -1;
	int16_t x403 = INT16_MAX;
	int64_t x404 = INT64_MIN;

    t100 = (((x401^x402)!=x403)!=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = -1LL;
	uint64_t x407 = 1LLU;
	static int32_t t101 = -1;

    t101 = (((x405^x406)!=x407)!=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x410 = -5;
	uint64_t x411 = 22628972LLU;
	static int32_t x412 = INT32_MAX;
	static int32_t t102 = 72189;

    t102 = (((x409^x410)!=x411)!=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = INT16_MIN;
	int8_t x414 = -1;
	uint16_t x415 = 269U;
	static int16_t x416 = -24;
	volatile int32_t t103 = 450;

    t103 = (((x413^x414)!=x415)!=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = 44;
	uint8_t x418 = UINT8_MAX;
	int8_t x419 = INT8_MIN;
	uint32_t x420 = 2445817U;

    t104 = (((x417^x418)!=x419)!=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = -1;
	uint32_t x422 = 87U;
	volatile int8_t x423 = -2;
	volatile uint16_t x424 = 2U;
	int32_t t105 = 31190;

    t105 = (((x421^x422)!=x423)!=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = 3;
	int8_t x426 = -1;
	volatile int8_t x427 = INT8_MIN;
	int64_t x428 = INT64_MIN;

    t106 = (((x425^x426)!=x427)!=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x430 = -1LL;
	int32_t x432 = INT32_MIN;
	int32_t t107 = -224957;

    t107 = (((x429^x430)!=x431)!=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = -1;
	int32_t x434 = -1;
	uint32_t x435 = 717U;
	int64_t x436 = INT64_MIN;
	volatile int32_t t108 = -121;

    t108 = (((x433^x434)!=x435)!=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x437 = 14653296LL;
	static int32_t x438 = 46;
	static uint64_t x439 = 426694707132LLU;
	volatile int32_t t109 = 243486357;

    t109 = (((x437^x438)!=x439)!=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x441 = 2U;
	int64_t x442 = -145736219397321LL;
	static uint8_t x443 = 0U;
	int32_t t110 = -5318332;

    t110 = (((x441^x442)!=x443)!=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = INT32_MIN;
	int32_t t111 = -41124109;

    t111 = (((x445^x446)!=x447)!=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x452 = 1820LLU;
	int32_t t112 = -1;

    t112 = (((x449^x450)!=x451)!=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = INT64_MIN;
	volatile int32_t x454 = INT32_MIN;
	volatile int64_t x455 = INT64_MIN;
	int64_t x456 = INT64_MAX;
	volatile int32_t t113 = -120;

    t113 = (((x453^x454)!=x455)!=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x458 = 17086LLU;
	int32_t x459 = INT32_MIN;
	volatile int32_t t114 = -355114734;

    t114 = (((x457^x458)!=x459)!=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint64_t x461 = UINT64_MAX;
	int16_t x462 = -1;
	int64_t x463 = -20136741079540LL;
	uint32_t x464 = 54452U;
	volatile int32_t t115 = -117;

    t115 = (((x461^x462)!=x463)!=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = 1;
	static int64_t x467 = INT64_MAX;
	int64_t x468 = INT64_MIN;
	int32_t t116 = 115;

    t116 = (((x465^x466)!=x467)!=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = 2LL;
	int32_t x470 = INT32_MIN;
	int16_t x471 = INT16_MIN;
	volatile int8_t x472 = INT8_MAX;
	int32_t t117 = 102;

    t117 = (((x469^x470)!=x471)!=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = -1LL;
	volatile uint8_t x474 = 25U;
	volatile int32_t x475 = INT32_MIN;
	int32_t x476 = -1;
	volatile int32_t t118 = -2;

    t118 = (((x473^x474)!=x475)!=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x478 = -1;
	int8_t x479 = -48;
	volatile int32_t t119 = -25088;

    t119 = (((x477^x478)!=x479)!=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int16_t x481 = 316;
	static int8_t x482 = -1;
	volatile int8_t x483 = 1;
	static int8_t x484 = 1;
	static int32_t t120 = 440;

    t120 = (((x481^x482)!=x483)!=x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x485 = 55LLU;
	int64_t x486 = -116LL;
	volatile int16_t x487 = INT16_MIN;
	int32_t t121 = -58;

    t121 = (((x485^x486)!=x487)!=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x489 = 46U;
	int32_t x490 = INT32_MIN;
	uint32_t x491 = 39849U;
	int32_t x492 = 139731;

    t122 = (((x489^x490)!=x491)!=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x493 = 216394755260LL;
	static volatile uint32_t x496 = 723986U;
	volatile int32_t t123 = -48013;

    t123 = (((x493^x494)!=x495)!=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = INT16_MAX;
	uint32_t x498 = 13U;
	int64_t x499 = INT64_MAX;
	uint8_t x500 = UINT8_MAX;
	int32_t t124 = 2794;

    t124 = (((x497^x498)!=x499)!=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x501 = INT8_MAX;
	static int32_t x502 = INT32_MIN;
	int8_t x503 = INT8_MIN;
	int8_t x504 = INT8_MIN;
	int32_t t125 = 52440;

    t125 = (((x501^x502)!=x503)!=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = INT8_MAX;
	volatile int64_t x506 = INT64_MIN;
	int32_t x507 = INT32_MIN;
	volatile int16_t x508 = INT16_MIN;
	int32_t t126 = -4;

    t126 = (((x505^x506)!=x507)!=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = INT32_MAX;
	int64_t x511 = -29393093166414LL;
	uint64_t x512 = 914LLU;

    t127 = (((x509^x510)!=x511)!=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = INT16_MIN;
	volatile int64_t x514 = INT64_MAX;
	int32_t x515 = INT32_MIN;
	int32_t t128 = -13;

    t128 = (((x513^x514)!=x515)!=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x518 = 1;
	static int64_t x520 = INT64_MIN;

    t129 = (((x517^x518)!=x519)!=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int8_t x521 = -9;
	static int16_t x523 = 847;
	static int32_t t130 = 1868;

    t130 = (((x521^x522)!=x523)!=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = -1809177552LL;
	volatile uint64_t x526 = 22638598775LLU;
	uint64_t x527 = 4234351455383058LLU;
	volatile int32_t t131 = -3;

    t131 = (((x525^x526)!=x527)!=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = -20;
	static uint16_t x530 = 783U;
	uint16_t x531 = 6U;
	volatile int32_t x532 = INT32_MAX;
	volatile int32_t t132 = -53;

    t132 = (((x529^x530)!=x531)!=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x534 = -118847LL;
	int16_t x536 = 0;
	volatile int32_t t133 = 20012081;

    t133 = (((x533^x534)!=x535)!=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x537 = INT64_MAX;
	int8_t x539 = INT8_MIN;

    t134 = (((x537^x538)!=x539)!=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint8_t x542 = 6U;
	volatile int64_t x544 = -52LL;
	static int32_t t135 = -4348;

    t135 = (((x541^x542)!=x543)!=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint64_t x545 = UINT64_MAX;
	volatile int32_t x546 = INT32_MIN;
	int64_t x547 = INT64_MIN;
	int32_t x548 = INT32_MIN;
	int32_t t136 = 11;

    t136 = (((x545^x546)!=x547)!=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x551 = INT64_MIN;
	volatile uint16_t x552 = 7U;
	volatile int32_t t137 = -17143;

    t137 = (((x549^x550)!=x551)!=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x555 = -1;
	int8_t x556 = INT8_MIN;

    t138 = (((x553^x554)!=x555)!=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = -2;
	static int8_t x558 = -2;
	int16_t x559 = INT16_MAX;
	int16_t x560 = -1;
	int32_t t139 = -70101902;

    t139 = (((x557^x558)!=x559)!=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = 14950427910694391LL;
	int32_t x562 = -228;
	int8_t x563 = -1;
	volatile uint64_t x564 = 76439380543044258LLU;
	volatile int32_t t140 = 0;

    t140 = (((x561^x562)!=x563)!=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x565 = 1796295645U;
	volatile int32_t x566 = -1;
	int32_t x568 = -52680163;

    t141 = (((x565^x566)!=x567)!=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x569 = 1467U;
	int16_t x570 = INT16_MIN;
	uint16_t x571 = 1U;
	uint8_t x572 = UINT8_MAX;
	int32_t t142 = -56058;

    t142 = (((x569^x570)!=x571)!=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = INT32_MIN;
	volatile int8_t x574 = -1;
	static volatile int8_t x575 = 0;
	int64_t x576 = INT64_MIN;
	static int32_t t143 = 21914172;

    t143 = (((x573^x574)!=x575)!=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x578 = INT8_MIN;
	static int64_t x579 = INT64_MAX;
	uint32_t x580 = 66978200U;
	volatile int32_t t144 = -7;

    t144 = (((x577^x578)!=x579)!=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x581 = 99U;
	static uint64_t x582 = 119162256676614LLU;
	uint32_t x583 = 54U;
	static int64_t x584 = INT64_MIN;
	volatile int32_t t145 = 3741309;

    t145 = (((x581^x582)!=x583)!=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint8_t x586 = UINT8_MAX;
	int32_t x587 = INT32_MIN;
	static uint32_t x588 = UINT32_MAX;
	int32_t t146 = 221679;

    t146 = (((x585^x586)!=x587)!=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = -4;
	int16_t x590 = INT16_MIN;
	uint64_t x591 = UINT64_MAX;
	int8_t x592 = INT8_MIN;

    t147 = (((x589^x590)!=x591)!=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = -39566986242570LL;
	static volatile int32_t x594 = INT32_MIN;
	int64_t x596 = -351993LL;
	int32_t t148 = 393291607;

    t148 = (((x593^x594)!=x595)!=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int8_t x597 = -1;
	int16_t x598 = -1;
	uint32_t x599 = UINT32_MAX;
	int16_t x600 = -6;
	static int32_t t149 = 111567;

    t149 = (((x597^x598)!=x599)!=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x601 = INT16_MAX;
	int64_t x602 = -1LL;
	int16_t x603 = 288;
	int16_t x604 = INT16_MIN;
	int32_t t150 = -158;

    t150 = (((x601^x602)!=x603)!=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x605 = INT8_MIN;
	uint16_t x606 = 2U;
	volatile int64_t x607 = INT64_MIN;
	static int16_t x608 = INT16_MAX;
	int32_t t151 = -1;

    t151 = (((x605^x606)!=x607)!=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = INT8_MIN;
	int64_t x610 = INT64_MAX;
	int8_t x611 = INT8_MIN;
	uint16_t x612 = UINT16_MAX;
	volatile int32_t t152 = -57805;

    t152 = (((x609^x610)!=x611)!=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x613 = -1LL;
	int8_t x615 = INT8_MIN;
	int8_t x616 = INT8_MAX;
	static volatile int32_t t153 = 0;

    t153 = (((x613^x614)!=x615)!=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x617 = 1380808389U;
	int32_t x618 = INT32_MAX;
	int8_t x619 = 0;
	int32_t x620 = INT32_MIN;
	static volatile int32_t t154 = 10;

    t154 = (((x617^x618)!=x619)!=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x622 = 16565992U;
	uint32_t x623 = 151U;
	int64_t x624 = INT64_MIN;

    t155 = (((x621^x622)!=x623)!=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x625 = 12;
	int64_t x626 = INT64_MAX;
	static int8_t x627 = -8;
	int32_t t156 = 10584;

    t156 = (((x625^x626)!=x627)!=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x629 = 5U;
	uint32_t x630 = 32920U;
	uint32_t x631 = UINT32_MAX;
	uint16_t x632 = UINT16_MAX;
	int32_t t157 = 538120;

    t157 = (((x629^x630)!=x631)!=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x633 = 19U;
	int64_t x635 = INT64_MIN;
	int32_t t158 = 973291779;

    t158 = (((x633^x634)!=x635)!=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = INT16_MIN;
	uint64_t x639 = 2LLU;
	uint8_t x640 = 3U;
	int32_t t159 = 1593166;

    t159 = (((x637^x638)!=x639)!=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = -6;
	uint16_t x643 = 741U;
	uint32_t x644 = 0U;

    t160 = (((x641^x642)!=x643)!=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x645 = UINT32_MAX;
	volatile uint16_t x646 = 4027U;
	static int16_t x647 = INT16_MAX;
	int64_t x648 = -1LL;
	int32_t t161 = 9092662;

    t161 = (((x645^x646)!=x647)!=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x649 = UINT16_MAX;
	uint64_t x651 = 541835204853687LLU;
	int16_t x652 = 1;

    t162 = (((x649^x650)!=x651)!=x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = 5607273;
	int16_t x654 = INT16_MIN;
	int32_t x655 = INT32_MAX;
	int8_t x656 = 0;
	static volatile int32_t t163 = -1;

    t163 = (((x653^x654)!=x655)!=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = 124657676LL;
	int16_t x658 = 6;
	static int16_t x659 = INT16_MIN;
	volatile int64_t x660 = INT64_MAX;

    t164 = (((x657^x658)!=x659)!=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x663 = INT32_MIN;
	volatile int64_t x664 = INT64_MIN;
	int32_t t165 = -8;

    t165 = (((x661^x662)!=x663)!=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = -20091LL;
	uint64_t x667 = UINT64_MAX;
	int64_t x668 = INT64_MIN;
	static int32_t t166 = 1;

    t166 = (((x665^x666)!=x667)!=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x670 = -1LL;
	int64_t x671 = 2904924828939892LL;
	int32_t t167 = -626959796;

    t167 = (((x669^x670)!=x671)!=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x674 = INT64_MIN;
	static int64_t x675 = 60416322515530013LL;
	int8_t x676 = INT8_MIN;
	static int32_t t168 = -7;

    t168 = (((x673^x674)!=x675)!=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x677 = UINT64_MAX;
	int8_t x678 = -1;
	int64_t x680 = INT64_MIN;

    t169 = (((x677^x678)!=x679)!=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = INT16_MIN;
	int64_t x684 = INT64_MIN;
	int32_t t170 = -194503771;

    t170 = (((x681^x682)!=x683)!=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x685 = INT16_MAX;
	static int8_t x687 = -1;
	static uint32_t x688 = UINT32_MAX;
	volatile int32_t t171 = 671258;

    t171 = (((x685^x686)!=x687)!=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = INT32_MAX;
	static volatile int8_t x690 = -36;
	volatile uint8_t x691 = 6U;
	int32_t t172 = 0;

    t172 = (((x689^x690)!=x691)!=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x694 = -11712121LL;
	volatile uint16_t x695 = UINT16_MAX;
	volatile int16_t x696 = -4433;
	int32_t t173 = 1;

    t173 = (((x693^x694)!=x695)!=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x697 = 4854U;
	uint16_t x699 = 3224U;
	int32_t x700 = INT32_MIN;

    t174 = (((x697^x698)!=x699)!=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = 233;
	int32_t x702 = INT32_MAX;
	int8_t x703 = -43;
	volatile uint32_t x704 = UINT32_MAX;
	volatile int32_t t175 = -363634;

    t175 = (((x701^x702)!=x703)!=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x705 = 7484U;
	int32_t x707 = -1;
	uint32_t x708 = 634383U;
	volatile int32_t t176 = -584;

    t176 = (((x705^x706)!=x707)!=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x709 = INT32_MIN;
	int16_t x710 = 9168;
	uint16_t x711 = 1821U;
	static uint8_t x712 = 2U;
	volatile int32_t t177 = 25650;

    t177 = (((x709^x710)!=x711)!=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = 57;
	static int32_t x714 = INT32_MIN;
	int64_t x715 = INT64_MAX;
	volatile int32_t x716 = 114;
	volatile int32_t t178 = 30944;

    t178 = (((x713^x714)!=x715)!=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = INT16_MIN;
	int64_t x718 = -12935773866744072LL;
	int8_t x719 = INT8_MIN;
	volatile int32_t t179 = 181;

    t179 = (((x717^x718)!=x719)!=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x721 = UINT16_MAX;
	uint16_t x722 = UINT16_MAX;
	int64_t x723 = INT64_MIN;

    t180 = (((x721^x722)!=x723)!=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x725 = 0U;
	uint32_t x726 = 2962539U;
	volatile int32_t x727 = INT32_MIN;
	int64_t x728 = -1LL;
	int32_t t181 = -11;

    t181 = (((x725^x726)!=x727)!=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x730 = INT64_MAX;
	static uint8_t x731 = 127U;
	static int32_t x732 = 270680;
	static volatile int32_t t182 = -9045;

    t182 = (((x729^x730)!=x731)!=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = INT32_MIN;
	uint64_t x735 = UINT64_MAX;
	static int64_t x736 = 1109466353144583675LL;
	volatile int32_t t183 = 29;

    t183 = (((x733^x734)!=x735)!=x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int8_t x738 = INT8_MAX;
	uint64_t x740 = UINT64_MAX;
	int32_t t184 = -306918189;

    t184 = (((x737^x738)!=x739)!=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = INT64_MIN;
	int32_t x742 = INT32_MIN;
	uint16_t x743 = 1U;
	volatile int32_t t185 = -1;

    t185 = (((x741^x742)!=x743)!=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x745 = -1LL;
	int32_t x746 = INT32_MIN;
	static uint8_t x747 = UINT8_MAX;
	int32_t x748 = 1;
	static int32_t t186 = -1;

    t186 = (((x745^x746)!=x747)!=x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x749 = -5434006LL;
	int32_t x750 = INT32_MAX;
	static int32_t x751 = INT32_MAX;
	int8_t x752 = INT8_MIN;
	int32_t t187 = -75;

    t187 = (((x749^x750)!=x751)!=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = -101LL;
	uint16_t x755 = 103U;
	static uint32_t x756 = 1305422U;
	static volatile int32_t t188 = -3725;

    t188 = (((x753^x754)!=x755)!=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = INT16_MAX;
	volatile uint16_t x758 = 1U;
	int16_t x760 = -1;
	volatile int32_t t189 = -30;

    t189 = (((x757^x758)!=x759)!=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x761 = 15U;
	int16_t x762 = INT16_MIN;
	uint32_t x764 = UINT32_MAX;
	volatile int32_t t190 = 10577523;

    t190 = (((x761^x762)!=x763)!=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x765 = 83473U;
	int8_t x767 = 0;
	int32_t t191 = 58639798;

    t191 = (((x765^x766)!=x767)!=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x769 = INT8_MIN;
	uint32_t x770 = 256545U;
	uint16_t x771 = UINT16_MAX;
	volatile int64_t x772 = INT64_MIN;

    t192 = (((x769^x770)!=x771)!=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x774 = INT64_MIN;
	static int32_t x775 = -8;
	int64_t x776 = INT64_MAX;
	int32_t t193 = -1086789;

    t193 = (((x773^x774)!=x775)!=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint8_t x777 = 7U;
	int16_t x778 = -164;
	static int16_t x779 = INT16_MIN;
	int8_t x780 = 12;
	static volatile int32_t t194 = 704;

    t194 = (((x777^x778)!=x779)!=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint16_t x781 = 981U;
	static int16_t x783 = INT16_MIN;
	int8_t x784 = INT8_MAX;
	static volatile int32_t t195 = 1652;

    t195 = (((x781^x782)!=x783)!=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MAX;
	static volatile int8_t x786 = INT8_MAX;
	volatile int32_t x788 = INT32_MIN;
	volatile int32_t t196 = 149;

    t196 = (((x785^x786)!=x787)!=x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x789 = UINT8_MAX;
	static int64_t x791 = INT64_MIN;
	uint64_t x792 = UINT64_MAX;
	int32_t t197 = 26537407;

    t197 = (((x789^x790)!=x791)!=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x793 = -10742;
	static int32_t x794 = 17853106;
	uint64_t x795 = UINT64_MAX;
	int16_t x796 = INT16_MAX;
	int32_t t198 = 0;

    t198 = (((x793^x794)!=x795)!=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = 142266543151058LL;
	int32_t x798 = -1;
	volatile int32_t x799 = INT32_MIN;
	volatile int8_t x800 = 1;
	volatile int32_t t199 = -1017724;

    t199 = (((x797^x798)!=x799)!=x800);

    if (t199 != 0) { NG(); } else { ; }
	
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

