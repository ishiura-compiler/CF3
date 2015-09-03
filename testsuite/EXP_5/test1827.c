#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x6 = 2U;
int64_t x8 = 9870724643085LL;
int64_t x9 = INT64_MAX;
uint64_t x12 = 41208441547022LLU;
int64_t t1 = 847288714519LL;
int32_t t3 = 0;
static int64_t x117 = INT64_MAX;
static int8_t x133 = INT8_MAX;
int32_t x137 = INT32_MAX;
uint32_t x139 = 2552U;
int32_t x141 = INT32_MAX;
static int32_t x161 = INT32_MAX;
int64_t x163 = INT64_MIN;
uint16_t x172 = 4U;
int32_t t13 = 0;
static int16_t x214 = -5141;
int8_t x215 = INT8_MAX;
int32_t t15 = -109395709;
int8_t x279 = INT8_MIN;
int32_t x285 = INT32_MAX;
static volatile int32_t t18 = INT32_MAX;
int16_t x311 = INT16_MIN;
static volatile uint32_t t22 = 1007U;
static int8_t x326 = 49;
volatile int64_t t24 = INT64_MAX;
uint8_t x337 = UINT8_MAX;
volatile int64_t x338 = -56518LL;
uint32_t x373 = 412U;
uint32_t x374 = UINT32_MAX;
static uint32_t t28 = 2443211U;
static volatile uint64_t x392 = UINT64_MAX;
int32_t x452 = INT32_MAX;
uint32_t x453 = UINT32_MAX;
static uint64_t x465 = 834223814LLU;
int64_t x466 = INT64_MAX;
uint64_t t33 = 3647093LLU;
int64_t t34 = 163625325934LL;
int16_t x502 = INT16_MIN;
int8_t x503 = INT8_MIN;
uint64_t x535 = UINT64_MAX;
uint64_t t41 = UINT64_MAX;
int64_t t43 = 2311551LL;
volatile int16_t x576 = INT16_MAX;
uint64_t x593 = 22464LLU;
int64_t x608 = INT64_MAX;
volatile int64_t t46 = INT64_MAX;
int16_t x639 = 9883;
uint8_t x696 = 1U;
int32_t t51 = -4066806;
int64_t x716 = 39LL;
static int16_t x724 = -310;
static int16_t x754 = 6;
uint8_t x769 = UINT8_MAX;
int32_t x802 = INT32_MIN;
volatile uint32_t t62 = 594793U;
volatile uint16_t x821 = UINT16_MAX;
static int64_t x823 = 1LL;
int32_t t64 = -7220988;
int16_t x846 = INT16_MAX;
int64_t x847 = INT64_MIN;
static volatile int32_t t65 = 84435337;
static uint8_t x852 = 0U;
static uint8_t x908 = 0U;
int64_t x919 = INT64_MIN;
uint16_t x923 = 1U;
static int64_t x949 = INT64_MAX;
uint8_t x973 = 28U;
int32_t t73 = -10280582;
static uint32_t x1006 = 594295048U;
uint16_t x1028 = UINT16_MAX;
int32_t x1052 = -1;
volatile uint64_t x1060 = 876836773932LLU;
int32_t t81 = 11;
volatile int64_t t82 = INT64_MAX;
int8_t x1083 = INT8_MIN;
volatile int32_t t84 = 1055415971;
static int16_t x1118 = INT16_MIN;
uint64_t x1119 = 1842035307747484453LLU;
uint32_t x1189 = UINT32_MAX;
int16_t x1192 = INT16_MAX;
volatile int8_t x1214 = 13;
static int16_t x1215 = 27;
volatile uint32_t t91 = 1411251U;
volatile uint32_t t92 = 12U;
uint64_t x1258 = 2059289212LLU;
uint32_t x1267 = 79700783U;
int16_t x1279 = -1;
int32_t x1280 = 125;
int32_t x1335 = INT32_MAX;


