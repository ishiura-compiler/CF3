
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

volatile int32_t x5 = INT32_MIN;
volatile uint32_t x6 = UINT32_MAX;
int8_t x19 = INT8_MIN;
int32_t t4 = 6;
static uint16_t x21 = 6674U;
uint16_t x25 = UINT16_MAX;
uint16_t x27 = 1U;
static int32_t x36 = INT32_MIN;
int32_t x42 = 934;
int32_t x43 = -10444;
int8_t x51 = -1;
uint16_t x52 = UINT16_MAX;
uint8_t x58 = 82U;
volatile int64_t t14 = 1776248117966605LL;
volatile uint32_t x61 = 11784U;
uint32_t t15 = 27U;
uint64_t x65 = UINT64_MAX;
uint32_t x70 = 53U;
volatile uint16_t x72 = 928U;
int32_t x73 = INT32_MIN;
int8_t x79 = INT8_MAX;
int32_t x80 = INT32_MAX;
static int64_t x82 = INT64_MIN;
int8_t x92 = 2;
int64_t x93 = -449483564330LL;
volatile uint32_t t24 = 495225U;
volatile uint8_t x104 = UINT8_MAX;
uint16_t x110 = 59U;
int32_t x111 = INT32_MIN;
uint32_t x113 = UINT32_MAX;
static uint32_t t28 = 3366U;
uint16_t x120 = 0U;
int16_t x124 = INT16_MIN;
static int16_t x126 = INT16_MAX;
int8_t x128 = INT8_MIN;
int64_t x139 = 252161940187LL;
int16_t x142 = INT16_MAX;
volatile int32_t x143 = INT32_MIN;
volatile uint32_t x144 = 6610U;
uint32_t x152 = UINT32_MAX;
static volatile uint64_t x155 = 45694LLU;
int8_t x156 = 8;
uint8_t x157 = UINT8_MAX;
int32_t x164 = -1;
uint32_t x171 = 13U;
static int32_t t42 = -419387;
int64_t x173 = INT64_MAX;
int8_t x184 = -1;
volatile int32_t t45 = -3480;
static uint32_t x187 = UINT32_MAX;
volatile int64_t x188 = INT64_MIN;
int32_t t46 = 598;
int32_t x190 = 993945102;
int64_t x194 = INT64_MIN;
int32_t x196 = INT32_MIN;
int32_t x197 = 82023714;
volatile int32_t t49 = 5;
uint32_t x203 = 0U;
volatile int64_t x209 = INT64_MAX;
uint32_t x218 = UINT32_MAX;
volatile int64_t t54 = 8346175390056LL;
volatile uint16_t x233 = 28019U;
volatile int32_t x239 = INT32_MAX;
int32_t t59 = 149981395;
static int16_t x245 = INT16_MAX;
volatile int32_t t61 = 0;
static int32_t x250 = INT32_MIN;
static volatile int16_t x257 = -1;
int64_t x261 = -1LL;
volatile int16_t x266 = INT16_MAX;
volatile int32_t t66 = -730159;
volatile int32_t x270 = -435072;
uint32_t x276 = 952791280U;
int8_t x279 = INT8_MIN;
volatile int32_t x280 = -885;
uint8_t x281 = UINT8_MAX;
int16_t x285 = INT16_MIN;
volatile int32_t t71 = 340;
volatile uint64_t x291 = UINT64_MAX;
static int64_t x292 = INT64_MAX;
static int8_t x293 = INT8_MAX;
volatile int64_t x294 = 7134628LL;
static uint32_t x312 = 165128U;
int64_t x321 = 22986289407LL;
int64_t x329 = INT64_MIN;
uint8_t x330 = 26U;
static int16_t x332 = INT16_MIN;
int64_t x338 = INT64_MIN;
static volatile uint32_t x348 = UINT32_MAX;
int64_t x355 = 219LL;
int8_t x364 = -1;
int8_t x365 = INT8_MIN;
int8_t x369 = INT8_MIN;
volatile uint32_t x370 = UINT32_MAX;
static int64_t x371 = INT64_MIN;
volatile int32_t x375 = INT32_MIN;
static uint16_t x376 = UINT16_MAX;
uint8_t x380 = UINT8_MAX;
volatile uint64_t t94 = 5LLU;
uint16_t x384 = UINT16_MAX;
int8_t x404 = -1;
uint64_t x407 = 60349690913077495LLU;
uint8_t x416 = 5U;
uint32_t x420 = 343896181U;
uint32_t x431 = 3677U;
volatile int32_t t107 = 249155;
static volatile int8_t x434 = -1;
int8_t x437 = INT8_MAX;
uint32_t x438 = 19794634U;
int16_t x442 = -1;
int8_t x443 = -1;
int32_t x450 = 137823;
int64_t x451 = 1771297845LL;
int8_t x458 = INT8_MIN;
volatile int32_t t114 = -168837;
volatile int64_t x461 = 2926664LL;
static int32_t x467 = -182;
int64_t x470 = -1LL;
static int16_t x471 = INT16_MIN;
int64_t t117 = 2345199309LL;
static int16_t x476 = -12110;
volatile int32_t t118 = -1;
int16_t x478 = INT16_MIN;
uint32_t x483 = UINT32_MAX;
int16_t x488 = -1;
static uint16_t x499 = 70U;
int32_t t124 = -6;
volatile uint64_t x508 = 6496930043149002166LLU;
uint32_t x513 = 752622277U;
uint8_t x515 = 0U;
int64_t x519 = -1LL;
int32_t t131 = -4721483;
int32_t x531 = INT32_MIN;
volatile int32_t t132 = -117532;
uint16_t x533 = 25343U;
static volatile int16_t x547 = 92;
int16_t x548 = 42;
int64_t x555 = INT64_MIN;
uint16_t x556 = 979U;
int8_t x566 = INT8_MIN;
uint64_t x576 = 44634640707027284LLU;
int16_t x583 = INT16_MIN;
int8_t x589 = INT8_MIN;
volatile int16_t x590 = INT16_MIN;
volatile uint64_t x591 = 1093163LLU;
int32_t t149 = -479;
static int8_t x602 = INT8_MIN;
int32_t x605 = INT32_MIN;
int64_t x608 = INT64_MAX;
volatile uint64_t x614 = 15170209LLU;
int32_t x617 = -1;
volatile int64_t x622 = INT64_MAX;
int32_t t156 = -162;
volatile int8_t x630 = INT8_MIN;
int32_t x636 = -3302;
int16_t x638 = INT16_MIN;
static int8_t x639 = INT8_MIN;
volatile int64_t x650 = INT64_MAX;
uint32_t x655 = UINT32_MAX;
int8_t x656 = -1;
volatile int8_t x657 = INT8_MIN;
int32_t x663 = INT32_MIN;
int64_t t166 = -69994553LL;
volatile uint16_t x669 = UINT16_MAX;
volatile uint32_t x672 = 17U;
uint64_t x677 = 179LLU;
volatile uint64_t t169 = 63864381887637LLU;
static uint32_t x683 = 120471U;
static uint16_t x685 = UINT16_MAX;
static int32_t t171 = 3319068;
uint32_t x697 = 377U;
uint32_t t174 = 1U;
int64_t x704 = INT64_MAX;
int16_t x712 = -14;
volatile int16_t x713 = -13;
uint8_t x724 = 0U;
int16_t x725 = -3126;
int16_t x736 = INT16_MIN;
volatile int32_t t183 = 343426699;
int16_t x741 = -239;
volatile uint8_t x744 = 0U;
volatile int32_t t185 = 1;
int32_t x753 = INT32_MIN;
int8_t x757 = 0;
int16_t x763 = -1;
uint64_t x766 = 5434174572456LLU;
static int64_t x767 = INT64_MAX;
uint16_t x768 = UINT16_MAX;
static volatile uint32_t x772 = 34547U;
int64_t x775 = INT64_MIN;
int32_t t193 = 34779238;
volatile int32_t t194 = 31;
int64_t t195 = 299LL;
uint64_t t196 = 30990449037334991LLU;
uint32_t x795 = UINT32_MAX;
uint32_t x797 = UINT32_MAX;
int8_t x798 = 32;
volatile uint32_t t199 = 15078U;


