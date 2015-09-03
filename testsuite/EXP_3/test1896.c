#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x6 = 101968U;
int32_t x13 = INT32_MIN;
static int32_t x17 = -1;
int64_t x29 = INT64_MIN;
uint8_t x32 = UINT8_MAX;
int64_t x35 = 322LL;
volatile uint64_t t7 = 6826457LLU;
uint64_t t9 = 4955388694874LLU;
int32_t x61 = 23;
uint64_t t11 = 1531175667LLU;
uint32_t t12 = 708U;
int32_t t13 = 5113936;
volatile uint64_t t14 = 11039539637891509LLU;
int16_t x93 = INT16_MIN;
int8_t x114 = -1;
static int8_t x120 = INT8_MAX;
static uint64_t t22 = 239444LLU;
int64_t t24 = 241888LL;
int16_t x136 = INT16_MAX;
int8_t x138 = INT8_MIN;
static uint8_t x140 = UINT8_MAX;
volatile int32_t t29 = 717131;
int16_t x167 = 246;
uint8_t x168 = 1U;
uint8_t x169 = 4U;
volatile int32_t x178 = -1;
int8_t x184 = INT8_MAX;
int8_t x193 = INT8_MAX;
static int64_t x203 = -1LL;
volatile uint64_t t39 = 10LLU;
volatile uint64_t t41 = 23605269581LLU;
int64_t t42 = -1LL;
uint8_t x226 = 0U;
int8_t x228 = INT8_MIN;
uint16_t x236 = 5U;
int16_t x239 = -1;
volatile int64_t t47 = 5803884373LL;
int64_t x261 = -1LL;
volatile int64_t x264 = INT64_MIN;
volatile int32_t x270 = INT32_MAX;
static volatile uint64_t t53 = 0LLU;
uint64_t x281 = UINT64_MAX;
uint16_t x283 = UINT16_MAX;
static uint16_t x286 = 7351U;
volatile int8_t x290 = -1;
volatile int64_t x291 = -255677LL;
int8_t x294 = -7;
int8_t x304 = -1;
static int8_t x305 = -1;
uint16_t x306 = 21939U;
static int64_t x314 = -1LL;
uint64_t x317 = 43290544591LLU;
uint16_t x319 = 6766U;
volatile uint64_t t62 = 13299758451LLU;
int8_t x324 = INT8_MIN;
int64_t x325 = INT64_MIN;
int64_t x336 = INT64_MIN;
int64_t x337 = -57603LL;
uint64_t x340 = 1LLU;
uint32_t x354 = UINT32_MAX;
uint16_t x355 = 227U;
int8_t x365 = INT8_MIN;
volatile uint64_t x369 = 3495981645809768LLU;
volatile uint64_t t70 = 26324883586200LLU;
int8_t x373 = -48;
int8_t x374 = -1;
uint16_t x403 = UINT16_MAX;
uint16_t x413 = 0U;
int16_t x414 = -1;
uint8_t x415 = 1U;
volatile int32_t x416 = INT32_MIN;
static uint8_t x422 = 0U;
int32_t t79 = 1;
int8_t x425 = -1;
uint16_t x427 = 9U;
volatile int64_t x428 = -9381191719845LL;
volatile uint32_t x430 = 45024U;
static uint16_t x431 = 0U;
uint32_t t81 = 8U;
static int64_t t82 = -22239977762189LL;
uint16_t x438 = 388U;
volatile int16_t x439 = INT16_MIN;
volatile uint32_t t84 = 9001U;
int64_t x451 = INT64_MAX;
static int64_t t85 = 777659388048LL;
static uint8_t x469 = 8U;
volatile int16_t x480 = INT16_MAX;
int8_t x492 = INT8_MAX;
static uint64_t t93 = 250922LLU;
static int16_t x510 = INT16_MAX;
static int64_t x511 = -404378LL;
static int16_t x512 = INT16_MIN;
uint32_t x513 = 109053778U;
uint64_t t96 = 4432LLU;
static volatile int8_t x523 = 0;
int8_t x524 = INT8_MAX;
static volatile uint64_t t97 = 228093608992LLU;
volatile int16_t x534 = -1;


