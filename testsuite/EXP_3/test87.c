
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

static volatile int16_t x1 = INT16_MIN;
int8_t x21 = INT8_MIN;
uint8_t x26 = 9U;
static int32_t x31 = INT32_MIN;
volatile int8_t x33 = INT8_MAX;
int8_t x37 = -1;
uint8_t x39 = UINT8_MAX;
int16_t x46 = 41;
uint16_t x47 = 5U;
static volatile int32_t x52 = 506847;
int32_t x57 = 37075;
uint8_t x59 = UINT8_MAX;
int32_t t14 = -140231;
volatile uint64_t t15 = 51594393058LLU;
int8_t x78 = INT8_MAX;
int64_t x81 = INT64_MIN;
static volatile int16_t x83 = INT16_MAX;
int16_t x86 = 2714;
volatile uint32_t x87 = 105009U;
uint32_t x94 = 47595U;
int32_t x97 = INT32_MIN;
static int16_t x99 = INT16_MAX;
int32_t x103 = -1;
static int64_t x108 = -1LL;
int64_t t22 = -347709LL;
volatile int32_t t25 = -129720497;
int32_t x123 = 2;
int32_t x138 = INT32_MIN;
int64_t x144 = INT64_MIN;
uint64_t x152 = 4080883771LLU;
static int8_t x160 = INT8_MIN;
static volatile uint64_t x166 = UINT64_MAX;
uint64_t t36 = 54LLU;
int32_t x169 = 23;
int64_t x174 = 672842160833563803LL;
volatile int32_t x176 = -116896608;
volatile int32_t t38 = 121104032;
volatile uint16_t x183 = 264U;
static int32_t x184 = -56058;
int16_t x187 = INT16_MIN;
uint16_t x199 = UINT16_MAX;
uint64_t x202 = 76482LLU;
uint64_t x208 = 135LLU;
uint64_t t45 = 51334774494911LLU;
volatile int16_t x210 = 695;
volatile int64_t t46 = -3940919508654LL;
static int8_t x213 = INT8_MIN;
volatile uint32_t x214 = 1249054U;
volatile int32_t t47 = 52197969;
uint16_t x218 = 18532U;
uint32_t x219 = 2986U;
uint8_t x225 = 124U;
int32_t x228 = INT32_MIN;
int32_t t50 = 0;
static volatile int64_t x238 = -577236LL;
static int16_t x247 = INT16_MIN;
int32_t x249 = INT32_MAX;
volatile int64_t t55 = 6LL;
int64_t x253 = INT64_MIN;
int16_t x258 = -20;
int8_t x259 = INT8_MAX;
uint32_t x261 = 1582U;
volatile int64_t t59 = 1834LL;
uint64_t x269 = UINT64_MAX;
volatile uint64_t x283 = 69572337964234502LLU;
volatile int64_t x285 = INT64_MAX;
int32_t t63 = -101137;
int32_t x291 = INT32_MIN;
uint32_t x292 = 2248497U;
int64_t t65 = 53720491959138LL;
int32_t x299 = -2689600;
int16_t x306 = -1;
int32_t x321 = INT32_MIN;
volatile int32_t t74 = INT32_MAX;
static int16_t x337 = INT16_MIN;
uint16_t x341 = 6156U;
int16_t x344 = INT16_MAX;
uint32_t x349 = 85U;
uint16_t x350 = 15039U;
static volatile int64_t x352 = INT64_MIN;
uint64_t x363 = 4416116170LLU;
uint16_t x366 = 468U;
static int32_t t81 = -28;
static volatile int32_t t82 = -42;
static volatile uint64_t t83 = 14LLU;
volatile int64_t x391 = INT64_MIN;
int32_t x397 = -1;
int8_t x407 = INT8_MIN;
int32_t x408 = INT32_MAX;
volatile int32_t t87 = -5;
int8_t x410 = -6;
static uint8_t x420 = 90U;
static volatile int32_t t90 = -220888814;
volatile uint16_t x427 = 424U;
uint8_t x432 = 0U;
int8_t x433 = -1;
static uint32_t x438 = 739U;
static uint8_t x440 = 1U;
uint64_t t96 = 4717LLU;
int32_t x450 = INT32_MIN;
int64_t x458 = INT64_MIN;
int32_t x462 = 2510;
int8_t x465 = INT8_MIN;
static uint8_t x468 = 60U;
uint16_t x481 = UINT16_MAX;
int64_t x493 = 923771695LL;
volatile int8_t x499 = INT8_MIN;
volatile int32_t t109 = 1;
int8_t x503 = -1;
uint8_t x504 = UINT8_MAX;
int32_t t110 = 591;
int32_t t112 = 26669726;
volatile uint64_t x522 = 3985145442080LLU;
uint16_t x527 = 2U;
int64_t x529 = INT64_MIN;
int8_t x532 = INT8_MAX;
uint32_t x541 = UINT32_MAX;
int8_t x544 = INT8_MAX;
static volatile int32_t t118 = -5976;
static int32_t x550 = 71;
int32_t x555 = INT32_MIN;
int32_t x562 = -1;
uint8_t x565 = UINT8_MAX;
volatile int64_t x567 = -110473362LL;
int32_t x568 = -76;
static int32_t x572 = -95888;
int64_t t125 = -129948840662089889LL;
static int32_t x573 = -84;
static volatile int8_t x574 = INT8_MAX;
int32_t x576 = -90;
volatile int32_t t127 = 5;
static int32_t x581 = -117465;
uint64_t x582 = UINT64_MAX;
int16_t x585 = -28;
int32_t x590 = INT32_MIN;
uint16_t x591 = 1U;
static int64_t x592 = -1LL;
int64_t x602 = INT64_MAX;
int32_t t132 = 60128546;
uint64_t x606 = 2356684806730587371LLU;
volatile int32_t t134 = 980998;
int8_t x626 = -1;
int64_t x627 = -743532054124506LL;
volatile int64_t t137 = 508LL;
uint64_t x629 = UINT64_MAX;
uint8_t x630 = UINT8_MAX;
uint16_t x631 = 26U;
static volatile int32_t t143 = 0;
volatile uint32_t x654 = 12883U;
int64_t x655 = -1LL;
int64_t t144 = 1846071LL;
int16_t x659 = INT16_MAX;
volatile uint64_t t145 = 2704401555LLU;
uint8_t x661 = UINT8_MAX;
static volatile int8_t x663 = 0;
int8_t x665 = INT8_MIN;
int8_t x666 = INT8_MIN;
volatile int32_t x669 = INT32_MIN;
static int64_t x679 = 111273678718628357LL;
int64_t x681 = INT64_MAX;
static volatile int32_t x683 = INT32_MIN;
uint64_t x684 = UINT64_MAX;
static uint64_t t151 = 5185290380293422LLU;
static int8_t x689 = -1;
int32_t x691 = -1;
volatile int32_t t153 = 56122601;
static int64_t x700 = -34LL;
static uint8_t x706 = 43U;
int32_t x707 = 3254;
static uint8_t x710 = UINT8_MAX;
volatile int64_t x713 = 13220LL;
static int16_t x715 = INT16_MIN;
int8_t x719 = INT8_MIN;
volatile uint16_t x720 = 4367U;
int64_t x728 = -3LL;
int64_t x730 = INT64_MIN;
int8_t x735 = INT8_MIN;
int64_t x739 = 128588301888730LL;
uint8_t x755 = 3U;
uint8_t x758 = UINT8_MAX;
int8_t x765 = -14;
uint64_t x778 = 22736LLU;
uint16_t x792 = 280U;
volatile int32_t x795 = INT32_MIN;
uint16_t x809 = UINT16_MAX;
int16_t x812 = -1;
uint64_t t176 = 43856739000900732LLU;
static int16_t x818 = -60;
static uint64_t x826 = 21307349578652LLU;
volatile int32_t t181 = -14229;
uint16_t x845 = 40U;
static uint64_t x850 = 142166LLU;
int64_t x851 = -96793708LL;
volatile int64_t t185 = -687412286LL;
int32_t x854 = -1065;
int16_t x865 = INT16_MIN;
int8_t x866 = INT8_MAX;
volatile uint64_t t188 = 623LLU;
volatile uint8_t x870 = 3U;
uint64_t x872 = 0LLU;
uint16_t x874 = 930U;
int16_t x877 = -36;
static uint16_t x892 = UINT16_MAX;
int32_t t194 = 19;
volatile uint64_t x896 = 6312036480LLU;
int32_t x901 = -1;
static uint32_t x903 = 848027U;
int16_t x905 = INT16_MIN;
static uint32_t x912 = 986U;