void f0(void) {
    	static uint32_t x1 = 732730U;
	int64_t x2 = INT64_MAX;
	volatile int64_t x3 = -75766007876566LL;
	int64_t x4 = -2486LL;
	uint32_t t0 = 954678U;

    t0 = (x1*(x2==(x3==x4)));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x7 = 167303036;
	int16_t x8 = -1;
	static volatile int32_t t1 = -5;

    t1 = (x5*(x6==(x7==x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = INT8_MIN;
	int8_t x10 = -1;
	static uint8_t x11 = UINT8_MAX;
	volatile int16_t x12 = -1;
	volatile int32_t t2 = 4641;

    t2 = (x9*(x10==(x11==x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -1;
	uint64_t x14 = 27143573592LLU;
	volatile int32_t x15 = INT32_MIN;
	uint32_t x16 = 11U;
	volatile int32_t t3 = 2453;

    t3 = (x13*(x14==(x15==x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x17 = -1;
	uint64_t x18 = UINT64_MAX;
	uint64_t x20 = UINT64_MAX;

    t4 = (x17*(x18==(x19==x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = 254;
	int8_t x23 = 2;
	int16_t x24 = 276;
	int32_t t5 = -27;

    t5 = (x21*(x22==(x23==x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x26 = 5538U;
	int64_t x28 = INT64_MAX;
	int32_t t6 = -2;

    t6 = (x25*(x26==(x27==x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = 30716LL;
	int64_t x30 = INT64_MAX;
	int64_t x31 = INT64_MIN;
	static int16_t x32 = 0;
	volatile int64_t t7 = 384070370446LL;

    t7 = (x29*(x30==(x31==x32)));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x33 = UINT16_MAX;
	static int32_t x34 = -1;
	int64_t x35 = -14103549LL;
	int32_t t8 = 0;

    t8 = (x33*(x34==(x35==x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = UINT8_MAX;
	static uint8_t x38 = 2U;
	int8_t x39 = INT8_MAX;
	int16_t x40 = INT16_MAX;
	int32_t t9 = 3;

    t9 = (x37*(x38==(x39==x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x41 = INT8_MIN;
	uint64_t x44 = 15610LLU;
	volatile int32_t t10 = 37186337;

    t10 = (x41*(x42==(x43==x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x45 = -1;
	volatile int64_t x46 = 0LL;
	static int16_t x47 = INT16_MAX;
	int32_t x48 = INT32_MIN;
	int32_t t11 = 0;

    t11 = (x45*(x46==(x47==x48)));

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = UINT32_MAX;
	volatile int32_t x50 = INT32_MIN;
	volatile uint32_t t12 = 20221U;

    t12 = (x49*(x50==(x51==x52)));

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint64_t x53 = 422903666145865LLU;
	static uint16_t x54 = UINT16_MAX;
	int64_t x55 = INT64_MIN;
	static uint64_t x56 = UINT64_MAX;
	volatile uint64_t t13 = 251168352LLU;

    t13 = (x53*(x54==(x55==x56)));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = 1972709626514788784LL;
	uint32_t x59 = UINT32_MAX;
	static uint16_t x60 = 15U;

    t14 = (x57*(x58==(x59==x60)));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x62 = INT8_MAX;
	volatile int8_t x63 = -1;
	int64_t x64 = -1LL;

    t15 = (x61*(x62==(x63==x64)));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x66 = INT16_MIN;
	int8_t x67 = INT8_MIN;
	int8_t x68 = INT8_MAX;
	static uint64_t t16 = 198LLU;

    t16 = (x65*(x66==(x67==x68)));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = 234U;
	int8_t x71 = INT8_MAX;
	volatile uint32_t t17 = 1U;

    t17 = (x69*(x70==(x71==x72)));

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint8_t x74 = UINT8_MAX;
	int32_t x75 = INT32_MIN;
	int32_t x76 = -1;
	volatile int32_t t18 = -55908;

    t18 = (x73*(x74==(x75==x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x77 = -1LL;
	int64_t x78 = 7940585LL;
	static int64_t t19 = -4445537605711496LL;

    t19 = (x77*(x78==(x79==x80)));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = INT32_MAX;
	uint64_t x83 = 26034LLU;
	uint64_t x84 = 38519188176LLU;
	volatile int32_t t20 = -425439;

    t20 = (x81*(x82==(x83==x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = INT64_MAX;
	uint8_t x86 = 0U;
	volatile uint64_t x87 = 1171181335497022LLU;
	int8_t x88 = INT8_MAX;
	volatile int64_t t21 = INT64_MAX;

    t21 = (x85*(x86==(x87==x88)));

    if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = 3U;
	volatile int64_t x90 = -262244871LL;
	static int16_t x91 = INT16_MIN;
	static uint32_t t22 = 42420093U;

    t22 = (x89*(x90==(x91==x92)));

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x94 = -360244;
	uint16_t x95 = 2U;
	static int32_t x96 = -965422;
	static volatile int64_t t23 = -1048724717654LL;

    t23 = (x93*(x94==(x95==x96)));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x97 = 401629U;
	int64_t x98 = -231516866LL;
	int64_t x99 = INT64_MAX;
	uint64_t x100 = 4267960029229692995LLU;

    t24 = (x97*(x98==(x99==x100)));

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x101 = INT64_MIN;
	static int16_t x102 = -5;
	int64_t x103 = -1LL;
	static volatile int64_t t25 = -599182075260536LL;

    t25 = (x101*(x102==(x103==x104)));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = INT16_MIN;
	int32_t x106 = -1;
	uint16_t x107 = UINT16_MAX;
	int32_t x108 = -1;
	volatile int32_t t26 = 6;

    t26 = (x105*(x106==(x107==x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x109 = INT16_MIN;
	int32_t x112 = INT32_MIN;
	static int32_t t27 = -145591;

    t27 = (x109*(x110==(x111==x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x114 = UINT16_MAX;
	int8_t x115 = 7;
	volatile uint64_t x116 = UINT64_MAX;

    t28 = (x113*(x114==(x115==x116)));

    if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = INT64_MIN;
	volatile int8_t x118 = -2;
	int16_t x119 = -1;
	volatile int64_t t29 = 315040LL;

    t29 = (x117*(x118==(x119==x120)));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = INT64_MAX;
	uint32_t x122 = UINT32_MAX;
	int32_t x123 = -260998472;
	volatile int64_t t30 = 102998946270458LL;

    t30 = (x121*(x122==(x123==x124)));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = INT64_MIN;
	int16_t x127 = -1;
	volatile int64_t t31 = -85LL;

    t31 = (x125*(x126==(x127==x128)));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = 1;
	volatile int16_t x130 = INT16_MIN;
	volatile uint32_t x131 = 6009U;
	volatile uint16_t x132 = 27U;
	int32_t t32 = 1;

    t32 = (x129*(x130==(x131==x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x133 = INT32_MAX;
	volatile int64_t x134 = -11980302896089LL;
	volatile uint8_t x135 = 3U;
	int8_t x136 = INT8_MIN;
	volatile int32_t t33 = 703884;

    t33 = (x133*(x134==(x135==x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x137 = 1U;
	static int8_t x138 = 0;
	static uint64_t x140 = 6231394943826862LLU;
	int32_t t34 = -735740;

    t34 = (x137*(x138==(x139==x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x141 = UINT64_MAX;
	static uint64_t t35 = 2962252155293717328LLU;

    t35 = (x141*(x142==(x143==x144)));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint8_t x145 = UINT8_MAX;
	volatile int64_t x146 = -1LL;
	volatile int64_t x147 = 844831647942738LL;
	volatile uint64_t x148 = UINT64_MAX;
	static int32_t t36 = -1182163;

    t36 = (x145*(x146==(x147==x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = -428;
	int32_t x150 = -1;
	int16_t x151 = -188;
	int32_t t37 = 20527549;

    t37 = (x149*(x150==(x151==x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x153 = -1LL;
	int8_t x154 = -4;
	static volatile int64_t t38 = -1LL;

    t38 = (x153*(x154==(x155==x156)));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x158 = UINT8_MAX;
	volatile int8_t x159 = -1;
	int16_t x160 = INT16_MIN;
	static volatile int32_t t39 = 1;

    t39 = (x157*(x158==(x159==x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x161 = 5320900420LLU;
	static int32_t x162 = -1141591;
	uint32_t x163 = UINT32_MAX;
	volatile uint64_t t40 = 21024986LLU;

    t40 = (x161*(x162==(x163==x164)));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint8_t x165 = UINT8_MAX;
	int64_t x166 = -1LL;
	static uint8_t x167 = 88U;
	int16_t x168 = INT16_MIN;
	static volatile int32_t t41 = 782;

    t41 = (x165*(x166==(x167==x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x169 = -1;
	uint8_t x170 = 8U;
	uint16_t x172 = 1U;

    t42 = (x169*(x170==(x171==x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x174 = 716U;
	int16_t x175 = -1;
	volatile int64_t x176 = 14737LL;
	int64_t t43 = -8886300259222740LL;

    t43 = (x173*(x174==(x175==x176)));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x177 = INT16_MIN;
	volatile int32_t x178 = INT32_MIN;
	static uint32_t x179 = UINT32_MAX;
	static uint64_t x180 = 430149730LLU;
	volatile int32_t t44 = -464276286;

    t44 = (x177*(x178==(x179==x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = INT8_MIN;
	volatile uint8_t x182 = UINT8_MAX;
	int32_t x183 = INT32_MIN;

    t45 = (x181*(x182==(x183==x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x185 = 0U;
	int64_t x186 = -356452LL;

    t46 = (x185*(x186==(x187==x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = INT16_MIN;
	volatile uint8_t x191 = UINT8_MAX;
	static int64_t x192 = INT64_MIN;
	int32_t t47 = -142680;

    t47 = (x189*(x190==(x191==x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = INT8_MAX;
	int16_t x195 = 5;
	volatile int32_t t48 = -59202395;

    t48 = (x193*(x194==(x195==x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x198 = -920744;
	uint64_t x199 = 18861394LLU;
	uint32_t x200 = 4U;

    t49 = (x197*(x198==(x199==x200)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = -3256970;
	uint64_t x202 = UINT64_MAX;
	volatile uint16_t x204 = UINT16_MAX;
	static volatile int32_t t50 = -8812;

    t50 = (x201*(x202==(x203==x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = INT16_MIN;
	uint32_t x206 = UINT32_MAX;
	int32_t x207 = INT32_MIN;
	int16_t x208 = INT16_MIN;
	static volatile int32_t t51 = -3;

    t51 = (x205*(x206==(x207==x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint32_t x210 = 177U;
	static volatile uint64_t x211 = 62979546LLU;
	uint8_t x212 = UINT8_MAX;
	int64_t t52 = -174339952983694LL;

    t52 = (x209*(x210==(x211==x212)));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = -1;
	int32_t x214 = INT32_MIN;
	volatile int32_t x215 = INT32_MIN;
	uint16_t x216 = 6U;
	static volatile int32_t t53 = 2;

    t53 = (x213*(x214==(x215==x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = INT64_MIN;
	uint64_t x219 = 101547567615386LLU;
	uint64_t x220 = 2LLU;

    t54 = (x217*(x218==(x219==x220)));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = INT8_MAX;
	static int8_t x222 = INT8_MIN;
	int8_t x223 = -1;
	uint8_t x224 = 0U;
	int32_t t55 = 1809;

    t55 = (x221*(x222==(x223==x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = -1;
	uint32_t x226 = 3173727U;
	static int64_t x227 = INT64_MAX;
	volatile int64_t x228 = -58218080406562LL;
	volatile int32_t t56 = -87;

    t56 = (x225*(x226==(x227==x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x229 = -35;
	volatile int8_t x230 = INT8_MIN;
	int64_t x231 = INT64_MIN;
	int16_t x232 = -7;
	volatile int32_t t57 = -3;

    t57 = (x229*(x230==(x231==x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x234 = INT64_MIN;
	int32_t x235 = INT32_MAX;
	int64_t x236 = INT64_MIN;
	volatile int32_t t58 = 353;

    t58 = (x233*(x234==(x235==x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x237 = INT16_MIN;
	uint8_t x238 = 83U;
	uint8_t x240 = 0U;

    t59 = (x237*(x238==(x239==x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = INT64_MIN;
	volatile int16_t x242 = -6;
	static uint8_t x243 = 98U;
	volatile int64_t x244 = -114336620LL;
	volatile int64_t t60 = 545049986054LL;

    t60 = (x241*(x242==(x243==x244)));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x246 = -9372;
	uint64_t x247 = UINT64_MAX;
	int8_t x248 = 0;

    t61 = (x245*(x246==(x247==x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint8_t x249 = UINT8_MAX;
	volatile uint64_t x251 = 19909592506LLU;
	volatile int8_t x252 = INT8_MIN;
	volatile int32_t t62 = -5504941;

    t62 = (x249*(x250==(x251==x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x253 = 0;
	int64_t x254 = -71168LL;
	volatile int64_t x255 = -1LL;
	volatile uint32_t x256 = 72092523U;
	static volatile int32_t t63 = -88240;

    t63 = (x253*(x254==(x255==x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x258 = 5;
	uint16_t x259 = 965U;
	int8_t x260 = 35;
	static int32_t t64 = 27821008;

    t64 = (x257*(x258==(x259==x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x262 = INT8_MIN;
	int32_t x263 = INT32_MAX;
	int16_t x264 = INT16_MIN;
	volatile int64_t t65 = 9051035LL;

    t65 = (x261*(x262==(x263==x264)));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = -10;
	int32_t x267 = 9205755;
	int16_t x268 = 2;

    t66 = (x265*(x266==(x267==x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x269 = -45;
	int64_t x271 = INT64_MIN;
	int8_t x272 = -1;
	volatile int32_t t67 = -1664;

    t67 = (x269*(x270==(x271==x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = INT16_MIN;
	static int32_t x274 = 358331;
	int64_t x275 = INT64_MAX;
	volatile int32_t t68 = -7768259;

    t68 = (x273*(x274==(x275==x276)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = -1;
	int8_t x278 = INT8_MAX;
	volatile int32_t t69 = 2232208;

    t69 = (x277*(x278==(x279==x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x282 = INT16_MIN;
	uint64_t x283 = 2791735952642126LLU;
	int64_t x284 = -419436720841LL;
	volatile int32_t t70 = -344;

    t70 = (x281*(x282==(x283==x284)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x286 = INT64_MAX;
	static int8_t x287 = 11;
	int64_t x288 = INT64_MAX;

    t71 = (x285*(x286==(x287==x288)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile uint8_t x289 = 1U;
	static int16_t x290 = 4;
	int32_t t72 = -41234592;

    t72 = (x289*(x290==(x291==x292)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x295 = 859U;
	uint32_t x296 = UINT32_MAX;
	volatile int32_t t73 = -515482550;

    t73 = (x293*(x294==(x295==x296)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x297 = -543929142;
	volatile int8_t x298 = INT8_MAX;
	static uint64_t x299 = 438LLU;
	static volatile int16_t x300 = -1;
	static int32_t t74 = 5607;

    t74 = (x297*(x298==(x299==x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = INT64_MAX;
	int16_t x302 = INT16_MIN;
	int16_t x303 = -8991;
	static volatile int64_t x304 = INT64_MAX;
	static volatile int64_t t75 = -5784LL;

    t75 = (x301*(x302==(x303==x304)));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x305 = -1;
	int16_t x306 = INT16_MIN;
	static int32_t x307 = INT32_MIN;
	volatile int32_t x308 = INT32_MIN;
	int32_t t76 = 1;

    t76 = (x305*(x306==(x307==x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x309 = 54U;
	int64_t x310 = 10163925LL;
	static volatile int32_t x311 = INT32_MIN;
	static volatile int32_t t77 = -128;

    t77 = (x309*(x310==(x311==x312)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x313 = 60LL;
	uint8_t x314 = UINT8_MAX;
	int8_t x315 = 1;
	uint16_t x316 = UINT16_MAX;
	volatile int64_t t78 = -26288549466514LL;

    t78 = (x313*(x314==(x315==x316)));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x317 = 25LL;
	volatile int64_t x318 = -1LL;
	static int32_t x319 = -1;
	volatile int32_t x320 = INT32_MIN;
	static volatile int64_t t79 = 0LL;

    t79 = (x317*(x318==(x319==x320)));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x322 = -1;
	volatile uint64_t x323 = UINT64_MAX;
	volatile uint16_t x324 = 1U;
	static int64_t t80 = 700989641750921932LL;

    t80 = (x321*(x322==(x323==x324)));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int32_t x325 = 35800;
	uint16_t x326 = 1U;
	uint32_t x327 = UINT32_MAX;
	int64_t x328 = 54446768038429LL;
	int32_t t81 = -607;

    t81 = (x325*(x326==(x327==x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x331 = UINT32_MAX;
	volatile int64_t t82 = 1423541102LL;

    t82 = (x329*(x330==(x331==x332)));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x333 = INT64_MAX;
	int64_t x334 = -24163LL;
	int64_t x335 = INT64_MIN;
	int64_t x336 = INT64_MIN;
	static volatile int64_t t83 = -4170177629562LL;

    t83 = (x333*(x334==(x335==x336)));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = INT8_MAX;
	uint64_t x339 = 1891LLU;
	volatile int32_t x340 = INT32_MIN;
	volatile int32_t t84 = 2;

    t84 = (x337*(x338==(x339==x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x341 = 31U;
	int16_t x342 = INT16_MIN;
	static int8_t x343 = -1;
	volatile uint64_t x344 = 15686250LLU;
	static int32_t t85 = 40081;

    t85 = (x341*(x342==(x343==x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = INT8_MAX;
	uint32_t x346 = UINT32_MAX;
	volatile uint8_t x347 = 84U;
	static int32_t t86 = 3;

    t86 = (x345*(x346==(x347==x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x349 = UINT8_MAX;
	volatile int16_t x350 = 572;
	uint8_t x351 = UINT8_MAX;
	int8_t x352 = INT8_MAX;
	volatile int32_t t87 = -49410;

    t87 = (x349*(x350==(x351==x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = -1LL;
	int16_t x354 = -1;
	int16_t x356 = -2724;
	volatile int64_t t88 = -25057937LL;

    t88 = (x353*(x354==(x355==x356)));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = INT32_MAX;
	static int64_t x358 = 8375050430697395LL;
	int32_t x359 = INT32_MIN;
	static int8_t x360 = -1;
	int32_t t89 = 50359;

    t89 = (x357*(x358==(x359==x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x361 = -1LL;
	volatile int32_t x362 = INT32_MIN;
	int16_t x363 = INT16_MIN;
	int64_t t90 = -27LL;

    t90 = (x361*(x362==(x363==x364)));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x366 = INT8_MIN;
	static int64_t x367 = -1LL;
	volatile int16_t x368 = 0;
	volatile int32_t t91 = 501315;

    t91 = (x365*(x366==(x367==x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x372 = INT64_MIN;
	int32_t t92 = 18645482;

    t92 = (x369*(x370==(x371==x372)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint16_t x373 = 48U;
	int64_t x374 = -1LL;
	volatile int32_t t93 = 0;

    t93 = (x373*(x374==(x375==x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x377 = 1086697816981162LLU;
	uint32_t x378 = 124502U;
	volatile int16_t x379 = -1;

    t94 = (x377*(x378==(x379==x380)));

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x381 = -1;
	static uint16_t x382 = 6U;
	static int8_t x383 = INT8_MIN;
	int32_t t95 = -875;

    t95 = (x381*(x382==(x383==x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x385 = 13;
	int16_t x386 = INT16_MIN;
	volatile int16_t x387 = INT16_MAX;
	uint64_t x388 = 2186522223387340772LLU;
	volatile int32_t t96 = 453;

    t96 = (x385*(x386==(x387==x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x389 = 64382U;
	static int8_t x390 = INT8_MIN;
	static int16_t x391 = -1;
	volatile uint16_t x392 = UINT16_MAX;
	static uint32_t t97 = 63026481U;

    t97 = (x389*(x390==(x391==x392)));

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x393 = 59U;
	int64_t x394 = INT64_MIN;
	uint32_t x395 = 1897U;
	int8_t x396 = INT8_MIN;
	static int32_t t98 = -4528;

    t98 = (x393*(x394==(x395==x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = INT32_MIN;
	volatile uint16_t x398 = UINT16_MAX;
	uint64_t x399 = UINT64_MAX;
	volatile int16_t x400 = INT16_MIN;
	int32_t t99 = 10;

    t99 = (x397*(x398==(x399==x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = INT16_MIN;
	int32_t x402 = INT32_MIN;
	static volatile uint8_t x403 = UINT8_MAX;
	int32_t t100 = -24802824;

    t100 = (x401*(x402==(x403==x404)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = 739;
	static uint64_t x406 = UINT64_MAX;
	int8_t x408 = 2;
	int32_t t101 = -494469013;

    t101 = (x405*(x406==(x407==x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x409 = 2179814U;
	int64_t x410 = -1LL;
	int16_t x411 = -1;
	uint64_t x412 = 227094LLU;
	volatile uint32_t t102 = 2091774U;

    t102 = (x409*(x410==(x411==x412)));

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = -394;
	volatile int16_t x414 = INT16_MIN;
	int32_t x415 = 392708;
	int32_t t103 = -133742295;

    t103 = (x413*(x414==(x415==x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x417 = 59646320052185639LLU;
	int8_t x418 = INT8_MIN;
	volatile int16_t x419 = 1793;
	volatile uint64_t t104 = 457692LLU;

    t104 = (x417*(x418==(x419==x420)));

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x421 = -1789198;
	static volatile int64_t x422 = -1LL;
	int16_t x423 = -1;
	uint16_t x424 = 7475U;
	int32_t t105 = -779;

    t105 = (x421*(x422==(x423==x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x425 = INT32_MIN;
	int16_t x426 = INT16_MAX;
	int32_t x427 = -1;
	static uint64_t x428 = 118781010411LLU;
	int32_t t106 = -269997956;

    t106 = (x425*(x426==(x427==x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = -240;
	static int32_t x430 = INT32_MAX;
	uint32_t x432 = 2U;

    t107 = (x429*(x430==(x431==x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = -28;
	int8_t x435 = INT8_MAX;
	int8_t x436 = INT8_MIN;
	static volatile int32_t t108 = -590;

    t108 = (x433*(x434==(x435==x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x439 = 3;
	volatile uint16_t x440 = 1625U;
	static int32_t t109 = 3;

    t109 = (x437*(x438==(x439==x440)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x441 = 18U;
	int64_t x444 = -213795908LL;
	volatile int32_t t110 = -29;

    t110 = (x441*(x442==(x443==x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = INT64_MIN;
	int16_t x446 = INT16_MIN;
	static int64_t x447 = INT64_MAX;
	int32_t x448 = INT32_MAX;
	static volatile int64_t t111 = 776525424788LL;

    t111 = (x445*(x446==(x447==x448)));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = -1;
	int32_t x452 = 720789;
	int32_t t112 = -14;

    t112 = (x449*(x450==(x451==x452)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x453 = -1LL;
	uint32_t x454 = 1506874U;
	int32_t x455 = -1331999;
	int32_t x456 = INT32_MIN;
	volatile int64_t t113 = 183790534050LL;

    t113 = (x453*(x454==(x455==x456)));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = INT16_MIN;
	volatile int8_t x459 = INT8_MAX;
	int64_t x460 = INT64_MIN;

    t114 = (x457*(x458==(x459==x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x462 = 51U;
	static volatile uint16_t x463 = 6U;
	int64_t x464 = -2LL;
	volatile int64_t t115 = 64723044045345345LL;

    t115 = (x461*(x462==(x463==x464)));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = -65996491991LL;
	int64_t x466 = -25LL;
	int16_t x468 = 1;
	static volatile int64_t t116 = -4LL;

    t116 = (x465*(x466==(x467==x468)));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = INT64_MIN;
	uint16_t x472 = 931U;

    t117 = (x469*(x470==(x471==x472)));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x473 = UINT16_MAX;
	uint16_t x474 = 94U;
	uint16_t x475 = UINT16_MAX;

    t118 = (x473*(x474==(x475==x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = -30636996;
	static uint32_t x479 = 160U;
	static int32_t x480 = -1;
	volatile int32_t t119 = 5593002;

    t119 = (x477*(x478==(x479==x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x481 = INT8_MIN;
	int32_t x482 = INT32_MAX;
	int8_t x484 = INT8_MIN;
	volatile int32_t t120 = -5;

    t120 = (x481*(x482==(x483==x484)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x485 = 18918U;
	int32_t x486 = INT32_MIN;
	uint8_t x487 = UINT8_MAX;
	uint32_t t121 = 9707407U;

    t121 = (x485*(x486==(x487==x488)));

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x489 = INT8_MAX;
	uint8_t x490 = 39U;
	uint64_t x491 = UINT64_MAX;
	uint8_t x492 = 44U;
	int32_t t122 = 0;

    t122 = (x489*(x490==(x491==x492)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = -1;
	static int16_t x494 = INT16_MAX;
	uint16_t x495 = 1U;
	int64_t x496 = -1LL;
	volatile int32_t t123 = 376321366;

    t123 = (x493*(x494==(x495==x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x497 = UINT8_MAX;
	int64_t x498 = INT64_MIN;
	static int8_t x500 = -1;

    t124 = (x497*(x498==(x499==x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = INT32_MIN;
	volatile int64_t x502 = -1LL;
	static int8_t x503 = INT8_MIN;
	int64_t x504 = INT64_MIN;
	volatile int32_t t125 = -2299883;

    t125 = (x501*(x502==(x503==x504)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = INT8_MIN;
	uint16_t x506 = 1U;
	uint8_t x507 = 1U;
	int32_t t126 = -11805;

    t126 = (x505*(x506==(x507==x508)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x509 = 4382207752095884LL;
	int8_t x510 = -3;
	int8_t x511 = INT8_MIN;
	static int64_t x512 = -50359389314LL;
	int64_t t127 = 100826087LL;

    t127 = (x509*(x510==(x511==x512)));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x514 = UINT64_MAX;
	uint64_t x516 = UINT64_MAX;
	uint32_t t128 = 934U;

    t128 = (x513*(x514==(x515==x516)));

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x517 = 0U;
	volatile int16_t x518 = -1;
	int16_t x520 = 0;
	static volatile int32_t t129 = -65150;

    t129 = (x517*(x518==(x519==x520)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int64_t x521 = 228LL;
	uint32_t x522 = 79096U;
	uint32_t x523 = UINT32_MAX;
	uint32_t x524 = 0U;
	int64_t t130 = -301160220659LL;

    t130 = (x521*(x522==(x523==x524)));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x525 = 22U;
	volatile int8_t x526 = 44;
	static int64_t x527 = -4714284812877LL;
	volatile int8_t x528 = -1;

    t131 = (x525*(x526==(x527==x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x529 = -1;
	int32_t x530 = 12;
	volatile int64_t x532 = 165627775762005397LL;

    t132 = (x529*(x530==(x531==x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x534 = INT16_MIN;
	int32_t x535 = INT32_MIN;
	static int16_t x536 = -1;
	int32_t t133 = -2529047;

    t133 = (x533*(x534==(x535==x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = INT64_MIN;
	int16_t x538 = INT16_MIN;
	static volatile int8_t x539 = -1;
	static int64_t x540 = INT64_MIN;
	int64_t t134 = -1LL;

    t134 = (x537*(x538==(x539==x540)));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x541 = 0U;
	uint64_t x542 = 756649890LLU;
	uint64_t x543 = 3354264419487758LLU;
	int32_t x544 = INT32_MIN;
	volatile int32_t t135 = 1583;

    t135 = (x541*(x542==(x543==x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x545 = 0;
	int16_t x546 = INT16_MIN;
	static volatile int32_t t136 = -60;

    t136 = (x545*(x546==(x547==x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint32_t x549 = UINT32_MAX;
	uint32_t x550 = 19935946U;
	uint8_t x551 = UINT8_MAX;
	int8_t x552 = 0;
	uint32_t t137 = 30300163U;

    t137 = (x549*(x550==(x551==x552)));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = -1;
	int64_t x554 = INT64_MIN;
	int32_t t138 = 25845;

    t138 = (x553*(x554==(x555==x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x557 = 203304;
	uint8_t x558 = UINT8_MAX;
	volatile int64_t x559 = INT64_MAX;
	int32_t x560 = INT32_MAX;
	static int32_t t139 = 221817;

    t139 = (x557*(x558==(x559==x560)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint16_t x561 = 450U;
	static uint16_t x562 = UINT16_MAX;
	static int64_t x563 = -6082079434LL;
	int16_t x564 = -10;
	static volatile int32_t t140 = -293276833;

    t140 = (x561*(x562==(x563==x564)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x565 = UINT64_MAX;
	int8_t x567 = -1;
	int64_t x568 = INT64_MIN;
	volatile uint64_t t141 = 3905434843379LLU;

    t141 = (x565*(x566==(x567==x568)));

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = INT64_MAX;
	int16_t x570 = INT16_MIN;
	int64_t x571 = INT64_MAX;
	int8_t x572 = 0;
	static volatile int64_t t142 = 191LL;

    t142 = (x569*(x570==(x571==x572)));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = 2383;
	uint8_t x574 = 0U;
	static uint32_t x575 = 16486983U;
	volatile int32_t t143 = -1;

    t143 = (x573*(x574==(x575==x576)));

    if (t143 != 2383) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x577 = UINT8_MAX;
	uint8_t x578 = 29U;
	static uint64_t x579 = 7023918043LLU;
	int64_t x580 = -164LL;
	volatile int32_t t144 = -109;

    t144 = (x577*(x578==(x579==x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = INT64_MIN;
	int8_t x582 = -4;
	int8_t x584 = 4;
	volatile int64_t t145 = 70480878636404LL;

    t145 = (x581*(x582==(x583==x584)));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = -142985;
	uint16_t x586 = 15U;
	uint16_t x587 = 19U;
	static int32_t x588 = INT32_MIN;
	int32_t t146 = -1569;

    t146 = (x585*(x586==(x587==x588)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x592 = INT32_MIN;
	int32_t t147 = 66012438;

    t147 = (x589*(x590==(x591==x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x593 = 30310473753LLU;
	uint8_t x594 = 65U;
	uint32_t x595 = 164727649U;
	static uint64_t x596 = UINT64_MAX;
	volatile uint64_t t148 = 3LLU;

    t148 = (x593*(x594==(x595==x596)));

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x597 = 38U;
	static uint64_t x598 = 161782193LLU;
	volatile int64_t x599 = -2029879LL;
	int64_t x600 = INT64_MIN;

    t149 = (x597*(x598==(x599==x600)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = INT16_MIN;
	int32_t x603 = INT32_MIN;
	int64_t x604 = -1LL;
	static int32_t t150 = -4;

    t150 = (x601*(x602==(x603==x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x606 = INT64_MIN;
	int8_t x607 = -1;
	static volatile int32_t t151 = 78200794;

    t151 = (x605*(x606==(x607==x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = INT16_MIN;
	static int8_t x610 = INT8_MAX;
	volatile int8_t x611 = INT8_MAX;
	int16_t x612 = -1;
	static int32_t t152 = -40;

    t152 = (x609*(x610==(x611==x612)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x613 = 747;
	int16_t x615 = INT16_MIN;
	int8_t x616 = -1;
	volatile int32_t t153 = -22501;

    t153 = (x613*(x614==(x615==x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x618 = -1;
	static int8_t x619 = 2;
	int64_t x620 = INT64_MAX;
	int32_t t154 = 2;

    t154 = (x617*(x618==(x619==x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = INT8_MIN;
	uint64_t x623 = 52677635644LLU;
	int32_t x624 = INT32_MAX;
	volatile int32_t t155 = -7296076;

    t155 = (x621*(x622==(x623==x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = -27;
	int32_t x626 = -30059;
	int64_t x627 = INT64_MIN;
	volatile uint64_t x628 = 537113242345LLU;

    t156 = (x625*(x626==(x627==x628)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint64_t x629 = 28377996LLU;
	int16_t x631 = INT16_MAX;
	static int32_t x632 = -41;
	volatile uint64_t t157 = 0LLU;

    t157 = (x629*(x630==(x631==x632)));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = -1;
	volatile int16_t x634 = -1;
	static uint64_t x635 = 32831048547LLU;
	int32_t t158 = -20621;

    t158 = (x633*(x634==(x635==x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = INT16_MIN;
	static int64_t x640 = INT64_MAX;
	volatile int32_t t159 = -24977555;

    t159 = (x637*(x638==(x639==x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = -1771688469363529LL;
	int16_t x642 = -1;
	uint32_t x643 = UINT32_MAX;
	static int64_t x644 = INT64_MIN;
	volatile int64_t t160 = -13193326814LL;

    t160 = (x641*(x642==(x643==x644)));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint32_t x645 = UINT32_MAX;
	static uint16_t x646 = 2U;
	volatile int16_t x647 = 1506;
	int64_t x648 = INT64_MIN;
	static volatile uint32_t t161 = 1691303522U;

    t161 = (x645*(x646==(x647==x648)));

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x649 = -123;
	int16_t x651 = -1;
	uint16_t x652 = 14783U;
	volatile int32_t t162 = 1650283;

    t162 = (x649*(x650==(x651==x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = INT32_MIN;
	volatile int64_t x654 = INT64_MAX;
	static volatile int32_t t163 = 23;

    t163 = (x653*(x654==(x655==x656)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x658 = 17U;
	volatile uint8_t x659 = 0U;
	int32_t x660 = -1;
	int32_t t164 = -116330;

    t164 = (x657*(x658==(x659==x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x661 = INT8_MAX;
	int8_t x662 = -34;
	int64_t x664 = 850012017LL;
	volatile int32_t t165 = -33339496;

    t165 = (x661*(x662==(x663==x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x665 = -3211141521LL;
	static uint64_t x666 = 202752132LLU;
	uint16_t x667 = 1003U;
	uint8_t x668 = 0U;

    t166 = (x665*(x666==(x667==x668)));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x670 = UINT64_MAX;
	volatile uint64_t x671 = UINT64_MAX;
	int32_t t167 = 470336899;

    t167 = (x669*(x670==(x671==x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = -1LL;
	volatile uint8_t x674 = 0U;
	int16_t x675 = 2276;
	int32_t x676 = INT32_MIN;
	static int64_t t168 = -14725675776012LL;

    t168 = (x673*(x674==(x675==x676)));

    if (t168 != -1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x678 = -1;
	uint8_t x679 = 73U;
	uint32_t x680 = 612804U;

    t169 = (x677*(x678==(x679==x680)));

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = 16;
	int8_t x682 = -1;
	int32_t x684 = INT32_MAX;
	int32_t t170 = -1;

    t170 = (x681*(x682==(x683==x684)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x686 = -1;
	uint8_t x687 = 1U;
	static volatile uint32_t x688 = 1933156259U;

    t171 = (x685*(x686==(x687==x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x689 = INT8_MIN;
	int8_t x690 = -1;
	int32_t x691 = 274621636;
	uint16_t x692 = 455U;
	volatile int32_t t172 = 159080;

    t172 = (x689*(x690==(x691==x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x693 = INT8_MAX;
	volatile int64_t x694 = -1LL;
	static int8_t x695 = INT8_MAX;
	int16_t x696 = INT16_MAX;
	int32_t t173 = -14;

    t173 = (x693*(x694==(x695==x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x698 = -1;
	int64_t x699 = -1LL;
	volatile uint64_t x700 = 1959LLU;

    t174 = (x697*(x698==(x699==x700)));

    if (t174 != 0U) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = -1;
	int64_t x702 = INT64_MIN;
	static volatile int16_t x703 = -13885;
	int32_t t175 = 3008904;

    t175 = (x701*(x702==(x703==x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x705 = INT32_MIN;
	int8_t x706 = INT8_MIN;
	int16_t x707 = INT16_MIN;
	int64_t x708 = INT64_MIN;
	volatile int32_t t176 = 32;

    t176 = (x705*(x706==(x707==x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = INT16_MIN;
	int64_t x710 = -10907806722LL;
	static int64_t x711 = -1LL;
	volatile int32_t t177 = -1;

    t177 = (x709*(x710==(x711==x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x714 = 12U;
	static uint16_t x715 = 551U;
	static int8_t x716 = INT8_MIN;
	volatile int32_t t178 = 141609326;

    t178 = (x713*(x714==(x715==x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x717 = UINT32_MAX;
	uint64_t x718 = 4LLU;
	int16_t x719 = -59;
	volatile int8_t x720 = INT8_MAX;
	uint32_t t179 = 14U;

    t179 = (x717*(x718==(x719==x720)));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x721 = UINT8_MAX;
	uint8_t x722 = 0U;
	static int32_t x723 = -394208;
	int32_t t180 = -18;

    t180 = (x721*(x722==(x723==x724)));

    if (t180 != 255) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x726 = INT32_MIN;
	volatile int64_t x727 = INT64_MIN;
	int64_t x728 = INT64_MAX;
	static int32_t t181 = 149;

    t181 = (x725*(x726==(x727==x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = INT8_MIN;
	int32_t x730 = 719894023;
	int32_t x731 = INT32_MIN;
	int64_t x732 = INT64_MAX;
	static volatile int32_t t182 = 205297384;

    t182 = (x729*(x730==(x731==x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x733 = 38;
	uint32_t x734 = 1249510U;
	int8_t x735 = INT8_MIN;

    t183 = (x733*(x734==(x735==x736)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = -1;
	int8_t x738 = INT8_MIN;
	int32_t x739 = -1;
	uint32_t x740 = 13338575U;
	static int32_t t184 = 1;

    t184 = (x737*(x738==(x739==x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x742 = INT16_MIN;
	int64_t x743 = -1LL;

    t185 = (x741*(x742==(x743==x744)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x745 = 39163025102LL;
	int16_t x746 = -1;
	int8_t x747 = 50;
	int32_t x748 = INT32_MAX;
	volatile int64_t t186 = 10LL;

    t186 = (x745*(x746==(x747==x748)));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x749 = INT8_MIN;
	int32_t x750 = 4826044;
	int64_t x751 = -1LL;
	volatile int64_t x752 = INT64_MAX;
	volatile int32_t t187 = -7;

    t187 = (x749*(x750==(x751==x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x754 = 17112U;
	volatile uint8_t x755 = 21U;
	uint64_t x756 = 27103LLU;
	int32_t t188 = -820;

    t188 = (x753*(x754==(x755==x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x758 = -1;
	int64_t x759 = -453760004963883LL;
	uint32_t x760 = 22790562U;
	volatile int32_t t189 = -178544;

    t189 = (x757*(x758==(x759==x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = -1;
	volatile uint32_t x762 = UINT32_MAX;
	int64_t x764 = INT64_MIN;
	volatile int32_t t190 = -7702615;

    t190 = (x761*(x762==(x763==x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = INT8_MIN;
	int32_t t191 = -1729;

    t191 = (x765*(x766==(x767==x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x769 = 396722LL;
	int8_t x770 = INT8_MIN;
	static uint8_t x771 = 1U;
	volatile int64_t t192 = -3235263892874LL;

    t192 = (x769*(x770==(x771==x772)));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x773 = -2;
	static uint8_t x774 = 39U;
	volatile int8_t x776 = INT8_MAX;

    t193 = (x773*(x774==(x775==x776)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = INT16_MAX;
	int8_t x778 = INT8_MIN;
	int64_t x779 = INT64_MIN;
	int8_t x780 = -1;

    t194 = (x777*(x778==(x779==x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = INT64_MIN;
	int16_t x782 = INT16_MIN;
	uint64_t x783 = 5274766361383LLU;
	volatile uint16_t x784 = 117U;

    t195 = (x781*(x782==(x783==x784)));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x785 = 7452927935371LLU;
	volatile int16_t x786 = 9;
	int16_t x787 = 1416;
	volatile int8_t x788 = INT8_MAX;

    t196 = (x785*(x786==(x787==x788)));

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = INT16_MAX;
	int32_t x790 = INT32_MIN;
	uint8_t x791 = UINT8_MAX;
	static int32_t x792 = INT32_MIN;
	static int32_t t197 = -26423;

    t197 = (x789*(x790==(x791==x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x793 = INT16_MIN;
	uint8_t x794 = 9U;
	uint32_t x796 = 309U;
	volatile int32_t t198 = 67616;

    t198 = (x793*(x794==(x795==x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint32_t x799 = 56952U;
	volatile int16_t x800 = INT16_MAX;

    t199 = (x797*(x798==(x799==x800)));

    if (t199 != 0U) { NG(); } else { ; }
	
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

