
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

int32_t x2 = INT32_MIN;
int16_t x3 = INT16_MIN;
int32_t x4 = 411;
int64_t x5 = -591605856887LL;
uint64_t x10 = 23842476LLU;
uint16_t x19 = 1U;
uint8_t x27 = UINT8_MAX;
uint8_t x28 = 20U;
static volatile int32_t t5 = -1;
int8_t x29 = 26;
static uint16_t x35 = 0U;
static volatile int16_t x42 = 446;
volatile uint8_t x55 = 1U;
int32_t t9 = -41610148;
int16_t x58 = INT16_MIN;
int64_t x61 = INT64_MIN;
int32_t x68 = INT32_MIN;
uint16_t x69 = 6219U;
static int8_t x72 = INT8_MIN;
int8_t x73 = INT8_MIN;
int8_t x96 = -1;
volatile uint32_t t18 = 105U;
volatile int64_t t19 = 936093239616476LL;
int32_t x118 = 606267;
int16_t x119 = INT16_MIN;
uint16_t x120 = 1U;
int32_t t23 = -98476;
volatile int32_t t25 = 59042;
volatile int8_t x137 = INT8_MAX;
int16_t x141 = -1;
static uint16_t x152 = UINT16_MAX;
static volatile uint32_t t30 = 5U;
volatile uint8_t x177 = 14U;
static uint16_t x193 = 4729U;
uint32_t x198 = 347041U;
static int8_t x208 = -1;
volatile int16_t x209 = -9646;
int16_t x214 = INT16_MIN;
uint32_t x215 = UINT32_MAX;
uint8_t x220 = 24U;
static int32_t x225 = INT32_MIN;
uint16_t x227 = 28534U;
int64_t x230 = INT64_MIN;
static uint8_t x233 = 4U;
volatile uint8_t x236 = 15U;
int8_t x238 = INT8_MIN;
static uint8_t x239 = 5U;
int32_t x251 = 331650;
int16_t x253 = INT16_MAX;
int8_t x254 = 45;
int32_t x255 = -1;
int32_t t48 = 343;
uint8_t x266 = 22U;
int32_t x268 = 372511;
int16_t x269 = 79;
int8_t x278 = INT8_MIN;
int64_t x305 = -1LL;
static volatile int16_t x307 = INT16_MIN;
static uint64_t x311 = 416881010LLU;
static volatile int32_t t59 = 704350039;
uint8_t x334 = 7U;
uint16_t x336 = UINT16_MAX;
int64_t t60 = -75513LL;
int8_t x338 = -1;
static int8_t x365 = -1;
volatile int32_t t66 = 1;
static uint64_t x370 = 60041LLU;
volatile int32_t t69 = -999912037;
int8_t x381 = INT8_MAX;
volatile int16_t x382 = -1;
uint16_t x384 = UINT16_MAX;
uint32_t t71 = 32646U;
int16_t x395 = -1;
uint16_t x396 = 22U;
uint32_t x399 = UINT32_MAX;
int16_t x400 = -1;
volatile uint8_t x416 = 118U;
int32_t x422 = 12453020;
volatile int32_t t77 = -6771;
int8_t x426 = 57;
int32_t x428 = 200;
volatile int32_t t78 = -117308;
static int64_t x435 = -3LL;
static uint64_t x451 = 4626320863397LLU;
uint16_t x452 = 1749U;
int64_t t82 = 865LL;
uint8_t x455 = 4U;
uint16_t x463 = 1U;
volatile int8_t x464 = -1;
static uint32_t t85 = 669824U;
volatile uint8_t x475 = 94U;
uint8_t x476 = UINT8_MAX;
uint8_t x479 = 2U;
volatile int64_t t88 = -1064432267910482LL;
uint64_t x492 = UINT64_MAX;
static uint16_t x495 = 3U;
int64_t x506 = INT64_MIN;
uint64_t x513 = 1236922587572806LLU;
static int64_t x520 = -10173582LL;
int8_t x530 = -1;
uint64_t x539 = 67986922402260LLU;
int32_t t97 = -31737;
int64_t x551 = -1LL;
static int32_t t100 = 2306004;
volatile int8_t x554 = 25;
static int32_t t103 = -14;
volatile int32_t x566 = -1;
static uint32_t x567 = 1918U;
int32_t x574 = INT32_MIN;
static volatile uint64_t t105 = 12029444657634LLU;
static int8_t x580 = -1;
uint32_t t107 = 30740156U;
uint8_t x590 = UINT8_MAX;
volatile int32_t x591 = 3877;
static volatile int16_t x592 = INT16_MIN;
uint16_t x606 = UINT16_MAX;
int64_t x607 = 2971203LL;
uint8_t x611 = 1U;
int32_t x612 = 4281;
static uint16_t x617 = UINT16_MAX;
int8_t x623 = INT8_MAX;
static volatile int32_t t114 = -289797;
int32_t x625 = INT32_MIN;
int64_t x626 = INT64_MIN;
static int8_t x629 = INT8_MAX;
int8_t x635 = -1;
volatile int64_t x647 = -1LL;
volatile int32_t t119 = -64;
int16_t x655 = 48;
static int8_t x659 = -1;
volatile int8_t x671 = INT8_MIN;
uint32_t x672 = 596782102U;
volatile int32_t t123 = -12;
volatile uint64_t x680 = 56396586479175LLU;
int32_t x690 = INT32_MAX;
int16_t x691 = INT16_MIN;
volatile int32_t t130 = -687437;
uint32_t x715 = 8808016U;
uint32_t x716 = 196423896U;
static int64_t x723 = INT64_MIN;
volatile int32_t t132 = -252;
volatile uint32_t x732 = 4U;
uint64_t x734 = 178005260LLU;
volatile int32_t t134 = 52;
uint8_t x737 = 2U;
int32_t x742 = -11;
uint8_t x750 = 26U;
uint32_t t138 = 9988323U;
int32_t t139 = 11151799;
uint32_t x767 = UINT32_MAX;
static int32_t x768 = INT32_MIN;
static int8_t x770 = INT8_MIN;
uint16_t x771 = UINT16_MAX;
static int16_t x772 = -3;
int16_t x778 = INT16_MIN;
uint64_t x780 = 1176277519674766LLU;
int16_t x783 = 174;
volatile uint32_t x784 = UINT32_MAX;
uint64_t x789 = 8LLU;
static uint64_t x791 = 19783LLU;
int8_t x805 = -11;
uint64_t x811 = UINT64_MAX;
int32_t x812 = INT32_MIN;
int32_t t148 = -47919;
int64_t x814 = -1LL;
int16_t x828 = INT16_MIN;
volatile int64_t t151 = 211527189296LL;
static int8_t x837 = INT8_MIN;
int8_t x840 = INT8_MIN;
uint16_t x851 = 120U;
int64_t t155 = -21413860LL;
static int64_t x856 = -1LL;
static volatile int32_t x858 = 300675;
static int16_t x859 = 134;
static volatile int32_t t158 = -23848;
int32_t x865 = INT32_MIN;
volatile int32_t x867 = -733714151;
static volatile int8_t x877 = -2;
int64_t x882 = 0LL;
static uint32_t x885 = UINT32_MAX;
int8_t x889 = INT8_MAX;
uint8_t x892 = UINT8_MAX;
volatile int32_t t164 = 50;
int64_t x917 = INT64_MAX;
uint16_t x921 = 0U;
int64_t x922 = INT64_MIN;
int32_t x923 = 1;
int32_t t169 = 194;
volatile int16_t x927 = -780;
int8_t x940 = -1;
static int8_t x956 = INT8_MAX;
int16_t x957 = -1;
int64_t x960 = -1LL;
volatile int32_t t177 = 7402;
static uint8_t x976 = 29U;
static int32_t x978 = INT32_MIN;
int64_t x984 = 728931183980LL;
uint8_t x985 = UINT8_MAX;
static volatile uint32_t x988 = 15527423U;
uint16_t x993 = 3U;
volatile int32_t t183 = -2;
int8_t x998 = INT8_MIN;
int8_t x999 = -1;
int8_t x1007 = 14;
volatile int64_t t186 = -9LL;
int8_t x1010 = INT8_MAX;
int64_t x1025 = -1LL;
uint64_t x1026 = 77LLU;
int64_t t189 = -56LL;
volatile int16_t x1037 = -1;
volatile int32_t x1038 = INT32_MIN;
int64_t x1039 = -1LL;
int32_t x1056 = -3785323;
uint64_t x1064 = UINT64_MAX;
int16_t x1070 = INT16_MIN;
static int32_t t197 = 0;
volatile int32_t t199 = 4548503;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	int32_t t0 = 5;

    t0 = (x1&(x2>(x3*x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint32_t x6 = UINT32_MAX;
	int32_t x7 = 170952;
	int64_t x8 = -7061003523LL;
	volatile int64_t t1 = 184986LL;

    t1 = (x5&(x6>(x7*x8)));

    if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int64_t x9 = -308220LL;
	static int8_t x11 = INT8_MIN;
	volatile int8_t x12 = INT8_MIN;
	int64_t t2 = 15839060LL;

    t2 = (x9&(x10>(x11*x12)));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	uint16_t x14 = 94U;
	int16_t x15 = INT16_MIN;
	uint64_t x16 = UINT64_MAX;
	volatile int32_t t3 = 412544;

    t3 = (x13&(x14>(x15*x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 65U;
	volatile uint32_t x18 = 0U;
	int8_t x20 = 1;
	static int32_t t4 = -931584;

    t4 = (x17&(x18>(x19*x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = INT32_MIN;
	uint64_t x26 = 154LLU;

    t5 = (x25&(x26>(x27*x28)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x30 = -1657;
	uint16_t x31 = 10944U;
	int8_t x32 = INT8_MIN;
	int32_t t6 = 1;

    t6 = (x29&(x30>(x31*x32)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x33 = 28U;
	volatile uint16_t x34 = UINT16_MAX;
	int8_t x36 = 0;
	int32_t t7 = -1;

    t7 = (x33&(x34>(x35*x36)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x41 = INT64_MIN;
	static int64_t x43 = -1LL;
	int32_t x44 = INT32_MAX;
	int64_t t8 = -44LL;

    t8 = (x41&(x42>(x43*x44)));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x53 = -24;
	int8_t x54 = 0;
	static volatile uint32_t x56 = 186U;

    t9 = (x53&(x54>(x55*x56)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x57 = INT8_MIN;
	static volatile uint8_t x59 = 5U;
	int8_t x60 = 48;
	int32_t t10 = -991;

    t10 = (x57&(x58>(x59*x60)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x62 = -1310LL;
	volatile int8_t x63 = 0;
	static int16_t x64 = INT16_MIN;
	int64_t t11 = -17930871412LL;

    t11 = (x61&(x62>(x63*x64)));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x65 = 3;
	static uint8_t x66 = UINT8_MAX;
	uint32_t x67 = 495U;
	static int32_t t12 = 59706344;

    t12 = (x65&(x66>(x67*x68)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x70 = INT8_MIN;
	static int64_t x71 = -2646118510196LL;
	volatile int32_t t13 = 431;

    t13 = (x69&(x70>(x71*x72)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x74 = 61U;
	uint32_t x75 = 0U;
	uint64_t x76 = UINT64_MAX;
	volatile int32_t t14 = -45293;

    t14 = (x73&(x74>(x75*x76)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x77 = INT32_MAX;
	uint64_t x78 = UINT64_MAX;
	volatile int64_t x79 = 626628731704423313LL;
	static int8_t x80 = -1;
	int32_t t15 = 22567;

    t15 = (x77&(x78>(x79*x80)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x81 = INT8_MIN;
	uint32_t x82 = UINT32_MAX;
	uint16_t x83 = 8108U;
	int8_t x84 = -1;
	volatile int32_t t16 = 9722;

    t16 = (x81&(x82>(x83*x84)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x93 = INT32_MIN;
	static int8_t x94 = -1;
	volatile int64_t x95 = -34580527086029LL;
	volatile int32_t t17 = -44272043;

    t17 = (x93&(x94>(x95*x96)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x97 = 0U;
	uint8_t x98 = UINT8_MAX;
	int8_t x99 = -1;
	int16_t x100 = 0;

    t18 = (x97&(x98>(x99*x100)));

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x101 = -216058823194554LL;
	static int64_t x102 = INT64_MIN;
	static int32_t x103 = -1;
	uint16_t x104 = 27056U;

    t19 = (x101&(x102>(x103*x104)));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x105 = 46190843594LLU;
	uint32_t x106 = 380080661U;
	uint64_t x107 = UINT64_MAX;
	uint64_t x108 = UINT64_MAX;
	volatile uint64_t t20 = 21LLU;

    t20 = (x105&(x106>(x107*x108)));

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x113 = INT8_MAX;
	int32_t x114 = -498334960;
	uint8_t x115 = 52U;
	int16_t x116 = 504;
	volatile int32_t t21 = -280;

    t21 = (x113&(x114>(x115*x116)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x117 = 2649;
	volatile int32_t t22 = -3;

    t22 = (x117&(x118>(x119*x120)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x121 = UINT16_MAX;
	uint8_t x122 = UINT8_MAX;
	volatile uint64_t x123 = 163218069625713LLU;
	uint64_t x124 = UINT64_MAX;

    t23 = (x121&(x122>(x123*x124)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x125 = 60LLU;
	int8_t x126 = INT8_MIN;
	static uint64_t x127 = 120LLU;
	int32_t x128 = -1;
	static uint64_t t24 = 51833101LLU;

    t24 = (x125&(x126>(x127*x128)));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x133 = INT32_MIN;
	static uint32_t x134 = 21U;
	int8_t x135 = 4;
	int16_t x136 = -1;

    t25 = (x133&(x134>(x135*x136)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x138 = UINT32_MAX;
	static int8_t x139 = INT8_MIN;
	volatile int8_t x140 = INT8_MIN;
	static int32_t t26 = 6;

    t26 = (x137&(x138>(x139*x140)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint8_t x142 = 116U;
	volatile uint32_t x143 = UINT32_MAX;
	int32_t x144 = 831977948;
	static volatile int32_t t27 = 1;

    t27 = (x141&(x142>(x143*x144)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x145 = 288U;
	int16_t x146 = INT16_MAX;
	int64_t x147 = INT64_MAX;
	int32_t x148 = -1;
	int32_t t28 = 19;

    t28 = (x145&(x146>(x147*x148)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x149 = UINT32_MAX;
	static int8_t x150 = INT8_MIN;
	int8_t x151 = INT8_MIN;
	volatile uint32_t t29 = 0U;

    t29 = (x149&(x150>(x151*x152)));

    if (t29 != 1U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x161 = 1273247U;
	int32_t x162 = -82613;
	int16_t x163 = INT16_MIN;
	uint64_t x164 = 4065446671LLU;

    t30 = (x161&(x162>(x163*x164)));

    if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x178 = -54;
	volatile int16_t x179 = -1;
	uint8_t x180 = 37U;
	static int32_t t31 = 25146099;

    t31 = (x177&(x178>(x179*x180)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x181 = -1LL;
	static int32_t x182 = INT32_MIN;
	uint32_t x183 = 12900198U;
	int8_t x184 = INT8_MAX;
	volatile int64_t t32 = 177570857382512984LL;

    t32 = (x181&(x182>(x183*x184)));

    if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x189 = INT8_MIN;
	uint16_t x190 = 4U;
	int8_t x191 = 12;
	uint16_t x192 = UINT16_MAX;
	volatile int32_t t33 = 31311;

    t33 = (x189&(x190>(x191*x192)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x194 = -9;
	volatile uint16_t x195 = 1514U;
	volatile uint16_t x196 = 23833U;
	int32_t t34 = 1819;

    t34 = (x193&(x194>(x195*x196)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x197 = 1;
	int64_t x199 = 1333388LL;
	int16_t x200 = INT16_MIN;
	volatile int32_t t35 = -744332;

    t35 = (x197&(x198>(x199*x200)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x201 = -1;
	uint64_t x202 = UINT64_MAX;
	static int8_t x203 = -2;
	int16_t x204 = INT16_MIN;
	int32_t t36 = -16334;

    t36 = (x201&(x202>(x203*x204)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x205 = 2074;
	int8_t x206 = INT8_MIN;
	int64_t x207 = INT64_MAX;
	static volatile int32_t t37 = -146297056;

    t37 = (x205&(x206>(x207*x208)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int16_t x210 = -1;
	int64_t x211 = -1LL;
	volatile int16_t x212 = -1;
	static int32_t t38 = 344763294;

    t38 = (x209&(x210>(x211*x212)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x213 = UINT16_MAX;
	uint8_t x216 = 52U;
	volatile int32_t t39 = 0;

    t39 = (x213&(x214>(x215*x216)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x217 = INT16_MAX;
	static volatile int8_t x218 = INT8_MIN;
	int32_t x219 = -1;
	static volatile int32_t t40 = 1899123;

    t40 = (x217&(x218>(x219*x220)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x226 = 629;
	int16_t x228 = INT16_MIN;
	static volatile int32_t t41 = 891585;

    t41 = (x225&(x226>(x227*x228)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x229 = INT16_MIN;
	int8_t x231 = INT8_MIN;
	uint8_t x232 = 1U;
	volatile int32_t t42 = -33219384;

    t42 = (x229&(x230>(x231*x232)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x234 = -2955;
	volatile uint32_t x235 = UINT32_MAX;
	int32_t t43 = -1;

    t43 = (x233&(x234>(x235*x236)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x237 = UINT64_MAX;
	volatile uint64_t x240 = 152528152592544LLU;
	volatile uint64_t t44 = 543003150873775621LLU;

    t44 = (x237&(x238>(x239*x240)));

    if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x241 = 0;
	uint32_t x242 = 65U;
	int16_t x243 = INT16_MIN;
	int64_t x244 = -1LL;
	static volatile int32_t t45 = 8;

    t45 = (x241&(x242>(x243*x244)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x245 = UINT64_MAX;
	uint16_t x246 = 44U;
	int64_t x247 = -16133399LL;
	int8_t x248 = 0;
	static uint64_t t46 = 0LLU;

    t46 = (x245&(x246>(x247*x248)));

    if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x249 = 2154447LLU;
	static uint16_t x250 = 203U;
	volatile int8_t x252 = INT8_MAX;
	static volatile uint64_t t47 = 232717131050304982LLU;

    t47 = (x249&(x250>(x251*x252)));

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x256 = -393LL;

    t48 = (x253&(x254>(x255*x256)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x261 = INT32_MIN;
	int16_t x262 = INT16_MAX;
	int64_t x263 = -1LL;
	uint16_t x264 = 27320U;
	volatile int32_t t49 = 80057642;

    t49 = (x261&(x262>(x263*x264)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x265 = INT64_MIN;
	int8_t x267 = INT8_MIN;
	int64_t t50 = -3091179LL;

    t50 = (x265&(x266>(x267*x268)));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x270 = INT8_MAX;
	int8_t x271 = -7;
	int16_t x272 = -627;
	int32_t t51 = 5589;

    t51 = (x269&(x270>(x271*x272)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x277 = INT32_MIN;
	static int32_t x279 = -1;
	int32_t x280 = -7;
	int32_t t52 = -21415;

    t52 = (x277&(x278>(x279*x280)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x285 = -1;
	uint16_t x286 = 2759U;
	volatile uint16_t x287 = 25684U;
	uint16_t x288 = 154U;
	volatile int32_t t53 = 1262569;

    t53 = (x285&(x286>(x287*x288)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x289 = -1;
	static uint64_t x290 = UINT64_MAX;
	uint64_t x291 = 378569LLU;
	static volatile int32_t x292 = INT32_MIN;
	volatile int32_t t54 = 12;

    t54 = (x289&(x290>(x291*x292)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x301 = INT32_MIN;
	int64_t x302 = 1885561LL;
	uint32_t x303 = UINT32_MAX;
	uint8_t x304 = 49U;
	static int32_t t55 = 161;

    t55 = (x301&(x302>(x303*x304)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x306 = -88328982LL;
	int16_t x308 = INT16_MIN;
	volatile int64_t t56 = 30LL;

    t56 = (x305&(x306>(x307*x308)));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x309 = INT32_MIN;
	uint64_t x310 = 2181057993384249LLU;
	int8_t x312 = -1;
	static volatile int32_t t57 = -28;

    t57 = (x309&(x310>(x311*x312)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int8_t x313 = INT8_MIN;
	static uint32_t x314 = 37362526U;
	int8_t x315 = 7;
	uint64_t x316 = UINT64_MAX;
	int32_t t58 = 32699969;

    t58 = (x313&(x314>(x315*x316)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x325 = INT16_MIN;
	int32_t x326 = -1;
	uint16_t x327 = 172U;
	volatile int8_t x328 = INT8_MIN;

    t59 = (x325&(x326>(x327*x328)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x333 = INT64_MIN;
	volatile uint64_t x335 = 116007801808059882LLU;

    t60 = (x333&(x334>(x335*x336)));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x337 = -997;
	int16_t x339 = 14;
	int16_t x340 = -1;
	int32_t t61 = 32346;

    t61 = (x337&(x338>(x339*x340)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x341 = -1LL;
	int32_t x342 = INT32_MAX;
	int8_t x343 = INT8_MIN;
	int64_t x344 = 7719710859LL;
	volatile int64_t t62 = -3LL;

    t62 = (x341&(x342>(x343*x344)));

    if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x349 = INT8_MIN;
	volatile int32_t x350 = INT32_MIN;
	uint16_t x351 = 1U;
	static volatile int16_t x352 = -1;
	static int32_t t63 = -5527936;

    t63 = (x349&(x350>(x351*x352)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x353 = UINT32_MAX;
	int64_t x354 = INT64_MIN;
	volatile uint32_t x355 = UINT32_MAX;
	uint16_t x356 = UINT16_MAX;
	static uint32_t t64 = 5U;

    t64 = (x353&(x354>(x355*x356)));

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x361 = INT16_MIN;
	volatile uint8_t x362 = UINT8_MAX;
	int16_t x363 = INT16_MIN;
	int8_t x364 = 0;
	volatile int32_t t65 = -2;

    t65 = (x361&(x362>(x363*x364)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x366 = INT8_MIN;
	int8_t x367 = INT8_MIN;
	int16_t x368 = -1;

    t66 = (x365&(x366>(x367*x368)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x369 = INT64_MIN;
	int16_t x371 = INT16_MAX;
	int16_t x372 = INT16_MAX;
	volatile int64_t t67 = -1LL;

    t67 = (x369&(x370>(x371*x372)));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x373 = INT16_MIN;
	int16_t x374 = INT16_MIN;
	volatile int8_t x375 = INT8_MIN;
	int8_t x376 = -1;
	static int32_t t68 = -15501;

    t68 = (x373&(x374>(x375*x376)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x377 = 50U;
	int8_t x378 = INT8_MIN;
	int16_t x379 = INT16_MAX;
	static uint32_t x380 = 1408U;

    t69 = (x377&(x378>(x379*x380)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x383 = -1;
	static volatile int32_t t70 = 0;

    t70 = (x381&(x382>(x383*x384)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint32_t x389 = UINT32_MAX;
	static int8_t x390 = -1;
	volatile uint64_t x391 = 92905790997891LLU;
	int8_t x392 = INT8_MIN;

    t71 = (x389&(x390>(x391*x392)));

    if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x393 = 3U;
	uint16_t x394 = 3945U;
	static int32_t t72 = -19028907;

    t72 = (x393&(x394>(x395*x396)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x397 = UINT8_MAX;
	static int32_t x398 = 691008311;
	int32_t t73 = -78350;

    t73 = (x397&(x398>(x399*x400)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x401 = UINT8_MAX;
	int16_t x402 = INT16_MAX;
	int16_t x403 = -17;
	volatile int8_t x404 = INT8_MIN;
	int32_t t74 = -336287682;

    t74 = (x401&(x402>(x403*x404)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x413 = INT8_MIN;
	int8_t x414 = -1;
	int32_t x415 = 3948;
	int32_t t75 = -1014795209;

    t75 = (x413&(x414>(x415*x416)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x417 = 341713751322050696LL;
	int16_t x418 = -1;
	uint32_t x419 = 82U;
	volatile uint64_t x420 = 167208776500438758LLU;
	int64_t t76 = -6898097208651LL;

    t76 = (x417&(x418>(x419*x420)));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x421 = 50;
	volatile int8_t x423 = INT8_MAX;
	volatile uint32_t x424 = 2301U;

    t77 = (x421&(x422>(x423*x424)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x425 = UINT16_MAX;
	static uint32_t x427 = 15438U;

    t78 = (x425&(x426>(x427*x428)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x433 = -1;
	int8_t x434 = INT8_MAX;
	static uint16_t x436 = 3U;
	static volatile int32_t t79 = -248943481;

    t79 = (x433&(x434>(x435*x436)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x437 = -7;
	static volatile uint16_t x438 = UINT16_MAX;
	int16_t x439 = INT16_MIN;
	volatile uint16_t x440 = UINT16_MAX;
	static volatile int32_t t80 = 685438297;

    t80 = (x437&(x438>(x439*x440)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x445 = 231LL;
	uint8_t x446 = UINT8_MAX;
	volatile uint16_t x447 = 0U;
	int8_t x448 = -1;
	static int64_t t81 = 95793113334500LL;

    t81 = (x445&(x446>(x447*x448)));

    if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x449 = INT64_MIN;
	uint8_t x450 = 13U;

    t82 = (x449&(x450>(x451*x452)));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x453 = -1LL;
	int8_t x454 = INT8_MIN;
	uint64_t x456 = UINT64_MAX;
	int64_t t83 = -22745954967LL;

    t83 = (x453&(x454>(x455*x456)));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x457 = -1;
	int64_t x458 = INT64_MIN;
	static volatile uint64_t x459 = 31LLU;
	int16_t x460 = INT16_MAX;
	volatile int32_t t84 = 1;

    t84 = (x457&(x458>(x459*x460)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint32_t x461 = UINT32_MAX;
	int32_t x462 = 1393;

    t85 = (x461&(x462>(x463*x464)));

    if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x469 = -2;
	static int32_t x470 = INT32_MIN;
	int16_t x471 = 1;
	int8_t x472 = -42;
	volatile int32_t t86 = 27;

    t86 = (x469&(x470>(x471*x472)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x473 = INT32_MIN;
	volatile int8_t x474 = INT8_MIN;
	int32_t t87 = 17365067;

    t87 = (x473&(x474>(x475*x476)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x477 = -1LL;
	volatile uint16_t x478 = 47U;
	static int16_t x480 = INT16_MAX;

    t88 = (x477&(x478>(x479*x480)));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x485 = 12601U;
	int8_t x486 = -1;
	uint64_t x487 = UINT64_MAX;
	uint64_t x488 = 1082108176012082LLU;
	static uint32_t t89 = 1U;

    t89 = (x485&(x486>(x487*x488)));

    if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x489 = UINT16_MAX;
	int64_t x490 = INT64_MIN;
	int8_t x491 = 0;
	int32_t t90 = 3969;

    t90 = (x489&(x490>(x491*x492)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint32_t x493 = 74U;
	int32_t x494 = INT32_MAX;
	uint8_t x496 = UINT8_MAX;
	volatile uint32_t t91 = 270U;

    t91 = (x493&(x494>(x495*x496)));

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x501 = INT16_MAX;
	int16_t x502 = INT16_MIN;
	uint16_t x503 = 0U;
	static volatile int8_t x504 = -2;
	int32_t t92 = 275139992;

    t92 = (x501&(x502>(x503*x504)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x505 = 381U;
	static int32_t x507 = 281;
	int8_t x508 = -1;
	volatile uint32_t t93 = 72U;

    t93 = (x505&(x506>(x507*x508)));

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x514 = 345422752U;
	static volatile int64_t x515 = 7664774497LL;
	int32_t x516 = -1;
	uint64_t t94 = 9917607LLU;

    t94 = (x513&(x514>(x515*x516)));

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x517 = INT64_MIN;
	static uint32_t x518 = UINT32_MAX;
	int32_t x519 = INT32_MAX;
	int64_t t95 = 11479370702703LL;

    t95 = (x517&(x518>(x519*x520)));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x529 = INT32_MIN;
	static uint16_t x531 = 0U;
	static uint16_t x532 = UINT16_MAX;
	int32_t t96 = 32406311;

    t96 = (x529&(x530>(x531*x532)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x537 = -1;
	int8_t x538 = INT8_MIN;
	uint8_t x540 = 3U;

    t97 = (x537&(x538>(x539*x540)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x541 = -1;
	int64_t x542 = INT64_MIN;
	static uint8_t x543 = UINT8_MAX;
	volatile int32_t x544 = 51;
	int32_t t98 = 164122111;

    t98 = (x541&(x542>(x543*x544)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint16_t x545 = UINT16_MAX;
	int8_t x546 = 0;
	static int8_t x547 = 1;
	uint32_t x548 = UINT32_MAX;
	int32_t t99 = -12;

    t99 = (x545&(x546>(x547*x548)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint8_t x549 = 0U;
	uint16_t x550 = UINT16_MAX;
	uint16_t x552 = UINT16_MAX;

    t100 = (x549&(x550>(x551*x552)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x553 = 9688;
	static uint16_t x555 = 8665U;
	uint64_t x556 = 345LLU;
	volatile int32_t t101 = -5287759;

    t101 = (x553&(x554>(x555*x556)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x557 = 5U;
	volatile uint64_t x558 = 122LLU;
	volatile uint8_t x559 = 1U;
	uint16_t x560 = UINT16_MAX;
	volatile int32_t t102 = 1205220;

    t102 = (x557&(x558>(x559*x560)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x561 = -1;
	uint16_t x562 = 6U;
	int16_t x563 = -180;
	int8_t x564 = INT8_MIN;

    t103 = (x561&(x562>(x563*x564)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x565 = 3262827U;
	volatile uint32_t x568 = 362U;
	uint32_t t104 = 25U;

    t104 = (x565&(x566>(x567*x568)));

    if (t104 != 1U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x573 = 889098534LLU;
	static volatile int8_t x575 = -9;
	uint16_t x576 = 145U;

    t105 = (x573&(x574>(x575*x576)));

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x577 = INT8_MIN;
	uint8_t x578 = UINT8_MAX;
	volatile int16_t x579 = INT16_MIN;
	int32_t t106 = -265;

    t106 = (x577&(x578>(x579*x580)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x581 = 220802U;
	static uint8_t x582 = 13U;
	volatile int8_t x583 = -1;
	int64_t x584 = -4958221859169925LL;

    t107 = (x581&(x582>(x583*x584)));

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x589 = -1;
	volatile int32_t t108 = 381163931;

    t108 = (x589&(x590>(x591*x592)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x593 = -55881568;
	int16_t x594 = INT16_MAX;
	uint32_t x595 = UINT32_MAX;
	int8_t x596 = -7;
	volatile int32_t t109 = -558045;

    t109 = (x593&(x594>(x595*x596)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x597 = INT64_MAX;
	volatile int64_t x598 = INT64_MAX;
	volatile uint16_t x599 = 653U;
	int16_t x600 = 33;
	int64_t t110 = 1LL;

    t110 = (x597&(x598>(x599*x600)));

    if (t110 != 1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x605 = 98U;
	static volatile uint64_t x608 = 44837520751309LLU;
	int32_t t111 = 7281404;

    t111 = (x605&(x606>(x607*x608)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x609 = UINT16_MAX;
	uint16_t x610 = 143U;
	int32_t t112 = 1885;

    t112 = (x609&(x610>(x611*x612)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x618 = INT64_MIN;
	volatile int16_t x619 = -1;
	int16_t x620 = -3205;
	volatile int32_t t113 = -3600;

    t113 = (x617&(x618>(x619*x620)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x621 = -1;
	volatile int8_t x622 = 1;
	uint16_t x624 = 3454U;

    t114 = (x621&(x622>(x623*x624)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint64_t x627 = 41309978166919LLU;
	uint32_t x628 = 3698U;
	static volatile int32_t t115 = -509941338;

    t115 = (x625&(x626>(x627*x628)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x630 = 4;
	volatile int16_t x631 = INT16_MIN;
	uint16_t x632 = 13U;
	static volatile int32_t t116 = 70;

    t116 = (x629&(x630>(x631*x632)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x633 = 3666528;
	uint16_t x634 = UINT16_MAX;
	int8_t x636 = INT8_MAX;
	int32_t t117 = 1;

    t117 = (x633&(x634>(x635*x636)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x641 = 190LL;
	int32_t x642 = 52311;
	volatile int8_t x643 = 1;
	static volatile uint16_t x644 = 958U;
	volatile int64_t t118 = 2458579060LL;

    t118 = (x641&(x642>(x643*x644)));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x645 = 12061;
	int16_t x646 = -1;
	uint8_t x648 = 10U;

    t119 = (x645&(x646>(x647*x648)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x653 = INT32_MIN;
	int32_t x654 = -3514;
	int8_t x656 = INT8_MIN;
	volatile int32_t t120 = -1;

    t120 = (x653&(x654>(x655*x656)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x657 = -4455870LL;
	int8_t x658 = -1;
	uint32_t x660 = 4340U;
	static volatile int64_t t121 = 1664LL;

    t121 = (x657&(x658>(x659*x660)));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x661 = 10;
	int16_t x662 = INT16_MAX;
	int8_t x663 = -1;
	uint32_t x664 = 132909U;
	int32_t t122 = 183682;

    t122 = (x661&(x662>(x663*x664)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x669 = INT32_MAX;
	volatile int32_t x670 = INT32_MAX;

    t123 = (x669&(x670>(x671*x672)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x677 = -1;
	int64_t x678 = INT64_MIN;
	int8_t x679 = 2;
	static int32_t t124 = 166;

    t124 = (x677&(x678>(x679*x680)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x689 = INT32_MIN;
	uint16_t x692 = 196U;
	volatile int32_t t125 = -434;

    t125 = (x689&(x690>(x691*x692)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x693 = 5971;
	uint32_t x694 = UINT32_MAX;
	int64_t x695 = -1LL;
	int32_t x696 = -15565;
	int32_t t126 = 18;

    t126 = (x693&(x694>(x695*x696)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x697 = INT16_MIN;
	int16_t x698 = -3359;
	static int16_t x699 = INT16_MAX;
	static int64_t x700 = -21478LL;
	volatile int32_t t127 = 16326201;

    t127 = (x697&(x698>(x699*x700)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x701 = -1;
	volatile int8_t x702 = -1;
	uint32_t x703 = 347784U;
	uint64_t x704 = 20657168249322LLU;
	int32_t t128 = -846;

    t128 = (x701&(x702>(x703*x704)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x705 = INT8_MIN;
	volatile uint64_t x706 = UINT64_MAX;
	int8_t x707 = -1;
	static int32_t x708 = -1;
	volatile int32_t t129 = -2911592;

    t129 = (x705&(x706>(x707*x708)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x709 = INT16_MIN;
	static int16_t x710 = 0;
	int64_t x711 = -1LL;
	uint64_t x712 = 2733207893173124528LLU;

    t130 = (x709&(x710>(x711*x712)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x713 = 1063093560878079LLU;
	static int16_t x714 = -1;
	volatile uint64_t t131 = 226264656546550LLU;

    t131 = (x713&(x714>(x715*x716)));

    if (t131 != 1LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x721 = 42U;
	int64_t x722 = -132796381839LL;
	volatile int64_t x724 = 0LL;

    t132 = (x721&(x722>(x723*x724)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x729 = -1;
	volatile int8_t x730 = -1;
	int16_t x731 = INT16_MAX;
	volatile int32_t t133 = -1188950;

    t133 = (x729&(x730>(x731*x732)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x733 = UINT8_MAX;
	int32_t x735 = 1794;
	static volatile uint32_t x736 = UINT32_MAX;

    t134 = (x733&(x734>(x735*x736)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x738 = INT64_MAX;
	uint8_t x739 = 6U;
	int16_t x740 = INT16_MIN;
	volatile int32_t t135 = 4318;

    t135 = (x737&(x738>(x739*x740)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x741 = 37U;
	int16_t x743 = 50;
	int64_t x744 = -50926245007410248LL;
	volatile int32_t t136 = -16743174;

    t136 = (x741&(x742>(x743*x744)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint64_t x749 = UINT64_MAX;
	uint32_t x751 = 144020U;
	static int64_t x752 = -4447754418055LL;
	uint64_t t137 = 102726524006LLU;

    t137 = (x749&(x750>(x751*x752)));

    if (t137 != 1LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint32_t x753 = 389U;
	int16_t x754 = INT16_MIN;
	static int64_t x755 = -906668LL;
	static int16_t x756 = -1;

    t138 = (x753&(x754>(x755*x756)));

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x757 = INT16_MIN;
	int64_t x758 = -1LL;
	uint8_t x759 = UINT8_MAX;
	int16_t x760 = 1;

    t139 = (x757&(x758>(x759*x760)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x761 = INT16_MAX;
	int16_t x762 = INT16_MAX;
	int8_t x763 = INT8_MAX;
	volatile int16_t x764 = INT16_MIN;
	volatile int32_t t140 = -707919415;

    t140 = (x761&(x762>(x763*x764)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x765 = 4387765U;
	static uint8_t x766 = 3U;
	uint32_t t141 = 14610012U;

    t141 = (x765&(x766>(x767*x768)));

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x769 = 36U;
	volatile int32_t t142 = -83431;

    t142 = (x769&(x770>(x771*x772)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x773 = INT32_MIN;
	int64_t x774 = INT64_MIN;
	uint8_t x775 = 34U;
	static int64_t x776 = -582602LL;
	volatile int32_t t143 = 4;

    t143 = (x773&(x774>(x775*x776)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x777 = UINT16_MAX;
	int8_t x779 = -1;
	int32_t t144 = -22627;

    t144 = (x777&(x778>(x779*x780)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x781 = INT16_MAX;
	static int32_t x782 = -1;
	volatile int32_t t145 = -10509341;

    t145 = (x781&(x782>(x783*x784)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x790 = -8;
	static int16_t x792 = INT16_MIN;
	volatile uint64_t t146 = 5553959426768LLU;

    t146 = (x789&(x790>(x791*x792)));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x806 = 1LLU;
	int8_t x807 = INT8_MIN;
	static volatile uint8_t x808 = 119U;
	volatile int32_t t147 = 172564467;

    t147 = (x805&(x806>(x807*x808)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x809 = 14604U;
	int8_t x810 = INT8_MIN;

    t148 = (x809&(x810>(x811*x812)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint8_t x813 = 0U;
	volatile uint16_t x815 = 1U;
	int32_t x816 = INT32_MIN;
	volatile int32_t t149 = 1;

    t149 = (x813&(x814>(x815*x816)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x817 = INT8_MIN;
	uint16_t x818 = UINT16_MAX;
	static int8_t x819 = 0;
	volatile uint64_t x820 = UINT64_MAX;
	volatile int32_t t150 = -1130;

    t150 = (x817&(x818>(x819*x820)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x825 = -12822LL;
	int32_t x826 = INT32_MIN;
	uint8_t x827 = 99U;

    t151 = (x825&(x826>(x827*x828)));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint8_t x838 = 2U;
	int16_t x839 = -1;
	volatile int32_t t152 = 235292;

    t152 = (x837&(x838>(x839*x840)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x841 = INT8_MIN;
	uint64_t x842 = 13LLU;
	int16_t x843 = INT16_MIN;
	int16_t x844 = -4843;
	int32_t t153 = -187944901;

    t153 = (x841&(x842>(x843*x844)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x845 = 9U;
	int64_t x846 = -1LL;
	static int64_t x847 = -9853865514472155LL;
	uint64_t x848 = UINT64_MAX;
	int32_t t154 = -11246569;

    t154 = (x845&(x846>(x847*x848)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x849 = INT64_MIN;
	int32_t x850 = INT32_MAX;
	volatile uint64_t x852 = 2010819110603LLU;

    t155 = (x849&(x850>(x851*x852)));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x853 = 25;
	static volatile uint64_t x854 = UINT64_MAX;
	volatile int64_t x855 = -2062225555665LL;
	volatile int32_t t156 = 8;

    t156 = (x853&(x854>(x855*x856)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x857 = -1;
	volatile int16_t x860 = INT16_MIN;
	volatile int32_t t157 = -85;

    t157 = (x857&(x858>(x859*x860)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x861 = INT16_MIN;
	uint16_t x862 = 1U;
	static uint8_t x863 = 57U;
	uint32_t x864 = UINT32_MAX;

    t158 = (x861&(x862>(x863*x864)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x866 = INT8_MIN;
	static uint16_t x868 = 0U;
	int32_t t159 = -613;

    t159 = (x865&(x866>(x867*x868)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x869 = INT8_MIN;
	uint32_t x870 = 4948U;
	volatile uint64_t x871 = UINT64_MAX;
	volatile uint32_t x872 = UINT32_MAX;
	volatile int32_t t160 = 1526024;

    t160 = (x869&(x870>(x871*x872)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x878 = INT32_MIN;
	volatile int8_t x879 = 9;
	int16_t x880 = INT16_MAX;
	volatile int32_t t161 = -92239;

    t161 = (x877&(x878>(x879*x880)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x881 = 21U;
	static uint32_t x883 = 1759510U;
	static int32_t x884 = INT32_MIN;
	int32_t t162 = 1;

    t162 = (x881&(x882>(x883*x884)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x886 = -1LL;
	static uint32_t x887 = 13611U;
	static uint32_t x888 = UINT32_MAX;
	uint32_t t163 = 2U;

    t163 = (x885&(x886>(x887*x888)));

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile uint64_t x890 = UINT64_MAX;
	int8_t x891 = INT8_MIN;

    t164 = (x889&(x890>(x891*x892)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x901 = UINT8_MAX;
	int16_t x902 = INT16_MIN;
	uint64_t x903 = 193580640LLU;
	uint64_t x904 = 277407341LLU;
	volatile int32_t t165 = 36281;

    t165 = (x901&(x902>(x903*x904)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x905 = 48U;
	int32_t x906 = -7539;
	uint32_t x907 = 43U;
	volatile int32_t x908 = INT32_MIN;
	volatile int32_t t166 = -855800722;

    t166 = (x905&(x906>(x907*x908)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x913 = 11;
	int8_t x914 = INT8_MIN;
	int8_t x915 = 15;
	int8_t x916 = INT8_MAX;
	volatile int32_t t167 = -2;

    t167 = (x913&(x914>(x915*x916)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x918 = 93896759831662603LL;
	uint16_t x919 = 1U;
	uint16_t x920 = 24176U;
	volatile int64_t t168 = -73306389204LL;

    t168 = (x917&(x918>(x919*x920)));

    if (t168 != 1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint32_t x924 = 32U;

    t169 = (x921&(x922>(x923*x924)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x925 = -14;
	int64_t x926 = 4837385265LL;
	int16_t x928 = INT16_MAX;
	static volatile int32_t t170 = 23494;

    t170 = (x925&(x926>(x927*x928)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x929 = INT32_MIN;
	static int16_t x930 = INT16_MIN;
	uint64_t x931 = 208314769LLU;
	int16_t x932 = INT16_MIN;
	static int32_t t171 = -1;

    t171 = (x929&(x930>(x931*x932)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x937 = INT16_MIN;
	uint32_t x938 = 18049236U;
	volatile int8_t x939 = -3;
	int32_t t172 = 18;

    t172 = (x937&(x938>(x939*x940)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x941 = 5641432LLU;
	int8_t x942 = INT8_MIN;
	static volatile int32_t x943 = -1;
	int8_t x944 = INT8_MAX;
	uint64_t t173 = 1436477473205525LLU;

    t173 = (x941&(x942>(x943*x944)));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x945 = UINT64_MAX;
	int64_t x946 = INT64_MAX;
	int16_t x947 = -1;
	int8_t x948 = INT8_MAX;
	uint64_t t174 = 36LLU;

    t174 = (x945&(x946>(x947*x948)));

    if (t174 != 1LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x953 = -39767;
	int16_t x954 = 95;
	static uint64_t x955 = UINT64_MAX;
	int32_t t175 = 265144613;

    t175 = (x953&(x954>(x955*x956)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile uint8_t x958 = 7U;
	uint16_t x959 = 75U;
	int32_t t176 = -84544;

    t176 = (x957&(x958>(x959*x960)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x969 = 1;
	int8_t x970 = -1;
	volatile int64_t x971 = 1457226LL;
	int8_t x972 = -2;

    t177 = (x969&(x970>(x971*x972)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x973 = UINT8_MAX;
	volatile int64_t x974 = -33348932042565LL;
	int64_t x975 = -8540811810748532LL;
	volatile int32_t t178 = -8483;

    t178 = (x973&(x974>(x975*x976)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint32_t x977 = 70343U;
	volatile int8_t x979 = INT8_MIN;
	int8_t x980 = INT8_MIN;
	volatile uint32_t t179 = 1423579830U;

    t179 = (x977&(x978>(x979*x980)));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x981 = UINT64_MAX;
	int8_t x982 = INT8_MIN;
	uint16_t x983 = 18676U;
	static volatile uint64_t t180 = 29LLU;

    t180 = (x981&(x982>(x983*x984)));

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x986 = INT64_MIN;
	int16_t x987 = INT16_MAX;
	static volatile int32_t t181 = 6;

    t181 = (x985&(x986>(x987*x988)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x989 = 15U;
	int8_t x990 = -13;
	volatile int16_t x991 = INT16_MIN;
	uint8_t x992 = 0U;
	volatile int32_t t182 = -7;

    t182 = (x989&(x990>(x991*x992)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x994 = -15;
	volatile int8_t x995 = -1;
	volatile int64_t x996 = -1LL;

    t183 = (x993&(x994>(x995*x996)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x997 = 22U;
	uint64_t x1000 = UINT64_MAX;
	volatile int32_t t184 = 5056;

    t184 = (x997&(x998>(x999*x1000)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x1001 = UINT64_MAX;
	int8_t x1002 = INT8_MIN;
	int16_t x1003 = -1;
	int8_t x1004 = 15;
	volatile uint64_t t185 = 18301292LLU;

    t185 = (x1001&(x1002>(x1003*x1004)));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x1005 = INT64_MIN;
	uint64_t x1006 = 397370LLU;
	int8_t x1008 = INT8_MIN;

    t186 = (x1005&(x1006>(x1007*x1008)));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x1009 = INT64_MIN;
	int8_t x1011 = INT8_MIN;
	int64_t x1012 = 266658LL;
	int64_t t187 = 562701878352LL;

    t187 = (x1009&(x1010>(x1011*x1012)));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x1027 = UINT64_MAX;
	static volatile uint8_t x1028 = UINT8_MAX;
	static int64_t t188 = 3665078485233088573LL;

    t188 = (x1025&(x1026>(x1027*x1028)));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x1029 = -1752325LL;
	static int32_t x1030 = 1748;
	static uint16_t x1031 = 0U;
	int16_t x1032 = 3;

    t189 = (x1029&(x1030>(x1031*x1032)));

    if (t189 != 1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x1033 = 693538041U;
	int64_t x1034 = -4068473862495LL;
	int64_t x1035 = -7827LL;
	uint64_t x1036 = UINT64_MAX;
	uint32_t t190 = 2722398U;

    t190 = (x1033&(x1034>(x1035*x1036)));

    if (t190 != 1U) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1040 = INT32_MAX;
	static int32_t t191 = 193;

    t191 = (x1037&(x1038>(x1039*x1040)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x1041 = 2U;
	static uint32_t x1042 = UINT32_MAX;
	uint32_t x1043 = 279U;
	int64_t x1044 = -1LL;
	volatile int32_t t192 = -128165729;

    t192 = (x1041&(x1042>(x1043*x1044)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1053 = INT64_MIN;
	volatile uint8_t x1054 = 17U;
	uint32_t x1055 = 882U;
	int64_t t193 = 7194LL;

    t193 = (x1053&(x1054>(x1055*x1056)));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1057 = INT64_MIN;
	int64_t x1058 = INT64_MAX;
	static int64_t x1059 = -1LL;
	static volatile uint8_t x1060 = UINT8_MAX;
	volatile int64_t t194 = -1940134663807584469LL;

    t194 = (x1057&(x1058>(x1059*x1060)));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x1061 = INT32_MIN;
	static int64_t x1062 = INT64_MIN;
	int64_t x1063 = INT64_MIN;
	volatile int32_t t195 = -1;

    t195 = (x1061&(x1062>(x1063*x1064)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x1065 = INT16_MIN;
	int64_t x1066 = -1LL;
	int32_t x1067 = 91851;
	uint16_t x1068 = 6723U;
	int32_t t196 = -503;

    t196 = (x1065&(x1066>(x1067*x1068)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int16_t x1069 = -1;
	uint8_t x1071 = 60U;
	int16_t x1072 = 3;

    t197 = (x1069&(x1070>(x1071*x1072)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x1073 = -1564;
	uint64_t x1074 = UINT64_MAX;
	int8_t x1075 = INT8_MAX;
	static int32_t x1076 = -1;
	volatile int32_t t198 = 5972055;

    t198 = (x1073&(x1074>(x1075*x1076)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x1077 = 1U;
	static uint16_t x1078 = 14U;
	static volatile uint64_t x1079 = 166902770LLU;
	static int8_t x1080 = -41;

    t199 = (x1077&(x1078>(x1079*x1080)));

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