void f0(void) {
    	static int32_t x2 = INT32_MIN;
	volatile int32_t x3 = -1;
	uint8_t x4 = 0U;
	volatile int32_t t0 = -19924;

    t0 = ((x1!=x2)*(x3+x4));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 89U;
	static uint32_t x6 = UINT32_MAX;
	int8_t x7 = INT8_MIN;
	static volatile int64_t x8 = -1LL;
	int64_t t1 = 4208933140427LL;

    t1 = ((x5!=x6)*(x7+x8));

    if (t1 != -129LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x13 = 52803;
	static uint64_t x14 = 5530903LLU;
	int16_t x15 = INT16_MIN;
	int32_t x16 = -646391548;
	static int32_t t2 = -1686;

    t2 = ((x13!=x14)*(x15+x16));

    if (t2 != -646424316) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x17 = INT16_MIN;
	uint64_t x18 = UINT64_MAX;
	static uint32_t x19 = 47255800U;
	int64_t x20 = -1LL;
	volatile int64_t t3 = 3LL;

    t3 = ((x17!=x18)*(x19+x20));

    if (t3 != 47255799LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint16_t x22 = 62U;
	uint16_t x23 = UINT16_MAX;
	volatile int8_t x24 = 34;
	int32_t t4 = 7346432;

    t4 = ((x21!=x22)*(x23+x24));

    if (t4 != 65569) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = 1;
	static uint32_t x27 = UINT32_MAX;
	volatile uint64_t x28 = 49995823554979LLU;
	static uint64_t t5 = 36208419179000741LLU;

    t5 = ((x25!=x26)*(x27+x28));

    if (t5 != 50000118522274LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x29 = INT8_MIN;
	static int32_t x30 = INT32_MAX;
	int32_t x32 = 2951;
	int32_t t6 = -1158083;

    t6 = ((x29!=x30)*(x31+x32));

    if (t6 != -2147480697) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x34 = 6;
	static int64_t x35 = -1LL;
	volatile int32_t x36 = INT32_MIN;
	int64_t t7 = 135744091737485681LL;

    t7 = ((x33!=x34)*(x35+x36));

    if (t7 != -2147483649LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x38 = 2374U;
	int8_t x40 = INT8_MIN;
	static volatile int32_t t8 = -902972727;

    t8 = ((x37!=x38)*(x39+x40));

    if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x45 = INT64_MAX;
	static volatile int16_t x48 = 95;
	int32_t t9 = 0;

    t9 = ((x45!=x46)*(x47+x48));

    if (t9 != 100) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x49 = INT8_MIN;
	int64_t x50 = INT64_MAX;
	uint16_t x51 = 13100U;
	int32_t t10 = -523646224;

    t10 = ((x49!=x50)*(x51+x52));

    if (t10 != 519947) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint8_t x58 = 23U;
	int32_t x60 = INT32_MIN;
	int32_t t11 = 115;

    t11 = ((x57!=x58)*(x59+x60));

    if (t11 != -2147483393) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x61 = UINT64_MAX;
	volatile uint64_t x62 = UINT64_MAX;
	int8_t x63 = 0;
	int16_t x64 = INT16_MIN;
	volatile int32_t t12 = 531823942;

    t12 = ((x61!=x62)*(x63+x64));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x65 = INT32_MAX;
	int16_t x66 = INT16_MIN;
	static int8_t x67 = INT8_MIN;
	static volatile int16_t x68 = 6;
	volatile int32_t t13 = -52349;

    t13 = ((x65!=x66)*(x67+x68));

    if (t13 != -122) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x69 = 3U;
	int16_t x70 = -212;
	static int32_t x71 = -1;
	uint16_t x72 = 308U;

    t14 = ((x69!=x70)*(x71+x72));

    if (t14 != 307) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x73 = 1U;
	int16_t x74 = INT16_MAX;
	uint64_t x75 = UINT64_MAX;
	static int64_t x76 = -35237368163617LL;

    t15 = ((x73!=x74)*(x75+x76));

    if (t15 != 18446708836341387998LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x77 = -7845;
	volatile int32_t x79 = INT32_MIN;
	uint32_t x80 = UINT32_MAX;
	volatile uint32_t t16 = 2U;

    t16 = ((x77!=x78)*(x79+x80));

    if (t16 != 2147483647U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x82 = UINT64_MAX;
	int8_t x84 = -1;
	int32_t t17 = 17589487;

    t17 = ((x81!=x82)*(x83+x84));

    if (t17 != 32766) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x85 = INT32_MIN;
	uint8_t x88 = 104U;
	volatile uint32_t t18 = 36298697U;

    t18 = ((x85!=x86)*(x87+x88));

    if (t18 != 105113U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x93 = 0U;
	uint64_t x95 = UINT64_MAX;
	int64_t x96 = INT64_MIN;
	volatile uint64_t t19 = 3971495LLU;

    t19 = ((x93!=x94)*(x95+x96));

    if (t19 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x98 = 9U;
	uint64_t x100 = 168935LLU;
	volatile uint64_t t20 = 551447638317405140LLU;

    t20 = ((x97!=x98)*(x99+x100));

    if (t20 != 201702LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x101 = 123781315;
	int16_t x102 = -211;
	uint8_t x104 = 11U;
	int32_t t21 = -87;

    t21 = ((x101!=x102)*(x103+x104));

    if (t21 != 10) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x105 = INT16_MIN;
	uint64_t x106 = UINT64_MAX;
	int64_t x107 = 183567126575LL;

    t22 = ((x105!=x106)*(x107+x108));

    if (t22 != 183567126574LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x109 = -46;
	int16_t x110 = -1;
	uint8_t x111 = 1U;
	uint32_t x112 = UINT32_MAX;
	volatile uint32_t t23 = 0U;

    t23 = ((x109!=x110)*(x111+x112));

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x113 = 440024786U;
	int8_t x114 = INT8_MAX;
	int8_t x115 = INT8_MAX;
	int8_t x116 = -1;
	volatile int32_t t24 = 7;

    t24 = ((x113!=x114)*(x115+x116));

    if (t24 != 126) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x117 = 19U;
	static int16_t x118 = INT16_MIN;
	int16_t x119 = -12;
	int32_t x120 = -1;

    t25 = ((x117!=x118)*(x119+x120));

    if (t25 != -13) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x121 = 0U;
	int8_t x122 = INT8_MAX;
	static uint32_t x124 = UINT32_MAX;
	uint32_t t26 = 24619892U;

    t26 = ((x121!=x122)*(x123+x124));

    if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x129 = 55U;
	int32_t x130 = -18908380;
	static uint8_t x131 = 0U;
	int32_t x132 = 10620880;
	static volatile int32_t t27 = 158694525;

    t27 = ((x129!=x130)*(x131+x132));

    if (t27 != 10620880) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x133 = INT64_MAX;
	int8_t x134 = -1;
	int32_t x135 = -1;
	int16_t x136 = -1;
	static int32_t t28 = 10;

    t28 = ((x133!=x134)*(x135+x136));

    if (t28 != -2) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x137 = 7055;
	int16_t x139 = INT16_MIN;
	static uint32_t x140 = 303475U;
	uint32_t t29 = 310463122U;

    t29 = ((x137!=x138)*(x139+x140));

    if (t29 != 270707U) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x141 = -486923139037LL;
	volatile int32_t x142 = -83;
	uint16_t x143 = 4277U;
	static volatile int64_t t30 = -235766422240642LL;

    t30 = ((x141!=x142)*(x143+x144));

    if (t30 != -9223372036854771531LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x145 = INT64_MIN;
	int16_t x146 = -1;
	uint64_t x147 = 107347603302409111LLU;
	uint8_t x148 = 0U;
	uint64_t t31 = 688152LLU;

    t31 = ((x145!=x146)*(x147+x148));

    if (t31 != 107347603302409111LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x149 = INT16_MIN;
	volatile uint16_t x150 = 829U;
	int8_t x151 = 0;
	uint64_t t32 = 38444473002028854LLU;

    t32 = ((x149!=x150)*(x151+x152));

    if (t32 != 4080883771LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x153 = INT16_MAX;
	int8_t x154 = INT8_MIN;
	uint16_t x155 = 1U;
	static int8_t x156 = INT8_MIN;
	int32_t t33 = -88829;

    t33 = ((x153!=x154)*(x155+x156));

    if (t33 != -127) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x157 = INT32_MAX;
	volatile int16_t x158 = 3894;
	volatile int16_t x159 = INT16_MIN;
	volatile int32_t t34 = -9105556;

    t34 = ((x157!=x158)*(x159+x160));

    if (t34 != -32896) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x161 = INT64_MIN;
	static volatile int8_t x162 = 10;
	volatile int32_t x163 = -1;
	int16_t x164 = -1;
	static int32_t t35 = 7469542;

    t35 = ((x161!=x162)*(x163+x164));

    if (t35 != -2) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x165 = -1013898249;
	uint8_t x167 = 0U;
	uint64_t x168 = 3LLU;

    t36 = ((x165!=x166)*(x167+x168));

    if (t36 != 3LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x170 = -1;
	volatile int64_t x171 = INT64_MIN;
	int16_t x172 = INT16_MAX;
	volatile int64_t t37 = 6467LL;

    t37 = ((x169!=x170)*(x171+x172));

    if (t37 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x173 = 1LL;
	int8_t x175 = INT8_MAX;

    t38 = ((x173!=x174)*(x175+x176));

    if (t38 != -116896481) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x177 = 4;
	static volatile int32_t x178 = -1;
	int32_t x179 = INT32_MIN;
	int32_t x180 = 280111;
	volatile int32_t t39 = 218653;

    t39 = ((x177!=x178)*(x179+x180));

    if (t39 != -2147203537) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x181 = -30;
	static uint64_t x182 = UINT64_MAX;
	volatile int32_t t40 = -1;

    t40 = ((x181!=x182)*(x183+x184));

    if (t40 != -55794) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int8_t x185 = INT8_MIN;
	uint16_t x186 = 17U;
	uint64_t x188 = 196121864LLU;
	static volatile uint64_t t41 = 4861230LLU;

    t41 = ((x185!=x186)*(x187+x188));

    if (t41 != 196089096LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x189 = 45U;
	volatile int32_t x190 = INT32_MIN;
	int16_t x191 = 7192;
	static int64_t x192 = INT64_MIN;
	volatile int64_t t42 = -286232029509022550LL;

    t42 = ((x189!=x190)*(x191+x192));

    if (t42 != -9223372036854768616LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x197 = 430U;
	int16_t x198 = INT16_MIN;
	static uint16_t x200 = UINT16_MAX;
	int32_t t43 = -175;

    t43 = ((x197!=x198)*(x199+x200));

    if (t43 != 131070) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x201 = INT16_MIN;
	uint32_t x203 = 18U;
	volatile int16_t x204 = INT16_MIN;
	uint32_t t44 = 676U;

    t44 = ((x201!=x202)*(x203+x204));

    if (t44 != 4294934546U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x205 = 37679U;
	uint32_t x206 = UINT32_MAX;
	uint32_t x207 = 5634U;

    t45 = ((x205!=x206)*(x207+x208));

    if (t45 != 5769LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x209 = -1;
	volatile int64_t x211 = -1LL;
	int16_t x212 = INT16_MIN;

    t46 = ((x209!=x210)*(x211+x212));

    if (t46 != -32769LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile uint16_t x215 = 1825U;
	static uint16_t x216 = UINT16_MAX;

    t47 = ((x213!=x214)*(x215+x216));

    if (t47 != 67360) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x217 = INT64_MAX;
	static int64_t x220 = INT64_MIN;
	volatile int64_t t48 = -116LL;

    t48 = ((x217!=x218)*(x219+x220));

    if (t48 != -9223372036854772822LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x221 = -20;
	int16_t x222 = 6;
	int32_t x223 = -180917144;
	static uint16_t x224 = UINT16_MAX;
	int32_t t49 = -6;

    t49 = ((x221!=x222)*(x223+x224));

    if (t49 != -180851609) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x226 = UINT16_MAX;
	int8_t x227 = INT8_MAX;

    t50 = ((x225!=x226)*(x227+x228));

    if (t50 != -2147483521) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x229 = UINT64_MAX;
	int8_t x230 = 0;
	static int8_t x231 = INT8_MIN;
	int64_t x232 = -1LL;
	int64_t t51 = 3LL;

    t51 = ((x229!=x230)*(x231+x232));

    if (t51 != -129LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x233 = INT8_MIN;
	uint64_t x234 = UINT64_MAX;
	int8_t x235 = -1;
	int8_t x236 = -1;
	volatile int32_t t52 = 139744130;

    t52 = ((x233!=x234)*(x235+x236));

    if (t52 != -2) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x237 = -4404;
	int32_t x239 = -93326033;
	int16_t x240 = INT16_MAX;
	static volatile int32_t t53 = 7;

    t53 = ((x237!=x238)*(x239+x240));

    if (t53 != -93293266) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int16_t x245 = INT16_MAX;
	uint32_t x246 = 34579U;
	int16_t x248 = 283;
	volatile int32_t t54 = 359;

    t54 = ((x245!=x246)*(x247+x248));

    if (t54 != -32485) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x250 = 3630U;
	int32_t x251 = INT32_MIN;
	volatile int64_t x252 = INT64_MAX;

    t55 = ((x249!=x250)*(x251+x252));

    if (t55 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x254 = -593045367640387LL;
	int8_t x255 = INT8_MIN;
	static uint16_t x256 = 888U;
	int32_t t56 = -8;

    t56 = ((x253!=x254)*(x255+x256));

    if (t56 != 760) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x257 = -1LL;
	int16_t x260 = INT16_MAX;
	int32_t t57 = 3097;

    t57 = ((x257!=x258)*(x259+x260));

    if (t57 != 32894) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x262 = INT64_MIN;
	uint8_t x263 = 1U;
	uint16_t x264 = 25665U;
	int32_t t58 = 470;

    t58 = ((x261!=x262)*(x263+x264));

    if (t58 != 25666) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x265 = -1;
	int64_t x266 = -543015710950LL;
	int64_t x267 = 307384559LL;
	int16_t x268 = INT16_MIN;

    t59 = ((x265!=x266)*(x267+x268));

    if (t59 != 307351791LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x270 = INT32_MIN;
	int64_t x271 = INT64_MIN;
	uint64_t x272 = 35741399LLU;
	uint64_t t60 = 16262214165438644LLU;

    t60 = ((x269!=x270)*(x271+x272));

    if (t60 != 9223372036890517207LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x277 = 0U;
	uint8_t x278 = 59U;
	volatile int64_t x279 = -3059454052800726574LL;
	int32_t x280 = -13;
	volatile int64_t t61 = 5227493285LL;

    t61 = ((x277!=x278)*(x279+x280));

    if (t61 != -3059454052800726587LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x281 = UINT16_MAX;
	static int32_t x282 = INT32_MIN;
	int16_t x284 = 789;
	volatile uint64_t t62 = 15274LLU;

    t62 = ((x281!=x282)*(x283+x284));

    if (t62 != 69572337964235291LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x286 = UINT32_MAX;
	int16_t x287 = INT16_MAX;
	static volatile int8_t x288 = INT8_MIN;

    t63 = ((x285!=x286)*(x287+x288));

    if (t63 != 32639) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x289 = -1;
	static int16_t x290 = INT16_MIN;
	volatile uint32_t t64 = 157226713U;

    t64 = ((x289!=x290)*(x291+x292));

    if (t64 != 2149732145U) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x293 = INT16_MIN;
	volatile uint8_t x294 = UINT8_MAX;
	int16_t x295 = INT16_MIN;
	int64_t x296 = -754503LL;

    t65 = ((x293!=x294)*(x295+x296));

    if (t65 != -787271LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x297 = 600237LLU;
	static uint8_t x298 = 48U;
	volatile int8_t x300 = INT8_MIN;
	volatile int32_t t66 = 365;

    t66 = ((x297!=x298)*(x299+x300));

    if (t66 != -2689728) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x301 = 58741157070LLU;
	uint16_t x302 = 9U;
	uint16_t x303 = UINT16_MAX;
	static volatile int8_t x304 = 10;
	int32_t t67 = 105454;

    t67 = ((x301!=x302)*(x303+x304));

    if (t67 != 65545) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x305 = 2U;
	int16_t x307 = INT16_MAX;
	int8_t x308 = 41;
	int32_t t68 = -283434147;

    t68 = ((x305!=x306)*(x307+x308));

    if (t68 != 32808) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x309 = INT8_MAX;
	uint32_t x310 = 75612U;
	int64_t x311 = INT64_MAX;
	int32_t x312 = -18926728;
	static int64_t t69 = 32469314340LL;

    t69 = ((x309!=x310)*(x311+x312));

    if (t69 != 9223372036835849079LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x313 = INT32_MAX;
	int16_t x314 = INT16_MIN;
	int64_t x315 = 10838042955004953LL;
	volatile uint32_t x316 = 101941U;
	int64_t t70 = -55489239329981902LL;

    t70 = ((x313!=x314)*(x315+x316));

    if (t70 != 10838042955106894LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x317 = INT16_MIN;
	static int32_t x318 = INT32_MIN;
	volatile int16_t x319 = INT16_MIN;
	volatile int16_t x320 = INT16_MIN;
	static int32_t t71 = 26;

    t71 = ((x317!=x318)*(x319+x320));

    if (t71 != -65536) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x322 = -1921739913834LL;
	volatile uint16_t x323 = 2764U;
	int32_t x324 = INT32_MIN;
	volatile int32_t t72 = 18;

    t72 = ((x321!=x322)*(x323+x324));

    if (t72 != -2147480884) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x325 = UINT32_MAX;
	static int32_t x326 = INT32_MIN;
	uint16_t x327 = 1070U;
	static int16_t x328 = INT16_MIN;
	int32_t t73 = -265178849;

    t73 = ((x325!=x326)*(x327+x328));

    if (t73 != -31698) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x333 = -1;
	int64_t x334 = INT64_MIN;
	uint16_t x335 = 0U;
	static int32_t x336 = INT32_MAX;

    t74 = ((x333!=x334)*(x335+x336));

    if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x338 = INT32_MAX;
	int8_t x339 = -1;
	int16_t x340 = 1;
	volatile int32_t t75 = 2519;

    t75 = ((x337!=x338)*(x339+x340));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x342 = 168962LLU;
	int16_t x343 = -13520;
	volatile int32_t t76 = 241886;

    t76 = ((x341!=x342)*(x343+x344));

    if (t76 != 19247) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x351 = UINT16_MAX;
	int64_t t77 = -5281LL;

    t77 = ((x349!=x350)*(x351+x352));

    if (t77 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x353 = -20;
	volatile uint64_t x354 = UINT64_MAX;
	uint8_t x355 = 61U;
	static volatile int64_t x356 = INT64_MIN;
	volatile int64_t t78 = -5604731910229140LL;

    t78 = ((x353!=x354)*(x355+x356));

    if (t78 != -9223372036854775747LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x361 = 8U;
	volatile uint16_t x362 = UINT16_MAX;
	static uint16_t x364 = 0U;
	uint64_t t79 = 587309974774055LLU;

    t79 = ((x361!=x362)*(x363+x364));

    if (t79 != 4416116170LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x365 = 102U;
	int64_t x367 = INT64_MIN;
	volatile uint8_t x368 = 0U;
	int64_t t80 = INT64_MIN;

    t80 = ((x365!=x366)*(x367+x368));

    if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x369 = UINT64_MAX;
	int8_t x370 = -1;
	int16_t x371 = -1157;
	int8_t x372 = INT8_MIN;

    t81 = ((x369!=x370)*(x371+x372));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x373 = 820541936LL;
	int32_t x374 = -1;
	volatile int32_t x375 = 482006;
	int16_t x376 = INT16_MIN;

    t82 = ((x373!=x374)*(x375+x376));

    if (t82 != 449238) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x381 = INT32_MIN;
	volatile int32_t x382 = INT32_MIN;
	int8_t x383 = INT8_MIN;
	volatile uint64_t x384 = 1625332022822105LLU;

    t83 = ((x381!=x382)*(x383+x384));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x385 = 12416348924LLU;
	int8_t x386 = 9;
	int8_t x387 = INT8_MAX;
	static volatile uint32_t x388 = 4102949U;
	static uint32_t t84 = 55964U;

    t84 = ((x385!=x386)*(x387+x388));

    if (t84 != 4103076U) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x389 = INT32_MIN;
	volatile int64_t x390 = INT64_MIN;
	int16_t x392 = 5558;
	volatile int64_t t85 = 132LL;

    t85 = ((x389!=x390)*(x391+x392));

    if (t85 != -9223372036854770250LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x398 = 0;
	uint32_t x399 = 283U;
	int32_t x400 = 321;
	uint32_t t86 = 10021109U;

    t86 = ((x397!=x398)*(x399+x400));

    if (t86 != 604U) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x405 = -2;
	int8_t x406 = 1;

    t87 = ((x405!=x406)*(x407+x408));

    if (t87 != 2147483519) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x409 = 521260777536LL;
	int32_t x411 = INT32_MIN;
	int8_t x412 = INT8_MAX;
	int32_t t88 = 0;

    t88 = ((x409!=x410)*(x411+x412));

    if (t88 != -2147483521) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x413 = INT64_MIN;
	int16_t x414 = INT16_MIN;
	int32_t x415 = INT32_MIN;
	int64_t x416 = -1LL;
	static volatile int64_t t89 = 121771LL;

    t89 = ((x413!=x414)*(x415+x416));

    if (t89 != -2147483649LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x417 = INT64_MIN;
	static int8_t x418 = -46;
	int8_t x419 = INT8_MIN;

    t90 = ((x417!=x418)*(x419+x420));

    if (t90 != -38) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x421 = INT64_MIN;
	volatile int64_t x422 = 23822572LL;
	uint16_t x423 = 60U;
	static uint16_t x424 = 7U;
	int32_t t91 = -103978899;

    t91 = ((x421!=x422)*(x423+x424));

    if (t91 != 67) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x425 = 7;
	uint8_t x426 = 24U;
	int8_t x428 = -1;
	static int32_t t92 = 168103865;

    t92 = ((x425!=x426)*(x427+x428));

    if (t92 != 423) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x429 = INT32_MAX;
	int8_t x430 = 1;
	static uint64_t x431 = UINT64_MAX;
	volatile uint64_t t93 = UINT64_MAX;

    t93 = ((x429!=x430)*(x431+x432));

    if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x434 = 67490076588LLU;
	static int32_t x435 = -1;
	int32_t x436 = -1;
	volatile int32_t t94 = 3;

    t94 = ((x433!=x434)*(x435+x436));

    if (t94 != -2) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x437 = UINT16_MAX;
	volatile int32_t x439 = INT32_MIN;
	static int32_t t95 = -1;

    t95 = ((x437!=x438)*(x439+x440));

    if (t95 != -2147483647) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int64_t x441 = INT64_MIN;
	int8_t x442 = INT8_MAX;
	int64_t x443 = 8716671883298507LL;
	volatile uint64_t x444 = UINT64_MAX;

    t96 = ((x441!=x442)*(x443+x444));

    if (t96 != 8716671883298506LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x445 = INT8_MAX;
	int64_t x446 = INT64_MIN;
	int32_t x447 = INT32_MIN;
	uint64_t x448 = 879082352733785574LLU;
	uint64_t t97 = 596728917948163376LLU;

    t97 = ((x445!=x446)*(x447+x448));

    if (t97 != 879082350586301926LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x449 = 0U;
	uint64_t x451 = UINT64_MAX;
	int32_t x452 = INT32_MAX;
	volatile uint64_t t98 = 16364448681436LLU;

    t98 = ((x449!=x450)*(x451+x452));

    if (t98 != 2147483646LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x457 = INT16_MIN;
	volatile int8_t x459 = INT8_MIN;
	int64_t x460 = -6983361818876LL;
	volatile int64_t t99 = -2138115548392606788LL;

    t99 = ((x457!=x458)*(x459+x460));

    if (t99 != -6983361819004LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x461 = 10951695441751LLU;
	static int16_t x463 = 1;
	int32_t x464 = INT32_MIN;
	int32_t t100 = 93166;

    t100 = ((x461!=x462)*(x463+x464));

    if (t100 != -2147483647) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x466 = -2688490838740944LL;
	volatile int16_t x467 = INT16_MAX;
	int32_t t101 = -30917887;

    t101 = ((x465!=x466)*(x467+x468));

    if (t101 != 32827) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x469 = 0;
	static int16_t x470 = INT16_MIN;
	int64_t x471 = -1LL;
	int8_t x472 = INT8_MIN;
	static int64_t t102 = 5668LL;

    t102 = ((x469!=x470)*(x471+x472));

    if (t102 != -129LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x473 = INT16_MAX;
	static int16_t x474 = INT16_MAX;
	int32_t x475 = 29;
	static int16_t x476 = INT16_MAX;
	int32_t t103 = 1421;

    t103 = ((x473!=x474)*(x475+x476));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x477 = 2544490;
	static uint8_t x478 = UINT8_MAX;
	int32_t x479 = INT32_MAX;
	static int32_t x480 = -1;
	int32_t t104 = 14843;

    t104 = ((x477!=x478)*(x479+x480));

    if (t104 != 2147483646) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x482 = 5U;
	int16_t x483 = -1;
	volatile int64_t x484 = 1969079LL;
	static volatile int64_t t105 = 21486417LL;

    t105 = ((x481!=x482)*(x483+x484));

    if (t105 != 1969078LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x485 = -1;
	static int16_t x486 = INT16_MAX;
	int8_t x487 = 2;
	volatile uint64_t x488 = UINT64_MAX;
	uint64_t t106 = 77828935129LLU;

    t106 = ((x485!=x486)*(x487+x488));

    if (t106 != 1LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x489 = INT32_MAX;
	int32_t x490 = 364758;
	int32_t x491 = -245217;
	volatile int16_t x492 = 12151;
	int32_t t107 = 786210;

    t107 = ((x489!=x490)*(x491+x492));

    if (t107 != -233066) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x494 = -101;
	static volatile uint32_t x495 = 2869U;
	uint16_t x496 = 34U;
	uint32_t t108 = 319359395U;

    t108 = ((x493!=x494)*(x495+x496));

    if (t108 != 2903U) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x497 = -90290455;
	int64_t x498 = -1LL;
	int8_t x500 = INT8_MIN;

    t109 = ((x497!=x498)*(x499+x500));

    if (t109 != -256) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x501 = 16015708961105417LLU;
	volatile int32_t x502 = -1;

    t110 = ((x501!=x502)*(x503+x504));

    if (t110 != 254) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x505 = -1;
	volatile int8_t x506 = -15;
	uint8_t x507 = 0U;
	uint8_t x508 = 3U;
	volatile int32_t t111 = -1015341;

    t111 = ((x505!=x506)*(x507+x508));

    if (t111 != 3) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x513 = INT64_MAX;
	static int64_t x514 = -102939219305908LL;
	int8_t x515 = 0;
	int16_t x516 = INT16_MAX;

    t112 = ((x513!=x514)*(x515+x516));

    if (t112 != 32767) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x517 = 1663;
	int16_t x518 = -306;
	volatile int8_t x519 = INT8_MAX;
	uint16_t x520 = 466U;
	volatile int32_t t113 = 7073097;

    t113 = ((x517!=x518)*(x519+x520));

    if (t113 != 593) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x521 = UINT32_MAX;
	int32_t x523 = -6247955;
	int16_t x524 = INT16_MIN;
	volatile int32_t t114 = 13;

    t114 = ((x521!=x522)*(x523+x524));

    if (t114 != -6280723) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint16_t x525 = 6199U;
	static int16_t x526 = -1;
	int8_t x528 = 1;
	int32_t t115 = 1;

    t115 = ((x525!=x526)*(x527+x528));

    if (t115 != 3) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x530 = INT8_MIN;
	static int32_t x531 = -382468;
	static int32_t t116 = -37;

    t116 = ((x529!=x530)*(x531+x532));

    if (t116 != -382341) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x533 = INT32_MIN;
	int64_t x534 = INT64_MAX;
	volatile uint8_t x535 = 7U;
	int32_t x536 = 808545;
	static int32_t t117 = 44232507;

    t117 = ((x533!=x534)*(x535+x536));

    if (t117 != 808552) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x542 = INT32_MAX;
	static int16_t x543 = INT16_MIN;

    t118 = ((x541!=x542)*(x543+x544));

    if (t118 != -32641) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x545 = 7U;
	uint8_t x546 = UINT8_MAX;
	volatile uint16_t x547 = 2U;
	int64_t x548 = INT64_MIN;
	int64_t t119 = -2LL;

    t119 = ((x545!=x546)*(x547+x548));

    if (t119 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x549 = -1;
	static volatile uint16_t x551 = UINT16_MAX;
	static int16_t x552 = 18;
	int32_t t120 = -7678770;

    t120 = ((x549!=x550)*(x551+x552));

    if (t120 != 65553) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x553 = UINT8_MAX;
	uint8_t x554 = 62U;
	volatile int16_t x556 = INT16_MAX;
	int32_t t121 = -920525439;

    t121 = ((x553!=x554)*(x555+x556));

    if (t121 != -2147450881) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x557 = 14U;
	int32_t x558 = INT32_MIN;
	uint8_t x559 = 61U;
	int8_t x560 = 0;
	volatile int32_t t122 = 1904069;

    t122 = ((x557!=x558)*(x559+x560));

    if (t122 != 61) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x561 = -26;
	int8_t x563 = 2;
	static int32_t x564 = -1;
	volatile int32_t t123 = 0;

    t123 = ((x561!=x562)*(x563+x564));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x566 = 27066851LLU;
	static volatile int64_t t124 = 3851720LL;

    t124 = ((x565!=x566)*(x567+x568));

    if (t124 != -110473438LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x569 = INT64_MAX;
	int32_t x570 = INT32_MIN;
	int64_t x571 = 113LL;

    t125 = ((x569!=x570)*(x571+x572));

    if (t125 != -95775LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x575 = INT16_MIN;
	static int32_t t126 = 3512;

    t126 = ((x573!=x574)*(x575+x576));

    if (t126 != -32858) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x577 = 6921U;
	volatile int8_t x578 = INT8_MIN;
	volatile int32_t x579 = -110477;
	uint16_t x580 = 40U;

    t127 = ((x577!=x578)*(x579+x580));

    if (t127 != -110437) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x583 = 7LL;
	int8_t x584 = -1;
	static int64_t t128 = 1LL;

    t128 = ((x581!=x582)*(x583+x584));

    if (t128 != 6LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x586 = 0;
	int32_t x587 = -1;
	int8_t x588 = INT8_MIN;
	int32_t t129 = -2045465;

    t129 = ((x585!=x586)*(x587+x588));

    if (t129 != -129) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x589 = -1;
	volatile int64_t t130 = -2LL;

    t130 = ((x589!=x590)*(x591+x592));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x597 = 15U;
	int8_t x598 = INT8_MIN;
	volatile int8_t x599 = INT8_MAX;
	volatile int64_t x600 = -3792826066212129719LL;
	int64_t t131 = -800638036116LL;

    t131 = ((x597!=x598)*(x599+x600));

    if (t131 != -3792826066212129592LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x601 = INT32_MAX;
	volatile int16_t x603 = INT16_MIN;
	static uint8_t x604 = 14U;

    t132 = ((x601!=x602)*(x603+x604));

    if (t132 != -32754) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x605 = 53U;
	int16_t x607 = -1;
	volatile int16_t x608 = 3012;
	int32_t t133 = -505;

    t133 = ((x605!=x606)*(x607+x608));

    if (t133 != 3011) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x609 = INT16_MIN;
	uint16_t x610 = 1963U;
	int16_t x611 = 507;
	uint16_t x612 = 0U;

    t134 = ((x609!=x610)*(x611+x612));

    if (t134 != 507) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x613 = 7;
	uint64_t x614 = 12766159273926LLU;
	volatile int16_t x615 = INT16_MAX;
	int32_t x616 = INT32_MIN;
	volatile int32_t t135 = 0;

    t135 = ((x613!=x614)*(x615+x616));

    if (t135 != -2147450881) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x621 = -1LL;
	static int64_t x622 = INT64_MAX;
	volatile int8_t x623 = INT8_MIN;
	static int8_t x624 = -1;
	static volatile int32_t t136 = -83199;

    t136 = ((x621!=x622)*(x623+x624));

    if (t136 != -129) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x625 = 463958496;
	int16_t x628 = -1;

    t137 = ((x625!=x626)*(x627+x628));

    if (t137 != -743532054124507LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x632 = INT64_MIN;
	int64_t t138 = 0LL;

    t138 = ((x629!=x630)*(x631+x632));

    if (t138 != -9223372036854775782LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x633 = INT64_MIN;
	uint32_t x634 = 16054U;
	int16_t x635 = INT16_MAX;
	volatile uint8_t x636 = UINT8_MAX;
	static int32_t t139 = -332749711;

    t139 = ((x633!=x634)*(x635+x636));

    if (t139 != 33022) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x637 = -2;
	int16_t x638 = -1;
	volatile int32_t x639 = 29201220;
	static uint64_t x640 = UINT64_MAX;
	volatile uint64_t t140 = 1466LLU;

    t140 = ((x637!=x638)*(x639+x640));

    if (t140 != 29201219LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x641 = INT16_MIN;
	static uint64_t x642 = 1767972LLU;
	int64_t x643 = 208655325443LL;
	int64_t x644 = INT64_MIN;
	volatile int64_t t141 = 26307LL;

    t141 = ((x641!=x642)*(x643+x644));

    if (t141 != -9223371828199450365LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x645 = INT32_MIN;
	uint64_t x646 = 1740022LLU;
	int64_t x647 = -1LL;
	uint64_t x648 = UINT64_MAX;
	volatile uint64_t t142 = 2006202617447LLU;

    t142 = ((x645!=x646)*(x647+x648));

    if (t142 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x649 = -1829077353LL;
	static int64_t x650 = INT64_MIN;
	int16_t x651 = 162;
	uint16_t x652 = UINT16_MAX;

    t143 = ((x649!=x650)*(x651+x652));

    if (t143 != 65697) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x653 = INT64_MIN;
	int8_t x656 = INT8_MIN;

    t144 = ((x653!=x654)*(x655+x656));

    if (t144 != -129LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint8_t x657 = UINT8_MAX;
	uint8_t x658 = 16U;
	uint64_t x660 = 2744463534147LLU;

    t145 = ((x657!=x658)*(x659+x660));

    if (t145 != 2744463566914LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x662 = INT32_MIN;
	static volatile int64_t x664 = INT64_MAX;
	int64_t t146 = INT64_MAX;

    t146 = ((x661!=x662)*(x663+x664));

    if (t146 != INT64_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x667 = INT8_MIN;
	volatile uint16_t x668 = UINT16_MAX;
	volatile int32_t t147 = 148;

    t147 = ((x665!=x666)*(x667+x668));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x670 = 37U;
	volatile int8_t x671 = INT8_MIN;
	uint64_t x672 = 1697092966LLU;
	volatile uint64_t t148 = 121478046825853LLU;

    t148 = ((x669!=x670)*(x671+x672));

    if (t148 != 1697092838LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x673 = -1;
	static int32_t x674 = 6288;
	volatile int16_t x675 = -1;
	int32_t x676 = 7;
	int32_t t149 = -24;

    t149 = ((x673!=x674)*(x675+x676));

    if (t149 != 6) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x677 = INT64_MAX;
	volatile int8_t x678 = -1;
	int32_t x680 = INT32_MIN;
	volatile int64_t t150 = -3632LL;

    t150 = ((x677!=x678)*(x679+x680));

    if (t150 != 111273676571144709LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x682 = 15U;

    t151 = ((x681!=x682)*(x683+x684));

    if (t151 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x685 = 2U;
	volatile int8_t x686 = -10;
	volatile uint32_t x687 = 7917232U;
	volatile uint8_t x688 = 2U;
	volatile uint32_t t152 = 1U;

    t152 = ((x685!=x686)*(x687+x688));

    if (t152 != 7917234U) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x690 = INT64_MIN;
	int16_t x692 = INT16_MIN;

    t153 = ((x689!=x690)*(x691+x692));

    if (t153 != -32769) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x693 = UINT8_MAX;
	static volatile int64_t x694 = -1470256558594LL;
	uint16_t x695 = 1818U;
	int16_t x696 = -7;
	static volatile int32_t t154 = 2570261;

    t154 = ((x693!=x694)*(x695+x696));

    if (t154 != 1811) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x697 = 14;
	int8_t x698 = INT8_MAX;
	uint64_t x699 = 23425454452LLU;
	volatile uint64_t t155 = 661925374324LLU;

    t155 = ((x697!=x698)*(x699+x700));

    if (t155 != 23425454418LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x705 = -83;
	int64_t x708 = INT64_MIN;
	int64_t t156 = -125LL;

    t156 = ((x705!=x706)*(x707+x708));

    if (t156 != -9223372036854772554LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x709 = -1;
	int16_t x711 = -1;
	uint64_t x712 = UINT64_MAX;
	uint64_t t157 = 978636588824LLU;

    t157 = ((x709!=x710)*(x711+x712));

    if (t157 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int8_t x714 = INT8_MIN;
	int16_t x716 = INT16_MIN;
	volatile int32_t t158 = -1422;

    t158 = ((x713!=x714)*(x715+x716));

    if (t158 != -65536) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x717 = INT64_MAX;
	uint64_t x718 = 4LLU;
	volatile int32_t t159 = 185;

    t159 = ((x717!=x718)*(x719+x720));

    if (t159 != 4239) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x725 = 0;
	uint8_t x726 = 2U;
	volatile int64_t x727 = -1LL;
	int64_t t160 = -41836560098LL;

    t160 = ((x725!=x726)*(x727+x728));

    if (t160 != -4LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint8_t x729 = 14U;
	int16_t x731 = INT16_MAX;
	int8_t x732 = INT8_MAX;
	static int32_t t161 = 15;

    t161 = ((x729!=x730)*(x731+x732));

    if (t161 != 32894) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x733 = INT8_MIN;
	int32_t x734 = -1871874;
	int32_t x736 = INT32_MAX;
	volatile int32_t t162 = 0;

    t162 = ((x733!=x734)*(x735+x736));

    if (t162 != 2147483519) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x737 = 3U;
	uint16_t x738 = 84U;
	static int8_t x740 = INT8_MIN;
	int64_t t163 = 12LL;

    t163 = ((x737!=x738)*(x739+x740));

    if (t163 != 128588301888602LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x753 = INT64_MIN;
	int32_t x754 = -1;
	int8_t x756 = -1;
	volatile int32_t t164 = -237;

    t164 = ((x753!=x754)*(x755+x756));

    if (t164 != 2) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x757 = 19212U;
	int16_t x759 = INT16_MIN;
	static int64_t x760 = 952333512234LL;
	static volatile int64_t t165 = 34827961668401LL;

    t165 = ((x757!=x758)*(x759+x760));

    if (t165 != 952333479466LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x766 = INT32_MIN;
	static int8_t x767 = INT8_MAX;
	int8_t x768 = 0;
	volatile int32_t t166 = 2;

    t166 = ((x765!=x766)*(x767+x768));

    if (t166 != 127) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x769 = INT64_MIN;
	volatile int32_t x770 = -35739493;
	uint8_t x771 = 20U;
	int8_t x772 = 5;
	volatile int32_t t167 = -209052934;

    t167 = ((x769!=x770)*(x771+x772));

    if (t167 != 25) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x773 = INT32_MAX;
	int8_t x774 = -62;
	uint32_t x775 = UINT32_MAX;
	uint16_t x776 = 5U;
	static volatile uint32_t t168 = 14U;

    t168 = ((x773!=x774)*(x775+x776));

    if (t168 != 4U) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x777 = INT16_MIN;
	uint16_t x779 = UINT16_MAX;
	uint8_t x780 = 12U;
	volatile int32_t t169 = 10818;

    t169 = ((x777!=x778)*(x779+x780));

    if (t169 != 65547) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x781 = 7158U;
	uint32_t x782 = 12965U;
	int16_t x783 = 669;
	static uint64_t x784 = 1835LLU;
	static uint64_t t170 = 749532LLU;

    t170 = ((x781!=x782)*(x783+x784));

    if (t170 != 2504LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x785 = INT32_MIN;
	static uint8_t x786 = UINT8_MAX;
	int8_t x787 = -1;
	int16_t x788 = INT16_MAX;
	static volatile int32_t t171 = -4317394;

    t171 = ((x785!=x786)*(x787+x788));

    if (t171 != 32766) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x789 = INT16_MIN;
	volatile uint64_t x790 = 688466971LLU;
	uint64_t x791 = 11LLU;
	uint64_t t172 = 2018479295194207LLU;

    t172 = ((x789!=x790)*(x791+x792));

    if (t172 != 291LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x793 = 349;
	uint8_t x794 = UINT8_MAX;
	int64_t x796 = INT64_MAX;
	static int64_t t173 = -797093480217227LL;

    t173 = ((x793!=x794)*(x795+x796));

    if (t173 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int16_t x797 = 35;
	uint16_t x798 = 59U;
	volatile int8_t x799 = 3;
	static int16_t x800 = 0;
	volatile int32_t t174 = 6165;

    t174 = ((x797!=x798)*(x799+x800));

    if (t174 != 3) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x805 = 135085U;
	int64_t x806 = INT64_MAX;
	uint8_t x807 = UINT8_MAX;
	int64_t x808 = INT64_MIN;
	volatile int64_t t175 = -341LL;

    t175 = ((x805!=x806)*(x807+x808));

    if (t175 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x810 = -1LL;
	uint64_t x811 = UINT64_MAX;

    t176 = ((x809!=x810)*(x811+x812));

    if (t176 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x813 = 13;
	uint8_t x814 = 0U;
	static int32_t x815 = 46698;
	int16_t x816 = INT16_MAX;
	volatile int32_t t177 = 0;

    t177 = ((x813!=x814)*(x815+x816));

    if (t177 != 79465) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x817 = 1;
	static uint32_t x819 = 1423U;
	volatile int32_t x820 = -1;
	uint32_t t178 = 22232U;

    t178 = ((x817!=x818)*(x819+x820));

    if (t178 != 1422U) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x821 = INT64_MIN;
	volatile uint8_t x822 = UINT8_MAX;
	int32_t x823 = INT32_MIN;
	uint16_t x824 = 7012U;
	int32_t t179 = 29;

    t179 = ((x821!=x822)*(x823+x824));

    if (t179 != -2147476636) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x825 = INT8_MIN;
	static int16_t x827 = INT16_MIN;
	static int64_t x828 = 10216524585684LL;
	int64_t t180 = -53457876946LL;

    t180 = ((x825!=x826)*(x827+x828));

    if (t180 != 10216524552916LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x829 = INT16_MIN;
	int64_t x830 = -1LL;
	volatile int16_t x831 = -20;
	uint8_t x832 = 111U;

    t181 = ((x829!=x830)*(x831+x832));

    if (t181 != 91) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x833 = 2916240LLU;
	volatile uint8_t x834 = UINT8_MAX;
	int32_t x835 = INT32_MIN;
	static int16_t x836 = 60;
	volatile int32_t t182 = -2687391;

    t182 = ((x833!=x834)*(x835+x836));

    if (t182 != -2147483588) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int32_t x841 = INT32_MAX;
	int16_t x842 = INT16_MIN;
	int32_t x843 = INT32_MIN;
	volatile uint16_t x844 = UINT16_MAX;
	int32_t t183 = -637210;

    t183 = ((x841!=x842)*(x843+x844));

    if (t183 != -2147418113) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x846 = UINT8_MAX;
	int8_t x847 = -5;
	volatile uint32_t x848 = 2U;
	volatile uint32_t t184 = 559041U;

    t184 = ((x845!=x846)*(x847+x848));

    if (t184 != 4294967293U) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x849 = -1;
	int16_t x852 = -1;

    t185 = ((x849!=x850)*(x851+x852));

    if (t185 != -96793709LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x853 = INT8_MAX;
	volatile int16_t x855 = 0;
	static int8_t x856 = INT8_MIN;
	int32_t t186 = -56;

    t186 = ((x853!=x854)*(x855+x856));

    if (t186 != -128) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x861 = INT32_MIN;
	int16_t x862 = INT16_MIN;
	uint8_t x863 = UINT8_MAX;
	volatile uint8_t x864 = 2U;
	int32_t t187 = 7651;

    t187 = ((x861!=x862)*(x863+x864));

    if (t187 != 257) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x867 = 103129208008LLU;
	static uint32_t x868 = 2U;

    t188 = ((x865!=x866)*(x867+x868));

    if (t188 != 103129208010LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x869 = 11U;
	uint8_t x871 = 51U;
	uint64_t t189 = 580581LLU;

    t189 = ((x869!=x870)*(x871+x872));

    if (t189 != 51LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x873 = -1224LL;
	int16_t x875 = -1;
	int8_t x876 = -12;
	int32_t t190 = 446;

    t190 = ((x873!=x874)*(x875+x876));

    if (t190 != -13) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x878 = INT64_MIN;
	uint32_t x879 = UINT32_MAX;
	uint32_t x880 = UINT32_MAX;
	uint32_t t191 = 156011U;

    t191 = ((x877!=x878)*(x879+x880));

    if (t191 != 4294967294U) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x881 = -1;
	uint8_t x882 = 1U;
	int32_t x883 = -264317950;
	static uint32_t x884 = 124073739U;
	volatile uint32_t t192 = 0U;

    t192 = ((x881!=x882)*(x883+x884));

    if (t192 != 4154723085U) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int8_t x885 = -1;
	static volatile uint16_t x886 = 9U;
	int32_t x887 = INT32_MIN;
	uint64_t x888 = UINT64_MAX;
	uint64_t t193 = 550234344950LLU;

    t193 = ((x885!=x886)*(x887+x888));

    if (t193 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x889 = 108;
	uint64_t x890 = 1050LLU;
	int16_t x891 = -1;

    t194 = ((x889!=x890)*(x891+x892));

    if (t194 != 65534) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint64_t x893 = 204298156858695164LLU;
	static int64_t x894 = INT64_MIN;
	int16_t x895 = INT16_MIN;
	volatile uint64_t t195 = 122414723LLU;

    t195 = ((x893!=x894)*(x895+x896));

    if (t195 != 6312003712LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x897 = -4972537LL;
	uint16_t x898 = 3505U;
	int8_t x899 = INT8_MAX;
	uint64_t x900 = 107614403338077937LLU;
	uint64_t t196 = 546384034925767LLU;

    t196 = ((x897!=x898)*(x899+x900));

    if (t196 != 107614403338078064LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int64_t x902 = INT64_MAX;
	uint8_t x904 = 57U;
	volatile uint32_t t197 = 2032U;

    t197 = ((x901!=x902)*(x903+x904));

    if (t197 != 848084U) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x906 = -1LL;
	int32_t x907 = INT32_MIN;
	volatile int64_t x908 = 941919042LL;
	static int64_t t198 = 8449131363517449LL;

    t198 = ((x905!=x906)*(x907+x908));

    if (t198 != -1205564606LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x909 = INT64_MAX;
	uint32_t x910 = 68702201U;
	int64_t x911 = INT64_MIN;
	volatile int64_t t199 = 274308504LL;

    t199 = ((x909!=x910)*(x911+x912));

    if (t199 != -9223372036854774822LL) { NG(); } else { ; }
	
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

