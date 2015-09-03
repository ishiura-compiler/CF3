#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = UINT8_MAX;
int8_t x13 = -1;
int8_t x16 = -1;
volatile uint32_t t4 = 14055U;
int8_t x51 = INT8_MAX;
volatile uint64_t x69 = 31791813850683LLU;
uint16_t x71 = UINT16_MAX;
uint16_t x73 = UINT16_MAX;
static volatile int16_t x75 = -2847;
static uint32_t x76 = 194687332U;
volatile uint64_t t12 = 17973LLU;
int16_t x88 = -1;
static volatile int32_t x93 = -1;
int8_t x101 = -29;
static volatile int16_t x111 = 112;
int32_t x118 = -1;
uint64_t x127 = 440982LLU;
volatile uint64_t t22 = 97541445595843340LLU;
int16_t x142 = INT16_MIN;
static int32_t t25 = 1;
static int64_t x146 = -1LL;
static uint64_t x155 = 194866193LLU;
int64_t x168 = INT64_MIN;
int16_t x169 = INT16_MIN;
volatile uint32_t t30 = 1534321422U;
int16_t x182 = -1;
static volatile uint64_t x183 = 71260743829208882LLU;
uint32_t x200 = 137988435U;
static int8_t x203 = INT8_MAX;
int16_t x205 = INT16_MAX;
uint32_t x206 = 18809U;
static uint64_t x228 = UINT64_MAX;
int64_t x238 = -1LL;
static int16_t x242 = -1;
static volatile int64_t t42 = -63318LL;
volatile uint8_t x265 = 126U;
int64_t x266 = INT64_MAX;
uint8_t x268 = 0U;
uint64_t x303 = UINT64_MAX;
static uint8_t x314 = 28U;
static int64_t t50 = -2158036LL;
uint16_t x318 = UINT16_MAX;
int16_t x331 = INT16_MIN;
int32_t x348 = INT32_MIN;
static int32_t t54 = -486705;
int32_t x351 = INT32_MIN;
uint32_t x359 = UINT32_MAX;
volatile int64_t t56 = 840167597307966LL;
static int32_t x372 = INT32_MAX;
int64_t x375 = INT64_MIN;
volatile uint64_t t60 = 102956234LLU;
int16_t x379 = INT16_MIN;
static int16_t x383 = 0;
uint32_t x386 = UINT32_MAX;
int8_t x390 = -1;
int16_t x392 = INT16_MIN;
uint16_t x394 = 67U;
int16_t x400 = -136;
uint8_t x407 = 0U;
int16_t x424 = -21;
int32_t x426 = INT32_MIN;
volatile uint32_t x427 = UINT32_MAX;
static uint16_t x428 = UINT16_MAX;
static uint64_t x431 = 1459244925LLU;
volatile int64_t x432 = INT64_MIN;
volatile int64_t x441 = 14976LL;
uint64_t x442 = 362047825461875LLU;
uint64_t x450 = UINT64_MAX;
static int16_t x455 = -7;
int16_t x456 = -1;
int8_t x457 = INT8_MAX;
int16_t x461 = INT16_MAX;
uint32_t x469 = 15422214U;
int32_t x470 = 0;
uint32_t x476 = 127U;
volatile uint64_t x494 = UINT64_MAX;
int16_t x496 = INT16_MAX;
int32_t x505 = -1;
volatile int8_t x511 = INT8_MAX;
uint64_t t86 = 4LLU;
int32_t x518 = 329;
volatile int8_t x530 = 0;
static int16_t x535 = 11;
int16_t x536 = INT16_MIN;
volatile int32_t x541 = -1;
int16_t x544 = INT16_MIN;
volatile int32_t x551 = INT32_MAX;
uint64_t t92 = 1976129527LLU;
static uint32_t x554 = UINT32_MAX;
volatile int64_t t93 = -6943LL;
int32_t x571 = -110807469;
static volatile uint16_t x582 = 2267U;


