#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x9 = INT32_MIN;
int32_t x10 = INT32_MIN;
int16_t x13 = 317;
uint16_t x15 = 3189U;
volatile uint8_t x20 = UINT8_MAX;
int16_t x30 = INT16_MIN;
uint32_t x61 = UINT32_MAX;
uint32_t t4 = 164U;
static uint32_t x105 = 11881902U;
static int16_t x106 = INT16_MAX;
volatile uint32_t t6 = 54U;
int32_t x123 = -15604270;
volatile int64_t t8 = -3026724405767835506LL;
int32_t x146 = -1;
static uint16_t x147 = 0U;
int32_t x172 = INT32_MIN;
volatile int64_t t14 = -5648243601872LL;
uint8_t x245 = 8U;
int64_t t16 = -7937249LL;
static int32_t x280 = -1;
volatile int64_t x296 = INT64_MAX;
int32_t x297 = INT32_MIN;
volatile int32_t x298 = -12436346;
volatile int8_t x300 = INT8_MAX;
volatile int32_t t20 = -104776;
uint64_t x331 = 19LLU;
static uint32_t x335 = 0U;
uint64_t x349 = 8601011LLU;
int8_t x350 = INT8_MAX;
volatile uint64_t t28 = 2511656565397LLU;
static volatile int64_t x416 = INT64_MAX;
static volatile uint64_t x422 = 218LLU;
volatile uint32_t x423 = 30U;
static uint16_t x449 = 3702U;
volatile int32_t t33 = 282494;
static volatile uint64_t t34 = 463158346782880LLU;
static uint64_t x468 = 1LLU;
volatile int64_t x483 = -1LL;
int64_t x491 = INT64_MIN;
int16_t x492 = INT16_MIN;
int64_t x498 = -526405749942LL;
static uint8_t x512 = 17U;
volatile int32_t t40 = 1669;
int32_t x517 = INT32_MIN;
volatile uint16_t x576 = 33U;
int8_t x636 = -1;
static int8_t x685 = INT8_MIN;
static volatile int32_t t47 = 4379;
static uint8_t x699 = UINT8_MAX;
static volatile int64_t x704 = -1LL;
int16_t x745 = 105;
uint64_t x747 = UINT64_MAX;
uint8_t x754 = UINT8_MAX;
uint64_t x809 = UINT64_MAX;
static int32_t x827 = INT32_MIN;
volatile uint32_t x838 = 22012U;
static volatile int32_t t61 = -61457838;
static int16_t x891 = 3;
int32_t x892 = -1;
int8_t x895 = INT8_MIN;
uint64_t t64 = 21226474592401LLU;
uint16_t x906 = UINT16_MAX;
int64_t x908 = -1LL;
int16_t x953 = INT16_MIN;
uint16_t x955 = 3U;
static volatile int32_t t67 = 18;
volatile int64_t x959 = INT64_MAX;
int64_t x960 = INT64_MAX;
int64_t x962 = -1LL;
int16_t x963 = INT16_MAX;
volatile int64_t t69 = 757825LL;
uint64_t x1030 = 857065877372446926LLU;
int32_t x1031 = -3;
uint64_t x1035 = 3LLU;
volatile int8_t x1048 = -1;
uint64_t x1082 = 2736080828016LLU;
int32_t x1083 = INT32_MAX;
volatile int32_t x1084 = INT32_MAX;
int8_t x1120 = -1;
uint8_t x1139 = 0U;
uint32_t x1193 = UINT32_MAX;
volatile int64_t x1196 = INT64_MIN;
volatile uint32_t t84 = 15724668U;
int64_t x1205 = INT64_MAX;
int32_t x1224 = INT32_MIN;
static volatile int64_t t88 = 4042000LL;
volatile int64_t x1270 = INT64_MIN;
volatile int16_t x1309 = INT16_MIN;
volatile uint64_t t92 = 344LLU;
volatile int8_t x1469 = INT8_MIN;
int8_t x1471 = -1;
uint8_t x1478 = 2U;
uint32_t x1543 = 928229101U;


