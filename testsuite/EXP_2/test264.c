#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x10 = 0LLU;
volatile int32_t t2 = 6410;
int16_t x16 = -2639;
uint8_t x17 = 23U;
uint64_t x22 = 8697548503519LLU;
volatile int64_t t5 = 133024289225345LL;
static volatile int32_t t7 = -140714;
int64_t x37 = 4210638404850911LL;
int64_t t8 = 14LL;
static volatile int16_t x42 = INT16_MIN;
uint8_t x48 = 8U;
static volatile int32_t x60 = -1;
volatile int32_t t14 = 491653;
uint64_t x70 = 68LLU;
static uint32_t x74 = 2U;
volatile uint32_t x75 = 1U;
int16_t x81 = -1;
uint8_t x93 = 0U;
static int8_t x94 = -4;
static uint64_t t21 = 17599181LLU;
uint32_t t22 = 129074922U;
int8_t x103 = INT8_MAX;
int32_t t24 = -189151781;
int8_t x110 = INT8_MIN;
volatile int32_t t25 = -95;
volatile uint64_t x131 = UINT64_MAX;
static uint16_t x132 = 1U;
int32_t x137 = -12;
int8_t x138 = -4;
int16_t x139 = INT16_MAX;
uint16_t x155 = 15419U;
volatile uint32_t t35 = 11U;
uint8_t x158 = UINT8_MAX;
static int8_t x177 = INT8_MIN;
uint32_t x183 = 0U;
uint8_t x192 = 27U;
int32_t t42 = -15266831;
volatile int32_t t43 = -969568133;
int32_t x201 = INT32_MIN;
int32_t x206 = 0;
volatile int32_t t45 = -59649156;
static uint8_t x222 = UINT8_MAX;
static volatile uint64_t x225 = UINT64_MAX;
volatile int8_t x226 = -26;
int16_t x227 = -699;
uint16_t x230 = 73U;
int32_t t49 = -356;
int8_t x237 = 1;
uint16_t x252 = UINT16_MAX;
static uint64_t x253 = UINT64_MAX;
int16_t x255 = -1;
volatile uint8_t x257 = 1U;
int8_t x261 = -1;
uint64_t x264 = 480LLU;
uint64_t t55 = 1046946043412LLU;
int64_t x267 = -23108331929612LL;
int32_t x269 = INT32_MAX;
uint64_t x272 = 1074268666123010142LLU;
uint32_t x279 = UINT32_MAX;
int16_t x282 = -586;
int32_t x288 = 2985644;
int64_t x289 = INT64_MAX;
static int64_t x290 = INT64_MIN;
volatile int32_t t62 = 12788365;
uint16_t x298 = 0U;
uint64_t x302 = 15173562LLU;
uint64_t x311 = UINT64_MAX;
int32_t t66 = 297209812;
uint64_t x314 = 18483987114590LLU;
static int32_t x318 = INT32_MIN;
int32_t t68 = 913914134;
volatile uint8_t x328 = UINT8_MAX;
int32_t t69 = -5;
uint64_t t71 = 1011135306778LLU;
volatile int8_t x345 = INT8_MIN;
int32_t x347 = INT32_MIN;
int16_t x352 = -1;
static int64_t x354 = -7431999LL;
int16_t x355 = -1;
int16_t x356 = INT16_MIN;
int64_t x357 = INT64_MIN;
uint8_t x381 = 29U;
static int32_t x383 = -508;
static volatile int8_t x387 = -1;
uint16_t x398 = 101U;
int64_t x409 = 4806LL;
int8_t x412 = INT8_MIN;
int8_t x413 = INT8_MIN;
int32_t t83 = 686;
uint32_t x420 = 305U;
static int64_t x421 = INT64_MAX;
int32_t x423 = 975;
volatile uint32_t t85 = 2016488928U;
static uint32_t x431 = 663442844U;
static int64_t x432 = INT64_MIN;
int8_t x434 = INT8_MAX;
static int8_t x437 = -3;
volatile int16_t x438 = -1;
int32_t x452 = INT32_MIN;
volatile uint32_t x458 = 28U;
volatile int32_t t96 = 0;
int8_t x473 = -1;
int64_t x474 = INT64_MIN;
static volatile uint64_t x475 = 1755829647LLU;
int32_t t98 = 13829;
int64_t x481 = -1LL;


