#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 23671;
volatile int64_t x5 = -16421357470032013LL;
int16_t x17 = 3458;
uint32_t x20 = 13506U;
uint32_t x29 = 24U;
int32_t x32 = 489621;
int8_t x39 = INT8_MIN;
volatile int32_t t7 = -4806853;
int64_t x44 = INT64_MIN;
uint16_t x48 = 14U;
int64_t x56 = INT64_MAX;
int32_t t12 = -1;
int64_t x67 = 3946863194213185417LL;
uint32_t x70 = UINT32_MAX;
int64_t x71 = INT64_MIN;
int16_t x72 = INT16_MAX;
static volatile int64_t x77 = -13333822LL;
int64_t x90 = -1LL;
static uint32_t x93 = 123U;
volatile int32_t t22 = -46297;
uint8_t x111 = 3U;
uint16_t x114 = 24533U;
static int16_t x121 = INT16_MIN;
volatile uint64_t x122 = 90845082LLU;
uint16_t x124 = 35U;
volatile int32_t t28 = -3531222;
volatile int64_t x130 = -1LL;
int32_t x135 = 58444161;
uint8_t x137 = 0U;
volatile uint8_t x139 = UINT8_MAX;
static volatile int32_t t31 = 0;
int32_t x147 = -1;
static int32_t x158 = -6778;
int32_t t34 = -6;
volatile uint16_t x164 = UINT16_MAX;
int32_t t36 = 51088;
int16_t x177 = INT16_MAX;
uint16_t x183 = 7427U;
int8_t x186 = 3;
volatile uint32_t x188 = 3251U;
volatile int32_t t39 = -433199864;
int8_t x204 = INT8_MAX;
static int32_t x209 = INT32_MAX;
int8_t x214 = INT8_MIN;
static uint8_t x216 = UINT8_MAX;
int32_t t45 = 98626151;
uint64_t x220 = 2444375289240594LLU;
static int32_t x234 = 7876783;
static int64_t x242 = -1LL;
uint64_t x246 = UINT64_MAX;
int32_t x248 = INT32_MAX;
int32_t t52 = -2;
uint32_t x250 = 11791286U;
int16_t x264 = INT16_MIN;
int64_t x270 = INT64_MAX;
uint16_t x272 = 6316U;
volatile int32_t x274 = -22;
int16_t x278 = INT16_MAX;
uint8_t x281 = 89U;
int64_t x286 = 4094393575731LL;
uint8_t x294 = 100U;
int32_t t61 = -14552;
int16_t x300 = -1;
int16_t x302 = INT16_MAX;
static int64_t x312 = INT64_MIN;
int32_t t65 = 830316;
int32_t x316 = INT32_MAX;
int32_t x323 = INT32_MIN;
int64_t x324 = 45818453LL;
static int32_t t68 = 172;
volatile int64_t x339 = 12482168669959069LL;
volatile int32_t t71 = 151787;
uint16_t x345 = 2208U;
int8_t x349 = -27;
int16_t x352 = INT16_MIN;
int32_t t73 = 1;
static uint64_t x354 = UINT64_MAX;
uint64_t x359 = UINT64_MAX;
static uint16_t x361 = 10514U;
uint16_t x362 = 0U;
volatile int32_t t76 = -375;
uint8_t x367 = UINT8_MAX;
static volatile int32_t t77 = 7322941;
static int32_t x384 = 1308875;
volatile uint64_t x388 = 921LLU;
int64_t x406 = INT64_MIN;
uint8_t x409 = 1U;
int16_t x411 = -5;
int32_t t86 = -232409;
int32_t x419 = INT32_MIN;
int8_t x440 = -1;
int32_t t90 = -1;
volatile int32_t x442 = 7453172;
uint8_t x447 = 31U;
int32_t x452 = INT32_MIN;
volatile uint8_t x479 = 89U;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	static int64_t x2 = -1LL;
	static volatile int32_t x3 = 15181354;
	int64_t x4 = -1LL;

	t0 = ((x1-x2)==(x3%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x6 = -259364214LL;
	int32_t x7 = 18558;
	uint8_t x8 = 5U;
	volatile int32_t t1 = 0;

	t1 = ((x5-x6)==(x7%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = 1;
	static volatile int8_t x10 = -5;
	int16_t x11 = INT16_MAX;
	int32_t x12 = INT32_MIN;
	int32_t t2 = 18735;

	t2 = ((x9-x10)==(x11%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	uint32_t x14 = 1240U;
	int32_t x15 = 484932;
	volatile uint16_t x16 = 3099U;
	static volatile int32_t t3 = 23;

	t3 = ((x13-x14)==(x15%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x18 = -48259894798LL;
	int16_t x19 = INT16_MIN;
	static volatile int32_t t4 = 170662374;

	t4 = ((x17-x18)==(x19%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x30 = UINT32_MAX;
	static int32_t x31 = INT32_MIN;
	static int32_t t5 = -147639;

	t5 = ((x29-x30)==(x31%x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x33 = 19984098775512992LLU;
	int16_t x34 = 0;
	int64_t x35 = INT64_MIN;
	int16_t x36 = -1594;
	int32_t t6 = 91;

	t6 = ((x33-x34)==(x35%x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = 5;
	uint16_t x38 = 26U;
	int8_t x40 = -1;

	t7 = ((x37-x38)==(x39%x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x41 = UINT16_MAX;
	volatile uint64_t x42 = 63401364311119115LLU;
	static uint64_t x43 = UINT64_MAX;
	volatile int32_t t8 = 76015;

	t8 = ((x41-x42)==(x43%x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x45 = 7U;
	int32_t x46 = -19433;
	int32_t x47 = INT32_MIN;
	volatile int32_t t9 = 3688;

	t9 = ((x45-x46)==(x47%x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x49 = 9U;
	int16_t x50 = 43;
	int32_t x51 = INT32_MIN;
	int32_t x52 = 2332;
	static int32_t t10 = -214;

	t10 = ((x49-x50)==(x51%x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x53 = UINT8_MAX;
	volatile int16_t x54 = 13;
	volatile uint8_t x55 = UINT8_MAX;
	volatile int32_t t11 = 32133;

	t11 = ((x53-x54)==(x55%x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x57 = 47U;
	static int8_t x58 = -1;
	int64_t x59 = 442026LL;
	uint64_t x60 = UINT64_MAX;

	t12 = ((x57-x58)==(x59%x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x61 = -2648607112983231241LL;
	uint32_t x62 = UINT32_MAX;
	int16_t x63 = -90;
	int16_t x64 = INT16_MIN;
	volatile int32_t t13 = -315;

	t13 = ((x61-x62)==(x63%x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = INT16_MAX;
	volatile uint64_t x66 = UINT64_MAX;
	int64_t x68 = -1LL;
	volatile int32_t t14 = -123508;

	t14 = ((x65-x66)==(x67%x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x69 = 276537234020393972LLU;
	int32_t t15 = 80;

	t15 = ((x69-x70)==(x71%x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = 16;
	uint64_t x74 = UINT64_MAX;
	int8_t x75 = INT8_MAX;
	static int64_t x76 = 35802170878LL;
	int32_t t16 = 505;

	t16 = ((x73-x74)==(x75%x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x78 = 236U;
	volatile int8_t x79 = INT8_MIN;
	int16_t x80 = INT16_MIN;
	volatile int32_t t17 = -18770;

	t17 = ((x77-x78)==(x79%x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = INT16_MAX;
	int64_t x82 = INT64_MAX;
	uint16_t x83 = 107U;
	static int32_t x84 = INT32_MAX;
	volatile int32_t t18 = 53515567;

	t18 = ((x81-x82)==(x83%x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x85 = UINT16_MAX;
	uint64_t x86 = 4121029227LLU;
	uint32_t x87 = UINT32_MAX;
	int64_t x88 = INT64_MAX;
	int32_t t19 = 98353;

	t19 = ((x85-x86)==(x87%x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x89 = INT64_MIN;
	volatile uint8_t x91 = 84U;
	int8_t x92 = -1;
	volatile int32_t t20 = -3;

	t20 = ((x89-x90)==(x91%x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x94 = -1388;
	volatile int32_t x95 = INT32_MIN;
	int8_t x96 = -1;
	volatile int32_t t21 = 2086233;

	t21 = ((x93-x94)==(x95%x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = -1LL;
	int8_t x98 = INT8_MAX;
	int32_t x99 = INT32_MIN;
	volatile int8_t x100 = -1;

	t22 = ((x97-x98)==(x99%x100));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x101 = 140U;
	uint8_t x102 = 1U;
	uint32_t x103 = UINT32_MAX;
	static int32_t x104 = INT32_MIN;
	volatile int32_t t23 = 1;

	t23 = ((x101-x102)==(x103%x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x109 = 386897U;
	static int32_t x110 = INT32_MIN;
	uint32_t x112 = 615659U;
	volatile int32_t t24 = 777191121;

	t24 = ((x109-x110)==(x111%x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = -1;
	int64_t x115 = -1LL;
	static int64_t x116 = -1LL;
	volatile int32_t t25 = -12815;

	t25 = ((x113-x114)==(x115%x116));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x117 = 13702602U;
	int32_t x118 = -186969;
	static int8_t x119 = -1;
	static uint16_t x120 = 10U;
	volatile int32_t t26 = 9;

	t26 = ((x117-x118)==(x119%x120));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x123 = UINT16_MAX;
	int32_t t27 = -2;

	t27 = ((x121-x122)==(x123%x124));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x125 = INT32_MIN;
	int32_t x126 = INT32_MIN;
	int16_t x127 = -3;
	uint8_t x128 = 43U;

	t28 = ((x125-x126)==(x127%x128));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x129 = INT32_MIN;
	volatile int64_t x131 = INT64_MIN;
	int8_t x132 = INT8_MAX;
	int32_t t29 = 12370;

	t29 = ((x129-x130)==(x131%x132));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = -1;
	int32_t x134 = -48789648;
	int16_t x136 = -1;
	int32_t t30 = 48933;

	t30 = ((x133-x134)==(x135%x136));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x138 = INT32_MAX;
	int8_t x140 = INT8_MAX;

	t31 = ((x137-x138)==(x139%x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x145 = INT32_MAX;
	uint32_t x146 = UINT32_MAX;
	int8_t x148 = -1;
	int32_t t32 = 176615;

	t32 = ((x145-x146)==(x147%x148));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x153 = INT16_MAX;
	int8_t x154 = -21;
	int16_t x155 = INT16_MIN;
	uint64_t x156 = 195785039LLU;
	volatile int32_t t33 = 2;

	t33 = ((x153-x154)==(x155%x156));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x157 = 11U;
	int32_t x159 = 171970363;
	static int32_t x160 = INT32_MIN;

	t34 = ((x157-x158)==(x159%x160));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x161 = 0;
	uint64_t x162 = UINT64_MAX;
	int8_t x163 = INT8_MAX;
	static int32_t t35 = -229652608;

	t35 = ((x161-x162)==(x163%x164));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x173 = 0U;
	int16_t x174 = INT16_MIN;
	int8_t x175 = INT8_MAX;
	int64_t x176 = INT64_MAX;

	t36 = ((x173-x174)==(x175%x176));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x178 = INT16_MIN;
	int64_t x179 = 615197021498LL;
	int8_t x180 = -1;
	static int32_t t37 = 259190504;

	t37 = ((x177-x178)==(x179%x180));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x181 = INT8_MIN;
	int16_t x182 = INT16_MIN;
	int8_t x184 = INT8_MAX;
	int32_t t38 = 249397;

	t38 = ((x181-x182)==(x183%x184));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x185 = -3945LL;
	int16_t x187 = INT16_MIN;

	t39 = ((x185-x186)==(x187%x188));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x193 = 5535U;
	int8_t x194 = -1;
	volatile uint32_t x195 = 186U;
	volatile int16_t x196 = 3;
	int32_t t40 = -9746;

	t40 = ((x193-x194)==(x195%x196));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x197 = 0;
	static int16_t x198 = -1;
	uint16_t x199 = 2245U;
	static int32_t x200 = INT32_MAX;
	volatile int32_t t41 = 709;

	t41 = ((x197-x198)==(x199%x200));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x201 = 3U;
	int8_t x202 = 10;
	static int16_t x203 = 3;
	volatile int32_t t42 = 21;

	t42 = ((x201-x202)==(x203%x204));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x205 = INT32_MIN;
	static int16_t x206 = INT16_MIN;
	int64_t x207 = -1LL;
	int32_t x208 = 115147659;
	static volatile int32_t t43 = -5715;

	t43 = ((x205-x206)==(x207%x208));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint16_t x210 = UINT16_MAX;
	int8_t x211 = -1;
	uint8_t x212 = UINT8_MAX;
	static int32_t t44 = 7;

	t44 = ((x209-x210)==(x211%x212));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x213 = 1U;
	uint32_t x215 = 5591U;

	t45 = ((x213-x214)==(x215%x216));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x217 = 391;
	static int16_t x218 = -1;
	int16_t x219 = INT16_MAX;
	volatile int32_t t46 = 357688;

	t46 = ((x217-x218)==(x219%x220));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x221 = -1LL;
	uint64_t x222 = UINT64_MAX;
	static uint16_t x223 = 4577U;
	int16_t x224 = INT16_MIN;
	int32_t t47 = 239;

	t47 = ((x221-x222)==(x223%x224));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x225 = -7284;
	static int16_t x226 = -1;
	static int32_t x227 = INT32_MAX;
	int32_t x228 = INT32_MAX;
	volatile int32_t t48 = -53375307;

	t48 = ((x225-x226)==(x227%x228));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x233 = -390244000;
	volatile int64_t x235 = -1LL;
	volatile uint64_t x236 = UINT64_MAX;
	int32_t t49 = -936;

	t49 = ((x233-x234)==(x235%x236));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x237 = 2298725;
	int8_t x238 = 61;
	volatile int8_t x239 = INT8_MIN;
	static uint16_t x240 = 5346U;
	int32_t t50 = -4250;

	t50 = ((x237-x238)==(x239%x240));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x241 = 16U;
	uint32_t x243 = 12025U;
	int8_t x244 = INT8_MAX;
	volatile int32_t t51 = 259544335;

	t51 = ((x241-x242)==(x243%x244));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x245 = 1018;
	static int64_t x247 = INT64_MIN;

	t52 = ((x245-x246)==(x247%x248));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x249 = UINT32_MAX;
	static uint16_t x251 = 7U;
	int32_t x252 = INT32_MAX;
	int32_t t53 = -620869582;

	t53 = ((x249-x250)==(x251%x252));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x261 = INT32_MIN;
	static int32_t x262 = -1;
	static int32_t x263 = INT32_MAX;
	int32_t t54 = -67;

	t54 = ((x261-x262)==(x263%x264));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x265 = 44;
	int64_t x266 = -120549855358336LL;
	uint64_t x267 = 305090773261748411LLU;
	static uint16_t x268 = 803U;
	int32_t t55 = -1;

	t55 = ((x265-x266)==(x267%x268));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x269 = 11532U;
	int32_t x271 = INT32_MIN;
	volatile int32_t t56 = -82;

	t56 = ((x269-x270)==(x271%x272));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x273 = -1LL;
	int32_t x275 = -193;
	uint64_t x276 = UINT64_MAX;
	static volatile int32_t t57 = 3;

	t57 = ((x273-x274)==(x275%x276));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x277 = -1LL;
	volatile int64_t x279 = 7448280594LL;
	int64_t x280 = INT64_MIN;
	volatile int32_t t58 = 117915947;

	t58 = ((x277-x278)==(x279%x280));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x282 = INT16_MIN;
	static uint64_t x283 = UINT64_MAX;
	int64_t x284 = INT64_MIN;
	volatile int32_t t59 = 8033589;

	t59 = ((x281-x282)==(x283%x284));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x285 = -305;
	static volatile int16_t x287 = -1;
	static int16_t x288 = INT16_MAX;
	int32_t t60 = -93937126;

	t60 = ((x285-x286)==(x287%x288));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x293 = 10LL;
	int64_t x295 = INT64_MIN;
	int16_t x296 = -10922;

	t61 = ((x293-x294)==(x295%x296));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x297 = -1LL;
	int32_t x298 = -1;
	int64_t x299 = INT64_MIN;
	volatile int32_t t62 = -2;

	t62 = ((x297-x298)==(x299%x300));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x301 = 2U;
	int16_t x303 = INT16_MAX;
	static int8_t x304 = INT8_MIN;
	static int32_t t63 = 2505;

	t63 = ((x301-x302)==(x303%x304));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x305 = -1;
	volatile int64_t x306 = 3826800LL;
	volatile uint16_t x307 = UINT16_MAX;
	int32_t x308 = 59682779;
	int32_t t64 = 824;

	t64 = ((x305-x306)==(x307%x308));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x309 = -1LL;
	uint8_t x310 = UINT8_MAX;
	int32_t x311 = INT32_MIN;

	t65 = ((x309-x310)==(x311%x312));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x313 = UINT16_MAX;
	static uint32_t x314 = UINT32_MAX;
	int16_t x315 = INT16_MIN;
	int32_t t66 = 6544;

	t66 = ((x313-x314)==(x315%x316));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x317 = -1;
	uint8_t x318 = UINT8_MAX;
	uint32_t x319 = 47137U;
	volatile int32_t x320 = 116;
	int32_t t67 = -2736;

	t67 = ((x317-x318)==(x319%x320));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x321 = INT16_MAX;
	uint64_t x322 = 3454LLU;

	t68 = ((x321-x322)==(x323%x324));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x325 = INT16_MIN;
	int32_t x326 = -1;
	uint64_t x327 = 58444LLU;
	static volatile uint32_t x328 = 242646U;
	volatile int32_t t69 = -66;

	t69 = ((x325-x326)==(x327%x328));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x333 = INT64_MIN;
	volatile uint64_t x334 = 2630653LLU;
	static volatile uint16_t x335 = 30477U;
	static uint8_t x336 = 84U;
	int32_t t70 = 79673342;

	t70 = ((x333-x334)==(x335%x336));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x337 = UINT32_MAX;
	uint16_t x338 = 46U;
	uint8_t x340 = 15U;

	t71 = ((x337-x338)==(x339%x340));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x346 = INT8_MAX;
	uint32_t x347 = 839U;
	volatile int64_t x348 = INT64_MIN;
	volatile int32_t t72 = 36104;

	t72 = ((x345-x346)==(x347%x348));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x350 = -1;
	int16_t x351 = -1;

	t73 = ((x349-x350)==(x351%x352));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x353 = 9U;
	volatile uint16_t x355 = 16U;
	int64_t x356 = INT64_MIN;
	volatile int32_t t74 = -132105;

	t74 = ((x353-x354)==(x355%x356));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x357 = -1LL;
	int8_t x358 = -1;
	int16_t x360 = 1530;
	static volatile int32_t t75 = 0;

	t75 = ((x357-x358)==(x359%x360));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int64_t x363 = INT64_MIN;
	static int8_t x364 = 1;

	t76 = ((x361-x362)==(x363%x364));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x365 = 115670635U;
	uint64_t x366 = 4800LLU;
	int16_t x368 = -486;

	t77 = ((x365-x366)==(x367%x368));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x369 = -1578LL;
	volatile int8_t x370 = -38;
	int16_t x371 = INT16_MIN;
	int16_t x372 = 409;
	static int32_t t78 = -26879;

	t78 = ((x369-x370)==(x371%x372));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x373 = 2U;
	int64_t x374 = -1847645351054LL;
	int8_t x375 = INT8_MIN;
	int64_t x376 = INT64_MAX;
	volatile int32_t t79 = -1680653;

	t79 = ((x373-x374)==(x375%x376));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x377 = 1990842U;
	int8_t x378 = -31;
	int8_t x379 = -23;
	uint8_t x380 = UINT8_MAX;
	volatile int32_t t80 = -2;

	t80 = ((x377-x378)==(x379%x380));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x381 = 2731LLU;
	int32_t x382 = 356;
	volatile int64_t x383 = 161594487424895LL;
	volatile int32_t t81 = -1;

	t81 = ((x381-x382)==(x383%x384));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x385 = INT32_MIN;
	static int16_t x386 = INT16_MIN;
	static uint8_t x387 = 39U;
	int32_t t82 = -4;

	t82 = ((x385-x386)==(x387%x388));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x393 = 14011U;
	uint32_t x394 = 441113U;
	int16_t x395 = INT16_MIN;
	int16_t x396 = INT16_MIN;
	volatile int32_t t83 = -505;

	t83 = ((x393-x394)==(x395%x396));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x401 = -26720LL;
	uint8_t x402 = 63U;
	int16_t x403 = -4919;
	int8_t x404 = INT8_MIN;
	static int32_t t84 = -318;

	t84 = ((x401-x402)==(x403%x404));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x405 = INT32_MIN;
	uint16_t x407 = UINT16_MAX;
	int8_t x408 = INT8_MIN;
	int32_t t85 = 977412791;

	t85 = ((x405-x406)==(x407%x408));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x410 = -1LL;
	static int64_t x412 = -1LL;

	t86 = ((x409-x410)==(x411%x412));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x417 = INT8_MIN;
	uint8_t x418 = 104U;
	uint32_t x420 = 22325U;
	volatile int32_t t87 = -323;

	t87 = ((x417-x418)==(x419%x420));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x425 = INT16_MAX;
	uint32_t x426 = 16U;
	uint8_t x427 = 2U;
	static int8_t x428 = INT8_MAX;
	int32_t t88 = 73666;

	t88 = ((x425-x426)==(x427%x428));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x429 = -1;
	int32_t x430 = INT32_MAX;
	static int64_t x431 = 271702521600090423LL;
	uint64_t x432 = UINT64_MAX;
	volatile int32_t t89 = -30293479;

	t89 = ((x429-x430)==(x431%x432));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x437 = -1;
	uint64_t x438 = 2122281039391346LLU;
	int8_t x439 = INT8_MAX;

	t90 = ((x437-x438)==(x439%x440));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x441 = 6258371185681020LL;
	uint64_t x443 = UINT64_MAX;
	int32_t x444 = -427;
	int32_t t91 = -59;

	t91 = ((x441-x442)==(x443%x444));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x445 = 1446282112566255326LL;
	volatile int16_t x446 = -1;
	static int32_t x448 = INT32_MIN;
	int32_t t92 = 26833534;

	t92 = ((x445-x446)==(x447%x448));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x449 = 29U;
	uint16_t x450 = UINT16_MAX;
	uint64_t x451 = 4LLU;
	static int32_t t93 = 4016;

	t93 = ((x449-x450)==(x451%x452));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x453 = INT16_MIN;
	uint16_t x454 = 13105U;
	volatile int32_t x455 = INT32_MIN;
	uint16_t x456 = 3U;
	int32_t t94 = 45203;

	t94 = ((x453-x454)==(x455%x456));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x461 = 15629LLU;
	int32_t x462 = -1;
	volatile int8_t x463 = INT8_MIN;
	uint32_t x464 = 23285U;
	volatile int32_t t95 = -48927;

	t95 = ((x461-x462)==(x463%x464));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x465 = INT16_MIN;
	volatile int32_t x466 = -1;
	int32_t x467 = INT32_MIN;
	volatile int16_t x468 = -9079;
	int32_t t96 = 77;

	t96 = ((x465-x466)==(x467%x468));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x469 = 22;
	int64_t x470 = -82552566220LL;
	int64_t x471 = 1306982694LL;
	static volatile int64_t x472 = -11844518287195LL;
	static int32_t t97 = -3;

	t97 = ((x469-x470)==(x471%x472));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x473 = -1;
	uint8_t x474 = UINT8_MAX;
	int8_t x475 = INT8_MAX;
	int32_t x476 = INT32_MAX;
	volatile int32_t t98 = -174;

	t98 = ((x473-x474)==(x475%x476));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x477 = INT16_MAX;
	uint64_t x478 = 444194LLU;
	volatile int64_t x480 = INT64_MAX;
	int32_t t99 = -69120;

	t99 = ((x477-x478)==(x479%x480));

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