void f0(void) {
	uint8_t x5 = 7U;
	volatile int64_t x7 = INT64_MAX;
	volatile int32_t t0 = 14176;

	t0 = (x5>>((x6&x7)&x8));

	if (t0 != 7) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x10 = UINT16_MAX;
	static volatile uint8_t x11 = UINT8_MAX;

	t1 = (x9>>((x10&x11)&x12));

	if (t1 != 562949953421311LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x37 = 132303800U;
	uint32_t x38 = UINT32_MAX;
	int8_t x39 = INT8_MAX;
	uint16_t x40 = 3U;
	uint32_t t2 = 52113845U;

	t2 = (x37>>((x38&x39)&x40));

	if (t2 != 16537975U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x45 = UINT8_MAX;
	uint8_t x46 = UINT8_MAX;
	int64_t x47 = INT64_MIN;
	uint64_t x48 = 24801LLU;

	t3 = (x45>>((x46&x47)&x48));

	if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x49 = 1;
	int64_t x50 = 7LL;
	static uint8_t x51 = 4U;
	volatile int16_t x52 = INT16_MIN;
	int32_t t4 = -4010;

	t4 = (x49>>((x50&x51)&x52));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x105 = INT32_MAX;
	int64_t x106 = INT64_MAX;
	static uint32_t x107 = UINT32_MAX;
	uint8_t x108 = 5U;
	volatile int32_t t5 = -40915621;

	t5 = (x105>>((x106&x107)&x108));

	if (t5 != 67108863) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x118 = INT16_MAX;
	int8_t x119 = 1;
	int8_t x120 = INT8_MIN;
	int64_t t6 = INT64_MAX;

	t6 = (x117>>((x118&x119)&x120));

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x134 = INT32_MIN;
	uint32_t x135 = 49816439U;
	static int32_t x136 = -863823301;
	int32_t t7 = -1080;

	t7 = (x133>>((x134&x135)&x136));

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x138 = INT16_MIN;
	int8_t x140 = -1;
	volatile int32_t t8 = INT32_MAX;

	t8 = (x137>>((x138&x139)&x140));

	if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x142 = -3028;
	int32_t x143 = INT32_MIN;
	int32_t x144 = INT32_MAX;
	volatile int32_t t9 = INT32_MAX;

	t9 = (x141>>((x142&x143)&x144));

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x162 = 59445531U;
	uint16_t x164 = 8U;
	int32_t t10 = INT32_MAX;

	t10 = (x161>>((x162&x163)&x164));

	if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x169 = INT32_MAX;
	int32_t x170 = INT32_MIN;
	uint64_t x171 = 13474338LLU;
	static volatile int32_t t11 = INT32_MAX;

	t11 = (x169>>((x170&x171)&x172));

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x185 = 11U;
	int32_t x186 = INT32_MIN;
	int8_t x187 = -1;
	int16_t x188 = 15;
	int32_t t12 = 3;

	t12 = (x185>>((x186&x187)&x188));

	if (t12 != 11) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x201 = 1598;
	int32_t x202 = INT32_MIN;
	uint32_t x203 = 1162919243U;
	static uint16_t x204 = 212U;

	t13 = (x201>>((x202&x203)&x204));

	if (t13 != 1598) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x213 = 573;
	static int8_t x216 = 26;
	static volatile int32_t t14 = 370839853;

	t14 = (x213>>((x214&x215)&x216));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x245 = UINT8_MAX;
	uint64_t x246 = 6534168LLU;
	uint64_t x247 = 5LLU;
	uint8_t x248 = 25U;

	t15 = (x245>>((x246&x247)&x248));

	if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x257 = 94LL;
	int64_t x258 = -8011011155500924LL;
	uint8_t x259 = 8U;
	static volatile int16_t x260 = 7352;
	volatile int64_t t16 = 3916466LL;

	t16 = (x257>>((x258&x259)&x260));

	if (t16 != 94LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x277 = 23458LLU;
	uint32_t x278 = 11U;
	static int64_t x280 = INT64_MIN;
	volatile uint64_t t17 = 9669531LLU;

	t17 = (x277>>((x278&x279)&x280));

	if (t17 != 23458LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x286 = 96U;
	static int8_t x287 = 31;
	int64_t x288 = -1LL;

	t18 = (x285>>((x286&x287)&x288));

	if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x289 = 301U;
	int8_t x290 = INT8_MAX;
	volatile int16_t x291 = 1;
	int16_t x292 = INT16_MIN;
	uint32_t t19 = 3U;

	t19 = (x289>>((x290&x291)&x292));

	if (t19 != 301U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x297 = UINT32_MAX;
	uint8_t x298 = 12U;
	volatile int64_t x299 = INT64_MIN;
	static uint8_t x300 = 2U;
	volatile uint32_t t20 = UINT32_MAX;

	t20 = (x297>>((x298&x299)&x300));

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x301 = 25590947569019LLU;
	int8_t x302 = 0;
	static int16_t x303 = -1;
	static uint8_t x304 = UINT8_MAX;
	volatile uint64_t t21 = 328874652421140224LLU;

	t21 = (x301>>((x302&x303)&x304));

	if (t21 != 25590947569019LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x309 = 2145050U;
	uint64_t x310 = 69445967LLU;
	int8_t x312 = 57;

	t22 = (x309>>((x310&x311)&x312));

	if (t22 != 2145050U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x325 = 14139109U;
	int32_t x327 = -1;
	int32_t x328 = INT32_MIN;
	uint32_t t23 = 1884121U;

	t23 = (x325>>((x326&x327)&x328));

	if (t23 != 14139109U) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x333 = INT64_MAX;
	static int16_t x334 = 3;
	int8_t x335 = 0;
	uint64_t x336 = 933LLU;

	t24 = (x333>>((x334&x335)&x336));

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x339 = 44;
	volatile uint8_t x340 = 1U;
	volatile int32_t t25 = 950;

	t25 = (x337>>((x338&x339)&x340));

	if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x365 = UINT8_MAX;
	static int8_t x366 = 1;
	uint64_t x367 = 40503400LLU;
	int64_t x368 = INT64_MIN;
	volatile int32_t t26 = 52778;

	t26 = (x365>>((x366&x367)&x368));

	if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x375 = UINT8_MAX;
	uint8_t x376 = 10U;
	uint32_t t27 = 47U;

	t27 = (x373>>((x374&x375)&x376));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x385 = 8113599U;
	int16_t x386 = INT16_MAX;
	static uint64_t x387 = 72LLU;
	int8_t x388 = 4;

	t28 = (x385>>((x386&x387)&x388));

	if (t28 != 8113599U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x389 = 0U;
	uint8_t x390 = 4U;
	uint8_t x391 = 38U;
	static int32_t t29 = -196889;

	t29 = (x389>>((x390&x391)&x392));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x417 = 1223729589U;
	uint16_t x418 = UINT16_MAX;
	uint64_t x419 = UINT64_MAX;
	int32_t x420 = INT32_MIN;
	volatile uint32_t t30 = 88U;

	t30 = (x417>>((x418&x419)&x420));

	if (t30 != 1223729589U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x449 = INT32_MAX;
	int16_t x450 = 491;
	static int32_t x451 = INT32_MIN;
	static int32_t t31 = INT32_MAX;

	t31 = (x449>>((x450&x451)&x452));

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x454 = UINT8_MAX;
	static int8_t x455 = 0;
	volatile int32_t x456 = INT32_MIN;
	uint32_t t32 = UINT32_MAX;

	t32 = (x453>>((x454&x455)&x456));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x467 = INT16_MAX;
	uint16_t x468 = 1U;

	t33 = (x465>>((x466&x467)&x468));

	if (t33 != 417111907LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x469 = INT64_MAX;
	static int64_t x470 = INT64_MAX;
	uint64_t x471 = UINT64_MAX;
	volatile int16_t x472 = 12;

	t34 = (x469>>((x470&x471)&x472));

	if (t34 != 2251799813685247LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x481 = 68U;
	int64_t x482 = 1LL;
	static volatile int8_t x483 = 3;
	int32_t x484 = INT32_MIN;
	int32_t t35 = -13678569;

	t35 = (x481>>((x482&x483)&x484));

	if (t35 != 68) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x489 = 15;
	uint8_t x490 = UINT8_MAX;
	int16_t x491 = 10603;
	int32_t x492 = INT32_MIN;
	static volatile int32_t t36 = 0;

	t36 = (x489>>((x490&x491)&x492));

	if (t36 != 15) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x501 = INT16_MAX;
	uint8_t x504 = UINT8_MAX;
	int32_t t37 = 14;

	t37 = (x501>>((x502&x503)&x504));

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x509 = 0;
	uint32_t x510 = 32U;
	static int64_t x511 = INT64_MIN;
	int64_t x512 = INT64_MIN;
	static int32_t t38 = 8;

	t38 = (x509>>((x510&x511)&x512));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x521 = INT32_MAX;
	int16_t x522 = -1;
	uint16_t x523 = UINT16_MAX;
	static uint16_t x524 = 2U;
	volatile int32_t t39 = -852;

	t39 = (x521>>((x522&x523)&x524));

	if (t39 != 536870911) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x525 = UINT32_MAX;
	uint16_t x526 = 1687U;
	static volatile int32_t x527 = INT32_MIN;
	int16_t x528 = -1;
	uint32_t t40 = UINT32_MAX;

	t40 = (x525>>((x526&x527)&x528));

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x533 = UINT64_MAX;
	int16_t x534 = INT16_MIN;
	uint8_t x536 = 7U;

	t41 = (x533>>((x534&x535)&x536));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x541 = 7741874;
	uint32_t x542 = 285219U;
	uint32_t x543 = 2U;
	int16_t x544 = -1;
	int32_t t42 = 35593;

	t42 = (x541>>((x542&x543)&x544));

	if (t42 != 1935468) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x545 = 1LL;
	volatile int64_t x546 = INT64_MIN;
	int64_t x547 = -773028LL;
	uint8_t x548 = 1U;

	t43 = (x545>>((x546&x547)&x548));

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x573 = INT64_MAX;
	int64_t x574 = 22LL;
	uint32_t x575 = 1056636U;
	static volatile int64_t t44 = -5610693633302LL;

	t44 = (x573>>((x574&x575)&x576));

	if (t44 != 8796093022207LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x594 = 73U;
	static volatile int16_t x595 = INT16_MIN;
	uint8_t x596 = 0U;
	uint64_t t45 = 5228773056221792LLU;

	t45 = (x593>>((x594&x595)&x596));

	if (t45 != 22464LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x605 = INT64_MAX;
	int64_t x606 = INT64_MIN;
	int16_t x607 = 7;

	t46 = (x605>>((x606&x607)&x608));

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x609 = 8900U;
	int32_t x610 = INT32_MAX;
	static volatile uint8_t x611 = 7U;
	static volatile int32_t x612 = INT32_MIN;
	static int32_t t47 = 27;

	t47 = (x609>>((x610&x611)&x612));

	if (t47 != 8900) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x637 = 1355513658U;
	int16_t x638 = -6593;
	int16_t x640 = INT16_MIN;
	static uint32_t t48 = 1U;

	t48 = (x637>>((x638&x639)&x640));

	if (t48 != 1355513658U) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x645 = UINT16_MAX;
	int32_t x646 = INT32_MIN;
	uint16_t x647 = UINT16_MAX;
	int32_t x648 = -15292;
	static int32_t t49 = -4088;

	t49 = (x645>>((x646&x647)&x648));

	if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x689 = 42U;
	int8_t x690 = INT8_MAX;
	uint8_t x691 = 3U;
	volatile int8_t x692 = INT8_MAX;
	volatile int32_t t50 = 46;

	t50 = (x689>>((x690&x691)&x692));

	if (t50 != 5) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x693 = UINT16_MAX;
	static int32_t x694 = -1;
	int64_t x695 = INT64_MAX;

	t51 = (x693>>((x694&x695)&x696));

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x705 = 1040465864910096LLU;
	int64_t x706 = -1LL;
	static int16_t x707 = 0;
	int8_t x708 = INT8_MAX;
	uint64_t t52 = 0LLU;

	t52 = (x705>>((x706&x707)&x708));

	if (t52 != 1040465864910096LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x713 = 4U;
	int16_t x714 = INT16_MIN;
	static int8_t x715 = -1;
	int32_t t53 = 14;

	t53 = (x713>>((x714&x715)&x716));

	if (t53 != 4) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x717 = 104U;
	uint16_t x718 = 2U;
	volatile uint8_t x719 = 22U;
	static uint8_t x720 = UINT8_MAX;
	volatile int32_t t54 = -469;

	t54 = (x717>>((x718&x719)&x720));

	if (t54 != 26) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x721 = 3125361387219LLU;
	volatile uint8_t x722 = 29U;
	int64_t x723 = INT64_MIN;
	uint64_t t55 = 5392447LLU;

	t55 = (x721>>((x722&x723)&x724));

	if (t55 != 3125361387219LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x729 = UINT64_MAX;
	static uint16_t x730 = UINT16_MAX;
	int16_t x731 = -1;
	uint32_t x732 = 1U;
	volatile uint64_t t56 = 250813325LLU;

	t56 = (x729>>((x730&x731)&x732));

	if (t56 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x753 = UINT16_MAX;
	static int32_t x755 = 55193174;
	int8_t x756 = -1;
	int32_t t57 = -25;

	t57 = (x753>>((x754&x755)&x756));

	if (t57 != 1023) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x757 = 3458815U;
	int8_t x758 = -1;
	volatile uint16_t x759 = 24U;
	volatile uint8_t x760 = UINT8_MAX;
	static uint32_t t58 = 14U;

	t58 = (x757>>((x758&x759)&x760));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x770 = INT16_MIN;
	static uint8_t x771 = UINT8_MAX;
	volatile int64_t x772 = INT64_MAX;
	int32_t t59 = -3504;

	t59 = (x769>>((x770&x771)&x772));

	if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x789 = 92242U;
	int16_t x790 = 18;
	uint32_t x791 = 1077376352U;
	int32_t x792 = -961929022;
	static uint32_t t60 = 347661586U;

	t60 = (x789>>((x790&x791)&x792));

	if (t60 != 92242U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x801 = 366586934738775175LLU;
	int8_t x803 = INT8_MAX;
	uint16_t x804 = 8841U;
	uint64_t t61 = 10567104202656211LLU;

	t61 = (x801>>((x802&x803)&x804));

	if (t61 != 366586934738775175LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x813 = 10U;
	int64_t x814 = INT64_MIN;
	int8_t x815 = INT8_MIN;
	uint32_t x816 = UINT32_MAX;

	t62 = (x813>>((x814&x815)&x816));

	if (t62 != 10U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x822 = INT64_MIN;
	static int16_t x824 = 1;
	volatile int32_t t63 = -1968787;

	t63 = (x821>>((x822&x823)&x824));

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x841 = 1U;
	int64_t x842 = 9LL;
	int64_t x843 = 41072511786939626LL;
	uint64_t x844 = 374262438LLU;

	t64 = (x841>>((x842&x843)&x844));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x845 = 14U;
	uint16_t x848 = 10U;

	t65 = (x845>>((x846&x847)&x848));

	if (t65 != 14) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x849 = 7;
	volatile int32_t x850 = INT32_MIN;
	int64_t x851 = -1LL;
	int32_t t66 = 54;

	t66 = (x849>>((x850&x851)&x852));

	if (t66 != 7) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x901 = 1U;
	static int32_t x902 = 1;
	uint16_t x903 = UINT16_MAX;
	int16_t x904 = INT16_MAX;
	volatile int32_t t67 = -409683259;

	t67 = (x901>>((x902&x903)&x904));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x905 = 38;
	int8_t x906 = -22;
	int16_t x907 = 890;
	int32_t t68 = -1038223303;

	t68 = (x905>>((x906&x907)&x908));

	if (t68 != 38) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x917 = INT8_MAX;
	int64_t x918 = -1LL;
	uint16_t x920 = 5U;
	volatile int32_t t69 = -110059;

	t69 = (x917>>((x918&x919)&x920));

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x921 = INT8_MAX;
	int64_t x922 = 822LL;
	int16_t x924 = INT16_MIN;
	volatile int32_t t70 = -21;

	t70 = (x921>>((x922&x923)&x924));

	if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x950 = INT16_MIN;
	int8_t x951 = INT8_MAX;
	static volatile uint8_t x952 = 9U;
	static volatile int64_t t71 = INT64_MAX;

	t71 = (x949>>((x950&x951)&x952));

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x953 = 6U;
	int32_t x954 = 0;
	int64_t x955 = -1LL;
	int64_t x956 = INT64_MIN;
	int32_t t72 = -292050;

	t72 = (x953>>((x954&x955)&x956));

	if (t72 != 6) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x974 = INT16_MIN;
	static uint16_t x975 = 1035U;
	int16_t x976 = INT16_MIN;

	t73 = (x973>>((x974&x975)&x976));

	if (t73 != 28) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x997 = UINT32_MAX;
	int16_t x998 = -220;
	int64_t x999 = INT64_MIN;
	volatile int8_t x1000 = 1;
	uint32_t t74 = UINT32_MAX;

	t74 = (x997>>((x998&x999)&x1000));

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x1001 = 352;
	uint8_t x1002 = 1U;
	int16_t x1003 = INT16_MIN;
	volatile int64_t x1004 = INT64_MIN;
	volatile int32_t t75 = -226394821;

	t75 = (x1001>>((x1002&x1003)&x1004));

	if (t75 != 352) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x1005 = 3270U;
	uint16_t x1007 = 4902U;
	volatile uint32_t x1008 = 71U;
	volatile int32_t t76 = 167;

	t76 = (x1005>>((x1006&x1007)&x1008));

	if (t76 != 3270) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x1021 = UINT16_MAX;
	static int32_t x1022 = INT32_MIN;
	volatile uint16_t x1023 = 2515U;
	static int16_t x1024 = 117;
	int32_t t77 = 8153646;

	t77 = (x1021>>((x1022&x1023)&x1024));

	if (t77 != 65535) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x1025 = INT8_MAX;
	int16_t x1026 = INT16_MIN;
	uint8_t x1027 = 3U;
	volatile int32_t t78 = -1;

	t78 = (x1025>>((x1026&x1027)&x1028));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint8_t x1033 = 0U;
	int8_t x1034 = 30;
	volatile uint32_t x1035 = 11206429U;
	uint32_t x1036 = 249594U;
	volatile int32_t t79 = -29;

	t79 = (x1033>>((x1034&x1035)&x1036));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x1049 = INT16_MAX;
	volatile int32_t x1050 = INT32_MIN;
	static uint16_t x1051 = 57U;
	volatile int32_t t80 = -1;

	t80 = (x1049>>((x1050&x1051)&x1052));

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x1057 = 49U;
	static int8_t x1058 = -20;
	static volatile int64_t x1059 = INT64_MIN;

	t81 = (x1057>>((x1058&x1059)&x1060));

	if (t81 != 49) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x1061 = INT64_MAX;
	int8_t x1062 = -1;
	int16_t x1063 = 1;
	uint16_t x1064 = 1550U;

	t82 = (x1061>>((x1062&x1063)&x1064));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x1081 = UINT32_MAX;
	volatile uint64_t x1082 = 29969175509798LLU;
	uint8_t x1084 = 60U;
	uint32_t t83 = UINT32_MAX;

	t83 = (x1081>>((x1082&x1083)&x1084));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x1101 = 1U;
	volatile int16_t x1102 = INT16_MIN;
	uint16_t x1103 = 954U;
	int8_t x1104 = INT8_MAX;

	t84 = (x1101>>((x1102&x1103)&x1104));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x1117 = 1907776825U;
	int8_t x1120 = 1;
	volatile uint32_t t85 = 13667U;

	t85 = (x1117>>((x1118&x1119)&x1120));

	if (t85 != 1907776825U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x1137 = 1207U;
	uint64_t x1138 = 839247971395LLU;
	volatile uint8_t x1139 = 3U;
	int8_t x1140 = -1;
	volatile uint32_t t86 = 983374U;

	t86 = (x1137>>((x1138&x1139)&x1140));

	if (t86 != 150U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x1141 = 0U;
	uint16_t x1142 = 314U;
	int64_t x1143 = INT64_MIN;
	static int16_t x1144 = INT16_MIN;
	volatile int32_t t87 = 182964259;

	t87 = (x1141>>((x1142&x1143)&x1144));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x1153 = 2390;
	int8_t x1154 = 4;
	int32_t x1155 = -1;
	int32_t x1156 = INT32_MIN;
	int32_t t88 = -11186;

	t88 = (x1153>>((x1154&x1155)&x1156));

	if (t88 != 2390) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x1181 = 65U;
	int32_t x1182 = INT32_MIN;
	int64_t x1183 = -1LL;
	volatile uint8_t x1184 = 8U;
	int32_t t89 = -830542779;

	t89 = (x1181>>((x1182&x1183)&x1184));

	if (t89 != 65) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x1190 = 0U;
	static int64_t x1191 = -80711159LL;
	uint32_t t90 = UINT32_MAX;

	t90 = (x1189>>((x1190&x1191)&x1192));

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x1213 = 214474930U;
	int64_t x1216 = -20701521650LL;

	t91 = (x1213>>((x1214&x1215)&x1216));

	if (t91 != 837792U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x1249 = 37838519U;
	volatile uint64_t x1250 = 5LLU;
	volatile int32_t x1251 = INT32_MAX;
	static uint16_t x1252 = 2U;

	t92 = (x1249>>((x1250&x1251)&x1252));

	if (t92 != 37838519U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x1257 = UINT16_MAX;
	volatile uint32_t x1259 = 1U;
	int16_t x1260 = -1;
	int32_t t93 = 928836694;

	t93 = (x1257>>((x1258&x1259)&x1260));

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x1265 = 829512LLU;
	int32_t x1266 = INT32_MIN;
	uint64_t x1268 = UINT64_MAX;
	volatile uint64_t t94 = 254488500118455LLU;

	t94 = (x1265>>((x1266&x1267)&x1268));

	if (t94 != 829512LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x1273 = 8U;
	int16_t x1274 = INT16_MAX;
	int64_t x1275 = -1276577611467550718LL;
	static int32_t x1276 = INT32_MIN;
	static uint32_t t95 = 30864U;

	t95 = (x1273>>((x1274&x1275)&x1276));

	if (t95 != 8U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x1277 = 1037043336U;
	uint16_t x1278 = 18U;
	uint32_t t96 = 12643U;

	t96 = (x1277>>((x1278&x1279)&x1280));

	if (t96 != 15824U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x1281 = INT64_MAX;
	uint8_t x1282 = 6U;
	static uint8_t x1283 = UINT8_MAX;
	static uint64_t x1284 = UINT64_MAX;
	int64_t t97 = 7LL;

	t97 = (x1281>>((x1282&x1283)&x1284));

	if (t97 != 144115188075855871LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x1285 = 378073988LL;
	volatile uint8_t x1286 = UINT8_MAX;
	int64_t x1287 = 19498243LL;
	uint32_t x1288 = 3638U;
	static int64_t t98 = 4752632805004LL;

	t98 = (x1285>>((x1286&x1287)&x1288));

	if (t98 != 94518497LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x1333 = UINT64_MAX;
	uint8_t x1334 = 43U;
	volatile int64_t x1336 = INT64_MIN;
	static volatile uint64_t t99 = UINT64_MAX;

	t99 = (x1333>>((x1334&x1335)&x1336));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

