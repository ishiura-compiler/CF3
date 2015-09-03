#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint16_t x29 = UINT16_MAX;
uint32_t x31 = 175725032U;
int64_t x89 = INT64_MAX;
static uint16_t x90 = UINT16_MAX;
static int8_t x104 = 14;
int16_t x125 = INT16_MIN;
static int64_t x145 = -1LL;
uint16_t x176 = 16U;
uint8_t x196 = 0U;
static int32_t x211 = INT32_MIN;
volatile int64_t t9 = INT64_MIN;
uint64_t x287 = UINT64_MAX;
uint8_t x292 = 1U;
int8_t x313 = INT8_MIN;
int8_t x314 = 3;
int32_t x395 = -109272;
volatile int16_t x424 = 30;
static int32_t x428 = 1;
int8_t x433 = 1;
uint16_t x435 = UINT16_MAX;
uint64_t t20 = UINT64_MAX;
uint64_t x489 = UINT64_MAX;
uint64_t t22 = UINT64_MAX;
static int64_t x510 = INT64_MAX;
static int8_t x511 = INT8_MIN;
static int16_t x725 = -1;
uint32_t x735 = 727918906U;
int64_t x787 = INT64_MIN;
int32_t x789 = INT32_MIN;
int16_t x791 = INT16_MAX;
int8_t x950 = 7;
int32_t x963 = INT32_MIN;
volatile int32_t t35 = 112811915;
static uint16_t x983 = 16709U;
int8_t x1051 = INT8_MIN;
uint8_t x1053 = UINT8_MAX;
int32_t t40 = 6354742;
static int8_t x1074 = -1;
volatile int8_t x1225 = INT8_MAX;
int32_t t44 = 804151445;
volatile int8_t x1384 = 9;
int8_t x1435 = -50;
static int16_t x1467 = INT16_MAX;
int32_t x1470 = -1;
int32_t x1471 = INT32_MIN;
uint64_t t53 = 16029230745LLU;
int32_t t56 = -150531;
static int32_t x1689 = 11083389;
int16_t x1745 = 0;
uint32_t x1748 = 9U;
static uint16_t x1881 = UINT16_MAX;
uint8_t x1953 = 2U;
uint32_t x1955 = UINT32_MAX;
uint32_t x1956 = 26U;
int64_t t64 = -5719763807808LL;
int8_t x2030 = -1;
static int16_t x2031 = -1;
static uint16_t x2050 = 8U;
volatile int16_t x2051 = -1;
int32_t x2113 = -1;
volatile int32_t t67 = 330;
int32_t x2124 = 0;
int8_t x2141 = INT8_MIN;
uint16_t x2143 = UINT16_MAX;
static volatile int32_t t72 = 2;
int16_t x2229 = INT16_MAX;
volatile int32_t t73 = -697996632;
static uint64_t t75 = 17LLU;
static int32_t x2449 = -619998;
int64_t x2450 = INT64_MAX;
volatile int32_t t76 = -2392590;
int16_t x2457 = INT16_MAX;
volatile uint16_t x2460 = 0U;
int32_t x2522 = 6599974;
volatile int16_t x2647 = INT16_MIN;
volatile uint64_t t81 = UINT64_MAX;
static volatile uint16_t x2677 = 1450U;
volatile int32_t x2678 = INT32_MIN;
volatile int8_t x2680 = 1;
static uint16_t x2714 = 2696U;
static int16_t x2772 = 3;
uint8_t x2777 = 29U;
volatile uint64_t x2778 = UINT64_MAX;
int64_t x2877 = 1603739LL;
int32_t x2889 = INT32_MAX;
int32_t x2890 = -3708995;
static volatile uint32_t x3010 = 38U;
int64_t x3033 = INT64_MIN;
volatile int16_t x3036 = 0;
uint64_t x3066 = UINT64_MAX;
int8_t x3117 = INT8_MIN;
int16_t x3180 = 0;


