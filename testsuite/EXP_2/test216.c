#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x10 = 10672520LLU;
volatile uint64_t x22 = UINT64_MAX;
int32_t x23 = INT32_MAX;
volatile int16_t x25 = 6;
volatile int32_t x36 = 11107;
volatile int32_t t5 = -333050;
int8_t x40 = INT8_MIN;
volatile int32_t t7 = -2715760;
int32_t x52 = INT32_MIN;
volatile uint32_t x64 = 123U;
int64_t x66 = -1LL;
static int32_t x68 = INT32_MIN;
int16_t x73 = INT16_MIN;
static volatile int32_t t13 = 2;
int16_t x80 = -1;
volatile uint32_t x81 = 4444022U;
uint64_t x99 = 7LLU;
int32_t t18 = -3552;
uint64_t x111 = UINT64_MAX;
volatile int32_t t19 = -203176350;
uint64_t x113 = 939435000878LLU;
static volatile uint32_t x114 = 494U;
volatile int32_t t20 = -3571;
int8_t x118 = INT8_MIN;
volatile int16_t x119 = INT16_MIN;
int64_t x128 = 17LL;
int32_t t23 = 5952;
static uint32_t x134 = UINT32_MAX;
int32_t t25 = 40063;
int8_t x139 = INT8_MAX;
int16_t x140 = INT16_MIN;
int8_t x146 = INT8_MAX;
int8_t x154 = -1;
int16_t x163 = -413;
volatile int32_t t30 = -542265466;
int64_t x170 = INT64_MIN;
int16_t x174 = INT16_MIN;
static int64_t x176 = INT64_MIN;
volatile int32_t t32 = 493;
int16_t x177 = -3;
int8_t x178 = INT8_MAX;
uint8_t x190 = 2U;
uint32_t x194 = 319990699U;
uint16_t x200 = UINT16_MAX;
volatile int32_t t37 = -5635211;
volatile int8_t x204 = -3;
int16_t x215 = -1;
uint16_t x216 = 907U;
static int64_t x227 = -1LL;
int64_t x228 = INT64_MIN;
int8_t x237 = INT8_MIN;
int32_t x239 = INT32_MAX;
uint64_t x242 = UINT64_MAX;
static volatile int32_t t45 = 1921;
int8_t x255 = -2;
uint32_t x263 = UINT32_MAX;
static uint32_t x265 = UINT32_MAX;
uint16_t x267 = UINT16_MAX;
static int32_t x275 = INT32_MIN;
volatile int64_t x285 = INT64_MIN;
int32_t x289 = 10;
int64_t x292 = INT64_MIN;
uint8_t x293 = 5U;
static int16_t x297 = INT16_MAX;
static int32_t x300 = INT32_MIN;
int32_t t59 = -31;
uint8_t x317 = 0U;
uint64_t x318 = 8396107LLU;
int16_t x323 = INT16_MIN;
int64_t x326 = 284LL;
static int32_t t64 = -82;
int8_t x337 = INT8_MAX;
static int32_t x339 = 5678752;
static uint64_t x341 = UINT64_MAX;
int64_t x354 = 339405LL;
static int32_t x359 = INT32_MAX;
int32_t t71 = 3;
int64_t x361 = INT64_MIN;
uint8_t x362 = 19U;
int8_t x369 = INT8_MIN;
int8_t x372 = INT8_MIN;
static uint16_t x374 = 12U;
int32_t x378 = INT32_MIN;
static int32_t t77 = -149686041;
int64_t x390 = INT64_MAX;
uint8_t x391 = 5U;
int32_t x396 = INT32_MAX;
volatile int32_t t79 = 3395;
static volatile int32_t t82 = -237887710;
int64_t x431 = INT64_MIN;
uint16_t x449 = 31822U;
int16_t x452 = INT16_MIN;
uint32_t x458 = UINT32_MAX;
int16_t x461 = INT16_MIN;
int8_t x466 = INT8_MIN;
static int16_t x467 = -1;
int16_t x472 = -1;
volatile int32_t t96 = 29957;
int8_t x477 = -1;
int16_t x484 = INT16_MIN;
int8_t x485 = INT8_MIN;
static int32_t t99 = 6;


