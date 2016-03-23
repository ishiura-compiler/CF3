
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

int32_t x1 = 36;
int32_t x4 = 3;
uint64_t x6 = 1214365LLU;
uint8_t x13 = 68U;
volatile int32_t t3 = 4575;
uint64_t t4 = 208427625LLU;
int32_t x22 = -1;
uint32_t x37 = 227909112U;
int32_t x38 = INT32_MIN;
int32_t t9 = 774266956;
uint8_t x46 = UINT8_MAX;
volatile int32_t t10 = 0;
uint8_t x50 = 30U;
volatile int8_t x54 = -1;
uint16_t x57 = 5202U;
static volatile int8_t x65 = INT8_MAX;
uint8_t x67 = UINT8_MAX;
uint32_t x71 = 3077967U;
volatile uint16_t x81 = UINT16_MAX;
uint32_t x85 = 46434060U;
uint32_t t20 = 276142U;
int16_t x89 = -1;
int8_t x94 = -10;
volatile int64_t x95 = -102141772852LL;
int32_t t22 = -10;
int16_t x99 = INT16_MAX;
uint16_t x100 = UINT16_MAX;
volatile int64_t t23 = 1692639900LL;
int8_t x102 = -1;
int64_t x106 = INT64_MAX;
static int8_t x112 = -1;
volatile uint64_t t30 = 42229457LLU;
static uint16_t x132 = 8032U;
volatile int16_t x134 = INT16_MIN;
int32_t x137 = -1;
int32_t t33 = -297647436;
int8_t x146 = -1;
int64_t x158 = 175742718959604LL;
int32_t t37 = -740499908;
int16_t x168 = INT16_MIN;
int32_t x173 = INT32_MIN;
volatile uint64_t t40 = 63035703571629LLU;
uint32_t x186 = UINT32_MAX;
int16_t x187 = INT16_MAX;
static int32_t x188 = -348;
static int32_t t43 = 6720;
uint32_t x205 = 27U;
volatile int64_t x211 = -1LL;
volatile uint32_t t45 = 35361528U;
uint16_t x213 = 8116U;
volatile int16_t x214 = -1;
static volatile uint16_t x217 = UINT16_MAX;
int64_t x220 = INT64_MIN;
volatile int32_t t47 = 1578;
int16_t x221 = 98;
int32_t x232 = -157958;
int32_t t51 = -61;
static volatile uint16_t x238 = UINT16_MAX;
uint32_t x240 = UINT32_MAX;
volatile uint32_t t52 = 914U;
volatile int32_t x246 = INT32_MAX;
int32_t x247 = -78;
int32_t x248 = -1864;
int16_t x252 = -1;
int8_t x253 = -51;
uint8_t x271 = UINT8_MAX;
static int8_t x281 = -1;
static uint64_t x301 = UINT64_MAX;
uint64_t t63 = 2232569151750104115LLU;
int32_t x308 = -1;
uint16_t x309 = 8U;
int32_t t65 = 20330;
int64_t t66 = 1943726817391880LL;
static uint16_t x320 = 3036U;
int32_t x332 = INT32_MIN;
volatile int64_t t71 = 67676389LL;
int16_t x353 = INT16_MAX;
volatile int32_t t75 = -205916813;
static int16_t x364 = INT16_MAX;
uint16_t x365 = 37U;
int32_t t78 = 1126;
volatile int64_t t79 = -810998806LL;
int32_t x385 = INT32_MIN;
static int32_t x387 = -15;
uint64_t t85 = 2384138878LLU;
volatile int16_t x398 = 1;
int16_t x416 = 0;
static volatile int32_t t90 = 857998548;
int8_t x424 = INT8_MAX;
int64_t x427 = INT64_MAX;
static volatile int8_t x431 = 0;
volatile int16_t x432 = INT16_MIN;
static volatile uint64_t x434 = 15309LLU;
uint32_t t95 = 6U;
static int32_t x449 = 327423819;
static uint32_t x452 = UINT32_MAX;
uint32_t x463 = 1244756U;
uint32_t x466 = 96U;
int64_t t101 = 1292929354273318726LL;
uint32_t x469 = 1755081U;
uint64_t x470 = 614716679790015448LLU;
uint64_t x472 = 190531590LLU;
uint32_t x476 = UINT32_MAX;
int8_t x480 = INT8_MIN;
static int32_t t104 = 14488309;
volatile int32_t x487 = 70;
volatile int64_t t106 = -356342936785LL;
int32_t x493 = -1;
volatile int8_t x494 = 0;
volatile int32_t t107 = -129274;
int64_t x497 = -2550107826786800LL;
static uint32_t x500 = 56268U;
volatile int64_t t108 = 7935940LL;
int16_t x502 = INT16_MAX;
uint16_t x508 = 223U;
volatile uint64_t t110 = 11LLU;
uint16_t x510 = 12U;
volatile uint8_t x511 = UINT8_MAX;
static int64_t x520 = -14998152428658567LL;
volatile int8_t x522 = INT8_MAX;
static volatile uint32_t t115 = 1044U;
static volatile int64_t x532 = -12687407080919816LL;
int16_t x533 = INT16_MIN;
volatile uint64_t x534 = 5646769980251468715LLU;
int8_t x539 = -1;
uint64_t x542 = 41183713605547LLU;
int8_t x552 = 21;
static volatile int16_t x553 = 3;
uint8_t x557 = 2U;
int64_t x558 = 864287676LL;
static int64_t x560 = INT64_MIN;
uint8_t x568 = 0U;
volatile uint32_t t124 = 36U;
static int64_t t125 = -16LL;
uint8_t x573 = 29U;
int32_t x595 = -55472660;
static int8_t x598 = INT8_MIN;
uint16_t x599 = 6632U;
int32_t x608 = INT32_MIN;
uint8_t x626 = 2U;
volatile uint8_t x631 = UINT8_MAX;
volatile uint64_t x637 = 4LLU;
volatile uint64_t t139 = 734506010265354LLU;
volatile int32_t t141 = 230;
static volatile int16_t x654 = INT16_MAX;
int32_t x655 = INT32_MIN;
static int8_t x657 = INT8_MIN;
int8_t x666 = -1;
uint16_t x667 = UINT16_MAX;
static uint32_t x670 = 98U;
int64_t x673 = INT64_MAX;
int8_t x676 = INT8_MIN;
volatile int32_t t149 = 3469;
int64_t x681 = -1LL;
uint64_t x683 = 326LLU;
int64_t t150 = -270282428LL;
volatile uint32_t x687 = 17631805U;
int64_t x697 = -1LL;
static uint32_t x699 = 500817U;
volatile int32_t t155 = 5713480;
int64_t x710 = -1LL;
static int64_t t156 = -1LL;
uint8_t x713 = 0U;
volatile uint16_t x716 = 191U;
volatile int16_t x723 = -1;
int16_t x731 = 116;
int8_t x734 = -1;
int8_t x738 = -3;
static int8_t x740 = INT8_MIN;
volatile int32_t t163 = 90;
int16_t x747 = -1;
volatile uint32_t t164 = 1U;
static int64_t x749 = 43821LL;
static int16_t x752 = INT16_MIN;
int64_t t166 = -24570LL;
int32_t x758 = 858342;
static uint16_t x763 = 3U;
volatile uint64_t t168 = 62036LLU;
uint8_t x772 = 14U;
static volatile int32_t x776 = 64241;
uint32_t x779 = 63393820U;
int8_t x784 = -1;
uint64_t x786 = UINT64_MAX;
static uint16_t x788 = 3481U;
volatile uint16_t x793 = UINT16_MAX;
int64_t x795 = 178559643LL;
static uint32_t x802 = 406U;
int64_t x803 = 516032LL;
uint16_t x804 = 15U;
int16_t x805 = INT16_MAX;
static int64_t x807 = -1LL;
static volatile int16_t x809 = INT16_MIN;
int64_t x812 = -1LL;
volatile uint64_t t179 = 52126LLU;
static uint32_t t180 = 1980215687U;
volatile uint32_t x824 = UINT32_MAX;
int8_t x826 = INT8_MIN;
uint16_t x827 = 12U;
uint64_t x830 = UINT64_MAX;
uint8_t x831 = 0U;
static uint64_t x837 = UINT64_MAX;
static uint64_t t184 = 2391362903050528LLU;
volatile uint64_t t186 = 697935LLU;
uint8_t x852 = 102U;
int8_t x860 = -1;
volatile int16_t x864 = -21;
uint16_t x865 = UINT16_MAX;
static uint32_t x872 = 1500U;
volatile int64_t x874 = INT64_MIN;
static volatile int64_t t193 = 29298925807920LL;
int8_t x877 = INT8_MIN;
int8_t x879 = INT8_MIN;
int64_t x880 = INT64_MIN;
int32_t t194 = 7;
volatile int16_t x881 = INT16_MIN;
int8_t x884 = INT8_MIN;
int32_t t195 = -2392;
int16_t x889 = -1;
volatile int16_t x892 = INT16_MAX;
uint64_t x902 = 45932707011404569LLU;
uint32_t x903 = UINT32_MAX;
uint8_t x904 = 99U;


