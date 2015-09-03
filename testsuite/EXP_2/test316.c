#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x4 = 1U;
volatile int32_t t0 = -1057445534;
int8_t x8 = INT8_MAX;
int16_t x15 = INT16_MAX;
int16_t x20 = INT16_MIN;
static uint64_t t5 = 843269LLU;
int32_t x27 = -1;
int32_t x35 = 17012;
static volatile int8_t x38 = -1;
static int64_t x41 = INT64_MIN;
int32_t x49 = 1;
uint32_t x51 = UINT32_MAX;
int8_t x61 = 23;
int32_t x64 = INT32_MIN;
uint32_t x69 = 3960U;
uint8_t x72 = UINT8_MAX;
volatile uint64_t t15 = 9LLU;
uint8_t x79 = 4U;
int16_t x80 = -119;
int64_t t16 = 24061LL;
uint64_t x88 = 91LLU;
volatile int32_t x97 = -1746530;
uint64_t t23 = 4290118281317191668LLU;
int8_t x109 = -1;
volatile int32_t x110 = -1;
static volatile int64_t t25 = 12006556LL;
uint16_t x119 = 3U;
int8_t x121 = -1;
uint8_t x129 = 7U;
int64_t x133 = INT64_MAX;
static int8_t x135 = INT8_MAX;
int64_t t32 = 3194800720842LL;
int8_t x149 = INT8_MIN;
uint8_t x157 = 89U;
int32_t x164 = 677939;
int16_t x175 = INT16_MAX;
uint64_t x177 = UINT64_MAX;
uint32_t x183 = 539919U;
uint32_t t41 = 174818U;
static volatile uint64_t t42 = 15LLU;
static volatile int64_t t43 = -866271472842LL;
static volatile int64_t t46 = -191789028764252LL;
uint64_t x215 = 694807838028924737LLU;
uint64_t t47 = 55LLU;
volatile uint16_t x225 = 28U;
int32_t x236 = -1525768;
static uint16_t x237 = UINT16_MAX;
volatile int8_t x248 = 7;
int32_t t55 = -686410533;
static int8_t x254 = -1;
uint64_t x257 = UINT64_MAX;
int32_t x261 = 132350403;
static uint64_t x263 = 58751326705LLU;
static volatile uint64_t t58 = 173935946LLU;
int8_t x271 = INT8_MIN;
int64_t x272 = INT64_MIN;
uint32_t x275 = UINT32_MAX;
volatile uint16_t x287 = 24754U;
volatile uint64_t t62 = 21552LLU;
int32_t x294 = -1;
int32_t x300 = INT32_MIN;
static uint64_t t65 = 20396631934991LLU;
uint64_t x301 = UINT64_MAX;
int32_t x308 = INT32_MAX;
uint64_t x312 = 116111LLU;
static uint64_t x322 = UINT64_MAX;
int8_t x342 = -1;
int32_t x343 = 19097;
int64_t x347 = -1LL;
int8_t x358 = -1;
int16_t x372 = -2499;
static volatile uint32_t t77 = 0U;
int64_t x377 = INT64_MIN;
volatile int32_t x379 = 29;
volatile uint8_t x380 = 2U;
volatile int16_t x386 = -1;
static int8_t x388 = INT8_MAX;
int32_t x391 = -1;
volatile int16_t x404 = -379;
volatile uint8_t x405 = 7U;
uint32_t x411 = 1101904U;
volatile uint64_t t88 = 34767268182708735LLU;
uint64_t t89 = 3819LLU;
uint32_t x435 = 954942730U;
int16_t x438 = INT16_MIN;
static volatile int64_t t91 = -23388785LL;
int16_t x443 = 37;
static int32_t t92 = -201;
static int16_t x449 = INT16_MIN;
int64_t x452 = 14440LL;
int64_t x454 = 24004444LL;
int8_t x456 = INT8_MIN;
volatile int64_t t94 = -765477663886299218LL;
uint64_t x460 = 728798320593404LLU;
int8_t x466 = INT8_MIN;
volatile int64_t t98 = -396414996080LL;
int64_t x473 = INT64_MAX;
volatile uint8_t x474 = UINT8_MAX;


