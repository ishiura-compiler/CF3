#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 31;
uint8_t x9 = UINT8_MAX;
int8_t x71 = INT8_MAX;
volatile int32_t t4 = -11;
int32_t x77 = 759;
static uint64_t x165 = 4LLU;
volatile uint64_t t6 = 34808311LLU;
volatile uint32_t t8 = 495098170U;
volatile int64_t x222 = INT64_MAX;
int8_t x223 = INT8_MIN;
uint32_t x260 = 0U;
volatile int16_t x378 = INT16_MIN;
uint32_t x385 = UINT32_MAX;
int16_t x387 = -1;
uint32_t t15 = UINT32_MAX;
static uint32_t x405 = UINT32_MAX;
volatile int32_t t17 = -34;
int32_t x429 = INT32_MAX;
volatile uint32_t x437 = 613613089U;
int8_t x438 = INT8_MAX;
uint8_t x440 = 1U;
uint8_t x469 = 58U;
uint16_t x470 = UINT16_MAX;
volatile int32_t t20 = -134118480;
uint16_t x491 = 4012U;
int32_t t22 = INT32_MAX;
uint32_t x511 = 1U;
uint16_t x512 = UINT16_MAX;
uint16_t x581 = 4U;
int64_t x583 = -1LL;
volatile int16_t x590 = -1;
int8_t x591 = 49;
uint64_t x614 = 28LLU;
volatile int32_t t27 = -10624357;
int32_t x617 = INT32_MAX;
static int16_t x619 = INT16_MIN;
uint16_t x664 = 6U;
uint32_t x713 = UINT32_MAX;
int16_t x714 = INT16_MAX;
uint8_t x716 = 26U;
int32_t t31 = 923845;
volatile uint64_t x770 = 157LLU;
int32_t x772 = 0;
uint8_t x807 = UINT8_MAX;
volatile uint32_t x827 = 7650445U;
int32_t x828 = INT32_MIN;
uint64_t x885 = 1LLU;
int16_t x907 = 1706;
int64_t x925 = INT64_MAX;
volatile int32_t t40 = -447513;
volatile uint8_t x973 = 1U;
volatile int32_t t41 = -1810670;
static uint8_t x1038 = 7U;
int32_t t43 = -184634;
static uint32_t x1098 = UINT32_MAX;
uint8_t x1099 = 15U;
int32_t t44 = -365542670;
int32_t x1111 = INT32_MAX;
uint64_t x1112 = 5LLU;
uint16_t x1116 = 1U;
int32_t t46 = -157657;
uint16_t x1117 = 112U;
uint8_t x1120 = 3U;
static int32_t t48 = -83;
static uint32_t x1126 = UINT32_MAX;
int32_t x1165 = 629;
int32_t x1186 = -1;
uint16_t x1187 = 1U;
static uint64_t x1201 = 16936012582310905LLU;
int16_t x1204 = 29;
volatile uint64_t t52 = 408150340LLU;
volatile int16_t x1338 = 5;
int32_t t54 = 106;
volatile int32_t x1360 = -21545166;
volatile int16_t x1379 = -1;
volatile uint32_t x1519 = 0U;
static uint8_t x1524 = 4U;
volatile int32_t t61 = 684;
uint64_t x1535 = UINT64_MAX;
int32_t t62 = 22;
volatile uint8_t x1539 = 86U;
static uint8_t x1563 = 1U;
int16_t x1564 = INT16_MAX;
int64_t x1657 = 368163933756LL;
int32_t x1658 = INT32_MIN;
int16_t x1666 = INT16_MAX;
volatile int32_t t67 = -1;
volatile int16_t x1696 = 1;
volatile uint64_t x1729 = UINT64_MAX;
uint16_t x1730 = 18720U;
int32_t x1769 = INT32_MAX;
uint64_t x1773 = 0LLU;
int64_t x1776 = INT64_MIN;
uint64_t x1779 = 98622142LLU;
static uint8_t x1780 = 67U;
uint64_t x1870 = 14LLU;
uint8_t x2074 = 45U;
int8_t x2110 = INT8_MIN;
static uint8_t x2235 = 6U;
static int64_t x2362 = -1LL;
static int64_t x2369 = 3LL;
int16_t x2427 = -1;
int64_t x2434 = 37644331582596LL;
int32_t t99 = -1668;


