#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x11 = INT8_MAX;
int16_t x12 = INT16_MIN;
uint16_t x25 = 508U;
int64_t x49 = INT64_MAX;
int32_t t7 = INT32_MAX;
int32_t x72 = -16;
static volatile int16_t x77 = 3;
static int64_t x80 = -1LL;
volatile int64_t t11 = INT64_MAX;
uint32_t t12 = 5043U;
int8_t x115 = INT8_MAX;
int8_t x123 = INT8_MAX;
uint64_t x124 = 760691191762052405LLU;
uint16_t x151 = 311U;
volatile uint32_t x152 = 26U;
volatile int64_t x155 = -1LL;
uint64_t t17 = 14LLU;
volatile uint16_t x161 = 1U;
static int32_t x172 = 27;
int16_t x183 = 23;
int8_t x184 = INT8_MIN;
static volatile uint32_t x188 = UINT32_MAX;
volatile int32_t x206 = INT32_MAX;
uint64_t x208 = 7128121256875LLU;
int8_t x214 = INT8_MIN;
static int32_t x216 = 831;
static volatile int32_t t26 = 0;
static int16_t x217 = INT16_MAX;
volatile uint64_t x223 = 10773490LLU;
int32_t x243 = 215650686;
int32_t x253 = 1041;
static int8_t x256 = INT8_MAX;
int16_t x259 = -14;
static int16_t x260 = INT16_MIN;
static int32_t x276 = -1;
static int8_t x277 = INT8_MAX;
volatile int8_t x280 = INT8_MIN;
volatile int32_t x282 = INT32_MIN;
uint16_t x283 = 12U;
int16_t x295 = -12;
volatile int32_t t37 = 89229;
int8_t x297 = INT8_MAX;
int8_t x300 = -46;
volatile int32_t x317 = INT32_MAX;
uint8_t x323 = 2U;
int32_t t40 = -3582;
uint32_t x326 = 340270U;
volatile int32_t x348 = INT32_MIN;
uint8_t x355 = 0U;
volatile int32_t x358 = -183864427;
int64_t x360 = INT64_MIN;
uint32_t t45 = 12408U;
static int32_t x362 = -7488613;
static uint32_t x363 = UINT32_MAX;
volatile uint8_t x374 = 14U;
uint32_t x389 = 1579838U;
uint32_t x392 = 25705U;
uint8_t x406 = 124U;
int64_t x408 = INT64_MIN;
static volatile int32_t t52 = 477;
uint16_t x413 = 52U;
volatile int16_t x417 = INT16_MAX;
int64_t x425 = INT64_MAX;
int32_t x427 = -575965;
static int16_t x439 = INT16_MAX;
static volatile uint64_t x444 = 122260485096542LLU;
uint8_t x449 = 9U;
int32_t x470 = INT32_MIN;
volatile int16_t x471 = 163;
int32_t t60 = 57;
volatile int8_t x473 = 60;
static int16_t x475 = 901;
int32_t x476 = INT32_MIN;
static int8_t x478 = INT8_MAX;
uint16_t x480 = 15U;
volatile int64_t t62 = -638LL;
int16_t x515 = INT16_MAX;
volatile int32_t t65 = -5;
static int64_t x538 = 17176119575606LL;
uint32_t x550 = 174087U;
int16_t x554 = INT16_MAX;
volatile int32_t t70 = 112526;
uint64_t x563 = 13236139208000LLU;
uint32_t x564 = UINT32_MAX;
uint32_t x574 = 11U;
volatile int32_t x594 = INT32_MIN;
volatile int8_t x596 = 49;
int32_t t74 = 81149;
int64_t x613 = 402675003710LL;
int16_t x614 = INT16_MIN;
static volatile int32_t t78 = -10;
int16_t x627 = INT16_MIN;
int32_t x628 = INT32_MIN;
int32_t t81 = -1000872862;
uint8_t x658 = 49U;
int32_t t85 = INT32_MAX;
int8_t x669 = 1;
volatile uint16_t x697 = UINT16_MAX;
volatile uint32_t x701 = 2028U;
volatile int32_t x703 = 1341393;
int8_t x707 = 9;
int32_t x710 = -10348370;
volatile int8_t x712 = INT8_MIN;
volatile uint32_t t90 = 236311036U;
uint32_t t92 = 23790U;
static int32_t x764 = -1;
int16_t x769 = 12;
uint32_t x770 = UINT32_MAX;
volatile int64_t x773 = 1146264013691825524LL;
uint64_t x783 = UINT64_MAX;
volatile uint8_t x797 = 1U;
int16_t x803 = INT16_MAX;
volatile int32_t t99 = -1;


