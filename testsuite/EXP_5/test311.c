#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = 347535;
int16_t x6 = INT16_MAX;
volatile uint32_t x14 = 2193700U;
uint8_t x15 = 0U;
volatile uint16_t x23 = 7U;
volatile uint16_t x27 = 15U;
uint32_t x38 = 1038160U;
int64_t x44 = -1LL;
volatile int32_t x46 = 972041;
static volatile int32_t t9 = 171506033;
uint32_t x49 = UINT32_MAX;
static int16_t x51 = INT16_MIN;
int32_t x52 = INT32_MIN;
volatile uint32_t t10 = UINT32_MAX;
uint16_t x54 = 373U;
static int32_t x57 = INT32_MIN;
uint16_t x60 = 0U;
int32_t x61 = INT32_MAX;
int32_t x64 = INT32_MIN;
static uint8_t x67 = UINT8_MAX;
volatile uint64_t x68 = 1746921LLU;
uint64_t t14 = 5734146071077406937LLU;
static int32_t x73 = INT32_MAX;
int64_t x76 = INT64_MIN;
uint16_t x78 = 394U;
int32_t t17 = 298537180;
uint8_t x83 = 2U;
int8_t x84 = INT8_MIN;
static volatile int32_t t19 = 6;
volatile int16_t x93 = 1311;
uint16_t x95 = 0U;
uint16_t x96 = 16U;
int64_t x118 = INT64_MIN;
int32_t x120 = 505;
uint16_t x121 = UINT16_MAX;
static uint64_t t26 = 696874106901991LLU;
static uint32_t t27 = 39U;
int32_t t29 = 884;
int64_t x145 = INT64_MIN;
static volatile uint8_t x147 = 9U;
static uint32_t t32 = 31388U;
int8_t x164 = -1;
int8_t x174 = INT8_MIN;
volatile uint16_t x183 = 1U;
volatile uint64_t x186 = UINT64_MAX;
uint16_t x188 = 0U;
static uint64_t t39 = 6LLU;
int32_t x194 = 7602633;
volatile int32_t t40 = 5219999;
int32_t x197 = INT32_MIN;
volatile uint64_t t41 = 458LLU;
int64_t x203 = INT64_MIN;
int8_t x206 = 0;
int8_t x209 = INT8_MIN;
volatile int64_t t44 = -139LL;
static uint64_t x221 = 7826LLU;
int8_t x228 = 0;
uint8_t x232 = 12U;
int8_t x233 = 1;
volatile int16_t x237 = INT16_MIN;
uint16_t x239 = 4917U;
int16_t x253 = INT16_MIN;
uint64_t x258 = UINT64_MAX;
static int8_t x274 = INT8_MAX;
uint32_t x276 = 74432481U;
volatile uint64_t t57 = 567LLU;
int64_t t58 = INT64_MAX;
uint32_t x290 = UINT32_MAX;
uint32_t t59 = 10U;
volatile uint32_t x294 = UINT32_MAX;
int16_t x295 = -1;
static int64_t t61 = -32522LL;
volatile int32_t t63 = -366780;
uint64_t x318 = 2LLU;
static volatile int16_t x327 = INT16_MIN;
volatile uint32_t x333 = UINT32_MAX;
volatile uint64_t t69 = 166605036LLU;
static volatile int8_t x337 = 6;
volatile int64_t t70 = 195LL;
int32_t t71 = 3;
int8_t x345 = INT8_MAX;
int64_t x348 = -2890980480LL;
int64_t t72 = -202091LL;
uint64_t x352 = 27415978520956826LLU;
uint64_t t73 = UINT64_MAX;
uint8_t x359 = UINT8_MAX;
uint8_t x364 = UINT8_MAX;
static volatile int32_t x369 = INT32_MAX;
int64_t x370 = INT64_MIN;
int16_t x373 = 1997;
volatile uint16_t x381 = UINT16_MAX;
int64_t x385 = 412613883401955LL;
volatile int8_t x388 = INT8_MIN;
int8_t x391 = 6;
volatile int32_t x392 = INT32_MIN;
volatile int64_t t82 = 1057961033LL;
static volatile uint8_t x398 = 1U;
volatile int16_t x406 = INT16_MIN;
int32_t x407 = 32;
int32_t t85 = -5281612;
static int16_t x409 = -1;
uint32_t x422 = 36717U;
volatile int64_t x424 = INT64_MIN;
uint8_t x432 = 4U;
volatile int64_t x445 = INT64_MIN;
volatile int64_t t92 = 0LL;
volatile int64_t x456 = INT64_MIN;
volatile uint64_t x468 = UINT64_MAX;
int8_t x471 = INT8_MIN;


