#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x1 = UINT64_MAX;
int16_t x3 = 202;
volatile int32_t x16 = INT32_MAX;
int64_t x24 = -481701924157741LL;
uint8_t x32 = UINT8_MAX;
int8_t x43 = INT8_MIN;
int16_t x57 = 1;
static volatile int32_t t7 = 3108;
static volatile int16_t x66 = -30;
static int8_t x67 = INT8_MAX;
int8_t x84 = -1;
int32_t t10 = 36231349;
int16_t x87 = 8;
static volatile int32_t t11 = 24;
int32_t x93 = 0;
static int64_t x99 = INT64_MIN;
static volatile int32_t t14 = -255;
volatile uint16_t x112 = 7U;
volatile int32_t t17 = 13514;
int32_t t18 = -1154;
volatile int64_t x162 = -948325833LL;
static int16_t x164 = 27;
volatile uint32_t x170 = 62569U;
static int32_t t21 = 440740;
static uint32_t x189 = 2664802U;
volatile int16_t x190 = -1;
uint8_t x191 = UINT8_MAX;
int8_t x202 = -1;
uint64_t x254 = 142033LLU;
int64_t x255 = INT64_MAX;
static volatile uint64_t t31 = 310575177LLU;
int32_t x273 = INT32_MAX;
uint8_t x274 = 0U;
uint16_t x284 = UINT16_MAX;
volatile int32_t x294 = 8895;
volatile int64_t t37 = 0LL;
uint16_t x301 = 1617U;
uint8_t x302 = 1U;
uint64_t x304 = UINT64_MAX;
uint16_t x307 = 15096U;
uint8_t x317 = 13U;
int8_t x337 = 1;
int8_t x340 = 7;
volatile int32_t t43 = -1;
int64_t x342 = 16785LL;
uint16_t x349 = UINT16_MAX;
uint8_t x360 = 1U;
static volatile int32_t t48 = -2092742;
int16_t x369 = 171;
int64_t x370 = -1LL;
volatile int32_t t54 = 278304833;
int16_t x424 = INT16_MIN;
uint8_t x449 = UINT8_MAX;
int64_t x453 = INT64_MAX;
volatile int64_t t59 = -2069521446LL;
int32_t t60 = 0;
int16_t x461 = INT16_MAX;
static uint16_t x464 = 60U;
uint32_t t64 = 1U;
static int16_t x490 = 45;
uint8_t x495 = UINT8_MAX;
int32_t x498 = -51;
static int16_t x500 = 9207;
uint8_t x505 = 94U;
int64_t x507 = -496864119367LL;
static volatile int64_t t69 = -54963LL;
int8_t x514 = -1;
int64_t x524 = -4913LL;
uint8_t x531 = 4U;
uint32_t x541 = 2591992U;
static uint32_t t75 = 28U;
int32_t x551 = -1;
static volatile int64_t t77 = 24991644LL;
uint16_t x572 = UINT16_MAX;
uint32_t t80 = 2268411U;
uint16_t x595 = 45U;
int64_t x596 = -22LL;
uint8_t x602 = 5U;
int64_t x603 = INT64_MAX;
uint16_t x634 = 1U;
static int32_t t85 = 1;
uint8_t x650 = UINT8_MAX;
int16_t x652 = 51;
volatile uint8_t x662 = 13U;
int8_t x671 = INT8_MAX;
uint8_t x681 = 2U;
int32_t t93 = 1317;
static uint8_t x691 = 56U;
static uint64_t x694 = 9882LLU;
volatile uint16_t x696 = UINT16_MAX;
int16_t x720 = -1;
static int8_t x721 = INT8_MAX;
int16_t x722 = INT16_MIN;
uint64_t x733 = 11901113LLU;
int32_t x738 = INT32_MIN;
volatile int8_t x739 = INT8_MIN;