void f0(void) {
    	int32_t x2 = -16;
	volatile uint32_t x3 = UINT32_MAX;
	int32_t t0 = 3;

    t0 = ((x1-x2)&(x3>x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 19U;
	int16_t x7 = 1;
	int8_t x8 = -1;
	static uint64_t t1 = 246LLU;

    t1 = ((x5-x6)&(x7>x8));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MAX;
	static int32_t x10 = INT32_MAX;
	int32_t x11 = -3824597;
	static int32_t x12 = INT32_MIN;
	int64_t t2 = -59997243LL;

    t2 = ((x9-x10)&(x11>x12));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x14 = -1292;
	int32_t x15 = INT32_MIN;
	static int16_t x16 = INT16_MAX;

    t3 = ((x13-x14)&(x15>x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x17 = 0LLU;
	int32_t x18 = INT32_MAX;
	static int64_t x19 = 1187857936831204LL;
	uint16_t x20 = UINT16_MAX;

    t4 = ((x17-x18)&(x19>x20));

    if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x21 = INT16_MAX;
	volatile int8_t x23 = INT8_MIN;
	static volatile int32_t x24 = -1;
	int32_t t5 = -101278;

    t5 = ((x21-x22)&(x23>x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x29 = 248148868743LLU;
	uint16_t x30 = 0U;
	int32_t x31 = INT32_MIN;
	int64_t x32 = INT64_MIN;
	uint64_t t6 = 13LLU;

    t6 = ((x29-x30)&(x31>x32));

    if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x33 = UINT64_MAX;
	int16_t x34 = INT16_MIN;
	int32_t x35 = -1;
	volatile uint16_t x36 = UINT16_MAX;
	volatile uint64_t t7 = 13LLU;

    t7 = ((x33-x34)&(x35>x36));

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x39 = -1;
	int64_t x40 = INT64_MIN;
	volatile uint32_t t8 = 12794U;

    t8 = ((x37-x38)&(x39>x40));

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x41 = 178;
	uint8_t x42 = 1U;
	int32_t x43 = INT32_MAX;
	int32_t x44 = INT32_MAX;

    t9 = ((x41-x42)&(x43>x44));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x45 = UINT8_MAX;
	uint64_t x47 = 464LLU;
	int32_t x48 = INT32_MIN;

    t10 = ((x45-x46)&(x47>x48));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x49 = 0;
	int16_t x51 = INT16_MIN;
	int64_t x52 = -1LL;
	volatile int32_t t11 = 6956995;

    t11 = ((x49-x50)&(x51>x52));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x53 = 4495;
	int16_t x55 = -1;
	volatile uint16_t x56 = UINT16_MAX;
	static int32_t t12 = 28;

    t12 = ((x53-x54)&(x55>x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x58 = 7U;
	int8_t x59 = INT8_MIN;
	static int8_t x60 = INT8_MIN;
	volatile int32_t t13 = 852;

    t13 = ((x57-x58)&(x59>x60));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = -1LL;
	volatile uint32_t x62 = 270536454U;
	static int64_t x63 = -1LL;
	int32_t x64 = INT32_MIN;
	static volatile int64_t t14 = -108023484499244042LL;

    t14 = ((x61-x62)&(x63>x64));

    if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x66 = 60489U;
	uint8_t x68 = 1U;
	volatile uint32_t t15 = 347845U;

    t15 = ((x65-x66)&(x67>x68));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x69 = UINT32_MAX;
	uint64_t x70 = 32549789846233850LLU;
	static uint8_t x72 = 41U;
	uint64_t t16 = 101379289024465834LLU;

    t16 = ((x69-x70)&(x71>x72));

    if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x73 = 112U;
	int16_t x74 = INT16_MAX;
	static int64_t x75 = INT64_MIN;
	volatile int16_t x76 = INT16_MIN;
	volatile int32_t t17 = -15777;

    t17 = ((x73-x74)&(x75>x76));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x77 = UINT8_MAX;
	int64_t x78 = 580279677607058LL;
	uint16_t x79 = 9681U;
	int32_t x80 = -1;
	int64_t t18 = 5330255700103146LL;

    t18 = ((x77-x78)&(x79>x80));

    if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x82 = INT16_MAX;
	int32_t x83 = -1;
	uint32_t x84 = 372952562U;
	volatile int32_t t19 = -12225564;

    t19 = ((x81-x82)&(x83>x84));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x86 = UINT8_MAX;
	int64_t x87 = INT64_MAX;
	int8_t x88 = -1;

    t20 = ((x85-x86)&(x87>x88));

    if (t20 != 1U) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint8_t x90 = UINT8_MAX;
	int16_t x91 = -1;
	static volatile int64_t x92 = 188223LL;
	static int32_t t21 = -120801;

    t21 = ((x89-x90)&(x91>x92));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint16_t x93 = 13U;
	static volatile uint16_t x96 = 10U;

    t22 = ((x93-x94)&(x95>x96));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x97 = -1LL;
	int64_t x98 = INT64_MAX;

    t23 = ((x97-x98)&(x99>x100));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x101 = 0U;
	int64_t x103 = INT64_MAX;
	uint16_t x104 = 1U;
	volatile int32_t t24 = 71694;

    t24 = ((x101-x102)&(x103>x104));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x105 = -1;
	volatile int8_t x107 = INT8_MIN;
	uint8_t x108 = 0U;
	volatile int64_t t25 = 664220094LL;

    t25 = ((x105-x106)&(x107>x108));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x109 = -8;
	int16_t x110 = -149;
	uint64_t x111 = UINT64_MAX;
	volatile int32_t t26 = 29075;

    t26 = ((x109-x110)&(x111>x112));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int16_t x113 = -4;
	int8_t x114 = INT8_MAX;
	int16_t x115 = -234;
	int8_t x116 = -6;
	volatile int32_t t27 = -1;

    t27 = ((x113-x114)&(x115>x116));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x117 = -1;
	int64_t x118 = INT64_MIN;
	int64_t x119 = -6631524LL;
	uint64_t x120 = 899559565LLU;
	volatile int64_t t28 = 0LL;

    t28 = ((x117-x118)&(x119>x120));

    if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x121 = 12850;
	int32_t x122 = -163969;
	static volatile uint32_t x123 = UINT32_MAX;
	uint64_t x124 = UINT64_MAX;
	int32_t t29 = 107;

    t29 = ((x121-x122)&(x123>x124));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x125 = UINT64_MAX;
	int32_t x126 = 674789;
	uint64_t x127 = UINT64_MAX;
	int32_t x128 = INT32_MAX;

    t30 = ((x125-x126)&(x127>x128));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x129 = -1;
	int32_t x130 = INT32_MAX;
	int16_t x131 = INT16_MAX;
	static volatile int32_t t31 = -122970;

    t31 = ((x129-x130)&(x131>x132));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x133 = INT32_MIN;
	static uint16_t x135 = 5880U;
	static volatile uint32_t x136 = 22415U;
	volatile int32_t t32 = 3041;

    t32 = ((x133-x134)&(x135>x136));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x138 = -5;
	volatile uint64_t x139 = 1913409764091740103LLU;
	int8_t x140 = INT8_MIN;

    t33 = ((x137-x138)&(x139>x140));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x141 = 566U;
	volatile uint32_t x142 = UINT32_MAX;
	uint8_t x143 = 37U;
	int16_t x144 = INT16_MAX;
	static volatile uint32_t t34 = 92U;

    t34 = ((x141-x142)&(x143>x144));

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x145 = INT32_MIN;
	int16_t x147 = -1;
	int16_t x148 = INT16_MIN;
	volatile int32_t t35 = -231244;

    t35 = ((x145-x146)&(x147>x148));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x157 = INT8_MIN;
	int64_t x159 = INT64_MIN;
	int8_t x160 = -13;
	static int64_t t36 = -205565203061414632LL;

    t36 = ((x157-x158)&(x159>x160));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x161 = -1;
	static uint8_t x162 = 10U;
	int64_t x163 = 14438364514390377LL;
	int16_t x164 = INT16_MIN;

    t37 = ((x161-x162)&(x163>x164));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x165 = 15275280U;
	uint64_t x166 = 1294500696309485920LLU;
	static int64_t x167 = -256504LL;
	volatile uint64_t t38 = 11107204234LLU;

    t38 = ((x165-x166)&(x167>x168));

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x169 = INT64_MIN;
	static int64_t x170 = -1LL;
	uint64_t x171 = 97386LLU;
	int64_t x172 = INT64_MAX;
	volatile int64_t t39 = 112642675834LL;

    t39 = ((x169-x170)&(x171>x172));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x174 = UINT64_MAX;
	static uint32_t x175 = 235509143U;
	int8_t x176 = INT8_MIN;

    t40 = ((x173-x174)&(x175>x176));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x177 = 465U;
	int8_t x178 = 30;
	int8_t x179 = INT8_MIN;
	static volatile int16_t x180 = -4685;
	volatile int32_t t41 = 839936973;

    t41 = ((x177-x178)&(x179>x180));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x185 = -56790532210900366LL;
	int64_t t42 = -303203267LL;

    t42 = ((x185-x186)&(x187>x188));

    if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x201 = INT32_MIN;
	int8_t x202 = INT8_MIN;
	uint32_t x203 = 1U;
	uint16_t x204 = 3U;

    t43 = ((x201-x202)&(x203>x204));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x206 = -1;
	int32_t x207 = -1;
	int32_t x208 = 3;
	volatile uint32_t t44 = 81967U;

    t44 = ((x205-x206)&(x207>x208));

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x209 = UINT32_MAX;
	int8_t x210 = INT8_MIN;
	volatile int32_t x212 = INT32_MAX;

    t45 = ((x209-x210)&(x211>x212));

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x215 = 38U;
	int32_t x216 = -1;
	static int32_t t46 = -3106393;

    t46 = ((x213-x214)&(x215>x216));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x218 = -1;
	int32_t x219 = INT32_MIN;

    t47 = ((x217-x218)&(x219>x220));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x222 = 271013946608LL;
	uint8_t x223 = UINT8_MAX;
	static volatile int32_t x224 = INT32_MIN;
	int64_t t48 = -1LL;

    t48 = ((x221-x222)&(x223>x224));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x225 = INT8_MIN;
	static uint64_t x226 = 25913LLU;
	int8_t x227 = 1;
	volatile int16_t x228 = 215;
	uint64_t t49 = 152350541778LLU;

    t49 = ((x225-x226)&(x227>x228));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x229 = UINT64_MAX;
	int8_t x230 = -1;
	int32_t x231 = -196;
	static uint64_t t50 = 1856937389LLU;

    t50 = ((x229-x230)&(x231>x232));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x233 = -1;
	int8_t x234 = INT8_MAX;
	int8_t x235 = -1;
	int16_t x236 = INT16_MIN;

    t51 = ((x233-x234)&(x235>x236));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x237 = UINT32_MAX;
	int16_t x239 = 306;

    t52 = ((x237-x238)&(x239>x240));

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x245 = -1;
	volatile int32_t t53 = -20206;

    t53 = ((x245-x246)&(x247>x248));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x249 = -1;
	int16_t x250 = INT16_MIN;
	int64_t x251 = -25317LL;
	volatile int32_t t54 = -8323;

    t54 = ((x249-x250)&(x251>x252));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x254 = 16232863LLU;
	uint16_t x255 = 12563U;
	volatile int32_t x256 = INT32_MIN;
	uint64_t t55 = 2LLU;

    t55 = ((x253-x254)&(x255>x256));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x257 = INT32_MIN;
	int8_t x258 = INT8_MIN;
	uint64_t x259 = 159189226142959LLU;
	uint64_t x260 = 4LLU;
	static volatile int32_t t56 = -41747;

    t56 = ((x257-x258)&(x259>x260));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x265 = -1LL;
	volatile int16_t x266 = INT16_MIN;
	uint16_t x267 = UINT16_MAX;
	int64_t x268 = INT64_MAX;
	static volatile int64_t t57 = -164125LL;

    t57 = ((x265-x266)&(x267>x268));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x269 = INT64_MIN;
	int32_t x270 = -5;
	int8_t x272 = INT8_MIN;
	volatile int64_t t58 = 43146954878063LL;

    t58 = ((x269-x270)&(x271>x272));

    if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x282 = UINT8_MAX;
	volatile uint8_t x283 = UINT8_MAX;
	volatile uint32_t x284 = UINT32_MAX;
	volatile int32_t t59 = -23;

    t59 = ((x281-x282)&(x283>x284));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int8_t x285 = -1;
	int8_t x286 = -1;
	volatile uint32_t x287 = UINT32_MAX;
	int32_t x288 = INT32_MAX;
	int32_t t60 = 483;

    t60 = ((x285-x286)&(x287>x288));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x289 = -63;
	uint8_t x290 = 0U;
	int32_t x291 = 55075;
	uint8_t x292 = 72U;
	int32_t t61 = 221;

    t61 = ((x289-x290)&(x291>x292));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x293 = UINT32_MAX;
	int8_t x294 = INT8_MAX;
	int32_t x295 = INT32_MIN;
	int32_t x296 = INT32_MIN;
	uint32_t t62 = 401822U;

    t62 = ((x293-x294)&(x295>x296));

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x302 = 0;
	uint32_t x303 = 2057U;
	static int8_t x304 = INT8_MIN;

    t63 = ((x301-x302)&(x303>x304));

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x305 = -3;
	volatile uint8_t x306 = UINT8_MAX;
	int32_t x307 = INT32_MAX;
	volatile int32_t t64 = 95871275;

    t64 = ((x305-x306)&(x307>x308));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x310 = INT8_MIN;
	static uint8_t x311 = 2U;
	static int16_t x312 = -3;

    t65 = ((x309-x310)&(x311>x312));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x313 = -3084LL;
	int16_t x314 = -1;
	int64_t x315 = -1004LL;
	uint16_t x316 = UINT16_MAX;

    t66 = ((x313-x314)&(x315>x316));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x317 = INT8_MAX;
	volatile int64_t x318 = 1823404LL;
	uint64_t x319 = 25645339111LLU;
	int64_t t67 = -15255LL;

    t67 = ((x317-x318)&(x319>x320));

    if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x321 = -1LL;
	static uint64_t x322 = 0LLU;
	int32_t x323 = -1;
	int16_t x324 = INT16_MIN;
	volatile uint64_t t68 = 3787LLU;

    t68 = ((x321-x322)&(x323>x324));

    if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x325 = -1169;
	int16_t x326 = -179;
	static uint32_t x327 = 570U;
	volatile int64_t x328 = INT64_MAX;
	volatile int32_t t69 = -5327770;

    t69 = ((x325-x326)&(x327>x328));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x329 = 894619LLU;
	int16_t x330 = -40;
	uint16_t x331 = 0U;
	uint64_t t70 = 1309591844050974142LLU;

    t70 = ((x329-x330)&(x331>x332));

    if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x333 = 28448497U;
	int64_t x334 = -1LL;
	volatile uint16_t x335 = UINT16_MAX;
	uint16_t x336 = UINT16_MAX;

    t71 = ((x333-x334)&(x335>x336));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x337 = INT8_MIN;
	static uint32_t x338 = UINT32_MAX;
	int32_t x339 = -1;
	int32_t x340 = 2032;
	uint32_t t72 = 346170U;

    t72 = ((x337-x338)&(x339>x340));

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint16_t x345 = 240U;
	int8_t x346 = INT8_MIN;
	static int8_t x347 = -1;
	uint8_t x348 = 1U;
	volatile int32_t t73 = -37;

    t73 = ((x345-x346)&(x347>x348));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile uint32_t x349 = UINT32_MAX;
	volatile int32_t x350 = -1907222;
	uint16_t x351 = 0U;
	static uint64_t x352 = UINT64_MAX;
	uint32_t t74 = 43343906U;

    t74 = ((x349-x350)&(x351>x352));

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x354 = INT16_MIN;
	int16_t x355 = INT16_MIN;
	volatile uint16_t x356 = 25U;

    t75 = ((x353-x354)&(x355>x356));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int8_t x357 = -1;
	int64_t x358 = INT64_MIN;
	uint16_t x359 = 31U;
	int32_t x360 = -1;
	volatile int64_t t76 = 2LL;

    t76 = ((x357-x358)&(x359>x360));

    if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x361 = INT16_MIN;
	volatile int16_t x362 = -1;
	int64_t x363 = INT64_MAX;
	int32_t t77 = -581715;

    t77 = ((x361-x362)&(x363>x364));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x366 = 1U;
	static int32_t x367 = INT32_MIN;
	int16_t x368 = 1;

    t78 = ((x365-x366)&(x367>x368));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x369 = 3446157378541LL;
	static uint16_t x370 = 222U;
	volatile int32_t x371 = INT32_MAX;
	static int64_t x372 = INT64_MAX;

    t79 = ((x369-x370)&(x371>x372));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint64_t x373 = 1114851716113LLU;
	volatile int64_t x374 = INT64_MIN;
	uint32_t x375 = 4U;
	static uint8_t x376 = 102U;
	uint64_t t80 = 4604235257404845578LLU;

    t80 = ((x373-x374)&(x375>x376));

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x377 = -3;
	int32_t x378 = INT32_MIN;
	int32_t x379 = INT32_MIN;
	int16_t x380 = -1;
	static volatile int32_t t81 = -162958512;

    t81 = ((x377-x378)&(x379>x380));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x381 = -1;
	int32_t x382 = -1;
	static int32_t x383 = INT32_MIN;
	int8_t x384 = 41;
	int32_t t82 = 2;

    t82 = ((x381-x382)&(x383>x384));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x386 = INT16_MIN;
	int32_t x388 = INT32_MIN;
	int32_t t83 = -333314;

    t83 = ((x385-x386)&(x387>x388));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x389 = UINT16_MAX;
	volatile uint32_t x390 = 31357875U;
	static volatile int16_t x391 = INT16_MIN;
	int64_t x392 = INT64_MIN;
	uint32_t t84 = 23707U;

    t84 = ((x389-x390)&(x391>x392));

    if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x393 = UINT64_MAX;
	uint16_t x394 = 3623U;
	int32_t x395 = INT32_MIN;
	static int16_t x396 = 0;

    t85 = ((x393-x394)&(x395>x396));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x397 = UINT32_MAX;
	volatile uint32_t x399 = 30U;
	int64_t x400 = -1LL;
	volatile uint32_t t86 = 8910212U;

    t86 = ((x397-x398)&(x399>x400));

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x401 = 2;
	static uint64_t x402 = 531779088568091LLU;
	int8_t x403 = INT8_MAX;
	int16_t x404 = INT16_MAX;
	volatile uint64_t t87 = 242669453270240567LLU;

    t87 = ((x401-x402)&(x403>x404));

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x405 = 19;
	volatile int8_t x406 = -1;
	uint64_t x407 = 21538515832088LLU;
	static int64_t x408 = -1LL;
	volatile int32_t t88 = 223833;

    t88 = ((x405-x406)&(x407>x408));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x413 = INT32_MAX;
	uint64_t x414 = 8944130403LLU;
	int8_t x415 = 0;
	uint64_t t89 = 272615LLU;

    t89 = ((x413-x414)&(x415>x416));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x417 = INT8_MIN;
	int8_t x418 = -9;
	volatile int64_t x419 = INT64_MIN;
	uint64_t x420 = UINT64_MAX;

    t90 = ((x417-x418)&(x419>x420));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x421 = INT8_MAX;
	uint64_t x422 = 300024532735193LLU;
	int32_t x423 = -668893;
	uint64_t t91 = 1255777294923882LLU;

    t91 = ((x421-x422)&(x423>x424));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x425 = -302360571;
	int8_t x426 = INT8_MAX;
	uint16_t x428 = 810U;
	static volatile int32_t t92 = -1;

    t92 = ((x425-x426)&(x427>x428));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x429 = -4462637245241LL;
	int16_t x430 = 5202;
	int64_t t93 = -46362535042999LL;

    t93 = ((x429-x430)&(x431>x432));

    if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x433 = UINT32_MAX;
	uint32_t x435 = 88U;
	volatile int32_t x436 = INT32_MIN;
	uint64_t t94 = 3348328653697984145LLU;

    t94 = ((x433-x434)&(x435>x436));

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint32_t x441 = 11U;
	static uint8_t x442 = 99U;
	int8_t x443 = -1;
	static int8_t x444 = -1;

    t95 = ((x441-x442)&(x443>x444));

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x445 = -1;
	static int32_t x446 = INT32_MIN;
	int16_t x447 = -16166;
	volatile int16_t x448 = -1;
	static int32_t t96 = -10;

    t96 = ((x445-x446)&(x447>x448));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x450 = -1;
	int32_t x451 = -1;
	int32_t t97 = 886656;

    t97 = ((x449-x450)&(x451>x452));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x453 = INT16_MAX;
	int8_t x454 = INT8_MIN;
	static volatile int32_t x455 = 454884836;
	int16_t x456 = INT16_MIN;
	volatile int32_t t98 = -13;

    t98 = ((x453-x454)&(x455>x456));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x457 = -838181451513LL;
	int32_t x458 = -1;
	static int16_t x459 = INT16_MIN;
	int8_t x460 = -1;
	volatile int64_t t99 = -59519772023LL;

    t99 = ((x457-x458)&(x459>x460));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x461 = INT16_MIN;
	static int16_t x462 = 2;
	int64_t x464 = INT64_MIN;
	static int32_t t100 = 1;

    t100 = ((x461-x462)&(x463>x464));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x465 = 287LL;
	uint16_t x467 = 10U;
	static uint8_t x468 = UINT8_MAX;

    t101 = ((x465-x466)&(x467>x468));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x471 = -1402;
	volatile uint64_t t102 = 50544039273823LLU;

    t102 = ((x469-x470)&(x471>x472));

    if (t102 != 1LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x473 = 1;
	int32_t x474 = INT32_MAX;
	int8_t x475 = -1;
	int32_t t103 = 532579492;

    t103 = ((x473-x474)&(x475>x476));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x477 = -3;
	uint8_t x478 = 105U;
	uint32_t x479 = 7376875U;

    t104 = ((x477-x478)&(x479>x480));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x481 = -1;
	int32_t x482 = INT32_MIN;
	volatile int64_t x483 = INT64_MIN;
	uint64_t x484 = 120822533LLU;
	volatile int32_t t105 = -63761;

    t105 = ((x481-x482)&(x483>x484));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x485 = -233;
	static int64_t x486 = -1LL;
	int64_t x488 = -1LL;

    t106 = ((x485-x486)&(x487>x488));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x495 = INT32_MIN;
	int8_t x496 = -1;

    t107 = ((x493-x494)&(x495>x496));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x498 = INT32_MIN;
	volatile int64_t x499 = -15602944LL;

    t108 = ((x497-x498)&(x499>x500));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x501 = INT8_MIN;
	static uint16_t x503 = 7U;
	static int8_t x504 = -1;
	static int32_t t109 = -473708651;

    t109 = ((x501-x502)&(x503>x504));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x505 = 15U;
	uint64_t x506 = 2624833995LLU;
	int64_t x507 = INT64_MIN;

    t110 = ((x505-x506)&(x507>x508));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint8_t x509 = 52U;
	int32_t x512 = -1;
	int32_t t111 = -23105311;

    t111 = ((x509-x510)&(x511>x512));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x513 = 476850816916LLU;
	int32_t x514 = INT32_MIN;
	int64_t x515 = INT64_MAX;
	static int16_t x516 = INT16_MIN;
	volatile uint64_t t112 = 443133602948LLU;

    t112 = ((x513-x514)&(x515>x516));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x517 = 437;
	static uint16_t x518 = 2381U;
	uint8_t x519 = UINT8_MAX;
	int32_t t113 = 11736;

    t113 = ((x517-x518)&(x519>x520));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x521 = 1;
	int32_t x523 = INT32_MIN;
	uint8_t x524 = UINT8_MAX;
	volatile int32_t t114 = 23;

    t114 = ((x521-x522)&(x523>x524));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x525 = INT32_MIN;
	volatile uint32_t x526 = UINT32_MAX;
	uint32_t x527 = 5267558U;
	static volatile int16_t x528 = -1;

    t115 = ((x525-x526)&(x527>x528));

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint32_t x529 = UINT32_MAX;
	uint8_t x530 = 6U;
	int64_t x531 = INT64_MIN;
	volatile uint32_t t116 = 77797934U;

    t116 = ((x529-x530)&(x531>x532));

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x535 = -1LL;
	int32_t x536 = 1;
	volatile uint64_t t117 = 1070197153422356260LLU;

    t117 = ((x533-x534)&(x535>x536));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint32_t x537 = UINT32_MAX;
	uint64_t x538 = UINT64_MAX;
	int64_t x540 = 455166186301999071LL;
	volatile uint64_t t118 = 1973129441025962LLU;

    t118 = ((x537-x538)&(x539>x540));

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint32_t x541 = UINT32_MAX;
	uint16_t x543 = 5U;
	static int32_t x544 = -1453;
	uint64_t t119 = 42637616629LLU;

    t119 = ((x541-x542)&(x543>x544));

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x549 = UINT64_MAX;
	uint16_t x550 = 874U;
	static uint16_t x551 = 3155U;
	static volatile uint64_t t120 = 23995101216847LLU;

    t120 = ((x549-x550)&(x551>x552));

    if (t120 != 1LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x554 = 365015156676118352LLU;
	int64_t x555 = 1LL;
	volatile int16_t x556 = INT16_MIN;
	volatile uint64_t t121 = 11077077256627LLU;

    t121 = ((x553-x554)&(x555>x556));

    if (t121 != 1LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x559 = -5LL;
	static volatile int64_t t122 = -3099893LL;

    t122 = ((x557-x558)&(x559>x560));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x561 = INT16_MIN;
	int16_t x562 = 13;
	static uint16_t x563 = UINT16_MAX;
	int64_t x564 = INT64_MIN;
	static volatile int32_t t123 = 20678;

    t123 = ((x561-x562)&(x563>x564));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x565 = -1;
	uint32_t x566 = 1867271907U;
	uint32_t x567 = 557U;

    t124 = ((x565-x566)&(x567>x568));

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x569 = 2;
	volatile int64_t x570 = -27485880104LL;
	uint32_t x571 = 126U;
	uint64_t x572 = UINT64_MAX;

    t125 = ((x569-x570)&(x571>x572));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x574 = -47439;
	volatile uint16_t x575 = UINT16_MAX;
	int32_t x576 = 3;
	int32_t t126 = -3441315;

    t126 = ((x573-x574)&(x575>x576));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x577 = INT16_MAX;
	uint32_t x578 = 557U;
	uint16_t x579 = 379U;
	static int8_t x580 = -1;
	volatile uint32_t t127 = 9U;

    t127 = ((x577-x578)&(x579>x580));

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x581 = INT16_MIN;
	int32_t x582 = 3;
	int8_t x583 = INT8_MIN;
	static int32_t x584 = INT32_MIN;
	int32_t t128 = -1;

    t128 = ((x581-x582)&(x583>x584));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x585 = -1;
	static uint64_t x586 = 2878113131108931820LLU;
	uint8_t x587 = UINT8_MAX;
	int32_t x588 = 25;
	uint64_t t129 = 1612330LLU;

    t129 = ((x585-x586)&(x587>x588));

    if (t129 != 1LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x593 = -3800860644LL;
	volatile int16_t x594 = INT16_MIN;
	uint32_t x596 = UINT32_MAX;
	volatile int64_t t130 = 122LL;

    t130 = ((x593-x594)&(x595>x596));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x597 = INT32_MIN;
	int16_t x600 = -7;
	int32_t t131 = -310;

    t131 = ((x597-x598)&(x599>x600));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x601 = INT8_MIN;
	uint64_t x602 = 186LLU;
	static int64_t x603 = INT64_MAX;
	volatile int8_t x604 = 3;
	volatile uint64_t t132 = 159602416086355588LLU;

    t132 = ((x601-x602)&(x603>x604));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x605 = -25332;
	static int64_t x606 = INT64_MIN;
	static int32_t x607 = INT32_MAX;
	volatile int64_t t133 = -48LL;

    t133 = ((x605-x606)&(x607>x608));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x609 = 740U;
	static int16_t x610 = INT16_MIN;
	int16_t x611 = -253;
	uint8_t x612 = UINT8_MAX;
	volatile int32_t t134 = 235552;

    t134 = ((x609-x610)&(x611>x612));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x621 = -3;
	volatile int64_t x622 = 1020719139306827LL;
	uint16_t x623 = 69U;
	int8_t x624 = INT8_MIN;
	volatile int64_t t135 = -4298939100844640178LL;

    t135 = ((x621-x622)&(x623>x624));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint16_t x625 = 1171U;
	uint8_t x627 = 1U;
	volatile int16_t x628 = INT16_MAX;
	volatile int32_t t136 = 720;

    t136 = ((x625-x626)&(x627>x628));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x629 = INT16_MIN;
	uint64_t x630 = 3348488027LLU;
	int8_t x632 = INT8_MIN;
	volatile uint64_t t137 = 2182LLU;

    t137 = ((x629-x630)&(x631>x632));

    if (t137 != 1LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x633 = 196243U;
	uint32_t x634 = UINT32_MAX;
	int32_t x635 = INT32_MAX;
	uint16_t x636 = UINT16_MAX;
	volatile uint32_t t138 = 357U;

    t138 = ((x633-x634)&(x635>x636));

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x638 = 0;
	int8_t x639 = INT8_MAX;
	int32_t x640 = INT32_MIN;

    t139 = ((x637-x638)&(x639>x640));

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x641 = INT8_MAX;
	volatile int32_t x642 = -1;
	static int64_t x643 = 1LL;
	int64_t x644 = INT64_MIN;
	volatile int32_t t140 = -205;

    t140 = ((x641-x642)&(x643>x644));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x645 = -1;
	volatile uint16_t x646 = 14U;
	uint8_t x647 = UINT8_MAX;
	int16_t x648 = INT16_MIN;

    t141 = ((x645-x646)&(x647>x648));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x649 = INT32_MAX;
	uint32_t x650 = UINT32_MAX;
	volatile int64_t x651 = -121484700389LL;
	int64_t x652 = INT64_MIN;
	volatile uint32_t t142 = 4U;

    t142 = ((x649-x650)&(x651>x652));

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x653 = INT64_MAX;
	volatile uint32_t x656 = UINT32_MAX;
	volatile int64_t t143 = 15513283LL;

    t143 = ((x653-x654)&(x655>x656));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x658 = 2;
	uint16_t x659 = 409U;
	int64_t x660 = INT64_MIN;
	int32_t t144 = 6704;

    t144 = ((x657-x658)&(x659>x660));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x661 = UINT32_MAX;
	volatile int32_t x662 = INT32_MAX;
	int16_t x663 = -1;
	volatile int64_t x664 = INT64_MIN;
	uint32_t t145 = 819U;

    t145 = ((x661-x662)&(x663>x664));

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x665 = INT16_MIN;
	static int16_t x668 = INT16_MIN;
	volatile int32_t t146 = -213;

    t146 = ((x665-x666)&(x667>x668));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x669 = INT64_MAX;
	volatile int8_t x671 = 11;
	int32_t x672 = 1;
	volatile int64_t t147 = -401466LL;

    t147 = ((x669-x670)&(x671>x672));

    if (t147 != 1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x674 = INT32_MAX;
	int16_t x675 = INT16_MIN;
	volatile int64_t t148 = -3736352540LL;

    t148 = ((x673-x674)&(x675>x676));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x677 = 965U;
	static int16_t x678 = 1740;
	int64_t x679 = 12384093LL;
	int64_t x680 = -7700872416LL;

    t149 = ((x677-x678)&(x679>x680));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x682 = INT64_MIN;
	uint16_t x684 = UINT16_MAX;

    t150 = ((x681-x682)&(x683>x684));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint8_t x685 = 4U;
	int32_t x686 = INT32_MAX;
	uint32_t x688 = 8140350U;
	int32_t t151 = -5414;

    t151 = ((x685-x686)&(x687>x688));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x693 = 183718LLU;
	uint64_t x694 = UINT64_MAX;
	int64_t x695 = INT64_MIN;
	volatile uint16_t x696 = 105U;
	volatile uint64_t t152 = 587614039349923LLU;

    t152 = ((x693-x694)&(x695>x696));

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x698 = UINT64_MAX;
	static int8_t x700 = -1;
	volatile uint64_t t153 = 5327589564229629518LLU;

    t153 = ((x697-x698)&(x699>x700));

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x701 = INT32_MAX;
	uint64_t x702 = 70524276LLU;
	int64_t x703 = -1LL;
	int64_t x704 = INT64_MAX;
	volatile uint64_t t154 = 0LLU;

    t154 = ((x701-x702)&(x703>x704));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x705 = -61542;
	int16_t x706 = INT16_MIN;
	uint32_t x707 = 2018U;
	int64_t x708 = 7884810374576LL;

    t155 = ((x705-x706)&(x707>x708));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x709 = INT32_MIN;
	static int8_t x711 = -1;
	uint16_t x712 = UINT16_MAX;

    t156 = ((x709-x710)&(x711>x712));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x714 = INT16_MAX;
	volatile uint32_t x715 = UINT32_MAX;
	static volatile int32_t t157 = -12454;

    t157 = ((x713-x714)&(x715>x716));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x717 = 4U;
	uint16_t x718 = 0U;
	int32_t x719 = -1;
	int32_t x720 = INT32_MIN;
	int32_t t158 = 0;

    t158 = ((x717-x718)&(x719>x720));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x721 = UINT64_MAX;
	uint32_t x722 = 214060U;
	int8_t x724 = INT8_MIN;
	uint64_t t159 = 8297768365545LLU;

    t159 = ((x721-x722)&(x723>x724));

    if (t159 != 1LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int16_t x725 = INT16_MAX;
	volatile int32_t x726 = 15;
	int8_t x727 = INT8_MIN;
	volatile int16_t x728 = -91;
	volatile int32_t t160 = -27;

    t160 = ((x725-x726)&(x727>x728));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint16_t x729 = UINT16_MAX;
	static int64_t x730 = -9013LL;
	int32_t x732 = -10;
	int64_t t161 = 6339825530889LL;

    t161 = ((x729-x730)&(x731>x732));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x733 = 10;
	int16_t x735 = INT16_MIN;
	int32_t x736 = -1;
	int32_t t162 = 31611;

    t162 = ((x733-x734)&(x735>x736));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x737 = 1;
	uint32_t x739 = UINT32_MAX;

    t163 = ((x737-x738)&(x739>x740));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x745 = 18316U;
	uint32_t x746 = UINT32_MAX;
	int8_t x748 = INT8_MIN;

    t164 = ((x745-x746)&(x747>x748));

    if (t164 != 1U) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x750 = INT64_MAX;
	static uint8_t x751 = UINT8_MAX;
	static volatile int64_t t165 = -325526585930LL;

    t165 = ((x749-x750)&(x751>x752));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x753 = INT8_MIN;
	int64_t x754 = INT64_MIN;
	int16_t x755 = -1;
	static int64_t x756 = INT64_MIN;

    t166 = ((x753-x754)&(x755>x756));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x757 = 51509578632639944LLU;
	uint8_t x759 = 94U;
	volatile int8_t x760 = -1;
	static uint64_t t167 = 9663LLU;

    t167 = ((x757-x758)&(x759>x760));

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x761 = INT8_MAX;
	volatile uint64_t x762 = UINT64_MAX;
	int32_t x764 = 557;

    t168 = ((x761-x762)&(x763>x764));

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x769 = 7;
	static volatile int16_t x770 = INT16_MIN;
	int8_t x771 = INT8_MIN;
	volatile int32_t t169 = 41507;

    t169 = ((x769-x770)&(x771>x772));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint64_t x773 = 303863836278LLU;
	static int32_t x774 = INT32_MIN;
	int16_t x775 = INT16_MIN;
	volatile uint64_t t170 = 106LLU;

    t170 = ((x773-x774)&(x775>x776));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile uint16_t x777 = 5583U;
	uint32_t x778 = 1525345610U;
	static int8_t x780 = INT8_MIN;
	uint32_t t171 = 15844U;

    t171 = ((x777-x778)&(x779>x780));

    if (t171 != 0U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x781 = 216005914981009LLU;
	volatile int8_t x782 = INT8_MIN;
	int64_t x783 = INT64_MIN;
	static uint64_t t172 = 297006226434996114LLU;

    t172 = ((x781-x782)&(x783>x784));

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x785 = INT8_MAX;
	uint32_t x787 = UINT32_MAX;
	volatile uint64_t t173 = 7LLU;

    t173 = ((x785-x786)&(x787>x788));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x794 = UINT64_MAX;
	int8_t x796 = -10;
	uint64_t t174 = 34514LLU;

    t174 = ((x793-x794)&(x795>x796));

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x797 = 1;
	int16_t x798 = -1;
	static volatile uint8_t x799 = 1U;
	int16_t x800 = INT16_MIN;
	volatile int32_t t175 = -17;

    t175 = ((x797-x798)&(x799>x800));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x801 = 196862192640929LLU;
	volatile uint64_t t176 = 22569LLU;

    t176 = ((x801-x802)&(x803>x804));

    if (t176 != 1LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x806 = -1LL;
	uint64_t x808 = 1LLU;
	volatile int64_t t177 = -5959280596041214LL;

    t177 = ((x805-x806)&(x807>x808));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x810 = -250;
	volatile int8_t x811 = 11;
	volatile int32_t t178 = -95;

    t178 = ((x809-x810)&(x811>x812));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x813 = 1316392174192033LLU;
	volatile int16_t x814 = 14037;
	volatile int8_t x815 = -6;
	int16_t x816 = INT16_MIN;

    t179 = ((x813-x814)&(x815>x816));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x817 = UINT8_MAX;
	static volatile uint32_t x818 = 536U;
	uint8_t x819 = 21U;
	volatile int8_t x820 = -1;

    t180 = ((x817-x818)&(x819>x820));

    if (t180 != 1U) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x821 = INT8_MIN;
	static int8_t x822 = INT8_MIN;
	static volatile int32_t x823 = -1;
	int32_t t181 = 1;

    t181 = ((x821-x822)&(x823>x824));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint32_t x825 = UINT32_MAX;
	volatile int64_t x828 = -1LL;
	volatile uint32_t t182 = 638U;

    t182 = ((x825-x826)&(x827>x828));

    if (t182 != 1U) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x829 = INT32_MAX;
	volatile uint8_t x832 = 6U;
	uint64_t t183 = 12589459LLU;

    t183 = ((x829-x830)&(x831>x832));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x838 = INT64_MIN;
	volatile int16_t x839 = -390;
	int8_t x840 = INT8_MIN;

    t184 = ((x837-x838)&(x839>x840));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x841 = -52;
	volatile int16_t x842 = 4;
	int64_t x843 = INT64_MAX;
	uint32_t x844 = UINT32_MAX;
	volatile int32_t t185 = 203733;

    t185 = ((x841-x842)&(x843>x844));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x845 = 0U;
	uint64_t x846 = 23844LLU;
	int32_t x847 = 1476549;
	static int8_t x848 = -1;

    t186 = ((x845-x846)&(x847>x848));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x849 = INT16_MAX;
	volatile int64_t x850 = 3070LL;
	int16_t x851 = INT16_MIN;
	volatile int64_t t187 = -233018021484LL;

    t187 = ((x849-x850)&(x851>x852));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x853 = INT32_MIN;
	static int64_t x854 = INT64_MIN;
	int8_t x855 = -1;
	int64_t x856 = INT64_MAX;
	volatile int64_t t188 = -13258434LL;

    t188 = ((x853-x854)&(x855>x856));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x857 = 55;
	uint64_t x858 = 7501663658022158LLU;
	volatile int16_t x859 = 23;
	uint64_t t189 = 104278777221842770LLU;

    t189 = ((x857-x858)&(x859>x860));

    if (t189 != 1LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x861 = 14;
	int16_t x862 = -1;
	uint64_t x863 = 0LLU;
	volatile int32_t t190 = -11749184;

    t190 = ((x861-x862)&(x863>x864));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x866 = UINT64_MAX;
	int8_t x867 = INT8_MIN;
	int8_t x868 = 41;
	volatile uint64_t t191 = 978096LLU;

    t191 = ((x865-x866)&(x867>x868));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x869 = 54431163498776LLU;
	volatile int32_t x870 = -73959707;
	static int32_t x871 = INT32_MAX;
	volatile uint64_t t192 = 3LLU;

    t192 = ((x869-x870)&(x871>x872));

    if (t192 != 1LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x873 = INT8_MIN;
	int64_t x875 = -1636134LL;
	static volatile int16_t x876 = -1461;

    t193 = ((x873-x874)&(x875>x876));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int16_t x878 = 2268;

    t194 = ((x877-x878)&(x879>x880));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x882 = INT16_MAX;
	uint32_t x883 = 1922769U;

    t195 = ((x881-x882)&(x883>x884));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x885 = 15183LLU;
	int16_t x886 = -148;
	uint8_t x887 = 29U;
	int32_t x888 = -2003;
	static volatile uint64_t t196 = 507LLU;

    t196 = ((x885-x886)&(x887>x888));

    if (t196 != 1LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint8_t x890 = UINT8_MAX;
	static int64_t x891 = -1LL;
	volatile int32_t t197 = 489;

    t197 = ((x889-x890)&(x891>x892));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x897 = -1;
	uint64_t x898 = UINT64_MAX;
	uint16_t x899 = 13U;
	int64_t x900 = INT64_MAX;
	uint64_t t198 = 209381LLU;

    t198 = ((x897-x898)&(x899>x900));

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x901 = 32U;
	volatile uint64_t t199 = 21206412353374396LLU;

    t199 = ((x901-x902)&(x903>x904));

    if (t199 != 1LLU) { NG(); } else { ; }
	
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

