
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

int8_t x15 = INT8_MIN;
uint64_t x18 = UINT64_MAX;
volatile uint8_t x36 = UINT8_MAX;
volatile uint64_t x37 = UINT64_MAX;
uint32_t x39 = UINT32_MAX;
volatile int16_t x41 = -1;
static int8_t x66 = 1;
int32_t x76 = -7357;
volatile uint64_t x83 = 4LLU;
volatile uint64_t t12 = 68379392164009144LLU;
int8_t x88 = INT8_MIN;
uint64_t t13 = 56374572LLU;
volatile uint8_t x99 = 1U;
uint16_t x103 = 0U;
int8_t x105 = 2;
uint32_t x108 = 6U;
uint32_t t19 = 1337959836U;
int64_t x121 = 2310203481LL;
int16_t x122 = -1;
static int8_t x124 = -13;
uint32_t x154 = 81295271U;
volatile uint8_t x155 = 1U;
int8_t x166 = INT8_MIN;
static uint64_t x171 = 84659485LLU;
static uint32_t x195 = 4478151U;
int16_t x196 = INT16_MAX;
uint32_t t32 = 160U;
int8_t x199 = INT8_MIN;
int64_t t34 = 22LL;
uint64_t x211 = UINT64_MAX;
uint64_t x221 = 456636202852LLU;
uint64_t x233 = UINT64_MAX;
uint64_t t39 = 1355LLU;
uint32_t x237 = 20355U;
volatile int16_t x238 = 45;
static volatile int32_t t41 = 19;
volatile int8_t x258 = -13;
static int8_t x259 = INT8_MAX;
static int16_t x261 = -53;
int8_t x263 = INT8_MAX;
int32_t t44 = -4855266;
volatile uint32_t x267 = UINT32_MAX;
int32_t x268 = -105831487;
volatile uint64_t x281 = 5495694395855LLU;
uint64_t x312 = UINT64_MAX;
uint8_t x315 = 0U;
volatile uint32_t t51 = 2U;
volatile int8_t x326 = -12;
static int16_t x333 = -28;
static uint64_t t56 = 243275048LLU;
uint32_t x347 = 62121257U;
static int16_t x355 = -2045;
static uint8_t x360 = 0U;
int64_t x365 = -2704898370839837LL;
static volatile uint64_t x366 = UINT64_MAX;
uint8_t x368 = UINT8_MAX;
static int16_t x370 = INT16_MIN;
int32_t x378 = -1154;
uint64_t t62 = 7871082121514005018LLU;
uint8_t x387 = 37U;
uint16_t x393 = 32452U;
int32_t t65 = 87978;
int16_t x405 = -1;
volatile int64_t x406 = -241641LL;
int8_t x407 = -50;
uint64_t x418 = 0LLU;
int64_t x424 = -1LL;
int8_t x426 = INT8_MAX;
uint8_t x429 = 3U;
uint8_t x431 = UINT8_MAX;
volatile uint64_t t71 = 7758739609229LLU;
uint8_t x448 = 26U;
static int8_t x468 = INT8_MAX;
uint16_t x474 = 260U;
int64_t x491 = -1LL;
volatile uint32_t x509 = 2684U;
static volatile uint64_t t82 = 1114011118LLU;
static int16_t x515 = INT16_MAX;
volatile int32_t t83 = -3042;
int8_t x523 = 0;
volatile int32_t t85 = -3389170;
int32_t x527 = 3462196;
volatile int64_t t86 = -1109160021750917974LL;
uint8_t x537 = 7U;
int64_t x538 = -6675895971LL;
uint64_t x539 = UINT64_MAX;
volatile int16_t x540 = INT16_MIN;
int32_t x545 = INT32_MIN;
uint64_t x547 = 14483LLU;
uint64_t t91 = 8592889534145LLU;
int32_t x560 = -1;
volatile uint16_t x571 = 480U;
volatile int16_t x582 = INT16_MIN;
volatile uint32_t t95 = 48561345U;
int16_t x586 = INT16_MIN;
volatile uint8_t x589 = 12U;
int8_t x613 = 1;
int32_t x614 = -1;
int8_t x616 = INT8_MIN;
volatile uint64_t t103 = 9LLU;
static int64_t x649 = -3966094135096LL;
int16_t x658 = -1;
uint8_t x659 = 1U;
static uint8_t x660 = UINT8_MAX;
uint32_t x671 = 734749U;
volatile int64_t t110 = -2076920794708133121LL;
uint64_t x673 = 121759097997025165LLU;
uint64_t t114 = 7710LLU;
int8_t x707 = INT8_MIN;
static int8_t x710 = 0;
uint32_t x711 = 30676U;
volatile int64_t x716 = INT64_MIN;
volatile uint8_t x721 = 59U;
int16_t x727 = INT16_MIN;
uint64_t x767 = 140447LLU;
uint64_t t127 = 3865627534966LLU;
int32_t x775 = 3;
int8_t x818 = INT8_MIN;
int32_t x830 = -1;
volatile int16_t x832 = 7850;
int8_t x850 = INT8_MAX;
int8_t x859 = INT8_MIN;
volatile int32_t t138 = 2755323;
int8_t x865 = 17;
volatile uint64_t t139 = 2270133791589697LLU;
static volatile int8_t x895 = -1;
static int64_t x913 = 172042450914634308LL;
volatile int8_t x917 = -51;
int16_t x919 = INT16_MIN;
int64_t x920 = -1LL;
int64_t x921 = -1LL;
static int8_t x923 = 0;
uint32_t x924 = 79U;
volatile int64_t t145 = 1795792753393LL;
int64_t x933 = 8789LL;
uint64_t x934 = UINT64_MAX;
volatile uint64_t x935 = 1974583418LLU;
uint8_t x937 = 75U;
static uint16_t x940 = 75U;
volatile int64_t t147 = -10546088162116024LL;
uint16_t x948 = 1261U;
volatile int32_t x973 = -13838;
int16_t x979 = INT16_MIN;
int8_t x983 = INT8_MIN;
static uint64_t t154 = 3794LLU;
static volatile uint16_t x985 = 25U;
uint64_t x988 = 270LLU;
static uint64_t t156 = 974676267194160LLU;
static int8_t x1001 = -1;
volatile int32_t x1002 = INT32_MAX;
static int64_t x1003 = -6550289744LL;
int32_t t159 = 694357;
uint32_t x1016 = 26U;
volatile int16_t x1035 = INT16_MIN;
uint8_t x1036 = 33U;
int16_t x1037 = -1;
static int32_t x1051 = -1;
volatile int64_t x1064 = -20996644990172270LL;
int64_t x1075 = -1LL;
volatile uint16_t x1089 = 12U;
uint64_t x1090 = 339652721LLU;
volatile uint64_t x1105 = 973017LLU;
static uint64_t x1106 = UINT64_MAX;
volatile int32_t t171 = -26171;
static uint8_t x1114 = UINT8_MAX;
volatile int32_t x1115 = -4393305;
volatile int32_t x1116 = INT32_MAX;
int32_t x1117 = INT32_MIN;
int64_t t173 = -1937515LL;
int32_t x1126 = -1;
static volatile uint8_t x1129 = UINT8_MAX;
int16_t x1158 = -1;
static volatile int8_t x1160 = 24;
volatile int8_t x1163 = 45;
int8_t x1173 = 0;
volatile uint32_t x1176 = UINT32_MAX;
int64_t t183 = -296359461814895877LL;
int32_t x1180 = -45530;
volatile uint32_t t184 = 2046U;
static int8_t x1186 = INT8_MIN;
volatile int32_t x1195 = INT32_MAX;
uint8_t x1196 = UINT8_MAX;
volatile int32_t x1203 = -1;
volatile uint64_t t188 = 687578113854LLU;
uint16_t x1206 = 3963U;
int32_t x1207 = -1;
int64_t x1223 = 1421765LL;
int32_t x1231 = 23;
int32_t x1234 = INT32_MIN;
int8_t x1243 = INT8_MIN;
int64_t x1244 = 3LL;
uint32_t x1253 = UINT32_MAX;
int32_t x1255 = -1;
static uint32_t t197 = 3U;
int16_t x1270 = 7;
int32_t x1272 = 0;


