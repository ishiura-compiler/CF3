#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 172LLU;
int16_t x26 = INT16_MIN;
volatile uint64_t t2 = 158576LLU;
volatile int8_t x59 = INT8_MIN;
uint64_t x64 = 4197708565697LLU;
volatile uint64_t t4 = 946434424528392LLU;
static uint16_t x76 = UINT16_MAX;
static int64_t x86 = INT64_MAX;
int16_t x87 = INT16_MIN;
uint32_t t7 = 288U;
volatile uint64_t x114 = UINT64_MAX;
int64_t x116 = INT64_MIN;
static int64_t x175 = -1LL;
int8_t x186 = INT8_MIN;
int64_t x193 = -1LL;
uint64_t x195 = 15LLU;
uint64_t t16 = 1LLU;
volatile int32_t t20 = 108;
uint32_t x269 = 1032132U;
int8_t x270 = INT8_MIN;
static uint32_t x281 = UINT32_MAX;
uint64_t t24 = 8942928812273343999LLU;
static int32_t x292 = INT32_MIN;
volatile int32_t t26 = -335;
uint16_t x312 = UINT16_MAX;
static volatile uint64_t t27 = 2533049LLU;
uint64_t x316 = 2LLU;
uint32_t x327 = 4408815U;
int64_t x350 = INT64_MIN;
static int16_t x351 = 2;
static volatile int64_t t33 = 323823264523900LL;
int32_t x357 = -31014;
int8_t x360 = INT8_MIN;
static volatile uint16_t x361 = 724U;
static uint32_t x364 = UINT32_MAX;
int64_t x368 = INT64_MAX;
int32_t x387 = INT32_MIN;
volatile int64_t x389 = -14921140LL;
volatile int8_t x391 = -1;
int16_t x402 = INT16_MAX;
int8_t x404 = INT8_MIN;
int32_t t43 = -663;
volatile int64_t x428 = -134030354LL;
volatile int16_t x434 = -1;
int8_t x435 = 1;
volatile int64_t t46 = -764929LL;
uint64_t x437 = 19016322696LLU;
static int32_t x440 = 5593;
int16_t x442 = INT16_MAX;
volatile int64_t t52 = 671927137158548LL;
volatile int32_t t55 = -642458055;
int32_t x505 = INT32_MIN;
volatile int32_t t56 = -397;
int8_t x509 = -1;
int64_t x510 = INT64_MIN;
int16_t x528 = INT16_MAX;
int64_t x548 = -1LL;
static int16_t x561 = -730;
uint8_t x562 = 10U;
static uint64_t x574 = UINT64_MAX;
int64_t x575 = INT64_MAX;
uint16_t x579 = 167U;
static volatile uint64_t t65 = 448374960598125635LLU;
int64_t x600 = -3888LL;
int16_t x601 = INT16_MIN;
static uint32_t x603 = UINT32_MAX;
static uint8_t x615 = 3U;
int16_t x624 = -459;
volatile int64_t x634 = -6867089750280353LL;
int64_t x648 = 738LL;
int64_t x664 = -2111702297967718LL;
uint16_t x680 = 96U;
volatile int8_t x692 = -1;
int16_t x733 = INT16_MIN;
uint16_t x734 = 9U;
int32_t x738 = 222;
volatile uint16_t x741 = 230U;
static int32_t x743 = -1;
static uint16_t x764 = UINT16_MAX;
int32_t t85 = -1158702;
volatile int64_t x771 = -1LL;
uint8_t x773 = UINT8_MAX;
volatile uint8_t x775 = 30U;
uint64_t x798 = 183766180LLU;
static int8_t x799 = 31;
int32_t x800 = -2643;
uint64_t x803 = 2LLU;
uint8_t x807 = 1U;
int32_t t93 = -731;
int64_t x818 = INT64_MAX;
static uint32_t x823 = UINT32_MAX;
uint8_t x827 = UINT8_MAX;
int64_t t96 = 19840LL;
static uint16_t x830 = UINT16_MAX;
static volatile int8_t x831 = INT8_MIN;
int64_t t97 = -278575651296LL;
int32_t t99 = 4923;


