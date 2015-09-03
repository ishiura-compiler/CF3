#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -1;
int32_t t0 = 21;
volatile uint8_t x9 = 29U;
uint8_t x12 = UINT8_MAX;
uint16_t x13 = 10020U;
int64_t x26 = -1LL;
volatile int8_t x31 = INT8_MIN;
int32_t x42 = -1;
int64_t x43 = INT64_MIN;
volatile uint8_t x44 = 24U;
volatile int64_t x47 = INT64_MIN;
int32_t t9 = -58759;
int16_t x52 = -4;
uint64_t x54 = UINT64_MAX;
int64_t x63 = -1LL;
static int32_t x69 = INT32_MIN;
uint64_t x76 = 16011LLU;
int8_t x83 = INT8_MIN;
static int8_t x84 = -40;
volatile int32_t t17 = 1;
uint16_t x87 = 7U;
int64_t x88 = 26582304987478LL;
volatile int32_t t18 = -3521;
static int64_t x89 = -1LL;
uint16_t x90 = 368U;
int16_t x97 = -1;
int64_t x99 = INT64_MAX;
static uint8_t x100 = 15U;
uint16_t x102 = UINT16_MAX;
uint8_t x117 = 7U;
volatile int32_t x118 = -2032;
int32_t x148 = INT32_MIN;
int8_t x155 = -1;
uint32_t x165 = UINT32_MAX;
int16_t x170 = -27;
uint64_t x175 = 3244676776212LLU;
static volatile int32_t t39 = -96954486;
static uint32_t x195 = UINT32_MAX;
int32_t x196 = INT32_MIN;
int32_t x201 = -65541632;
volatile int8_t x202 = INT8_MAX;
uint16_t x215 = 10U;
static volatile int16_t x216 = INT16_MAX;
volatile int32_t t44 = 1;
int16_t x218 = -3934;
int32_t t45 = 58454105;
int16_t x223 = INT16_MIN;
static uint8_t x228 = 102U;
int16_t x229 = INT16_MIN;
volatile uint16_t x232 = UINT16_MAX;
uint8_t x237 = 51U;
int32_t x240 = -2319;
volatile uint8_t x247 = 2U;
int8_t x250 = 0;
int16_t x266 = -639;
int8_t x267 = -28;
int32_t t56 = -111;
int8_t x272 = 4;
volatile int32_t t59 = -67256;
uint32_t x297 = 86992U;
int8_t x298 = INT8_MIN;
int16_t x300 = -1;
volatile int32_t x305 = 2819376;
int8_t x316 = -1;
static uint16_t x317 = 7915U;
static uint8_t x323 = 13U;
volatile int32_t t67 = -3;
volatile int32_t x328 = INT32_MAX;
int16_t x333 = -1;
volatile uint16_t x341 = 1797U;
int8_t x354 = 8;
volatile uint16_t x356 = 16143U;
int32_t t73 = 4808142;
int32_t x358 = INT32_MAX;
volatile uint32_t x360 = 16U;
int32_t t75 = 99;
static uint32_t x366 = 84U;
int32_t x387 = INT32_MAX;
uint32_t x395 = 1655756877U;
volatile int16_t x396 = INT16_MIN;
volatile uint8_t x403 = 5U;
static int32_t t84 = 437506964;
int32_t x409 = 2347247;
volatile int8_t x418 = INT8_MIN;
int64_t x419 = -68343474979LL;
volatile uint16_t x420 = UINT16_MAX;
static volatile int8_t x421 = 0;
int16_t x425 = -6;
int8_t x428 = INT8_MIN;
uint8_t x432 = UINT8_MAX;
static uint8_t x433 = UINT8_MAX;
int32_t t91 = -16110129;
int16_t x438 = 1390;
volatile int32_t x440 = INT32_MAX;
volatile int32_t t92 = 52360787;
int16_t x444 = -1;
static volatile int16_t x447 = -3371;
int32_t x450 = INT32_MAX;
volatile uint64_t x452 = UINT64_MAX;
uint32_t x453 = 1583854U;
volatile int16_t x460 = 16328;
uint64_t x467 = UINT64_MAX;
int64_t x468 = INT64_MIN;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int16_t x3 = 384;
	int16_t x4 = -1;

	t0 = ((x1%(x2-x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	static int8_t x6 = INT8_MIN;
	int64_t x7 = INT64_MIN;
	uint64_t x8 = 133362722LLU;
	volatile int32_t t1 = -416509;

	t1 = ((x5%(x6-x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MAX;
	int64_t x11 = 3LL;
	static volatile int32_t t2 = 485;

	t2 = ((x9%(x10-x11))<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x14 = 66;
	uint64_t x15 = 435266501157633774LLU;
	static int64_t x16 = -1LL;
	volatile int32_t t3 = -5036;

	t3 = ((x13%(x14-x15))<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = INT32_MIN;
	int8_t x27 = INT8_MIN;
	static uint64_t x28 = 4906834223219224520LLU;
	volatile int32_t t4 = -910636;

	t4 = ((x25%(x26-x27))<x28);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x29 = INT8_MIN;
	volatile int8_t x30 = 6;
	int64_t x32 = INT64_MIN;
	int32_t t5 = 38425;

	t5 = ((x29%(x30-x31))<x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x33 = -1;
	static int64_t x34 = INT64_MAX;
	uint16_t x35 = UINT16_MAX;
	uint16_t x36 = UINT16_MAX;
	volatile int32_t t6 = 6;

	t6 = ((x33%(x34-x35))<x36);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x37 = -1;
	uint64_t x38 = UINT64_MAX;
	int64_t x39 = INT64_MIN;
	uint8_t x40 = UINT8_MAX;
	int32_t t7 = 68;

	t7 = ((x37%(x38-x39))<x40);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x41 = 108296856301231909LL;
	volatile int32_t t8 = -367;

	t8 = ((x41%(x42-x43))<x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = 3U;
	volatile int64_t x46 = -1LL;
	int64_t x48 = -1LL;

	t9 = ((x45%(x46-x47))<x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = INT32_MIN;
	int8_t x50 = -1;
	int16_t x51 = 7;
	volatile int32_t t10 = -375101;

	t10 = ((x49%(x50-x51))<x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = -1LL;
	uint64_t x55 = 505421395LLU;
	int16_t x56 = -1;
	int32_t t11 = 7298670;

	t11 = ((x53%(x54-x55))<x56);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = INT8_MAX;
	int64_t x58 = 1153886410749LL;
	static uint64_t x59 = 3886752262427050856LLU;
	int16_t x60 = -1;
	volatile int32_t t12 = 41269522;

	t12 = ((x57%(x58-x59))<x60);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x61 = 1657279836545189433LL;
	static int32_t x62 = INT32_MAX;
	volatile int8_t x64 = 11;
	int32_t t13 = -973;

	t13 = ((x61%(x62-x63))<x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x70 = INT64_MIN;
	int8_t x71 = -3;
	volatile int64_t x72 = INT64_MIN;
	int32_t t14 = 53832381;

	t14 = ((x69%(x70-x71))<x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x73 = UINT64_MAX;
	static int8_t x74 = 52;
	uint32_t x75 = 30U;
	int32_t t15 = -6703;

	t15 = ((x73%(x74-x75))<x76);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = INT16_MIN;
	int64_t x78 = INT64_MIN;
	uint64_t x79 = UINT64_MAX;
	uint64_t x80 = 357569232LLU;
	int32_t t16 = 0;

	t16 = ((x77%(x78-x79))<x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = -3;
	uint16_t x82 = UINT16_MAX;

	t17 = ((x81%(x82-x83))<x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = -1;
	static volatile int8_t x86 = -1;

	t18 = ((x85%(x86-x87))<x88);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x91 = INT16_MIN;
	uint64_t x92 = 67298425339LLU;
	int32_t t19 = 60924151;

	t19 = ((x89%(x90-x91))<x92);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x93 = INT64_MAX;
	int16_t x94 = INT16_MIN;
	uint32_t x95 = 2U;
	int32_t x96 = INT32_MIN;
	volatile int32_t t20 = 47206;

	t20 = ((x93%(x94-x95))<x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x98 = UINT64_MAX;
	int32_t t21 = -113118696;

	t21 = ((x97%(x98-x99))<x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = 206878143177119LL;
	int16_t x103 = INT16_MIN;
	uint16_t x104 = 7U;
	int32_t t22 = -1789;

	t22 = ((x101%(x102-x103))<x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x105 = 19U;
	int16_t x106 = -419;
	uint64_t x107 = 3LLU;
	static int16_t x108 = -1;
	int32_t t23 = -11635437;

	t23 = ((x105%(x106-x107))<x108);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x109 = UINT32_MAX;
	static uint16_t x110 = 5714U;
	volatile int64_t x111 = INT64_MAX;
	uint8_t x112 = UINT8_MAX;
	volatile int32_t t24 = -6602;

	t24 = ((x109%(x110-x111))<x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = 542581;
	volatile int64_t x114 = INT64_MIN;
	volatile int64_t x115 = -38016852148LL;
	static int32_t x116 = INT32_MAX;
	volatile int32_t t25 = 136;

	t25 = ((x113%(x114-x115))<x116);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x119 = INT64_MIN;
	static int32_t x120 = INT32_MAX;
	int32_t t26 = -1;

	t26 = ((x117%(x118-x119))<x120);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x121 = INT8_MAX;
	int8_t x122 = INT8_MAX;
	uint32_t x123 = 575U;
	static int8_t x124 = INT8_MIN;
	volatile int32_t t27 = 2132;

	t27 = ((x121%(x122-x123))<x124);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x125 = 48LLU;
	uint32_t x126 = UINT32_MAX;
	static volatile uint32_t x127 = 17U;
	uint8_t x128 = 80U;
	int32_t t28 = -108198114;

	t28 = ((x125%(x126-x127))<x128);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x129 = INT16_MIN;
	int64_t x130 = 1021LL;
	int64_t x131 = 1603685LL;
	static int64_t x132 = INT64_MAX;
	volatile int32_t t29 = 5440173;

	t29 = ((x129%(x130-x131))<x132);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x141 = INT8_MIN;
	uint32_t x142 = 69U;
	int8_t x143 = -1;
	int16_t x144 = INT16_MIN;
	volatile int32_t t30 = 8514437;

	t30 = ((x141%(x142-x143))<x144);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x145 = 0U;
	int64_t x146 = 1LL;
	int16_t x147 = -1;
	volatile int32_t t31 = -278145;

	t31 = ((x145%(x146-x147))<x148);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x149 = -19;
	uint16_t x150 = 58U;
	int64_t x151 = 3335435824325977124LL;
	volatile int64_t x152 = -180210516LL;
	int32_t t32 = 512876294;

	t32 = ((x149%(x150-x151))<x152);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x153 = INT64_MIN;
	static uint64_t x154 = 11LLU;
	static int16_t x156 = INT16_MIN;
	int32_t t33 = 1026187594;

	t33 = ((x153%(x154-x155))<x156);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x166 = INT64_MAX;
	volatile int8_t x167 = 24;
	static volatile uint8_t x168 = UINT8_MAX;
	volatile int32_t t34 = -58215697;

	t34 = ((x165%(x166-x167))<x168);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x169 = -1LL;
	uint16_t x171 = 3U;
	volatile uint8_t x172 = 8U;
	volatile int32_t t35 = -881;

	t35 = ((x169%(x170-x171))<x172);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x173 = -1LL;
	uint32_t x174 = 43128U;
	volatile int8_t x176 = INT8_MIN;
	volatile int32_t t36 = 0;

	t36 = ((x173%(x174-x175))<x176);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x177 = 13244138;
	volatile int64_t x178 = 383132LL;
	volatile int32_t x179 = -1;
	static int32_t x180 = INT32_MAX;
	int32_t t37 = 0;

	t37 = ((x177%(x178-x179))<x180);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x185 = INT64_MAX;
	int64_t x186 = INT64_MAX;
	uint64_t x187 = UINT64_MAX;
	int8_t x188 = 10;
	volatile int32_t t38 = -15;

	t38 = ((x185%(x186-x187))<x188);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x189 = 1375U;
	static uint32_t x190 = 6740U;
	static int16_t x191 = INT16_MAX;
	volatile uint8_t x192 = 1U;

	t39 = ((x189%(x190-x191))<x192);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x193 = 54897550LL;
	uint16_t x194 = 65U;
	int32_t t40 = -49;

	t40 = ((x193%(x194-x195))<x196);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x197 = INT8_MAX;
	static int8_t x198 = -1;
	static int8_t x199 = INT8_MIN;
	static volatile int64_t x200 = -1LL;
	int32_t t41 = 72;

	t41 = ((x197%(x198-x199))<x200);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x203 = INT8_MIN;
	volatile int16_t x204 = 275;
	volatile int32_t t42 = 1639;

	t42 = ((x201%(x202-x203))<x204);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x205 = 4;
	int16_t x206 = -1;
	int8_t x207 = 1;
	volatile int16_t x208 = INT16_MIN;
	volatile int32_t t43 = -254;

	t43 = ((x205%(x206-x207))<x208);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x213 = -1;
	volatile int8_t x214 = INT8_MAX;

	t44 = ((x213%(x214-x215))<x216);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x217 = 42;
	int64_t x219 = -15515638634857158LL;
	int64_t x220 = 547361797334LL;

	t45 = ((x217%(x218-x219))<x220);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x221 = 1904911333213074LL;
	uint16_t x222 = UINT16_MAX;
	static volatile int16_t x224 = -1;
	static int32_t t46 = 237591022;

	t46 = ((x221%(x222-x223))<x224);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x225 = INT16_MIN;
	uint32_t x226 = 15581U;
	uint8_t x227 = UINT8_MAX;
	static int32_t t47 = 1;

	t47 = ((x225%(x226-x227))<x228);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x230 = 1102634230692498LLU;
	int32_t x231 = -1;
	int32_t t48 = 15887;

	t48 = ((x229%(x230-x231))<x232);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x233 = -1;
	int16_t x234 = INT16_MIN;
	volatile int8_t x235 = -16;
	int16_t x236 = INT16_MAX;
	volatile int32_t t49 = -8;

	t49 = ((x233%(x234-x235))<x236);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x238 = -1;
	int16_t x239 = INT16_MIN;
	int32_t t50 = -363;

	t50 = ((x237%(x238-x239))<x240);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x241 = 3;
	volatile uint64_t x242 = 3446344837155LLU;
	int64_t x243 = -4041036LL;
	int64_t x244 = INT64_MIN;
	int32_t t51 = 140264390;

	t51 = ((x241%(x242-x243))<x244);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x245 = 13LLU;
	int32_t x246 = -1;
	volatile int8_t x248 = INT8_MAX;
	int32_t t52 = 202918;

	t52 = ((x245%(x246-x247))<x248);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x249 = 1U;
	volatile int64_t x251 = -29075821239179148LL;
	volatile uint16_t x252 = UINT16_MAX;
	static int32_t t53 = -2090;

	t53 = ((x249%(x250-x251))<x252);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x253 = INT16_MIN;
	uint16_t x254 = 15533U;
	int8_t x255 = INT8_MIN;
	static int32_t x256 = -1;
	volatile int32_t t54 = -113453;

	t54 = ((x253%(x254-x255))<x256);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x261 = INT32_MIN;
	volatile int64_t x262 = -1051833974708LL;
	volatile int32_t x263 = INT32_MIN;
	static volatile int16_t x264 = INT16_MIN;
	int32_t t55 = -40;

	t55 = ((x261%(x262-x263))<x264);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x265 = UINT16_MAX;
	uint32_t x268 = 56U;

	t56 = ((x265%(x266-x267))<x268);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x269 = -6;
	uint64_t x270 = 506624076005560728LLU;
	static volatile uint8_t x271 = 6U;
	volatile int32_t t57 = 62296;

	t57 = ((x269%(x270-x271))<x272);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x273 = UINT8_MAX;
	int32_t x274 = -15166404;
	int8_t x275 = INT8_MAX;
	uint8_t x276 = 3U;
	volatile int32_t t58 = 26;

	t58 = ((x273%(x274-x275))<x276);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x281 = UINT8_MAX;
	int8_t x282 = INT8_MIN;
	int64_t x283 = -422089LL;
	int64_t x284 = 4175703204LL;

	t59 = ((x281%(x282-x283))<x284);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x285 = INT16_MIN;
	volatile int16_t x286 = INT16_MAX;
	uint64_t x287 = 31589426544871303LLU;
	uint16_t x288 = UINT16_MAX;
	volatile int32_t t60 = 1962975;

	t60 = ((x285%(x286-x287))<x288);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x293 = INT16_MIN;
	int32_t x294 = -1;
	uint8_t x295 = 109U;
	volatile uint32_t x296 = 287330512U;
	int32_t t61 = 1588830;

	t61 = ((x293%(x294-x295))<x296);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x299 = INT16_MIN;
	static int32_t t62 = -38040596;

	t62 = ((x297%(x298-x299))<x300);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x306 = INT16_MIN;
	int16_t x307 = -1;
	static int64_t x308 = INT64_MAX;
	static volatile int32_t t63 = 1966;

	t63 = ((x305%(x306-x307))<x308);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x309 = UINT64_MAX;
	int8_t x310 = -1;
	uint16_t x311 = 0U;
	static uint16_t x312 = 401U;
	volatile int32_t t64 = -232425175;

	t64 = ((x309%(x310-x311))<x312);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x313 = -8;
	int32_t x314 = -577;
	volatile uint64_t x315 = UINT64_MAX;
	int32_t t65 = -220711;

	t65 = ((x313%(x314-x315))<x316);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x318 = INT32_MIN;
	volatile int16_t x319 = -1;
	int8_t x320 = -37;
	static int32_t t66 = 51;

	t66 = ((x317%(x318-x319))<x320);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x321 = INT8_MIN;
	int16_t x322 = -638;
	int32_t x324 = 116898;

	t67 = ((x321%(x322-x323))<x324);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x325 = -10581639;
	volatile int64_t x326 = -1LL;
	static volatile uint16_t x327 = 1736U;
	volatile int32_t t68 = -3414416;

	t68 = ((x325%(x326-x327))<x328);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x334 = 45141;
	uint16_t x335 = UINT16_MAX;
	static uint32_t x336 = UINT32_MAX;
	static int32_t t69 = -1;

	t69 = ((x333%(x334-x335))<x336);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x337 = INT32_MIN;
	volatile uint16_t x338 = UINT16_MAX;
	int64_t x339 = INT64_MAX;
	static int8_t x340 = 61;
	volatile int32_t t70 = 1958356;

	t70 = ((x337%(x338-x339))<x340);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x342 = 78402751021756772LLU;
	int64_t x343 = INT64_MAX;
	int32_t x344 = -1;
	int32_t t71 = -18;

	t71 = ((x341%(x342-x343))<x344);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x349 = 137083U;
	int8_t x350 = INT8_MIN;
	static volatile uint32_t x351 = UINT32_MAX;
	uint16_t x352 = 1U;
	volatile int32_t t72 = -218442787;

	t72 = ((x349%(x350-x351))<x352);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x353 = -7;
	static int64_t x355 = -1512LL;

	t73 = ((x353%(x354-x355))<x356);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x357 = -1288;
	uint32_t x359 = 0U;
	static int32_t t74 = -319;

	t74 = ((x357%(x358-x359))<x360);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x361 = 3;
	uint64_t x362 = UINT64_MAX;
	volatile int8_t x363 = INT8_MIN;
	int16_t x364 = -1;

	t75 = ((x361%(x362-x363))<x364);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x365 = UINT64_MAX;
	volatile uint8_t x367 = UINT8_MAX;
	volatile int64_t x368 = -252918958303517LL;
	int32_t t76 = -4072;

	t76 = ((x365%(x366-x367))<x368);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x369 = INT32_MIN;
	static int32_t x370 = 0;
	int16_t x371 = INT16_MAX;
	int32_t x372 = INT32_MIN;
	static int32_t t77 = -1;

	t77 = ((x369%(x370-x371))<x372);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x377 = INT64_MIN;
	int16_t x378 = INT16_MAX;
	int8_t x379 = INT8_MIN;
	uint16_t x380 = UINT16_MAX;
	volatile int32_t t78 = -799268663;

	t78 = ((x377%(x378-x379))<x380);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x381 = 4166U;
	int64_t x382 = 1LL;
	volatile int64_t x383 = 805549704722LL;
	int32_t x384 = INT32_MAX;
	int32_t t79 = -8389;

	t79 = ((x381%(x382-x383))<x384);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x385 = 987U;
	static uint16_t x386 = 10002U;
	int16_t x388 = INT16_MIN;
	volatile int32_t t80 = -114;

	t80 = ((x385%(x386-x387))<x388);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x389 = -1;
	uint8_t x390 = 6U;
	int16_t x391 = -2086;
	int32_t x392 = -2530182;
	int32_t t81 = 1;

	t81 = ((x389%(x390-x391))<x392);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x393 = INT8_MIN;
	uint64_t x394 = 177033004LLU;
	volatile int32_t t82 = 3884612;

	t82 = ((x393%(x394-x395))<x396);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x397 = INT8_MIN;
	int32_t x398 = -1;
	int16_t x399 = -956;
	volatile uint32_t x400 = 213U;
	static int32_t t83 = -956;

	t83 = ((x397%(x398-x399))<x400);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x401 = UINT8_MAX;
	volatile uint32_t x402 = 4U;
	int8_t x404 = INT8_MIN;

	t84 = ((x401%(x402-x403))<x404);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x405 = 61783192LL;
	int16_t x406 = -1;
	static volatile uint16_t x407 = UINT16_MAX;
	int64_t x408 = INT64_MIN;
	int32_t t85 = 5;

	t85 = ((x405%(x406-x407))<x408);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x410 = -1;
	static volatile int32_t x411 = -163;
	uint32_t x412 = UINT32_MAX;
	static int32_t t86 = -32015285;

	t86 = ((x409%(x410-x411))<x412);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x417 = 1154U;
	static volatile int32_t t87 = -128570;

	t87 = ((x417%(x418-x419))<x420);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint8_t x422 = UINT8_MAX;
	uint32_t x423 = UINT32_MAX;
	volatile int64_t x424 = 14288182LL;
	int32_t t88 = 426;

	t88 = ((x421%(x422-x423))<x424);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x426 = INT64_MIN;
	int8_t x427 = INT8_MIN;
	volatile int32_t t89 = 1;

	t89 = ((x425%(x426-x427))<x428);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x429 = INT64_MIN;
	int32_t x430 = INT32_MIN;
	int64_t x431 = INT64_MIN;
	int32_t t90 = -89;

	t90 = ((x429%(x430-x431))<x432);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x434 = INT16_MIN;
	uint64_t x435 = 403641649871LLU;
	volatile uint64_t x436 = UINT64_MAX;

	t91 = ((x433%(x434-x435))<x436);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x437 = -15;
	int16_t x439 = -1;

	t92 = ((x437%(x438-x439))<x440);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x441 = 56U;
	int8_t x442 = -3;
	uint64_t x443 = UINT64_MAX;
	int32_t t93 = -492;

	t93 = ((x441%(x442-x443))<x444);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x445 = UINT8_MAX;
	uint32_t x446 = UINT32_MAX;
	volatile int64_t x448 = -1LL;
	int32_t t94 = -2923976;

	t94 = ((x445%(x446-x447))<x448);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x449 = INT8_MAX;
	uint32_t x451 = 1561U;
	static volatile int32_t t95 = 140961036;

	t95 = ((x449%(x450-x451))<x452);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x454 = -437024997601LL;
	int8_t x455 = -1;
	static int64_t x456 = INT64_MIN;
	int32_t t96 = 5525;

	t96 = ((x453%(x454-x455))<x456);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x457 = 14U;
	volatile int16_t x458 = -233;
	int64_t x459 = -1LL;
	int32_t t97 = 259609;

	t97 = ((x457%(x458-x459))<x460);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x461 = INT32_MIN;
	int32_t x462 = INT32_MIN;
	uint32_t x463 = 87088157U;
	int16_t x464 = -1;
	static int32_t t98 = 1894797;

	t98 = ((x461%(x462-x463))<x464);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x465 = INT32_MIN;
	uint64_t x466 = 823030LLU;
	int32_t t99 = -641;

	t99 = ((x465%(x466-x467))<x468);

	if (t99 != 1) { NG(); } else { ; }
	
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