void f0(void) {
	volatile uint32_t x1 = 43U;
	static volatile int16_t x2 = 6;
	uint16_t x4 = 14U;
	volatile uint32_t t0 = 10150U;

	t0 = (x1|((x2-x3)&x4));

	if (t0 != 47U) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MIN;
	uint16_t x7 = UINT16_MAX;
	int32_t x8 = -1;
	static int32_t t1 = -61;

	t1 = (x5|((x6-x7)&x8));

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = UINT32_MAX;
	volatile uint8_t x10 = 1U;
	int32_t x11 = -43006;
	int64_t x12 = 625916430977575751LL;
	int64_t t2 = -91409584062798210LL;

	t2 = (x9|((x10-x11)&x12));

	if (t2 != 4294967295LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	volatile int64_t x16 = INT64_MIN;
	volatile uint64_t t3 = UINT64_MAX;

	t3 = (x13|((x14-x15)&x16));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -1;
	int32_t x22 = INT32_MAX;
	int64_t x24 = -460950990203376LL;
	int64_t t4 = 19049LL;

	t4 = (x21|((x22-x23)&x24));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = INT32_MAX;
	int16_t x26 = 6;
	int32_t x28 = INT32_MIN;
	int32_t t5 = 11;

	t5 = (x25|((x26-x27)&x28));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = -34658;
	volatile uint32_t x30 = UINT32_MAX;
	int64_t x31 = -1LL;
	int32_t x32 = -1;
	int64_t t6 = -62972107993401929LL;

	t6 = (x29|((x30-x31)&x32));

	if (t6 != -34658LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x37 = INT64_MAX;
	int16_t x39 = -1;
	int64_t x40 = -1035478387LL;
	static volatile int64_t t7 = INT64_MAX;

	t7 = (x37|((x38-x39)&x40));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = 2401U;
	static int8_t x42 = INT8_MIN;
	volatile int8_t x43 = 0;
	int64_t t8 = 235218012905824LL;

	t8 = (x41|((x42-x43)&x44));

	if (t8 != -31LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = 0U;
	volatile int16_t x47 = 28;
	uint16_t x48 = 0U;

	t9 = (x45|((x46-x47)&x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x50 = INT16_MIN;

	t10 = (x49|((x50-x51)&x52));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = INT16_MAX;
	volatile int8_t x55 = -1;
	static int64_t x56 = INT64_MIN;
	volatile int64_t t11 = -84835261883LL;

	t11 = (x53|((x54-x55)&x56));

	if (t11 != 32767LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x58 = -1LL;
	int16_t x59 = INT16_MIN;
	int64_t t12 = 31976558LL;

	t12 = (x57|((x58-x59)&x60));

	if (t12 != -2147483648LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x62 = 9U;
	static volatile uint16_t x63 = 81U;
	int32_t t13 = -15;

	t13 = (x61|((x62-x63)&x64));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x65 = -825212142749377141LL;
	int64_t x66 = -76515LL;

	t14 = (x65|((x66-x67)&x68));

	if (t14 != 17621531930960829835LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = -1;
	uint64_t x70 = 0LLU;
	volatile uint64_t x71 = 914LLU;
	static uint64_t x72 = 3427175LLU;
	uint64_t t15 = UINT64_MAX;

	t15 = (x69|((x70-x71)&x72));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x74 = UINT64_MAX;
	volatile int64_t x75 = INT64_MIN;
	volatile uint64_t t16 = 34875662887537791LLU;

	t16 = (x73|((x74-x75)&x76));

	if (t16 != 2147483647LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x77 = 2141;
	uint8_t x79 = UINT8_MAX;
	volatile uint8_t x80 = 32U;

	t17 = (x77|((x78-x79)&x80));

	if (t17 != 2141) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x81 = UINT16_MAX;
	int16_t x82 = 9169;
	static volatile int32_t t18 = -3;

	t18 = (x81|((x82-x83)&x84));

	if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint8_t x89 = 3U;
	int8_t x90 = INT8_MAX;
	int16_t x91 = INT16_MIN;
	volatile int8_t x92 = -1;

	t19 = (x89|((x90-x91)&x92));

	if (t19 != 32895) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x94 = -1;
	volatile int32_t t20 = -525;

	t20 = (x93|((x94-x95)&x96));

	if (t20 != 1311) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x101 = 1;
	volatile int64_t x102 = INT64_MIN;
	int8_t x103 = INT8_MIN;
	static uint16_t x104 = 32409U;
	static volatile int64_t t21 = -107680009927LL;

	t21 = (x101|((x102-x103)&x104));

	if (t21 != 129LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x105 = INT32_MAX;
	static int16_t x106 = INT16_MIN;
	int16_t x107 = INT16_MAX;
	int64_t x108 = INT64_MAX;
	int64_t t22 = INT64_MAX;

	t22 = (x105|((x106-x107)&x108));

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x109 = 5723U;
	uint32_t x110 = 447U;
	int8_t x111 = 0;
	uint32_t x112 = 21449U;
	uint32_t t23 = 155506214U;

	t23 = (x109|((x110-x111)&x112));

	if (t23 != 6107U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x113 = INT16_MAX;
	uint64_t x114 = 7075857LLU;
	uint32_t x115 = UINT32_MAX;
	int16_t x116 = 1;
	static uint64_t t24 = 2554018107LLU;

	t24 = (x113|((x114-x115)&x116));

	if (t24 != 32767LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x117 = INT8_MAX;
	static int8_t x119 = -2;
	static volatile int64_t t25 = 9096407LL;

	t25 = (x117|((x118-x119)&x120));

	if (t25 != 127LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x122 = 61LLU;
	int16_t x123 = -1;
	int64_t x124 = INT64_MIN;

	t26 = (x121|((x122-x123)&x124));

	if (t26 != 65535LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x125 = 2;
	static int16_t x126 = -43;
	uint8_t x127 = UINT8_MAX;
	uint32_t x128 = 889329U;

	t27 = (x125|((x126-x127)&x128));

	if (t27 != 889042U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x129 = 0U;
	uint16_t x130 = 0U;
	int32_t x131 = -1;
	int32_t x132 = 3214752;
	static volatile int32_t t28 = 76;

	t28 = (x129|((x130-x131)&x132));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x141 = INT8_MIN;
	static int32_t x142 = -1;
	volatile uint8_t x143 = 2U;
	int16_t x144 = -1;

	t29 = (x141|((x142-x143)&x144));

	if (t29 != -3) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x146 = UINT8_MAX;
	static int8_t x148 = -1;
	volatile int64_t t30 = 363154779452901LL;

	t30 = (x145|((x146-x147)&x148));

	if (t30 != -9223372036854775562LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x153 = 879;
	int64_t x154 = -1LL;
	uint16_t x155 = 161U;
	static int8_t x156 = 37;
	int64_t t31 = -43LL;

	t31 = (x153|((x154-x155)&x156));

	if (t31 != 879LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x157 = 129872482;
	volatile uint16_t x158 = 5U;
	uint32_t x159 = 450U;
	volatile uint8_t x160 = 1U;

	t32 = (x157|((x158-x159)&x160));

	if (t32 != 129872483U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x161 = -1;
	static int8_t x162 = INT8_MAX;
	static int64_t x163 = -12844545984LL;
	int64_t t33 = 3573178979154789346LL;

	t33 = (x161|((x162-x163)&x164));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x165 = INT8_MIN;
	int16_t x166 = -140;
	static uint8_t x167 = 22U;
	int32_t x168 = -1;
	volatile int32_t t34 = -440782695;

	t34 = (x165|((x166-x167)&x168));

	if (t34 != -34) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x169 = INT16_MIN;
	volatile int16_t x170 = INT16_MIN;
	volatile uint16_t x171 = 11682U;
	int64_t x172 = -1LL;
	int64_t t35 = -119312807998LL;

	t35 = (x169|((x170-x171)&x172));

	if (t35 != -11682LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x173 = UINT8_MAX;
	int8_t x175 = INT8_MIN;
	int64_t x176 = 175375284053LL;
	int64_t t36 = -23LL;

	t36 = (x173|((x174-x175)&x176));

	if (t36 != 255LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x181 = UINT16_MAX;
	int16_t x182 = INT16_MIN;
	int32_t x184 = 25;
	volatile int32_t t37 = -308371942;

	t37 = (x181|((x182-x183)&x184));

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x185 = UINT8_MAX;
	int64_t x187 = 2491984LL;
	volatile uint64_t t38 = 46942154976549LLU;

	t38 = (x185|((x186-x187)&x188));

	if (t38 != 255LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x189 = 61426U;
	int32_t x190 = -10340;
	uint64_t x191 = 93096776969LLU;
	uint8_t x192 = UINT8_MAX;

	t39 = (x189|((x190-x191)&x192));

	if (t39 != 61427LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x193 = -4;
	int32_t x195 = INT32_MAX;
	uint16_t x196 = UINT16_MAX;

	t40 = (x193|((x194-x195)&x196));

	if (t40 != -2) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x198 = UINT64_MAX;
	volatile int32_t x199 = INT32_MAX;
	volatile uint16_t x200 = 11U;

	t41 = (x197|((x198-x199)&x200));

	if (t41 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x201 = -1LL;
	int8_t x202 = -2;
	volatile int64_t x204 = -13923318938642048LL;
	volatile int64_t t42 = -1021325LL;

	t42 = (x201|((x202-x203)&x204));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x205 = -1;
	int32_t x207 = -976;
	int64_t x208 = INT64_MIN;
	static volatile int64_t t43 = 6678195133LL;

	t43 = (x205|((x206-x207)&x208));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x210 = -405685597LL;
	int8_t x211 = -23;
	volatile int8_t x212 = INT8_MIN;

	t44 = (x209|((x210-x211)&x212));

	if (t44 != -128LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x213 = INT8_MAX;
	int64_t x214 = INT64_MIN;
	int8_t x215 = INT8_MIN;
	int8_t x216 = -3;
	int64_t t45 = 11243704175627226LL;

	t45 = (x213|((x214-x215)&x216));

	if (t45 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x217 = INT32_MIN;
	uint32_t x218 = UINT32_MAX;
	int8_t x219 = -1;
	int32_t x220 = -1;
	volatile uint32_t t46 = 1549040668U;

	t46 = (x217|((x218-x219)&x220));

	if (t46 != 2147483648U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x222 = 1228U;
	int8_t x223 = INT8_MAX;
	int64_t x224 = INT64_MAX;
	uint64_t t47 = 1258310450462LLU;

	t47 = (x221|((x222-x223)&x224));

	if (t47 != 7903LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x225 = INT8_MIN;
	int32_t x226 = -128556;
	volatile int8_t x227 = INT8_MAX;
	volatile int32_t t48 = 19052;

	t48 = (x225|((x226-x227)&x228));

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x229 = INT32_MAX;
	int32_t x230 = INT32_MAX;
	volatile int8_t x231 = INT8_MAX;
	int32_t t49 = INT32_MAX;

	t49 = (x229|((x230-x231)&x232));

	if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x234 = -1LL;
	volatile int16_t x235 = -1;
	int64_t x236 = -10296791404LL;
	int64_t t50 = -235060685159LL;

	t50 = (x233|((x234-x235)&x236));

	if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x238 = INT16_MIN;
	volatile uint64_t x240 = 109199170370257LLU;
	volatile uint64_t t51 = 451873435LLU;

	t51 = (x237|((x238-x239)&x240));

	if (t51 != 18446744073709545665LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x249 = INT64_MIN;
	volatile int16_t x250 = 15412;
	int64_t x251 = -30LL;
	uint32_t x252 = 115139027U;
	volatile int64_t t52 = 112561678526523LL;

	t52 = (x249|((x250-x251)&x252));

	if (t52 != -9223372036854767534LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x254 = -1;
	volatile int32_t x255 = INT32_MIN;
	static uint16_t x256 = 1U;
	static volatile int32_t t53 = 3300039;

	t53 = (x253|((x254-x255)&x256));

	if (t53 != -32767) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x257 = INT32_MAX;
	volatile int16_t x259 = INT16_MIN;
	volatile int64_t x260 = INT64_MAX;
	volatile uint64_t t54 = 76653228302LLU;

	t54 = (x257|((x258-x259)&x260));

	if (t54 != 2147483647LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x265 = -1;
	int64_t x266 = INT64_MIN;
	static int64_t x267 = -1LL;
	int32_t x268 = INT32_MAX;
	int64_t t55 = -169973954901972LL;

	t55 = (x265|((x266-x267)&x268));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x273 = INT16_MAX;
	static uint16_t x275 = UINT16_MAX;
	volatile uint32_t t56 = 198261803U;

	t56 = (x273|((x274-x275)&x276));

	if (t56 != 74416127U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x277 = -43447467255LL;
	static volatile uint64_t x278 = 62097833516200LLU;
	uint64_t x279 = 1157006458648654LLU;
	int8_t x280 = INT8_MIN;

	t57 = (x277|((x278-x279)&x280));

	if (t57 != 18446744073614550793LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x285 = INT64_MAX;
	int16_t x286 = INT16_MIN;
	int32_t x287 = INT32_MIN;
	static int32_t x288 = 177070;

	t58 = (x285|((x286-x287)&x288));

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x289 = 1;
	uint16_t x291 = 905U;
	int8_t x292 = INT8_MIN;

	t59 = (x289|((x290-x291)&x292));

	if (t59 != 4294966273U) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x293 = 6;
	int16_t x296 = -1;
	volatile uint32_t t60 = 1924U;

	t60 = (x293|((x294-x295)&x296));

	if (t60 != 6U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x297 = -28989375919003LL;
	static int16_t x298 = 14;
	static uint32_t x299 = 4U;
	int16_t x300 = -92;

	t61 = (x297|((x298-x299)&x300));

	if (t61 != -28989375919003LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x301 = INT16_MIN;
	uint8_t x302 = 0U;
	int32_t x303 = -1;
	volatile int16_t x304 = -9806;
	int32_t t62 = 1566;

	t62 = (x301|((x302-x303)&x304));

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x305 = -364977761;
	int32_t x306 = INT32_MIN;
	int16_t x307 = -1;
	int8_t x308 = -40;

	t63 = (x305|((x306-x307)&x308));

	if (t63 != -364977761) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x309 = UINT8_MAX;
	uint32_t x310 = 888461848U;
	int64_t x311 = -1LL;
	int32_t x312 = -184;
	int64_t t64 = -23289LL;

	t64 = (x309|((x310-x311)&x312));

	if (t64 != 888462079LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x313 = INT32_MAX;
	uint64_t x314 = UINT64_MAX;
	static uint32_t x315 = UINT32_MAX;
	static int16_t x316 = -107;
	static uint64_t t65 = 412LLU;

	t65 = (x313|((x314-x315)&x316));

	if (t65 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x317 = INT16_MIN;
	static int64_t x319 = -153422LL;
	uint32_t x320 = 37U;
	uint64_t t66 = 675128257095436LLU;

	t66 = (x317|((x318-x319)&x320));

	if (t66 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x321 = INT16_MIN;
	int64_t x322 = INT64_MIN;
	uint64_t x323 = UINT64_MAX;
	volatile int16_t x324 = -3;
	uint64_t t67 = 520572721121LLU;

	t67 = (x321|((x322-x323)&x324));

	if (t67 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x325 = -1;
	uint32_t x326 = UINT32_MAX;
	int32_t x328 = INT32_MAX;
	volatile uint32_t t68 = UINT32_MAX;

	t68 = (x325|((x326-x327)&x328));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x334 = 51994936LL;
	int16_t x335 = INT16_MAX;
	uint64_t x336 = UINT64_MAX;

	t69 = (x333|((x334-x335)&x336));

	if (t69 != 4294967295LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x338 = INT8_MAX;
	uint8_t x339 = 57U;
	int64_t x340 = INT64_MAX;

	t70 = (x337|((x338-x339)&x340));

	if (t70 != 70LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x341 = UINT8_MAX;
	int8_t x342 = INT8_MIN;
	static int16_t x343 = INT16_MIN;
	int8_t x344 = -4;

	t71 = (x341|((x342-x343)&x344));

	if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x346 = 3075;
	int8_t x347 = INT8_MAX;

	t72 = (x345|((x346-x347)&x348));

	if (t72 != 1023LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint64_t x349 = UINT64_MAX;
	int16_t x350 = INT16_MIN;
	static int32_t x351 = 322433260;

	t73 = (x349|((x350-x351)&x352));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x357 = INT64_MAX;
	int8_t x358 = INT8_MAX;
	volatile int16_t x360 = -1;
	int64_t t74 = -363LL;

	t74 = (x357|((x358-x359)&x360));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x361 = UINT64_MAX;
	static int64_t x362 = INT64_MIN;
	int64_t x363 = -1LL;
	uint64_t t75 = UINT64_MAX;

	t75 = (x361|((x362-x363)&x364));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x365 = -1;
	uint32_t x366 = 2U;
	int64_t x367 = -1LL;
	uint16_t x368 = 5126U;
	int64_t t76 = 3972876362674978LL;

	t76 = (x365|((x366-x367)&x368));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x371 = -1;
	volatile uint16_t x372 = 21U;
	volatile int64_t t77 = 388230799230343LL;

	t77 = (x369|((x370-x371)&x372));

	if (t77 != 2147483647LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x374 = 9064U;
	int8_t x375 = INT8_MAX;
	uint8_t x376 = UINT8_MAX;
	volatile uint32_t t78 = 2117547492U;

	t78 = (x373|((x374-x375)&x376));

	if (t78 != 2029U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x377 = UINT32_MAX;
	uint64_t x378 = 3731901041816660LLU;
	int32_t x379 = -1;
	int64_t x380 = 189336166247LL;
	volatile uint64_t t79 = 472LLU;

	t79 = (x377|((x378-x379)&x380));

	if (t79 != 158913789951LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x382 = INT64_MIN;
	int16_t x383 = -27;
	int8_t x384 = 32;
	int64_t t80 = 1LL;

	t80 = (x381|((x382-x383)&x384));

	if (t80 != 65535LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x386 = -1;
	volatile int64_t x387 = INT64_MAX;
	volatile int64_t t81 = -125LL;

	t81 = (x385|((x386-x387)&x388));

	if (t81 != -9222959422971373853LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x389 = 1170U;
	int64_t x390 = INT64_MAX;

	t82 = (x389|((x390-x391)&x392));

	if (t82 != 9223372034707293330LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x397 = -1LL;
	int64_t x399 = -29590267634LL;
	int16_t x400 = INT16_MIN;
	volatile int64_t t83 = -75488LL;

	t83 = (x397|((x398-x399)&x400));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x401 = 119450259U;
	volatile int64_t x402 = -1LL;
	static int64_t x403 = INT64_MIN;
	volatile int16_t x404 = INT16_MIN;
	static int64_t t84 = 157LL;

	t84 = (x401|((x402-x403)&x404));

	if (t84 != 9223372036854753939LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x405 = -1;
	uint16_t x408 = 30523U;

	t85 = (x405|((x406-x407)&x408));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x410 = -1LL;
	uint16_t x411 = 309U;
	uint64_t x412 = 642895816LLU;
	static volatile uint64_t t86 = UINT64_MAX;

	t86 = (x409|((x410-x411)&x412));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x413 = INT16_MAX;
	int32_t x414 = 1;
	int16_t x415 = INT16_MIN;
	int16_t x416 = INT16_MAX;
	int32_t t87 = -1058023;

	t87 = (x413|((x414-x415)&x416));

	if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x417 = 1U;
	int32_t x418 = INT32_MAX;
	static int8_t x419 = 1;
	int16_t x420 = -20;
	int32_t t88 = 26327437;

	t88 = (x417|((x418-x419)&x420));

	if (t88 != 2147483629) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x421 = -8;
	uint8_t x423 = UINT8_MAX;
	int64_t t89 = -42384797053LL;

	t89 = (x421|((x422-x423)&x424));

	if (t89 != -8LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x429 = UINT8_MAX;
	static int64_t x430 = INT64_MIN;
	static int16_t x431 = -30;
	volatile int64_t t90 = 291484025523848LL;

	t90 = (x429|((x430-x431)&x432));

	if (t90 != 255LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x437 = UINT8_MAX;
	uint32_t x438 = 123394279U;
	uint64_t x439 = 52659103438651LLU;
	uint16_t x440 = UINT16_MAX;
	static uint64_t t91 = 878353243763560825LLU;

	t91 = (x437|((x438-x439)&x440));

	if (t91 != 16895LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x446 = -1;
	volatile uint32_t x447 = 1589U;
	volatile uint32_t x448 = 7U;

	t92 = (x445|((x446-x447)&x448));

	if (t92 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x453 = INT8_MAX;
	int8_t x454 = -1;
	uint16_t x455 = 1U;
	volatile int64_t t93 = -4431075941485118LL;

	t93 = (x453|((x454-x455)&x456));

	if (t93 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x457 = 125;
	static uint16_t x458 = 24538U;
	int64_t x459 = 1LL;
	int32_t x460 = -1;
	int64_t t94 = 130828LL;

	t94 = (x457|((x458-x459)&x460));

	if (t94 != 24573LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x461 = INT8_MIN;
	int8_t x462 = 4;
	uint32_t x463 = 537316U;
	uint32_t x464 = 263U;
	uint32_t t95 = 116235U;

	t95 = (x461|((x462-x463)&x464));

	if (t95 != 4294967168U) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint64_t x465 = 920997940544768851LLU;
	static volatile int64_t x466 = 13700211LL;
	int32_t x467 = 809;
	uint64_t t96 = 8468332555LLU;

	t96 = (x465|((x466-x467)&x468));

	if (t96 != 920997940558400347LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x469 = UINT8_MAX;
	int8_t x470 = -1;
	volatile uint64_t x472 = UINT64_MAX;
	uint64_t t97 = 84884632671189464LLU;

	t97 = (x469|((x470-x471)&x472));

	if (t97 != 255LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x473 = 3055LLU;
	volatile int16_t x474 = -1;
	uint16_t x475 = 31U;
	int8_t x476 = 0;
	uint64_t t98 = 119658788385LLU;

	t98 = (x473|((x474-x475)&x476));

	if (t98 != 3055LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x477 = -1;
	int64_t x478 = INT64_MIN;
	int16_t x479 = -1;
	volatile int16_t x480 = INT16_MAX;
	volatile int64_t t99 = -56LL;

	t99 = (x477|((x478-x479)&x480));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