void f0(void) {
	int16_t x9 = INT16_MAX;
	uint64_t x11 = 58070842192031LLU;
	uint16_t x12 = UINT16_MAX;
	volatile int32_t t0 = -206278221;

	t0 = ((x9/(x10-x11))==x12);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x17 = -19;
	static uint64_t x18 = UINT64_MAX;
	uint32_t x19 = UINT32_MAX;
	int8_t x20 = 3;
	static volatile int32_t t1 = 222738;

	t1 = ((x17/(x18-x19))==x20);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x21 = INT64_MIN;
	int64_t x24 = INT64_MAX;
	int32_t t2 = -5651109;

	t2 = ((x21/(x22-x23))==x24);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x26 = INT16_MIN;
	uint8_t x27 = 4U;
	volatile uint64_t x28 = 17213120368323394LLU;
	static volatile int32_t t3 = 37137;

	t3 = ((x25/(x26-x27))==x28);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x29 = -1;
	static volatile uint64_t x30 = 19626945970LLU;
	int32_t x31 = INT32_MIN;
	int8_t x32 = INT8_MIN;
	int32_t t4 = 202630;

	t4 = ((x29/(x30-x31))==x32);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x33 = 6170451256LLU;
	uint32_t x34 = 354U;
	static int16_t x35 = -1;

	t5 = ((x33/(x34-x35))==x36);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x37 = INT16_MIN;
	int16_t x38 = -426;
	int32_t x39 = -1;
	int32_t t6 = 8644484;

	t6 = ((x37/(x38-x39))==x40);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x41 = 14;
	static int8_t x42 = -6;
	int64_t x43 = 83721LL;
	static int8_t x44 = 0;

	t7 = ((x41/(x42-x43))==x44);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x45 = INT32_MIN;
	int64_t x46 = INT64_MAX;
	uint32_t x47 = 1U;
	uint32_t x48 = 16678491U;
	volatile int32_t t8 = 1913;

	t8 = ((x45/(x46-x47))==x48);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = INT8_MAX;
	uint32_t x50 = UINT32_MAX;
	int32_t x51 = INT32_MIN;
	int32_t t9 = 5285861;

	t9 = ((x49/(x50-x51))==x52);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x61 = 56U;
	int8_t x62 = 4;
	static volatile int8_t x63 = -1;
	volatile int32_t t10 = 67462511;

	t10 = ((x61/(x62-x63))==x64);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x65 = 559475;
	volatile int32_t x67 = 1;
	int32_t t11 = 50;

	t11 = ((x65/(x66-x67))==x68);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x69 = INT8_MAX;
	uint32_t x70 = 22437U;
	volatile int64_t x71 = -57298LL;
	int8_t x72 = 0;
	int32_t t12 = 187690;

	t12 = ((x69/(x70-x71))==x72);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x74 = INT16_MIN;
	int32_t x75 = INT32_MIN;
	int32_t x76 = -1;

	t13 = ((x73/(x74-x75))==x76);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x77 = INT64_MIN;
	uint32_t x78 = UINT32_MAX;
	uint8_t x79 = UINT8_MAX;
	volatile int32_t t14 = 729602;

	t14 = ((x77/(x78-x79))==x80);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x82 = 7U;
	int16_t x83 = -751;
	int8_t x84 = 0;
	volatile int32_t t15 = -3;

	t15 = ((x81/(x82-x83))==x84);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x89 = INT32_MAX;
	int8_t x90 = INT8_MIN;
	int16_t x91 = INT16_MIN;
	int8_t x92 = -1;
	int32_t t16 = 2750415;

	t16 = ((x89/(x90-x91))==x92);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x93 = INT64_MAX;
	int32_t x94 = 73;
	uint8_t x95 = UINT8_MAX;
	int8_t x96 = -1;
	static volatile int32_t t17 = -843639604;

	t17 = ((x93/(x94-x95))==x96);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x97 = -137088LL;
	int8_t x98 = INT8_MIN;
	static int64_t x100 = INT64_MIN;

	t18 = ((x97/(x98-x99))==x100);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x109 = INT32_MIN;
	static int64_t x110 = INT64_MIN;
	static uint8_t x112 = UINT8_MAX;

	t19 = ((x109/(x110-x111))==x112);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x115 = 2U;
	int8_t x116 = -3;

	t20 = ((x113/(x114-x115))==x116);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x117 = -1;
	int64_t x120 = 23780879540172212LL;
	volatile int32_t t21 = 2;

	t21 = ((x117/(x118-x119))==x120);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x121 = UINT64_MAX;
	volatile int64_t x122 = INT64_MIN;
	volatile uint64_t x123 = UINT64_MAX;
	int32_t x124 = 1681;
	volatile int32_t t22 = 16528479;

	t22 = ((x121/(x122-x123))==x124);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x125 = UINT16_MAX;
	uint64_t x126 = 1691387976047659LLU;
	volatile int16_t x127 = -375;

	t23 = ((x125/(x126-x127))==x128);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x129 = UINT64_MAX;
	static uint64_t x130 = 2LLU;
	static uint64_t x131 = UINT64_MAX;
	int64_t x132 = -1LL;
	int32_t t24 = -3815969;

	t24 = ((x129/(x130-x131))==x132);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x133 = 475983761LL;
	int64_t x135 = -14700906336995595LL;
	static int64_t x136 = 2501911389162665015LL;

	t25 = ((x133/(x134-x135))==x136);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x137 = -13811;
	int8_t x138 = -26;
	static int32_t t26 = 2791674;

	t26 = ((x137/(x138-x139))==x140);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x145 = INT8_MIN;
	int8_t x147 = INT8_MIN;
	static int16_t x148 = INT16_MIN;
	static int32_t t27 = 3177755;

	t27 = ((x145/(x146-x147))==x148);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x149 = INT16_MIN;
	volatile int16_t x150 = INT16_MAX;
	static volatile uint16_t x151 = 16436U;
	int16_t x152 = INT16_MIN;
	static int32_t t28 = 1;

	t28 = ((x149/(x150-x151))==x152);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x153 = INT64_MIN;
	int64_t x155 = 1676587537268326LL;
	static int8_t x156 = INT8_MAX;
	volatile int32_t t29 = 308526;

	t29 = ((x153/(x154-x155))==x156);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x161 = 1992U;
	int64_t x162 = INT64_MIN;
	volatile uint8_t x164 = 16U;

	t30 = ((x161/(x162-x163))==x164);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x169 = 359336;
	int32_t x171 = -1;
	int8_t x172 = INT8_MIN;
	int32_t t31 = -6997;

	t31 = ((x169/(x170-x171))==x172);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x173 = UINT32_MAX;
	static int32_t x175 = INT32_MIN;

	t32 = ((x173/(x174-x175))==x176);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x179 = 0U;
	int64_t x180 = INT64_MIN;
	volatile int32_t t33 = -1914;

	t33 = ((x177/(x178-x179))==x180);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x181 = INT8_MAX;
	static volatile int8_t x182 = -41;
	uint64_t x183 = UINT64_MAX;
	int16_t x184 = -1;
	static volatile int32_t t34 = -59517;

	t34 = ((x181/(x182-x183))==x184);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x189 = -1;
	int64_t x191 = INT64_MAX;
	int32_t x192 = -1;
	int32_t t35 = -46227;

	t35 = ((x189/(x190-x191))==x192);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x193 = 306U;
	static int32_t x195 = -17;
	int8_t x196 = INT8_MIN;
	volatile int32_t t36 = 7;

	t36 = ((x193/(x194-x195))==x196);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x197 = INT64_MIN;
	static volatile uint16_t x198 = 8U;
	static int8_t x199 = INT8_MIN;

	t37 = ((x197/(x198-x199))==x200);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x201 = 765U;
	uint32_t x202 = 15387U;
	uint8_t x203 = 1U;
	volatile int32_t t38 = -3;

	t38 = ((x201/(x202-x203))==x204);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x209 = INT64_MIN;
	volatile int8_t x210 = 1;
	int8_t x211 = -27;
	static int16_t x212 = -1;
	int32_t t39 = -121286;

	t39 = ((x209/(x210-x211))==x212);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x213 = INT64_MIN;
	volatile uint8_t x214 = UINT8_MAX;
	volatile int32_t t40 = 670377;

	t40 = ((x213/(x214-x215))==x216);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x221 = INT16_MIN;
	uint16_t x222 = 11498U;
	volatile uint8_t x223 = UINT8_MAX;
	int32_t x224 = -1;
	int32_t t41 = -1;

	t41 = ((x221/(x222-x223))==x224);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x225 = -2994612929LL;
	static int64_t x226 = -1276442274452LL;
	int32_t t42 = -3427;

	t42 = ((x225/(x226-x227))==x228);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x229 = UINT16_MAX;
	int64_t x230 = 31689LL;
	volatile int8_t x231 = INT8_MAX;
	volatile int64_t x232 = -114LL;
	static volatile int32_t t43 = -6704099;

	t43 = ((x229/(x230-x231))==x232);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x238 = 578U;
	static int16_t x240 = 11863;
	int32_t t44 = -15821;

	t44 = ((x237/(x238-x239))==x240);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x241 = 96660U;
	int16_t x243 = INT16_MAX;
	volatile uint64_t x244 = 1228995LLU;

	t45 = ((x241/(x242-x243))==x244);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x245 = INT64_MIN;
	int16_t x246 = -2790;
	uint64_t x247 = 14288844LLU;
	int32_t x248 = -410479;
	int32_t t46 = 2186906;

	t46 = ((x245/(x246-x247))==x248);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x253 = -1;
	uint32_t x254 = UINT32_MAX;
	int64_t x256 = INT64_MAX;
	volatile int32_t t47 = -15910;

	t47 = ((x253/(x254-x255))==x256);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x261 = INT32_MIN;
	int64_t x262 = 190719LL;
	static int64_t x264 = 1LL;
	int32_t t48 = 48535;

	t48 = ((x261/(x262-x263))==x264);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x266 = INT32_MAX;
	int64_t x268 = INT64_MIN;
	int32_t t49 = 5;

	t49 = ((x265/(x266-x267))==x268);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x269 = 2U;
	int8_t x270 = INT8_MIN;
	int64_t x271 = 6LL;
	int16_t x272 = 3429;
	volatile int32_t t50 = -26606629;

	t50 = ((x269/(x270-x271))==x272);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x273 = INT64_MIN;
	volatile int16_t x274 = INT16_MIN;
	static volatile uint32_t x276 = 188U;
	int32_t t51 = -7302096;

	t51 = ((x273/(x274-x275))==x276);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x277 = INT16_MAX;
	uint16_t x278 = 1U;
	int8_t x279 = INT8_MIN;
	static uint8_t x280 = 2U;
	int32_t t52 = 23634;

	t52 = ((x277/(x278-x279))==x280);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x281 = 1373U;
	static int8_t x282 = -4;
	volatile int16_t x283 = INT16_MIN;
	int8_t x284 = -1;
	volatile int32_t t53 = -28794010;

	t53 = ((x281/(x282-x283))==x284);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x286 = UINT32_MAX;
	static uint64_t x287 = 4727295912435297LLU;
	int16_t x288 = 13107;
	static int32_t t54 = 227040445;

	t54 = ((x285/(x286-x287))==x288);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x290 = -1;
	int32_t x291 = 160;
	volatile int32_t t55 = 81748;

	t55 = ((x289/(x290-x291))==x292);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x294 = UINT8_MAX;
	volatile int8_t x295 = 1;
	static int32_t x296 = 19809;
	volatile int32_t t56 = 84306313;

	t56 = ((x293/(x294-x295))==x296);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x298 = 1013U;
	uint32_t x299 = 235069628U;
	static int32_t t57 = -944;

	t57 = ((x297/(x298-x299))==x300);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x305 = -1LL;
	static int16_t x306 = 37;
	static int8_t x307 = 6;
	int8_t x308 = -49;
	static int32_t t58 = 5;

	t58 = ((x305/(x306-x307))==x308);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x309 = 76102LL;
	static volatile int8_t x310 = -6;
	int32_t x311 = -1470178;
	uint64_t x312 = 122LLU;

	t59 = ((x309/(x310-x311))==x312);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x313 = INT16_MIN;
	static volatile int8_t x314 = -1;
	volatile uint16_t x315 = 59U;
	volatile int64_t x316 = -4LL;
	volatile int32_t t60 = 360;

	t60 = ((x313/(x314-x315))==x316);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x319 = 78768419LLU;
	volatile uint16_t x320 = 11U;
	volatile int32_t t61 = 196006527;

	t61 = ((x317/(x318-x319))==x320);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x321 = INT64_MIN;
	int64_t x322 = -7202638249605920LL;
	uint16_t x324 = 4895U;
	int32_t t62 = -3;

	t62 = ((x321/(x322-x323))==x324);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x325 = INT16_MAX;
	int64_t x327 = -424874465LL;
	int16_t x328 = INT16_MAX;
	int32_t t63 = -438;

	t63 = ((x325/(x326-x327))==x328);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x329 = -170804216;
	uint8_t x330 = UINT8_MAX;
	int32_t x331 = -1;
	int64_t x332 = INT64_MAX;

	t64 = ((x329/(x330-x331))==x332);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x333 = UINT16_MAX;
	volatile uint32_t x334 = 106948U;
	int8_t x335 = INT8_MIN;
	static int32_t x336 = INT32_MIN;
	static int32_t t65 = 20;

	t65 = ((x333/(x334-x335))==x336);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x338 = -1LL;
	int16_t x340 = INT16_MIN;
	static int32_t t66 = -3820;

	t66 = ((x337/(x338-x339))==x340);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x342 = INT8_MAX;
	volatile uint8_t x343 = 2U;
	int64_t x344 = 13228335LL;
	int32_t t67 = -1860006;

	t67 = ((x341/(x342-x343))==x344);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x345 = UINT64_MAX;
	volatile uint16_t x346 = 0U;
	static uint16_t x347 = UINT16_MAX;
	volatile uint16_t x348 = 9165U;
	int32_t t68 = 122;

	t68 = ((x345/(x346-x347))==x348);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x349 = 1447953795060969627LLU;
	volatile uint8_t x350 = UINT8_MAX;
	uint32_t x351 = UINT32_MAX;
	int16_t x352 = INT16_MIN;
	static int32_t t69 = 723931;

	t69 = ((x349/(x350-x351))==x352);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x353 = 8293LLU;
	int16_t x355 = 3;
	uint16_t x356 = 528U;
	static int32_t t70 = 3;

	t70 = ((x353/(x354-x355))==x356);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x357 = 720029737U;
	int64_t x358 = 16872054538482LL;
	int32_t x360 = -1;

	t71 = ((x357/(x358-x359))==x360);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x363 = UINT8_MAX;
	static volatile uint8_t x364 = 98U;
	volatile int32_t t72 = 1;

	t72 = ((x361/(x362-x363))==x364);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x365 = INT32_MAX;
	int64_t x366 = INT64_MAX;
	static uint64_t x367 = 2LLU;
	static int16_t x368 = -1;
	volatile int32_t t73 = -70;

	t73 = ((x365/(x366-x367))==x368);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x370 = 1449LLU;
	uint64_t x371 = 10499065058LLU;
	int32_t t74 = 1616;

	t74 = ((x369/(x370-x371))==x372);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x373 = 0;
	static int16_t x375 = INT16_MAX;
	int32_t x376 = INT32_MIN;
	volatile int32_t t75 = 1334;

	t75 = ((x373/(x374-x375))==x376);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int32_t x377 = 9869088;
	static volatile int64_t x379 = -772962553LL;
	volatile int16_t x380 = -1;
	volatile int32_t t76 = -52897809;

	t76 = ((x377/(x378-x379))==x380);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x385 = INT32_MIN;
	volatile int16_t x386 = 101;
	int8_t x387 = INT8_MIN;
	int64_t x388 = -3435612692719475780LL;

	t77 = ((x385/(x386-x387))==x388);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x389 = INT8_MIN;
	int8_t x392 = -1;
	volatile int32_t t78 = -90857973;

	t78 = ((x389/(x390-x391))==x392);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x393 = INT64_MIN;
	uint8_t x394 = UINT8_MAX;
	int32_t x395 = -1;

	t79 = ((x393/(x394-x395))==x396);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x397 = -1;
	static volatile uint8_t x398 = 1U;
	int16_t x399 = INT16_MAX;
	int16_t x400 = -1;
	volatile int32_t t80 = 25;

	t80 = ((x397/(x398-x399))==x400);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x401 = 204137671138LL;
	uint16_t x402 = UINT16_MAX;
	int32_t x403 = 55;
	static volatile int8_t x404 = INT8_MIN;
	volatile int32_t t81 = 702659505;

	t81 = ((x401/(x402-x403))==x404);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x405 = INT16_MAX;
	uint16_t x406 = UINT16_MAX;
	volatile int32_t x407 = INT32_MAX;
	static volatile int8_t x408 = INT8_MAX;

	t82 = ((x405/(x406-x407))==x408);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x409 = -1;
	volatile int8_t x410 = INT8_MIN;
	int32_t x411 = INT32_MIN;
	uint16_t x412 = 207U;
	volatile int32_t t83 = -1;

	t83 = ((x409/(x410-x411))==x412);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x417 = -3204406;
	uint16_t x418 = 11U;
	volatile int64_t x419 = 854854215LL;
	static volatile uint8_t x420 = UINT8_MAX;
	volatile int32_t t84 = -44439;

	t84 = ((x417/(x418-x419))==x420);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x425 = 24U;
	volatile uint16_t x426 = UINT16_MAX;
	int16_t x427 = INT16_MIN;
	int64_t x428 = INT64_MIN;
	int32_t t85 = -12667393;

	t85 = ((x425/(x426-x427))==x428);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x429 = INT64_MIN;
	volatile int64_t x430 = -1LL;
	int64_t x432 = 34307476321853757LL;
	volatile int32_t t86 = 330985;

	t86 = ((x429/(x430-x431))==x432);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x437 = -1;
	int8_t x438 = INT8_MIN;
	int16_t x439 = 7;
	int8_t x440 = INT8_MAX;
	int32_t t87 = -3123248;

	t87 = ((x437/(x438-x439))==x440);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x441 = -1;
	int64_t x442 = 13LL;
	static int16_t x443 = 1;
	int32_t x444 = INT32_MIN;
	volatile int32_t t88 = 45737;

	t88 = ((x441/(x442-x443))==x444);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x445 = INT32_MIN;
	static int32_t x446 = -1;
	int32_t x447 = 48297;
	uint16_t x448 = 12911U;
	int32_t t89 = 23;

	t89 = ((x445/(x446-x447))==x448);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x450 = 15;
	uint64_t x451 = UINT64_MAX;
	static volatile int32_t t90 = 1;

	t90 = ((x449/(x450-x451))==x452);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x453 = 539U;
	uint32_t x454 = 1642119604U;
	volatile uint64_t x455 = UINT64_MAX;
	volatile int32_t x456 = INT32_MAX;
	int32_t t91 = 1;

	t91 = ((x453/(x454-x455))==x456);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x457 = UINT16_MAX;
	uint64_t x459 = 7731744155700051118LLU;
	int64_t x460 = -1LL;
	volatile int32_t t92 = 0;

	t92 = ((x457/(x458-x459))==x460);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x462 = INT16_MAX;
	int8_t x463 = INT8_MIN;
	int32_t x464 = INT32_MIN;
	int32_t t93 = -346999927;

	t93 = ((x461/(x462-x463))==x464);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x465 = UINT32_MAX;
	volatile uint16_t x468 = UINT16_MAX;
	int32_t t94 = -3;

	t94 = ((x465/(x466-x467))==x468);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x469 = -11;
	static volatile int64_t x470 = -1LL;
	int8_t x471 = INT8_MIN;
	volatile int32_t t95 = -14368431;

	t95 = ((x469/(x470-x471))==x472);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x473 = INT16_MIN;
	uint32_t x474 = UINT32_MAX;
	volatile int16_t x475 = 12822;
	int8_t x476 = INT8_MAX;

	t96 = ((x473/(x474-x475))==x476);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x478 = UINT8_MAX;
	uint8_t x479 = 25U;
	static uint16_t x480 = 5827U;
	int32_t t97 = -473708;

	t97 = ((x477/(x478-x479))==x480);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x481 = 781LL;
	uint16_t x482 = 6279U;
	int16_t x483 = INT16_MIN;
	volatile int32_t t98 = 11;

	t98 = ((x481/(x482-x483))==x484);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x486 = INT16_MIN;
	uint32_t x487 = UINT32_MAX;
	volatile uint8_t x488 = 60U;

	t99 = ((x485/(x486-x487))==x488);

	if (t99 != 0) { NG(); } else { ; }
	
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

