#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = -13109652;
volatile int32_t t0 = -8;
static int16_t x5 = INT16_MAX;
static int64_t x7 = INT64_MAX;
uint16_t x8 = 34U;
volatile int64_t t1 = 17134586248LL;
int16_t x14 = INT16_MIN;
int64_t t2 = -4405944070417LL;
uint8_t x17 = UINT8_MAX;
int64_t x19 = 35205349933066LL;
int64_t t3 = 524636441412097654LL;
int8_t x22 = 41;
volatile int16_t x30 = -1;
volatile uint32_t x32 = 401U;
int16_t x39 = INT16_MIN;
uint32_t x44 = UINT32_MAX;
volatile int16_t x49 = INT16_MIN;
static int64_t x50 = INT64_MAX;
int16_t x54 = -1;
int32_t x55 = 13699;
int8_t x56 = 0;
static uint64_t t13 = 838777LLU;
int64_t x61 = -33213165402554826LL;
static int16_t x67 = INT16_MIN;
int16_t x70 = INT16_MIN;
uint64_t x71 = UINT64_MAX;
static int64_t x78 = INT64_MIN;
static uint32_t x89 = UINT32_MAX;
static uint64_t t20 = 41102362956070303LLU;
int8_t x93 = 3;
uint32_t x96 = 97U;
uint16_t x97 = 46U;
int64_t x99 = INT64_MIN;
uint16_t x100 = 7741U;
int64_t t22 = 249865189LL;
volatile uint16_t x108 = 2148U;
static int32_t x115 = INT32_MAX;
uint16_t x124 = 7U;
volatile int32_t t27 = -3587361;
int8_t x133 = INT8_MIN;
uint32_t x136 = 96572356U;
volatile int64_t t31 = -12787947333LL;
static int16_t x152 = INT16_MIN;
volatile int32_t t32 = -3;
volatile uint32_t x156 = UINT32_MAX;
uint64_t x157 = 1LLU;
uint8_t x158 = UINT8_MAX;
static int32_t x174 = -61532;
static volatile uint64_t t38 = 11LLU;
int64_t t39 = -986926962LL;
volatile uint16_t x191 = 28619U;
static uint16_t x199 = UINT16_MAX;
static int16_t x207 = INT16_MIN;
int8_t x208 = 15;
volatile int8_t x210 = INT8_MAX;
int32_t x214 = -1;
uint64_t t45 = 5629402LLU;
uint8_t x217 = UINT8_MAX;
int16_t x220 = INT16_MAX;
int64_t t46 = -3457193292261697LL;
volatile uint64_t t47 = 100LLU;
int32_t x226 = INT32_MIN;
int16_t x232 = INT16_MAX;
volatile int32_t x233 = -231360070;
int64_t x247 = -111358525265LL;
int16_t x249 = INT16_MIN;
volatile int16_t x271 = INT16_MIN;
static volatile uint64_t t56 = 122882194183412LLU;
volatile int64_t x273 = INT64_MIN;
uint64_t x276 = 1LLU;
int64_t x278 = -1LL;
static int16_t x283 = 3257;
static int64_t x284 = 766LL;
int32_t x292 = INT32_MIN;
volatile uint32_t t61 = 7737642U;
static int64_t t63 = -556583234541978420LL;
volatile int64_t t64 = 5LL;
uint16_t x314 = UINT16_MAX;
int16_t x315 = INT16_MAX;
int16_t x322 = 0;
int8_t x323 = INT8_MAX;
static uint64_t x352 = 296LLU;
volatile uint64_t t73 = 42147525050112LLU;
int16_t x367 = INT16_MIN;
static uint8_t x369 = 7U;
static volatile int64_t x371 = INT64_MIN;
int32_t x376 = INT32_MAX;
int32_t x389 = -883890240;
uint64_t t81 = 24975158516966LLU;
int64_t x414 = 115674709LL;
int64_t t83 = -39182163LL;
static uint16_t x421 = 1596U;
uint64_t t85 = 53277418002183LLU;
volatile int32_t x434 = -1897;
uint8_t x436 = 49U;
int16_t x438 = INT16_MIN;
volatile int16_t x440 = INT16_MAX;
int8_t x441 = -1;
int8_t x442 = INT8_MIN;
int64_t x449 = -48306818672215135LL;
uint64_t x452 = 4419449457LLU;
int8_t x454 = INT8_MAX;
uint64_t x468 = 111387380497367059LLU;
volatile int8_t x477 = -2;
uint64_t x478 = 15LLU;
volatile uint16_t x479 = UINT16_MAX;
uint8_t x487 = 1U;
int64_t x489 = INT64_MIN;
uint8_t x497 = 9U;
int16_t x500 = INT16_MAX;


