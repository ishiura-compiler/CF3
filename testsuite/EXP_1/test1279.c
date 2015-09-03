#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x11 = INT16_MAX;
static uint16_t x17 = UINT16_MAX;
static int64_t x18 = INT64_MIN;
uint16_t x21 = 14U;
uint64_t x22 = 1400882037LLU;
int16_t x34 = -486;
int64_t t8 = -36511016462923LL;
volatile int32_t x41 = INT32_MAX;
static volatile uint32_t x43 = 1214U;
static int64_t x44 = INT64_MIN;
uint64_t x47 = 1343077129LLU;
int64_t x48 = -3LL;
int32_t x51 = -868226;
static uint64_t t12 = 2306461LLU;
static int32_t x64 = INT32_MIN;
volatile int32_t t15 = 6990;
volatile int32_t t16 = -5998;
int32_t t17 = 6;
int8_t x80 = INT8_MIN;
int16_t x82 = 2;
int8_t x83 = INT8_MAX;
uint32_t t19 = 1315132564U;
static volatile uint32_t x87 = 5U;
uint16_t x88 = UINT16_MAX;
int64_t x92 = INT64_MIN;
uint64_t x93 = UINT64_MAX;
volatile int16_t x95 = INT16_MAX;
static int8_t x97 = 16;
uint8_t x106 = UINT8_MAX;
volatile uint32_t x109 = 1125U;
int64_t x111 = -48740029338LL;
static int32_t t27 = -1724137;
static int32_t x128 = -22386083;
volatile int32_t t30 = -206359;
int8_t x131 = -1;
int8_t x134 = -1;
static uint8_t x135 = 2U;
int64_t x137 = INT64_MIN;
uint32_t x139 = 6321U;
int16_t x142 = INT16_MAX;
volatile int8_t x146 = -1;
volatile uint16_t x148 = 15271U;
int64_t x155 = -3421839684LL;
int32_t x159 = INT32_MIN;
volatile int32_t t39 = 22;
int8_t x169 = INT8_MAX;
int64_t x171 = INT64_MAX;
int64_t x173 = INT64_MAX;
int32_t t42 = 111756;
static int16_t x182 = -47;
int64_t x189 = -1LL;
int32_t x192 = 2;
uint64_t x194 = 3582344910976192LLU;
volatile uint64_t t46 = 1LLU;
uint8_t x198 = UINT8_MAX;
volatile int32_t t49 = -35925314;
int32_t x211 = INT32_MIN;
static int64_t t51 = -1087289797519989457LL;
volatile uint32_t x218 = 26U;
static int32_t t52 = 6;
int32_t x226 = INT32_MIN;
volatile int32_t t54 = -1198056;
volatile int16_t x231 = 0;
static int16_t x234 = 22;
int32_t x237 = INT32_MAX;
int8_t x244 = INT8_MIN;
static int8_t x245 = INT8_MIN;
int8_t x248 = INT8_MIN;
int64_t x250 = INT64_MIN;
volatile int32_t x256 = -1;
int32_t x257 = INT32_MAX;
int8_t x258 = INT8_MIN;
int16_t x262 = 0;
uint64_t x263 = 1382979099146LLU;
int64_t x270 = INT64_MAX;
uint64_t x271 = UINT64_MAX;
volatile int32_t x274 = -3303;
static uint16_t x289 = 888U;
int32_t x296 = INT32_MIN;
volatile int32_t t71 = -1488780;
volatile int32_t x307 = -2808590;
uint64_t x310 = 25LLU;
int8_t x316 = 3;
uint64_t x320 = 9391334999506LLU;
static int32_t t77 = -10660521;
static int8_t x329 = 45;
int8_t x330 = -1;
static int16_t x333 = -948;
int64_t x340 = INT64_MIN;
volatile uint8_t x344 = UINT8_MAX;
volatile int32_t t82 = -44424;
static volatile uint64_t x347 = 13603LLU;
volatile int16_t x351 = -24;
volatile uint64_t x359 = 80732LLU;
static int16_t x360 = 2;
static int64_t x361 = 11LL;
int32_t t88 = 3;
int64_t x369 = -1LL;
uint32_t x370 = 76565U;
uint32_t x372 = UINT32_MAX;
uint32_t t91 = 421418271U;
uint32_t x382 = 51452U;
int64_t x384 = -1LL;
int8_t x395 = INT8_MIN;
volatile uint32_t x396 = UINT32_MAX;
uint16_t x400 = 988U;
uint8_t x411 = UINT8_MAX;


