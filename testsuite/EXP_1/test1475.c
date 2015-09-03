#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x104 = 5U;
static int8_t x107 = 5;
int64_t x207 = -187621LL;
volatile uint16_t x208 = 13U;
volatile int32_t t6 = 15137;
int32_t t7 = 376279;
static uint16_t x317 = 11321U;
volatile uint16_t x318 = 16932U;
int8_t x349 = INT8_MIN;
int8_t x350 = -1;
volatile int32_t t9 = 1013;
uint64_t x487 = 38864495797182LLU;
int32_t t14 = 191;
static int32_t t15 = 462;
static int32_t t17 = -503846376;
static int16_t x669 = INT16_MAX;
volatile int16_t x685 = INT16_MAX;
uint8_t x788 = 11U;
uint16_t x821 = UINT16_MAX;
volatile int8_t x830 = 1;
uint8_t x840 = 7U;
int8_t x842 = INT8_MIN;
int32_t x867 = INT32_MIN;
volatile int8_t x921 = -28;
int16_t x923 = INT16_MAX;
volatile int32_t t30 = 1;
uint16_t x1010 = 1338U;
uint16_t x1059 = UINT16_MAX;
volatile int32_t t34 = 1116517;
static int32_t x1084 = 30;
volatile uint64_t x1162 = 16274444LLU;
int32_t t37 = -6679;
int8_t x1178 = INT8_MIN;
uint64_t x1281 = 24572260705644085LLU;
uint32_t x1283 = 40243318U;
static int64_t x1284 = 30LL;
uint64_t x1333 = 158604960769119554LLU;
int32_t x1349 = -1;
int16_t x1350 = -3;
uint8_t x1376 = 25U;
volatile uint16_t x1518 = UINT16_MAX;
static int32_t t45 = -527436;
static volatile uint16_t x1600 = 6U;
volatile int32_t t48 = 69639;
int64_t x1678 = 483686LL;
static int16_t x1679 = INT16_MIN;
uint8_t x1700 = 1U;
int32_t t52 = 16220729;
int32_t x1738 = -14534487;
uint64_t x1757 = 115LLU;
int16_t x1759 = -5;
volatile int32_t t55 = -41;
int64_t x1787 = -113LL;
volatile int32_t t56 = 738133775;
uint32_t x1846 = UINT32_MAX;
static int16_t x1847 = 3484;
int16_t x1958 = INT16_MIN;
int16_t x1959 = -1;
uint32_t x1960 = 12U;
int16_t x1995 = INT16_MIN;
uint8_t x1996 = 17U;
int64_t x2018 = -1LL;
volatile int32_t t63 = -5886934;
int32_t x2054 = INT32_MAX;
uint16_t x2056 = 21U;
int8_t x2223 = 8;
uint8_t x2224 = 6U;
uint8_t x2313 = 0U;
static volatile int16_t x2358 = -7;
int64_t x2359 = -3469405179935486714LL;
int64_t x2409 = INT64_MIN;
int32_t x2411 = INT32_MIN;
static volatile int16_t x2473 = INT16_MIN;
volatile int8_t x2474 = INT8_MIN;
uint8_t x2521 = 0U;
volatile int64_t x2574 = -1LL;
uint8_t x2688 = 1U;
uint16_t x2714 = UINT16_MAX;
uint16_t x2716 = 1U;
static uint16_t x2798 = 1U;
static int16_t x2799 = INT16_MAX;
int32_t x2844 = 1;
uint8_t x2933 = 1U;
int8_t x3048 = 0;
volatile int32_t t87 = -15486;
static int16_t x3061 = INT16_MAX;
static int8_t x3064 = 28;
volatile uint8_t x3104 = 17U;
int64_t x3177 = -9LL;
int32_t x3179 = INT32_MIN;
static int32_t t92 = -84054;
uint32_t x3216 = 5U;
int16_t x3235 = INT16_MAX;
static volatile int32_t x3246 = -992525;
uint64_t x3247 = 12272550345LLU;
static int16_t x3248 = 1;
volatile int32_t t95 = -245;
uint32_t x3258 = UINT32_MAX;
static uint8_t x3322 = 121U;
int8_t x3323 = INT8_MIN;


