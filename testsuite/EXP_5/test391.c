#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x6 = 94LLU;
volatile uint8_t x10 = 0U;
static int32_t x11 = INT32_MAX;
int8_t x14 = -16;
uint64_t x17 = UINT64_MAX;
uint64_t x24 = 635LLU;
static int32_t x25 = 429368064;
int16_t x29 = -113;
uint64_t x37 = 17596436LLU;
uint64_t t7 = 45LLU;
uint64_t x41 = 0LLU;
volatile uint64_t x43 = 11319880530862447LLU;
uint16_t x58 = 3U;
int8_t x68 = INT8_MIN;
uint32_t t13 = 2535591U;
int64_t x75 = -767125636775LL;
int8_t x78 = INT8_MAX;
volatile uint32_t t16 = 804235814U;
int64_t x96 = -8241749598193630LL;
volatile int16_t x107 = INT16_MIN;
static int32_t t20 = -36472501;
uint32_t x122 = 90293745U;
uint64_t x123 = 7070799408549LLU;
static volatile int64_t t22 = INT64_MIN;
int32_t x133 = -1;
static int64_t x136 = -1LL;
uint64_t t23 = 49603755050345718LLU;
volatile int16_t x140 = -3;
volatile uint64_t t25 = 10LLU;
static uint64_t x148 = 3785292639LLU;
static int16_t x163 = INT16_MAX;
volatile int32_t t27 = -167;
static int8_t x174 = INT8_MIN;
volatile int32_t x179 = INT32_MIN;
volatile uint64_t x186 = UINT64_MAX;
int16_t x187 = -1;
volatile uint64_t t31 = 1391326LLU;
static int16_t x191 = INT16_MIN;
static int64_t x208 = -66960118286649537LL;
int32_t x210 = 3;
int64_t x211 = -5771396LL;
int64_t x214 = -21739111LL;
volatile uint64_t t38 = 40LLU;
int8_t x227 = INT8_MIN;
uint32_t t41 = 326064138U;
uint16_t x249 = 32224U;
uint8_t x250 = 3U;
volatile int64_t x253 = -1LL;
volatile uint64_t x258 = 405088663LLU;
static int8_t x260 = -1;
int16_t x270 = -565;
int64_t x277 = INT64_MIN;
volatile int64_t t47 = 4284017890LL;
uint8_t x286 = 1U;
volatile int8_t x288 = INT8_MIN;
int16_t x308 = -1;
static int64_t x311 = -28LL;
static int8_t x314 = 9;
volatile int8_t x315 = 1;
uint16_t x319 = 20285U;
volatile uint32_t t53 = 45396U;
volatile uint16_t x323 = UINT16_MAX;
volatile int64_t x325 = INT64_MIN;
int32_t t56 = -1;
static uint32_t x340 = 53926921U;
int32_t x343 = -612;
static int64_t x353 = -3497785018088605LL;
volatile int16_t x354 = INT16_MAX;
int16_t x356 = 11873;
int64_t t59 = 513653889LL;
volatile uint64_t t60 = 5074023967195LLU;
static int16_t x381 = 24;
int8_t x394 = -5;
uint16_t x397 = UINT16_MAX;
uint16_t x404 = UINT16_MAX;
uint32_t x418 = 32726U;
int8_t x422 = 11;
volatile uint64_t t68 = 56625LLU;
uint32_t x427 = 441U;
static int16_t x437 = INT16_MIN;
int64_t x438 = -180990LL;
volatile int16_t x440 = 286;
uint32_t x441 = 129259U;
static int32_t x450 = 29;
int16_t x451 = INT16_MIN;
volatile int32_t x455 = -1;
uint64_t x493 = UINT64_MAX;
int32_t x506 = 812056813;
int8_t x511 = -1;
volatile int64_t t85 = -54818964LL;
static int16_t x529 = -108;
uint32_t x530 = UINT32_MAX;
static int32_t x533 = INT32_MAX;
volatile int32_t t89 = 514791;
uint64_t x540 = 3067774525094545LLU;
volatile int64_t x545 = -14098LL;
static uint64_t t92 = 3385LLU;
volatile uint8_t x578 = UINT8_MAX;
static volatile int8_t x579 = INT8_MAX;
volatile uint32_t x590 = UINT32_MAX;
volatile uint32_t t97 = 6167U;
int32_t x603 = -7;


