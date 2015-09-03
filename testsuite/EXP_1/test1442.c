#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x78 = 205556U;
uint16_t x164 = UINT16_MAX;
int16_t x207 = 1;
uint64_t x308 = UINT64_MAX;
static volatile int32_t x357 = INT32_MAX;
static int64_t t9 = INT64_MIN;
uint8_t x371 = 20U;
int32_t x445 = INT32_MIN;
int64_t x446 = INT64_MIN;
volatile int32_t t11 = 2734;
int8_t x501 = INT8_MAX;
int16_t x504 = 3;
uint32_t x525 = 94U;
int8_t x526 = -1;
uint16_t x603 = 0U;
int16_t x771 = 7;
volatile uint32_t t19 = 1256309U;
int8_t x868 = INT8_MIN;
static int16_t x904 = INT16_MIN;
int64_t x908 = INT64_MIN;
static uint16_t x1006 = 540U;
volatile int32_t t23 = 3526;
static uint16_t x1073 = 122U;
static volatile uint16_t x1076 = UINT16_MAX;
int64_t x1202 = -1LL;
volatile int32_t t27 = -1;
int32_t x1334 = INT32_MIN;
uint8_t x1379 = 0U;
uint64_t x1380 = UINT64_MAX;
uint8_t x1511 = 3U;
int16_t x1512 = -121;
int32_t t31 = -237394;
uint32_t x1533 = 213510U;
static int16_t x1583 = 1;
volatile int64_t x1585 = INT64_MAX;
volatile uint8_t x1588 = 3U;
int16_t x1590 = -12;
int64_t x1610 = INT64_MIN;
volatile int16_t x1676 = INT16_MIN;
int32_t x1717 = INT32_MIN;
int64_t x1730 = -1LL;
int8_t x1732 = INT8_MIN;
volatile int32_t t43 = -112;
volatile int32_t x1922 = -1;
static volatile uint64_t t46 = UINT64_MAX;
volatile int32_t t47 = 53513;
static volatile uint8_t x2023 = 3U;
int32_t x2040 = -1;
int64_t t50 = INT64_MIN;
static uint8_t x2075 = 1U;
int8_t x2078 = INT8_MIN;
int64_t x2082 = INT64_MIN;
int32_t x2110 = -1;
int16_t x2183 = 1;
volatile uint16_t x2217 = 3154U;
uint32_t x2219 = 1U;
uint32_t t57 = 870577626U;
volatile int32_t x2225 = -1;
uint32_t x2241 = 203964327U;
volatile int32_t t59 = 1264;
int8_t x2315 = 0;
int32_t x2316 = -1517729;
uint32_t x2344 = 4U;
int64_t t62 = 198LL;
static uint8_t x2460 = UINT8_MAX;
int32_t t65 = -29;
int8_t x2463 = 0;
volatile uint8_t x2464 = 74U;
int8_t x2479 = 5;
volatile uint8_t x2506 = 103U;
int64_t x2508 = -1LL;
uint8_t x2547 = 10U;
uint64_t x2608 = 78589954LLU;
uint64_t x2683 = 3LLU;
volatile int16_t x2689 = INT16_MIN;
uint16_t x2693 = UINT16_MAX;
uint32_t x2696 = 7U;
int32_t x2717 = -1;
int8_t x2718 = -1;
int8_t x2722 = -1;
volatile uint64_t x2792 = 48LLU;
int8_t x2833 = INT8_MAX;
int64_t t78 = -11002607786810LL;
int16_t x2855 = 0;
static int64_t x2993 = INT64_MIN;
int16_t x2994 = -1;
volatile int8_t x2995 = 2;
uint32_t x3020 = 27192U;
static uint16_t x3077 = UINT16_MAX;
volatile int8_t x3081 = INT8_MIN;
static uint8_t x3082 = 91U;
uint8_t x3084 = 53U;
volatile uint64_t x3120 = 5LLU;
static int8_t x3257 = 4;
int64_t x3258 = -1LL;
uint64_t x3301 = 30957LLU;
uint8_t x3311 = 26U;
static int64_t x3313 = INT64_MIN;
int16_t x3320 = 852;
uint8_t x3324 = 4U;
static uint64_t x3332 = UINT64_MAX;
static uint16_t x3444 = UINT16_MAX;
static volatile int32_t t97 = -5;
uint16_t x3652 = UINT16_MAX;
int8_t x3664 = INT8_MAX;


