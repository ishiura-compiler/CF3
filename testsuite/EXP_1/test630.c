#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = UINT16_MAX;
static int16_t x6 = INT16_MAX;
uint16_t x7 = UINT16_MAX;
static int32_t t0 = -2108;
int8_t x21 = INT8_MIN;
int64_t x24 = 1LL;
volatile int32_t t1 = 930719277;
static uint64_t x81 = 681487LLU;
int32_t t4 = 0;
int32_t x350 = 29213654;
int64_t x351 = INT64_MIN;
int32_t x378 = -1;
uint16_t x407 = 809U;
volatile int16_t x408 = 27;
int32_t t11 = 4455;
uint8_t x433 = 15U;
static int32_t t12 = -367770555;
static uint8_t x496 = 11U;
volatile int32_t t13 = 7;
volatile uint16_t x499 = 6368U;
int64_t x507 = -20298340420LL;
int8_t x508 = 10;
int32_t x553 = INT32_MIN;
int16_t x560 = 0;
volatile uint32_t x569 = 176238434U;
volatile int32_t x606 = -1;
uint16_t x642 = UINT16_MAX;
static int8_t x643 = INT8_MIN;
uint16_t x704 = 26U;
volatile int32_t t22 = 43;
volatile int64_t x842 = INT64_MAX;
uint8_t x874 = UINT8_MAX;
volatile int32_t x875 = INT32_MIN;
int32_t x985 = 1;
int8_t x1084 = 30;
int64_t x1095 = INT64_MIN;
int16_t x1141 = INT16_MIN;
volatile int32_t t34 = -617;
static volatile int32_t x1178 = 3736;
volatile int64_t x1179 = INT64_MAX;
int16_t x1180 = 13;
int16_t x1270 = INT16_MIN;
int8_t x1382 = INT8_MAX;
volatile uint8_t x1411 = 1U;
int32_t t41 = 919;
static uint16_t x1492 = 28U;
int32_t x1547 = 7;
int64_t x1555 = -1LL;
static uint64_t x1557 = 27494710762987054LLU;
int32_t t45 = -1;
uint32_t x1581 = 9262635U;
static volatile int8_t x1607 = INT8_MIN;
volatile int32_t t47 = -12;
int64_t x1636 = 1LL;
static volatile int32_t t49 = 3583976;
int64_t x1706 = -1LL;
volatile uint64_t x1707 = UINT64_MAX;
static int32_t t50 = -851867310;
volatile int32_t x1759 = 3650;
int32_t x1774 = 61;
int32_t x1782 = 1064633622;
uint32_t x1837 = 760874U;
static uint8_t x1872 = 1U;
static int64_t x1897 = -6159LL;
static int32_t t61 = -32100163;
uint64_t x2115 = UINT64_MAX;
uint64_t x2127 = UINT64_MAX;
volatile int32_t t64 = -120;
static int64_t x2173 = 7LL;
static volatile int32_t t65 = 1883504;
uint32_t x2258 = 1381365720U;
int16_t x2266 = -7355;
int32_t t69 = -15231158;
static volatile int32_t t71 = 935;
int64_t x2381 = -311166LL;
uint16_t x2431 = 871U;
uint32_t x2478 = 870U;
int8_t x2513 = INT8_MAX;
int8_t x2516 = 2;
volatile int16_t x2546 = 7;
uint8_t x2548 = 5U;
volatile int32_t t79 = 4870;
static int16_t x2672 = 2;
uint32_t x2707 = UINT32_MAX;
static int32_t t82 = 123458;
int8_t x2733 = INT8_MAX;
uint32_t x2735 = 12692648U;
static volatile int32_t t83 = -3;
uint8_t x2745 = 47U;
int64_t x2746 = 232324067LL;
volatile uint64_t x2750 = 118086849992814LLU;
int32_t t86 = 89083350;
int16_t x2785 = 0;
static volatile int32_t t87 = -2208309;
int64_t x2806 = INT64_MAX;
volatile uint8_t x2808 = 13U;
int32_t x2817 = -177856999;
int16_t x2818 = -1;
int8_t x2820 = 1;
volatile uint32_t x2919 = UINT32_MAX;
static int64_t x3029 = -1LL;
uint16_t x3031 = UINT16_MAX;
uint32_t x3114 = 4U;
int32_t x3115 = 104049;
static uint8_t x3116 = 4U;
volatile int32_t t99 = -847947;


