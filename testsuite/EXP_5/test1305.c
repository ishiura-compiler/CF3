#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
volatile uint8_t x3 = UINT8_MAX;
int32_t t0 = -4;
int16_t x22 = -1562;
int8_t x31 = INT8_MIN;
int16_t x42 = 1;
static int64_t x53 = INT64_MAX;
int8_t x59 = -1;
int16_t x71 = INT16_MIN;
volatile int32_t t7 = -467889366;
volatile int8_t x76 = 58;
volatile int32_t t12 = 313620548;
volatile int8_t x111 = 1;
uint32_t x118 = 7185202U;
int32_t t15 = 0;
static int8_t x154 = INT8_MIN;
int64_t x157 = -14LL;
uint64_t x169 = 21288956638LLU;
volatile uint16_t x172 = UINT16_MAX;
int32_t x211 = 446310201;
int16_t x212 = INT16_MAX;
uint64_t t20 = 1848486520836675LLU;
int8_t x223 = INT8_MIN;
int64_t x230 = INT64_MAX;
int8_t x237 = 7;
int32_t x238 = INT32_MIN;
int64_t x240 = 23379642259594032LL;
uint32_t x249 = 1863U;
volatile uint16_t x256 = 3206U;
int64_t x266 = -167073LL;
static int32_t t29 = 174;
static int32_t x270 = INT32_MAX;
int64_t x271 = INT64_MIN;
int32_t t30 = -7949;
uint64_t x273 = UINT64_MAX;
uint16_t x277 = 11916U;
static int32_t x293 = 7868;
static volatile int64_t x312 = 1567451LL;
static int32_t t36 = 2;
static volatile uint32_t x328 = UINT32_MAX;
volatile int8_t x331 = -1;
uint8_t x332 = UINT8_MAX;
volatile int32_t t39 = 19;
uint16_t x336 = 1U;
volatile int32_t t41 = -28467;
static volatile int32_t x350 = 68;
volatile int64_t x351 = INT64_MAX;
int32_t t43 = -9210780;
uint16_t x361 = 13U;
uint64_t x376 = 252762426345LLU;
static volatile int32_t t45 = -192283096;
static volatile int32_t t46 = -465791574;
int16_t x394 = -5;
uint64_t x395 = 127720128442268948LLU;
volatile int32_t t48 = -65;
static int16_t x453 = INT16_MAX;
uint32_t x465 = 7635881U;
volatile uint16_t x468 = 120U;
uint16_t x469 = 20U;
volatile int32_t t54 = 251;
int32_t t55 = -25061;
volatile int8_t x503 = INT8_MIN;
uint64_t t59 = 3925316834996LLU;
static uint32_t t61 = 3810U;
static int16_t x530 = 8284;
int64_t x532 = 0LL;
int32_t t63 = 2634066;
static uint8_t x537 = 10U;
volatile uint8_t x540 = 1U;
static volatile int32_t t64 = -81606789;
int16_t x543 = INT16_MIN;
uint64_t x544 = 50350376LLU;
static volatile uint8_t x546 = 4U;
uint32_t x555 = 2U;
uint16_t x556 = 74U;
uint64_t x558 = 3992740824784184669LLU;
volatile uint64_t x559 = 3LLU;
volatile int32_t t68 = -4883;
uint8_t x582 = 1U;
int32_t x584 = 219664;
int64_t t71 = -9LL;
static volatile uint8_t x620 = UINT8_MAX;
uint16_t x628 = 0U;
uint64_t x638 = 10347LLU;
int32_t x667 = -3303;
uint32_t x675 = 159U;
volatile uint64_t t80 = 2006786172103635LLU;
int64_t x694 = INT64_MAX;
volatile int32_t x695 = -1;
uint32_t x696 = 1709907447U;
static int32_t x697 = INT32_MIN;
uint64_t x699 = 56508LLU;
int64_t x708 = INT64_MAX;
static uint16_t x712 = 101U;
int32_t x717 = INT32_MIN;
uint8_t x720 = UINT8_MAX;
volatile int32_t t85 = 177765848;
int64_t x730 = INT64_MIN;
int64_t x737 = -1LL;
static int64_t x774 = INT64_MIN;
volatile int32_t t96 = 216568;
volatile uint64_t x795 = 4727LLU;
uint16_t x796 = 113U;
int64_t t97 = -1LL;
volatile int32_t t98 = 183662465;
uint64_t x801 = 165116342232771LLU;


