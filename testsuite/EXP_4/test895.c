
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

int8_t x5 = -1;
volatile int32_t x6 = 3;
uint32_t x7 = UINT32_MAX;
int16_t x16 = -1;
volatile int32_t t3 = -87;
static volatile int32_t x19 = INT32_MIN;
volatile int8_t x24 = INT8_MIN;
static int32_t x26 = -1;
int16_t x32 = INT16_MAX;
static uint8_t x36 = 7U;
int32_t x42 = 43;
volatile uint64_t x43 = UINT64_MAX;
static int16_t x56 = INT16_MAX;
uint32_t x59 = UINT32_MAX;
uint64_t x60 = UINT64_MAX;
volatile int32_t t14 = -7;
uint32_t t16 = 216388U;
int8_t x72 = INT8_MIN;
static volatile int16_t x77 = INT16_MIN;
int16_t x78 = 243;
int8_t x81 = -46;
int32_t t20 = -35700;
int16_t x86 = -968;
static int16_t x90 = -47;
int64_t t22 = -173405083723619LL;
uint32_t x95 = 12U;
int8_t x96 = INT8_MAX;
int64_t x97 = -283292400055311738LL;
uint64_t x99 = 73348LLU;
static uint32_t x106 = 0U;
uint32_t x108 = 48002886U;
static int64_t x111 = 212894349805LL;
volatile int64_t x113 = INT64_MIN;
int64_t x114 = INT64_MAX;
int32_t x116 = INT32_MIN;
int32_t x118 = INT32_MAX;
volatile int64_t t29 = INT64_MAX;
int32_t x129 = 215828974;
int64_t x130 = INT64_MIN;
int32_t x133 = 67880004;
int8_t x135 = -8;
uint32_t x138 = UINT32_MAX;
volatile int64_t x140 = -105020272296LL;
uint64_t t34 = 1232LLU;
static int32_t t35 = -6869;
int16_t x147 = -1;
uint8_t x159 = UINT8_MAX;
uint64_t x161 = 14497050LLU;
volatile uint64_t t40 = 310628702424LLU;
int32_t x168 = INT32_MAX;
static int64_t x170 = -744306209222928LL;
volatile uint64_t t42 = UINT64_MAX;
volatile uint16_t x182 = UINT16_MAX;
uint64_t x184 = 189955LLU;
uint16_t x185 = 3946U;
volatile int32_t t46 = 33826;
int16_t x194 = INT16_MIN;
int64_t x195 = 19918351663LL;
volatile int32_t t48 = 2474931;
volatile int8_t x200 = INT8_MIN;
int64_t x203 = INT64_MAX;
static uint32_t x205 = 1U;
int64_t x208 = INT64_MIN;
static uint64_t t54 = UINT64_MAX;
static volatile uint16_t x234 = 16U;
int32_t x235 = INT32_MAX;
int8_t x237 = INT8_MIN;
uint32_t x238 = 105699399U;
int8_t x239 = 1;
int8_t x241 = INT8_MAX;
uint16_t x242 = 4U;
static int8_t x244 = -33;
int32_t t60 = 54371577;
int64_t x245 = 733542939801223060LL;
int64_t t61 = 4580LL;
volatile int32_t x270 = INT32_MAX;
uint32_t t67 = 455468U;
volatile uint32_t t68 = 13051U;
static int32_t x279 = INT32_MIN;
int64_t x291 = -1LL;
static volatile uint32_t x303 = 327000U;
static int32_t x310 = INT32_MAX;
static int16_t x311 = INT16_MIN;
uint32_t x312 = 253042U;
int32_t t78 = INT32_MAX;
int16_t x317 = -1529;
int8_t x328 = -1;
volatile int8_t x339 = INT8_MIN;
int32_t t87 = -35678;
uint64_t x358 = 496618LLU;
int8_t x359 = 7;
volatile int16_t x374 = -2008;
int8_t x381 = 1;
int32_t t96 = -285240;
static volatile int8_t x392 = -1;
volatile int8_t x393 = INT8_MIN;
int32_t x395 = -1;
volatile int64_t x401 = INT64_MIN;
static int32_t x404 = -1;
int32_t t101 = INT32_MIN;
int64_t x409 = INT64_MIN;
int64_t x410 = 2062840092198805565LL;
int32_t t103 = -561;
uint64_t x419 = 107159950884404LLU;
int32_t x422 = INT32_MAX;
int32_t t106 = 810;
int16_t x435 = INT16_MIN;
int16_t x444 = -2678;
volatile int32_t t110 = -278;
static uint16_t x453 = UINT16_MAX;
volatile uint8_t x456 = 2U;
int32_t t113 = 617;
volatile int32_t t114 = 926;
static uint64_t x461 = 17124643915LLU;
int16_t x463 = INT16_MIN;
uint16_t x470 = 30U;
uint8_t x480 = 49U;
int8_t x483 = 0;
int32_t x500 = INT32_MIN;
int32_t x502 = -1;
static int32_t x512 = INT32_MAX;
int32_t t127 = -5;
int32_t x540 = -55127;
int64_t x541 = -1LL;
uint64_t x542 = 16035436484565530LLU;
uint16_t x543 = UINT16_MAX;
int16_t x546 = -1;
int8_t x558 = 6;
static int64_t t141 = INT64_MAX;
int8_t x570 = INT8_MIN;
int32_t x571 = 57088065;
volatile int32_t x572 = INT32_MIN;
int64_t x573 = -1LL;
int16_t x575 = 6921;
uint32_t x580 = 97U;
static int64_t x585 = 1494153951549898225LL;
static uint64_t x591 = 913LLU;
volatile int32_t t147 = -1780854;
int8_t x599 = INT8_MIN;
uint8_t x600 = 52U;
volatile int64_t x607 = 916381479270LL;
volatile int8_t x609 = 1;
uint16_t x612 = UINT16_MAX;
int32_t t152 = 182796;
int8_t x616 = -1;
int64_t x625 = 602625LL;
int16_t x628 = -1;
uint64_t x638 = UINT64_MAX;
static int32_t x643 = INT32_MIN;
int64_t x645 = -10043061053965363LL;
volatile int64_t t161 = 81691893046904LL;
static int64_t x649 = INT64_MIN;
volatile uint8_t x650 = UINT8_MAX;
static int32_t x651 = -1;
int64_t x660 = 151479273843LL;
int16_t x662 = INT16_MIN;
int16_t x665 = 63;
int8_t x677 = -1;
volatile int32_t t169 = 439;
uint32_t x685 = 131U;
static volatile int64_t x690 = INT64_MIN;
static int64_t x698 = INT64_MIN;
static int32_t x699 = -1;
int64_t t174 = -3925LL;
int8_t x701 = -1;
uint8_t x703 = 123U;
volatile int8_t x706 = 0;
uint64_t x708 = UINT64_MAX;
uint16_t x711 = 16U;
int16_t x715 = INT16_MAX;
uint16_t x720 = 750U;
static int32_t x723 = INT32_MIN;
uint8_t x730 = 120U;
int8_t x731 = INT8_MIN;
volatile uint8_t x732 = UINT8_MAX;
volatile int32_t t182 = INT32_MIN;
static int32_t x740 = 1;
volatile int16_t x743 = INT16_MIN;
static volatile uint32_t t185 = UINT32_MAX;
static volatile int8_t x745 = 0;
volatile int32_t x746 = INT32_MAX;
static uint64_t x750 = 1968LLU;
volatile int32_t t188 = INT32_MIN;
static int16_t x761 = -3;
static uint16_t x762 = UINT16_MAX;
volatile int32_t x764 = -115413;
volatile uint16_t x765 = 23U;
uint64_t x775 = 982977596LLU;
static uint32_t x778 = 493U;
int8_t x779 = 55;
int8_t x793 = INT8_MIN;


