#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x1 = INT32_MAX;
static volatile int64_t x8 = INT64_MAX;
volatile int64_t x12 = INT64_MAX;
int64_t t3 = 20643291LL;
uint8_t x19 = UINT8_MAX;
static volatile int64_t x20 = -587874631778223039LL;
uint8_t x22 = 0U;
static int64_t x23 = INT64_MIN;
int16_t x24 = INT16_MAX;
int8_t x26 = INT8_MIN;
int64_t t7 = -7LL;
uint32_t x33 = UINT32_MAX;
int32_t x34 = 216580672;
volatile uint64_t x67 = 20151114371LLU;
int64_t x72 = -1LL;
volatile uint64_t t16 = 588524531LLU;
int16_t x80 = -1;
volatile int64_t x85 = 1369938477942LL;
volatile uint32_t x89 = UINT32_MAX;
int8_t x91 = INT8_MIN;
int64_t x92 = -190LL;
static uint8_t x101 = 10U;
static uint32_t x106 = 18250507U;
uint16_t x108 = 1U;
uint32_t x114 = 13U;
volatile uint8_t x122 = UINT8_MAX;
volatile int64_t x124 = INT64_MAX;
static int64_t x127 = INT64_MIN;
int16_t x131 = INT16_MIN;
int32_t x154 = INT32_MIN;
int64_t t36 = 527303380149LL;
int16_t x189 = INT16_MAX;
int16_t x190 = -4;
uint16_t x197 = UINT16_MAX;
volatile int8_t x204 = -1;
static volatile int32_t t39 = -16710406;
uint8_t x210 = UINT8_MAX;
static int64_t x211 = INT64_MIN;
static volatile int64_t t41 = -11719660266422LL;
uint64_t t43 = 60947483LLU;
static int64_t x221 = -1LL;
int64_t x224 = 133253891LL;
int64_t t44 = -104926542LL;
int64_t x225 = -989041329LL;
uint32_t x226 = UINT32_MAX;
volatile uint8_t x228 = 5U;
static int16_t x231 = INT16_MIN;
uint8_t x232 = 46U;
uint8_t x234 = 2U;
volatile int64_t t49 = -10189831299LL;
int64_t x252 = INT64_MAX;
static int64_t x256 = INT64_MAX;
static uint32_t t53 = 394U;
volatile int8_t x267 = INT8_MAX;
int64_t x275 = 981670LL;
uint64_t t58 = 909827LLU;
int8_t x292 = INT8_MIN;
uint64_t x299 = UINT64_MAX;
uint64_t t60 = 4617467LLU;
uint32_t x305 = UINT32_MAX;
int8_t x306 = -1;
int16_t x312 = 1284;
int64_t x314 = INT64_MIN;
volatile int16_t x318 = -76;
int8_t x321 = -1;
uint32_t x322 = UINT32_MAX;
uint8_t x331 = 8U;
uint16_t x333 = UINT16_MAX;
int32_t x334 = -1;
uint16_t x336 = 29263U;
volatile int32_t t68 = -27384;
static volatile int64_t t69 = 1039821913403LL;
int32_t x345 = INT32_MAX;
static volatile int64_t t71 = 712LL;
static volatile int16_t x351 = -2818;
volatile int64_t t72 = 223098969440654LL;
static volatile int16_t x370 = 27;
int8_t x372 = 4;
int64_t t78 = -49627727906327267LL;
int16_t x381 = -1;
uint32_t x382 = 456U;
volatile int32_t t80 = -1;
static uint8_t x412 = 12U;
int64_t x416 = -1LL;
volatile int64_t x419 = INT64_MAX;
int64_t t85 = -802601910196LL;
int32_t x422 = INT32_MIN;
int64_t x423 = INT64_MIN;
int32_t x440 = INT32_MIN;
uint32_t t90 = 790U;
uint64_t x464 = 84150213666LLU;
volatile int32_t x468 = -30;
int16_t x474 = -1;
static volatile int8_t x477 = -1;
static volatile int8_t x478 = 1;
int32_t x489 = INT32_MIN;
int16_t x491 = INT16_MIN;
volatile int64_t t99 = 5415884040393LL;


