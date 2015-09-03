#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x10 = INT16_MAX;
static uint8_t x91 = 7U;
volatile int64_t t6 = -959412LL;
static int16_t x193 = 2621;
int8_t x219 = 2;
volatile int8_t x221 = 51;
uint32_t x224 = 11U;
static volatile int64_t x316 = INT64_MIN;
volatile int32_t x334 = INT32_MIN;
int32_t t16 = 748606;
int16_t x394 = 1;
int32_t t17 = 5;
static uint32_t x418 = 114889U;
int8_t x575 = 1;
int64_t t20 = -13175211465011LL;
int8_t x597 = 49;
int8_t x598 = INT8_MAX;
static int64_t x622 = INT64_MIN;
volatile uint32_t t23 = 4500U;
int64_t x657 = INT64_MIN;
uint64_t t24 = 8183082762869353LLU;
volatile int64_t x780 = INT64_MIN;
volatile int16_t x853 = INT16_MIN;
volatile int64_t t26 = INT64_MIN;
int16_t x940 = -1;
int16_t x1045 = -63;
uint8_t x1119 = 0U;
uint8_t x1120 = 29U;
uint32_t x1133 = 178U;
int16_t x1221 = -1;
uint64_t x1252 = 1259965509804LLU;
static int16_t x1306 = -1;
volatile uint32_t t36 = 245847U;
uint32_t x1310 = UINT32_MAX;
int64_t x1345 = 5346401635898190LL;
int32_t x1409 = -497404;
uint32_t x1411 = 22U;
uint8_t x1435 = 2U;
int8_t x1436 = -1;
uint32_t x1446 = 247U;
int64_t x1448 = -1LL;
uint16_t x1480 = UINT16_MAX;
int64_t x1497 = INT64_MIN;
static uint64_t x1533 = 324LLU;
static uint16_t x1535 = 0U;
int64_t x1750 = 2LL;
int64_t x1760 = -863513333016789267LL;
int64_t t50 = 458570177446588LL;
volatile int64_t t51 = 6467LL;
uint16_t x2009 = UINT16_MAX;
volatile uint8_t x2015 = 0U;
int32_t x2016 = INT32_MIN;
uint32_t x2041 = 3359U;
int16_t x2043 = 1;
volatile int8_t x2085 = INT8_MIN;
uint32_t x2121 = 4795376U;
static uint64_t x2124 = 127829569681LLU;
volatile int64_t t58 = -231LL;
static int32_t x2186 = -1;
static volatile uint8_t x2187 = 1U;
static volatile int64_t x2222 = INT64_MIN;
int8_t x2223 = 12;
int32_t x2300 = INT32_MAX;
uint16_t x2344 = 0U;
volatile int32_t t66 = 58;
static int32_t t67 = -51304896;
static int64_t x2461 = INT64_MAX;
static volatile int32_t x2476 = -7;
uint16_t x2483 = 7U;
int32_t t70 = -3057;
static int32_t x2485 = -1;
static int32_t x2488 = -1;
static volatile int16_t x2508 = INT16_MIN;
volatile uint64_t x2525 = UINT64_MAX;
volatile int64_t x2600 = INT64_MIN;
uint16_t x2633 = 77U;
int64_t x2666 = INT64_MIN;
int8_t x2667 = 4;
int8_t x2713 = INT8_MIN;
int64_t x2714 = INT64_MIN;
volatile uint8_t x2751 = 5U;
int8_t x2754 = INT8_MIN;
int16_t x2756 = -1;
volatile int8_t x2780 = 37;
int8_t x2834 = INT8_MIN;
uint32_t x3022 = 74407U;
int32_t x3023 = 15;
volatile uint32_t x3072 = 97796U;
static uint8_t x3113 = 2U;
static volatile uint8_t x3115 = 1U;
int32_t x3128 = INT32_MIN;
int32_t x3164 = 1;
int8_t x3203 = 1;
uint16_t x3251 = 8U;
volatile uint8_t x3252 = 2U;


