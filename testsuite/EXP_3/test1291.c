#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x19 = INT8_MIN;
volatile int32_t t0 = -7;
int8_t x82 = 2;
uint64_t x83 = UINT64_MAX;
int64_t x84 = -1LL;
volatile int16_t x162 = -1;
volatile uint32_t x175 = UINT32_MAX;
uint16_t x226 = UINT16_MAX;
int32_t t4 = -1547938;
static int16_t x499 = 1;
int64_t x541 = INT64_MAX;
int64_t x543 = INT64_MIN;
static uint64_t x586 = 39139962426LLU;
uint32_t x779 = UINT32_MAX;
int8_t x1032 = -1;
int32_t t11 = 50390383;
int32_t x1204 = -1;
static int8_t x1231 = INT8_MIN;
volatile int8_t x1232 = INT8_MIN;
static int32_t x1253 = INT32_MAX;
static volatile int16_t x1317 = -33;
int8_t x1343 = -1;
uint32_t x1533 = 88969400U;
int8_t x1639 = INT8_MAX;
static int8_t x1640 = INT8_MAX;
static volatile int32_t x1656 = INT32_MIN;
uint64_t x1753 = 138LLU;
int32_t x1754 = -1;
uint64_t x1756 = UINT64_MAX;
int16_t x1825 = INT16_MAX;
volatile int32_t t22 = -1884;
int64_t x2629 = -4135746446555858LL;
int16_t x2632 = -1;
volatile int32_t t24 = -9174790;
int32_t t27 = 992213;
int32_t x3711 = INT32_MAX;
volatile int32_t x3712 = INT32_MAX;
int16_t x3759 = INT16_MAX;
uint16_t x3777 = UINT16_MAX;
static volatile int64_t x4475 = -1LL;
uint32_t x4498 = UINT32_MAX;
uint64_t x4514 = 4417975370LLU;
static int8_t x4516 = 0;
static int32_t x4553 = INT32_MIN;
int16_t x4614 = INT16_MAX;
volatile int32_t t42 = -32;
volatile int64_t x4723 = -1LL;
int8_t x4728 = INT8_MIN;
uint32_t x4769 = 28U;
int32_t t46 = -4457524;
int8_t x4817 = INT8_MIN;
int32_t t47 = -35545;
int16_t x4933 = INT16_MIN;
uint32_t x4934 = UINT32_MAX;
int8_t x5005 = -33;
int8_t x5007 = -1;
static int8_t x5008 = -1;
static int8_t x5278 = -4;
static uint64_t x5355 = UINT64_MAX;
int32_t t54 = 997;
int16_t x5481 = INT16_MIN;
static volatile int32_t t55 = -39504445;
static int16_t x5719 = -1;
int8_t x5720 = -1;
int32_t t59 = -154722736;
volatile int32_t t60 = 1607;
volatile uint32_t x5952 = UINT32_MAX;
int64_t x5998 = INT64_MIN;
uint8_t x6000 = UINT8_MAX;
volatile int32_t t62 = -66898;
static volatile int8_t x6049 = -1;
int32_t x6181 = INT32_MIN;
int8_t x6182 = 1;
static int16_t x6183 = -1;
static volatile int32_t t66 = 2400985;
static int32_t t67 = 34001;
int64_t x6293 = INT64_MIN;
int32_t x6295 = INT32_MIN;
static int32_t t70 = 22926280;
volatile int8_t x6352 = -1;
int8_t x6652 = INT8_MIN;
uint8_t x6683 = UINT8_MAX;
static volatile int32_t t75 = 548;
static int32_t x6894 = -1;
int8_t x7324 = -1;
uint64_t x7417 = 56248773LLU;
int16_t x7480 = -1;
volatile int16_t x7513 = INT16_MAX;
int16_t x7549 = 4;
int32_t x7686 = -1;
volatile int32_t t85 = 57;
uint16_t x7714 = UINT16_MAX;
int32_t x7829 = -1;
int32_t t89 = -6;
static int64_t x8031 = -1LL;
volatile int32_t t92 = -167;
int8_t x8221 = INT8_MAX;
int8_t x8275 = -1;
int32_t t94 = 92663;
uint64_t x8490 = 175947590904163151LLU;
volatile int8_t x8491 = 1;
static volatile int8_t x8492 = 1;
int16_t x8554 = INT16_MIN;
volatile int32_t t96 = 6;
uint64_t x8687 = UINT64_MAX;


