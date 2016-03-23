
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

static volatile int8_t x5 = 30;
volatile int32_t t1 = -1620;
static volatile int32_t x20 = -1;
uint32_t x36 = 2632841U;
uint32_t x40 = 29619157U;
uint16_t x43 = 1444U;
volatile int32_t x45 = INT32_MIN;
int8_t x52 = INT8_MIN;
static int32_t t10 = 440;
int8_t x56 = -5;
uint32_t x64 = UINT32_MAX;
int32_t t13 = -26501;
int8_t x66 = -1;
int64_t x68 = -76272190556587245LL;
int32_t t15 = -1901195;
uint64_t x97 = UINT64_MAX;
static int8_t x100 = INT8_MIN;
int32_t t18 = -3;
uint32_t x110 = 730U;
static int32_t x111 = -3;
uint8_t x116 = 2U;
int16_t x125 = INT16_MIN;
int32_t x129 = -357083684;
static int32_t x130 = 772862663;
volatile int32_t x139 = INT32_MIN;
uint32_t x148 = 13101754U;
uint32_t x159 = UINT32_MAX;
volatile int32_t t30 = -362605;
int8_t x171 = INT8_MIN;
int64_t x173 = INT64_MAX;
static volatile int32_t x175 = -106968558;
volatile uint64_t x176 = 805115LLU;
uint32_t x179 = 373878U;
int32_t x182 = -1;
int8_t x207 = INT8_MIN;
int16_t x212 = INT16_MAX;
uint64_t x214 = 280397020634072162LLU;
uint16_t x218 = UINT16_MAX;
int16_t x222 = INT16_MIN;
volatile int64_t x223 = -34798923839LL;
static int32_t t43 = -1151;
int8_t x235 = INT8_MIN;
int16_t x237 = INT16_MAX;
int8_t x240 = -1;
int64_t x242 = INT64_MAX;
static int8_t x252 = INT8_MIN;
volatile int64_t x276 = -727685LL;
int32_t t52 = -14539344;
int64_t x282 = -5444LL;
volatile int32_t t55 = 923;
uint16_t x290 = UINT16_MAX;
int32_t t57 = -1045;
volatile int8_t x301 = 28;
uint64_t x302 = 4LLU;
int16_t x304 = -1;
static int32_t x308 = -1;
volatile int32_t t59 = -6;
static int8_t x316 = INT8_MAX;
volatile int32_t t62 = -440667;
volatile int8_t x321 = INT8_MIN;
static volatile int32_t x327 = INT32_MIN;
static uint16_t x331 = 5861U;
int32_t x333 = -395;
int64_t x338 = INT64_MAX;
int8_t x339 = 1;
static int32_t x340 = INT32_MIN;
volatile int32_t t67 = 845;
int64_t x351 = 7938744749247LL;
int8_t x367 = INT8_MIN;
int32_t t73 = -46834436;
static int64_t x377 = INT64_MAX;
static volatile int32_t t76 = 356222;
volatile uint8_t x388 = UINT8_MAX;
static volatile int32_t t77 = 78;
uint32_t x394 = 513383U;
static int8_t x396 = 4;
int32_t t79 = -11587271;
volatile int8_t x399 = INT8_MIN;
int32_t t81 = -4309210;
uint8_t x414 = 4U;
volatile int16_t x416 = INT16_MAX;
volatile int32_t t82 = 2;
int32_t t84 = 4484;
int8_t x436 = INT8_MAX;
uint8_t x440 = UINT8_MAX;
static int64_t x453 = INT64_MAX;
int8_t x454 = INT8_MAX;
volatile uint16_t x456 = 4U;
int64_t x465 = INT64_MIN;
volatile int64_t x468 = 17426LL;
static int32_t x473 = INT32_MIN;
uint8_t x474 = UINT8_MAX;
int32_t x475 = 5741;
int16_t x476 = INT16_MIN;
static int32_t x485 = -6;
static volatile uint16_t x486 = 745U;
int32_t x487 = 23757;
uint16_t x497 = UINT16_MAX;
int64_t x498 = -1LL;
static int8_t x499 = 1;
int16_t x502 = -62;
int16_t x507 = INT16_MIN;
uint8_t x522 = 7U;
int32_t t103 = -31092;
int32_t x527 = INT32_MIN;
volatile int16_t x532 = -5;
static uint16_t x553 = 90U;
static volatile int32_t x557 = 8340788;
uint32_t x558 = UINT32_MAX;
uint64_t x560 = 1944LLU;
uint32_t x561 = 22064U;
static uint8_t x569 = 2U;
volatile int8_t x571 = INT8_MIN;
static uint32_t x588 = 261U;
volatile int32_t t117 = 28;
static volatile int64_t x591 = INT64_MAX;
static int32_t x594 = INT32_MAX;
static int8_t x597 = INT8_MAX;
int32_t x616 = 31378;
volatile uint64_t x617 = UINT64_MAX;
int16_t x619 = INT16_MIN;
int32_t t125 = -90522425;
volatile int32_t t126 = -3;
volatile int8_t x634 = 1;
int64_t x640 = INT64_MIN;
int32_t t128 = 13;
int64_t x643 = -3532571LL;
int8_t x652 = INT8_MIN;
static uint16_t x656 = UINT16_MAX;
int32_t x673 = INT32_MIN;
volatile int32_t t133 = -5434685;
volatile int32_t x681 = INT32_MIN;
uint32_t x684 = 7U;
static int32_t t139 = 1;
uint8_t x709 = UINT8_MAX;
volatile int32_t t141 = 32257;
int16_t x713 = 0;
volatile int32_t t142 = 188101998;
volatile int8_t x719 = -1;
int32_t t143 = 89;
int16_t x724 = INT16_MIN;
int16_t x734 = INT16_MAX;
int32_t x750 = -1;
static volatile int16_t x755 = -323;
static volatile int32_t t151 = -15631780;
static uint64_t x763 = 243243090140085LLU;
uint64_t x770 = UINT64_MAX;
static uint64_t x780 = 1901022091LLU;
uint8_t x799 = UINT8_MAX;
uint64_t x808 = 12281526073341LLU;
static int16_t x814 = -1;
static int16_t x821 = INT16_MAX;
static volatile int32_t t164 = 14795;
int16_t x827 = -1;
static int32_t t165 = -4;
int32_t x832 = INT32_MIN;
volatile int32_t t166 = -206890601;
static int32_t x834 = -336023;
static uint16_t x837 = 6680U;
volatile int32_t t169 = 1344;
volatile int32_t t172 = -215;
int64_t x872 = 32479LL;
int32_t x878 = -2;
uint32_t x880 = 13U;
volatile int32_t t176 = -481229333;
int8_t x905 = INT8_MIN;
uint64_t x911 = 210289375324162092LLU;
static uint64_t x921 = 846LLU;
uint8_t x922 = UINT8_MAX;
int32_t t183 = 121;
volatile int32_t t184 = 88;
static int32_t x930 = INT32_MAX;
int8_t x932 = INT8_MIN;
volatile uint8_t x942 = UINT8_MAX;
static uint64_t x945 = 545765050LLU;
static volatile int32_t t190 = 579;
static int64_t x954 = INT64_MIN;
static int32_t x963 = INT32_MIN;
uint64_t x964 = 2LLU;
uint32_t x973 = 23435U;
static int32_t x974 = -17848;
volatile int64_t x985 = -1LL;
int8_t x988 = 19;
int32_t t195 = 15565;
int8_t x989 = INT8_MAX;
static uint8_t x995 = 16U;
int64_t x999 = -13396774887LL;
volatile int32_t t199 = -37409623;


