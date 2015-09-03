#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x16 = INT8_MIN;
int32_t x28 = INT32_MIN;
static uint64_t t2 = 113LLU;
static int8_t x47 = 1;
int16_t x71 = INT16_MIN;
int8_t x76 = INT8_MIN;
volatile int64_t t7 = INT64_MAX;
volatile int8_t x112 = INT8_MIN;
static uint16_t x137 = 0U;
int8_t x145 = INT8_MAX;
int64_t x180 = -9936557479271074LL;
uint8_t x182 = 1U;
static uint64_t x184 = 17697187LLU;
int64_t x186 = INT64_MIN;
volatile uint64_t t18 = 7913510LLU;
int32_t x191 = -18417;
volatile uint32_t x202 = 6519U;
volatile uint32_t x233 = UINT32_MAX;
int32_t x240 = INT32_MIN;
static volatile uint16_t x241 = UINT16_MAX;
static int8_t x243 = 1;
uint64_t x283 = UINT64_MAX;
int32_t t30 = 883724114;
volatile int32_t t31 = -406;
uint8_t x290 = 0U;
uint16_t x291 = 3074U;
int32_t x299 = INT32_MAX;
uint32_t x312 = UINT32_MAX;
uint16_t x317 = 785U;
volatile uint64_t x320 = 55LLU;
static volatile uint8_t x325 = 35U;
int64_t x330 = 15459LL;
volatile int8_t x332 = -41;
static int8_t x333 = INT8_MAX;
uint32_t x335 = 22673447U;
uint64_t x344 = UINT64_MAX;
volatile int16_t x355 = INT16_MAX;
int64_t x356 = INT64_MIN;
int32_t t42 = 387051;
static int8_t x357 = 0;
uint16_t x359 = UINT16_MAX;
volatile int32_t t43 = 0;
int8_t x366 = -30;
volatile uint32_t x368 = UINT32_MAX;
uint32_t x410 = UINT32_MAX;
uint64_t x424 = UINT64_MAX;
volatile uint16_t x435 = 2690U;
uint32_t x436 = 1810430448U;
int8_t x438 = -1;
uint8_t x445 = 9U;
volatile int32_t t56 = -138;
volatile int32_t t57 = 9810256;
int16_t x479 = INT16_MIN;
volatile int32_t x480 = INT32_MIN;
int32_t t58 = INT32_MAX;
uint32_t x485 = UINT32_MAX;
volatile uint64_t x499 = UINT64_MAX;
uint32_t x507 = UINT32_MAX;
static volatile uint16_t x509 = 19U;
uint8_t x512 = 26U;
int8_t x524 = INT8_MAX;
volatile int32_t x539 = INT32_MIN;
static uint8_t x549 = UINT8_MAX;
static int64_t x555 = INT64_MIN;
int16_t x556 = INT16_MIN;
volatile int64_t t70 = 854762279670469LL;
static volatile int32_t t71 = 0;
int8_t x573 = INT8_MAX;
uint32_t x578 = 107658U;
int64_t x579 = -1LL;
volatile int32_t t78 = 1;
int64_t x630 = 1722479LL;
static int16_t x632 = INT16_MAX;
volatile int32_t t80 = 452177708;
uint8_t x633 = 103U;
static volatile int16_t x635 = 8505;
volatile int32_t t82 = 67321;
static volatile uint32_t t83 = 11125U;
static volatile int32_t x667 = -1;
int8_t x676 = INT8_MAX;
uint64_t x679 = UINT64_MAX;
uint64_t x687 = 15096944667364957LLU;
uint16_t x689 = 0U;
uint8_t x691 = 22U;
int32_t x710 = INT32_MIN;
uint64_t x711 = UINT64_MAX;
int32_t t90 = -509642717;
static uint16_t x719 = 195U;
volatile uint16_t x729 = UINT16_MAX;
int32_t t94 = 99035;
int64_t x763 = -1LL;
volatile uint64_t x778 = 3931336387235359LLU;
static int32_t t96 = -227;
uint8_t x794 = 3U;
uint32_t x795 = UINT32_MAX;