void f0(void) {
	int8_t x13 = INT8_MIN;
	volatile uint16_t x14 = 3713U;
	volatile int16_t x15 = -5444;
	volatile int64_t x16 = 0LL;
	static volatile int32_t t0 = -1;

	t0 = (((x13<x14)<=x15)<<x16);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x53 = 0U;
	static int32_t x54 = -684549890;
	int16_t x55 = -2;
	uint16_t x56 = 13U;
	volatile int32_t t1 = 8;

	t1 = (((x53<x54)<=x55)<<x56);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x101 = -1;
	volatile int8_t x102 = INT8_MAX;
	static int16_t x103 = 7236;
	volatile int32_t t2 = 353825223;

	t2 = (((x101<x102)<=x103)<<x104);

	if (t2 != 32) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x105 = 878279LLU;
	uint8_t x106 = 83U;
	volatile uint8_t x108 = 3U;
	volatile int32_t t3 = 314104475;

	t3 = (((x105<x106)<=x107)<<x108);

	if (t3 != 8) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x205 = 1565036;
	volatile int16_t x206 = -1;
	static volatile int32_t t4 = -375522030;

	t4 = (((x205<x206)<=x207)<<x208);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x221 = INT32_MIN;
	uint32_t x222 = UINT32_MAX;
	int32_t x223 = -1;
	uint8_t x224 = 8U;
	int32_t t5 = 8;

	t5 = (((x221<x222)<=x223)<<x224);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x237 = 4739920LLU;
	uint16_t x238 = UINT16_MAX;
	static uint8_t x239 = 12U;
	int16_t x240 = 13;

	t6 = (((x237<x238)<=x239)<<x240);

	if (t6 != 8192) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x277 = INT8_MAX;
	static volatile int8_t x278 = -1;
	int64_t x279 = -1LL;
	uint32_t x280 = 1U;

	t7 = (((x277<x278)<=x279)<<x280);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x319 = 0;
	uint16_t x320 = 4U;
	static volatile int32_t t8 = -2581;

	t8 = (((x317<x318)<=x319)<<x320);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x351 = INT32_MIN;
	int8_t x352 = 3;

	t9 = (((x349<x350)<=x351)<<x352);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x369 = UINT8_MAX;
	uint64_t x370 = UINT64_MAX;
	int16_t x371 = INT16_MAX;
	static uint8_t x372 = 14U;
	static volatile int32_t t10 = -350700385;

	t10 = (((x369<x370)<=x371)<<x372);

	if (t10 != 16384) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x449 = INT64_MAX;
	int32_t x450 = 256443;
	int16_t x451 = INT16_MAX;
	int16_t x452 = 4;
	static volatile int32_t t11 = 248641;

	t11 = (((x449<x450)<=x451)<<x452);

	if (t11 != 16) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x469 = -562;
	static int32_t x470 = INT32_MIN;
	int16_t x471 = 4;
	uint8_t x472 = 2U;
	volatile int32_t t12 = -1;

	t12 = (((x469<x470)<=x471)<<x472);

	if (t12 != 4) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x473 = INT64_MAX;
	int16_t x474 = INT16_MAX;
	volatile int64_t x475 = INT64_MAX;
	int32_t x476 = 1;
	int32_t t13 = -1873;

	t13 = (((x473<x474)<=x475)<<x476);

	if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x485 = INT32_MIN;
	static int8_t x486 = INT8_MIN;
	uint32_t x488 = 0U;

	t14 = (((x485<x486)<=x487)<<x488);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x537 = 1;
	int32_t x538 = -1;
	int32_t x539 = -7399;
	int8_t x540 = 1;

	t15 = (((x537<x538)<=x539)<<x540);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x553 = -59432634757LL;
	uint16_t x554 = UINT16_MAX;
	static uint16_t x555 = 126U;
	int8_t x556 = 23;
	volatile int32_t t16 = -12022514;

	t16 = (((x553<x554)<=x555)<<x556);

	if (t16 != 8388608) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x601 = INT8_MIN;
	int16_t x602 = 6084;
	static uint64_t x603 = 56LLU;
	static uint8_t x604 = 5U;

	t17 = (((x601<x602)<=x603)<<x604);

	if (t17 != 32) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x641 = INT64_MIN;
	int32_t x642 = INT32_MIN;
	static uint16_t x643 = UINT16_MAX;
	int16_t x644 = 11;
	volatile int32_t t18 = -14340016;

	t18 = (((x641<x642)<=x643)<<x644);

	if (t18 != 2048) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x649 = -1LL;
	uint64_t x650 = UINT64_MAX;
	int32_t x651 = 5;
	static int64_t x652 = 1LL;
	volatile int32_t t19 = -168;

	t19 = (((x649<x650)<=x651)<<x652);

	if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x670 = -1LL;
	uint32_t x671 = 140434926U;
	uint32_t x672 = 7U;
	volatile int32_t t20 = 497286;

	t20 = (((x669<x670)<=x671)<<x672);

	if (t20 != 128) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x686 = INT32_MAX;
	int32_t x687 = INT32_MIN;
	static uint8_t x688 = 29U;
	int32_t t21 = 1225300;

	t21 = (((x685<x686)<=x687)<<x688);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x785 = -4101519815348782LL;
	uint8_t x786 = UINT8_MAX;
	static int32_t x787 = INT32_MAX;
	volatile int32_t t22 = -1;

	t22 = (((x785<x786)<=x787)<<x788);

	if (t22 != 2048) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x822 = 1;
	static int32_t x823 = -1;
	uint8_t x824 = 1U;
	volatile int32_t t23 = 164;

	t23 = (((x821<x822)<=x823)<<x824);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x829 = 43601U;
	static uint32_t x831 = UINT32_MAX;
	static volatile uint16_t x832 = 6U;
	int32_t t24 = 5;

	t24 = (((x829<x830)<=x831)<<x832);

	if (t24 != 64) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x837 = 3795;
	uint16_t x838 = 477U;
	int64_t x839 = INT64_MIN;
	volatile int32_t t25 = -357;

	t25 = (((x837<x838)<=x839)<<x840);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x841 = INT64_MIN;
	int32_t x843 = INT32_MAX;
	uint64_t x844 = 2LLU;
	int32_t t26 = 2355678;

	t26 = (((x841<x842)<=x843)<<x844);

	if (t26 != 4) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x865 = -11;
	static volatile int16_t x866 = INT16_MAX;
	static uint8_t x868 = 4U;
	volatile int32_t t27 = -148735464;

	t27 = (((x865<x866)<=x867)<<x868);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x873 = -934LL;
	int32_t x874 = INT32_MIN;
	static int8_t x875 = -9;
	uint8_t x876 = 1U;
	static int32_t t28 = 1170;

	t28 = (((x873<x874)<=x875)<<x876);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x922 = -61;
	int8_t x924 = 1;
	volatile int32_t t29 = -73914;

	t29 = (((x921<x922)<=x923)<<x924);

	if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x941 = INT32_MIN;
	uint32_t x942 = UINT32_MAX;
	int8_t x943 = -1;
	uint16_t x944 = 1U;

	t30 = (((x941<x942)<=x943)<<x944);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x953 = 30965U;
	int64_t x954 = INT64_MAX;
	uint32_t x955 = 75619U;
	static volatile uint8_t x956 = 1U;
	int32_t t31 = -1;

	t31 = (((x953<x954)<=x955)<<x956);

	if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x1009 = INT8_MAX;
	int64_t x1011 = INT64_MAX;
	uint8_t x1012 = 1U;
	static volatile int32_t t32 = 23831496;

	t32 = (((x1009<x1010)<=x1011)<<x1012);

	if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x1025 = 4765;
	int8_t x1026 = 29;
	volatile uint8_t x1027 = 24U;
	int8_t x1028 = 3;
	volatile int32_t t33 = -38;

	t33 = (((x1025<x1026)<=x1027)<<x1028);

	if (t33 != 8) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1057 = INT64_MAX;
	int64_t x1058 = INT64_MIN;
	uint16_t x1060 = 1U;

	t34 = (((x1057<x1058)<=x1059)<<x1060);

	if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1081 = 45429272710881261LLU;
	uint16_t x1082 = 27U;
	uint8_t x1083 = UINT8_MAX;
	int32_t t35 = 12657;

	t35 = (((x1081<x1082)<=x1083)<<x1084);

	if (t35 != 1073741824) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x1093 = -1;
	static volatile int8_t x1094 = -1;
	volatile uint16_t x1095 = 9517U;
	int8_t x1096 = 30;
	static int32_t t36 = -356;

	t36 = (((x1093<x1094)<=x1095)<<x1096);

	if (t36 != 1073741824) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1161 = 8880810349477LLU;
	static int8_t x1163 = INT8_MIN;
	uint8_t x1164 = 5U;

	t37 = (((x1161<x1162)<=x1163)<<x1164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x1177 = 20U;
	static volatile int16_t x1179 = INT16_MIN;
	int8_t x1180 = 1;
	volatile int32_t t38 = 127611;

	t38 = (((x1177<x1178)<=x1179)<<x1180);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1261 = INT16_MIN;
	static int32_t x1262 = -1;
	int8_t x1263 = INT8_MAX;
	int8_t x1264 = 4;
	volatile int32_t t39 = -531;

	t39 = (((x1261<x1262)<=x1263)<<x1264);

	if (t39 != 16) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1282 = 110LL;
	static volatile int32_t t40 = -4;

	t40 = (((x1281<x1282)<=x1283)<<x1284);

	if (t40 != 1073741824) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1334 = 36;
	int64_t x1335 = INT64_MAX;
	uint8_t x1336 = 18U;
	int32_t t41 = 1;

	t41 = (((x1333<x1334)<=x1335)<<x1336);

	if (t41 != 262144) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x1351 = -1;
	uint8_t x1352 = 7U;
	int32_t t42 = 291389202;

	t42 = (((x1349<x1350)<=x1351)<<x1352);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1373 = INT16_MAX;
	volatile uint16_t x1374 = 45U;
	int16_t x1375 = 54;
	volatile int32_t t43 = -49404;

	t43 = (((x1373<x1374)<=x1375)<<x1376);

	if (t43 != 33554432) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x1465 = -1;
	int16_t x1466 = 682;
	static int64_t x1467 = INT64_MIN;
	volatile uint16_t x1468 = 4U;
	int32_t t44 = 7237684;

	t44 = (((x1465<x1466)<=x1467)<<x1468);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1517 = INT32_MIN;
	int64_t x1519 = INT64_MIN;
	volatile uint8_t x1520 = 0U;

	t45 = (((x1517<x1518)<=x1519)<<x1520);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1529 = -1;
	static volatile int64_t x1530 = 394690LL;
	uint8_t x1531 = 68U;
	uint16_t x1532 = 6U;
	volatile int32_t t46 = 9;

	t46 = (((x1529<x1530)<=x1531)<<x1532);

	if (t46 != 64) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x1565 = 54;
	uint64_t x1566 = 355321147005LLU;
	int16_t x1567 = INT16_MIN;
	static uint32_t x1568 = 1U;
	int32_t t47 = 3025116;

	t47 = (((x1565<x1566)<=x1567)<<x1568);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1597 = -242622;
	int64_t x1598 = -942129374923539LL;
	volatile uint64_t x1599 = UINT64_MAX;

	t48 = (((x1597<x1598)<=x1599)<<x1600);

	if (t48 != 64) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x1657 = 7036;
	int16_t x1658 = INT16_MIN;
	int8_t x1659 = 32;
	uint32_t x1660 = 3U;
	int32_t t49 = 211;

	t49 = (((x1657<x1658)<=x1659)<<x1660);

	if (t49 != 8) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x1665 = INT8_MAX;
	int32_t x1666 = -145791477;
	int32_t x1667 = -1;
	int8_t x1668 = 23;
	int32_t t50 = 9622138;

	t50 = (((x1665<x1666)<=x1667)<<x1668);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x1677 = INT8_MIN;
	uint64_t x1680 = 2LLU;
	volatile int32_t t51 = -10;

	t51 = (((x1677<x1678)<=x1679)<<x1680);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x1697 = 8LL;
	static uint32_t x1698 = UINT32_MAX;
	static volatile int16_t x1699 = INT16_MIN;

	t52 = (((x1697<x1698)<=x1699)<<x1700);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x1717 = INT8_MIN;
	int64_t x1718 = INT64_MIN;
	static uint8_t x1719 = 41U;
	uint8_t x1720 = 6U;
	static int32_t t53 = -3;

	t53 = (((x1717<x1718)<=x1719)<<x1720);

	if (t53 != 64) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x1737 = UINT8_MAX;
	int32_t x1739 = INT32_MIN;
	uint8_t x1740 = 3U;
	volatile int32_t t54 = -188010613;

	t54 = (((x1737<x1738)<=x1739)<<x1740);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1758 = INT32_MAX;
	volatile uint16_t x1760 = 10U;

	t55 = (((x1757<x1758)<=x1759)<<x1760);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x1785 = 18U;
	int16_t x1786 = 7059;
	static uint8_t x1788 = 1U;

	t56 = (((x1785<x1786)<=x1787)<<x1788);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x1809 = 13LL;
	volatile int64_t x1810 = INT64_MIN;
	volatile int16_t x1811 = INT16_MIN;
	static int8_t x1812 = 18;
	volatile int32_t t57 = -25820;

	t57 = (((x1809<x1810)<=x1811)<<x1812);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x1845 = UINT8_MAX;
	uint16_t x1848 = 16U;
	int32_t t58 = 7;

	t58 = (((x1845<x1846)<=x1847)<<x1848);

	if (t58 != 65536) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x1905 = UINT32_MAX;
	int8_t x1906 = INT8_MIN;
	static int8_t x1907 = INT8_MIN;
	uint8_t x1908 = 0U;
	static int32_t t59 = 0;

	t59 = (((x1905<x1906)<=x1907)<<x1908);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x1957 = INT16_MAX;
	volatile int32_t t60 = 143202140;

	t60 = (((x1957<x1958)<=x1959)<<x1960);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x1977 = 0U;
	int32_t x1978 = INT32_MIN;
	int32_t x1979 = -1;
	volatile int8_t x1980 = 5;
	int32_t t61 = -1;

	t61 = (((x1977<x1978)<=x1979)<<x1980);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x1993 = -1;
	uint8_t x1994 = 5U;
	volatile int32_t t62 = -697;

	t62 = (((x1993<x1994)<=x1995)<<x1996);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x2017 = 10961499;
	int64_t x2019 = -987175775383642537LL;
	uint8_t x2020 = 12U;

	t63 = (((x2017<x2018)<=x2019)<<x2020);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x2053 = INT16_MIN;
	volatile int16_t x2055 = INT16_MAX;
	volatile int32_t t64 = 13900118;

	t64 = (((x2053<x2054)<=x2055)<<x2056);

	if (t64 != 2097152) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint8_t x2221 = UINT8_MAX;
	int16_t x2222 = INT16_MAX;
	volatile int32_t t65 = 9;

	t65 = (((x2221<x2222)<=x2223)<<x2224);

	if (t65 != 64) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x2301 = UINT64_MAX;
	volatile int64_t x2302 = -2151120600843626LL;
	uint8_t x2303 = 1U;
	static uint8_t x2304 = 14U;
	volatile int32_t t66 = -1915372;

	t66 = (((x2301<x2302)<=x2303)<<x2304);

	if (t66 != 16384) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x2314 = 370734;
	uint16_t x2315 = 18032U;
	volatile int8_t x2316 = 0;
	static volatile int32_t t67 = -88728;

	t67 = (((x2313<x2314)<=x2315)<<x2316);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x2357 = INT16_MAX;
	uint32_t x2360 = 8U;
	int32_t t68 = 16101168;

	t68 = (((x2357<x2358)<=x2359)<<x2360);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x2369 = INT16_MIN;
	uint32_t x2370 = UINT32_MAX;
	int16_t x2371 = INT16_MIN;
	uint16_t x2372 = 15U;
	int32_t t69 = 90;

	t69 = (((x2369<x2370)<=x2371)<<x2372);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x2410 = -1;
	uint8_t x2412 = 14U;
	int32_t t70 = 2;

	t70 = (((x2409<x2410)<=x2411)<<x2412);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x2475 = INT64_MIN;
	volatile uint8_t x2476 = 5U;
	int32_t t71 = -6161461;

	t71 = (((x2473<x2474)<=x2475)<<x2476);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x2522 = 32975563450881251LLU;
	static uint8_t x2523 = 20U;
	static uint8_t x2524 = 1U;
	static volatile int32_t t72 = -29340;

	t72 = (((x2521<x2522)<=x2523)<<x2524);

	if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x2549 = INT32_MIN;
	int64_t x2550 = INT64_MIN;
	volatile int8_t x2551 = -1;
	static uint16_t x2552 = 0U;
	volatile int32_t t73 = -572485;

	t73 = (((x2549<x2550)<=x2551)<<x2552);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x2569 = INT64_MIN;
	uint16_t x2570 = UINT16_MAX;
	int32_t x2571 = INT32_MIN;
	volatile uint64_t x2572 = 12LLU;
	volatile int32_t t74 = -1;

	t74 = (((x2569<x2570)<=x2571)<<x2572);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x2573 = -8;
	static int8_t x2575 = -3;
	static uint16_t x2576 = 0U;
	static volatile int32_t t75 = -401945312;

	t75 = (((x2573<x2574)<=x2575)<<x2576);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x2637 = -1;
	uint8_t x2638 = 2U;
	int64_t x2639 = -1LL;
	uint8_t x2640 = 17U;
	volatile int32_t t76 = 3703;

	t76 = (((x2637<x2638)<=x2639)<<x2640);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x2685 = INT32_MIN;
	int16_t x2686 = INT16_MIN;
	int8_t x2687 = INT8_MIN;
	volatile int32_t t77 = -190;

	t77 = (((x2685<x2686)<=x2687)<<x2688);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2713 = INT16_MIN;
	int8_t x2715 = -1;
	volatile int32_t t78 = 22372339;

	t78 = (((x2713<x2714)<=x2715)<<x2716);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x2725 = INT16_MIN;
	volatile int16_t x2726 = INT16_MAX;
	uint64_t x2727 = UINT64_MAX;
	int8_t x2728 = 5;
	volatile int32_t t79 = -2695;

	t79 = (((x2725<x2726)<=x2727)<<x2728);

	if (t79 != 32) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x2737 = INT32_MIN;
	int8_t x2738 = INT8_MAX;
	volatile int64_t x2739 = -1510918056204233793LL;
	uint32_t x2740 = 1U;
	volatile int32_t t80 = 1;

	t80 = (((x2737<x2738)<=x2739)<<x2740);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x2797 = 57427649U;
	uint16_t x2800 = 4U;
	int32_t t81 = 390826;

	t81 = (((x2797<x2798)<=x2799)<<x2800);

	if (t81 != 16) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x2805 = -30;
	int16_t x2806 = INT16_MIN;
	int32_t x2807 = -1;
	static uint16_t x2808 = 0U;
	int32_t t82 = -14;

	t82 = (((x2805<x2806)<=x2807)<<x2808);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x2841 = INT8_MIN;
	int64_t x2842 = -1LL;
	volatile uint8_t x2843 = 7U;
	int32_t t83 = -2272;

	t83 = (((x2841<x2842)<=x2843)<<x2844);

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x2885 = 683;
	int64_t x2886 = INT64_MIN;
	int32_t x2887 = INT32_MIN;
	uint16_t x2888 = 8U;
	static int32_t t84 = 9238837;

	t84 = (((x2885<x2886)<=x2887)<<x2888);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x2934 = 16554U;
	volatile uint16_t x2935 = 7U;
	uint16_t x2936 = 0U;
	int32_t t85 = -41558371;

	t85 = (((x2933<x2934)<=x2935)<<x2936);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x3017 = UINT64_MAX;
	uint64_t x3018 = 2LLU;
	int8_t x3019 = INT8_MIN;
	uint8_t x3020 = 12U;
	volatile int32_t t86 = -66534792;

	t86 = (((x3017<x3018)<=x3019)<<x3020);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x3045 = 1;
	static int16_t x3046 = INT16_MAX;
	uint16_t x3047 = 0U;

	t87 = (((x3045<x3046)<=x3047)<<x3048);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x3062 = -1014764974939028LL;
	int32_t x3063 = INT32_MAX;
	int32_t t88 = -161041656;

	t88 = (((x3061<x3062)<=x3063)<<x3064);

	if (t88 != 268435456) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x3101 = 165120U;
	volatile uint16_t x3102 = UINT16_MAX;
	int32_t x3103 = INT32_MIN;
	static int32_t t89 = 58269904;

	t89 = (((x3101<x3102)<=x3103)<<x3104);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x3161 = INT64_MIN;
	uint8_t x3162 = 122U;
	static int32_t x3163 = INT32_MIN;
	uint8_t x3164 = 3U;
	volatile int32_t t90 = 186532;

	t90 = (((x3161<x3162)<=x3163)<<x3164);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x3165 = INT8_MAX;
	uint16_t x3166 = 24U;
	volatile int16_t x3167 = INT16_MIN;
	int8_t x3168 = 0;
	int32_t t91 = -7548;

	t91 = (((x3165<x3166)<=x3167)<<x3168);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x3178 = -1;
	int16_t x3180 = 12;

	t92 = (((x3177<x3178)<=x3179)<<x3180);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x3213 = -1;
	uint16_t x3214 = UINT16_MAX;
	uint64_t x3215 = 103919439736756457LLU;
	volatile int32_t t93 = -6575;

	t93 = (((x3213<x3214)<=x3215)<<x3216);

	if (t93 != 32) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x3233 = 19LL;
	uint16_t x3234 = 46U;
	volatile uint8_t x3236 = 1U;
	volatile int32_t t94 = 12;

	t94 = (((x3233<x3234)<=x3235)<<x3236);

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x3245 = -1;

	t95 = (((x3245<x3246)<=x3247)<<x3248);

	if (t95 != 2) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x3257 = INT32_MIN;
	uint8_t x3259 = 22U;
	uint16_t x3260 = 2U;
	static int32_t t96 = -345184;

	t96 = (((x3257<x3258)<=x3259)<<x3260);

	if (t96 != 4) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x3265 = -1LL;
	static uint8_t x3266 = 0U;
	int64_t x3267 = 33LL;
	uint8_t x3268 = 1U;
	static volatile int32_t t97 = 2149218;

	t97 = (((x3265<x3266)<=x3267)<<x3268);

	if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x3321 = INT32_MAX;
	int8_t x3324 = 5;
	int32_t t98 = -1;

	t98 = (((x3321<x3322)<=x3323)<<x3324);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x3349 = INT8_MAX;
	uint32_t x3350 = 15358U;
	static int16_t x3351 = -1;
	uint8_t x3352 = 0U;
	volatile int32_t t99 = 86;

	t99 = (((x3349<x3350)<=x3351)<<x3352);

	if (t99 != 0) { NG(); } else { ; }
	
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