void f0(void) {
	volatile int8_t x30 = INT8_MIN;
	volatile uint8_t x32 = 0U;
	int32_t t0 = 564403480;

	t0 = (x29+((x30==x31)>>x32));

	if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x91 = INT16_MIN;
	int8_t x92 = 0;
	volatile int64_t t1 = INT64_MAX;

	t1 = (x89+((x90==x91)>>x92));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x101 = INT64_MAX;
	int64_t x102 = INT64_MIN;
	static volatile uint16_t x103 = UINT16_MAX;
	static int64_t t2 = INT64_MAX;

	t2 = (x101+((x102==x103)>>x104));

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x126 = INT64_MIN;
	static int64_t x127 = INT64_MIN;
	volatile int64_t x128 = 16LL;
	int32_t t3 = 108509;

	t3 = (x125+((x126==x127)>>x128));

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x146 = -1;
	int64_t x147 = -1LL;
	int16_t x148 = 24;
	volatile int64_t t4 = 380698LL;

	t4 = (x145+((x146==x147)>>x148));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x153 = 895U;
	static volatile int8_t x154 = 0;
	volatile uint64_t x155 = 36766LLU;
	uint8_t x156 = 7U;
	int32_t t5 = -80544279;

	t5 = (x153+((x154==x155)>>x156));

	if (t5 != 895) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x157 = -1;
	static uint8_t x158 = UINT8_MAX;
	volatile int8_t x159 = INT8_MAX;
	uint64_t x160 = 0LLU;
	volatile int32_t t6 = 156;

	t6 = (x157+((x158==x159)>>x160));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x173 = 125241111U;
	uint64_t x174 = 399654470786391160LLU;
	static int32_t x175 = -252123270;
	uint32_t t7 = 54U;

	t7 = (x173+((x174==x175)>>x176));

	if (t7 != 125241111U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x193 = -1;
	static int8_t x194 = -1;
	int32_t x195 = INT32_MIN;
	int32_t t8 = -511714;

	t8 = (x193+((x194==x195)>>x196));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x209 = INT64_MIN;
	volatile uint8_t x210 = 17U;
	int32_t x212 = 1;

	t9 = (x209+((x210==x211)>>x212));

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x229 = 353479817386LLU;
	int32_t x230 = INT32_MIN;
	volatile uint8_t x231 = UINT8_MAX;
	uint16_t x232 = 3U;
	uint64_t t10 = 1402575365169LLU;

	t10 = (x229+((x230==x231)>>x232));

	if (t10 != 353479817386LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x233 = -1;
	uint16_t x234 = 30079U;
	int16_t x235 = INT16_MIN;
	volatile uint16_t x236 = 0U;
	volatile int32_t t11 = -746;

	t11 = (x233+((x234==x235)>>x236));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x285 = 643581181U;
	int64_t x286 = -1LL;
	static uint16_t x288 = 20U;
	static uint32_t t12 = 401U;

	t12 = (x285+((x286==x287)>>x288));

	if (t12 != 643581181U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x289 = UINT8_MAX;
	int8_t x290 = -14;
	int32_t x291 = INT32_MAX;
	volatile int32_t t13 = -13;

	t13 = (x289+((x290==x291)>>x292));

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x293 = 2357U;
	static int16_t x294 = 10428;
	uint16_t x295 = UINT16_MAX;
	uint8_t x296 = 11U;
	volatile uint32_t t14 = 22494U;

	t14 = (x293+((x294==x295)>>x296));

	if (t14 != 2357U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x315 = INT64_MIN;
	volatile int8_t x316 = 15;
	volatile int32_t t15 = 0;

	t15 = (x313+((x314==x315)>>x316));

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x393 = 180U;
	uint8_t x394 = 1U;
	static int16_t x396 = 10;
	static int32_t t16 = -1259412;

	t16 = (x393+((x394==x395)>>x396));

	if (t16 != 180) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x421 = INT16_MIN;
	int8_t x422 = -1;
	int64_t x423 = -1LL;
	int32_t t17 = -1;

	t17 = (x421+((x422==x423)>>x424));

	if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint16_t x425 = 81U;
	uint32_t x426 = 3246U;
	int16_t x427 = -1;
	volatile int32_t t18 = -2280;

	t18 = (x425+((x426==x427)>>x428));

	if (t18 != 81) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x434 = INT8_MIN;
	int8_t x436 = 27;
	volatile int32_t t19 = 1914357;

	t19 = (x433+((x434==x435)>>x436));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x473 = UINT64_MAX;
	volatile int16_t x474 = INT16_MIN;
	static int32_t x475 = INT32_MIN;
	uint64_t x476 = 0LLU;

	t20 = (x473+((x474==x475)>>x476));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x477 = INT8_MIN;
	volatile int16_t x478 = INT16_MIN;
	int64_t x479 = 2331318896612821809LL;
	uint8_t x480 = 5U;
	static int32_t t21 = -86;

	t21 = (x477+((x478==x479)>>x480));

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x490 = INT64_MAX;
	int32_t x491 = INT32_MIN;
	static volatile int32_t x492 = 15;

	t22 = (x489+((x490==x491)>>x492));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x509 = INT8_MAX;
	volatile uint8_t x512 = 16U;
	volatile int32_t t23 = 28394;

	t23 = (x509+((x510==x511)>>x512));

	if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x553 = -1;
	static int16_t x554 = INT16_MIN;
	static int16_t x555 = -1;
	static int8_t x556 = 1;
	volatile int32_t t24 = -100624680;

	t24 = (x553+((x554==x555)>>x556));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x617 = 207830220097LL;
	uint32_t x618 = 9044347U;
	volatile int32_t x619 = 6698094;
	int16_t x620 = 0;
	volatile int64_t t25 = -319931LL;

	t25 = (x617+((x618==x619)>>x620));

	if (t25 != 207830220097LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x633 = -4830974LL;
	static int64_t x634 = INT64_MIN;
	static int32_t x635 = INT32_MAX;
	int8_t x636 = 1;
	volatile int64_t t26 = -418844141878099LL;

	t26 = (x633+((x634==x635)>>x636));

	if (t26 != -4830974LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x645 = -1311;
	uint8_t x646 = UINT8_MAX;
	int64_t x647 = -1LL;
	int8_t x648 = 1;
	volatile int32_t t27 = -45550;

	t27 = (x645+((x646==x647)>>x648));

	if (t27 != -1311) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x673 = INT8_MIN;
	int16_t x674 = INT16_MAX;
	int64_t x675 = INT64_MIN;
	uint8_t x676 = 2U;
	int32_t t28 = -1;

	t28 = (x673+((x674==x675)>>x676));

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x726 = INT32_MIN;
	volatile int64_t x727 = INT64_MIN;
	volatile int8_t x728 = 0;
	volatile int32_t t29 = 27721245;

	t29 = (x725+((x726==x727)>>x728));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x733 = UINT16_MAX;
	volatile int32_t x734 = INT32_MIN;
	uint16_t x736 = 1U;
	int32_t t30 = 1415;

	t30 = (x733+((x734==x735)>>x736));

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x785 = INT32_MAX;
	int16_t x786 = -5290;
	int8_t x788 = 2;
	int32_t t31 = INT32_MAX;

	t31 = (x785+((x786==x787)>>x788));

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x790 = INT8_MIN;
	static uint16_t x792 = 7U;
	volatile int32_t t32 = INT32_MIN;

	t32 = (x789+((x790==x791)>>x792));

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x881 = UINT32_MAX;
	volatile uint8_t x882 = UINT8_MAX;
	volatile int32_t x883 = -1;
	uint8_t x884 = 6U;
	volatile uint32_t t33 = UINT32_MAX;

	t33 = (x881+((x882==x883)>>x884));

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x949 = INT32_MIN;
	int8_t x951 = INT8_MIN;
	uint16_t x952 = 1U;
	static volatile int32_t t34 = INT32_MIN;

	t34 = (x949+((x950==x951)>>x952));

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x961 = INT16_MIN;
	int32_t x962 = 4781;
	uint8_t x964 = 4U;

	t35 = (x961+((x962==x963)>>x964));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x973 = -1;
	int16_t x974 = INT16_MIN;
	uint8_t x975 = 5U;
	volatile uint16_t x976 = 30U;
	static int32_t t36 = -43765291;

	t36 = (x973+((x974==x975)>>x976));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x981 = 230952324419308864LLU;
	static uint8_t x982 = 61U;
	int8_t x984 = 15;
	volatile uint64_t t37 = 1LLU;

	t37 = (x981+((x982==x983)>>x984));

	if (t37 != 230952324419308864LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1005 = -1;
	volatile int64_t x1006 = 522457197LL;
	static int8_t x1007 = INT8_MIN;
	int8_t x1008 = 13;
	int32_t t38 = 16100;

	t38 = (x1005+((x1006==x1007)>>x1008));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1049 = -884113468;
	uint32_t x1050 = 2U;
	int64_t x1052 = 5LL;
	volatile int32_t t39 = -1;

	t39 = (x1049+((x1050==x1051)>>x1052));

	if (t39 != -884113468) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1054 = -888;
	volatile int32_t x1055 = INT32_MAX;
	static int64_t x1056 = 12LL;

	t40 = (x1053+((x1054==x1055)>>x1056));

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x1073 = -519;
	uint16_t x1075 = UINT16_MAX;
	int32_t x1076 = 0;
	static volatile int32_t t41 = -50;

	t41 = (x1073+((x1074==x1075)>>x1076));

	if (t41 != -519) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1129 = -1;
	int8_t x1130 = INT8_MIN;
	int32_t x1131 = -373659;
	volatile uint8_t x1132 = 0U;
	volatile int32_t t42 = -3773479;

	t42 = (x1129+((x1130==x1131)>>x1132));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1165 = -1;
	int64_t x1166 = INT64_MAX;
	int16_t x1167 = INT16_MIN;
	volatile uint16_t x1168 = 1U;
	volatile int32_t t43 = -5224;

	t43 = (x1165+((x1166==x1167)>>x1168));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x1226 = 85U;
	static volatile uint16_t x1227 = 3919U;
	uint8_t x1228 = 1U;

	t44 = (x1225+((x1226==x1227)>>x1228));

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1281 = -1;
	static volatile uint32_t x1282 = 16288725U;
	int32_t x1283 = -5;
	uint16_t x1284 = 13U;
	volatile int32_t t45 = 37478348;

	t45 = (x1281+((x1282==x1283)>>x1284));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1321 = INT64_MAX;
	static int16_t x1322 = INT16_MAX;
	int8_t x1323 = 0;
	uint64_t x1324 = 0LLU;
	static int64_t t46 = INT64_MAX;

	t46 = (x1321+((x1322==x1323)>>x1324));

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x1345 = 13U;
	uint32_t x1346 = UINT32_MAX;
	static int8_t x1347 = 0;
	uint32_t x1348 = 3U;
	static volatile int32_t t47 = -671137;

	t47 = (x1345+((x1346==x1347)>>x1348));

	if (t47 != 13) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1381 = INT64_MAX;
	int8_t x1382 = -1;
	static int8_t x1383 = 0;
	volatile int64_t t48 = INT64_MAX;

	t48 = (x1381+((x1382==x1383)>>x1384));

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x1433 = -554963;
	int64_t x1434 = INT64_MIN;
	uint8_t x1436 = 1U;
	int32_t t49 = 182152678;

	t49 = (x1433+((x1434==x1435)>>x1436));

	if (t49 != -554963) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x1465 = -1;
	static volatile uint32_t x1466 = UINT32_MAX;
	static uint32_t x1468 = 1U;
	static volatile int32_t t50 = -200183;

	t50 = (x1465+((x1466==x1467)>>x1468));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x1469 = 4665;
	int8_t x1472 = 1;
	volatile int32_t t51 = -215428192;

	t51 = (x1469+((x1470==x1471)>>x1472));

	if (t51 != 4665) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x1489 = UINT32_MAX;
	volatile int32_t x1490 = 14;
	volatile uint32_t x1491 = UINT32_MAX;
	static uint16_t x1492 = 24U;
	volatile uint32_t t52 = UINT32_MAX;

	t52 = (x1489+((x1490==x1491)>>x1492));

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x1493 = 23166247777LLU;
	int8_t x1494 = INT8_MIN;
	uint64_t x1495 = UINT64_MAX;
	int8_t x1496 = 15;

	t53 = (x1493+((x1494==x1495)>>x1496));

	if (t53 != 23166247777LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x1529 = -2200;
	static volatile uint64_t x1530 = UINT64_MAX;
	int16_t x1531 = -1;
	int16_t x1532 = 0;
	int32_t t54 = -134921803;

	t54 = (x1529+((x1530==x1531)>>x1532));

	if (t54 != -2199) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x1657 = 1757674080646121LLU;
	uint64_t x1658 = 5772938855014LLU;
	int8_t x1659 = -1;
	volatile int8_t x1660 = 1;
	uint64_t t55 = 106215736713281LLU;

	t55 = (x1657+((x1658==x1659)>>x1660));

	if (t55 != 1757674080646121LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x1669 = INT8_MIN;
	uint8_t x1670 = 14U;
	volatile int32_t x1671 = INT32_MIN;
	int8_t x1672 = 6;

	t56 = (x1669+((x1670==x1671)>>x1672));

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x1690 = 2LLU;
	static uint8_t x1691 = UINT8_MAX;
	int64_t x1692 = 1LL;
	int32_t t57 = 61619928;

	t57 = (x1689+((x1690==x1691)>>x1692));

	if (t57 != 11083389) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x1713 = UINT64_MAX;
	int32_t x1714 = 0;
	static uint16_t x1715 = 6U;
	volatile int16_t x1716 = 1;
	volatile uint64_t t58 = UINT64_MAX;

	t58 = (x1713+((x1714==x1715)>>x1716));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x1746 = 68885807389203LLU;
	uint32_t x1747 = UINT32_MAX;
	int32_t t59 = -7687;

	t59 = (x1745+((x1746==x1747)>>x1748));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x1773 = 8159234622LLU;
	volatile int32_t x1774 = -1;
	int64_t x1775 = 217067909770960LL;
	uint8_t x1776 = 1U;
	static volatile uint64_t t60 = 18386994798555LLU;

	t60 = (x1773+((x1774==x1775)>>x1776));

	if (t60 != 8159234622LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x1882 = -1;
	uint16_t x1883 = UINT16_MAX;
	int8_t x1884 = 1;
	int32_t t61 = -18;

	t61 = (x1881+((x1882==x1883)>>x1884));

	if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x1909 = 12867U;
	int8_t x1910 = INT8_MAX;
	int8_t x1911 = -1;
	uint32_t x1912 = 5U;
	static int32_t t62 = 69817;

	t62 = (x1909+((x1910==x1911)>>x1912));

	if (t62 != 12867) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x1954 = INT8_MAX;
	int32_t t63 = 216;

	t63 = (x1953+((x1954==x1955)>>x1956));

	if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x2013 = 548441674LL;
	int8_t x2014 = -7;
	static volatile uint8_t x2015 = 49U;
	uint16_t x2016 = 3U;

	t64 = (x2013+((x2014==x2015)>>x2016));

	if (t64 != 548441674LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x2029 = UINT8_MAX;
	int8_t x2032 = 1;
	volatile int32_t t65 = -74;

	t65 = (x2029+((x2030==x2031)>>x2032));

	if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x2049 = 852534U;
	volatile uint8_t x2052 = 4U;
	uint32_t t66 = 3U;

	t66 = (x2049+((x2050==x2051)>>x2052));

	if (t66 != 852534U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x2114 = 6955777U;
	volatile int64_t x2115 = INT64_MAX;
	uint8_t x2116 = 7U;

	t67 = (x2113+((x2114==x2115)>>x2116));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x2121 = INT64_MAX;
	int8_t x2122 = INT8_MIN;
	volatile int64_t x2123 = 7161948854760359LL;
	int64_t t68 = INT64_MAX;

	t68 = (x2121+((x2122==x2123)>>x2124));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2142 = -1;
	int8_t x2144 = 3;
	static int32_t t69 = -84;

	t69 = (x2141+((x2142==x2143)>>x2144));

	if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x2161 = 1684510U;
	int64_t x2162 = 7237468483LL;
	volatile int64_t x2163 = 26691705828395LL;
	uint8_t x2164 = 0U;
	volatile uint32_t t70 = 1926681103U;

	t70 = (x2161+((x2162==x2163)>>x2164));

	if (t70 != 1684510U) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x2185 = 18124465U;
	static uint8_t x2186 = 3U;
	int16_t x2187 = -4567;
	uint8_t x2188 = 6U;
	static volatile uint32_t t71 = 487U;

	t71 = (x2185+((x2186==x2187)>>x2188));

	if (t71 != 18124465U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x2217 = INT16_MIN;
	uint8_t x2218 = 2U;
	uint64_t x2219 = 35713932521079LLU;
	static int16_t x2220 = 9;

	t72 = (x2217+((x2218==x2219)>>x2220));

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x2230 = 1807LL;
	int8_t x2231 = -1;
	uint8_t x2232 = 0U;

	t73 = (x2229+((x2230==x2231)>>x2232));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x2257 = 123034LLU;
	uint8_t x2258 = UINT8_MAX;
	volatile int32_t x2259 = INT32_MIN;
	int8_t x2260 = 1;
	uint64_t t74 = 40122637161026LLU;

	t74 = (x2257+((x2258==x2259)>>x2260));

	if (t74 != 123034LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x2385 = 61614835LLU;
	volatile int16_t x2386 = INT16_MIN;
	volatile uint16_t x2387 = UINT16_MAX;
	uint8_t x2388 = 1U;

	t75 = (x2385+((x2386==x2387)>>x2388));

	if (t75 != 61614835LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x2451 = INT8_MAX;
	uint16_t x2452 = 11U;

	t76 = (x2449+((x2450==x2451)>>x2452));

	if (t76 != -619998) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x2458 = INT64_MAX;
	uint64_t x2459 = 37LLU;
	volatile int32_t t77 = -14299;

	t77 = (x2457+((x2458==x2459)>>x2460));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2469 = 5;
	int32_t x2470 = INT32_MIN;
	int16_t x2471 = INT16_MAX;
	static uint8_t x2472 = 7U;
	volatile int32_t t78 = -243;

	t78 = (x2469+((x2470==x2471)>>x2472));

	if (t78 != 5) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x2521 = INT64_MIN;
	int16_t x2523 = INT16_MIN;
	static int64_t x2524 = 0LL;
	volatile int64_t t79 = INT64_MIN;

	t79 = (x2521+((x2522==x2523)>>x2524));

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x2549 = -1LL;
	volatile int32_t x2550 = INT32_MAX;
	volatile int16_t x2551 = 76;
	static uint8_t x2552 = 12U;
	int64_t t80 = -845LL;

	t80 = (x2549+((x2550==x2551)>>x2552));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x2645 = UINT64_MAX;
	int32_t x2646 = INT32_MIN;
	int64_t x2648 = 3LL;

	t81 = (x2645+((x2646==x2647)>>x2648));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x2679 = 12U;
	volatile int32_t t82 = -435321;

	t82 = (x2677+((x2678==x2679)>>x2680));

	if (t82 != 1450) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x2697 = 409U;
	uint64_t x2698 = UINT64_MAX;
	int32_t x2699 = INT32_MIN;
	uint16_t x2700 = 7U;
	volatile int32_t t83 = 154829;

	t83 = (x2697+((x2698==x2699)>>x2700));

	if (t83 != 409) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x2713 = INT16_MAX;
	int32_t x2715 = INT32_MIN;
	static uint16_t x2716 = 0U;
	static volatile int32_t t84 = 371;

	t84 = (x2713+((x2714==x2715)>>x2716));

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x2725 = -1;
	int16_t x2726 = -391;
	uint8_t x2727 = UINT8_MAX;
	volatile int8_t x2728 = 3;
	static volatile int32_t t85 = 15301;

	t85 = (x2725+((x2726==x2727)>>x2728));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x2769 = INT64_MIN;
	int32_t x2770 = INT32_MIN;
	int32_t x2771 = INT32_MIN;
	volatile int64_t t86 = INT64_MIN;

	t86 = (x2769+((x2770==x2771)>>x2772));

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x2779 = 1U;
	int8_t x2780 = 0;
	volatile int32_t t87 = 1;

	t87 = (x2777+((x2778==x2779)>>x2780));

	if (t87 != 29) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x2825 = INT16_MIN;
	volatile uint8_t x2826 = 29U;
	uint32_t x2827 = 26U;
	uint8_t x2828 = 5U;
	int32_t t88 = -956;

	t88 = (x2825+((x2826==x2827)>>x2828));

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x2845 = -1;
	int16_t x2846 = 0;
	volatile uint64_t x2847 = UINT64_MAX;
	static uint32_t x2848 = 22U;
	int32_t t89 = -311;

	t89 = (x2845+((x2846==x2847)>>x2848));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x2878 = 905U;
	static int8_t x2879 = -1;
	int8_t x2880 = 0;
	volatile int64_t t90 = 404182260422LL;

	t90 = (x2877+((x2878==x2879)>>x2880));

	if (t90 != 1603739LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x2891 = -1;
	static volatile uint8_t x2892 = 3U;
	volatile int32_t t91 = INT32_MAX;

	t91 = (x2889+((x2890==x2891)>>x2892));

	if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x2997 = 2U;
	uint32_t x2998 = 7U;
	int8_t x2999 = INT8_MAX;
	uint8_t x3000 = 9U;
	volatile int32_t t92 = 57;

	t92 = (x2997+((x2998==x2999)>>x3000));

	if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x3009 = 13299U;
	uint64_t x3011 = UINT64_MAX;
	int8_t x3012 = 6;
	volatile int32_t t93 = -61229;

	t93 = (x3009+((x3010==x3011)>>x3012));

	if (t93 != 13299) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x3025 = 12737808600LLU;
	uint16_t x3026 = 1607U;
	uint64_t x3027 = 522365572102399LLU;
	static int8_t x3028 = 5;
	static volatile uint64_t t94 = 201758920772047378LLU;

	t94 = (x3025+((x3026==x3027)>>x3028));

	if (t94 != 12737808600LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x3034 = UINT8_MAX;
	int64_t x3035 = INT64_MAX;
	static int64_t t95 = INT64_MIN;

	t95 = (x3033+((x3034==x3035)>>x3036));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint8_t x3065 = 2U;
	int64_t x3067 = -2989LL;
	uint16_t x3068 = 5U;
	int32_t t96 = 4;

	t96 = (x3065+((x3066==x3067)>>x3068));

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x3118 = 30U;
	volatile int32_t x3119 = INT32_MIN;
	static uint16_t x3120 = 14U;
	int32_t t97 = -95220222;

	t97 = (x3117+((x3118==x3119)>>x3120));

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x3137 = -10;
	static int8_t x3138 = INT8_MIN;
	uint16_t x3139 = 1U;
	static uint32_t x3140 = 9U;
	int32_t t98 = 0;

	t98 = (x3137+((x3138==x3139)>>x3140));

	if (t98 != -10) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x3177 = 23237387780000070LLU;
	static uint8_t x3178 = UINT8_MAX;
	uint64_t x3179 = 798716049754135034LLU;
	volatile uint64_t t99 = 260LLU;

	t99 = (x3177+((x3178==x3179)>>x3180));

	if (t99 != 23237387780000070LLU) { NG(); } else { ; }
	
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