void f0(void) {
	uint32_t x13 = UINT32_MAX;
	static int16_t x14 = 817;
	uint64_t x15 = 30LLU;
	int8_t x16 = INT8_MIN;

	t0 = ((x13%(x14/x15))-x16);

	if (t0 != 149LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x25 = 33U;
	int16_t x27 = -2;
	int16_t x28 = 306;
	int32_t t1 = -1;

	t1 = ((x25%(x26/x27))-x28);

	if (t1 != -273) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x33 = 152937375516559020LLU;
	int64_t x34 = INT64_MIN;
	volatile uint8_t x35 = 49U;
	int32_t x36 = INT32_MIN;

	t2 = ((x33%(x34/x35))-x36);

	if (t2 != 152937377664042668LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x57 = INT8_MIN;
	int32_t x58 = -10213374;
	volatile int8_t x60 = -1;
	int32_t t3 = -125349;

	t3 = ((x57%(x58/x59))-x60);

	if (t3 != -127) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x61 = -1;
	int32_t x62 = INT32_MIN;
	uint64_t x63 = 285466698367298909LLU;

	t4 = ((x61%(x62/x63))-x64);

	if (t4 != 18446739876000985982LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x73 = UINT8_MAX;
	static uint64_t x74 = 124094LLU;
	uint64_t x75 = 7816LLU;
	static uint64_t t5 = 62419556260859LLU;

	t5 = ((x73%(x74/x75))-x76);

	if (t5 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x85 = -13292649LL;
	int16_t x88 = INT16_MIN;
	int64_t t6 = 18282282LL;

	t6 = ((x85%(x86/x87))-x88);

	if (t6 != -13259881LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x89 = UINT32_MAX;
	uint32_t x90 = UINT32_MAX;
	int16_t x91 = 11402;
	static int8_t x92 = INT8_MIN;

	t7 = ((x89%(x90/x91))-x92);

	if (t7 != 5053U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x105 = -7;
	int16_t x106 = INT16_MIN;
	static uint8_t x107 = 9U;
	static int32_t x108 = -19;
	volatile int32_t t8 = -26785;

	t8 = ((x105%(x106/x107))-x108);

	if (t8 != 12) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x113 = UINT64_MAX;
	static int8_t x115 = INT8_MIN;
	volatile uint64_t t9 = 1LLU;

	t9 = ((x113%(x114/x115))-x116);

	if (t9 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x125 = -9;
	int16_t x126 = INT16_MIN;
	uint32_t x127 = 130006212U;
	uint32_t x128 = UINT32_MAX;
	volatile uint32_t t10 = 51526U;

	t10 = ((x125%(x126/x127))-x128);

	if (t10 != 29U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x141 = INT8_MIN;
	uint32_t x142 = 1743069156U;
	uint8_t x143 = 5U;
	int16_t x144 = INT16_MIN;
	uint32_t t11 = 14432U;

	t11 = ((x141%(x142/x143))-x144);

	if (t11 != 111633964U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x149 = 0U;
	int16_t x150 = INT16_MIN;
	static int16_t x151 = INT16_MIN;
	int8_t x152 = -1;
	int32_t t12 = 0;

	t12 = ((x149%(x150/x151))-x152);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x173 = 882U;
	int32_t x174 = INT32_MAX;
	uint8_t x176 = UINT8_MAX;
	int64_t t13 = -251514317979LL;

	t13 = ((x173%(x174/x175))-x176);

	if (t13 != 627LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x185 = -1;
	static int8_t x187 = 5;
	int16_t x188 = INT16_MIN;
	static volatile int32_t t14 = 30755291;

	t14 = ((x185%(x186/x187))-x188);

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x189 = 4;
	int16_t x190 = INT16_MIN;
	uint64_t x191 = 24253801LLU;
	volatile int16_t x192 = -2;
	volatile uint64_t t15 = 27564042LLU;

	t15 = ((x189%(x190/x191))-x192);

	if (t15 != 6LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x194 = 23706U;
	uint8_t x196 = UINT8_MAX;

	t16 = ((x193%(x194/x195))-x196);

	if (t16 != 980LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x197 = -1LL;
	int64_t x198 = INT64_MIN;
	int32_t x199 = INT32_MIN;
	static uint64_t x200 = 7LLU;
	volatile uint64_t t17 = 2755397227LLU;

	t17 = ((x197%(x198/x199))-x200);

	if (t17 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x217 = -1;
	static int16_t x218 = INT16_MIN;
	volatile int16_t x219 = 25;
	int8_t x220 = INT8_MIN;
	volatile int32_t t18 = -1185529;

	t18 = ((x217%(x218/x219))-x220);

	if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x225 = 1723U;
	int16_t x226 = INT16_MIN;
	uint8_t x227 = UINT8_MAX;
	volatile int32_t x228 = 1840;
	uint32_t t19 = 7780U;

	t19 = ((x225%(x226/x227))-x228);

	if (t19 != 4294967179U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x233 = 6;
	static volatile int32_t x234 = INT32_MIN;
	volatile int32_t x235 = -12;
	static int8_t x236 = INT8_MIN;

	t20 = ((x233%(x234/x235))-x236);

	if (t20 != 134) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x249 = -1;
	uint32_t x250 = 324U;
	int8_t x251 = INT8_MAX;
	uint16_t x252 = 574U;
	static uint32_t t21 = 10481U;

	t21 = ((x249%(x250/x251))-x252);

	if (t21 != 4294966723U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x253 = INT64_MIN;
	volatile int32_t x254 = 108806;
	uint8_t x255 = 2U;
	uint8_t x256 = UINT8_MAX;
	int64_t t22 = -9LL;

	t22 = ((x253%(x254/x255))-x256);

	if (t22 != -10227LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x271 = INT8_MIN;
	static volatile int32_t x272 = 1;
	uint32_t t23 = UINT32_MAX;

	t23 = ((x269%(x270/x271))-x272);

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x282 = 1311144014638143830LL;
	int32_t x283 = -1;
	volatile uint64_t x284 = 23466674452863LLU;

	t24 = ((x281%(x282/x283))-x284);

	if (t24 != 18446720611330066048LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x289 = -15;
	int16_t x290 = -9;
	int16_t x291 = -1;
	int32_t t25 = -37163;

	t25 = ((x289%(x290/x291))-x292);

	if (t25 != 2147483642) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x297 = INT32_MIN;
	int8_t x298 = INT8_MAX;
	int16_t x299 = -1;
	static int16_t x300 = INT16_MIN;

	t26 = ((x297%(x298/x299))-x300);

	if (t26 != 32760) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x309 = INT64_MIN;
	int32_t x310 = INT32_MIN;
	static uint64_t x311 = 3692740LLU;

	t27 = ((x309%(x310/x311))-x312);

	if (t27 != 1073891233LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x313 = -254936845142501LL;
	static int16_t x314 = INT16_MIN;
	int16_t x315 = -1;
	volatile uint64_t t28 = 15212495238LLU;

	t28 = ((x313%(x314/x315))-x316);

	if (t28 != 18446744073709532697LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x317 = 0;
	uint32_t x318 = 251302855U;
	uint64_t x319 = 92079549LLU;
	int16_t x320 = -3792;
	uint64_t t29 = 0LLU;

	t29 = ((x317%(x318/x319))-x320);

	if (t29 != 3792LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x325 = 3U;
	int16_t x326 = INT16_MIN;
	int8_t x328 = INT8_MIN;
	static volatile uint32_t t30 = 0U;

	t30 = ((x325%(x326/x327))-x328);

	if (t30 != 131U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x329 = 422990368168314075LLU;
	uint16_t x330 = 1U;
	int64_t x331 = -1LL;
	int64_t x332 = 721184462902710048LL;
	volatile uint64_t t31 = 14563933LLU;

	t31 = ((x329%(x330/x331))-x332);

	if (t31 != 18148549978975155643LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x333 = INT64_MAX;
	int16_t x334 = INT16_MAX;
	int16_t x335 = 36;
	uint64_t x336 = 4184417LLU;
	static volatile uint64_t t32 = 25233892155243LLU;

	t32 = ((x333%(x334/x335))-x336);

	if (t32 != 18446744073705367206LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x349 = 0U;
	static int8_t x352 = -1;

	t33 = ((x349%(x350/x351))-x352);

	if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x353 = 8LL;
	uint8_t x354 = UINT8_MAX;
	static int8_t x355 = INT8_MIN;
	uint64_t x356 = 6LLU;
	uint64_t t34 = 12LLU;

	t34 = ((x353%(x354/x355))-x356);

	if (t34 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x358 = 56504412LLU;
	uint64_t x359 = 7LLU;
	uint64_t t35 = 1184826871276589258LLU;

	t35 = ((x357%(x358/x359))-x360);

	if (t35 != 1776756LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x362 = 359;
	int64_t x363 = -1LL;
	int64_t t36 = -8742250LL;

	t36 = ((x361%(x362/x363))-x364);

	if (t36 != -4294967289LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x365 = UINT8_MAX;
	volatile uint64_t x366 = 10368666077985LLU;
	static uint64_t x367 = 220067605LLU;
	static uint64_t t37 = 1511214LLU;

	t37 = ((x365%(x366/x367))-x368);

	if (t37 != 9223372036854776064LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x369 = -4;
	static int32_t x370 = INT32_MIN;
	int32_t x371 = INT32_MAX;
	int8_t x372 = INT8_MAX;
	volatile int32_t t38 = -124618737;

	t38 = ((x369%(x370/x371))-x372);

	if (t38 != -127) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x377 = -28;
	int16_t x378 = INT16_MIN;
	int8_t x379 = -1;
	int32_t x380 = -1;
	volatile int32_t t39 = -7815226;

	t39 = ((x377%(x378/x379))-x380);

	if (t39 != -27) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x385 = -2290331051519359450LL;
	int32_t x386 = INT32_MIN;
	int32_t x388 = INT32_MIN;
	int64_t t40 = -95206608852256LL;

	t40 = ((x385%(x386/x387))-x388);

	if (t40 != 2147483648LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x390 = 31U;
	volatile uint64_t x392 = 182939596142929764LLU;
	uint64_t t41 = 250LLU;

	t41 = ((x389%(x390/x391))-x392);

	if (t41 != 18263804477566621849LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x397 = -644706LL;
	static int16_t x398 = -6857;
	uint8_t x399 = UINT8_MAX;
	int32_t x400 = INT32_MAX;
	int64_t t42 = -67730046576095LL;

	t42 = ((x397%(x398/x399))-x400);

	if (t42 != -2147483657LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x401 = INT32_MIN;
	int32_t x403 = -1;

	t43 = ((x401%(x402/x403))-x404);

	if (t43 != 126) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x405 = 49U;
	uint16_t x406 = 4838U;
	int16_t x407 = -784;
	uint32_t x408 = 245291703U;
	volatile uint32_t t44 = 52834080U;

	t44 = ((x405%(x406/x407))-x408);

	if (t44 != 4049675594U) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x425 = INT64_MAX;
	uint64_t x426 = 3828194LLU;
	int16_t x427 = INT16_MAX;
	uint64_t t45 = 13027LLU;

	t45 = ((x425%(x426/x427))-x428);

	if (t45 != 134030365LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x433 = INT64_MIN;
	int8_t x436 = -1;

	t46 = ((x433%(x434/x435))-x436);

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x438 = INT64_MAX;
	int8_t x439 = -1;
	uint64_t t47 = 4062144645566612LLU;

	t47 = ((x437%(x438/x439))-x440);

	if (t47 != 19016317103LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x441 = INT8_MAX;
	int8_t x443 = INT8_MAX;
	uint32_t x444 = UINT32_MAX;
	static uint32_t t48 = 355869627U;

	t48 = ((x441%(x442/x443))-x444);

	if (t48 != 128U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x445 = INT8_MIN;
	volatile int8_t x446 = -1;
	int64_t x447 = -1LL;
	static uint8_t x448 = UINT8_MAX;
	volatile int64_t t49 = -4LL;

	t49 = ((x445%(x446/x447))-x448);

	if (t49 != -255LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x449 = -57422325445494875LL;
	uint64_t x450 = UINT64_MAX;
	static int64_t x451 = -1LL;
	int32_t x452 = INT32_MAX;
	volatile uint64_t t50 = 7LLU;

	t50 = ((x449%(x450/x451))-x452);

	if (t50 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x469 = UINT8_MAX;
	volatile int64_t x470 = -1LL;
	volatile uint64_t x471 = 16622774597493LLU;
	static uint32_t x472 = 21139133U;
	static volatile uint64_t t51 = 171620680LLU;

	t51 = ((x469%(x470/x471))-x472);

	if (t51 != 18446744073688412738LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x481 = 471;
	volatile int64_t x482 = INT64_MAX;
	uint16_t x483 = UINT16_MAX;
	uint8_t x484 = UINT8_MAX;

	t52 = ((x481%(x482/x483))-x484);

	if (t52 != 216LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x485 = 96127LL;
	int32_t x486 = -8888;
	uint8_t x487 = 1U;
	int64_t x488 = INT64_MAX;
	static int64_t t53 = -559LL;

	t53 = ((x485%(x486/x487))-x488);

	if (t53 != -9223372036854768560LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x493 = 0;
	static volatile uint8_t x494 = 22U;
	int8_t x495 = -1;
	int16_t x496 = INT16_MIN;
	volatile int32_t t54 = -212051929;

	t54 = ((x493%(x494/x495))-x496);

	if (t54 != 32768) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x497 = 4507U;
	volatile int32_t x498 = INT32_MIN;
	static volatile int8_t x499 = INT8_MIN;
	int8_t x500 = INT8_MIN;

	t55 = ((x497%(x498/x499))-x500);

	if (t55 != 4635) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x506 = INT16_MAX;
	int8_t x507 = INT8_MIN;
	uint16_t x508 = 22916U;

	t56 = ((x505%(x506/x507))-x508);

	if (t56 != -23044) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x511 = INT64_MIN;
	int16_t x512 = -12515;
	volatile int64_t t57 = -232745055334889677LL;

	t57 = ((x509%(x510/x511))-x512);

	if (t57 != 12515LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int64_t x513 = INT64_MIN;
	uint16_t x514 = UINT16_MAX;
	static volatile uint8_t x515 = 6U;
	static int16_t x516 = 0;
	volatile int64_t t58 = -4301LL;

	t58 = ((x513%(x514/x515))-x516);

	if (t58 != -128LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x525 = INT64_MIN;
	static uint16_t x526 = UINT16_MAX;
	static int8_t x527 = -2;
	static volatile int64_t t59 = 249LL;

	t59 = ((x525%(x526/x527))-x528);

	if (t59 != -32775LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x529 = INT64_MIN;
	static int16_t x530 = 1887;
	volatile uint16_t x531 = 1740U;
	uint64_t x532 = UINT64_MAX;
	static uint64_t t60 = 0LLU;

	t60 = ((x529%(x530/x531))-x532);

	if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x545 = -427376LL;
	static volatile int64_t x546 = INT64_MIN;
	static int8_t x547 = -16;
	volatile int64_t t61 = 14344407985022LL;

	t61 = ((x545%(x546/x547))-x548);

	if (t61 != -427375LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x549 = 1;
	int32_t x550 = 2407257;
	int16_t x551 = INT16_MAX;
	volatile int32_t x552 = INT32_MAX;
	volatile int32_t t62 = -3956748;

	t62 = ((x549%(x550/x551))-x552);

	if (t62 != -2147483646) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x563 = 1;
	uint32_t x564 = 2144812661U;
	uint32_t t63 = 1010853273U;

	t63 = ((x561%(x562/x563))-x564);

	if (t63 != 2150154635U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x573 = UINT8_MAX;
	int64_t x576 = -19214LL;
	uint64_t t64 = 20376549LLU;

	t64 = ((x573%(x574/x575))-x576);

	if (t64 != 19215LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x577 = 442187157504494LLU;
	uint64_t x578 = UINT64_MAX;
	uint32_t x580 = 28395778U;

	t65 = ((x577%(x578/x579))-x580);

	if (t65 != 442187129108716LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x597 = -5;
	static int64_t x598 = INT64_MIN;
	uint8_t x599 = UINT8_MAX;
	int64_t t66 = -2772350737032467LL;

	t66 = ((x597%(x598/x599))-x600);

	if (t66 != 3883LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x602 = -1;
	volatile int32_t x604 = INT32_MAX;
	uint32_t t67 = 1313U;

	t67 = ((x601%(x602/x603))-x604);

	if (t67 != 2147483649U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x609 = INT64_MIN;
	static int16_t x610 = INT16_MIN;
	volatile uint32_t x611 = 607U;
	uint32_t x612 = 8325366U;
	volatile int64_t t68 = -26415LL;

	t68 = ((x609%(x610/x611))-x612);

	if (t68 != -13888310LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x613 = 32316682U;
	volatile int32_t x614 = 23787775;
	volatile int32_t x616 = INT32_MIN;
	uint32_t t69 = 62176U;

	t69 = ((x613%(x614/x615))-x616);

	if (t69 != 2148083298U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x621 = UINT64_MAX;
	volatile int8_t x622 = INT8_MIN;
	volatile int32_t x623 = -1;
	volatile uint64_t t70 = 12LLU;

	t70 = ((x621%(x622/x623))-x624);

	if (t70 != 586LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x625 = 1;
	int32_t x626 = -30834;
	int64_t x627 = -1LL;
	static volatile int16_t x628 = -1;
	static int64_t t71 = -8208129564539661LL;

	t71 = ((x625%(x626/x627))-x628);

	if (t71 != 2LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x633 = 195145U;
	int16_t x635 = INT16_MIN;
	static int32_t x636 = -200709501;
	int64_t t72 = -36905152007231LL;

	t72 = ((x633%(x634/x635))-x636);

	if (t72 != 200904646LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x641 = 1912625;
	int64_t x642 = -45379096292705LL;
	uint16_t x643 = 3U;
	int8_t x644 = INT8_MAX;
	volatile int64_t t73 = -968LL;

	t73 = ((x641%(x642/x643))-x644);

	if (t73 != 1912498LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x645 = 208U;
	int16_t x646 = INT16_MAX;
	static volatile int8_t x647 = -1;
	int64_t t74 = -12081093839643358LL;

	t74 = ((x645%(x646/x647))-x648);

	if (t74 != -530LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x653 = -12;
	static int64_t x654 = INT64_MAX;
	static int64_t x655 = INT64_MAX;
	int8_t x656 = INT8_MIN;
	volatile int64_t t75 = 70326036844134LL;

	t75 = ((x653%(x654/x655))-x656);

	if (t75 != 128LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x661 = -320873630;
	int16_t x662 = -14;
	int32_t x663 = -1;
	volatile int64_t t76 = 0LL;

	t76 = ((x661%(x662/x663))-x664);

	if (t76 != 2111702297967718LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x677 = -2LL;
	uint8_t x678 = 3U;
	static int32_t x679 = -1;
	int64_t t77 = 2005641LL;

	t77 = ((x677%(x678/x679))-x680);

	if (t77 != -98LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x689 = 18;
	int64_t x690 = INT64_MIN;
	int32_t x691 = INT32_MAX;
	int64_t t78 = 86940720169770511LL;

	t78 = ((x689%(x690/x691))-x692);

	if (t78 != 19LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x697 = 2589LL;
	int8_t x698 = -1;
	uint32_t x699 = 696869U;
	int64_t x700 = 147LL;
	int64_t t79 = -256LL;

	t79 = ((x697%(x698/x699))-x700);

	if (t79 != 2442LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint32_t x717 = UINT32_MAX;
	static int8_t x718 = INT8_MIN;
	int8_t x719 = INT8_MAX;
	int32_t x720 = 15864251;
	volatile uint32_t t80 = 29U;

	t80 = ((x717%(x718/x719))-x720);

	if (t80 != 4279103045U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x729 = 1048803073;
	volatile uint16_t x730 = 428U;
	static int16_t x731 = 3;
	static int8_t x732 = -1;
	volatile int32_t t81 = -1;

	t81 = ((x729%(x730/x731))-x732);

	if (t81 != 20) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x735 = -1;
	uint16_t x736 = 5217U;
	int32_t t82 = 84;

	t82 = ((x733%(x734/x735))-x736);

	if (t82 != -5225) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x737 = -1551;
	static int16_t x739 = -1;
	static uint8_t x740 = 24U;
	static int32_t t83 = 0;

	t83 = ((x737%(x738/x739))-x740);

	if (t83 != -243) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x742 = INT16_MAX;
	volatile int64_t x744 = -1LL;
	volatile int64_t t84 = 791LL;

	t84 = ((x741%(x742/x743))-x744);

	if (t84 != 231LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x761 = INT8_MIN;
	int8_t x762 = -17;
	int8_t x763 = 13;

	t85 = ((x761%(x762/x763))-x764);

	if (t85 != -65535) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x769 = -14;
	int64_t x770 = -1LL;
	int64_t x772 = INT64_MAX;
	volatile int64_t t86 = 13LL;

	t86 = ((x769%(x770/x771))-x772);

	if (t86 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x774 = 2164U;
	int64_t x776 = -1LL;
	volatile int64_t t87 = 10610872LL;

	t87 = ((x773%(x774/x775))-x776);

	if (t87 != 40LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x781 = -1;
	int32_t x782 = -18054459;
	int16_t x783 = INT16_MAX;
	int16_t x784 = INT16_MIN;
	int32_t t88 = 818208;

	t88 = ((x781%(x782/x783))-x784);

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x789 = 14U;
	static int16_t x790 = INT16_MIN;
	int8_t x791 = INT8_MAX;
	int16_t x792 = INT16_MIN;
	volatile int32_t t89 = -2044;

	t89 = ((x789%(x790/x791))-x792);

	if (t89 != 32782) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x797 = -884;
	uint64_t t90 = 20246LLU;

	t90 = ((x797%(x798/x799))-x800);

	if (t90 != 3112927LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x801 = -59;
	static volatile uint8_t x802 = 16U;
	int32_t x804 = -9060;
	volatile uint64_t t91 = 3LLU;

	t91 = ((x801%(x802/x803))-x804);

	if (t91 != 9065LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x805 = INT8_MIN;
	int16_t x806 = INT16_MAX;
	int16_t x808 = INT16_MAX;
	int32_t t92 = 1279824;

	t92 = ((x805%(x806/x807))-x808);

	if (t92 != -32895) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x809 = INT32_MAX;
	int8_t x810 = INT8_MAX;
	int16_t x811 = 3;
	int8_t x812 = INT8_MIN;

	t93 = ((x809%(x810/x811))-x812);

	if (t93 != 129) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x817 = 1U;
	static volatile int32_t x819 = INT32_MIN;
	int8_t x820 = INT8_MIN;
	volatile int64_t t94 = -101149395695131LL;

	t94 = ((x817%(x818/x819))-x820);

	if (t94 != 129LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x821 = INT64_MIN;
	int64_t x822 = INT64_MAX;
	int16_t x824 = INT16_MIN;
	int64_t t95 = 7763380LL;

	t95 = ((x821%(x822/x823))-x824);

	if (t95 != 32768LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x825 = 1;
	volatile int64_t x826 = INT64_MAX;
	uint32_t x828 = UINT32_MAX;

	t96 = ((x825%(x826/x827))-x828);

	if (t96 != -4294967294LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x829 = INT64_MIN;
	int8_t x832 = -2;

	t97 = ((x829%(x830/x831))-x832);

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x841 = -241523382077150430LL;
	uint32_t x842 = 1U;
	int64_t x843 = -1LL;
	static uint64_t x844 = UINT64_MAX;
	volatile uint64_t t98 = 60519LLU;

	t98 = ((x841%(x842/x843))-x844);

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x861 = 1;
	int16_t x862 = INT16_MAX;
	static int8_t x863 = -1;
	volatile int16_t x864 = -1;

	t99 = ((x861%(x862/x863))-x864);

	if (t99 != 2) { NG(); } else { ; }
	
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