void f0(void) {
	volatile uint8_t x8 = 7U;

	t0 = (((x5/x6)<=x7)<<x8);

	if (t0 != 128) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x22 = UINT8_MAX;
	uint16_t x23 = UINT16_MAX;

	t1 = (((x21/x22)<=x23)<<x24);

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x77 = 33U;
	volatile uint8_t x78 = 13U;
	static volatile int16_t x79 = -1;
	static uint16_t x80 = 1U;
	static int32_t t2 = 12;

	t2 = (((x77/x78)<=x79)<<x80);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x82 = INT64_MAX;
	int64_t x83 = INT64_MIN;
	uint32_t x84 = 8U;
	volatile int32_t t3 = 146;

	t3 = (((x81/x82)<=x83)<<x84);

	if (t3 != 256) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x193 = 819444824U;
	int32_t x194 = INT32_MAX;
	static uint8_t x195 = 68U;
	int8_t x196 = 0;

	t4 = (((x193/x194)<=x195)<<x196);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x213 = UINT8_MAX;
	uint64_t x214 = 1232226074827621179LLU;
	int32_t x215 = 6604648;
	uint16_t x216 = 1U;
	static int32_t t5 = 6067078;

	t5 = (((x213/x214)<=x215)<<x216);

	if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x261 = INT64_MIN;
	int16_t x262 = 7852;
	static int32_t x263 = -31919464;
	uint16_t x264 = 15U;
	volatile int32_t t6 = -5038;

	t6 = (((x261/x262)<=x263)<<x264);

	if (t6 != 32768) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x341 = 0U;
	volatile int8_t x342 = INT8_MIN;
	int32_t x343 = -1;
	uint8_t x344 = 0U;
	volatile int32_t t7 = -106549;

	t7 = (((x341/x342)<=x343)<<x344);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x349 = 3174U;
	static uint16_t x352 = 0U;
	int32_t t8 = 0;

	t8 = (((x349/x350)<=x351)<<x352);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x377 = INT32_MAX;
	uint64_t x379 = UINT64_MAX;
	static int8_t x380 = 1;
	volatile int32_t t9 = 1858379;

	t9 = (((x377/x378)<=x379)<<x380);

	if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x389 = -1LL;
	int8_t x390 = -50;
	int16_t x391 = 3;
	static volatile int8_t x392 = 1;
	int32_t t10 = -392;

	t10 = (((x389/x390)<=x391)<<x392);

	if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x405 = INT8_MIN;
	uint32_t x406 = 1669544U;

	t11 = (((x405/x406)<=x407)<<x408);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x434 = -7381965;
	int16_t x435 = INT16_MIN;
	uint8_t x436 = 1U;

	t12 = (((x433/x434)<=x435)<<x436);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x493 = UINT16_MAX;
	static int32_t x494 = -6;
	int32_t x495 = -83727003;

	t13 = (((x493/x494)<=x495)<<x496);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x497 = 213910606U;
	uint32_t x498 = 31U;
	uint16_t x500 = 0U;
	int32_t t14 = -15765493;

	t14 = (((x497/x498)<=x499)<<x500);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x505 = INT32_MIN;
	int64_t x506 = INT64_MAX;
	int32_t t15 = 60868;

	t15 = (((x505/x506)<=x507)<<x508);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x554 = UINT16_MAX;
	static int32_t x555 = INT32_MAX;
	static volatile uint16_t x556 = 11U;
	volatile int32_t t16 = -90762;

	t16 = (((x553/x554)<=x555)<<x556);

	if (t16 != 2048) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x557 = 2398;
	int32_t x558 = INT32_MAX;
	static uint32_t x559 = UINT32_MAX;
	volatile int32_t t17 = -5;

	t17 = (((x557/x558)<=x559)<<x560);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x570 = INT64_MIN;
	int16_t x571 = INT16_MIN;
	int8_t x572 = 1;
	int32_t t18 = -55811805;

	t18 = (((x569/x570)<=x571)<<x572);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x605 = -49;
	volatile uint32_t x607 = 1485116669U;
	uint8_t x608 = 10U;
	volatile int32_t t19 = 1;

	t19 = (((x605/x606)<=x607)<<x608);

	if (t19 != 1024) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x641 = 0;
	int8_t x644 = 1;
	volatile int32_t t20 = 123694960;

	t20 = (((x641/x642)<=x643)<<x644);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x681 = INT64_MAX;
	volatile int16_t x682 = INT16_MIN;
	uint32_t x683 = 1U;
	uint8_t x684 = 9U;
	int32_t t21 = 55422247;

	t21 = (((x681/x682)<=x683)<<x684);

	if (t21 != 512) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x701 = INT64_MIN;
	int8_t x702 = INT8_MIN;
	static uint32_t x703 = 6U;

	t22 = (((x701/x702)<=x703)<<x704);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x745 = INT64_MIN;
	volatile int16_t x746 = INT16_MIN;
	static uint8_t x747 = 0U;
	uint32_t x748 = 0U;
	int32_t t23 = 16257258;

	t23 = (((x745/x746)<=x747)<<x748);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x841 = -1;
	uint32_t x843 = 191U;
	uint32_t x844 = 5U;
	int32_t t24 = -12;

	t24 = (((x841/x842)<=x843)<<x844);

	if (t24 != 32) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x873 = UINT8_MAX;
	volatile uint8_t x876 = 12U;
	int32_t t25 = -212;

	t25 = (((x873/x874)<=x875)<<x876);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x909 = INT32_MIN;
	int8_t x910 = INT8_MAX;
	int16_t x911 = INT16_MIN;
	uint8_t x912 = 0U;
	volatile int32_t t26 = 20934179;

	t26 = (((x909/x910)<=x911)<<x912);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x925 = 46907228LLU;
	volatile uint8_t x926 = 91U;
	uint32_t x927 = UINT32_MAX;
	static uint8_t x928 = 5U;
	int32_t t27 = -55;

	t27 = (((x925/x926)<=x927)<<x928);

	if (t27 != 32) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x986 = INT8_MIN;
	volatile int64_t x987 = INT64_MAX;
	int32_t x988 = 1;
	int32_t t28 = -1240;

	t28 = (((x985/x986)<=x987)<<x988);

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1037 = INT16_MAX;
	int64_t x1038 = 606888LL;
	int32_t x1039 = -10168416;
	static int8_t x1040 = 9;
	int32_t t29 = 1542698;

	t29 = (((x1037/x1038)<=x1039)<<x1040);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x1069 = 0;
	volatile int32_t x1070 = INT32_MIN;
	int8_t x1071 = -1;
	uint8_t x1072 = 3U;
	int32_t t30 = -10353849;

	t30 = (((x1069/x1070)<=x1071)<<x1072);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x1081 = UINT16_MAX;
	int16_t x1082 = -1;
	int64_t x1083 = INT64_MAX;
	int32_t t31 = -112623;

	t31 = (((x1081/x1082)<=x1083)<<x1084);

	if (t31 != 1073741824) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1093 = INT8_MIN;
	uint8_t x1094 = UINT8_MAX;
	int16_t x1096 = 30;
	static int32_t t32 = 145474134;

	t32 = (((x1093/x1094)<=x1095)<<x1096);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1113 = -1;
	int32_t x1114 = 1;
	static int64_t x1115 = INT64_MIN;
	uint8_t x1116 = 3U;
	int32_t t33 = -5;

	t33 = (((x1113/x1114)<=x1115)<<x1116);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1142 = -41;
	int16_t x1143 = INT16_MAX;
	int8_t x1144 = 0;

	t34 = (((x1141/x1142)<=x1143)<<x1144);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x1177 = INT16_MIN;
	volatile int32_t t35 = 0;

	t35 = (((x1177/x1178)<=x1179)<<x1180);

	if (t35 != 8192) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1225 = INT64_MIN;
	int8_t x1226 = INT8_MAX;
	volatile uint16_t x1227 = UINT16_MAX;
	uint64_t x1228 = 28LLU;
	static int32_t t36 = -424;

	t36 = (((x1225/x1226)<=x1227)<<x1228);

	if (t36 != 268435456) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x1269 = 710666067451LLU;
	int8_t x1271 = -1;
	uint8_t x1272 = 6U;
	static volatile int32_t t37 = 1;

	t37 = (((x1269/x1270)<=x1271)<<x1272);

	if (t37 != 64) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1349 = UINT16_MAX;
	int64_t x1350 = INT64_MIN;
	uint16_t x1351 = 4U;
	uint8_t x1352 = 7U;
	volatile int32_t t38 = -504;

	t38 = (((x1349/x1350)<=x1351)<<x1352);

	if (t38 != 128) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x1381 = INT64_MAX;
	int8_t x1383 = INT8_MAX;
	static uint32_t x1384 = 2U;
	int32_t t39 = 1;

	t39 = (((x1381/x1382)<=x1383)<<x1384);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1409 = 2894077LL;
	static uint16_t x1410 = 531U;
	static volatile int8_t x1412 = 1;
	static int32_t t40 = -380;

	t40 = (((x1409/x1410)<=x1411)<<x1412);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x1449 = 646521U;
	int16_t x1450 = INT16_MAX;
	int16_t x1451 = 27;
	uint16_t x1452 = 13U;

	t41 = (((x1449/x1450)<=x1451)<<x1452);

	if (t41 != 8192) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1489 = INT64_MIN;
	static int16_t x1490 = INT16_MAX;
	static int32_t x1491 = INT32_MIN;
	volatile int32_t t42 = -5;

	t42 = (((x1489/x1490)<=x1491)<<x1492);

	if (t42 != 268435456) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1545 = 12U;
	int16_t x1546 = -7413;
	int8_t x1548 = 0;
	int32_t t43 = 24158874;

	t43 = (((x1545/x1546)<=x1547)<<x1548);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1553 = INT32_MIN;
	int8_t x1554 = INT8_MAX;
	static uint64_t x1556 = 13LLU;
	volatile int32_t t44 = 6751802;

	t44 = (((x1553/x1554)<=x1555)<<x1556);

	if (t44 != 8192) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x1558 = UINT32_MAX;
	static int64_t x1559 = INT64_MAX;
	static uint8_t x1560 = 2U;

	t45 = (((x1557/x1558)<=x1559)<<x1560);

	if (t45 != 4) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x1582 = -1;
	int32_t x1583 = -1;
	int16_t x1584 = 7;
	int32_t t46 = -898879305;

	t46 = (((x1581/x1582)<=x1583)<<x1584);

	if (t46 != 128) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x1605 = 131104576LLU;
	static int16_t x1606 = INT16_MIN;
	int8_t x1608 = 2;

	t47 = (((x1605/x1606)<=x1607)<<x1608);

	if (t47 != 4) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1633 = INT64_MIN;
	int32_t x1634 = INT32_MAX;
	static volatile int16_t x1635 = INT16_MAX;
	int32_t t48 = -83;

	t48 = (((x1633/x1634)<=x1635)<<x1636);

	if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1685 = INT64_MIN;
	static int8_t x1686 = -43;
	static volatile uint64_t x1687 = UINT64_MAX;
	int32_t x1688 = 18;

	t49 = (((x1685/x1686)<=x1687)<<x1688);

	if (t49 != 262144) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x1705 = 1;
	static int16_t x1708 = 0;

	t50 = (((x1705/x1706)<=x1707)<<x1708);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1729 = INT8_MIN;
	volatile uint8_t x1730 = UINT8_MAX;
	static int32_t x1731 = 1;
	static volatile int8_t x1732 = 5;
	volatile int32_t t51 = -8148;

	t51 = (((x1729/x1730)<=x1731)<<x1732);

	if (t51 != 32) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x1757 = INT32_MIN;
	int64_t x1758 = INT64_MIN;
	volatile uint8_t x1760 = 5U;
	int32_t t52 = 1;

	t52 = (((x1757/x1758)<=x1759)<<x1760);

	if (t52 != 32) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x1773 = -1;
	int8_t x1775 = INT8_MAX;
	static uint8_t x1776 = 4U;
	static volatile int32_t t53 = -12568;

	t53 = (((x1773/x1774)<=x1775)<<x1776);

	if (t53 != 16) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x1781 = -441;
	static uint64_t x1783 = 20LLU;
	uint8_t x1784 = 4U;
	volatile int32_t t54 = -3;

	t54 = (((x1781/x1782)<=x1783)<<x1784);

	if (t54 != 16) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x1809 = 118830614970LL;
	volatile int32_t x1810 = INT32_MIN;
	static int8_t x1811 = -1;
	int8_t x1812 = 7;
	int32_t t55 = -12095147;

	t55 = (((x1809/x1810)<=x1811)<<x1812);

	if (t55 != 128) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x1829 = INT32_MIN;
	uint8_t x1830 = UINT8_MAX;
	int16_t x1831 = 0;
	uint8_t x1832 = 1U;
	int32_t t56 = -1763270;

	t56 = (((x1829/x1830)<=x1831)<<x1832);

	if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x1838 = UINT64_MAX;
	int8_t x1839 = -38;
	int32_t x1840 = 3;
	int32_t t57 = 125872;

	t57 = (((x1837/x1838)<=x1839)<<x1840);

	if (t57 != 8) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x1869 = -861;
	static int8_t x1870 = 13;
	static int32_t x1871 = 744;
	volatile int32_t t58 = 191961;

	t58 = (((x1869/x1870)<=x1871)<<x1872);

	if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x1881 = -15619;
	int16_t x1882 = -1;
	int32_t x1883 = 216;
	int16_t x1884 = 4;
	volatile int32_t t59 = -1083;

	t59 = (((x1881/x1882)<=x1883)<<x1884);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x1898 = INT32_MIN;
	volatile int64_t x1899 = INT64_MIN;
	static volatile uint8_t x1900 = 0U;
	int32_t t60 = 938152;

	t60 = (((x1897/x1898)<=x1899)<<x1900);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x1973 = -199871;
	int16_t x1974 = -1740;
	static uint16_t x1975 = 131U;
	int16_t x1976 = 14;

	t61 = (((x1973/x1974)<=x1975)<<x1976);

	if (t61 != 16384) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x2113 = INT16_MAX;
	static uint32_t x2114 = 515274291U;
	static volatile uint16_t x2116 = 1U;
	volatile int32_t t62 = -1327;

	t62 = (((x2113/x2114)<=x2115)<<x2116);

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x2125 = 503380LL;
	uint64_t x2126 = 3LLU;
	static volatile uint16_t x2128 = 14U;
	volatile int32_t t63 = 7;

	t63 = (((x2125/x2126)<=x2127)<<x2128);

	if (t63 != 16384) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x2145 = INT8_MAX;
	static int64_t x2146 = INT64_MIN;
	uint64_t x2147 = 17LLU;
	uint8_t x2148 = 0U;

	t64 = (((x2145/x2146)<=x2147)<<x2148);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x2174 = -1066LL;
	volatile int8_t x2175 = INT8_MAX;
	uint8_t x2176 = 1U;

	t65 = (((x2173/x2174)<=x2175)<<x2176);

	if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x2189 = 7U;
	uint16_t x2190 = UINT16_MAX;
	volatile int8_t x2191 = -1;
	uint8_t x2192 = 0U;
	volatile int32_t t66 = 12442;

	t66 = (((x2189/x2190)<=x2191)<<x2192);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x2217 = 2205961025775233438LLU;
	int8_t x2218 = -1;
	int8_t x2219 = 0;
	int16_t x2220 = 2;
	volatile int32_t t67 = -1;

	t67 = (((x2217/x2218)<=x2219)<<x2220);

	if (t67 != 4) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2257 = INT8_MAX;
	int16_t x2259 = INT16_MIN;
	static uint64_t x2260 = 5LLU;
	volatile int32_t t68 = 0;

	t68 = (((x2257/x2258)<=x2259)<<x2260);

	if (t68 != 32) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x2265 = UINT64_MAX;
	int8_t x2267 = 3;
	volatile uint32_t x2268 = 3U;

	t69 = (((x2265/x2266)<=x2267)<<x2268);

	if (t69 != 8) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x2321 = 603557082;
	static uint64_t x2322 = 3974735964871012LLU;
	uint32_t x2323 = UINT32_MAX;
	int8_t x2324 = 7;
	volatile int32_t t70 = -8137700;

	t70 = (((x2321/x2322)<=x2323)<<x2324);

	if (t70 != 128) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x2377 = 22485U;
	uint64_t x2378 = 957812697384821LLU;
	int8_t x2379 = INT8_MIN;
	volatile int16_t x2380 = 12;

	t71 = (((x2377/x2378)<=x2379)<<x2380);

	if (t71 != 4096) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x2382 = UINT32_MAX;
	static int8_t x2383 = -1;
	int32_t x2384 = 11;
	int32_t t72 = -13707013;

	t72 = (((x2381/x2382)<=x2383)<<x2384);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x2393 = INT32_MIN;
	uint32_t x2394 = 12083237U;
	volatile uint8_t x2395 = UINT8_MAX;
	volatile int16_t x2396 = 0;
	int32_t t73 = -188677;

	t73 = (((x2393/x2394)<=x2395)<<x2396);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x2409 = INT8_MIN;
	int64_t x2410 = -7659698LL;
	volatile int8_t x2411 = INT8_MAX;
	uint8_t x2412 = 3U;
	static int32_t t74 = 605384;

	t74 = (((x2409/x2410)<=x2411)<<x2412);

	if (t74 != 8) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x2429 = -1LL;
	uint8_t x2430 = UINT8_MAX;
	uint8_t x2432 = 9U;
	int32_t t75 = -124968053;

	t75 = (((x2429/x2430)<=x2431)<<x2432);

	if (t75 != 512) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x2457 = 7U;
	uint64_t x2458 = 6696592644140335LLU;
	static uint8_t x2459 = 26U;
	uint8_t x2460 = 29U;
	volatile int32_t t76 = -321345626;

	t76 = (((x2457/x2458)<=x2459)<<x2460);

	if (t76 != 536870912) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x2477 = INT64_MIN;
	int16_t x2479 = INT16_MIN;
	uint8_t x2480 = 22U;
	int32_t t77 = -1;

	t77 = (((x2477/x2478)<=x2479)<<x2480);

	if (t77 != 4194304) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2514 = INT16_MAX;
	volatile int32_t x2515 = 45;
	volatile int32_t t78 = 24;

	t78 = (((x2513/x2514)<=x2515)<<x2516);

	if (t78 != 4) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x2545 = 857435U;
	int64_t x2547 = INT64_MAX;

	t79 = (((x2545/x2546)<=x2547)<<x2548);

	if (t79 != 32) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x2581 = 172U;
	volatile int32_t x2582 = INT32_MAX;
	static int64_t x2583 = 3LL;
	uint16_t x2584 = 9U;
	volatile int32_t t80 = -6;

	t80 = (((x2581/x2582)<=x2583)<<x2584);

	if (t80 != 512) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x2669 = 6066U;
	uint32_t x2670 = UINT32_MAX;
	uint16_t x2671 = UINT16_MAX;
	volatile int32_t t81 = 0;

	t81 = (((x2669/x2670)<=x2671)<<x2672);

	if (t81 != 4) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x2705 = -2;
	int32_t x2706 = -11017881;
	volatile int64_t x2708 = 0LL;

	t82 = (((x2705/x2706)<=x2707)<<x2708);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x2734 = INT16_MAX;
	uint8_t x2736 = 2U;

	t83 = (((x2733/x2734)<=x2735)<<x2736);

	if (t83 != 4) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x2747 = -1;
	uint64_t x2748 = 15LLU;
	int32_t t84 = 130;

	t84 = (((x2745/x2746)<=x2747)<<x2748);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x2749 = 91U;
	int32_t x2751 = INT32_MAX;
	uint8_t x2752 = 2U;
	int32_t t85 = 9;

	t85 = (((x2749/x2750)<=x2751)<<x2752);

	if (t85 != 4) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x2781 = 387LL;
	volatile int64_t x2782 = 6626616470379300LL;
	static int8_t x2783 = -1;
	static uint8_t x2784 = 5U;

	t86 = (((x2781/x2782)<=x2783)<<x2784);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x2786 = 3;
	uint16_t x2787 = 1U;
	volatile int8_t x2788 = 20;

	t87 = (((x2785/x2786)<=x2787)<<x2788);

	if (t87 != 1048576) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x2805 = -1;
	uint64_t x2807 = 45LLU;
	static volatile int32_t t88 = 51466472;

	t88 = (((x2805/x2806)<=x2807)<<x2808);

	if (t88 != 8192) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x2819 = INT64_MIN;
	int32_t t89 = -106343;

	t89 = (((x2817/x2818)<=x2819)<<x2820);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x2845 = INT16_MIN;
	uint16_t x2846 = 227U;
	uint16_t x2847 = 464U;
	volatile uint64_t x2848 = 17LLU;
	volatile int32_t t90 = 0;

	t90 = (((x2845/x2846)<=x2847)<<x2848);

	if (t90 != 131072) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x2917 = 5477U;
	volatile int32_t x2918 = -1;
	int8_t x2920 = 1;
	int32_t t91 = -8504;

	t91 = (((x2917/x2918)<=x2919)<<x2920);

	if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x2977 = 275593865064LLU;
	int32_t x2978 = -1;
	static int64_t x2979 = INT64_MIN;
	volatile int8_t x2980 = 27;
	int32_t t92 = -16602205;

	t92 = (((x2977/x2978)<=x2979)<<x2980);

	if (t92 != 134217728) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x3030 = 717U;
	uint32_t x3032 = 3U;
	static int32_t t93 = -44923802;

	t93 = (((x3029/x3030)<=x3031)<<x3032);

	if (t93 != 8) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x3041 = INT16_MIN;
	static volatile int32_t x3042 = -14893204;
	int16_t x3043 = -6;
	uint8_t x3044 = 0U;
	static volatile int32_t t94 = -94619;

	t94 = (((x3041/x3042)<=x3043)<<x3044);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x3073 = INT8_MAX;
	uint32_t x3074 = 690387U;
	int64_t x3075 = INT64_MIN;
	uint32_t x3076 = 4U;
	int32_t t95 = 115748;

	t95 = (((x3073/x3074)<=x3075)<<x3076);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x3077 = INT8_MAX;
	int64_t x3078 = -1LL;
	uint16_t x3079 = 0U;
	volatile int64_t x3080 = 16LL;
	static int32_t t96 = 20;

	t96 = (((x3077/x3078)<=x3079)<<x3080);

	if (t96 != 65536) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x3081 = INT16_MAX;
	uint32_t x3082 = 7U;
	uint16_t x3083 = 8039U;
	static uint16_t x3084 = 13U;
	volatile int32_t t97 = 15;

	t97 = (((x3081/x3082)<=x3083)<<x3084);

	if (t97 != 8192) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x3113 = 6U;
	int32_t t98 = 2800273;

	t98 = (((x3113/x3114)<=x3115)<<x3116);

	if (t98 != 16) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x3129 = INT64_MIN;
	int32_t x3130 = INT32_MIN;
	static int32_t x3131 = INT32_MAX;
	uint8_t x3132 = 0U;

	t99 = (((x3129/x3130)<=x3131)<<x3132);

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