void f0(void) {
	static int64_t x2 = INT64_MIN;
	uint64_t x3 = 2127378077454LLU;
	static volatile int16_t x4 = -1;
	static uint64_t t0 = 7326764LLU;

	t0 = ((x1*(x2^x3))+x4);

	if (t0 != 9223914518264526577LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	int8_t x6 = -1;
	int64_t x7 = -1LL;
	int32_t x8 = INT32_MAX;
	int64_t t1 = -3307609LL;

	t1 = ((x5*(x6^x7))+x8);

	if (t1 != 2147483647LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x14 = -837665527035415398LL;
	static volatile int64_t x15 = INT64_MAX;
	static volatile int64_t t2 = 43697281LL;

	t2 = ((x13*(x14^x15))+x16);

	if (t2 != 8385706509819360410LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x21 = 5517U;
	uint16_t x22 = 0U;
	static int8_t x23 = -1;
	static int32_t x24 = INT32_MAX;
	int32_t t3 = -341;

	t3 = ((x21*(x22^x23))+x24);

	if (t3 != 2147478130) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x25 = 25U;
	static volatile uint32_t x26 = 15224U;
	static uint16_t x27 = 11U;
	static uint32_t x28 = 3667727U;

	t4 = ((x25*(x26^x27))+x28);

	if (t4 != 4048202U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x41 = INT64_MAX;
	uint64_t x42 = UINT64_MAX;
	uint32_t x43 = 9645U;
	uint64_t x44 = 4485517428451LLU;
	volatile uint64_t t5 = 341527214051286605LLU;

	t5 = ((x41*(x42^x43))+x44);

	if (t5 != 4485517438097LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint16_t x45 = 1U;
	volatile int16_t x46 = -1;
	int32_t x47 = 459835738;
	static volatile uint32_t x48 = 58U;
	volatile uint32_t t6 = 6U;

	t6 = ((x45*(x46^x47))+x48);

	if (t6 != 3835131615U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x49 = 54;
	volatile int16_t x50 = -115;
	uint64_t x52 = 51346119173488595LLU;
	uint64_t t7 = 33748186084LLU;

	t7 = ((x49*(x50^x51))+x52);

	if (t7 != 51346119173487839LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x53 = UINT64_MAX;
	volatile int64_t x54 = -1LL;
	uint64_t x55 = 122457882LLU;
	int32_t x56 = INT32_MIN;
	volatile uint64_t t8 = 6671062033954389881LLU;

	t8 = ((x53*(x54^x55))+x56);

	if (t8 != 18446744071684525851LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x57 = 44U;
	int32_t x58 = -1;
	static int32_t x59 = -1;
	uint16_t x60 = 10U;
	static int32_t t9 = 877;

	t9 = ((x57*(x58^x59))+x60);

	if (t9 != 10) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x61 = -1LL;
	uint32_t x62 = 1381U;
	static int8_t x63 = -8;
	uint32_t x64 = 113U;
	volatile int64_t t10 = -1181883033947918511LL;

	t10 = ((x61*(x62^x63))+x64);

	if (t10 != -4294965804LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x70 = 1U;
	uint64_t x72 = 116LLU;
	volatile uint64_t t11 = 1308332984289368LLU;

	t11 = ((x69*(x70^x71))+x72);

	if (t11 != 2083444728890659838LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x74 = 14734095714124LLU;

	t12 = ((x73*(x74^x75))+x76);

	if (t12 != 17481145111194779063LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x81 = INT64_MIN;
	int16_t x82 = INT16_MIN;
	uint64_t x83 = 1LLU;
	int64_t x84 = INT64_MIN;
	volatile uint64_t t13 = 3914LLU;

	t13 = ((x81*(x82^x83))+x84);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x85 = 1984111;
	uint32_t x86 = 817445U;
	volatile uint64_t x87 = UINT64_MAX;
	volatile uint64_t t14 = 63LLU;

	t14 = ((x85*(x86^x87))+x88);

	if (t14 != 18446742451805951109LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x94 = 1LL;
	static int32_t x95 = -1;
	int16_t x96 = 49;
	volatile int64_t t15 = -281LL;

	t15 = ((x93*(x94^x95))+x96);

	if (t15 != 51LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x102 = INT16_MIN;
	int8_t x103 = -11;
	static volatile int64_t x104 = INT64_MAX;
	int64_t t16 = 339448LL;

	t16 = ((x101*(x102^x103))+x104);

	if (t16 != 9223372036853825854LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x105 = -1;
	int64_t x106 = 348342145948LL;
	static volatile uint8_t x107 = 3U;
	uint32_t x108 = UINT32_MAX;
	int64_t t17 = -482022011LL;

	t17 = ((x105*(x106^x107))+x108);

	if (t17 != -344047178656LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x109 = INT8_MIN;
	static volatile uint8_t x110 = 64U;
	int64_t x112 = 7LL;
	int64_t t18 = -5LL;

	t18 = ((x109*(x110^x111))+x112);

	if (t18 != -6137LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x113 = UINT64_MAX;
	volatile uint32_t x114 = 1513594U;
	int16_t x115 = INT16_MIN;
	int64_t x116 = -1145078115LL;
	volatile uint64_t t19 = 12040566743048815LLU;

	t19 = ((x113*(x114^x115))+x116);

	if (t19 != 18446744068271040035LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x117 = 30084U;
	uint32_t x119 = 2879U;
	uint8_t x120 = 35U;
	uint32_t t20 = 13107U;

	t20 = ((x117*(x118^x119))+x120);

	if (t20 != 4208325411U) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x121 = INT16_MAX;
	int32_t x122 = INT32_MAX;
	uint32_t x123 = UINT32_MAX;
	static uint32_t x124 = 25555U;
	uint32_t t21 = 30233U;

	t21 = ((x121*(x122^x123))+x124);

	if (t21 != 2147509203U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x125 = 1U;
	uint32_t x126 = 5319250U;
	volatile int16_t x128 = -350;

	t22 = ((x125*(x126^x127))+x128);

	if (t22 != 5738342LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x129 = UINT64_MAX;
	static volatile uint32_t x130 = 262670U;
	int64_t x131 = -1416430798LL;
	int32_t x132 = -1;
	volatile uint64_t t23 = 1579045162619030861LLU;

	t23 = ((x129*(x130^x131))+x132);

	if (t23 != 1416169155LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x137 = -1;
	static uint32_t x138 = 6028U;
	volatile int32_t x139 = -68317;
	static int16_t x140 = 4219;
	volatile uint32_t t24 = 29U;

	t24 = ((x137*(x138^x139))+x140);

	if (t24 != 77260U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x141 = INT16_MIN;
	int16_t x143 = -1;
	static int8_t x144 = -1;

	t25 = ((x141*(x142^x143))+x144);

	if (t25 != -1073709057) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x145 = INT32_MAX;
	volatile int16_t x147 = INT16_MIN;
	int16_t x148 = 1166;
	int64_t t26 = -713828LL;

	t26 = ((x145*(x146^x147))+x148);

	if (t26 != 70366596662415LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x149 = INT16_MIN;
	int32_t x150 = 6572793;
	int64_t x151 = -1LL;
	int32_t x152 = INT32_MIN;
	volatile int64_t t27 = -1LL;

	t27 = ((x149*(x150^x151))+x152);

	if (t27 != 213229830144LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x153 = -24;
	int8_t x154 = INT8_MIN;
	volatile uint8_t x156 = 9U;
	volatile uint64_t t28 = 3LLU;

	t28 = ((x153*(x154^x155))+x156);

	if (t28 != 4676790897LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x165 = -1LL;
	volatile int8_t x166 = INT8_MIN;
	static uint8_t x167 = 124U;
	int64_t t29 = 31LL;

	t29 = ((x165*(x166^x167))+x168);

	if (t29 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x170 = 104909U;
	static volatile int32_t x171 = INT32_MIN;
	int32_t x172 = -1;

	t30 = ((x169*(x170^x171))+x172);

	if (t30 != 857309183U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x177 = -2;
	int8_t x178 = INT8_MAX;
	volatile int16_t x179 = INT16_MIN;
	int8_t x180 = -4;
	volatile int32_t t31 = -9813021;

	t31 = ((x177*(x178^x179))+x180);

	if (t31 != 65278) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x181 = INT16_MAX;
	int8_t x184 = INT8_MIN;
	uint64_t t32 = 63785802LLU;

	t32 = ((x181*(x182^x183))+x184);

	if (t32 != 7735704309425585843LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x197 = 8227544635064220414LLU;
	volatile uint16_t x198 = 2U;
	uint32_t x199 = UINT32_MAX;
	volatile uint64_t t33 = 242LLU;

	t33 = ((x197*(x198^x199))+x200);

	if (t33 != 13556439862381647961LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x201 = INT32_MAX;
	uint64_t x202 = 122872291787351LLU;
	uint64_t x204 = 386844982LLU;
	volatile uint64_t t34 = 82417425LLU;

	t34 = ((x201*(x202^x203))+x204);

	if (t34 != 4010052306702747406LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x207 = UINT64_MAX;
	volatile int32_t x208 = 0;
	volatile uint64_t t35 = 208107LLU;

	t35 = ((x205*(x206^x207))+x208);

	if (t35 != 18446744073093204346LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x213 = 5;
	static uint64_t x214 = 9544644619197LLU;
	int16_t x215 = -1;
	static volatile int16_t x216 = INT16_MAX;
	uint64_t t36 = 5607285680240237LLU;

	t36 = ((x213*(x214^x215))+x216);

	if (t36 != 18446696350486488393LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x221 = 5U;
	uint32_t x222 = UINT32_MAX;
	int8_t x223 = 15;
	static int64_t x224 = INT64_MIN;
	volatile int64_t t37 = -28121430721LL;

	t37 = ((x221*(x222^x223))+x224);

	if (t37 != -9223372032559808592LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x225 = INT8_MAX;
	int8_t x226 = 5;
	uint8_t x227 = 11U;
	volatile uint64_t t38 = 8329526696LLU;

	t38 = ((x225*(x226^x227))+x228);

	if (t38 != 1777LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x229 = 1021093LLU;
	int16_t x230 = -15294;
	static volatile uint64_t x231 = 167291720885864453LLU;
	volatile int64_t x232 = INT64_MIN;
	uint64_t t39 = 2385954940528LLU;

	t39 = ((x229*(x230^x231))+x232);

	if (t39 != 5668340065886844355LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x237 = 3U;
	static int8_t x239 = 1;
	int8_t x240 = INT8_MIN;
	volatile int64_t t40 = 15740LL;

	t40 = ((x237*(x238^x239))+x240);

	if (t40 != -134LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x241 = -1;
	static uint32_t x243 = 340170695U;
	int8_t x244 = INT8_MAX;
	static uint32_t t41 = 422255316U;

	t41 = ((x241*(x242^x243))+x244);

	if (t41 != 340170823U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x245 = -1;
	static volatile uint32_t x246 = 9369U;
	int32_t x247 = INT32_MAX;
	int64_t x248 = -26032756880LL;

	t42 = ((x245*(x246^x247))+x248);

	if (t42 != -23885263862LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x267 = INT64_MAX;
	volatile int64_t t43 = 8157974953269797LL;

	t43 = ((x265*(x266^x267))+x268);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x277 = 7U;
	static int32_t x278 = -2921;
	static uint8_t x279 = 1U;
	int16_t x280 = -6;
	volatile int32_t t44 = -1;

	t44 = ((x277*(x278^x279))+x280);

	if (t44 != -20460) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x281 = -1;
	volatile uint8_t x282 = 5U;
	int32_t x283 = INT32_MIN;
	static volatile uint8_t x284 = 4U;
	volatile int32_t t45 = INT32_MAX;

	t45 = ((x281*(x282^x283))+x284);

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x285 = UINT64_MAX;
	int64_t x286 = INT64_MIN;
	volatile int8_t x287 = -27;
	int16_t x288 = INT16_MIN;
	volatile uint64_t t46 = 1770098965435049547LLU;

	t46 = ((x285*(x286^x287))+x288);

	if (t46 != 9223372036854743067LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x297 = -21086;
	int8_t x298 = INT8_MAX;
	int16_t x299 = INT16_MIN;
	int8_t x300 = -1;
	volatile int32_t t47 = 862;

	t47 = ((x297*(x298^x299))+x300);

	if (t47 != 688268125) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x301 = UINT64_MAX;
	int16_t x302 = INT16_MIN;
	volatile uint32_t x304 = UINT32_MAX;
	uint64_t t48 = 74044LLU;

	t48 = ((x301*(x302^x303))+x304);

	if (t48 != 4294934528LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x305 = -5;
	static volatile int64_t x306 = 15LL;
	int8_t x307 = INT8_MAX;
	int8_t x308 = INT8_MAX;
	int64_t t49 = -68355258LL;

	t49 = ((x305*(x306^x307))+x308);

	if (t49 != -433LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x313 = -1;
	static volatile int64_t x315 = INT64_MIN;
	uint16_t x316 = 15U;

	t50 = ((x313*(x314^x315))+x316);

	if (t50 != 9223372036854775795LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x317 = -1;
	uint16_t x319 = 16058U;
	uint64_t x320 = UINT64_MAX;
	volatile uint64_t t51 = 69257267390780348LLU;

	t51 = ((x317*(x318^x319))+x320);

	if (t51 != 18446744073709502138LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x329 = 82U;
	int16_t x330 = -1;
	volatile uint8_t x332 = UINT8_MAX;
	int32_t t52 = -553955358;

	t52 = ((x329*(x330^x331))+x332);

	if (t52 != 2687149) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x341 = 250U;
	int16_t x342 = 0;
	int32_t x343 = 182170282;
	static int8_t x344 = -1;
	volatile uint32_t t53 = 50574876U;

	t53 = ((x341*(x342^x343))+x344);

	if (t53 != 2592897539U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x345 = 6U;
	static uint16_t x346 = 3U;
	uint8_t x347 = UINT8_MAX;

	t54 = ((x345*(x346^x347))+x348);

	if (t54 != -2147482136) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x349 = 1;
	int64_t x350 = INT64_MAX;
	uint16_t x352 = 81U;
	static volatile int64_t t55 = -71351975090099247LL;

	t55 = ((x349*(x350^x351))+x352);

	if (t55 != -9223372034707292080LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x357 = INT16_MAX;
	static volatile uint8_t x358 = 41U;
	int64_t x360 = INT64_MIN;

	t56 = ((x357*(x358^x359))+x360);

	if (t56 != -9223372032561184726LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x361 = INT64_MIN;
	int32_t x362 = INT32_MIN;
	int32_t x363 = INT32_MIN;
	uint64_t x364 = UINT64_MAX;
	uint64_t t57 = UINT64_MAX;

	t57 = ((x361*(x362^x363))+x364);

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x365 = 676943140U;
	volatile int32_t x366 = 1;
	volatile int64_t x367 = -1LL;
	int32_t x368 = -1;
	volatile int64_t t58 = 2049866653LL;

	t58 = ((x365*(x366^x367))+x368);

	if (t58 != -1353886281LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x369 = -1;
	static int64_t x370 = -64946996195685LL;
	int32_t x371 = INT32_MIN;
	int64_t t59 = 16510717609LL;

	t59 = ((x369*(x370^x371))+x372);

	if (t59 != -64945699737244LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x373 = 90916143LLU;
	int32_t x374 = INT32_MIN;
	int64_t x376 = -630LL;

	t60 = ((x373*(x374^x375))+x376);

	if (t60 != 9028131106423045514LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x377 = 58332178;
	uint32_t x378 = 8U;
	volatile int8_t x380 = -1;
	volatile uint32_t t61 = 179329U;

	t61 = ((x377*(x378^x379))+x380);

	if (t61 != 298295439U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x381 = UINT8_MAX;
	int64_t x382 = -20668237083407907LL;
	static uint32_t x384 = 705689463U;
	static int64_t t62 = 54401670442048LL;

	t62 = ((x381*(x382^x383))+x384);

	if (t62 != -5270400455563326822LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x385 = -2601;
	int8_t x387 = INT8_MIN;
	int32_t x388 = INT32_MAX;
	volatile uint32_t t63 = 706580U;

	t63 = ((x385*(x386^x387))+x388);

	if (t63 != 2147153320U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x389 = UINT8_MAX;
	uint64_t x391 = 27202862LLU;
	volatile uint64_t t64 = 730437612LLU;

	t64 = ((x389*(x390^x391))+x392);

	if (t64 != 18446744066772788783LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x393 = 32907365178416LLU;
	uint8_t x395 = 35U;
	uint8_t x396 = UINT8_MAX;
	volatile uint64_t t65 = 7049LLU;

	t65 = ((x393*(x394^x395))+x396);

	if (t65 != 3159107057128191LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x397 = -1LL;
	uint16_t x398 = UINT16_MAX;
	static int16_t x399 = INT16_MIN;
	volatile int64_t t66 = -59710LL;

	t66 = ((x397*(x398^x399))+x400);

	if (t66 != 32633LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x405 = 6U;
	static volatile uint32_t x406 = 1010064U;
	int32_t x408 = 1;
	uint32_t t67 = 3110U;

	t67 = ((x405*(x406^x407))+x408);

	if (t67 != 6060385U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x417 = UINT8_MAX;
	static uint16_t x418 = 227U;
	uint16_t x419 = 17060U;
	uint8_t x420 = 1U;
	static int32_t t68 = -3212;

	t68 = ((x417*(x418^x419))+x420);

	if (t68 != 4326586) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x421 = INT8_MIN;
	static int16_t x422 = INT16_MAX;
	volatile int16_t x423 = INT16_MAX;
	int32_t t69 = -31767059;

	t69 = ((x421*(x422^x423))+x424);

	if (t69 != -21) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x425 = INT16_MIN;
	uint32_t t70 = 989U;

	t70 = ((x425*(x426^x427))+x428);

	if (t70 != 98303U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x429 = INT64_MAX;
	static int64_t x430 = INT64_MIN;
	volatile uint64_t t71 = 14850289LLU;

	t71 = ((x429*(x430^x431))+x432);

	if (t71 != 9223372035395530883LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x437 = 60;
	uint8_t x438 = UINT8_MAX;
	int32_t x439 = 75;
	uint8_t x440 = UINT8_MAX;
	volatile int32_t t72 = 1411;

	t72 = ((x437*(x438^x439))+x440);

	if (t72 != 11055) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x443 = UINT16_MAX;
	int8_t x444 = 1;
	volatile uint64_t t73 = 1449LLU;

	t73 = ((x441*(x442^x443))+x444);

	if (t73 != 5422028234588978689LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x449 = INT64_MAX;
	static int32_t x451 = -567;
	int32_t x452 = -1;
	static volatile uint64_t t74 = 674741LLU;

	t74 = ((x449*(x450^x451))+x452);

	if (t74 != 18446744073709551049LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x453 = 3LL;
	volatile int8_t x454 = INT8_MIN;
	volatile int64_t t75 = 422LL;

	t75 = ((x453*(x454^x455))+x456);

	if (t75 != 362LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x458 = UINT64_MAX;
	volatile uint32_t x459 = 534U;
	volatile uint16_t x460 = 14002U;
	uint64_t t76 = 812643427935LLU;

	t76 = ((x457*(x458^x459))+x460);

	if (t76 != 18446744073709497673LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x462 = 64U;
	int16_t x463 = INT16_MIN;
	int8_t x464 = -4;
	int32_t t77 = -252104;

	t77 = ((x461*(x462^x463))+x464);

	if (t77 != -1071611972) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x471 = -9635;
	uint64_t x472 = UINT64_MAX;
	uint64_t t78 = 0LLU;

	t78 = ((x469*(x470^x471))+x472);

	if (t78 != 1730823469LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x473 = INT32_MAX;
	static int16_t x474 = -1;
	volatile uint64_t x475 = UINT64_MAX;
	volatile uint64_t t79 = 1037966LLU;

	t79 = ((x473*(x474^x475))+x476);

	if (t79 != 127LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x477 = UINT16_MAX;
	volatile int8_t x478 = -2;
	static uint8_t x479 = 25U;
	static int8_t x480 = INT8_MAX;
	int32_t t80 = 1689252;

	t80 = ((x477*(x478^x479))+x480);

	if (t80 != -1638248) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x481 = -1;
	static uint32_t x482 = 15786715U;
	int8_t x483 = INT8_MIN;
	int32_t x484 = INT32_MAX;
	uint32_t t81 = 11592237U;

	t81 = ((x481*(x482^x483))+x484);

	if (t81 != 2163270308U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x485 = UINT64_MAX;
	int64_t x486 = INT64_MIN;
	int8_t x487 = INT8_MIN;
	uint32_t x488 = UINT32_MAX;
	uint64_t t82 = 3128LLU;

	t82 = ((x485*(x486^x487))+x488);

	if (t82 != 9223372041149743231LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x493 = -5;
	int32_t x495 = INT32_MIN;
	volatile uint64_t t83 = 1066515589637LLU;

	t83 = ((x493*(x494^x495))+x496);

	if (t83 != 18446744062972166148LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x497 = 323U;
	volatile int32_t x498 = 523410966;
	uint64_t x499 = 64282LLU;
	int32_t x500 = INT32_MIN;
	uint64_t t84 = 3608LLU;

	t84 = ((x497*(x498^x499))+x500);

	if (t84 != 166909541924LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x506 = 8036386LL;
	int8_t x507 = 1;
	static int32_t x508 = -1;
	int64_t t85 = 82257725LL;

	t85 = ((x505*(x506^x507))+x508);

	if (t85 != -8036388LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x509 = INT16_MAX;
	int8_t x510 = -10;
	uint64_t x512 = 5510934LLU;

	t86 = ((x509*(x510^x511))+x512);

	if (t86 != 1611661LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x517 = INT16_MAX;
	uint8_t x519 = 0U;
	static int64_t x520 = 1849162599437145LL;
	volatile int64_t t87 = 30758LL;

	t87 = ((x517*(x518^x519))+x520);

	if (t87 != 1849162610217488LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x521 = -27360131;
	uint32_t x522 = 206089444U;
	int8_t x523 = -21;
	uint16_t x524 = 15247U;
	uint32_t t88 = 3442U;

	t88 = ((x521*(x522^x523))+x524);

	if (t88 != 3906569698U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x529 = 320618LLU;
	uint16_t x531 = UINT16_MAX;
	volatile int32_t x532 = -1;
	static uint64_t t89 = 27LLU;

	t89 = ((x529*(x530^x531))+x532);

	if (t89 != 21011700629LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x533 = INT8_MIN;
	int16_t x534 = INT16_MIN;
	int32_t t90 = 3466;

	t90 = ((x533*(x534^x535))+x536);

	if (t90 != 4160128) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x542 = INT8_MIN;
	int8_t x543 = 0;
	volatile int32_t t91 = 0;

	t91 = ((x541*(x542^x543))+x544);

	if (t91 != -32640) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x549 = 0;
	uint64_t x550 = 1754279612157812738LLU;
	int16_t x552 = INT16_MIN;

	t92 = ((x549*(x550^x551))+x552);

	if (t92 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x553 = -1LL;
	int32_t x555 = INT32_MAX;
	int32_t x556 = INT32_MAX;

	t93 = ((x553*(x554^x555))+x556);

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x557 = INT16_MAX;
	volatile int8_t x558 = -1;
	volatile uint8_t x559 = 0U;
	uint8_t x560 = 14U;
	int32_t t94 = 6;

	t94 = ((x557*(x558^x559))+x560);

	if (t94 != -32753) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x565 = UINT32_MAX;
	int16_t x566 = INT16_MAX;
	static volatile uint32_t x567 = 2386U;
	int8_t x568 = INT8_MAX;
	static volatile uint32_t t95 = 4705662U;

	t95 = ((x565*(x566^x567))+x568);

	if (t95 != 4294937042U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x569 = 828360U;
	volatile int32_t x570 = INT32_MAX;
	int64_t x572 = INT64_MIN;
	int64_t t96 = 751782212482713LL;

	t96 = ((x569*(x570^x571))+x572);

	if (t96 != -9223372036126666144LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x573 = -1;
	uint8_t x574 = 92U;
	int8_t x575 = -1;
	volatile uint8_t x576 = 4U;
	int32_t t97 = -369173;

	t97 = ((x573*(x574^x575))+x576);

	if (t97 != 97) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x577 = 9440548707LLU;
	uint32_t x578 = UINT32_MAX;
	int64_t x579 = -1LL;
	int32_t x580 = INT32_MIN;
	static uint64_t t98 = 2353177LLU;

	t98 = ((x577*(x578^x579))+x580);

	if (t98 != 14793384266121084928LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x581 = 57588317LLU;
	int64_t x583 = INT64_MIN;
	static int64_t x584 = INT64_MIN;
	uint64_t t99 = 1LLU;

	t99 = ((x581*(x582^x583))+x584);

	if (t99 != 130552714639LLU) { NG(); } else { ; }
	
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