void f0(void) {
	int64_t x9 = INT64_MIN;
	uint8_t x11 = 3U;
	int16_t x12 = INT16_MIN;
	volatile int32_t t0 = -1;

	t0 = (((x9<x10)<<x11)+x12);

	if (t0 != -32760) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x53 = INT64_MIN;
	uint64_t x54 = 204139621660LLU;
	uint8_t x55 = 9U;
	int32_t x56 = 5975;
	int32_t t1 = 96;

	t1 = (((x53<x54)<<x55)+x56);

	if (t1 != 5975) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x73 = 449394780LLU;
	static int32_t x74 = INT32_MAX;
	uint8_t x75 = 0U;
	int16_t x76 = 118;
	int32_t t2 = 35357911;

	t2 = (((x73<x74)<<x75)+x76);

	if (t2 != 119) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x89 = INT32_MIN;
	int16_t x90 = 1004;
	int16_t x92 = INT16_MAX;
	static volatile int32_t t3 = -1;

	t3 = (((x89<x90)<<x91)+x92);

	if (t3 != 32895) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x101 = 7;
	uint64_t x102 = UINT64_MAX;
	int8_t x103 = 1;
	int64_t x104 = -121932LL;
	static volatile int64_t t4 = 814550318022620LL;

	t4 = (((x101<x102)<<x103)+x104);

	if (t4 != -121930LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x105 = 12LLU;
	volatile int8_t x106 = -1;
	uint32_t x107 = 1U;
	int16_t x108 = INT16_MIN;
	volatile int32_t t5 = -11434;

	t5 = (((x105<x106)<<x107)+x108);

	if (t5 != -32766) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x189 = UINT32_MAX;
	uint64_t x190 = UINT64_MAX;
	static int8_t x191 = 1;
	int64_t x192 = -770117LL;

	t6 = (((x189<x190)<<x191)+x192);

	if (t6 != -770115LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x194 = 42U;
	int8_t x195 = 10;
	uint64_t x196 = 7216LLU;
	static uint64_t t7 = 3LLU;

	t7 = (((x193<x194)<<x195)+x196);

	if (t7 != 7216LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x205 = UINT32_MAX;
	int32_t x206 = INT32_MAX;
	uint8_t x207 = 4U;
	int8_t x208 = INT8_MIN;
	volatile int32_t t8 = -167546;

	t8 = (((x205<x206)<<x207)+x208);

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x217 = INT8_MIN;
	int8_t x218 = INT8_MAX;
	int32_t x220 = -1;
	int32_t t9 = 11221468;

	t9 = (((x217<x218)<<x219)+x220);

	if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x222 = 2663153U;
	static uint8_t x223 = 1U;
	volatile uint32_t t10 = 305967610U;

	t10 = (((x221<x222)<<x223)+x224);

	if (t10 != 13U) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x257 = 1;
	static uint16_t x258 = 19543U;
	uint8_t x259 = 4U;
	volatile uint64_t x260 = 13484769616945403LLU;
	uint64_t t11 = 9304120LLU;

	t11 = (((x257<x258)<<x259)+x260);

	if (t11 != 13484769616945419LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x261 = 7763767LLU;
	uint64_t x262 = UINT64_MAX;
	static uint32_t x263 = 0U;
	uint32_t x264 = 6454U;
	uint32_t t12 = 374U;

	t12 = (((x261<x262)<<x263)+x264);

	if (t12 != 6455U) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x313 = -1;
	int32_t x314 = -1;
	int16_t x315 = 0;
	volatile int64_t t13 = INT64_MIN;

	t13 = (((x313<x314)<<x315)+x316);

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x321 = -392;
	int16_t x322 = -1;
	volatile int32_t x323 = 7;
	int8_t x324 = INT8_MIN;
	volatile int32_t t14 = 123;

	t14 = (((x321<x322)<<x323)+x324);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x333 = UINT16_MAX;
	volatile int32_t x335 = 2;
	volatile uint8_t x336 = 3U;
	static int32_t t15 = 25;

	t15 = (((x333<x334)<<x335)+x336);

	if (t15 != 3) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x365 = UINT64_MAX;
	int32_t x366 = INT32_MIN;
	int64_t x367 = 1LL;
	static int8_t x368 = INT8_MIN;

	t16 = (((x365<x366)<<x367)+x368);

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x393 = INT16_MIN;
	static uint8_t x395 = 1U;
	int16_t x396 = 0;

	t17 = (((x393<x394)<<x395)+x396);

	if (t17 != 2) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x417 = INT8_MIN;
	volatile int8_t x419 = 7;
	uint16_t x420 = 1U;
	volatile int32_t t18 = -2399886;

	t18 = (((x417<x418)<<x419)+x420);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x573 = 11;
	int32_t x574 = INT32_MIN;
	int32_t x576 = INT32_MIN;
	int32_t t19 = INT32_MIN;

	t19 = (((x573<x574)<<x575)+x576);

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x581 = 968076306U;
	uint32_t x582 = UINT32_MAX;
	volatile uint16_t x583 = 7U;
	static volatile int64_t x584 = INT64_MIN;

	t20 = (((x581<x582)<<x583)+x584);

	if (t20 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x599 = 0U;
	static uint64_t x600 = UINT64_MAX;
	volatile uint64_t t21 = 4340926569755478693LLU;

	t21 = (((x597<x598)<<x599)+x600);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x609 = UINT32_MAX;
	int16_t x610 = -1;
	static int8_t x611 = 1;
	int16_t x612 = INT16_MIN;
	volatile int32_t t22 = -80;

	t22 = (((x609<x610)<<x611)+x612);

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x621 = INT8_MIN;
	static volatile uint8_t x623 = 1U;
	volatile uint32_t x624 = 60946U;

	t23 = (((x621<x622)<<x623)+x624);

	if (t23 != 60946U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x658 = INT32_MIN;
	uint8_t x659 = 0U;
	static uint64_t x660 = UINT64_MAX;

	t24 = (((x657<x658)<<x659)+x660);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x777 = INT16_MAX;
	int8_t x778 = -2;
	volatile uint8_t x779 = 5U;
	volatile int64_t t25 = INT64_MIN;

	t25 = (((x777<x778)<<x779)+x780);

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x854 = INT16_MIN;
	volatile int32_t x855 = 4;
	int64_t x856 = INT64_MIN;

	t26 = (((x853<x854)<<x855)+x856);

	if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x937 = UINT8_MAX;
	int8_t x938 = -1;
	volatile int32_t x939 = 11;
	volatile int32_t t27 = 78781541;

	t27 = (((x937<x938)<<x939)+x940);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x1013 = -15242;
	int16_t x1014 = 24;
	int64_t x1015 = 1LL;
	uint16_t x1016 = UINT16_MAX;
	int32_t t28 = -6647;

	t28 = (((x1013<x1014)<<x1015)+x1016);

	if (t28 != 65537) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1029 = -1LL;
	int32_t x1030 = -109388295;
	uint16_t x1031 = 10U;
	static int64_t x1032 = -2091739280LL;
	int64_t t29 = -57381049292852LL;

	t29 = (((x1029<x1030)<<x1031)+x1032);

	if (t29 != -2091739280LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x1046 = 98;
	uint32_t x1047 = 12U;
	static uint32_t x1048 = 530142702U;
	uint32_t t30 = 394U;

	t30 = (((x1045<x1046)<<x1047)+x1048);

	if (t30 != 530146798U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x1117 = 29U;
	int64_t x1118 = -1LL;
	int32_t t31 = 3;

	t31 = (((x1117<x1118)<<x1119)+x1120);

	if (t31 != 29) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1134 = 6U;
	static int8_t x1135 = 0;
	static int8_t x1136 = INT8_MIN;
	volatile int32_t t32 = 20465;

	t32 = (((x1133<x1134)<<x1135)+x1136);

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1181 = INT32_MIN;
	static volatile int32_t x1182 = INT32_MAX;
	volatile uint32_t x1183 = 2U;
	int32_t x1184 = INT32_MIN;
	volatile int32_t t33 = -22529149;

	t33 = (((x1181<x1182)<<x1183)+x1184);

	if (t33 != -2147483644) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1222 = -3;
	uint8_t x1223 = 1U;
	int16_t x1224 = -1;
	volatile int32_t t34 = 42805832;

	t34 = (((x1221<x1222)<<x1223)+x1224);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x1249 = INT32_MAX;
	volatile int64_t x1250 = -1LL;
	int8_t x1251 = 0;
	uint64_t t35 = 45692213164740LLU;

	t35 = (((x1249<x1250)<<x1251)+x1252);

	if (t35 != 1259965509804LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1305 = 60;
	uint8_t x1307 = 1U;
	uint32_t x1308 = 0U;

	t36 = (((x1305<x1306)<<x1307)+x1308);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1309 = INT8_MAX;
	volatile int8_t x1311 = 11;
	int16_t x1312 = INT16_MIN;
	volatile int32_t t37 = 476309759;

	t37 = (((x1309<x1310)<<x1311)+x1312);

	if (t37 != -30720) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x1346 = INT16_MIN;
	int8_t x1347 = 10;
	static volatile uint8_t x1348 = UINT8_MAX;
	volatile int32_t t38 = 65605642;

	t38 = (((x1345<x1346)<<x1347)+x1348);

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1401 = -1;
	int32_t x1402 = -1;
	int8_t x1403 = 3;
	static uint8_t x1404 = UINT8_MAX;
	int32_t t39 = 0;

	t39 = (((x1401<x1402)<<x1403)+x1404);

	if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x1410 = INT8_MAX;
	volatile uint16_t x1412 = 8U;
	int32_t t40 = 1;

	t40 = (((x1409<x1410)<<x1411)+x1412);

	if (t40 != 4194312) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x1425 = INT64_MAX;
	int8_t x1426 = INT8_MIN;
	uint8_t x1427 = 0U;
	int8_t x1428 = INT8_MIN;
	volatile int32_t t41 = -74;

	t41 = (((x1425<x1426)<<x1427)+x1428);

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x1433 = UINT8_MAX;
	int8_t x1434 = INT8_MAX;
	static int32_t t42 = 1;

	t42 = (((x1433<x1434)<<x1435)+x1436);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x1445 = UINT64_MAX;
	uint32_t x1447 = 2U;
	int64_t t43 = 8287746550362477LL;

	t43 = (((x1445<x1446)<<x1447)+x1448);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1453 = INT64_MIN;
	static int64_t x1454 = 3LL;
	volatile int8_t x1455 = 0;
	int8_t x1456 = INT8_MIN;
	volatile int32_t t44 = 28185;

	t44 = (((x1453<x1454)<<x1455)+x1456);

	if (t44 != -127) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x1477 = 1375361042LLU;
	int16_t x1478 = INT16_MIN;
	int8_t x1479 = 26;
	int32_t t45 = -123835;

	t45 = (((x1477<x1478)<<x1479)+x1480);

	if (t45 != 67174399) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1498 = -979;
	int8_t x1499 = 0;
	static volatile int16_t x1500 = INT16_MIN;
	int32_t t46 = -1462;

	t46 = (((x1497<x1498)<<x1499)+x1500);

	if (t46 != -32767) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x1513 = -1;
	volatile int64_t x1514 = INT64_MIN;
	uint16_t x1515 = 2U;
	int32_t x1516 = -24;
	volatile int32_t t47 = 62413;

	t47 = (((x1513<x1514)<<x1515)+x1516);

	if (t47 != -24) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1534 = -1LL;
	int64_t x1536 = -57017603678531445LL;
	int64_t t48 = 17LL;

	t48 = (((x1533<x1534)<<x1535)+x1536);

	if (t48 != -57017603678531444LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x1749 = -1LL;
	int16_t x1751 = 4;
	uint16_t x1752 = 4840U;
	static int32_t t49 = 2434521;

	t49 = (((x1749<x1750)<<x1751)+x1752);

	if (t49 != 4856) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x1757 = UINT8_MAX;
	volatile int64_t x1758 = -1LL;
	volatile uint8_t x1759 = 0U;

	t50 = (((x1757<x1758)<<x1759)+x1760);

	if (t50 != -863513333016789267LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x1817 = UINT64_MAX;
	static int32_t x1818 = INT32_MIN;
	static int8_t x1819 = 1;
	static int64_t x1820 = -18260LL;

	t51 = (((x1817<x1818)<<x1819)+x1820);

	if (t51 != -18260LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x2010 = -60;
	uint8_t x2011 = 0U;
	int8_t x2012 = INT8_MIN;
	static volatile int32_t t52 = 309;

	t52 = (((x2009<x2010)<<x2011)+x2012);

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x2013 = INT64_MIN;
	int64_t x2014 = -1LL;
	volatile int32_t t53 = -2945945;

	t53 = (((x2013<x2014)<<x2015)+x2016);

	if (t53 != -2147483647) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2042 = INT8_MIN;
	int32_t x2044 = -1;
	static volatile int32_t t54 = -21;

	t54 = (((x2041<x2042)<<x2043)+x2044);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x2086 = -7765373831856LL;
	int64_t x2087 = 3LL;
	volatile int32_t x2088 = INT32_MIN;
	volatile int32_t t55 = INT32_MIN;

	t55 = (((x2085<x2086)<<x2087)+x2088);

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x2122 = UINT32_MAX;
	uint64_t x2123 = 1LLU;
	static uint64_t t56 = 949LLU;

	t56 = (((x2121<x2122)<<x2123)+x2124);

	if (t56 != 127829569683LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x2137 = INT64_MIN;
	int8_t x2138 = INT8_MAX;
	int8_t x2139 = 11;
	uint8_t x2140 = 0U;
	int32_t t57 = 53;

	t57 = (((x2137<x2138)<<x2139)+x2140);

	if (t57 != 2048) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x2145 = 1191;
	int64_t x2146 = -85872LL;
	int8_t x2147 = 1;
	volatile int64_t x2148 = -1LL;

	t58 = (((x2145<x2146)<<x2147)+x2148);

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x2185 = 67870709946090LL;
	int16_t x2188 = INT16_MIN;
	static int32_t t59 = -60;

	t59 = (((x2185<x2186)<<x2187)+x2188);

	if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x2193 = 342666377U;
	uint32_t x2194 = UINT32_MAX;
	uint8_t x2195 = 11U;
	int8_t x2196 = INT8_MIN;
	static volatile int32_t t60 = 4417944;

	t60 = (((x2193<x2194)<<x2195)+x2196);

	if (t60 != 1920) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x2209 = UINT32_MAX;
	uint16_t x2210 = 12708U;
	int16_t x2211 = 1;
	static uint8_t x2212 = 23U;
	static int32_t t61 = -205770581;

	t61 = (((x2209<x2210)<<x2211)+x2212);

	if (t61 != 23) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x2217 = INT8_MIN;
	static volatile uint32_t x2218 = 9U;
	volatile uint8_t x2219 = 4U;
	static int32_t x2220 = INT32_MAX;
	volatile int32_t t62 = INT32_MAX;

	t62 = (((x2217<x2218)<<x2219)+x2220);

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x2221 = INT32_MIN;
	uint32_t x2224 = 2040685622U;
	static uint32_t t63 = 7U;

	t63 = (((x2221<x2222)<<x2223)+x2224);

	if (t63 != 2040685622U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x2297 = 5007U;
	int64_t x2298 = INT64_MIN;
	uint32_t x2299 = 13U;
	volatile int32_t t64 = INT32_MAX;

	t64 = (((x2297<x2298)<<x2299)+x2300);

	if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x2341 = INT32_MIN;
	int16_t x2342 = -1;
	static int16_t x2343 = 27;
	int32_t t65 = -89636532;

	t65 = (((x2341<x2342)<<x2343)+x2344);

	if (t65 != 134217728) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x2377 = INT64_MIN;
	static int64_t x2378 = -49437663136LL;
	static int16_t x2379 = 3;
	int32_t x2380 = 186710;

	t66 = (((x2377<x2378)<<x2379)+x2380);

	if (t66 != 186718) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x2381 = 11U;
	int16_t x2382 = INT16_MIN;
	uint8_t x2383 = 0U;
	static uint8_t x2384 = UINT8_MAX;

	t67 = (((x2381<x2382)<<x2383)+x2384);

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x2462 = INT32_MAX;
	static volatile uint8_t x2463 = 9U;
	volatile uint8_t x2464 = 1U;
	volatile int32_t t68 = 11;

	t68 = (((x2461<x2462)<<x2463)+x2464);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x2473 = INT8_MIN;
	volatile int16_t x2474 = INT16_MIN;
	static uint8_t x2475 = 27U;
	static int32_t t69 = -25634;

	t69 = (((x2473<x2474)<<x2475)+x2476);

	if (t69 != -7) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x2481 = -1LL;
	static uint16_t x2482 = 12897U;
	int32_t x2484 = INT32_MIN;

	t70 = (((x2481<x2482)<<x2483)+x2484);

	if (t70 != -2147483520) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x2486 = -1;
	uint64_t x2487 = 4LLU;
	int32_t t71 = -3954641;

	t71 = (((x2485<x2486)<<x2487)+x2488);

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2505 = INT8_MIN;
	uint8_t x2506 = 6U;
	int8_t x2507 = 17;
	volatile int32_t t72 = 1100;

	t72 = (((x2505<x2506)<<x2507)+x2508);

	if (t72 != 98304) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x2521 = INT64_MIN;
	uint8_t x2522 = 1U;
	uint16_t x2523 = 1U;
	uint8_t x2524 = 31U;
	volatile int32_t t73 = 52;

	t73 = (((x2521<x2522)<<x2523)+x2524);

	if (t73 != 33) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x2526 = UINT64_MAX;
	uint8_t x2527 = 0U;
	int8_t x2528 = 0;
	int32_t t74 = 163;

	t74 = (((x2525<x2526)<<x2527)+x2528);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x2581 = 2;
	volatile int16_t x2582 = INT16_MAX;
	uint8_t x2583 = 7U;
	int64_t x2584 = -1LL;
	int64_t t75 = -449677LL;

	t75 = (((x2581<x2582)<<x2583)+x2584);

	if (t75 != 127LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x2597 = INT32_MAX;
	int8_t x2598 = INT8_MAX;
	static uint16_t x2599 = 10U;
	volatile int64_t t76 = INT64_MIN;

	t76 = (((x2597<x2598)<<x2599)+x2600);

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x2629 = 2;
	uint16_t x2630 = 299U;
	int16_t x2631 = 3;
	volatile int8_t x2632 = 3;
	int32_t t77 = 2171314;

	t77 = (((x2629<x2630)<<x2631)+x2632);

	if (t77 != 11) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2634 = INT16_MIN;
	uint8_t x2635 = 0U;
	int32_t x2636 = INT32_MIN;
	int32_t t78 = INT32_MIN;

	t78 = (((x2633<x2634)<<x2635)+x2636);

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x2665 = -118;
	int8_t x2668 = INT8_MIN;
	static volatile int32_t t79 = 0;

	t79 = (((x2665<x2666)<<x2667)+x2668);

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x2685 = 458;
	int32_t x2686 = -1;
	uint16_t x2687 = 31U;
	uint8_t x2688 = 7U;
	int32_t t80 = 64742;

	t80 = (((x2685<x2686)<<x2687)+x2688);

	if (t80 != 7) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x2689 = 1206970671U;
	int64_t x2690 = INT64_MIN;
	int8_t x2691 = 26;
	volatile int32_t x2692 = INT32_MIN;
	int32_t t81 = INT32_MIN;

	t81 = (((x2689<x2690)<<x2691)+x2692);

	if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x2715 = 0U;
	static volatile int16_t x2716 = INT16_MIN;
	int32_t t82 = 230039463;

	t82 = (((x2713<x2714)<<x2715)+x2716);

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x2749 = INT32_MIN;
	static int32_t x2750 = -1;
	int64_t x2752 = INT64_MIN;
	int64_t t83 = -1132140437521308104LL;

	t83 = (((x2749<x2750)<<x2751)+x2752);

	if (t83 != -9223372036854775776LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x2753 = INT64_MIN;
	uint16_t x2755 = 6U;
	volatile int32_t t84 = -4082544;

	t84 = (((x2753<x2754)<<x2755)+x2756);

	if (t84 != 63) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x2757 = INT32_MIN;
	int8_t x2758 = 1;
	static uint8_t x2759 = 0U;
	static int64_t x2760 = INT64_MIN;
	static volatile int64_t t85 = 1134860307598241607LL;

	t85 = (((x2757<x2758)<<x2759)+x2760);

	if (t85 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x2761 = 1U;
	uint8_t x2762 = 69U;
	int8_t x2763 = 1;
	int64_t x2764 = INT64_MIN;
	static int64_t t86 = -2037579706277157983LL;

	t86 = (((x2761<x2762)<<x2763)+x2764);

	if (t86 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x2777 = 13217;
	int64_t x2778 = 499945759737143352LL;
	int16_t x2779 = 15;
	volatile int32_t t87 = 1568;

	t87 = (((x2777<x2778)<<x2779)+x2780);

	if (t87 != 32805) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x2817 = 7606348U;
	static int64_t x2818 = -30998LL;
	uint8_t x2819 = 1U;
	int32_t x2820 = INT32_MIN;
	volatile int32_t t88 = INT32_MIN;

	t88 = (((x2817<x2818)<<x2819)+x2820);

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x2833 = -356;
	uint8_t x2835 = 3U;
	int8_t x2836 = INT8_MIN;
	volatile int32_t t89 = 73342432;

	t89 = (((x2833<x2834)<<x2835)+x2836);

	if (t89 != -120) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x3021 = INT16_MIN;
	volatile int16_t x3024 = INT16_MIN;
	int32_t t90 = -481032603;

	t90 = (((x3021<x3022)<<x3023)+x3024);

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x3033 = 3115290587LLU;
	int8_t x3034 = 36;
	uint8_t x3035 = 3U;
	int16_t x3036 = INT16_MIN;
	int32_t t91 = 8199318;

	t91 = (((x3033<x3034)<<x3035)+x3036);

	if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x3069 = INT64_MIN;
	static int8_t x3070 = INT8_MIN;
	volatile uint16_t x3071 = 4U;
	volatile uint32_t t92 = 33U;

	t92 = (((x3069<x3070)<<x3071)+x3072);

	if (t92 != 97812U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x3073 = INT32_MIN;
	static int8_t x3074 = INT8_MIN;
	uint32_t x3075 = 13U;
	volatile uint32_t x3076 = UINT32_MAX;
	volatile uint32_t t93 = 30U;

	t93 = (((x3073<x3074)<<x3075)+x3076);

	if (t93 != 8191U) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x3114 = 40;
	int8_t x3116 = -8;
	int32_t t94 = 20;

	t94 = (((x3113<x3114)<<x3115)+x3116);

	if (t94 != -6) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x3125 = INT32_MAX;
	static volatile int32_t x3126 = INT32_MIN;
	uint8_t x3127 = 7U;
	static volatile int32_t t95 = INT32_MIN;

	t95 = (((x3125<x3126)<<x3127)+x3128);

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x3161 = UINT16_MAX;
	static uint32_t x3162 = 25607U;
	uint8_t x3163 = 2U;
	static volatile int32_t t96 = -310;

	t96 = (((x3161<x3162)<<x3163)+x3164);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x3197 = 90U;
	int16_t x3198 = -2;
	int8_t x3199 = 0;
	int8_t x3200 = 16;
	int32_t t97 = 0;

	t97 = (((x3197<x3198)<<x3199)+x3200);

	if (t97 != 17) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x3201 = -4;
	int8_t x3202 = INT8_MIN;
	static uint64_t x3204 = 5806584561LLU;
	uint64_t t98 = 2LLU;

	t98 = (((x3201<x3202)<<x3203)+x3204);

	if (t98 != 5806584561LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x3249 = -672216;
	int64_t x3250 = INT64_MAX;
	int32_t t99 = 56;

	t99 = (((x3249<x3250)<<x3251)+x3252);

	if (t99 != 258) { NG(); } else { ; }
	
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