void f0(void) {
	int16_t x1 = INT16_MAX;
	uint64_t x2 = UINT64_MAX;
	volatile int16_t x3 = INT16_MAX;
	volatile int32_t x4 = INT32_MIN;

	t0 = (x1>>((x2+x3)&x4));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x10 = -1LL;
	int64_t x11 = -1LL;
	int8_t x12 = 1;
	int32_t t1 = 411;

	t1 = (x9>>((x10+x11)&x12));

	if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x29 = 2U;
	static uint16_t x30 = UINT16_MAX;
	int64_t x31 = INT64_MIN;
	uint16_t x32 = 6U;
	static volatile int32_t t2 = -1;

	t2 = (x29>>((x30+x31)&x32));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x41 = 1655482U;
	uint64_t x42 = 8319938192LLU;
	volatile int32_t x43 = -1;
	volatile uint16_t x44 = 86U;
	uint32_t t3 = 21U;

	t3 = (x41>>((x42+x43)&x44));

	if (t3 != 25866U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x69 = 52;
	int8_t x70 = -12;
	int8_t x72 = INT8_MIN;

	t4 = (x69>>((x70+x71)&x72));

	if (t4 != 52) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x78 = -1;
	uint64_t x79 = 1LLU;
	static int64_t x80 = INT64_MAX;
	int32_t t5 = 378;

	t5 = (x77>>((x78+x79)&x80));

	if (t5 != 759) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x166 = INT64_MIN;
	uint8_t x167 = 2U;
	uint32_t x168 = 497U;

	t6 = (x165>>((x166+x167)&x168));

	if (t6 != 4LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x181 = 0U;
	static int64_t x182 = INT64_MIN;
	uint64_t x183 = 38993745882LLU;
	uint32_t x184 = 4U;
	volatile int32_t t7 = -1;

	t7 = (x181>>((x182+x183)&x184));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x205 = 110U;
	int32_t x206 = -1;
	int16_t x207 = INT16_MAX;
	int64_t x208 = INT64_MIN;

	t8 = (x205>>((x206+x207)&x208));

	if (t8 != 110U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x221 = 2;
	static volatile uint8_t x224 = 1U;
	volatile int32_t t9 = -1483827;

	t9 = (x221>>((x222+x223)&x224));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x241 = 20U;
	static int64_t x242 = INT64_MIN;
	uint32_t x243 = 830U;
	volatile uint8_t x244 = 1U;
	int32_t t10 = 27512982;

	t10 = (x241>>((x242+x243)&x244));

	if (t10 != 20) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x257 = 419;
	int16_t x258 = INT16_MIN;
	uint16_t x259 = 1U;
	volatile int32_t t11 = -1490437;

	t11 = (x257>>((x258+x259)&x260));

	if (t11 != 419) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x297 = 137772819217LLU;
	uint32_t x298 = UINT32_MAX;
	volatile uint32_t x299 = 27170U;
	int8_t x300 = INT8_MAX;
	static volatile uint64_t t12 = 315LLU;

	t12 = (x297>>((x298+x299)&x300));

	if (t12 != 16LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x325 = INT32_MAX;
	int8_t x326 = -46;
	int64_t x327 = INT64_MAX;
	int8_t x328 = 1;
	int32_t t13 = -1856;

	t13 = (x325>>((x326+x327)&x328));

	if (t13 != 1073741823) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x377 = INT16_MAX;
	int64_t x379 = INT64_MAX;
	static int32_t x380 = 31;
	int32_t t14 = -3;

	t14 = (x377>>((x378+x379)&x380));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x386 = 1602713LLU;
	int64_t x388 = INT64_MIN;

	t15 = (x385>>((x386+x387)&x388));

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x406 = INT32_MAX;
	int32_t x407 = -1073578368;
	uint16_t x408 = 401U;
	volatile uint32_t t16 = 68421U;

	t16 = (x405>>((x406+x407)&x408));

	if (t16 != 32767U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x413 = 51U;
	uint64_t x414 = 40LLU;
	int8_t x415 = INT8_MAX;
	uint8_t x416 = 17U;

	t17 = (x413>>((x414+x415)&x416));

	if (t17 != 25) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x430 = -1LL;
	static uint16_t x431 = 2U;
	uint32_t x432 = UINT32_MAX;
	volatile int32_t t18 = -5596177;

	t18 = (x429>>((x430+x431)&x432));

	if (t18 != 1073741823) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x439 = -2041573;
	static volatile uint32_t t19 = 357646U;

	t19 = (x437>>((x438+x439)&x440));

	if (t19 != 613613089U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x471 = UINT8_MAX;
	static int8_t x472 = 1;

	t20 = (x469>>((x470+x471)&x472));

	if (t20 != 58) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x485 = 7LLU;
	uint32_t x486 = 16531532U;
	static volatile uint64_t x487 = UINT64_MAX;
	static uint8_t x488 = 20U;
	volatile uint64_t t21 = 7LLU;

	t21 = (x485>>((x486+x487)&x488));

	if (t21 != 7LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x489 = INT32_MAX;
	int64_t x490 = -1LL;
	int16_t x492 = INT16_MIN;

	t22 = (x489>>((x490+x491)&x492));

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x505 = UINT64_MAX;
	int8_t x506 = 33;
	volatile int16_t x507 = 6667;
	int32_t x508 = INT32_MIN;
	volatile uint64_t t23 = UINT64_MAX;

	t23 = (x505>>((x506+x507)&x508));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x509 = 0;
	uint16_t x510 = 9U;
	int32_t t24 = -3174082;

	t24 = (x509>>((x510+x511)&x512));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x582 = INT64_MAX;
	uint64_t x584 = 27LLU;
	int32_t t25 = -1;

	t25 = (x581>>((x582+x583)&x584));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint8_t x589 = 6U;
	uint32_t x592 = 0U;
	int32_t t26 = 67666;

	t26 = (x589>>((x590+x591)&x592));

	if (t26 != 6) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x613 = UINT16_MAX;
	static int8_t x615 = 2;
	static volatile int32_t x616 = 116;

	t27 = (x613>>((x614+x615)&x616));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x618 = -1;
	volatile uint8_t x620 = 1U;
	int32_t t28 = 10;

	t28 = (x617>>((x618+x619)&x620));

	if (t28 != 1073741823) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x661 = UINT64_MAX;
	uint64_t x662 = 111997LLU;
	volatile uint64_t x663 = 1816447550357347582LLU;
	uint64_t t29 = 0LLU;

	t29 = (x661>>((x662+x663)&x664));

	if (t29 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x715 = 85;
	static volatile uint32_t t30 = 121565882U;

	t30 = (x713>>((x714+x715)&x716));

	if (t30 != 65535U) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x721 = UINT16_MAX;
	static int8_t x722 = INT8_MIN;
	int16_t x723 = 11506;
	volatile int32_t x724 = 16;

	t31 = (x721>>((x722+x723)&x724));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x769 = 48;
	int64_t x771 = 13LL;
	volatile int32_t t32 = 22303349;

	t32 = (x769>>((x770+x771)&x772));

	if (t32 != 48) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x805 = 2043532275379LLU;
	static uint32_t x806 = 239U;
	static int64_t x808 = INT64_MIN;
	uint64_t t33 = 279492LLU;

	t33 = (x805>>((x806+x807)&x808));

	if (t33 != 2043532275379LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x817 = UINT8_MAX;
	int32_t x818 = INT32_MIN;
	uint64_t x819 = 26739680524LLU;
	uint8_t x820 = 11U;
	static volatile int32_t t34 = -16256;

	t34 = (x817>>((x818+x819)&x820));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x825 = 8097614812953LLU;
	uint32_t x826 = UINT32_MAX;
	static uint64_t t35 = 151866LLU;

	t35 = (x825>>((x826+x827)&x828));

	if (t35 != 8097614812953LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x886 = 3531451LLU;
	volatile int8_t x887 = -1;
	uint8_t x888 = 2U;
	volatile uint64_t t36 = 0LLU;

	t36 = (x885>>((x886+x887)&x888));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x905 = 11154443075LL;
	static uint8_t x906 = 0U;
	volatile int32_t x908 = INT32_MIN;
	static volatile int64_t t37 = 818LL;

	t37 = (x905>>((x906+x907)&x908));

	if (t37 != 11154443075LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x909 = INT32_MAX;
	int32_t x910 = INT32_MIN;
	static uint16_t x911 = 95U;
	uint8_t x912 = 0U;
	int32_t t38 = INT32_MAX;

	t38 = (x909>>((x910+x911)&x912));

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint64_t x926 = 3LLU;
	static uint64_t x927 = UINT64_MAX;
	int16_t x928 = -7109;
	int64_t t39 = 164202198734LL;

	t39 = (x925>>((x926+x927)&x928));

	if (t39 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x945 = 3745;
	volatile int64_t x946 = -1LL;
	volatile int8_t x947 = INT8_MAX;
	volatile int64_t x948 = INT64_MIN;

	t40 = (x945>>((x946+x947)&x948));

	if (t40 != 3745) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x974 = 123LLU;
	uint32_t x975 = UINT32_MAX;
	int16_t x976 = 0;

	t41 = (x973>>((x974+x975)&x976));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x1037 = UINT16_MAX;
	uint16_t x1039 = 3U;
	static int64_t x1040 = INT64_MIN;
	int32_t t42 = 100;

	t42 = (x1037>>((x1038+x1039)&x1040));

	if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint16_t x1085 = UINT16_MAX;
	int32_t x1086 = 0;
	static int8_t x1087 = INT8_MAX;
	volatile int32_t x1088 = INT32_MIN;

	t43 = (x1085>>((x1086+x1087)&x1088));

	if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x1097 = UINT8_MAX;
	static volatile int8_t x1100 = -7;

	t44 = (x1097>>((x1098+x1099)&x1100));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x1109 = 9;
	int64_t x1110 = -5318LL;
	volatile int32_t t45 = -152151;

	t45 = (x1109>>((x1110+x1111)&x1112));

	if (t45 != 4) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x1113 = 37U;
	volatile int32_t x1114 = -1;
	static int32_t x1115 = 570312;

	t46 = (x1113>>((x1114+x1115)&x1116));

	if (t46 != 18) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1118 = -5378787736LL;
	uint8_t x1119 = UINT8_MAX;
	static volatile int32_t t47 = 486315318;

	t47 = (x1117>>((x1118+x1119)&x1120));

	if (t47 != 14) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x1121 = 1;
	uint16_t x1122 = 12U;
	int32_t x1123 = INT32_MIN;
	int8_t x1124 = INT8_MAX;

	t48 = (x1121>>((x1122+x1123)&x1124));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x1125 = UINT16_MAX;
	uint8_t x1127 = 49U;
	uint8_t x1128 = 30U;
	volatile int32_t t49 = -3951;

	t49 = (x1125>>((x1126+x1127)&x1128));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x1166 = 1308783499U;
	volatile int32_t x1167 = INT32_MIN;
	static int8_t x1168 = 24;
	volatile int32_t t50 = -45678934;

	t50 = (x1165>>((x1166+x1167)&x1168));

	if (t50 != 2) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x1185 = 2U;
	static int64_t x1188 = INT64_MIN;
	volatile int32_t t51 = -4193850;

	t51 = (x1185>>((x1186+x1187)&x1188));

	if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1202 = INT32_MIN;
	static volatile int64_t x1203 = -109139857861LL;

	t52 = (x1201>>((x1202+x1203)&x1204));

	if (t52 != 504732506LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x1261 = 1373997;
	int8_t x1262 = -1;
	int16_t x1263 = -1;
	static uint8_t x1264 = 24U;
	static int32_t t53 = 7046;

	t53 = (x1261>>((x1262+x1263)&x1264));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x1337 = INT8_MAX;
	uint16_t x1339 = UINT16_MAX;
	static int16_t x1340 = 804;

	t54 = (x1337>>((x1338+x1339)&x1340));

	if (t54 != 7) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x1349 = 3257U;
	int16_t x1350 = 435;
	static int16_t x1351 = -409;
	int16_t x1352 = INT16_MIN;
	volatile uint32_t t55 = 12U;

	t55 = (x1349>>((x1350+x1351)&x1352));

	if (t55 != 3257U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x1357 = UINT64_MAX;
	volatile uint32_t x1358 = 193U;
	uint8_t x1359 = 29U;
	static uint64_t t56 = 9793LLU;

	t56 = (x1357>>((x1358+x1359)&x1360));

	if (t56 != 70368744177663LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x1377 = INT64_MAX;
	static uint32_t x1378 = 2U;
	uint64_t x1380 = 15LLU;
	static volatile int64_t t57 = 148769867139LL;

	t57 = (x1377>>((x1378+x1379)&x1380));

	if (t57 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x1413 = 36U;
	int16_t x1414 = 10;
	static volatile int8_t x1415 = -1;
	volatile int8_t x1416 = INT8_MAX;
	volatile int32_t t58 = 3;

	t58 = (x1413>>((x1414+x1415)&x1416));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x1465 = 8U;
	uint8_t x1466 = UINT8_MAX;
	uint32_t x1467 = UINT32_MAX;
	int16_t x1468 = INT16_MIN;
	volatile int32_t t59 = 496663337;

	t59 = (x1465>>((x1466+x1467)&x1468));

	if (t59 != 8) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x1517 = 0;
	uint16_t x1518 = 11U;
	int16_t x1520 = INT16_MAX;
	int32_t t60 = -24121;

	t60 = (x1517>>((x1518+x1519)&x1520));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x1521 = 719;
	volatile int8_t x1522 = INT8_MIN;
	volatile uint64_t x1523 = 26031304LLU;

	t61 = (x1521>>((x1522+x1523)&x1524));

	if (t61 != 719) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x1533 = 3259;
	int32_t x1534 = -758;
	int32_t x1536 = 171;

	t62 = (x1533>>((x1534+x1535)&x1536));

	if (t62 != 6) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x1537 = 3147682526684087155LLU;
	int8_t x1538 = -1;
	int16_t x1540 = 10;
	uint64_t t63 = 18368LLU;

	t63 = (x1537>>((x1538+x1539)&x1540));

	if (t63 != 3147682526684087155LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x1541 = INT16_MAX;
	volatile int8_t x1542 = -1;
	static volatile uint64_t x1543 = 609400349290LLU;
	static uint64_t x1544 = 0LLU;
	static int32_t t64 = -13567471;

	t64 = (x1541>>((x1542+x1543)&x1544));

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x1561 = INT64_MAX;
	uint16_t x1562 = UINT16_MAX;
	static volatile int64_t t65 = INT64_MAX;

	t65 = (x1561>>((x1562+x1563)&x1564));

	if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x1659 = 60U;
	static uint32_t x1660 = 250057614U;
	volatile int64_t t66 = -14LL;

	t66 = (x1657>>((x1658+x1659)&x1660));

	if (t66 != 89883772LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x1665 = 7331;
	uint32_t x1667 = UINT32_MAX;
	uint8_t x1668 = 18U;

	t67 = (x1665>>((x1666+x1667)&x1668));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x1693 = UINT8_MAX;
	volatile int64_t x1694 = -1450525706861656LL;
	volatile int8_t x1695 = INT8_MAX;
	volatile int32_t t68 = 711205;

	t68 = (x1693>>((x1694+x1695)&x1696));

	if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x1731 = UINT64_MAX;
	int8_t x1732 = INT8_MAX;
	volatile uint64_t t69 = 868LLU;

	t69 = (x1729>>((x1730+x1731)&x1732));

	if (t69 != 8589934591LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x1765 = INT64_MAX;
	static int8_t x1766 = 0;
	uint8_t x1767 = 103U;
	int32_t x1768 = INT32_MIN;
	int64_t t70 = INT64_MAX;

	t70 = (x1765>>((x1766+x1767)&x1768));

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x1770 = 0;
	uint16_t x1771 = UINT16_MAX;
	int64_t x1772 = INT64_MIN;
	static volatile int32_t t71 = INT32_MAX;

	t71 = (x1769>>((x1770+x1771)&x1772));

	if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x1774 = 94U;
	int32_t x1775 = 652693359;
	uint64_t t72 = 1LLU;

	t72 = (x1773>>((x1774+x1775)&x1776));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x1777 = INT64_MAX;
	static int8_t x1778 = INT8_MAX;
	volatile int64_t t73 = -200795337885LL;

	t73 = (x1777>>((x1778+x1779)&x1780));

	if (t73 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x1849 = UINT16_MAX;
	int16_t x1850 = INT16_MAX;
	int8_t x1851 = 0;
	volatile int32_t x1852 = INT32_MIN;
	volatile int32_t t74 = 98360;

	t74 = (x1849>>((x1850+x1851)&x1852));

	if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x1869 = INT64_MAX;
	static int64_t x1871 = -6859016320616972LL;
	static int8_t x1872 = INT8_MAX;
	int64_t t75 = 32781900395309531LL;

	t75 = (x1869>>((x1870+x1871)&x1872));

	if (t75 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x1937 = UINT64_MAX;
	int32_t x1938 = INT32_MIN;
	static int64_t x1939 = INT64_MAX;
	static int64_t x1940 = INT64_MIN;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = (x1937>>((x1938+x1939)&x1940));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x1945 = 258159398;
	volatile int16_t x1946 = -1;
	uint8_t x1947 = 2U;
	int64_t x1948 = 13238239LL;
	volatile int32_t t77 = -31;

	t77 = (x1945>>((x1946+x1947)&x1948));

	if (t77 != 129079699) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x1961 = 3983U;
	int8_t x1962 = INT8_MIN;
	uint8_t x1963 = UINT8_MAX;
	int16_t x1964 = -251;
	volatile uint32_t t78 = 115495U;

	t78 = (x1961>>((x1962+x1963)&x1964));

	if (t78 != 124U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x1997 = 22;
	uint8_t x1998 = 68U;
	uint64_t x1999 = 273153LLU;
	uint8_t x2000 = 11U;
	volatile int32_t t79 = 182;

	t79 = (x1997>>((x1998+x1999)&x2000));

	if (t79 != 11) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x2029 = 3062U;
	static uint64_t x2030 = UINT64_MAX;
	int8_t x2031 = INT8_MIN;
	static uint16_t x2032 = 0U;
	volatile int32_t t80 = 129410540;

	t80 = (x2029>>((x2030+x2031)&x2032));

	if (t80 != 3062) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x2073 = 3505258925708518LLU;
	uint16_t x2075 = UINT16_MAX;
	static int8_t x2076 = 31;
	uint64_t t81 = 3822LLU;

	t81 = (x2073>>((x2074+x2075)&x2076));

	if (t81 != 855776104909LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x2097 = UINT64_MAX;
	int64_t x2098 = 989870229539318LL;
	int8_t x2099 = INT8_MIN;
	int8_t x2100 = 2;
	uint64_t t82 = 128284442990892LLU;

	t82 = (x2097>>((x2098+x2099)&x2100));

	if (t82 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x2109 = INT32_MAX;
	uint8_t x2111 = UINT8_MAX;
	int8_t x2112 = INT8_MIN;
	int32_t t83 = INT32_MAX;

	t83 = (x2109>>((x2110+x2111)&x2112));

	if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x2173 = 96;
	int32_t x2174 = -187281;
	uint8_t x2175 = 1U;
	uint8_t x2176 = 0U;
	volatile int32_t t84 = -369767;

	t84 = (x2173>>((x2174+x2175)&x2176));

	if (t84 != 96) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x2177 = 740;
	uint64_t x2178 = 93219LLU;
	static volatile int8_t x2179 = 15;
	uint8_t x2180 = 0U;
	volatile int32_t t85 = 3;

	t85 = (x2177>>((x2178+x2179)&x2180));

	if (t85 != 740) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x2221 = UINT32_MAX;
	static int16_t x2222 = INT16_MAX;
	static uint16_t x2223 = 10U;
	static uint32_t x2224 = 466046420U;
	static uint32_t t86 = UINT32_MAX;

	t86 = (x2221>>((x2222+x2223)&x2224));

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x2233 = 128462802U;
	int64_t x2234 = 33152271728LL;
	int32_t x2236 = 0;
	static uint32_t t87 = 172848U;

	t87 = (x2233>>((x2234+x2235)&x2236));

	if (t87 != 128462802U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x2261 = 48;
	int16_t x2262 = 10377;
	int64_t x2263 = -10884342LL;
	uint8_t x2264 = 17U;
	static int32_t t88 = 545;

	t88 = (x2261>>((x2262+x2263)&x2264));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x2289 = 2U;
	uint64_t x2290 = 360834319LLU;
	int16_t x2291 = INT16_MIN;
	int64_t x2292 = 10LL;
	int32_t t89 = 474714;

	t89 = (x2289>>((x2290+x2291)&x2292));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x2301 = 258752LLU;
	uint8_t x2302 = 10U;
	int8_t x2303 = INT8_MIN;
	static uint8_t x2304 = 0U;
	static uint64_t t90 = 1105222122619993LLU;

	t90 = (x2301>>((x2302+x2303)&x2304));

	if (t90 != 258752LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x2317 = 7U;
	uint64_t x2318 = 193LLU;
	volatile int16_t x2319 = -5950;
	int16_t x2320 = 2;
	int32_t t91 = -977469;

	t91 = (x2317>>((x2318+x2319)&x2320));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x2329 = UINT64_MAX;
	int16_t x2330 = INT16_MIN;
	uint32_t x2331 = UINT32_MAX;
	int64_t x2332 = INT64_MIN;
	uint64_t t92 = UINT64_MAX;

	t92 = (x2329>>((x2330+x2331)&x2332));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x2361 = 3U;
	uint8_t x2363 = 93U;
	int64_t x2364 = INT64_MIN;
	volatile int32_t t93 = -5468443;

	t93 = (x2361>>((x2362+x2363)&x2364));

	if (t93 != 3) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x2370 = -307;
	static uint64_t x2371 = 339912LLU;
	uint16_t x2372 = 39U;
	int64_t t94 = -9610LL;

	t94 = (x2369>>((x2370+x2371)&x2372));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x2377 = 0;
	int8_t x2378 = -1;
	int16_t x2379 = INT16_MAX;
	int64_t x2380 = INT64_MIN;
	int32_t t95 = -14308;

	t95 = (x2377>>((x2378+x2379)&x2380));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x2401 = 5188943;
	int64_t x2402 = 3795940978215880564LL;
	uint8_t x2403 = 13U;
	volatile uint8_t x2404 = 5U;
	volatile int32_t t96 = -2045;

	t96 = (x2401>>((x2402+x2403)&x2404));

	if (t96 != 2594471) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x2425 = 2;
	uint16_t x2426 = 61U;
	uint64_t x2428 = 66588369LLU;
	volatile int32_t t97 = -11557;

	t97 = (x2425>>((x2426+x2427)&x2428));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x2433 = 20496680;
	static volatile int64_t x2435 = -88312791667536892LL;
	volatile int8_t x2436 = INT8_MAX;
	volatile int32_t t98 = 212;

	t98 = (x2433>>((x2434+x2435)&x2436));

	if (t98 != 80065) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x2473 = 14;
	int8_t x2474 = INT8_MAX;
	uint8_t x2475 = UINT8_MAX;
	static int16_t x2476 = INT16_MIN;

	t99 = (x2473>>((x2474+x2475)&x2476));

	if (t99 != 14) { NG(); } else { ; }
	
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

