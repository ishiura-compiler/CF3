#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x8 = UINT8_MAX;
static int64_t t1 = 54945442326407731LL;
static volatile uint16_t x12 = 3091U;
static int16_t x20 = -888;
static uint32_t x22 = 267788545U;
uint32_t t5 = 1U;
int32_t x30 = INT32_MIN;
uint8_t x36 = 2U;
int8_t x39 = -1;
static uint64_t x43 = UINT64_MAX;
uint64_t x45 = UINT64_MAX;
uint16_t x46 = 4U;
int8_t x54 = INT8_MIN;
volatile uint64_t t13 = 12922631LLU;
int32_t x66 = -1;
volatile int16_t x75 = 3;
uint64_t x79 = UINT64_MAX;
uint16_t x85 = 4U;
int32_t x88 = 267;
static uint8_t x92 = 20U;
volatile uint64_t x95 = 63549484LLU;
volatile int64_t t23 = 279690860380388991LL;
volatile uint32_t x113 = 362218193U;
static int64_t x114 = INT64_MIN;
volatile int32_t x117 = INT32_MIN;
uint8_t x119 = 7U;
volatile int16_t x120 = -1;
static volatile uint64_t t26 = 2145794738738LLU;
static uint8_t x128 = 37U;
int64_t x139 = INT64_MAX;
int16_t x142 = INT16_MAX;
int64_t x143 = 0LL;
static volatile uint8_t x150 = 112U;
uint64_t x152 = 419LLU;
static volatile uint64_t t32 = 3462LLU;
uint64_t x154 = UINT64_MAX;
volatile uint64_t x174 = 0LLU;
int32_t x182 = -3;
static uint32_t t36 = 806U;
static uint32_t x202 = 1013U;
volatile uint32_t t38 = 61345393U;
uint32_t x211 = 15U;
int16_t x212 = INT16_MAX;
volatile uint64_t x213 = 9LLU;
uint64_t x215 = UINT64_MAX;
static volatile int32_t x217 = INT32_MIN;
static uint16_t x221 = 3U;
static volatile uint32_t t43 = 109U;
int64_t t44 = -30836408386LL;
int16_t x232 = INT16_MAX;
uint16_t x233 = 6U;
volatile uint16_t x246 = 6609U;
static volatile uint8_t x250 = UINT8_MAX;
int32_t x251 = INT32_MIN;
volatile uint32_t t49 = 59066U;
static int8_t x255 = -1;
volatile int16_t x260 = -1;
int64_t x264 = -2514534180240LL;
uint8_t x266 = 9U;
uint32_t x268 = UINT32_MAX;
uint16_t x279 = 1U;
int32_t x286 = -54117;
int64_t x287 = -90670907803143350LL;
int64_t x292 = -1LL;
static int8_t x294 = 0;
static int32_t x296 = -189880;
static uint8_t x297 = 15U;
static int64_t x298 = -1078590700744961LL;
uint64_t t59 = 386773655105LLU;
int32_t x305 = 22489;
static volatile int64_t t60 = -2212679156883259634LL;
int32_t x309 = INT32_MIN;
int16_t x310 = INT16_MAX;
volatile int32_t t61 = 18;
int32_t x313 = INT32_MIN;
uint8_t x319 = 20U;
volatile uint64_t x320 = UINT64_MAX;
uint32_t x322 = 2387487U;
static int16_t x323 = 14;
int32_t x332 = 0;
uint8_t x338 = 0U;
volatile uint64_t x339 = 1603LLU;
int64_t x340 = 62860886228LL;
int8_t x347 = INT8_MIN;
int16_t x348 = -7500;
volatile int32_t t69 = 141;
volatile uint32_t t71 = 143037U;
static int32_t x358 = 64022814;
uint32_t x359 = 65738280U;
volatile int32_t x361 = -459105759;
uint16_t x362 = 2U;
volatile uint8_t x364 = 3U;
int8_t x378 = 6;
uint8_t x380 = 0U;
volatile int32_t t77 = 27303;
static volatile uint64_t x387 = 79963851759LLU;
int16_t x388 = INT16_MIN;
static volatile uint64_t t78 = 4184318343LLU;
static uint16_t x399 = UINT16_MAX;
uint64_t x400 = UINT64_MAX;
static uint64_t x401 = 1287760LLU;
int16_t x402 = INT16_MAX;
uint8_t x407 = 7U;
int32_t x410 = INT32_MAX;
volatile uint32_t x411 = UINT32_MAX;
int32_t x417 = -1;
uint16_t x422 = 3U;
int16_t x428 = 0;
volatile uint8_t x430 = UINT8_MAX;
static volatile int64_t t90 = -13495LL;
int8_t x443 = INT8_MAX;
int16_t x447 = INT16_MAX;
static int8_t x450 = INT8_MIN;
volatile int64_t t93 = 11582696130306LL;
static uint64_t x453 = 5LLU;
int8_t x454 = INT8_MAX;
int16_t x459 = INT16_MIN;
int32_t x460 = -1;
int64_t t95 = -395970383314LL;
int8_t x461 = 6;
volatile int8_t x462 = -1;
volatile int32_t x464 = INT32_MIN;
int32_t t96 = 3545;
volatile int8_t x470 = -1;
int32_t x474 = INT32_MAX;
int32_t t99 = -1431;


