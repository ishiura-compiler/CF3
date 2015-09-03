#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x6 = 874402LL;
int64_t t2 = 33615197250LL;
static uint8_t x17 = 51U;
volatile uint64_t x53 = UINT64_MAX;
uint64_t t6 = 2774LLU;
volatile int32_t x62 = INT32_MAX;
static int64_t x63 = INT64_MIN;
static volatile int32_t t8 = INT32_MAX;
static volatile int64_t x87 = -1LL;
int8_t x91 = INT8_MIN;
uint64_t x102 = UINT64_MAX;
int16_t x121 = -1;
int32_t t14 = 7368;
volatile int32_t t15 = -484670;
volatile int32_t x135 = INT32_MAX;
uint64_t t16 = 10829439LLU;
int16_t x153 = INT16_MIN;
uint16_t x164 = UINT16_MAX;
volatile int64_t t19 = -95038508741LL;
static int16_t x178 = -1;
static uint64_t x182 = UINT64_MAX;
uint64_t x185 = 238738112897LLU;
int64_t x187 = INT64_MIN;
static volatile uint64_t x223 = 11891LLU;
int16_t x224 = -1;
int8_t x229 = INT8_MIN;
int32_t t26 = -2002750;
volatile int16_t x261 = -58;
static int32_t t29 = -3299;
int16_t x270 = -2848;
static int16_t x272 = -1;
int16_t x276 = INT16_MIN;
int32_t t31 = -172;
int64_t x280 = 65130805824870203LL;
int16_t x281 = -1;
int32_t x283 = INT32_MIN;
static int64_t t33 = INT64_MAX;
static volatile uint64_t x309 = 679728802023LLU;
int16_t x321 = -1;
volatile int16_t x325 = -667;
int8_t x326 = 2;
int32_t x346 = INT32_MIN;
int64_t x349 = INT64_MIN;
int8_t x355 = -1;
uint64_t x357 = UINT64_MAX;
int16_t x359 = 2906;
int32_t t43 = 31837;
static volatile uint64_t x378 = 918023LLU;
volatile uint64_t x385 = 389788LLU;
static int32_t x393 = INT32_MIN;
int32_t t48 = 3;
volatile int64_t x411 = -305422LL;
static volatile int16_t x437 = INT16_MIN;
volatile int32_t x448 = 7909250;
static int32_t t53 = 7;
int64_t x454 = INT64_MIN;
volatile int8_t x455 = INT8_MAX;
int32_t x463 = INT32_MIN;
uint32_t x468 = UINT32_MAX;
uint16_t x475 = 6477U;
uint32_t x479 = 45218U;
volatile int32_t t58 = 7;
int64_t x485 = 107843668463396253LL;
uint32_t x486 = 14751370U;
int64_t x487 = 1LL;
int8_t x492 = -4;
static volatile int8_t x498 = 0;
int32_t t62 = INT32_MIN;
uint64_t t63 = 9438325LLU;
int16_t x505 = -1;
volatile int64_t t65 = 2126403023697390LL;
static volatile uint16_t x557 = 2523U;
volatile int32_t x558 = INT32_MAX;
uint64_t x559 = 468035070417784869LLU;
int64_t x562 = INT64_MAX;
int32_t x570 = INT32_MIN;
volatile uint64_t x571 = 275818LLU;
int32_t t72 = -5475;
int32_t x587 = -3288933;
volatile int32_t x595 = INT32_MIN;
volatile uint8_t x599 = 101U;
volatile int8_t x601 = INT8_MAX;
int32_t t78 = -220;
volatile uint64_t t80 = 1846254881161045LLU;
static volatile int64_t x643 = INT64_MIN;
int64_t x651 = -1LL;
static uint32_t x652 = 628096527U;
volatile uint64_t t82 = 515LLU;
int64_t x664 = INT64_MIN;
int32_t x666 = 780984572;
uint8_t x676 = 7U;
volatile int32_t t85 = 1500276;
int32_t t86 = INT32_MAX;
static int8_t x698 = INT8_MAX;
volatile int8_t x700 = INT8_MAX;
uint16_t x709 = 62U;
volatile uint32_t t90 = 1386624U;
int64_t x723 = -50089766LL;
int8_t x752 = -23;
uint64_t t94 = 11LLU;
uint64_t x763 = 117LLU;
uint16_t x768 = 27120U;
uint64_t x771 = 3537490725703LLU;
int8_t x776 = -1;
uint64_t t98 = 5LLU;
static int8_t x781 = 3;
uint64_t x784 = 8524892582454837384LLU;