void f0(void) {
	static uint8_t x9 = 31U;
	int8_t x10 = INT8_MIN;
	int32_t t0 = 0;

	t0 = (x9>>((x10<x11)&x12));

	if (t0 != 31) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x17 = INT8_MAX;
	int8_t x18 = INT8_MIN;
	static int8_t x19 = INT8_MIN;
	static int64_t x20 = 825LL;
	volatile int32_t t1 = -163058973;

	t1 = (x17>>((x18<x19)&x20));

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x26 = INT16_MIN;
	int32_t x27 = INT32_MIN;
	uint64_t x28 = 3133515LLU;
	int32_t t2 = -619894;

	t2 = (x25>>((x26<x27)&x28));

	if (t2 != 508) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x37 = INT8_MAX;
	int64_t x38 = 308722735132184547LL;
	int64_t x39 = INT64_MIN;
	static int8_t x40 = INT8_MAX;
	int32_t t3 = -15292397;

	t3 = (x37>>((x38<x39)&x40));

	if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x41 = 0;
	static int16_t x42 = INT16_MIN;
	int32_t x43 = INT32_MIN;
	int32_t x44 = INT32_MIN;
	volatile int32_t t4 = 31;

	t4 = (x41>>((x42<x43)&x44));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x45 = UINT16_MAX;
	int8_t x46 = INT8_MAX;
	int16_t x47 = INT16_MAX;
	uint8_t x48 = 0U;
	volatile int32_t t5 = 6155268;

	t5 = (x45>>((x46<x47)&x48));

	if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x50 = INT16_MIN;
	int16_t x51 = INT16_MIN;
	int8_t x52 = INT8_MIN;
	volatile int64_t t6 = INT64_MAX;

	t6 = (x49>>((x50<x51)&x52));

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x53 = INT32_MAX;
	uint64_t x54 = 283716843877185151LLU;
	uint32_t x55 = 174U;
	static int32_t x56 = INT32_MIN;

	t7 = (x53>>((x54<x55)&x56));

	if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x69 = 24026U;
	int8_t x70 = 2;
	static uint16_t x71 = UINT16_MAX;
	volatile uint32_t t8 = 1796619U;

	t8 = (x69>>((x70<x71)&x72));

	if (t8 != 24026U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x78 = 6U;
	static int8_t x79 = INT8_MIN;
	volatile int32_t t9 = 8312369;

	t9 = (x77>>((x78<x79)&x80));

	if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x85 = UINT32_MAX;
	uint8_t x86 = 1U;
	int8_t x87 = INT8_MAX;
	uint32_t x88 = UINT32_MAX;
	volatile uint32_t t10 = 15922420U;

	t10 = (x85>>((x86<x87)&x88));

	if (t10 != 2147483647U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x93 = INT64_MAX;
	uint8_t x94 = 30U;
	static int8_t x95 = 1;
	static int32_t x96 = 10936779;

	t11 = (x93>>((x94<x95)&x96));

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x101 = 1020075U;
	uint16_t x102 = 181U;
	uint64_t x103 = 628LLU;
	int8_t x104 = INT8_MIN;

	t12 = (x101>>((x102<x103)&x104));

	if (t12 != 1020075U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x113 = INT8_MAX;
	int8_t x114 = INT8_MAX;
	uint64_t x116 = 101925LLU;
	int32_t t13 = 11700756;

	t13 = (x113>>((x114<x115)&x116));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x121 = 9552;
	int32_t x122 = -1;
	int32_t t14 = -27260;

	t14 = (x121>>((x122<x123)&x124));

	if (t14 != 4776) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint32_t x145 = UINT32_MAX;
	int64_t x146 = 0LL;
	int64_t x147 = -105198387876LL;
	int64_t x148 = -1LL;
	static uint32_t t15 = UINT32_MAX;

	t15 = (x145>>((x146<x147)&x148));

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x149 = 233LLU;
	int64_t x150 = -1LL;
	volatile uint64_t t16 = 15773781826814LLU;

	t16 = (x149>>((x150<x151)&x152));

	if (t16 != 233LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x153 = 4LLU;
	uint64_t x154 = 5LLU;
	int32_t x156 = 769565;

	t17 = (x153>>((x154<x155)&x156));

	if (t17 != 2LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x162 = 16U;
	uint8_t x163 = UINT8_MAX;
	uint16_t x164 = 10460U;
	volatile int32_t t18 = 94;

	t18 = (x161>>((x162<x163)&x164));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x169 = 7678511LLU;
	volatile uint16_t x170 = 0U;
	int8_t x171 = INT8_MIN;
	static volatile uint64_t t19 = 16309275LLU;

	t19 = (x169>>((x170<x171)&x172));

	if (t19 != 7678511LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x173 = INT32_MAX;
	int64_t x174 = -64465637LL;
	static uint16_t x175 = 70U;
	static uint32_t x176 = 200497284U;
	int32_t t20 = INT32_MAX;

	t20 = (x173>>((x174<x175)&x176));

	if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x181 = UINT32_MAX;
	int32_t x182 = INT32_MIN;
	static uint32_t t21 = UINT32_MAX;

	t21 = (x181>>((x182<x183)&x184));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint16_t x185 = 88U;
	volatile uint8_t x186 = 84U;
	uint16_t x187 = UINT16_MAX;
	int32_t t22 = -13228404;

	t22 = (x185>>((x186<x187)&x188));

	if (t22 != 44) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x193 = 1;
	uint16_t x194 = 53U;
	static uint32_t x195 = UINT32_MAX;
	volatile uint16_t x196 = 800U;
	volatile int32_t t23 = 453527;

	t23 = (x193>>((x194<x195)&x196));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x197 = 91123U;
	uint64_t x198 = 83LLU;
	uint64_t x199 = UINT64_MAX;
	int16_t x200 = 495;
	volatile uint32_t t24 = 1020882229U;

	t24 = (x197>>((x198<x199)&x200));

	if (t24 != 45561U) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x205 = UINT16_MAX;
	int8_t x207 = INT8_MIN;
	int32_t t25 = 270225934;

	t25 = (x205>>((x206<x207)&x208));

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x213 = 0U;
	uint32_t x215 = UINT32_MAX;

	t26 = (x213>>((x214<x215)&x216));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x218 = 2U;
	static uint8_t x219 = 40U;
	int8_t x220 = INT8_MAX;
	int32_t t27 = 0;

	t27 = (x217>>((x218<x219)&x220));

	if (t27 != 16383) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x221 = 1U;
	int32_t x222 = -58863;
	int8_t x224 = INT8_MIN;
	volatile int32_t t28 = 0;

	t28 = (x221>>((x222<x223)&x224));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x225 = 12U;
	volatile uint16_t x226 = UINT16_MAX;
	volatile int64_t x227 = INT64_MIN;
	uint8_t x228 = 10U;
	static int32_t t29 = 89408;

	t29 = (x225>>((x226<x227)&x228));

	if (t29 != 12) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x241 = 15;
	int32_t x242 = -180;
	int64_t x244 = 270542958122099585LL;
	volatile int32_t t30 = 68074;

	t30 = (x241>>((x242<x243)&x244));

	if (t30 != 7) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x254 = -54;
	static int16_t x255 = 0;
	int32_t t31 = 134;

	t31 = (x253>>((x254<x255)&x256));

	if (t31 != 520) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x257 = 16;
	volatile int32_t x258 = INT32_MAX;
	static volatile int32_t t32 = -59043157;

	t32 = (x257>>((x258<x259)&x260));

	if (t32 != 16) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x269 = INT64_MAX;
	static uint64_t x270 = UINT64_MAX;
	int8_t x271 = -14;
	int32_t x272 = 1647984;
	volatile int64_t t33 = INT64_MAX;

	t33 = (x269>>((x270<x271)&x272));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x273 = 2773U;
	uint16_t x274 = UINT16_MAX;
	int16_t x275 = -1;
	volatile int32_t t34 = -499080187;

	t34 = (x273>>((x274<x275)&x276));

	if (t34 != 2773) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x278 = 16U;
	int16_t x279 = INT16_MAX;
	volatile int32_t t35 = 1;

	t35 = (x277>>((x278<x279)&x280));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x281 = 145;
	int8_t x284 = 47;
	volatile int32_t t36 = 26298970;

	t36 = (x281>>((x282<x283)&x284));

	if (t36 != 72) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x293 = 9681U;
	uint32_t x294 = UINT32_MAX;
	int64_t x296 = INT64_MIN;

	t37 = (x293>>((x294<x295)&x296));

	if (t37 != 9681) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x298 = -309;
	uint8_t x299 = UINT8_MAX;
	volatile int32_t t38 = 60925072;

	t38 = (x297>>((x298<x299)&x300));

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x318 = 1502082242924LL;
	int32_t x319 = -8276701;
	int64_t x320 = -812714219022513LL;
	static int32_t t39 = INT32_MAX;

	t39 = (x317>>((x318<x319)&x320));

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x321 = 14;
	int32_t x322 = INT32_MIN;
	volatile int64_t x324 = INT64_MIN;

	t40 = (x321>>((x322<x323)&x324));

	if (t40 != 14) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x325 = 315215589U;
	static int8_t x327 = INT8_MIN;
	uint64_t x328 = 1699LLU;
	volatile uint32_t t41 = 2971815U;

	t41 = (x325>>((x326<x327)&x328));

	if (t41 != 157607794U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x345 = 1345U;
	int32_t x346 = INT32_MIN;
	int64_t x347 = INT64_MAX;
	static int32_t t42 = -2497;

	t42 = (x345>>((x346<x347)&x348));

	if (t42 != 1345) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x349 = 97063U;
	volatile int32_t x350 = INT32_MIN;
	int16_t x351 = -1;
	volatile int64_t x352 = -3880906LL;
	static uint32_t t43 = 43U;

	t43 = (x349>>((x350<x351)&x352));

	if (t43 != 97063U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x353 = INT64_MAX;
	int32_t x354 = -7;
	uint64_t x356 = UINT64_MAX;
	volatile int64_t t44 = -11587160326303LL;

	t44 = (x353>>((x354<x355)&x356));

	if (t44 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x357 = 41478U;
	volatile uint16_t x359 = UINT16_MAX;

	t45 = (x357>>((x358<x359)&x360));

	if (t45 != 41478U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x361 = 51088927298383148LL;
	int16_t x364 = -195;
	static volatile int64_t t46 = 2597088511391LL;

	t46 = (x361>>((x362<x363)&x364));

	if (t46 != 25544463649191574LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x365 = 7;
	int32_t x366 = -1;
	uint32_t x367 = 593226214U;
	int8_t x368 = INT8_MIN;
	int32_t t47 = 15111;

	t47 = (x365>>((x366<x367)&x368));

	if (t47 != 7) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x373 = 197LLU;
	int32_t x375 = INT32_MAX;
	static volatile int64_t x376 = 66924457LL;
	volatile uint64_t t48 = 191569LLU;

	t48 = (x373>>((x374<x375)&x376));

	if (t48 != 98LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x381 = INT8_MAX;
	static int16_t x382 = -1;
	static volatile uint8_t x383 = 0U;
	volatile int16_t x384 = INT16_MIN;
	int32_t t49 = 182019988;

	t49 = (x381>>((x382<x383)&x384));

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x390 = INT32_MIN;
	int64_t x391 = -8418807436LL;
	volatile uint32_t t50 = 393190377U;

	t50 = (x389>>((x390<x391)&x392));

	if (t50 != 1579838U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x393 = 1U;
	int8_t x394 = 36;
	static int64_t x395 = INT64_MAX;
	static int8_t x396 = INT8_MIN;
	volatile int32_t t51 = 31277796;

	t51 = (x393>>((x394<x395)&x396));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x405 = 1U;
	int16_t x407 = -1255;

	t52 = (x405>>((x406<x407)&x408));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x414 = 1U;
	int64_t x415 = INT64_MIN;
	int16_t x416 = -1;
	volatile int32_t t53 = -43391445;

	t53 = (x413>>((x414<x415)&x416));

	if (t53 != 52) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x418 = -1;
	int32_t x419 = INT32_MAX;
	int16_t x420 = -1;
	volatile int32_t t54 = -484727359;

	t54 = (x417>>((x418<x419)&x420));

	if (t54 != 16383) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x426 = 625927;
	int8_t x428 = -25;
	volatile int64_t t55 = INT64_MAX;

	t55 = (x425>>((x426<x427)&x428));

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x437 = 741103U;
	uint16_t x438 = UINT16_MAX;
	uint64_t x440 = 114065791283LLU;
	volatile uint32_t t56 = 153504U;

	t56 = (x437>>((x438<x439)&x440));

	if (t56 != 741103U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x441 = INT32_MAX;
	uint16_t x442 = 12U;
	volatile int8_t x443 = 1;
	volatile int32_t t57 = INT32_MAX;

	t57 = (x441>>((x442<x443)&x444));

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x450 = UINT64_MAX;
	volatile int16_t x451 = -21;
	int8_t x452 = INT8_MIN;
	int32_t t58 = -3458751;

	t58 = (x449>>((x450<x451)&x452));

	if (t58 != 9) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x457 = 544;
	uint16_t x458 = 0U;
	int16_t x459 = 0;
	static volatile int32_t x460 = -1;
	int32_t t59 = -31692253;

	t59 = (x457>>((x458<x459)&x460));

	if (t59 != 544) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x469 = INT32_MAX;
	uint16_t x472 = 1U;

	t60 = (x469>>((x470<x471)&x472));

	if (t60 != 1073741823) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x474 = -3434;
	int32_t t61 = 1;

	t61 = (x473>>((x474<x475)&x476));

	if (t61 != 60) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x477 = INT64_MAX;
	volatile int32_t x479 = INT32_MAX;

	t62 = (x477>>((x478<x479)&x480));

	if (t62 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x493 = INT32_MAX;
	int32_t x494 = INT32_MIN;
	uint64_t x495 = 5323LLU;
	uint32_t x496 = UINT32_MAX;
	int32_t t63 = INT32_MAX;

	t63 = (x493>>((x494<x495)&x496));

	if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x505 = 104U;
	int8_t x506 = INT8_MIN;
	uint32_t x507 = 58U;
	int64_t x508 = -1LL;
	volatile uint32_t t64 = 9U;

	t64 = (x505>>((x506<x507)&x508));

	if (t64 != 104U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x513 = UINT8_MAX;
	int32_t x514 = INT32_MIN;
	volatile int64_t x516 = -7457046729LL;

	t65 = (x513>>((x514<x515)&x516));

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x521 = 3U;
	uint16_t x522 = 903U;
	static volatile int8_t x523 = 6;
	volatile int32_t x524 = -2;
	volatile int32_t t66 = -73;

	t66 = (x521>>((x522<x523)&x524));

	if (t66 != 3) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x537 = UINT16_MAX;
	static volatile int64_t x539 = INT64_MIN;
	static uint32_t x540 = UINT32_MAX;
	volatile int32_t t67 = 23118;

	t67 = (x537>>((x538<x539)&x540));

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x541 = 113U;
	static uint64_t x542 = UINT64_MAX;
	uint16_t x543 = 3817U;
	int16_t x544 = INT16_MIN;
	int32_t t68 = 426;

	t68 = (x541>>((x542<x543)&x544));

	if (t68 != 113) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x549 = 7LLU;
	static uint8_t x551 = 7U;
	uint64_t x552 = 21621314946243463LLU;
	volatile uint64_t t69 = 139LLU;

	t69 = (x549>>((x550<x551)&x552));

	if (t69 != 7LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x553 = 55U;
	static int64_t x555 = INT64_MIN;
	volatile int16_t x556 = INT16_MIN;

	t70 = (x553>>((x554<x555)&x556));

	if (t70 != 55) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x561 = 1U;
	int32_t x562 = INT32_MIN;
	int32_t t71 = 56526793;

	t71 = (x561>>((x562<x563)&x564));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x569 = INT64_MAX;
	uint16_t x570 = 14U;
	int16_t x571 = INT16_MIN;
	uint8_t x572 = UINT8_MAX;
	volatile int64_t t72 = INT64_MAX;

	t72 = (x569>>((x570<x571)&x572));

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x573 = 679595249U;
	int8_t x575 = INT8_MAX;
	uint64_t x576 = 27487474942961LLU;
	uint32_t t73 = 1607707U;

	t73 = (x573>>((x574<x575)&x576));

	if (t73 != 339797624U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x593 = INT32_MAX;
	int8_t x595 = -1;

	t74 = (x593>>((x594<x595)&x596));

	if (t74 != 1073741823) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x597 = 3U;
	int32_t x598 = -1;
	int16_t x599 = INT16_MIN;
	uint8_t x600 = UINT8_MAX;
	int32_t t75 = -477249;

	t75 = (x597>>((x598<x599)&x600));

	if (t75 != 3) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x605 = UINT32_MAX;
	uint32_t x606 = 19U;
	uint8_t x607 = 1U;
	volatile uint16_t x608 = UINT16_MAX;
	volatile uint32_t t76 = UINT32_MAX;

	t76 = (x605>>((x606<x607)&x608));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x615 = INT8_MAX;
	int8_t x616 = INT8_MIN;
	volatile int64_t t77 = -491737423LL;

	t77 = (x613>>((x614<x615)&x616));

	if (t77 != 402675003710LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x621 = 166895108;
	volatile int64_t x622 = INT64_MAX;
	volatile int16_t x623 = -3835;
	uint16_t x624 = UINT16_MAX;

	t78 = (x621>>((x622<x623)&x624));

	if (t78 != 166895108) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x625 = UINT32_MAX;
	static int64_t x626 = -1LL;
	uint32_t t79 = UINT32_MAX;

	t79 = (x625>>((x626<x627)&x628));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x629 = 0;
	int64_t x630 = INT64_MIN;
	static int8_t x631 = INT8_MAX;
	int16_t x632 = -649;
	int32_t t80 = 429;

	t80 = (x629>>((x630<x631)&x632));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x645 = 13U;
	static int64_t x646 = -1LL;
	int64_t x647 = INT64_MIN;
	static uint64_t x648 = 305177942508LLU;

	t81 = (x645>>((x646<x647)&x648));

	if (t81 != 13) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x649 = UINT64_MAX;
	uint8_t x650 = 3U;
	volatile int8_t x651 = 1;
	int32_t x652 = -6540;
	static volatile uint64_t t82 = UINT64_MAX;

	t82 = (x649>>((x650<x651)&x652));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x653 = 2U;
	int16_t x654 = -1;
	int8_t x655 = -1;
	volatile int64_t x656 = -50496676997119561LL;
	volatile int32_t t83 = -6027;

	t83 = (x653>>((x654<x655)&x656));

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x657 = 30;
	uint16_t x659 = 1U;
	int32_t x660 = INT32_MAX;
	int32_t t84 = 1665028;

	t84 = (x657>>((x658<x659)&x660));

	if (t84 != 30) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x661 = INT32_MAX;
	uint8_t x662 = 71U;
	int32_t x663 = -530;
	uint64_t x664 = 2LLU;

	t85 = (x661>>((x662<x663)&x664));

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x670 = -13;
	volatile uint8_t x671 = 14U;
	uint8_t x672 = 107U;
	volatile int32_t t86 = 8;

	t86 = (x669>>((x670<x671)&x672));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x698 = INT32_MIN;
	uint32_t x699 = 127390379U;
	int64_t x700 = -1LL;
	volatile int32_t t87 = -62453;

	t87 = (x697>>((x698<x699)&x700));

	if (t87 != 65535) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x702 = -634516;
	static uint64_t x704 = 3310495LLU;
	uint32_t t88 = 1800551235U;

	t88 = (x701>>((x702<x703)&x704));

	if (t88 != 1014U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x705 = UINT16_MAX;
	static int16_t x706 = INT16_MAX;
	int64_t x708 = INT64_MIN;
	int32_t t89 = 121428467;

	t89 = (x705>>((x706<x707)&x708));

	if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x709 = 131774651U;
	int64_t x711 = -998163114LL;

	t90 = (x709>>((x710<x711)&x712));

	if (t90 != 131774651U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x713 = 1U;
	static volatile uint8_t x714 = 3U;
	volatile uint64_t x715 = UINT64_MAX;
	volatile int8_t x716 = INT8_MIN;
	static uint32_t t91 = 1327350U;

	t91 = (x713>>((x714<x715)&x716));

	if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x753 = 15811U;
	volatile int16_t x754 = INT16_MIN;
	static int8_t x755 = INT8_MIN;
	int8_t x756 = INT8_MIN;

	t92 = (x753>>((x754<x755)&x756));

	if (t92 != 15811U) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x761 = 11552388628LLU;
	uint8_t x762 = 1U;
	int32_t x763 = INT32_MIN;
	volatile uint64_t t93 = 7206694317LLU;

	t93 = (x761>>((x762<x763)&x764));

	if (t93 != 11552388628LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x771 = 634024327263452LL;
	int16_t x772 = -1;
	volatile int32_t t94 = 1;

	t94 = (x769>>((x770<x771)&x772));

	if (t94 != 6) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x774 = 1U;
	uint8_t x775 = 2U;
	int64_t x776 = -3692777394LL;
	volatile int64_t t95 = 252198025180862LL;

	t95 = (x773>>((x774<x775)&x776));

	if (t95 != 1146264013691825524LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x781 = INT64_MAX;
	int64_t x782 = -7274381572591075LL;
	int8_t x784 = INT8_MIN;
	volatile int64_t t96 = INT64_MAX;

	t96 = (x781>>((x782<x783)&x784));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x785 = UINT64_MAX;
	uint32_t x786 = 3U;
	uint8_t x787 = 66U;
	int32_t x788 = -301;
	static uint64_t t97 = 3914810682504553LLU;

	t97 = (x785>>((x786<x787)&x788));

	if (t97 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x798 = 4;
	static int8_t x799 = INT8_MIN;
	int8_t x800 = INT8_MIN;
	int32_t t98 = -3;

	t98 = (x797>>((x798<x799)&x800));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x801 = 406;
	int32_t x802 = 149100471;
	uint64_t x804 = 3343050641606451LLU;

	t99 = (x801>>((x802<x803)&x804));

	if (t99 != 406) { NG(); } else { ; }
	
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