void f0(void) {
	uint64_t x9 = 6917546LLU;
	int64_t x10 = INT64_MIN;
	int16_t x11 = -1;
	int32_t x12 = INT32_MAX;
	uint64_t t0 = 9LLU;

	t0 = (x9<<((x10-x11)<=x12));

	if (t0 != 13835092LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x13 = 22377252913729LLU;
	uint64_t x14 = UINT64_MAX;
	uint32_t x15 = 39986U;
	volatile uint64_t t1 = 85876203874794LLU;

	t1 = (x13<<((x14-x15)<=x16));

	if (t1 != 44754505827458LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x25 = UINT64_MAX;
	uint64_t x26 = UINT64_MAX;
	uint32_t x27 = UINT32_MAX;

	t2 = (x25<<((x26-x27)<=x28));

	if (t2 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x33 = 4000;
	uint64_t x34 = 1126549LLU;
	uint32_t x35 = 43490U;
	volatile int16_t x36 = -7;
	int32_t t3 = 323;

	t3 = (x33<<((x34-x35)<=x36));

	if (t3 != 8000) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x45 = UINT16_MAX;
	uint16_t x46 = UINT16_MAX;
	uint32_t x48 = UINT32_MAX;
	volatile int32_t t4 = -1894566;

	t4 = (x45<<((x46-x47)<=x48));

	if (t4 != 131070) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x69 = 507LLU;
	int16_t x70 = -1;
	int16_t x72 = 1;
	volatile uint64_t t5 = 288658393327LLU;

	t5 = (x69<<((x70-x71)<=x72));

	if (t5 != 507LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x73 = 0U;
	uint64_t x74 = UINT64_MAX;
	uint16_t x75 = 53U;
	volatile int32_t t6 = -359665950;

	t6 = (x73<<((x74-x75)<=x76));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x85 = INT64_MAX;
	volatile int32_t x86 = INT32_MAX;
	uint8_t x87 = 3U;
	int16_t x88 = INT16_MAX;

	t7 = (x85<<((x86-x87)<=x88));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x93 = UINT64_MAX;
	int8_t x94 = INT8_MIN;
	static volatile uint32_t x95 = 213U;
	int16_t x96 = INT16_MIN;
	volatile uint64_t t8 = UINT64_MAX;

	t8 = (x93<<((x94-x95)<=x96));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x101 = 8331U;
	volatile int8_t x102 = 4;
	int16_t x103 = INT16_MIN;
	int32_t x104 = -1;
	volatile int32_t t9 = -5;

	t9 = (x101<<((x102-x103)<=x104));

	if (t9 != 8331) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x105 = INT64_MAX;
	int32_t x106 = 954408132;
	uint8_t x107 = UINT8_MAX;
	uint8_t x108 = UINT8_MAX;
	volatile int64_t t10 = INT64_MAX;

	t10 = (x105<<((x106-x107)<=x108));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x109 = UINT8_MAX;
	int64_t x110 = INT64_MIN;
	volatile int64_t x111 = INT64_MIN;
	static int32_t t11 = -167077883;

	t11 = (x109<<((x110-x111)<=x112));

	if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x125 = 0;
	int8_t x126 = -12;
	int16_t x127 = 987;
	int8_t x128 = INT8_MIN;
	static volatile int32_t t12 = -51753;

	t12 = (x125<<((x126-x127)<=x128));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x138 = INT32_MIN;
	int32_t x139 = INT32_MIN;
	static uint8_t x140 = 1U;
	int32_t t13 = -33103;

	t13 = (x137<<((x138-x139)<=x140));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x146 = UINT64_MAX;
	int8_t x147 = 7;
	volatile uint64_t x148 = UINT64_MAX;
	static volatile int32_t t14 = 233724;

	t14 = (x145<<((x146-x147)<=x148));

	if (t14 != 254) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x153 = 2U;
	int16_t x154 = -2;
	int32_t x155 = -1;
	int8_t x156 = -12;
	int32_t t15 = -200;

	t15 = (x153<<((x154-x155)<=x156));

	if (t15 != 2) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x177 = 82U;
	static int16_t x178 = INT16_MIN;
	static volatile int16_t x179 = 23;
	int32_t t16 = 1027062;

	t16 = (x177<<((x178-x179)<=x180));

	if (t16 != 82) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x181 = UINT16_MAX;
	uint8_t x183 = 0U;
	int32_t t17 = -64269;

	t17 = (x181<<((x182-x183)<=x184));

	if (t17 != 131070) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x185 = 88291328797118LLU;
	int8_t x187 = -1;
	volatile int64_t x188 = -1LL;

	t18 = (x185<<((x186-x187)<=x188));

	if (t18 != 176582657594236LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x189 = UINT16_MAX;
	int8_t x190 = -1;
	int8_t x192 = 2;
	int32_t t19 = 2603896;

	t19 = (x189<<((x190-x191)<=x192));

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x201 = UINT8_MAX;
	uint8_t x203 = 29U;
	uint32_t x204 = 25482475U;
	volatile int32_t t20 = -5461262;

	t20 = (x201<<((x202-x203)<=x204));

	if (t20 != 510) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x205 = 46065585U;
	volatile uint8_t x206 = 2U;
	volatile uint32_t x207 = UINT32_MAX;
	uint16_t x208 = 31U;
	static volatile uint32_t t21 = 1U;

	t21 = (x205<<((x206-x207)<=x208));

	if (t21 != 92131170U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x213 = 57U;
	static int32_t x214 = -1;
	volatile uint8_t x215 = UINT8_MAX;
	volatile int16_t x216 = -1;
	static int32_t t22 = 13362574;

	t22 = (x213<<((x214-x215)<=x216));

	if (t22 != 114) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x234 = 1;
	static int8_t x235 = -1;
	volatile int64_t x236 = INT64_MIN;
	uint32_t t23 = UINT32_MAX;

	t23 = (x233<<((x234-x235)<=x236));

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x237 = UINT8_MAX;
	volatile int64_t x238 = INT64_MAX;
	uint16_t x239 = 11U;
	int32_t t24 = -536269997;

	t24 = (x237<<((x238-x239)<=x240));

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x242 = INT16_MIN;
	int64_t x244 = INT64_MAX;
	static volatile int32_t t25 = -116515983;

	t25 = (x241<<((x242-x243)<=x244));

	if (t25 != 131070) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x257 = 1U;
	int64_t x258 = -9326LL;
	static uint32_t x259 = 13178752U;
	uint8_t x260 = 5U;
	static volatile int32_t t26 = 5678257;

	t26 = (x257<<((x258-x259)<=x260));

	if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x261 = 21U;
	static volatile int16_t x262 = -1;
	volatile uint32_t x263 = 668170829U;
	static uint16_t x264 = 5271U;
	volatile int32_t t27 = 0;

	t27 = (x261<<((x262-x263)<=x264));

	if (t27 != 21) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x265 = 408U;
	uint16_t x266 = UINT16_MAX;
	volatile uint32_t x267 = 24265876U;
	volatile int16_t x268 = 0;
	static int32_t t28 = -115;

	t28 = (x265<<((x266-x267)<=x268));

	if (t28 != 408) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x273 = 8;
	uint64_t x274 = UINT64_MAX;
	int8_t x275 = 21;
	uint32_t x276 = 356838U;
	int32_t t29 = 1331;

	t29 = (x273<<((x274-x275)<=x276));

	if (t29 != 8) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x281 = INT8_MAX;
	volatile int32_t x282 = INT32_MIN;
	volatile int16_t x284 = INT16_MAX;

	t30 = (x281<<((x282-x283)<=x284));

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x285 = 22683U;
	uint16_t x286 = 875U;
	int16_t x287 = INT16_MAX;
	uint64_t x288 = UINT64_MAX;

	t31 = (x285<<((x286-x287)<=x288));

	if (t31 != 45366) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x289 = 13768LL;
	volatile int32_t x292 = INT32_MIN;
	volatile int64_t t32 = -20931LL;

	t32 = (x289<<((x290-x291)<=x292));

	if (t32 != 13768LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x297 = INT16_MAX;
	int64_t x298 = INT64_MAX;
	int16_t x300 = INT16_MIN;
	volatile int32_t t33 = 88012;

	t33 = (x297<<((x298-x299)<=x300));

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x301 = UINT32_MAX;
	uint32_t x302 = 51095684U;
	int32_t x303 = INT32_MIN;
	uint32_t x304 = UINT32_MAX;
	volatile uint32_t t34 = 49186U;

	t34 = (x301<<((x302-x303)<=x304));

	if (t34 != 4294967294U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x309 = INT16_MAX;
	static int16_t x310 = 1675;
	uint32_t x311 = 33999684U;
	volatile int32_t t35 = -41;

	t35 = (x309<<((x310-x311)<=x312));

	if (t35 != 65534) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x313 = INT32_MAX;
	int16_t x314 = -3;
	volatile int32_t x315 = -925691;
	int64_t x316 = -1LL;
	int32_t t36 = INT32_MAX;

	t36 = (x313<<((x314-x315)<=x316));

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x318 = -937LL;
	int64_t x319 = -20318359LL;
	int32_t t37 = -1;

	t37 = (x317<<((x318-x319)<=x320));

	if (t37 != 785) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x326 = UINT64_MAX;
	int32_t x327 = INT32_MIN;
	int8_t x328 = INT8_MIN;
	volatile int32_t t38 = 692988;

	t38 = (x325<<((x326-x327)<=x328));

	if (t38 != 70) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint16_t x329 = 263U;
	static int64_t x331 = -19LL;
	int32_t t39 = 4652;

	t39 = (x329<<((x330-x331)<=x332));

	if (t39 != 263) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x334 = UINT16_MAX;
	static volatile uint64_t x336 = UINT64_MAX;
	int32_t t40 = 507;

	t40 = (x333<<((x334-x335)<=x336));

	if (t40 != 254) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x341 = 4091855;
	int8_t x342 = INT8_MIN;
	int64_t x343 = INT64_MIN;
	static int32_t t41 = 14317;

	t41 = (x341<<((x342-x343)<=x344));

	if (t41 != 8183710) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x353 = INT8_MAX;
	static int16_t x354 = -1;

	t42 = (x353<<((x354-x355)<=x356));

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x358 = 0U;
	volatile int16_t x360 = INT16_MIN;

	t43 = (x357<<((x358-x359)<=x360));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x361 = UINT32_MAX;
	int8_t x362 = 0;
	uint8_t x363 = 28U;
	volatile int16_t x364 = -1;
	volatile uint32_t t44 = 29710U;

	t44 = (x361<<((x362-x363)<=x364));

	if (t44 != 4294967294U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x365 = 92397U;
	volatile uint64_t x367 = 749294LLU;
	uint32_t t45 = 37759U;

	t45 = (x365<<((x366-x367)<=x368));

	if (t45 != 92397U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x369 = 0;
	static uint8_t x370 = UINT8_MAX;
	int8_t x371 = INT8_MIN;
	static volatile uint16_t x372 = 419U;
	static volatile int32_t t46 = -100;

	t46 = (x369<<((x370-x371)<=x372));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x373 = 425;
	static uint32_t x374 = 491U;
	static uint32_t x375 = 8663882U;
	int8_t x376 = -1;
	int32_t t47 = 1;

	t47 = (x373<<((x374-x375)<=x376));

	if (t47 != 850) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x389 = 4;
	int8_t x390 = INT8_MAX;
	uint32_t x391 = 6843U;
	int32_t x392 = INT32_MIN;
	static volatile int32_t t48 = -1092489;

	t48 = (x389<<((x390-x391)<=x392));

	if (t48 != 4) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x409 = INT8_MAX;
	uint16_t x411 = 39U;
	static volatile uint16_t x412 = UINT16_MAX;
	static int32_t t49 = 87678;

	t49 = (x409<<((x410-x411)<=x412));

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x413 = INT16_MAX;
	volatile int8_t x414 = INT8_MAX;
	volatile int16_t x415 = -12;
	uint16_t x416 = 103U;
	int32_t t50 = 2;

	t50 = (x413<<((x414-x415)<=x416));

	if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x421 = INT16_MAX;
	int8_t x422 = INT8_MIN;
	int16_t x423 = -1;
	int32_t t51 = -1051;

	t51 = (x421<<((x422-x423)<=x424));

	if (t51 != 65534) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x429 = 73U;
	int16_t x430 = INT16_MAX;
	int8_t x431 = 29;
	int8_t x432 = -1;
	volatile int32_t t52 = 270471;

	t52 = (x429<<((x430-x431)<=x432));

	if (t52 != 73) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x433 = 10LLU;
	uint32_t x434 = 1U;
	uint64_t t53 = 4LLU;

	t53 = (x433<<((x434-x435)<=x436));

	if (t53 != 10LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x437 = 67;
	uint32_t x439 = 2246U;
	int8_t x440 = -1;
	int32_t t54 = -1;

	t54 = (x437<<((x438-x439)<=x440));

	if (t54 != 134) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x441 = 8602;
	int64_t x442 = -1LL;
	volatile uint8_t x443 = 14U;
	volatile int32_t x444 = -1;
	volatile int32_t t55 = -1568;

	t55 = (x441<<((x442-x443)<=x444));

	if (t55 != 17204) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x446 = 0;
	int16_t x447 = INT16_MAX;
	volatile int16_t x448 = 4;

	t56 = (x445<<((x446-x447)<=x448));

	if (t56 != 18) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x461 = INT8_MAX;
	volatile uint64_t x462 = 17924728670438995LLU;
	int32_t x463 = INT32_MAX;
	volatile int32_t x464 = -1;

	t57 = (x461<<((x462-x463)<=x464));

	if (t57 != 254) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x477 = INT32_MAX;
	int32_t x478 = -3;

	t58 = (x477<<((x478-x479)<=x480));

	if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x486 = UINT8_MAX;
	volatile int16_t x487 = INT16_MAX;
	int8_t x488 = -55;
	volatile uint32_t t59 = 0U;

	t59 = (x485<<((x486-x487)<=x488));

	if (t59 != 4294967294U) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x489 = INT32_MAX;
	volatile int16_t x490 = -1;
	static int8_t x491 = -1;
	int8_t x492 = -3;
	volatile int32_t t60 = INT32_MAX;

	t60 = (x489<<((x490-x491)<=x492));

	if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x497 = 23U;
	int16_t x498 = -1;
	static volatile int32_t x500 = -1;
	volatile int32_t t61 = 3006;

	t61 = (x497<<((x498-x499)<=x500));

	if (t61 != 46) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x505 = 148U;
	int16_t x506 = 5695;
	int32_t x508 = INT32_MIN;
	static int32_t t62 = -122672894;

	t62 = (x505<<((x506-x507)<=x508));

	if (t62 != 296) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x510 = 0U;
	uint32_t x511 = 0U;
	volatile int32_t t63 = -224630;

	t63 = (x509<<((x510-x511)<=x512));

	if (t63 != 38) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x513 = UINT64_MAX;
	int64_t x514 = -1LL;
	int32_t x515 = -1;
	static uint8_t x516 = 3U;
	uint64_t t64 = 236412891701941672LLU;

	t64 = (x513<<((x514-x515)<=x516));

	if (t64 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x521 = INT8_MAX;
	uint64_t x522 = 45154573519LLU;
	int8_t x523 = INT8_MAX;
	int32_t t65 = 340616659;

	t65 = (x521<<((x522-x523)<=x524));

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x537 = 335518LL;
	int16_t x538 = INT16_MIN;
	int64_t x540 = INT64_MIN;
	int64_t t66 = -8843382309823604LL;

	t66 = (x537<<((x538-x539)<=x540));

	if (t66 != 335518LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x550 = 218297LLU;
	int8_t x551 = 23;
	static int8_t x552 = INT8_MIN;
	volatile int32_t t67 = 104;

	t67 = (x549<<((x550-x551)<=x552));

	if (t67 != 510) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x553 = 13785U;
	int16_t x554 = -1;
	volatile int32_t t68 = 203183787;

	t68 = (x553<<((x554-x555)<=x556));

	if (t68 != 13785) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x557 = 14834347851406422LLU;
	uint64_t x558 = UINT64_MAX;
	int8_t x559 = -1;
	volatile int64_t x560 = INT64_MAX;
	volatile uint64_t t69 = 4LLU;

	t69 = (x557<<((x558-x559)<=x560));

	if (t69 != 29668695702812844LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x561 = 815736120006721LL;
	volatile uint64_t x562 = 7615207879LLU;
	static int64_t x563 = 5580243456LL;
	int16_t x564 = -1;

	t70 = (x561<<((x562-x563)<=x564));

	if (t70 != 1631472240013442LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x565 = 1;
	uint32_t x566 = UINT32_MAX;
	volatile int32_t x567 = INT32_MIN;
	int16_t x568 = INT16_MIN;

	t71 = (x565<<((x566-x567)<=x568));

	if (t71 != 2) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x574 = -1;
	uint16_t x575 = 182U;
	int64_t x576 = INT64_MAX;
	static volatile int32_t t72 = 88;

	t72 = (x573<<((x574-x575)<=x576));

	if (t72 != 254) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x577 = INT8_MAX;
	int8_t x580 = INT8_MIN;
	volatile int32_t t73 = -5561576;

	t73 = (x577<<((x578-x579)<=x580));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x581 = INT64_MAX;
	static int16_t x582 = INT16_MAX;
	int8_t x583 = INT8_MIN;
	volatile int32_t x584 = -1;
	volatile int64_t t74 = INT64_MAX;

	t74 = (x581<<((x582-x583)<=x584));

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x585 = 11U;
	int16_t x586 = INT16_MAX;
	static uint16_t x587 = UINT16_MAX;
	static int16_t x588 = -75;
	static volatile int32_t t75 = 11;

	t75 = (x585<<((x586-x587)<=x588));

	if (t75 != 22) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x593 = UINT32_MAX;
	int8_t x594 = 1;
	static int64_t x595 = INT64_MAX;
	static int32_t x596 = -1;
	uint32_t t76 = 490743650U;

	t76 = (x593<<((x594-x595)<=x596));

	if (t76 != 4294967294U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x597 = 138544164977445LLU;
	uint64_t x598 = 10218103LLU;
	static uint32_t x599 = UINT32_MAX;
	uint8_t x600 = 4U;
	uint64_t t77 = 59982LLU;

	t77 = (x597<<((x598-x599)<=x600));

	if (t77 != 138544164977445LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x617 = UINT16_MAX;
	static uint32_t x618 = 39U;
	int16_t x619 = -562;
	volatile uint8_t x620 = 15U;

	t78 = (x617<<((x618-x619)<=x620));

	if (t78 != 65535) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x621 = 1U;
	int32_t x622 = -9306;
	uint32_t x623 = 89204U;
	int64_t x624 = INT64_MIN;
	static int32_t t79 = 1737;

	t79 = (x621<<((x622-x623)<=x624));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x629 = 2133;
	int16_t x631 = -7;

	t80 = (x629<<((x630-x631)<=x632));

	if (t80 != 2133) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x634 = 216U;
	int16_t x636 = INT16_MIN;
	volatile int32_t t81 = 875;

	t81 = (x633<<((x634-x635)<=x636));

	if (t81 != 103) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x653 = UINT16_MAX;
	static int64_t x654 = -1LL;
	int16_t x655 = INT16_MIN;
	int8_t x656 = INT8_MAX;

	t82 = (x653<<((x654-x655)<=x656));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x661 = 2U;
	static volatile int16_t x662 = -1;
	int16_t x663 = INT16_MIN;
	int32_t x664 = 994827779;

	t83 = (x661<<((x662-x663)<=x664));

	if (t83 != 4U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x665 = 7LLU;
	static volatile int8_t x666 = INT8_MAX;
	volatile int32_t x668 = INT32_MIN;
	uint64_t t84 = 8LLU;

	t84 = (x665<<((x666-x667)<=x668));

	if (t84 != 7LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x673 = 0U;
	volatile int16_t x674 = INT16_MAX;
	static int8_t x675 = INT8_MAX;
	static int32_t t85 = 2;

	t85 = (x673<<((x674-x675)<=x676));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x677 = 97942719U;
	static int64_t x678 = 20987LL;
	uint64_t x680 = UINT64_MAX;
	volatile uint32_t t86 = 406243U;

	t86 = (x677<<((x678-x679)<=x680));

	if (t86 != 195885438U) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint16_t x685 = UINT16_MAX;
	int16_t x686 = -1;
	volatile int16_t x688 = INT16_MIN;
	static volatile int32_t t87 = 1305;

	t87 = (x685<<((x686-x687)<=x688));

	if (t87 != 131070) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x690 = 16427545U;
	int8_t x692 = -1;
	volatile int32_t t88 = 2716652;

	t88 = (x689<<((x690-x691)<=x692));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x693 = 3;
	static int8_t x694 = 1;
	volatile int32_t x695 = -1;
	int16_t x696 = INT16_MIN;
	volatile int32_t t89 = 249503163;

	t89 = (x693<<((x694-x695)<=x696));

	if (t89 != 3) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x709 = UINT16_MAX;
	static int64_t x712 = INT64_MIN;

	t90 = (x709<<((x710-x711)<=x712));

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x713 = INT8_MAX;
	int64_t x714 = INT64_MIN;
	volatile int32_t x715 = INT32_MIN;
	int8_t x716 = -1;
	int32_t t91 = 20089099;

	t91 = (x713<<((x714-x715)<=x716));

	if (t91 != 254) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x717 = 15271;
	uint32_t x718 = 665171U;
	static int8_t x720 = -1;
	int32_t t92 = 801456;

	t92 = (x717<<((x718-x719)<=x720));

	if (t92 != 30542) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x721 = 11774U;
	int64_t x722 = 13171LL;
	volatile uint64_t x723 = 522755576224876LLU;
	int8_t x724 = INT8_MAX;
	uint32_t t93 = 7058117U;

	t93 = (x721<<((x722-x723)<=x724));

	if (t93 != 11774U) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint64_t x730 = 214424669852980780LLU;
	volatile int16_t x731 = -9663;
	volatile int16_t x732 = INT16_MAX;

	t94 = (x729<<((x730-x731)<=x732));

	if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x761 = 72;
	uint8_t x762 = 2U;
	int8_t x764 = 0;
	int32_t t95 = 1;

	t95 = (x761<<((x762-x763)<=x764));

	if (t95 != 72) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x777 = INT16_MAX;
	int32_t x779 = -1;
	static int16_t x780 = INT16_MIN;

	t96 = (x777<<((x778-x779)<=x780));

	if (t96 != 65534) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x793 = 11;
	static volatile int64_t x796 = 246LL;
	volatile int32_t t97 = 91089;

	t97 = (x793<<((x794-x795)<=x796));

	if (t97 != 22) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x797 = UINT32_MAX;
	int8_t x798 = 49;
	int32_t x799 = -1;
	uint32_t x800 = UINT32_MAX;
	volatile uint32_t t98 = 831182321U;

	t98 = (x797<<((x798-x799)<=x800));

	if (t98 != 4294967294U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x801 = 0U;
	static int64_t x802 = 0LL;
	int32_t x803 = 41;
	uint8_t x804 = 7U;
	int32_t t99 = 0;

	t99 = (x801<<((x802-x803)<=x804));

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

