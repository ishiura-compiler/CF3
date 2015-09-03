#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x3 = 4588640U;
volatile uint32_t x15 = UINT32_MAX;
static int8_t x21 = INT8_MIN;
volatile int16_t x25 = INT16_MAX;
volatile int64_t t7 = 875736LL;
static int16_t x42 = INT16_MAX;
volatile int32_t x46 = 1827;
int32_t t10 = 269;
static volatile int64_t x53 = -21973055954913198LL;
int8_t x55 = INT8_MAX;
int16_t x60 = INT16_MAX;
int64_t x61 = INT64_MIN;
int32_t x62 = 184573;
int64_t t14 = 1047720982LL;
int16_t x79 = INT16_MIN;
int32_t x81 = -15515;
uint16_t x82 = 0U;
int32_t t17 = -220191;
int16_t x86 = -125;
int8_t x91 = -7;
uint64_t t19 = 14594605821036LLU;
int32_t x95 = -315;
int32_t x97 = INT32_MAX;
int16_t x117 = -1;
uint8_t x124 = 127U;
volatile int8_t x129 = INT8_MIN;
volatile int64_t t26 = -255114700245287817LL;
volatile int64_t t27 = 85923326LL;
uint32_t t29 = 33630278U;
int64_t x150 = INT64_MIN;
static int8_t x151 = -1;
uint64_t t33 = 5266888657849059704LLU;
static int16_t x171 = 28;
int16_t x176 = 3965;
static volatile uint32_t x182 = UINT32_MAX;
volatile int8_t x183 = INT8_MIN;
int16_t x184 = -5268;
volatile uint32_t t37 = 7277U;
int64_t t38 = -8257545LL;
uint64_t x201 = UINT64_MAX;
int16_t x202 = -38;
volatile int16_t x204 = 370;
uint64_t t41 = 14545507217454LLU;
uint8_t x207 = UINT8_MAX;
static volatile int32_t x208 = INT32_MAX;
int16_t x212 = INT16_MIN;
uint8_t x213 = 42U;
static int64_t x221 = INT64_MAX;
volatile uint64_t t46 = 29379514990LLU;
uint8_t x230 = 1U;
static volatile uint16_t x257 = 218U;
int32_t x284 = INT32_MIN;
uint32_t t57 = 18U;
uint64_t x286 = UINT64_MAX;
int8_t x291 = -5;
uint64_t x303 = 349529037LLU;
volatile uint64_t t62 = 211107LLU;
uint16_t x306 = 666U;
int32_t x308 = -1;
static volatile int32_t t65 = -824475607;
int32_t x338 = 417936534;
int32_t x339 = INT32_MAX;
volatile int32_t x340 = -1;
static int8_t x350 = 5;
uint16_t x351 = 10509U;
volatile uint16_t x353 = 1185U;
int8_t x360 = INT8_MAX;
int64_t x363 = INT64_MIN;
static int8_t x372 = INT8_MIN;
static uint64_t t77 = 934LLU;
static uint16_t x378 = 444U;
int16_t x380 = INT16_MAX;
int8_t x386 = INT8_MAX;
uint32_t x402 = UINT32_MAX;
static int64_t x405 = INT64_MAX;
volatile int64_t x409 = -1LL;
int64_t t86 = -70794236LL;
int64_t x416 = -1LL;
static volatile int8_t x418 = 50;
static volatile int32_t t88 = 2603691;
uint8_t x424 = 8U;
static int8_t x426 = INT8_MAX;
uint16_t x427 = 9U;
int32_t x428 = -1;
int16_t x431 = INT16_MIN;
int16_t x435 = INT16_MIN;
volatile uint64_t t93 = 145724254LLU;
int32_t x444 = INT32_MIN;
uint64_t t97 = 9LLU;
volatile int16_t x461 = INT16_MAX;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int32_t x2 = INT32_MAX;
	int8_t x4 = INT8_MIN;
	static volatile uint32_t t0 = 6422U;

	t0 = (x1-((x2-x3)|x4));

	if (t0 != 32864U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 36U;
	int32_t x6 = -1;
	int64_t x7 = INT64_MAX;
	static volatile uint64_t x8 = 580989846LLU;
	uint64_t t1 = 1093LLU;

	t1 = (x5-((x6-x7)|x8));

	if (t1 != 9223372036273785998LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	static int16_t x10 = -1;
	int64_t x11 = 53849410267909825LL;
	static uint8_t x12 = UINT8_MAX;
	static volatile int64_t t2 = -22525361LL;

	t2 = (x9-((x10-x11)|x12));

	if (t2 != 53849412415393280LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 3891408413476LL;
	int8_t x14 = INT8_MIN;
	static uint64_t x16 = 2031293650LLU;
	uint64_t t3 = 349133810899606669LLU;

	t3 = (x13-((x14-x15)|x16));

	if (t3 != 3887113446225LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x22 = INT64_MIN;
	int32_t x23 = INT32_MIN;
	int8_t x24 = INT8_MIN;
	volatile int64_t t4 = -467LL;

	t4 = (x21-((x22-x23)|x24));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x26 = INT16_MAX;
	int8_t x27 = -1;
	volatile uint8_t x28 = UINT8_MAX;
	static volatile int32_t t5 = -5626954;

	t5 = (x25-((x26-x27)|x28));

	if (t5 != -256) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x29 = -468;
	uint16_t x30 = 1093U;
	uint16_t x31 = 3779U;
	static uint8_t x32 = UINT8_MAX;
	int32_t t6 = 2;

	t6 = (x29-((x30-x31)|x32));

	if (t6 != 2093) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x33 = -1;
	int64_t x34 = -122765687219529967LL;
	static int8_t x35 = -1;
	int16_t x36 = -1165;

	t7 = (x33-((x34-x35)|x36));

	if (t7 != 140LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = UINT8_MAX;
	uint32_t x38 = 950414878U;
	int8_t x39 = 0;
	uint8_t x40 = 6U;
	static uint32_t t8 = 20U;

	t8 = (x37-((x38-x39)|x40));

	if (t8 != 3344552673U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x41 = UINT64_MAX;
	static volatile int16_t x43 = INT16_MAX;
	int8_t x44 = INT8_MIN;
	volatile uint64_t t9 = 9LLU;

	t9 = (x41-((x42-x43)|x44));

	if (t9 != 127LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = 30;
	uint8_t x47 = 15U;
	int8_t x48 = 2;

	t10 = (x45-((x46-x47)|x48));

	if (t10 != -1784) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x54 = -1;
	int64_t x56 = INT64_MIN;
	volatile int64_t t11 = -24051153LL;

	t11 = (x53-((x54-x55)|x56));

	if (t11 != -21973055954913070LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x57 = 6U;
	uint16_t x58 = UINT16_MAX;
	volatile int64_t x59 = INT64_MAX;
	volatile int64_t t12 = 194769LL;

	t12 = (x57-((x58-x59)|x60));

	if (t12 != 9223372036854677511LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x63 = 30411001;
	int64_t x64 = -1LL;
	int64_t t13 = 3742407397484LL;

	t13 = (x61-((x62-x63)|x64));

	if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x69 = INT32_MAX;
	static int64_t x70 = -1LL;
	int64_t x71 = -95766LL;
	int64_t x72 = -1LL;

	t14 = (x69-((x70-x71)|x72));

	if (t14 != 2147483648LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = -1;
	volatile uint8_t x74 = 24U;
	int16_t x75 = -212;
	static int32_t x76 = INT32_MIN;
	static int32_t t15 = -876;

	t15 = (x73-((x74-x75)|x76));

	if (t15 != 2147483411) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = INT16_MIN;
	uint16_t x78 = UINT16_MAX;
	volatile uint8_t x80 = 111U;
	int32_t t16 = -19354;

	t16 = (x77-((x78-x79)|x80));

	if (t16 != -131071) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x83 = -1;
	volatile int8_t x84 = -1;

	t17 = (x81-((x82-x83)|x84));

	if (t17 != -15514) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = -1;
	volatile int8_t x87 = 11;
	uint32_t x88 = 171669U;
	static volatile uint32_t t18 = 63361480U;

	t18 = (x85-((x86-x87)|x88));

	if (t18 != 2U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x89 = INT8_MIN;
	uint64_t x90 = 2838LLU;
	int64_t x92 = INT64_MIN;

	t19 = (x89-((x90-x91)|x92));

	if (t19 != 9223372036854772835LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = 0;
	int32_t x94 = -1;
	uint64_t x96 = 52259762LLU;
	volatile uint64_t t20 = 2354541532480805LLU;

	t20 = (x93-((x94-x95)|x96));

	if (t20 != 18446744073657291846LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x98 = UINT32_MAX;
	int64_t x99 = -1LL;
	int64_t x100 = -2LL;
	volatile int64_t t21 = 2080672816LL;

	t21 = (x97-((x98-x99)|x100));

	if (t21 != 2147483649LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x105 = 1U;
	static int32_t x106 = 1723122;
	int16_t x107 = INT16_MIN;
	static volatile int64_t x108 = INT64_MIN;
	volatile int64_t t22 = -9LL;

	t22 = (x105-((x106-x107)|x108));

	if (t22 != 9223372036853019919LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x113 = UINT16_MAX;
	int8_t x114 = 0;
	int16_t x115 = 5;
	static int8_t x116 = INT8_MAX;
	int32_t t23 = 7787;

	t23 = (x113-((x114-x115)|x116));

	if (t23 != 65536) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x118 = 127402084424LLU;
	int8_t x119 = INT8_MIN;
	static uint16_t x120 = UINT16_MAX;
	static volatile uint64_t t24 = 291689676245824LLU;

	t24 = (x117-((x118-x119)|x120));

	if (t24 != 18446743946307436544LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x121 = INT64_MIN;
	int8_t x122 = -3;
	int64_t x123 = 2799101115312058LL;
	int64_t t25 = -2941718072333088119LL;

	t25 = (x121-((x122-x123)|x124));

	if (t25 != -9220572935739463807LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x130 = -408761362444LL;
	volatile int16_t x131 = INT16_MIN;
	int64_t x132 = -1LL;

	t26 = (x129-((x130-x131)|x132));

	if (t26 != -127LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x133 = -1LL;
	uint32_t x134 = 1743989922U;
	static uint32_t x135 = UINT32_MAX;
	volatile int16_t x136 = INT16_MIN;

	t27 = (x133-((x134-x135)|x136));

	if (t27 != -4294945956LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x137 = INT32_MIN;
	int8_t x138 = -1;
	volatile uint16_t x139 = 102U;
	volatile int32_t x140 = INT32_MIN;
	volatile int32_t t28 = -398;

	t28 = (x137-((x138-x139)|x140));

	if (t28 != -2147483545) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x141 = INT16_MIN;
	int32_t x142 = INT32_MIN;
	uint32_t x143 = 1711U;
	int32_t x144 = INT32_MIN;

	t29 = (x141-((x142-x143)|x144));

	if (t29 != 4294936239U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x145 = INT16_MAX;
	int16_t x146 = INT16_MIN;
	static volatile uint64_t x147 = UINT64_MAX;
	int16_t x148 = INT16_MIN;
	volatile uint64_t t30 = 8234765944539834173LLU;

	t30 = (x145-((x146-x147)|x148));

	if (t30 != 65534LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x149 = INT16_MIN;
	volatile uint32_t x152 = 22270679U;
	volatile int64_t t31 = -957LL;

	t31 = (x149-((x150-x151)|x152));

	if (t31 != 9223372036832472361LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x157 = INT64_MIN;
	uint64_t x158 = 1LLU;
	int16_t x159 = -1;
	static uint64_t x160 = UINT64_MAX;
	uint64_t t32 = 0LLU;

	t32 = (x157-((x158-x159)|x160));

	if (t32 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x161 = INT32_MIN;
	static int64_t x162 = 555LL;
	uint64_t x163 = 126397049674LLU;
	volatile int8_t x164 = INT8_MIN;

	t33 = (x161-((x162-x163)|x164));

	if (t33 != 18446744071562067999LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x165 = INT32_MIN;
	int32_t x166 = INT32_MIN;
	int32_t x167 = INT32_MIN;
	static volatile int32_t x168 = -178156078;
	volatile int32_t t34 = 976256;

	t34 = (x165-((x166-x167)|x168));

	if (t34 != -1969327570) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x169 = -1LL;
	int64_t x170 = INT64_MAX;
	volatile int16_t x172 = INT16_MIN;
	int64_t t35 = 52291432258040868LL;

	t35 = (x169-((x170-x171)|x172));

	if (t35 != 28LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x173 = -19;
	int64_t x174 = -716498114377LL;
	volatile int64_t x175 = INT64_MIN;
	volatile int64_t t36 = -81LL;

	t36 = (x173-((x174-x175)|x176));

	if (t36 != -9223371320356663314LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x181 = INT16_MIN;

	t37 = (x181-((x182-x183)|x184));

	if (t37 != 4294939777U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x185 = -1190626075174629LL;
	int8_t x186 = INT8_MIN;
	uint16_t x187 = 85U;
	uint16_t x188 = 3652U;

	t38 = (x185-((x186-x187)|x188));

	if (t38 != -1190626075174484LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x189 = 8U;
	uint64_t x190 = UINT64_MAX;
	uint16_t x191 = UINT16_MAX;
	int32_t x192 = INT32_MIN;
	volatile uint64_t t39 = 80464621LLU;

	t39 = (x189-((x190-x191)|x192));

	if (t39 != 65544LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x193 = -1;
	static int16_t x194 = 2;
	int32_t x195 = -1;
	static uint16_t x196 = 52U;
	volatile int32_t t40 = 166660237;

	t40 = (x193-((x194-x195)|x196));

	if (t40 != -56) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x203 = 1;

	t41 = (x201-((x202-x203)|x204));

	if (t41 != 4LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x205 = UINT64_MAX;
	uint32_t x206 = 291U;
	static volatile uint64_t t42 = 5656LLU;

	t42 = (x205-((x206-x207)|x208));

	if (t42 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x209 = 1U;
	int16_t x210 = -1;
	uint64_t x211 = UINT64_MAX;
	static volatile uint64_t t43 = 1003815314986789LLU;

	t43 = (x209-((x210-x211)|x212));

	if (t43 != 32769LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint16_t x214 = UINT16_MAX;
	uint32_t x215 = 31712U;
	uint16_t x216 = UINT16_MAX;
	uint32_t t44 = 67089911U;

	t44 = (x213-((x214-x215)|x216));

	if (t44 != 4294901803U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x222 = UINT64_MAX;
	int64_t x223 = INT64_MAX;
	uint32_t x224 = 708354702U;
	volatile uint64_t t45 = 3LLU;

	t45 = (x221-((x222-x223)|x224));

	if (t45 != 18446744073001196913LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x225 = -1LL;
	uint64_t x226 = UINT64_MAX;
	static int8_t x227 = -6;
	static volatile uint16_t x228 = UINT16_MAX;

	t46 = (x225-((x226-x227)|x228));

	if (t46 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x229 = 8U;
	static uint64_t x231 = 102665265001233LLU;
	int8_t x232 = -17;
	volatile uint64_t t47 = 748LLU;

	t47 = (x229-((x230-x231)|x232));

	if (t47 != 9LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x233 = 3U;
	uint64_t x234 = 0LLU;
	int32_t x235 = INT32_MIN;
	volatile int8_t x236 = INT8_MAX;
	volatile uint64_t t48 = 3305722437655029704LLU;

	t48 = (x233-((x234-x235)|x236));

	if (t48 != 18446744071562067844LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x237 = 2;
	static int16_t x238 = INT16_MAX;
	int16_t x239 = -315;
	uint64_t x240 = 27924674852719266LLU;
	volatile uint64_t t49 = 3742798225LLU;

	t49 = (x237-((x238-x239)|x240));

	if (t49 != 18418819398856832072LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x241 = 0LL;
	int8_t x242 = -38;
	volatile uint32_t x243 = UINT32_MAX;
	int8_t x244 = INT8_MAX;
	int64_t t50 = 0LL;

	t50 = (x241-((x242-x243)|x244));

	if (t50 != -4294967295LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x253 = INT64_MIN;
	int32_t x254 = INT32_MIN;
	volatile int16_t x255 = INT16_MIN;
	volatile int32_t x256 = INT32_MIN;
	int64_t t51 = -27127603188961931LL;

	t51 = (x253-((x254-x255)|x256));

	if (t51 != -9223372034707324928LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x258 = UINT32_MAX;
	static volatile int64_t x259 = 37227882LL;
	int64_t x260 = -1LL;
	volatile int64_t t52 = -562731LL;

	t52 = (x257-((x258-x259)|x260));

	if (t52 != 219LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x261 = -2394690;
	int8_t x262 = -1;
	uint64_t x263 = UINT64_MAX;
	volatile int16_t x264 = INT16_MAX;
	volatile uint64_t t53 = 31LLU;

	t53 = (x261-((x262-x263)|x264));

	if (t53 != 18446744073707124159LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x265 = 10U;
	uint64_t x266 = 51973268129LLU;
	uint8_t x267 = 77U;
	int32_t x268 = -451500257;
	volatile uint64_t t54 = 4LLU;

	t54 = (x265-((x266-x267)|x268));

	if (t54 != 35674283LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x269 = -1;
	uint32_t x270 = UINT32_MAX;
	int8_t x271 = -3;
	volatile int32_t x272 = 70;
	static volatile uint32_t t55 = 9U;

	t55 = (x269-((x270-x271)|x272));

	if (t55 != 4294967225U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x273 = 2091U;
	int16_t x274 = INT16_MIN;
	int16_t x275 = INT16_MIN;
	uint64_t x276 = 477006205LLU;
	volatile uint64_t t56 = 3056655032204105LLU;

	t56 = (x273-((x274-x275)|x276));

	if (t56 != 18446744073232547502LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x281 = 10;
	static uint32_t x282 = 863109U;
	static int8_t x283 = -1;

	t57 = (x281-((x282-x283)|x284));

	if (t57 != 2146620548U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x285 = 1U;
	uint8_t x287 = 27U;
	static int8_t x288 = -1;
	uint64_t t58 = 1LLU;

	t58 = (x285-((x286-x287)|x288));

	if (t58 != 2LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x289 = INT8_MIN;
	volatile int16_t x290 = -1;
	int64_t x292 = -460601384LL;
	static int64_t t59 = 1076551196588LL;

	t59 = (x289-((x290-x291)|x292));

	if (t59 != 460601252LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x293 = 2682480U;
	int16_t x294 = INT16_MAX;
	volatile uint8_t x295 = UINT8_MAX;
	static volatile uint64_t x296 = UINT64_MAX;
	static uint64_t t60 = 5575834696LLU;

	t60 = (x293-((x294-x295)|x296));

	if (t60 != 2682481LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x297 = INT8_MIN;
	static uint64_t x298 = 151LLU;
	int64_t x299 = -1LL;
	static uint8_t x300 = 57U;
	volatile uint64_t t61 = 142038280135LLU;

	t61 = (x297-((x298-x299)|x300));

	if (t61 != 18446744073709551303LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x301 = -1;
	int16_t x302 = -1;
	uint16_t x304 = 42U;

	t62 = (x301-((x302-x303)|x304));

	if (t62 != 349529029LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x305 = INT8_MIN;
	int16_t x307 = INT16_MIN;
	int32_t t63 = 491073514;

	t63 = (x305-((x306-x307)|x308));

	if (t63 != -127) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x317 = 13601577414020794LLU;
	static int64_t x318 = -3955552907721360059LL;
	static uint64_t x319 = 50251172LLU;
	volatile int16_t x320 = INT16_MIN;
	uint64_t t64 = 2LLU;

	t64 = (x317-((x318-x319)|x320));

	if (t64 != 13601577414022937LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x321 = -1;
	volatile uint8_t x322 = 15U;
	int8_t x323 = INT8_MAX;
	int32_t x324 = INT32_MIN;

	t65 = (x321-((x322-x323)|x324));

	if (t65 != 111) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x329 = INT16_MIN;
	uint32_t x330 = 6646084U;
	uint64_t x331 = UINT64_MAX;
	volatile int32_t x332 = INT32_MIN;
	uint64_t t66 = 7674757641910242776LLU;

	t66 = (x329-((x330-x331)|x332));

	if (t66 != 2140804795LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x333 = 383167;
	static int64_t x334 = -34999785891579LL;
	uint64_t x335 = 90288435330511014LLU;
	volatile int64_t x336 = INT64_MIN;
	volatile uint64_t t67 = 1321635261LLU;

	t67 = (x333-((x334-x335)|x336));

	if (t67 != 90323435116785760LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x337 = 1U;
	int32_t t68 = -1;

	t68 = (x337-((x338-x339)|x340));

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x341 = UINT32_MAX;
	uint64_t x342 = UINT64_MAX;
	static volatile uint8_t x343 = 44U;
	int8_t x344 = -1;
	volatile uint64_t t69 = 0LLU;

	t69 = (x341-((x342-x343)|x344));

	if (t69 != 4294967296LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x345 = INT16_MIN;
	int16_t x346 = 1;
	int16_t x347 = INT16_MIN;
	int64_t x348 = INT64_MIN;
	volatile int64_t t70 = 227609074717463LL;

	t70 = (x345-((x346-x347)|x348));

	if (t70 != 9223372036854710271LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x349 = INT8_MIN;
	volatile int32_t x352 = INT32_MIN;
	int32_t t71 = -12290;

	t71 = (x349-((x350-x351)|x352));

	if (t71 != 10376) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x354 = 0;
	volatile int8_t x355 = INT8_MIN;
	uint32_t x356 = 69666U;
	static volatile uint32_t t72 = 60U;

	t72 = (x353-((x354-x355)|x356));

	if (t72 != 4294898687U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x357 = 128332134LLU;
	static volatile int64_t x358 = 2707451158525LL;
	int64_t x359 = INT64_MAX;
	uint64_t t73 = 12749794033255LLU;

	t73 = (x357-((x358-x359)|x360));

	if (t73 != 9223369329531949415LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x361 = 55872424135LLU;
	int8_t x362 = INT8_MIN;
	static uint16_t x364 = 5U;
	volatile uint64_t t74 = 73722274623LLU;

	t74 = (x361-((x362-x363)|x364));

	if (t74 != 9223372092727200066LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x365 = INT8_MAX;
	int8_t x366 = 1;
	volatile int8_t x367 = INT8_MIN;
	uint8_t x368 = 2U;
	int32_t t75 = -12733187;

	t75 = (x365-((x366-x367)|x368));

	if (t75 != -4) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x369 = INT8_MIN;
	volatile int64_t x370 = 965813LL;
	int8_t x371 = -38;
	volatile int64_t t76 = -397086LL;

	t76 = (x369-((x370-x371)|x372));

	if (t76 != -91LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x373 = 5;
	uint64_t x374 = 3101060775633195620LLU;
	static volatile uint16_t x375 = UINT16_MAX;
	uint64_t x376 = 541880730LLU;

	t77 = (x373-((x374-x375)|x376));

	if (t77 != 15345683298071415814LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x377 = INT16_MIN;
	uint32_t x379 = 170203U;
	uint32_t t78 = 127767025U;

	t78 = (x377-((x378-x379)|x380));

	if (t78 != 131073U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x381 = INT32_MAX;
	uint32_t x382 = 1U;
	int64_t x383 = -16125LL;
	int8_t x384 = INT8_MIN;
	static volatile int64_t t79 = 47602225123172LL;

	t79 = (x381-((x382-x383)|x384));

	if (t79 != 2147483649LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x385 = INT32_MAX;
	int16_t x387 = -1;
	volatile uint64_t x388 = 585939LLU;
	uint64_t t80 = 454752LLU;

	t80 = (x385-((x386-x387)|x388));

	if (t80 != 2146897708LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x389 = -1LL;
	int16_t x390 = INT16_MAX;
	uint16_t x391 = UINT16_MAX;
	int64_t x392 = INT64_MIN;
	volatile int64_t t81 = -183787612115176LL;

	t81 = (x389-((x390-x391)|x392));

	if (t81 != 32767LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x393 = UINT8_MAX;
	uint32_t x394 = 14118U;
	volatile int32_t x395 = -1;
	int8_t x396 = INT8_MIN;
	uint32_t t82 = 374534U;

	t82 = (x393-((x394-x395)|x396));

	if (t82 != 344U) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x397 = INT8_MIN;
	static int16_t x398 = 394;
	uint8_t x399 = 24U;
	static volatile uint8_t x400 = 4U;
	volatile int32_t t83 = -8307271;

	t83 = (x397-((x398-x399)|x400));

	if (t83 != -502) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x401 = 4;
	uint64_t x403 = 17773733738LLU;
	int8_t x404 = -1;
	static volatile uint64_t t84 = 2908279LLU;

	t84 = (x401-((x402-x403)|x404));

	if (t84 != 5LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x406 = 3U;
	static uint64_t x407 = 26856333308848LLU;
	static int8_t x408 = -1;
	uint64_t t85 = 12LLU;

	t85 = (x405-((x406-x407)|x408));

	if (t85 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x410 = INT16_MIN;
	static uint32_t x411 = 1U;
	static int64_t x412 = INT64_MIN;

	t86 = (x409-((x410-x411)|x412));

	if (t86 != 9223372032559841280LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x413 = 48U;
	int64_t x414 = -56140053LL;
	uint32_t x415 = UINT32_MAX;
	volatile int64_t t87 = 61564410424672237LL;

	t87 = (x413-((x414-x415)|x416));

	if (t87 != 49LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x417 = INT16_MAX;
	int16_t x419 = 241;
	static int16_t x420 = -1;

	t88 = (x417-((x418-x419)|x420));

	if (t88 != 32768) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x421 = 29;
	volatile uint16_t x422 = 1U;
	int8_t x423 = INT8_MIN;
	volatile int32_t t89 = -14;

	t89 = (x421-((x422-x423)|x424));

	if (t89 != -108) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x425 = 10U;
	uint32_t t90 = 154U;

	t90 = (x425-((x426-x427)|x428));

	if (t90 != 11U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x429 = -1;
	int32_t x430 = 14;
	int32_t x432 = INT32_MAX;
	int32_t t91 = INT32_MIN;

	t91 = (x429-((x430-x431)|x432));

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x433 = UINT32_MAX;
	static int32_t x434 = INT32_MIN;
	uint16_t x436 = 1474U;
	volatile uint32_t t92 = 46298U;

	t92 = (x433-((x434-x435)|x436));

	if (t92 != 2147449405U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x437 = 2645U;
	volatile uint64_t x438 = UINT64_MAX;
	int64_t x439 = INT64_MIN;
	int32_t x440 = INT32_MIN;

	t93 = (x437-((x438-x439)|x440));

	if (t93 != 2646LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x441 = -1;
	uint64_t x442 = 7436436165LLU;
	int32_t x443 = -1;
	uint64_t t94 = 43828590LLU;

	t94 = (x441-((x442-x443)|x444));

	if (t94 != 1153498425LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x445 = INT16_MAX;
	int64_t x446 = INT64_MIN;
	uint64_t x447 = 181208093416122LLU;
	int8_t x448 = -5;
	uint64_t t95 = 4515168303854614028LLU;

	t95 = (x445-((x446-x447)|x448));

	if (t95 != 32768LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x449 = INT8_MAX;
	int8_t x450 = -46;
	int16_t x451 = INT16_MIN;
	uint16_t x452 = UINT16_MAX;
	int32_t t96 = 101518823;

	t96 = (x449-((x450-x451)|x452));

	if (t96 != -65408) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x457 = -1LL;
	int16_t x458 = -1;
	static volatile int8_t x459 = INT8_MIN;
	static uint64_t x460 = UINT64_MAX;

	t97 = (x457-((x458-x459)|x460));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x462 = -19;
	static int64_t x463 = INT64_MIN;
	volatile int16_t x464 = INT16_MIN;
	volatile int64_t t98 = 730355007249LL;

	t98 = (x461-((x462-x463)|x464));

	if (t98 != 32786LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x465 = INT32_MIN;
	volatile uint32_t x466 = 388963324U;
	volatile uint32_t x467 = 100U;
	volatile uint64_t x468 = 66976LLU;
	volatile uint64_t t99 = 6721490733185188LLU;

	t99 = (x465-((x466-x467)|x468));

	if (t99 != 18446744071173103688LLU) { NG(); } else { ; }
	
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