void f0(void) {
	static uint64_t x2 = UINT64_MAX;
	static int8_t x3 = INT8_MAX;
	uint16_t x4 = 433U;
	uint64_t t0 = 190419299LLU;

	t0 = (((x1-x2)|x3)/x4);

	if (t0 != 4959546LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 0;
	int16_t x6 = INT16_MIN;
	uint32_t x7 = 4U;
	int64_t t1 = 138945580314LL;

	t1 = (((x5-x6)|x7)/x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MIN;
	int32_t x10 = INT32_MIN;
	int32_t x11 = 170440298;
	volatile int64_t t2 = -19891214652LL;

	t2 = (((x9-x10)|x11)/x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = INT32_MIN;
	int64_t x14 = -1LL;
	int64_t x15 = -31458116497LL;
	volatile int32_t x16 = -987;

	t3 = (((x13-x14)|x15)/x16);

	if (t3 != 1411697LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 30LL;
	volatile int16_t x18 = -1;
	static volatile int64_t t4 = -40555813LL;

	t4 = (((x17-x18)|x19)/x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MAX;
	int64_t t5 = 6218115024919LL;

	t5 = (((x21-x22)|x23)/x24);

	if (t5 != -281483566907399LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -15861;
	uint32_t x27 = 12U;
	int64_t x28 = 17996176453LL;
	int64_t t6 = -4751LL;

	t6 = (((x25-x26)|x27)/x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = INT32_MAX;
	int16_t x30 = 0;
	volatile int64_t x31 = 2631481765817269LL;
	int16_t x32 = INT16_MIN;

	t7 = (((x29-x30)|x31)/x32);

	if (t7 != -80306503679LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x35 = INT32_MIN;
	static volatile int32_t x36 = -1;
	uint32_t t8 = 7202524U;

	t8 = (((x33-x34)|x35)/x36);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x45 = 19990U;
	int8_t x46 = INT8_MIN;
	uint64_t x47 = 1LLU;
	volatile int16_t x48 = INT16_MIN;
	uint64_t t9 = 8124510106727080739LLU;

	t9 = (((x45-x46)|x47)/x48);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = INT16_MAX;
	int32_t x50 = INT32_MAX;
	int8_t x51 = 2;
	int8_t x52 = 1;
	int32_t t10 = -17020529;

	t10 = (((x49-x50)|x51)/x52);

	if (t10 != -2147450878) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = INT32_MAX;
	int8_t x54 = INT8_MAX;
	static int8_t x55 = INT8_MAX;
	int64_t x56 = INT64_MIN;
	volatile int64_t t11 = 65246LL;

	t11 = (((x53-x54)|x55)/x56);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x57 = 8190603LL;
	volatile int8_t x58 = INT8_MIN;
	volatile int64_t x59 = INT64_MIN;
	volatile int8_t x60 = -1;
	static int64_t t12 = -4LL;

	t12 = (((x57-x58)|x59)/x60);

	if (t12 != 9223372036846585077LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x61 = -1;
	static int8_t x62 = INT8_MIN;
	volatile int32_t x63 = -56720;
	int32_t x64 = -628;
	volatile int32_t t13 = 24014429;

	t13 = (((x61-x62)|x63)/x64);

	if (t13 != 90) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x65 = 991035959U;
	static uint64_t x66 = UINT64_MAX;
	uint8_t x68 = 50U;
	volatile uint64_t t14 = 9342490579872836LLU;

	t14 = (((x65-x66)|x67)/x68);

	if (t14 != 406380353LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = INT64_MIN;
	int32_t x70 = -2;
	static int8_t x71 = -42;
	volatile int64_t t15 = 27207888193243LL;

	t15 = (((x69-x70)|x71)/x72);

	if (t15 != 42LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = -1;
	int16_t x74 = INT16_MIN;
	static volatile uint64_t x75 = 91514121LLU;
	static int32_t x76 = 228742196;

	t16 = (((x73-x74)|x75)/x76);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x77 = 18U;
	static int32_t x78 = -1;
	uint64_t x79 = 157LLU;
	volatile uint64_t t17 = 726977LLU;

	t17 = (((x77-x78)|x79)/x80);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MIN;
	static int32_t x82 = INT32_MIN;
	static uint64_t x83 = 279681738LLU;
	int32_t x84 = 660541;
	uint64_t t18 = 48LLU;

	t18 = (((x81-x82)|x83)/x84);

	if (t18 != 3251LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x86 = 63LLU;
	int32_t x87 = INT32_MIN;
	volatile int16_t x88 = -1;
	volatile uint64_t t19 = 6546572563435334620LLU;

	t19 = (((x85-x86)|x87)/x88);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x90 = INT8_MAX;
	static volatile int64_t t20 = -25971064LL;

	t20 = (((x89-x90)|x91)/x92);

	if (t20 != -22605090LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = 17503;
	uint8_t x94 = UINT8_MAX;
	int8_t x95 = INT8_MIN;
	int8_t x96 = 1;
	volatile int32_t t21 = -436;

	t21 = (((x93-x94)|x95)/x96);

	if (t21 != -32) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x97 = INT16_MIN;
	static uint64_t x98 = 354365LLU;
	static int32_t x99 = INT32_MIN;
	static int64_t x100 = -847033997LL;
	volatile uint64_t t22 = 745580346LLU;

	t22 = (((x97-x98)|x99)/x100);

	if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x102 = INT8_MIN;
	int32_t x103 = -176217239;
	int64_t x104 = INT64_MIN;
	volatile int64_t t23 = 1LL;

	t23 = (((x101-x102)|x103)/x104);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = -1;
	uint64_t x107 = 10890771LLU;
	volatile uint64_t t24 = 227948LLU;

	t24 = (((x105-x106)|x107)/x108);

	if (t24 != 4277120759LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = -1;
	int16_t x115 = 0;
	uint8_t x116 = UINT8_MAX;
	uint32_t t25 = 111219758U;

	t25 = (((x113-x114)|x115)/x116);

	if (t25 != 16843008U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x121 = 222108326LLU;
	int16_t x123 = -1;
	uint64_t t26 = 64854178225174654LLU;

	t26 = (((x121-x122)|x123)/x124);

	if (t26 != 2LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x125 = 3U;
	volatile uint16_t x126 = UINT16_MAX;
	int32_t x128 = 601;
	int64_t t27 = 8161LL;

	t27 = (((x125-x126)|x127)/x128);

	if (t27 != -109LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x129 = -4872;
	int64_t x130 = INT64_MIN;
	static int16_t x132 = 7652;
	int64_t t28 = -1098846916891997LL;

	t28 = (((x129-x130)|x131)/x132);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x133 = 0;
	volatile uint16_t x134 = UINT16_MAX;
	volatile int64_t x135 = INT64_MAX;
	int8_t x136 = INT8_MAX;
	int64_t t29 = -196108302LL;

	t29 = (((x133-x134)|x135)/x136);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x141 = -1;
	int8_t x142 = 1;
	static uint64_t x143 = 489487507745LLU;
	int64_t x144 = INT64_MIN;
	volatile uint64_t t30 = 892LLU;

	t30 = (((x141-x142)|x143)/x144);

	if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x145 = INT32_MIN;
	static uint32_t x146 = 0U;
	volatile int16_t x147 = INT16_MIN;
	int8_t x148 = -1;
	volatile uint32_t t31 = 1U;

	t31 = (((x145-x146)|x147)/x148);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x153 = INT8_MIN;
	static int64_t x155 = INT64_MIN;
	int16_t x156 = 35;
	int64_t t32 = -218581222463913LL;

	t32 = (((x153-x154)|x155)/x156);

	if (t32 != -263524915277351208LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x157 = INT64_MIN;
	static int8_t x158 = -1;
	int8_t x159 = INT8_MAX;
	static int32_t x160 = -15548;
	volatile int64_t t33 = -25LL;

	t33 = (((x157-x158)|x159)/x160);

	if (t33 != 593219194549445LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x169 = 464058363163549LLU;
	int64_t x170 = -1LL;
	int8_t x171 = -1;
	volatile int32_t x172 = INT32_MAX;
	volatile uint64_t t34 = 4845080929820942161LLU;

	t34 = (((x169-x170)|x171)/x172);

	if (t34 != 8589934596LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x173 = UINT64_MAX;
	int32_t x174 = INT32_MIN;
	static int32_t x175 = INT32_MIN;
	uint64_t x176 = 5621LLU;
	uint64_t t35 = 24201687398LLU;

	t35 = (((x173-x174)|x175)/x176);

	if (t35 != 3281754861005079LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x177 = INT16_MAX;
	int64_t x178 = 3LL;
	int16_t x179 = -1;
	int64_t x180 = INT64_MAX;

	t36 = (((x177-x178)|x179)/x180);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x191 = INT32_MIN;
	int64_t x192 = 6LL;
	volatile int64_t t37 = 4792735419135LL;

	t37 = (((x189-x190)|x191)/x192);

	if (t37 != -357908479LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x198 = UINT8_MAX;
	int16_t x199 = -1;
	int32_t x200 = 5591;
	static volatile int32_t t38 = 15456029;

	t38 = (((x197-x198)|x199)/x200);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x201 = INT16_MIN;
	int16_t x202 = INT16_MAX;
	int32_t x203 = -111;

	t39 = (((x201-x202)|x203)/x204);

	if (t39 != 111) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x205 = 1;
	int32_t x206 = -582739;
	volatile int16_t x207 = INT16_MIN;
	int64_t x208 = -1478641LL;
	static volatile int64_t t40 = -37985417748LL;

	t40 = (((x205-x206)|x207)/x208);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x209 = -157726474250940585LL;
	uint32_t x212 = UINT32_MAX;

	t41 = (((x209-x210)|x211)/x212);

	if (t41 != -36723556LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x213 = UINT64_MAX;
	uint64_t x214 = UINT64_MAX;
	int8_t x215 = 18;
	int16_t x216 = INT16_MIN;
	volatile uint64_t t42 = 513197477594207675LLU;

	t42 = (((x213-x214)|x215)/x216);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x217 = -3LL;
	volatile int8_t x218 = INT8_MIN;
	volatile int16_t x219 = -1;
	volatile uint64_t x220 = 231233LLU;

	t43 = (((x217-x218)|x219)/x220);

	if (t43 != 79775568684874LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x222 = 0;
	int8_t x223 = INT8_MIN;

	t44 = (((x221-x222)|x223)/x224);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x227 = -1;
	int64_t t45 = -963949514428LL;

	t45 = (((x225-x226)|x227)/x228);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x229 = INT8_MIN;
	int8_t x230 = INT8_MIN;
	volatile int32_t t46 = 3427196;

	t46 = (((x229-x230)|x231)/x232);

	if (t46 != -712) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x233 = INT32_MAX;
	int32_t x235 = -66237;
	static int64_t x236 = INT64_MAX;
	volatile int64_t t47 = -216LL;

	t47 = (((x233-x234)|x235)/x236);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x237 = INT16_MIN;
	volatile int16_t x238 = INT16_MIN;
	int16_t x239 = INT16_MAX;
	int32_t x240 = INT32_MIN;
	volatile int32_t t48 = 59;

	t48 = (((x237-x238)|x239)/x240);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x241 = INT16_MIN;
	uint8_t x242 = 47U;
	int64_t x243 = -8958705LL;
	int8_t x244 = 13;

	t49 = (((x241-x242)|x243)/x244);

	if (t49 != -2523LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x245 = -3616248401450589857LL;
	int16_t x246 = -1;
	int32_t x247 = INT32_MAX;
	uint16_t x248 = UINT16_MAX;
	static volatile int64_t t50 = 88LL;

	t50 = (((x245-x246)|x247)/x248);

	if (t50 != -55180413513970LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x249 = 0U;
	int32_t x250 = -5821556;
	volatile uint32_t x251 = 16758376U;
	volatile int64_t t51 = 81108800244602LL;

	t51 = (((x249-x250)|x251)/x252);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x253 = 178953372;
	static int16_t x254 = INT16_MIN;
	uint64_t x255 = 7932390390LLU;
	volatile uint64_t t52 = 8LLU;

	t52 = (((x253-x254)|x255)/x256);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x261 = 10546U;
	static uint8_t x262 = 20U;
	int32_t x263 = 98668;
	static volatile int32_t x264 = INT32_MIN;

	t53 = (((x261-x262)|x263)/x264);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x265 = INT8_MIN;
	int16_t x266 = INT16_MIN;
	uint64_t x268 = UINT64_MAX;
	volatile uint64_t t54 = 363053113905142LLU;

	t54 = (((x265-x266)|x267)/x268);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x269 = UINT64_MAX;
	int8_t x270 = -1;
	volatile int64_t x271 = 4390599759LL;
	uint16_t x272 = 156U;
	volatile uint64_t t55 = 1019LLU;

	t55 = (((x269-x270)|x271)/x272);

	if (t55 != 28144870LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x273 = -1;
	static int16_t x274 = -62;
	static int64_t x276 = 6581LL;
	volatile int64_t t56 = -18891062120020LL;

	t56 = (((x273-x274)|x275)/x276);

	if (t56 != 149LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x281 = 31U;
	static volatile uint16_t x282 = 90U;
	uint8_t x283 = UINT8_MAX;
	volatile uint64_t x284 = 6644392173502194854LLU;
	static volatile uint64_t t57 = 1053594448LLU;

	t57 = (((x281-x282)|x283)/x284);

	if (t57 != 2LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x285 = 60U;
	uint64_t x286 = 3389583926428210LLU;
	volatile uint64_t x287 = 16LLU;
	int32_t x288 = INT32_MIN;

	t58 = (((x285-x286)|x287)/x288);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x289 = -515225711;
	volatile int64_t x290 = -1LL;
	uint64_t x291 = 6117392886663LLU;
	volatile uint64_t t59 = 85483116261LLU;

	t59 = (((x289-x290)|x291)/x292);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x297 = UINT64_MAX;
	uint32_t x298 = UINT32_MAX;
	volatile int32_t x300 = -132344;

	t60 = (((x297-x298)|x299)/x300);

	if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x307 = -1;
	static int16_t x308 = INT16_MIN;
	static uint32_t t61 = 13469U;

	t61 = (((x305-x306)|x307)/x308);

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x309 = 60;
	int8_t x310 = INT8_MIN;
	static int16_t x311 = INT16_MIN;
	volatile int32_t t62 = 2;

	t62 = (((x309-x310)|x311)/x312);

	if (t62 != -25) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x313 = -3986558846888LL;
	static int64_t x315 = -56464992LL;
	uint16_t x316 = UINT16_MAX;
	volatile int64_t t63 = 245812LL;

	t63 = (((x313-x314)|x315)/x316);

	if (t63 != -332LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x317 = INT64_MIN;
	uint32_t x319 = UINT32_MAX;
	static int8_t x320 = INT8_MIN;
	volatile int64_t t64 = 2319703109126297LL;

	t64 = (((x317-x318)|x319)/x320);

	if (t64 != 72057594004373504LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x323 = INT8_MIN;
	volatile int8_t x324 = INT8_MIN;
	static volatile uint32_t t65 = 10U;

	t65 = (((x321-x322)|x323)/x324);

	if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x325 = -1;
	int32_t x326 = INT32_MIN;
	int64_t x327 = INT64_MAX;
	int16_t x328 = -196;
	volatile int64_t t66 = -1LL;

	t66 = (((x325-x326)|x327)/x328);

	if (t66 != -47058020596197835LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x329 = 9980;
	volatile int8_t x330 = 3;
	static int32_t x332 = INT32_MIN;
	int32_t t67 = 845668;

	t67 = (((x329-x330)|x331)/x332);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x335 = INT32_MIN;

	t68 = (((x333-x334)|x335)/x336);

	if (t68 != -73383) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x337 = -1;
	volatile int8_t x338 = INT8_MIN;
	int64_t x339 = INT64_MAX;
	int32_t x340 = 254976;

	t69 = (((x337-x338)|x339)/x340);

	if (t69 != 36173490982895LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x341 = -2816883806860636573LL;
	volatile int32_t x342 = -100401;
	volatile int16_t x343 = INT16_MIN;
	static int64_t x344 = -1LL;
	volatile int64_t t70 = -38997451562077307LL;

	t70 = (((x341-x342)|x343)/x344);

	if (t70 != 26988LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x346 = 5519297142LL;
	int8_t x347 = 0;
	static uint32_t x348 = 367757847U;

	t71 = (((x345-x346)|x347)/x348);

	if (t71 != -9LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x349 = 41;
	uint32_t x350 = 125448023U;
	volatile int64_t x352 = INT64_MAX;

	t72 = (((x349-x350)|x351)/x352);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x357 = -1;
	volatile uint32_t x358 = UINT32_MAX;
	int64_t x359 = -9491501137LL;
	uint32_t x360 = UINT32_MAX;
	volatile int64_t t73 = 2025705LL;

	t73 = (((x357-x358)|x359)/x360);

	if (t73 != -2LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x361 = UINT64_MAX;
	int64_t x362 = -46442890420478LL;
	uint64_t x363 = 1778LLU;
	volatile int64_t x364 = INT64_MIN;
	volatile uint64_t t74 = 258655588133312916LLU;

	t74 = (((x361-x362)|x363)/x364);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x365 = -1;
	int64_t x366 = 0LL;
	static uint8_t x367 = 0U;
	static uint8_t x368 = 13U;
	volatile int64_t t75 = 10073723579035657LL;

	t75 = (((x365-x366)|x367)/x368);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x369 = 1437162701498LLU;
	static int32_t x371 = -1;
	volatile uint64_t t76 = 895102426957786025LLU;

	t76 = (((x369-x370)|x371)/x372);

	if (t76 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x373 = -1LL;
	int64_t x374 = -1LL;
	volatile int8_t x375 = -6;
	uint8_t x376 = UINT8_MAX;
	volatile int64_t t77 = 45764878096664831LL;

	t77 = (((x373-x374)|x375)/x376);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x377 = -1LL;
	volatile int32_t x378 = INT32_MAX;
	int32_t x379 = INT32_MIN;
	int64_t x380 = -1LL;

	t78 = (((x377-x378)|x379)/x380);

	if (t78 != 2147483648LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x383 = 17U;
	uint8_t x384 = UINT8_MAX;
	volatile uint32_t t79 = 209539567U;

	t79 = (((x381-x382)|x383)/x384);

	if (t79 != 16843007U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x397 = 3U;
	static int32_t x398 = INT32_MAX;
	int16_t x399 = INT16_MAX;
	uint16_t x400 = 440U;

	t80 = (((x397-x398)|x399)/x400);

	if (t80 != -4880570) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x401 = 6U;
	volatile uint8_t x402 = 125U;
	uint16_t x403 = UINT16_MAX;
	volatile int32_t x404 = 2;
	int32_t t81 = 16326050;

	t81 = (((x401-x402)|x403)/x404);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x405 = 0;
	uint16_t x406 = UINT16_MAX;
	int16_t x407 = INT16_MIN;
	static int64_t x408 = -1LL;
	volatile int64_t t82 = -3180145950LL;

	t82 = (((x405-x406)|x407)/x408);

	if (t82 != 32767LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x409 = 142LL;
	uint8_t x410 = 4U;
	int8_t x411 = INT8_MIN;
	int64_t t83 = -362607413424055771LL;

	t83 = (((x409-x410)|x411)/x412);

	if (t83 != -9LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x413 = 7LLU;
	int8_t x414 = INT8_MIN;
	int16_t x415 = INT16_MIN;
	volatile uint64_t t84 = 7203027076149LLU;

	t84 = (((x413-x414)|x415)/x416);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x417 = 150U;
	int64_t x418 = 1LL;
	uint32_t x420 = 772209859U;

	t85 = (((x417-x418)|x419)/x420);

	if (t85 != 11944126236LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x421 = -1LL;
	int64_t x424 = INT64_MAX;
	volatile int64_t t86 = -94LL;

	t86 = (((x421-x422)|x423)/x424);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x425 = INT64_MIN;
	static volatile int16_t x426 = INT16_MIN;
	uint64_t x427 = 457058736879105778LLU;
	int16_t x428 = -1;
	uint64_t t87 = 14038434558LLU;

	t87 = (((x425-x426)|x427)/x428);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x429 = UINT16_MAX;
	uint8_t x430 = 9U;
	int32_t x431 = 5;
	int64_t x432 = INT64_MIN;
	static volatile int64_t t88 = 2LL;

	t88 = (((x429-x430)|x431)/x432);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x437 = UINT8_MAX;
	static int16_t x438 = 0;
	static int64_t x439 = INT64_MAX;
	int64_t t89 = 0LL;

	t89 = (((x437-x438)|x439)/x440);

	if (t89 != -4294967295LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x441 = 20;
	static int16_t x442 = INT16_MIN;
	uint8_t x443 = UINT8_MAX;
	uint32_t x444 = 15577U;

	t90 = (((x441-x442)|x443)/x444);

	if (t90 != 2U) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x445 = -664857;
	int8_t x446 = INT8_MIN;
	uint16_t x447 = 7U;
	int64_t x448 = -667224LL;
	int64_t t91 = 4188422277005LL;

	t91 = (((x445-x446)|x447)/x448);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x453 = -29;
	static int16_t x454 = -1;
	uint64_t x455 = 1LLU;
	uint64_t x456 = 235LLU;
	volatile uint64_t t92 = 322015640502271309LLU;

	t92 = (((x453-x454)|x455)/x456);

	if (t92 != 78496783292381070LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x461 = UINT16_MAX;
	static int64_t x462 = 91760470496215311LL;
	uint16_t x463 = 1596U;
	volatile uint64_t t93 = 1LLU;

	t93 = (((x461-x462)|x463)/x464);

	if (t93 != 218121651LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x465 = INT64_MAX;
	uint16_t x466 = 2882U;
	uint16_t x467 = 118U;
	int64_t t94 = -1667171025719LL;

	t94 = (((x465-x466)|x467)/x468);

	if (t94 != -307445734561825766LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x469 = 2LLU;
	uint16_t x470 = UINT16_MAX;
	uint64_t x471 = 85307496LLU;
	volatile int32_t x472 = INT32_MIN;
	static volatile uint64_t t95 = 743LLU;

	t95 = (((x469-x470)|x471)/x472);

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x473 = 6100874LLU;
	int8_t x475 = INT8_MIN;
	uint16_t x476 = 2668U;
	uint64_t t96 = 13189196LLU;

	t96 = (((x473-x474)|x475)/x476);

	if (t96 != 6914071991645259LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x479 = 76LL;
	uint8_t x480 = UINT8_MAX;
	volatile int64_t t97 = -158080543151289243LL;

	t97 = (((x477-x478)|x479)/x480);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x481 = INT8_MIN;
	volatile uint16_t x482 = 50U;
	uint16_t x483 = 1016U;
	uint8_t x484 = UINT8_MAX;
	static int32_t t98 = 1543;

	t98 = (((x481-x482)|x483)/x484);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x490 = INT64_MIN;
	uint32_t x492 = 35U;

	t99 = (((x489-x490)|x491)/x492);

	if (t99 != -936LL) { NG(); } else { ; }
	
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

