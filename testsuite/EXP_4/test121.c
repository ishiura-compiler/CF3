
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

int32_t x4 = INT32_MIN;
volatile int32_t x6 = INT32_MIN;
uint16_t x12 = 9328U;
uint8_t x20 = 2U;
uint16_t x24 = UINT16_MAX;
static volatile uint8_t x26 = 2U;
int16_t x28 = 45;
int32_t t6 = 29;
volatile int32_t t7 = 14737;
int8_t x34 = INT8_MIN;
int16_t x36 = INT16_MAX;
uint64_t x40 = 12311LLU;
int8_t x46 = INT8_MIN;
uint16_t x48 = 101U;
int8_t x52 = 51;
int64_t x60 = INT64_MIN;
uint64_t x61 = 1264587681LLU;
int32_t x62 = 34;
int32_t t15 = -1952;
int16_t x71 = -1;
int32_t x74 = -3745209;
int64_t x79 = -1LL;
uint32_t x80 = UINT32_MAX;
static int16_t x86 = INT16_MIN;
volatile int32_t t20 = 6190948;
volatile int64_t x90 = -658504LL;
volatile int32_t t22 = 3202532;
int16_t x109 = -89;
int32_t t25 = 135673;
int64_t x118 = INT64_MIN;
static int64_t x125 = -1LL;
int8_t x130 = INT8_MIN;
int8_t x142 = 50;
int64_t x146 = INT64_MIN;
int8_t x157 = INT8_MIN;
static int32_t t36 = -8;
int16_t x165 = INT16_MIN;
int16_t x167 = INT16_MIN;
int64_t x169 = INT64_MAX;
int16_t x172 = 12;
int8_t x179 = INT8_MIN;
volatile int32_t x181 = INT32_MIN;
uint64_t x185 = 1383781803038LLU;
static volatile uint8_t x186 = 3U;
static uint32_t x193 = UINT32_MAX;
static volatile int64_t x195 = -1LL;
volatile int32_t t45 = 2463;
int32_t x217 = INT32_MIN;
uint16_t x219 = 14U;
volatile int64_t x221 = -1LL;
int16_t x224 = -21;
int32_t x225 = INT32_MIN;
int16_t x236 = -1;
volatile int8_t x239 = -1;
int32_t x245 = INT32_MAX;
volatile uint32_t x247 = 1U;
int32_t t56 = -21662;
int16_t x249 = -1;
uint16_t x250 = 27U;
int64_t x251 = -1LL;
int64_t x252 = 1408103LL;
uint32_t x260 = 1792083U;
int32_t t59 = 47421607;
volatile int32_t t60 = -32388;
int16_t x273 = 74;
volatile int32_t t61 = 591850766;
uint16_t x279 = 1782U;
volatile int32_t t62 = 14;
int32_t t64 = 32579616;
int64_t x292 = 822LL;
static volatile int32_t t65 = 23;
int8_t x300 = -1;
int32_t t67 = 1108;
volatile int32_t x309 = -1;
static int8_t x317 = INT8_MIN;
int8_t x324 = INT8_MIN;
volatile uint32_t x327 = UINT32_MAX;
volatile int16_t x328 = 12784;
uint64_t x336 = 242150519LLU;
volatile int16_t x338 = INT16_MIN;
int32_t x351 = INT32_MIN;
volatile int32_t t78 = 58887;
uint16_t x353 = 13U;
uint64_t x355 = 45989LLU;
int16_t x359 = -1;
int16_t x369 = INT16_MIN;
uint16_t x370 = UINT16_MAX;
static int8_t x373 = 0;
int16_t x377 = INT16_MAX;
static volatile int8_t x379 = INT8_MAX;
volatile uint16_t x390 = 580U;
static int8_t x396 = -1;
static int32_t t88 = -51;
static uint16_t x399 = 92U;
int32_t t89 = 2060;
static int64_t x406 = INT64_MAX;
uint64_t x411 = 6397569635548LLU;
static volatile int16_t x417 = 201;
uint16_t x421 = UINT16_MAX;
int8_t x426 = INT8_MAX;
int8_t x428 = 0;
int32_t t97 = 51;
int32_t t98 = -116722073;
int64_t x448 = -1LL;
volatile int32_t t100 = 270;
uint16_t x455 = 2641U;
int32_t t104 = -263173014;
volatile int8_t x475 = 23;
int8_t x483 = -1;
uint8_t x484 = 17U;
volatile int32_t t110 = -26045167;
volatile int16_t x494 = -1;
int32_t x496 = 2173958;
int64_t x506 = -129357835460LL;
volatile int32_t t115 = 3;
volatile int32_t t116 = 834372;
volatile int32_t x520 = -1;
volatile int32_t t118 = -30940586;
static int64_t x522 = INT64_MIN;
int8_t x526 = 15;
int16_t x529 = -9;
static volatile int32_t t121 = -2;
volatile int32_t t124 = 0;
int32_t x547 = -1;
int8_t x551 = INT8_MIN;
static int32_t t126 = -1;
uint32_t x553 = 283U;
int64_t x559 = -31693LL;
uint16_t x560 = 0U;
volatile uint64_t x563 = UINT64_MAX;
uint16_t x564 = 11U;
uint16_t x568 = 1305U;
int8_t x583 = -1;
volatile int32_t x589 = -1;
int64_t x590 = INT64_MIN;
int8_t x592 = -1;
int32_t t134 = 1;
volatile uint32_t x597 = UINT32_MAX;
static volatile int32_t t136 = -6;
int64_t x602 = 1949497621960933693LL;
int8_t x608 = INT8_MAX;
int32_t t138 = -11479;
int16_t x619 = -75;
static volatile int64_t x621 = -3495164LL;
volatile int32_t x626 = 30210;
int64_t x632 = INT64_MIN;
int16_t x640 = INT16_MAX;
volatile int32_t t147 = 1;
int32_t x646 = 1;
uint16_t x647 = UINT16_MAX;
static volatile uint16_t x653 = 45U;
int64_t x654 = INT64_MAX;
int16_t x659 = -4327;
volatile int64_t x683 = -1079927891066822875LL;
static int32_t t154 = -52;
int16_t x687 = -1;
static volatile int32_t t156 = 529159707;
static int32_t x695 = 2;
uint16_t x697 = UINT16_MAX;
volatile int32_t t158 = 2093234;
static int8_t x701 = INT8_MIN;
int32_t x706 = INT32_MIN;
static int16_t x711 = -1;
uint32_t x719 = UINT32_MAX;
int32_t x722 = 29;
static int8_t x728 = INT8_MAX;
int32_t x732 = INT32_MAX;
int16_t x740 = -1;
uint64_t x745 = 2045390602891497LLU;
uint8_t x748 = 62U;
uint8_t x749 = UINT8_MAX;
static uint16_t x752 = 659U;
uint64_t x757 = 55358LLU;
uint64_t x760 = 1790241560731LLU;
static uint8_t x762 = 31U;
int16_t x766 = INT16_MIN;
static int32_t x774 = INT32_MIN;
uint64_t x777 = UINT64_MAX;
static int32_t t175 = -33497523;
static int8_t x782 = INT8_MIN;
int64_t x783 = 1330100263LL;
int32_t t176 = 41224;
static volatile int64_t x790 = -83LL;
static uint8_t x793 = UINT8_MAX;
int32_t t178 = -5720933;
uint32_t x799 = 3U;
int8_t x800 = INT8_MAX;
int32_t t180 = 1017755840;
int8_t x805 = -1;
int32_t x809 = -1;
volatile int32_t t182 = 26;
int16_t x819 = 2;
static volatile int16_t x823 = 1236;
int64_t x824 = -1LL;
int32_t x828 = -3127;
uint16_t x832 = UINT16_MAX;
volatile int8_t x835 = INT8_MIN;
int32_t t190 = 543;
int32_t x845 = INT32_MAX;
uint32_t x847 = 6U;
int32_t t191 = -331017951;
uint16_t x850 = UINT16_MAX;
static int32_t x859 = INT32_MIN;
volatile int32_t x873 = 120703;
uint8_t x879 = 4U;


