#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x71 = 220351774758LLU;
uint16_t x129 = 42U;
volatile int32_t x427 = -255531764;
volatile uint64_t x549 = 1013034324918LLU;
uint32_t x658 = UINT32_MAX;
static uint8_t x772 = UINT8_MAX;
uint8_t x901 = 6U;
static int64_t x903 = -1LL;
uint8_t x905 = 30U;
int16_t x906 = INT16_MAX;
uint64_t x908 = 2916679159LLU;
int8_t x954 = 1;
int8_t x961 = INT8_MAX;
uint8_t x963 = 0U;
uint64_t x1017 = UINT64_MAX;
static int16_t x1018 = -1;
int64_t x1034 = -1LL;
int16_t x1338 = 0;
int64_t x1372 = INT64_MIN;
volatile int8_t x1391 = -4;
int16_t x1462 = 11;
int8_t x1554 = 0;
volatile int8_t x1555 = INT8_MIN;
uint8_t x1571 = 4U;
volatile int16_t x1573 = INT16_MAX;
static int16_t x1637 = INT16_MAX;
uint8_t x1639 = 0U;
static int32_t x1718 = INT32_MIN;
uint8_t x1736 = UINT8_MAX;
int8_t x1786 = INT8_MIN;
static int16_t x1830 = -1;
uint32_t t39 = 1616U;
volatile uint32_t t42 = 25016U;
int8_t x2033 = 27;
volatile int32_t t43 = -43911;
uint16_t x2140 = 36U;
uint16_t x2199 = 1U;
volatile uint32_t t45 = 472654U;
static int8_t x2489 = 0;
int32_t x2491 = INT32_MIN;
uint8_t x2492 = 14U;
int16_t x2556 = INT16_MIN;
int8_t x2590 = 0;
volatile int32_t t50 = -76894828;
uint16_t x2649 = 1398U;
int8_t x2983 = 0;
static int8_t x2984 = -1;
static uint32_t x3009 = UINT32_MAX;
int16_t x3310 = 0;
int32_t x3312 = INT32_MIN;
int64_t t61 = -19020689961134LL;
static uint32_t x3608 = UINT32_MAX;
uint32_t x3746 = 0U;
int64_t x3748 = -2476158326071845LL;
int8_t x3912 = INT8_MAX;
int8_t x4036 = INT8_MAX;
volatile int64_t t68 = -5117822LL;
static uint64_t x4213 = UINT64_MAX;
int64_t x4215 = -1LL;
int8_t x4218 = -1;
volatile int32_t x4220 = -61;
volatile uint32_t t70 = 479920399U;
uint16_t x4269 = 1812U;
volatile int16_t x4272 = INT16_MIN;
static int32_t x4377 = 232;
uint32_t x4437 = 2082U;
int8_t x4438 = 5;
volatile uint32_t t73 = 0U;
static int16_t x4557 = 1;
int64_t x4558 = -1LL;
static int64_t x4570 = 0LL;
volatile int32_t t77 = -227396025;
int8_t x4687 = -1;
int8_t x4699 = -1;
static int64_t x4826 = -2799472699465215LL;
volatile int8_t x4854 = 0;
volatile int32_t x4932 = INT32_MIN;
int64_t x4990 = INT64_MIN;
int32_t x4991 = 0;
int16_t x5278 = -1;
int8_t x5320 = INT8_MIN;
static uint64_t t91 = 584712LLU;
uint32_t x5478 = UINT32_MAX;
static int8_t x5479 = -1;
uint64_t x5720 = 219795559879953028LLU;
uint8_t x5757 = 7U;
uint8_t x5777 = 11U;
volatile int8_t x5778 = 0;


