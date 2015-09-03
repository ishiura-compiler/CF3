#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = UINT64_MAX;
int16_t x3 = INT16_MIN;
static uint8_t x7 = 1U;
uint32_t x9 = 129U;
volatile int32_t x15 = -3242922;
int64_t t3 = 135199065113LL;
volatile int8_t x21 = -1;
int64_t x22 = INT64_MAX;
uint32_t t4 = UINT32_MAX;
int64_t t5 = 67032003796144028LL;
uint32_t x30 = UINT32_MAX;
int64_t x37 = INT64_MAX;
uint8_t x40 = 1U;
int32_t x42 = -54289101;
static int8_t x45 = INT8_MIN;
int8_t x50 = INT8_MIN;
static int16_t x52 = INT16_MIN;
int64_t x65 = 3382926438381455LL;
int32_t x68 = INT32_MIN;
uint16_t x69 = 24U;
int64_t x70 = INT64_MIN;
static int8_t x76 = INT8_MAX;
uint8_t x79 = 3U;
uint8_t x82 = 3U;
volatile int32_t t16 = -805245372;
int64_t x88 = -1LL;
int64_t t17 = 1638LL;
int16_t x90 = INT16_MAX;
int32_t t18 = -33201;
static volatile uint16_t x94 = UINT16_MAX;
static uint16_t x96 = 3U;
static volatile uint32_t t20 = 16U;
int32_t x103 = -23;
uint32_t x104 = 207U;
volatile uint64_t x105 = UINT64_MAX;
uint8_t x110 = 15U;
static volatile int32_t x112 = INT32_MIN;
int16_t x114 = INT16_MAX;
int64_t x121 = INT64_MIN;
int64_t t26 = -8477212252767LL;
static int8_t x125 = INT8_MAX;
volatile int32_t x130 = 5786;
uint64_t x134 = UINT64_MAX;
int8_t x136 = 0;
int16_t x141 = 0;
int64_t x144 = INT64_MIN;
int64_t x146 = INT64_MAX;
static uint8_t x153 = UINT8_MAX;
static int32_t t33 = -6502675;
int64_t x159 = INT64_MIN;
volatile int8_t x165 = -50;
uint64_t x174 = 138505215693459LLU;
uint16_t x175 = 547U;
uint32_t x182 = UINT32_MAX;
int32_t x183 = INT32_MAX;
uint32_t x185 = 1U;
uint64_t x196 = 19428179LLU;
static volatile uint8_t x197 = UINT8_MAX;
uint8_t x198 = 1U;
uint64_t x203 = 55LLU;
uint64_t t44 = 6976855154118601LLU;
volatile int64_t x205 = INT64_MIN;
volatile uint64_t x210 = UINT64_MAX;
volatile int8_t x211 = INT8_MIN;
static volatile int64_t t47 = 104LL;
static int16_t x225 = INT16_MIN;
uint16_t x231 = 6389U;
volatile uint64_t t51 = 111507778342338427LLU;
int8_t x233 = -1;
volatile int32_t t52 = 92;
volatile uint32_t x241 = 53328288U;
volatile int16_t x249 = 1214;
int8_t x253 = -1;
int64_t x266 = -2516135876455981243LL;
volatile int16_t x267 = INT16_MIN;
int16_t x274 = INT16_MIN;
int16_t x278 = INT16_MAX;
int64_t x290 = INT64_MAX;
static uint16_t x292 = UINT16_MAX;
volatile int32_t x297 = INT32_MIN;
uint8_t x298 = 1U;
int64_t x300 = -2LL;
int64_t t66 = -168067663119858LL;
int8_t x302 = 4;
int64_t t67 = 311320447LL;
uint64_t x306 = UINT64_MAX;
uint16_t x311 = 2811U;
static uint64_t x316 = 469139487733LLU;
volatile uint64_t t70 = 2023LLU;
volatile int32_t t71 = -6913032;
uint16_t x322 = UINT16_MAX;
int64_t x323 = -15383837422636691LL;
int8_t x327 = INT8_MIN;
volatile uint16_t x332 = 10U;
uint16_t x349 = UINT16_MAX;
int16_t x352 = -94;
int32_t x353 = -1;
int64_t x355 = 0LL;
int64_t x362 = -1165691925521LL;
int64_t x363 = -1LL;
uint32_t x366 = 14996U;
static volatile int32_t t83 = -507;
int32_t t84 = -1980943;
static volatile uint64_t x379 = 2914LLU;
uint64_t x380 = UINT64_MAX;
volatile uint64_t t85 = 15659392524985457LLU;
volatile int32_t x383 = -1851;
uint16_t x386 = 14774U;
uint8_t x392 = 1U;
volatile int32_t t89 = -103;
int32_t x402 = INT32_MAX;
static int64_t x408 = INT64_MAX;
int64_t t91 = -484790816LL;
uint8_t x418 = 9U;
volatile uint16_t x424 = 14062U;
static uint16_t x427 = 120U;
uint64_t t98 = 59491LLU;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = INT32_MIN;

	t0 = (x1+((x2<x3)*x4));

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	int32_t x6 = -60528256;
	uint32_t x8 = UINT32_MAX;
	volatile uint64_t t1 = 61085493952LLU;

	t1 = (x5+((x6<x7)*x8));

	if (t1 != 4294967294LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = INT8_MIN;
	static uint16_t x11 = UINT16_MAX;
	int16_t x12 = 30;
	volatile uint32_t t2 = 2U;

	t2 = (x9+((x10<x11)*x12));

	if (t2 != 159U) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -1LL;
	static int64_t x14 = -1LL;
	int16_t x16 = INT16_MIN;

	t3 = (x13+((x14<x15)*x16));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x23 = 0;
	uint32_t x24 = UINT32_MAX;

	t4 = (x21+((x22<x23)*x24));

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x25 = -17733LL;
	int16_t x26 = -1;
	int16_t x27 = -15;
	volatile uint32_t x28 = 1U;

	t5 = (x25+((x26<x27)*x28));

	if (t5 != -17733LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MIN;
	uint32_t x31 = 143U;
	int32_t x32 = INT32_MAX;
	volatile int32_t t6 = -19461878;

	t6 = (x29+((x30<x31)*x32));

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x38 = INT64_MAX;
	int64_t x39 = INT64_MIN;
	int64_t t7 = INT64_MAX;

	t7 = (x37+((x38<x39)*x40));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = -1;
	int8_t x43 = INT8_MAX;
	int16_t x44 = INT16_MIN;
	int32_t t8 = 115718840;

	t8 = (x41+((x42<x43)*x44));

	if (t8 != -32769) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x46 = -1098774071323734780LL;
	volatile uint8_t x47 = UINT8_MAX;
	volatile int8_t x48 = INT8_MAX;
	int32_t t9 = -17937;

	t9 = (x45+((x46<x47)*x48));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x49 = 688U;
	int16_t x51 = INT16_MIN;
	uint32_t t10 = 5413U;

	t10 = (x49+((x50<x51)*x52));

	if (t10 != 688U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x57 = 1U;
	static volatile int64_t x58 = INT64_MAX;
	volatile int8_t x59 = 17;
	volatile int64_t x60 = 3LL;
	int64_t t11 = -8LL;

	t11 = (x57+((x58<x59)*x60));

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x66 = INT8_MIN;
	uint64_t x67 = UINT64_MAX;
	volatile int64_t t12 = -2658637524LL;

	t12 = (x65+((x66<x67)*x68));

	if (t12 != 3382924290897807LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x71 = 56607U;
	int8_t x72 = -1;
	volatile int32_t t13 = 1925359;

	t13 = (x69+((x70<x71)*x72));

	if (t13 != 23) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x73 = UINT16_MAX;
	int32_t x74 = INT32_MAX;
	static uint8_t x75 = 7U;
	int32_t t14 = 1;

	t14 = (x73+((x74<x75)*x76));

	if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x77 = 22629U;
	uint64_t x78 = 84260082260743475LLU;
	int8_t x80 = INT8_MIN;
	volatile uint32_t t15 = 2015049U;

	t15 = (x77+((x78<x79)*x80));

	if (t15 != 22629U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x81 = 19;
	int8_t x83 = 43;
	static volatile int16_t x84 = INT16_MIN;

	t16 = (x81+((x82<x83)*x84));

	if (t16 != -32749) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x85 = 6U;
	int8_t x86 = INT8_MAX;
	static uint64_t x87 = UINT64_MAX;

	t17 = (x85+((x86<x87)*x88));

	if (t17 != 5LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x89 = 25U;
	int32_t x91 = INT32_MAX;
	uint8_t x92 = 118U;

	t18 = (x89+((x90<x91)*x92));

	if (t18 != 143) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x93 = 5U;
	uint64_t x95 = 699350098LLU;
	volatile int32_t t19 = 844987766;

	t19 = (x93+((x94<x95)*x96));

	if (t19 != 8) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x97 = 1U;
	uint8_t x98 = 1U;
	int32_t x99 = 3438270;
	static uint32_t x100 = UINT32_MAX;

	t20 = (x97+((x98<x99)*x100));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x101 = -1;
	int32_t x102 = INT32_MAX;
	volatile uint32_t t21 = UINT32_MAX;

	t21 = (x101+((x102<x103)*x104));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x106 = 16U;
	int64_t x107 = INT64_MIN;
	int64_t x108 = INT64_MAX;
	volatile uint64_t t22 = UINT64_MAX;

	t22 = (x105+((x106<x107)*x108));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x109 = 1;
	int8_t x111 = INT8_MIN;
	volatile int32_t t23 = 114438;

	t23 = (x109+((x110<x111)*x112));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x113 = UINT32_MAX;
	uint32_t x115 = 2914U;
	uint32_t x116 = UINT32_MAX;
	volatile uint32_t t24 = UINT32_MAX;

	t24 = (x113+((x114<x115)*x116));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x117 = 17070962299200212LL;
	uint32_t x118 = 1634047483U;
	int16_t x119 = 117;
	static int16_t x120 = -12383;
	int64_t t25 = -74413372324818705LL;

	t25 = (x117+((x118<x119)*x120));

	if (t25 != 17070962299200212LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x122 = 14U;
	int16_t x123 = INT16_MIN;
	uint32_t x124 = 1U;

	t26 = (x121+((x122<x123)*x124));

	if (t26 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x126 = 15076;
	int16_t x127 = INT16_MIN;
	int64_t x128 = INT64_MIN;
	int64_t t27 = -390LL;

	t27 = (x125+((x126<x127)*x128));

	if (t27 != 127LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x129 = 293039;
	uint64_t x131 = UINT64_MAX;
	int16_t x132 = INT16_MAX;
	static volatile int32_t t28 = 7168722;

	t28 = (x129+((x130<x131)*x132));

	if (t28 != 325806) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x133 = 7536U;
	volatile int16_t x135 = INT16_MIN;
	uint32_t t29 = 2U;

	t29 = (x133+((x134<x135)*x136));

	if (t29 != 7536U) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x137 = -125315662651LL;
	int16_t x138 = INT16_MAX;
	static volatile int8_t x139 = -3;
	int8_t x140 = 10;
	int64_t t30 = 6LL;

	t30 = (x137+((x138<x139)*x140));

	if (t30 != -125315662651LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x142 = -43;
	int64_t x143 = -1LL;
	int64_t t31 = INT64_MIN;

	t31 = (x141+((x142<x143)*x144));

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x145 = INT64_MAX;
	static uint32_t x147 = UINT32_MAX;
	uint16_t x148 = 1811U;
	static volatile int64_t t32 = INT64_MAX;

	t32 = (x145+((x146<x147)*x148));

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x154 = INT32_MIN;
	int64_t x155 = INT64_MAX;
	volatile int32_t x156 = -1;

	t33 = (x153+((x154<x155)*x156));

	if (t33 != 254) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x157 = INT64_MIN;
	uint64_t x158 = UINT64_MAX;
	volatile uint16_t x160 = UINT16_MAX;
	static volatile int64_t t34 = INT64_MIN;

	t34 = (x157+((x158<x159)*x160));

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x161 = -10749509LL;
	static volatile int64_t x162 = INT64_MIN;
	int8_t x163 = -1;
	int32_t x164 = -1;
	volatile int64_t t35 = -256479LL;

	t35 = (x161+((x162<x163)*x164));

	if (t35 != -10749510LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x166 = 0;
	uint8_t x167 = 87U;
	uint8_t x168 = UINT8_MAX;
	static int32_t t36 = -1;

	t36 = (x165+((x166<x167)*x168));

	if (t36 != 205) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x169 = 0U;
	volatile int64_t x170 = -1LL;
	int64_t x171 = INT64_MIN;
	uint32_t x172 = UINT32_MAX;
	volatile uint32_t t37 = 863702U;

	t37 = (x169+((x170<x171)*x172));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x173 = -20026980135979316LL;
	static volatile uint32_t x176 = 6554258U;
	static volatile int64_t t38 = 3925310968LL;

	t38 = (x173+((x174<x175)*x176));

	if (t38 != -20026980135979316LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x177 = INT16_MIN;
	int32_t x178 = INT32_MAX;
	uint16_t x179 = 26039U;
	static uint8_t x180 = UINT8_MAX;
	int32_t t39 = 1183860;

	t39 = (x177+((x178<x179)*x180));

	if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x181 = 4;
	static int64_t x184 = 0LL;
	int64_t t40 = -22163660268LL;

	t40 = (x181+((x182<x183)*x184));

	if (t40 != 4LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x186 = INT8_MAX;
	volatile int8_t x187 = INT8_MAX;
	int8_t x188 = INT8_MIN;
	volatile uint32_t t41 = 646389U;

	t41 = (x185+((x186<x187)*x188));

	if (t41 != 1U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x193 = 125U;
	int16_t x194 = INT16_MIN;
	int32_t x195 = 280;
	volatile uint64_t t42 = 340260LLU;

	t42 = (x193+((x194<x195)*x196));

	if (t42 != 19428304LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x199 = 12446;
	int16_t x200 = INT16_MIN;
	static volatile int32_t t43 = -6455255;

	t43 = (x197+((x198<x199)*x200));

	if (t43 != -32513) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x201 = UINT64_MAX;
	static volatile uint32_t x202 = 0U;
	int32_t x204 = INT32_MIN;

	t44 = (x201+((x202<x203)*x204));

	if (t44 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x206 = 13841300451LL;
	int32_t x207 = 1444;
	int16_t x208 = INT16_MAX;
	int64_t t45 = INT64_MIN;

	t45 = (x205+((x206<x207)*x208));

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x209 = INT64_MIN;
	static int8_t x212 = INT8_MIN;
	volatile int64_t t46 = INT64_MIN;

	t46 = (x209+((x210<x211)*x212));

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x213 = 11LL;
	static uint8_t x214 = 4U;
	static volatile uint8_t x215 = 3U;
	int8_t x216 = INT8_MIN;

	t47 = (x213+((x214<x215)*x216));

	if (t47 != 11LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x217 = 457U;
	static int16_t x218 = INT16_MIN;
	volatile int32_t x219 = INT32_MIN;
	static int16_t x220 = 1169;
	int32_t t48 = 106808;

	t48 = (x217+((x218<x219)*x220));

	if (t48 != 457) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x221 = 3078U;
	volatile int8_t x222 = -1;
	volatile int64_t x223 = -22667084LL;
	static uint8_t x224 = 118U;
	static volatile int32_t t49 = -57349247;

	t49 = (x221+((x222<x223)*x224));

	if (t49 != 3078) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x226 = 1U;
	uint16_t x227 = 544U;
	int8_t x228 = INT8_MAX;
	static int32_t t50 = -8041830;

	t50 = (x225+((x226<x227)*x228));

	if (t50 != -32641) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x229 = INT64_MIN;
	uint32_t x230 = 125502243U;
	uint64_t x232 = 6962763LLU;

	t51 = (x229+((x230<x231)*x232));

	if (t51 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x234 = 7U;
	int64_t x235 = INT64_MIN;
	volatile int8_t x236 = INT8_MIN;

	t52 = (x233+((x234<x235)*x236));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x237 = -1;
	volatile int64_t x238 = INT64_MIN;
	int64_t x239 = INT64_MIN;
	int8_t x240 = -1;
	volatile int32_t t53 = 47;

	t53 = (x237+((x238<x239)*x240));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x242 = -1;
	int32_t x243 = INT32_MIN;
	uint64_t x244 = 52120065790332LLU;
	uint64_t t54 = 14581368LLU;

	t54 = (x241+((x242<x243)*x244));

	if (t54 != 53328288LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x250 = INT16_MIN;
	int8_t x251 = INT8_MIN;
	int32_t x252 = -1;
	volatile int32_t t55 = 10588230;

	t55 = (x249+((x250<x251)*x252));

	if (t55 != 1213) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x254 = INT64_MIN;
	uint32_t x255 = 22703608U;
	static int64_t x256 = 22LL;
	volatile int64_t t56 = 1LL;

	t56 = (x253+((x254<x255)*x256));

	if (t56 != 21LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x257 = INT16_MAX;
	int16_t x258 = INT16_MAX;
	volatile uint64_t x259 = 32009638LLU;
	int32_t x260 = -1;
	static int32_t t57 = 368422872;

	t57 = (x257+((x258<x259)*x260));

	if (t57 != 32766) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x261 = 594U;
	volatile int16_t x262 = INT16_MIN;
	int64_t x263 = -5815215LL;
	volatile uint16_t x264 = 13U;
	int32_t t58 = -52;

	t58 = (x261+((x262<x263)*x264));

	if (t58 != 594) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x265 = INT16_MAX;
	int16_t x268 = -1;
	int32_t t59 = -5;

	t59 = (x265+((x266<x267)*x268));

	if (t59 != 32766) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x269 = 1;
	volatile int8_t x270 = 0;
	static int16_t x271 = INT16_MIN;
	int64_t x272 = -20777LL;
	static volatile int64_t t60 = -1LL;

	t60 = (x269+((x270<x271)*x272));

	if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x273 = -1LL;
	uint16_t x275 = UINT16_MAX;
	int8_t x276 = INT8_MAX;
	volatile int64_t t61 = 409470954983323LL;

	t61 = (x273+((x274<x275)*x276));

	if (t61 != 126LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x277 = 8363922689343210LL;
	static uint32_t x279 = UINT32_MAX;
	static int32_t x280 = INT32_MIN;
	int64_t t62 = -5683131025LL;

	t62 = (x277+((x278<x279)*x280));

	if (t62 != 8363920541859562LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint64_t x281 = 12LLU;
	static uint32_t x282 = 2323705U;
	static volatile int16_t x283 = INT16_MAX;
	int32_t x284 = INT32_MIN;
	volatile uint64_t t63 = 10263583LLU;

	t63 = (x281+((x282<x283)*x284));

	if (t63 != 12LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x285 = 11028850172LL;
	uint8_t x286 = 7U;
	int16_t x287 = -8;
	static int8_t x288 = 35;
	int64_t t64 = 3LL;

	t64 = (x285+((x286<x287)*x288));

	if (t64 != 11028850172LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x289 = INT64_MIN;
	int16_t x291 = 15;
	volatile int64_t t65 = INT64_MIN;

	t65 = (x289+((x290<x291)*x292));

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x299 = 5626U;

	t66 = (x297+((x298<x299)*x300));

	if (t66 != -2147483650LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x301 = 1U;
	static uint8_t x303 = 4U;
	int64_t x304 = INT64_MIN;

	t67 = (x301+((x302<x303)*x304));

	if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x305 = -7;
	int64_t x307 = -1LL;
	volatile int8_t x308 = INT8_MAX;
	int32_t t68 = 141;

	t68 = (x305+((x306<x307)*x308));

	if (t68 != -7) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x309 = 2943LL;
	static int64_t x310 = INT64_MIN;
	volatile uint32_t x312 = UINT32_MAX;
	int64_t t69 = 28100011LL;

	t69 = (x309+((x310<x311)*x312));

	if (t69 != 4294970238LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x313 = 15308U;
	int32_t x314 = -1;
	uint64_t x315 = 122193046462651909LLU;

	t70 = (x313+((x314<x315)*x316));

	if (t70 != 15308LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x317 = INT8_MIN;
	int64_t x318 = 268856LL;
	static int64_t x319 = 185500218088108743LL;
	int8_t x320 = 3;

	t71 = (x317+((x318<x319)*x320));

	if (t71 != -125) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x321 = 2LLU;
	int64_t x324 = -440LL;
	volatile uint64_t t72 = 30957791LLU;

	t72 = (x321+((x322<x323)*x324));

	if (t72 != 2LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x325 = 196U;
	int32_t x326 = INT32_MAX;
	static uint32_t x328 = 235559649U;
	uint32_t t73 = 1456445U;

	t73 = (x325+((x326<x327)*x328));

	if (t73 != 196U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x329 = 8;
	volatile int32_t x330 = -1;
	static int16_t x331 = INT16_MIN;
	volatile int32_t t74 = -183156560;

	t74 = (x329+((x330<x331)*x332));

	if (t74 != 8) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x333 = 2381736838383731LLU;
	int8_t x334 = INT8_MAX;
	static volatile int8_t x335 = INT8_MIN;
	uint64_t x336 = 3269874805LLU;
	volatile uint64_t t75 = 1LLU;

	t75 = (x333+((x334<x335)*x336));

	if (t75 != 2381736838383731LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x337 = -1LL;
	volatile uint16_t x338 = 83U;
	volatile uint64_t x339 = UINT64_MAX;
	uint16_t x340 = 25000U;
	static volatile int64_t t76 = -4230582703199827LL;

	t76 = (x337+((x338<x339)*x340));

	if (t76 != 24999LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x341 = -149;
	static uint32_t x342 = 1447597805U;
	int16_t x343 = INT16_MIN;
	static uint16_t x344 = 12308U;
	int32_t t77 = -173006;

	t77 = (x341+((x342<x343)*x344));

	if (t77 != 12159) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x345 = INT8_MAX;
	volatile int64_t x346 = 1496173685612779LL;
	uint8_t x347 = 58U;
	int32_t x348 = 113677288;
	volatile int32_t t78 = 69;

	t78 = (x345+((x346<x347)*x348));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x350 = 0U;
	int64_t x351 = INT64_MIN;
	int32_t t79 = 789;

	t79 = (x349+((x350<x351)*x352));

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x354 = 0LLU;
	volatile int32_t x356 = INT32_MAX;
	int32_t t80 = 16;

	t80 = (x353+((x354<x355)*x356));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x357 = INT8_MIN;
	int32_t x358 = INT32_MIN;
	static int32_t x359 = 600;
	uint8_t x360 = 2U;
	volatile int32_t t81 = -131148284;

	t81 = (x357+((x358<x359)*x360));

	if (t81 != -126) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x361 = -1;
	int8_t x364 = -1;
	volatile int32_t t82 = -4;

	t82 = (x361+((x362<x363)*x364));

	if (t82 != -2) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x365 = -29;
	static int32_t x367 = INT32_MAX;
	int8_t x368 = INT8_MAX;

	t83 = (x365+((x366<x367)*x368));

	if (t83 != 98) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x369 = 94U;
	static int32_t x370 = INT32_MIN;
	int32_t x371 = INT32_MAX;
	int8_t x372 = INT8_MAX;

	t84 = (x369+((x370<x371)*x372));

	if (t84 != 221) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x377 = INT8_MIN;
	static uint8_t x378 = 123U;

	t85 = (x377+((x378<x379)*x380));

	if (t85 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x381 = UINT8_MAX;
	int8_t x382 = -1;
	int8_t x384 = -1;
	volatile int32_t t86 = 61;

	t86 = (x381+((x382<x383)*x384));

	if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x385 = UINT16_MAX;
	int16_t x387 = INT16_MIN;
	int64_t x388 = -1LL;
	int64_t t87 = -5055069012234688LL;

	t87 = (x385+((x386<x387)*x388));

	if (t87 != 65535LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x389 = -23;
	int16_t x390 = -1;
	uint64_t x391 = 23LLU;
	int32_t t88 = 25364;

	t88 = (x389+((x390<x391)*x392));

	if (t88 != -23) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x397 = 6U;
	int8_t x398 = -28;
	volatile uint8_t x399 = 55U;
	int16_t x400 = INT16_MIN;

	t89 = (x397+((x398<x399)*x400));

	if (t89 != -32762) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x401 = INT64_MIN;
	static int64_t x403 = INT64_MIN;
	uint32_t x404 = 30U;
	static volatile int64_t t90 = INT64_MIN;

	t90 = (x401+((x402<x403)*x404));

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x405 = 33055228844759472LL;
	volatile int64_t x406 = INT64_MAX;
	uint32_t x407 = UINT32_MAX;

	t91 = (x405+((x406<x407)*x408));

	if (t91 != 33055228844759472LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x409 = -1;
	uint32_t x410 = UINT32_MAX;
	static int64_t x411 = INT64_MAX;
	int16_t x412 = 4;
	int32_t t92 = 0;

	t92 = (x409+((x410<x411)*x412));

	if (t92 != 3) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x413 = -781;
	uint64_t x414 = 489LLU;
	static volatile uint16_t x415 = UINT16_MAX;
	int32_t x416 = 0;
	static volatile int32_t t93 = -78;

	t93 = (x413+((x414<x415)*x416));

	if (t93 != -781) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x417 = 1U;
	int8_t x419 = INT8_MIN;
	volatile uint32_t x420 = UINT32_MAX;
	volatile uint32_t t94 = 552158729U;

	t94 = (x417+((x418<x419)*x420));

	if (t94 != 1U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x421 = UINT64_MAX;
	int16_t x422 = INT16_MIN;
	uint16_t x423 = UINT16_MAX;
	volatile uint64_t t95 = 98LLU;

	t95 = (x421+((x422<x423)*x424));

	if (t95 != 14061LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x425 = 175LLU;
	uint32_t x426 = UINT32_MAX;
	static uint16_t x428 = 14872U;
	volatile uint64_t t96 = 10LLU;

	t96 = (x425+((x426<x427)*x428));

	if (t96 != 175LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x429 = 396;
	int16_t x430 = INT16_MAX;
	int32_t x431 = INT32_MIN;
	int64_t x432 = 113282980LL;
	volatile int64_t t97 = 34054538974094LL;

	t97 = (x429+((x430<x431)*x432));

	if (t97 != 396LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x433 = 193682746LLU;
	static int64_t x434 = -1LL;
	static int32_t x435 = INT32_MIN;
	static uint64_t x436 = 339LLU;

	t98 = (x433+((x434<x435)*x436));

	if (t98 != 193682746LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x437 = -1;
	int32_t x438 = 1620;
	int64_t x439 = -1LL;
	uint64_t x440 = 28LLU;
	uint64_t t99 = UINT64_MAX;

	t99 = (x437+((x438<x439)*x440));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

