#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x29 = INT8_MAX;
volatile int16_t x36 = -1;
volatile uint32_t x65 = UINT32_MAX;
int64_t x91 = INT64_MAX;
int32_t x92 = 4;
static uint64_t t4 = 14874962124941LLU;
static int8_t x106 = 2;
volatile int32_t t7 = 17073633;
volatile uint64_t x148 = UINT64_MAX;
volatile int32_t t10 = 169;
static int32_t t11 = -5242354;
static int32_t x165 = 1755;
static int16_t x166 = INT16_MAX;
int16_t x167 = 0;
int32_t t15 = -1048;
static uint8_t x273 = 71U;
int32_t t16 = -15769859;
uint16_t x308 = 8U;
int8_t x322 = INT8_MAX;
uint32_t t19 = 19166U;
static uint64_t x349 = 10LLU;
uint32_t x352 = 39528555U;
volatile uint64_t t21 = 1593280LLU;
int32_t x383 = INT32_MAX;
int32_t t22 = 419;
int64_t x408 = -1LL;
volatile int64_t t23 = INT64_MAX;
volatile uint32_t t24 = UINT32_MAX;
static int8_t x430 = -1;
volatile uint32_t t27 = 116105U;
static volatile uint32_t x449 = 28439U;
int64_t x450 = INT64_MIN;
uint32_t t29 = 1230U;
volatile int32_t x454 = -1;
int8_t x455 = 1;
uint32_t x456 = 38013929U;
int32_t t30 = -9365291;
static uint16_t x477 = UINT16_MAX;
volatile int32_t t32 = 7001549;
static int16_t x496 = INT16_MIN;
volatile int16_t x511 = INT16_MIN;
static volatile int64_t x566 = INT64_MIN;
static uint64_t x567 = UINT64_MAX;
int32_t x582 = INT32_MAX;
int16_t x589 = INT16_MAX;
volatile int8_t x594 = INT8_MIN;
static volatile int16_t x613 = 0;
volatile int16_t x616 = -1;
int8_t x639 = 16;
volatile int32_t x654 = INT32_MIN;
static volatile int32_t t50 = -1072466035;
uint8_t x684 = 4U;
volatile uint64_t x689 = 454077050209LLU;
int16_t x697 = INT16_MAX;
volatile int32_t t54 = -131500947;
uint8_t x709 = 0U;
int32_t x737 = 502498650;
uint16_t x739 = UINT16_MAX;
volatile int32_t t56 = 3;
static int32_t x782 = -1;
volatile int8_t x795 = 0;
static volatile int64_t x806 = INT64_MIN;
static volatile int32_t x811 = INT32_MIN;
uint32_t x820 = 550210910U;
volatile uint64_t t63 = 139266181LLU;
uint8_t x855 = UINT8_MAX;
int8_t x856 = -1;
int8_t x860 = 2;
static int32_t x870 = INT32_MAX;
int16_t x872 = 12;
uint16_t x887 = UINT16_MAX;
int32_t t69 = -3547041;
int32_t t71 = INT32_MAX;
uint8_t x935 = 0U;
static int32_t x957 = 0;
int32_t x960 = -752644730;
uint16_t x979 = UINT16_MAX;
int64_t x980 = -1LL;
int64_t x986 = 3774021LL;
uint8_t x987 = 18U;
volatile uint8_t x1029 = UINT8_MAX;
static int64_t x1066 = 1138815541489691LL;
static int32_t x1068 = INT32_MIN;
int64_t t82 = 98417456767380LL;
volatile uint8_t x1110 = UINT8_MAX;
static uint64_t x1178 = 690417071778LLU;
int32_t x1196 = INT32_MAX;
uint8_t x1203 = 29U;
uint64_t t88 = 287067434640LLU;
int8_t x1211 = INT8_MAX;
int64_t x1225 = 1028003080540LL;
static int16_t x1226 = INT16_MAX;
uint16_t x1227 = 21U;
uint32_t x1241 = UINT32_MAX;
static volatile uint16_t x1244 = 1U;
volatile uint64_t x1257 = UINT64_MAX;
int32_t x1258 = INT32_MIN;
volatile uint32_t x1260 = 4554470U;
int64_t x1299 = 6325540552237LL;
uint8_t x1374 = 1U;


