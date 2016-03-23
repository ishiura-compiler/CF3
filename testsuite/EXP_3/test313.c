
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

int16_t x15 = INT16_MIN;
int64_t x27 = 77LL;
static int32_t x28 = -980;
int16_t x32 = -1;
volatile int32_t t4 = -6990234;
int32_t x35 = -4780;
uint16_t x66 = UINT16_MAX;
static uint8_t x76 = 80U;
static int16_t x78 = -1;
int8_t x79 = INT8_MIN;
int8_t x82 = INT8_MIN;
int64_t x83 = INT64_MIN;
static int32_t x86 = -1;
static uint16_t x88 = 885U;
volatile int32_t t14 = -12;
int8_t x89 = INT8_MIN;
uint64_t t15 = 317658346159030LLU;
int16_t x102 = -1;
uint8_t x103 = UINT8_MAX;
int64_t x110 = INT64_MAX;
int32_t x112 = -1;
int32_t t19 = -45901;
static int32_t t21 = 125781200;
int16_t x131 = -6;
static int64_t t23 = -109LL;
static uint16_t x134 = 0U;
static int8_t x143 = 0;
int32_t t26 = -188606968;
static int8_t x151 = INT8_MIN;
volatile uint32_t t30 = 1U;
static uint64_t x163 = 4434465056859741LLU;
uint64_t t31 = 73270585853858LLU;
uint32_t x166 = 17U;
uint16_t x170 = 842U;
uint16_t x172 = 243U;
static int64_t x174 = INT64_MIN;
int64_t x175 = -8175426731LL;
int32_t x177 = -1;
int8_t x179 = 1;
static int64_t x181 = -2146449196857627884LL;
volatile uint16_t x182 = 2519U;
volatile uint32_t t36 = 206268885U;
int64_t x198 = INT64_MAX;
volatile uint32_t x200 = 5340U;
static uint8_t x204 = 6U;
static uint8_t x214 = 1U;
volatile int32_t x223 = -29;
uint16_t x236 = UINT16_MAX;
int8_t x238 = -25;
uint8_t x251 = 0U;
uint8_t x252 = 4U;
uint8_t x265 = UINT8_MAX;
static int32_t x267 = -1;
int16_t x275 = INT16_MAX;
static volatile int64_t x276 = -1LL;
static int16_t x278 = -14695;
uint8_t x280 = UINT8_MAX;
uint16_t x291 = UINT16_MAX;
volatile int64_t t58 = -18258LL;
uint32_t x293 = UINT32_MAX;
uint64_t x318 = 1786LLU;
uint32_t x319 = UINT32_MAX;
uint32_t t62 = 191721U;
static volatile uint16_t x337 = 238U;
int16_t x338 = 54;
static int8_t x345 = INT8_MAX;
uint8_t x359 = 26U;
static uint8_t x365 = 81U;
static int16_t x368 = 24;
uint64_t x369 = 12023487985543507LLU;
int32_t x372 = -182343;
volatile int32_t t71 = -27394817;
int16_t x378 = -3910;
uint32_t x379 = 8057U;
static uint32_t t73 = 1141031U;
uint16_t x394 = 769U;
volatile int32_t t77 = -23;
int8_t x402 = -1;
volatile int8_t x405 = -1;
static int32_t x406 = INT32_MIN;
uint64_t x407 = UINT64_MAX;
volatile uint64_t t82 = 454414699047724749LLU;
int8_t x427 = -9;
volatile uint8_t x429 = 0U;
uint64_t x435 = 154LLU;
volatile uint32_t x441 = 16173U;
int32_t t88 = 446965;
int8_t x456 = INT8_MAX;
int8_t x457 = INT8_MIN;
int32_t x458 = INT32_MIN;
static volatile int8_t x464 = INT8_MIN;
uint8_t x467 = UINT8_MAX;
volatile int32_t t92 = 131;
uint8_t x472 = UINT8_MAX;
static volatile int32_t x478 = INT32_MAX;
int64_t x480 = INT64_MIN;
int64_t t95 = -267518629403647LL;
int8_t x485 = -1;
static int16_t x486 = -1;
static uint32_t x487 = UINT32_MAX;
int32_t x489 = -14273;
uint8_t x495 = 1U;
static uint8_t x496 = 2U;
uint8_t x503 = UINT8_MAX;
int16_t x504 = -1;
volatile int64_t x510 = 1884831202756LL;
static uint64_t t103 = 726784260LLU;
int64_t x515 = INT64_MIN;
int32_t x518 = INT32_MAX;
uint16_t x520 = UINT16_MAX;
static volatile uint64_t x521 = 17LLU;
int64_t x528 = INT64_MIN;
static int8_t x534 = 5;
int64_t x538 = 221721505667933453LL;
int8_t x545 = 33;
int64_t x547 = INT64_MIN;
volatile int32_t x548 = -802466;
volatile int32_t x556 = INT32_MIN;
uint32_t x563 = 128742U;
volatile int8_t x564 = INT8_MAX;
uint8_t x587 = 13U;
volatile uint32_t t118 = 21461374U;
volatile uint8_t x601 = UINT8_MAX;
int64_t x609 = INT64_MAX;
volatile uint32_t x615 = 23087U;
int8_t x622 = -14;
static int16_t x636 = INT16_MAX;
uint8_t x638 = 1U;
int32_t t125 = -902;
uint32_t x648 = 258248994U;
static int64_t x659 = -298LL;
volatile int64_t x661 = 27848LL;
uint32_t x666 = 1149664643U;
int64_t x680 = INT64_MAX;
uint64_t x683 = 577773033LLU;
int64_t x685 = INT64_MIN;
int64_t x691 = INT64_MIN;
int32_t t136 = -58524390;
static volatile int8_t x705 = INT8_MAX;
int8_t x707 = INT8_MIN;
int64_t x717 = INT64_MIN;
int8_t x718 = -3;
int16_t x720 = -4687;
int32_t t141 = -239;
int32_t t142 = -73503513;
int64_t t143 = -33LL;
uint32_t x735 = 8U;
int32_t x738 = 627;
int64_t x739 = INT64_MIN;
volatile int64_t t147 = 1LL;
int8_t x754 = -1;
static uint32_t x756 = 11935455U;
uint16_t x759 = 1643U;
static uint8_t x761 = UINT8_MAX;
volatile int8_t x763 = INT8_MIN;
volatile int8_t x771 = INT8_MIN;
static int32_t t154 = 28731;
uint16_t x778 = 13515U;
int64_t x783 = INT64_MIN;
uint64_t x784 = 4204492584136285LLU;
volatile int64_t x785 = INT64_MIN;
uint16_t x789 = 4012U;
int8_t x791 = INT8_MIN;
static int32_t x792 = INT32_MIN;
static int32_t x793 = -261068521;
int32_t x802 = -800658781;
uint32_t x804 = 9652888U;
int16_t x807 = 28;
uint16_t x808 = 12189U;
int32_t x814 = 1;
uint16_t x824 = UINT16_MAX;
volatile int32_t t166 = -26174;
static int32_t t169 = 1671624;
static int32_t x847 = INT32_MIN;
volatile uint64_t t172 = 9322649LLU;
int64_t x854 = INT64_MIN;
volatile int16_t x866 = INT16_MAX;
int8_t x870 = -26;
int8_t x872 = -1;
int16_t x878 = -2;
uint8_t x885 = 41U;
volatile uint8_t x887 = 33U;
static volatile int64_t x896 = INT64_MAX;
int8_t x901 = -1;
int32_t x903 = -1;
static int64_t x908 = -272807416451LL;
uint32_t x917 = 897U;
int8_t x918 = INT8_MIN;
int8_t x919 = -1;
volatile int64_t t186 = 84878085632LL;
int32_t x923 = -833602985;
int64_t x935 = -1LL;
uint32_t x936 = UINT32_MAX;
volatile int64_t x943 = -2256237198860764LL;
int32_t x944 = INT32_MAX;
volatile int16_t x948 = -1;
int64_t x952 = 146727939431LL;
volatile uint32_t x956 = 20U;
int8_t x957 = INT8_MAX;
uint16_t x958 = UINT16_MAX;
int16_t x960 = INT16_MIN;
uint16_t x964 = UINT16_MAX;
volatile int32_t t196 = -6471;
uint8_t x967 = 0U;
int32_t t197 = -9;
int64_t x973 = -51LL;