void f0(void) {
	volatile int8_t x1 = INT8_MIN;
	uint8_t x2 = UINT8_MAX;
	int64_t x3 = 615660524341139776LL;
	uint64_t x4 = 204169448090664484LLU;
	uint64_t t0 = 27027423796LLU;

	t0 = ((x1&x2)+(x3-x4));

	if (t0 != 411491076250475420LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = UINT16_MAX;
	int64_t x6 = 1319870995LL;
	int64_t x7 = -1LL;

	t1 = ((x5&x6)+(x7-x8));

	if (t1 != 41235LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = -228885;
	int8_t x10 = INT8_MIN;
	static uint32_t x11 = 1345746966U;
	static uint32_t t2 = 68271099U;

	t2 = ((x9&x10)+(x11-x12));

	if (t2 != 1345514883U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int16_t x14 = INT16_MIN;
	int32_t x15 = INT32_MIN;
	int32_t x16 = INT32_MIN;
	volatile int64_t t3 = INT64_MIN;

	t3 = ((x13&x14)+(x15-x16));

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint16_t x17 = 2U;
	int64_t x18 = INT64_MIN;
	int16_t x19 = INT16_MAX;
	static volatile int64_t t4 = -1745LL;

	t4 = ((x17&x18)+(x19-x20));

	if (t4 != 33655LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	uint8_t x23 = UINT8_MAX;
	volatile int8_t x24 = -1;

	t5 = ((x21&x22)+(x23-x24));

	if (t5 != 267788801U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x25 = -1;
	uint64_t x26 = 776004347891223582LLU;
	uint32_t x27 = 117U;
	volatile uint8_t x28 = UINT8_MAX;
	uint64_t t6 = 393720689LLU;

	t6 = ((x25&x26)+(x27-x28));

	if (t6 != 776004352186190740LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 697336858;
	int32_t x31 = 43630;
	int32_t x32 = -1;
	int32_t t7 = -851778523;

	t7 = ((x29&x30)+(x31-x32));

	if (t7 != 43631) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	volatile uint16_t x34 = 97U;
	static volatile uint64_t x35 = 196LLU;
	uint64_t t8 = 26674LLU;

	t8 = ((x33&x34)+(x35-x36));

	if (t8 != 291LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = INT32_MIN;
	static uint64_t x38 = 539799129LLU;
	static int8_t x40 = -1;
	volatile uint64_t t9 = 19667460LLU;

	t9 = ((x37&x38)+(x39-x40));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = 19206954056187LL;
	int8_t x42 = INT8_MIN;
	volatile int64_t x44 = INT64_MAX;
	volatile uint64_t t10 = 6LLU;

	t10 = ((x41&x42)+(x43-x44));

	if (t10 != 9223391243808831872LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x47 = INT32_MIN;
	static uint64_t x48 = 7329429519975LLU;
	uint64_t t11 = 535073643LLU;

	t11 = ((x45&x46)+(x47-x48));

	if (t11 != 18446736742132547997LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1;
	static int32_t x50 = -1;
	int32_t x51 = INT32_MIN;
	uint32_t x52 = 1U;
	volatile uint32_t t12 = 45092U;

	t12 = ((x49&x50)+(x51-x52));

	if (t12 != 2147483646U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 1U;
	volatile uint16_t x55 = 1U;
	uint64_t x56 = 2635086304422LLU;

	t13 = ((x53&x54)+(x55-x56));

	if (t13 != 18446741438623247195LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x57 = 3579U;
	volatile uint64_t x58 = UINT64_MAX;
	volatile int16_t x59 = -649;
	int32_t x60 = INT32_MIN;
	uint64_t t14 = 127999572LLU;

	t14 = ((x57&x58)+(x59-x60));

	if (t14 != 2147486578LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = 2342;
	uint64_t x62 = 160LLU;
	static int8_t x63 = INT8_MAX;
	uint32_t x64 = 0U;
	uint64_t t15 = 3641976375186599139LLU;

	t15 = ((x61&x62)+(x63-x64));

	if (t15 != 159LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 3U;
	int16_t x67 = -1;
	int8_t x68 = INT8_MIN;
	int32_t t16 = -2094511;

	t16 = ((x65&x66)+(x67-x68));

	if (t16 != 130) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MAX;
	int8_t x74 = 1;
	int8_t x76 = INT8_MIN;
	int32_t t17 = 5421;

	t17 = ((x73&x74)+(x75-x76));

	if (t17 != 132) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x77 = -11;
	int16_t x78 = -1;
	int8_t x80 = 0;
	uint64_t t18 = 4045LLU;

	t18 = ((x77&x78)+(x79-x80));

	if (t18 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x81 = UINT32_MAX;
	uint32_t x82 = UINT32_MAX;
	volatile int32_t x83 = -1;
	int64_t x84 = INT64_MAX;
	static volatile int64_t t19 = 466099230759234LL;

	t19 = ((x81&x82)+(x83-x84));

	if (t19 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x86 = 1252;
	uint64_t x87 = 1LLU;
	uint64_t t20 = 80542533141435LLU;

	t20 = ((x85&x86)+(x87-x88));

	if (t20 != 18446744073709551354LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x89 = UINT16_MAX;
	static volatile int8_t x90 = INT8_MIN;
	uint32_t x91 = 148U;
	volatile uint32_t t21 = 2574U;

	t21 = ((x89&x90)+(x91-x92));

	if (t21 != 65536U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x93 = 2089624483U;
	volatile int64_t x94 = INT64_MAX;
	int8_t x96 = INT8_MAX;
	volatile uint64_t t22 = 331236265416703LLU;

	t22 = ((x93&x94)+(x95-x96));

	if (t22 != 2153173840LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = INT16_MIN;
	uint32_t x98 = 0U;
	static int64_t x99 = INT64_MIN;
	int32_t x100 = -61;

	t23 = ((x97&x98)+(x99-x100));

	if (t23 != -9223372036854775747LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x115 = UINT8_MAX;
	static volatile int16_t x116 = INT16_MIN;
	volatile int64_t t24 = 3376LL;

	t24 = ((x113&x114)+(x115-x116));

	if (t24 != 33023LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x118 = 893313401;
	int32_t t25 = -59493009;

	t25 = ((x117&x118)+(x119-x120));

	if (t25 != 8) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x121 = INT16_MIN;
	uint64_t x122 = UINT64_MAX;
	volatile int64_t x123 = 1051685897LL;
	static uint16_t x124 = 27510U;

	t26 = ((x121&x122)+(x123-x124));

	if (t26 != 1051625619LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = INT64_MIN;
	uint16_t x126 = 6033U;
	int8_t x127 = -1;
	int64_t t27 = -832101556606478866LL;

	t27 = ((x125&x126)+(x127-x128));

	if (t27 != -38LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x129 = UINT32_MAX;
	volatile int64_t x130 = INT64_MIN;
	int8_t x131 = 3;
	static uint16_t x132 = 104U;
	volatile int64_t t28 = 348014615447LL;

	t28 = ((x129&x130)+(x131-x132));

	if (t28 != -101LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x137 = 15477;
	int64_t x138 = -1LL;
	static uint64_t x140 = 136548493355109LLU;
	uint64_t t29 = 426161889715446446LLU;

	t29 = ((x137&x138)+(x139-x140));

	if (t29 != 9223235488361436175LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x141 = UINT16_MAX;
	int64_t x144 = INT64_MAX;
	volatile int64_t t30 = -289LL;

	t30 = ((x141&x142)+(x143-x144));

	if (t30 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x145 = INT8_MAX;
	static uint16_t x146 = UINT16_MAX;
	int16_t x147 = -1;
	int16_t x148 = INT16_MIN;
	int32_t t31 = -168389582;

	t31 = ((x145&x146)+(x147-x148));

	if (t31 != 32894) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x149 = INT32_MAX;
	int64_t x151 = -57194LL;

	t32 = ((x149&x150)+(x151-x152));

	if (t32 != 18446744073709494115LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x153 = 0U;
	int8_t x155 = -1;
	uint8_t x156 = 1U;
	volatile uint64_t t33 = 671233402LLU;

	t33 = ((x153&x154)+(x155-x156));

	if (t33 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x161 = 7991U;
	int32_t x162 = INT32_MIN;
	uint32_t x163 = 4576702U;
	static int32_t x164 = -25823373;
	volatile uint32_t t34 = 268273U;

	t34 = ((x161&x162)+(x163-x164));

	if (t34 != 30400075U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x173 = -1;
	uint64_t x175 = 29261555LLU;
	int8_t x176 = INT8_MAX;
	static uint64_t t35 = 130233414239140LLU;

	t35 = ((x173&x174)+(x175-x176));

	if (t35 != 29261428LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x181 = UINT32_MAX;
	uint8_t x183 = 0U;
	volatile uint8_t x184 = 1U;

	t36 = ((x181&x182)+(x183-x184));

	if (t36 != 4294967292U) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x185 = INT64_MAX;
	int8_t x186 = 2;
	uint64_t x187 = UINT64_MAX;
	static uint16_t x188 = 6U;
	volatile uint64_t t37 = 186393036407LLU;

	t37 = ((x185&x186)+(x187-x188));

	if (t37 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x201 = UINT8_MAX;
	int8_t x203 = -1;
	static int8_t x204 = INT8_MIN;

	t38 = ((x201&x202)+(x203-x204));

	if (t38 != 372U) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x205 = 0;
	int8_t x206 = INT8_MAX;
	volatile int8_t x207 = INT8_MIN;
	uint8_t x208 = 4U;
	int32_t t39 = -13586905;

	t39 = ((x205&x206)+(x207-x208));

	if (t39 != -132) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x209 = -1;
	uint32_t x210 = 19175888U;
	volatile uint32_t t40 = 1086756U;

	t40 = ((x209&x210)+(x211-x212));

	if (t40 != 19143136U) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x214 = -342;
	int32_t x216 = -1;
	volatile uint64_t t41 = 3619395000229736LLU;

	t41 = ((x213&x214)+(x215-x216));

	if (t41 != 8LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x218 = -3;
	int64_t x219 = -1LL;
	int8_t x220 = 1;
	volatile int64_t t42 = 3097114LL;

	t42 = ((x217&x218)+(x219-x220));

	if (t42 != -2147483650LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x222 = INT16_MIN;
	uint32_t x223 = 113548U;
	int8_t x224 = 11;

	t43 = ((x221&x222)+(x223-x224));

	if (t43 != 113537U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x225 = 1035U;
	int64_t x226 = 2255424595795946782LL;
	static volatile uint32_t x227 = 611U;
	uint32_t x228 = 0U;

	t44 = ((x225&x226)+(x227-x228));

	if (t44 != 1645LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x229 = -1;
	int64_t x230 = 9906450422086444LL;
	volatile int32_t x231 = -26;
	static int64_t t45 = 7651455689608793LL;

	t45 = ((x229&x230)+(x231-x232));

	if (t45 != 9906450422053651LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x234 = INT16_MIN;
	static int16_t x235 = INT16_MIN;
	int32_t x236 = INT32_MIN;
	int32_t t46 = -161189;

	t46 = ((x233&x234)+(x235-x236));

	if (t46 != 2147450880) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x241 = 4538U;
	uint8_t x242 = 10U;
	int8_t x243 = 1;
	volatile uint32_t x244 = 61U;
	volatile uint32_t t47 = 2694U;

	t47 = ((x241&x242)+(x243-x244));

	if (t47 != 4294967246U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x245 = 1;
	static uint16_t x247 = 4U;
	static uint8_t x248 = 3U;
	volatile int32_t t48 = 1;

	t48 = ((x245&x246)+(x247-x248));

	if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x249 = 1U;
	uint32_t x252 = UINT32_MAX;

	t49 = ((x249&x250)+(x251-x252));

	if (t49 != 2147483650U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x253 = -21544387;
	static volatile int64_t x254 = -291003173720LL;
	static int32_t x256 = -431;
	int64_t t50 = -3029771LL;

	t50 = ((x253&x254)+(x255-x256));

	if (t50 != -291007938090LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x257 = 21428U;
	static int8_t x258 = 10;
	int16_t x259 = INT16_MIN;
	int32_t t51 = 48912;

	t51 = ((x257&x258)+(x259-x260));

	if (t51 != -32767) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x261 = INT64_MAX;
	int32_t x262 = INT32_MAX;
	volatile int32_t x263 = -1;
	int64_t t52 = -142731LL;

	t52 = ((x261&x262)+(x263-x264));

	if (t52 != 2516681663886LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x265 = 2U;
	uint16_t x267 = UINT16_MAX;
	volatile uint32_t t53 = 437822U;

	t53 = ((x265&x266)+(x267-x268));

	if (t53 != 65536U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x273 = INT8_MIN;
	static int16_t x274 = 855;
	int64_t x275 = INT64_MAX;
	volatile uint16_t x276 = 1301U;
	int64_t t54 = 115314LL;

	t54 = ((x273&x274)+(x275-x276));

	if (t54 != 9223372036854775274LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x277 = INT32_MAX;
	static int32_t x278 = INT32_MAX;
	static uint64_t x280 = 138882735646446446LLU;
	volatile uint64_t t55 = 0LLU;

	t55 = ((x277&x278)+(x279-x280));

	if (t55 != 18307861340210588818LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x285 = INT32_MIN;
	uint64_t x288 = 226518LLU;
	uint64_t t56 = 1957LLU;

	t56 = ((x285&x286)+(x287-x288));

	if (t56 != 18356073163758698100LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x289 = 0U;
	static int32_t x290 = INT32_MIN;
	static int32_t x291 = INT32_MIN;
	volatile int64_t t57 = -2003593505057LL;

	t57 = ((x289&x290)+(x291-x292));

	if (t57 != -2147483647LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x293 = INT32_MAX;
	int64_t x295 = INT64_MIN;
	volatile int64_t t58 = 155598LL;

	t58 = ((x293&x294)+(x295-x296));

	if (t58 != -9223372036854585928LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x299 = 3327U;
	uint64_t x300 = UINT64_MAX;

	t59 = ((x297&x298)+(x299-x300));

	if (t59 != 3343LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x306 = INT64_MAX;
	static int64_t x307 = INT64_MIN;
	volatile int8_t x308 = INT8_MIN;

	t60 = ((x305&x306)+(x307-x308));

	if (t60 != -9223372036854753191LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x311 = INT8_MAX;
	volatile int8_t x312 = INT8_MIN;

	t61 = ((x309&x310)+(x311-x312));

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x314 = -1;
	volatile int64_t x315 = INT64_MAX;
	static uint16_t x316 = UINT16_MAX;
	int64_t t62 = 330099091LL;

	t62 = ((x313&x314)+(x315-x316));

	if (t62 != 9223372034707226624LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x317 = -767180193;
	static uint16_t x318 = UINT16_MAX;
	volatile uint64_t t63 = 5560465587315LLU;

	t63 = ((x317&x318)+(x319-x320));

	if (t63 != 49780LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x321 = 1LL;
	uint16_t x324 = 6440U;
	int64_t t64 = 1LL;

	t64 = ((x321&x322)+(x323-x324));

	if (t64 != -6425LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x325 = -1LL;
	volatile int32_t x326 = INT32_MAX;
	int64_t x327 = INT64_MIN;
	uint64_t x328 = UINT64_MAX;
	volatile uint64_t t65 = 29246754454LLU;

	t65 = ((x325&x326)+(x327-x328));

	if (t65 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x329 = INT64_MIN;
	int32_t x330 = INT32_MIN;
	int8_t x331 = INT8_MAX;
	int64_t t66 = 266873513LL;

	t66 = ((x329&x330)+(x331-x332));

	if (t66 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x333 = INT64_MAX;
	uint32_t x334 = 5U;
	volatile int64_t x335 = -144777LL;
	uint64_t x336 = 3425548419704367353LLU;
	uint64_t t67 = 58LLU;

	t67 = ((x333&x334)+(x335-x336));

	if (t67 != 15021195654005039491LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x337 = 83941620628LL;
	uint64_t t68 = 138LLU;

	t68 = ((x337&x338)+(x339-x340));

	if (t68 != 18446744010848666991LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x345 = -21;
	volatile int16_t x346 = INT16_MIN;

	t69 = ((x345&x346)+(x347-x348));

	if (t69 != -25396) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x349 = 0U;
	uint16_t x350 = 496U;
	uint64_t x351 = 5189384735633LLU;
	volatile int16_t x352 = -3767;
	static volatile uint64_t t70 = 26746483197LLU;

	t70 = ((x349&x350)+(x351-x352));

	if (t70 != 5189384739400LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x353 = UINT16_MAX;
	int16_t x354 = 0;
	volatile uint32_t x355 = UINT32_MAX;
	volatile int32_t x356 = INT32_MIN;

	t71 = ((x353&x354)+(x355-x356));

	if (t71 != 2147483647U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x357 = -1LL;
	uint32_t x360 = 5419U;
	int64_t t72 = 747871312230LL;

	t72 = ((x357&x358)+(x359-x360));

	if (t72 != 129755675LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x363 = -1;
	volatile int32_t t73 = -1067515513;

	t73 = ((x361&x362)+(x363-x364));

	if (t73 != -4) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x365 = INT32_MIN;
	static int16_t x366 = INT16_MAX;
	static int8_t x367 = INT8_MAX;
	uint8_t x368 = 0U;
	static volatile int32_t t74 = -609;

	t74 = ((x365&x366)+(x367-x368));

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x373 = UINT8_MAX;
	uint16_t x374 = 31423U;
	uint16_t x375 = 52U;
	int8_t x376 = INT8_MIN;
	volatile int32_t t75 = -94;

	t75 = ((x373&x374)+(x375-x376));

	if (t75 != 371) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x377 = INT8_MAX;
	int32_t x379 = 1;
	static volatile int32_t t76 = 0;

	t76 = ((x377&x378)+(x379-x380));

	if (t76 != 7) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x381 = 0;
	int32_t x382 = INT32_MIN;
	int16_t x383 = 11;
	int8_t x384 = INT8_MAX;

	t77 = ((x381&x382)+(x383-x384));

	if (t77 != -116) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x385 = INT16_MIN;
	volatile uint16_t x386 = 19U;

	t78 = ((x385&x386)+(x387-x388));

	if (t78 != 79963884527LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x389 = 191294U;
	int8_t x390 = 6;
	static int32_t x391 = -4755;
	static volatile int64_t x392 = 1168672308470328LL;
	volatile int64_t t79 = 2242688273190927833LL;

	t79 = ((x389&x390)+(x391-x392));

	if (t79 != -1168672308475077LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x393 = INT8_MIN;
	uint16_t x394 = UINT16_MAX;
	int16_t x395 = -1;
	int16_t x396 = INT16_MAX;
	int32_t t80 = 24834459;

	t80 = ((x393&x394)+(x395-x396));

	if (t80 != 32640) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x397 = INT8_MAX;
	int16_t x398 = 1;
	volatile uint64_t t81 = 83745955013LLU;

	t81 = ((x397&x398)+(x399-x400));

	if (t81 != 65537LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x403 = 210U;
	int8_t x404 = -1;
	uint64_t t82 = 22957036391615LLU;

	t82 = ((x401&x402)+(x403-x404));

	if (t82 != 10019LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x405 = UINT64_MAX;
	volatile int8_t x406 = INT8_MIN;
	int32_t x408 = -76498;
	static volatile uint64_t t83 = 29LLU;

	t83 = ((x405&x406)+(x407-x408));

	if (t83 != 76377LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x409 = UINT16_MAX;
	int8_t x412 = 6;
	volatile uint32_t t84 = 447223275U;

	t84 = ((x409&x410)+(x411-x412));

	if (t84 != 65528U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x413 = -151;
	int8_t x414 = INT8_MAX;
	int32_t x415 = INT32_MIN;
	int64_t x416 = INT64_MIN;
	static int64_t t85 = -1LL;

	t85 = ((x413&x414)+(x415-x416));

	if (t85 != 9223372034707292265LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x418 = UINT16_MAX;
	int16_t x419 = -95;
	volatile uint16_t x420 = 23784U;
	int32_t t86 = 31975997;

	t86 = ((x417&x418)+(x419-x420));

	if (t86 != 41656) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x421 = UINT64_MAX;
	int32_t x423 = INT32_MAX;
	static uint16_t x424 = UINT16_MAX;
	volatile uint64_t t87 = 79129459879LLU;

	t87 = ((x421&x422)+(x423-x424));

	if (t87 != 2147418115LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x425 = -325351;
	static volatile int8_t x426 = -6;
	int32_t x427 = 367295543;
	volatile int32_t t88 = -4;

	t88 = ((x425&x426)+(x427-x428));

	if (t88 != 366970191) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x429 = INT64_MIN;
	static uint16_t x431 = 8U;
	uint32_t x432 = 1237590178U;
	int64_t t89 = -796122231838069LL;

	t89 = ((x429&x430)+(x431-x432));

	if (t89 != 3057377126LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x433 = INT8_MIN;
	int8_t x434 = INT8_MAX;
	int32_t x435 = -27;
	volatile int64_t x436 = 30434382186681LL;

	t90 = ((x433&x434)+(x435-x436));

	if (t90 != -30434382186708LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x441 = 10U;
	volatile uint32_t x442 = 2U;
	uint32_t x444 = UINT32_MAX;
	static uint32_t t91 = 1243U;

	t91 = ((x441&x442)+(x443-x444));

	if (t91 != 130U) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x445 = 0;
	int16_t x446 = -5015;
	static int32_t x448 = -1;
	static volatile int32_t t92 = -1;

	t92 = ((x445&x446)+(x447-x448));

	if (t92 != 32768) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x449 = -1LL;
	uint32_t x451 = 683427628U;
	uint32_t x452 = 992U;

	t93 = ((x449&x450)+(x451-x452));

	if (t93 != 683426508LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x455 = INT16_MIN;
	static int8_t x456 = INT8_MIN;
	volatile uint64_t t94 = 0LLU;

	t94 = ((x453&x454)+(x455-x456));

	if (t94 != 18446744073709518981LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x457 = INT64_MAX;
	int32_t x458 = INT32_MIN;

	t95 = ((x457&x458)+(x459-x460));

	if (t95 != 9223372034707259393LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x463 = INT8_MIN;

	t96 = ((x461&x462)+(x463-x464));

	if (t96 != 2147483526) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x465 = -1;
	static int8_t x466 = INT8_MIN;
	uint8_t x467 = 0U;
	volatile int16_t x468 = -1024;
	static volatile int32_t t97 = 221075;

	t97 = ((x465&x466)+(x467-x468));

	if (t97 != 896) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x469 = INT64_MIN;
	int32_t x471 = -1;
	uint64_t x472 = 382664555709LLU;
	volatile uint64_t t98 = 37879687752LLU;

	t98 = ((x469&x470)+(x471-x472));

	if (t98 != 9223371654190220098LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x473 = 1U;
	static volatile int16_t x475 = -1;
	int16_t x476 = -8;

	t99 = ((x473&x474)+(x475-x476));

	if (t99 != 8) { NG(); } else { ; }
	
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