void f0(void) {
	int8_t x2 = 1;
	uint8_t x4 = 55U;

	t0 = (x1%((x2==x3)<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x21 = -1;
	volatile int8_t x23 = INT8_MAX;
	static volatile int32_t x24 = INT32_MAX;
	static int32_t t1 = -86815;

	t1 = (x21%((x22==x23)<=x24));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x29 = -10;
	static int64_t x30 = INT64_MIN;
	volatile uint16_t x32 = 11916U;
	volatile int32_t t2 = 498800205;

	t2 = (x29%((x30==x31)<=x32));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x41 = INT8_MIN;
	int16_t x43 = INT16_MAX;
	uint32_t x44 = UINT32_MAX;
	static volatile int32_t t3 = 15098;

	t3 = (x41%((x42==x43)<=x44));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x45 = -1;
	uint64_t x46 = UINT64_MAX;
	int64_t x47 = -1LL;
	int16_t x48 = 3;
	int32_t t4 = -838563;

	t4 = (x45%((x46==x47)<=x48));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x54 = 1U;
	int32_t x55 = 264947582;
	uint16_t x56 = UINT16_MAX;
	int64_t t5 = 0LL;

	t5 = (x53%((x54==x55)<=x56));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x57 = UINT8_MAX;
	uint8_t x58 = UINT8_MAX;
	volatile uint64_t x60 = UINT64_MAX;
	volatile int32_t t6 = 57411;

	t6 = (x57%((x58==x59)<=x60));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x69 = INT32_MIN;
	uint8_t x70 = 54U;
	int16_t x72 = INT16_MAX;

	t7 = (x69%((x70==x71)<=x72));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x73 = INT16_MIN;
	int8_t x74 = INT8_MIN;
	static volatile uint32_t x75 = 861561939U;
	int32_t t8 = 11;

	t8 = (x73%((x74==x75)<=x76));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x89 = INT16_MIN;
	int64_t x90 = INT64_MIN;
	int16_t x91 = INT16_MIN;
	int64_t x92 = 3828LL;
	volatile int32_t t9 = -27498514;

	t9 = (x89%((x90==x91)<=x92));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x97 = 0U;
	int64_t x98 = INT64_MIN;
	static volatile int16_t x99 = -24;
	static uint32_t x100 = UINT32_MAX;
	int32_t t10 = -5;

	t10 = (x97%((x98==x99)<=x100));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x101 = -1;
	int16_t x102 = 218;
	int64_t x103 = -7574617246915LL;
	static uint64_t x104 = UINT64_MAX;
	int32_t t11 = -1;

	t11 = (x101%((x102==x103)<=x104));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x105 = UINT8_MAX;
	int64_t x106 = INT64_MAX;
	uint8_t x107 = UINT8_MAX;
	uint64_t x108 = 5870872LLU;

	t12 = (x105%((x106==x107)<=x108));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x109 = 1387;
	volatile int32_t x110 = INT32_MIN;
	int8_t x112 = 0;
	volatile int32_t t13 = 23603;

	t13 = (x109%((x110==x111)<=x112));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x117 = -4;
	static int32_t x119 = -1139648;
	int8_t x120 = INT8_MAX;
	static int32_t t14 = 1530161;

	t14 = (x117%((x118==x119)<=x120));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x149 = INT8_MAX;
	uint64_t x150 = UINT64_MAX;
	static int8_t x151 = INT8_MIN;
	int16_t x152 = 814;

	t15 = (x149%((x150==x151)<=x152));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x153 = 46453U;
	volatile int8_t x155 = INT8_MAX;
	uint16_t x156 = UINT16_MAX;
	volatile uint32_t t16 = 361756377U;

	t16 = (x153%((x154==x155)<=x156));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x158 = 815108LLU;
	int8_t x159 = 51;
	uint8_t x160 = 3U;
	volatile int64_t t17 = 433460258LL;

	t17 = (x157%((x158==x159)<=x160));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x170 = INT16_MAX;
	static uint32_t x171 = 44064335U;
	volatile uint64_t t18 = 55189LLU;

	t18 = (x169%((x170==x171)<=x172));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x205 = INT16_MIN;
	uint32_t x206 = UINT32_MAX;
	int32_t x207 = -1;
	uint16_t x208 = 3895U;
	volatile int32_t t19 = -5014651;

	t19 = (x205%((x206==x207)<=x208));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x209 = UINT64_MAX;
	int32_t x210 = INT32_MAX;

	t20 = (x209%((x210==x211)<=x212));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x221 = -1LL;
	static uint64_t x222 = 2845939467LLU;
	uint8_t x224 = 63U;
	volatile int64_t t21 = -2LL;

	t21 = (x221%((x222==x223)<=x224));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x225 = INT32_MIN;
	volatile uint8_t x226 = 0U;
	int32_t x227 = INT32_MAX;
	int32_t x228 = INT32_MAX;
	int32_t t22 = 1153823;

	t22 = (x225%((x226==x227)<=x228));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x229 = UINT32_MAX;
	volatile uint16_t x231 = UINT16_MAX;
	int64_t x232 = 16LL;
	volatile uint32_t t23 = 56295318U;

	t23 = (x229%((x230==x231)<=x232));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x239 = -1LL;
	int32_t t24 = -4138511;

	t24 = (x237%((x238==x239)<=x240));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x241 = 481977344U;
	int64_t x242 = -1LL;
	static uint64_t x243 = 102426184LLU;
	uint16_t x244 = 1U;
	uint32_t t25 = 58312647U;

	t25 = (x241%((x242==x243)<=x244));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x250 = 1;
	int32_t x251 = 1;
	uint32_t x252 = UINT32_MAX;
	volatile uint32_t t26 = 14854U;

	t26 = (x249%((x250==x251)<=x252));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x253 = 26558LL;
	uint16_t x254 = 24U;
	int64_t x255 = INT64_MAX;
	static int64_t t27 = -519341779LL;

	t27 = (x253%((x254==x255)<=x256));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x257 = UINT8_MAX;
	static int8_t x258 = -1;
	uint32_t x259 = 4379170U;
	uint64_t x260 = 26985281LLU;
	static int32_t t28 = 12251976;

	t28 = (x257%((x258==x259)<=x260));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x265 = 15;
	int8_t x267 = INT8_MIN;
	int64_t x268 = 2132924947LL;

	t29 = (x265%((x266==x267)<=x268));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x269 = INT16_MAX;
	volatile int32_t x272 = INT32_MAX;

	t30 = (x269%((x270==x271)<=x272));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x274 = INT8_MIN;
	int32_t x275 = INT32_MIN;
	uint16_t x276 = 337U;
	uint64_t t31 = 71756354917437LLU;

	t31 = (x273%((x274==x275)<=x276));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x278 = 47U;
	int64_t x279 = -240938224LL;
	static int32_t x280 = INT32_MAX;
	volatile int32_t t32 = -7621;

	t32 = (x277%((x278==x279)<=x280));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x289 = 0U;
	static uint64_t x290 = UINT64_MAX;
	volatile int32_t x291 = INT32_MIN;
	int32_t x292 = 994;
	int32_t t33 = 500161658;

	t33 = (x289%((x290==x291)<=x292));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x294 = -450;
	uint32_t x295 = 1U;
	static uint64_t x296 = UINT64_MAX;
	static int32_t t34 = -13155084;

	t34 = (x293%((x294==x295)<=x296));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x309 = 1058108389927LLU;
	static uint32_t x310 = 3336821U;
	volatile uint64_t x311 = 3708079162LLU;
	volatile uint64_t t35 = 2783247LLU;

	t35 = (x309%((x310==x311)<=x312));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x317 = INT8_MAX;
	int16_t x318 = INT16_MAX;
	uint64_t x319 = 205577209561012685LLU;
	static uint32_t x320 = UINT32_MAX;

	t36 = (x317%((x318==x319)<=x320));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x321 = -27;
	int16_t x322 = INT16_MAX;
	int8_t x323 = -1;
	int8_t x324 = 0;
	int32_t t37 = 1;

	t37 = (x321%((x322==x323)<=x324));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x325 = 1;
	static uint64_t x326 = UINT64_MAX;
	static uint32_t x327 = 1692606U;
	int32_t t38 = -2416;

	t38 = (x325%((x326==x327)<=x328));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x329 = UINT16_MAX;
	int32_t x330 = -10;

	t39 = (x329%((x330==x331)<=x332));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x333 = 16;
	volatile int16_t x334 = 31;
	uint32_t x335 = UINT32_MAX;
	static int32_t t40 = 20;

	t40 = (x333%((x334==x335)<=x336));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x341 = -9668;
	static int16_t x342 = -9;
	static int32_t x343 = 2509;
	uint32_t x344 = UINT32_MAX;

	t41 = (x341%((x342==x343)<=x344));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x349 = INT8_MAX;
	int64_t x352 = INT64_MAX;
	int32_t t42 = 7;

	t42 = (x349%((x350==x351)<=x352));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x357 = -1;
	int8_t x358 = -1;
	int32_t x359 = INT32_MAX;
	int32_t x360 = INT32_MAX;

	t43 = (x357%((x358==x359)<=x360));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x362 = -1;
	uint64_t x363 = 43854319481514214LLU;
	uint8_t x364 = UINT8_MAX;
	volatile int32_t t44 = -1;

	t44 = (x361%((x362==x363)<=x364));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x373 = -1;
	uint32_t x374 = 2563491U;
	static int16_t x375 = INT16_MAX;

	t45 = (x373%((x374==x375)<=x376));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x381 = INT16_MIN;
	volatile uint32_t x382 = UINT32_MAX;
	static uint8_t x383 = 0U;
	int8_t x384 = INT8_MAX;

	t46 = (x381%((x382==x383)<=x384));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x393 = -1;
	uint32_t x396 = 0U;
	int32_t t47 = -54754845;

	t47 = (x393%((x394==x395)<=x396));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x421 = 1249;
	int8_t x422 = INT8_MIN;
	int32_t x423 = INT32_MIN;
	uint64_t x424 = 14236374LLU;

	t48 = (x421%((x422==x423)<=x424));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x425 = INT8_MIN;
	static int8_t x426 = 1;
	volatile int16_t x427 = INT16_MAX;
	static volatile int16_t x428 = INT16_MAX;
	volatile int32_t t49 = 0;

	t49 = (x425%((x426==x427)<=x428));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x429 = INT16_MAX;
	static uint8_t x430 = UINT8_MAX;
	static uint32_t x431 = 725602128U;
	int64_t x432 = 30469842683838542LL;
	volatile int32_t t50 = -6093;

	t50 = (x429%((x430==x431)<=x432));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x437 = 1;
	int16_t x438 = 1;
	int64_t x439 = INT64_MIN;
	static uint64_t x440 = 240981744219LLU;
	volatile int32_t t51 = -747;

	t51 = (x437%((x438==x439)<=x440));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x454 = UINT64_MAX;
	static int32_t x455 = INT32_MIN;
	uint32_t x456 = UINT32_MAX;
	volatile int32_t t52 = -879;

	t52 = (x453%((x454==x455)<=x456));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x466 = -335;
	uint64_t x467 = 711LLU;
	uint32_t t53 = 54391314U;

	t53 = (x465%((x466==x467)<=x468));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x470 = 30U;
	int16_t x471 = INT16_MIN;
	uint8_t x472 = 4U;

	t54 = (x469%((x470==x471)<=x472));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x477 = -1;
	int8_t x478 = INT8_MAX;
	uint8_t x479 = 74U;
	static int32_t x480 = INT32_MAX;

	t55 = (x477%((x478==x479)<=x480));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x485 = INT64_MAX;
	uint32_t x486 = 33U;
	volatile int8_t x487 = INT8_MAX;
	uint16_t x488 = UINT16_MAX;
	volatile int64_t t56 = -91026074812959LL;

	t56 = (x485%((x486==x487)<=x488));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x497 = INT64_MIN;
	int32_t x498 = INT32_MIN;
	int64_t x499 = INT64_MIN;
	uint64_t x500 = 803766044720LLU;
	int64_t t57 = 195873595LL;

	t57 = (x497%((x498==x499)<=x500));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x501 = 3452484LLU;
	int64_t x502 = -1740LL;
	int8_t x504 = 0;
	uint64_t t58 = 2211854597738525LLU;

	t58 = (x501%((x502==x503)<=x504));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x509 = 11194LLU;
	int32_t x510 = 6;
	uint16_t x511 = 20733U;
	int8_t x512 = INT8_MAX;

	t59 = (x509%((x510==x511)<=x512));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x521 = 53226501U;
	uint32_t x522 = 1U;
	int64_t x523 = -1LL;
	uint8_t x524 = 0U;
	volatile uint32_t t60 = 206U;

	t60 = (x521%((x522==x523)<=x524));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x525 = UINT32_MAX;
	int16_t x526 = -1682;
	int16_t x527 = INT16_MIN;
	uint8_t x528 = UINT8_MAX;

	t61 = (x525%((x526==x527)<=x528));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint16_t x529 = 1856U;
	int16_t x531 = -1;
	volatile int32_t t62 = -75936;

	t62 = (x529%((x530==x531)<=x532));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x533 = 798734400;
	int64_t x534 = -1LL;
	volatile int32_t x535 = 875657419;
	uint32_t x536 = 58778U;

	t63 = (x533%((x534==x535)<=x536));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x538 = INT32_MIN;
	uint32_t x539 = UINT32_MAX;

	t64 = (x537%((x538==x539)<=x540));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x541 = -1LL;
	static int64_t x542 = -1LL;
	static int64_t t65 = 999167017499373238LL;

	t65 = (x541%((x542==x543)<=x544));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x545 = INT16_MAX;
	static volatile int8_t x547 = INT8_MIN;
	uint32_t x548 = 1500663U;
	volatile int32_t t66 = -1545;

	t66 = (x545%((x546==x547)<=x548));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x553 = INT64_MIN;
	int8_t x554 = -14;
	volatile int64_t t67 = 1833947050LL;

	t67 = (x553%((x554==x555)<=x556));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x557 = INT32_MIN;
	uint64_t x560 = UINT64_MAX;

	t68 = (x557%((x558==x559)<=x560));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x565 = INT8_MIN;
	static int64_t x566 = -1LL;
	static int32_t x567 = -184372;
	int64_t x568 = 4479649251LL;
	volatile int32_t t69 = 730387;

	t69 = (x565%((x566==x567)<=x568));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x577 = -1;
	static int64_t x578 = -1LL;
	uint16_t x579 = 64U;
	int32_t x580 = INT32_MAX;
	volatile int32_t t70 = -12;

	t70 = (x577%((x578==x579)<=x580));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x581 = INT64_MIN;
	volatile uint32_t x583 = 2U;

	t71 = (x581%((x582==x583)<=x584));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x585 = INT16_MIN;
	volatile int64_t x586 = INT64_MIN;
	uint16_t x587 = 29934U;
	uint64_t x588 = 1888903650LLU;
	int32_t t72 = -5;

	t72 = (x585%((x586==x587)<=x588));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x617 = INT64_MIN;
	int16_t x618 = INT16_MIN;
	static uint8_t x619 = 2U;
	int64_t t73 = -3884550575399091LL;

	t73 = (x617%((x618==x619)<=x620));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint32_t x625 = UINT32_MAX;
	int16_t x626 = -1;
	uint16_t x627 = 0U;
	uint32_t t74 = 78025848U;

	t74 = (x625%((x626==x627)<=x628));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x629 = INT64_MIN;
	volatile int64_t x630 = -208447LL;
	int8_t x631 = INT8_MIN;
	uint64_t x632 = UINT64_MAX;
	static int64_t t75 = -1202624LL;

	t75 = (x629%((x630==x631)<=x632));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x633 = UINT16_MAX;
	volatile int8_t x634 = -1;
	volatile uint32_t x635 = UINT32_MAX;
	uint16_t x636 = 7U;
	int32_t t76 = 4887;

	t76 = (x633%((x634==x635)<=x636));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x637 = 0;
	volatile int64_t x639 = -9723689245LL;
	uint8_t x640 = 2U;
	volatile int32_t t77 = -59;

	t77 = (x637%((x638==x639)<=x640));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x665 = 30270U;
	int32_t x666 = -6990986;
	uint16_t x668 = UINT16_MAX;
	static uint32_t t78 = 3973U;

	t78 = (x665%((x666==x667)<=x668));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x673 = UINT16_MAX;
	volatile int64_t x674 = INT64_MIN;
	int64_t x676 = INT64_MAX;
	int32_t t79 = -3;

	t79 = (x673%((x674==x675)<=x676));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x689 = UINT64_MAX;
	static uint16_t x690 = UINT16_MAX;
	int32_t x691 = -1;
	static uint8_t x692 = 52U;

	t80 = (x689%((x690==x691)<=x692));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x693 = -1;
	static int32_t t81 = -3;

	t81 = (x693%((x694==x695)<=x696));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x698 = 4U;
	uint16_t x700 = 1U;
	volatile int32_t t82 = -181559;

	t82 = (x697%((x698==x699)<=x700));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint64_t x705 = UINT64_MAX;
	uint8_t x706 = UINT8_MAX;
	int16_t x707 = -184;
	uint64_t t83 = 28LLU;

	t83 = (x705%((x706==x707)<=x708));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x709 = 2U;
	uint32_t x710 = UINT32_MAX;
	int8_t x711 = INT8_MIN;
	int32_t t84 = 990980;

	t84 = (x709%((x710==x711)<=x712));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x718 = INT16_MIN;
	volatile int8_t x719 = INT8_MIN;

	t85 = (x717%((x718==x719)<=x720));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x721 = INT8_MAX;
	int16_t x722 = INT16_MAX;
	int16_t x723 = INT16_MAX;
	static int32_t x724 = INT32_MAX;
	volatile int32_t t86 = -214;

	t86 = (x721%((x722==x723)<=x724));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x725 = -5;
	uint64_t x726 = 168389LLU;
	volatile int64_t x727 = INT64_MIN;
	uint64_t x728 = 270977957719LLU;
	static int32_t t87 = 336903586;

	t87 = (x725%((x726==x727)<=x728));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x729 = -1;
	int8_t x731 = INT8_MIN;
	int32_t x732 = INT32_MAX;
	volatile int32_t t88 = 97;

	t88 = (x729%((x730==x731)<=x732));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x733 = UINT16_MAX;
	int32_t x734 = -1;
	int8_t x735 = INT8_MIN;
	static uint32_t x736 = UINT32_MAX;
	int32_t t89 = -439;

	t89 = (x733%((x734==x735)<=x736));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x738 = UINT64_MAX;
	int8_t x739 = INT8_MIN;
	volatile uint32_t x740 = UINT32_MAX;
	volatile int64_t t90 = -17230821931570LL;

	t90 = (x737%((x738==x739)<=x740));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x741 = -1LL;
	uint32_t x742 = 5U;
	uint16_t x743 = 889U;
	int8_t x744 = INT8_MAX;
	int64_t t91 = 1460398083371LL;

	t91 = (x741%((x742==x743)<=x744));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x749 = 1690972384633LLU;
	static volatile int64_t x750 = 56698583776607LL;
	int32_t x751 = INT32_MAX;
	int64_t x752 = INT64_MAX;
	volatile uint64_t t92 = 13779349LLU;

	t92 = (x749%((x750==x751)<=x752));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x757 = UINT8_MAX;
	int8_t x758 = INT8_MIN;
	volatile uint16_t x759 = 125U;
	int32_t x760 = 9;
	int32_t t93 = 1;

	t93 = (x757%((x758==x759)<=x760));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x769 = 191U;
	int8_t x770 = INT8_MAX;
	int64_t x771 = INT64_MIN;
	volatile uint32_t x772 = 34U;
	int32_t t94 = -154620886;

	t94 = (x769%((x770==x771)<=x772));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x773 = INT64_MIN;
	uint16_t x775 = 73U;
	uint16_t x776 = 3115U;
	int64_t t95 = 1744582LL;

	t95 = (x773%((x774==x775)<=x776));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x781 = -1;
	int16_t x782 = INT16_MIN;
	int16_t x783 = INT16_MIN;
	uint64_t x784 = 91186LLU;

	t96 = (x781%((x782==x783)<=x784));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x793 = 1339852509651662862LL;
	int16_t x794 = INT16_MIN;

	t97 = (x793%((x794==x795)<=x796));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x797 = -13613;
	int32_t x798 = -2;
	uint16_t x799 = UINT16_MAX;
	volatile uint64_t x800 = UINT64_MAX;

	t98 = (x797%((x798==x799)<=x800));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x802 = 14;
	int32_t x803 = INT32_MIN;
	static volatile uint64_t x804 = 312988443LLU;
	volatile uint64_t t99 = 54950LLU;

	t99 = (x801%((x802==x803)<=x804));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