void f0(void) {
	uint32_t x5 = 27657U;
	int16_t x7 = INT16_MIN;
	volatile int32_t x8 = -362504;
	volatile uint64_t t0 = 55LLU;

	t0 = (x5+((x6*x7)%x8));

	if (t0 != 18446744073706499081LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x9 = 1U;
	static int8_t x12 = INT8_MIN;
	volatile int32_t t1 = 258603;

	t1 = (x9+((x10*x11)%x12));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MIN;
	static uint8_t x15 = 7U;
	int32_t x16 = -1;
	int32_t t2 = 984;

	t2 = (x13+((x14*x15)%x16));

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x18 = 2043122;
	static uint8_t x19 = 7U;
	static uint64_t x20 = 18LLU;
	volatile uint64_t t3 = 9571606LLU;

	t3 = (x17+((x18*x19)%x20));

	if (t3 != 7LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x21 = INT16_MAX;
	int8_t x22 = INT8_MIN;
	int16_t x23 = INT16_MIN;
	uint64_t t4 = 11351LLU;

	t4 = (x21+((x22*x23)%x24));

	if (t4 != 32896LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x26 = 408U;
	int8_t x27 = INT8_MIN;
	volatile int16_t x28 = 342;
	static volatile uint32_t t5 = 183857U;

	t5 = (x25+((x26*x27)%x28));

	if (t5 != 429368134U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x30 = -1;
	static uint16_t x31 = 213U;
	int16_t x32 = -1;
	int32_t t6 = 234;

	t6 = (x29+((x30*x31)%x32));

	if (t6 != -113) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x38 = 17LL;
	int16_t x39 = INT16_MIN;
	int64_t x40 = -1LL;

	t7 = (x37+((x38*x39)%x40));

	if (t7 != 17596436LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x42 = -46;
	volatile int32_t x44 = 60;
	volatile uint64_t t8 = 1509383716930LLU;

	t8 = (x41+((x42*x43)%x44));

	if (t8 != 54LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = 0;
	uint64_t x50 = UINT64_MAX;
	volatile int64_t x51 = 85719921403233184LL;
	int16_t x52 = -1;
	static volatile uint64_t t9 = 58524460141493407LLU;

	t9 = (x49+((x50*x51)%x52));

	if (t9 != 18361024152306318432LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x53 = -5050;
	int8_t x54 = INT8_MIN;
	int16_t x55 = -310;
	int8_t x56 = INT8_MAX;
	volatile int32_t t10 = -4;

	t10 = (x53+((x54*x55)%x56));

	if (t10 != -4994) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x57 = -493;
	volatile int64_t x59 = -131425475516039779LL;
	int16_t x60 = INT16_MIN;
	volatile int64_t t11 = 201380LL;

	t11 = (x57+((x58*x59)%x60));

	if (t11 != -2326LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x61 = UINT64_MAX;
	volatile int32_t x62 = INT32_MIN;
	static int64_t x63 = -16434LL;
	int8_t x64 = 16;
	uint64_t t12 = UINT64_MAX;

	t12 = (x61+((x62*x63)%x64));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = -19;
	static volatile uint32_t x66 = 1U;
	int8_t x67 = INT8_MIN;

	t13 = (x65+((x66*x67)%x68));

	if (t13 != 4294967277U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = INT32_MAX;
	uint16_t x70 = 0U;
	static int32_t x71 = -1;
	static int16_t x72 = -1;
	volatile int32_t t14 = INT32_MAX;

	t14 = (x69+((x70*x71)%x72));

	if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x73 = 6LLU;
	int8_t x74 = 0;
	volatile uint16_t x76 = 5U;
	volatile uint64_t t15 = 51617468241777544LLU;

	t15 = (x73+((x74*x75)%x76));

	if (t15 != 6LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x77 = INT32_MIN;
	static uint32_t x79 = 2U;
	uint32_t x80 = 6U;

	t16 = (x77+((x78*x79)%x80));

	if (t16 != 2147483650U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x89 = 7378LLU;
	static uint32_t x90 = 411418U;
	volatile int8_t x91 = 61;
	int64_t x92 = INT64_MIN;
	uint64_t t17 = 9LLU;

	t17 = (x89+((x90*x91)%x92));

	if (t17 != 25103876LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x93 = INT32_MIN;
	volatile uint64_t x94 = 13771368648LLU;
	int64_t x95 = INT64_MIN;
	static volatile uint64_t t18 = 488607184465LLU;

	t18 = (x93+((x94*x95)%x96));

	if (t18 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x105 = 643123;
	int8_t x106 = 0;
	uint32_t x108 = UINT32_MAX;
	static uint32_t t19 = 432U;

	t19 = (x105+((x106*x107)%x108));

	if (t19 != 643123U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x117 = 1;
	uint8_t x118 = 2U;
	int8_t x119 = -1;
	int32_t x120 = 95587;

	t20 = (x117+((x118*x119)%x120));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x121 = INT16_MIN;
	int32_t x124 = INT32_MAX;
	volatile uint64_t t21 = 5558035LLU;

	t21 = (x121+((x122*x123)%x124));

	if (t21 != 805872639LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x125 = INT64_MIN;
	volatile int64_t x126 = 566913LL;
	uint8_t x127 = 7U;
	int64_t x128 = -1LL;

	t22 = (x125+((x126*x127)%x128));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x134 = 2290760LLU;
	int8_t x135 = INT8_MAX;

	t23 = (x133+((x134*x135)%x136));

	if (t23 != 290926519LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x137 = -25718;
	int8_t x138 = INT8_MIN;
	int8_t x139 = INT8_MAX;
	static int32_t t24 = 234;

	t24 = (x137+((x138*x139)%x140));

	if (t24 != -25720) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x141 = 4U;
	volatile int64_t x142 = -144348593708440LL;
	int64_t x143 = 267LL;
	uint64_t x144 = UINT64_MAX;

	t25 = (x141+((x142*x143)%x144));

	if (t25 != 18408202999189398140LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x145 = 87U;
	static uint64_t x146 = 55079LLU;
	static uint8_t x147 = UINT8_MAX;
	uint64_t t26 = 30145441641465367LLU;

	t26 = (x145+((x146*x147)%x148));

	if (t26 != 14045232LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x161 = 1U;
	uint8_t x162 = 21U;
	uint8_t x164 = 9U;

	t27 = (x161+((x162*x163)%x164));

	if (t27 != 4) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x169 = -1LL;
	int64_t x170 = -1372065211LL;
	uint32_t x171 = 1U;
	int16_t x172 = 7;
	volatile int64_t t28 = 572820162383925682LL;

	t28 = (x169+((x170*x171)%x172));

	if (t28 != -7LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x173 = 6157U;
	int8_t x175 = -1;
	static int8_t x176 = INT8_MAX;
	uint32_t t29 = 119U;

	t29 = (x173+((x174*x175)%x176));

	if (t29 != 6158U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x177 = INT8_MIN;
	int64_t x178 = -1LL;
	int16_t x180 = -61;
	volatile int64_t t30 = -5875676152049LL;

	t30 = (x177+((x178*x179)%x180));

	if (t30 != -69LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x185 = 212U;
	static uint32_t x188 = UINT32_MAX;

	t31 = (x185+((x186*x187)%x188));

	if (t31 != 213LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x189 = INT8_MIN;
	int16_t x190 = INT16_MAX;
	volatile int64_t x192 = INT64_MIN;
	int64_t t32 = 0LL;

	t32 = (x189+((x190*x191)%x192));

	if (t32 != -1073709184LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x193 = INT8_MIN;
	volatile uint32_t x194 = 498U;
	volatile int8_t x195 = INT8_MAX;
	int8_t x196 = -4;
	volatile uint32_t t33 = 3147U;

	t33 = (x193+((x194*x195)%x196));

	if (t33 != 63118U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x197 = INT32_MAX;
	int16_t x198 = 0;
	int32_t x199 = INT32_MIN;
	uint32_t x200 = 898U;
	volatile uint32_t t34 = 311056U;

	t34 = (x197+((x198*x199)%x200));

	if (t34 != 2147483647U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x205 = UINT64_MAX;
	uint32_t x206 = 467U;
	int8_t x207 = INT8_MAX;
	static uint64_t t35 = 31477LLU;

	t35 = (x205+((x206*x207)%x208));

	if (t35 != 59308LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x209 = 13076U;
	volatile uint8_t x212 = 10U;
	volatile int64_t t36 = 250081281947209543LL;

	t36 = (x209+((x210*x211)%x212));

	if (t36 != 13068LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x213 = INT16_MAX;
	static uint16_t x215 = UINT16_MAX;
	int16_t x216 = -1;
	int64_t t37 = -17132196189LL;

	t37 = (x213+((x214*x215)%x216));

	if (t37 != 32767LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x217 = -1;
	int32_t x218 = -1;
	int32_t x219 = 18352216;
	static uint64_t x220 = 4477LLU;

	t38 = (x217+((x218*x219)%x220));

	if (t38 != 3939LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x221 = -1;
	volatile int64_t x222 = 430061LL;
	static int8_t x223 = INT8_MIN;
	volatile uint16_t x224 = UINT16_MAX;
	volatile int64_t t39 = -153815012LL;

	t39 = (x221+((x222*x223)%x224));

	if (t39 != -63944LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x225 = INT16_MIN;
	uint32_t x226 = UINT32_MAX;
	int8_t x228 = INT8_MIN;
	volatile uint32_t t40 = 1929U;

	t40 = (x225+((x226*x227)%x228));

	if (t40 != 4294934656U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x241 = UINT32_MAX;
	int8_t x242 = INT8_MIN;
	uint8_t x243 = 7U;
	int32_t x244 = INT32_MAX;

	t41 = (x241+((x242*x243)%x244));

	if (t41 != 4294966399U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x251 = 1668713223588394LLU;
	static int32_t x252 = 14615365;
	volatile uint64_t t42 = 57055LLU;

	t42 = (x249+((x250*x251)%x252));

	if (t42 != 8803581LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x254 = -1;
	volatile int8_t x255 = INT8_MIN;
	static volatile int64_t x256 = 1LL;
	int64_t t43 = 18326871LL;

	t43 = (x253+((x254*x255)%x256));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x257 = 348965454U;
	uint32_t x259 = 9340U;
	uint64_t t44 = 4253895553LLU;

	t44 = (x257+((x258*x259)%x260));

	if (t44 != 3783877077874LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x265 = INT8_MIN;
	int8_t x266 = INT8_MIN;
	static volatile uint64_t x267 = 8628626092837516LLU;
	static volatile uint32_t x268 = UINT32_MAX;
	static volatile uint64_t t45 = 137728LLU;

	t45 = (x265+((x266*x267)%x268));

	if (t45 != 1539760440LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x269 = 729U;
	uint16_t x271 = 113U;
	int16_t x272 = INT16_MAX;
	int32_t t46 = 64340;

	t46 = (x269+((x270*x271)%x272));

	if (t46 != -30349) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x278 = INT32_MIN;
	static uint32_t x279 = 3U;
	uint32_t x280 = 5354U;

	t47 = (x277+((x278*x279)%x280));

	if (t47 != -9223372036854770852LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x285 = 554LL;
	uint64_t x287 = 42675848LLU;
	volatile uint64_t t48 = 2053295286465942871LLU;

	t48 = (x285+((x286*x287)%x288));

	if (t48 != 42676402LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x289 = -11880954;
	uint8_t x290 = 41U;
	int16_t x291 = INT16_MIN;
	int32_t x292 = -317;
	int32_t t49 = 14968661;

	t49 = (x289+((x290*x291)%x292));

	if (t49 != -11880996) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x305 = -1;
	static volatile int64_t x306 = 20LL;
	int32_t x307 = -1;
	volatile int64_t t50 = -4016234087269327033LL;

	t50 = (x305+((x306*x307)%x308));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x309 = 0;
	volatile int16_t x310 = INT16_MIN;
	uint64_t x312 = 252024637684754708LLU;
	uint64_t t51 = 25069254046LLU;

	t51 = (x309+((x310*x311)%x312));

	if (t51 != 917504LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x313 = INT32_MIN;
	int32_t x316 = 857;
	volatile int32_t t52 = 14579665;

	t52 = (x313+((x314*x315)%x316));

	if (t52 != -2147483639) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x317 = INT16_MIN;
	volatile uint32_t x318 = 215U;
	int8_t x320 = 1;

	t53 = (x317+((x318*x319)%x320));

	if (t53 != 4294934528U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x321 = INT16_MIN;
	uint32_t x322 = 12U;
	volatile int16_t x324 = 16220;
	static volatile uint32_t t54 = 857517750U;

	t54 = (x321+((x322*x323)%x324));

	if (t54 != 4294942388U) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x326 = INT16_MIN;
	uint32_t x327 = UINT32_MAX;
	uint8_t x328 = 1U;
	int64_t t55 = INT64_MIN;

	t55 = (x325+((x326*x327)%x328));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x333 = 12U;
	volatile int32_t x334 = -1;
	static int16_t x335 = INT16_MIN;
	uint16_t x336 = 190U;

	t56 = (x333+((x334*x335)%x336));

	if (t56 != 100) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x337 = INT32_MIN;
	int32_t x338 = -1;
	static uint8_t x339 = 0U;
	volatile uint32_t t57 = 3991U;

	t57 = (x337+((x338*x339)%x340));

	if (t57 != 2147483648U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x341 = -12;
	volatile uint8_t x342 = 79U;
	uint32_t x344 = 658102U;
	static volatile uint32_t t58 = 12U;

	t58 = (x341+((x342*x343)%x344));

	if (t58 != 145284U) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x355 = 43;

	t59 = (x353+((x354*x355)%x356));

	if (t59 != -3497785018080638LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x373 = -477078660LL;
	static int64_t x374 = -1LL;
	int8_t x375 = -1;
	uint64_t x376 = 23LLU;

	t60 = (x373+((x374*x375)%x376));

	if (t60 != 18446744073232472957LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x382 = UINT8_MAX;
	static int8_t x383 = INT8_MAX;
	volatile uint32_t x384 = 6787U;
	static uint32_t t61 = 148161220U;

	t61 = (x381+((x382*x383)%x384));

	if (t61 != 5261U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x393 = 12U;
	volatile int8_t x395 = 1;
	volatile int32_t x396 = INT32_MIN;
	static int32_t t62 = -449;

	t62 = (x393+((x394*x395)%x396));

	if (t62 != 7) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x398 = 2U;
	int8_t x399 = INT8_MIN;
	int64_t x400 = -1LL;
	volatile int64_t t63 = -38422887LL;

	t63 = (x397+((x398*x399)%x400));

	if (t63 != 65535LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x401 = INT64_MAX;
	int16_t x402 = -926;
	int16_t x403 = INT16_MAX;
	int64_t t64 = -1599160715987955776LL;

	t64 = (x401+((x402*x403)%x404));

	if (t64 != 9223372036854710735LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x405 = 1269U;
	static volatile int16_t x406 = -2937;
	int16_t x407 = 184;
	int8_t x408 = INT8_MIN;
	volatile int32_t t65 = 71;

	t65 = (x405+((x406*x407)%x408));

	if (t65 != 1149) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x409 = 1U;
	uint64_t x410 = UINT64_MAX;
	int8_t x411 = INT8_MIN;
	static int64_t x412 = -2071LL;
	static volatile uint64_t t66 = 6767144816216LLU;

	t66 = (x409+((x410*x411)%x412));

	if (t66 != 129LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x417 = UINT8_MAX;
	int32_t x419 = INT32_MIN;
	uint64_t x420 = 14LLU;
	volatile uint64_t t67 = 0LLU;

	t67 = (x417+((x418*x419)%x420));

	if (t67 != 255LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x421 = UINT64_MAX;
	int16_t x423 = -7094;
	int32_t x424 = INT32_MAX;

	t68 = (x421+((x422*x423)%x424));

	if (t68 != 18446744073709473581LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x425 = INT64_MIN;
	int32_t x426 = INT32_MIN;
	volatile int8_t x428 = -1;
	volatile int64_t t69 = -49504286341877936LL;

	t69 = (x425+((x426*x427)%x428));

	if (t69 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x429 = 55U;
	static volatile int8_t x430 = -1;
	int8_t x431 = -1;
	uint64_t x432 = 40355088448LLU;
	uint64_t t70 = 6LLU;

	t70 = (x429+((x430*x431)%x432));

	if (t70 != 56LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x439 = UINT8_MAX;
	int64_t t71 = 917LL;

	t71 = (x437+((x438*x439)%x440));

	if (t71 != -32826LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x442 = UINT32_MAX;
	int16_t x443 = INT16_MIN;
	volatile int8_t x444 = INT8_MIN;
	uint32_t t72 = 806U;

	t72 = (x441+((x442*x443)%x444));

	if (t72 != 162027U) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x445 = 272971;
	uint8_t x446 = 1U;
	static uint64_t x447 = UINT64_MAX;
	static volatile int64_t x448 = 64706LL;
	static uint64_t t73 = 14557LLU;

	t73 = (x445+((x446*x447)%x448));

	if (t73 != 302446LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x449 = -1;
	static int8_t x452 = 1;
	volatile int32_t t74 = 22637127;

	t74 = (x449+((x450*x451)%x452));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x453 = INT16_MAX;
	int16_t x454 = INT16_MIN;
	static int16_t x456 = -7;
	volatile int32_t t75 = -3;

	t75 = (x453+((x454*x455)%x456));

	if (t75 != 32768) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x465 = UINT64_MAX;
	static int8_t x466 = -1;
	uint8_t x467 = 0U;
	int16_t x468 = -1;
	static volatile uint64_t t76 = UINT64_MAX;

	t76 = (x465+((x466*x467)%x468));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x473 = -1;
	volatile int64_t x474 = 2363755LL;
	static uint16_t x475 = UINT16_MAX;
	static volatile int16_t x476 = -1;
	static int64_t t77 = 26676286209219723LL;

	t77 = (x473+((x474*x475)%x476));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x477 = -335;
	volatile uint16_t x478 = 3766U;
	static int16_t x479 = INT16_MIN;
	int8_t x480 = INT8_MIN;
	int32_t t78 = 416948335;

	t78 = (x477+((x478*x479)%x480));

	if (t78 != -335) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x481 = -32699;
	int64_t x482 = -1LL;
	volatile int32_t x483 = INT32_MIN;
	int8_t x484 = INT8_MIN;
	int64_t t79 = 204320868LL;

	t79 = (x481+((x482*x483)%x484));

	if (t79 != -32699LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x485 = 115340330LLU;
	uint32_t x486 = UINT32_MAX;
	int8_t x487 = INT8_MAX;
	static uint8_t x488 = 2U;
	uint64_t t80 = 216LLU;

	t80 = (x485+((x486*x487)%x488));

	if (t80 != 115340331LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x489 = 2U;
	volatile int32_t x490 = INT32_MIN;
	static volatile int64_t x491 = -2577LL;
	int8_t x492 = 2;
	static volatile int64_t t81 = -20502829LL;

	t81 = (x489+((x490*x491)%x492));

	if (t81 != 2LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x494 = 1U;
	volatile int8_t x495 = INT8_MAX;
	int32_t x496 = -1;
	volatile uint64_t t82 = 27521703460536LLU;

	t82 = (x493+((x494*x495)%x496));

	if (t82 != 126LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x501 = 27;
	uint64_t x502 = UINT64_MAX;
	int64_t x503 = INT64_MIN;
	int32_t x504 = 9901;
	uint64_t t83 = 8215331177946LLU;

	t83 = (x501+((x502*x503)%x504));

	if (t83 != 1947LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x505 = 0;
	int8_t x507 = -1;
	int32_t x508 = 16872;
	volatile int32_t t84 = -21293423;

	t84 = (x505+((x506*x507)%x508));

	if (t84 != -7453) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x509 = 13236215791580LL;
	volatile int32_t x510 = INT32_MAX;
	uint8_t x512 = 21U;

	t85 = (x509+((x510*x511)%x512));

	if (t85 != 13236215791579LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x517 = UINT32_MAX;
	int32_t x518 = -1;
	static uint8_t x519 = 88U;
	volatile uint32_t x520 = 3391U;
	static uint32_t t86 = 187U;

	t86 = (x517+((x518*x519)%x520));

	if (t86 != 1209U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x521 = UINT64_MAX;
	int8_t x522 = -6;
	static int16_t x523 = -1;
	volatile uint32_t x524 = 4085943U;
	static volatile uint64_t t87 = 9203329317560557022LLU;

	t87 = (x521+((x522*x523)%x524));

	if (t87 != 5LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x531 = UINT64_MAX;
	static volatile int64_t x532 = INT64_MAX;
	volatile uint64_t t88 = 3851125601887LLU;

	t88 = (x529+((x530*x531)%x532));

	if (t88 != 9223372032559808406LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x534 = 122U;
	int8_t x535 = -1;
	uint8_t x536 = 69U;

	t89 = (x533+((x534*x535)%x536));

	if (t89 != 2147483594) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x537 = UINT32_MAX;
	static int64_t x538 = -1LL;
	volatile int8_t x539 = INT8_MAX;
	volatile uint64_t t90 = 1LLU;

	t90 = (x537+((x538*x539)%x540));

	if (t90 != 215858611019699LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x546 = 809576327LL;
	static int8_t x547 = INT8_MIN;
	int16_t x548 = INT16_MIN;
	int64_t t91 = -294682LL;

	t91 = (x545+((x546*x547)%x548));

	if (t91 != -31378LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x561 = 27U;
	volatile uint64_t x562 = 579046LLU;
	int32_t x563 = -1;
	static int16_t x564 = INT16_MIN;

	t92 = (x561+((x562*x563)%x564));

	if (t92 != 18446744073708972597LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x565 = -1;
	int16_t x566 = 0;
	volatile uint64_t x567 = 4548819885LLU;
	volatile int32_t x568 = INT32_MIN;
	uint64_t t93 = UINT64_MAX;

	t93 = (x565+((x566*x567)%x568));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x569 = INT64_MIN;
	uint8_t x570 = 0U;
	uint64_t x571 = 129358399637664LLU;
	uint32_t x572 = 358U;
	uint64_t t94 = 108505664373320719LLU;

	t94 = (x569+((x570*x571)%x572));

	if (t94 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x573 = -1LL;
	uint64_t x574 = 8574903305LLU;
	uint32_t x575 = 54U;
	int16_t x576 = INT16_MAX;
	volatile uint64_t t95 = 10LLU;

	t95 = (x573+((x574*x575)%x576));

	if (t95 != 15057LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint32_t x577 = UINT32_MAX;
	int64_t x580 = INT64_MIN;
	int64_t t96 = -402LL;

	t96 = (x577+((x578*x579)%x580));

	if (t96 != 4294999680LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x589 = UINT32_MAX;
	volatile int32_t x591 = INT32_MIN;
	volatile int8_t x592 = -1;

	t97 = (x589+((x590*x591)%x592));

	if (t97 != 2147483647U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x597 = -5;
	int64_t x598 = -1LL;
	static uint64_t x599 = 497084662800LLU;
	int32_t x600 = -1;
	uint64_t t98 = 2833268LLU;

	t98 = (x597+((x598*x599)%x600));

	if (t98 != 18446743576624888811LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x601 = -4091;
	static uint16_t x602 = 9008U;
	volatile int64_t x604 = -1LL;
	int64_t t99 = -69456398992LL;

	t99 = (x601+((x602*x603)%x604));

	if (t99 != -4091LL) { NG(); } else { ; }
	
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