void f0(void) {
	volatile int8_t x2 = INT8_MIN;
	volatile int32_t x4 = INT32_MIN;
	volatile uint64_t t0 = 2882976843859608LLU;

	t0 = ((x1>>(x2<=x3))+x4);

	if (t0 != 9223372034707292159LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	int8_t x6 = -1;
	static int64_t x7 = INT64_MIN;
	static uint16_t x8 = UINT16_MAX;
	uint64_t t1 = 7167729975LLU;

	t1 = ((x5>>(x6<=x7))+x8);

	if (t1 != 65534LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x13 = INT64_MAX;
	int32_t x14 = INT32_MIN;
	static int8_t x15 = INT8_MIN;
	volatile int64_t t2 = -957516163866LL;

	t2 = ((x13>>(x14<=x15))+x16);

	if (t2 != 4611686020574871550LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x21 = INT32_MAX;
	static uint32_t x22 = 1257868U;
	int16_t x23 = INT16_MIN;
	volatile int64_t t3 = 2066065392360695749LL;

	t3 = ((x21>>(x22<=x23))+x24);

	if (t3 != -481700850415918LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x29 = 1261U;
	volatile int16_t x30 = INT16_MAX;
	volatile uint64_t x31 = 85LLU;
	volatile uint32_t t4 = 247158856U;

	t4 = ((x29>>(x30<=x31))+x32);

	if (t4 != 1516U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x41 = INT16_MAX;
	volatile uint64_t x42 = UINT64_MAX;
	static int16_t x44 = INT16_MIN;
	volatile int32_t t5 = -1392;

	t5 = ((x41>>(x42<=x43))+x44);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x53 = 14813U;
	volatile int64_t x54 = INT64_MAX;
	int32_t x55 = -98;
	uint32_t x56 = 3876541U;
	uint32_t t6 = 770U;

	t6 = ((x53>>(x54<=x55))+x56);

	if (t6 != 3891354U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x58 = 0U;
	uint32_t x59 = 1426U;
	uint8_t x60 = UINT8_MAX;

	t7 = ((x57>>(x58<=x59))+x60);

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x61 = 0;
	static uint64_t x62 = 2539698LLU;
	volatile int16_t x63 = INT16_MIN;
	uint16_t x64 = 7U;
	static int32_t t8 = 8280751;

	t8 = ((x61>>(x62<=x63))+x64);

	if (t8 != 7) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x65 = 1U;
	int64_t x68 = -1LL;
	int64_t t9 = -871LL;

	t9 = ((x65>>(x66<=x67))+x68);

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x81 = 1;
	static uint64_t x82 = 33800238LLU;
	uint16_t x83 = 15U;

	t10 = ((x81>>(x82<=x83))+x84);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x85 = INT32_MAX;
	volatile int32_t x86 = 56753746;
	int32_t x88 = -1;

	t11 = ((x85>>(x86<=x87))+x88);

	if (t11 != 2147483646) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x94 = -43;
	int8_t x95 = -4;
	int16_t x96 = INT16_MIN;
	static int32_t t12 = 169567342;

	t12 = ((x93>>(x94<=x95))+x96);

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x97 = 10U;
	uint16_t x98 = UINT16_MAX;
	static int8_t x100 = INT8_MIN;
	int32_t t13 = 21527422;

	t13 = ((x97>>(x98<=x99))+x100);

	if (t13 != -118) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x105 = 2;
	int32_t x106 = -1;
	static int64_t x107 = INT64_MIN;
	int16_t x108 = INT16_MIN;

	t14 = ((x105>>(x106<=x107))+x108);

	if (t14 != -32766) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x109 = 1684230368711455LL;
	uint16_t x110 = UINT16_MAX;
	int16_t x111 = INT16_MIN;
	volatile int64_t t15 = 237753391529LL;

	t15 = ((x109>>(x110<=x111))+x112);

	if (t15 != 1684230368711462LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x117 = INT8_MAX;
	uint16_t x118 = UINT16_MAX;
	volatile int64_t x119 = INT64_MAX;
	uint16_t x120 = 11U;
	volatile int32_t t16 = -1243;

	t16 = ((x117>>(x118<=x119))+x120);

	if (t16 != 74) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x133 = UINT16_MAX;
	static int32_t x134 = -2155040;
	int8_t x135 = INT8_MAX;
	static volatile int32_t x136 = 7;

	t17 = ((x133>>(x134<=x135))+x136);

	if (t17 != 32774) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x153 = INT32_MAX;
	int8_t x154 = -23;
	static int32_t x155 = INT32_MIN;
	static int8_t x156 = INT8_MIN;

	t18 = ((x153>>(x154<=x155))+x156);

	if (t18 != 2147483519) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x161 = 1U;
	volatile int64_t x163 = -1LL;
	static uint32_t t19 = 0U;

	t19 = ((x161>>(x162<=x163))+x164);

	if (t19 != 27U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x165 = UINT16_MAX;
	int8_t x166 = -4;
	volatile int64_t x167 = -18565LL;
	int8_t x168 = -1;
	static int32_t t20 = -16242684;

	t20 = ((x165>>(x166<=x167))+x168);

	if (t20 != 65534) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x169 = 11U;
	int8_t x171 = INT8_MIN;
	int32_t x172 = 1959;

	t21 = ((x169>>(x170<=x171))+x172);

	if (t21 != 1964) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x177 = 20810LLU;
	int8_t x178 = 1;
	int16_t x179 = INT16_MIN;
	uint32_t x180 = UINT32_MAX;
	volatile uint64_t t22 = 277034317610620LLU;

	t22 = ((x177>>(x178<=x179))+x180);

	if (t22 != 4294988105LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x192 = UINT64_MAX;
	volatile uint64_t t23 = 268664885827424128LLU;

	t23 = ((x189>>(x190<=x191))+x192);

	if (t23 != 1332400LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x193 = 1LL;
	int8_t x194 = INT8_MIN;
	int64_t x195 = -11LL;
	static int8_t x196 = 0;
	static int64_t t24 = 32282737806LL;

	t24 = ((x193>>(x194<=x195))+x196);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x197 = UINT16_MAX;
	int32_t x198 = -1;
	uint16_t x199 = 2U;
	volatile int8_t x200 = -1;
	volatile int32_t t25 = 0;

	t25 = ((x197>>(x198<=x199))+x200);

	if (t25 != 32766) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x201 = INT32_MAX;
	volatile int64_t x203 = -1LL;
	static uint32_t x204 = 410710U;
	uint32_t t26 = 119652906U;

	t26 = ((x201>>(x202<=x203))+x204);

	if (t26 != 1074152533U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x205 = 14116U;
	int32_t x206 = INT32_MIN;
	int8_t x207 = -1;
	int16_t x208 = INT16_MIN;
	int32_t t27 = 14147373;

	t27 = ((x205>>(x206<=x207))+x208);

	if (t27 != -25710) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x233 = UINT16_MAX;
	int16_t x234 = -1;
	int32_t x235 = -1;
	static int32_t x236 = -1;
	int32_t t28 = 186;

	t28 = ((x233>>(x234<=x235))+x236);

	if (t28 != 32766) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x241 = 836U;
	uint64_t x242 = 18LLU;
	int64_t x243 = INT64_MIN;
	int8_t x244 = 59;
	int32_t t29 = 318;

	t29 = ((x241>>(x242<=x243))+x244);

	if (t29 != 477) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x249 = 411622U;
	int16_t x250 = INT16_MIN;
	static int16_t x251 = 1;
	int32_t x252 = INT32_MAX;
	volatile uint32_t t30 = 17U;

	t30 = ((x249>>(x250<=x251))+x252);

	if (t30 != 2147689458U) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x253 = 3382U;
	volatile uint64_t x256 = UINT64_MAX;

	t31 = ((x253>>(x254<=x255))+x256);

	if (t31 != 1690LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x261 = INT64_MAX;
	int8_t x262 = -1;
	static int32_t x263 = 13506;
	volatile int8_t x264 = INT8_MIN;
	static volatile int64_t t32 = -850LL;

	t32 = ((x261>>(x262<=x263))+x264);

	if (t32 != 4611686018427387775LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x265 = 31245801679LLU;
	static int16_t x266 = INT16_MIN;
	volatile int16_t x267 = INT16_MIN;
	static int64_t x268 = INT64_MIN;
	volatile uint64_t t33 = 20750512LLU;

	t33 = ((x265>>(x266<=x267))+x268);

	if (t33 != 9223372052477676647LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x275 = UINT8_MAX;
	uint16_t x276 = UINT16_MAX;
	int32_t t34 = 1427;

	t34 = ((x273>>(x274<=x275))+x276);

	if (t34 != 1073807358) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x281 = INT8_MAX;
	uint64_t x282 = UINT64_MAX;
	uint64_t x283 = 54677522456887368LLU;
	volatile int32_t t35 = 0;

	t35 = ((x281>>(x282<=x283))+x284);

	if (t35 != 65662) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x285 = UINT64_MAX;
	static int16_t x286 = INT16_MIN;
	int32_t x287 = -130985;
	int32_t x288 = -101;
	static uint64_t t36 = 3650778367638LLU;

	t36 = ((x285>>(x286<=x287))+x288);

	if (t36 != 18446744073709551514LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x293 = 447993U;
	int8_t x295 = INT8_MIN;
	int64_t x296 = 0LL;

	t37 = ((x293>>(x294<=x295))+x296);

	if (t37 != 447993LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x303 = UINT16_MAX;
	static uint64_t t38 = 33459447900347LLU;

	t38 = ((x301>>(x302<=x303))+x304);

	if (t38 != 807LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x305 = 1U;
	int64_t x306 = -108LL;
	int32_t x308 = -1;
	int32_t t39 = -684;

	t39 = ((x305>>(x306<=x307))+x308);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x318 = -6065LL;
	int64_t x319 = -1LL;
	static uint32_t x320 = 1176720151U;
	uint32_t t40 = 1412U;

	t40 = ((x317>>(x318<=x319))+x320);

	if (t40 != 1176720157U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x321 = 60LL;
	uint16_t x322 = 9353U;
	int32_t x323 = INT32_MAX;
	volatile uint64_t x324 = 25LLU;
	uint64_t t41 = 7LLU;

	t41 = ((x321>>(x322<=x323))+x324);

	if (t41 != 55LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x325 = 7960369344164744027LLU;
	uint64_t x326 = 1923671029LLU;
	uint32_t x327 = 3060U;
	int32_t x328 = -16103;
	static volatile uint64_t t42 = 886876LLU;

	t42 = ((x325>>(x326<=x327))+x328);

	if (t42 != 7960369344164727924LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x338 = -1LL;
	volatile int64_t x339 = INT64_MIN;

	t43 = ((x337>>(x338<=x339))+x340);

	if (t43 != 8) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x341 = 4;
	volatile int32_t x343 = INT32_MIN;
	static uint8_t x344 = 3U;
	int32_t t44 = 32168861;

	t44 = ((x341>>(x342<=x343))+x344);

	if (t44 != 7) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x350 = UINT16_MAX;
	int8_t x351 = 1;
	volatile uint8_t x352 = UINT8_MAX;
	volatile int32_t t45 = 1;

	t45 = ((x349>>(x350<=x351))+x352);

	if (t45 != 65790) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x353 = 53U;
	uint16_t x354 = 4U;
	int8_t x355 = INT8_MAX;
	volatile int8_t x356 = INT8_MIN;
	int32_t t46 = 1;

	t46 = ((x353>>(x354<=x355))+x356);

	if (t46 != -102) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x357 = 116U;
	int64_t x358 = INT64_MAX;
	volatile uint32_t x359 = 9041U;
	int32_t t47 = 3;

	t47 = ((x357>>(x358<=x359))+x360);

	if (t47 != 117) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x361 = INT8_MAX;
	uint8_t x362 = UINT8_MAX;
	uint32_t x363 = 396745U;
	uint8_t x364 = 1U;

	t48 = ((x361>>(x362<=x363))+x364);

	if (t48 != 64) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x371 = INT32_MAX;
	static volatile int16_t x372 = -1;
	int32_t t49 = 1819649;

	t49 = ((x369>>(x370<=x371))+x372);

	if (t49 != 84) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x389 = 519262;
	int8_t x390 = INT8_MIN;
	static volatile int32_t x391 = 3;
	uint8_t x392 = 5U;
	int32_t t50 = 5;

	t50 = ((x389>>(x390<=x391))+x392);

	if (t50 != 259636) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x393 = 23;
	int64_t x394 = -9543LL;
	uint32_t x395 = UINT32_MAX;
	int64_t x396 = 20187976103183LL;
	volatile int64_t t51 = 5270967LL;

	t51 = ((x393>>(x394<=x395))+x396);

	if (t51 != 20187976103194LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x401 = UINT8_MAX;
	int16_t x402 = -1;
	int64_t x403 = -1LL;
	int32_t x404 = INT32_MIN;
	int32_t t52 = 8077;

	t52 = ((x401>>(x402<=x403))+x404);

	if (t52 != -2147483521) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x405 = INT64_MAX;
	uint8_t x406 = 31U;
	int16_t x407 = 415;
	volatile int16_t x408 = INT16_MIN;
	int64_t t53 = 12987LL;

	t53 = ((x405>>(x406<=x407))+x408);

	if (t53 != 4611686018427355135LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x409 = INT16_MAX;
	int8_t x410 = INT8_MIN;
	int64_t x411 = INT64_MIN;
	int8_t x412 = INT8_MIN;

	t54 = ((x409>>(x410<=x411))+x412);

	if (t54 != 32639) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x421 = INT8_MAX;
	int64_t x422 = INT64_MIN;
	volatile uint16_t x423 = 1056U;
	volatile int32_t t55 = 5;

	t55 = ((x421>>(x422<=x423))+x424);

	if (t55 != -32705) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x433 = 457486;
	int16_t x434 = -1;
	int64_t x435 = -1LL;
	int32_t x436 = -3062;
	static int32_t t56 = -143836;

	t56 = ((x433>>(x434<=x435))+x436);

	if (t56 != 225681) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x441 = 31U;
	uint8_t x442 = UINT8_MAX;
	volatile int32_t x443 = -1;
	int16_t x444 = 182;
	volatile int32_t t57 = -29308462;

	t57 = ((x441>>(x442<=x443))+x444);

	if (t57 != 213) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x450 = UINT64_MAX;
	int16_t x451 = INT16_MIN;
	int32_t x452 = 253125037;
	static volatile int32_t t58 = 13251385;

	t58 = ((x449>>(x450<=x451))+x452);

	if (t58 != 253125292) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x454 = -1LL;
	uint64_t x455 = 659357145054828213LLU;
	int16_t x456 = INT16_MIN;

	t59 = ((x453>>(x454<=x455))+x456);

	if (t59 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x457 = INT8_MAX;
	int64_t x458 = -1633635690085135433LL;
	int32_t x459 = INT32_MIN;
	uint8_t x460 = 31U;

	t60 = ((x457>>(x458<=x459))+x460);

	if (t60 != 94) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x462 = 1;
	int32_t x463 = 463515987;
	static volatile int32_t t61 = -771;

	t61 = ((x461>>(x462<=x463))+x464);

	if (t61 != 16443) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x465 = 27722300854LLU;
	static int32_t x466 = -135282496;
	static uint64_t x467 = 3164062LLU;
	volatile int64_t x468 = 296783033873485LL;
	static uint64_t t62 = 698451999783317767LLU;

	t62 = ((x465>>(x466<=x467))+x468);

	if (t62 != 296810756174339LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x473 = 30490173U;
	volatile int64_t x474 = -99LL;
	int32_t x475 = 29296;
	static int32_t x476 = -56131;
	uint32_t t63 = 2U;

	t63 = ((x473>>(x474<=x475))+x476);

	if (t63 != 15188955U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x477 = 27U;
	uint32_t x478 = 8942U;
	static uint16_t x479 = 7U;
	static volatile int8_t x480 = INT8_MIN;

	t64 = ((x477>>(x478<=x479))+x480);

	if (t64 != 4294967195U) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x489 = 2;
	static uint32_t x491 = 117211U;
	uint64_t x492 = 27095LLU;
	static uint64_t t65 = 15878572198455351LLU;

	t65 = ((x489>>(x490<=x491))+x492);

	if (t65 != 27096LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x493 = INT64_MAX;
	uint64_t x494 = 33149699LLU;
	int16_t x496 = -24;
	volatile int64_t t66 = 1268434418390LL;

	t66 = ((x493>>(x494<=x495))+x496);

	if (t66 != 9223372036854775783LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x497 = INT16_MAX;
	volatile int16_t x499 = -1;
	volatile int32_t t67 = 30255525;

	t67 = ((x497>>(x498<=x499))+x500);

	if (t67 != 25590) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x506 = 107U;
	int8_t x508 = -6;
	volatile int32_t t68 = 7328101;

	t68 = ((x505>>(x506<=x507))+x508);

	if (t68 != 88) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x509 = INT64_MAX;
	uint16_t x510 = UINT16_MAX;
	int16_t x511 = -1;
	int16_t x512 = INT16_MIN;

	t69 = ((x509>>(x510<=x511))+x512);

	if (t69 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x513 = INT64_MAX;
	uint8_t x515 = UINT8_MAX;
	static int32_t x516 = -1;
	volatile int64_t t70 = -3724495601088462LL;

	t70 = ((x513>>(x514<=x515))+x516);

	if (t70 != 4611686018427387902LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x521 = 781U;
	static int16_t x522 = -1;
	uint64_t x523 = UINT64_MAX;
	int64_t t71 = -1093236158980444LL;

	t71 = ((x521>>(x522<=x523))+x524);

	if (t71 != -4523LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x529 = 0U;
	volatile int32_t x530 = INT32_MAX;
	volatile int8_t x532 = INT8_MIN;
	uint32_t t72 = 81U;

	t72 = ((x529>>(x530<=x531))+x532);

	if (t72 != 4294967168U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x533 = 3U;
	int8_t x534 = INT8_MAX;
	uint64_t x535 = 2845LLU;
	uint64_t x536 = UINT64_MAX;
	volatile uint64_t t73 = 241161399161LLU;

	t73 = ((x533>>(x534<=x535))+x536);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x537 = 0U;
	int64_t x538 = 860147LL;
	volatile int64_t x539 = -257526256136735544LL;
	uint32_t x540 = 9389626U;
	static volatile uint32_t t74 = 3U;

	t74 = ((x537>>(x538<=x539))+x540);

	if (t74 != 9389626U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x542 = 353;
	static int32_t x543 = INT32_MAX;
	static uint32_t x544 = 1U;

	t75 = ((x541>>(x542<=x543))+x544);

	if (t75 != 1295997U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x545 = 7637;
	int16_t x546 = INT16_MAX;
	volatile uint8_t x547 = 1U;
	static int16_t x548 = 16;
	static int32_t t76 = 1;

	t76 = ((x545>>(x546<=x547))+x548);

	if (t76 != 7653) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x549 = 59420LL;
	volatile uint64_t x550 = 336854626285718332LLU;
	uint8_t x552 = 5U;

	t77 = ((x549>>(x550<=x551))+x552);

	if (t77 != 29715LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x553 = 3128521248638288LLU;
	uint64_t x554 = 32108267097153LLU;
	volatile int64_t x555 = INT64_MIN;
	int8_t x556 = 1;
	static volatile uint64_t t78 = 56514964427LLU;

	t78 = ((x553>>(x554<=x555))+x556);

	if (t78 != 1564260624319145LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x569 = 367LLU;
	int16_t x570 = INT16_MAX;
	int16_t x571 = -132;
	volatile uint64_t t79 = 1011338870821758842LLU;

	t79 = ((x569>>(x570<=x571))+x572);

	if (t79 != 65902LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint8_t x577 = 49U;
	uint32_t x578 = 86794U;
	uint64_t x579 = UINT64_MAX;
	static uint32_t x580 = 15666U;

	t80 = ((x577>>(x578<=x579))+x580);

	if (t80 != 15690U) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x593 = 1;
	int8_t x594 = 1;
	static volatile int64_t t81 = -100832383174608163LL;

	t81 = ((x593>>(x594<=x595))+x596);

	if (t81 != -22LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x597 = 47;
	uint16_t x598 = 55U;
	int32_t x599 = INT32_MIN;
	static int16_t x600 = INT16_MIN;
	int32_t t82 = 2;

	t82 = ((x597>>(x598<=x599))+x600);

	if (t82 != -32721) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x601 = UINT64_MAX;
	int64_t x604 = INT64_MIN;
	volatile uint64_t t83 = UINT64_MAX;

	t83 = ((x601>>(x602<=x603))+x604);

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x625 = 5;
	int32_t x626 = -1;
	volatile uint8_t x627 = 5U;
	volatile uint8_t x628 = UINT8_MAX;
	volatile int32_t t84 = -149905163;

	t84 = ((x625>>(x626<=x627))+x628);

	if (t84 != 257) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x633 = UINT8_MAX;
	int16_t x635 = INT16_MIN;
	uint8_t x636 = UINT8_MAX;

	t85 = ((x633>>(x634<=x635))+x636);

	if (t85 != 510) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x641 = UINT8_MAX;
	int32_t x642 = 1346697;
	uint16_t x643 = UINT16_MAX;
	static int64_t x644 = 199999080760078LL;
	volatile int64_t t86 = -51304074544423LL;

	t86 = ((x641>>(x642<=x643))+x644);

	if (t86 != 199999080760333LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x645 = UINT16_MAX;
	int32_t x646 = INT32_MAX;
	int64_t x647 = INT64_MIN;
	int64_t x648 = 1LL;
	volatile int64_t t87 = 3LL;

	t87 = ((x645>>(x646<=x647))+x648);

	if (t87 != 65536LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x649 = 19;
	uint32_t x651 = UINT32_MAX;
	int32_t t88 = -4034;

	t88 = ((x649>>(x650<=x651))+x652);

	if (t88 != 60) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint16_t x653 = 716U;
	int64_t x654 = -14982146LL;
	int64_t x655 = -75269612592058833LL;
	int16_t x656 = INT16_MIN;
	volatile int32_t t89 = 3241;

	t89 = ((x653>>(x654<=x655))+x656);

	if (t89 != -32052) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x657 = INT8_MAX;
	int16_t x658 = 62;
	int32_t x659 = -8598677;
	int64_t x660 = INT64_MIN;
	volatile int64_t t90 = -10367134LL;

	t90 = ((x657>>(x658<=x659))+x660);

	if (t90 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x661 = INT8_MAX;
	int16_t x663 = INT16_MAX;
	int32_t x664 = -1;
	int32_t t91 = 3;

	t91 = ((x661>>(x662<=x663))+x664);

	if (t91 != 62) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x669 = 21914;
	int64_t x670 = INT64_MIN;
	uint16_t x672 = 4U;
	volatile int32_t t92 = 16439;

	t92 = ((x669>>(x670<=x671))+x672);

	if (t92 != 10961) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x682 = INT64_MIN;
	volatile int32_t x683 = -1;
	uint16_t x684 = 5626U;

	t93 = ((x681>>(x682<=x683))+x684);

	if (t93 != 5627) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x689 = UINT64_MAX;
	volatile uint64_t x690 = 1LLU;
	static int64_t x692 = INT64_MIN;
	uint64_t t94 = UINT64_MAX;

	t94 = ((x689>>(x690<=x691))+x692);

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x693 = 0U;
	uint32_t x695 = UINT32_MAX;
	volatile int32_t t95 = -504;

	t95 = ((x693>>(x694<=x695))+x696);

	if (t95 != 65535) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x717 = 9U;
	uint8_t x718 = 0U;
	int32_t x719 = -1;
	static volatile int32_t t96 = 618983;

	t96 = ((x717>>(x718<=x719))+x720);

	if (t96 != 8) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x723 = 19;
	uint16_t x724 = 82U;
	int32_t t97 = -1;

	t97 = ((x721>>(x722<=x723))+x724);

	if (t97 != 145) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x734 = 6U;
	uint8_t x735 = UINT8_MAX;
	int8_t x736 = INT8_MIN;
	volatile uint64_t t98 = 1LLU;

	t98 = ((x733>>(x734<=x735))+x736);

	if (t98 != 5950428LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x737 = 1U;
	volatile uint32_t x740 = 485U;
	volatile uint32_t t99 = 13739225U;

	t99 = ((x737>>(x738<=x739))+x740);

	if (t99 != 485U) { NG(); } else { ; }
	
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