void f0(void) {
    	uint16_t x1 = 9U;
	int16_t x2 = 0;
	uint64_t x3 = 861141794LLU;
	int8_t x4 = -1;
	static int32_t t0 = 59;

    t0 = (x1>(x2<=(x3*x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int64_t x6 = 1465596218015604138LL;
	static int32_t x7 = -1;
	static uint32_t x8 = 14797U;

    t1 = (x5>(x6<=(x7*x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint8_t x9 = 28U;
	int16_t x10 = INT16_MAX;
	int16_t x11 = -1;
	int8_t x12 = INT8_MAX;
	static volatile int32_t t2 = 0;

    t2 = (x9>(x10<=(x11*x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x17 = 1U;
	int16_t x18 = -1;
	int64_t x19 = -1LL;
	int32_t t3 = 137688;

    t3 = (x17>(x18<=(x19*x20)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x21 = -1LL;
	uint64_t x22 = 580122238852766LLU;
	static uint8_t x23 = 14U;
	int16_t x24 = INT16_MIN;
	int32_t t4 = -3950;

    t4 = (x21>(x22<=(x23*x24)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x29 = -1LL;
	int16_t x30 = -857;
	uint8_t x31 = 1U;
	uint8_t x32 = 26U;
	int32_t t5 = 1086;

    t5 = (x29>(x30<=(x31*x32)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x33 = INT64_MAX;
	static int64_t x34 = INT64_MAX;
	int32_t x35 = 1;
	volatile int32_t t6 = 2206329;

    t6 = (x33>(x34<=(x35*x36)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x37 = 17101065;
	int32_t x38 = INT32_MIN;
	uint16_t x39 = 1172U;
	volatile int32_t t7 = 1;

    t7 = (x37>(x38<=(x39*x40)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x41 = INT32_MIN;
	static int64_t x42 = INT64_MAX;
	volatile int16_t x44 = INT16_MIN;
	int32_t t8 = 7455;

    t8 = (x41>(x42<=(x43*x44)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x46 = INT16_MIN;
	uint16_t x47 = UINT16_MAX;
	static uint8_t x48 = 76U;
	volatile int32_t t9 = 400458;

    t9 = (x45>(x46<=(x47*x48)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x49 = INT16_MAX;
	static uint32_t x50 = UINT32_MAX;
	int8_t x51 = INT8_MIN;

    t10 = (x49>(x50<=(x51*x52)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x53 = 106;
	static volatile int16_t x54 = INT16_MAX;
	uint8_t x55 = 28U;
	static volatile int32_t t11 = 16920;

    t11 = (x53>(x54<=(x55*x56)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x57 = 11163902969531427LL;
	int16_t x58 = -962;
	uint8_t x59 = 54U;
	static int8_t x60 = 29;
	int32_t t12 = 56527304;

    t12 = (x57>(x58<=(x59*x60)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x61 = INT16_MIN;
	uint64_t x62 = UINT64_MAX;
	volatile uint16_t x63 = UINT16_MAX;

    t13 = (x61>(x62<=(x63*x64)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x65 = -1;
	static int8_t x67 = -1;
	volatile int32_t t14 = -292084;

    t14 = (x65>(x66<=(x67*x68)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x85 = 49U;
	int8_t x86 = -57;
	int16_t x87 = INT16_MAX;
	uint16_t x88 = UINT16_MAX;

    t15 = (x85>(x86<=(x87*x88)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x89 = -15052LL;
	int32_t x90 = -1;
	int32_t x91 = -16084;
	uint16_t x92 = 10U;
	volatile int32_t t16 = 9158504;

    t16 = (x89>(x90<=(x91*x92)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x93 = 2U;
	static uint32_t x94 = 13U;
	int8_t x95 = -14;
	uint64_t x96 = 21LLU;
	volatile int32_t t17 = 29;

    t17 = (x93>(x94<=(x95*x96)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x98 = INT16_MIN;
	int8_t x99 = 32;

    t18 = (x97>(x98<=(x99*x100)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x101 = INT32_MIN;
	int64_t x102 = -1LL;
	int8_t x103 = 0;
	int8_t x104 = -1;
	volatile int32_t t19 = 4733;

    t19 = (x101>(x102<=(x103*x104)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x109 = UINT8_MAX;
	volatile int32_t x112 = 22;
	volatile int32_t t20 = 0;

    t20 = (x109>(x110<=(x111*x112)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x113 = -14;
	int32_t x114 = INT32_MIN;
	int16_t x115 = INT16_MIN;
	volatile int32_t t21 = -9994;

    t21 = (x113>(x114<=(x115*x116)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x126 = INT16_MIN;
	volatile uint32_t x127 = 1294573570U;
	static volatile int8_t x128 = INT8_MAX;
	int32_t t22 = -31;

    t22 = (x125>(x126<=(x127*x128)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x131 = INT8_MAX;
	uint8_t x132 = 1U;
	static volatile int32_t t23 = -484146477;

    t23 = (x129>(x130<=(x131*x132)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint8_t x133 = UINT8_MAX;
	int64_t x134 = -525421840712224059LL;
	static int32_t x135 = INT32_MIN;
	static volatile uint64_t x136 = UINT64_MAX;
	volatile int32_t t24 = -555611;

    t24 = (x133>(x134<=(x135*x136)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x137 = 47U;
	static int8_t x138 = INT8_MIN;
	static uint32_t x140 = UINT32_MAX;
	static int32_t t25 = -970092803;

    t25 = (x137>(x138<=(x139*x140)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x145 = INT16_MAX;
	volatile int64_t x146 = INT64_MIN;
	int8_t x147 = INT8_MAX;
	int32_t t26 = 1031274;

    t26 = (x145>(x146<=(x147*x148)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int16_t x149 = -1;
	uint32_t x150 = 22236U;
	volatile uint16_t x151 = 5412U;
	int16_t x152 = -21;
	int32_t t27 = -556;

    t27 = (x149>(x150<=(x151*x152)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x157 = 14U;
	static int32_t x158 = INT32_MAX;
	int8_t x160 = -1;
	volatile int32_t t28 = 1603472;

    t28 = (x157>(x158<=(x159*x160)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x161 = INT64_MAX;
	int64_t x162 = -21684299194559LL;
	static int16_t x163 = INT16_MIN;
	int8_t x164 = INT8_MIN;
	volatile int32_t t29 = 4512;

    t29 = (x161>(x162<=(x163*x164)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x165 = INT64_MIN;
	static int32_t x166 = INT32_MIN;
	int16_t x167 = -45;
	uint32_t x168 = 19720913U;

    t30 = (x165>(x166<=(x167*x168)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x169 = INT32_MAX;
	static volatile uint8_t x170 = UINT8_MAX;
	static uint32_t x172 = 9326U;
	int32_t t31 = -3867;

    t31 = (x169>(x170<=(x171*x172)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x174 = 3170;
	int32_t t32 = -244993;

    t32 = (x173>(x174<=(x175*x176)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x177 = 59;
	static volatile uint64_t x178 = 12664645246713LLU;
	int8_t x180 = INT8_MIN;
	int32_t t33 = -13058338;

    t33 = (x177>(x178<=(x179*x180)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x181 = -1;
	static volatile int64_t x183 = -44480477032LL;
	int32_t x184 = -1;
	volatile int32_t t34 = -129127;

    t34 = (x181>(x182<=(x183*x184)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x185 = -1;
	int8_t x186 = 1;
	static uint64_t x187 = 55888024532736288LLU;
	static int64_t x188 = 3LL;
	volatile int32_t t35 = -657652;

    t35 = (x185>(x186<=(x187*x188)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x189 = INT32_MIN;
	int8_t x190 = INT8_MIN;
	static uint8_t x191 = UINT8_MAX;
	volatile uint8_t x192 = UINT8_MAX;
	volatile int32_t t36 = 54;

    t36 = (x189>(x190<=(x191*x192)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x197 = INT16_MIN;
	int32_t x198 = INT32_MIN;
	volatile uint64_t x199 = UINT64_MAX;
	static uint8_t x200 = 1U;
	int32_t t37 = -30027697;

    t37 = (x197>(x198<=(x199*x200)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x201 = INT8_MAX;
	static volatile int32_t x202 = -1;
	volatile int8_t x203 = 24;
	volatile int16_t x204 = INT16_MIN;
	volatile int32_t t38 = 16;

    t38 = (x201>(x202<=(x203*x204)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x205 = 1101664057U;
	volatile int64_t x206 = INT64_MIN;
	static volatile uint32_t x208 = 34823U;
	volatile int32_t t39 = 4164785;

    t39 = (x205>(x206<=(x207*x208)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x209 = 165;
	volatile int16_t x210 = 0;
	volatile uint16_t x211 = UINT16_MAX;
	volatile int32_t t40 = 0;

    t40 = (x209>(x210<=(x211*x212)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x213 = 241808U;
	int16_t x215 = 784;
	volatile int16_t x216 = 746;
	int32_t t41 = -139;

    t41 = (x213>(x214<=(x215*x216)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x217 = -6439;
	uint64_t x219 = 13036753633222162LLU;
	int32_t x220 = INT32_MAX;
	int32_t t42 = -1;

    t42 = (x217>(x218<=(x219*x220)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x221 = UINT32_MAX;
	int8_t x224 = 30;

    t43 = (x221>(x222<=(x223*x224)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x225 = INT32_MIN;
	int8_t x226 = -7;
	volatile uint64_t x227 = 26089545204628LLU;
	int64_t x228 = -1LL;
	volatile int32_t t44 = -46016921;

    t44 = (x225>(x226<=(x227*x228)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x229 = 22U;
	int64_t x230 = 13LL;
	uint16_t x231 = 1717U;
	volatile int16_t x232 = -1;
	int32_t t45 = 2016449;

    t45 = (x229>(x230<=(x231*x232)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x233 = INT8_MAX;
	uint16_t x234 = 10U;
	int16_t x236 = -1;
	int32_t t46 = -273622643;

    t46 = (x233>(x234<=(x235*x236)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x238 = INT64_MIN;
	int32_t x239 = -88208;
	static int32_t t47 = 66883783;

    t47 = (x237>(x238<=(x239*x240)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x241 = -2;
	uint32_t x243 = 3643890U;
	int32_t x244 = INT32_MAX;
	static int32_t t48 = -14012295;

    t48 = (x241>(x242<=(x243*x244)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x245 = UINT64_MAX;
	int16_t x246 = -1;
	int8_t x247 = INT8_MIN;
	int32_t x248 = -1;
	int32_t t49 = -153269978;

    t49 = (x245>(x246<=(x247*x248)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint16_t x249 = 23431U;
	int16_t x250 = INT16_MAX;
	uint8_t x251 = UINT8_MAX;
	int32_t t50 = 24;

    t50 = (x249>(x250<=(x251*x252)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x261 = -1;
	static int64_t x262 = -8307LL;
	int8_t x263 = INT8_MIN;
	int16_t x264 = -463;
	int32_t t51 = 29;

    t51 = (x261>(x262<=(x263*x264)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x273 = 20199147U;
	uint64_t x274 = UINT64_MAX;
	uint64_t x275 = UINT64_MAX;

    t52 = (x273>(x274<=(x275*x276)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x277 = INT32_MAX;
	int16_t x278 = -3;
	static int8_t x279 = -1;
	int32_t x280 = -88;
	volatile int32_t t53 = -1;

    t53 = (x277>(x278<=(x279*x280)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x281 = INT8_MIN;
	uint64_t x283 = UINT64_MAX;
	int8_t x284 = -1;
	int32_t t54 = 418848;

    t54 = (x281>(x282<=(x283*x284)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x285 = INT64_MIN;
	int8_t x286 = INT8_MAX;
	uint8_t x287 = 52U;
	static volatile int8_t x288 = 1;

    t55 = (x285>(x286<=(x287*x288)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x289 = -1;
	uint32_t x291 = UINT32_MAX;
	volatile uint8_t x292 = 124U;
	volatile int32_t t56 = 232293;

    t56 = (x289>(x290<=(x291*x292)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x297 = 7U;
	int64_t x298 = -171178433549LL;
	int64_t x299 = -1LL;
	uint16_t x300 = 20749U;

    t57 = (x297>(x298<=(x299*x300)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x303 = 59U;
	volatile int32_t t58 = -148034;

    t58 = (x301>(x302<=(x303*x304)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x305 = -1;
	uint16_t x306 = 102U;
	int16_t x307 = INT16_MAX;

    t59 = (x305>(x306<=(x307*x308)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x309 = INT16_MIN;
	int64_t x310 = -1LL;
	int8_t x311 = 6;
	static uint8_t x312 = UINT8_MAX;
	static volatile int32_t t60 = 840233482;

    t60 = (x309>(x310<=(x311*x312)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int8_t x313 = 28;
	int8_t x314 = -2;
	volatile uint8_t x315 = 2U;
	int32_t t61 = 184;

    t61 = (x313>(x314<=(x315*x316)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x317 = UINT8_MAX;
	static volatile int64_t x318 = INT64_MIN;
	static uint64_t x319 = 1271LLU;
	int16_t x320 = -1;

    t62 = (x317>(x318<=(x319*x320)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x322 = 1U;
	int64_t x323 = -1LL;
	uint32_t x324 = UINT32_MAX;
	int32_t t63 = 334;

    t63 = (x321>(x322<=(x323*x324)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x325 = -118;
	uint8_t x326 = 5U;
	uint64_t x328 = 51836630641LLU;
	int32_t t64 = 16;

    t64 = (x325>(x326<=(x327*x328)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x329 = INT8_MIN;
	static int64_t x330 = 0LL;
	int16_t x332 = INT16_MAX;
	volatile int32_t t65 = 32911720;

    t65 = (x329>(x330<=(x331*x332)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x334 = INT16_MIN;
	uint16_t x335 = UINT16_MAX;
	uint64_t x336 = 79508LLU;
	static volatile int32_t t66 = -20946737;

    t66 = (x333>(x334<=(x335*x336)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x337 = INT64_MAX;

    t67 = (x337>(x338<=(x339*x340)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x341 = UINT8_MAX;
	int8_t x342 = -53;
	uint16_t x343 = 1836U;
	static uint8_t x344 = 7U;
	static volatile int32_t t68 = 28834586;

    t68 = (x341>(x342<=(x343*x344)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x349 = 0;
	uint16_t x350 = UINT16_MAX;
	int16_t x352 = -1;
	volatile int32_t t69 = -470;

    t69 = (x349>(x350<=(x351*x352)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x353 = 7U;
	int32_t x354 = INT32_MAX;
	int64_t x355 = 34385554112294LL;
	volatile uint64_t x356 = UINT64_MAX;
	volatile int32_t t70 = 5;

    t70 = (x353>(x354<=(x355*x356)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x357 = INT64_MAX;
	volatile uint64_t x358 = UINT64_MAX;
	uint16_t x359 = 62U;
	static uint64_t x360 = 347806465016972LLU;
	int32_t t71 = 1;

    t71 = (x357>(x358<=(x359*x360)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x365 = INT16_MIN;
	int64_t x366 = 5252220LL;
	uint64_t x368 = 15101770005166LLU;
	static volatile int32_t t72 = 62702212;

    t72 = (x365>(x366<=(x367*x368)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x369 = INT16_MIN;
	int64_t x370 = INT64_MAX;
	uint32_t x371 = UINT32_MAX;
	int32_t x372 = INT32_MIN;

    t73 = (x369>(x370<=(x371*x372)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x373 = INT32_MIN;
	static uint8_t x374 = 3U;
	static volatile int64_t x375 = -1LL;
	uint32_t x376 = 2U;
	int32_t t74 = -39918662;

    t74 = (x373>(x374<=(x375*x376)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x378 = INT16_MIN;
	volatile uint64_t x379 = 427474815889944LLU;
	static int16_t x380 = 3;
	volatile int32_t t75 = 451;

    t75 = (x377>(x378<=(x379*x380)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x381 = 517666U;
	static int8_t x382 = INT8_MIN;
	int32_t x383 = -5136;
	volatile int16_t x384 = 15;

    t76 = (x381>(x382<=(x383*x384)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x385 = INT64_MIN;
	int32_t x386 = INT32_MIN;
	uint8_t x387 = UINT8_MAX;

    t77 = (x385>(x386<=(x387*x388)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x389 = -1;
	int16_t x390 = -1;
	uint16_t x391 = 8U;
	int8_t x392 = 3;
	static volatile int32_t t78 = 1;

    t78 = (x389>(x390<=(x391*x392)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x393 = 465U;
	static uint32_t x395 = 430U;

    t79 = (x393>(x394<=(x395*x396)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x397 = INT16_MIN;
	uint64_t x398 = 4076459LLU;
	int16_t x400 = INT16_MAX;
	int32_t t80 = 62986232;

    t80 = (x397>(x398<=(x399*x400)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x409 = 7U;
	uint32_t x410 = UINT32_MAX;
	volatile int64_t x411 = 99279LL;
	int16_t x412 = 378;

    t81 = (x409>(x410<=(x411*x412)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x413 = INT32_MAX;
	int8_t x415 = -1;

    t82 = (x413>(x414<=(x415*x416)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x425 = 1U;
	int16_t x426 = 5;
	static uint16_t x427 = 2U;
	volatile uint8_t x428 = 1U;
	static volatile int32_t t83 = -1033173030;

    t83 = (x425>(x426<=(x427*x428)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x429 = -222LL;
	static uint32_t x430 = 11U;
	static uint64_t x431 = UINT64_MAX;
	int8_t x432 = INT8_MAX;

    t84 = (x429>(x430<=(x431*x432)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile uint8_t x433 = UINT8_MAX;
	volatile int16_t x434 = INT16_MAX;
	static volatile int16_t x435 = -1;
	static int32_t t85 = 3;

    t85 = (x433>(x434<=(x435*x436)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x437 = 90U;
	static uint64_t x438 = 5LLU;
	static uint32_t x439 = 0U;
	int32_t t86 = -3;

    t86 = (x437>(x438<=(x439*x440)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint64_t x445 = 521620639932LLU;
	static int16_t x446 = 10827;
	uint32_t x447 = UINT32_MAX;
	static uint64_t x448 = 1314LLU;
	volatile int32_t t87 = -2264;

    t87 = (x445>(x446<=(x447*x448)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x449 = INT32_MAX;
	int16_t x450 = INT16_MIN;
	int64_t x451 = 4235LL;
	static int32_t x452 = 58815004;
	volatile int32_t t88 = -165;

    t88 = (x449>(x450<=(x451*x452)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x455 = 154U;
	int32_t t89 = -51827;

    t89 = (x453>(x454<=(x455*x456)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint32_t x457 = UINT32_MAX;
	int8_t x458 = -1;
	uint32_t x459 = UINT32_MAX;
	int8_t x460 = -1;
	int32_t t90 = 482977288;

    t90 = (x457>(x458<=(x459*x460)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x461 = UINT64_MAX;
	int64_t x462 = -1LL;
	int16_t x463 = INT16_MAX;
	static uint64_t x464 = 326124986LLU;
	int32_t t91 = 19293;

    t91 = (x461>(x462<=(x463*x464)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x466 = -1LL;
	static uint8_t x467 = 7U;
	int32_t t92 = 41879089;

    t92 = (x465>(x466<=(x467*x468)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t t93 = -460609;

    t93 = (x473>(x474<=(x475*x476)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x477 = -112818414;
	volatile int16_t x478 = INT16_MIN;
	int32_t x479 = -276;
	int16_t x480 = INT16_MIN;
	volatile int32_t t94 = -1;

    t94 = (x477>(x478<=(x479*x480)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint8_t x481 = 101U;
	int32_t x482 = -6878;
	uint32_t x483 = 518435U;
	int8_t x484 = -1;
	volatile int32_t t95 = -187684;

    t95 = (x481>(x482<=(x483*x484)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint64_t x488 = 169296LLU;
	int32_t t96 = -457403;

    t96 = (x485>(x486<=(x487*x488)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x489 = 5761;
	static int64_t x490 = INT64_MIN;
	int8_t x491 = -1;
	volatile int8_t x492 = INT8_MIN;
	volatile int32_t t97 = 2;

    t97 = (x489>(x490<=(x491*x492)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x500 = INT64_MIN;
	int32_t t98 = -21861963;

    t98 = (x497>(x498<=(x499*x500)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x501 = 1;
	static int32_t x503 = -1;
	int16_t x504 = 5;
	volatile int32_t t99 = 118;

    t99 = (x501>(x502<=(x503*x504)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x505 = UINT16_MAX;
	uint8_t x506 = 2U;
	volatile int16_t x508 = 0;
	int32_t t100 = -951;

    t100 = (x505>(x506<=(x507*x508)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x509 = INT32_MAX;
	volatile int8_t x510 = INT8_MIN;
	int16_t x511 = 3;
	uint64_t x512 = 1546LLU;
	volatile int32_t t101 = -49605509;

    t101 = (x509>(x510<=(x511*x512)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int8_t x513 = -2;
	int32_t x514 = -819;
	uint32_t x515 = 2955366U;
	int16_t x516 = INT16_MAX;
	int32_t t102 = 0;

    t102 = (x513>(x514<=(x515*x516)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x521 = 13U;
	static int8_t x523 = 1;
	uint16_t x524 = UINT16_MAX;

    t103 = (x521>(x522<=(x523*x524)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x525 = -1LL;
	int64_t x526 = -1983LL;
	static uint32_t x528 = 5434U;
	volatile int32_t t104 = 248965;

    t104 = (x525>(x526<=(x527*x528)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x529 = 939LLU;
	uint8_t x530 = 35U;
	volatile uint16_t x531 = 6U;
	int32_t t105 = -344299762;

    t105 = (x529>(x530<=(x531*x532)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x533 = INT32_MIN;
	int64_t x534 = -465388117422LL;
	int64_t x535 = -1922448812LL;
	int32_t x536 = INT32_MIN;
	volatile int32_t t106 = 7;

    t106 = (x533>(x534<=(x535*x536)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x537 = 1U;
	int16_t x538 = INT16_MAX;
	int64_t x539 = -2019LL;
	uint32_t x540 = 220815U;
	int32_t t107 = -68751;

    t107 = (x537>(x538<=(x539*x540)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int64_t x541 = -36440621LL;
	static int32_t x542 = INT32_MIN;
	uint16_t x543 = UINT16_MAX;
	static int8_t x544 = INT8_MAX;
	static int32_t t108 = -738;

    t108 = (x541>(x542<=(x543*x544)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x545 = 60LLU;
	static int32_t x546 = INT32_MIN;
	int32_t x547 = -1;
	static int8_t x548 = INT8_MIN;
	static int32_t t109 = 910;

    t109 = (x545>(x546<=(x547*x548)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x549 = -903;
	int16_t x550 = -1;
	int16_t x551 = INT16_MIN;
	volatile uint16_t x552 = 16818U;
	volatile int32_t t110 = 394618;

    t110 = (x549>(x550<=(x551*x552)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x554 = -1LL;
	volatile uint8_t x555 = 0U;
	int64_t x556 = INT64_MIN;
	volatile int32_t t111 = 433803314;

    t111 = (x553>(x554<=(x555*x556)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x559 = INT64_MIN;
	int32_t t112 = -2730964;

    t112 = (x557>(x558<=(x559*x560)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x562 = INT8_MIN;
	int32_t x563 = -12328;
	uint8_t x564 = 45U;
	volatile int32_t t113 = -22826431;

    t113 = (x561>(x562<=(x563*x564)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x565 = INT16_MIN;
	uint8_t x566 = UINT8_MAX;
	uint16_t x567 = UINT16_MAX;
	int16_t x568 = -1;
	volatile int32_t t114 = 0;

    t114 = (x565>(x566<=(x567*x568)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint16_t x570 = 2U;
	uint64_t x572 = UINT64_MAX;
	int32_t t115 = -46300;

    t115 = (x569>(x570<=(x571*x572)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x573 = 7;
	volatile uint8_t x574 = 34U;
	uint32_t x575 = 13U;
	int16_t x576 = 3165;
	volatile int32_t t116 = 184;

    t116 = (x573>(x574<=(x575*x576)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x585 = 6;
	int8_t x586 = -1;
	volatile int64_t x587 = -359569186940LL;

    t117 = (x585>(x586<=(x587*x588)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x589 = 61;
	volatile int64_t x590 = 4588LL;
	volatile int8_t x592 = -1;
	volatile int32_t t118 = -7;

    t118 = (x589>(x590<=(x591*x592)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x593 = INT16_MAX;
	int16_t x595 = INT16_MIN;
	volatile int64_t x596 = -8LL;
	static int32_t t119 = -13461308;

    t119 = (x593>(x594<=(x595*x596)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x598 = -1;
	uint32_t x599 = 430660780U;
	uint64_t x600 = UINT64_MAX;
	volatile int32_t t120 = -1340;

    t120 = (x597>(x598<=(x599*x600)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x605 = 145;
	uint32_t x606 = 79U;
	uint32_t x607 = 13748U;
	volatile int8_t x608 = -1;
	static volatile int32_t t121 = 1;

    t121 = (x605>(x606<=(x607*x608)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x609 = 1380139347739146LL;
	uint64_t x610 = 4925544329714LLU;
	volatile int64_t x611 = -1LL;
	int32_t x612 = -91;
	int32_t t122 = -2;

    t122 = (x609>(x610<=(x611*x612)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x613 = INT32_MAX;
	int32_t x614 = INT32_MIN;
	int16_t x615 = INT16_MIN;
	static int32_t t123 = -333;

    t123 = (x613>(x614<=(x615*x616)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x618 = INT32_MAX;
	int32_t x620 = -2;
	volatile int32_t t124 = 13547;

    t124 = (x617>(x618<=(x619*x620)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x625 = INT32_MAX;
	uint64_t x626 = 1423685833LLU;
	uint16_t x627 = UINT16_MAX;
	volatile int8_t x628 = INT8_MAX;

    t125 = (x625>(x626<=(x627*x628)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x629 = INT32_MIN;
	int32_t x630 = -1;
	int64_t x631 = -1LL;
	static int32_t x632 = 5337161;

    t126 = (x629>(x630<=(x631*x632)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x633 = 180;
	int8_t x635 = 42;
	int16_t x636 = -654;
	volatile int32_t t127 = -26689;

    t127 = (x633>(x634<=(x635*x636)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x637 = 928;
	uint64_t x638 = 138869762077591LLU;
	static volatile int8_t x639 = 1;

    t128 = (x637>(x638<=(x639*x640)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x641 = 61;
	uint64_t x642 = 291547LLU;
	uint64_t x644 = 4926990LLU;
	volatile int32_t t129 = -258;

    t129 = (x641>(x642<=(x643*x644)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x645 = INT16_MIN;
	uint32_t x646 = UINT32_MAX;
	uint32_t x647 = UINT32_MAX;
	int16_t x648 = INT16_MIN;
	int32_t t130 = 1;

    t130 = (x645>(x646<=(x647*x648)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint64_t x649 = 851319584709977762LLU;
	static int8_t x650 = INT8_MAX;
	int64_t x651 = 47794529385744LL;
	volatile int32_t t131 = -772231650;

    t131 = (x649>(x650<=(x651*x652)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x653 = -1;
	int32_t x654 = -772619121;
	static volatile uint8_t x655 = 5U;
	int32_t t132 = 1;

    t132 = (x653>(x654<=(x655*x656)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x674 = 6940LL;
	int16_t x675 = INT16_MAX;
	int32_t x676 = -1;

    t133 = (x673>(x674<=(x675*x676)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x677 = -4;
	int8_t x678 = INT8_MIN;
	static int32_t x679 = -1632;
	volatile int32_t x680 = 16146;
	volatile int32_t t134 = -146154017;

    t134 = (x677>(x678<=(x679*x680)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x682 = 12;
	static volatile uint16_t x683 = 218U;
	int32_t t135 = -88468176;

    t135 = (x681>(x682<=(x683*x684)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x685 = UINT64_MAX;
	uint64_t x686 = 506452941LLU;
	uint16_t x687 = UINT16_MAX;
	volatile int64_t x688 = -1LL;
	int32_t t136 = 355175303;

    t136 = (x685>(x686<=(x687*x688)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x689 = INT16_MAX;
	volatile uint16_t x690 = 6434U;
	int16_t x691 = -7541;
	volatile int8_t x692 = INT8_MIN;
	volatile int32_t t137 = -3608;

    t137 = (x689>(x690<=(x691*x692)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint8_t x693 = 1U;
	int16_t x694 = -1972;
	volatile int64_t x695 = 57LL;
	int32_t x696 = 3308395;
	int32_t t138 = 0;

    t138 = (x693>(x694<=(x695*x696)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x697 = INT16_MIN;
	uint32_t x698 = 1556616933U;
	volatile uint64_t x699 = 4551592LLU;
	static int8_t x700 = INT8_MIN;

    t139 = (x697>(x698<=(x699*x700)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x705 = -1;
	volatile uint32_t x706 = 15695025U;
	int64_t x707 = -2242308299166551LL;
	int16_t x708 = -1;
	static volatile int32_t t140 = 5;

    t140 = (x705>(x706<=(x707*x708)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint16_t x710 = 2U;
	int32_t x711 = 650920929;
	int32_t x712 = -1;

    t141 = (x709>(x710<=(x711*x712)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x714 = -11;
	static uint64_t x715 = 13646LLU;
	int64_t x716 = -1LL;

    t142 = (x713>(x714<=(x715*x716)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x717 = INT64_MIN;
	uint16_t x718 = 59U;
	int8_t x720 = INT8_MIN;

    t143 = (x717>(x718<=(x719*x720)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x721 = INT32_MIN;
	volatile uint8_t x722 = 1U;
	uint16_t x723 = 63U;
	int32_t t144 = -2;

    t144 = (x721>(x722<=(x723*x724)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x729 = -2;
	volatile int64_t x730 = -1LL;
	int8_t x731 = INT8_MIN;
	uint32_t x732 = UINT32_MAX;
	volatile int32_t t145 = -14;

    t145 = (x729>(x730<=(x731*x732)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x733 = UINT8_MAX;
	int64_t x735 = -16538427404LL;
	int16_t x736 = INT16_MAX;
	volatile int32_t t146 = -47614880;

    t146 = (x733>(x734<=(x735*x736)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x737 = 20U;
	int16_t x738 = INT16_MAX;
	int8_t x739 = -1;
	uint16_t x740 = 3431U;
	int32_t t147 = -1281656;

    t147 = (x737>(x738<=(x739*x740)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int64_t x745 = 33410363071LL;
	uint64_t x746 = 3351LLU;
	volatile uint32_t x747 = 632U;
	static int32_t x748 = -1;
	int32_t t148 = 56509;

    t148 = (x745>(x746<=(x747*x748)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x749 = INT32_MIN;
	int16_t x751 = INT16_MAX;
	static volatile int16_t x752 = 3;
	volatile int32_t t149 = -1297;

    t149 = (x749>(x750<=(x751*x752)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x753 = 1;
	uint8_t x754 = 88U;
	static volatile int32_t x756 = 2;
	static int32_t t150 = -18923307;

    t150 = (x753>(x754<=(x755*x756)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x757 = UINT8_MAX;
	int64_t x758 = INT64_MIN;
	uint16_t x759 = 992U;
	uint64_t x760 = 4843503087LLU;

    t151 = (x757>(x758<=(x759*x760)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x761 = 1064337091;
	int8_t x762 = INT8_MAX;
	volatile int16_t x764 = INT16_MIN;
	int32_t t152 = 35;

    t152 = (x761>(x762<=(x763*x764)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x769 = 0U;
	int8_t x771 = -1;
	int32_t x772 = -1;
	volatile int32_t t153 = 6996291;

    t153 = (x769>(x770<=(x771*x772)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x773 = INT32_MAX;
	static uint8_t x774 = UINT8_MAX;
	uint32_t x775 = UINT32_MAX;
	int8_t x776 = INT8_MAX;
	int32_t t154 = 1056894;

    t154 = (x773>(x774<=(x775*x776)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x777 = INT64_MIN;
	int8_t x778 = INT8_MIN;
	uint16_t x779 = 12740U;
	volatile int32_t t155 = 1;

    t155 = (x777>(x778<=(x779*x780)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x781 = INT16_MIN;
	int64_t x782 = INT64_MIN;
	int64_t x783 = -26LL;
	int16_t x784 = INT16_MAX;
	int32_t t156 = -112031;

    t156 = (x781>(x782<=(x783*x784)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x789 = 1U;
	int32_t x790 = INT32_MIN;
	uint8_t x791 = 30U;
	int32_t x792 = -43;
	int32_t t157 = 150407;

    t157 = (x789>(x790<=(x791*x792)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x793 = INT8_MAX;
	uint64_t x794 = 104271LLU;
	int16_t x795 = -1;
	static int8_t x796 = -1;
	int32_t t158 = -61;

    t158 = (x793>(x794<=(x795*x796)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x797 = 260;
	volatile uint32_t x798 = 44U;
	static uint8_t x800 = UINT8_MAX;
	volatile int32_t t159 = -113873;

    t159 = (x797>(x798<=(x799*x800)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x805 = 14543448U;
	static volatile int16_t x806 = 3700;
	int16_t x807 = -1;
	volatile int32_t t160 = -269747092;

    t160 = (x805>(x806<=(x807*x808)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x809 = INT8_MIN;
	int8_t x810 = INT8_MIN;
	volatile int8_t x811 = -1;
	uint8_t x812 = UINT8_MAX;
	int32_t t161 = -78285;

    t161 = (x809>(x810<=(x811*x812)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x813 = 7U;
	volatile int32_t x815 = -1;
	uint32_t x816 = UINT32_MAX;
	int32_t t162 = -15;

    t162 = (x813>(x814<=(x815*x816)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int64_t x817 = INT64_MIN;
	int16_t x818 = INT16_MIN;
	int16_t x819 = 1;
	uint16_t x820 = 803U;
	static volatile int32_t t163 = -21879;

    t163 = (x817>(x818<=(x819*x820)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint32_t x822 = UINT32_MAX;
	static int16_t x823 = -1;
	int16_t x824 = -1;

    t164 = (x821>(x822<=(x823*x824)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x825 = INT8_MAX;
	int16_t x826 = INT16_MAX;
	int16_t x828 = -1;

    t165 = (x825>(x826<=(x827*x828)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x829 = -1470152195518823LL;
	int32_t x830 = 41;
	uint32_t x831 = 1U;

    t166 = (x829>(x830<=(x831*x832)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x833 = UINT16_MAX;
	static int8_t x835 = -2;
	volatile uint32_t x836 = 122740U;
	int32_t t167 = -30416179;

    t167 = (x833>(x834<=(x835*x836)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x838 = -1;
	static int8_t x839 = 0;
	uint32_t x840 = 580U;
	volatile int32_t t168 = 51275;

    t168 = (x837>(x838<=(x839*x840)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x841 = 12U;
	volatile int16_t x842 = INT16_MAX;
	static int32_t x843 = -1;
	static int16_t x844 = INT16_MIN;

    t169 = (x841>(x842<=(x843*x844)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x845 = INT64_MIN;
	int32_t x846 = 15;
	int32_t x847 = -1;
	static int16_t x848 = 928;
	int32_t t170 = -14;

    t170 = (x845>(x846<=(x847*x848)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile uint8_t x849 = 2U;
	volatile int32_t x850 = INT32_MAX;
	uint8_t x851 = UINT8_MAX;
	int32_t x852 = 2097;
	volatile int32_t t171 = 794848945;

    t171 = (x849>(x850<=(x851*x852)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x861 = INT64_MAX;
	volatile uint16_t x862 = 166U;
	volatile uint32_t x863 = UINT32_MAX;
	int16_t x864 = -1;

    t172 = (x861>(x862<=(x863*x864)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint32_t x865 = 38137U;
	int8_t x866 = 50;
	int8_t x867 = -1;
	int8_t x868 = 0;
	static int32_t t173 = -354974519;

    t173 = (x865>(x866<=(x867*x868)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x869 = INT16_MIN;
	uint16_t x870 = UINT16_MAX;
	int32_t x871 = INT32_MIN;
	int32_t t174 = -4;

    t174 = (x869>(x870<=(x871*x872)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x873 = INT64_MIN;
	int8_t x874 = -1;
	int8_t x875 = INT8_MIN;
	volatile int64_t x876 = -75978886324LL;
	int32_t t175 = -1016367;

    t175 = (x873>(x874<=(x875*x876)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x877 = INT8_MIN;
	int32_t x879 = INT32_MIN;

    t176 = (x877>(x878<=(x879*x880)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x881 = 100646967653860LL;
	uint8_t x882 = UINT8_MAX;
	uint16_t x883 = 5U;
	static uint16_t x884 = UINT16_MAX;
	static int32_t t177 = 126;

    t177 = (x881>(x882<=(x883*x884)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x889 = INT16_MIN;
	uint16_t x890 = UINT16_MAX;
	int16_t x891 = INT16_MIN;
	uint16_t x892 = 7214U;
	int32_t t178 = -241865;

    t178 = (x889>(x890<=(x891*x892)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x897 = 1LL;
	uint8_t x898 = UINT8_MAX;
	volatile int16_t x899 = INT16_MAX;
	uint64_t x900 = 296751766LLU;
	int32_t t179 = -78843;

    t179 = (x897>(x898<=(x899*x900)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x906 = INT8_MIN;
	int8_t x907 = INT8_MIN;
	static uint32_t x908 = 22965U;
	volatile int32_t t180 = 71321217;

    t180 = (x905>(x906<=(x907*x908)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x909 = 259205LLU;
	int32_t x910 = 987654385;
	int8_t x912 = -1;
	volatile int32_t t181 = -1;

    t181 = (x909>(x910<=(x911*x912)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x913 = 4492U;
	int16_t x914 = 104;
	static int64_t x915 = 92LL;
	uint64_t x916 = 992160LLU;
	int32_t t182 = 19;

    t182 = (x913>(x914<=(x915*x916)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x923 = 641U;
	static uint16_t x924 = UINT16_MAX;

    t183 = (x921>(x922<=(x923*x924)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x925 = INT32_MAX;
	uint16_t x926 = 5582U;
	int8_t x927 = -1;
	int16_t x928 = INT16_MAX;

    t184 = (x925>(x926<=(x927*x928)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x929 = INT16_MAX;
	volatile int8_t x931 = INT8_MAX;
	volatile int32_t t185 = -1;

    t185 = (x929>(x930<=(x931*x932)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x933 = -3;
	uint64_t x934 = 14LLU;
	static int32_t x935 = -1;
	static uint8_t x936 = 7U;
	int32_t t186 = -1;

    t186 = (x933>(x934<=(x935*x936)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x937 = UINT32_MAX;
	int8_t x938 = INT8_MAX;
	uint8_t x939 = 1U;
	volatile int8_t x940 = 1;
	volatile int32_t t187 = -375;

    t187 = (x937>(x938<=(x939*x940)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint8_t x941 = 6U;
	static int32_t x943 = INT32_MIN;
	uint64_t x944 = 302LLU;
	volatile int32_t t188 = 1;

    t188 = (x941>(x942<=(x943*x944)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x946 = INT16_MAX;
	volatile int16_t x947 = 159;
	uint64_t x948 = UINT64_MAX;
	int32_t t189 = 881292;

    t189 = (x945>(x946<=(x947*x948)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x949 = -744350995234284LL;
	int16_t x950 = INT16_MAX;
	uint64_t x951 = UINT64_MAX;
	volatile int32_t x952 = INT32_MAX;

    t190 = (x949>(x950<=(x951*x952)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x953 = -1;
	uint64_t x955 = UINT64_MAX;
	static volatile int32_t x956 = 1;
	static int32_t t191 = 62605;

    t191 = (x953>(x954<=(x955*x956)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x961 = INT64_MIN;
	uint8_t x962 = 3U;
	volatile int32_t t192 = 435;

    t192 = (x961>(x962<=(x963*x964)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x969 = -1;
	int32_t x970 = -1;
	static uint32_t x971 = UINT32_MAX;
	int64_t x972 = -1840092599LL;
	volatile int32_t t193 = 239;

    t193 = (x969>(x970<=(x971*x972)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x975 = 0;
	static int16_t x976 = INT16_MAX;
	int32_t t194 = 221;

    t194 = (x973>(x974<=(x975*x976)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x986 = INT8_MIN;
	int16_t x987 = -1;

    t195 = (x985>(x986<=(x987*x988)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint32_t x990 = 919934U;
	volatile uint64_t x991 = 2LLU;
	uint16_t x992 = 977U;
	int32_t t196 = -48;

    t196 = (x989>(x990<=(x991*x992)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile uint16_t x993 = UINT16_MAX;
	static int8_t x994 = INT8_MAX;
	uint8_t x996 = 5U;
	static int32_t t197 = -1470941;

    t197 = (x993>(x994<=(x995*x996)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x997 = INT32_MIN;
	volatile uint64_t x998 = 171270162649015633LLU;
	uint64_t x1000 = UINT64_MAX;
	int32_t t198 = 125921947;

    t198 = (x997>(x998<=(x999*x1000)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1001 = INT64_MIN;
	volatile int32_t x1002 = 29092485;
	uint64_t x1003 = 19988306LLU;
	volatile uint16_t x1004 = 6U;

    t199 = (x1001>(x1002<=(x1003*x1004)));

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