void f0(void) {
	int32_t x77 = 1947;
	static uint8_t x79 = 24U;
	int64_t x80 = -5694LL;
	int64_t t0 = 30994605LL;

	t0 = (((x77<x78)>>x79)|x80);

	if (t0 != -5694LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x85 = INT64_MAX;
	uint8_t x86 = UINT8_MAX;
	uint8_t x87 = 0U;
	volatile int16_t x88 = INT16_MAX;
	static int32_t t1 = 8233504;

	t1 = (((x85<x86)>>x87)|x88);

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x121 = INT8_MAX;
	volatile int16_t x122 = 60;
	int8_t x123 = 1;
	int32_t x124 = INT32_MIN;
	int32_t t2 = INT32_MIN;

	t2 = (((x121<x122)>>x123)|x124);

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x125 = -1;
	int8_t x126 = -1;
	uint8_t x127 = 1U;
	int16_t x128 = -1;
	int32_t t3 = -3;

	t3 = (((x125<x126)>>x127)|x128);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x161 = 2U;
	int8_t x162 = -1;
	static uint16_t x163 = 0U;
	static volatile int32_t t4 = 13613648;

	t4 = (((x161<x162)>>x163)|x164);

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x169 = 193592U;
	int32_t x170 = INT32_MIN;
	static int32_t x171 = 4;
	uint8_t x172 = 0U;
	volatile int32_t t5 = -594237403;

	t5 = (((x169<x170)>>x171)|x172);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x205 = 1U;
	int16_t x206 = 46;
	int32_t x208 = INT32_MAX;
	volatile int32_t t6 = INT32_MAX;

	t6 = (((x205<x206)>>x207)|x208);

	if (t6 != INT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x305 = 1U;
	int32_t x306 = INT32_MAX;
	int8_t x307 = 0;
	uint64_t t7 = UINT64_MAX;

	t7 = (((x305<x306)>>x307)|x308);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x358 = INT8_MIN;
	uint8_t x359 = 0U;
	int64_t x360 = 48818258LL;
	static volatile int64_t t8 = 2066495LL;

	t8 = (((x357<x358)>>x359)|x360);

	if (t8 != 48818258LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x361 = INT8_MAX;
	volatile int64_t x362 = INT64_MIN;
	static int64_t x363 = 0LL;
	static int64_t x364 = INT64_MIN;

	t9 = (((x361<x362)>>x363)|x364);

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x369 = INT8_MAX;
	uint16_t x370 = 1913U;
	uint8_t x372 = 13U;
	int32_t t10 = 8298;

	t10 = (((x369<x370)>>x371)|x372);

	if (t10 != 13) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x447 = 15LL;
	int8_t x448 = INT8_MAX;

	t11 = (((x445<x446)>>x447)|x448);

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x493 = -6834731LL;
	volatile int8_t x494 = -2;
	int8_t x495 = 6;
	int32_t x496 = -31584868;
	int32_t t12 = -65284945;

	t12 = (((x493<x494)>>x495)|x496);

	if (t12 != -31584868) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x502 = -1;
	uint8_t x503 = 16U;
	int32_t t13 = 1016;

	t13 = (((x501<x502)>>x503)|x504);

	if (t13 != 3) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x527 = 0;
	uint32_t x528 = UINT32_MAX;
	static volatile uint32_t t14 = UINT32_MAX;

	t14 = (((x525<x526)>>x527)|x528);

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x565 = 337919338982LLU;
	int16_t x566 = INT16_MIN;
	int8_t x567 = 2;
	int8_t x568 = -1;
	int32_t t15 = -8004;

	t15 = (((x565<x566)>>x567)|x568);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x601 = 4013;
	uint64_t x602 = UINT64_MAX;
	int8_t x604 = -1;
	static volatile int32_t t16 = -3417;

	t16 = (((x601<x602)>>x603)|x604);

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x705 = -1LL;
	int64_t x706 = -339LL;
	uint8_t x707 = 1U;
	static volatile uint16_t x708 = UINT16_MAX;
	int32_t t17 = -16641;

	t17 = (((x705<x706)>>x707)|x708);

	if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x713 = -31;
	volatile int8_t x714 = INT8_MAX;
	volatile uint8_t x715 = 7U;
	uint8_t x716 = UINT8_MAX;
	int32_t t18 = -7188;

	t18 = (((x713<x714)>>x715)|x716);

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x769 = UINT16_MAX;
	int8_t x770 = 61;
	uint32_t x772 = 979792500U;

	t19 = (((x769<x770)>>x771)|x772);

	if (t19 != 979792500U) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x865 = INT64_MIN;
	static volatile int32_t x866 = INT32_MIN;
	uint64_t x867 = 3LLU;
	volatile int32_t t20 = 45072;

	t20 = (((x865<x866)>>x867)|x868);

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x901 = INT32_MIN;
	int8_t x902 = -1;
	uint16_t x903 = 10U;
	int32_t t21 = 66474563;

	t21 = (((x901<x902)>>x903)|x904);

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x905 = 0;
	int64_t x906 = INT64_MIN;
	uint8_t x907 = 0U;
	int64_t t22 = INT64_MIN;

	t22 = (((x905<x906)>>x907)|x908);

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1005 = 55U;
	uint16_t x1007 = 27U;
	int8_t x1008 = 12;

	t23 = (((x1005<x1006)>>x1007)|x1008);

	if (t23 != 12) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1025 = -6142344LL;
	static int64_t x1026 = 5224LL;
	uint8_t x1027 = 3U;
	int64_t x1028 = INT64_MIN;
	volatile int64_t t24 = INT64_MIN;

	t24 = (((x1025<x1026)>>x1027)|x1028);

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1074 = INT64_MIN;
	int32_t x1075 = 0;
	int32_t t25 = -1475014;

	t25 = (((x1073<x1074)>>x1075)|x1076);

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1201 = UINT32_MAX;
	volatile uint8_t x1203 = 1U;
	int32_t x1204 = INT32_MAX;
	static volatile int32_t t26 = INT32_MAX;

	t26 = (((x1201<x1202)>>x1203)|x1204);

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1205 = INT16_MIN;
	static uint8_t x1206 = 99U;
	static uint64_t x1207 = 0LLU;
	int8_t x1208 = 19;

	t27 = (((x1205<x1206)>>x1207)|x1208);

	if (t27 != 19) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1333 = INT64_MAX;
	volatile uint8_t x1335 = 13U;
	static uint8_t x1336 = 10U;
	volatile int32_t t28 = -8784637;

	t28 = (((x1333<x1334)>>x1335)|x1336);

	if (t28 != 10) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1377 = -1;
	int64_t x1378 = INT64_MAX;
	uint64_t t29 = UINT64_MAX;

	t29 = (((x1377<x1378)>>x1379)|x1380);

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x1449 = 3U;
	uint8_t x1450 = UINT8_MAX;
	volatile int8_t x1451 = 1;
	static int64_t x1452 = -383LL;
	int64_t t30 = -67621044999LL;

	t30 = (((x1449<x1450)>>x1451)|x1452);

	if (t30 != -383LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x1509 = 33699U;
	int16_t x1510 = INT16_MAX;

	t31 = (((x1509<x1510)>>x1511)|x1512);

	if (t31 != -121) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1534 = UINT16_MAX;
	int8_t x1535 = 1;
	uint64_t x1536 = 686551748LLU;
	static volatile uint64_t t32 = 615385277201667LLU;

	t32 = (((x1533<x1534)>>x1535)|x1536);

	if (t32 != 686551748LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1581 = 131478950107510LLU;
	volatile uint8_t x1582 = 10U;
	int32_t x1584 = INT32_MAX;
	int32_t t33 = INT32_MAX;

	t33 = (((x1581<x1582)>>x1583)|x1584);

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1586 = -1;
	int32_t x1587 = 0;
	int32_t t34 = -47180848;

	t34 = (((x1585<x1586)>>x1587)|x1588);

	if (t34 != 3) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1589 = INT64_MAX;
	volatile int8_t x1591 = 0;
	int8_t x1592 = INT8_MIN;
	volatile int32_t t35 = -4322;

	t35 = (((x1589<x1590)>>x1591)|x1592);

	if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1609 = UINT16_MAX;
	uint16_t x1611 = 4U;
	int16_t x1612 = INT16_MAX;
	volatile int32_t t36 = 105686;

	t36 = (((x1609<x1610)>>x1611)|x1612);

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x1673 = INT8_MIN;
	static uint64_t x1674 = UINT64_MAX;
	uint64_t x1675 = 8LLU;
	int32_t t37 = 20248526;

	t37 = (((x1673<x1674)>>x1675)|x1676);

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x1718 = 8016537U;
	volatile uint8_t x1719 = 3U;
	uint64_t x1720 = UINT64_MAX;
	uint64_t t38 = UINT64_MAX;

	t38 = (((x1717<x1718)>>x1719)|x1720);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x1729 = 9U;
	volatile uint16_t x1731 = 13U;
	volatile int32_t t39 = 43;

	t39 = (((x1729<x1730)>>x1731)|x1732);

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1741 = -1;
	static volatile uint8_t x1742 = 5U;
	int8_t x1743 = 1;
	static int16_t x1744 = INT16_MAX;
	static volatile int32_t t40 = 104037;

	t40 = (((x1741<x1742)>>x1743)|x1744);

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1773 = INT64_MAX;
	int32_t x1774 = INT32_MIN;
	volatile uint64_t x1775 = 5LLU;
	static int8_t x1776 = INT8_MIN;
	static int32_t t41 = -423993018;

	t41 = (((x1773<x1774)>>x1775)|x1776);

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1797 = UINT8_MAX;
	volatile int64_t x1798 = INT64_MIN;
	volatile uint16_t x1799 = 1U;
	int32_t x1800 = INT32_MIN;
	int32_t t42 = INT32_MIN;

	t42 = (((x1797<x1798)>>x1799)|x1800);

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1833 = 16504LL;
	uint64_t x1834 = UINT64_MAX;
	volatile int16_t x1835 = 0;
	volatile int8_t x1836 = 3;

	t43 = (((x1833<x1834)>>x1835)|x1836);

	if (t43 != 3) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1869 = -1LL;
	int64_t x1870 = INT64_MAX;
	static volatile int32_t x1871 = 2;
	uint32_t x1872 = 7353949U;
	uint32_t t44 = 24U;

	t44 = (((x1869<x1870)>>x1871)|x1872);

	if (t44 != 7353949U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x1921 = UINT8_MAX;
	uint16_t x1923 = 29U;
	int32_t x1924 = 15370;
	int32_t t45 = 82;

	t45 = (((x1921<x1922)>>x1923)|x1924);

	if (t45 != 15370) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint8_t x1981 = 30U;
	int8_t x1982 = INT8_MAX;
	uint16_t x1983 = 15U;
	uint64_t x1984 = UINT64_MAX;

	t46 = (((x1981<x1982)>>x1983)|x1984);

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2013 = -2;
	int32_t x2014 = INT32_MIN;
	uint16_t x2015 = 9U;
	int8_t x2016 = 1;

	t47 = (((x2013<x2014)>>x2015)|x2016);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2021 = -138108360;
	int32_t x2022 = 27357;
	int64_t x2024 = INT64_MAX;
	int64_t t48 = INT64_MAX;

	t48 = (((x2021<x2022)>>x2023)|x2024);

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x2037 = UINT64_MAX;
	uint8_t x2038 = UINT8_MAX;
	int8_t x2039 = 19;
	int32_t t49 = 29;

	t49 = (((x2037<x2038)>>x2039)|x2040);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x2045 = INT32_MAX;
	volatile uint64_t x2046 = 3LLU;
	uint32_t x2047 = 8U;
	int64_t x2048 = INT64_MIN;

	t50 = (((x2045<x2046)>>x2047)|x2048);

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint16_t x2065 = UINT16_MAX;
	uint16_t x2066 = 1449U;
	volatile uint32_t x2067 = 0U;
	volatile int16_t x2068 = INT16_MIN;
	int32_t t51 = 12;

	t51 = (((x2065<x2066)>>x2067)|x2068);

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint8_t x2073 = 67U;
	uint32_t x2074 = UINT32_MAX;
	int32_t x2076 = 119051;
	volatile int32_t t52 = -17676256;

	t52 = (((x2073<x2074)>>x2075)|x2076);

	if (t52 != 119051) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x2077 = INT8_MAX;
	uint8_t x2079 = 7U;
	int32_t x2080 = 16209;
	static int32_t t53 = 81655;

	t53 = (((x2077<x2078)>>x2079)|x2080);

	if (t53 != 16209) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x2081 = 41;
	static uint16_t x2083 = 26U;
	int8_t x2084 = INT8_MIN;
	int32_t t54 = 722288;

	t54 = (((x2081<x2082)>>x2083)|x2084);

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x2109 = INT64_MIN;
	static int64_t x2111 = 8LL;
	int64_t x2112 = INT64_MIN;
	int64_t t55 = INT64_MIN;

	t55 = (((x2109<x2110)>>x2111)|x2112);

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x2181 = UINT8_MAX;
	uint32_t x2182 = UINT32_MAX;
	volatile uint32_t x2184 = 274808U;
	uint32_t t56 = 16U;

	t56 = (((x2181<x2182)>>x2183)|x2184);

	if (t56 != 274808U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2218 = INT16_MAX;
	uint32_t x2220 = 903969U;

	t57 = (((x2217<x2218)>>x2219)|x2220);

	if (t57 != 903969U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x2226 = INT64_MIN;
	uint16_t x2227 = 1U;
	uint16_t x2228 = 31723U;
	volatile int32_t t58 = -9111;

	t58 = (((x2225<x2226)>>x2227)|x2228);

	if (t58 != 31723) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2242 = INT16_MAX;
	int8_t x2243 = 1;
	volatile uint16_t x2244 = UINT16_MAX;

	t59 = (((x2241<x2242)>>x2243)|x2244);

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2313 = -3;
	int8_t x2314 = INT8_MIN;
	int32_t t60 = 15;

	t60 = (((x2313<x2314)>>x2315)|x2316);

	if (t60 != -1517729) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x2341 = INT8_MIN;
	volatile int8_t x2342 = 1;
	static uint16_t x2343 = 6U;
	uint32_t t61 = 704U;

	t61 = (((x2341<x2342)>>x2343)|x2344);

	if (t61 != 4U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x2365 = UINT64_MAX;
	static volatile int32_t x2366 = 5;
	uint8_t x2367 = 1U;
	int64_t x2368 = -326LL;

	t62 = (((x2365<x2366)>>x2367)|x2368);

	if (t62 != -326LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x2405 = INT64_MIN;
	int16_t x2406 = -1;
	static uint8_t x2407 = 1U;
	int64_t x2408 = 170098628170024075LL;
	volatile int64_t t63 = -40266973049LL;

	t63 = (((x2405<x2406)>>x2407)|x2408);

	if (t63 != 170098628170024075LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x2409 = UINT64_MAX;
	int8_t x2410 = INT8_MAX;
	uint8_t x2411 = 0U;
	volatile int32_t x2412 = 2186853;
	volatile int32_t t64 = 358806822;

	t64 = (((x2409<x2410)>>x2411)|x2412);

	if (t64 != 2186853) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x2457 = -3934LL;
	int16_t x2458 = INT16_MAX;
	static uint8_t x2459 = 15U;

	t65 = (((x2457<x2458)>>x2459)|x2460);

	if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x2461 = 236395423924LLU;
	uint64_t x2462 = 181117654LLU;
	volatile int32_t t66 = -56792602;

	t66 = (((x2461<x2462)>>x2463)|x2464);

	if (t66 != 74) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x2477 = INT64_MAX;
	int16_t x2478 = INT16_MAX;
	int8_t x2480 = INT8_MIN;
	int32_t t67 = -55877825;

	t67 = (((x2477<x2478)>>x2479)|x2480);

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x2505 = INT16_MIN;
	int8_t x2507 = 0;
	int64_t t68 = 243552962170193LL;

	t68 = (((x2505<x2506)>>x2507)|x2508);

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x2545 = 235968412920874314LLU;
	uint32_t x2546 = 6U;
	volatile uint32_t x2548 = 1U;
	uint32_t t69 = 1U;

	t69 = (((x2545<x2546)>>x2547)|x2548);

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x2605 = INT64_MIN;
	static int8_t x2606 = -1;
	int8_t x2607 = 0;
	uint64_t t70 = 132383443750LLU;

	t70 = (((x2605<x2606)>>x2607)|x2608);

	if (t70 != 78589955LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint64_t x2669 = UINT64_MAX;
	volatile uint16_t x2670 = 545U;
	int32_t x2671 = 23;
	int64_t x2672 = 3LL;
	volatile int64_t t71 = -17772472LL;

	t71 = (((x2669<x2670)>>x2671)|x2672);

	if (t71 != 3LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x2681 = 20U;
	volatile int32_t x2682 = INT32_MIN;
	uint32_t x2684 = 15636U;
	uint32_t t72 = 245U;

	t72 = (((x2681<x2682)>>x2683)|x2684);

	if (t72 != 15636U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x2690 = 248333877U;
	int8_t x2691 = 3;
	volatile int64_t x2692 = -3410299LL;
	int64_t t73 = 4493613642497LL;

	t73 = (((x2689<x2690)>>x2691)|x2692);

	if (t73 != -3410299LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x2694 = 3524987208243LLU;
	uint16_t x2695 = 3U;
	volatile uint32_t t74 = 5199U;

	t74 = (((x2693<x2694)>>x2695)|x2696);

	if (t74 != 7U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x2719 = 16U;
	uint16_t x2720 = 4U;
	int32_t t75 = 19171;

	t75 = (((x2717<x2718)>>x2719)|x2720);

	if (t75 != 4) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x2721 = 2720946021941561LL;
	volatile uint16_t x2723 = 19U;
	int16_t x2724 = 5656;
	int32_t t76 = 4612;

	t76 = (((x2721<x2722)>>x2723)|x2724);

	if (t76 != 5656) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x2789 = -1;
	uint16_t x2790 = UINT16_MAX;
	static int8_t x2791 = 1;
	uint64_t t77 = 524305079002LLU;

	t77 = (((x2789<x2790)>>x2791)|x2792);

	if (t77 != 48LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x2834 = INT8_MAX;
	static int64_t x2835 = 0LL;
	static volatile int64_t x2836 = 2625049231270621LL;

	t78 = (((x2833<x2834)>>x2835)|x2836);

	if (t78 != 2625049231270621LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x2853 = 54984;
	int16_t x2854 = 1608;
	int32_t x2856 = -31971;
	int32_t t79 = 25021064;

	t79 = (((x2853<x2854)>>x2855)|x2856);

	if (t79 != -31971) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2996 = INT16_MIN;
	static int32_t t80 = 53;

	t80 = (((x2993<x2994)>>x2995)|x2996);

	if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x3017 = INT8_MAX;
	int8_t x3018 = -1;
	int32_t x3019 = 5;
	volatile uint32_t t81 = 208999U;

	t81 = (((x3017<x3018)>>x3019)|x3020);

	if (t81 != 27192U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x3033 = -1;
	uint32_t x3034 = 641438420U;
	uint16_t x3035 = 1U;
	uint8_t x3036 = 7U;
	int32_t t82 = -178417590;

	t82 = (((x3033<x3034)>>x3035)|x3036);

	if (t82 != 7) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x3078 = -19486116517LL;
	uint16_t x3079 = 1U;
	uint16_t x3080 = 50U;
	int32_t t83 = -16593;

	t83 = (((x3077<x3078)>>x3079)|x3080);

	if (t83 != 50) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x3083 = 11;
	volatile int32_t t84 = 650674;

	t84 = (((x3081<x3082)>>x3083)|x3084);

	if (t84 != 53) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x3093 = -7;
	uint32_t x3094 = 146U;
	static uint8_t x3095 = 12U;
	uint16_t x3096 = UINT16_MAX;
	int32_t t85 = 0;

	t85 = (((x3093<x3094)>>x3095)|x3096);

	if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x3117 = -3;
	uint64_t x3118 = 275438315713343461LLU;
	uint8_t x3119 = 18U;
	volatile uint64_t t86 = 7523LLU;

	t86 = (((x3117<x3118)>>x3119)|x3120);

	if (t86 != 5LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x3169 = 0;
	int8_t x3170 = INT8_MIN;
	int8_t x3171 = 12;
	int8_t x3172 = -26;
	volatile int32_t t87 = 1020;

	t87 = (((x3169<x3170)>>x3171)|x3172);

	if (t87 != -26) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x3259 = 26U;
	uint8_t x3260 = 43U;
	static volatile int32_t t88 = -376;

	t88 = (((x3257<x3258)>>x3259)|x3260);

	if (t88 != 43) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x3302 = UINT64_MAX;
	uint8_t x3303 = 30U;
	int8_t x3304 = -5;
	volatile int32_t t89 = 675;

	t89 = (((x3301<x3302)>>x3303)|x3304);

	if (t89 != -5) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x3309 = INT32_MAX;
	volatile uint32_t x3310 = UINT32_MAX;
	uint64_t x3312 = 24766980621071LLU;
	uint64_t t90 = 106278LLU;

	t90 = (((x3309<x3310)>>x3311)|x3312);

	if (t90 != 24766980621071LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x3314 = 2348993U;
	uint8_t x3315 = 14U;
	volatile uint64_t x3316 = UINT64_MAX;
	static volatile uint64_t t91 = UINT64_MAX;

	t91 = (((x3313<x3314)>>x3315)|x3316);

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x3317 = -16694447;
	int32_t x3318 = INT32_MIN;
	uint8_t x3319 = 1U;
	volatile int32_t t92 = 522333;

	t92 = (((x3317<x3318)>>x3319)|x3320);

	if (t92 != 852) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x3321 = INT64_MIN;
	static volatile int32_t x3322 = INT32_MIN;
	int16_t x3323 = 0;
	static volatile int32_t t93 = -14996;

	t93 = (((x3321<x3322)>>x3323)|x3324);

	if (t93 != 5) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x3329 = UINT32_MAX;
	int8_t x3330 = -5;
	uint32_t x3331 = 3U;
	uint64_t t94 = UINT64_MAX;

	t94 = (((x3329<x3330)>>x3331)|x3332);

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x3441 = INT16_MAX;
	uint32_t x3442 = 62926708U;
	static int8_t x3443 = 14;
	int32_t t95 = -106779;

	t95 = (((x3441<x3442)>>x3443)|x3444);

	if (t95 != 65535) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x3609 = 3;
	volatile int32_t x3610 = 91;
	uint16_t x3611 = 0U;
	static int32_t x3612 = INT32_MAX;
	volatile int32_t t96 = INT32_MAX;

	t96 = (((x3609<x3610)>>x3611)|x3612);

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x3641 = 61153U;
	static int8_t x3642 = INT8_MAX;
	uint16_t x3643 = 1U;
	int8_t x3644 = 0;

	t97 = (((x3641<x3642)>>x3643)|x3644);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x3649 = INT64_MIN;
	uint64_t x3650 = 83948702472LLU;
	uint16_t x3651 = 0U;
	static int32_t t98 = 55664388;

	t98 = (((x3649<x3650)>>x3651)|x3652);

	if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x3661 = INT16_MAX;
	volatile int32_t x3662 = INT32_MAX;
	int16_t x3663 = 21;
	volatile int32_t t99 = -14;

	t99 = (((x3661<x3662)>>x3663)|x3664);

	if (t99 != 127) { NG(); } else { ; }
	
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