void f0(void) {
    	uint64_t x1 = 3007LLU;
	uint64_t x2 = 29548448178975783LLU;
	static volatile int16_t x3 = -1;
	volatile uint8_t x4 = 12U;
	volatile int32_t t0 = -65336520;

    t0 = ((x1>x2)%(x3-x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x9 = UINT16_MAX;
	int64_t x10 = 204416421673875131LL;
	uint32_t x11 = 152739968U;
	uint32_t x12 = 1U;
	static uint32_t t1 = 5930145U;

    t1 = ((x9>x10)%(x11-x12));

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x13 = -4LL;
	int8_t x14 = INT8_MIN;
	uint64_t x16 = UINT64_MAX;
	volatile uint64_t t2 = 1LLU;

    t2 = ((x13>x14)%(x15-x16));

    if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x25 = 2;
	uint32_t x26 = 3U;
	static volatile int64_t t3 = -2290LL;

    t3 = ((x25>x26)%(x27-x28));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int16_t x29 = 7009;
	int8_t x30 = INT8_MIN;
	volatile int32_t x31 = INT32_MIN;

    t4 = ((x29>x30)%(x31-x32));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x33 = -9;
	int8_t x34 = 1;
	int16_t x36 = INT16_MIN;
	static int32_t t5 = -104032973;

    t5 = ((x33>x34)%(x35-x36));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x37 = UINT64_MAX;
	int8_t x38 = -7;
	uint16_t x39 = UINT16_MAX;
	volatile int8_t x40 = 0;
	volatile int32_t t6 = 212832313;

    t6 = ((x37>x38)%(x39-x40));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x41 = INT16_MIN;
	static int16_t x42 = INT16_MIN;
	int16_t x43 = INT16_MIN;
	volatile uint16_t x44 = 3354U;
	int32_t t7 = 133954;

    t7 = ((x41>x42)%(x43-x44));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int16_t x49 = INT16_MIN;
	static int64_t x50 = 34550731329884948LL;
	uint8_t x51 = 94U;
	int16_t x52 = INT16_MIN;
	static volatile int32_t t8 = 4;

    t8 = ((x49>x50)%(x51-x52));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x61 = UINT64_MAX;
	static uint8_t x62 = 2U;
	uint64_t x63 = 566548591831446611LLU;
	int32_t x64 = INT32_MIN;
	uint64_t t9 = 15LLU;

    t9 = ((x61>x62)%(x63-x64));

    if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x65 = 22335U;
	static uint16_t x67 = 5707U;
	int16_t x68 = INT16_MAX;
	volatile int32_t t10 = -3;

    t10 = ((x65>x66)%(x67-x68));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x73 = INT64_MIN;
	uint16_t x74 = 7U;
	uint64_t x75 = 677193938368LLU;
	volatile uint64_t t11 = 46913277476LLU;

    t11 = ((x73>x74)%(x75-x76));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x77 = -3;
	int32_t x80 = 9524;
	volatile int32_t t12 = 23997764;

    t12 = ((x77>x78)%(x79-x80));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint16_t x81 = 63U;
	static int8_t x84 = INT8_MIN;
	static volatile int64_t t13 = 144195LL;

    t13 = ((x81>x82)%(x83-x84));

    if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x85 = INT64_MIN;
	volatile uint16_t x87 = 4539U;

    t14 = ((x85>x86)%(x87-x88));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x90 = 2U;
	int16_t x91 = INT16_MIN;
	uint64_t x92 = 63785LLU;

    t15 = ((x89>x90)%(x91-x92));

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x93 = UINT8_MAX;
	static volatile int16_t x94 = 0;
	static int32_t x95 = -3631890;
	int16_t x96 = INT16_MIN;
	volatile int32_t t16 = 50218;

    t16 = ((x93>x94)%(x95-x96));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x101 = 646;
	int8_t x104 = -53;
	int32_t t17 = 1;

    t17 = ((x101>x102)%(x103-x104));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x105 = INT32_MIN;
	int16_t x106 = 325;
	int8_t x107 = -28;
	int64_t x108 = -1LL;
	volatile int64_t t18 = 433669621474LL;

    t18 = ((x105>x106)%(x107-x108));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x109 = INT8_MIN;
	volatile int8_t x111 = 19;

    t19 = ((x109>x110)%(x111-x112));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x113 = INT32_MIN;
	int8_t x114 = INT8_MAX;
	static int64_t x115 = INT64_MIN;
	int16_t x116 = 0;
	static volatile int64_t t20 = -313874078656LL;

    t20 = ((x113>x114)%(x115-x116));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x121 = 402905993786LLU;
	uint32_t x122 = UINT32_MAX;
	volatile int16_t x123 = INT16_MIN;
	int16_t x124 = -1;

    t21 = ((x121>x122)%(x123-x124));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x125 = 113U;
	uint16_t x126 = UINT16_MAX;
	volatile int32_t x127 = -201512309;
	int64_t x128 = 16090LL;
	static int64_t t22 = 454184LL;

    t22 = ((x125>x126)%(x127-x128));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x129 = 479313558;
	int16_t x130 = 0;
	int64_t x132 = INT64_MIN;

    t23 = ((x129>x130)%(x131-x132));

    if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x133 = INT32_MIN;
	int64_t x135 = INT64_MIN;
	int16_t x136 = INT16_MIN;
	int64_t t24 = 7700LL;

    t24 = ((x133>x134)%(x135-x136));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x137 = 3444U;
	volatile int64_t x138 = INT64_MIN;
	int64_t x139 = -33LL;
	int16_t x140 = INT16_MAX;
	static int64_t t25 = 1421541836457282407LL;

    t25 = ((x137>x138)%(x139-x140));

    if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x141 = -1;
	uint16_t x142 = UINT16_MAX;
	int16_t x144 = -1;

    t26 = ((x141>x142)%(x143-x144));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x145 = UINT64_MAX;
	int8_t x146 = -1;
	static volatile uint16_t x147 = 993U;
	uint32_t x148 = UINT32_MAX;
	volatile uint32_t t27 = 4127440U;

    t27 = ((x145>x146)%(x147-x148));

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x149 = 7602U;
	uint8_t x150 = 24U;
	static int32_t x152 = -1;
	volatile int32_t t28 = 53757;

    t28 = ((x149>x150)%(x151-x152));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x153 = 18050;
	volatile int32_t x154 = INT32_MIN;
	static int16_t x155 = -11;
	int8_t x156 = INT8_MAX;
	int32_t t29 = -1330;

    t29 = ((x153>x154)%(x155-x156));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x157 = -1LL;
	static int32_t x158 = INT32_MIN;
	volatile int8_t x159 = -1;
	uint32_t x160 = 7622U;

    t30 = ((x157>x158)%(x159-x160));

    if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x161 = 8191532672379873LLU;
	int16_t x162 = -1;
	uint32_t x164 = UINT32_MAX;

    t31 = ((x161>x162)%(x163-x164));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x165 = 93U;
	int16_t x167 = INT16_MIN;
	static int16_t x168 = INT16_MAX;
	int32_t t32 = 169;

    t32 = ((x165>x166)%(x167-x168));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x169 = 1;
	uint8_t x171 = 4U;
	int32_t t33 = 467;

    t33 = ((x169>x170)%(x171-x172));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x173 = -1086966778009LL;
	uint16_t x176 = UINT16_MAX;
	volatile int64_t t34 = 13574957195188173LL;

    t34 = ((x173>x174)%(x175-x176));

    if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x178 = UINT8_MAX;
	static uint8_t x180 = 23U;
	int32_t t35 = 3;

    t35 = ((x177>x178)%(x179-x180));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x183 = UINT8_MAX;
	static uint32_t x184 = UINT32_MAX;

    t36 = ((x181>x182)%(x183-x184));

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int64_t x185 = INT64_MIN;
	int64_t x186 = INT64_MAX;
	int8_t x187 = -1;
	static uint16_t x188 = 342U;
	volatile int32_t t37 = 63558149;

    t37 = ((x185>x186)%(x187-x188));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x189 = -6;
	volatile int8_t x190 = -1;
	uint32_t x191 = UINT32_MAX;
	int64_t x192 = -793362LL;
	static int64_t t38 = -72LL;

    t38 = ((x189>x190)%(x191-x192));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x193 = 7084581;
	int64_t x194 = -1LL;
	uint32_t x195 = 13732U;
	volatile uint16_t x196 = UINT16_MAX;
	uint32_t t39 = 52403279U;

    t39 = ((x193>x194)%(x195-x196));

    if (t39 != 1U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x197 = 695444912U;
	int8_t x199 = -1;
	uint32_t t40 = 379U;

    t40 = ((x197>x198)%(x199-x200));

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x201 = INT16_MAX;
	uint8_t x202 = 46U;
	static int8_t x203 = INT8_MIN;
	int32_t t41 = 8245495;

    t41 = ((x201>x202)%(x203-x204));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x209 = -3833;
	static int16_t x210 = -1;
	static int64_t x211 = INT64_MAX;
	uint32_t x212 = 594313U;
	volatile int64_t t42 = -499298341741LL;

    t42 = ((x209>x210)%(x211-x212));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x213 = 1U;
	static uint16_t x215 = UINT16_MAX;
	int64_t x216 = 4001377741842LL;
	int64_t t43 = -3LL;

    t43 = ((x213>x214)%(x215-x216));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x217 = 2546089686586612LLU;
	uint8_t x218 = 19U;
	volatile int8_t x219 = -28;
	int64_t x220 = -1458LL;
	int64_t t44 = 418250858472240522LL;

    t44 = ((x217>x218)%(x219-x220));

    if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x221 = INT16_MIN;
	static volatile uint8_t x222 = 60U;
	int8_t x224 = 34;
	int32_t t45 = -70052;

    t45 = ((x221>x222)%(x223-x224));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x225 = 125163992;
	uint16_t x226 = UINT16_MAX;
	int32_t x227 = 1994;
	static uint16_t x228 = 0U;
	int32_t t46 = 72;

    t46 = ((x225>x226)%(x227-x228));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x229 = INT8_MAX;
	int16_t x230 = INT16_MIN;
	int32_t x231 = INT32_MIN;
	uint64_t x232 = 1830415729824220LLU;
	static uint64_t t47 = 30290LLU;

    t47 = ((x229>x230)%(x231-x232));

    if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x233 = INT8_MIN;
	int32_t x234 = INT32_MAX;
	static int64_t x235 = -283LL;
	int64_t t48 = -6885845LL;

    t48 = ((x233>x234)%(x235-x236));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x237 = -1;
	int8_t x239 = INT8_MAX;
	uint32_t x240 = 6U;
	static uint32_t t49 = 344241U;

    t49 = ((x237>x238)%(x239-x240));

    if (t49 != 1U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x241 = 202U;
	int8_t x242 = -7;
	int64_t x243 = -1LL;
	static int8_t x244 = INT8_MAX;
	static int64_t t50 = 363931520292362LL;

    t50 = ((x241>x242)%(x243-x244));

    if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x249 = 4U;
	int16_t x250 = -38;
	int32_t t51 = -469567511;

    t51 = ((x249>x250)%(x251-x252));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x257 = INT8_MIN;
	int8_t x258 = -1;
	static uint64_t x259 = 6097LLU;
	int8_t x260 = 1;
	volatile uint64_t t52 = 39187LLU;

    t52 = ((x257>x258)%(x259-x260));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x261 = -13787932LL;
	int64_t x262 = -1LL;
	int8_t x263 = INT8_MAX;
	static uint8_t x264 = 6U;
	static int32_t t53 = -860575;

    t53 = ((x261>x262)%(x263-x264));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x266 = 11U;
	volatile int16_t x268 = 1;
	volatile int32_t t54 = 253;

    t54 = ((x265>x266)%(x267-x268));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x269 = INT16_MAX;
	volatile uint32_t x270 = 30577869U;
	int8_t x271 = 1;
	static volatile int16_t x272 = INT16_MIN;
	volatile int32_t t55 = 0;

    t55 = ((x269>x270)%(x271-x272));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x273 = 79486354LLU;
	static int16_t x274 = INT16_MIN;
	int64_t t56 = -7964970875098LL;

    t56 = ((x273>x274)%(x275-x276));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x277 = INT16_MIN;
	static uint64_t x279 = 3792689404625179173LLU;
	volatile uint64_t t57 = 28002582504LLU;

    t57 = ((x277>x278)%(x279-x280));

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x289 = 1;
	int16_t x290 = INT16_MAX;
	int64_t x292 = -6557700LL;

    t58 = ((x289>x290)%(x291-x292));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x294 = 257101135LL;
	int64_t x295 = 5246968217174085LL;
	static volatile int16_t x296 = INT16_MAX;
	int64_t t59 = 21400283375LL;

    t59 = ((x293>x294)%(x295-x296));

    if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x301 = -1LL;
	volatile int8_t x302 = -4;
	int64_t x303 = INT64_MAX;
	int8_t x304 = 0;
	int64_t t60 = 2787109558LL;

    t60 = ((x301>x302)%(x303-x304));

    if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x305 = INT32_MIN;
	static uint64_t x306 = 3350704212408063283LLU;
	volatile int16_t x307 = INT16_MIN;
	uint16_t x308 = 16497U;
	volatile int32_t t61 = -203397;

    t61 = ((x305>x306)%(x307-x308));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x317 = 1U;
	uint8_t x320 = 19U;

    t62 = ((x317>x318)%(x319-x320));

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x321 = INT32_MIN;
	static int8_t x322 = -5;
	uint64_t x323 = 1475LLU;
	static uint16_t x324 = 399U;
	static uint64_t t63 = 778LLU;

    t63 = ((x321>x322)%(x323-x324));

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x329 = INT8_MIN;
	static int8_t x330 = INT8_MIN;
	volatile int16_t x331 = INT16_MIN;
	volatile int32_t x332 = -3606748;
	volatile int32_t t64 = -1;

    t64 = ((x329>x330)%(x331-x332));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x339 = INT16_MIN;
	uint16_t x340 = 5U;
	int32_t t65 = 31;

    t65 = ((x337>x338)%(x339-x340));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x341 = INT8_MIN;
	int16_t x342 = INT16_MIN;
	int16_t x343 = INT16_MIN;
	int32_t x344 = INT32_MIN;
	volatile int32_t t66 = -150;

    t66 = ((x341>x342)%(x343-x344));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x346 = -1;
	static volatile uint64_t x347 = 454533949342911023LLU;
	int32_t x348 = INT32_MAX;
	uint64_t t67 = 36382256427LLU;

    t67 = ((x345>x346)%(x347-x348));

    if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x353 = -1;
	int8_t x354 = -1;
	int64_t x355 = -247547LL;
	int16_t x356 = 1;
	volatile int64_t t68 = -46926365LL;

    t68 = ((x353>x354)%(x355-x356));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x357 = 50U;
	static int32_t x358 = -4;
	int32_t x360 = INT32_MAX;
	int32_t t69 = -11;

    t69 = ((x357>x358)%(x359-x360));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x366 = 11U;
	volatile uint8_t x367 = UINT8_MAX;
	int32_t t70 = 7826;

    t70 = ((x365>x366)%(x367-x368));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x370 = 1U;
	volatile uint16_t x371 = 5U;

    t71 = ((x369>x370)%(x371-x372));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x377 = INT64_MIN;
	static int16_t x380 = INT16_MAX;
	volatile uint32_t t72 = 1U;

    t72 = ((x377>x378)%(x379-x380));

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x381 = INT16_MIN;
	int32_t x382 = INT32_MIN;
	uint32_t x383 = UINT32_MAX;
	volatile int32_t x384 = INT32_MIN;

    t73 = ((x381>x382)%(x383-x384));

    if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile uint32_t x385 = 543U;
	int8_t x386 = 35;
	uint16_t x387 = 37U;
	int8_t x388 = -16;
	volatile int32_t t74 = 3716978;

    t74 = ((x385>x386)%(x387-x388));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x389 = UINT64_MAX;
	static int8_t x390 = 3;
	int8_t x391 = -1;
	int16_t x392 = INT16_MAX;
	volatile int32_t t75 = -20;

    t75 = ((x389>x390)%(x391-x392));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x393 = -1LL;
	int32_t x395 = INT32_MIN;
	static volatile int16_t x396 = INT16_MIN;
	int32_t t76 = 133;

    t76 = ((x393>x394)%(x395-x396));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x397 = INT16_MIN;
	int8_t x398 = 39;
	int8_t x399 = INT8_MIN;
	volatile int16_t x400 = -2802;

    t77 = ((x397>x398)%(x399-x400));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x401 = INT8_MIN;
	volatile int8_t x403 = -1;
	uint16_t x404 = UINT16_MAX;
	static int32_t t78 = -355093018;

    t78 = ((x401>x402)%(x403-x404));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x408 = INT64_MAX;
	uint64_t t79 = 341706658256440640LLU;

    t79 = ((x405>x406)%(x407-x408));

    if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x409 = INT8_MIN;
	uint64_t x410 = 0LLU;
	static uint64_t x411 = UINT64_MAX;
	uint32_t x412 = UINT32_MAX;
	volatile uint64_t t80 = 2897939866LLU;

    t80 = ((x409>x410)%(x411-x412));

    if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x413 = -1LL;
	int32_t x414 = -39035;
	int8_t x415 = 7;
	uint32_t x416 = UINT32_MAX;
	uint32_t t81 = 20U;

    t81 = ((x413>x414)%(x415-x416));

    if (t81 != 1U) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x421 = 7575;
	static volatile uint64_t x422 = 65087943960202LLU;
	int8_t x423 = -1;
	uint64_t x424 = 2814421815549LLU;

    t82 = ((x421>x422)%(x423-x424));

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x425 = UINT64_MAX;
	volatile int32_t x426 = INT32_MAX;
	static uint32_t x428 = UINT32_MAX;
	volatile uint32_t t83 = 10188099U;

    t83 = ((x425>x426)%(x427-x428));

    if (t83 != 1U) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x430 = -7;
	int8_t x431 = 2;
	volatile int32_t x432 = 147896675;
	volatile int32_t t84 = -578;

    t84 = ((x429>x430)%(x431-x432));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x433 = UINT64_MAX;
	volatile int8_t x434 = -6;
	static int32_t x436 = 103;
	uint64_t t85 = 773827704LLU;

    t85 = ((x433>x434)%(x435-x436));

    if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x442 = INT32_MIN;
	uint16_t x443 = UINT16_MAX;
	int32_t x444 = INT32_MAX;
	static int32_t t86 = 1024309248;

    t86 = ((x441>x442)%(x443-x444));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x445 = -1;
	uint64_t x446 = 3294361645465LLU;
	volatile int16_t x447 = INT16_MAX;
	int32_t x448 = -1;
	int32_t t87 = 243012;

    t87 = ((x445>x446)%(x447-x448));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x449 = 1495LL;
	int16_t x450 = -158;
	volatile int16_t x451 = 3;
	volatile int8_t x452 = INT8_MIN;

    t88 = ((x449>x450)%(x451-x452));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x453 = 869U;
	uint32_t x454 = UINT32_MAX;
	int16_t x455 = INT16_MIN;
	volatile int32_t t89 = 28136;

    t89 = ((x453>x454)%(x455-x456));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint32_t x459 = 30181U;
	uint64_t x460 = UINT64_MAX;
	volatile uint64_t t90 = 3LLU;

    t90 = ((x457>x458)%(x459-x460));

    if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x461 = -1;
	static int16_t x462 = INT16_MIN;
	uint64_t x463 = 5413989753LLU;
	uint64_t t91 = 15272LLU;

    t91 = ((x461>x462)%(x463-x464));

    if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x465 = -1;
	static int16_t x466 = 0;
	int8_t x468 = -1;

    t92 = ((x465>x466)%(x467-x468));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x469 = 1946;
	int32_t x470 = INT32_MIN;
	static volatile int16_t x471 = -1;
	volatile int32_t t93 = 31;

    t93 = ((x469>x470)%(x471-x472));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x473 = INT16_MIN;
	int64_t x474 = INT64_MAX;
	int32_t x475 = 779;
	int16_t x476 = INT16_MAX;
	static int32_t t94 = -49;

    t94 = ((x473>x474)%(x475-x476));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x477 = 14021;
	static int16_t x479 = -4;

    t95 = ((x477>x478)%(x479-x480));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x481 = INT16_MAX;
	uint32_t x482 = 15U;
	uint64_t x483 = 172906880390305833LLU;
	uint32_t x484 = 1975U;
	uint64_t t96 = 99847523597676921LLU;

    t96 = ((x481>x482)%(x483-x484));

    if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x488 = 1LLU;
	static volatile uint64_t t97 = 58LLU;

    t97 = ((x485>x486)%(x487-x488));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x490 = 968450U;
	int64_t x491 = 6416963LL;
	int32_t x492 = INT32_MIN;
	int64_t t98 = -23966429370626377LL;

    t98 = ((x489>x490)%(x491-x492));

    if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x493 = 4;
	int16_t x494 = INT16_MAX;
	volatile int32_t t99 = -1;

    t99 = ((x493>x494)%(x495-x496));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x497 = 3;
	int16_t x498 = -1;
	static int8_t x499 = -1;
	uint16_t x500 = 16509U;
	static int32_t t100 = -1;

    t100 = ((x497>x498)%(x499-x500));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x501 = 96U;
	int16_t x502 = -1;
	int32_t t101 = 12;

    t101 = ((x501>x502)%(x503-x504));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int64_t x505 = -19558LL;
	static volatile int32_t x506 = 27621620;
	int64_t x507 = -16002805164236LL;
	uint64_t x508 = UINT64_MAX;
	volatile uint64_t t102 = 2749708492159998735LLU;

    t102 = ((x505>x506)%(x507-x508));

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile uint16_t x509 = 6U;
	static int32_t x511 = INT32_MIN;
	volatile uint64_t x512 = UINT64_MAX;

    t103 = ((x509>x510)%(x511-x512));

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x513 = 11U;
	static volatile int16_t x514 = -1;
	volatile int16_t x516 = -1;
	int64_t t104 = 31480LL;

    t104 = ((x513>x514)%(x515-x516));

    if (t104 != 1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x517 = -1;
	int16_t x519 = -6999;
	int32_t t105 = -7;

    t105 = ((x517>x518)%(x519-x520));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x522 = 4239793130037LLU;
	int16_t x523 = INT16_MIN;
	int16_t x524 = INT16_MAX;
	int32_t t106 = -29320951;

    t106 = ((x521>x522)%(x523-x524));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x525 = INT8_MAX;
	uint8_t x526 = 13U;
	int64_t x527 = -538457713143593LL;
	static int64_t t107 = -3891LL;

    t107 = ((x525>x526)%(x527-x528));

    if (t107 != 1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x529 = 1031;
	int64_t x530 = -3083588372LL;
	static int32_t x531 = INT32_MIN;
	static int16_t x532 = INT16_MIN;
	static int32_t t108 = 3;

    t108 = ((x529>x530)%(x531-x532));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x533 = UINT64_MAX;
	volatile int32_t x535 = INT32_MIN;
	int32_t x536 = -1;
	int32_t t109 = -445846;

    t109 = ((x533>x534)%(x535-x536));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x537 = -9175;
	uint64_t x539 = 3350048571513615LLU;
	static uint16_t x540 = 4023U;
	static uint64_t t110 = 1753LLU;

    t110 = ((x537>x538)%(x539-x540));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x546 = INT64_MIN;
	volatile int64_t t111 = 4372683978887LL;

    t111 = ((x545>x546)%(x547-x548));

    if (t111 != 1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x553 = -30;
	int32_t x554 = 14;
	uint64_t x555 = 31946332137LLU;
	volatile uint64_t t112 = 48043803LLU;

    t112 = ((x553>x554)%(x555-x556));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x557 = INT16_MIN;
	int64_t x558 = -1LL;
	uint16_t x559 = 2U;
	int64_t x560 = 60016084205LL;
	static volatile int64_t t113 = -655243040620346263LL;

    t113 = ((x557>x558)%(x559-x560));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x561 = INT8_MIN;
	int8_t x562 = INT8_MIN;
	uint32_t t114 = 272U;

    t114 = ((x561>x562)%(x563-x564));

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint16_t x573 = 3U;
	volatile int32_t x574 = -111;
	volatile uint64_t x575 = UINT64_MAX;
	volatile int64_t x576 = INT64_MAX;
	volatile uint64_t t115 = 157579418LLU;

    t115 = ((x573>x574)%(x575-x576));

    if (t115 != 1LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x585 = INT16_MIN;
	uint64_t x586 = 852237082550LLU;
	int16_t x588 = 118;
	static volatile int32_t t116 = -231253699;

    t116 = ((x585>x586)%(x587-x588));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x589 = 6U;
	static int8_t x590 = INT8_MIN;
	static int8_t x591 = INT8_MAX;
	int32_t x592 = 22936425;
	static volatile int32_t t117 = 702701;

    t117 = ((x589>x590)%(x591-x592));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x593 = INT8_MIN;
	uint8_t x594 = UINT8_MAX;
	uint32_t x595 = 2602U;
	volatile uint32_t x596 = 1158140U;

    t118 = ((x593>x594)%(x595-x596));

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x602 = 38498U;
	static uint32_t x603 = UINT32_MAX;
	uint16_t x604 = 19936U;
	uint32_t t119 = 0U;

    t119 = ((x601>x602)%(x603-x604));

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x605 = INT8_MAX;
	int16_t x606 = 434;
	int64_t x607 = -408949437LL;
	uint16_t x608 = 488U;
	int64_t t120 = 25080674518LL;

    t120 = ((x605>x606)%(x607-x608));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x610 = INT16_MAX;
	int16_t x611 = -180;
	volatile int16_t x612 = INT16_MIN;
	volatile int32_t t121 = -582440;

    t121 = ((x609>x610)%(x611-x612));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x613 = UINT64_MAX;
	int32_t x614 = -1;
	uint64_t x616 = 70754864083942445LLU;
	volatile uint64_t t122 = 1583731841015188600LLU;

    t122 = ((x613>x614)%(x615-x616));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x621 = INT32_MIN;
	uint8_t x623 = 7U;
	volatile uint8_t x624 = 31U;
	int32_t t123 = 61274017;

    t123 = ((x621>x622)%(x623-x624));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x633 = 43U;
	int16_t x634 = INT16_MAX;
	static int32_t x635 = -2799;
	static int32_t t124 = -4425067;

    t124 = ((x633>x634)%(x635-x636));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x637 = INT32_MAX;
	int32_t x639 = -1;
	uint16_t x640 = 3U;

    t125 = ((x637>x638)%(x639-x640));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x641 = UINT32_MAX;
	int16_t x642 = -1;
	int32_t x643 = -16567484;
	int64_t x644 = INT64_MIN;
	int64_t t126 = 226840491316LL;

    t126 = ((x641>x642)%(x643-x644));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x645 = -1;
	int8_t x646 = INT8_MIN;
	int8_t x647 = INT8_MIN;
	volatile uint32_t t127 = 9238854U;

    t127 = ((x645>x646)%(x647-x648));

    if (t127 != 1U) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x657 = INT32_MIN;
	static uint8_t x658 = 0U;
	int16_t x660 = 71;
	volatile int64_t t128 = 4159982093857062416LL;

    t128 = ((x657>x658)%(x659-x660));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x662 = INT16_MAX;
	volatile int64_t x663 = INT64_MIN;
	int64_t x664 = -1LL;
	static int64_t t129 = 323833342011261594LL;

    t129 = ((x661>x662)%(x663-x664));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint32_t x665 = 1937U;
	volatile uint64_t x667 = 47236LLU;
	uint8_t x668 = UINT8_MAX;
	uint64_t t130 = 64448589LLU;

    t130 = ((x665>x666)%(x667-x668));

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x669 = 3363;
	int16_t x670 = INT16_MIN;
	uint8_t x671 = 61U;
	volatile uint16_t x672 = UINT16_MAX;
	int32_t t131 = 79496;

    t131 = ((x669>x670)%(x671-x672));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x677 = 1494U;
	volatile int32_t x678 = INT32_MAX;
	int32_t x679 = INT32_MAX;
	volatile int64_t t132 = -892LL;

    t132 = ((x677>x678)%(x679-x680));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint64_t x681 = 0LLU;
	volatile int8_t x682 = -1;
	volatile int16_t x684 = INT16_MIN;
	uint64_t t133 = 238356123459751LLU;

    t133 = ((x681>x682)%(x683-x684));

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x686 = INT64_MAX;
	volatile int64_t x687 = -451LL;
	volatile int32_t x688 = -1047303;
	int64_t t134 = 8720041395599336LL;

    t134 = ((x685>x686)%(x687-x688));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x689 = 9U;
	uint32_t x690 = 634350U;
	int16_t x692 = INT16_MIN;
	volatile int64_t t135 = -29335907157980LL;

    t135 = ((x689>x690)%(x691-x692));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x697 = -3LL;
	uint32_t x698 = 7591U;
	uint8_t x699 = 0U;
	volatile int32_t x700 = INT32_MAX;

    t136 = ((x697>x698)%(x699-x700));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x701 = INT32_MIN;
	int16_t x702 = INT16_MIN;
	volatile int32_t x703 = -161675663;
	uint64_t x704 = 925242LLU;
	volatile uint64_t t137 = 9870416583138947LLU;

    t137 = ((x701>x702)%(x703-x704));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint8_t x706 = 15U;
	uint32_t x708 = 228172U;
	uint32_t t138 = 24U;

    t138 = ((x705>x706)%(x707-x708));

    if (t138 != 1U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x709 = UINT64_MAX;
	uint64_t x710 = UINT64_MAX;
	volatile int16_t x711 = INT16_MIN;
	uint64_t x712 = UINT64_MAX;
	static volatile uint64_t t139 = 299LLU;

    t139 = ((x709>x710)%(x711-x712));

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x713 = UINT64_MAX;
	static int16_t x714 = -1;
	uint8_t x715 = 3U;
	volatile int16_t x716 = -1;
	int32_t t140 = 0;

    t140 = ((x713>x714)%(x715-x716));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x719 = 308;

    t141 = ((x717>x718)%(x719-x720));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x721 = 0;
	int8_t x722 = INT8_MIN;
	int32_t x723 = -3876;
	uint16_t x724 = UINT16_MAX;

    t142 = ((x721>x722)%(x723-x724));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x725 = INT8_MIN;
	int64_t x726 = 258818522831369186LL;
	int32_t x727 = INT32_MIN;
	int64_t x728 = 30048827LL;

    t143 = ((x725>x726)%(x727-x728));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x729 = -1LL;
	int64_t x730 = INT64_MAX;
	static uint32_t x731 = UINT32_MAX;
	int64_t x732 = 36436141560991LL;
	int64_t t144 = 193300334LL;

    t144 = ((x729>x730)%(x731-x732));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint64_t x733 = 15843617852043320LLU;
	static uint64_t x734 = 528324268190765614LLU;
	volatile int32_t x736 = INT32_MIN;
	uint32_t t145 = 18192224U;

    t145 = ((x733>x734)%(x735-x736));

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x737 = INT16_MIN;
	int64_t x740 = -535362869LL;
	volatile int64_t t146 = -3054990875LL;

    t146 = ((x737>x738)%(x739-x740));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x741 = INT16_MIN;
	static int8_t x742 = INT8_MIN;
	int64_t x743 = -1LL;
	uint32_t x744 = 28041034U;

    t147 = ((x741>x742)%(x743-x744));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x745 = -21;
	volatile int16_t x746 = INT16_MAX;
	int8_t x747 = INT8_MAX;
	volatile uint16_t x748 = UINT16_MAX;
	volatile int32_t t148 = -2;

    t148 = ((x745>x746)%(x747-x748));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x749 = -690492626;
	uint8_t x750 = UINT8_MAX;
	int8_t x751 = -58;
	int16_t x752 = INT16_MAX;
	volatile int32_t t149 = 6080180;

    t149 = ((x749>x750)%(x751-x752));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x753 = -1;
	uint8_t x755 = 14U;
	volatile uint32_t t150 = 0U;

    t150 = ((x753>x754)%(x755-x756));

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x757 = 16554535;
	static volatile uint8_t x758 = UINT8_MAX;
	uint8_t x760 = 35U;
	volatile int32_t t151 = -25454799;

    t151 = ((x757>x758)%(x759-x760));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x762 = INT8_MAX;
	static volatile int32_t x764 = INT32_MIN;
	int32_t t152 = -68535773;

    t152 = ((x761>x762)%(x763-x764));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x765 = 91U;
	int8_t x766 = -5;
	uint8_t x767 = 1U;
	uint16_t x768 = 1653U;
	int32_t t153 = -62339;

    t153 = ((x765>x766)%(x767-x768));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int8_t x769 = -1;
	uint32_t x770 = 809971U;
	int16_t x772 = INT16_MIN;

    t154 = ((x769>x770)%(x771-x772));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x773 = INT8_MIN;
	uint8_t x774 = 1U;
	int8_t x775 = INT8_MIN;
	uint16_t x776 = 656U;
	int32_t t155 = -126622472;

    t155 = ((x773>x774)%(x775-x776));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x777 = -8;
	volatile uint32_t x779 = 5270U;
	static int8_t x780 = INT8_MIN;
	static volatile uint32_t t156 = 448U;

    t156 = ((x777>x778)%(x779-x780));

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile uint16_t x781 = 911U;
	int16_t x782 = INT16_MAX;
	volatile uint64_t t157 = 13184956656753533LLU;

    t157 = ((x781>x782)%(x783-x784));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x786 = UINT32_MAX;
	int64_t x787 = -1LL;
	int16_t x788 = -837;
	static volatile int64_t t158 = 324708984LL;

    t158 = ((x785>x786)%(x787-x788));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x790 = INT32_MIN;
	volatile int32_t t159 = -12;

    t159 = ((x789>x790)%(x791-x792));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x794 = INT64_MAX;
	static volatile int64_t x795 = INT64_MIN;
	int32_t x796 = -1;
	volatile int64_t t160 = 6667LL;

    t160 = ((x793>x794)%(x795-x796));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x797 = INT16_MIN;
	int64_t x798 = INT64_MIN;
	int64_t x799 = INT64_MIN;
	static int32_t x800 = -1;
	int64_t t161 = -3703770566567512994LL;

    t161 = ((x797>x798)%(x799-x800));

    if (t161 != 1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x801 = UINT16_MAX;
	int64_t x803 = -1LL;
	int64_t t162 = 23574780027979644LL;

    t162 = ((x801>x802)%(x803-x804));

    if (t162 != 1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x805 = UINT16_MAX;
	int16_t x806 = 10;
	volatile int32_t t163 = -57;

    t163 = ((x805>x806)%(x807-x808));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x813 = 0U;
	int16_t x815 = INT16_MIN;
	int64_t x816 = -1413251238653829691LL;
	volatile int64_t t164 = -193453260535LL;

    t164 = ((x813>x814)%(x815-x816));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int32_t x817 = INT32_MAX;
	int32_t x818 = -161;
	uint64_t x819 = UINT64_MAX;
	int64_t x820 = INT64_MAX;
	uint64_t t165 = 91473800LLU;

    t165 = ((x817>x818)%(x819-x820));

    if (t165 != 1LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x821 = INT32_MIN;
	uint8_t x822 = 90U;
	static int8_t x823 = INT8_MIN;

    t166 = ((x821>x822)%(x823-x824));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x825 = -1;
	int16_t x826 = INT16_MAX;
	int8_t x827 = INT8_MIN;
	static uint64_t x828 = 85977493666688LLU;
	volatile uint64_t t167 = 4029965800794LLU;

    t167 = ((x825>x826)%(x827-x828));

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x829 = -1;
	uint64_t x830 = 6575973LLU;
	uint64_t x831 = UINT64_MAX;
	uint8_t x832 = UINT8_MAX;
	uint64_t t168 = 114957LLU;

    t168 = ((x829>x830)%(x831-x832));

    if (t168 != 1LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x837 = 1946;
	static int64_t x838 = INT64_MIN;
	int16_t x839 = -28;
	int16_t x840 = INT16_MIN;

    t169 = ((x837>x838)%(x839-x840));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x841 = -1;
	static volatile uint16_t x842 = UINT16_MAX;
	uint64_t x843 = 1LLU;
	static int8_t x844 = INT8_MIN;
	uint64_t t170 = 105291892036322706LLU;

    t170 = ((x841>x842)%(x843-x844));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x845 = INT8_MAX;
	volatile int16_t x846 = INT16_MIN;
	int16_t x848 = -1;
	int32_t t171 = -2711587;

    t171 = ((x845>x846)%(x847-x848));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x849 = INT16_MIN;
	uint8_t x850 = UINT8_MAX;
	uint64_t x851 = 39400387877274825LLU;
	uint32_t x852 = 417U;

    t172 = ((x849>x850)%(x851-x852));

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x853 = INT16_MIN;
	static int32_t x855 = -23;
	int16_t x856 = 8;
	volatile int32_t t173 = -76502;

    t173 = ((x853>x854)%(x855-x856));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x857 = 22227U;
	int64_t x858 = INT64_MIN;
	volatile uint32_t x859 = 2207528U;
	int8_t x860 = INT8_MIN;
	static volatile uint32_t t174 = 116340121U;

    t174 = ((x857>x858)%(x859-x860));

    if (t174 != 1U) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x865 = INT8_MAX;
	int32_t x867 = INT32_MAX;
	volatile uint8_t x868 = 89U;
	static volatile int32_t t175 = 40481331;

    t175 = ((x865>x866)%(x867-x868));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x869 = INT32_MIN;
	int32_t x871 = INT32_MIN;
	volatile int32_t t176 = -3074;

    t176 = ((x869>x870)%(x871-x872));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x873 = INT16_MAX;
	int8_t x874 = -13;
	int64_t x875 = -1LL;
	volatile int8_t x876 = INT8_MAX;
	static int64_t t177 = -7LL;

    t177 = ((x873>x874)%(x875-x876));

    if (t177 != 1LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint8_t x877 = 7U;
	int64_t x879 = INT64_MIN;
	static int16_t x880 = INT16_MIN;
	int64_t t178 = 497014383LL;

    t178 = ((x877>x878)%(x879-x880));

    if (t178 != 1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x881 = INT8_MAX;
	int8_t x882 = INT8_MAX;
	uint16_t x883 = 0U;
	int16_t x884 = INT16_MAX;
	int32_t t179 = 654105594;

    t179 = ((x881>x882)%(x883-x884));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x886 = 1U;
	int8_t x888 = -1;
	volatile int32_t t180 = -84354;

    t180 = ((x885>x886)%(x887-x888));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x889 = -1;
	int32_t x890 = INT32_MAX;
	int32_t x891 = 770008948;
	int8_t x892 = 0;
	int32_t t181 = -3;

    t181 = ((x889>x890)%(x891-x892));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x893 = UINT64_MAX;
	static int64_t x894 = 0LL;
	uint16_t x895 = UINT16_MAX;
	volatile int64_t t182 = -176LL;

    t182 = ((x893>x894)%(x895-x896));

    if (t182 != 1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x897 = 2342;
	volatile uint16_t x898 = 5846U;
	uint64_t x899 = 115890511398LLU;
	int16_t x900 = -1;
	uint64_t t183 = 2300587LLU;

    t183 = ((x897>x898)%(x899-x900));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x902 = INT32_MIN;
	volatile uint16_t x904 = UINT16_MAX;
	volatile int32_t t184 = 196;

    t184 = ((x901>x902)%(x903-x904));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x905 = UINT16_MAX;
	int16_t x906 = -1;
	int64_t x907 = -1LL;
	int64_t t185 = -1093610968606841313LL;

    t185 = ((x905>x906)%(x907-x908));

    if (t185 != 1LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x920 = INT64_MIN;

    t186 = ((x917>x918)%(x919-x920));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x921 = INT8_MAX;
	int32_t x922 = INT32_MIN;
	volatile uint32_t x924 = UINT32_MAX;
	static uint32_t t187 = 4910098U;

    t187 = ((x921>x922)%(x923-x924));

    if (t187 != 1U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x929 = 2007U;
	volatile uint32_t x930 = 10652U;
	int64_t x931 = 7812999LL;
	int16_t x932 = INT16_MIN;
	volatile int64_t t188 = -448634181LL;

    t188 = ((x929>x930)%(x931-x932));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x933 = 201996LL;
	int16_t x934 = -1307;
	volatile int64_t t189 = -30LL;

    t189 = ((x933>x934)%(x935-x936));

    if (t189 != 1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x937 = 6358U;
	static uint32_t x938 = 34845808U;
	static int64_t x939 = INT64_MIN;
	static volatile int64_t x940 = -107286161832639LL;
	int64_t t190 = -100297095094737546LL;

    t190 = ((x937>x938)%(x939-x940));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x941 = -1LL;
	int8_t x942 = -58;
	volatile int64_t t191 = 128LL;

    t191 = ((x941>x942)%(x943-x944));

    if (t191 != 1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x945 = -52518;
	volatile int8_t x946 = -30;
	int64_t x947 = 33633631895175LL;
	volatile int64_t t192 = -2225818194655LL;

    t192 = ((x945>x946)%(x947-x948));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x949 = INT8_MAX;
	int32_t x950 = INT32_MIN;
	uint64_t x951 = 6036678785LLU;
	static uint64_t t193 = 0LLU;

    t193 = ((x949>x950)%(x951-x952));

    if (t193 != 1LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x953 = INT32_MAX;
	uint16_t x954 = 8167U;
	int32_t x955 = INT32_MIN;
	uint32_t t194 = 58U;

    t194 = ((x953>x954)%(x955-x956));

    if (t194 != 1U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x959 = 7U;
	static int32_t t195 = -1;

    t195 = ((x957>x958)%(x959-x960));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x961 = INT32_MAX;
	volatile uint8_t x962 = 51U;
	int8_t x963 = INT8_MIN;

    t196 = ((x961>x962)%(x963-x964));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x965 = -34;
	static int32_t x966 = INT32_MAX;
	uint8_t x968 = 12U;

    t197 = ((x965>x966)%(x967-x968));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x969 = 0;
	uint64_t x970 = 513023542437079500LLU;
	int8_t x971 = 1;
	uint32_t x972 = 29U;
	volatile uint32_t t198 = 1U;

    t198 = ((x969>x970)%(x971-x972));

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x974 = UINT32_MAX;
	static int64_t x975 = INT64_MIN;
	uint64_t x976 = UINT64_MAX;
	uint64_t t199 = 2LLU;

    t199 = ((x973>x974)%(x975-x976));

    if (t199 != 0LLU) { NG(); } else { ; }
	
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

