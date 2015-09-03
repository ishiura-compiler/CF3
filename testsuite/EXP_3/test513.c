#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x1 = -1;
int32_t x3 = -5;
volatile int8_t x55 = 0;
int16_t x59 = -1;
static volatile uint32_t t3 = 34791U;
static int32_t x73 = INT32_MIN;
volatile int64_t x74 = INT64_MAX;
volatile uint16_t x75 = 5768U;
uint32_t x81 = UINT32_MAX;
int32_t x88 = INT32_MIN;
int32_t x92 = 6233285;
int16_t x100 = -11;
int64_t x109 = 1004LL;
int64_t x110 = 681054LL;
uint8_t x116 = 33U;
static volatile int32_t t11 = 16718731;
int32_t x152 = 41320;
volatile uint64_t t17 = 253682421040366229LLU;
volatile int32_t t18 = -1;
volatile uint32_t t19 = 27772U;
static int8_t x258 = INT8_MIN;
static int8_t x267 = INT8_MAX;
int32_t t22 = -50931147;
volatile int32_t x280 = INT32_MIN;
static int16_t x298 = 2966;
int16_t x300 = INT16_MIN;
int8_t x307 = INT8_MIN;
int8_t x322 = 59;
volatile uint32_t t28 = 2U;
uint16_t x326 = UINT16_MAX;
int64_t x328 = -1896768LL;
volatile int8_t x329 = 0;
volatile int64_t t30 = INT64_MAX;
volatile uint32_t t32 = 511548676U;
uint64_t t34 = 9435790776586972LLU;
volatile uint8_t x416 = 3U;
int8_t x419 = -1;
int16_t x420 = INT16_MIN;
static int8_t x424 = -1;
int64_t x453 = INT64_MAX;
int16_t x454 = -1;
int64_t t41 = 540314122092315LL;
volatile uint64_t x458 = 8824903101888652648LLU;
uint8_t x459 = 32U;
uint8_t x460 = UINT8_MAX;
int16_t x467 = 0;
uint8_t x473 = UINT8_MAX;
static int32_t t44 = 147319;
int32_t x520 = INT32_MIN;
int32_t x542 = -62013472;
int8_t x543 = -27;
int64_t x544 = -112265937187LL;
int32_t x560 = INT32_MAX;
int16_t x565 = INT16_MAX;
volatile uint16_t x576 = UINT16_MAX;
static int32_t x608 = INT32_MIN;
int8_t x616 = INT8_MIN;
volatile int64_t t55 = -3211954LL;
uint32_t x618 = UINT32_MAX;
int32_t x620 = INT32_MIN;
static uint8_t x669 = 7U;
int32_t t57 = -2;
uint64_t x701 = UINT64_MAX;
static uint64_t x716 = 538422302383346646LLU;
int32_t t61 = 0;
uint32_t x805 = UINT32_MAX;
volatile uint16_t x807 = 332U;
int64_t x821 = 10974860320975LL;
volatile uint32_t x850 = 2201694U;
uint32_t x855 = 16591U;
int16_t x868 = -1;
volatile uint16_t x913 = 426U;
int8_t x914 = 1;
int64_t x916 = 16046289052384LL;
int8_t x918 = INT8_MIN;
static volatile int16_t x919 = INT16_MAX;
uint16_t x920 = UINT16_MAX;
uint32_t x926 = UINT32_MAX;
volatile uint8_t x943 = UINT8_MAX;
volatile int16_t x948 = INT16_MAX;
uint32_t x955 = 1160U;
int8_t x966 = INT8_MAX;
uint8_t x984 = 26U;
volatile int32_t t82 = 51;
uint64_t x989 = 66475816088753LLU;
static int32_t x991 = -1;
volatile int16_t x998 = 0;
static int16_t x1034 = 14;
static int32_t x1067 = -1;
static uint64_t x1108 = UINT64_MAX;
uint16_t x1112 = 1U;
uint64_t x1146 = 2058369165849LLU;
volatile int16_t x1148 = -1;
static int16_t x1152 = 2493;
int16_t x1161 = INT16_MIN;
static int8_t x1164 = INT8_MIN;
uint32_t t96 = 340U;
uint64_t x1171 = 1730452605808009LLU;
volatile int32_t t98 = 90694;