void f0(void) {
	volatile uint64_t x30 = 233710LLU;
	uint16_t x31 = 30U;
	volatile int8_t x32 = -1;
	volatile int32_t t0 = -1818;

	t0 = (x29<<(x30&(x31%x32)));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x33 = 1U;
	static int8_t x34 = INT8_MIN;
	static uint16_t x35 = UINT16_MAX;
	uint32_t t1 = 15U;

	t1 = (x33<<(x34&(x35%x36)));

	if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x66 = -1;
	uint64_t x67 = UINT64_MAX;
	int64_t x68 = 120LL;
	uint32_t t2 = 637864U;

	t2 = (x65<<(x66&(x67%x68)));

	if (t2 != 4294934528U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x89 = 23861U;
	int8_t x90 = 0;
	volatile int32_t t3 = 2;

	t3 = (x89<<(x90&(x91%x92)));

	if (t3 != 23861) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x97 = 11384LLU;
	uint64_t x98 = 132175778LLU;
	int16_t x99 = INT16_MIN;
	int64_t x100 = -1LL;

	t4 = (x97<<(x98&(x99%x100)));

	if (t4 != 11384LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x105 = 2870465888222106LLU;
	int8_t x107 = INT8_MIN;
	int64_t x108 = 1LL;
	uint64_t t5 = 20LLU;

	t5 = (x105<<(x106&(x107%x108)));

	if (t5 != 2870465888222106LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x109 = UINT8_MAX;
	int8_t x110 = 5;
	int32_t x111 = 133961;
	int32_t x112 = INT32_MIN;
	volatile int32_t t6 = 4310387;

	t6 = (x109<<(x110&(x111%x112)));

	if (t6 != 510) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x113 = INT16_MAX;
	int32_t x114 = INT32_MIN;
	static volatile int32_t x115 = INT32_MIN;
	volatile int16_t x116 = -1;

	t7 = (x113<<(x114&(x115%x116)));

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x125 = 0;
	int32_t x126 = INT32_MAX;
	static uint64_t x127 = UINT64_MAX;
	int64_t x128 = -1LL;
	volatile int32_t t8 = 901;

	t8 = (x125<<(x126&(x127%x128)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x129 = INT16_MAX;
	int8_t x130 = -1;
	static int8_t x131 = -1;
	int16_t x132 = -1;
	int32_t t9 = -3736435;

	t9 = (x129<<(x130&(x131%x132)));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint8_t x145 = UINT8_MAX;
	int64_t x146 = -1790092762480491LL;
	uint16_t x147 = 0U;

	t10 = (x145<<(x146&(x147%x148)));

	if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x149 = UINT8_MAX;
	int8_t x150 = -61;
	static volatile int8_t x151 = 0;
	uint64_t x152 = 8150072839553742LLU;

	t11 = (x149<<(x150&(x151%x152)));

	if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x168 = -1;
	int32_t t12 = 179;

	t12 = (x165<<(x166&(x167%x168)));

	if (t12 != 1755) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x225 = UINT16_MAX;
	int8_t x226 = 1;
	int8_t x227 = 45;
	int8_t x228 = INT8_MAX;
	int32_t t13 = -147857548;

	t13 = (x225<<(x226&(x227%x228)));

	if (t13 != 131070) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x245 = 71LL;
	uint16_t x246 = UINT16_MAX;
	int64_t x247 = INT64_MIN;
	int32_t x248 = INT32_MIN;
	int64_t t14 = -98168337LL;

	t14 = (x245<<(x246&(x247%x248)));

	if (t14 != 71LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x265 = 3U;
	volatile int8_t x266 = INT8_MAX;
	static uint32_t x267 = 55052U;
	volatile int64_t x268 = -372033772147LL;

	t15 = (x265<<(x266&(x267%x268)));

	if (t15 != 12288) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x274 = 46388568367587LL;
	volatile int32_t x275 = 0;
	int64_t x276 = -4109284249587189LL;

	t16 = (x273<<(x274&(x275%x276)));

	if (t16 != 71) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x289 = 23317U;
	static uint32_t x290 = 513166327U;
	int64_t x291 = INT64_MIN;
	int32_t x292 = INT32_MIN;
	int32_t t17 = 77;

	t17 = (x289<<(x290&(x291%x292)));

	if (t17 != 23317) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x305 = 47266917;
	uint64_t x306 = 401946999LLU;
	static int8_t x307 = 1;
	static volatile int32_t t18 = -29956;

	t18 = (x305<<(x306&(x307%x308)));

	if (t18 != 94533834) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x321 = 14211U;
	int16_t x323 = INT16_MIN;
	static volatile int64_t x324 = -3274649LL;

	t19 = (x321<<(x322&(x323%x324)));

	if (t19 != 14211U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x337 = 7U;
	static uint64_t x338 = 36LLU;
	uint64_t x339 = 292441066831128480LLU;
	volatile uint32_t x340 = 17483U;
	volatile uint32_t t20 = 1U;

	t20 = (x337<<(x338&(x339%x340)));

	if (t20 != 112U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x350 = INT64_MIN;
	volatile uint32_t x351 = 894433U;

	t21 = (x349<<(x350&(x351%x352)));

	if (t21 != 10LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint8_t x381 = UINT8_MAX;
	volatile int32_t x382 = 1388127;
	volatile uint8_t x384 = 13U;

	t22 = (x381<<(x382&(x383%x384)));

	if (t22 != 261120) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x405 = INT64_MAX;
	static int64_t x406 = 1762LL;
	static int16_t x407 = 84;

	t23 = (x405<<(x406&(x407%x408)));

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x409 = UINT32_MAX;
	int16_t x410 = 42;
	int8_t x411 = 1;
	static int16_t x412 = -162;

	t24 = (x409<<(x410&(x411%x412)));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x417 = 8560;
	static volatile int32_t x418 = -1;
	uint64_t x419 = 573083LLU;
	volatile uint8_t x420 = 15U;
	volatile int32_t t25 = 11991;

	t25 = (x417<<(x418&(x419%x420)));

	if (t25 != 2191360) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x421 = UINT32_MAX;
	int64_t x422 = INT64_MIN;
	volatile uint64_t x423 = 390LLU;
	int16_t x424 = INT16_MAX;
	static uint32_t t26 = UINT32_MAX;

	t26 = (x421<<(x422&(x423%x424)));

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x429 = 54353277U;
	int8_t x431 = 2;
	int32_t x432 = -1;

	t27 = (x429<<(x430&(x431%x432)));

	if (t27 != 54353277U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x433 = 7U;
	uint64_t x434 = 1856684423586276904LLU;
	volatile uint8_t x435 = 6U;
	uint16_t x436 = UINT16_MAX;
	int32_t t28 = -180;

	t28 = (x433<<(x434&(x435%x436)));

	if (t28 != 7) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x451 = 18272;
	uint8_t x452 = UINT8_MAX;

	t29 = (x449<<(x450&(x451%x452)));

	if (t29 != 28439U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x453 = 0U;

	t30 = (x453<<(x454&(x455%x456)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x469 = 67091623340LL;
	volatile int64_t x470 = INT64_MAX;
	uint32_t x471 = 7U;
	volatile int32_t x472 = INT32_MIN;
	volatile int64_t t31 = 2080813964058391900LL;

	t31 = (x469<<(x470&(x471%x472)));

	if (t31 != 8587727787520LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x478 = INT32_MIN;
	static volatile int32_t x479 = INT32_MAX;
	int64_t x480 = 1627694070893886920LL;

	t32 = (x477<<(x478&(x479%x480)));

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x493 = 304;
	uint8_t x494 = 5U;
	int8_t x495 = 3;
	volatile int32_t t33 = 15650822;

	t33 = (x493<<(x494&(x495%x496)));

	if (t33 != 608) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x509 = 4075U;
	static uint8_t x510 = UINT8_MAX;
	volatile int64_t x512 = -1LL;
	volatile int32_t t34 = -235;

	t34 = (x509<<(x510&(x511%x512)));

	if (t34 != 4075) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x517 = 6U;
	volatile uint64_t x518 = 12882422929548LLU;
	uint8_t x519 = 0U;
	int64_t x520 = INT64_MIN;
	int32_t t35 = 1803926;

	t35 = (x517<<(x518&(x519%x520)));

	if (t35 != 6) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x549 = 17U;
	volatile uint16_t x550 = UINT16_MAX;
	int32_t x551 = INT32_MAX;
	volatile int16_t x552 = INT16_MAX;
	int32_t t36 = 282738104;

	t36 = (x549<<(x550&(x551%x552)));

	if (t36 != 34) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x553 = 3160170U;
	uint8_t x554 = 3U;
	static volatile int32_t x555 = INT32_MIN;
	int32_t x556 = -6199;
	volatile uint32_t t37 = 3U;

	t37 = (x553<<(x554&(x555%x556)));

	if (t37 != 3160170U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x565 = 3U;
	int64_t x568 = INT64_MAX;
	volatile int32_t t38 = -13;

	t38 = (x565<<(x566&(x567%x568)));

	if (t38 != 3) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x581 = 1;
	volatile int16_t x583 = -7;
	int64_t x584 = -1LL;
	volatile int32_t t39 = -2;

	t39 = (x581<<(x582&(x583%x584)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x590 = 8856;
	int32_t x591 = INT32_MIN;
	int8_t x592 = INT8_MIN;
	volatile int32_t t40 = 96190;

	t40 = (x589<<(x590&(x591%x592)));

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x593 = INT8_MAX;
	static int64_t x595 = INT64_MIN;
	int16_t x596 = INT16_MIN;
	volatile int32_t t41 = 87;

	t41 = (x593<<(x594&(x595%x596)));

	if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x601 = 7U;
	static int32_t x602 = -7280158;
	int64_t x603 = 66278523347813LL;
	volatile int8_t x604 = -1;
	volatile int32_t t42 = -89;

	t42 = (x601<<(x602&(x603%x604)));

	if (t42 != 7) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x605 = 66U;
	int64_t x606 = INT64_MIN;
	int32_t x607 = 32817784;
	volatile int8_t x608 = INT8_MAX;
	volatile int32_t t43 = -56893659;

	t43 = (x605<<(x606&(x607%x608)));

	if (t43 != 66) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x609 = UINT8_MAX;
	int64_t x610 = INT64_MIN;
	int32_t x611 = INT32_MIN;
	volatile int8_t x612 = INT8_MIN;
	int32_t t44 = -19;

	t44 = (x609<<(x610&(x611%x612)));

	if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x614 = 0U;
	static int32_t x615 = -458;
	int32_t t45 = -70279;

	t45 = (x613<<(x614&(x615%x616)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x637 = 6968;
	int32_t x638 = -1;
	int64_t x640 = -1LL;
	volatile int32_t t46 = -659556;

	t46 = (x637<<(x638&(x639%x640)));

	if (t46 != 6968) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x645 = UINT32_MAX;
	volatile int16_t x646 = -146;
	volatile int32_t x647 = INT32_MAX;
	volatile int32_t x648 = -66;
	volatile uint32_t t47 = UINT32_MAX;

	t47 = (x645<<(x646&(x647%x648)));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x649 = 33358171435422LLU;
	static volatile int64_t x650 = 3601586016080774LL;
	static int32_t x651 = 80712933;
	int32_t x652 = -1;
	uint64_t t48 = 6383221860444LLU;

	t48 = (x649<<(x650&(x651%x652)));

	if (t48 != 33358171435422LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x653 = 97U;
	static volatile uint8_t x655 = 0U;
	uint16_t x656 = 8U;
	int32_t t49 = -2512403;

	t49 = (x653<<(x654&(x655%x656)));

	if (t49 != 97) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x657 = INT16_MAX;
	uint16_t x658 = 4U;
	static int32_t x659 = -1;
	int8_t x660 = -1;

	t50 = (x657<<(x658&(x659%x660)));

	if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x669 = 8011U;
	static volatile int32_t x670 = INT32_MIN;
	volatile int64_t x671 = 15119LL;
	int16_t x672 = 1;
	volatile int32_t t51 = 703;

	t51 = (x669<<(x670&(x671%x672)));

	if (t51 != 8011) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x681 = 10624U;
	uint32_t x682 = UINT32_MAX;
	int32_t x683 = 133481877;
	int32_t t52 = 2;

	t52 = (x681<<(x682&(x683%x684)));

	if (t52 != 21248) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x690 = -1;
	int16_t x691 = -1;
	int8_t x692 = 1;
	uint64_t t53 = 729636627614LLU;

	t53 = (x689<<(x690&(x691%x692)));

	if (t53 != 454077050209LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x698 = INT64_MIN;
	uint16_t x699 = 11096U;
	static volatile int16_t x700 = INT16_MIN;

	t54 = (x697<<(x698&(x699%x700)));

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x710 = INT64_MAX;
	static uint32_t x711 = 1492978939U;
	uint32_t x712 = 38U;
	int32_t t55 = -1060174;

	t55 = (x709<<(x710&(x711%x712)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x738 = INT64_MIN;
	volatile uint32_t x740 = 16418379U;

	t56 = (x737<<(x738&(x739%x740)));

	if (t56 != 502498650) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x745 = 2U;
	uint8_t x746 = 2U;
	uint8_t x747 = UINT8_MAX;
	int16_t x748 = INT16_MAX;
	static int32_t t57 = -456876;

	t57 = (x745<<(x746&(x747%x748)));

	if (t57 != 8) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x781 = 3404456412888651LL;
	volatile uint32_t x783 = 170235129U;
	static uint16_t x784 = 1U;
	volatile int64_t t58 = -916953LL;

	t58 = (x781<<(x782&(x783%x784)));

	if (t58 != 3404456412888651LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x793 = 264772679528LLU;
	int32_t x794 = INT32_MIN;
	volatile uint8_t x796 = 55U;
	volatile uint64_t t59 = 1024056217LLU;

	t59 = (x793<<(x794&(x795%x796)));

	if (t59 != 264772679528LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x805 = 656U;
	volatile int8_t x807 = -1;
	int8_t x808 = -1;
	static int32_t t60 = -705474;

	t60 = (x805<<(x806&(x807%x808)));

	if (t60 != 656) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x809 = INT32_MAX;
	static volatile uint16_t x810 = 1213U;
	volatile int32_t x812 = -1;
	int32_t t61 = INT32_MAX;

	t61 = (x809<<(x810&(x811%x812)));

	if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x813 = 28635849U;
	uint16_t x814 = 15U;
	int16_t x815 = -1;
	int32_t x816 = INT32_MIN;
	static volatile uint32_t t62 = 7223598U;

	t62 = (x813<<(x814&(x815%x816)));

	if (t62 != 2036629504U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x817 = 883283496LLU;
	static uint64_t x818 = UINT64_MAX;
	int8_t x819 = 0;

	t63 = (x817<<(x818&(x819%x820)));

	if (t63 != 883283496LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x825 = 929U;
	static uint8_t x826 = 13U;
	int8_t x827 = 0;
	int8_t x828 = INT8_MIN;
	volatile int32_t t64 = 30;

	t64 = (x825<<(x826&(x827%x828)));

	if (t64 != 929) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x853 = 59U;
	static volatile int16_t x854 = -1;
	uint32_t t65 = 5073U;

	t65 = (x853<<(x854&(x855%x856)));

	if (t65 != 59U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x857 = 26;
	int16_t x858 = -1;
	static int64_t x859 = 34681319993927LL;
	static int32_t t66 = 46434;

	t66 = (x857<<(x858&(x859%x860)));

	if (t66 != 52) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x869 = INT16_MAX;
	int32_t x871 = INT32_MAX;
	volatile int32_t t67 = -66712;

	t67 = (x869<<(x870&(x871%x872)));

	if (t67 != 4194176) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x885 = INT32_MAX;
	int32_t x886 = INT32_MIN;
	static volatile int32_t x888 = 38835;
	static volatile int32_t t68 = INT32_MAX;

	t68 = (x885<<(x886&(x887%x888)));

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x893 = 15;
	volatile uint16_t x894 = 1U;
	int64_t x895 = 3084LL;
	volatile int16_t x896 = -1;

	t69 = (x893<<(x894&(x895%x896)));

	if (t69 != 15) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x901 = 11U;
	volatile uint8_t x902 = 2U;
	int32_t x903 = 2978;
	int64_t x904 = INT64_MIN;
	static int32_t t70 = -1;

	t70 = (x901<<(x902&(x903%x904)));

	if (t70 != 44) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x909 = INT32_MAX;
	volatile int8_t x910 = INT8_MIN;
	volatile int32_t x911 = -1;
	uint32_t x912 = UINT32_MAX;

	t71 = (x909<<(x910&(x911%x912)));

	if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x933 = INT8_MAX;
	static int32_t x934 = -1;
	uint32_t x936 = 2U;
	int32_t t72 = 179171;

	t72 = (x933<<(x934&(x935%x936)));

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x937 = 3284615059538748299LLU;
	uint64_t x938 = 1276784549737501874LLU;
	int32_t x939 = -1;
	uint32_t x940 = 3U;
	volatile uint64_t t73 = 30233938020LLU;

	t73 = (x937<<(x938&(x939%x940)));

	if (t73 != 3284615059538748299LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x958 = INT32_MIN;
	uint32_t x959 = 84708U;
	int32_t t74 = -5;

	t74 = (x957<<(x958&(x959%x960)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x969 = 2705215;
	volatile int8_t x970 = 2;
	uint8_t x971 = 10U;
	int8_t x972 = -1;
	volatile int32_t t75 = -135515;

	t75 = (x969<<(x970&(x971%x972)));

	if (t75 != 2705215) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x977 = UINT8_MAX;
	int32_t x978 = INT32_MIN;
	volatile int32_t t76 = -1;

	t76 = (x977<<(x978&(x979%x980)));

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x985 = 0;
	volatile uint8_t x988 = UINT8_MAX;
	volatile int32_t t77 = 1478;

	t77 = (x985<<(x986&(x987%x988)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x1017 = 96U;
	uint16_t x1018 = 23821U;
	int32_t x1019 = INT32_MIN;
	static int16_t x1020 = INT16_MIN;
	int32_t t78 = 164;

	t78 = (x1017<<(x1018&(x1019%x1020)));

	if (t78 != 96) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x1030 = INT64_MIN;
	volatile uint16_t x1031 = UINT16_MAX;
	static uint16_t x1032 = 235U;
	int32_t t79 = -3;

	t79 = (x1029<<(x1030&(x1031%x1032)));

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x1037 = 1U;
	static int64_t x1038 = INT64_MIN;
	volatile uint8_t x1039 = 91U;
	uint64_t x1040 = 40504983796596355LLU;
	int32_t t80 = 141535;

	t80 = (x1037<<(x1038&(x1039%x1040)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x1053 = 1247;
	int16_t x1054 = -1;
	int8_t x1055 = 1;
	int64_t x1056 = INT64_MIN;
	int32_t t81 = -4;

	t81 = (x1053<<(x1054&(x1055%x1056)));

	if (t81 != 2494) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x1065 = 1076974997706827LL;
	int32_t x1067 = INT32_MIN;

	t82 = (x1065<<(x1066&(x1067%x1068)));

	if (t82 != 1076974997706827LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x1109 = INT64_MAX;
	volatile int16_t x1111 = INT16_MAX;
	int16_t x1112 = -1;
	static int64_t t83 = INT64_MAX;

	t83 = (x1109<<(x1110&(x1111%x1112)));

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x1129 = 63217928LLU;
	uint32_t x1130 = 29623U;
	static int8_t x1131 = INT8_MAX;
	static uint32_t x1132 = 529U;
	volatile uint64_t t84 = 2465LLU;

	t84 = (x1129<<(x1130&(x1131%x1132)));

	if (t84 != 9511602413006487552LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x1133 = UINT32_MAX;
	static uint16_t x1134 = 6391U;
	uint64_t x1135 = UINT64_MAX;
	uint8_t x1136 = UINT8_MAX;
	uint32_t t85 = UINT32_MAX;

	t85 = (x1133<<(x1134&(x1135%x1136)));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x1177 = 1634924911LLU;
	int8_t x1179 = 1;
	int32_t x1180 = INT32_MIN;
	volatile uint64_t t86 = 42983711154LLU;

	t86 = (x1177<<(x1178&(x1179%x1180)));

	if (t86 != 1634924911LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x1193 = INT32_MAX;
	int32_t x1194 = INT32_MIN;
	int32_t x1195 = 0;
	int32_t t87 = INT32_MAX;

	t87 = (x1193<<(x1194&(x1195%x1196)));

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x1201 = 8LLU;
	int32_t x1202 = -2224;
	uint32_t x1204 = 13205U;

	t88 = (x1201<<(x1202&(x1203%x1204)));

	if (t88 != 524288LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x1205 = 1724;
	uint64_t x1206 = UINT64_MAX;
	int16_t x1207 = INT16_MIN;
	volatile uint32_t x1208 = 1U;
	volatile int32_t t89 = 15288321;

	t89 = (x1205<<(x1206&(x1207%x1208)));

	if (t89 != 1724) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint64_t x1209 = UINT64_MAX;
	uint32_t x1210 = 1734834U;
	volatile int64_t x1212 = INT64_MIN;
	uint64_t t90 = 379868547LLU;

	t90 = (x1209<<(x1210&(x1211%x1212)));

	if (t90 != 18445618173802708992LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x1228 = INT64_MIN;
	volatile int64_t t91 = -125308425451651LL;

	t91 = (x1225<<(x1226&(x1227%x1228)));

	if (t91 != 2155878716360622080LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x1233 = 1;
	static int64_t x1234 = 895006LL;
	int16_t x1235 = INT16_MAX;
	volatile int16_t x1236 = -1;
	int32_t t92 = -151314914;

	t92 = (x1233<<(x1234&(x1235%x1236)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x1242 = INT64_MIN;
	int8_t x1243 = 15;
	volatile uint32_t t93 = UINT32_MAX;

	t93 = (x1241<<(x1242&(x1243%x1244)));

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x1259 = 0;
	volatile uint64_t t94 = UINT64_MAX;

	t94 = (x1257<<(x1258&(x1259%x1260)));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x1281 = 200U;
	static uint32_t x1282 = 5080U;
	int32_t x1283 = INT32_MIN;
	volatile int64_t x1284 = -1145184479807891LL;
	volatile uint32_t t95 = 0U;

	t95 = (x1281<<(x1282&(x1283%x1284)));

	if (t95 != 200U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x1297 = 37U;
	volatile int64_t x1298 = INT64_MIN;
	int64_t x1300 = INT64_MIN;
	int32_t t96 = -2906487;

	t96 = (x1297<<(x1298&(x1299%x1300)));

	if (t96 != 37) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x1317 = 4815189;
	int8_t x1318 = INT8_MIN;
	uint64_t x1319 = UINT64_MAX;
	static volatile int8_t x1320 = INT8_MIN;
	int32_t t97 = -52;

	t97 = (x1317<<(x1318&(x1319%x1320)));

	if (t97 != 4815189) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x1333 = 13;
	uint16_t x1334 = 412U;
	int64_t x1335 = 32961166633700LL;
	uint64_t x1336 = 328LLU;
	static int32_t t98 = -28260;

	t98 = (x1333<<(x1334&(x1335%x1336)));

	if (t98 != 208) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint8_t x1373 = 60U;
	uint16_t x1375 = UINT16_MAX;
	uint8_t x1376 = 32U;
	volatile int32_t t99 = 22637;

	t99 = (x1373<<(x1374&(x1375%x1376)));

	if (t99 != 120) { NG(); } else { ; }
	
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