void f0(void) {
	int8_t x17 = -1;
	int16_t x18 = -820;
	int8_t x20 = INT8_MIN;

	t0 = ((x17<x18)/(x19==x20));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x81 = 449U;
	int32_t t1 = -515;

	t1 = ((x81<x82)/(x83==x84));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x161 = INT32_MAX;
	uint32_t x163 = UINT32_MAX;
	uint32_t x164 = UINT32_MAX;
	static volatile int32_t t2 = -1;

	t2 = ((x161<x162)/(x163==x164));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x173 = INT32_MIN;
	int8_t x174 = INT8_MIN;
	int32_t x176 = -1;
	int32_t t3 = 1;

	t3 = ((x173<x174)/(x175==x176));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x225 = 48U;
	int64_t x227 = -1LL;
	volatile uint64_t x228 = UINT64_MAX;

	t4 = ((x225<x226)/(x227==x228));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x497 = -1;
	int16_t x498 = -1;
	int8_t x500 = 1;
	static volatile int32_t t5 = 73008326;

	t5 = ((x497<x498)/(x499==x500));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x542 = 65685688438113359LL;
	int64_t x544 = INT64_MIN;
	int32_t t6 = 6887;

	t6 = ((x541<x542)/(x543==x544));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x553 = INT16_MIN;
	static volatile int16_t x554 = INT16_MAX;
	int64_t x555 = INT64_MIN;
	int64_t x556 = INT64_MIN;
	static int32_t t7 = 3267;

	t7 = ((x553<x554)/(x555==x556));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x585 = 0U;
	int64_t x587 = INT64_MIN;
	int64_t x588 = INT64_MIN;
	int32_t t8 = -37;

	t8 = ((x585<x586)/(x587==x588));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x777 = INT32_MAX;
	uint64_t x778 = 13199550151307LLU;
	static int8_t x780 = -1;
	volatile int32_t t9 = 4;

	t9 = ((x777<x778)/(x779==x780));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x949 = -1;
	static uint8_t x950 = 67U;
	int32_t x951 = -1;
	volatile int32_t x952 = -1;
	int32_t t10 = -32022988;

	t10 = ((x949<x950)/(x951==x952));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x1029 = INT8_MAX;
	int16_t x1030 = 4961;
	volatile int16_t x1031 = -1;

	t11 = ((x1029<x1030)/(x1031==x1032));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x1201 = -1LL;
	static uint8_t x1202 = 43U;
	static int8_t x1203 = -1;
	volatile int32_t t12 = 1;

	t12 = ((x1201<x1202)/(x1203==x1204));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x1229 = -9660;
	static int8_t x1230 = INT8_MIN;
	int32_t t13 = 202;

	t13 = ((x1229<x1230)/(x1231==x1232));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x1254 = 6834923U;
	volatile int64_t x1255 = INT64_MIN;
	int64_t x1256 = INT64_MIN;
	volatile int32_t t14 = -411265;

	t14 = ((x1253<x1254)/(x1255==x1256));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x1318 = UINT8_MAX;
	int8_t x1319 = 0;
	int8_t x1320 = 0;
	int32_t t15 = -229;

	t15 = ((x1317<x1318)/(x1319==x1320));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x1341 = 1U;
	static int8_t x1342 = INT8_MIN;
	int16_t x1344 = -1;
	int32_t t16 = -5895882;

	t16 = ((x1341<x1342)/(x1343==x1344));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x1534 = UINT16_MAX;
	uint32_t x1535 = UINT32_MAX;
	static int16_t x1536 = -1;
	volatile int32_t t17 = 27494697;

	t17 = ((x1533<x1534)/(x1535==x1536));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x1637 = -1;
	volatile int8_t x1638 = -1;
	volatile int32_t t18 = 4324183;

	t18 = ((x1637<x1638)/(x1639==x1640));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x1653 = -9831;
	volatile uint64_t x1654 = UINT64_MAX;
	int32_t x1655 = INT32_MIN;
	int32_t t19 = 158733;

	t19 = ((x1653<x1654)/(x1655==x1656));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x1755 = -1;
	int32_t t20 = 61737;

	t20 = ((x1753<x1754)/(x1755==x1756));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1826 = -829009512;
	volatile int16_t x1827 = INT16_MIN;
	volatile int16_t x1828 = INT16_MIN;
	volatile int32_t t21 = 16;

	t21 = ((x1825<x1826)/(x1827==x1828));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x1905 = INT64_MIN;
	uint64_t x1906 = UINT64_MAX;
	int8_t x1907 = -1;
	int64_t x1908 = -1LL;

	t22 = ((x1905<x1906)/(x1907==x1908));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x2309 = INT64_MIN;
	int32_t x2310 = -12;
	static uint64_t x2311 = UINT64_MAX;
	static volatile uint64_t x2312 = UINT64_MAX;
	int32_t t23 = -177106;

	t23 = ((x2309<x2310)/(x2311==x2312));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x2630 = -111;
	volatile uint64_t x2631 = UINT64_MAX;

	t24 = ((x2629<x2630)/(x2631==x2632));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x2673 = UINT8_MAX;
	uint32_t x2674 = 20370583U;
	volatile uint64_t x2675 = UINT64_MAX;
	volatile int8_t x2676 = -1;
	int32_t t25 = 4575803;

	t25 = ((x2673<x2674)/(x2675==x2676));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x3053 = 4650131666994006LLU;
	volatile int64_t x3054 = INT64_MIN;
	volatile int16_t x3055 = INT16_MIN;
	int16_t x3056 = INT16_MIN;
	static int32_t t26 = -5743;

	t26 = ((x3053<x3054)/(x3055==x3056));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x3313 = 15U;
	int16_t x3314 = -1;
	int32_t x3315 = -1;
	int8_t x3316 = -1;

	t27 = ((x3313<x3314)/(x3315==x3316));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x3389 = INT64_MIN;
	volatile int32_t x3390 = -4830526;
	int16_t x3391 = 0;
	uint8_t x3392 = 0U;
	volatile int32_t t28 = -440416;

	t28 = ((x3389<x3390)/(x3391==x3392));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x3577 = INT8_MIN;
	int64_t x3578 = INT64_MIN;
	volatile int16_t x3579 = -1;
	static int16_t x3580 = -1;
	static int32_t t29 = -629734;

	t29 = ((x3577<x3578)/(x3579==x3580));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x3593 = -1LL;
	static uint16_t x3594 = UINT16_MAX;
	int8_t x3595 = -1;
	volatile int8_t x3596 = -1;
	int32_t t30 = 11;

	t30 = ((x3593<x3594)/(x3595==x3596));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x3709 = -1;
	int8_t x3710 = -1;
	int32_t t31 = -3371;

	t31 = ((x3709<x3710)/(x3711==x3712));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x3757 = INT16_MIN;
	int16_t x3758 = INT16_MIN;
	int16_t x3760 = INT16_MAX;
	int32_t t32 = -16718429;

	t32 = ((x3757<x3758)/(x3759==x3760));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x3778 = 81;
	static int32_t x3779 = -1;
	static uint32_t x3780 = UINT32_MAX;
	int32_t t33 = -7;

	t33 = ((x3777<x3778)/(x3779==x3780));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x3933 = UINT32_MAX;
	volatile int64_t x3934 = 509278040606LL;
	int64_t x3935 = INT64_MIN;
	int64_t x3936 = INT64_MIN;
	static volatile int32_t t34 = 56861;

	t34 = ((x3933<x3934)/(x3935==x3936));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x4005 = 5560124U;
	int8_t x4006 = 14;
	int8_t x4007 = -1;
	int8_t x4008 = -1;
	int32_t t35 = 1;

	t35 = ((x4005<x4006)/(x4007==x4008));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x4137 = INT16_MIN;
	int32_t x4138 = INT32_MAX;
	volatile int16_t x4139 = INT16_MIN;
	int16_t x4140 = INT16_MIN;
	static volatile int32_t t36 = -68;

	t36 = ((x4137<x4138)/(x4139==x4140));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x4469 = -7712389;
	int64_t x4470 = -1LL;
	uint32_t x4471 = UINT32_MAX;
	int8_t x4472 = -1;
	static volatile int32_t t37 = -3577;

	t37 = ((x4469<x4470)/(x4471==x4472));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x4473 = 17140050159LL;
	volatile uint8_t x4474 = 3U;
	int16_t x4476 = -1;
	int32_t t38 = 6053;

	t38 = ((x4473<x4474)/(x4475==x4476));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x4497 = -332;
	volatile int16_t x4499 = -1;
	int16_t x4500 = -1;
	int32_t t39 = 6;

	t39 = ((x4497<x4498)/(x4499==x4500));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x4513 = INT16_MAX;
	uint8_t x4515 = 0U;
	static int32_t t40 = 11;

	t40 = ((x4513<x4514)/(x4515==x4516));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x4554 = -1;
	int32_t x4555 = INT32_MIN;
	static volatile int32_t x4556 = INT32_MIN;
	int32_t t41 = 130987794;

	t41 = ((x4553<x4554)/(x4555==x4556));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x4613 = 0;
	int16_t x4615 = INT16_MAX;
	static int16_t x4616 = INT16_MAX;

	t42 = ((x4613<x4614)/(x4615==x4616));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x4721 = INT32_MAX;
	volatile uint16_t x4722 = 0U;
	int16_t x4724 = -1;
	volatile int32_t t43 = 2878191;

	t43 = ((x4721<x4722)/(x4723==x4724));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x4725 = -8093LL;
	static uint8_t x4726 = 105U;
	int8_t x4727 = INT8_MIN;
	static int32_t t44 = 523;

	t44 = ((x4725<x4726)/(x4727==x4728));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x4770 = -122LL;
	int8_t x4771 = INT8_MIN;
	int8_t x4772 = INT8_MIN;
	volatile int32_t t45 = 4493;

	t45 = ((x4769<x4770)/(x4771==x4772));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x4809 = 1;
	int8_t x4810 = 1;
	volatile int32_t x4811 = INT32_MIN;
	int32_t x4812 = INT32_MIN;

	t46 = ((x4809<x4810)/(x4811==x4812));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x4818 = -27896654370167LL;
	int32_t x4819 = -1;
	uint64_t x4820 = UINT64_MAX;

	t47 = ((x4817<x4818)/(x4819==x4820));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x4857 = 3288467LLU;
	static uint64_t x4858 = UINT64_MAX;
	uint64_t x4859 = UINT64_MAX;
	static int32_t x4860 = -1;
	int32_t t48 = -10877;

	t48 = ((x4857<x4858)/(x4859==x4860));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x4935 = -1;
	static int8_t x4936 = -1;
	int32_t t49 = -91;

	t49 = ((x4933<x4934)/(x4935==x4936));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x5006 = INT16_MIN;
	static int32_t t50 = 4;

	t50 = ((x5005<x5006)/(x5007==x5008));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x5077 = INT8_MIN;
	static uint8_t x5078 = 3U;
	volatile int32_t x5079 = -1;
	int64_t x5080 = -1LL;
	volatile int32_t t51 = -23071;

	t51 = ((x5077<x5078)/(x5079==x5080));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x5277 = INT32_MAX;
	static int16_t x5279 = INT16_MIN;
	int16_t x5280 = INT16_MIN;
	int32_t t52 = -4148580;

	t52 = ((x5277<x5278)/(x5279==x5280));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x5353 = -1;
	static int64_t x5354 = -1LL;
	int16_t x5356 = -1;
	volatile int32_t t53 = -770;

	t53 = ((x5353<x5354)/(x5355==x5356));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x5441 = -1LL;
	int64_t x5442 = INT64_MIN;
	int32_t x5443 = -1;
	int64_t x5444 = -1LL;

	t54 = ((x5441<x5442)/(x5443==x5444));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x5482 = 50992828U;
	int8_t x5483 = -1;
	int64_t x5484 = -1LL;

	t55 = ((x5481<x5482)/(x5483==x5484));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x5493 = INT8_MIN;
	int64_t x5494 = -3156716000386897508LL;
	volatile int64_t x5495 = INT64_MIN;
	static volatile int64_t x5496 = INT64_MIN;
	static volatile int32_t t56 = 186048;

	t56 = ((x5493<x5494)/(x5495==x5496));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x5601 = UINT64_MAX;
	uint64_t x5602 = 854LLU;
	static uint8_t x5603 = UINT8_MAX;
	uint8_t x5604 = UINT8_MAX;
	int32_t t57 = -188957831;

	t57 = ((x5601<x5602)/(x5603==x5604));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x5717 = INT32_MIN;
	static int64_t x5718 = INT64_MIN;
	int32_t t58 = 7578;

	t58 = ((x5717<x5718)/(x5719==x5720));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x5849 = INT16_MAX;
	int64_t x5850 = 73875047LL;
	int16_t x5851 = -1;
	static uint64_t x5852 = UINT64_MAX;

	t59 = ((x5849<x5850)/(x5851==x5852));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x5857 = -11LL;
	volatile uint64_t x5858 = 12LLU;
	volatile int16_t x5859 = -1;
	int8_t x5860 = -1;

	t60 = ((x5857<x5858)/(x5859==x5860));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x5949 = UINT32_MAX;
	static int8_t x5950 = -1;
	int8_t x5951 = -1;
	volatile int32_t t61 = -15;

	t61 = ((x5949<x5950)/(x5951==x5952));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x5997 = INT8_MAX;
	uint8_t x5999 = UINT8_MAX;

	t62 = ((x5997<x5998)/(x5999==x6000));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x6050 = -39;
	int8_t x6051 = INT8_MIN;
	int8_t x6052 = INT8_MIN;
	int32_t t63 = -2;

	t63 = ((x6049<x6050)/(x6051==x6052));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x6061 = 4;
	int32_t x6062 = -770;
	volatile int64_t x6063 = -1LL;
	static volatile int8_t x6064 = -1;
	int32_t t64 = 423575;

	t64 = ((x6061<x6062)/(x6063==x6064));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x6141 = -1;
	static int32_t x6142 = 0;
	int64_t x6143 = INT64_MIN;
	int64_t x6144 = INT64_MIN;
	static volatile int32_t t65 = 0;

	t65 = ((x6141<x6142)/(x6143==x6144));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x6184 = -1;

	t66 = ((x6181<x6182)/(x6183==x6184));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x6285 = 7U;
	int16_t x6286 = 334;
	static int8_t x6287 = INT8_MIN;
	static volatile int8_t x6288 = INT8_MIN;

	t67 = ((x6285<x6286)/(x6287==x6288));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x6294 = 11060728547LL;
	static int32_t x6296 = INT32_MIN;
	volatile int32_t t68 = -1637;

	t68 = ((x6293<x6294)/(x6295==x6296));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x6301 = 16131997U;
	int32_t x6302 = INT32_MIN;
	volatile int16_t x6303 = INT16_MAX;
	int16_t x6304 = INT16_MAX;
	int32_t t69 = 0;

	t69 = ((x6301<x6302)/(x6303==x6304));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x6333 = INT8_MIN;
	int16_t x6334 = INT16_MIN;
	static int16_t x6335 = INT16_MIN;
	volatile int16_t x6336 = INT16_MIN;

	t70 = ((x6333<x6334)/(x6335==x6336));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint32_t x6349 = UINT32_MAX;
	int64_t x6350 = INT64_MAX;
	volatile int32_t x6351 = -1;
	static volatile int32_t t71 = 1056332676;

	t71 = ((x6349<x6350)/(x6351==x6352));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x6429 = -1;
	uint8_t x6430 = UINT8_MAX;
	static int64_t x6431 = INT64_MIN;
	int64_t x6432 = INT64_MIN;
	static int32_t t72 = -5;

	t72 = ((x6429<x6430)/(x6431==x6432));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x6649 = INT64_MAX;
	int8_t x6650 = INT8_MIN;
	static volatile int8_t x6651 = INT8_MIN;
	volatile int32_t t73 = 32;

	t73 = ((x6649<x6650)/(x6651==x6652));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x6681 = INT8_MIN;
	uint8_t x6682 = 91U;
	volatile uint8_t x6684 = UINT8_MAX;
	volatile int32_t t74 = 6196053;

	t74 = ((x6681<x6682)/(x6683==x6684));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x6793 = -1;
	int16_t x6794 = INT16_MIN;
	uint32_t x6795 = UINT32_MAX;
	uint32_t x6796 = UINT32_MAX;

	t75 = ((x6793<x6794)/(x6795==x6796));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x6821 = -1;
	uint8_t x6822 = UINT8_MAX;
	uint32_t x6823 = UINT32_MAX;
	static int32_t x6824 = -1;
	volatile int32_t t76 = -88382475;

	t76 = ((x6821<x6822)/(x6823==x6824));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x6893 = INT8_MAX;
	static volatile int32_t x6895 = -1;
	static int64_t x6896 = -1LL;
	volatile int32_t t77 = -9321096;

	t77 = ((x6893<x6894)/(x6895==x6896));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x7085 = INT8_MIN;
	uint32_t x7086 = 0U;
	int8_t x7087 = INT8_MIN;
	int8_t x7088 = INT8_MIN;
	int32_t t78 = -1901184;

	t78 = ((x7085<x7086)/(x7087==x7088));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x7237 = -180390;
	static volatile uint8_t x7238 = UINT8_MAX;
	int64_t x7239 = -1LL;
	int8_t x7240 = -1;
	volatile int32_t t79 = -188;

	t79 = ((x7237<x7238)/(x7239==x7240));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x7321 = -1LL;
	static int64_t x7322 = -1LL;
	int64_t x7323 = -1LL;
	volatile int32_t t80 = 432350;

	t80 = ((x7321<x7322)/(x7323==x7324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x7418 = INT16_MIN;
	volatile int64_t x7419 = -1LL;
	static volatile int64_t x7420 = -1LL;
	int32_t t81 = 355;

	t81 = ((x7417<x7418)/(x7419==x7420));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x7477 = UINT64_MAX;
	int32_t x7478 = INT32_MIN;
	static int16_t x7479 = -1;
	static int32_t t82 = 4028;

	t82 = ((x7477<x7478)/(x7479==x7480));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x7514 = -1LL;
	uint8_t x7515 = UINT8_MAX;
	uint8_t x7516 = UINT8_MAX;
	volatile int32_t t83 = -558248000;

	t83 = ((x7513<x7514)/(x7515==x7516));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x7550 = INT32_MAX;
	uint32_t x7551 = UINT32_MAX;
	int8_t x7552 = -1;
	volatile int32_t t84 = 0;

	t84 = ((x7549<x7550)/(x7551==x7552));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x7685 = -112448774261601LL;
	int32_t x7687 = INT32_MIN;
	static int32_t x7688 = INT32_MIN;

	t85 = ((x7685<x7686)/(x7687==x7688));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x7713 = 7226971U;
	uint64_t x7715 = UINT64_MAX;
	int32_t x7716 = -1;
	int32_t t86 = 10;

	t86 = ((x7713<x7714)/(x7715==x7716));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x7809 = 35U;
	int32_t x7810 = INT32_MIN;
	uint32_t x7811 = UINT32_MAX;
	int32_t x7812 = -1;
	static volatile int32_t t87 = 50362649;

	t87 = ((x7809<x7810)/(x7811==x7812));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x7830 = 891;
	int16_t x7831 = -1;
	volatile int8_t x7832 = -1;
	volatile int32_t t88 = -1;

	t88 = ((x7829<x7830)/(x7831==x7832));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x7905 = INT32_MIN;
	uint64_t x7906 = UINT64_MAX;
	static uint64_t x7907 = UINT64_MAX;
	int32_t x7908 = -1;

	t89 = ((x7905<x7906)/(x7907==x7908));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x7977 = INT64_MIN;
	int8_t x7978 = -1;
	int32_t x7979 = INT32_MIN;
	volatile int32_t x7980 = INT32_MIN;
	int32_t t90 = -15527667;

	t90 = ((x7977<x7978)/(x7979==x7980));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x8029 = INT16_MIN;
	int32_t x8030 = -1;
	int64_t x8032 = -1LL;
	int32_t t91 = -22863322;

	t91 = ((x8029<x8030)/(x8031==x8032));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x8181 = 2U;
	int64_t x8182 = INT64_MIN;
	int32_t x8183 = -1;
	static volatile int32_t x8184 = -1;

	t92 = ((x8181<x8182)/(x8183==x8184));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x8222 = INT64_MIN;
	static int64_t x8223 = INT64_MIN;
	static int64_t x8224 = INT64_MIN;
	int32_t t93 = -99596524;

	t93 = ((x8221<x8222)/(x8223==x8224));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x8273 = INT16_MIN;
	volatile uint16_t x8274 = UINT16_MAX;
	int64_t x8276 = -1LL;

	t94 = ((x8273<x8274)/(x8275==x8276));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x8489 = INT64_MIN;
	volatile int32_t t95 = 210;

	t95 = ((x8489<x8490)/(x8491==x8492));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x8553 = INT64_MIN;
	int8_t x8555 = -1;
	static volatile int64_t x8556 = -1LL;

	t96 = ((x8553<x8554)/(x8555==x8556));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x8669 = UINT32_MAX;
	uint32_t x8670 = UINT32_MAX;
	volatile int32_t x8671 = -1;
	volatile uint32_t x8672 = UINT32_MAX;
	int32_t t97 = 0;

	t97 = ((x8669<x8670)/(x8671==x8672));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x8685 = -1;
	static int64_t x8686 = INT64_MIN;
	int64_t x8688 = -1LL;
	static volatile int32_t t98 = -123657;

	t98 = ((x8685<x8686)/(x8687==x8688));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x8789 = -367103LL;
	int8_t x8790 = INT8_MIN;
	int32_t x8791 = INT32_MIN;
	static int32_t x8792 = INT32_MIN;
	volatile int32_t t99 = -4410520;

	t99 = ((x8789<x8790)/(x8791==x8792));

	if (t99 != 1) { NG(); } else { ; }
	
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