void f0(void) {
    	static int8_t x1 = -1;
	uint16_t x2 = UINT16_MAX;
	int16_t x3 = INT16_MAX;
	static volatile int32_t t0 = 1463;

    t0 = (x1>(x2>(x3+x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x5 = 28085U;
	uint8_t x7 = 1U;
	uint64_t x8 = 540500263879568481LLU;
	volatile int32_t t1 = 687;

    t1 = (x5>(x6>(x7+x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	uint16_t x10 = UINT16_MAX;
	volatile int8_t x11 = -1;
	int32_t t2 = 24478;

    t2 = (x9>(x10>(x11+x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 13U;
	int32_t x14 = INT32_MAX;
	int8_t x15 = -1;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = -27509103;

    t3 = (x13>(x14>(x15+x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint8_t x17 = 12U;
	int8_t x18 = INT8_MIN;
	static volatile uint64_t x19 = UINT64_MAX;
	volatile int32_t t4 = -23808;

    t4 = (x17>(x18>(x19+x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = 271434257326880LL;
	int8_t x22 = -1;
	static int16_t x23 = INT16_MIN;
	int32_t t5 = 15399;

    t5 = (x21>(x22>(x23+x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x25 = -1;
	uint8_t x27 = UINT8_MAX;

    t6 = (x25>(x26>(x27+x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int64_t x29 = INT64_MIN;
	int32_t x30 = 16909;
	int8_t x31 = INT8_MIN;
	int16_t x32 = INT16_MAX;

    t7 = (x29>(x30>(x31+x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MAX;
	uint16_t x35 = 0U;
	volatile int32_t t8 = -386;

    t8 = (x33>(x34>(x35+x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MAX;
	static int8_t x38 = -1;
	static uint64_t x39 = 39239LLU;
	volatile int32_t t9 = -9649;

    t9 = (x37>(x38>(x39+x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = 2U;
	uint8_t x42 = UINT8_MAX;
	uint8_t x43 = UINT8_MAX;
	uint64_t x44 = 1018554083LLU;
	volatile int32_t t10 = 0;

    t10 = (x41>(x42>(x43+x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = -1LL;
	uint16_t x47 = UINT16_MAX;
	static int32_t t11 = 0;

    t11 = (x45>(x46>(x47+x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x49 = INT32_MAX;
	int64_t x50 = INT64_MAX;
	uint64_t x51 = 127243346362347908LLU;
	int32_t t12 = -115071571;

    t12 = (x49>(x50>(x51+x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x57 = 1695901219368691LLU;
	int64_t x58 = 3447441LL;
	uint64_t x59 = UINT64_MAX;
	int32_t t13 = -55;

    t13 = (x57>(x58>(x59+x60)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x63 = 13;
	static int64_t x64 = -1LL;
	volatile int32_t t14 = 181;

    t14 = (x61>(x62>(x63+x64)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x65 = INT32_MIN;
	uint8_t x66 = UINT8_MAX;
	static int8_t x67 = 1;
	static uint64_t x68 = 407871LLU;

    t15 = (x65>(x66>(x67+x68)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = INT64_MIN;
	uint64_t x70 = UINT64_MAX;
	static uint16_t x72 = 2122U;
	volatile int32_t t16 = -752742;

    t16 = (x69>(x70>(x71+x72)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x73 = -48;
	int64_t x75 = 480LL;
	static int32_t x76 = INT32_MIN;
	int32_t t17 = 2;

    t17 = (x73>(x74>(x75+x76)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x77 = 7;
	uint16_t x78 = 172U;
	int32_t t18 = 7702301;

    t18 = (x77>(x78>(x79+x80)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint16_t x81 = UINT16_MAX;
	int64_t x82 = INT64_MAX;
	volatile int8_t x83 = INT8_MIN;
	volatile int16_t x84 = INT16_MAX;
	volatile int32_t t19 = -11341;

    t19 = (x81>(x82>(x83+x84)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x85 = 19U;
	int64_t x87 = -429044LL;
	int64_t x88 = 23946169LL;

    t20 = (x85>(x86>(x87+x88)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x89 = -1LL;
	uint32_t x91 = 32036440U;
	int8_t x92 = INT8_MAX;
	volatile int32_t t21 = 44;

    t21 = (x89>(x90>(x91+x92)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x93 = -1;
	int32_t x94 = INT32_MAX;
	static volatile uint32_t x95 = UINT32_MAX;
	static volatile uint16_t x96 = 740U;

    t22 = (x93>(x94>(x95+x96)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x97 = INT32_MAX;
	static int64_t x98 = INT64_MIN;
	uint8_t x99 = 46U;
	int64_t x100 = INT64_MIN;
	volatile int32_t t23 = -204;

    t23 = (x97>(x98>(x99+x100)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x101 = 1;
	static int64_t x102 = INT64_MIN;
	uint64_t x103 = UINT64_MAX;
	volatile int16_t x104 = -1;
	int32_t t24 = -1124870;

    t24 = (x101>(x102>(x103+x104)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x110 = -1;
	static uint8_t x111 = 0U;
	uint8_t x112 = UINT8_MAX;

    t25 = (x109>(x110>(x111+x112)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x113 = INT32_MIN;
	volatile uint16_t x114 = UINT16_MAX;
	volatile uint64_t x115 = 10924LLU;
	int8_t x116 = 1;
	volatile int32_t t26 = -2;

    t26 = (x113>(x114>(x115+x116)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x117 = INT64_MIN;
	int16_t x119 = -1;
	uint8_t x120 = UINT8_MAX;
	static int32_t t27 = 1;

    t27 = (x117>(x118>(x119+x120)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile uint8_t x121 = 2U;
	int32_t x122 = -1;
	uint32_t x123 = 43568337U;
	volatile int16_t x124 = INT16_MAX;
	int32_t t28 = -122585190;

    t28 = (x121>(x122>(x123+x124)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x126 = INT16_MIN;
	int32_t x127 = -1;
	volatile int64_t x128 = INT64_MAX;
	volatile int32_t t29 = -70509385;

    t29 = (x125>(x126>(x127+x128)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x129 = INT32_MIN;
	static volatile int64_t x131 = -1LL;
	static uint64_t x132 = 84637409LLU;
	static int32_t t30 = -1278;

    t30 = (x129>(x130>(x131+x132)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x137 = -98;
	int8_t x138 = INT8_MIN;
	uint64_t x139 = 1025684LLU;
	uint8_t x140 = 107U;
	volatile int32_t t31 = -5;

    t31 = (x137>(x138>(x139+x140)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x141 = -2183772765583513915LL;
	static volatile int64_t x143 = -935862634456731LL;
	volatile int32_t x144 = INT32_MIN;
	volatile int32_t t32 = 210603875;

    t32 = (x141>(x142>(x143+x144)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x145 = INT8_MIN;
	static volatile uint8_t x147 = UINT8_MAX;
	int8_t x148 = 1;
	int32_t t33 = 13;

    t33 = (x145>(x146>(x147+x148)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x149 = 129206192;
	volatile int16_t x150 = INT16_MAX;
	static int32_t x151 = -1;
	int32_t x152 = 1364;
	int32_t t34 = 593822;

    t34 = (x149>(x150>(x151+x152)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x153 = -1;
	static uint16_t x154 = 8880U;
	int8_t x155 = -1;
	int8_t x156 = -1;
	int32_t t35 = 58;

    t35 = (x153>(x154>(x155+x156)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint16_t x158 = UINT16_MAX;
	volatile uint64_t x159 = UINT64_MAX;
	uint8_t x160 = 59U;

    t36 = (x157>(x158>(x159+x160)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x161 = -1;
	uint32_t x162 = 143U;
	int16_t x163 = -2;
	int64_t x164 = 83672LL;
	int32_t t37 = -1245;

    t37 = (x161>(x162>(x163+x164)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x166 = INT64_MIN;
	int16_t x168 = INT16_MIN;
	volatile int32_t t38 = -1;

    t38 = (x165>(x166>(x167+x168)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x170 = INT64_MIN;
	int64_t x171 = INT64_MIN;
	static volatile int32_t t39 = 1;

    t39 = (x169>(x170>(x171+x172)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x173 = INT32_MIN;
	int16_t x174 = INT16_MIN;
	int32_t x175 = -400;
	uint16_t x176 = 312U;
	int32_t t40 = -174313;

    t40 = (x173>(x174>(x175+x176)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x177 = INT64_MIN;
	static int64_t x178 = INT64_MIN;
	static int16_t x180 = INT16_MIN;
	volatile int32_t t41 = 3040211;

    t41 = (x177>(x178>(x179+x180)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x182 = 1946;
	int8_t x183 = INT8_MAX;
	int32_t x184 = -1746;
	volatile int32_t t42 = -3666;

    t42 = (x181>(x182>(x183+x184)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x187 = 51837U;
	uint64_t x188 = 2065454838826LLU;
	int32_t t43 = 54385965;

    t43 = (x185>(x186>(x187+x188)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x189 = 61808LLU;
	int32_t x190 = INT32_MIN;
	uint64_t x191 = 229232446657LLU;
	static int16_t x192 = INT16_MAX;
	int32_t t44 = 1;

    t44 = (x189>(x190>(x191+x192)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x194 = UINT64_MAX;
	static int32_t x196 = INT32_MIN;

    t45 = (x193>(x194>(x195+x196)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x197 = INT64_MIN;
	int64_t x198 = 100095857LL;
	int16_t x199 = INT16_MIN;
	int64_t x200 = -1LL;
	static volatile int32_t t46 = 218;

    t46 = (x197>(x198>(x199+x200)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x201 = 28788885U;
	int16_t x202 = INT16_MIN;
	int32_t x203 = 1923;
	volatile uint32_t x204 = 35557U;
	int32_t t47 = -4752;

    t47 = (x201>(x202>(x203+x204)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x205 = 392206155515885466LL;
	uint16_t x206 = 51U;
	int16_t x207 = INT16_MAX;
	int32_t x208 = INT32_MIN;
	static int32_t t48 = 3882315;

    t48 = (x205>(x206>(x207+x208)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x213 = INT16_MAX;
	int32_t x214 = -1;
	int64_t x215 = INT64_MIN;
	static int64_t x216 = 10044LL;
	int32_t t49 = 29;

    t49 = (x213>(x214>(x215+x216)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x218 = -7;
	int64_t x220 = 9294480761465289LL;
	int32_t t50 = 6612;

    t50 = (x217>(x218>(x219+x220)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x222 = INT64_MIN;
	static uint32_t x223 = 1116U;
	volatile int32_t t51 = -6949;

    t51 = (x221>(x222>(x223+x224)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x226 = INT16_MIN;
	int64_t x227 = -48LL;
	uint8_t x228 = 27U;
	static int32_t t52 = 2915622;

    t52 = (x225>(x226>(x227+x228)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x229 = INT32_MIN;
	int32_t x230 = INT32_MIN;
	int16_t x231 = INT16_MIN;
	static uint64_t x232 = 822985664LLU;
	static int32_t t53 = -509767;

    t53 = (x229>(x230>(x231+x232)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x233 = 2785U;
	static uint16_t x234 = 15485U;
	static int16_t x235 = INT16_MAX;
	volatile int32_t t54 = 284259;

    t54 = (x233>(x234>(x235+x236)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x237 = 6565U;
	static uint32_t x238 = UINT32_MAX;
	int32_t x240 = -3;
	static volatile int32_t t55 = 28;

    t55 = (x237>(x238>(x239+x240)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint16_t x246 = 6U;
	int8_t x248 = -1;

    t56 = (x245>(x246>(x247+x248)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t t57 = 4253377;

    t57 = (x249>(x250>(x251+x252)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x257 = INT64_MIN;
	static int8_t x258 = 6;
	static int8_t x259 = -38;
	volatile int32_t t58 = 1;

    t58 = (x257>(x258>(x259+x260)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x265 = -1;
	int64_t x266 = INT64_MIN;
	static int16_t x267 = 241;
	uint16_t x268 = 0U;

    t59 = (x265>(x266>(x267+x268)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x269 = INT32_MIN;
	volatile int32_t x270 = INT32_MAX;
	int8_t x271 = 6;
	static int8_t x272 = INT8_MIN;

    t60 = (x269>(x270>(x271+x272)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x274 = INT8_MAX;
	int64_t x275 = -105280642141LL;
	int16_t x276 = INT16_MAX;

    t61 = (x273>(x274>(x275+x276)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x277 = INT64_MIN;
	uint64_t x278 = UINT64_MAX;
	int16_t x280 = -1;

    t62 = (x277>(x278>(x279+x280)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x281 = 5;
	volatile uint16_t x282 = 0U;
	uint16_t x283 = 22U;
	volatile uint8_t x284 = UINT8_MAX;
	volatile int32_t t63 = 10635375;

    t63 = (x281>(x282>(x283+x284)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x285 = INT64_MIN;
	int16_t x286 = INT16_MAX;
	int32_t x287 = 10;
	static uint64_t x288 = 18677083LLU;

    t64 = (x285>(x286>(x287+x288)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x289 = 2U;
	static int32_t x290 = INT32_MAX;
	uint8_t x291 = UINT8_MAX;

    t65 = (x289>(x290>(x291+x292)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x293 = INT64_MAX;
	int8_t x294 = INT8_MIN;
	static int8_t x295 = -1;
	int32_t x296 = -156350;
	volatile int32_t t66 = -277652;

    t66 = (x293>(x294>(x295+x296)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x297 = INT8_MAX;
	volatile int8_t x298 = INT8_MIN;
	volatile uint8_t x299 = 3U;

    t67 = (x297>(x298>(x299+x300)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x305 = INT64_MIN;
	static int8_t x306 = -1;
	int32_t x307 = -1;
	int32_t x308 = 54287;
	volatile int32_t t68 = 12;

    t68 = (x305>(x306>(x307+x308)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x310 = -24;
	uint16_t x311 = 368U;
	int16_t x312 = -14;
	static volatile int32_t t69 = -2145;

    t69 = (x309>(x310>(x311+x312)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x318 = 0U;
	volatile int8_t x319 = 4;
	int32_t x320 = -1;
	static int32_t t70 = 803240503;

    t70 = (x317>(x318>(x319+x320)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x321 = INT32_MAX;
	volatile int64_t x322 = INT64_MAX;
	int16_t x323 = 1;
	int32_t t71 = -1033872;

    t71 = (x321>(x322>(x323+x324)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x325 = INT32_MIN;
	volatile int64_t x326 = INT64_MIN;
	volatile int32_t t72 = -16016;

    t72 = (x325>(x326>(x327+x328)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x329 = -5;
	int64_t x330 = INT64_MIN;
	static volatile uint32_t x331 = 10098633U;
	volatile int64_t x332 = -1LL;
	int32_t t73 = -7118;

    t73 = (x329>(x330>(x331+x332)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x333 = UINT16_MAX;
	int8_t x334 = INT8_MIN;
	int32_t x335 = INT32_MAX;
	int32_t t74 = 3;

    t74 = (x333>(x334>(x335+x336)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x337 = INT64_MIN;
	int32_t x339 = INT32_MIN;
	uint64_t x340 = UINT64_MAX;
	volatile int32_t t75 = -3649860;

    t75 = (x337>(x338>(x339+x340)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x341 = INT32_MAX;
	int8_t x342 = INT8_MIN;
	uint32_t x343 = UINT32_MAX;
	uint32_t x344 = 172670358U;
	int32_t t76 = 719310430;

    t76 = (x341>(x342>(x343+x344)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x345 = -1;
	uint8_t x346 = 2U;
	int16_t x347 = -508;
	uint8_t x348 = UINT8_MAX;
	volatile int32_t t77 = 863;

    t77 = (x345>(x346>(x347+x348)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x349 = -11;
	volatile int64_t x350 = -18959634559LL;
	uint16_t x352 = UINT16_MAX;

    t78 = (x349>(x350>(x351+x352)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x354 = INT16_MIN;
	volatile uint32_t x356 = 144U;
	volatile int32_t t79 = -494818232;

    t79 = (x353>(x354>(x355+x356)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x357 = 695U;
	volatile int64_t x358 = INT64_MIN;
	int16_t x360 = -1377;
	int32_t t80 = -52;

    t80 = (x357>(x358>(x359+x360)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x361 = 59U;
	uint8_t x362 = UINT8_MAX;
	int64_t x363 = -1LL;
	static int32_t x364 = INT32_MAX;
	static int32_t t81 = -3;

    t81 = (x361>(x362>(x363+x364)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x365 = 26U;
	static int64_t x366 = INT64_MIN;
	uint64_t x367 = 7747714927797LLU;
	uint16_t x368 = 5U;
	volatile int32_t t82 = -91726;

    t82 = (x365>(x366>(x367+x368)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x371 = INT8_MIN;
	int64_t x372 = -1LL;
	static volatile int32_t t83 = -170273011;

    t83 = (x369>(x370>(x371+x372)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x374 = 13092156LLU;
	uint16_t x375 = 760U;
	volatile uint64_t x376 = 1558897177535479999LLU;
	static volatile int32_t t84 = -3743;

    t84 = (x373>(x374>(x375+x376)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x378 = INT8_MAX;
	static int8_t x380 = INT8_MIN;
	static int32_t t85 = -179;

    t85 = (x377>(x378>(x379+x380)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x381 = INT64_MIN;
	static int64_t x382 = 7LL;
	static int16_t x383 = INT16_MIN;
	volatile int16_t x384 = INT16_MIN;
	volatile int32_t t86 = -88369503;

    t86 = (x381>(x382>(x383+x384)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x389 = 12;
	int32_t x391 = INT32_MIN;
	static uint32_t x392 = 485685400U;
	static int32_t t87 = 822;

    t87 = (x389>(x390>(x391+x392)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x393 = INT64_MIN;
	int32_t x394 = INT32_MIN;
	uint8_t x395 = 5U;

    t88 = (x393>(x394>(x395+x396)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x397 = 29178360U;
	uint32_t x398 = 41289U;
	volatile uint16_t x400 = 3022U;

    t89 = (x397>(x398>(x399+x400)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint16_t x401 = UINT16_MAX;
	int32_t x402 = 564260;
	int32_t x403 = -87;
	int8_t x404 = INT8_MIN;
	int32_t t90 = 42833955;

    t90 = (x401>(x402>(x403+x404)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x405 = 200646385647LLU;
	uint64_t x407 = 3LLU;
	uint16_t x408 = UINT16_MAX;
	int32_t t91 = 27922330;

    t91 = (x405>(x406>(x407+x408)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x409 = 82U;
	uint32_t x410 = UINT32_MAX;
	volatile uint8_t x412 = UINT8_MAX;
	int32_t t92 = 210;

    t92 = (x409>(x410>(x411+x412)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x413 = UINT32_MAX;
	uint32_t x414 = 51U;
	static volatile int64_t x415 = -15241226965129LL;
	uint16_t x416 = 11368U;
	volatile int32_t t93 = 25072997;

    t93 = (x413>(x414>(x415+x416)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x418 = UINT16_MAX;
	uint32_t x419 = UINT32_MAX;
	uint16_t x420 = UINT16_MAX;
	int32_t t94 = -25143121;

    t94 = (x417>(x418>(x419+x420)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x422 = 40;
	int32_t x423 = 0;
	int64_t x424 = -1LL;
	static int32_t t95 = 0;

    t95 = (x421>(x422>(x423+x424)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x425 = UINT32_MAX;
	static volatile int16_t x427 = INT16_MIN;
	volatile int32_t t96 = -120274792;

    t96 = (x425>(x426>(x427+x428)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x429 = 42764588508LLU;
	int16_t x430 = INT16_MAX;
	int8_t x431 = INT8_MAX;
	volatile int16_t x432 = INT16_MIN;

    t97 = (x429>(x430>(x431+x432)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x437 = 40U;
	uint64_t x438 = UINT64_MAX;
	uint16_t x439 = UINT16_MAX;
	uint8_t x440 = UINT8_MAX;

    t98 = (x437>(x438>(x439+x440)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x441 = INT8_MAX;
	int8_t x442 = INT8_MAX;
	int16_t x443 = -1;
	int32_t x444 = -1;
	static int32_t t99 = 4719910;

    t99 = (x441>(x442>(x443+x444)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x445 = INT16_MAX;
	volatile uint8_t x446 = UINT8_MAX;
	int8_t x447 = -1;

    t100 = (x445>(x446>(x447+x448)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x449 = 1U;
	volatile int16_t x450 = -1;
	uint16_t x451 = 23U;
	volatile int64_t x452 = -1LL;
	volatile int32_t t101 = 210634;

    t101 = (x449>(x450>(x451+x452)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint16_t x453 = UINT16_MAX;
	int32_t x454 = 934;
	int8_t x456 = -8;
	int32_t t102 = -184110;

    t102 = (x453>(x454>(x455+x456)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x457 = -46;
	static volatile uint16_t x458 = 8656U;
	volatile uint64_t x459 = UINT64_MAX;
	int32_t x460 = -102;
	volatile int32_t t103 = -62107867;

    t103 = (x457>(x458>(x459+x460)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x461 = INT32_MIN;
	uint64_t x462 = 423123LLU;
	int16_t x463 = INT16_MIN;
	volatile uint64_t x464 = UINT64_MAX;

    t104 = (x461>(x462>(x463+x464)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x465 = 27;
	uint8_t x466 = 1U;
	static int8_t x467 = INT8_MAX;
	volatile uint8_t x468 = 2U;
	static volatile int32_t t105 = 12503996;

    t105 = (x465>(x466>(x467+x468)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x469 = 41613U;
	static int32_t x470 = INT32_MAX;
	int8_t x471 = -1;
	static int8_t x472 = -1;
	int32_t t106 = 202;

    t106 = (x469>(x470>(x471+x472)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint32_t x473 = 3029U;
	int16_t x474 = -1;
	volatile int16_t x476 = INT16_MAX;
	volatile int32_t t107 = -1;

    t107 = (x473>(x474>(x475+x476)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x477 = 1U;
	volatile int8_t x478 = INT8_MIN;
	uint32_t x479 = UINT32_MAX;
	uint32_t x480 = 0U;
	volatile int32_t t108 = 7950;

    t108 = (x477>(x478>(x479+x480)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x481 = -43298335785286LL;
	uint64_t x482 = UINT64_MAX;
	volatile int32_t t109 = -3;

    t109 = (x481>(x482>(x483+x484)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x485 = UINT64_MAX;
	volatile uint16_t x486 = 443U;
	static int8_t x487 = INT8_MIN;
	int16_t x488 = -208;

    t110 = (x485>(x486>(x487+x488)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x489 = INT16_MAX;
	volatile uint16_t x490 = 5U;
	volatile int32_t x491 = INT32_MIN;
	int32_t x492 = INT32_MAX;
	volatile int32_t t111 = -1529528;

    t111 = (x489>(x490>(x491+x492)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x493 = 25;
	static int64_t x495 = INT64_MIN;
	volatile int32_t t112 = -55519;

    t112 = (x493>(x494>(x495+x496)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x497 = 5619650014047LL;
	int32_t x498 = INT32_MIN;
	volatile int16_t x499 = INT16_MIN;
	int32_t x500 = 138;
	static int32_t t113 = 92870;

    t113 = (x497>(x498>(x499+x500)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x501 = -3713125312005409LL;
	int16_t x502 = -15;
	int16_t x503 = INT16_MAX;
	int16_t x504 = INT16_MIN;
	static int32_t t114 = -11743;

    t114 = (x501>(x502>(x503+x504)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x505 = -67LL;
	uint8_t x507 = UINT8_MAX;
	int32_t x508 = -5;

    t115 = (x505>(x506>(x507+x508)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x509 = -5903;
	uint8_t x510 = 16U;
	uint8_t x511 = UINT8_MAX;
	uint16_t x512 = 34U;

    t116 = (x509>(x510>(x511+x512)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x513 = INT64_MAX;
	uint64_t x514 = UINT64_MAX;
	volatile int16_t x515 = 1;
	uint8_t x516 = 2U;
	int32_t t117 = 3651049;

    t117 = (x513>(x514>(x515+x516)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x517 = 2139408568467161LLU;
	static uint16_t x518 = 4U;
	static int8_t x519 = INT8_MIN;

    t118 = (x517>(x518>(x519+x520)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint8_t x521 = 13U;
	uint16_t x523 = 73U;
	volatile int32_t x524 = -208852;
	volatile int32_t t119 = -61;

    t119 = (x521>(x522>(x523+x524)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x525 = 33U;
	int8_t x527 = -1;
	volatile uint32_t x528 = 90937U;
	int32_t t120 = -1;

    t120 = (x525>(x526>(x527+x528)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x530 = 3LLU;
	int64_t x531 = INT64_MIN;
	uint8_t x532 = 3U;

    t121 = (x529>(x530>(x531+x532)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint8_t x533 = UINT8_MAX;
	int16_t x534 = -471;
	uint16_t x535 = 2U;
	static volatile uint16_t x536 = UINT16_MAX;
	volatile int32_t t122 = -18;

    t122 = (x533>(x534>(x535+x536)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x537 = INT16_MIN;
	int8_t x538 = INT8_MIN;
	int16_t x539 = 6377;
	volatile uint64_t x540 = 815902232925LLU;
	volatile int32_t t123 = -1117183;

    t123 = (x537>(x538>(x539+x540)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x541 = -1LL;
	static int8_t x542 = INT8_MIN;
	uint8_t x543 = 49U;
	int64_t x544 = -1LL;

    t124 = (x541>(x542>(x543+x544)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x545 = -1LL;
	int16_t x546 = INT16_MAX;
	uint16_t x548 = 1U;
	int32_t t125 = 6500739;

    t125 = (x545>(x546>(x547+x548)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int16_t x549 = INT16_MAX;
	uint16_t x550 = 6050U;
	int8_t x552 = INT8_MAX;

    t126 = (x549>(x550>(x551+x552)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int32_t x554 = 15399153;
	int64_t x555 = -1LL;
	volatile uint8_t x556 = 82U;
	static int32_t t127 = -56945;

    t127 = (x553>(x554>(x555+x556)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile uint16_t x557 = 2510U;
	int16_t x558 = -1774;
	static volatile int32_t t128 = 104568;

    t128 = (x557>(x558>(x559+x560)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x561 = -1LL;
	static int32_t x562 = INT32_MIN;
	static int32_t t129 = 1153957;

    t129 = (x561>(x562>(x563+x564)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x565 = 41;
	static int64_t x566 = 2792655658LL;
	uint32_t x567 = UINT32_MAX;
	int32_t t130 = -126751670;

    t130 = (x565>(x566>(x567+x568)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x573 = -1;
	uint8_t x574 = 4U;
	static volatile uint32_t x575 = 8183U;
	volatile uint8_t x576 = UINT8_MAX;
	volatile int32_t t131 = -118;

    t131 = (x573>(x574>(x575+x576)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x577 = 7U;
	int32_t x578 = INT32_MIN;
	int64_t x579 = -228756986316LL;
	int64_t x580 = 4474643588909163LL;
	static int32_t t132 = -32670;

    t132 = (x577>(x578>(x579+x580)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x581 = INT8_MIN;
	int8_t x582 = -1;
	uint64_t x584 = UINT64_MAX;
	int32_t t133 = 13433048;

    t133 = (x581>(x582>(x583+x584)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x591 = -1;

    t134 = (x589>(x590>(x591+x592)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x593 = INT32_MAX;
	int16_t x594 = 1573;
	int16_t x595 = 246;
	int8_t x596 = INT8_MIN;
	volatile int32_t t135 = -1;

    t135 = (x593>(x594>(x595+x596)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x598 = INT8_MIN;
	static int16_t x599 = -1;
	static volatile uint64_t x600 = 72255430469LLU;

    t136 = (x597>(x598>(x599+x600)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x601 = 1739U;
	int64_t x603 = INT64_MIN;
	int8_t x604 = INT8_MAX;
	int32_t t137 = 7968968;

    t137 = (x601>(x602>(x603+x604)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x605 = 0LL;
	uint32_t x606 = UINT32_MAX;
	static uint64_t x607 = 1LLU;

    t138 = (x605>(x606>(x607+x608)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x609 = UINT64_MAX;
	int16_t x610 = -1;
	uint16_t x611 = 13U;
	int8_t x612 = INT8_MAX;
	int32_t t139 = 1;

    t139 = (x609>(x610>(x611+x612)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int8_t x613 = -1;
	int64_t x614 = -1LL;
	int8_t x615 = -20;
	uint32_t x616 = UINT32_MAX;
	int32_t t140 = 9149292;

    t140 = (x613>(x614>(x615+x616)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x617 = -618;
	uint32_t x618 = UINT32_MAX;
	uint8_t x620 = 6U;
	int32_t t141 = -10453833;

    t141 = (x617>(x618>(x619+x620)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x622 = 1U;
	static int8_t x623 = 5;
	int32_t x624 = -104115569;
	static int32_t t142 = -44588059;

    t142 = (x621>(x622>(x623+x624)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint32_t x625 = UINT32_MAX;
	static uint64_t x627 = 1LLU;
	uint64_t x628 = 1014LLU;
	volatile int32_t t143 = 29;

    t143 = (x625>(x626>(x627+x628)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x629 = UINT64_MAX;
	int16_t x630 = -1;
	int32_t x631 = INT32_MAX;
	int32_t t144 = 174708486;

    t144 = (x629>(x630>(x631+x632)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x633 = 138474LLU;
	uint32_t x634 = 16321911U;
	int16_t x635 = 4;
	int32_t x636 = 81;
	int32_t t145 = 98852;

    t145 = (x633>(x634>(x635+x636)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x637 = -308LL;
	uint32_t x638 = 1U;
	static uint8_t x639 = 13U;
	volatile int32_t t146 = 534;

    t146 = (x637>(x638>(x639+x640)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x641 = 27U;
	volatile uint8_t x642 = 89U;
	int8_t x643 = 0;
	static int16_t x644 = 2;

    t147 = (x641>(x642>(x643+x644)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x645 = INT8_MIN;
	int64_t x648 = INT64_MIN;
	volatile int32_t t148 = -1;

    t148 = (x645>(x646>(x647+x648)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x655 = UINT8_MAX;
	uint8_t x656 = 5U;
	volatile int32_t t149 = -1;

    t149 = (x653>(x654>(x655+x656)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x657 = INT32_MIN;
	int32_t x658 = -1;
	int8_t x660 = 1;
	volatile int32_t t150 = -53609;

    t150 = (x657>(x658>(x659+x660)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x661 = -52333833LL;
	int32_t x662 = INT32_MIN;
	volatile int32_t x663 = -1;
	volatile int32_t x664 = -8;
	static volatile int32_t t151 = 1852;

    t151 = (x661>(x662>(x663+x664)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x673 = 2849292680624852710LLU;
	static uint16_t x674 = 298U;
	uint8_t x675 = UINT8_MAX;
	int32_t x676 = -1;
	volatile int32_t t152 = -118976208;

    t152 = (x673>(x674>(x675+x676)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint32_t x677 = UINT32_MAX;
	int8_t x678 = -1;
	volatile int16_t x679 = 35;
	int8_t x680 = INT8_MIN;
	volatile int32_t t153 = 7038;

    t153 = (x677>(x678>(x679+x680)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x681 = -1;
	int64_t x682 = INT64_MAX;
	volatile uint8_t x684 = 1U;

    t154 = (x681>(x682>(x683+x684)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x685 = -13;
	static int64_t x686 = INT64_MAX;
	volatile int8_t x688 = INT8_MIN;
	volatile int32_t t155 = -614990;

    t155 = (x685>(x686>(x687+x688)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x689 = 136027020U;
	volatile int16_t x690 = INT16_MAX;
	uint8_t x691 = 0U;
	int8_t x692 = INT8_MIN;

    t156 = (x689>(x690>(x691+x692)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x693 = INT32_MIN;
	volatile int64_t x694 = INT64_MIN;
	uint8_t x696 = 18U;
	int32_t t157 = 6282177;

    t157 = (x693>(x694>(x695+x696)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x698 = 60U;
	uint64_t x699 = UINT64_MAX;
	int16_t x700 = INT16_MIN;

    t158 = (x697>(x698>(x699+x700)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x702 = 111919LL;
	int64_t x703 = INT64_MAX;
	static int8_t x704 = INT8_MIN;
	int32_t t159 = 508;

    t159 = (x701>(x702>(x703+x704)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x705 = UINT16_MAX;
	volatile uint16_t x707 = 0U;
	int64_t x708 = INT64_MIN;
	volatile int32_t t160 = -18268528;

    t160 = (x705>(x706>(x707+x708)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x709 = -8954;
	int32_t x710 = INT32_MAX;
	int8_t x712 = INT8_MIN;
	volatile int32_t t161 = -7335;

    t161 = (x709>(x710>(x711+x712)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x717 = 24;
	int32_t x718 = 183960525;
	static uint64_t x720 = 186690799544356LLU;
	static volatile int32_t t162 = -410;

    t162 = (x717>(x718>(x719+x720)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x721 = INT8_MIN;
	uint8_t x723 = 4U;
	int8_t x724 = -1;
	volatile int32_t t163 = -3424;

    t163 = (x721>(x722>(x723+x724)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x725 = -1;
	int16_t x726 = INT16_MAX;
	int64_t x727 = INT64_MIN;
	int32_t t164 = -77360274;

    t164 = (x725>(x726>(x727+x728)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x729 = INT16_MIN;
	uint32_t x730 = 302U;
	uint32_t x731 = UINT32_MAX;
	volatile int32_t t165 = 889;

    t165 = (x729>(x730>(x731+x732)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x733 = 8;
	volatile int32_t x734 = -1;
	static int16_t x735 = -1041;
	uint64_t x736 = UINT64_MAX;
	volatile int32_t t166 = -532722930;

    t166 = (x733>(x734>(x735+x736)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x737 = INT64_MAX;
	int32_t x738 = 420899;
	uint8_t x739 = 31U;
	volatile int32_t t167 = 1080139;

    t167 = (x737>(x738>(x739+x740)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x741 = 7543LL;
	int16_t x742 = -1;
	int64_t x743 = INT64_MIN;
	int64_t x744 = INT64_MAX;
	volatile int32_t t168 = -12692;

    t168 = (x741>(x742>(x743+x744)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x746 = INT64_MIN;
	volatile uint8_t x747 = 0U;
	int32_t t169 = 786;

    t169 = (x745>(x746>(x747+x748)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x750 = -1LL;
	int16_t x751 = 4;
	volatile int32_t t170 = 14603745;

    t170 = (x749>(x750>(x751+x752)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x758 = INT8_MIN;
	static int16_t x759 = INT16_MIN;
	static int32_t t171 = 779537;

    t171 = (x757>(x758>(x759+x760)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint16_t x761 = UINT16_MAX;
	volatile int8_t x763 = INT8_MAX;
	uint32_t x764 = 312168657U;
	volatile int32_t t172 = -27;

    t172 = (x761>(x762>(x763+x764)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x765 = 10;
	int32_t x767 = INT32_MIN;
	static volatile uint64_t x768 = 42LLU;
	volatile int32_t t173 = 810940914;

    t173 = (x765>(x766>(x767+x768)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x773 = 1902331U;
	static volatile uint32_t x775 = 3U;
	int64_t x776 = 1907953LL;
	int32_t t174 = -76;

    t174 = (x773>(x774>(x775+x776)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x778 = 91U;
	static int16_t x779 = INT16_MIN;
	int32_t x780 = -1;

    t175 = (x777>(x778>(x779+x780)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x781 = -1LL;
	int16_t x784 = -211;

    t176 = (x781>(x782>(x783+x784)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x789 = 3802U;
	static uint8_t x791 = 94U;
	int8_t x792 = -1;
	volatile int32_t t177 = 6034;

    t177 = (x789>(x790>(x791+x792)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x794 = 16U;
	int32_t x795 = INT32_MIN;
	int64_t x796 = 7283701735178176LL;

    t178 = (x793>(x794>(x795+x796)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x797 = -15;
	static uint16_t x798 = 626U;
	volatile int32_t t179 = 56977304;

    t179 = (x797>(x798>(x799+x800)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x801 = UINT32_MAX;
	int32_t x802 = -28;
	int64_t x803 = -1LL;
	int16_t x804 = -1;

    t180 = (x801>(x802>(x803+x804)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x806 = UINT8_MAX;
	volatile int16_t x807 = INT16_MAX;
	int8_t x808 = INT8_MAX;
	int32_t t181 = 4;

    t181 = (x805>(x806>(x807+x808)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x810 = 18004U;
	int32_t x811 = -1;
	int8_t x812 = 6;

    t182 = (x809>(x810>(x811+x812)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x813 = 2U;
	uint8_t x814 = 13U;
	static int32_t x815 = INT32_MIN;
	volatile uint16_t x816 = 406U;
	int32_t t183 = 4;

    t183 = (x813>(x814>(x815+x816)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x817 = -19;
	int32_t x818 = INT32_MAX;
	int32_t x820 = -483412;
	int32_t t184 = 161;

    t184 = (x817>(x818>(x819+x820)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x821 = INT16_MAX;
	uint64_t x822 = 86509LLU;
	int32_t t185 = 3495606;

    t185 = (x821>(x822>(x823+x824)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x825 = 1LL;
	int16_t x826 = INT16_MIN;
	static int8_t x827 = INT8_MIN;
	volatile int32_t t186 = -11893312;

    t186 = (x825>(x826>(x827+x828)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x829 = 4007969156061199LL;
	uint64_t x830 = 705703LLU;
	int16_t x831 = INT16_MIN;
	int32_t t187 = -3239485;

    t187 = (x829>(x830>(x831+x832)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint64_t x833 = 14596477363LLU;
	uint32_t x834 = 58U;
	static int64_t x836 = -12608763083LL;
	static volatile int32_t t188 = 12;

    t188 = (x833>(x834>(x835+x836)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x837 = 57U;
	static uint64_t x838 = 262912647498945108LLU;
	int64_t x839 = 12622441118LL;
	int16_t x840 = -3;
	volatile int32_t t189 = 1;

    t189 = (x837>(x838>(x839+x840)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x841 = 95U;
	uint16_t x842 = 2052U;
	int32_t x843 = INT32_MIN;
	int8_t x844 = 15;

    t190 = (x841>(x842>(x843+x844)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x846 = 851;
	int32_t x848 = INT32_MIN;

    t191 = (x845>(x846>(x847+x848)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int32_t x849 = INT32_MAX;
	volatile uint16_t x851 = 240U;
	uint8_t x852 = 23U;
	int32_t t192 = -864;

    t192 = (x849>(x850>(x851+x852)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x853 = UINT64_MAX;
	static int16_t x854 = -1;
	static int64_t x855 = INT64_MIN;
	static uint16_t x856 = 20205U;
	volatile int32_t t193 = 9607007;

    t193 = (x853>(x854>(x855+x856)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x857 = INT32_MAX;
	uint64_t x858 = UINT64_MAX;
	int16_t x860 = 0;
	volatile int32_t t194 = 3;

    t194 = (x857>(x858>(x859+x860)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x861 = UINT16_MAX;
	volatile int16_t x862 = -6316;
	int16_t x863 = INT16_MIN;
	int8_t x864 = INT8_MAX;
	static volatile int32_t t195 = 48;

    t195 = (x861>(x862>(x863+x864)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x865 = -1;
	int64_t x866 = INT64_MAX;
	volatile int16_t x867 = 0;
	int64_t x868 = -1LL;
	volatile int32_t t196 = -2943355;

    t196 = (x865>(x866>(x867+x868)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x869 = UINT8_MAX;
	int64_t x870 = -1LL;
	int64_t x871 = 449LL;
	static volatile int64_t x872 = -30193320938710LL;
	static volatile int32_t t197 = -19;

    t197 = (x869>(x870>(x871+x872)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x874 = 614076593823556LLU;
	static int64_t x875 = 9LL;
	int32_t x876 = INT32_MIN;
	static volatile int32_t t198 = 1;

    t198 = (x873>(x874>(x875+x876)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x877 = -21;
	int8_t x878 = INT8_MAX;
	uint8_t x880 = UINT8_MAX;
	static volatile int32_t t199 = 1;

    t199 = (x877>(x878>(x879+x880)));

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

