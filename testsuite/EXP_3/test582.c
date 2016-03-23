
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

static volatile uint32_t x8 = 412U;
static int64_t x10 = INT64_MAX;
int16_t x14 = -1955;
int32_t x18 = INT32_MIN;
volatile int16_t x21 = INT16_MIN;
int32_t x22 = -7;
uint64_t x23 = 268513878076277369LLU;
volatile int64_t x26 = INT64_MIN;
volatile int8_t x28 = -1;
volatile uint32_t x29 = 1U;
volatile int16_t x32 = -1;
volatile int8_t x34 = 0;
volatile int16_t x36 = INT16_MIN;
volatile int32_t t8 = -1;
uint32_t x39 = 10031187U;
volatile int32_t x41 = -616;
int64_t x43 = 463267677899440418LL;
int32_t x76 = -47;
int32_t x84 = -30778976;
int8_t x85 = -1;
uint32_t x86 = UINT32_MAX;
int8_t x93 = 48;
uint64_t x98 = UINT64_MAX;
uint16_t x100 = 1424U;
uint16_t x103 = 7536U;
int8_t x117 = INT8_MAX;
int16_t x120 = -1;
static int64_t x121 = INT64_MAX;
int16_t x122 = 3;
volatile int8_t x124 = -2;
static volatile int32_t t25 = 1;
int32_t x125 = 288174;
volatile uint32_t x127 = 129102732U;
int32_t t28 = -666203;
volatile int64_t x139 = INT64_MIN;
static volatile int32_t t29 = -8751;
volatile int16_t x148 = -1;
uint64_t x154 = UINT64_MAX;
volatile int32_t t33 = 488873;
volatile int8_t x159 = 4;
static int16_t x160 = INT16_MAX;
int64_t x165 = -114891026949102147LL;
static volatile uint16_t x169 = UINT16_MAX;
int16_t x180 = 9272;
uint32_t x194 = 279299061U;
volatile int32_t t40 = -261;
volatile uint64_t x202 = 37940551166190925LLU;
static int8_t x203 = INT8_MIN;
int16_t x213 = -1;
int8_t x217 = INT8_MIN;
static volatile int32_t t44 = -97486234;
volatile int32_t x226 = INT32_MAX;
uint16_t x235 = 85U;
uint16_t x244 = 133U;
static uint64_t x248 = 4412530860LLU;
int32_t t48 = -203;
uint16_t x266 = 38U;
static volatile int32_t x267 = -1;
static uint16_t x268 = 13563U;
int64_t x292 = -1LL;
volatile int32_t t52 = -122;
int32_t x294 = INT32_MAX;
int32_t x296 = INT32_MAX;
volatile int32_t t54 = 4;
int64_t x301 = 20651991923LL;
int64_t x304 = -1LL;
static int64_t x309 = INT64_MAX;
int64_t x311 = -1LL;
int32_t x315 = INT32_MIN;
int32_t t57 = -61;
static int64_t x323 = INT64_MIN;
static uint64_t x324 = 7971466LLU;
uint8_t x325 = 2U;
int32_t t59 = -94;
int16_t x329 = 195;
uint8_t x332 = UINT8_MAX;
static int32_t t60 = -970;
int16_t x335 = 1707;
int16_t x340 = INT16_MIN;
int8_t x343 = -1;
int8_t x353 = INT8_MAX;
volatile int64_t x354 = 916918198238082LL;
int64_t x356 = INT64_MAX;
static volatile int32_t t64 = -3595;
int32_t t65 = -245903;
volatile int8_t x361 = INT8_MAX;
static uint16_t x364 = 41U;
int32_t t66 = -3;
uint32_t x370 = UINT32_MAX;
static volatile int32_t t68 = -6980192;
volatile uint64_t x382 = 460612LLU;
volatile uint64_t x383 = UINT64_MAX;
static uint8_t x385 = 2U;
uint16_t x397 = UINT16_MAX;
uint8_t x399 = UINT8_MAX;
int64_t x406 = INT64_MIN;
uint32_t x410 = 56148743U;
int32_t t75 = -134;
volatile int16_t x423 = 592;
int8_t x425 = INT8_MIN;
int32_t t78 = -118;
int8_t x433 = -1;
int64_t x456 = -3LL;
uint8_t x462 = 7U;
int32_t t85 = 521;
int32_t x481 = 210553;
uint8_t x482 = 94U;
int64_t x486 = -319411827LL;
int8_t x491 = INT8_MAX;
volatile int32_t t91 = -730;
int64_t x498 = -1LL;
uint16_t x503 = 4874U;
volatile int32_t t93 = -39;
int8_t x519 = INT8_MAX;
int64_t x522 = INT64_MAX;
int32_t x529 = INT32_MIN;
uint8_t x530 = 6U;
uint64_t x532 = UINT64_MAX;
volatile int32_t t99 = 119785403;
uint64_t x541 = 17532699LLU;
static volatile int32_t x544 = -1;
int32_t x546 = INT32_MIN;
int8_t x547 = INT8_MAX;
volatile uint16_t x548 = 297U;
static int32_t x560 = -1;
static int64_t x564 = 0LL;
volatile int32_t x566 = INT32_MIN;
volatile uint64_t x567 = 26210683594729819LLU;
volatile int32_t t107 = -11152094;
volatile int8_t x576 = INT8_MIN;
int32_t t108 = 33515;
int16_t x586 = -25;
static uint8_t x590 = 20U;
int16_t x599 = INT16_MAX;
int16_t x601 = INT16_MAX;
int8_t x602 = INT8_MAX;
volatile int32_t t116 = 11737076;
int64_t x615 = -725552052LL;
int32_t x625 = -1;
int32_t x626 = -1;
uint32_t x631 = UINT32_MAX;
static int64_t x634 = INT64_MAX;
int32_t x636 = INT32_MIN;
int16_t x647 = 0;
static int32_t x648 = INT32_MIN;
int64_t x652 = INT64_MIN;
volatile uint64_t x666 = UINT64_MAX;
static int64_t x667 = -294218694LL;
int32_t t129 = 931;
static int8_t x669 = 29;
int32_t x671 = INT32_MIN;
volatile int32_t t132 = 654311;
volatile uint32_t x687 = 1721701763U;
int64_t x694 = -1LL;
int16_t x697 = 0;
int64_t x701 = INT64_MIN;
int8_t x703 = INT8_MIN;
uint64_t x708 = 147017LLU;
int32_t t139 = -147398510;
int8_t x721 = INT8_MIN;
volatile int8_t x735 = 34;
static int8_t x736 = 8;
volatile int32_t t146 = 1807;
static uint64_t x766 = 0LLU;
int32_t t148 = 0;
int64_t x776 = -1LL;
int32_t x782 = -1;
volatile int16_t x783 = INT16_MIN;
volatile int64_t x784 = -1LL;
static int16_t x792 = -13156;
static volatile int32_t t153 = -114359161;
uint64_t x798 = UINT64_MAX;
static int64_t x799 = -1LL;
int8_t x805 = -1;
uint16_t x816 = 3790U;
volatile int32_t t158 = 4154421;
static int64_t x837 = -23168LL;
uint32_t x838 = UINT32_MAX;
volatile int16_t x857 = 124;
volatile int16_t x858 = -1;
volatile int64_t x868 = -1LL;
int32_t x878 = INT32_MIN;
volatile uint8_t x880 = UINT8_MAX;
static int32_t t168 = 36913460;
volatile int32_t x885 = -1;
static int32_t x887 = -1;
int32_t x906 = INT32_MIN;
int64_t x908 = 37LL;
volatile uint8_t x914 = 0U;
int16_t x915 = -1;
volatile int32_t t175 = 24103;
int32_t x925 = -1;
static uint32_t x931 = UINT32_MAX;
uint64_t x944 = 11901839805093LLU;
volatile int32_t t181 = -1316;
int8_t x957 = -10;
uint64_t x958 = 2700LLU;
volatile int8_t x960 = 44;
static int64_t x984 = -1LL;
int32_t t185 = 15;
int8_t x989 = -1;
int8_t x992 = -1;
volatile int32_t t190 = -128640;
int64_t x1014 = -22697497LL;
int16_t x1020 = INT16_MIN;
static int64_t x1039 = -1LL;
int64_t x1050 = 424850LL;