void f0(void) {
	int16_t x1 = INT16_MIN;
	static int32_t x2 = INT32_MAX;
	int64_t x3 = INT64_MAX;
	int32_t x4 = INT32_MAX;
	int32_t t0 = 1;

	t0 = (((x1==x2)==x3)%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MIN;
	uint64_t x6 = 1LLU;
	int16_t x7 = INT16_MAX;
	volatile int64_t x8 = INT64_MIN;
	int64_t t1 = 2618234203LL;

	t1 = (((x5==x6)==x7)%x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int64_t x10 = INT64_MIN;
	uint32_t x12 = UINT32_MAX;
	volatile uint32_t t2 = 198221101U;

	t2 = (((x9==x10)==x11)%x12);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x13 = INT64_MIN;
	static uint64_t x14 = UINT64_MAX;
	volatile int8_t x15 = -1;
	int8_t x16 = -1;
	volatile int32_t t3 = -119;

	t3 = (((x13==x14)==x15)%x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x19 = INT16_MIN;
	static int8_t x20 = -1;
	int32_t t4 = 1001;

	t4 = (((x17==x18)==x19)%x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x23 = 1340994LLU;
	uint8_t x24 = 19U;
	int32_t t5 = -988953;

	t5 = (((x21==x22)==x23)%x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	uint16_t x26 = UINT16_MAX;
	static int32_t x27 = INT32_MIN;
	int64_t x28 = INT64_MIN;
	int64_t t6 = -6395835041980081LL;

	t6 = (((x25==x26)==x27)%x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	uint32_t x30 = 26U;
	int64_t x31 = -1LL;
	static volatile int8_t x32 = INT8_MIN;
	int32_t t7 = -386979315;

	t7 = (((x29==x30)==x31)%x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = -1;
	volatile uint16_t x35 = UINT16_MAX;
	static int64_t x36 = INT64_MIN;

	t8 = (((x33==x34)==x35)%x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 194U;
	volatile int64_t x38 = INT64_MAX;
	volatile int8_t x39 = -1;
	int16_t x40 = INT16_MAX;
	static volatile int32_t t9 = -3229447;

	t9 = (((x37==x38)==x39)%x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x42 = 21866095U;
	static volatile int64_t t10 = 11LL;

	t10 = (((x41==x42)==x43)%x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 24U;
	uint8_t x46 = 3U;
	volatile int64_t t11 = -6LL;

	t11 = (((x45==x46)==x47)%x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 7861608165964133LLU;
	uint32_t x50 = UINT32_MAX;
	uint64_t x52 = 10552LLU;

	t12 = (((x49==x50)==x51)%x52);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x53 = 369U;
	static uint8_t x54 = 24U;
	uint32_t x55 = 194427866U;
	volatile int16_t x56 = INT16_MIN;
	volatile int32_t t13 = 483233049;

	t13 = (((x53==x54)==x55)%x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = 38;
	static uint8_t x58 = UINT8_MAX;
	uint16_t x59 = 27U;
	volatile int32_t x60 = -3;
	volatile int32_t t14 = -555919542;

	t14 = (((x57==x58)==x59)%x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = -13LL;
	int32_t x62 = -52554914;
	int8_t x63 = -1;

	t15 = (((x61==x62)==x63)%x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = -1;
	int32_t x66 = -1;
	int32_t x67 = INT32_MIN;
	uint8_t x68 = 9U;

	t16 = (((x65==x66)==x67)%x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = -1;
	static int16_t x70 = -110;
	static int64_t x71 = -1LL;
	volatile uint16_t x72 = 393U;

	t17 = (((x69==x70)==x71)%x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = INT32_MIN;
	uint64_t x78 = 83873762LLU;
	volatile uint64_t x79 = 33LLU;
	int32_t t18 = -15;

	t18 = (((x77==x78)==x79)%x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x81 = INT16_MIN;
	volatile uint32_t x84 = 1164020631U;

	t19 = (((x81==x82)==x83)%x84);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x85 = INT8_MIN;
	uint8_t x86 = 37U;
	int32_t t20 = 51803373;

	t20 = (((x85==x86)==x87)%x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x89 = 112U;
	static int32_t x90 = INT32_MIN;
	uint16_t x91 = 44U;
	int64_t t21 = -151874082LL;

	t21 = (((x89==x90)==x91)%x92);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x94 = INT64_MIN;
	int16_t x96 = 2775;
	volatile int32_t t22 = -129;

	t22 = (((x93==x94)==x95)%x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x98 = 13LLU;
	uint8_t x99 = UINT8_MAX;
	int8_t x100 = INT8_MIN;
	int32_t t23 = 760259;

	t23 = (((x97==x98)==x99)%x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x101 = 3967704237LLU;
	int64_t x102 = -1LL;
	uint32_t x103 = UINT32_MAX;
	uint8_t x104 = UINT8_MAX;
	int32_t t24 = -1;

	t24 = (((x101==x102)==x103)%x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x105 = UINT32_MAX;
	volatile int16_t x107 = -76;
	int16_t x108 = -1402;
	volatile int32_t t25 = -3409754;

	t25 = (((x105==x106)==x107)%x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x110 = 13941486LLU;
	static int64_t x112 = -1LL;
	volatile int64_t t26 = -22485040022472758LL;

	t26 = (((x109==x110)==x111)%x112);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x113 = -1LL;
	int64_t x114 = -1LL;
	uint64_t x115 = 1283002223033939LLU;
	int32_t x116 = INT32_MIN;

	t27 = (((x113==x114)==x115)%x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x117 = 3748066U;
	static uint8_t x118 = UINT8_MAX;
	static int8_t x119 = -1;
	volatile uint32_t x120 = UINT32_MAX;
	volatile uint32_t t28 = 108U;

	t28 = (((x117==x118)==x119)%x120);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x121 = -12285;
	int16_t x122 = -1;
	static int64_t x123 = -6LL;
	static uint16_t x124 = 247U;
	int32_t t29 = -597;

	t29 = (((x121==x122)==x123)%x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = INT16_MAX;
	int8_t x126 = -3;
	int64_t x127 = -1LL;

	t30 = (((x125==x126)==x127)%x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x129 = -1;
	int64_t x130 = INT64_MIN;
	volatile int32_t x132 = INT32_MIN;
	int32_t t31 = -1000;

	t31 = (((x129==x130)==x131)%x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = -1;
	int8_t x136 = -1;
	int32_t t32 = 0;

	t32 = (((x133==x134)==x135)%x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x138 = -923443643751LL;
	int8_t x140 = INT8_MIN;
	int32_t t33 = -20363896;

	t33 = (((x137==x138)==x139)%x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = 3408662026LL;
	static int32_t x143 = -15030;
	int8_t x144 = INT8_MIN;
	int32_t t34 = -157401;

	t34 = (((x141==x142)==x143)%x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x145 = INT32_MIN;
	int64_t x147 = INT64_MAX;
	volatile int32_t t35 = 0;

	t35 = (((x145==x146)==x147)%x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x149 = 0;
	volatile int32_t x150 = INT32_MIN;
	int16_t x151 = INT16_MIN;
	int8_t x152 = 1;
	static volatile int32_t t36 = 342;

	t36 = (((x149==x150)==x151)%x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x153 = -1LL;
	int16_t x154 = 990;
	int32_t x156 = INT32_MIN;
	int32_t t37 = -94755;

	t37 = (((x153==x154)==x155)%x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = INT16_MIN;
	volatile uint32_t x158 = 427049U;
	uint64_t x160 = 14493730545LLU;
	volatile uint64_t t38 = 14737550155472137LLU;

	t38 = (((x157==x158)==x159)%x160);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x161 = 17U;
	int16_t x162 = -1;
	static volatile uint32_t x163 = 19957U;
	int8_t x164 = INT8_MAX;

	t39 = (((x161==x162)==x163)%x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x165 = -107;
	int16_t x166 = -1;
	static int64_t x167 = 250014465LL;
	uint8_t x168 = 27U;
	int32_t t40 = 122;

	t40 = (((x165==x166)==x167)%x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x170 = -1;
	static int16_t x172 = INT16_MAX;
	static int32_t t41 = 2;

	t41 = (((x169==x170)==x171)%x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x174 = -4701493790LL;
	int32_t x175 = -112767924;
	static volatile int8_t x176 = -1;

	t42 = (((x173==x174)==x175)%x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x181 = 157676327U;
	uint16_t x183 = 15U;
	static int8_t x184 = -1;
	static int32_t t43 = 3120;

	t43 = (((x181==x182)==x183)%x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x185 = 106U;
	volatile int32_t x186 = INT32_MAX;
	uint16_t x187 = 780U;
	int32_t x188 = -1;
	volatile int32_t t44 = 61;

	t44 = (((x185==x186)==x187)%x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x190 = -1;
	int8_t x191 = 20;
	volatile int32_t t45 = -2;

	t45 = (((x189==x190)==x191)%x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = INT64_MAX;
	uint64_t x195 = 0LLU;
	uint64_t x196 = UINT64_MAX;

	t46 = (((x193==x194)==x195)%x196);

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x197 = 45;
	int8_t x199 = INT8_MIN;
	uint16_t x200 = 393U;
	static int32_t t47 = 215;

	t47 = (((x197==x198)==x199)%x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x201 = 29U;
	uint32_t x202 = 39432954U;
	int8_t x203 = INT8_MIN;
	static int64_t x204 = 31048LL;
	int64_t t48 = -73120953856250209LL;

	t48 = (((x201==x202)==x203)%x204);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x205 = -1LL;
	int32_t x206 = -1;
	static uint8_t x207 = 48U;
	volatile int32_t x208 = INT32_MIN;

	t49 = (((x205==x206)==x207)%x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x209 = -1;
	volatile int32_t x210 = INT32_MIN;
	int32_t x212 = -1;
	volatile int32_t t50 = -115;

	t50 = (((x209==x210)==x211)%x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x213 = 39U;
	volatile uint16_t x214 = 73U;
	int64_t x215 = 143601864904LL;
	int64_t x216 = -7337366LL;

	t51 = (((x213==x214)==x215)%x216);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x217 = INT16_MAX;
	volatile uint8_t x219 = UINT8_MAX;
	int16_t x220 = -1;

	t52 = (((x217==x218)==x219)%x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x221 = -1;
	static uint16_t x222 = 13802U;
	static uint64_t x223 = UINT64_MAX;
	static volatile uint64_t x224 = UINT64_MAX;
	uint64_t t53 = 425862LLU;

	t53 = (((x221==x222)==x223)%x224);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x225 = 13U;
	int8_t x227 = -10;
	int8_t x228 = 20;

	t54 = (((x225==x226)==x227)%x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x229 = UINT16_MAX;
	int64_t x230 = INT64_MAX;
	uint16_t x232 = 7669U;
	volatile int32_t t55 = -35;

	t55 = (((x229==x230)==x231)%x232);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x233 = UINT32_MAX;
	int16_t x235 = INT16_MIN;
	uint64_t x236 = 127017640425LLU;
	uint64_t t56 = 553839LLU;

	t56 = (((x233==x234)==x235)%x236);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x238 = 47;
	int8_t x239 = INT8_MIN;
	volatile int64_t x240 = INT64_MAX;
	int64_t t57 = -108248404387LL;

	t57 = (((x237==x238)==x239)%x240);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x241 = INT8_MIN;
	int64_t x242 = INT64_MIN;
	int8_t x243 = 17;
	int32_t t58 = 10618;

	t58 = (((x241==x242)==x243)%x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x246 = -5621LL;
	static int16_t x247 = -113;
	static volatile int32_t t59 = 243831356;

	t59 = (((x245==x246)==x247)%x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x249 = 421399109LLU;
	uint32_t x251 = 2318U;
	volatile int16_t x252 = -1;
	volatile int32_t t60 = -1;

	t60 = (((x249==x250)==x251)%x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x253 = 0U;
	static volatile int32_t x254 = -111;
	int64_t x255 = INT64_MAX;
	volatile int32_t t61 = 0;

	t61 = (((x253==x254)==x255)%x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x259 = 27486LL;
	uint64_t x260 = 271925027LLU;
	volatile uint64_t t62 = 215882LLU;

	t62 = (((x257==x258)==x259)%x260);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x261 = 30U;
	int32_t x264 = 9;
	int32_t t63 = -2;

	t63 = (((x261==x262)==x263)%x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x269 = 818512369U;
	uint64_t x272 = 685609211LLU;
	uint64_t t64 = 2LLU;

	t64 = (((x269==x270)==x271)%x272);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x273 = -12946;
	int8_t x275 = INT8_MIN;
	int8_t x276 = -26;
	static int32_t t65 = 3;

	t65 = (((x273==x274)==x275)%x276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint64_t x277 = 6066416LLU;
	uint64_t x278 = 141176102059LLU;
	uint8_t x279 = UINT8_MAX;
	uint64_t x280 = 6895198LLU;
	uint64_t t66 = 17787510652LLU;

	t66 = (((x277==x278)==x279)%x280);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x281 = 17LLU;
	volatile int64_t x282 = INT64_MIN;
	volatile int32_t x283 = INT32_MIN;
	uint32_t x284 = UINT32_MAX;
	uint32_t t67 = 588U;

	t67 = (((x281==x282)==x283)%x284);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x285 = -1;
	int8_t x286 = INT8_MIN;
	int64_t x287 = INT64_MIN;
	uint8_t x288 = UINT8_MAX;
	volatile int32_t t68 = 341585;

	t68 = (((x285==x286)==x287)%x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x290 = -1;
	int8_t x291 = INT8_MAX;
	int64_t x292 = 3729039771975LL;
	static volatile int64_t t69 = 1642496608867050LL;

	t69 = (((x289==x290)==x291)%x292);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x293 = -1;
	int16_t x294 = -1;
	uint64_t x295 = 29475168LLU;
	int32_t t70 = -265681898;

	t70 = (((x293==x294)==x295)%x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x297 = -1;
	uint16_t x298 = 6953U;
	volatile int64_t x299 = -46LL;
	static int32_t x300 = INT32_MAX;

	t71 = (((x297==x298)==x299)%x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x301 = INT16_MIN;
	int32_t x302 = -32508456;
	int8_t x303 = INT8_MIN;
	int64_t x304 = 9854881LL;
	static int64_t t72 = 2315123LL;

	t72 = (((x301==x302)==x303)%x304);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x305 = UINT32_MAX;
	volatile int32_t x306 = 840488679;
	int16_t x308 = INT16_MIN;
	volatile int32_t t73 = 643;

	t73 = (((x305==x306)==x307)%x308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x309 = INT16_MIN;
	static int8_t x311 = -1;
	int16_t x312 = -1;
	volatile int32_t t74 = -146289305;

	t74 = (((x309==x310)==x311)%x312);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x313 = -1;
	volatile uint16_t x314 = UINT16_MAX;
	uint8_t x315 = UINT8_MAX;
	static volatile int32_t t75 = -195331112;

	t75 = (((x313==x314)==x315)%x316);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x317 = 188;
	int8_t x318 = INT8_MIN;
	volatile int64_t x319 = 179034391821549207LL;
	uint64_t t76 = 18LLU;

	t76 = (((x317==x318)==x319)%x320);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x321 = -1;
	uint16_t x322 = 255U;
	int32_t x323 = INT32_MAX;
	uint8_t x324 = 3U;

	t77 = (((x321==x322)==x323)%x324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x325 = INT16_MIN;
	int16_t x326 = -1;
	volatile int32_t x327 = INT32_MAX;
	int32_t x328 = 1769886;
	volatile int32_t t78 = 3;

	t78 = (((x325==x326)==x327)%x328);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x331 = INT32_MIN;
	static volatile int32_t x332 = -1;
	int32_t t79 = 12971;

	t79 = (((x329==x330)==x331)%x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x334 = -6433;
	static uint32_t x335 = UINT32_MAX;
	int64_t x336 = -15693868457617097LL;
	int64_t t80 = -147LL;

	t80 = (((x333==x334)==x335)%x336);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint8_t x337 = UINT8_MAX;
	int16_t x338 = INT16_MIN;
	static int8_t x339 = INT8_MAX;
	volatile int64_t t81 = -893007938704744LL;

	t81 = (((x337==x338)==x339)%x340);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x341 = 648048401503145LLU;
	int16_t x342 = -1;
	uint8_t x343 = 122U;

	t82 = (((x341==x342)==x343)%x344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x345 = UINT64_MAX;
	uint8_t x346 = UINT8_MAX;
	int8_t x348 = INT8_MIN;
	volatile int32_t t83 = -53319128;

	t83 = (((x345==x346)==x347)%x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x349 = -94;
	static int16_t x350 = INT16_MAX;
	static int16_t x352 = INT16_MIN;
	volatile int32_t t84 = -437887;

	t84 = (((x349==x350)==x351)%x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x353 = 3351U;
	int64_t x354 = -783839433047924200LL;
	static volatile int16_t x355 = -1;
	static int16_t x356 = -16;
	int32_t t85 = 10206342;

	t85 = (((x353==x354)==x355)%x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x357 = -5LL;
	volatile int8_t x358 = INT8_MAX;
	volatile int32_t t86 = 3041004;

	t86 = (((x357==x358)==x359)%x360);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x362 = 6;
	static uint8_t x363 = 20U;
	uint64_t x364 = 115954518LLU;
	uint64_t t87 = 14273725030LLU;

	t87 = (((x361==x362)==x363)%x364);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x365 = 1303U;
	uint16_t x366 = UINT16_MAX;
	int64_t x367 = INT64_MIN;
	int8_t x368 = 2;

	t88 = (((x365==x366)==x367)%x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x371 = UINT8_MAX;
	volatile uint32_t t89 = 44U;

	t89 = (((x369==x370)==x371)%x372);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x373 = 0;
	int16_t x374 = INT16_MIN;
	uint32_t x375 = 42U;
	int8_t x376 = INT8_MAX;
	static volatile int32_t t90 = 0;

	t90 = (((x373==x374)==x375)%x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x377 = 41U;
	volatile int16_t x378 = INT16_MIN;
	static int64_t x379 = -200508187LL;
	static uint32_t x380 = 5U;

	t91 = (((x377==x378)==x379)%x380);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x381 = INT8_MAX;
	volatile uint64_t x383 = 76307829LLU;
	volatile int64_t t92 = 1950485081521915LL;

	t92 = (((x381==x382)==x383)%x384);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x385 = 44U;
	uint16_t x386 = 4U;
	uint64_t x387 = UINT64_MAX;
	int16_t x388 = INT16_MAX;
	int32_t t93 = -24;

	t93 = (((x385==x386)==x387)%x388);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x389 = 11469734771092LL;
	int32_t x390 = -27357344;
	uint64_t x391 = 8631584521381LLU;
	static int64_t x392 = INT64_MIN;
	volatile int64_t t94 = 25798005343340LL;

	t94 = (((x389==x390)==x391)%x392);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x393 = UINT8_MAX;
	int64_t x394 = -55222238LL;
	uint32_t t95 = 26U;

	t95 = (((x393==x394)==x395)%x396);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x397 = -297808630;
	volatile int32_t x398 = INT32_MIN;
	uint32_t x399 = 4U;
	int32_t t96 = -93297152;

	t96 = (((x397==x398)==x399)%x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x401 = 48624U;
	int64_t x402 = INT64_MIN;
	int8_t x403 = INT8_MAX;
	static uint32_t x404 = 3U;
	volatile uint32_t t97 = 106U;

	t97 = (((x401==x402)==x403)%x404);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x405 = INT8_MIN;
	int64_t x406 = 87124LL;
	static volatile uint16_t x407 = UINT16_MAX;
	int16_t x408 = -1;
	int32_t t98 = 0;

	t98 = (((x405==x406)==x407)%x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x409 = -1;
	volatile int16_t x410 = 5;
	uint32_t x412 = UINT32_MAX;
	volatile uint32_t t99 = 133122966U;

	t99 = (((x409==x410)==x411)%x412);

	if (t99 != 0U) { NG(); } else { ; }
	
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


    return 0;
}