void f0(void) {
	int8_t x1 = -1;
	int16_t x2 = INT16_MIN;
	static int8_t x3 = INT8_MIN;

	t0 = ((x1|(x2-x3))/x4);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = -48;
	uint32_t x6 = UINT32_MAX;
	int32_t x7 = 29460558;
	uint32_t t1 = 1481U;

	t1 = ((x5|(x6-x7))/x8);

	if (t1 != 33818640U) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 180U;
	volatile int32_t x10 = -1;
	volatile int32_t x11 = 47795;
	static uint32_t x12 = UINT32_MAX;
	uint32_t t2 = 596062U;

	t2 = ((x9|(x10-x11))/x12);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 11U;
	int8_t x14 = -1;
	int16_t x16 = INT16_MIN;
	int32_t t3 = 0;

	t3 = ((x13|(x14-x15))/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 1U;
	int32_t x18 = INT32_MAX;
	static volatile uint64_t x19 = UINT64_MAX;
	uint64_t t4 = 10548205436554LLU;

	t4 = ((x17|(x18-x19))/x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	static int8_t x22 = INT8_MIN;
	uint8_t x23 = UINT8_MAX;
	uint64_t x24 = 20040985501057530LLU;

	t5 = ((x21|(x22-x23))/x24);

	if (t5 != 920LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = UINT16_MAX;
	int16_t x26 = -1;
	static int8_t x28 = INT8_MAX;
	volatile int32_t t6 = 19;

	t6 = ((x25|(x26-x27))/x28);

	if (t6 != 516) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = 4;
	uint32_t x34 = UINT32_MAX;
	static int16_t x36 = 1;
	volatile uint32_t t7 = 1U;

	t7 = ((x33|(x34-x35))/x36);

	if (t7 != 4294950287U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = -1;
	uint16_t x39 = 358U;
	int32_t x40 = INT32_MIN;
	static int32_t t8 = 45710;

	t8 = ((x37|(x38-x39))/x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x42 = 3;
	uint16_t x43 = 1225U;
	static int64_t x44 = -1LL;
	int64_t t9 = 28337519LL;

	t9 = ((x41|(x42-x43))/x44);

	if (t9 != 1222LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x50 = -49;
	static int8_t x52 = INT8_MIN;
	uint32_t t10 = 482044233U;

	t10 = ((x49|(x50-x51))/x52);

	if (t10 != 1U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x53 = 89U;
	static volatile uint64_t x54 = 1697523LLU;
	uint64_t x55 = 27857023271373338LLU;
	int16_t x56 = -3;
	uint64_t t11 = 574855735353140LLU;

	t11 = ((x53|(x54-x55))/x56);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x62 = -1LL;
	static int8_t x63 = INT8_MIN;
	int64_t t12 = 217897636LL;

	t12 = ((x61|(x62-x63))/x64);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x65 = INT64_MIN;
	volatile int16_t x66 = INT16_MIN;
	int16_t x67 = -1;
	static int16_t x68 = -1;
	volatile int64_t t13 = -109709347346453832LL;

	t13 = ((x65|(x66-x67))/x68);

	if (t13 != 32767LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x70 = INT16_MIN;
	int8_t x71 = -3;
	volatile uint32_t t14 = 6501U;

	t14 = ((x69|(x70-x71))/x72);

	if (t14 != 16842896U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x73 = 6538237631LLU;
	uint32_t x74 = UINT32_MAX;
	int8_t x75 = 0;
	int64_t x76 = -1LL;

	t15 = ((x73|(x74-x75))/x76);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = 12225791;
	int64_t x78 = -713241405LL;

	t16 = ((x77|(x78-x79))/x80);

	if (t16 != 5922030LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x81 = 7044U;
	int32_t x82 = -1;
	uint64_t x83 = 821173300LLU;
	int32_t x84 = INT32_MIN;
	uint64_t t17 = 1528330078LLU;

	t17 = ((x81|(x82-x83))/x84);

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = INT32_MAX;
	int16_t x86 = INT16_MIN;
	volatile int8_t x87 = INT8_MIN;
	uint64_t t18 = 386LLU;

	t18 = ((x85|(x86-x87))/x88);

	if (t18 != 202711473337467600LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x89 = UINT16_MAX;
	int64_t x90 = 21201LL;
	int8_t x91 = INT8_MIN;
	int64_t x92 = -2749496537418LL;
	int64_t t19 = 491660742LL;

	t19 = ((x89|(x90-x91))/x92);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint64_t x93 = UINT64_MAX;
	int16_t x94 = INT16_MIN;
	int32_t x95 = -1;
	int32_t x96 = 445589905;
	volatile uint64_t t20 = 3152269321LLU;

	t20 = ((x93|(x94-x95))/x96);

	if (t20 != 41398478436LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x98 = UINT16_MAX;
	uint16_t x99 = 15596U;
	volatile int64_t x100 = INT64_MIN;
	volatile int64_t t21 = 48510LL;

	t21 = ((x97|(x98-x99))/x100);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x101 = INT64_MIN;
	uint32_t x102 = 3U;
	volatile int32_t x103 = -1;
	int16_t x104 = -425;
	int64_t t22 = -77462LL;

	t22 = ((x101|(x102-x103))/x104);

	if (t22 != 21702051851423001LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = INT32_MIN;
	int16_t x106 = 7914;
	uint64_t x107 = 2844498744103588382LLU;
	uint16_t x108 = UINT16_MAX;

	t23 = ((x105|(x106-x107))/x108);

	if (t23 != 281479271713193LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x111 = INT32_MIN;
	static int8_t x112 = INT8_MAX;
	volatile int32_t t24 = 7585;

	t24 = ((x109|(x110-x111))/x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x113 = -497LL;
	uint16_t x114 = UINT16_MAX;
	int8_t x115 = -15;
	int16_t x116 = -1;

	t25 = ((x113|(x114-x115))/x116);

	if (t25 != 497LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x117 = INT64_MIN;
	static uint8_t x118 = 3U;
	uint32_t x120 = UINT32_MAX;
	static volatile int64_t t26 = 2865148809LL;

	t26 = ((x117|(x118-x119))/x120);

	if (t26 != -2147483648LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x122 = -1;
	volatile int8_t x123 = INT8_MIN;
	int16_t x124 = INT16_MAX;
	volatile int32_t t27 = 46683;

	t27 = ((x121|(x122-x123))/x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x125 = 125LLU;
	static int32_t x126 = -4335755;
	static int16_t x127 = -1;
	static volatile int64_t x128 = INT64_MIN;
	uint64_t t28 = 6215527629631099LLU;

	t28 = ((x125|(x126-x127))/x128);

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x130 = INT16_MIN;
	static int16_t x131 = INT16_MIN;
	uint64_t x132 = 326619104534LLU;
	volatile uint64_t t29 = 3185322416391LLU;

	t29 = ((x129|(x130-x131))/x132);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x134 = INT8_MIN;
	uint8_t x136 = 20U;
	static volatile int64_t t30 = -627880920904973LL;

	t30 = ((x133|(x134-x135))/x136);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x137 = INT8_MIN;
	int16_t x138 = INT16_MIN;
	static int8_t x139 = -1;
	int32_t x140 = INT32_MAX;
	volatile int32_t t31 = -1386175;

	t31 = ((x137|(x138-x139))/x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x145 = -1LL;
	static int64_t x146 = -1123838495197997LL;
	uint16_t x147 = 7U;
	int8_t x148 = INT8_MIN;

	t32 = ((x145|(x146-x147))/x148);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x150 = UINT32_MAX;
	int16_t x151 = 1120;
	int32_t x152 = INT32_MAX;
	volatile uint32_t t33 = 30641226U;

	t33 = ((x149|(x150-x151))/x152);

	if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x153 = -1;
	static uint32_t x154 = 7814882U;
	int32_t x155 = INT32_MIN;
	volatile uint64_t x156 = UINT64_MAX;
	uint64_t t34 = 9781726LLU;

	t34 = ((x153|(x154-x155))/x156);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x158 = 1334U;
	int64_t x159 = INT64_MAX;
	int32_t x160 = -1;
	static int64_t t35 = -778359100837LL;

	t35 = ((x157|(x158-x159))/x160);

	if (t35 != 9223372036854774401LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x161 = INT16_MIN;
	uint8_t x162 = UINT8_MAX;
	volatile int16_t x163 = -1;
	static volatile int32_t t36 = 30096064;

	t36 = ((x161|(x162-x163))/x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x165 = INT32_MIN;
	volatile uint8_t x166 = 3U;
	static int64_t x167 = 0LL;
	uint32_t x168 = 78U;
	static int64_t t37 = 19129LL;

	t37 = ((x165|(x166-x167))/x168);

	if (t37 != -27531841LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = INT16_MIN;
	volatile int8_t x170 = INT8_MIN;
	uint8_t x171 = UINT8_MAX;
	int8_t x172 = INT8_MAX;
	int32_t t38 = 405962;

	t38 = ((x169|(x170-x171))/x172);

	if (t38 != -3) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = INT16_MIN;
	static uint32_t x174 = 3U;
	static volatile uint64_t x176 = 5476450167860LLU;
	uint64_t t39 = 1432LLU;

	t39 = ((x173|(x174-x175))/x176);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x178 = -1;
	static int16_t x179 = INT16_MIN;
	uint64_t x180 = UINT64_MAX;
	uint64_t t40 = 9LLU;

	t40 = ((x177|(x178-x179))/x180);

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x181 = 6;
	int16_t x182 = -1;
	int8_t x184 = INT8_MAX;

	t41 = ((x181|(x182-x183))/x184);

	if (t41 != 33814388U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x189 = INT64_MIN;
	volatile uint32_t x190 = 17344U;
	uint64_t x191 = UINT64_MAX;
	static int16_t x192 = INT16_MIN;

	t42 = ((x189|(x190-x191))/x192);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x193 = -1;
	uint16_t x194 = UINT16_MAX;
	static int64_t x195 = -1974LL;
	int32_t x196 = INT32_MIN;

	t43 = ((x193|(x194-x195))/x196);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x197 = INT32_MIN;
	int16_t x198 = -791;
	volatile int8_t x199 = -57;
	int32_t x200 = 270;
	static int32_t t44 = 0;

	t44 = ((x197|(x198-x199))/x200);

	if (t44 != -2) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x201 = 1667U;
	int16_t x202 = -36;
	uint32_t x203 = 0U;
	int8_t x204 = INT8_MAX;
	static volatile uint32_t t45 = 1142813399U;

	t45 = ((x201|(x202-x203))/x204);

	if (t45 != 33818639U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x205 = -1;
	static int64_t x206 = INT64_MIN;
	int32_t x207 = INT32_MIN;
	volatile int64_t x208 = INT64_MIN;

	t46 = ((x205|(x206-x207))/x208);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x213 = INT64_MAX;
	uint16_t x214 = 3367U;
	uint16_t x216 = 13U;

	t47 = ((x213|(x214-x215))/x216);

	if (t47 != 1418980313362273201LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x217 = 981;
	uint32_t x218 = 42U;
	int8_t x219 = 4;
	int16_t x220 = INT16_MAX;
	volatile uint32_t t48 = 1U;

	t48 = ((x217|(x218-x219))/x220);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x221 = -189LL;
	static uint8_t x222 = 0U;
	uint64_t x223 = 12260948724347LLU;
	static uint32_t x224 = 511963U;
	static uint64_t t49 = 3760LLU;

	t49 = ((x221|(x222-x223))/x224);

	if (t49 != 36031400850666LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x226 = INT8_MAX;
	int16_t x227 = -1;
	volatile int32_t x228 = 248455;
	int32_t t50 = -484476774;

	t50 = ((x225|(x226-x227))/x228);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x229 = UINT64_MAX;
	volatile uint8_t x230 = UINT8_MAX;
	int32_t x231 = 593;
	static int16_t x232 = INT16_MIN;
	static volatile uint64_t t51 = 13112283LLU;

	t51 = ((x229|(x230-x231))/x232);

	if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x233 = -691933082290728423LL;
	static int64_t x234 = -271027322LL;
	int32_t x235 = 8687748;
	int64_t t52 = 38672080470LL;

	t52 = ((x233|(x234-x235))/x236);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x238 = INT8_MIN;
	volatile uint64_t x239 = UINT64_MAX;
	static int16_t x240 = INT16_MIN;
	uint64_t t53 = 153428098LLU;

	t53 = ((x237|(x238-x239))/x240);

	if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x241 = -10;
	uint64_t x242 = 39761701765609LLU;
	static int8_t x243 = 10;
	int8_t x244 = INT8_MIN;
	volatile uint64_t t54 = 25270819553376LLU;

	t54 = ((x241|(x242-x243))/x244);

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x245 = -1;
	static uint8_t x246 = 0U;
	int8_t x247 = INT8_MAX;

	t55 = ((x245|(x246-x247))/x248);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x253 = UINT64_MAX;
	static int8_t x255 = 20;
	volatile uint32_t x256 = 37194U;
	uint64_t t56 = 12160LLU;

	t56 = ((x253|(x254-x255))/x256);

	if (t56 != 495960210617560LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x258 = INT16_MIN;
	static volatile uint8_t x259 = 1U;
	uint8_t x260 = 12U;
	uint64_t t57 = 22655784608LLU;

	t57 = ((x257|(x258-x259))/x260);

	if (t57 != 1537228672809129301LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x262 = -1LL;
	static uint16_t x264 = 36U;

	t58 = ((x261|(x262-x263))/x264);

	if (t58 != 512409555973745150LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x269 = UINT8_MAX;
	int64_t x270 = -1LL;
	volatile int64_t t59 = 197LL;

	t59 = ((x269|(x270-x271))/x272);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x273 = 8U;
	uint16_t x274 = 113U;
	int16_t x276 = 40;
	uint32_t t60 = 14U;

	t60 = ((x273|(x274-x275))/x276);

	if (t60 != 3U) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x281 = INT8_MIN;
	volatile int8_t x282 = INT8_MAX;
	int8_t x283 = 25;
	static int32_t x284 = INT32_MAX;
	static int32_t t61 = -504;

	t61 = ((x281|(x282-x283))/x284);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x285 = INT64_MIN;
	static uint32_t x286 = UINT32_MAX;
	static uint64_t x288 = UINT64_MAX;

	t62 = ((x285|(x286-x287))/x288);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x289 = -1;
	int8_t x290 = INT8_MIN;
	int16_t x291 = -1;
	static uint32_t x292 = 3U;
	uint32_t t63 = 4224472U;

	t63 = ((x289|(x290-x291))/x292);

	if (t63 != 1431655765U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x293 = INT16_MAX;
	int64_t x295 = INT64_MIN;
	static int8_t x296 = -1;
	static int64_t t64 = 406706LL;

	t64 = ((x293|(x294-x295))/x296);

	if (t64 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x297 = INT32_MIN;
	volatile uint64_t x298 = UINT64_MAX;
	static int32_t x299 = -1000854112;

	t65 = ((x297|(x298-x299))/x300);

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x302 = 0U;
	volatile int8_t x303 = 1;
	int8_t x304 = INT8_MIN;
	uint64_t t66 = 1622157LLU;

	t66 = ((x301|(x302-x303))/x304);

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x305 = -2;
	static int32_t x306 = -1;
	int16_t x307 = 64;
	int32_t t67 = 27;

	t67 = ((x305|(x306-x307))/x308);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x309 = 3268566170345085LL;
	static int64_t x310 = INT64_MIN;
	int64_t x311 = INT64_MIN;
	uint64_t t68 = 112684265671886012LLU;

	t68 = ((x309|(x310-x311))/x312);

	if (t68 != 28150357591LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x313 = 4278510806908LLU;
	int64_t x314 = INT64_MAX;
	int16_t x315 = INT16_MAX;
	uint64_t x316 = 513035614LLU;
	uint64_t t69 = 4672053LLU;

	t69 = ((x313|(x314-x315))/x316);

	if (t69 != 17978034633LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x321 = INT32_MIN;
	uint32_t x323 = UINT32_MAX;
	static volatile int32_t x324 = 424;
	static volatile uint64_t t70 = 804LLU;

	t70 = ((x321|(x322-x323))/x324);

	if (t70 != 43506471866891669LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x325 = 854031939U;
	int16_t x326 = -1;
	int8_t x327 = 1;
	int32_t x328 = INT32_MAX;
	uint32_t t71 = 17254U;

	t71 = ((x325|(x326-x327))/x328);

	if (t71 != 2U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x341 = INT64_MIN;
	int64_t x344 = INT64_MIN;
	int64_t t72 = 6LL;

	t72 = ((x341|(x342-x343))/x344);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x345 = 92U;
	uint64_t x346 = UINT64_MAX;
	int8_t x348 = INT8_MIN;
	uint64_t t73 = 134116LLU;

	t73 = ((x345|(x346-x347))/x348);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x357 = 57632733U;
	uint64_t x359 = 993010378149052LLU;
	int16_t x360 = -1;
	uint64_t t74 = 331189369197LLU;

	t74 = ((x357|(x358-x359))/x360);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x361 = INT32_MIN;
	volatile int32_t x362 = -75277;
	int8_t x363 = 62;
	static int8_t x364 = -1;
	volatile int32_t t75 = -2212278;

	t75 = ((x361|(x362-x363))/x364);

	if (t75 != 75339) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x365 = INT64_MIN;
	volatile int8_t x366 = INT8_MIN;
	static int64_t x367 = -1LL;
	int64_t x368 = INT64_MIN;
	volatile int64_t t76 = 3512023434615LL;

	t76 = ((x365|(x366-x367))/x368);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x369 = -1;
	uint32_t x370 = 57U;
	int32_t x371 = -1;

	t77 = ((x369|(x370-x371))/x372);

	if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint8_t x378 = 2U;
	volatile int64_t t78 = 5LL;

	t78 = ((x377|(x378-x379))/x380);

	if (t78 != -13LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x381 = INT32_MIN;
	int8_t x382 = INT8_MIN;
	volatile uint64_t x383 = 29LLU;
	static int8_t x384 = INT8_MAX;
	static volatile uint64_t t79 = 469889323LLU;

	t79 = ((x381|(x382-x383))/x384);

	if (t79 != 145249953336295680LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x385 = INT64_MAX;
	uint16_t x387 = UINT16_MAX;
	int64_t t80 = -34533744673941021LL;

	t80 = ((x385|(x386-x387))/x388);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x389 = INT32_MIN;
	int16_t x390 = -4;
	int64_t x392 = -1LL;
	volatile int64_t t81 = -2LL;

	t81 = ((x389|(x390-x391))/x392);

	if (t81 != 3LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x393 = -9;
	int32_t x394 = -1;
	static int8_t x395 = INT8_MIN;
	uint32_t x396 = 3297U;
	static uint32_t t82 = 49U;

	t82 = ((x393|(x394-x395))/x396);

	if (t82 != 1302689U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x397 = INT64_MIN;
	int16_t x398 = INT16_MIN;
	int16_t x399 = -1;
	int8_t x400 = INT8_MAX;
	int64_t t83 = -6267934924LL;

	t83 = ((x397|(x398-x399))/x400);

	if (t83 != -258LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x401 = INT32_MAX;
	volatile uint8_t x402 = UINT8_MAX;
	int16_t x403 = INT16_MIN;
	int32_t t84 = 514010;

	t84 = ((x401|(x402-x403))/x404);

	if (t84 != -5666183) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x406 = -1;
	uint64_t x407 = UINT64_MAX;
	int32_t x408 = -364954053;
	static uint64_t t85 = 21918356436323995LLU;

	t85 = ((x405|(x406-x407))/x408);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x409 = 264161570LL;
	int32_t x410 = INT32_MAX;
	static int16_t x412 = INT16_MIN;
	volatile int64_t t86 = 4LL;

	t86 = ((x409|(x410-x411))/x412);

	if (t86 != -65535LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x421 = -264398210LL;
	volatile int8_t x422 = INT8_MIN;
	int16_t x423 = INT16_MIN;
	volatile int8_t x424 = INT8_MIN;
	int64_t t87 = 1LL;

	t87 = ((x421|(x422-x423))/x424);

	if (t87 != 2065408LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x425 = 122;
	uint64_t x426 = 19973504LLU;
	int16_t x427 = -1696;
	int64_t x428 = 540LL;

	t88 = ((x425|(x426-x427))/x428);

	if (t88 != 36991LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x429 = 19776LLU;
	uint16_t x430 = UINT16_MAX;
	static uint16_t x431 = 23426U;
	int8_t x432 = -1;

	t89 = ((x429|(x430-x431))/x432);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x433 = UINT8_MAX;
	int32_t x434 = 6;
	static int32_t x436 = -1;
	static volatile uint32_t t90 = 106478557U;

	t90 = ((x433|(x434-x435))/x436);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x437 = INT64_MIN;
	volatile uint8_t x439 = 0U;
	static int16_t x440 = -1;

	t91 = ((x437|(x438-x439))/x440);

	if (t91 != 32768LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x441 = INT16_MIN;
	static volatile int32_t x442 = INT32_MAX;
	volatile uint8_t x444 = UINT8_MAX;

	t92 = ((x441|(x442-x443))/x444);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x450 = 58858LLU;
	static int32_t x451 = INT32_MIN;
	static volatile uint64_t t93 = 3110188148574700LLU;

	t93 = ((x449|(x450-x451))/x452);

	if (t93 != 1277475351364926LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x453 = UINT16_MAX;
	int32_t x455 = INT32_MAX;

	t94 = ((x453|(x454-x455))/x456);

	if (t94 != 16589312LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x457 = UINT64_MAX;
	uint16_t x458 = 39U;
	uint64_t x459 = UINT64_MAX;
	uint64_t t95 = 5852887914989LLU;

	t95 = ((x457|(x458-x459))/x460);

	if (t95 != 25311LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x461 = INT64_MIN;
	int16_t x462 = INT16_MIN;
	uint8_t x463 = 32U;
	int8_t x464 = INT8_MIN;
	int64_t t96 = 722294LL;

	t96 = ((x461|(x462-x463))/x464);

	if (t96 != 256LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x465 = -304;
	uint64_t x467 = 61116908189330LLU;
	int32_t x468 = -1;
	uint64_t t97 = 71557LLU;

	t97 = ((x465|(x466-x467))/x468);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x469 = 2U;
	int64_t x470 = INT64_MAX;
	int32_t x471 = INT32_MAX;
	int32_t x472 = INT32_MIN;

	t98 = ((x469|(x470-x471))/x472);

	if (t98 != -4294967295LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x475 = UINT32_MAX;
	int16_t x476 = -1;
	int64_t t99 = -195989LL;

	t99 = ((x473|(x474-x475))/x476);

	if (t99 != -9223372036854775807LL) { NG(); } else { ; }
	
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