void f0(void) {
	static uint64_t x1 = 43660908803365LLU;
	volatile int8_t x2 = 0;
	int8_t x3 = INT8_MAX;
	int64_t x4 = -1LL;
	uint64_t t0 = 1456090LLU;

	t0 = ((x1<<(x2*x3))/x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x69 = 99809691U;
	int64_t x70 = INT64_MIN;
	int8_t x72 = 18;
	volatile uint32_t t1 = 17338U;

	t1 = ((x69<<(x70*x71))/x72);

	if (t1 != 5544982U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x117 = 1;
	int32_t x118 = -1;
	static volatile int32_t x119 = -1;
	int16_t x120 = INT16_MIN;
	volatile int32_t t2 = -47429680;

	t2 = ((x117<<(x118*x119))/x120);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x130 = 0;
	static int64_t x131 = INT64_MIN;
	static volatile int8_t x132 = INT8_MIN;
	int32_t t3 = -182877;

	t3 = ((x129<<(x130*x131))/x132);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x205 = 54464;
	static uint8_t x206 = 0U;
	static int8_t x207 = INT8_MIN;
	static volatile uint8_t x208 = 6U;
	int32_t t4 = -4635027;

	t4 = ((x205<<(x206*x207))/x208);

	if (t4 != 9077) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x217 = 4;
	volatile int64_t x218 = INT64_MAX;
	static uint8_t x219 = 0U;
	static int8_t x220 = -1;
	static int32_t t5 = 651523471;

	t5 = ((x217<<(x218*x219))/x220);

	if (t5 != -4) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x425 = UINT32_MAX;
	volatile uint64_t x426 = 0LLU;
	static int64_t x428 = INT64_MIN;
	static volatile int64_t t6 = 8607353608210979LL;

	t6 = ((x425<<(x426*x427))/x428);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x429 = 15329U;
	volatile int8_t x430 = 0;
	volatile uint16_t x431 = 4063U;
	uint32_t x432 = UINT32_MAX;
	uint32_t t7 = 529513720U;

	t7 = ((x429<<(x430*x431))/x432);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x465 = UINT64_MAX;
	uint32_t x466 = UINT32_MAX;
	volatile uint32_t x467 = UINT32_MAX;
	static volatile int8_t x468 = INT8_MAX;
	uint64_t t8 = 30219499938433468LLU;

	t8 = ((x465<<(x466*x467))/x468);

	if (t8 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x550 = UINT16_MAX;
	uint16_t x551 = 0U;
	int8_t x552 = INT8_MAX;
	volatile uint64_t t9 = 1663804LLU;

	t9 = ((x549<<(x550*x551))/x552);

	if (t9 != 7976648227LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint32_t x561 = 32108U;
	int8_t x562 = 0;
	uint64_t x563 = UINT64_MAX;
	volatile int16_t x564 = -1;
	static volatile uint32_t t10 = 0U;

	t10 = ((x561<<(x562*x563))/x564);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x657 = 2629421LL;
	int8_t x659 = -8;
	int32_t x660 = INT32_MAX;
	volatile int64_t t11 = -6568909LL;

	t11 = ((x657<<(x658*x659))/x660);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x681 = 58690LLU;
	int32_t x682 = INT32_MIN;
	static uint16_t x683 = 0U;
	int16_t x684 = -1;
	uint64_t t12 = 3959093535414395981LLU;

	t12 = ((x681<<(x682*x683))/x684);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x753 = 1;
	uint8_t x754 = 1U;
	int8_t x755 = 0;
	int8_t x756 = 57;
	volatile int32_t t13 = 63;

	t13 = ((x753<<(x754*x755))/x756);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x769 = INT8_MAX;
	int16_t x770 = -1;
	volatile uint8_t x771 = 0U;
	volatile int32_t t14 = -1;

	t14 = ((x769<<(x770*x771))/x772);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x789 = 2U;
	volatile uint32_t x790 = UINT32_MAX;
	uint32_t x791 = UINT32_MAX;
	volatile int16_t x792 = 225;
	int32_t t15 = 231;

	t15 = ((x789<<(x790*x791))/x792);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x902 = -1;
	static int64_t x904 = -6125955LL;
	static int64_t t16 = -4243LL;

	t16 = ((x901<<(x902*x903))/x904);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x907 = 0U;
	static uint64_t t17 = 247690LLU;

	t17 = ((x905<<(x906*x907))/x908);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x929 = 1;
	volatile uint8_t x930 = 0U;
	uint16_t x931 = 227U;
	uint32_t x932 = 43628U;
	uint32_t t18 = 32U;

	t18 = ((x929<<(x930*x931))/x932);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x953 = 5979LLU;
	uint8_t x955 = 15U;
	int16_t x956 = -1;
	volatile uint64_t t19 = 8643695LLU;

	t19 = ((x953<<(x954*x955))/x956);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x962 = 1U;
	static volatile int8_t x964 = -1;
	volatile int32_t t20 = 30735371;

	t20 = ((x961<<(x962*x963))/x964);

	if (t20 != -127) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x1019 = -1LL;
	int64_t x1020 = INT64_MAX;
	volatile uint64_t t21 = 332776577628735285LLU;

	t21 = ((x1017<<(x1018*x1019))/x1020);

	if (t21 != 2LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x1033 = 4U;
	volatile int64_t x1035 = -1LL;
	int16_t x1036 = -1;
	volatile uint32_t t22 = 37U;

	t22 = ((x1033<<(x1034*x1035))/x1036);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x1125 = 1;
	volatile int8_t x1126 = 0;
	int8_t x1127 = INT8_MIN;
	int64_t x1128 = INT64_MAX;
	volatile int64_t t23 = -6073674999LL;

	t23 = ((x1125<<(x1126*x1127))/x1128);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1337 = 983LLU;
	static uint8_t x1339 = UINT8_MAX;
	int8_t x1340 = 1;
	volatile uint64_t t24 = 846876409046733209LLU;

	t24 = ((x1337<<(x1338*x1339))/x1340);

	if (t24 != 983LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1369 = 15891313U;
	int16_t x1370 = 0;
	volatile int16_t x1371 = INT16_MIN;
	static int64_t t25 = -1268964672389222LL;

	t25 = ((x1369<<(x1370*x1371))/x1372);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1389 = UINT16_MAX;
	uint64_t x1390 = UINT64_MAX;
	static int32_t x1392 = -5925919;
	volatile int32_t t26 = -1037933422;

	t26 = ((x1389<<(x1390*x1391))/x1392);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1393 = 1;
	int32_t x1394 = 0;
	uint64_t x1395 = 65054568LLU;
	uint32_t x1396 = UINT32_MAX;
	static uint32_t t27 = 120697U;

	t27 = ((x1393<<(x1394*x1395))/x1396);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x1461 = 16U;
	int8_t x1463 = 1;
	static uint8_t x1464 = 9U;
	static int32_t t28 = -101671;

	t28 = ((x1461<<(x1462*x1463))/x1464);

	if (t28 != 3640) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x1513 = 212817414698LL;
	int16_t x1514 = 4;
	volatile uint8_t x1515 = 0U;
	volatile uint16_t x1516 = UINT16_MAX;
	int64_t t29 = 107923903LL;

	t29 = ((x1513<<(x1514*x1515))/x1516);

	if (t29 != 3247385LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1533 = 9511;
	int32_t x1534 = -1;
	int16_t x1535 = -2;
	static volatile int16_t x1536 = -1;
	static int32_t t30 = -22;

	t30 = ((x1533<<(x1534*x1535))/x1536);

	if (t30 != -38044) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x1553 = 3U;
	int8_t x1556 = INT8_MIN;
	volatile int32_t t31 = -59284;

	t31 = ((x1553<<(x1554*x1555))/x1556);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x1569 = INT32_MAX;
	static volatile uint16_t x1570 = 0U;
	int8_t x1572 = INT8_MAX;
	volatile int32_t t32 = -3;

	t32 = ((x1569<<(x1570*x1571))/x1572);

	if (t32 != 16909320) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1574 = 0U;
	static volatile int8_t x1575 = -1;
	int16_t x1576 = INT16_MAX;
	volatile int32_t t33 = -19;

	t33 = ((x1573<<(x1574*x1575))/x1576);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1638 = INT16_MAX;
	static volatile int8_t x1640 = 47;
	int32_t t34 = 16803600;

	t34 = ((x1637<<(x1638*x1639))/x1640);

	if (t34 != 697) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1717 = 16U;
	static volatile uint32_t x1719 = 2U;
	int64_t x1720 = INT64_MAX;
	int64_t t35 = 832596018346LL;

	t35 = ((x1717<<(x1718*x1719))/x1720);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1733 = INT32_MAX;
	static int8_t x1734 = 0;
	int8_t x1735 = 1;
	int32_t t36 = 485378;

	t36 = ((x1733<<(x1734*x1735))/x1736);

	if (t36 != 8421504) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x1777 = 80U;
	int32_t x1778 = -1;
	int16_t x1779 = 0;
	volatile int8_t x1780 = 8;
	volatile int32_t t37 = 37;

	t37 = ((x1777<<(x1778*x1779))/x1780);

	if (t37 != 10) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x1785 = 0;
	volatile uint16_t x1787 = 0U;
	int16_t x1788 = -5725;
	static int32_t t38 = 2089;

	t38 = ((x1785<<(x1786*x1787))/x1788);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1829 = 1;
	uint64_t x1831 = UINT64_MAX;
	uint32_t x1832 = 10725295U;

	t39 = ((x1829<<(x1830*x1831))/x1832);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x1877 = 58840;
	uint32_t x1878 = 599096U;
	int32_t x1879 = INT32_MIN;
	int64_t x1880 = INT64_MIN;
	int64_t t40 = 1LL;

	t40 = ((x1877<<(x1878*x1879))/x1880);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1921 = INT16_MAX;
	int64_t x1922 = INT64_MAX;
	volatile int8_t x1923 = 0;
	int32_t x1924 = INT32_MIN;
	static volatile int32_t t41 = 6773;

	t41 = ((x1921<<(x1922*x1923))/x1924);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint32_t x1961 = 252296U;
	int32_t x1962 = -1;
	static int32_t x1963 = -1;
	uint8_t x1964 = UINT8_MAX;

	t42 = ((x1961<<(x1962*x1963))/x1964);

	if (t42 != 1978U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x2034 = 0U;
	volatile int32_t x2035 = INT32_MIN;
	uint16_t x2036 = 24261U;

	t43 = ((x2033<<(x2034*x2035))/x2036);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x2137 = 16314481LLU;
	int16_t x2138 = 0;
	uint8_t x2139 = 3U;
	static uint64_t t44 = 20858739490500LLU;

	t44 = ((x2137<<(x2138*x2139))/x2140);

	if (t44 != 453180LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x2197 = UINT32_MAX;
	uint8_t x2198 = 16U;
	uint16_t x2200 = UINT16_MAX;

	t45 = ((x2197<<(x2198*x2199))/x2200);

	if (t45 != 65536U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2257 = 3;
	int8_t x2258 = -1;
	int64_t x2259 = -1LL;
	int16_t x2260 = -2;
	int32_t t46 = 13;

	t46 = ((x2257<<(x2258*x2259))/x2260);

	if (t46 != -3) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x2329 = 5U;
	int16_t x2330 = -1;
	int8_t x2331 = -21;
	int8_t x2332 = -1;
	int32_t t47 = -5;

	t47 = ((x2329<<(x2330*x2331))/x2332);

	if (t47 != -10485760) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x2490 = 2U;
	int32_t t48 = 1323;

	t48 = ((x2489<<(x2490*x2491))/x2492);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2553 = 769U;
	uint64_t x2554 = 95263280946093167LLU;
	int8_t x2555 = 0;
	int32_t t49 = -43;

	t49 = ((x2553<<(x2554*x2555))/x2556);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2589 = INT16_MAX;
	static uint32_t x2591 = 24007U;
	int8_t x2592 = INT8_MAX;

	t50 = ((x2589<<(x2590*x2591))/x2592);

	if (t50 != 258) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2650 = -1;
	static int8_t x2651 = -1;
	uint16_t x2652 = UINT16_MAX;
	volatile int32_t t51 = -853331;

	t51 = ((x2649<<(x2650*x2651))/x2652);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x2705 = 525620920611LL;
	static uint64_t x2706 = UINT64_MAX;
	static int16_t x2707 = -5;
	int16_t x2708 = -1193;
	volatile int64_t t52 = -847505274563254LL;

	t52 = ((x2705<<(x2706*x2707))/x2708);

	if (t52 != -14098800888LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2869 = INT8_MAX;
	uint64_t x2870 = 12LLU;
	int64_t x2871 = INT64_MIN;
	uint16_t x2872 = 207U;
	volatile int32_t t53 = -3;

	t53 = ((x2869<<(x2870*x2871))/x2872);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x2981 = 148LLU;
	uint8_t x2982 = UINT8_MAX;
	volatile uint64_t t54 = 0LLU;

	t54 = ((x2981<<(x2982*x2983))/x2984);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x3010 = 0U;
	static uint32_t x3011 = 5271U;
	uint32_t x3012 = UINT32_MAX;
	uint32_t t55 = 554U;

	t55 = ((x3009<<(x3010*x3011))/x3012);

	if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x3137 = 156937U;
	int16_t x3138 = 0;
	int8_t x3139 = 47;
	int8_t x3140 = INT8_MAX;
	uint32_t t56 = 3331660U;

	t56 = ((x3137<<(x3138*x3139))/x3140);

	if (t56 != 1235U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x3189 = 1007U;
	int64_t x3190 = INT64_MIN;
	uint16_t x3191 = 0U;
	static uint16_t x3192 = UINT16_MAX;
	int32_t t57 = 109615;

	t57 = ((x3189<<(x3190*x3191))/x3192);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x3309 = UINT64_MAX;
	int64_t x3311 = -247534000914137LL;
	static uint64_t t58 = 51LLU;

	t58 = ((x3309<<(x3310*x3311))/x3312);

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x3405 = 0;
	volatile int64_t x3406 = -1LL;
	int32_t x3407 = -1;
	volatile int64_t x3408 = INT64_MIN;
	volatile int64_t t59 = -273905244176582282LL;

	t59 = ((x3405<<(x3406*x3407))/x3408);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x3437 = 2U;
	int64_t x3438 = -1LL;
	int16_t x3439 = -1;
	uint64_t x3440 = UINT64_MAX;
	volatile uint64_t t60 = 80291464LLU;

	t60 = ((x3437<<(x3438*x3439))/x3440);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x3601 = INT16_MAX;
	uint16_t x3602 = 3U;
	uint8_t x3603 = 4U;
	volatile int64_t x3604 = -1LL;

	t61 = ((x3601<<(x3602*x3603))/x3604);

	if (t61 != -134213632LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x3605 = 123974;
	uint8_t x3606 = 0U;
	volatile int64_t x3607 = INT64_MIN;
	uint32_t t62 = 7374636U;

	t62 = ((x3605<<(x3606*x3607))/x3608);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3745 = UINT16_MAX;
	int16_t x3747 = 69;
	int64_t t63 = -4592730078656668LL;

	t63 = ((x3745<<(x3746*x3747))/x3748);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x3805 = 6U;
	int16_t x3806 = -1;
	volatile uint32_t x3807 = UINT32_MAX;
	uint64_t x3808 = 72260983673378LLU;
	volatile uint64_t t64 = 113114LLU;

	t64 = ((x3805<<(x3806*x3807))/x3808);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x3845 = 94006034U;
	static int16_t x3846 = -1;
	int8_t x3847 = -26;
	volatile int64_t x3848 = -1LL;
	volatile int64_t t65 = -834363254873561444LL;

	t65 = ((x3845<<(x3846*x3847))/x3848);

	if (t65 != -1207959552LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x3909 = 3U;
	int8_t x3910 = 0;
	static int32_t x3911 = INT32_MIN;
	volatile int32_t t66 = -169438;

	t66 = ((x3909<<(x3910*x3911))/x3912);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x4033 = 16U;
	volatile int64_t x4034 = INT64_MIN;
	volatile int8_t x4035 = 0;
	int32_t t67 = -121;

	t67 = ((x4033<<(x4034*x4035))/x4036);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x4113 = 40;
	volatile int8_t x4114 = -1;
	static uint32_t x4115 = UINT32_MAX;
	int64_t x4116 = INT64_MIN;

	t68 = ((x4113<<(x4114*x4115))/x4116);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x4214 = -1;
	int8_t x4216 = -1;
	uint64_t t69 = 624173653771LLU;

	t69 = ((x4213<<(x4214*x4215))/x4216);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x4217 = 4652184U;
	int8_t x4219 = -1;

	t70 = ((x4217<<(x4218*x4219))/x4220);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x4270 = 55783796807029LLU;
	int16_t x4271 = 0;
	static int32_t t71 = -31597181;

	t71 = ((x4269<<(x4270*x4271))/x4272);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x4378 = 0;
	uint16_t x4379 = 236U;
	static uint32_t x4380 = 1612599U;
	volatile uint32_t t72 = 724157U;

	t72 = ((x4377<<(x4378*x4379))/x4380);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x4439 = 4U;
	int8_t x4440 = 2;

	t73 = ((x4437<<(x4438*x4439))/x4440);

	if (t73 != 1091567616U) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x4559 = -1;
	int8_t x4560 = INT8_MIN;
	int32_t t74 = -394261377;

	t74 = ((x4557<<(x4558*x4559))/x4560);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x4561 = INT64_MAX;
	int64_t x4562 = INT64_MIN;
	uint64_t x4563 = 171737105126013388LLU;
	uint16_t x4564 = UINT16_MAX;
	int64_t t75 = -2293894LL;

	t75 = ((x4561<<(x4562*x4563))/x4564);

	if (t75 != 140739635871744LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x4569 = 41U;
	int64_t x4571 = INT64_MIN;
	int64_t x4572 = -1646LL;
	static int64_t t76 = -63LL;

	t76 = ((x4569<<(x4570*x4571))/x4572);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x4629 = UINT8_MAX;
	static volatile uint64_t x4630 = UINT64_MAX;
	uint64_t x4631 = UINT64_MAX;
	volatile uint16_t x4632 = 1456U;

	t77 = ((x4629<<(x4630*x4631))/x4632);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x4685 = UINT32_MAX;
	static int16_t x4686 = -1;
	int8_t x4688 = INT8_MIN;
	uint32_t t78 = 180964365U;

	t78 = ((x4685<<(x4686*x4687))/x4688);

	if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x4697 = UINT16_MAX;
	volatile int8_t x4698 = -1;
	int32_t x4700 = -1;
	int32_t t79 = 6;

	t79 = ((x4697<<(x4698*x4699))/x4700);

	if (t79 != -131070) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x4801 = 1U;
	static volatile int8_t x4802 = 0;
	volatile uint64_t x4803 = 5242LLU;
	uint16_t x4804 = UINT16_MAX;
	volatile uint32_t t80 = 14U;

	t80 = ((x4801<<(x4802*x4803))/x4804);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x4825 = 20U;
	uint8_t x4827 = 0U;
	int64_t x4828 = INT64_MAX;
	volatile int64_t t81 = -572LL;

	t81 = ((x4825<<(x4826*x4827))/x4828);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x4853 = 2577719U;
	static int32_t x4855 = INT32_MAX;
	int64_t x4856 = 2120913LL;
	static volatile int64_t t82 = 0LL;

	t82 = ((x4853<<(x4854*x4855))/x4856);

	if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x4929 = 3517715804LLU;
	uint16_t x4930 = 2U;
	int16_t x4931 = 1;
	uint64_t t83 = 3LLU;

	t83 = ((x4929<<(x4930*x4931))/x4932);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x4933 = 7526U;
	uint8_t x4934 = 0U;
	uint64_t x4935 = 32966577348LLU;
	int8_t x4936 = 23;
	uint32_t t84 = 1174U;

	t84 = ((x4933<<(x4934*x4935))/x4936);

	if (t84 != 327U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4989 = INT32_MAX;
	static uint64_t x4992 = 394391859583244LLU;
	volatile uint64_t t85 = 617974774094978014LLU;

	t85 = ((x4989<<(x4990*x4991))/x4992);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x5025 = 1U;
	volatile uint16_t x5026 = 0U;
	int32_t x5027 = -956;
	int64_t x5028 = -1LL;
	volatile int64_t t86 = 10057200608931057LL;

	t86 = ((x5025<<(x5026*x5027))/x5028);

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x5189 = 45270699454893LL;
	int64_t x5190 = -1LL;
	int16_t x5191 = -1;
	int32_t x5192 = INT32_MAX;
	volatile int64_t t87 = 39LL;

	t87 = ((x5189<<(x5190*x5191))/x5192);

	if (t87 != 42161LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x5249 = 184606U;
	static uint64_t x5250 = UINT64_MAX;
	int32_t x5251 = -1;
	static int32_t x5252 = -43956484;
	volatile uint32_t t88 = 77U;

	t88 = ((x5249<<(x5250*x5251))/x5252);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x5277 = 7U;
	uint16_t x5279 = 0U;
	int8_t x5280 = -3;
	int32_t t89 = -327746176;

	t89 = ((x5277<<(x5278*x5279))/x5280);

	if (t89 != -2) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x5297 = 1020;
	volatile uint8_t x5298 = 0U;
	volatile int64_t x5299 = INT64_MIN;
	int16_t x5300 = INT16_MAX;
	volatile int32_t t90 = -1037029625;

	t90 = ((x5297<<(x5298*x5299))/x5300);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x5317 = 14773739LLU;
	int8_t x5318 = -1;
	volatile int16_t x5319 = -1;

	t91 = ((x5317<<(x5318*x5319))/x5320);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x5345 = 29U;
	volatile int8_t x5346 = -5;
	int16_t x5347 = -1;
	static int64_t x5348 = -1LL;
	int64_t t92 = 44LL;

	t92 = ((x5345<<(x5346*x5347))/x5348);

	if (t92 != -928LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x5441 = 5U;
	static volatile int32_t x5442 = INT32_MIN;
	uint32_t x5443 = 27502U;
	int64_t x5444 = INT64_MAX;
	volatile int64_t t93 = 96281666934514LL;

	t93 = ((x5441<<(x5442*x5443))/x5444);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x5477 = UINT8_MAX;
	int8_t x5480 = INT8_MAX;
	int32_t t94 = 55750284;

	t94 = ((x5477<<(x5478*x5479))/x5480);

	if (t94 != 4) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x5717 = 0U;
	static volatile int32_t x5718 = -27;
	static volatile int64_t x5719 = -1LL;
	static uint64_t t95 = 9026791632215897LLU;

	t95 = ((x5717<<(x5718*x5719))/x5720);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x5729 = 1U;
	int64_t x5730 = -1LL;
	int16_t x5731 = -1;
	uint16_t x5732 = UINT16_MAX;
	int32_t t96 = 184;

	t96 = ((x5729<<(x5730*x5731))/x5732);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x5758 = 1692495756549LLU;
	static volatile int64_t x5759 = 0LL;
	int64_t x5760 = 5833010744672LL;
	static int64_t t97 = -5009500873LL;

	t97 = ((x5757<<(x5758*x5759))/x5760);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x5779 = 6U;
	int64_t x5780 = -4412LL;
	int64_t t98 = 149557144LL;

	t98 = ((x5777<<(x5778*x5779))/x5780);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x5853 = UINT16_MAX;
	volatile uint32_t x5854 = UINT32_MAX;
	int8_t x5855 = -8;
	uint16_t x5856 = UINT16_MAX;
	int32_t t99 = -48201;

	t99 = ((x5853<<(x5854*x5855))/x5856);

	if (t99 != 256) { NG(); } else { ; }
	
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