void f0(void) {
	volatile int32_t x1 = INT32_MIN;
	volatile int32_t x2 = INT32_MAX;
	int64_t x3 = 0LL;
	volatile int64_t x4 = INT64_MAX;
	volatile int64_t t0 = 463485424103988338LL;

	t0 = ((x1==(x2-x3))/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int8_t x6 = -1;
	int32_t x7 = -1;
	int64_t x8 = INT64_MIN;
	int64_t t1 = 6768673LL;

	t1 = ((x5==(x6-x7))/x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int32_t x11 = 185112;
	int8_t x12 = -1;

	t2 = ((x9==(x10-x11))/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = 0;
	volatile int8_t x14 = -7;
	int8_t x15 = -17;
	volatile int32_t t3 = 320;

	t3 = ((x13==(x14-x15))/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = 3;
	int16_t x19 = INT16_MAX;
	uint32_t x20 = UINT32_MAX;
	volatile uint32_t t4 = 137515804U;

	t4 = ((x17==(x18-x19))/x20);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = INT8_MIN;
	static uint64_t x23 = 2570LLU;
	int64_t x24 = INT64_MIN;

	t5 = ((x21==(x22-x23))/x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	uint64_t x26 = 3LLU;
	static uint8_t x27 = UINT8_MAX;
	int64_t x28 = -36354107032956LL;
	int64_t t6 = -99497739893279841LL;

	t6 = ((x25==(x26-x27))/x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -2375326;
	static uint8_t x30 = 81U;
	int8_t x31 = 22;
	int8_t x32 = -1;

	t7 = ((x29==(x30-x31))/x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x38 = 102U;
	volatile int16_t x39 = -1;
	int64_t x40 = -1LL;

	t8 = ((x37==(x38-x39))/x40);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = UINT8_MAX;
	int32_t x43 = -1;
	int32_t x44 = 5;
	int32_t t9 = -8371896;

	t9 = ((x41==(x42-x43))/x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x45 = 2;
	int8_t x46 = INT8_MIN;
	volatile int8_t x47 = -1;
	static int32_t t10 = 3;

	t10 = ((x45==(x46-x47))/x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x49 = 0;
	volatile uint64_t x50 = 22LLU;
	int8_t x51 = -24;
	uint16_t x52 = 25U;
	volatile int32_t t11 = -104133;

	t11 = ((x49==(x50-x51))/x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x53 = -1;
	uint16_t x54 = 7436U;
	int64_t x55 = -11709470089577419LL;
	uint8_t x56 = UINT8_MAX;
	int32_t t12 = 3362162;

	t12 = ((x53==(x54-x55))/x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = 0;
	static int64_t x58 = -1LL;
	volatile int8_t x59 = 37;
	static volatile int32_t t13 = -7125522;

	t13 = ((x57==(x58-x59))/x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x61 = INT8_MIN;
	int16_t x62 = -1;
	volatile uint32_t x63 = 9957012U;
	int8_t x64 = INT8_MIN;

	t14 = ((x61==(x62-x63))/x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MIN;
	uint8_t x66 = 2U;
	int16_t x67 = 1;
	static int32_t x68 = -21422079;
	int32_t t15 = -227228480;

	t15 = ((x65==(x66-x67))/x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = 58;
	int64_t x71 = -1LL;
	uint8_t x72 = 122U;
	static int32_t t16 = -2156;

	t16 = ((x69==(x70-x71))/x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x73 = -1;
	static uint16_t x76 = 31U;
	int32_t t17 = 0;

	t17 = ((x73==(x74-x75))/x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x77 = UINT16_MAX;
	uint64_t x78 = 343LLU;
	uint64_t x79 = 386897334LLU;
	uint32_t x80 = UINT32_MAX;
	volatile uint32_t t18 = 6606596U;

	t18 = ((x77==(x78-x79))/x80);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x82 = INT16_MIN;
	int32_t x83 = -1;
	volatile uint32_t x84 = UINT32_MAX;
	volatile uint32_t t19 = 12765967U;

	t19 = ((x81==(x82-x83))/x84);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x89 = INT8_MAX;
	volatile int16_t x90 = INT16_MIN;
	int8_t x91 = INT8_MAX;
	volatile int64_t x92 = INT64_MIN;
	int64_t t20 = -2784592056837576042LL;

	t20 = ((x89==(x90-x91))/x92);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x95 = 0U;
	uint64_t x96 = 16918780081LLU;

	t21 = ((x93==(x94-x95))/x96);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x97 = -1;
	int8_t x98 = INT8_MAX;
	int16_t x99 = -721;
	uint32_t x100 = 1176665633U;

	t22 = ((x97==(x98-x99))/x100);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x101 = UINT16_MAX;
	volatile int16_t x102 = -1;
	static uint8_t x104 = 7U;
	volatile int32_t t23 = -1981877;

	t23 = ((x101==(x102-x103))/x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x105 = UINT16_MAX;
	int16_t x106 = -3731;
	uint8_t x107 = UINT8_MAX;
	int8_t x108 = INT8_MAX;

	t24 = ((x105==(x106-x107))/x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x109 = -1;
	uint8_t x111 = UINT8_MAX;
	int16_t x112 = -1;

	t25 = ((x109==(x110-x111))/x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x113 = 0U;
	static volatile int16_t x114 = INT16_MAX;
	static volatile int16_t x115 = -1;
	uint64_t x116 = 10LLU;
	uint64_t t26 = 2LLU;

	t26 = ((x113==(x114-x115))/x116);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x117 = INT8_MIN;
	uint8_t x118 = UINT8_MAX;
	uint64_t x119 = 155453380424657LLU;
	int8_t x120 = INT8_MAX;
	int32_t t27 = 250012;

	t27 = ((x117==(x118-x119))/x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x125 = 106051LLU;
	static uint8_t x126 = UINT8_MAX;
	int8_t x127 = INT8_MIN;
	uint16_t x128 = 175U;
	static int32_t t28 = -1870;

	t28 = ((x125==(x126-x127))/x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x129 = INT8_MIN;
	static uint8_t x130 = 11U;
	volatile int32_t t29 = 4878;

	t29 = ((x129==(x130-x131))/x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = -1;
	volatile int32_t x134 = -347614278;
	int32_t x135 = -76563086;
	int16_t x136 = INT16_MIN;
	static volatile int32_t t30 = 9;

	t30 = ((x133==(x134-x135))/x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x140 = -1LL;
	int64_t t31 = 5408560933608LL;

	t31 = ((x137==(x138-x139))/x140);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x141 = 1116980865266LLU;
	static volatile int8_t x142 = -1;
	static int8_t x143 = INT8_MAX;
	uint64_t x144 = 66LLU;
	volatile uint64_t t32 = 1727244LLU;

	t32 = ((x141==(x142-x143))/x144);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = 0;
	volatile int8_t x146 = INT8_MAX;
	uint8_t x147 = 27U;
	int32_t x148 = 6154270;
	static int32_t t33 = 6236;

	t33 = ((x145==(x146-x147))/x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint8_t x149 = 3U;
	int16_t x150 = 26;
	static int16_t x151 = -8964;
	int64_t x152 = INT64_MIN;
	static volatile int64_t t34 = 420LL;

	t34 = ((x149==(x150-x151))/x152);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x153 = 620714056321544LLU;
	int8_t x154 = INT8_MIN;
	static uint32_t x156 = 105U;

	t35 = ((x153==(x154-x155))/x156);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x157 = -73009436015LL;
	int64_t x159 = -1LL;
	int8_t x160 = INT8_MAX;
	volatile int32_t t36 = 131;

	t36 = ((x157==(x158-x159))/x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x165 = 61U;
	volatile uint64_t x166 = 8792829560912496LLU;
	volatile int8_t x167 = 0;
	uint16_t x168 = 82U;
	volatile int32_t t37 = -6;

	t37 = ((x165==(x166-x167))/x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x169 = 7952959105022168LLU;
	uint32_t x170 = 3U;
	int8_t x171 = INT8_MIN;
	uint8_t x172 = UINT8_MAX;
	volatile int32_t t38 = -7;

	t38 = ((x169==(x170-x171))/x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x178 = -7;
	int32_t x179 = -1;
	int16_t x180 = INT16_MAX;
	static int32_t t39 = -27;

	t39 = ((x177==(x178-x179))/x180);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x181 = INT16_MIN;
	int64_t x182 = -8480446510765217LL;
	int8_t x184 = 1;
	volatile int32_t t40 = -32;

	t40 = ((x181==(x182-x183))/x184);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x185 = INT64_MIN;
	static int16_t x186 = -154;
	volatile uint32_t x187 = 438U;
	uint64_t x188 = 6040392LLU;
	volatile uint64_t t41 = 1LLU;

	t41 = ((x185==(x186-x187))/x188);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x189 = 24751LLU;
	int16_t x190 = -139;
	static int16_t x191 = INT16_MIN;

	t42 = ((x189==(x190-x191))/x192);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x193 = 84U;
	volatile int32_t x194 = INT32_MIN;
	int32_t x195 = INT32_MIN;
	int16_t x196 = 42;

	t43 = ((x193==(x194-x195))/x196);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x202 = 9032885;
	uint16_t x203 = 19U;
	uint64_t x204 = UINT64_MAX;
	uint64_t t44 = 0LLU;

	t44 = ((x201==(x202-x203))/x204);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x205 = -17;
	int64_t x207 = INT64_MAX;
	int32_t x208 = INT32_MIN;

	t45 = ((x205==(x206-x207))/x208);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x209 = INT16_MIN;
	volatile uint32_t x210 = 6U;
	static uint64_t x211 = UINT64_MAX;
	volatile int16_t x212 = INT16_MIN;
	volatile int32_t t46 = 6337;

	t46 = ((x209==(x210-x211))/x212);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x221 = 15;
	int8_t x223 = INT8_MIN;
	uint32_t x224 = 122311U;
	uint32_t t47 = 395084U;

	t47 = ((x221==(x222-x223))/x224);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x228 = INT16_MIN;
	static int32_t t48 = -241373103;

	t48 = ((x225==(x226-x227))/x228);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x229 = 1U;
	static uint64_t x231 = 5LLU;
	uint8_t x232 = 57U;

	t49 = ((x229==(x230-x231))/x232);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x233 = 1U;
	static int32_t x234 = INT32_MIN;
	uint64_t x235 = 10758LLU;
	static uint64_t x236 = 10314795272819523LLU;
	uint64_t t50 = 32711712624LLU;

	t50 = ((x233==(x234-x235))/x236);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x238 = -1LL;
	uint32_t x239 = 1U;
	uint8_t x240 = 4U;
	volatile int32_t t51 = 438818112;

	t51 = ((x237==(x238-x239))/x240);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x249 = 2U;
	volatile int8_t x250 = INT8_MAX;
	int8_t x251 = 0;
	volatile int32_t t52 = -5311;

	t52 = ((x249==(x250-x251))/x252);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x254 = 26U;
	int32_t x256 = -316207;
	volatile int32_t t53 = -388974324;

	t53 = ((x253==(x254-x255))/x256);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x258 = -1;
	uint32_t x259 = 0U;
	static volatile int16_t x260 = -1;
	int32_t t54 = 552294094;

	t54 = ((x257==(x258-x259))/x260);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x262 = 0;
	static uint64_t x263 = 1649221LLU;

	t55 = ((x261==(x262-x263))/x264);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x265 = -162287;
	volatile int32_t x266 = 1;
	volatile int8_t x268 = -1;
	volatile int32_t t56 = 3385;

	t56 = ((x265==(x266-x267))/x268);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x270 = 4U;
	uint32_t x271 = 1578919U;
	uint64_t t57 = 1424LLU;

	t57 = ((x269==(x270-x271))/x272);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x273 = INT8_MIN;
	volatile int8_t x274 = INT8_MIN;
	uint64_t x275 = 15153046443727559LLU;
	static int64_t x276 = -1LL;
	static volatile int64_t t58 = 117LL;

	t58 = ((x273==(x274-x275))/x276);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x277 = INT64_MIN;
	int64_t x278 = -1LL;
	uint16_t x280 = UINT16_MAX;
	volatile int32_t t59 = -17147774;

	t59 = ((x277==(x278-x279))/x280);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x281 = -740544943878884883LL;
	int8_t x283 = INT8_MAX;
	int64_t x284 = INT64_MAX;
	int64_t t60 = -1LL;

	t60 = ((x281==(x282-x283))/x284);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x285 = UINT8_MAX;
	uint16_t x286 = 165U;
	int16_t x287 = INT16_MAX;
	volatile int32_t t61 = -198;

	t61 = ((x285==(x286-x287))/x288);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x291 = -318;
	int32_t x292 = INT32_MIN;

	t62 = ((x289==(x290-x291))/x292);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint64_t x297 = UINT64_MAX;
	int8_t x299 = INT8_MAX;
	volatile int32_t x300 = 71397;
	volatile int32_t t63 = -15;

	t63 = ((x297==(x298-x299))/x300);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x301 = INT8_MIN;
	int16_t x303 = 0;
	uint64_t x304 = 968181836556277511LLU;
	static volatile uint64_t t64 = 6398LLU;

	t64 = ((x301==(x302-x303))/x304);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x305 = 6;
	int64_t x306 = 2076476LL;
	static volatile uint16_t x307 = 38U;
	int8_t x308 = -41;
	volatile int32_t t65 = -2967;

	t65 = ((x305==(x306-x307))/x308);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x309 = -12465010LL;
	static uint64_t x310 = 24763468778154838LLU;
	uint8_t x312 = UINT8_MAX;

	t66 = ((x309==(x310-x311))/x312);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x313 = INT32_MIN;
	volatile uint64_t x315 = 15930LLU;
	static uint64_t x316 = UINT64_MAX;
	uint64_t t67 = 185510173814LLU;

	t67 = ((x313==(x314-x315))/x316);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x317 = 1;
	uint64_t x319 = 61LLU;
	static int16_t x320 = 8;

	t68 = ((x317==(x318-x319))/x320);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x325 = INT32_MIN;
	uint8_t x326 = UINT8_MAX;
	int8_t x327 = INT8_MIN;

	t69 = ((x325==(x326-x327))/x328);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x329 = INT64_MAX;
	volatile int16_t x330 = INT16_MAX;
	int8_t x331 = -1;
	int8_t x332 = -1;
	int32_t t70 = 22967;

	t70 = ((x329==(x330-x331))/x332);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x333 = UINT32_MAX;
	int32_t x334 = INT32_MIN;
	int64_t x335 = -13053215170603LL;
	static uint64_t x336 = UINT64_MAX;

	t71 = ((x333==(x334-x335))/x336);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x346 = 0LL;
	uint32_t x348 = UINT32_MAX;
	uint32_t t72 = 20U;

	t72 = ((x345==(x346-x347))/x348);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x349 = -1;
	volatile int64_t x350 = 114504173383LL;
	int16_t x351 = -62;
	volatile int32_t t73 = -6832;

	t73 = ((x349==(x350-x351))/x352);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x353 = -1;
	static volatile int32_t t74 = 38603423;

	t74 = ((x353==(x354-x355))/x356);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x358 = -33254437439LL;
	int8_t x359 = INT8_MIN;
	static int8_t x360 = 9;
	int32_t t75 = -117492;

	t75 = ((x357==(x358-x359))/x360);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x373 = INT64_MIN;
	int32_t x374 = 1;
	int32_t x375 = 642;
	uint16_t x376 = UINT16_MAX;
	volatile int32_t t76 = 1;

	t76 = ((x373==(x374-x375))/x376);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x382 = UINT32_MAX;
	int16_t x384 = -1;
	static int32_t t77 = 316;

	t77 = ((x381==(x382-x383))/x384);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x385 = 32007415316035253LLU;
	int32_t x386 = INT32_MIN;
	int64_t x388 = -1LL;
	int64_t t78 = -8010151LL;

	t78 = ((x385==(x386-x387))/x388);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x393 = 1329770LLU;
	int32_t x394 = INT32_MIN;
	uint64_t x395 = 167697083944214675LLU;
	static int32_t x396 = INT32_MAX;
	static int32_t t79 = 2;

	t79 = ((x393==(x394-x395))/x396);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x397 = 13143U;
	int64_t x399 = 188990343568LL;
	uint16_t x400 = 1783U;
	int32_t t80 = 10745834;

	t80 = ((x397==(x398-x399))/x400);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x405 = 4;
	int64_t x406 = -1LL;
	static int32_t x407 = INT32_MIN;
	static int16_t x408 = INT16_MIN;
	volatile int32_t t81 = 61;

	t81 = ((x405==(x406-x407))/x408);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x410 = UINT16_MAX;
	int64_t x411 = INT64_MAX;
	static int32_t t82 = -10;

	t82 = ((x409==(x410-x411))/x412);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x414 = 11;
	int16_t x415 = -1;
	int8_t x416 = INT8_MAX;

	t83 = ((x413==(x414-x415))/x416);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x417 = 1U;
	static int16_t x418 = -1;
	uint16_t x419 = 6U;
	volatile uint32_t t84 = 168673U;

	t84 = ((x417==(x418-x419))/x420);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x422 = 0;
	volatile uint32_t x424 = 451682290U;

	t85 = ((x421==(x422-x423))/x424);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x425 = UINT8_MAX;
	volatile uint64_t x426 = 7LLU;
	volatile int16_t x427 = -1;
	static int64_t x428 = -1LL;
	static int64_t t86 = -11064809876729LL;

	t86 = ((x425==(x426-x427))/x428);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x429 = -1;
	uint64_t x430 = UINT64_MAX;
	volatile int64_t t87 = -893LL;

	t87 = ((x429==(x430-x431))/x432);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x433 = 0;
	volatile int64_t x435 = 1287486252824LL;
	int64_t x436 = -226747LL;
	volatile int64_t t88 = 14593003847286114LL;

	t88 = ((x433==(x434-x435))/x436);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x439 = INT32_MIN;
	static int16_t x440 = INT16_MIN;
	int32_t t89 = -46253;

	t89 = ((x437==(x438-x439))/x440);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x441 = INT16_MIN;
	static volatile int32_t x442 = INT32_MIN;
	int16_t x443 = INT16_MIN;
	int32_t x444 = -688;
	volatile int32_t t90 = -2778924;

	t90 = ((x441==(x442-x443))/x444);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x445 = -1;
	int16_t x446 = -1;
	int8_t x447 = INT8_MIN;
	static volatile uint32_t x448 = 1936023011U;
	uint32_t t91 = 2958U;

	t91 = ((x445==(x446-x447))/x448);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x449 = 8;
	volatile int64_t x450 = INT64_MAX;
	int64_t x451 = INT64_MAX;
	volatile int32_t t92 = 0;

	t92 = ((x449==(x450-x451))/x452);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x453 = INT8_MAX;
	uint8_t x454 = 2U;
	int8_t x455 = INT8_MIN;
	static int16_t x456 = INT16_MAX;
	volatile int32_t t93 = -17588506;

	t93 = ((x453==(x454-x455))/x456);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x457 = INT16_MIN;
	volatile int16_t x459 = INT16_MIN;
	uint8_t x460 = 118U;
	int32_t t94 = -12475;

	t94 = ((x457==(x458-x459))/x460);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x461 = INT32_MAX;
	int32_t x462 = -1;
	volatile uint8_t x463 = 6U;
	int64_t x464 = INT64_MIN;
	int64_t t95 = 7125109919560600LL;

	t95 = ((x461==(x462-x463))/x464);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x465 = 3191U;
	uint64_t x466 = 8377116LLU;
	uint16_t x467 = 55U;
	static int32_t x468 = -1527515;

	t96 = ((x465==(x466-x467))/x468);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x476 = -1;
	volatile int32_t t97 = -810118800;

	t97 = ((x473==(x474-x475))/x476);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x477 = 5;
	int32_t x478 = -162352;
	int32_t x479 = INT32_MIN;
	int8_t x480 = INT8_MAX;

	t98 = ((x477==(x478-x479))/x480);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint32_t x482 = 593U;
	int16_t x483 = INT16_MIN;
	int16_t x484 = INT16_MIN;
	volatile int32_t t99 = -357304090;

	t99 = ((x481==(x482-x483))/x484);

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