void f0(void) {
    	volatile uint32_t x1 = 94U;
	uint64_t x2 = 1LLU;
	int64_t x3 = 485125466598296717LL;
	int32_t x4 = -1;
	volatile uint64_t t0 = 12934906LLU;

    t0 = ((x1*(x2+x3))*x4);

    if (t0 != 9738438360888763356LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x13 = 0U;
	uint16_t x14 = UINT16_MAX;
	volatile uint32_t x16 = 170U;
	volatile uint32_t t1 = 181447U;

    t1 = ((x13*(x14+x15))*x16);

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x17 = INT16_MIN;
	int16_t x19 = -1;
	int8_t x20 = INT8_MIN;
	uint64_t t2 = 3602411657235LLU;

    t2 = ((x17*(x18+x19))*x20);

    if (t2 != 18446744073701163008LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x33 = -1LL;
	uint32_t x34 = 1795740U;
	uint64_t x35 = UINT64_MAX;
	uint64_t t3 = 384405LLU;

    t3 = ((x33*(x34+x35))*x36);

    if (t3 != 18446744073251638171LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x38 = UINT16_MAX;
	volatile int64_t x40 = 861827LL;
	volatile uint64_t t4 = 2399LLU;

    t4 = ((x37*(x38+x39))*x40);

    if (t4 != 18446744017230580998LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int32_t x42 = -3;
	static volatile int16_t x43 = -1;
	uint8_t x44 = 16U;
	volatile int32_t t5 = -720966;

    t5 = ((x41*(x42+x43))*x44);

    if (t5 != 64) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x53 = -5;
	int8_t x54 = INT8_MIN;
	static volatile int16_t x55 = INT16_MAX;
	uint8_t x56 = 5U;
	static volatile int32_t t6 = -5415;

    t6 = ((x53*(x54+x55))*x56);

    if (t6 != -815975) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x57 = INT8_MIN;
	volatile int16_t x58 = INT16_MIN;
	uint32_t x59 = UINT32_MAX;
	int8_t x60 = INT8_MIN;
	uint32_t t7 = 5U;

    t7 = ((x57*(x58+x59))*x60);

    if (t7 != 3758080000U) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x61 = -1;
	volatile int8_t x62 = INT8_MIN;
	uint16_t x63 = UINT16_MAX;
	int32_t x64 = -26;
	volatile int32_t t8 = 91628;

    t8 = ((x61*(x62+x63))*x64);

    if (t8 != 1700582) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int16_t x65 = -1;
	int64_t x67 = -218LL;
	uint16_t x68 = UINT16_MAX;
	volatile int64_t t9 = -60195174484LL;

    t9 = ((x65*(x66+x67))*x68);

    if (t9 != 14221095LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x73 = 565388U;
	static int64_t x74 = INT64_MAX;
	int64_t x75 = INT64_MIN;
	volatile int64_t t10 = -149819527781618LL;

    t10 = ((x73*(x74+x75))*x76);

    if (t10 != 4159559516LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x77 = INT16_MIN;
	uint64_t x78 = UINT64_MAX;
	int64_t x79 = -20722656038004LL;
	uint64_t x80 = 6625860132948LLU;
	uint64_t t11 = 179LLU;

    t11 = ((x77*(x78+x79))*x80);

    if (t11 != 17257785245956177920LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x81 = 1380U;
	static int8_t x82 = 21;
	int8_t x84 = 1;

    t12 = ((x81*(x82+x83))*x84);

    if (t12 != 34500LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x85 = UINT32_MAX;
	uint64_t x86 = UINT64_MAX;
	int16_t x87 = INT16_MIN;

    t13 = ((x85*(x86+x87))*x88);

    if (t13 != 18014948261101440LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x93 = -1;
	static int16_t x94 = -3132;
	int32_t x95 = -11275;
	uint32_t x96 = 13190U;
	static volatile uint32_t t14 = 7574U;

    t14 = ((x93*(x94+x95))*x96);

    if (t14 != 190028330U) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x97 = 13LL;
	int16_t x98 = 4;
	int32_t x100 = INT32_MIN;
	int64_t t15 = -1553908662998LL;

    t15 = ((x97*(x98+x99))*x100);

    if (t15 != -139586437120LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x101 = 5U;
	static int32_t x102 = -7910;
	uint16_t x104 = 2425U;
	volatile int32_t t16 = -1;

    t16 = ((x101*(x102+x103))*x104);

    if (t16 != -95908750) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x106 = INT8_MAX;
	int8_t x107 = -1;
	volatile uint32_t t17 = 11617U;

    t17 = ((x105*(x106+x107))*x108);

    if (t17 != 1512U) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x113 = -6;
	int32_t x114 = INT32_MIN;
	volatile uint64_t x115 = 2762978LLU;
	int16_t x116 = INT16_MIN;
	static uint64_t t18 = 193927LLU;

    t18 = ((x113*(x114+x115))*x116);

    if (t18 != 18446322404468064256LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x117 = 1775;
	int32_t x118 = -1;
	volatile uint32_t x119 = 5747U;
	int16_t x120 = INT16_MAX;

    t19 = ((x117*(x118+x119))*x120);

    if (t19 != 3483066258U) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x123 = INT16_MIN;
	volatile int64_t t20 = 2676LL;

    t20 = ((x121*(x122+x123))*x124);

    if (t20 != 984139752295557LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x129 = INT32_MAX;
	uint64_t x130 = UINT64_MAX;
	volatile int64_t x131 = -1LL;
	int64_t x132 = INT64_MAX;
	volatile uint64_t t21 = 234455LLU;

    t21 = ((x129*(x130+x131))*x132);

    if (t21 != 4294967294LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x137 = 13280U;
	int8_t x138 = -24;
	static volatile uint16_t x139 = 20U;
	int32_t x140 = 1;
	int32_t t22 = -542045206;

    t22 = ((x137*(x138+x139))*x140);

    if (t22 != -53120) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x145 = 7;
	static int64_t x146 = INT64_MIN;
	static uint64_t x147 = UINT64_MAX;
	int8_t x148 = -1;
	static volatile uint64_t t23 = 6876381987235LLU;

    t23 = ((x145*(x146+x147))*x148);

    if (t23 != 9223372036854775815LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x149 = INT32_MAX;
	static int32_t x150 = 1;
	uint32_t x151 = UINT32_MAX;
	uint64_t x152 = UINT64_MAX;
	uint64_t t24 = 63LLU;

    t24 = ((x149*(x150+x151))*x152);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x153 = INT32_MIN;
	volatile int16_t x156 = -1871;
	uint32_t t25 = 2U;

    t25 = ((x153*(x154+x155))*x156);

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x161 = 1700304552U;
	static volatile int64_t x162 = -1LL;
	static uint8_t x163 = 0U;
	int64_t x164 = -1LL;
	int64_t t26 = -895519019LL;

    t26 = ((x161*(x162+x163))*x164);

    if (t26 != 1700304552LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x165 = INT8_MIN;
	volatile int8_t x167 = INT8_MIN;
	uint32_t x168 = 277249U;
	uint32_t t27 = 65926231U;

    t27 = ((x165*(x166+x167))*x168);

    if (t27 != 494960640U) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x169 = 18959;
	int64_t x170 = INT64_MAX;
	static volatile uint8_t x172 = 18U;
	uint64_t t28 = 248616641784003372LLU;

    t28 = ((x169*(x170+x171))*x172);

    if (t28 != 28891064828808LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x177 = UINT32_MAX;
	int8_t x178 = INT8_MIN;
	volatile int16_t x179 = -2965;
	int8_t x180 = INT8_MIN;
	volatile uint32_t t29 = 2346842U;

    t29 = ((x177*(x178+x179))*x180);

    if (t29 != 4294571392U) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x185 = INT32_MIN;
	volatile uint64_t x186 = UINT64_MAX;
	uint32_t x187 = 136568U;
	int64_t x188 = INT64_MAX;
	uint64_t t30 = 131808916565186LLU;

    t30 = ((x185*(x186+x187))*x188);

    if (t30 != 293275399356416LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x189 = 10980U;
	int64_t x190 = -1LL;
	volatile uint32_t x191 = 3U;
	static int8_t x192 = -1;
	int64_t t31 = -420099244LL;

    t31 = ((x189*(x190+x191))*x192);

    if (t31 != -21960LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x193 = 93U;
	uint32_t x194 = 11215076U;

    t32 = ((x193*(x194+x195))*x196);

    if (t32 != 2291253473U) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x197 = 0;
	static uint8_t x198 = 0U;
	uint32_t x200 = UINT32_MAX;
	volatile uint32_t t33 = 3671895U;

    t33 = ((x197*(x198+x199))*x200);

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x205 = UINT8_MAX;
	volatile int64_t x206 = -1LL;
	volatile uint16_t x207 = 760U;
	int64_t x208 = 68905134LL;

    t34 = ((x205*(x206+x207))*x208);

    if (t34 != 13336244160030LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x209 = 0;
	static volatile int64_t x210 = INT64_MIN;
	int16_t x212 = -1;
	uint64_t t35 = 783850416024LLU;

    t35 = ((x209*(x210+x211))*x212);

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x217 = INT8_MIN;
	int8_t x218 = INT8_MIN;
	int16_t x219 = INT16_MIN;
	volatile int16_t x220 = 6;
	volatile int32_t t36 = 4454;

    t36 = ((x217*(x218+x219))*x220);

    if (t36 != 25264128) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x222 = UINT16_MAX;
	static volatile int32_t x223 = INT32_MIN;
	static uint16_t x224 = UINT16_MAX;
	volatile uint64_t t37 = 1464LLU;

    t37 = ((x221*(x222+x223))*x224);

    if (t37 != 13397817711490989924LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x225 = -18;
	volatile uint64_t x226 = 6360437982759LLU;
	int8_t x227 = -3;
	int32_t x228 = INT32_MIN;
	uint64_t t38 = 1013296LLU;

    t38 = ((x225*(x226+x227))*x228);

    if (t38 != 2653103158183591936LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x234 = INT64_MAX;
	uint64_t x235 = 948536LLU;
	int8_t x236 = -22;

    t39 = ((x233*(x234+x235))*x236);

    if (t39 != 20867770LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x239 = -10;
	volatile uint64_t x240 = 2690966092791529LLU;
	uint64_t t40 = 186738903727963LLU;

    t40 = ((x237*(x238+x239))*x240);

    if (t40 != 17096879064921231377LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x241 = -1;
	uint8_t x242 = 1U;
	static volatile uint8_t x243 = UINT8_MAX;
	int32_t x244 = -1;

    t41 = ((x241*(x242+x243))*x244);

    if (t41 != 256) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x249 = 535036LLU;
	static volatile int8_t x250 = INT8_MAX;
	int8_t x251 = INT8_MIN;
	int16_t x252 = -1;
	volatile uint64_t t42 = 223436739795LLU;

    t42 = ((x249*(x250+x251))*x252);

    if (t42 != 535036LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x257 = 6170U;
	int8_t x260 = INT8_MIN;
	volatile int32_t t43 = -276534;

    t43 = ((x257*(x258+x259))*x260);

    if (t43 != -90032640) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x262 = INT8_MIN;
	int32_t x264 = 635;

    t44 = ((x261*(x262+x263))*x264);

    if (t44 != 33655) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x265 = INT32_MIN;
	uint32_t x266 = 27851147U;
	volatile uint32_t t45 = 29693334U;

    t45 = ((x265*(x266+x267))*x268);

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x269 = -1LL;
	int64_t x270 = -1LL;
	int32_t x271 = INT32_MAX;
	static uint8_t x272 = 6U;
	int64_t t46 = 11888270LL;

    t46 = ((x269*(x270+x271))*x272);

    if (t46 != -12884901876LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x277 = INT16_MIN;
	volatile uint64_t x278 = 1391955014535LLU;
	uint32_t x279 = 95421U;
	int16_t x280 = -1;
	volatile uint64_t t47 = 3LLU;

    t47 = ((x277*(x278+x279))*x280);

    if (t47 != 45611585043038208LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x282 = 52U;
	uint8_t x283 = 3U;
	static int32_t x284 = -2;
	static volatile uint64_t t48 = 6950059340657223LLU;

    t48 = ((x281*(x282+x283))*x284);

    if (t48 != 18446139547326007566LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x289 = 1;
	static volatile int8_t x290 = INT8_MIN;
	int16_t x291 = 46;
	static int8_t x292 = -1;
	volatile int32_t t49 = 14;

    t49 = ((x289*(x290+x291))*x292);

    if (t49 != 82) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x309 = INT32_MIN;
	static uint32_t x310 = 366U;
	int8_t x311 = -25;
	static volatile uint64_t t50 = 121357099768541LLU;

    t50 = ((x309*(x310+x311))*x312);

    if (t50 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x313 = 57U;
	uint32_t x314 = 14306U;
	static int16_t x316 = -1;

    t51 = ((x313*(x314+x315))*x316);

    if (t51 != 4294151854U) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x321 = -1;
	static int64_t x322 = -112475LL;
	volatile int16_t x323 = -1;
	static int64_t x324 = 850816235630LL;
	static volatile int64_t t52 = 176LL;

    t52 = ((x321*(x322+x323))*x324);

    if (t52 != 95696406918719880LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x325 = 30979967LLU;
	static int32_t x327 = 27868601;
	int16_t x328 = 1;
	volatile uint64_t t53 = 13084972LLU;

    t53 = ((x325*(x326+x327))*x328);

    if (t53 != 863367967556563LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x329 = -17615318804426293LL;
	volatile int32_t x330 = INT32_MAX;
	volatile uint64_t x331 = UINT64_MAX;
	uint8_t x332 = 11U;
	volatile uint64_t t54 = 11472433609958LLU;

    t54 = ((x329*(x330+x331))*x332);

    if (t54 != 17271569247633373326LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x334 = -28;
	int16_t x335 = 11;
	uint16_t x336 = UINT16_MAX;
	static volatile int32_t t55 = -50976647;

    t55 = ((x333*(x334+x335))*x336);

    if (t55 != 31194660) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x337 = INT8_MAX;
	volatile uint64_t x338 = 3626145007393449LLU;
	int8_t x339 = 4;
	volatile int64_t x340 = INT64_MIN;

    t56 = ((x337*(x338+x339))*x340);

    if (t56 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x345 = INT32_MAX;
	uint64_t x346 = UINT64_MAX;
	int64_t x348 = INT64_MAX;
	volatile uint64_t t57 = 859036294LLU;

    t57 = ((x345*(x346+x347))*x348);

    if (t57 != 18313339692318450984LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x353 = -1;
	uint32_t x354 = 159721U;
	uint64_t x356 = UINT64_MAX;
	static uint64_t t58 = 223088082686458202LLU;

    t58 = ((x353*(x354+x355))*x356);

    if (t58 != 18446744069414741996LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int8_t x357 = INT8_MAX;
	static uint64_t x358 = 982454647905423815LLU;
	uint64_t x359 = UINT64_MAX;
	uint64_t t59 = 179730LLU;

    t59 = ((x357*(x358+x359))*x360);

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x367 = INT32_MAX;
	uint64_t t60 = 961752974827LLU;

    t60 = ((x365*(x366+x367))*x368);

    if (t60 != 7663009272052182982LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x369 = 228U;
	uint32_t x371 = UINT32_MAX;
	int8_t x372 = INT8_MAX;
	uint32_t t61 = 5500789U;

    t61 = ((x369*(x370+x371))*x372);

    if (t61 != 3346108132U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x377 = 2668925658LLU;
	static int64_t x379 = -1527686LL;
	int8_t x380 = INT8_MIN;

    t62 = ((x377*(x378+x379))*x380);

    if (t62 != 522286118781020160LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x385 = 3U;
	volatile int64_t x386 = -1LL;
	volatile int8_t x388 = -1;
	int64_t t63 = -1377084556LL;

    t63 = ((x385*(x386+x387))*x388);

    if (t63 != -108LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x389 = 23;
	int8_t x390 = -1;
	int8_t x391 = INT8_MIN;
	uint32_t x392 = UINT32_MAX;
	volatile uint32_t t64 = 64408215U;

    t64 = ((x389*(x390+x391))*x392);

    if (t64 != 2967U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x394 = 5U;
	int8_t x395 = 1;
	uint8_t x396 = 0U;

    t65 = ((x393*(x394+x395))*x396);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x408 = -5351800;
	static volatile int64_t t66 = -7427038156734LL;

    t66 = ((x405*(x406+x407))*x408);

    if (t66 != -1293481893800LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x409 = UINT64_MAX;
	uint32_t x410 = 2151252U;
	int32_t x411 = -1;
	int32_t x412 = -1;
	volatile uint64_t t67 = 48378224085LLU;

    t67 = ((x409*(x410+x411))*x412);

    if (t67 != 2151251LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x417 = 236707LL;
	int64_t x419 = INT64_MAX;
	int8_t x420 = -1;
	static uint64_t t68 = 1LLU;

    t68 = ((x417*(x418+x419))*x420);

    if (t68 != 9223372036855012515LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x421 = -2998240LL;
	volatile int32_t x422 = INT32_MIN;
	uint64_t x423 = 2628093612LLU;
	uint64_t t69 = 1358004175399LLU;

    t69 = ((x421*(x422+x423))*x424);

    if (t69 != 1440984018463360LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x425 = INT8_MIN;
	uint8_t x427 = 0U;
	volatile uint64_t x428 = UINT64_MAX;
	volatile uint64_t t70 = 13797086199LLU;

    t70 = ((x425*(x426+x427))*x428);

    if (t70 != 16256LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x430 = UINT32_MAX;
	static volatile uint64_t x432 = 3645822168317588106LLU;

    t71 = ((x429*(x430+x431))*x432);

    if (t71 != 11104881201569394372LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x441 = 0U;
	int8_t x442 = 1;
	int16_t x443 = INT16_MIN;
	uint64_t x444 = 234267881267LLU;
	volatile uint64_t t72 = 3207511485602486078LLU;

    t72 = ((x441*(x442+x443))*x444);

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x445 = 10621680LLU;
	static uint64_t x446 = UINT64_MAX;
	volatile int8_t x447 = INT8_MIN;
	uint64_t t73 = 9754503121356LLU;

    t73 = ((x445*(x446+x447))*x448);

    if (t73 != 18446744038084436896LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x461 = UINT16_MAX;
	uint32_t x462 = UINT32_MAX;
	static uint8_t x463 = 7U;
	uint16_t x464 = 4314U;
	volatile uint32_t t74 = 0U;

    t74 = ((x461*(x462+x463))*x464);

    if (t74 != 1696307940U) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x465 = 220;
	static int16_t x466 = -1;
	int8_t x467 = -63;
	static int32_t t75 = -3100;

    t75 = ((x465*(x466+x467))*x468);

    if (t75 != -1788160) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x473 = 1;
	uint16_t x475 = 0U;
	volatile uint16_t x476 = 52U;
	volatile int32_t t76 = -24285;

    t76 = ((x473*(x474+x475))*x476);

    if (t76 != 13520) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x477 = -61975537239LL;
	uint8_t x478 = 0U;
	static int16_t x479 = -247;
	int32_t x480 = -1;
	volatile int64_t t77 = 1859182228946847LL;

    t77 = ((x477*(x478+x479))*x480);

    if (t77 != -15307957698033LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x489 = INT8_MIN;
	int8_t x490 = INT8_MIN;
	int8_t x492 = -1;
	int64_t t78 = 925429LL;

    t78 = ((x489*(x490+x491))*x492);

    if (t78 != -16512LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x493 = -1LL;
	static int64_t x494 = -924077072LL;
	static uint16_t x495 = 89U;
	static uint16_t x496 = 3U;
	volatile int64_t t79 = -1148LL;

    t79 = ((x493*(x494+x495))*x496);

    if (t79 != 2772230949LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x497 = -1;
	uint64_t x498 = UINT64_MAX;
	int32_t x499 = -1;
	int32_t x500 = 0;
	static uint64_t t80 = 53LLU;

    t80 = ((x497*(x498+x499))*x500);

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x505 = -618604;
	int32_t x506 = 22;
	uint64_t x507 = UINT64_MAX;
	static uint64_t x508 = 632LLU;
	uint64_t t81 = 245043223573LLU;

    t81 = ((x505*(x506+x507))*x508);

    if (t81 != 18446744065499439328LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x510 = UINT64_MAX;
	int16_t x511 = -2;
	static uint16_t x512 = 14005U;

    t82 = ((x509*(x510+x511))*x512);

    if (t82 != 18446744073596783356LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x513 = 116U;
	int16_t x514 = INT16_MIN;
	static int8_t x516 = INT8_MIN;

    t83 = ((x513*(x514+x515))*x516);

    if (t83 != 14848) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x517 = 53479U;
	uint16_t x518 = UINT16_MAX;
	static int8_t x519 = INT8_MIN;
	int64_t x520 = 424717LL;
	int64_t t84 = -10874234LL;

    t84 = ((x517*(x518+x519))*x520);

    if (t84 != 1485617999055301LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x521 = INT16_MIN;
	int16_t x522 = 20;
	volatile int8_t x524 = -1;

    t85 = ((x521*(x522+x523))*x524);

    if (t85 != 655360) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x525 = 14;
	int64_t x526 = -1LL;
	volatile uint8_t x528 = 0U;

    t86 = ((x525*(x526+x527))*x528);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x529 = 402;
	volatile int64_t x530 = -1LL;
	uint16_t x531 = 3U;
	uint8_t x532 = 52U;
	int64_t t87 = -498007104329738LL;

    t87 = ((x529*(x530+x531))*x532);

    if (t87 != 41808LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x533 = 448735LLU;
	uint32_t x534 = UINT32_MAX;
	int32_t x535 = -3383594;
	int16_t x536 = INT16_MAX;
	uint64_t t88 = 264458527639LLU;

    t88 = ((x533*(x534+x535))*x536);

    if (t88 != 7761925948911201397LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint64_t t89 = 3604800707924600160LLU;

    t89 = ((x537*(x538+x539))*x540);

    if (t89 != 1531290314473472LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x541 = -1;
	uint8_t x542 = 4U;
	static int32_t x543 = INT32_MIN;
	uint32_t x544 = 844U;
	static uint32_t t90 = 20U;

    t90 = ((x541*(x542+x543))*x544);

    if (t90 != 4294963920U) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x546 = 1;
	uint8_t x548 = 42U;

    t91 = ((x545*(x546+x547))*x548);

    if (t91 != 18445437699276931072LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x557 = INT8_MIN;
	int64_t x558 = -27930174694381LL;
	uint32_t x559 = 35U;
	volatile int64_t t92 = -5820268281802LL;

    t92 = ((x557*(x558+x559))*x560);

    if (t92 != -3575062360876288LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x561 = 837268605U;
	uint64_t x562 = UINT64_MAX;
	int16_t x563 = 0;
	uint16_t x564 = 5456U;
	volatile uint64_t t93 = 0LLU;

    t93 = ((x561*(x562+x563))*x564);

    if (t93 != 18446739505572042736LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x569 = 6370;
	volatile uint16_t x570 = 491U;
	volatile uint16_t x572 = 8U;
	volatile int32_t t94 = 58337022;

    t94 = ((x569*(x570+x571))*x572);

    if (t94 != 49482160) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x581 = 0;
	uint32_t x583 = UINT32_MAX;
	static int32_t x584 = INT32_MIN;

    t95 = ((x581*(x582+x583))*x584);

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x585 = INT16_MIN;
	int32_t x587 = 2443;
	int16_t x588 = -1;
	int32_t t96 = 69338770;

    t96 = ((x585*(x586+x587))*x588);

    if (t96 != -993689600) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x590 = 78453425LLU;
	volatile int32_t x591 = 161648872;
	static int8_t x592 = -1;
	volatile uint64_t t97 = 914860074654LLU;

    t97 = ((x589*(x590+x591))*x592);

    if (t97 != 18446744070828324052LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x601 = -1LL;
	uint64_t x602 = 118549542LLU;
	int64_t x603 = INT64_MIN;
	int32_t x604 = 792802370;
	volatile uint64_t t98 = 1259846279LLU;

    t98 = ((x601*(x602+x603))*x604);

    if (t98 != 18352757715849537076LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x609 = INT16_MIN;
	uint64_t x610 = 748253053LLU;
	static int16_t x611 = -69;
	int16_t x612 = 36;
	static uint64_t t99 = 564883969292680644LLU;

    t99 = ((x609*(x610+x611))*x612);

    if (t99 != 18445861398573481984LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x615 = 5925074869905LL;
	static volatile int64_t t100 = 1378425LL;

    t100 = ((x613*(x614+x615))*x616);

    if (t100 != -758409583347712LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x617 = -1;
	int64_t x618 = 1LL;
	uint16_t x619 = 0U;
	int16_t x620 = INT16_MIN;
	volatile int64_t t101 = -553258944LL;

    t101 = ((x617*(x618+x619))*x620);

    if (t101 != 32768LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x621 = INT8_MAX;
	uint64_t x622 = 17325389544119233LLU;
	uint16_t x623 = 785U;
	int64_t x624 = INT64_MAX;
	uint64_t t102 = 152265787316LLU;

    t102 = ((x621*(x622+x623))*x624);

    if (t102 != 16246419601606309330LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x629 = INT32_MAX;
	static volatile int8_t x630 = 13;
	volatile uint32_t x631 = 0U;
	uint64_t x632 = 4694169849135LLU;

    t103 = ((x629*(x630+x631))*x632);

    if (t103 != 8730666682416223389LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint64_t x637 = UINT64_MAX;
	int8_t x638 = 51;
	uint8_t x639 = UINT8_MAX;
	volatile uint32_t x640 = 816431U;
	static volatile uint64_t t104 = 20642247042LLU;

    t104 = ((x637*(x638+x639))*x640);

    if (t104 != 18446744073459723730LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x645 = UINT32_MAX;
	uint64_t x646 = 191611LLU;
	uint64_t x647 = 3435284387813065LLU;
	volatile int16_t x648 = -1;
	volatile uint64_t t105 = 2943939241101LLU;

    t105 = ((x645*(x646+x647))*x648);

    if (t105 != 9684411674037470020LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x650 = INT8_MIN;
	uint64_t x651 = 932LLU;
	int16_t x652 = INT16_MAX;
	uint64_t t106 = 1328573268974824399LLU;

    t106 = ((x649*(x650+x651))*x652);

    if (t106 != 6195031196406041568LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x653 = INT32_MIN;
	int8_t x654 = -1;
	int16_t x655 = 1;
	int64_t x656 = INT64_MIN;
	int64_t t107 = 1621LL;

    t107 = ((x653*(x654+x655))*x656);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint8_t x657 = UINT8_MAX;
	volatile int32_t t108 = 478027;

    t108 = ((x657*(x658+x659))*x660);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x661 = INT16_MIN;
	int32_t x662 = -1;
	int64_t x663 = -1LL;
	int32_t x664 = INT32_MIN;
	static volatile int64_t t109 = -56354872936727LL;

    t109 = ((x661*(x662+x663))*x664);

    if (t109 != -140737488355328LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x669 = 22U;
	volatile int64_t x670 = -336078LL;
	uint8_t x672 = 8U;

    t110 = ((x669*(x670+x671))*x672);

    if (t110 != 70166096LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x674 = -1LL;
	int16_t x675 = -70;
	volatile int64_t x676 = INT64_MAX;
	static uint64_t t111 = 648LLU;

    t111 = ((x673*(x674+x675))*x676);

    if (t111 != 17868267994643562523LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x677 = INT16_MIN;
	int16_t x678 = INT16_MAX;
	static volatile int64_t x679 = 12163LL;
	static volatile uint16_t x680 = UINT16_MAX;
	int64_t t112 = -615962LL;

    t112 = ((x677*(x678+x679))*x680);

    if (t112 != -96484968038400LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x689 = -963279;
	int32_t x690 = INT32_MIN;
	int64_t x691 = 0LL;
	static int8_t x692 = -1;
	int64_t t113 = -8086185LL;

    t113 = ((x689*(x690+x691))*x692);

    if (t113 != -2068625900961792LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x693 = UINT64_MAX;
	int64_t x694 = 1902LL;
	static volatile int16_t x695 = INT16_MAX;
	uint64_t x696 = 432446460443143LLU;

    t114 = ((x693*(x694+x695))*x696);

    if (t114 != 3454257736606226949LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x697 = -1LL;
	int64_t x698 = INT64_MIN;
	int8_t x699 = 9;
	static uint64_t x700 = 1997548668LLU;
	volatile uint64_t t115 = 139175779647LLU;

    t115 = ((x697*(x698+x699))*x700);

    if (t115 != 18446744055731613604LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x701 = 5300U;
	int32_t x702 = -1;
	static uint32_t x703 = 832U;
	int32_t x704 = -345932;
	uint32_t t116 = 57409U;

    t116 = ((x701*(x702+x703))*x704);

    if (t116 != 1125082480U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x705 = 62U;
	int64_t x706 = 232LL;
	int32_t x708 = INT32_MIN;
	int64_t t117 = 2024LL;

    t117 = ((x705*(x706+x707))*x708);

    if (t117 != -13846974562304LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x709 = -4;
	volatile int16_t x712 = INT16_MAX;
	uint32_t t118 = 59U;

    t118 = ((x709*(x710+x711))*x712);

    if (t118 != 274325328U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x713 = UINT8_MAX;
	uint64_t x714 = 4224373935778272LLU;
	static int16_t x715 = -1;
	volatile uint64_t t119 = 153956143LLU;

    t119 = ((x713*(x714+x715))*x716);

    if (t119 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x722 = -1LL;
	uint16_t x723 = 64U;
	uint64_t x724 = 1393881198813851473LLU;
	uint64_t t120 = 12LLU;

    t120 = ((x721*(x722+x723))*x724);

    if (t120 != 15968075352411472661LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x725 = 60U;
	static uint32_t x726 = 1465472U;
	volatile uint64_t x728 = 18833712705153LLU;
	volatile uint64_t t121 = 1131LLU;

    t121 = ((x725*(x726+x727))*x728);

    if (t121 != 14121397238680432128LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x729 = 56789348597LLU;
	uint16_t x730 = 54U;
	uint32_t x731 = UINT32_MAX;
	int64_t x732 = -1LL;
	volatile uint64_t t122 = 9377907176543221LLU;

    t122 = ((x729*(x730+x731))*x732);

    if (t122 != 18446741063874075975LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x733 = -123300;
	int8_t x734 = -4;
	volatile uint64_t x735 = UINT64_MAX;
	int16_t x736 = INT16_MAX;
	volatile uint64_t t123 = 92LLU;

    t123 = ((x733*(x734+x735))*x736);

    if (t123 != 20200855500LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x737 = -1;
	int8_t x738 = 0;
	uint8_t x739 = UINT8_MAX;
	uint64_t x740 = 386630652513673LLU;
	uint64_t t124 = 435LLU;

    t124 = ((x737*(x738+x739))*x740);

    if (t124 != 18348153257318565001LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x757 = 1842254113252034LL;
	uint64_t x758 = 3900LLU;
	volatile int32_t x759 = INT32_MIN;
	uint32_t x760 = UINT32_MAX;
	uint64_t t125 = 1426112LLU;

    t125 = ((x757*(x758+x759))*x760);

    if (t125 != 17885715474966412424LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x761 = 4386;
	int8_t x762 = INT8_MAX;
	static uint32_t x763 = 356U;
	static int32_t x764 = 51876689;
	uint32_t t126 = 521488831U;

    t126 = ((x761*(x762+x763))*x764);

    if (t126 != 2221089030U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x765 = INT16_MAX;
	int8_t x766 = -1;
	volatile int8_t x768 = INT8_MAX;

    t127 = ((x765*(x766+x767))*x768);

    if (t127 != 584453248414LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x773 = INT16_MAX;
	volatile int32_t x774 = -1;
	uint32_t x776 = 10126U;
	uint32_t t128 = 14300290U;

    t128 = ((x773*(x774+x775))*x776);

    if (t128 != 663597284U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x777 = 6591U;
	int8_t x778 = INT8_MIN;
	int16_t x779 = -6;
	int8_t x780 = INT8_MAX;
	static int32_t t129 = -5;

    t129 = ((x777*(x778+x779))*x780);

    if (t129 != -112165638) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x789 = UINT64_MAX;
	int32_t x790 = INT32_MIN;
	static volatile uint8_t x791 = 126U;
	int64_t x792 = INT64_MAX;
	volatile uint64_t t130 = 4LLU;

    t130 = ((x789*(x790+x791))*x792);

    if (t130 != 18446744071562068094LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x793 = UINT32_MAX;
	uint16_t x794 = UINT16_MAX;
	uint16_t x795 = 0U;
	static int32_t x796 = INT32_MIN;
	uint32_t t131 = 13850U;

    t131 = ((x793*(x794+x795))*x796);

    if (t131 != 2147483648U) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x805 = -1;
	int16_t x806 = INT16_MAX;
	static volatile int8_t x807 = INT8_MAX;
	static uint8_t x808 = 3U;
	int32_t t132 = 9;

    t132 = ((x805*(x806+x807))*x808);

    if (t132 != -98682) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x813 = INT16_MAX;
	static uint32_t x814 = UINT32_MAX;
	int16_t x815 = INT16_MIN;
	volatile int64_t x816 = -1LL;
	int64_t t133 = 171794658303334779LL;

    t133 = ((x813*(x814+x815))*x816);

    if (t133 != -3221225473LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x817 = -6;
	static uint16_t x819 = 10U;
	static int16_t x820 = -1;
	static int32_t t134 = 67;

    t134 = ((x817*(x818+x819))*x820);

    if (t134 != -708) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x829 = INT8_MIN;
	static uint32_t x831 = 218U;
	volatile uint32_t t135 = 89137023U;

    t135 = ((x829*(x830+x831))*x832);

    if (t135 != 4076925696U) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint64_t x845 = 1LLU;
	static volatile int8_t x846 = -1;
	int16_t x847 = INT16_MIN;
	static int64_t x848 = INT64_MIN;
	uint64_t t136 = 1897240821614LLU;

    t136 = ((x845*(x846+x847))*x848);

    if (t136 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x849 = 18U;
	static volatile uint32_t x851 = 1097907843U;
	static uint64_t x852 = 76LLU;
	static uint64_t t137 = 30904240LLU;

    t137 = ((x849*(x850+x851))*x852);

    if (t137 != 196268044976LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x857 = INT8_MIN;
	uint8_t x858 = UINT8_MAX;
	int8_t x860 = -1;

    t138 = ((x857*(x858+x859))*x860);

    if (t138 != 16256) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x866 = -1LL;
	int64_t x867 = 46LL;
	uint64_t x868 = 13LLU;

    t139 = ((x865*(x866+x867))*x868);

    if (t139 != 9945LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x877 = 173U;
	uint32_t x878 = UINT32_MAX;
	int8_t x879 = 25;
	volatile int32_t x880 = INT32_MIN;
	volatile uint32_t t140 = 1481U;

    t140 = ((x877*(x878+x879))*x880);

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x893 = UINT16_MAX;
	int8_t x894 = INT8_MIN;
	int8_t x896 = -1;
	int32_t t141 = -792887;

    t141 = ((x893*(x894+x895))*x896);

    if (t141 != 8454015) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x909 = 135867148861149LL;
	int64_t x910 = INT64_MAX;
	uint64_t x911 = 599048905111528308LLU;
	int32_t x912 = INT32_MIN;
	static uint64_t t142 = 1434556196LLU;

    t142 = ((x909*(x910+x911))*x912);

    if (t142 != 3200939879752007680LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x914 = UINT32_MAX;
	int32_t x915 = 1;
	int64_t x916 = 4798809LL;
	static volatile int64_t t143 = -388170149986LL;

    t143 = ((x913*(x914+x915))*x916);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x918 = -1;
	static volatile int64_t t144 = -4104989LL;

    t144 = ((x917*(x918+x919))*x920);

    if (t144 != -1671219LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x922 = 1075;

    t145 = ((x921*(x922+x923))*x924);

    if (t145 != -84925LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x936 = -1;
	static volatile uint64_t t146 = 2LLU;

    t146 = ((x933*(x934+x935))*x936);

    if (t146 != 18446726719095899603LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x938 = -155868868LL;
	static int32_t x939 = INT32_MIN;

    t147 = ((x937*(x938+x939))*x940);

    if (t147 != -12956357902500LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x945 = INT64_MAX;
	int32_t x946 = 22088574;
	uint64_t x947 = 15087545421LLU;
	static uint64_t t148 = 875506808669LLU;

    t148 = ((x945*(x946+x947))*x948);

    if (t148 != 9223352983606308113LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint32_t x953 = UINT32_MAX;
	uint32_t x954 = 61506095U;
	static int8_t x955 = INT8_MIN;
	int32_t x956 = -23601937;
	static volatile uint32_t t149 = 11288306U;

    t149 = ((x953*(x954+x955))*x956);

    if (t149 != 3961883039U) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x961 = UINT16_MAX;
	uint32_t x962 = 6061U;
	int32_t x963 = 14556724;
	int16_t x964 = INT16_MAX;
	volatile uint32_t t150 = 122U;

    t150 = ((x961*(x962+x963))*x964);

    if (t150 != 806139361U) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int16_t x969 = INT16_MAX;
	uint8_t x970 = 2U;
	uint32_t x971 = 21U;
	static int16_t x972 = INT16_MIN;
	uint32_t t151 = 93543533U;

    t151 = ((x969*(x970+x971))*x972);

    if (t151 != 1074495488U) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x974 = 39;
	volatile uint16_t x975 = UINT16_MAX;
	int8_t x976 = -1;
	int32_t t152 = -92964;

    t152 = ((x973*(x974+x975))*x976);

    if (t152 != 907413012) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x977 = 1650543LLU;
	int8_t x978 = -1;
	uint8_t x980 = 1U;
	static uint64_t t153 = 14862150746308177LLU;

    t153 = ((x977*(x978+x979))*x980);

    if (t153 != 18446744019622908049LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x981 = UINT64_MAX;
	int16_t x982 = INT16_MAX;
	static uint16_t x984 = 185U;

    t154 = ((x981*(x982+x983))*x984);

    if (t154 != 18446744073703513401LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x986 = 1U;
	int16_t x987 = INT16_MAX;
	static volatile uint64_t t155 = 19698125LLU;

    t155 = ((x985*(x986+x987))*x988);

    if (t155 != 221184000LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x989 = -169126;
	volatile uint8_t x990 = 58U;
	int16_t x991 = -1;
	uint64_t x992 = 6799LLU;

    t156 = ((x989*(x990+x991))*x992);

    if (t156 != 18446744008165954198LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x993 = INT32_MIN;
	static uint64_t x994 = 30656LLU;
	static int32_t x995 = INT32_MAX;
	int8_t x996 = 17;
	volatile uint64_t t157 = 0LLU;

    t157 = ((x993*(x994+x995))*x996);

    if (t157 != 13833938926391263232LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x1004 = -12;
	volatile int64_t t158 = 180547362210956162LL;

    t158 = ((x1001*(x1002+x1003))*x1004);

    if (t158 != -52833673164LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x1009 = 1;
	int16_t x1010 = INT16_MIN;
	uint8_t x1011 = UINT8_MAX;
	int8_t x1012 = 0;

    t159 = ((x1009*(x1010+x1011))*x1012);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x1013 = 0U;
	int16_t x1014 = 3;
	volatile int32_t x1015 = -118;
	uint32_t t160 = 125951198U;

    t160 = ((x1013*(x1014+x1015))*x1016);

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x1017 = -2788;
	uint64_t x1018 = 32788602951LLU;
	uint16_t x1019 = 14876U;
	int32_t x1020 = -1;
	static volatile uint64_t t161 = 268023879549626819LLU;

    t161 = ((x1017*(x1018+x1019))*x1020);

    if (t161 != 91414666501676LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x1033 = -1;
	int8_t x1034 = 0;
	int32_t t162 = -931;

    t162 = ((x1033*(x1034+x1035))*x1036);

    if (t162 != 1081344) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x1038 = -4;
	uint64_t x1039 = 236609171703LLU;
	uint32_t x1040 = UINT32_MAX;
	volatile uint64_t t163 = 48008LLU;

    t163 = ((x1037*(x1038+x1039))*x1040);

    if (t163 != 16789013983490306291LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x1049 = -176;
	int8_t x1050 = -18;
	uint64_t x1052 = UINT64_MAX;
	volatile uint64_t t164 = 1104665395279045LLU;

    t164 = ((x1049*(x1050+x1051))*x1052);

    if (t164 != 18446744073709548272LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x1061 = INT32_MIN;
	uint64_t x1062 = 6401LLU;
	uint32_t x1063 = 105257830U;
	uint64_t t165 = 41208808079LLU;

    t165 = ((x1061*(x1062+x1063))*x1064);

    if (t165 != 8362854796272599040LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x1073 = INT32_MIN;
	int8_t x1074 = 1;
	int32_t x1076 = -41351;
	volatile int64_t t166 = -538533LL;

    t166 = ((x1073*(x1074+x1075))*x1076);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x1091 = 3206LLU;
	int8_t x1092 = -1;
	uint64_t t167 = 586284580026435LLU;

    t167 = ((x1089*(x1090+x1091))*x1092);

    if (t167 != 18446744069633680492LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x1093 = -104694362;
	uint8_t x1094 = 95U;
	static uint64_t x1095 = 847929931984372989LLU;
	int64_t x1096 = -1LL;
	static uint64_t t168 = 6170076207004998068LLU;

    t168 = ((x1093*(x1094+x1095))*x1096);

    if (t168 != 3134606013611481688LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x1101 = INT32_MAX;
	static int8_t x1102 = INT8_MIN;
	int8_t x1103 = INT8_MAX;
	volatile int8_t x1104 = 1;
	volatile int32_t t169 = -75309;

    t169 = ((x1101*(x1102+x1103))*x1104);

    if (t169 != -2147483647) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x1107 = INT16_MAX;
	int16_t x1108 = INT16_MIN;
	volatile uint64_t t170 = 183768LLU;

    t170 = ((x1105*(x1106+x1107))*x1108);

    if (t170 != 18445699368428830720LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x1109 = -11;
	uint16_t x1110 = 591U;
	int8_t x1111 = INT8_MIN;
	static uint8_t x1112 = 4U;

    t171 = ((x1109*(x1110+x1111))*x1112);

    if (t171 != -20372) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x1113 = 225927602361LLU;
	uint64_t t172 = 4713328641611LLU;

    t172 = ((x1113*(x1114+x1115))*x1116);

    if (t172 != 1008937386040314122LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x1118 = -1;
	int64_t x1119 = -1LL;
	volatile uint16_t x1120 = 38U;

    t173 = ((x1117*(x1118+x1119))*x1120);

    if (t173 != 163208757248LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x1125 = 84461279953LLU;
	uint8_t x1127 = 5U;
	uint32_t x1128 = 80207U;
	volatile uint64_t t174 = 25LLU;

    t174 = ((x1125*(x1126+x1127))*x1128);

    if (t174 != 27097543524761084LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint64_t x1130 = 7660980611378LLU;
	int32_t x1131 = INT32_MIN;
	volatile int64_t x1132 = INT64_MAX;
	volatile uint64_t t175 = 28602782LLU;

    t175 = ((x1129*(x1130+x1131))*x1132);

    if (t175 != 18444791071261980466LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x1133 = -1;
	int16_t x1134 = -1;
	int16_t x1135 = INT16_MAX;
	int8_t x1136 = INT8_MIN;
	volatile int32_t t176 = -19;

    t176 = ((x1133*(x1134+x1135))*x1136);

    if (t176 != 4194048) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x1137 = 26U;
	int64_t x1138 = 564767622LL;
	int16_t x1139 = 6;
	int16_t x1140 = INT16_MIN;
	static int64_t t177 = 28694302428709LL;

    t177 = ((x1137*(x1138+x1139))*x1140);

    if (t177 != -481163946491904LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x1153 = 14040U;
	volatile int8_t x1154 = INT8_MIN;
	volatile uint32_t x1155 = 73119113U;
	int16_t x1156 = INT16_MIN;
	static uint32_t t178 = 2U;

    t178 = ((x1153*(x1154+x1155))*x1156);

    if (t178 != 2905866240U) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x1157 = -1;
	static int64_t x1159 = 907407LL;
	int64_t t179 = -461443599060LL;

    t179 = ((x1157*(x1158+x1159))*x1160);

    if (t179 != -21777744LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x1161 = INT16_MIN;
	static int16_t x1162 = INT16_MIN;
	volatile uint32_t x1164 = UINT32_MAX;
	volatile uint32_t t180 = 9U;

    t180 = ((x1161*(x1162+x1163))*x1164);

    if (t180 != 3222700032U) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x1165 = -1;
	volatile uint64_t x1166 = UINT64_MAX;
	int8_t x1167 = -1;
	int16_t x1168 = INT16_MIN;
	volatile uint64_t t181 = 210LLU;

    t181 = ((x1165*(x1166+x1167))*x1168);

    if (t181 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x1169 = UINT64_MAX;
	int8_t x1170 = INT8_MIN;
	static int16_t x1171 = 19;
	int32_t x1172 = -84;
	uint64_t t182 = 101894706761LLU;

    t182 = ((x1169*(x1170+x1171))*x1172);

    if (t182 != 18446744073709542460LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x1174 = -3973777469580343699LL;
	int16_t x1175 = -1;

    t183 = ((x1173*(x1174+x1175))*x1176);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint8_t x1177 = 11U;
	int8_t x1178 = -48;
	uint32_t x1179 = 643012U;

    t184 = ((x1177*(x1178+x1179))*x1180);

    if (t184 != 106887080U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x1185 = UINT8_MAX;
	uint64_t x1187 = UINT64_MAX;
	volatile int64_t x1188 = INT64_MIN;
	volatile uint64_t t185 = 232329208LLU;

    t185 = ((x1185*(x1186+x1187))*x1188);

    if (t185 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x1193 = UINT32_MAX;
	uint32_t x1194 = 1296949564U;
	volatile uint32_t t186 = 68U;

    t186 = ((x1193*(x1194+x1195))*x1196);

    if (t186 != 2137826875U) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1197 = -1;
	int32_t x1198 = INT32_MAX;
	int16_t x1199 = INT16_MIN;
	uint16_t x1200 = 1U;
	int32_t t187 = 2527382;

    t187 = ((x1197*(x1198+x1199))*x1200);

    if (t187 != -2147450879) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x1201 = INT64_MAX;
	int16_t x1202 = 1;
	volatile uint64_t x1204 = 5659732LLU;

    t188 = ((x1201*(x1202+x1203))*x1204);

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x1205 = INT8_MIN;
	int32_t x1208 = -37;
	volatile int32_t t189 = -49;

    t189 = ((x1205*(x1206+x1207))*x1208);

    if (t189 != 18764032) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x1213 = 9;
	volatile int64_t x1214 = 10957209662LL;
	int16_t x1215 = -7;
	volatile int16_t x1216 = INT16_MIN;
	int64_t t190 = 232LL;

    t190 = ((x1213*(x1214+x1215))*x1216);

    if (t190 != -3231412613775360LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x1217 = 5U;
	int64_t x1218 = -848787226LL;
	volatile uint64_t x1219 = 115169LLU;
	int64_t x1220 = INT64_MIN;
	volatile uint64_t t191 = 62818LLU;

    t191 = ((x1217*(x1218+x1219))*x1220);

    if (t191 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1221 = INT8_MAX;
	uint32_t x1222 = UINT32_MAX;
	int8_t x1224 = -1;
	static volatile int64_t t192 = 254668363863129526LL;

    t192 = ((x1221*(x1222+x1223))*x1224);

    if (t192 != -545641410620LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x1229 = UINT64_MAX;
	uint64_t x1230 = 3LLU;
	int8_t x1232 = INT8_MAX;
	static volatile uint64_t t193 = 225161147973512LLU;

    t193 = ((x1229*(x1230+x1231))*x1232);

    if (t193 != 18446744073709548314LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1233 = UINT32_MAX;
	volatile uint16_t x1235 = 1U;
	static volatile int64_t x1236 = -1LL;
	volatile int64_t t194 = 16876724362071110LL;

    t194 = ((x1233*(x1234+x1235))*x1236);

    if (t194 != -2147483647LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint32_t x1237 = 31604631U;
	int8_t x1238 = -27;
	static uint8_t x1239 = 3U;
	int16_t x1240 = INT16_MAX;
	volatile uint32_t t195 = 2161U;

    t195 = ((x1237*(x1238+x1239))*x1240);

    if (t195 != 841086504U) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1241 = INT16_MIN;
	volatile int8_t x1242 = INT8_MAX;
	static volatile int64_t t196 = 337614256802LL;

    t196 = ((x1241*(x1242+x1243))*x1244);

    if (t196 != 98304LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x1254 = 3433;
	uint32_t x1256 = 31U;

    t197 = ((x1253*(x1254+x1255))*x1256);

    if (t197 != 4294860904U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x1257 = 128180581U;
	volatile uint64_t x1258 = UINT64_MAX;
	int32_t x1259 = -2458746;
	int8_t x1260 = -1;
	volatile uint64_t t198 = 31810LLU;

    t198 = ((x1257*(x1258+x1259))*x1260);

    if (t198 != 315163618992007LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1269 = -139LL;
	static int32_t x1271 = 0;
	int64_t t199 = 1152471397765844413LL;

    t199 = ((x1269*(x1270+x1271))*x1272);

    if (t199 != 0LL) { NG(); } else { ; }
	
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