void f0(void) {
	volatile uint8_t x1 = 42U;
	static int16_t x2 = INT16_MAX;
	uint16_t x3 = 0U;
	volatile uint64_t x4 = UINT64_MAX;
	static volatile int32_t t0 = -306525;

	t0 = ((x1^x2)/(x3<=x4));

	if (t0 != 32725) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int16_t x7 = INT16_MIN;
	int32_t x8 = INT32_MAX;
	volatile int64_t t1 = 983708564162672771LL;

	t1 = ((x5^x6)/(x7<=x8));

	if (t1 != 862301LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MIN;
	int64_t x14 = INT64_MIN;
	int64_t x15 = INT64_MIN;
	uint16_t x16 = UINT16_MAX;

	t2 = ((x13^x14)/(x15<=x16));

	if (t2 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x18 = INT8_MIN;
	int64_t x19 = INT64_MIN;
	int16_t x20 = INT16_MAX;
	int32_t t3 = -1089;

	t3 = ((x17^x18)/(x19<=x20));

	if (t3 != -77) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = -922144670726814LL;
	static uint64_t x26 = 0LLU;
	uint16_t x27 = 42U;
	volatile int32_t x28 = 128805;
	uint64_t t4 = 5509770104534LLU;

	t4 = ((x25^x26)/(x27<=x28));

	if (t4 != 18445821929038824802LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x49 = 164786;
	int64_t x50 = INT64_MIN;
	static int64_t x51 = INT64_MIN;
	int8_t x52 = INT8_MAX;
	int64_t t5 = -57359LL;

	t5 = ((x49^x50)/(x51<=x52));

	if (t5 != -9223372036854611022LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x54 = UINT32_MAX;
	uint8_t x55 = UINT8_MAX;
	uint64_t x56 = 1622294319098LLU;

	t6 = ((x53^x54)/(x55<=x56));

	if (t6 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x61 = INT8_MIN;
	int64_t x64 = INT64_MIN;
	static int32_t t7 = 1035;

	t7 = ((x61^x62)/(x63<=x64));

	if (t7 != -2147483521) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x81 = INT32_MIN;
	int32_t x82 = -1;
	uint16_t x83 = 1U;
	uint8_t x84 = 42U;

	t8 = ((x81^x82)/(x83<=x84));

	if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x85 = 36;
	volatile uint8_t x86 = 43U;
	int32_t x88 = 1370;
	volatile int32_t t9 = 6;

	t9 = ((x85^x86)/(x87<=x88));

	if (t9 != 15) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x89 = -1LL;
	int64_t x90 = INT64_MIN;
	volatile uint32_t x92 = UINT32_MAX;
	static volatile int64_t t10 = INT64_MAX;

	t10 = ((x89^x90)/(x91<=x92));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x93 = 2044U;
	int64_t x94 = INT64_MIN;
	uint32_t x95 = 37055576U;
	int8_t x96 = INT8_MIN;
	volatile int64_t t11 = -2338860485LL;

	t11 = ((x93^x94)/(x95<=x96));

	if (t11 != -9223372036854773764LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x101 = 6219449073LLU;
	int64_t x103 = INT64_MIN;
	int16_t x104 = INT16_MIN;
	volatile uint64_t t12 = 1442571201LLU;

	t12 = ((x101^x102)/(x103<=x104));

	if (t12 != 18446744067490102542LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x109 = INT32_MIN;
	int8_t x110 = INT8_MAX;
	int64_t x111 = 866LL;
	int32_t x112 = INT32_MAX;
	static volatile int32_t t13 = -217;

	t13 = ((x109^x110)/(x111<=x112));

	if (t13 != -2147483521) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x122 = -1;
	int32_t x123 = 124;
	static int32_t x124 = 53989825;

	t14 = ((x121^x122)/(x123<=x124));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x129 = -1;
	volatile int16_t x130 = INT16_MAX;
	int32_t x131 = -191195895;
	int8_t x132 = INT8_MIN;

	t15 = ((x129^x130)/(x131<=x132));

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x133 = -1;
	static uint64_t x134 = UINT64_MAX;
	static uint32_t x136 = UINT32_MAX;

	t16 = ((x133^x134)/(x135<=x136));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x154 = UINT64_MAX;
	int32_t x155 = -7658240;
	int64_t x156 = INT64_MAX;
	uint64_t t17 = 3072055334670LLU;

	t17 = ((x153^x154)/(x155<=x156));

	if (t17 != 32767LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x161 = -1;
	static volatile int16_t x162 = -826;
	int32_t x163 = INT32_MIN;
	static int32_t t18 = -18089509;

	t18 = ((x161^x162)/(x163<=x164));

	if (t18 != 825) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x165 = 14LL;
	int64_t x166 = -411688LL;
	int64_t x167 = INT64_MIN;
	uint32_t x168 = 7449U;

	t19 = ((x165^x166)/(x167<=x168));

	if (t19 != -411690LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x177 = INT8_MIN;
	int16_t x179 = INT16_MIN;
	volatile int16_t x180 = INT16_MAX;
	static volatile int32_t t20 = 0;

	t20 = ((x177^x178)/(x179<=x180));

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x181 = 14U;
	int16_t x183 = -1;
	int8_t x184 = -1;
	static uint64_t t21 = 216235027856835631LLU;

	t21 = ((x181^x182)/(x183<=x184));

	if (t21 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x186 = -14;
	int8_t x188 = 1;
	volatile uint64_t t22 = 5590933449236LLU;

	t22 = ((x185^x186)/(x187<=x188));

	if (t22 != 18446743834971438707LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x193 = 88297U;
	uint16_t x194 = 7U;
	int32_t x195 = -1;
	volatile int16_t x196 = 4451;
	static uint32_t t23 = 22025575U;

	t23 = ((x193^x194)/(x195<=x196));

	if (t23 != 88302U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x221 = INT32_MIN;
	static uint8_t x222 = 126U;
	int32_t t24 = -489243;

	t24 = ((x221^x222)/(x223<=x224));

	if (t24 != -2147483522) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x230 = INT8_MIN;
	int16_t x231 = 1;
	int8_t x232 = 11;
	int32_t t25 = 5135281;

	t25 = ((x229^x230)/(x231<=x232));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x241 = -1;
	int16_t x242 = INT16_MIN;
	int8_t x243 = -1;
	int16_t x244 = -1;

	t26 = ((x241^x242)/(x243<=x244));

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x249 = INT64_MAX;
	uint32_t x250 = UINT32_MAX;
	volatile int64_t x251 = INT64_MIN;
	int8_t x252 = INT8_MAX;
	volatile int64_t t27 = 2665156LL;

	t27 = ((x249^x250)/(x251<=x252));

	if (t27 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x262 = INT8_MIN;
	uint64_t x263 = 1LLU;
	uint8_t x264 = UINT8_MAX;
	static int32_t t28 = -1339906;

	t28 = ((x261^x262)/(x263<=x264));

	if (t28 != 70) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x265 = UINT8_MAX;
	static uint8_t x266 = 0U;
	uint8_t x267 = 125U;
	int64_t x268 = INT64_MAX;

	t29 = ((x265^x266)/(x267<=x268));

	if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x269 = INT16_MIN;
	int16_t x271 = -93;
	volatile int32_t t30 = 24;

	t30 = ((x269^x270)/(x271<=x272));

	if (t30 != 29920) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x273 = -12;
	uint16_t x274 = 202U;
	uint32_t x275 = 14U;

	t31 = ((x273^x274)/(x275<=x276));

	if (t31 != -194) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x277 = -1;
	int8_t x278 = 4;
	volatile int8_t x279 = -1;
	volatile int32_t t32 = -377616;

	t32 = ((x277^x278)/(x279<=x280));

	if (t32 != -5) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x282 = INT64_MIN;
	static int8_t x284 = INT8_MIN;

	t33 = ((x281^x282)/(x283<=x284));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x289 = INT32_MIN;
	static int64_t x290 = -1LL;
	int32_t x291 = 0;
	uint8_t x292 = UINT8_MAX;
	static volatile int64_t t34 = -13LL;

	t34 = ((x289^x290)/(x291<=x292));

	if (t34 != 2147483647LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x305 = 1;
	volatile int32_t x306 = -19;
	uint32_t x307 = 5711U;
	uint32_t x308 = 512215U;
	volatile int32_t t35 = 224201105;

	t35 = ((x305^x306)/(x307<=x308));

	if (t35 != -20) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x310 = 6U;
	uint32_t x311 = UINT32_MAX;
	int64_t x312 = 28246382891312338LL;
	uint64_t t36 = 2938LLU;

	t36 = ((x309^x310)/(x311<=x312));

	if (t36 != 679728802017LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x322 = 2124423247521776385LLU;
	uint64_t x323 = 15526932LLU;
	int32_t x324 = INT32_MAX;
	volatile uint64_t t37 = 712LLU;

	t37 = ((x321^x322)/(x323<=x324));

	if (t37 != 16322320826187775230LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x327 = UINT16_MAX;
	uint64_t x328 = 7455733829LLU;
	int32_t t38 = -1923218;

	t38 = ((x325^x326)/(x327<=x328));

	if (t38 != -665) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x345 = -1LL;
	static uint32_t x347 = 31641U;
	volatile int32_t x348 = -996;
	int64_t t39 = -1752LL;

	t39 = ((x345^x346)/(x347<=x348));

	if (t39 != 2147483647LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x350 = -1;
	int8_t x351 = INT8_MIN;
	static int16_t x352 = -1;
	volatile int64_t t40 = INT64_MAX;

	t40 = ((x349^x350)/(x351<=x352));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x353 = INT8_MIN;
	uint8_t x354 = 1U;
	static int8_t x356 = 1;
	int32_t t41 = -55417;

	t41 = ((x353^x354)/(x355<=x356));

	if (t41 != -127) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x358 = INT64_MAX;
	uint32_t x360 = 97955U;
	volatile uint64_t t42 = 7468954829LLU;

	t42 = ((x357^x358)/(x359<=x360));

	if (t42 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x361 = -3248;
	volatile int16_t x362 = INT16_MIN;
	static int16_t x363 = INT16_MIN;
	static int16_t x364 = INT16_MAX;

	t43 = ((x361^x362)/(x363<=x364));

	if (t43 != 29520) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x377 = 909789745568301LLU;
	volatile uint64_t x379 = 728005172143780785LLU;
	volatile int16_t x380 = -1;
	volatile uint64_t t44 = 4345013331393LLU;

	t44 = ((x377^x378)/(x379<=x380));

	if (t44 != 909789745174570LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x386 = INT8_MAX;
	volatile int64_t x387 = 900LL;
	static uint32_t x388 = UINT32_MAX;
	volatile uint64_t t45 = 9118578218LLU;

	t45 = ((x385^x386)/(x387<=x388));

	if (t45 != 389859LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x394 = 85028U;
	volatile uint16_t x395 = 9U;
	int64_t x396 = 119465910970LL;
	volatile uint32_t t46 = 3477U;

	t46 = ((x393^x394)/(x395<=x396));

	if (t46 != 2147568676U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x397 = -24;
	int32_t x398 = INT32_MIN;
	uint64_t x399 = 154455675207LLU;
	int64_t x400 = INT64_MAX;
	volatile int32_t t47 = 2;

	t47 = ((x397^x398)/(x399<=x400));

	if (t47 != 2147483624) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x405 = INT8_MAX;
	uint16_t x406 = UINT16_MAX;
	volatile int32_t x407 = -1;
	int16_t x408 = 769;

	t48 = ((x405^x406)/(x407<=x408));

	if (t48 != 65408) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x409 = 3;
	int64_t x410 = INT64_MIN;
	int8_t x412 = -1;
	volatile int64_t t49 = -1752958LL;

	t49 = ((x409^x410)/(x411<=x412));

	if (t49 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x413 = 2892U;
	static int32_t x414 = 4710;
	static volatile uint64_t x415 = 194LLU;
	uint32_t x416 = 4543U;
	int32_t t50 = -196;

	t50 = ((x413^x414)/(x415<=x416));

	if (t50 != 6442) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x433 = -1;
	volatile int8_t x434 = -1;
	int16_t x435 = -1;
	volatile int64_t x436 = INT64_MAX;
	static int32_t t51 = 130430;

	t51 = ((x433^x434)/(x435<=x436));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x438 = INT64_MAX;
	static volatile int8_t x439 = INT8_MIN;
	uint16_t x440 = 7907U;
	static volatile int64_t t52 = -42798358008LL;

	t52 = ((x437^x438)/(x439<=x440));

	if (t52 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x445 = INT16_MIN;
	uint8_t x446 = UINT8_MAX;
	int64_t x447 = 1713LL;

	t53 = ((x445^x446)/(x447<=x448));

	if (t53 != -32513) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x453 = INT8_MIN;
	volatile uint16_t x456 = UINT16_MAX;
	volatile int64_t t54 = -3LL;

	t54 = ((x453^x454)/(x455<=x456));

	if (t54 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x461 = INT16_MIN;
	uint64_t x462 = 12LLU;
	int16_t x464 = INT16_MAX;
	volatile uint64_t t55 = 32790933540368801LLU;

	t55 = ((x461^x462)/(x463<=x464));

	if (t55 != 18446744073709518860LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x465 = 409552U;
	volatile int32_t x466 = INT32_MAX;
	int16_t x467 = INT16_MIN;
	static volatile uint32_t t56 = 20747996U;

	t56 = ((x465^x466)/(x467<=x468));

	if (t56 != 2147074095U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x473 = INT64_MIN;
	uint8_t x474 = 0U;
	int64_t x476 = INT64_MAX;
	int64_t t57 = INT64_MIN;

	t57 = ((x473^x474)/(x475<=x476));

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x477 = 978;
	static int8_t x478 = 0;
	uint64_t x480 = UINT64_MAX;

	t58 = ((x477^x478)/(x479<=x480));

	if (t58 != 978) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x488 = INT16_MAX;
	int64_t t59 = 2679LL;

	t59 = ((x485^x486)/(x487<=x488));

	if (t59 != 107843668478014231LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x489 = 30769U;
	static uint64_t x490 = UINT64_MAX;
	static int64_t x491 = INT64_MIN;
	uint64_t t60 = 836785534134161238LLU;

	t60 = ((x489^x490)/(x491<=x492));

	if (t60 != 18446744073709520846LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x493 = INT32_MAX;
	volatile int16_t x494 = INT16_MIN;
	int8_t x495 = -1;
	int8_t x496 = 0;
	static volatile int32_t t61 = -3;

	t61 = ((x493^x494)/(x495<=x496));

	if (t61 != -2147450881) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x497 = INT32_MIN;
	static int16_t x499 = INT16_MIN;
	static uint16_t x500 = 2822U;

	t62 = ((x497^x498)/(x499<=x500));

	if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x501 = 178LLU;
	uint32_t x502 = UINT32_MAX;
	volatile int32_t x503 = -1;
	int32_t x504 = INT32_MAX;

	t63 = ((x501^x502)/(x503<=x504));

	if (t63 != 4294967117LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x506 = UINT8_MAX;
	int64_t x507 = -127590LL;
	uint8_t x508 = 91U;
	int32_t t64 = -108;

	t64 = ((x505^x506)/(x507<=x508));

	if (t64 != -256) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x521 = 214444206U;
	int64_t x522 = 196952550LL;
	uint32_t x523 = 127286109U;
	int16_t x524 = -12;

	t65 = ((x521^x522)/(x523<=x524));

	if (t65 != 125135176LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x525 = INT32_MAX;
	static int64_t x526 = INT64_MIN;
	int64_t x527 = -3158529LL;
	int8_t x528 = 5;
	volatile int64_t t66 = 10LL;

	t66 = ((x525^x526)/(x527<=x528));

	if (t66 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x529 = UINT16_MAX;
	volatile int16_t x530 = INT16_MAX;
	static int64_t x531 = INT64_MIN;
	int64_t x532 = -1LL;
	volatile int32_t t67 = 37452;

	t67 = ((x529^x530)/(x531<=x532));

	if (t67 != 32768) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x545 = 1U;
	static uint64_t x546 = 20787LLU;
	static int8_t x547 = INT8_MIN;
	int16_t x548 = INT16_MAX;
	volatile uint64_t t68 = 40LLU;

	t68 = ((x545^x546)/(x547<=x548));

	if (t68 != 20786LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x560 = INT64_MIN;
	int32_t t69 = -3111131;

	t69 = ((x557^x558)/(x559<=x560));

	if (t69 != 2147481124) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x561 = UINT8_MAX;
	static volatile int8_t x563 = INT8_MIN;
	int8_t x564 = 17;
	volatile int64_t t70 = -1LL;

	t70 = ((x561^x562)/(x563<=x564));

	if (t70 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x565 = UINT16_MAX;
	volatile int16_t x566 = INT16_MAX;
	static int16_t x567 = INT16_MIN;
	uint64_t x568 = UINT64_MAX;
	int32_t t71 = 51;

	t71 = ((x565^x566)/(x567<=x568));

	if (t71 != 32768) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x569 = INT32_MAX;
	int16_t x572 = INT16_MIN;

	t72 = ((x569^x570)/(x571<=x572));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x581 = 6;
	static int8_t x582 = -1;
	int8_t x583 = -27;
	volatile int16_t x584 = -1;
	static int32_t t73 = -32;

	t73 = ((x581^x582)/(x583<=x584));

	if (t73 != -7) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x585 = INT16_MAX;
	volatile uint8_t x586 = 22U;
	int16_t x588 = -432;
	volatile int32_t t74 = 105;

	t74 = ((x585^x586)/(x587<=x588));

	if (t74 != 32745) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x593 = UINT8_MAX;
	static uint8_t x594 = UINT8_MAX;
	int8_t x596 = INT8_MIN;
	int32_t t75 = 1;

	t75 = ((x593^x594)/(x595<=x596));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x597 = INT64_MAX;
	static volatile int8_t x598 = INT8_MIN;
	static uint32_t x600 = 123U;
	static volatile int64_t t76 = 1044466LL;

	t76 = ((x597^x598)/(x599<=x600));

	if (t76 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x602 = -1;
	int32_t x603 = INT32_MIN;
	uint8_t x604 = 7U;
	static int32_t t77 = -116325412;

	t77 = ((x601^x602)/(x603<=x604));

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x609 = -1;
	static volatile int8_t x610 = INT8_MIN;
	static int16_t x611 = INT16_MIN;
	int8_t x612 = INT8_MIN;

	t78 = ((x609^x610)/(x611<=x612));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x621 = 51U;
	uint8_t x622 = 8U;
	uint8_t x623 = 4U;
	int16_t x624 = INT16_MAX;
	int32_t t79 = -9316;

	t79 = ((x621^x622)/(x623<=x624));

	if (t79 != 59) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x633 = 8513521543LLU;
	uint8_t x634 = UINT8_MAX;
	static uint64_t x635 = 2140987553949546899LLU;
	volatile int16_t x636 = INT16_MIN;

	t80 = ((x633^x634)/(x635<=x636));

	if (t80 != 8513521528LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x641 = INT16_MAX;
	int16_t x642 = -1;
	int64_t x644 = -1LL;
	volatile int32_t t81 = 977;

	t81 = ((x641^x642)/(x643<=x644));

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x649 = 16LLU;
	volatile int32_t x650 = 819892;

	t82 = ((x649^x650)/(x651<=x652));

	if (t82 != 819876LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x661 = -1LL;
	uint32_t x662 = UINT32_MAX;
	int64_t x663 = INT64_MIN;
	volatile int64_t t83 = -126013204LL;

	t83 = ((x661^x662)/(x663<=x664));

	if (t83 != -4294967296LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x665 = -1LL;
	volatile int16_t x667 = -1;
	int8_t x668 = -1;
	volatile int64_t t84 = 194151488LL;

	t84 = ((x665^x666)/(x667<=x668));

	if (t84 != -780984573LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x673 = 299;
	int16_t x674 = INT16_MIN;
	int8_t x675 = -35;

	t85 = ((x673^x674)/(x675<=x676));

	if (t85 != -32469) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x689 = -1;
	static volatile int32_t x690 = INT32_MIN;
	int32_t x691 = -178709;
	int8_t x692 = INT8_MIN;

	t86 = ((x689^x690)/(x691<=x692));

	if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x693 = 576173732741396LL;
	uint64_t x694 = 2074540108051803LLU;
	int16_t x695 = 9;
	static uint8_t x696 = 63U;
	volatile uint64_t t87 = 265734243LLU;

	t87 = ((x693^x694)/(x695<=x696));

	if (t87 != 1498421288318031LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x697 = -169363995527953LL;
	static volatile int16_t x699 = -1;
	volatile int64_t t88 = -35366322248LL;

	t88 = ((x697^x698)/(x699<=x700));

	if (t88 != -169363995528048LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x710 = INT8_MAX;
	int32_t x711 = -16;
	int8_t x712 = INT8_MAX;
	volatile int32_t t89 = -13;

	t89 = ((x709^x710)/(x711<=x712));

	if (t89 != 65) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x717 = 49U;
	static int8_t x718 = INT8_MAX;
	int16_t x719 = INT16_MAX;
	uint64_t x720 = 1038714027LLU;

	t90 = ((x717^x718)/(x719<=x720));

	if (t90 != 78U) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint32_t x721 = 112U;
	int32_t x722 = INT32_MIN;
	static int16_t x724 = INT16_MIN;
	volatile uint32_t t91 = 13240U;

	t91 = ((x721^x722)/(x723<=x724));

	if (t91 != 2147483760U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x745 = -1;
	volatile int8_t x746 = -1;
	int32_t x747 = -1;
	uint8_t x748 = UINT8_MAX;
	int32_t t92 = 2072171;

	t92 = ((x745^x746)/(x747<=x748));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x749 = UINT32_MAX;
	int8_t x750 = INT8_MAX;
	uint64_t x751 = 109965398LLU;
	static uint32_t t93 = 3511155U;

	t93 = ((x749^x750)/(x751<=x752));

	if (t93 != 4294967168U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x757 = UINT64_MAX;
	int8_t x758 = 24;
	static uint8_t x759 = 24U;
	uint16_t x760 = UINT16_MAX;

	t94 = ((x757^x758)/(x759<=x760));

	if (t94 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x761 = 1U;
	static volatile uint32_t x762 = UINT32_MAX;
	static uint32_t x764 = 9294433U;
	uint32_t t95 = 123570598U;

	t95 = ((x761^x762)/(x763<=x764));

	if (t95 != 4294967294U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x765 = 0LLU;
	static volatile int16_t x766 = INT16_MIN;
	int32_t x767 = INT32_MIN;
	uint64_t t96 = 1378510LLU;

	t96 = ((x765^x766)/(x767<=x768));

	if (t96 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x769 = 99;
	int32_t x770 = 156512091;
	int64_t x772 = INT64_MIN;
	static int32_t t97 = 329;

	t97 = ((x769^x770)/(x771<=x772));

	if (t97 != 156512056) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x773 = UINT8_MAX;
	uint64_t x774 = 3707643878641984523LLU;
	uint32_t x775 = 11052242U;

	t98 = ((x773^x774)/(x775<=x776));

	if (t98 != 3707643878641984756LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x782 = -1759717026579745947LL;
	int8_t x783 = INT8_MAX;
	int64_t t99 = 33168602LL;

	t99 = ((x781^x782)/(x783<=x784));

	if (t99 != -1759717026579745946LL) { NG(); } else { ; }
	
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