void f0(void) {
    	static int64_t x1 = -4369723879691LL;
	int16_t x2 = -8;
	int64_t x3 = -1LL;
	int16_t x4 = -1;
	volatile int32_t t0 = 3807;

    t0 = ((x1^x2)==(x3*x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MAX;
	uint32_t x6 = UINT32_MAX;
	static uint16_t x7 = 1U;
	volatile int32_t t1 = -562389989;

    t1 = ((x5^x6)==(x7*x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	int8_t x11 = -47;
	static int64_t x12 = -4061885409344LL;
	volatile int32_t t2 = -30413;

    t2 = ((x9^x10)==(x11*x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = UINT16_MAX;
	int16_t x15 = -1;
	static int32_t x16 = 58;
	static volatile int32_t t3 = 0;

    t3 = ((x13^x14)==(x15*x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	volatile int8_t x19 = -14;
	volatile int16_t x20 = -7889;
	int32_t t4 = 0;

    t4 = ((x17^x18)==(x19*x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint32_t x24 = 20287U;
	static volatile int32_t t5 = 0;

    t5 = ((x21^x22)==(x23*x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 284984287627352LLU;
	static volatile uint64_t x27 = UINT64_MAX;
	volatile int32_t t6 = 58790469;

    t6 = ((x25^x26)==(x27*x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x30 = 12994LL;
	uint16_t x31 = 430U;
	volatile int32_t t7 = 1;

    t7 = ((x29^x30)==(x31*x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = 6;
	static int32_t x35 = -1;

    t8 = ((x33^x34)==(x35*x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x37 = 2U;
	volatile int32_t x38 = INT32_MAX;
	volatile int16_t x40 = -1;
	static int32_t t9 = -334;

    t9 = ((x37^x38)==(x39*x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x42 = INT64_MIN;
	int8_t x44 = -1;
	volatile int32_t t10 = 92;

    t10 = ((x41^x42)==(x43*x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x49 = INT8_MAX;
	int32_t x50 = INT32_MAX;
	int16_t x51 = -1;
	uint64_t x52 = 295LLU;
	int32_t t11 = -346068;

    t11 = ((x49^x50)==(x51*x52));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x53 = INT64_MIN;
	int16_t x54 = INT16_MIN;
	int64_t x55 = -1LL;
	static volatile int32_t x56 = INT32_MIN;
	int32_t t12 = -102518911;

    t12 = ((x53^x54)==(x55*x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x57 = INT8_MIN;
	static int32_t x58 = INT32_MIN;
	int8_t x59 = 53;
	uint64_t x60 = 64LLU;
	static volatile int32_t t13 = -9993119;

    t13 = ((x57^x58)==(x59*x60));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x61 = 2670;
	uint16_t x62 = 31U;
	volatile int16_t x63 = INT16_MAX;
	uint16_t x64 = 10U;
	static int32_t t14 = 66;

    t14 = ((x61^x62)==(x63*x64));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int32_t x69 = INT32_MIN;
	int16_t x70 = INT16_MAX;
	int32_t x71 = -147559;
	uint16_t x72 = 14096U;
	volatile int32_t t15 = 50182362;

    t15 = ((x69^x70)==(x71*x72));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x73 = 0U;
	volatile uint8_t x74 = 4U;
	int8_t x75 = INT8_MIN;
	volatile int32_t t16 = 1;

    t16 = ((x73^x74)==(x75*x76));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x77 = INT64_MIN;
	volatile uint32_t x78 = 16382U;
	static volatile int32_t x79 = 742319;
	uint64_t x80 = UINT64_MAX;
	volatile int32_t t17 = 787203681;

    t17 = ((x77^x78)==(x79*x80));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x81 = 16U;
	static volatile int8_t x82 = -1;
	uint32_t x83 = 25899603U;
	int32_t t18 = 0;

    t18 = ((x81^x82)==(x83*x84));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x87 = -1;
	static volatile uint32_t x88 = UINT32_MAX;
	volatile int32_t t19 = 161822;

    t19 = ((x85^x86)==(x87*x88));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x89 = INT8_MIN;
	int8_t x90 = INT8_MIN;
	uint32_t x91 = 9425869U;
	int16_t x92 = INT16_MAX;
	int32_t t20 = -319944381;

    t20 = ((x89^x90)==(x91*x92));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x94 = INT8_MIN;
	uint64_t x95 = UINT64_MAX;
	int32_t x96 = INT32_MIN;
	volatile int32_t t21 = 387344;

    t21 = ((x93^x94)==(x95*x96));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x97 = -91;
	int16_t x99 = -22;
	int32_t t22 = 231;

    t22 = ((x97^x98)==(x99*x100));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x101 = INT8_MAX;
	int64_t x102 = INT64_MIN;
	uint8_t x104 = 20U;
	volatile int32_t t23 = 29386578;

    t23 = ((x101^x102)==(x103*x104));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x118 = INT16_MIN;
	int8_t x119 = 47;
	volatile int32_t t24 = -165;

    t24 = ((x117^x118)==(x119*x120));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint32_t x123 = 1410680U;

    t25 = ((x121^x122)==(x123*x124));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x126 = INT16_MIN;
	uint64_t x128 = 13868LLU;
	volatile int32_t t26 = -3561160;

    t26 = ((x125^x126)==(x127*x128));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x129 = INT16_MAX;
	static uint32_t x130 = 3279U;
	volatile int64_t x131 = INT64_MAX;
	volatile uint64_t x132 = 240219852LLU;
	volatile int32_t t27 = 370;

    t27 = ((x129^x130)==(x131*x132));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x133 = UINT8_MAX;
	volatile uint8_t x134 = 3U;
	uint32_t x135 = 48218628U;
	static int32_t x136 = INT32_MIN;

    t28 = ((x133^x134)==(x135*x136));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x137 = INT8_MAX;
	int32_t x138 = INT32_MIN;
	volatile uint64_t x140 = 266191264964925LLU;

    t29 = ((x137^x138)==(x139*x140));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x141 = INT32_MAX;
	int16_t x142 = -1;
	uint64_t x143 = UINT64_MAX;
	static int64_t x144 = -6199751998457LL;
	volatile int32_t t30 = 777;

    t30 = ((x141^x142)==(x143*x144));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x145 = INT32_MIN;
	int8_t x146 = 52;
	volatile int32_t x147 = INT32_MAX;
	volatile int32_t t31 = -11;

    t31 = ((x145^x146)==(x147*x148));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x149 = INT32_MAX;
	uint64_t x150 = UINT64_MAX;
	uint64_t x151 = UINT64_MAX;
	int8_t x152 = INT8_MIN;
	static int32_t t32 = -108;

    t32 = ((x149^x150)==(x151*x152));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x153 = INT64_MIN;
	volatile int16_t x155 = 110;
	uint8_t x156 = 3U;

    t33 = ((x153^x154)==(x155*x156));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x157 = 9353065973307LLU;
	int16_t x158 = INT16_MAX;
	int32_t t34 = 372694772;

    t34 = ((x157^x158)==(x159*x160));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x166 = INT32_MIN;
	volatile uint8_t x167 = 13U;
	uint32_t x168 = 21558566U;
	int32_t t35 = 47413;

    t35 = ((x165^x166)==(x167*x168));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x170 = -9;
	int16_t x171 = INT16_MIN;
	int32_t x172 = -1;
	static int32_t t36 = -7518;

    t36 = ((x169^x170)==(x171*x172));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x173 = INT64_MIN;
	uint16_t x174 = 2U;
	int64_t x175 = INT64_MIN;
	uint64_t x176 = 50853814598LLU;
	int32_t t37 = -36;

    t37 = ((x173^x174)==(x175*x176));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x177 = INT64_MIN;
	uint32_t x178 = 3069U;
	volatile uint8_t x179 = UINT8_MAX;
	volatile int32_t t38 = -13486;

    t38 = ((x177^x178)==(x179*x180));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x185 = UINT8_MAX;
	uint32_t x186 = UINT32_MAX;
	uint64_t x187 = UINT64_MAX;
	int32_t x188 = -1;
	volatile int32_t t39 = -1;

    t39 = ((x185^x186)==(x187*x188));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x193 = INT32_MIN;
	uint16_t x195 = 2U;
	static int16_t x196 = INT16_MIN;

    t40 = ((x193^x194)==(x195*x196));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x197 = 1;
	volatile uint16_t x198 = UINT16_MAX;
	volatile uint16_t x199 = UINT16_MAX;
	static uint8_t x200 = UINT8_MAX;
	volatile int32_t t41 = 18942;

    t41 = ((x197^x198)==(x199*x200));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x201 = UINT64_MAX;
	int16_t x204 = -80;
	volatile int32_t t42 = -124376;

    t42 = ((x201^x202)==(x203*x204));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x214 = -1;
	static int16_t x215 = -1;
	int64_t x216 = -2LL;
	volatile int32_t t43 = 956;

    t43 = ((x213^x214)==(x215*x216));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x218 = -1;
	uint8_t x219 = UINT8_MAX;
	volatile uint64_t x220 = UINT64_MAX;

    t44 = ((x217^x218)==(x219*x220));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x225 = UINT16_MAX;
	int16_t x227 = INT16_MAX;
	int8_t x228 = INT8_MAX;
	volatile int32_t t45 = -705679227;

    t45 = ((x225^x226)==(x227*x228));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x233 = -1LL;
	int8_t x234 = -1;
	uint32_t x236 = 778008839U;
	int32_t t46 = -1025323672;

    t46 = ((x233^x234)==(x235*x236));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x241 = -4;
	static uint64_t x242 = 10097199LLU;
	uint32_t x243 = 23883U;
	int32_t t47 = -6327227;

    t47 = ((x241^x242)==(x243*x244));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x245 = -1;
	static int8_t x246 = -1;
	int32_t x247 = -1981;

    t48 = ((x245^x246)==(x247*x248));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int32_t x261 = -16584920;
	volatile uint64_t x262 = 21095005LLU;
	uint16_t x263 = UINT16_MAX;
	int64_t x264 = 30LL;
	volatile int32_t t49 = 0;

    t49 = ((x261^x262)==(x263*x264));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x265 = 5314U;
	int32_t t50 = -553;

    t50 = ((x265^x266)==(x267*x268));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x269 = -1;
	static int32_t x270 = -1;
	volatile int16_t x271 = 17;
	volatile uint8_t x272 = 0U;
	volatile int32_t t51 = 43;

    t51 = ((x269^x270)==(x271*x272));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x289 = -4366113747264LL;
	int64_t x290 = 340808711584726510LL;
	int64_t x291 = -3997498287933159976LL;

    t52 = ((x289^x290)==(x291*x292));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x293 = 39191U;
	volatile int64_t x295 = -1LL;
	volatile int32_t t53 = 4;

    t53 = ((x293^x294)==(x295*x296));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x297 = INT32_MAX;
	volatile uint8_t x298 = 22U;
	int16_t x299 = 3241;
	uint64_t x300 = UINT64_MAX;

    t54 = ((x297^x298)==(x299*x300));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x302 = 1U;
	uint8_t x303 = 18U;
	volatile int32_t t55 = -2022;

    t55 = ((x301^x302)==(x303*x304));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x310 = INT8_MAX;
	int16_t x312 = INT16_MIN;
	static int32_t t56 = -8090989;

    t56 = ((x309^x310)==(x311*x312));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x313 = 393317911196125081LL;
	uint32_t x314 = 3U;
	static uint32_t x316 = 130491U;

    t57 = ((x313^x314)==(x315*x316));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x321 = 0U;
	int64_t x322 = -1LL;
	int32_t t58 = 14;

    t58 = ((x321^x322)==(x323*x324));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint64_t x326 = 333LLU;
	static int16_t x327 = -1;
	uint32_t x328 = 29327323U;

    t59 = ((x325^x326)==(x327*x328));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x330 = 425753U;
	int64_t x331 = -1549235957564833LL;

    t60 = ((x329^x330)==(x331*x332));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x333 = INT64_MIN;
	volatile int16_t x334 = INT16_MIN;
	uint32_t x336 = 100U;
	volatile int32_t t61 = 0;

    t61 = ((x333^x334)==(x335*x336));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x337 = -1;
	int16_t x338 = INT16_MAX;
	uint32_t x339 = UINT32_MAX;
	volatile int32_t t62 = -2094932;

    t62 = ((x337^x338)==(x339*x340));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x341 = 3971U;
	int8_t x342 = -1;
	static volatile int8_t x344 = INT8_MIN;
	static volatile int32_t t63 = 3680;

    t63 = ((x341^x342)==(x343*x344));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x355 = -1LL;

    t64 = ((x353^x354)==(x355*x356));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x357 = -1;
	volatile int32_t x358 = -59214731;
	volatile int32_t x359 = -896031;
	static uint32_t x360 = 656196071U;

    t65 = ((x357^x358)==(x359*x360));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint32_t x362 = UINT32_MAX;
	volatile uint32_t x363 = UINT32_MAX;

    t66 = ((x361^x362)==(x363*x364));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x369 = INT8_MIN;
	volatile int16_t x371 = 1;
	int16_t x372 = 1;
	int32_t t67 = 33436064;

    t67 = ((x369^x370)==(x371*x372));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x373 = INT32_MAX;
	int32_t x374 = INT32_MIN;
	static volatile int32_t x375 = -624;
	int16_t x376 = -847;

    t68 = ((x373^x374)==(x375*x376));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x377 = 3U;
	static int16_t x378 = INT16_MIN;
	volatile int8_t x379 = 7;
	int8_t x380 = -13;
	static volatile int32_t t69 = 362044;

    t69 = ((x377^x378)==(x379*x380));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x381 = INT32_MIN;
	volatile int32_t x384 = -1;
	int32_t t70 = -126545116;

    t70 = ((x381^x382)==(x383*x384));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x386 = 96;
	int16_t x387 = 1;
	int16_t x388 = INT16_MIN;
	volatile int32_t t71 = 145862;

    t71 = ((x385^x386)==(x387*x388));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x393 = INT32_MIN;
	int32_t x394 = -2815;
	volatile int64_t x395 = -1LL;
	volatile int32_t x396 = INT32_MIN;
	volatile int32_t t72 = 2;

    t72 = ((x393^x394)==(x395*x396));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x398 = INT32_MIN;
	volatile int16_t x400 = 29;
	int32_t t73 = 55;

    t73 = ((x397^x398)==(x399*x400));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x405 = INT8_MAX;
	uint64_t x407 = 6LLU;
	int32_t x408 = INT32_MAX;
	int32_t t74 = -2;

    t74 = ((x405^x406)==(x407*x408));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x409 = -3540367449565880222LL;
	volatile int8_t x411 = INT8_MIN;
	static int8_t x412 = 1;

    t75 = ((x409^x410)==(x411*x412));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x413 = 3748396U;
	int32_t x414 = INT32_MIN;
	int32_t x415 = INT32_MAX;
	volatile uint32_t x416 = 188U;
	int32_t t76 = 86033;

    t76 = ((x413^x414)==(x415*x416));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x421 = INT8_MIN;
	static uint8_t x422 = UINT8_MAX;
	int8_t x424 = INT8_MAX;
	int32_t t77 = 25043778;

    t77 = ((x421^x422)==(x423*x424));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x426 = INT64_MIN;
	static uint32_t x427 = 512543081U;
	int32_t x428 = INT32_MAX;

    t78 = ((x425^x426)==(x427*x428));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x434 = INT64_MAX;
	uint16_t x435 = 4U;
	int16_t x436 = INT16_MIN;
	static int32_t t79 = 487;

    t79 = ((x433^x434)==(x435*x436));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x437 = -122012826;
	int8_t x438 = INT8_MAX;
	static uint16_t x439 = 25U;
	int64_t x440 = 738899391921LL;
	int32_t t80 = -477395;

    t80 = ((x437^x438)==(x439*x440));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x441 = INT32_MAX;
	int16_t x442 = -1;
	volatile uint16_t x443 = UINT16_MAX;
	volatile int64_t x444 = -66451701LL;
	volatile int32_t t81 = -26714;

    t81 = ((x441^x442)==(x443*x444));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x449 = -1;
	uint32_t x450 = 1341U;
	int8_t x451 = -1;
	volatile uint16_t x452 = UINT16_MAX;
	volatile int32_t t82 = 100;

    t82 = ((x449^x450)==(x451*x452));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x453 = UINT8_MAX;
	volatile uint16_t x454 = UINT16_MAX;
	uint32_t x455 = 33733U;
	static int32_t t83 = -40425258;

    t83 = ((x453^x454)==(x455*x456));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x457 = 14240741568883046LLU;
	int64_t x458 = -1LL;
	static volatile int16_t x459 = INT16_MIN;
	volatile int16_t x460 = INT16_MAX;
	volatile int32_t t84 = -10537426;

    t84 = ((x457^x458)==(x459*x460));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x461 = 121974238U;
	volatile int32_t x463 = -1;
	static int32_t x464 = -1;

    t85 = ((x461^x462)==(x463*x464));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x473 = -22970539LL;
	static volatile int8_t x474 = 3;
	int8_t x475 = INT8_MIN;
	uint64_t x476 = UINT64_MAX;
	volatile int32_t t86 = 26710008;

    t86 = ((x473^x474)==(x475*x476));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x477 = INT8_MIN;
	int64_t x478 = -11LL;
	int16_t x479 = INT16_MIN;
	static int8_t x480 = INT8_MIN;
	int32_t t87 = -1;

    t87 = ((x477^x478)==(x479*x480));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x483 = 606U;
	static volatile uint64_t x484 = 51036959590559008LLU;
	volatile int32_t t88 = -84;

    t88 = ((x481^x482)==(x483*x484));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int16_t x485 = 758;
	int16_t x487 = INT16_MIN;
	volatile int16_t x488 = 5176;
	int32_t t89 = 3824437;

    t89 = ((x485^x486)==(x487*x488));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x489 = INT8_MIN;
	int8_t x490 = 0;
	int64_t x492 = -316130LL;
	volatile int32_t t90 = 604097380;

    t90 = ((x489^x490)==(x491*x492));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x493 = INT64_MAX;
	int64_t x494 = -1LL;
	int8_t x495 = -63;
	int64_t x496 = 6106410166472LL;

    t91 = ((x493^x494)==(x495*x496));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x497 = INT16_MIN;
	volatile uint16_t x499 = UINT16_MAX;
	uint64_t x500 = UINT64_MAX;
	volatile int32_t t92 = 802;

    t92 = ((x497^x498)==(x499*x500));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x501 = INT8_MIN;
	int64_t x502 = 25169031085989LL;
	int32_t x504 = -1;

    t93 = ((x501^x502)==(x503*x504));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x505 = -414;
	uint64_t x506 = UINT64_MAX;
	volatile int16_t x507 = -1;
	static int64_t x508 = INT64_MAX;
	volatile int32_t t94 = -12991452;

    t94 = ((x505^x506)==(x507*x508));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x513 = INT32_MIN;
	int32_t x514 = 0;
	uint8_t x515 = UINT8_MAX;
	int8_t x516 = INT8_MIN;
	int32_t t95 = -111251;

    t95 = ((x513^x514)==(x515*x516));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint32_t x517 = 9569874U;
	uint64_t x518 = UINT64_MAX;
	static uint32_t x520 = 1798U;
	int32_t t96 = -56;

    t96 = ((x517^x518)==(x519*x520));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int32_t x521 = -1;
	static uint32_t x523 = 1465191U;
	static int8_t x524 = INT8_MIN;
	int32_t t97 = -240857439;

    t97 = ((x521^x522)==(x523*x524));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint32_t x531 = UINT32_MAX;
	int32_t t98 = -217101;

    t98 = ((x529^x530)==(x531*x532));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x537 = 0U;
	volatile uint16_t x538 = UINT16_MAX;
	int64_t x539 = -1LL;
	volatile int16_t x540 = INT16_MIN;

    t99 = ((x537^x538)==(x539*x540));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x542 = -1LL;
	static volatile uint32_t x543 = 131756U;
	int32_t t100 = 0;

    t100 = ((x541^x542)==(x543*x544));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x545 = -1;
	static int32_t t101 = -516943131;

    t101 = ((x545^x546)==(x547*x548));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x549 = INT8_MAX;
	int32_t x550 = 4301094;
	int64_t x551 = -1448072825420LL;
	uint32_t x552 = 111716U;
	int32_t t102 = -369262;

    t102 = ((x549^x550)==(x551*x552));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x553 = 3U;
	int64_t x554 = INT64_MAX;
	int32_t x555 = INT32_MIN;
	volatile uint32_t x556 = 241361U;
	int32_t t103 = -2;

    t103 = ((x553^x554)==(x555*x556));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x557 = -187165LL;
	uint32_t x558 = 2U;
	static volatile int16_t x559 = 6486;
	int32_t t104 = 1;

    t104 = ((x557^x558)==(x559*x560));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x561 = INT64_MIN;
	static uint32_t x562 = UINT32_MAX;
	volatile int64_t x563 = INT64_MAX;
	static volatile int32_t t105 = 62779388;

    t105 = ((x561^x562)==(x563*x564));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x565 = UINT32_MAX;
	int64_t x568 = INT64_MIN;
	volatile int32_t t106 = -1747806;

    t106 = ((x565^x566)==(x567*x568));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x569 = -612739575;
	int16_t x570 = -61;
	int8_t x571 = 19;
	int8_t x572 = INT8_MAX;

    t107 = ((x569^x570)==(x571*x572));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x573 = UINT16_MAX;
	volatile int32_t x574 = -1;
	int16_t x575 = INT16_MIN;

    t108 = ((x573^x574)==(x575*x576));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x581 = 103U;
	uint64_t x582 = UINT64_MAX;
	uint32_t x583 = 13U;
	int32_t x584 = INT32_MIN;
	int32_t t109 = 10;

    t109 = ((x581^x582)==(x583*x584));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x585 = INT32_MIN;
	uint8_t x587 = 3U;
	int16_t x588 = -1;
	int32_t t110 = 34;

    t110 = ((x585^x586)==(x587*x588));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x589 = INT32_MAX;
	uint32_t x591 = UINT32_MAX;
	volatile uint64_t x592 = UINT64_MAX;
	int32_t t111 = 3;

    t111 = ((x589^x590)==(x591*x592));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x593 = -1LL;
	int8_t x594 = -1;
	volatile int32_t x595 = -1;
	int16_t x596 = 303;
	volatile int32_t t112 = 52554;

    t112 = ((x593^x594)==(x595*x596));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x597 = INT32_MIN;
	int8_t x598 = INT8_MIN;
	uint32_t x600 = 342128777U;
	volatile int32_t t113 = 57;

    t113 = ((x597^x598)==(x599*x600));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x603 = INT8_MIN;
	int8_t x604 = 1;
	int32_t t114 = -187096585;

    t114 = ((x601^x602)==(x603*x604));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x605 = 254U;
	static uint64_t x606 = UINT64_MAX;
	int32_t x607 = -38;
	int16_t x608 = INT16_MAX;
	int32_t t115 = -99385;

    t115 = ((x605^x606)==(x607*x608));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int32_t x609 = -1;
	int64_t x610 = INT64_MAX;
	int8_t x611 = -3;
	volatile uint8_t x612 = 94U;

    t116 = ((x609^x610)==(x611*x612));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x613 = -10LL;
	int16_t x614 = INT16_MIN;
	static int32_t x616 = INT32_MIN;
	int32_t t117 = -26819358;

    t117 = ((x613^x614)==(x615*x616));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x617 = INT8_MAX;
	uint8_t x618 = UINT8_MAX;
	static int8_t x619 = INT8_MIN;
	static int8_t x620 = INT8_MIN;
	int32_t t118 = -222675020;

    t118 = ((x617^x618)==(x619*x620));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x621 = UINT16_MAX;
	int8_t x622 = -1;
	volatile int16_t x623 = INT16_MIN;
	int32_t x624 = -1;
	volatile int32_t t119 = -5;

    t119 = ((x621^x622)==(x623*x624));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x627 = INT16_MAX;
	volatile int8_t x628 = -1;
	volatile int32_t t120 = -129112;

    t120 = ((x625^x626)==(x627*x628));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x629 = INT64_MIN;
	int16_t x630 = INT16_MIN;
	uint64_t x632 = 38082008LLU;
	static int32_t t121 = -44;

    t121 = ((x629^x630)==(x631*x632));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint32_t x633 = 7910U;
	int64_t x635 = 201297LL;
	volatile int32_t t122 = -595360;

    t122 = ((x633^x634)==(x635*x636));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x637 = 3065123840266742193LLU;
	int16_t x638 = 4427;
	volatile int16_t x639 = -1;
	int32_t x640 = 1046703;
	volatile int32_t t123 = -24;

    t123 = ((x637^x638)==(x639*x640));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x645 = 7;
	static int64_t x646 = INT64_MAX;
	volatile int32_t t124 = 75879;

    t124 = ((x645^x646)==(x647*x648));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x649 = -1;
	int16_t x650 = -1;
	volatile uint32_t x651 = 1U;
	volatile int32_t t125 = 910;

    t125 = ((x649^x650)==(x651*x652));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x653 = -1;
	uint32_t x654 = 27550U;
	volatile int16_t x655 = INT16_MAX;
	static uint32_t x656 = 295432840U;
	volatile int32_t t126 = -645;

    t126 = ((x653^x654)==(x655*x656));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x657 = 13;
	int16_t x658 = -1;
	volatile uint8_t x659 = UINT8_MAX;
	static int16_t x660 = INT16_MIN;
	volatile int32_t t127 = 450122;

    t127 = ((x657^x658)==(x659*x660));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x661 = 0;
	int16_t x662 = -1;
	int64_t x663 = -1LL;
	uint32_t x664 = 7577U;
	int32_t t128 = -586;

    t128 = ((x661^x662)==(x663*x664));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x665 = -1LL;
	volatile uint32_t x668 = 1019182U;

    t129 = ((x665^x666)==(x667*x668));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint32_t x670 = UINT32_MAX;
	uint32_t x672 = UINT32_MAX;
	int32_t t130 = -55348952;

    t130 = ((x669^x670)==(x671*x672));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x677 = UINT64_MAX;
	volatile uint16_t x678 = UINT16_MAX;
	volatile int16_t x679 = 3972;
	int64_t x680 = 1518LL;
	static volatile int32_t t131 = -9182718;

    t131 = ((x677^x678)==(x679*x680));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x681 = INT64_MAX;
	uint32_t x682 = 11395278U;
	static volatile int64_t x683 = 8348058475LL;
	int64_t x684 = -1LL;

    t132 = ((x681^x682)==(x683*x684));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x685 = 24218U;
	int64_t x686 = INT64_MIN;
	static uint8_t x688 = 1U;
	volatile int32_t t133 = 3;

    t133 = ((x685^x686)==(x687*x688));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x689 = INT32_MIN;
	int8_t x690 = INT8_MIN;
	int16_t x691 = 1;
	int8_t x692 = INT8_MIN;
	static volatile int32_t t134 = 267;

    t134 = ((x689^x690)==(x691*x692));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x693 = 0U;
	int16_t x695 = -1;
	uint8_t x696 = 3U;
	static int32_t t135 = 130692470;

    t135 = ((x693^x694)==(x695*x696));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x698 = -1;
	uint16_t x699 = 2814U;
	volatile uint16_t x700 = 17U;
	static volatile int32_t t136 = -49324035;

    t136 = ((x697^x698)==(x699*x700));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x702 = 6364329LL;
	uint64_t x704 = 3737329202715LLU;
	volatile int32_t t137 = 3584;

    t137 = ((x701^x702)==(x703*x704));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x705 = -2;
	volatile int16_t x706 = -1;
	static uint64_t x707 = UINT64_MAX;
	int32_t t138 = 63887950;

    t138 = ((x705^x706)==(x707*x708));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint16_t x709 = 1U;
	uint32_t x710 = 368580U;
	uint16_t x711 = 154U;
	volatile int8_t x712 = 0;

    t139 = ((x709^x710)==(x711*x712));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x717 = UINT32_MAX;
	int16_t x718 = INT16_MIN;
	volatile uint32_t x719 = 759438U;
	static int16_t x720 = 1;
	static int32_t t140 = 8;

    t140 = ((x717^x718)==(x719*x720));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x722 = INT64_MIN;
	volatile uint16_t x723 = 1237U;
	static volatile int8_t x724 = INT8_MIN;
	volatile int32_t t141 = 352;

    t141 = ((x721^x722)==(x723*x724));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x729 = 74693306918103929LL;
	static uint16_t x730 = 0U;
	int8_t x731 = -1;
	static volatile int8_t x732 = 0;
	static volatile int32_t t142 = -1;

    t142 = ((x729^x730)==(x731*x732));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x733 = INT8_MIN;
	int64_t x734 = 124164LL;
	static int32_t t143 = 32606;

    t143 = ((x733^x734)==(x735*x736));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x737 = 684772351U;
	uint16_t x738 = UINT16_MAX;
	uint8_t x739 = UINT8_MAX;
	volatile int8_t x740 = 6;
	int32_t t144 = -415612;

    t144 = ((x737^x738)==(x739*x740));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x741 = -1;
	static int16_t x742 = INT16_MIN;
	int64_t x743 = 19766222677LL;
	int16_t x744 = -1;
	int32_t t145 = 1001920;

    t145 = ((x741^x742)==(x743*x744));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x753 = -1;
	int64_t x754 = -1LL;
	uint8_t x755 = 2U;
	int64_t x756 = -6234173353529459LL;

    t146 = ((x753^x754)==(x755*x756));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x765 = -1;
	int16_t x767 = INT16_MAX;
	int16_t x768 = INT16_MIN;
	int32_t t147 = 28;

    t147 = ((x765^x766)==(x767*x768));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x769 = UINT16_MAX;
	uint64_t x770 = 770263LLU;
	static int64_t x771 = INT64_MIN;
	uint64_t x772 = 1679LLU;

    t148 = ((x769^x770)==(x771*x772));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x773 = INT32_MIN;
	volatile int16_t x774 = INT16_MIN;
	int64_t x775 = -1LL;
	static int32_t t149 = -87257583;

    t149 = ((x773^x774)==(x775*x776));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x777 = INT8_MIN;
	uint32_t x778 = 33061978U;
	int16_t x779 = 16;
	volatile uint16_t x780 = 13365U;
	int32_t t150 = 1;

    t150 = ((x777^x778)==(x779*x780));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x781 = 7738406553521LL;
	volatile int32_t t151 = 3909208;

    t151 = ((x781^x782)==(x783*x784));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x785 = 0;
	int16_t x786 = INT16_MAX;
	int16_t x787 = -414;
	volatile uint64_t x788 = 359581439608LLU;
	volatile int32_t t152 = 62;

    t152 = ((x785^x786)==(x787*x788));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x789 = INT16_MIN;
	int8_t x790 = 1;
	int16_t x791 = INT16_MIN;

    t153 = ((x789^x790)==(x791*x792));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x793 = 47238411U;
	int8_t x794 = INT8_MAX;
	int16_t x795 = -1;
	uint64_t x796 = 2LLU;
	int32_t t154 = 62;

    t154 = ((x793^x794)==(x795*x796));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x797 = INT64_MIN;
	int32_t x800 = -1;
	static volatile int32_t t155 = 122;

    t155 = ((x797^x798)==(x799*x800));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x806 = 326296797U;
	volatile int8_t x807 = -1;
	int8_t x808 = -11;
	volatile int32_t t156 = -210914;

    t156 = ((x805^x806)==(x807*x808));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x809 = INT16_MIN;
	static uint8_t x810 = 2U;
	uint16_t x811 = UINT16_MAX;
	uint32_t x812 = UINT32_MAX;
	int32_t t157 = -1;

    t157 = ((x809^x810)==(x811*x812));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x813 = INT8_MIN;
	int32_t x814 = 243621;
	uint16_t x815 = 293U;

    t158 = ((x813^x814)==(x815*x816));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x825 = 27LL;
	int32_t x826 = 50;
	uint16_t x827 = 15U;
	int64_t x828 = 424165635194830LL;
	int32_t t159 = 18;

    t159 = ((x825^x826)==(x827*x828));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x829 = -33251386673404695LL;
	uint32_t x830 = 1513U;
	uint32_t x831 = 25110207U;
	uint64_t x832 = 987800491366985746LLU;
	int32_t t160 = 2069385;

    t160 = ((x829^x830)==(x831*x832));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x839 = 15U;
	static volatile int8_t x840 = -5;
	volatile int32_t t161 = 56845431;

    t161 = ((x837^x838)==(x839*x840));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x841 = INT16_MIN;
	volatile int16_t x842 = INT16_MIN;
	uint8_t x843 = UINT8_MAX;
	int64_t x844 = -1LL;
	int32_t t162 = -371346143;

    t162 = ((x841^x842)==(x843*x844));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x859 = -1LL;
	volatile int8_t x860 = INT8_MAX;
	static int32_t t163 = -13473;

    t163 = ((x857^x858)==(x859*x860));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x861 = INT32_MIN;
	static int64_t x862 = INT64_MIN;
	uint64_t x863 = 271585736030277830LLU;
	int16_t x864 = 102;
	volatile int32_t t164 = 2003;

    t164 = ((x861^x862)==(x863*x864));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x865 = 39;
	static int64_t x866 = -53996106LL;
	int8_t x867 = -1;
	int32_t t165 = 16;

    t165 = ((x865^x866)==(x867*x868));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x869 = 17;
	int8_t x870 = -2;
	int8_t x871 = INT8_MIN;
	int32_t x872 = 2;
	volatile int32_t t166 = -175864;

    t166 = ((x869^x870)==(x871*x872));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x873 = 23729U;
	uint32_t x874 = 0U;
	static int64_t x875 = INT64_MIN;
	uint64_t x876 = UINT64_MAX;
	int32_t t167 = 31259580;

    t167 = ((x873^x874)==(x875*x876));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x877 = UINT8_MAX;
	volatile int16_t x879 = 0;

    t168 = ((x877^x878)==(x879*x880));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x886 = INT16_MIN;
	static volatile int32_t x888 = INT32_MAX;
	volatile int32_t t169 = -1;

    t169 = ((x885^x886)==(x887*x888));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x889 = -1;
	static volatile uint32_t x890 = 884378U;
	uint8_t x891 = UINT8_MAX;
	volatile int8_t x892 = -1;
	int32_t t170 = 5796;

    t170 = ((x889^x890)==(x891*x892));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile uint32_t x893 = 3265U;
	int32_t x894 = INT32_MAX;
	uint8_t x895 = 112U;
	uint64_t x896 = 6963242240510LLU;
	static int32_t t171 = -13017860;

    t171 = ((x893^x894)==(x895*x896));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x901 = INT64_MAX;
	uint32_t x902 = 31U;
	volatile int8_t x903 = INT8_MIN;
	static uint32_t x904 = UINT32_MAX;
	static volatile int32_t t172 = 114;

    t172 = ((x901^x902)==(x903*x904));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x905 = 1037U;
	int16_t x907 = -3;
	int32_t t173 = 123833;

    t173 = ((x905^x906)==(x907*x908));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x909 = 1214149;
	int8_t x910 = INT8_MIN;
	uint8_t x911 = UINT8_MAX;
	static uint32_t x912 = 624U;
	int32_t t174 = -48060;

    t174 = ((x909^x910)==(x911*x912));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x913 = UINT64_MAX;
	static int8_t x916 = 2;

    t175 = ((x913^x914)==(x915*x916));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int8_t x926 = INT8_MIN;
	static volatile uint16_t x927 = UINT16_MAX;
	static volatile int16_t x928 = INT16_MIN;
	int32_t t176 = -3474139;

    t176 = ((x925^x926)==(x927*x928));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x929 = -1;
	int32_t x930 = -256900;
	int16_t x932 = -8009;
	int32_t t177 = 216442521;

    t177 = ((x929^x930)==(x931*x932));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int8_t x937 = -1;
	uint64_t x938 = 5322819911494716LLU;
	int8_t x939 = 0;
	uint16_t x940 = UINT16_MAX;
	volatile int32_t t178 = -20122929;

    t178 = ((x937^x938)==(x939*x940));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x941 = 1U;
	int8_t x942 = 19;
	uint16_t x943 = 1938U;
	volatile int32_t t179 = 0;

    t179 = ((x941^x942)==(x943*x944));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint16_t x945 = UINT16_MAX;
	int32_t x946 = 82391;
	volatile int8_t x947 = INT8_MAX;
	uint16_t x948 = 6U;
	volatile int32_t t180 = 0;

    t180 = ((x945^x946)==(x947*x948));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x949 = -1;
	volatile int32_t x950 = INT32_MAX;
	uint8_t x951 = 2U;
	static int16_t x952 = -1;

    t181 = ((x949^x950)==(x951*x952));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x959 = INT16_MIN;
	volatile int32_t t182 = -923438;

    t182 = ((x957^x958)==(x959*x960));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x965 = 81U;
	static int32_t x966 = -1;
	int16_t x967 = -1;
	uint16_t x968 = UINT16_MAX;
	int32_t t183 = 27547;

    t183 = ((x965^x966)==(x967*x968));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x973 = INT64_MIN;
	int8_t x974 = INT8_MAX;
	uint32_t x975 = 6U;
	volatile int64_t x976 = 205116949LL;
	int32_t t184 = -324;

    t184 = ((x973^x974)==(x975*x976));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x981 = 12717934U;
	uint8_t x982 = 0U;
	static uint16_t x983 = UINT16_MAX;

    t185 = ((x981^x982)==(x983*x984));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x990 = INT16_MIN;
	int16_t x991 = 28;
	int32_t t186 = 319812592;

    t186 = ((x989^x990)==(x991*x992));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x997 = INT64_MIN;
	uint8_t x998 = 1U;
	int32_t x999 = INT32_MIN;
	volatile int64_t x1000 = 257651158LL;
	int32_t t187 = 34175;

    t187 = ((x997^x998)==(x999*x1000));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1001 = INT32_MIN;
	static uint64_t x1002 = 9550055460418119LLU;
	static int32_t x1003 = 2949;
	int64_t x1004 = -1LL;
	int32_t t188 = 27105223;

    t188 = ((x1001^x1002)==(x1003*x1004));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x1005 = INT32_MIN;
	int64_t x1006 = INT64_MIN;
	uint16_t x1007 = 11U;
	int8_t x1008 = 0;
	static int32_t t189 = 7361860;

    t189 = ((x1005^x1006)==(x1007*x1008));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x1009 = INT8_MIN;
	uint64_t x1010 = 6502602632LLU;
	volatile uint64_t x1011 = UINT64_MAX;
	int32_t x1012 = INT32_MAX;

    t190 = ((x1009^x1010)==(x1011*x1012));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x1013 = INT8_MIN;
	uint64_t x1015 = 694LLU;
	static int64_t x1016 = INT64_MAX;
	volatile int32_t t191 = -13;

    t191 = ((x1013^x1014)==(x1015*x1016));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x1017 = 224166584;
	static int32_t x1018 = INT32_MIN;
	uint32_t x1019 = UINT32_MAX;
	int32_t t192 = 1437098;

    t192 = ((x1017^x1018)==(x1019*x1020));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1021 = -1019768;
	volatile uint64_t x1022 = 3252957587251520LLU;
	int8_t x1023 = INT8_MIN;
	static uint8_t x1024 = 0U;
	static int32_t t193 = 301;

    t193 = ((x1021^x1022)==(x1023*x1024));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1025 = INT16_MAX;
	uint8_t x1026 = 0U;
	uint8_t x1027 = 25U;
	static int8_t x1028 = -1;
	int32_t t194 = -68910;

    t194 = ((x1025^x1026)==(x1027*x1028));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int16_t x1033 = -1;
	int32_t x1034 = INT32_MAX;
	uint8_t x1035 = UINT8_MAX;
	int16_t x1036 = 11;
	int32_t t195 = 7800;

    t195 = ((x1033^x1034)==(x1035*x1036));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x1037 = 113922775U;
	int8_t x1038 = INT8_MAX;
	int16_t x1040 = INT16_MIN;
	int32_t t196 = 1952;

    t196 = ((x1037^x1038)==(x1039*x1040));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1045 = -1LL;
	static int64_t x1046 = INT64_MIN;
	int8_t x1047 = 0;
	volatile uint16_t x1048 = 29U;
	int32_t t197 = 1849508;

    t197 = ((x1045^x1046)==(x1047*x1048));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint32_t x1049 = 123384490U;
	int8_t x1051 = INT8_MIN;
	int8_t x1052 = INT8_MIN;
	int32_t t198 = 45;

    t198 = ((x1049^x1050)==(x1051*x1052));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x1057 = INT32_MIN;
	int64_t x1058 = INT64_MIN;
	int16_t x1059 = -47;
	int64_t x1060 = -1LL;
	int32_t t199 = 8;

    t199 = ((x1057^x1058)==(x1059*x1060));

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