void f0(void) {
	static int32_t x5 = -1340;
	int16_t x7 = 628;
	static volatile uint32_t x8 = 3419375U;
	uint32_t t0 = 279523U;

	t0 = ((x5*x6)&(x7|x8));

	if (t0 != 1049664U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x9 = -1;
	static int16_t x10 = INT16_MAX;
	int16_t x11 = INT16_MIN;
	volatile int16_t x12 = INT16_MAX;
	int32_t t1 = -36798;

	t1 = ((x9*x10)&(x11|x12));

	if (t1 != -32767) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint32_t x14 = UINT32_MAX;
	static volatile uint8_t x15 = UINT8_MAX;
	uint32_t x16 = UINT32_MAX;
	uint32_t t2 = 46451233U;

	t2 = ((x13*x14)&(x15|x16));

	if (t2 != 2147483648U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x18 = 6U;
	int64_t x19 = INT64_MAX;
	uint64_t x20 = UINT64_MAX;
	static volatile uint64_t t3 = 1687417873LLU;

	t3 = ((x17*x18)&(x19|x20));

	if (t3 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x30 = 1;
	volatile uint16_t x31 = UINT16_MAX;
	volatile int64_t t4 = 85578LL;

	t4 = ((x29*x30)&(x31|x32));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x33 = -1;
	uint64_t x34 = UINT64_MAX;
	uint32_t x36 = 339346730U;
	static uint64_t t5 = 7262457LLU;

	t5 = ((x33*x34)&(x35|x36));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x37 = 27U;
	volatile uint8_t x38 = 5U;
	int16_t x39 = INT16_MIN;
	int32_t x40 = INT32_MIN;
	int32_t t6 = -219859289;

	t6 = ((x37*x38)&(x39|x40));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x41 = 719LL;
	volatile int32_t x42 = 391;
	volatile uint64_t x43 = 58971645089LLU;
	int8_t x44 = INT8_MAX;

	t7 = ((x41*x42)&(x43|x44));

	if (t7 != 16425LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x45 = 24;
	uint16_t x46 = UINT16_MAX;
	uint16_t x47 = 204U;
	volatile uint64_t x48 = 14181572550LLU;
	uint64_t t8 = 225982742513876LLU;

	t8 = ((x45*x46)&(x47|x48));

	if (t8 != 106440LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x49 = INT64_MAX;
	uint64_t x50 = 420924476LLU;
	static int64_t x51 = -1LL;
	int32_t x52 = -308888;

	t9 = ((x49*x50)&(x51|x52));

	if (t9 != 18446744073288627140LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x57 = 88U;
	int16_t x58 = INT16_MAX;
	uint16_t x59 = 641U;
	int64_t x60 = 16228458786440571LL;
	int64_t t10 = 1617391955529LL;

	t10 = ((x57*x58)&(x59|x60));

	if (t10 != 2344872LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x62 = 46;
	volatile uint64_t x63 = UINT64_MAX;
	volatile int32_t x64 = INT32_MIN;

	t11 = ((x61*x62)&(x63|x64));

	if (t11 != 1058LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x65 = UINT32_MAX;
	volatile int8_t x66 = INT8_MAX;
	int8_t x67 = 58;
	static uint8_t x68 = 2U;

	t12 = ((x65*x66)&(x67|x68));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x69 = 7U;
	int32_t x70 = 3212;
	int16_t x71 = -15440;
	int8_t x72 = 57;

	t13 = ((x69*x70)&(x71|x72));

	if (t13 != 17296) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x73 = INT64_MIN;
	volatile uint64_t x74 = 74LLU;
	volatile int16_t x75 = -1;
	int64_t x76 = INT64_MIN;

	t14 = ((x73*x74)&(x75|x76));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x85 = -1;
	static volatile int32_t x86 = INT32_MAX;
	int64_t x87 = -1LL;
	static int16_t x88 = INT16_MAX;
	volatile int64_t t15 = -3811352225822641187LL;

	t15 = ((x85*x86)&(x87|x88));

	if (t15 != -2147483647LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x94 = 37LLU;
	int8_t x95 = 0;
	int8_t x96 = 0;
	volatile uint64_t t16 = 887LLU;

	t16 = ((x93*x94)&(x95|x96));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x97 = 1505;
	static uint8_t x98 = UINT8_MAX;
	int16_t x99 = 7;
	int64_t x100 = -1LL;
	int64_t t17 = 410LL;

	t17 = ((x97*x98)&(x99|x100));

	if (t17 != 383775LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x101 = 3221141101336096870LLU;
	int64_t x102 = INT64_MIN;
	uint16_t x103 = UINT16_MAX;
	uint16_t x104 = 505U;
	static uint64_t t18 = 972LLU;

	t18 = ((x101*x102)&(x103|x104));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x105 = 1;
	static int64_t x106 = INT64_MIN;
	static uint32_t x107 = 122U;
	int32_t x108 = INT32_MIN;
	static volatile int64_t t19 = 1LL;

	t19 = ((x105*x106)&(x107|x108));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x109 = UINT32_MAX;
	static volatile int8_t x110 = INT8_MIN;
	uint64_t x111 = 2083659593749662LLU;
	static int64_t x112 = -1LL;
	uint64_t t20 = 11LLU;

	t20 = ((x109*x110)&(x111|x112));

	if (t20 != 128LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x113 = 1644572640U;
	int32_t x115 = INT32_MIN;
	static int32_t x116 = INT32_MAX;
	uint32_t t21 = 459005690U;

	t21 = ((x113*x114)&(x115|x116));

	if (t21 != 2650394656U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x117 = -7742;
	uint64_t x118 = UINT64_MAX;
	int64_t x119 = INT64_MAX;

	t22 = ((x117*x118)&(x119|x120));

	if (t22 != 7742LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x121 = 25U;
	int64_t x122 = -1LL;
	int64_t x123 = INT64_MAX;
	int8_t x124 = 1;
	int64_t t23 = 40444807346878484LL;

	t23 = ((x121*x122)&(x123|x124));

	if (t23 != 9223372036854775783LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x125 = -50;
	int32_t x126 = 1;
	int8_t x127 = -1;
	int64_t x128 = 174406993488866110LL;

	t24 = ((x125*x126)&(x127|x128));

	if (t24 != -50LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x129 = INT8_MIN;
	int32_t x130 = -1;
	static uint8_t x131 = UINT8_MAX;
	static uint16_t x132 = UINT16_MAX;
	int32_t t25 = 24508029;

	t25 = ((x129*x130)&(x131|x132));

	if (t25 != 128) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int32_t x133 = INT32_MIN;
	volatile uint64_t x134 = UINT64_MAX;
	int16_t x135 = -3;
	static uint64_t t26 = 2401652153LLU;

	t26 = ((x133*x134)&(x135|x136));

	if (t26 != 2147483648LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x137 = 4U;
	static uint8_t x139 = UINT8_MAX;
	int32_t t27 = -1748;

	t27 = ((x137*x138)&(x139|x140));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x141 = INT32_MIN;
	static int16_t x142 = 0;
	int64_t x143 = 7362093425347LL;
	int8_t x144 = 26;
	volatile int64_t t28 = -468LL;

	t28 = ((x141*x142)&(x143|x144));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x145 = INT8_MIN;
	volatile uint16_t x146 = 2U;
	int16_t x147 = INT16_MIN;
	volatile int16_t x148 = INT16_MIN;

	t29 = ((x145*x146)&(x147|x148));

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x161 = INT16_MIN;
	int8_t x162 = INT8_MIN;
	uint32_t x163 = 562U;
	static int8_t x164 = -9;
	uint32_t t30 = 875U;

	t30 = ((x161*x162)&(x163|x164));

	if (t30 != 4194304U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x165 = INT8_MAX;
	int8_t x166 = INT8_MAX;
	volatile int32_t t31 = -1;

	t31 = ((x165*x166)&(x167|x168));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x170 = UINT8_MAX;
	int8_t x171 = INT8_MIN;
	static int32_t x172 = 229;
	volatile int32_t t32 = 554055;

	t32 = ((x169*x170)&(x171|x172));

	if (t32 != 996) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x177 = INT64_MAX;
	volatile int32_t x179 = -5;
	static uint8_t x180 = UINT8_MAX;
	volatile int64_t t33 = -8531518657LL;

	t33 = ((x177*x178)&(x179|x180));

	if (t33 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x181 = 4857201618398LLU;
	uint32_t x182 = UINT32_MAX;
	int64_t x183 = -1LL;
	volatile uint64_t t34 = 238LLU;

	t34 = ((x181*x182)&(x183|x184));

	if (t34 != 16701292948686967330LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x185 = 33450135U;
	static uint64_t x186 = 4259070752493993044LLU;
	uint32_t x187 = 27637U;
	int32_t x188 = INT32_MAX;
	static volatile uint64_t t35 = 1LLU;

	t35 = ((x185*x186)&(x187|x188));

	if (t35 != 377943436LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x189 = 1;
	static int8_t x190 = INT8_MAX;
	int16_t x191 = 4352;
	int32_t x192 = INT32_MIN;
	volatile int32_t t36 = 271353;

	t36 = ((x189*x190)&(x191|x192));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x194 = 0U;
	volatile int8_t x195 = INT8_MAX;
	uint16_t x196 = UINT16_MAX;
	volatile int32_t t37 = -193;

	t37 = ((x193*x194)&(x195|x196));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x197 = 0U;
	uint32_t x198 = 33402486U;
	int8_t x199 = INT8_MAX;
	static int16_t x200 = -1;
	volatile uint32_t t38 = 2109U;

	t38 = ((x197*x198)&(x199|x200));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x201 = 0LLU;
	int8_t x202 = INT8_MIN;
	int16_t x204 = INT16_MAX;

	t39 = ((x201*x202)&(x203|x204));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x205 = 49120454308031488LLU;
	int64_t x206 = -84LL;
	int64_t x207 = -1LL;
	uint32_t x208 = 531043103U;
	static volatile uint64_t t40 = 417906790179LLU;

	t40 = ((x205*x206)&(x207|x208));

	if (t40 != 14320625911834906624LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x209 = UINT64_MAX;
	static int32_t x210 = 17905;
	int32_t x211 = 539;
	int32_t x212 = INT32_MAX;

	t41 = ((x209*x210)&(x211|x212));

	if (t41 != 2147465743LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x217 = UINT8_MAX;
	static int16_t x218 = INT16_MIN;
	volatile int64_t x219 = -5919107964253495LL;
	int8_t x220 = INT8_MAX;

	t42 = ((x217*x218)&(x219|x220));

	if (t42 != -5919107971022848LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x225 = 6;
	static uint64_t x227 = 20338309540LLU;
	volatile uint64_t t43 = 8955009430641884259LLU;

	t43 = ((x225*x226)&(x227|x228));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x229 = 392086215U;
	static uint64_t x230 = UINT64_MAX;
	int16_t x231 = INT16_MAX;
	volatile uint64_t x232 = 470975987202381LLU;
	uint64_t t44 = 133936618631LLU;

	t44 = ((x229*x230)&(x231|x232));

	if (t44 != 470975915244857LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x233 = -1;
	uint32_t x234 = UINT32_MAX;
	static int8_t x235 = -1;
	uint32_t t45 = 6573U;

	t45 = ((x233*x234)&(x235|x236));

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x237 = -1;
	int32_t x238 = -7830977;
	static uint8_t x240 = UINT8_MAX;
	volatile int32_t t46 = -3;

	t46 = ((x237*x238)&(x239|x240));

	if (t46 != 7830977) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x241 = -1LL;
	int16_t x242 = INT16_MIN;
	uint32_t x243 = 341559U;
	uint8_t x244 = UINT8_MAX;

	t47 = ((x241*x242)&(x243|x244));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x249 = UINT16_MAX;
	int64_t x250 = 6863410261LL;
	uint32_t x251 = 3U;
	volatile uint64_t x252 = 12712777009858355LLU;
	uint64_t t48 = 62139053320203820LLU;

	t48 = ((x249*x250)&(x251|x252));

	if (t48 != 290357120598819LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x257 = 13;
	static volatile int32_t x258 = -1;
	static uint16_t x259 = 28U;
	int16_t x260 = INT16_MIN;
	volatile int32_t t49 = 95106699;

	t49 = ((x257*x258)&(x259|x260));

	if (t49 != -32752) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x262 = 88155U;
	uint8_t x263 = UINT8_MAX;
	volatile int64_t t50 = -396746136880LL;

	t50 = ((x261*x262)&(x263|x264));

	if (t50 != -9223372036854775643LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x265 = -6084185429273LL;
	uint8_t x266 = 1U;
	uint16_t x267 = 4105U;
	int16_t x268 = 0;
	int64_t t51 = 2423764666423959LL;

	t51 = ((x265*x266)&(x267|x268));

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x269 = -1LL;
	static int32_t x271 = INT32_MIN;
	int16_t x272 = -1;
	int64_t t52 = 193LL;

	t52 = ((x269*x270)&(x271|x272));

	if (t52 != -2147483647LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x273 = 11U;
	uint64_t x274 = UINT64_MAX;
	volatile uint64_t x275 = 2LLU;
	static int32_t x276 = INT32_MIN;

	t53 = ((x273*x274)&(x275|x276));

	if (t53 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x282 = UINT64_MAX;
	static uint8_t x284 = UINT8_MAX;
	uint64_t t54 = 9488841475799887LLU;

	t54 = ((x281*x282)&(x283|x284));

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x285 = 1;
	int64_t x287 = INT64_MIN;
	uint64_t x288 = 2080189470LLU;
	uint64_t t55 = 6933LLU;

	t55 = ((x285*x286)&(x287|x288));

	if (t55 != 3094LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x289 = UINT8_MAX;
	int64_t x292 = -1LL;
	static int64_t t56 = 6622014LL;

	t56 = ((x289*x290)&(x291|x292));

	if (t56 != -255LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x293 = 152292790972LL;
	int8_t x295 = -1;
	int16_t x296 = -1;
	int64_t t57 = -3645158643142973LL;

	t57 = ((x293*x294)&(x295|x296));

	if (t57 != -1066049536804LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x301 = UINT8_MAX;
	static int8_t x302 = INT8_MAX;
	int16_t x303 = INT16_MIN;
	int32_t t58 = -4398;

	t58 = ((x301*x302)&(x303|x304));

	if (t58 != 32385) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x307 = INT32_MAX;
	uint32_t x308 = UINT32_MAX;
	uint32_t t59 = 165972966U;

	t59 = ((x305*x306)&(x307|x308));

	if (t59 != 4294945357U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x309 = -13;
	int32_t x310 = 0;
	int32_t x311 = INT32_MIN;
	int16_t x312 = INT16_MIN;
	volatile int32_t t60 = 91507;

	t60 = ((x309*x310)&(x311|x312));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x313 = -65499270894LL;
	int64_t x315 = INT64_MIN;
	static uint32_t x316 = 19555U;
	int64_t t61 = 16051254063219LL;

	t61 = ((x313*x314)&(x315|x316));

	if (t61 != 3170LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x318 = 159974515349827166LLU;
	int16_t x320 = 10;

	t62 = ((x317*x318)&(x319|x320));

	if (t62 != 2050LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x321 = 3U;
	int16_t x322 = -1;
	static volatile int8_t x323 = 42;
	int32_t t63 = -372104059;

	t63 = ((x321*x322)&(x323|x324));

	if (t63 != -88) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x326 = 0LL;
	int16_t x327 = INT16_MAX;
	int64_t x328 = INT64_MIN;
	int64_t t64 = -51199LL;

	t64 = ((x325*x326)&(x327|x328));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x333 = INT32_MIN;
	uint64_t x334 = 273696769995LLU;
	uint32_t x335 = 5468U;
	uint64_t t65 = 96368LLU;

	t65 = ((x333*x334)&(x335|x336));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x338 = INT32_MIN;
	int8_t x339 = 0;
	uint64_t t66 = 1208057208189LLU;

	t66 = ((x337*x338)&(x339|x340));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x341 = -1;
	int64_t x342 = 615151760210LL;
	int64_t x343 = INT64_MAX;
	int8_t x344 = INT8_MIN;
	volatile int64_t t67 = -190895774LL;

	t67 = ((x341*x342)&(x343|x344));

	if (t67 != -615151760210LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x353 = 10282;
	static uint16_t x356 = 230U;
	volatile uint32_t t68 = 52563031U;

	t68 = ((x353*x354)&(x355|x356));

	if (t68 != 198U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x366 = -3315;
	int64_t x367 = 849572104588LL;
	uint64_t x368 = 296968770216LLU;
	volatile uint64_t t69 = 4132660178671187LLU;

	t69 = ((x365*x366)&(x367|x368));

	if (t69 != 416128LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x370 = -1;
	int8_t x371 = INT8_MAX;
	int64_t x372 = -1LL;

	t70 = ((x369*x370)&(x371|x372));

	if (t70 != 18443248092063741848LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x375 = -1;
	static int16_t x376 = INT16_MAX;
	volatile int32_t t71 = -5328;

	t71 = ((x373*x374)&(x375|x376));

	if (t71 != 48) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x381 = INT64_MAX;
	volatile int32_t x382 = -1;
	uint8_t x383 = UINT8_MAX;
	int8_t x384 = 7;
	volatile int64_t t72 = 363212549894727LL;

	t72 = ((x381*x382)&(x383|x384));

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x385 = 66279965LLU;
	uint32_t x386 = UINT32_MAX;
	int32_t x387 = 2498;
	static int64_t x388 = 4374325173099LL;
	uint64_t t73 = 98940878530062237LLU;

	t73 = ((x385*x386)&(x387|x388));

	if (t73 != 2304116261347LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x393 = 616U;
	uint64_t x394 = 2271500991686701741LLU;
	int8_t x395 = 1;
	int64_t x396 = -26341663LL;
	volatile uint64_t t74 = 126075548521714LLU;

	t74 = ((x393*x394)&(x395|x396));

	if (t74 != 15738805350782337088LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x397 = 295U;
	uint32_t x398 = 550601U;
	static uint8_t x399 = 39U;
	int32_t x400 = INT32_MAX;
	static volatile uint32_t t75 = 0U;

	t75 = ((x397*x398)&(x399|x400));

	if (t75 != 162427295U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x401 = 413;
	static int16_t x402 = INT16_MAX;
	static uint64_t x404 = 18690049092LLU;
	uint64_t t76 = 22091871955170LLU;

	t76 = ((x401*x402)&(x403|x404));

	if (t76 != 163427LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x409 = 2;
	int8_t x410 = INT8_MAX;
	static uint32_t x411 = 7295U;
	uint8_t x412 = UINT8_MAX;
	static uint32_t t77 = 84U;

	t77 = ((x409*x410)&(x411|x412));

	if (t77 != 254U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t t78 = 560137980;

	t78 = ((x413*x414)&(x415|x416));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x421 = INT32_MIN;
	int16_t x423 = -1;
	static int16_t x424 = INT16_MIN;

	t79 = ((x421*x422)&(x423|x424));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x426 = INT32_MAX;
	volatile int64_t t80 = 1544388187LL;

	t80 = ((x425*x426)&(x427|x428));

	if (t80 != -9382356058111LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x429 = -1;
	static int32_t x432 = -1;

	t81 = ((x429*x430)&(x431|x432));

	if (t81 != 4294922272U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x433 = INT16_MAX;
	int8_t x434 = -1;
	int64_t x435 = -1LL;
	int16_t x436 = INT16_MAX;

	t82 = ((x433*x434)&(x435|x436));

	if (t82 != -32767LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x437 = INT16_MIN;
	volatile int32_t x440 = -9011141;
	volatile int32_t t83 = -606324221;

	t83 = ((x437*x438)&(x439|x440));

	if (t83 != -12713984) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x441 = -37381;
	uint32_t x442 = 1648913147U;
	volatile int8_t x443 = 1;
	volatile int32_t x444 = INT32_MIN;

	t84 = ((x441*x442)&(x443|x444));

	if (t84 != 2147483649U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x449 = UINT8_MAX;
	uint32_t x450 = UINT32_MAX;
	volatile int64_t x452 = -1LL;

	t85 = ((x449*x450)&(x451|x452));

	if (t85 != 4294967041LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x457 = 7U;
	uint32_t x458 = UINT32_MAX;
	int64_t x459 = 12866LL;
	uint32_t x460 = UINT32_MAX;
	int64_t t86 = 89212886977LL;

	t86 = ((x457*x458)&(x459|x460));

	if (t86 != 4294967289LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x461 = 7059001937687LL;
	int8_t x462 = 2;
	uint16_t x463 = UINT16_MAX;
	int32_t x464 = 4277;
	volatile int64_t t87 = 687275233761049988LL;

	t87 = ((x461*x462)&(x463|x464));

	if (t87 != 7726LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x470 = 13;
	uint32_t x471 = 57122342U;
	uint16_t x472 = 77U;
	volatile uint32_t t88 = 0U;

	t88 = ((x469*x470)&(x471|x472));

	if (t88 != 104U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x473 = 1416214485LL;
	static uint16_t x474 = UINT16_MAX;
	volatile int16_t x475 = INT16_MIN;
	uint16_t x476 = 160U;
	static volatile int64_t t89 = 58LL;

	t89 = ((x473*x474)&(x475|x476));

	if (t89 != 92811616256032LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x477 = -3057;
	uint64_t x478 = 4812923LLU;
	uint32_t x479 = UINT32_MAX;
	uint64_t t90 = 16640657503LLU;

	t90 = ((x477*x478)&(x479|x480));

	if (t90 != 2466763573LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x481 = 60U;
	uint64_t x482 = UINT64_MAX;
	int64_t x483 = -1LL;
	static volatile int32_t x484 = -1;
	static uint64_t t91 = 349LLU;

	t91 = ((x481*x482)&(x483|x484));

	if (t91 != 18446744073709551556LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x489 = 3;
	uint32_t x490 = 20873945U;
	int64_t x491 = INT64_MAX;
	volatile int64_t t92 = -1439095LL;

	t92 = ((x489*x490)&(x491|x492));

	if (t92 != 62621835LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x497 = INT8_MIN;
	uint16_t x498 = 8U;
	static int64_t x499 = INT64_MIN;
	static uint64_t x500 = 343706702160LLU;

	t93 = ((x497*x498)&(x499|x500));

	if (t93 != 9223372380561477632LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x509 = -25149803124918LL;
	volatile int64_t t94 = -615828LL;

	t94 = ((x509*x510)&(x511|x512));

	if (t94 != -824083598994190298LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x514 = -1LL;
	uint32_t x515 = 137194U;
	volatile int32_t x516 = INT32_MIN;
	int64_t t95 = 39111673LL;

	t95 = ((x513*x514)&(x515|x516));

	if (t95 != 2147618986LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x517 = 15516238U;
	uint64_t x518 = 122408LLU;
	static volatile uint8_t x519 = 59U;
	int8_t x520 = INT8_MAX;

	t96 = ((x517*x518)&(x519|x520));

	if (t96 != 48LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x521 = 1987LLU;
	int32_t x522 = INT32_MAX;

	t97 = ((x521*x522)&(x523|x524));

	if (t97 != 61LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x533 = INT16_MAX;
	int16_t x535 = INT16_MAX;
	int64_t x536 = -1LL;
	int64_t t98 = -13331307LL;

	t98 = ((x533*x534)&(x535|x536));

	if (t98 != -32767LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x537 = 9917411U;
	static volatile int16_t x538 = INT16_MIN;
	uint64_t x539 = 15560408797LLU;
	int8_t x540 = 1;
	uint64_t t99 = 27LLU;

	t99 = ((x537*x538)&(x539|x540));

	if (t99 != 369655808LLU) { NG(); } else { ; }
	
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