void f0(void) {
	int8_t x11 = -1;
	static int8_t x12 = -1;
	int32_t t0 = 53347293;

	t0 = ((x9^x10)>>(x11%x12));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x14 = UINT32_MAX;
	int8_t x16 = -1;
	static volatile uint32_t t1 = 7377236U;

	t1 = ((x13^x14)>>(x15%x16));

	if (t1 != 4294966978U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x17 = 6247U;
	int16_t x18 = 98;
	static uint16_t x19 = UINT16_MAX;
	volatile int32_t t2 = -11;

	t2 = ((x17^x18)>>(x19%x20));

	if (t2 != 6149) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x29 = -1LL;
	static uint8_t x31 = 31U;
	volatile uint32_t x32 = 3U;
	volatile int64_t t3 = 28806293923851698LL;

	t3 = ((x29^x30)>>(x31%x32));

	if (t3 != 16383LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x62 = INT8_MIN;
	static volatile int64_t x63 = INT64_MAX;
	volatile int16_t x64 = -1;

	t4 = ((x61^x62)>>(x63%x64));

	if (t4 != 127U) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x69 = INT16_MIN;
	int16_t x70 = -1;
	uint32_t x71 = 87692U;
	int8_t x72 = 4;
	int32_t t5 = 19;

	t5 = ((x69^x70)>>(x71%x72));

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x107 = 4;
	int16_t x108 = 1;

	t6 = ((x105^x106)>>(x107%x108));

	if (t6 != 11874897U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x109 = -1LL;
	int64_t x110 = -59680643191014349LL;
	int16_t x111 = INT16_MIN;
	int8_t x112 = INT8_MIN;
	int64_t t7 = 0LL;

	t7 = ((x109^x110)>>(x111%x112));

	if (t7 != 59680643191014348LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x121 = -3712;
	int64_t x122 = INT64_MIN;
	int16_t x124 = -1;

	t8 = ((x121^x122)>>(x123%x124));

	if (t8 != 9223372036854772096LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x137 = 2253U;
	static uint8_t x138 = 44U;
	volatile uint8_t x139 = UINT8_MAX;
	volatile int32_t x140 = -8;
	uint32_t t9 = 12693702U;

	t9 = ((x137^x138)>>(x139%x140));

	if (t9 != 17U) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x141 = INT64_MAX;
	int8_t x142 = INT8_MAX;
	uint32_t x143 = UINT32_MAX;
	volatile int64_t x144 = -1LL;
	volatile int64_t t10 = 121939791435864782LL;

	t10 = ((x141^x142)>>(x143%x144));

	if (t10 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x145 = INT64_MIN;
	int64_t x148 = 60LL;
	static volatile int64_t t11 = INT64_MAX;

	t11 = ((x145^x146)>>(x147%x148));

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x169 = 0U;
	uint64_t x170 = 200239310435065793LLU;
	static int32_t x171 = 1;
	static volatile uint64_t t12 = 1565710LLU;

	t12 = ((x169^x170)>>(x171%x172));

	if (t12 != 100119655217532896LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x205 = UINT16_MAX;
	static uint64_t x206 = 7LLU;
	uint8_t x207 = 45U;
	int8_t x208 = INT8_MIN;
	uint64_t t13 = 1370524059724630280LLU;

	t13 = ((x205^x206)>>(x207%x208));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x209 = INT16_MIN;
	int64_t x210 = -5727360LL;
	static int16_t x211 = -5872;
	volatile int32_t x212 = -1;

	t14 = ((x209^x210)>>(x211%x212));

	if (t14 != 5708672LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x246 = UINT32_MAX;
	static uint32_t x247 = UINT32_MAX;
	int64_t x248 = -1LL;
	uint32_t t15 = 491U;

	t15 = ((x245^x246)>>(x247%x248));

	if (t15 != 4294967287U) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x261 = -1644708383457501LL;
	int8_t x262 = INT8_MIN;
	int8_t x263 = INT8_MAX;
	static int8_t x264 = 10;

	t16 = ((x261^x262)>>(x263%x264));

	if (t16 != 12849284245761LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x277 = 14526;
	int64_t x278 = 0LL;
	uint64_t x279 = UINT64_MAX;
	volatile int64_t t17 = -1007158633837839LL;

	t17 = ((x277^x278)>>(x279%x280));

	if (t17 != 14526LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x281 = INT64_MIN;
	static int32_t x282 = INT32_MIN;
	uint8_t x283 = UINT8_MAX;
	volatile uint8_t x284 = 26U;
	int64_t t18 = 887868938LL;

	t18 = ((x281^x282)>>(x283%x284));

	if (t18 != 4398046510080LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x293 = INT64_MAX;
	volatile int64_t x294 = 927263LL;
	uint64_t x295 = UINT64_MAX;
	int64_t t19 = 577113165437LL;

	t19 = ((x293^x294)>>(x295%x296));

	if (t19 != 4611686018426924272LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x299 = 2U;

	t20 = ((x297^x298)>>(x299%x300));

	if (t20 != 533761825) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x305 = -1;
	int32_t x306 = -1;
	int16_t x307 = 94;
	uint32_t x308 = 2U;
	volatile int32_t t21 = 28;

	t21 = ((x305^x306)>>(x307%x308));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x329 = -1;
	static int64_t x330 = INT64_MIN;
	int32_t x332 = 182644757;
	static volatile int64_t t22 = 24353853LL;

	t22 = ((x329^x330)>>(x331%x332));

	if (t22 != 17592186044415LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x333 = INT16_MIN;
	static volatile int16_t x334 = INT16_MIN;
	uint64_t x336 = 14183787361LLU;
	static volatile int32_t t23 = -147749;

	t23 = ((x333^x334)>>(x335%x336));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x351 = -190;
	int64_t x352 = -1LL;
	uint64_t t24 = 105862672110253LLU;

	t24 = ((x349^x350)>>(x351%x352));

	if (t24 != 8601036LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x357 = UINT8_MAX;
	volatile int64_t x358 = INT64_MAX;
	uint64_t x359 = 13LLU;
	int8_t x360 = INT8_MAX;
	int64_t t25 = -425LL;

	t25 = ((x357^x358)>>(x359%x360));

	if (t25 != 1125899906842623LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x361 = UINT32_MAX;
	volatile int8_t x362 = INT8_MAX;
	int8_t x363 = -3;
	static int8_t x364 = 1;
	static uint32_t t26 = 966178459U;

	t26 = ((x361^x362)>>(x363%x364));

	if (t26 != 4294967168U) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x377 = 180;
	int64_t x378 = INT64_MAX;
	int16_t x379 = INT16_MIN;
	int16_t x380 = -1;
	volatile int64_t t27 = 1538LL;

	t27 = ((x377^x378)>>(x379%x380));

	if (t27 != 9223372036854775627LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x393 = UINT8_MAX;
	uint64_t x394 = 32741LLU;
	volatile uint16_t x395 = UINT16_MAX;
	int8_t x396 = -1;

	t28 = ((x393^x394)>>(x395%x396));

	if (t28 != 32538LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x413 = 0U;
	static uint64_t x414 = UINT64_MAX;
	int64_t x415 = INT64_MAX;
	volatile uint64_t t29 = UINT64_MAX;

	t29 = ((x413^x414)>>(x415%x416));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x421 = -1;
	int8_t x424 = INT8_MIN;
	uint64_t t30 = 2030871527941LLU;

	t30 = ((x421^x422)>>(x423%x424));

	if (t30 != 17179869183LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x425 = 1U;
	int32_t x426 = 42359;
	int8_t x427 = 3;
	int32_t x428 = -1;
	static int32_t t31 = -109975;

	t31 = ((x425^x426)>>(x427%x428));

	if (t31 != 42358) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x437 = 69210076540089354LLU;
	volatile int16_t x438 = INT16_MIN;
	uint8_t x439 = UINT8_MAX;
	int32_t x440 = -1;
	uint64_t t32 = 39243640683939545LLU;

	t32 = ((x437^x438)>>(x439%x440));

	if (t32 != 18377533997169456138LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x450 = 13591U;
	volatile uint16_t x451 = 49U;
	int16_t x452 = 8;

	t33 = ((x449^x450)>>(x451%x452));

	if (t33 != 7600) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x461 = INT32_MIN;
	uint64_t x462 = 6181317345LLU;
	uint64_t x463 = 1030254LLU;
	int8_t x464 = INT8_MAX;

	t34 = ((x461^x462)>>(x463%x464));

	if (t34 != 17179869179LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x465 = UINT8_MAX;
	volatile uint16_t x466 = 3845U;
	int32_t x467 = INT32_MIN;
	volatile int32_t t35 = -76;

	t35 = ((x465^x466)>>(x467%x468));

	if (t35 != 4090) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x469 = INT8_MAX;
	uint32_t x470 = 3639371U;
	int8_t x471 = 3;
	int16_t x472 = 1;
	volatile uint32_t t36 = 102U;

	t36 = ((x469^x470)>>(x471%x472));

	if (t36 != 3639348U) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x481 = -1;
	int16_t x482 = -12;
	static volatile int32_t x484 = -1;
	static int32_t t37 = -30636731;

	t37 = ((x481^x482)>>(x483%x484));

	if (t37 != 11) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x489 = 15703648U;
	int16_t x490 = 1;
	volatile uint32_t t38 = 11U;

	t38 = ((x489^x490)>>(x491%x492));

	if (t38 != 15703649U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x497 = INT16_MIN;
	int16_t x499 = INT16_MIN;
	int64_t x500 = -1LL;
	static int64_t t39 = -1416416259822823193LL;

	t39 = ((x497^x498)>>(x499%x500));

	if (t39 != 526405743434LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x509 = INT8_MIN;
	int16_t x510 = INT16_MIN;
	uint32_t x511 = 87143U;

	t40 = ((x509^x510)>>(x511%x512));

	if (t40 != 16320) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint32_t x518 = 102U;
	int8_t x519 = 15;
	uint64_t x520 = UINT64_MAX;
	uint32_t t41 = 424273410U;

	t41 = ((x517^x518)>>(x519%x520));

	if (t41 != 65536U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x533 = -1;
	static int8_t x534 = INT8_MIN;
	uint8_t x535 = 3U;
	int8_t x536 = INT8_MAX;
	volatile int32_t t42 = -9;

	t42 = ((x533^x534)>>(x535%x536));

	if (t42 != 15) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x573 = -1LL;
	int16_t x574 = INT16_MIN;
	int16_t x575 = 3953;
	volatile int64_t t43 = 5008455982LL;

	t43 = ((x573^x574)>>(x575%x576));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x629 = -1LL;
	static int8_t x630 = -1;
	uint8_t x631 = 61U;
	int64_t x632 = INT64_MIN;
	volatile int64_t t44 = 2740884165957798LL;

	t44 = ((x629^x630)>>(x631%x632));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x633 = 1800U;
	int64_t x634 = INT64_MAX;
	int16_t x635 = 50;
	int64_t t45 = -10405850778LL;

	t45 = ((x633^x634)>>(x635%x636));

	if (t45 != 9223372036854774007LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x677 = 734589U;
	volatile int32_t x678 = 6;
	int64_t x679 = 0LL;
	uint64_t x680 = UINT64_MAX;
	volatile uint32_t t46 = 4U;

	t46 = ((x677^x678)>>(x679%x680));

	if (t46 != 734587U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x686 = INT32_MIN;
	uint16_t x687 = 2U;
	int32_t x688 = 53190925;

	t47 = ((x685^x686)>>(x687%x688));

	if (t47 != 536870880) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x693 = UINT32_MAX;
	int16_t x694 = 23;
	uint16_t x695 = 3U;
	volatile int8_t x696 = INT8_MAX;
	uint32_t t48 = 10U;

	t48 = ((x693^x694)>>(x695%x696));

	if (t48 != 536870909U) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x697 = INT16_MIN;
	volatile int64_t x698 = -748866LL;
	static uint8_t x700 = 1U;
	int64_t t49 = -2724457267LL;

	t49 = ((x697^x698)>>(x699%x700));

	if (t49 != 725694LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x701 = 2U;
	static uint8_t x702 = 5U;
	int8_t x703 = -36;
	static volatile int32_t t50 = -158;

	t50 = ((x701^x702)>>(x703%x704));

	if (t50 != 7) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x705 = INT16_MIN;
	uint64_t x706 = 2115LLU;
	int8_t x707 = INT8_MAX;
	int8_t x708 = INT8_MAX;
	volatile uint64_t t51 = 53619568314LLU;

	t51 = ((x705^x706)>>(x707%x708));

	if (t51 != 18446744073709520963LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x746 = INT8_MAX;
	uint16_t x748 = 3U;
	int32_t t52 = 1;

	t52 = ((x745^x746)>>(x747%x748));

	if (t52 != 22) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x749 = -1;
	uint32_t x750 = 824571U;
	int8_t x751 = 1;
	int64_t x752 = INT64_MAX;
	volatile uint32_t t53 = 3616U;

	t53 = ((x749^x750)>>(x751%x752));

	if (t53 != 2147071362U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x753 = UINT8_MAX;
	volatile uint8_t x755 = 20U;
	volatile int32_t x756 = INT32_MIN;
	int32_t t54 = -2;

	t54 = ((x753^x754)>>(x755%x756));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x789 = INT32_MIN;
	int64_t x790 = -1LL;
	uint16_t x791 = 5U;
	int32_t x792 = -1;
	int64_t t55 = 0LL;

	t55 = ((x789^x790)>>(x791%x792));

	if (t55 != 2147483647LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x810 = 305LLU;
	int8_t x811 = 12;
	int32_t x812 = 138;
	uint64_t t56 = 12LLU;

	t56 = ((x809^x810)>>(x811%x812));

	if (t56 != 4503599627370495LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x813 = INT16_MIN;
	static int8_t x814 = INT8_MIN;
	int32_t x815 = 1;
	uint16_t x816 = 8U;
	int32_t t57 = -1074163;

	t57 = ((x813^x814)>>(x815%x816));

	if (t57 != 16320) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x825 = UINT16_MAX;
	volatile uint32_t x826 = UINT32_MAX;
	int16_t x828 = INT16_MIN;
	static uint32_t t58 = 535025U;

	t58 = ((x825^x826)>>(x827%x828));

	if (t58 != 4294901760U) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x837 = INT32_MIN;
	int8_t x839 = INT8_MAX;
	int64_t x840 = -1LL;
	static volatile uint32_t t59 = 25140U;

	t59 = ((x837^x838)>>(x839%x840));

	if (t59 != 2147505660U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x841 = 12199U;
	int64_t x842 = 16858340668462767LL;
	int8_t x843 = 0;
	volatile int64_t x844 = INT64_MIN;
	int64_t t60 = -1LL;

	t60 = ((x841^x842)>>(x843%x844));

	if (t60 != 16858340668471560LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x849 = INT8_MIN;
	static int32_t x850 = INT32_MIN;
	uint16_t x851 = UINT16_MAX;
	volatile uint32_t x852 = 14U;

	t61 = ((x849^x850)>>(x851%x852));

	if (t61 != 1073741760) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x873 = -48;
	int8_t x874 = INT8_MIN;
	int64_t x875 = INT64_MIN;
	int8_t x876 = INT8_MIN;
	int32_t t62 = 7585671;

	t62 = ((x873^x874)>>(x875%x876));

	if (t62 != 80) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x889 = 3304886U;
	int8_t x890 = -1;
	uint32_t t63 = 2880U;

	t63 = ((x889^x890)>>(x891%x892));

	if (t63 != 4291662409U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x893 = 27186542LLU;
	int8_t x894 = INT8_MIN;
	static int16_t x896 = -1;

	t64 = ((x893^x894)>>(x895%x896));

	if (t64 != 18446744073682365166LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x905 = 229LL;
	int64_t x907 = -63980955LL;
	volatile int64_t t65 = 269LL;

	t65 = ((x905^x906)>>(x907%x908));

	if (t65 != 65306LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x949 = UINT8_MAX;
	uint32_t x950 = UINT32_MAX;
	uint16_t x951 = 12635U;
	static volatile uint16_t x952 = 1U;
	volatile uint32_t t66 = 160835006U;

	t66 = ((x949^x950)>>(x951%x952));

	if (t66 != 4294967040U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x954 = INT16_MIN;
	int8_t x956 = -1;

	t67 = ((x953^x954)>>(x955%x956));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x957 = 410U;
	static uint64_t x958 = 4362472579583129LLU;
	volatile uint64_t t68 = 47742LLU;

	t68 = ((x957^x958)>>(x959%x960));

	if (t68 != 4362472579583235LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x961 = -719857200;
	volatile int8_t x964 = -1;

	t69 = ((x961^x962)>>(x963%x964));

	if (t69 != 719857199LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x977 = 1;
	uint32_t x978 = 29U;
	int32_t x979 = -81;
	volatile uint32_t x980 = 1U;
	volatile uint32_t t70 = 18264U;

	t70 = ((x977^x978)>>(x979%x980));

	if (t70 != 28U) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x1029 = 52606135892LLU;
	int8_t x1032 = -1;
	volatile uint64_t t71 = 3706394051708LLU;

	t71 = ((x1029^x1030)>>(x1031%x1032));

	if (t71 != 857065825775208090LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x1033 = INT64_MIN;
	int8_t x1034 = -4;
	volatile int8_t x1036 = INT8_MIN;
	volatile int64_t t72 = 2466LL;

	t72 = ((x1033^x1034)>>(x1035%x1036));

	if (t72 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x1041 = INT16_MAX;
	int64_t x1042 = INT64_MAX;
	int16_t x1043 = 15489;
	volatile int32_t x1044 = -1;
	volatile int64_t t73 = 0LL;

	t73 = ((x1041^x1042)>>(x1043%x1044));

	if (t73 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x1045 = -12200136LL;
	static int32_t x1046 = INT32_MIN;
	static int8_t x1047 = INT8_MAX;
	int64_t t74 = -6529595500LL;

	t74 = ((x1045^x1046)>>(x1047%x1048));

	if (t74 != 2135283512LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x1049 = UINT64_MAX;
	uint16_t x1050 = 752U;
	static int8_t x1051 = 0;
	int64_t x1052 = -1LL;
	uint64_t t75 = 36880LLU;

	t75 = ((x1049^x1050)>>(x1051%x1052));

	if (t75 != 18446744073709550863LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x1061 = -1;
	static uint32_t x1062 = 122539U;
	int8_t x1063 = 30;
	volatile int16_t x1064 = -1;
	volatile uint32_t t76 = 150U;

	t76 = ((x1061^x1062)>>(x1063%x1064));

	if (t76 != 4294844756U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x1081 = -1;
	uint64_t t77 = 90402415LLU;

	t77 = ((x1081^x1082)>>(x1083%x1084));

	if (t77 != 18446741337628723599LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x1117 = -1;
	volatile uint32_t x1118 = UINT32_MAX;
	volatile int32_t x1119 = INT32_MIN;
	static volatile uint32_t t78 = 63438U;

	t78 = ((x1117^x1118)>>(x1119%x1120));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x1121 = 14U;
	uint64_t x1122 = UINT64_MAX;
	int8_t x1123 = INT8_MAX;
	uint8_t x1124 = 3U;
	uint64_t t79 = 7972649348907LLU;

	t79 = ((x1121^x1122)>>(x1123%x1124));

	if (t79 != 9223372036854775800LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x1125 = 11U;
	uint8_t x1126 = UINT8_MAX;
	int32_t x1127 = -1;
	uint32_t x1128 = 15U;
	volatile int32_t t80 = -1502;

	t80 = ((x1125^x1126)>>(x1127%x1128));

	if (t80 != 244) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x1137 = INT8_MIN;
	int8_t x1138 = -1;
	int8_t x1140 = INT8_MIN;
	int32_t t81 = 0;

	t81 = ((x1137^x1138)>>(x1139%x1140));

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x1145 = INT32_MAX;
	static uint8_t x1146 = 30U;
	static int16_t x1147 = -15;
	int16_t x1148 = -1;
	volatile int32_t t82 = -99431;

	t82 = ((x1145^x1146)>>(x1147%x1148));

	if (t82 != 2147483617) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x1169 = UINT64_MAX;
	uint8_t x1170 = 1U;
	int16_t x1171 = INT16_MIN;
	volatile int16_t x1172 = INT16_MIN;
	static volatile uint64_t t83 = 132396898745LLU;

	t83 = ((x1169^x1170)>>(x1171%x1172));

	if (t83 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x1194 = 3U;
	volatile int64_t x1195 = INT64_MIN;

	t84 = ((x1193^x1194)>>(x1195%x1196));

	if (t84 != 4294967292U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x1206 = INT32_MAX;
	int32_t x1207 = INT32_MIN;
	int16_t x1208 = 1;
	int64_t t85 = 99636LL;

	t85 = ((x1205^x1206)>>(x1207%x1208));

	if (t85 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x1221 = 114LL;
	uint8_t x1222 = UINT8_MAX;
	static int32_t x1223 = INT32_MIN;
	volatile int64_t t86 = 111284480LL;

	t86 = ((x1221^x1222)>>(x1223%x1224));

	if (t86 != 141LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x1225 = UINT32_MAX;
	int8_t x1226 = -1;
	volatile uint8_t x1227 = 7U;
	static uint64_t x1228 = 21872853286527LLU;
	uint32_t t87 = 12U;

	t87 = ((x1225^x1226)>>(x1227%x1228));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x1241 = 18;
	int64_t x1242 = INT64_MAX;
	int16_t x1243 = INT16_MIN;
	int64_t x1244 = -1LL;

	t88 = ((x1241^x1242)>>(x1243%x1244));

	if (t88 != 9223372036854775789LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x1269 = INT16_MIN;
	uint16_t x1271 = 22U;
	static int8_t x1272 = -1;
	volatile int64_t t89 = 253329LL;

	t89 = ((x1269^x1270)>>(x1271%x1272));

	if (t89 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x1273 = -631563;
	uint32_t x1274 = 1919U;
	int16_t x1275 = 2015;
	int16_t x1276 = -1;
	uint32_t t90 = 290U;

	t90 = ((x1273^x1274)>>(x1275%x1276));

	if (t90 != 4294335370U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x1281 = UINT8_MAX;
	uint32_t x1282 = UINT32_MAX;
	int32_t x1283 = 268;
	volatile int16_t x1284 = 1;
	static volatile uint32_t t91 = 11U;

	t91 = ((x1281^x1282)>>(x1283%x1284));

	if (t91 != 4294967040U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x1310 = 18LLU;
	uint32_t x1311 = 42U;
	uint8_t x1312 = 58U;

	t92 = ((x1309^x1310)>>(x1311%x1312));

	if (t92 != 4194303LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x1313 = 127U;
	uint32_t x1314 = 447U;
	int8_t x1315 = -4;
	static int64_t x1316 = -1LL;
	uint32_t t93 = 825370U;

	t93 = ((x1313^x1314)>>(x1315%x1316));

	if (t93 != 448U) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x1349 = 0;
	static uint8_t x1350 = 0U;
	static volatile uint64_t x1351 = UINT64_MAX;
	uint32_t x1352 = UINT32_MAX;
	int32_t t94 = 313445223;

	t94 = ((x1349^x1350)>>(x1351%x1352));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x1470 = 169107U;
	uint32_t x1472 = UINT32_MAX;
	static uint32_t t95 = 125U;

	t95 = ((x1469^x1470)>>(x1471%x1472));

	if (t95 != 4294798099U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x1477 = 2703888;
	int64_t x1479 = INT64_MIN;
	volatile int16_t x1480 = -1;
	volatile int32_t t96 = 4;

	t96 = ((x1477^x1478)>>(x1479%x1480));

	if (t96 != 2703890) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x1485 = UINT8_MAX;
	uint16_t x1486 = UINT16_MAX;
	uint16_t x1487 = 14U;
	static int8_t x1488 = INT8_MIN;
	int32_t t97 = -1720606;

	t97 = ((x1485^x1486)>>(x1487%x1488));

	if (t97 != 3) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x1541 = 3;
	int64_t x1542 = 1LL;
	uint8_t x1544 = 11U;
	int64_t t98 = -83327461314647526LL;

	t98 = ((x1541^x1542)>>(x1543%x1544));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x1561 = 583430027U;
	uint16_t x1562 = 0U;
	uint16_t x1563 = 76U;
	int32_t x1564 = -1;
	uint32_t t99 = 1U;

	t99 = ((x1561^x1562)>>(x1563%x1564));

	if (t99 != 583430027U) { NG(); } else { ; }
	
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