void f0(void) {
	int8_t x1 = -1;
	static uint16_t x2 = 982U;
	static uint16_t x4 = UINT16_MAX;

	t0 = ((x1/(x2-x3))-x4);

	if (t0 != -65535) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x6 = UINT8_MAX;

	t1 = ((x5/(x6-x7))-x8);

	if (t1 != -34LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x13 = 31317U;
	int16_t x15 = -74;
	int64_t x16 = 8307364134LL;

	t2 = ((x13/(x14-x15))-x16);

	if (t2 != -8307364134LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x18 = 0U;
	int32_t x20 = -1;

	t3 = ((x17/(x18-x19))-x20);

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x21 = INT8_MIN;
	uint32_t x23 = 923U;
	static volatile uint64_t x24 = 7854320084610LLU;
	volatile uint64_t t4 = 101696916LLU;

	t4 = ((x21/(x22-x23))-x24);

	if (t4 != 18446736219389467007LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = 1;
	volatile int32_t x26 = 10320868;
	int16_t x27 = -3;
	int64_t x28 = -1LL;
	volatile int64_t t5 = 14962LL;

	t5 = ((x25/(x26-x27))-x28);

	if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x29 = -1;
	volatile int8_t x31 = 25;
	uint32_t t6 = 54U;

	t6 = ((x29/(x30-x31))-x32);

	if (t6 != 4294966895U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 272384511430LLU;
	static uint8_t x34 = 0U;
	static uint32_t x35 = 35481U;
	int8_t x36 = INT8_MAX;
	volatile uint64_t t7 = 1130015904LLU;

	t7 = ((x33/(x34-x35))-x36);

	if (t7 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 5U;
	static uint64_t x38 = 3750690771988593LLU;
	uint8_t x40 = 0U;
	volatile uint64_t t8 = 1035729LLU;

	t8 = ((x37/(x38-x39))-x40);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x41 = UINT8_MAX;
	int16_t x42 = INT16_MIN;
	int8_t x43 = INT8_MIN;
	uint32_t t9 = 10484044U;

	t9 = ((x41/(x42-x43))-x44);

	if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = 24U;
	uint64_t x46 = 59622933874176LLU;
	uint32_t x47 = 1038752471U;
	uint16_t x48 = UINT16_MAX;
	uint64_t t10 = 1LLU;

	t10 = ((x45/(x46-x47))-x48);

	if (t10 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x51 = 10379U;
	uint64_t x52 = 36LLU;
	volatile uint64_t t11 = 5121640103LLU;

	t11 = ((x49/(x50-x51))-x52);

	if (t11 != 18446744073709551580LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = 1294156U;
	uint32_t t12 = 16356932U;

	t12 = ((x53/(x54-x55))-x56);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x57 = INT16_MIN;
	int8_t x58 = INT8_MAX;
	static uint64_t x59 = UINT64_MAX;
	int8_t x60 = INT8_MIN;

	t13 = ((x57/(x58-x59))-x60);

	if (t13 != 144115188075855744LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x62 = -405;
	volatile int16_t x63 = -1;
	uint16_t x64 = 5267U;
	volatile int64_t t14 = 11282072827LL;

	t14 = ((x61/(x62-x63))-x64);

	if (t14 != 82210805446601LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MIN;
	uint32_t x66 = 88U;
	static uint32_t x68 = UINT32_MAX;
	uint32_t t15 = 67U;

	t15 = ((x65/(x66-x67))-x68);

	if (t15 != 130720U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x69 = -1;
	uint64_t x72 = 2111628865LLU;
	volatile uint64_t t16 = 27452016LLU;

	t16 = ((x69/(x70-x71))-x72);

	if (t16 != 18446744071597922752LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = INT32_MIN;
	uint16_t x74 = 4444U;
	int64_t x75 = INT64_MAX;
	static volatile uint32_t x76 = 144215U;
	int64_t t17 = 4087446577828805780LL;

	t17 = ((x73/(x74-x75))-x76);

	if (t17 != -144215LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x77 = UINT64_MAX;
	int16_t x79 = INT16_MIN;
	static int8_t x80 = 1;
	volatile uint64_t t18 = 35066LLU;

	t18 = ((x77/(x78-x79))-x80);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = -290429609;
	volatile uint32_t x82 = 104321665U;
	int64_t x83 = 0LL;
	volatile int32_t x84 = 19558;
	static int64_t t19 = -65796706409738LL;

	t19 = ((x81/(x82-x83))-x84);

	if (t19 != -19560LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x90 = -1;
	static uint64_t x91 = 725085691536LLU;
	volatile int32_t x92 = -1;

	t20 = ((x89/(x90-x91))-x92);

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x94 = UINT64_MAX;
	volatile int16_t x95 = INT16_MIN;
	uint64_t t21 = 182562467339722LLU;

	t21 = ((x93/(x94-x95))-x96);

	if (t21 != 18446744073709551519LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x98 = -118;

	t22 = ((x97/(x98-x99))-x100);

	if (t22 != -7741LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = -1;
	int32_t x102 = -459;
	uint16_t x103 = UINT16_MAX;
	uint32_t x104 = 413U;
	uint32_t t23 = 43606U;

	t23 = ((x101/(x102-x103))-x104);

	if (t23 != 4294966883U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = INT8_MAX;
	uint32_t x106 = 1U;
	int8_t x107 = INT8_MAX;
	volatile uint32_t t24 = 279U;

	t24 = ((x105/(x106-x107))-x108);

	if (t24 != 4294965148U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x109 = 7088;
	static uint32_t x110 = 14200746U;
	volatile uint16_t x111 = UINT16_MAX;
	static int16_t x112 = INT16_MAX;
	volatile uint32_t t25 = 55U;

	t25 = ((x109/(x110-x111))-x112);

	if (t25 != 4294934529U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x113 = UINT64_MAX;
	static int64_t x114 = 220780693180LL;
	int16_t x116 = INT16_MIN;
	volatile uint64_t t26 = 46541LLU;

	t26 = ((x113/(x114-x115))-x116);

	if (t26 != 84405787LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = INT8_MAX;
	int16_t x122 = -1;
	uint8_t x123 = 32U;

	t27 = ((x121/(x122-x123))-x124);

	if (t27 != -10) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x134 = -15;
	int64_t x135 = INT64_MIN;
	int64_t t28 = -325423047734956LL;

	t28 = ((x133/(x134-x135))-x136);

	if (t28 != -96572356LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x137 = INT64_MAX;
	int64_t x138 = -1LL;
	int8_t x139 = INT8_MIN;
	static int16_t x140 = INT16_MIN;
	static volatile int64_t t29 = 151282946567514031LL;

	t29 = ((x137/(x138-x139))-x140);

	if (t29 != 72624976668180609LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x141 = 1U;
	static int64_t x142 = -1LL;
	uint16_t x143 = 1444U;
	int8_t x144 = INT8_MAX;
	volatile int64_t t30 = -68016934773043LL;

	t30 = ((x141/(x142-x143))-x144);

	if (t30 != -127LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x145 = INT8_MIN;
	int16_t x146 = INT16_MIN;
	static uint8_t x147 = 119U;
	static int64_t x148 = 331561651421921LL;

	t31 = ((x145/(x146-x147))-x148);

	if (t31 != -331561651421921LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x149 = -1;
	uint8_t x150 = 1U;
	volatile uint16_t x151 = UINT16_MAX;

	t32 = ((x149/(x150-x151))-x152);

	if (t32 != 32768) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x153 = UINT8_MAX;
	int16_t x154 = INT16_MAX;
	uint16_t x155 = 117U;
	volatile uint32_t t33 = 1318771816U;

	t33 = ((x153/(x154-x155))-x156);

	if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x159 = -5136;
	static int64_t x160 = -37232510LL;
	static volatile uint64_t t34 = 33LLU;

	t34 = ((x157/(x158-x159))-x160);

	if (t34 != 37232510LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x161 = 4U;
	static int64_t x162 = -183434554461LL;
	static int32_t x163 = INT32_MIN;
	uint32_t x164 = 15U;
	int64_t t35 = -15222015240LL;

	t35 = ((x161/(x162-x163))-x164);

	if (t35 != -15LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x169 = INT8_MAX;
	int16_t x170 = -1251;
	int32_t x171 = -1;
	int16_t x172 = 12361;
	static volatile int32_t t36 = 2875065;

	t36 = ((x169/(x170-x171))-x172);

	if (t36 != -12361) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x173 = INT8_MIN;
	int8_t x175 = INT8_MIN;
	int8_t x176 = INT8_MIN;
	volatile int32_t t37 = -63;

	t37 = ((x173/(x174-x175))-x176);

	if (t37 != 128) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x177 = -1;
	volatile uint32_t x178 = 233040242U;
	static uint64_t x179 = 1736215977411LLU;
	volatile int8_t x180 = -19;

	t38 = ((x177/(x178-x179))-x180);

	if (t38 != 20LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x181 = 3745366LL;
	int64_t x182 = 12324478LL;
	int32_t x183 = INT32_MIN;
	uint8_t x184 = 3U;

	t39 = ((x181/(x182-x183))-x184);

	if (t39 != -3LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x189 = UINT16_MAX;
	int16_t x190 = INT16_MIN;
	static uint32_t x192 = 721647U;
	volatile uint32_t t40 = 1018458U;

	t40 = ((x189/(x190-x191))-x192);

	if (t40 != 4294245648U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x193 = INT64_MIN;
	int64_t x194 = -1LL;
	int32_t x195 = INT32_MIN;
	int16_t x196 = -1;
	int64_t t41 = 1LL;

	t41 = ((x193/(x194-x195))-x196);

	if (t41 != -4294967297LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x197 = 0;
	static int64_t x198 = INT64_MAX;
	int16_t x200 = -114;
	int64_t t42 = 44LL;

	t42 = ((x197/(x198-x199))-x200);

	if (t42 != 114LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x205 = INT16_MAX;
	volatile uint16_t x206 = UINT16_MAX;
	int32_t t43 = -1884340;

	t43 = ((x205/(x206-x207))-x208);

	if (t43 != -15) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x209 = 5U;
	static uint64_t x211 = 18069LLU;
	uint32_t x212 = UINT32_MAX;
	uint64_t t44 = 62579410906LLU;

	t44 = ((x209/(x210-x211))-x212);

	if (t44 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x213 = INT64_MIN;
	uint64_t x215 = 6531381777975434058LLU;
	int32_t x216 = INT32_MIN;

	t45 = ((x213/(x214-x215))-x216);

	if (t45 != 2147483648LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x218 = INT64_MIN;
	int64_t x219 = -1LL;

	t46 = ((x217/(x218-x219))-x220);

	if (t46 != -32767LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x221 = UINT64_MAX;
	uint16_t x222 = 0U;
	int16_t x223 = INT16_MAX;
	volatile int64_t x224 = 22916831879742033LL;

	t47 = ((x221/(x222-x223))-x224);

	if (t47 != 18423827241829809584LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x225 = INT64_MIN;
	int8_t x227 = INT8_MIN;
	volatile int32_t x228 = -325083363;
	int64_t t48 = -1403LL;

	t48 = ((x225/(x226-x227))-x228);

	if (t48 != 4620050915LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x229 = -810;
	int8_t x230 = INT8_MAX;
	volatile int64_t x231 = -183392LL;
	int64_t t49 = -123007494LL;

	t49 = ((x229/(x230-x231))-x232);

	if (t49 != -32767LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x234 = -13128334835LL;
	int8_t x235 = -10;
	int8_t x236 = -1;
	int64_t t50 = 2LL;

	t50 = ((x233/(x234-x235))-x236);

	if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x237 = 137355LL;
	int64_t x238 = 1285513977985894LL;
	int16_t x239 = INT16_MAX;
	uint16_t x240 = 56U;
	volatile int64_t t51 = -56553485LL;

	t51 = ((x237/(x238-x239))-x240);

	if (t51 != -56LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x241 = INT8_MIN;
	volatile uint8_t x242 = UINT8_MAX;
	static uint16_t x243 = UINT16_MAX;
	int16_t x244 = INT16_MIN;
	static int32_t t52 = -962443;

	t52 = ((x241/(x242-x243))-x244);

	if (t52 != 32768) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x245 = INT8_MAX;
	int8_t x246 = INT8_MIN;
	uint16_t x248 = 29498U;
	volatile int64_t t53 = 12625306LL;

	t53 = ((x245/(x246-x247))-x248);

	if (t53 != -29498LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x250 = INT8_MIN;
	uint16_t x251 = 24U;
	static int8_t x252 = INT8_MIN;
	volatile int32_t t54 = 15803780;

	t54 = ((x249/(x250-x251))-x252);

	if (t54 != 343) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x265 = INT32_MAX;
	int64_t x266 = INT64_MIN;
	int32_t x267 = INT32_MIN;
	int64_t x268 = -1LL;
	int64_t t55 = -68663903896205LL;

	t55 = ((x265/(x266-x267))-x268);

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x269 = 1740LLU;
	static uint16_t x270 = 90U;
	volatile uint32_t x272 = 199843666U;

	t56 = ((x269/(x270-x271))-x272);

	if (t56 != 18446744073509707950LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x274 = 263655;
	int64_t x275 = -1LL;
	volatile uint64_t t57 = 8364271693LLU;

	t57 = ((x273/(x274-x275))-x276);

	if (t57 != 18446709091110874344LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x277 = 1005839970384010477LLU;
	uint16_t x279 = UINT16_MAX;
	int64_t x280 = INT64_MIN;
	uint64_t t58 = 947085049033232468LLU;

	t58 = ((x277/(x278-x279))-x280);

	if (t58 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x281 = 47819250121625997LLU;
	uint32_t x282 = UINT32_MAX;
	uint64_t t59 = 492563LLU;

	t59 = ((x281/(x282-x283))-x284);

	if (t59 != 11133029LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x285 = INT32_MIN;
	int64_t x286 = -1LL;
	int16_t x287 = INT16_MIN;
	int8_t x288 = -58;
	int64_t t60 = 385074171112LL;

	t60 = ((x285/(x286-x287))-x288);

	if (t60 != -65480LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x289 = UINT32_MAX;
	volatile int8_t x290 = -1;
	volatile uint16_t x291 = 4323U;

	t61 = ((x289/(x290-x291))-x292);

	if (t61 != 2147483649U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x293 = 37;
	int16_t x294 = -492;
	int16_t x295 = 14102;
	uint16_t x296 = UINT16_MAX;
	int32_t t62 = 18692;

	t62 = ((x293/(x294-x295))-x296);

	if (t62 != -65535) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x297 = 20U;
	static int16_t x298 = INT16_MAX;
	uint32_t x299 = 46788U;
	int64_t x300 = -1LL;

	t63 = ((x297/(x298-x299))-x300);

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x301 = 1U;
	int32_t x302 = 1052;
	int32_t x303 = INT32_MAX;
	int64_t x304 = -56LL;

	t64 = ((x301/(x302-x303))-x304);

	if (t64 != 56LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x305 = INT8_MIN;
	static uint64_t x306 = 605360565000935833LLU;
	uint32_t x307 = 115836110U;
	static volatile int8_t x308 = 1;
	static volatile uint64_t t65 = 123LLU;

	t65 = ((x305/(x306-x307))-x308);

	if (t65 != 29LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x309 = INT64_MIN;
	volatile uint16_t x310 = 24224U;
	uint64_t x311 = 539156315025LLU;
	static int8_t x312 = INT8_MIN;
	volatile uint64_t t66 = 516LLU;

	t66 = ((x309/(x310-x311))-x312);

	if (t66 != 128LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x313 = 280784930195LL;
	static volatile int8_t x316 = 1;
	volatile int64_t t67 = 30294171LL;

	t67 = ((x313/(x314-x315))-x316);

	if (t67 != 8568875LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x321 = -2;
	int8_t x324 = 0;
	static int32_t t68 = 6544;

	t68 = ((x321/(x322-x323))-x324);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x325 = UINT8_MAX;
	int16_t x326 = INT16_MIN;
	int8_t x327 = INT8_MIN;
	int16_t x328 = INT16_MIN;
	volatile int32_t t69 = 26091053;

	t69 = ((x325/(x326-x327))-x328);

	if (t69 != 32768) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x329 = UINT64_MAX;
	int16_t x330 = INT16_MIN;
	static int16_t x331 = 0;
	uint64_t x332 = UINT64_MAX;
	volatile uint64_t t70 = 3789614653408198LLU;

	t70 = ((x329/(x330-x331))-x332);

	if (t70 != 2LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x333 = 2U;
	int16_t x334 = INT16_MAX;
	static int8_t x335 = INT8_MIN;
	uint8_t x336 = 0U;
	int32_t t71 = 635;

	t71 = ((x333/(x334-x335))-x336);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x337 = INT64_MAX;
	uint16_t x338 = 5205U;
	uint16_t x339 = 20614U;
	volatile int64_t x340 = 1300410041771463LL;
	static volatile int64_t t72 = 113585088768638048LL;

	t72 = ((x337/(x338-x339))-x340);

	if (t72 != -1898980490006570LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x349 = INT8_MIN;
	uint32_t x350 = UINT32_MAX;
	volatile int8_t x351 = 1;

	t73 = ((x349/(x350-x351))-x352);

	if (t73 != 18446744073709551320LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x353 = 1098LLU;
	int8_t x354 = INT8_MIN;
	int64_t x355 = INT64_MIN;
	uint64_t x356 = 54206965713157367LLU;
	volatile uint64_t t74 = 22319906445897LLU;

	t74 = ((x353/(x354-x355))-x356);

	if (t74 != 18392537107996394249LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x361 = 6677U;
	uint64_t x362 = 21LLU;
	int16_t x363 = -1;
	int16_t x364 = INT16_MIN;
	uint64_t t75 = 432LLU;

	t75 = ((x361/(x362-x363))-x364);

	if (t75 != 33071LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x365 = -1;
	volatile int32_t x366 = 28770;
	volatile int16_t x368 = -1;
	int32_t t76 = 1039;

	t76 = ((x365/(x366-x367))-x368);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x370 = INT32_MIN;
	volatile int8_t x372 = INT8_MAX;
	volatile int64_t t77 = -264235046555635LL;

	t77 = ((x369/(x370-x371))-x372);

	if (t77 != -127LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x373 = 3;
	uint16_t x374 = 56U;
	static uint32_t x375 = 3U;
	volatile uint32_t t78 = 219172U;

	t78 = ((x373/(x374-x375))-x376);

	if (t78 != 2147483649U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x390 = 5734;
	int16_t x391 = -1;
	int64_t x392 = INT64_MIN;
	volatile int64_t t79 = -28LL;

	t79 = ((x389/(x390-x391))-x392);

	if (t79 != 9223372036854621686LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x393 = INT16_MIN;
	volatile int64_t x394 = -1LL;
	uint16_t x395 = 1U;
	int16_t x396 = -197;
	volatile int64_t t80 = 4LL;

	t80 = ((x393/(x394-x395))-x396);

	if (t80 != 16581LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x397 = -35745;
	uint64_t x398 = 1823889LLU;
	uint64_t x399 = UINT64_MAX;
	int8_t x400 = -1;

	t81 = ((x397/(x398-x399))-x400);

	if (t81 != 10113956474190LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x409 = UINT16_MAX;
	uint16_t x410 = 656U;
	int8_t x411 = INT8_MIN;
	int64_t x412 = -1LL;
	volatile int64_t t82 = 9LL;

	t82 = ((x409/(x410-x411))-x412);

	if (t82 != 84LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x413 = 50257992296LL;
	int64_t x415 = INT64_MAX;
	volatile uint16_t x416 = 1U;

	t83 = ((x413/(x414-x415))-x416);

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x417 = INT8_MAX;
	int16_t x418 = 42;
	uint8_t x419 = 30U;
	uint16_t x420 = 0U;
	volatile int32_t t84 = 35;

	t84 = ((x417/(x418-x419))-x420);

	if (t84 != 10) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x422 = INT64_MIN;
	uint64_t x423 = 32802921LLU;
	uint8_t x424 = 5U;

	t85 = ((x421/(x422-x423))-x424);

	if (t85 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x429 = INT64_MIN;
	uint64_t x430 = 791141LLU;
	static uint16_t x431 = 169U;
	static volatile int32_t x432 = INT32_MIN;
	static volatile uint64_t t86 = 166654LLU;

	t86 = ((x429/(x430-x431))-x432);

	if (t86 != 11662954739599LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x433 = UINT8_MAX;
	static volatile uint64_t x435 = 2111571646070457299LLU;
	uint64_t t87 = 803038549448732LLU;

	t87 = ((x433/(x434-x435))-x436);

	if (t87 != 18446744073709551567LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x437 = 1977U;
	int8_t x439 = -44;
	static int32_t t88 = 67089298;

	t88 = ((x437/(x438-x439))-x440);

	if (t88 != -32767) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x443 = 7;
	int8_t x444 = 48;
	static int32_t t89 = -83;

	t89 = ((x441/(x442-x443))-x444);

	if (t89 != -48) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x450 = -3;
	int8_t x451 = -1;
	uint64_t t90 = 5LLU;

	t90 = ((x449/(x450-x451))-x452);

	if (t90 != 24153404916658110LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x453 = INT16_MAX;
	uint64_t x455 = UINT64_MAX;
	uint64_t x456 = 79112387702LLU;
	static volatile uint64_t t91 = 1LLU;

	t91 = ((x453/(x454-x455))-x456);

	if (t91 != 18446743994597164169LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x461 = UINT16_MAX;
	int32_t x462 = -928341;
	volatile uint64_t x463 = 5365LLU;
	int32_t x464 = -66;
	uint64_t t92 = 6LLU;

	t92 = ((x461/(x462-x463))-x464);

	if (t92 != 66LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x465 = 112807LLU;
	volatile int64_t x466 = INT64_MIN;
	volatile int32_t x467 = -3;
	volatile uint64_t t93 = 408019413LLU;

	t93 = ((x465/(x466-x467))-x468);

	if (t93 != 18335356693212184557LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint16_t x469 = UINT16_MAX;
	uint16_t x470 = 12824U;
	uint32_t x471 = 187U;
	volatile int16_t x472 = INT16_MAX;
	volatile uint32_t t94 = 26984665U;

	t94 = ((x469/(x470-x471))-x472);

	if (t94 != 4294934534U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x480 = 7377980U;
	uint64_t t95 = 12660137011889LLU;

	t95 = ((x477/(x478-x479))-x480);

	if (t95 != 18446744073702173637LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x481 = 2U;
	int32_t x482 = INT32_MIN;
	static int64_t x483 = -2628282157853407576LL;
	uint16_t x484 = 74U;
	volatile int64_t t96 = 927851630438LL;

	t96 = ((x481/(x482-x483))-x484);

	if (t96 != -74LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x485 = 2912U;
	uint32_t x486 = 3491479U;
	int32_t x488 = -57;
	uint32_t t97 = 144U;

	t97 = ((x485/(x486-x487))-x488);

	if (t97 != 57U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x490 = 3205U;
	uint8_t x491 = 3U;
	volatile int64_t x492 = INT64_MIN;
	int64_t t98 = 17044322711LL;

	t98 = ((x489/(x490-x491))-x492);

	if (t98 != 9220491533407912980LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x498 = UINT64_MAX;
	uint64_t x499 = 918588422LLU;
	volatile uint64_t t99 = 20696796992882900LLU;

	t99 = ((x497/(x498-x499))-x500);

	if (t99 != 18446744073709518849LLU) { NG(); } else { ; }
	
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