void f0(void) {
    	uint8_t x1 = 1U;
	int16_t x2 = -26;
	uint8_t x3 = 76U;
	volatile int64_t x4 = INT64_MIN;
	volatile int32_t t0 = -28248948;

    t0 = (x1|(x2==(x3%x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x8 = -1;
	int32_t t1 = 496;

    t1 = (x5|(x6==(x7%x8)));

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	int8_t x10 = -9;
	volatile uint8_t x11 = 32U;
	int64_t x12 = INT64_MIN;
	int64_t t2 = INT64_MIN;

    t2 = (x9|(x10==(x11%x12)));

    if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = 66U;
	volatile int32_t x14 = INT32_MAX;
	volatile int32_t x15 = INT32_MIN;

    t3 = (x13|(x14==(x15%x16)));

    if (t3 != 66) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = 1;
	int16_t x18 = INT16_MIN;
	uint8_t x20 = 1U;
	volatile int32_t t4 = 3833;

    t4 = (x17|(x18==(x19%x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x21 = 356U;
	uint8_t x22 = 12U;
	int64_t x23 = INT64_MIN;
	int32_t t5 = 21;

    t5 = (x21|(x22==(x23%x24)));

    if (t5 != 356) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 208352U;
	static volatile int8_t x27 = -7;
	int8_t x28 = -1;
	static uint32_t t6 = 28265U;

    t6 = (x25|(x26==(x27%x28)));

    if (t6 != 208352U) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	volatile int16_t x30 = 0;
	static volatile uint64_t x31 = 3981588050442340815LLU;
	int64_t t7 = INT64_MIN;

    t7 = (x29|(x30==(x31%x32)));

    if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = 24578;
	uint16_t x34 = 31U;
	int64_t x35 = -1LL;
	static int32_t t8 = 62617779;

    t8 = (x33|(x34==(x35%x36)));

    if (t8 != 24578) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x37 = 7U;
	int32_t x38 = INT32_MIN;
	uint32_t x39 = 3231600U;
	volatile uint16_t x40 = 2U;
	int32_t t9 = 7358586;

    t9 = (x37|(x38==(x39%x40)));

    if (t9 != 7) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x41 = -1;
	uint32_t x44 = 1188878U;
	volatile int32_t t10 = -11974538;

    t10 = (x41|(x42==(x43%x44)));

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MAX;
	uint32_t x46 = UINT32_MAX;
	int32_t x47 = -128435;
	static uint8_t x48 = 15U;
	volatile int32_t t11 = 18019;

    t11 = (x45|(x46==(x47%x48)));

    if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = 72549404LLU;
	int8_t x50 = 29;
	volatile uint8_t x51 = 35U;
	int8_t x52 = 6;
	uint64_t t12 = 1131521750324LLU;

    t12 = (x49|(x50==(x51%x52)));

    if (t12 != 72549404LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = -1;
	volatile int32_t x54 = -1;
	volatile int64_t x55 = INT64_MIN;
	static volatile int32_t t13 = 3512;

    t13 = (x53|(x54==(x55%x56)));

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = UINT8_MAX;
	int8_t x58 = INT8_MAX;

    t14 = (x57|(x58==(x59%x60)));

    if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = INT64_MAX;
	static int32_t x62 = INT32_MAX;
	uint16_t x63 = 99U;
	static uint32_t x64 = 4138U;
	volatile int64_t t15 = INT64_MAX;

    t15 = (x61|(x62==(x63%x64)));

    if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x65 = 1363U;
	volatile int16_t x66 = INT16_MIN;
	int32_t x67 = 8337;
	uint16_t x68 = UINT16_MAX;

    t16 = (x65|(x66==(x67%x68)));

    if (t16 != 1363U) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MIN;
	volatile int64_t x70 = -488988165584346983LL;
	int16_t x71 = -1;
	int64_t t17 = INT64_MIN;

    t17 = (x69|(x70==(x71%x72)));

    if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x73 = UINT64_MAX;
	int8_t x74 = INT8_MIN;
	volatile int32_t x75 = -482;
	int64_t x76 = INT64_MAX;
	static volatile uint64_t t18 = UINT64_MAX;

    t18 = (x73|(x74==(x75%x76)));

    if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x79 = INT8_MIN;
	int32_t x80 = -17841422;
	volatile int32_t t19 = -4015046;

    t19 = (x77|(x78==(x79%x80)));

    if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x82 = INT16_MIN;
	int16_t x83 = INT16_MIN;
	int64_t x84 = -1LL;

    t20 = (x81|(x82==(x83%x84)));

    if (t20 != -46) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = -29202LL;
	int32_t x87 = -1;
	static int8_t x88 = INT8_MAX;
	volatile int64_t t21 = 67475029659987LL;

    t21 = (x85|(x86==(x87%x88)));

    if (t21 != -29202LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = -2LL;
	static int8_t x91 = INT8_MIN;
	static int64_t x92 = INT64_MIN;

    t22 = (x89|(x90==(x91%x92)));

    if (t22 != -2LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int32_t x93 = INT32_MIN;
	uint16_t x94 = 48U;
	int32_t t23 = INT32_MIN;

    t23 = (x93|(x94==(x95%x96)));

    if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x98 = INT8_MAX;
	static volatile int64_t x100 = -23036LL;
	int64_t t24 = -151612900905717185LL;

    t24 = (x97|(x98==(x99%x100)));

    if (t24 != -283292400055311738LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = INT64_MIN;
	int32_t x102 = 1597;
	int32_t x103 = 17574;
	int8_t x104 = -1;
	volatile int64_t t25 = INT64_MIN;

    t25 = (x101|(x102==(x103%x104)));

    if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x105 = 3310;
	int32_t x107 = -1;
	int32_t t26 = -2327846;

    t26 = (x105|(x106==(x107%x108)));

    if (t26 != 3310) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = 3391U;
	uint64_t x110 = 781364LLU;
	uint16_t x112 = 6844U;
	volatile int32_t t27 = -1;

    t27 = (x109|(x110==(x111%x112)));

    if (t27 != 3391) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x115 = -50901302;
	int64_t t28 = INT64_MIN;

    t28 = (x113|(x114==(x115%x116)));

    if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = INT64_MAX;
	static int32_t x119 = 15978048;
	uint64_t x120 = UINT64_MAX;

    t29 = (x117|(x118==(x119%x120)));

    if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MAX;
	int8_t x122 = INT8_MIN;
	static volatile int16_t x123 = -1;
	int64_t x124 = -13376030LL;
	int32_t t30 = 13;

    t30 = (x121|(x122==(x123%x124)));

    if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x125 = INT32_MAX;
	uint8_t x126 = 3U;
	volatile int8_t x127 = 1;
	static uint16_t x128 = UINT16_MAX;
	static volatile int32_t t31 = INT32_MAX;

    t31 = (x125|(x126==(x127%x128)));

    if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x131 = UINT32_MAX;
	volatile int16_t x132 = INT16_MAX;
	int32_t t32 = -1171465;

    t32 = (x129|(x130==(x131%x132)));

    if (t32 != 215828974) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x134 = 34U;
	int64_t x136 = INT64_MAX;
	volatile int32_t t33 = -175173;

    t33 = (x133|(x134==(x135%x136)));

    if (t33 != 67880004) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint64_t x137 = 1906733233510580LLU;
	static int32_t x139 = INT32_MIN;

    t34 = (x137|(x138==(x139%x140)));

    if (t34 != 1906733233510580LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x141 = 2U;
	uint32_t x142 = 2U;
	volatile int32_t x143 = 129941433;
	volatile int16_t x144 = INT16_MAX;

    t35 = (x141|(x142==(x143%x144)));

    if (t35 != 2) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x145 = -35317632963410787LL;
	uint32_t x146 = 78U;
	int32_t x148 = INT32_MIN;
	int64_t t36 = -9529853199LL;

    t36 = (x145|(x146==(x147%x148)));

    if (t36 != -35317632963410787LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint64_t x149 = UINT64_MAX;
	uint16_t x150 = 169U;
	int32_t x151 = 1853582;
	int64_t x152 = INT64_MIN;
	volatile uint64_t t37 = UINT64_MAX;

    t37 = (x149|(x150==(x151%x152)));

    if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x153 = UINT64_MAX;
	int16_t x154 = INT16_MIN;
	volatile uint32_t x155 = 7799252U;
	uint16_t x156 = UINT16_MAX;
	volatile uint64_t t38 = UINT64_MAX;

    t38 = (x153|(x154==(x155%x156)));

    if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x157 = 1U;
	static int8_t x158 = 60;
	int8_t x160 = -1;
	volatile int32_t t39 = -2;

    t39 = (x157|(x158==(x159%x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x162 = 1238429716LL;
	int16_t x163 = INT16_MIN;
	int64_t x164 = INT64_MIN;

    t40 = (x161|(x162==(x163%x164)));

    if (t40 != 14497050LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = -1;
	int64_t x166 = 179806747913214LL;
	int32_t x167 = -3119;
	int32_t t41 = 183007;

    t41 = (x165|(x166==(x167%x168)));

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x169 = UINT64_MAX;
	uint64_t x171 = 3388273956373LLU;
	uint8_t x172 = UINT8_MAX;

    t42 = (x169|(x170==(x171%x172)));

    if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x173 = 1U;
	volatile uint32_t x174 = 1U;
	int64_t x175 = 1LL;
	uint16_t x176 = UINT16_MAX;
	volatile int32_t t43 = 2284550;

    t43 = (x173|(x174==(x175%x176)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = INT32_MAX;
	static int16_t x178 = -1;
	int16_t x179 = INT16_MAX;
	int16_t x180 = -1;
	int32_t t44 = INT32_MAX;

    t44 = (x177|(x178==(x179%x180)));

    if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x181 = 1;
	static volatile uint32_t x183 = 1616577U;
	volatile int32_t t45 = 46;

    t45 = (x181|(x182==(x183%x184)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x186 = -25492987;
	int32_t x187 = INT32_MIN;
	uint16_t x188 = 6270U;

    t46 = (x185|(x186==(x187%x188)));

    if (t46 != 3946) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x189 = 2202U;
	int8_t x190 = 3;
	int16_t x191 = INT16_MIN;
	static int8_t x192 = 2;
	int32_t t47 = -7;

    t47 = (x189|(x190==(x191%x192)));

    if (t47 != 2202) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x193 = 5;
	int64_t x196 = INT64_MIN;

    t48 = (x193|(x194==(x195%x196)));

    if (t48 != 5) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint8_t x197 = 62U;
	int64_t x198 = INT64_MAX;
	static int8_t x199 = -1;
	volatile int32_t t49 = -29;

    t49 = (x197|(x198==(x199%x200)));

    if (t49 != 62) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x201 = -1;
	int64_t x202 = -1LL;
	int16_t x204 = -1;
	int32_t t50 = -1550668;

    t50 = (x201|(x202==(x203%x204)));

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x206 = UINT64_MAX;
	int64_t x207 = INT64_MIN;
	uint32_t t51 = 61891U;

    t51 = (x205|(x206==(x207%x208)));

    if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x209 = INT32_MIN;
	int32_t x210 = INT32_MIN;
	int16_t x211 = 2;
	int64_t x212 = INT64_MIN;
	int32_t t52 = INT32_MIN;

    t52 = (x209|(x210==(x211%x212)));

    if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x213 = UINT64_MAX;
	static volatile uint64_t x214 = UINT64_MAX;
	static volatile int64_t x215 = INT64_MAX;
	int8_t x216 = -1;
	volatile uint64_t t53 = UINT64_MAX;

    t53 = (x213|(x214==(x215%x216)));

    if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x217 = UINT64_MAX;
	volatile int16_t x218 = INT16_MAX;
	static uint32_t x219 = 1934U;
	volatile uint32_t x220 = 1277597U;

    t54 = (x217|(x218==(x219%x220)));

    if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = -24537455;
	int32_t x222 = -1;
	static volatile int8_t x223 = -8;
	static uint32_t x224 = 73U;
	int32_t t55 = 73;

    t55 = (x221|(x222==(x223%x224)));

    if (t55 != -24537455) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x225 = UINT32_MAX;
	int8_t x226 = 12;
	int32_t x227 = 970;
	int64_t x228 = -1LL;
	volatile uint32_t t56 = UINT32_MAX;

    t56 = (x225|(x226==(x227%x228)));

    if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x229 = 3U;
	uint32_t x230 = 0U;
	static uint8_t x231 = 1U;
	static uint16_t x232 = 4U;
	volatile uint32_t t57 = 84U;

    t57 = (x229|(x230==(x231%x232)));

    if (t57 != 3U) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = -23;
	int8_t x236 = -1;
	volatile int32_t t58 = 395;

    t58 = (x233|(x234==(x235%x236)));

    if (t58 != -23) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x240 = -114884LL;
	int32_t t59 = -63248;

    t59 = (x237|(x238==(x239%x240)));

    if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x243 = INT8_MIN;

    t60 = (x241|(x242==(x243%x244)));

    if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x246 = 1;
	int16_t x247 = INT16_MIN;
	int64_t x248 = INT64_MIN;

    t61 = (x245|(x246==(x247%x248)));

    if (t61 != 733542939801223060LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = -1;
	uint64_t x250 = 37885063012736LLU;
	volatile int8_t x251 = 1;
	uint32_t x252 = 2103U;
	int32_t t62 = -56321;

    t62 = (x249|(x250==(x251%x252)));

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x253 = UINT64_MAX;
	int32_t x254 = -7539931;
	int8_t x255 = -9;
	int8_t x256 = INT8_MIN;
	volatile uint64_t t63 = UINT64_MAX;

    t63 = (x253|(x254==(x255%x256)));

    if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = INT16_MIN;
	int32_t x258 = -1;
	uint16_t x259 = 17775U;
	volatile int32_t x260 = INT32_MIN;
	volatile int32_t t64 = -13917;

    t64 = (x257|(x258==(x259%x260)));

    if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x261 = -1;
	volatile int64_t x262 = INT64_MIN;
	int16_t x263 = INT16_MIN;
	uint64_t x264 = 106794LLU;
	static int32_t t65 = -379;

    t65 = (x261|(x262==(x263%x264)));

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x265 = 305670015868300LLU;
	uint64_t x266 = UINT64_MAX;
	volatile int16_t x267 = INT16_MIN;
	static volatile int64_t x268 = INT64_MIN;
	uint64_t t66 = 196126963277LLU;

    t66 = (x265|(x266==(x267%x268)));

    if (t66 != 305670015868300LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = 20738U;
	uint64_t x271 = 1755LLU;
	uint8_t x272 = 3U;

    t67 = (x269|(x270==(x271%x272)));

    if (t67 != 20738U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x273 = 0U;
	int32_t x274 = INT32_MAX;
	volatile int32_t x275 = INT32_MAX;
	static volatile int32_t x276 = -1;

    t68 = (x273|(x274==(x275%x276)));

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int16_t x277 = INT16_MIN;
	int8_t x278 = INT8_MIN;
	int8_t x280 = INT8_MIN;
	int32_t t69 = -8;

    t69 = (x277|(x278==(x279%x280)));

    if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x281 = 107U;
	uint64_t x282 = 914570292818389665LLU;
	int8_t x283 = -1;
	uint64_t x284 = UINT64_MAX;
	uint32_t t70 = 3565U;

    t70 = (x281|(x282==(x283%x284)));

    if (t70 != 107U) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x285 = 25;
	static uint8_t x286 = UINT8_MAX;
	static uint64_t x287 = UINT64_MAX;
	static uint16_t x288 = UINT16_MAX;
	int32_t t71 = -2043669;

    t71 = (x285|(x286==(x287%x288)));

    if (t71 != 25) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = 1925LL;
	int8_t x290 = -1;
	volatile uint64_t x292 = 422LLU;
	volatile int64_t t72 = -3493146LL;

    t72 = (x289|(x290==(x291%x292)));

    if (t72 != 1925LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = INT8_MAX;
	int8_t x294 = 9;
	uint32_t x295 = UINT32_MAX;
	uint16_t x296 = 2U;
	volatile int32_t t73 = -1;

    t73 = (x293|(x294==(x295%x296)));

    if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = INT32_MIN;
	int32_t x298 = INT32_MAX;
	static volatile int8_t x299 = INT8_MIN;
	int32_t x300 = INT32_MIN;
	volatile int32_t t74 = INT32_MIN;

    t74 = (x297|(x298==(x299%x300)));

    if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x301 = INT8_MIN;
	volatile uint64_t x302 = 26503825820209398LLU;
	int16_t x304 = -1802;
	static volatile int32_t t75 = 56511;

    t75 = (x301|(x302==(x303%x304)));

    if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x305 = INT32_MIN;
	int64_t x306 = -1446305062221295LL;
	int64_t x307 = INT64_MIN;
	int16_t x308 = -1;
	static volatile int32_t t76 = INT32_MIN;

    t76 = (x305|(x306==(x307%x308)));

    if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint16_t x309 = UINT16_MAX;
	int32_t t77 = -5877;

    t77 = (x309|(x310==(x311%x312)));

    if (t77 != 65535) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x313 = INT32_MAX;
	int16_t x314 = INT16_MAX;
	volatile uint32_t x315 = UINT32_MAX;
	static uint8_t x316 = UINT8_MAX;

    t78 = (x313|(x314==(x315%x316)));

    if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x318 = -1;
	uint32_t x319 = UINT32_MAX;
	static volatile uint8_t x320 = 3U;
	volatile int32_t t79 = 1191682;

    t79 = (x317|(x318==(x319%x320)));

    if (t79 != -1529) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = INT64_MIN;
	uint32_t x322 = 118U;
	volatile uint32_t x323 = 11551U;
	volatile uint64_t x324 = UINT64_MAX;
	volatile int64_t t80 = INT64_MIN;

    t80 = (x321|(x322==(x323%x324)));

    if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = INT32_MIN;
	uint32_t x326 = 108310U;
	uint64_t x327 = UINT64_MAX;
	volatile int32_t t81 = INT32_MIN;

    t81 = (x325|(x326==(x327%x328)));

    if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint16_t x329 = UINT16_MAX;
	int16_t x330 = 457;
	static int64_t x331 = INT64_MAX;
	static int64_t x332 = -1LL;
	volatile int32_t t82 = -602173;

    t82 = (x329|(x330==(x331%x332)));

    if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x333 = 122U;
	volatile int64_t x334 = INT64_MIN;
	int64_t x335 = INT64_MIN;
	volatile uint32_t x336 = UINT32_MAX;
	volatile int32_t t83 = 243867;

    t83 = (x333|(x334==(x335%x336)));

    if (t83 != 122) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x337 = 0U;
	int64_t x338 = 5LL;
	int64_t x340 = INT64_MIN;
	volatile int32_t t84 = -7937;

    t84 = (x337|(x338==(x339%x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = -14349;
	static int16_t x342 = -1;
	static volatile uint32_t x343 = UINT32_MAX;
	uint16_t x344 = UINT16_MAX;
	static int32_t t85 = 4996;

    t85 = (x341|(x342==(x343%x344)));

    if (t85 != -14349) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = INT32_MIN;
	static volatile int64_t x346 = 109472920147401LL;
	static int64_t x347 = 666368LL;
	int64_t x348 = -370895388909077LL;
	int32_t t86 = INT32_MIN;

    t86 = (x345|(x346==(x347%x348)));

    if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x349 = 8U;
	uint32_t x350 = UINT32_MAX;
	int16_t x351 = INT16_MIN;
	uint8_t x352 = UINT8_MAX;

    t87 = (x349|(x350==(x351%x352)));

    if (t87 != 8) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = INT64_MIN;
	uint64_t x354 = 209024628841499376LLU;
	static uint64_t x355 = 7234499LLU;
	int64_t x356 = -1LL;
	int64_t t88 = INT64_MIN;

    t88 = (x353|(x354==(x355%x356)));

    if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x357 = 2376143U;
	static int8_t x360 = INT8_MIN;
	volatile uint32_t t89 = 241U;

    t89 = (x357|(x358==(x359%x360)));

    if (t89 != 2376143U) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x361 = INT8_MIN;
	static uint16_t x362 = 5U;
	uint16_t x363 = 1U;
	volatile int64_t x364 = 23957277LL;
	int32_t t90 = -2;

    t90 = (x361|(x362==(x363%x364)));

    if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int32_t x365 = INT32_MIN;
	int64_t x366 = INT64_MAX;
	int64_t x367 = INT64_MIN;
	volatile int16_t x368 = INT16_MAX;
	static int32_t t91 = INT32_MIN;

    t91 = (x365|(x366==(x367%x368)));

    if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = -1361577;
	static int32_t x370 = INT32_MIN;
	int16_t x371 = INT16_MIN;
	int8_t x372 = 15;
	int32_t t92 = 45292;

    t92 = (x369|(x370==(x371%x372)));

    if (t92 != -1361577) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x373 = UINT64_MAX;
	int8_t x375 = INT8_MAX;
	int16_t x376 = -1;
	uint64_t t93 = UINT64_MAX;

    t93 = (x373|(x374==(x375%x376)));

    if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x377 = INT64_MIN;
	int8_t x378 = -1;
	uint8_t x379 = 1U;
	uint16_t x380 = UINT16_MAX;
	static int64_t t94 = INT64_MIN;

    t94 = (x377|(x378==(x379%x380)));

    if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x382 = -1;
	volatile uint32_t x383 = UINT32_MAX;
	int16_t x384 = INT16_MAX;
	volatile int32_t t95 = 958;

    t95 = (x381|(x382==(x383%x384)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = 3183;
	int32_t x386 = INT32_MIN;
	uint8_t x387 = 7U;
	int16_t x388 = INT16_MIN;

    t96 = (x385|(x386==(x387%x388)));

    if (t96 != 3183) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x389 = INT32_MIN;
	int16_t x390 = INT16_MAX;
	uint16_t x391 = 1U;
	static int32_t t97 = INT32_MIN;

    t97 = (x389|(x390==(x391%x392)));

    if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x394 = 1;
	static int16_t x396 = 56;
	volatile int32_t t98 = -123;

    t98 = (x393|(x394==(x395%x396)));

    if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = INT32_MAX;
	uint8_t x398 = UINT8_MAX;
	static int16_t x399 = INT16_MIN;
	int64_t x400 = INT64_MAX;
	static int32_t t99 = INT32_MAX;

    t99 = (x397|(x398==(x399%x400)));

    if (t99 != INT32_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x402 = 106U;
	int16_t x403 = INT16_MIN;
	int64_t t100 = INT64_MIN;

    t100 = (x401|(x402==(x403%x404)));

    if (t100 != INT64_MIN) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MIN;
	static int8_t x406 = -7;
	static uint64_t x407 = 1102357695815901LLU;
	uint64_t x408 = 298223485705LLU;

    t101 = (x405|(x406==(x407%x408)));

    if (t101 != INT32_MIN) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x411 = -1;
	uint16_t x412 = UINT16_MAX;
	static int64_t t102 = INT64_MIN;

    t102 = (x409|(x410==(x411%x412)));

    if (t102 != INT64_MIN) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x413 = 27U;
	int16_t x414 = 1;
	int8_t x415 = INT8_MIN;
	uint8_t x416 = 14U;

    t103 = (x413|(x414==(x415%x416)));

    if (t103 != 27) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = -4;
	uint8_t x418 = UINT8_MAX;
	volatile int8_t x420 = INT8_MIN;
	volatile int32_t t104 = -29900471;

    t104 = (x417|(x418==(x419%x420)));

    if (t104 != -4) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint16_t x421 = UINT16_MAX;
	int64_t x423 = -1LL;
	static int64_t x424 = INT64_MIN;
	int32_t t105 = -52929487;

    t105 = (x421|(x422==(x423%x424)));

    if (t105 != 65535) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = 24;
	volatile int64_t x426 = INT64_MIN;
	uint8_t x427 = UINT8_MAX;
	int8_t x428 = -1;

    t106 = (x425|(x426==(x427%x428)));

    if (t106 != 24) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int64_t x429 = INT64_MAX;
	uint8_t x430 = 72U;
	static int64_t x431 = -29451409887358814LL;
	uint64_t x432 = 999702LLU;
	static volatile int64_t t107 = INT64_MAX;

    t107 = (x429|(x430==(x431%x432)));

    if (t107 != INT64_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x433 = 5U;
	uint64_t x434 = 18577065LLU;
	int64_t x436 = INT64_MIN;
	volatile uint32_t t108 = 0U;

    t108 = (x433|(x434==(x435%x436)));

    if (t108 != 5U) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = -1LL;
	uint32_t x438 = UINT32_MAX;
	static int8_t x439 = -1;
	int8_t x440 = INT8_MIN;
	volatile int64_t t109 = -6750418529654LL;

    t109 = (x437|(x438==(x439%x440)));

    if (t109 != -1LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = -1;
	volatile int8_t x442 = 11;
	uint64_t x443 = 39782599904211LLU;

    t110 = (x441|(x442==(x443%x444)));

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x445 = 66LLU;
	static uint8_t x446 = 0U;
	int8_t x447 = INT8_MAX;
	static int64_t x448 = INT64_MIN;
	uint64_t t111 = 34750LLU;

    t111 = (x445|(x446==(x447%x448)));

    if (t111 != 66LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x449 = 576938LLU;
	int8_t x450 = INT8_MAX;
	volatile int32_t x451 = INT32_MIN;
	int64_t x452 = 15126LL;
	uint64_t t112 = 59782368315LLU;

    t112 = (x449|(x450==(x451%x452)));

    if (t112 != 576938LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x454 = INT16_MIN;
	static volatile uint16_t x455 = UINT16_MAX;

    t113 = (x453|(x454==(x455%x456)));

    if (t113 != 65535) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x457 = 55U;
	int64_t x458 = 23988793146LL;
	int16_t x459 = INT16_MAX;
	int8_t x460 = INT8_MAX;

    t114 = (x457|(x458==(x459%x460)));

    if (t114 != 55) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x462 = 1;
	uint8_t x464 = UINT8_MAX;
	uint64_t t115 = 1466281386901LLU;

    t115 = (x461|(x462==(x463%x464)));

    if (t115 != 17124643915LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x465 = -227;
	uint8_t x466 = 2U;
	int32_t x467 = -1;
	uint8_t x468 = UINT8_MAX;
	int32_t t116 = -928270833;

    t116 = (x465|(x466==(x467%x468)));

    if (t116 != -227) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = INT32_MIN;
	uint64_t x471 = 445840LLU;
	int64_t x472 = INT64_MIN;
	int32_t t117 = INT32_MIN;

    t117 = (x469|(x470==(x471%x472)));

    if (t117 != INT32_MIN) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x473 = 12LLU;
	int8_t x474 = INT8_MIN;
	static volatile int32_t x475 = -89306;
	int32_t x476 = INT32_MAX;
	volatile uint64_t t118 = 9LLU;

    t118 = (x473|(x474==(x475%x476)));

    if (t118 != 12LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x477 = UINT16_MAX;
	int8_t x478 = INT8_MIN;
	static int64_t x479 = 6331LL;
	int32_t t119 = -11;

    t119 = (x477|(x478==(x479%x480)));

    if (t119 != 65535) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = -1;
	static volatile int32_t x482 = INT32_MAX;
	uint16_t x484 = 16776U;
	volatile int32_t t120 = -103118;

    t120 = (x481|(x482==(x483%x484)));

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = INT64_MAX;
	volatile int64_t x486 = -425373455739550157LL;
	int16_t x487 = INT16_MAX;
	int16_t x488 = INT16_MIN;
	volatile int64_t t121 = INT64_MAX;

    t121 = (x485|(x486==(x487%x488)));

    if (t121 != INT64_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x489 = 62U;
	volatile int32_t x490 = INT32_MAX;
	int8_t x491 = 0;
	static int32_t x492 = INT32_MIN;
	int32_t t122 = -11207;

    t122 = (x489|(x490==(x491%x492)));

    if (t122 != 62) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = INT8_MIN;
	volatile int16_t x494 = INT16_MAX;
	static int8_t x495 = INT8_MIN;
	uint32_t x496 = UINT32_MAX;
	volatile int32_t t123 = 1214;

    t123 = (x493|(x494==(x495%x496)));

    if (t123 != -128) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x497 = 73988958U;
	uint64_t x498 = 5522978LLU;
	uint32_t x499 = UINT32_MAX;
	uint32_t t124 = 407423530U;

    t124 = (x497|(x498==(x499%x500)));

    if (t124 != 73988958U) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = INT64_MIN;
	uint8_t x503 = UINT8_MAX;
	uint8_t x504 = 26U;
	volatile int64_t t125 = INT64_MIN;

    t125 = (x501|(x502==(x503%x504)));

    if (t125 != INT64_MIN) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x505 = UINT32_MAX;
	uint16_t x506 = UINT16_MAX;
	static volatile int8_t x507 = INT8_MIN;
	static uint32_t x508 = UINT32_MAX;
	static volatile uint32_t t126 = UINT32_MAX;

    t126 = (x505|(x506==(x507%x508)));

    if (t126 != UINT32_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = INT16_MAX;
	static uint8_t x510 = 2U;
	volatile int8_t x511 = INT8_MIN;

    t127 = (x509|(x510==(x511%x512)));

    if (t127 != 32767) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = INT8_MAX;
	volatile int64_t x514 = INT64_MIN;
	int8_t x515 = -33;
	volatile int8_t x516 = INT8_MIN;
	int32_t t128 = 1;

    t128 = (x513|(x514==(x515%x516)));

    if (t128 != 127) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x517 = 98U;
	static int16_t x518 = -1;
	uint16_t x519 = 17392U;
	int16_t x520 = INT16_MIN;
	int32_t t129 = 0;

    t129 = (x517|(x518==(x519%x520)));

    if (t129 != 98) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = 95;
	int32_t x522 = INT32_MIN;
	int8_t x523 = 15;
	volatile int16_t x524 = 843;
	volatile int32_t t130 = -878;

    t130 = (x521|(x522==(x523%x524)));

    if (t130 != 95) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x525 = INT32_MIN;
	int16_t x526 = INT16_MIN;
	static int8_t x527 = INT8_MIN;
	int32_t x528 = -1;
	int32_t t131 = INT32_MIN;

    t131 = (x525|(x526==(x527%x528)));

    if (t131 != INT32_MIN) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x529 = UINT16_MAX;
	int64_t x530 = -50349582504119LL;
	uint16_t x531 = 5417U;
	int16_t x532 = 5;
	static volatile int32_t t132 = 1768;

    t132 = (x529|(x530==(x531%x532)));

    if (t132 != 65535) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x533 = INT16_MAX;
	int32_t x534 = -95575;
	int8_t x535 = INT8_MIN;
	uint32_t x536 = 109U;
	volatile int32_t t133 = 1564;

    t133 = (x533|(x534==(x535%x536)));

    if (t133 != 32767) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = INT32_MIN;
	int32_t x538 = 2412;
	static uint8_t x539 = 11U;
	int32_t t134 = INT32_MIN;

    t134 = (x537|(x538==(x539%x540)));

    if (t134 != INT32_MIN) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x544 = -1;
	int64_t t135 = 402LL;

    t135 = (x541|(x542==(x543%x544)));

    if (t135 != -1LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x545 = -5;
	int32_t x547 = INT32_MAX;
	volatile int64_t x548 = -1LL;
	int32_t t136 = -23047;

    t136 = (x545|(x546==(x547%x548)));

    if (t136 != -5) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint64_t x549 = 1630956243376LLU;
	uint32_t x550 = 2U;
	uint64_t x551 = UINT64_MAX;
	static uint32_t x552 = 278663U;
	uint64_t t137 = 4248027LLU;

    t137 = (x549|(x550==(x551%x552)));

    if (t137 != 1630956243376LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x553 = 1U;
	uint32_t x554 = UINT32_MAX;
	static volatile int16_t x555 = INT16_MIN;
	uint64_t x556 = UINT64_MAX;
	static int32_t t138 = -611993793;

    t138 = (x553|(x554==(x555%x556)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = -1;
	volatile uint8_t x559 = 7U;
	uint16_t x560 = 5U;
	static volatile int32_t t139 = -59;

    t139 = (x557|(x558==(x559%x560)));

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint64_t x561 = 344344395892LLU;
	uint64_t x562 = 202740LLU;
	int64_t x563 = INT64_MIN;
	int32_t x564 = INT32_MAX;
	volatile uint64_t t140 = 10543246LLU;

    t140 = (x561|(x562==(x563%x564)));

    if (t140 != 344344395892LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = INT64_MAX;
	int64_t x566 = -6482352870LL;
	int64_t x567 = -1LL;
	static int16_t x568 = -1;

    t141 = (x565|(x566==(x567%x568)));

    if (t141 != INT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = INT8_MAX;
	int32_t t142 = -1;

    t142 = (x569|(x570==(x571%x572)));

    if (t142 != 127) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x574 = 1898U;
	uint16_t x576 = 41U;
	volatile int64_t t143 = 7100846146LL;

    t143 = (x573|(x574==(x575%x576)));

    if (t143 != -1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = -26281997321801LL;
	volatile uint8_t x578 = UINT8_MAX;
	uint16_t x579 = UINT16_MAX;
	static volatile int64_t t144 = -30LL;

    t144 = (x577|(x578==(x579%x580)));

    if (t144 != -26281997321801LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = 837609941519122731LL;
	volatile int16_t x582 = INT16_MIN;
	int64_t x583 = INT64_MIN;
	uint16_t x584 = 13U;
	int64_t t145 = -56916510LL;

    t145 = (x581|(x582==(x583%x584)));

    if (t145 != 837609941519122731LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x586 = -1;
	int64_t x587 = -1LL;
	static int8_t x588 = -1;
	int64_t t146 = -165445991029853LL;

    t146 = (x585|(x586==(x587%x588)));

    if (t146 != 1494153951549898225LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = INT16_MAX;
	static int64_t x590 = INT64_MIN;
	static uint16_t x592 = 95U;

    t147 = (x589|(x590==(x591%x592)));

    if (t147 != 32767) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = INT8_MIN;
	uint64_t x594 = UINT64_MAX;
	volatile uint8_t x595 = 0U;
	int8_t x596 = -1;
	int32_t t148 = 5703108;

    t148 = (x593|(x594==(x595%x596)));

    if (t148 != -128) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = -1;
	int64_t x598 = -1LL;
	int32_t t149 = 1908408;

    t149 = (x597|(x598==(x599%x600)));

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = 500139147;
	volatile uint16_t x602 = UINT16_MAX;
	int64_t x603 = INT64_MIN;
	int16_t x604 = 1;
	volatile int32_t t150 = -159;

    t150 = (x601|(x602==(x603%x604)));

    if (t150 != 500139147) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = INT8_MAX;
	volatile int16_t x606 = INT16_MAX;
	int64_t x608 = -1LL;
	int32_t t151 = 5173469;

    t151 = (x605|(x606==(x607%x608)));

    if (t151 != 127) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x610 = -4;
	static int8_t x611 = INT8_MAX;

    t152 = (x609|(x610==(x611%x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = INT32_MIN;
	int32_t x614 = INT32_MIN;
	uint32_t x615 = UINT32_MAX;
	int32_t t153 = INT32_MIN;

    t153 = (x613|(x614==(x615%x616)));

    if (t153 != INT32_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x617 = INT32_MAX;
	int64_t x618 = INT64_MAX;
	int64_t x619 = INT64_MIN;
	static int64_t x620 = -104LL;
	volatile int32_t t154 = INT32_MAX;

    t154 = (x617|(x618==(x619%x620)));

    if (t154 != INT32_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = INT32_MIN;
	uint64_t x622 = UINT64_MAX;
	int32_t x623 = INT32_MAX;
	int8_t x624 = INT8_MAX;
	static int32_t t155 = INT32_MIN;

    t155 = (x621|(x622==(x623%x624)));

    if (t155 != INT32_MIN) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x626 = UINT8_MAX;
	uint8_t x627 = 56U;
	int64_t t156 = 7146309765125LL;

    t156 = (x625|(x626==(x627%x628)));

    if (t156 != 602625LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x629 = 61U;
	uint32_t x630 = 61U;
	volatile uint8_t x631 = 12U;
	uint64_t x632 = 760666254567LLU;
	uint32_t t157 = 1966422013U;

    t157 = (x629|(x630==(x631%x632)));

    if (t157 != 61U) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = INT8_MIN;
	uint32_t x634 = 10648U;
	int64_t x635 = -1LL;
	int32_t x636 = INT32_MAX;
	static volatile int32_t t158 = -185003315;

    t158 = (x633|(x634==(x635%x636)));

    if (t158 != -128) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = 11130621LL;
	static int32_t x639 = INT32_MAX;
	int8_t x640 = -1;
	static int64_t t159 = -185251LL;

    t159 = (x637|(x638==(x639%x640)));

    if (t159 != 11130621LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int16_t x641 = -445;
	static int64_t x642 = INT64_MAX;
	int32_t x644 = INT32_MIN;
	int32_t t160 = 1306;

    t160 = (x641|(x642==(x643%x644)));

    if (t160 != -445) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x646 = 0U;
	int16_t x647 = INT16_MIN;
	int32_t x648 = INT32_MAX;

    t161 = (x645|(x646==(x647%x648)));

    if (t161 != -10043061053965363LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x652 = INT32_MAX;
	static int64_t t162 = INT64_MIN;

    t162 = (x649|(x650==(x651%x652)));

    if (t162 != INT64_MIN) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = -82409850676614335LL;
	uint8_t x654 = 1U;
	uint64_t x655 = 70697339146789LLU;
	volatile uint32_t x656 = UINT32_MAX;
	int64_t t163 = -297951LL;

    t163 = (x653|(x654==(x655%x656)));

    if (t163 != -82409850676614335LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x657 = 2146U;
	volatile int32_t x658 = INT32_MAX;
	int64_t x659 = INT64_MAX;
	int32_t t164 = -7;

    t164 = (x657|(x658==(x659%x660)));

    if (t164 != 2146) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = INT32_MAX;
	int32_t x663 = -1;
	int32_t x664 = INT32_MAX;
	int32_t t165 = INT32_MAX;

    t165 = (x661|(x662==(x663%x664)));

    if (t165 != INT32_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x666 = INT8_MIN;
	int32_t x667 = -1;
	volatile int8_t x668 = 30;
	volatile int32_t t166 = 278;

    t166 = (x665|(x666==(x667%x668)));

    if (t166 != 63) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x669 = 5537487U;
	int64_t x670 = -691746778939675587LL;
	int8_t x671 = INT8_MIN;
	volatile int8_t x672 = INT8_MIN;
	uint32_t t167 = 16754U;

    t167 = (x669|(x670==(x671%x672)));

    if (t167 != 5537487U) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x673 = INT32_MIN;
	int32_t x674 = -5384;
	volatile uint8_t x675 = 9U;
	uint8_t x676 = 8U;
	static int32_t t168 = INT32_MIN;

    t168 = (x673|(x674==(x675%x676)));

    if (t168 != INT32_MIN) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int32_t x678 = 331904435;
	int16_t x679 = -1;
	uint16_t x680 = 7554U;

    t169 = (x677|(x678==(x679%x680)));

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = INT32_MIN;
	int64_t x682 = -1LL;
	static int16_t x683 = INT16_MIN;
	uint16_t x684 = 5U;
	volatile int32_t t170 = INT32_MIN;

    t170 = (x681|(x682==(x683%x684)));

    if (t170 != INT32_MIN) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x686 = 19;
	int8_t x687 = 0;
	int32_t x688 = -39252724;
	volatile uint32_t t171 = 120U;

    t171 = (x685|(x686==(x687%x688)));

    if (t171 != 131U) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = INT32_MAX;
	volatile int32_t x691 = -87516;
	int8_t x692 = -1;
	int32_t t172 = INT32_MAX;

    t172 = (x689|(x690==(x691%x692)));

    if (t172 != INT32_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x693 = INT8_MIN;
	int32_t x694 = INT32_MIN;
	int16_t x695 = -4792;
	int32_t x696 = -1;
	int32_t t173 = 1483681;

    t173 = (x693|(x694==(x695%x696)));

    if (t173 != -128) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x697 = -72LL;
	volatile int32_t x700 = 1656464;

    t174 = (x697|(x698==(x699%x700)));

    if (t174 != -72LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x702 = 13660U;
	static int32_t x704 = INT32_MAX;
	int32_t t175 = -639;

    t175 = (x701|(x702==(x703%x704)));

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = INT8_MIN;
	int64_t x707 = -1LL;
	volatile int32_t t176 = 802527;

    t176 = (x705|(x706==(x707%x708)));

    if (t176 != -127) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x709 = 1791U;
	int64_t x710 = INT64_MAX;
	volatile uint32_t x712 = 1971305U;
	int32_t t177 = 54842;

    t177 = (x709|(x710==(x711%x712)));

    if (t177 != 1791) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = 0;
	static volatile int64_t x714 = INT64_MIN;
	uint8_t x716 = 7U;
	volatile int32_t t178 = -46390190;

    t178 = (x713|(x714==(x715%x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x717 = INT8_MIN;
	uint16_t x718 = UINT16_MAX;
	int16_t x719 = INT16_MAX;
	int32_t t179 = 74971;

    t179 = (x717|(x718==(x719%x720)));

    if (t179 != -128) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = -1;
	int32_t x722 = -912156;
	volatile int8_t x724 = INT8_MIN;
	int32_t t180 = 12376966;

    t180 = (x721|(x722==(x723%x724)));

    if (t180 != -1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = INT32_MAX;
	int8_t x726 = INT8_MIN;
	int16_t x727 = INT16_MIN;
	static int16_t x728 = INT16_MAX;
	int32_t t181 = INT32_MAX;

    t181 = (x725|(x726==(x727%x728)));

    if (t181 != INT32_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = INT32_MIN;

    t182 = (x729|(x730==(x731%x732)));

    if (t182 != INT32_MIN) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = INT64_MIN;
	int32_t x734 = -1;
	int32_t x735 = -3771290;
	int16_t x736 = 18;
	volatile int64_t t183 = INT64_MIN;

    t183 = (x733|(x734==(x735%x736)));

    if (t183 != INT64_MIN) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x737 = UINT8_MAX;
	int16_t x738 = INT16_MIN;
	int16_t x739 = -1;
	volatile int32_t t184 = -1035016497;

    t184 = (x737|(x738==(x739%x740)));

    if (t184 != 255) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x741 = UINT32_MAX;
	uint16_t x742 = 2014U;
	int64_t x744 = INT64_MIN;

    t185 = (x741|(x742==(x743%x744)));

    if (t185 != UINT32_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x747 = -1;
	static int16_t x748 = INT16_MAX;
	volatile int32_t t186 = -24708928;

    t186 = (x745|(x746==(x747%x748)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = -1;
	volatile int32_t x751 = -697;
	int64_t x752 = -1LL;
	volatile int32_t t187 = -326;

    t187 = (x749|(x750==(x751%x752)));

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = INT32_MIN;
	int32_t x754 = INT32_MAX;
	int8_t x755 = INT8_MIN;
	int64_t x756 = INT64_MAX;

    t188 = (x753|(x754==(x755%x756)));

    if (t188 != INT32_MIN) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = 19;
	int32_t x758 = INT32_MIN;
	static int8_t x759 = INT8_MIN;
	int64_t x760 = -1LL;
	volatile int32_t t189 = 3;

    t189 = (x757|(x758==(x759%x760)));

    if (t189 != 19) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x763 = -18;
	int32_t t190 = 0;

    t190 = (x761|(x762==(x763%x764)));

    if (t190 != -3) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint16_t x766 = 10730U;
	int8_t x767 = INT8_MAX;
	static int32_t x768 = INT32_MIN;
	volatile int32_t t191 = -1027584;

    t191 = (x765|(x766==(x767%x768)));

    if (t191 != 23) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int16_t x769 = INT16_MAX;
	int32_t x770 = -336834;
	volatile int16_t x771 = -1;
	volatile int8_t x772 = INT8_MIN;
	volatile int32_t t192 = 721;

    t192 = (x769|(x770==(x771%x772)));

    if (t192 != 32767) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x773 = 1071891U;
	static uint32_t x774 = 50U;
	uint32_t x776 = 1U;
	volatile uint32_t t193 = 268378602U;

    t193 = (x773|(x774==(x775%x776)));

    if (t193 != 1071891U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x777 = 1U;
	int16_t x780 = INT16_MIN;
	int32_t t194 = 217;

    t194 = (x777|(x778==(x779%x780)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = INT8_MIN;
	volatile uint32_t x782 = 3U;
	int32_t x783 = 2742;
	int32_t x784 = -1;
	static int32_t t195 = -625950437;

    t195 = (x781|(x782==(x783%x784)));

    if (t195 != -128) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x785 = INT64_MAX;
	int64_t x786 = INT64_MAX;
	static int16_t x787 = -5915;
	volatile int32_t x788 = INT32_MIN;
	int64_t t196 = INT64_MAX;

    t196 = (x785|(x786==(x787%x788)));

    if (t196 != INT64_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x789 = -1;
	static volatile int64_t x790 = INT64_MAX;
	int64_t x791 = 127285921011386LL;
	volatile int64_t x792 = INT64_MIN;
	volatile int32_t t197 = -2340;

    t197 = (x789|(x790==(x791%x792)));

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x794 = 769U;
	static int8_t x795 = -14;
	int16_t x796 = -1;
	volatile int32_t t198 = -254944;

    t198 = (x793|(x794==(x795%x796)));

    if (t198 != -128) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x797 = INT16_MAX;
	static uint32_t x798 = UINT32_MAX;
	int8_t x799 = -1;
	int8_t x800 = INT8_MAX;
	int32_t t199 = -3;

    t199 = (x797|(x798==(x799%x800)));

    if (t199 != 32767) { NG(); } else { ; }
	
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