void f0(void) {
	int16_t x2 = 240;
	int8_t x4 = INT8_MAX;
	volatile int32_t t0 = -1365840;

	t0 = ((x1+x2)<<(x3/x4));

	if (t0 != 239) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x9 = 19897U;
	int8_t x10 = INT8_MIN;
	volatile int8_t x11 = INT8_MAX;
	int32_t x12 = 146123;
	int32_t t1 = 37515;

	t1 = ((x9+x10)<<(x11/x12));

	if (t1 != 19769) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x53 = -1LL;
	volatile int64_t x54 = INT64_MAX;
	static volatile uint64_t x56 = UINT64_MAX;
	static int64_t t2 = -26529528LL;

	t2 = ((x53+x54)<<(x55/x56));

	if (t2 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x57 = 3;
	uint32_t x58 = 3133U;
	int64_t x60 = INT64_MIN;

	t3 = ((x57+x58)<<(x59/x60));

	if (t3 != 3136U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x76 = INT64_MIN;
	volatile int64_t t4 = -64LL;

	t4 = ((x73+x74)<<(x75/x76));

	if (t4 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x82 = INT16_MIN;
	static int64_t x83 = -1LL;
	static int32_t x84 = -1;
	uint32_t t5 = 1094U;

	t5 = ((x81+x82)<<(x83/x84));

	if (t5 != 4294901758U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x85 = 0;
	int64_t x86 = INT64_MAX;
	static volatile int8_t x87 = -1;
	volatile int64_t t6 = INT64_MAX;

	t6 = ((x85+x86)<<(x87/x88));

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x89 = -3428729085980103LL;
	int64_t x90 = INT64_MAX;
	int8_t x91 = -35;
	int64_t t7 = -672225413663894LL;

	t7 = ((x89+x90)<<(x91/x92));

	if (t7 != 9219943307768795704LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x97 = -1;
	volatile uint16_t x98 = UINT16_MAX;
	int16_t x99 = -1;
	volatile int32_t t8 = -1464671;

	t8 = ((x97+x98)<<(x99/x100));

	if (t8 != 65534) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x105 = -22;
	uint16_t x106 = 15317U;
	uint8_t x107 = 1U;
	int64_t x108 = INT64_MIN;
	int32_t t9 = 32;

	t9 = ((x105+x106)<<(x107/x108));

	if (t9 != 15295) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x111 = INT8_MIN;
	volatile int32_t x112 = -9124;
	volatile int64_t t10 = 2182765835520LL;

	t10 = ((x109+x110)<<(x111/x112));

	if (t10 != 682058LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x113 = 291U;
	uint16_t x114 = UINT16_MAX;
	int64_t x115 = -1LL;

	t11 = ((x113+x114)<<(x115/x116));

	if (t11 != 65826) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x129 = UINT16_MAX;
	int16_t x130 = -1;
	int32_t x131 = -39;
	int32_t x132 = INT32_MIN;
	int32_t t12 = 1;

	t12 = ((x129+x130)<<(x131/x132));

	if (t12 != 65534) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x137 = -1LL;
	uint16_t x138 = 3180U;
	static int8_t x139 = INT8_MIN;
	int32_t x140 = INT32_MAX;
	int64_t t13 = -28LL;

	t13 = ((x137+x138)<<(x139/x140));

	if (t13 != 3179LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x145 = 1;
	static uint8_t x146 = UINT8_MAX;
	int64_t x147 = -1LL;
	int16_t x148 = INT16_MIN;
	int32_t t14 = -26;

	t14 = ((x145+x146)<<(x147/x148));

	if (t14 != 256) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x149 = 217047357LLU;
	volatile int16_t x150 = INT16_MIN;
	static uint16_t x151 = 167U;
	static volatile uint64_t t15 = 1563925LLU;

	t15 = ((x149+x150)<<(x151/x152));

	if (t15 != 217014589LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x201 = -1;
	int8_t x202 = INT8_MAX;
	uint64_t x203 = 5LLU;
	volatile uint32_t x204 = 542935175U;
	int32_t t16 = 9618833;

	t16 = ((x201+x202)<<(x203/x204));

	if (t16 != 126) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x221 = INT8_MIN;
	volatile uint64_t x222 = 697921LLU;
	volatile uint64_t x223 = 338763260907400544LLU;
	uint64_t x224 = UINT64_MAX;

	t17 = ((x221+x222)<<(x223/x224));

	if (t17 != 697793LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x229 = -1;
	uint16_t x230 = UINT16_MAX;
	int64_t x231 = 2656LL;
	volatile int64_t x232 = INT64_MIN;

	t18 = ((x229+x230)<<(x231/x232));

	if (t18 != 65534) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x241 = UINT16_MAX;
	static uint32_t x242 = 96268544U;
	volatile int16_t x243 = -37;
	uint16_t x244 = UINT16_MAX;

	t19 = ((x241+x242)<<(x243/x244));

	if (t19 != 96334079U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x257 = INT64_MAX;
	static volatile uint32_t x259 = 22U;
	int16_t x260 = INT16_MIN;
	volatile int64_t t20 = -16179160676LL;

	t20 = ((x257+x258)<<(x259/x260));

	if (t20 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x265 = 6U;
	static int32_t x266 = -3558;
	volatile int16_t x268 = INT16_MAX;
	volatile uint32_t t21 = 22U;

	t21 = ((x265+x266)<<(x267/x268));

	if (t21 != 4294963744U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x269 = 5U;
	volatile int16_t x270 = 19;
	static uint8_t x271 = 15U;
	volatile int8_t x272 = 1;

	t22 = ((x269+x270)<<(x271/x272));

	if (t22 != 786432) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x277 = INT8_MAX;
	int32_t x278 = 356;
	int32_t x279 = INT32_MAX;
	volatile int32_t t23 = -7;

	t23 = ((x277+x278)<<(x279/x280));

	if (t23 != 483) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x281 = INT16_MAX;
	int8_t x282 = INT8_MIN;
	volatile int8_t x283 = 3;
	static volatile uint8_t x284 = 26U;
	volatile int32_t t24 = 2616856;

	t24 = ((x281+x282)<<(x283/x284));

	if (t24 != 32639) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x297 = -1LL;
	static int8_t x299 = INT8_MIN;
	static int64_t t25 = 1234521105499777625LL;

	t25 = ((x297+x298)<<(x299/x300));

	if (t25 != 2965LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x305 = INT32_MIN;
	uint64_t x306 = UINT64_MAX;
	static int64_t x308 = 32306465160LL;
	volatile uint64_t t26 = 767LLU;

	t26 = ((x305+x306)<<(x307/x308));

	if (t26 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x313 = 3948LLU;
	int16_t x314 = INT16_MIN;
	int32_t x315 = INT32_MAX;
	int64_t x316 = INT64_MAX;
	volatile uint64_t t27 = 57381643344LLU;

	t27 = ((x313+x314)<<(x315/x316));

	if (t27 != 18446744073709522796LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x321 = 14665993U;
	static uint8_t x323 = UINT8_MAX;
	int32_t x324 = -1844275;

	t28 = ((x321+x322)<<(x323/x324));

	if (t28 != 14666052U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x325 = INT8_MAX;
	int32_t x327 = -34;
	volatile int32_t t29 = 65293127;

	t29 = ((x325+x326)<<(x327/x328));

	if (t29 != 65662) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x330 = INT64_MAX;
	static uint64_t x331 = 245LLU;
	int16_t x332 = INT16_MAX;

	t30 = ((x329+x330)<<(x331/x332));

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x337 = UINT16_MAX;
	int16_t x338 = INT16_MIN;
	int32_t x339 = 501;
	int32_t x340 = INT32_MAX;
	volatile int32_t t31 = -354123237;

	t31 = ((x337+x338)<<(x339/x340));

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x349 = INT8_MAX;
	uint32_t x350 = UINT32_MAX;
	int8_t x351 = -1;
	int32_t x352 = INT32_MAX;

	t32 = ((x349+x350)<<(x351/x352));

	if (t32 != 126U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x369 = -1;
	static volatile int16_t x370 = 5595;
	static volatile int16_t x371 = -1;
	int64_t x372 = -1LL;
	volatile int32_t t33 = -33892;

	t33 = ((x369+x370)<<(x371/x372));

	if (t33 != 11188) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x385 = INT32_MAX;
	uint64_t x386 = 2039372984972772942LLU;
	uint32_t x387 = 374U;
	uint32_t x388 = UINT32_MAX;

	t34 = ((x385+x386)<<(x387/x388));

	if (t34 != 2039372987120256589LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x405 = INT32_MAX;
	uint64_t x406 = 27542513LLU;
	int16_t x407 = INT16_MAX;
	uint64_t x408 = UINT64_MAX;
	volatile uint64_t t35 = 23111LLU;

	t35 = ((x405+x406)<<(x407/x408));

	if (t35 != 2175026160LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x413 = 3053U;
	int16_t x414 = INT16_MIN;
	static uint8_t x415 = 34U;
	uint32_t t36 = 12021U;

	t36 = ((x413+x414)<<(x415/x416));

	if (t36 != 4234110976U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x417 = UINT8_MAX;
	int16_t x418 = -7;
	volatile int32_t t37 = -387;

	t37 = ((x417+x418)<<(x419/x420));

	if (t37 != 248) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x421 = INT8_MIN;
	int64_t x422 = 1557155106494LL;
	uint32_t x423 = 1373U;
	int64_t t38 = 16588254667375LL;

	t38 = ((x421+x422)<<(x423/x424));

	if (t38 != 1557155106366LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x433 = INT64_MAX;
	static volatile int32_t x434 = INT32_MIN;
	int16_t x435 = -4;
	uint8_t x436 = UINT8_MAX;
	int64_t t39 = -12670477LL;

	t39 = ((x433+x434)<<(x435/x436));

	if (t39 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x449 = 24813U;
	int32_t x450 = -13;
	volatile uint64_t x451 = 43LLU;
	int8_t x452 = INT8_MIN;
	volatile int32_t t40 = 0;

	t40 = ((x449+x450)<<(x451/x452));

	if (t40 != 24800) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x455 = 0U;
	int64_t x456 = 9919762804494LL;

	t41 = ((x453+x454)<<(x455/x456));

	if (t41 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x457 = -173;
	uint64_t t42 = 361761LLU;

	t42 = ((x457+x458)<<(x459/x460));

	if (t42 != 8824903101888652475LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x465 = UINT8_MAX;
	int16_t x466 = 3;
	uint32_t x468 = 68293458U;
	volatile int32_t t43 = -1226;

	t43 = ((x465+x466)<<(x467/x468));

	if (t43 != 258) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x474 = UINT8_MAX;
	uint16_t x475 = 3514U;
	uint64_t x476 = UINT64_MAX;

	t44 = ((x473+x474)<<(x475/x476));

	if (t44 != 510) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x509 = 57028691319603753LL;
	int16_t x510 = INT16_MIN;
	static int8_t x511 = INT8_MAX;
	volatile int64_t x512 = INT64_MAX;
	static volatile int64_t t45 = 9136164730LL;

	t45 = ((x509+x510)<<(x511/x512));

	if (t45 != 57028691319570985LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x517 = INT8_MAX;
	int16_t x518 = 158;
	volatile int16_t x519 = -5657;
	int32_t t46 = 396291;

	t46 = ((x517+x518)<<(x519/x520));

	if (t46 != 285) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x521 = 9108155087LLU;
	int32_t x522 = INT32_MAX;
	uint32_t x523 = 242U;
	static volatile int64_t x524 = INT64_MIN;
	volatile uint64_t t47 = 3673536355830767LLU;

	t47 = ((x521+x522)<<(x523/x524));

	if (t47 != 11255638734LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x529 = -1;
	static volatile uint16_t x530 = 89U;
	volatile int16_t x531 = 55;
	static int8_t x532 = INT8_MAX;
	int32_t t48 = -6833;

	t48 = ((x529+x530)<<(x531/x532));

	if (t48 != 88) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x541 = 15764U;
	uint32_t t49 = 205610U;

	t49 = ((x541+x542)<<(x543/x544));

	if (t49 != 4232969588U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x557 = 18U;
	int8_t x558 = INT8_MAX;
	int32_t x559 = -1;
	uint32_t t50 = 5114U;

	t50 = ((x557+x558)<<(x559/x560));

	if (t50 != 145U) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x566 = 3551175481049271891LLU;
	int8_t x567 = 11;
	uint8_t x568 = UINT8_MAX;
	uint64_t t51 = 14LLU;

	t51 = ((x565+x566)<<(x567/x568));

	if (t51 != 3551175481049304658LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x569 = 470;
	int32_t x570 = -1;
	static int8_t x571 = -14;
	int16_t x572 = INT16_MIN;
	volatile int32_t t52 = 5;

	t52 = ((x569+x570)<<(x571/x572));

	if (t52 != 469) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x573 = 1;
	uint16_t x574 = UINT16_MAX;
	volatile int8_t x575 = -14;
	int32_t t53 = 67454;

	t53 = ((x573+x574)<<(x575/x576));

	if (t53 != 65536) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x605 = INT8_MAX;
	int64_t x606 = 453266277579751LL;
	static volatile int8_t x607 = INT8_MAX;
	static int64_t t54 = 2739071LL;

	t54 = ((x605+x606)<<(x607/x608));

	if (t54 != 453266277579878LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x613 = UINT8_MAX;
	int64_t x614 = 70LL;
	int16_t x615 = -60;

	t55 = ((x613+x614)<<(x615/x616));

	if (t55 != 325LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x617 = 462006047086152LLU;
	int8_t x619 = INT8_MIN;
	volatile uint64_t t56 = 225281260207399647LLU;

	t56 = ((x617+x618)<<(x619/x620));

	if (t56 != 462010342053447LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x670 = INT8_MAX;
	uint8_t x671 = UINT8_MAX;
	uint64_t x672 = 7576LLU;

	t57 = ((x669+x670)<<(x671/x672));

	if (t57 != 134) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x702 = 0;
	static int8_t x703 = INT8_MAX;
	int32_t x704 = 81896;
	uint64_t t58 = UINT64_MAX;

	t58 = ((x701+x702)<<(x703/x704));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x705 = 280979423977231942LLU;
	int32_t x706 = INT32_MIN;
	int8_t x707 = 1;
	static uint64_t x708 = 4777557517603LLU;
	volatile uint64_t t59 = 194602808417152LLU;

	t59 = ((x705+x706)<<(x707/x708));

	if (t59 != 280979421829748294LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x713 = 99U;
	uint32_t x714 = UINT32_MAX;
	volatile uint64_t x715 = 7304807624191535LLU;
	volatile uint32_t t60 = 1075711U;

	t60 = ((x713+x714)<<(x715/x716));

	if (t60 != 98U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x725 = 481U;
	int32_t x726 = -1;
	static int16_t x727 = -55;
	int64_t x728 = -62LL;

	t61 = ((x725+x726)<<(x727/x728));

	if (t61 != 480) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x737 = INT8_MAX;
	uint8_t x738 = 0U;
	int8_t x739 = 11;
	int32_t x740 = -1714;
	int32_t t62 = 1947194;

	t62 = ((x737+x738)<<(x739/x740));

	if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x741 = -1;
	static int16_t x742 = INT16_MAX;
	static int32_t x743 = 22;
	uint16_t x744 = UINT16_MAX;
	static int32_t t63 = -3835757;

	t63 = ((x741+x742)<<(x743/x744));

	if (t63 != 32766) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x777 = INT16_MIN;
	uint64_t x778 = 1115842806088882029LLU;
	int32_t x779 = INT32_MIN;
	static int64_t x780 = INT64_MAX;
	static volatile uint64_t t64 = 2351836950541454LLU;

	t64 = ((x777+x778)<<(x779/x780));

	if (t64 != 1115842806088849261LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x806 = 5804449782LLU;
	volatile uint16_t x808 = 513U;
	volatile uint64_t t65 = 8767514215995LLU;

	t65 = ((x805+x806)<<(x807/x808));

	if (t65 != 10099417077LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x822 = INT32_MIN;
	static int16_t x823 = 11;
	int64_t x824 = 1351094360947760LL;
	static int64_t t66 = 228281334839938534LL;

	t66 = ((x821+x822)<<(x823/x824));

	if (t66 != 10972712837327LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x825 = 190823LL;
	uint8_t x826 = 14U;
	int8_t x827 = 1;
	int64_t x828 = INT64_MIN;
	int64_t t67 = 1018761973173969LL;

	t67 = ((x825+x826)<<(x827/x828));

	if (t67 != 190837LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x845 = 0U;
	int16_t x846 = INT16_MAX;
	uint16_t x847 = 12U;
	int16_t x848 = INT16_MIN;
	int32_t t68 = -93851212;

	t68 = ((x845+x846)<<(x847/x848));

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x849 = INT8_MIN;
	uint8_t x851 = 4U;
	static int64_t x852 = INT64_MIN;
	static volatile uint32_t t69 = 52974626U;

	t69 = ((x849+x850)<<(x851/x852));

	if (t69 != 2201566U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x853 = UINT32_MAX;
	uint8_t x854 = 0U;
	int64_t x856 = INT64_MIN;
	static volatile uint32_t t70 = UINT32_MAX;

	t70 = ((x853+x854)<<(x855/x856));

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x857 = 7;
	volatile uint64_t x858 = 698912332211440LLU;
	static int8_t x859 = 11;
	static int8_t x860 = INT8_MIN;
	volatile uint64_t t71 = 75LLU;

	t71 = ((x857+x858)<<(x859/x860));

	if (t71 != 698912332211447LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x865 = 2615U;
	static uint8_t x866 = 2U;
	uint32_t x867 = 505U;
	static volatile uint32_t t72 = 155542598U;

	t72 = ((x865+x866)<<(x867/x868));

	if (t72 != 2617U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x915 = 12620;
	volatile int32_t t73 = -1216138;

	t73 = ((x913+x914)<<(x915/x916));

	if (t73 != 427) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x917 = INT32_MAX;
	int32_t t74 = -4502;

	t74 = ((x917+x918)<<(x919/x920));

	if (t74 != 2147483519) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x921 = 11U;
	uint16_t x922 = 2172U;
	int8_t x923 = 0;
	static uint8_t x924 = 54U;
	int32_t t75 = 2206471;

	t75 = ((x921+x922)<<(x923/x924));

	if (t75 != 2183) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x925 = -1;
	int8_t x927 = INT8_MAX;
	int32_t x928 = INT32_MAX;
	volatile uint32_t t76 = 1350306603U;

	t76 = ((x925+x926)<<(x927/x928));

	if (t76 != 4294967294U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x933 = 11145892935LL;
	static int8_t x934 = 57;
	int64_t x935 = -1LL;
	static int16_t x936 = -1;
	int64_t t77 = 253LL;

	t77 = ((x933+x934)<<(x935/x936));

	if (t77 != 22291785984LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x941 = -1LL;
	uint64_t x942 = 1606991187071065LLU;
	uint32_t x944 = 5U;
	volatile uint64_t t78 = 592502817863LLU;

	t78 = ((x941+x942)<<(x943/x944));

	if (t78 != 9421530420459077632LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x945 = UINT64_MAX;
	int8_t x946 = INT8_MIN;
	static int32_t x947 = 42164;
	volatile uint64_t t79 = 131871578217341LLU;

	t79 = ((x945+x946)<<(x947/x948));

	if (t79 != 18446744073709551358LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x953 = 47U;
	int8_t x954 = -1;
	int64_t x956 = -22841671703041LL;
	int32_t t80 = 1;

	t80 = ((x953+x954)<<(x955/x956));

	if (t80 != 46) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x965 = UINT64_MAX;
	int16_t x967 = INT16_MAX;
	static int64_t x968 = INT64_MIN;
	volatile uint64_t t81 = 325616815204284LLU;

	t81 = ((x965+x966)<<(x967/x968));

	if (t81 != 126LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x981 = INT16_MAX;
	int32_t x982 = -1;
	volatile int8_t x983 = 0;

	t82 = ((x981+x982)<<(x983/x984));

	if (t82 != 32766) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x990 = INT8_MIN;
	volatile int16_t x992 = -22;
	volatile uint64_t t83 = 387159LLU;

	t83 = ((x989+x990)<<(x991/x992));

	if (t83 != 66475816088625LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint16_t x997 = 27750U;
	uint8_t x999 = 31U;
	volatile uint8_t x1000 = 110U;
	volatile int32_t t84 = 1950;

	t84 = ((x997+x998)<<(x999/x1000));

	if (t84 != 27750) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x1021 = 116752U;
	int32_t x1022 = INT32_MIN;
	static uint8_t x1023 = UINT8_MAX;
	int8_t x1024 = INT8_MAX;
	volatile uint32_t t85 = 162U;

	t85 = ((x1021+x1022)<<(x1023/x1024));

	if (t85 != 467008U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x1033 = 209439499U;
	uint64_t x1035 = 12LLU;
	int16_t x1036 = -1;
	volatile uint32_t t86 = 2U;

	t86 = ((x1033+x1034)<<(x1035/x1036));

	if (t86 != 209439513U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x1041 = UINT64_MAX;
	int32_t x1042 = INT32_MIN;
	uint64_t x1043 = UINT64_MAX;
	static int16_t x1044 = INT16_MIN;
	volatile uint64_t t87 = 7440657114LLU;

	t87 = ((x1041+x1042)<<(x1043/x1044));

	if (t87 != 18446744069414584318LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x1049 = INT8_MAX;
	uint16_t x1050 = UINT16_MAX;
	volatile int16_t x1051 = -1;
	uint8_t x1052 = UINT8_MAX;
	static int32_t t88 = -3889;

	t88 = ((x1049+x1050)<<(x1051/x1052));

	if (t88 != 65662) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x1065 = 1U;
	uint8_t x1066 = 91U;
	int8_t x1068 = -1;
	volatile int32_t t89 = 4963236;

	t89 = ((x1065+x1066)<<(x1067/x1068));

	if (t89 != 184) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x1077 = 13U;
	uint16_t x1078 = 827U;
	static uint8_t x1079 = 11U;
	int8_t x1080 = 7;
	volatile int32_t t90 = 65272;

	t90 = ((x1077+x1078)<<(x1079/x1080));

	if (t90 != 1680) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x1089 = 0U;
	uint16_t x1090 = UINT16_MAX;
	int16_t x1091 = 4;
	uint32_t x1092 = UINT32_MAX;
	int32_t t91 = -226949577;

	t91 = ((x1089+x1090)<<(x1091/x1092));

	if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x1105 = 13768715583457033LL;
	static volatile int32_t x1106 = INT32_MAX;
	volatile uint32_t x1107 = 2U;
	int64_t t92 = 4804LL;

	t92 = ((x1105+x1106)<<(x1107/x1108));

	if (t92 != 13768717730940680LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint16_t x1109 = 462U;
	int8_t x1110 = -1;
	volatile uint16_t x1111 = 18U;
	int32_t t93 = 0;

	t93 = ((x1109+x1110)<<(x1111/x1112));

	if (t93 != 120848384) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x1145 = -1;
	uint64_t x1147 = UINT64_MAX;
	volatile uint64_t t94 = 49728LLU;

	t94 = ((x1145+x1146)<<(x1147/x1148));

	if (t94 != 4116738331696LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x1149 = 16U;
	uint8_t x1150 = 1U;
	uint64_t x1151 = 14577LLU;
	uint32_t t95 = 1464492151U;

	t95 = ((x1149+x1150)<<(x1151/x1152));

	if (t95 != 544U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x1162 = UINT32_MAX;
	uint32_t x1163 = 12709U;

	t96 = ((x1161+x1162)<<(x1163/x1164));

	if (t96 != 4294934527U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x1169 = 935;
	int8_t x1170 = INT8_MAX;
	static int64_t x1172 = INT64_MIN;
	int32_t t97 = -299986;

	t97 = ((x1169+x1170)<<(x1171/x1172));

	if (t97 != 1062) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x1173 = 175;
	uint8_t x1174 = 13U;
	int32_t x1175 = -6;
	int16_t x1176 = INT16_MAX;

	t98 = ((x1173+x1174)<<(x1175/x1176));

	if (t98 != 188) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x1209 = UINT64_MAX;
	int32_t x1210 = -1;
	uint16_t x1211 = 8U;
	int32_t x1212 = INT32_MIN;
	uint64_t t99 = 789LLU;

	t99 = ((x1209+x1210)<<(x1211/x1212));

	if (t99 != 18446744073709551614LLU) { NG(); } else { ; }
	
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

