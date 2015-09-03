#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x30 = 6333U;
static int64_t x31 = -1LL;
static int64_t x123 = INT64_MIN;
uint16_t x124 = 0U;
static volatile uint32_t x163 = 154951317U;
static int8_t x164 = 2;
static int32_t t3 = -113628;
int8_t x165 = INT8_MIN;
static uint8_t x200 = 24U;
uint8_t x297 = 1U;
volatile int32_t t8 = -126017044;
int32_t x309 = -1;
int32_t x310 = -1;
uint32_t x316 = 19U;
uint64_t x496 = 3LLU;
volatile uint32_t x601 = 193731226U;
int64_t x649 = -4786615269LL;
volatile int32_t t15 = -3821;
volatile int64_t x719 = INT64_MAX;
int8_t x817 = 0;
uint16_t x819 = UINT16_MAX;
static uint16_t x820 = 5U;
uint8_t x851 = 12U;
static int32_t x915 = -29726;
static uint32_t x943 = 414U;
static uint8_t x973 = UINT8_MAX;
uint64_t x1035 = 993656LLU;
static volatile int8_t x1068 = 4;
volatile int32_t t28 = -245093;
static int16_t x1129 = -1;
int8_t x1168 = 0;
int64_t x1173 = -1LL;
static uint8_t x1176 = 2U;
int32_t t32 = -299;
int16_t x1178 = 1309;
int8_t x1180 = 11;
uint64_t x1289 = 1835821LLU;
volatile int8_t x1290 = -1;
static int64_t x1329 = -47LL;
uint16_t x1330 = UINT16_MAX;
static int32_t t36 = -811976;
int16_t x1358 = INT16_MAX;
static int16_t x1360 = 9;
int32_t x1375 = 21;
uint8_t x1376 = 3U;
static int32_t t38 = -399;
static int16_t x1436 = 5;
volatile int64_t x1470 = INT64_MIN;
static int16_t x1472 = 5;
int32_t t43 = 5064835;
static uint32_t x1561 = UINT32_MAX;
volatile int32_t t45 = 1;
static int64_t x1666 = -1LL;
static volatile uint32_t x1701 = 669153228U;
int16_t x1715 = INT16_MIN;
volatile uint32_t x1741 = 66U;
int32_t x1743 = -5;
static int16_t x1744 = 2;
volatile int32_t t51 = -13;
static volatile int8_t x1889 = -1;
volatile int16_t x1948 = 12;
static int8_t x2003 = INT8_MIN;
volatile int32_t t55 = 88;
int16_t x2006 = -1;
uint32_t x2007 = 2U;
uint64_t x2086 = UINT64_MAX;
int32_t t57 = -138;
int64_t x2129 = -3854879974919LL;
uint64_t x2131 = 9194300LLU;
uint64_t x2144 = 9LLU;
uint32_t x2225 = UINT32_MAX;
static int8_t x2263 = INT8_MIN;
volatile int32_t t62 = -231;
volatile int32_t t65 = 905028634;
volatile int32_t t67 = 64373546;
int32_t x2478 = -2;
volatile uint64_t x2480 = 5LLU;
uint8_t x2484 = 1U;
uint8_t x2551 = 6U;
uint16_t x2552 = 20U;
int64_t x2581 = 1859175270853421865LL;
uint16_t x2965 = 1U;
static uint64_t x2967 = UINT64_MAX;
int32_t t77 = 6020;
volatile int32_t t78 = -10673;
static int8_t x3099 = 10;
int32_t x3254 = 465;
int32_t x3255 = -1;
int8_t x3286 = INT8_MIN;
int64_t x3311 = INT64_MIN;
volatile int64_t x3314 = INT64_MIN;
volatile int32_t x3351 = INT32_MIN;
static int32_t t86 = -12;
int32_t x3365 = -1;
int16_t x3367 = INT16_MIN;
static uint8_t x3380 = 31U;
volatile int8_t x3403 = 1;
int32_t x3474 = -222216172;
static uint8_t x3476 = 1U;
int16_t x3517 = 76;
uint16_t x3530 = 17496U;
uint64_t x3532 = 13LLU;
int8_t x3549 = INT8_MIN;
static uint32_t x3631 = UINT32_MAX;
int32_t t96 = -1642;
volatile int32_t t97 = 5772;
static uint64_t x3749 = 15954LLU;
uint32_t x3750 = 4060U;
static int32_t x3751 = INT32_MAX;
volatile uint32_t x3752 = 1U;
int32_t t98 = -12076;
static uint16_t x3812 = 1U;


void f0(void) {
	static uint32_t x29 = 105192U;
	uint8_t x32 = 0U;
	volatile int32_t t0 = 12898;

	t0 = (((x29-x30)<=x31)<<x32);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x121 = 138LLU;
	int16_t x122 = 12;
	volatile int32_t t1 = 230361219;

	t1 = (((x121-x122)<=x123)<<x124);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x145 = 3U;
	int32_t x146 = -1;
	volatile int8_t x147 = -26;
	static volatile uint16_t x148 = 2U;
	volatile int32_t t2 = 116856234;

	t2 = (((x145-x146)<=x147)<<x148);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x161 = 2U;
	static uint8_t x162 = UINT8_MAX;

	t3 = (((x161-x162)<=x163)<<x164);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x166 = -1;
	volatile int8_t x167 = INT8_MIN;
	uint16_t x168 = 16U;
	volatile int32_t t4 = -644367;

	t4 = (((x165-x166)<=x167)<<x168);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x173 = UINT8_MAX;
	uint16_t x174 = 2U;
	int16_t x175 = 1;
	static int16_t x176 = 7;
	volatile int32_t t5 = 7845379;

	t5 = (((x173-x174)<=x175)<<x176);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x185 = INT64_MIN;
	int64_t x186 = INT64_MIN;
	int64_t x187 = INT64_MIN;
	uint16_t x188 = 6U;
	volatile int32_t t6 = 28348;

	t6 = (((x185-x186)<=x187)<<x188);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x197 = 37U;
	int16_t x198 = 917;
	int16_t x199 = -1;
	volatile int32_t t7 = -97;

	t7 = (((x197-x198)<=x199)<<x200);

	if (t7 != 16777216) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x298 = -1;
	static uint64_t x299 = UINT64_MAX;
	volatile int16_t x300 = 2;

	t8 = (((x297-x298)<=x299)<<x300);

	if (t8 != 4) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x311 = INT32_MIN;
	static uint8_t x312 = 1U;
	int32_t t9 = -164253743;

	t9 = (((x309-x310)<=x311)<<x312);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x313 = INT64_MAX;
	uint16_t x314 = UINT16_MAX;
	volatile int32_t x315 = INT32_MAX;
	static volatile int32_t t10 = -9346339;

	t10 = (((x313-x314)<=x315)<<x316);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x321 = 57110330943426037LL;
	uint64_t x322 = 3720812805134748LLU;
	uint16_t x323 = 3U;
	uint8_t x324 = 2U;
	int32_t t11 = 6785462;

	t11 = (((x321-x322)<=x323)<<x324);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x493 = 4U;
	uint64_t x494 = 2142370414969204795LLU;
	static uint8_t x495 = 4U;
	volatile int32_t t12 = 25;

	t12 = (((x493-x494)<=x495)<<x496);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x505 = 1346919854659LLU;
	static int16_t x506 = 0;
	volatile int64_t x507 = INT64_MIN;
	volatile uint16_t x508 = 4U;
	int32_t t13 = 8;

	t13 = (((x505-x506)<=x507)<<x508);

	if (t13 != 16) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x602 = UINT8_MAX;
	volatile uint16_t x603 = 957U;
	volatile uint16_t x604 = 7U;
	int32_t t14 = 6472096;

	t14 = (((x601-x602)<=x603)<<x604);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x650 = 0U;
	static int64_t x651 = INT64_MIN;
	uint8_t x652 = 3U;

	t15 = (((x649-x650)<=x651)<<x652);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x653 = -1;
	uint16_t x654 = 2939U;
	int32_t x655 = 529365808;
	static volatile uint16_t x656 = 2U;
	volatile int32_t t16 = -4;

	t16 = (((x653-x654)<=x655)<<x656);

	if (t16 != 4) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x717 = INT64_MIN;
	int8_t x718 = -1;
	static uint8_t x720 = 4U;
	int32_t t17 = 20315;

	t17 = (((x717-x718)<=x719)<<x720);

	if (t17 != 16) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x745 = UINT8_MAX;
	static volatile int8_t x746 = -2;
	int32_t x747 = -1;
	int8_t x748 = 3;
	volatile int32_t t18 = -3;

	t18 = (((x745-x746)<=x747)<<x748);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x818 = 33;
	int32_t t19 = -2715291;

	t19 = (((x817-x818)<=x819)<<x820);

	if (t19 != 32) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x849 = UINT64_MAX;
	volatile int32_t x850 = INT32_MIN;
	int16_t x852 = 21;
	volatile int32_t t20 = 12313;

	t20 = (((x849-x850)<=x851)<<x852);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x861 = UINT16_MAX;
	int16_t x862 = INT16_MIN;
	volatile int8_t x863 = -3;
	uint8_t x864 = 1U;
	volatile int32_t t21 = -1053702600;

	t21 = (((x861-x862)<=x863)<<x864);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x913 = 17U;
	static uint32_t x914 = 237637888U;
	int16_t x916 = 2;
	volatile int32_t t22 = -511;

	t22 = (((x913-x914)<=x915)<<x916);

	if (t22 != 4) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x937 = INT64_MIN;
	static uint16_t x938 = 0U;
	int64_t x939 = INT64_MIN;
	uint16_t x940 = 1U;
	volatile int32_t t23 = 128141;

	t23 = (((x937-x938)<=x939)<<x940);

	if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x941 = 72U;
	static int16_t x942 = INT16_MIN;
	uint8_t x944 = 31U;
	volatile int32_t t24 = 1016969;

	t24 = (((x941-x942)<=x943)<<x944);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x974 = -114;
	uint8_t x975 = 10U;
	int16_t x976 = 4;
	int32_t t25 = 60464;

	t25 = (((x973-x974)<=x975)<<x976);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x1021 = INT16_MIN;
	int64_t x1022 = -1LL;
	int16_t x1023 = INT16_MIN;
	int8_t x1024 = 0;
	volatile int32_t t26 = -845;

	t26 = (((x1021-x1022)<=x1023)<<x1024);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x1033 = 7U;
	int32_t x1034 = -1;
	static volatile uint8_t x1036 = 2U;
	volatile int32_t t27 = 109;

	t27 = (((x1033-x1034)<=x1035)<<x1036);

	if (t27 != 4) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1065 = -4257376797643827846LL;
	int8_t x1066 = -4;
	static uint64_t x1067 = UINT64_MAX;

	t28 = (((x1065-x1066)<=x1067)<<x1068);

	if (t28 != 16) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1097 = INT8_MIN;
	static uint64_t x1098 = UINT64_MAX;
	uint16_t x1099 = 14U;
	volatile int8_t x1100 = 1;
	int32_t t29 = -2569;

	t29 = (((x1097-x1098)<=x1099)<<x1100);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1130 = 28U;
	uint32_t x1131 = 3U;
	uint64_t x1132 = 0LLU;
	volatile int32_t t30 = 472386072;

	t30 = (((x1129-x1130)<=x1131)<<x1132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1165 = -1;
	volatile int8_t x1166 = INT8_MAX;
	static int64_t x1167 = -67904LL;
	int32_t t31 = -18121;

	t31 = (((x1165-x1166)<=x1167)<<x1168);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x1174 = 44;
	uint8_t x1175 = UINT8_MAX;

	t32 = (((x1173-x1174)<=x1175)<<x1176);

	if (t32 != 4) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1177 = UINT64_MAX;
	int64_t x1179 = 49LL;
	int32_t t33 = 1069608655;

	t33 = (((x1177-x1178)<=x1179)<<x1180);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x1201 = -1;
	int64_t x1202 = INT64_MAX;
	static volatile uint32_t x1203 = 153832324U;
	uint32_t x1204 = 1U;
	int32_t t34 = -11;

	t34 = (((x1201-x1202)<=x1203)<<x1204);

	if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1291 = -1;
	int16_t x1292 = 19;
	static int32_t t35 = -160201134;

	t35 = (((x1289-x1290)<=x1291)<<x1292);

	if (t35 != 524288) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1331 = -1;
	static int32_t x1332 = 1;

	t36 = (((x1329-x1330)<=x1331)<<x1332);

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x1357 = 0;
	uint64_t x1359 = UINT64_MAX;
	int32_t t37 = -165100;

	t37 = (((x1357-x1358)<=x1359)<<x1360);

	if (t37 != 512) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x1373 = 1642014LLU;
	int16_t x1374 = 140;

	t38 = (((x1373-x1374)<=x1375)<<x1376);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1433 = INT64_MIN;
	static uint64_t x1434 = 58280518994524LLU;
	uint64_t x1435 = UINT64_MAX;
	volatile int32_t t39 = -192;

	t39 = (((x1433-x1434)<=x1435)<<x1436);

	if (t39 != 32) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x1469 = INT32_MIN;
	static int32_t x1471 = -1;
	volatile int32_t t40 = 162;

	t40 = (((x1469-x1470)<=x1471)<<x1472);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1501 = 1U;
	int16_t x1502 = INT16_MIN;
	static int32_t x1503 = INT32_MAX;
	static uint8_t x1504 = 3U;
	volatile int32_t t41 = -167959164;

	t41 = (((x1501-x1502)<=x1503)<<x1504);

	if (t41 != 8) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x1513 = INT8_MIN;
	int8_t x1514 = INT8_MIN;
	uint8_t x1515 = 3U;
	uint8_t x1516 = 0U;
	volatile int32_t t42 = 53;

	t42 = (((x1513-x1514)<=x1515)<<x1516);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x1521 = INT16_MIN;
	int8_t x1522 = INT8_MIN;
	uint8_t x1523 = 15U;
	int32_t x1524 = 18;

	t43 = (((x1521-x1522)<=x1523)<<x1524);

	if (t43 != 262144) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1562 = 2;
	static int64_t x1563 = INT64_MAX;
	volatile int16_t x1564 = 10;
	volatile int32_t t44 = 26;

	t44 = (((x1561-x1562)<=x1563)<<x1564);

	if (t44 != 1024) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x1605 = -1LL;
	int64_t x1606 = -130579070537LL;
	int32_t x1607 = INT32_MIN;
	uint8_t x1608 = 6U;

	t45 = (((x1605-x1606)<=x1607)<<x1608);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1637 = 359;
	int32_t x1638 = INT32_MAX;
	volatile int64_t x1639 = -1LL;
	volatile uint8_t x1640 = 0U;
	volatile int32_t t46 = 3;

	t46 = (((x1637-x1638)<=x1639)<<x1640);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1665 = INT16_MAX;
	uint16_t x1667 = UINT16_MAX;
	uint16_t x1668 = 2U;
	volatile int32_t t47 = 0;

	t47 = (((x1665-x1666)<=x1667)<<x1668);

	if (t47 != 4) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1702 = INT32_MAX;
	static uint32_t x1703 = 5U;
	int8_t x1704 = 2;
	volatile int32_t t48 = 1;

	t48 = (((x1701-x1702)<=x1703)<<x1704);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1713 = -1LL;
	volatile uint16_t x1714 = 1U;
	uint16_t x1716 = 2U;
	volatile int32_t t49 = -190194851;

	t49 = (((x1713-x1714)<=x1715)<<x1716);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x1742 = 0U;
	volatile int32_t t50 = -45;

	t50 = (((x1741-x1742)<=x1743)<<x1744);

	if (t50 != 4) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1845 = INT8_MIN;
	static int32_t x1846 = INT32_MIN;
	uint64_t x1847 = UINT64_MAX;
	volatile uint8_t x1848 = 23U;

	t51 = (((x1845-x1846)<=x1847)<<x1848);

	if (t51 != 8388608) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1890 = -43;
	uint64_t x1891 = 77356LLU;
	static uint8_t x1892 = 3U;
	static int32_t t52 = -464509;

	t52 = (((x1889-x1890)<=x1891)<<x1892);

	if (t52 != 8) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x1945 = 53LLU;
	int32_t x1946 = 18718779;
	int32_t x1947 = INT32_MIN;
	static int32_t t53 = -15196;

	t53 = (((x1945-x1946)<=x1947)<<x1948);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x1961 = 13318775801625LL;
	int32_t x1962 = 110736129;
	volatile int8_t x1963 = INT8_MIN;
	uint16_t x1964 = 0U;
	static volatile int32_t t54 = -3;

	t54 = (((x1961-x1962)<=x1963)<<x1964);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x2001 = 1LL;
	volatile uint8_t x2002 = 0U;
	uint16_t x2004 = 0U;

	t55 = (((x2001-x2002)<=x2003)<<x2004);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x2005 = -5;
	volatile uint8_t x2008 = 0U;
	int32_t t56 = 65367;

	t56 = (((x2005-x2006)<=x2007)<<x2008);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint32_t x2085 = 59U;
	int8_t x2087 = -1;
	uint32_t x2088 = 21U;

	t57 = (((x2085-x2086)<=x2087)<<x2088);

	if (t57 != 2097152) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x2130 = INT32_MAX;
	int16_t x2132 = 6;
	int32_t t58 = 29884;

	t58 = (((x2129-x2130)<=x2131)<<x2132);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x2141 = 6;
	uint32_t x2142 = 3274U;
	uint8_t x2143 = UINT8_MAX;
	static volatile int32_t t59 = 1;

	t59 = (((x2141-x2142)<=x2143)<<x2144);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x2201 = INT16_MIN;
	int16_t x2202 = -1;
	int16_t x2203 = -1;
	static int16_t x2204 = 1;
	int32_t t60 = -4058777;

	t60 = (((x2201-x2202)<=x2203)<<x2204);

	if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2226 = 0;
	volatile int8_t x2227 = -1;
	int8_t x2228 = 1;
	int32_t t61 = 9;

	t61 = (((x2225-x2226)<=x2227)<<x2228);

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x2261 = 21;
	volatile int32_t x2262 = INT32_MAX;
	static volatile int8_t x2264 = 10;

	t62 = (((x2261-x2262)<=x2263)<<x2264);

	if (t62 != 1024) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x2317 = INT32_MIN;
	volatile uint32_t x2318 = 0U;
	int16_t x2319 = 223;
	uint64_t x2320 = 1LLU;
	static volatile int32_t t63 = -2664662;

	t63 = (((x2317-x2318)<=x2319)<<x2320);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x2345 = 0U;
	int16_t x2346 = -1092;
	int32_t x2347 = 19443925;
	uint8_t x2348 = 7U;
	int32_t t64 = -127369686;

	t64 = (((x2345-x2346)<=x2347)<<x2348);

	if (t64 != 128) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x2413 = INT16_MIN;
	uint8_t x2414 = UINT8_MAX;
	int32_t x2415 = INT32_MIN;
	static uint8_t x2416 = 9U;

	t65 = (((x2413-x2414)<=x2415)<<x2416);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x2425 = UINT8_MAX;
	int16_t x2426 = INT16_MAX;
	int8_t x2427 = -1;
	int32_t x2428 = 1;
	volatile int32_t t66 = 388638345;

	t66 = (((x2425-x2426)<=x2427)<<x2428);

	if (t66 != 2) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x2469 = UINT64_MAX;
	static volatile int16_t x2470 = INT16_MAX;
	uint8_t x2471 = 48U;
	static int32_t x2472 = 18;

	t67 = (((x2469-x2470)<=x2471)<<x2472);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x2477 = -1LL;
	uint16_t x2479 = 98U;
	static volatile int32_t t68 = 26;

	t68 = (((x2477-x2478)<=x2479)<<x2480);

	if (t68 != 32) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2481 = -1;
	volatile uint16_t x2482 = UINT16_MAX;
	int16_t x2483 = 0;
	volatile int32_t t69 = 1911756;

	t69 = (((x2481-x2482)<=x2483)<<x2484);

	if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x2549 = 1229;
	int8_t x2550 = INT8_MAX;
	int32_t t70 = 71479970;

	t70 = (((x2549-x2550)<=x2551)<<x2552);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x2565 = 3683706LLU;
	int16_t x2566 = 102;
	volatile int8_t x2567 = INT8_MAX;
	volatile uint8_t x2568 = 1U;
	volatile int32_t t71 = -8;

	t71 = (((x2565-x2566)<=x2567)<<x2568);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x2582 = INT32_MIN;
	volatile int16_t x2583 = INT16_MAX;
	uint16_t x2584 = 7U;
	static volatile int32_t t72 = -11301;

	t72 = (((x2581-x2582)<=x2583)<<x2584);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x2709 = UINT32_MAX;
	uint16_t x2710 = UINT16_MAX;
	int64_t x2711 = -1LL;
	static uint8_t x2712 = 21U;
	static int32_t t73 = 265;

	t73 = (((x2709-x2710)<=x2711)<<x2712);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x2781 = 24U;
	static volatile int32_t x2782 = -1;
	int8_t x2783 = 5;
	int8_t x2784 = 10;
	volatile int32_t t74 = -12;

	t74 = (((x2781-x2782)<=x2783)<<x2784);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x2949 = -43480139;
	static int8_t x2950 = -1;
	int64_t x2951 = -1LL;
	uint16_t x2952 = 0U;
	volatile int32_t t75 = -4093;

	t75 = (((x2949-x2950)<=x2951)<<x2952);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x2966 = 11252U;
	uint8_t x2968 = 5U;
	volatile int32_t t76 = 59530;

	t76 = (((x2965-x2966)<=x2967)<<x2968);

	if (t76 != 32) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x2985 = -1;
	int16_t x2986 = INT16_MIN;
	int32_t x2987 = INT32_MAX;
	volatile uint8_t x2988 = 6U;

	t77 = (((x2985-x2986)<=x2987)<<x2988);

	if (t77 != 64) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x3005 = 8U;
	uint64_t x3006 = 159436688863LLU;
	uint8_t x3007 = 37U;
	uint8_t x3008 = 6U;

	t78 = (((x3005-x3006)<=x3007)<<x3008);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x3021 = -1;
	volatile int8_t x3022 = 13;
	int32_t x3023 = -1;
	int8_t x3024 = 1;
	int32_t t79 = 92609564;

	t79 = (((x3021-x3022)<=x3023)<<x3024);

	if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x3029 = 1;
	int8_t x3030 = 0;
	int8_t x3031 = INT8_MIN;
	int8_t x3032 = 0;
	volatile int32_t t80 = 5;

	t80 = (((x3029-x3030)<=x3031)<<x3032);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x3097 = -28;
	volatile int64_t x3098 = 16061LL;
	volatile uint8_t x3100 = 1U;
	volatile int32_t t81 = -997322;

	t81 = (((x3097-x3098)<=x3099)<<x3100);

	if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x3253 = -1;
	uint16_t x3256 = 3U;
	static volatile int32_t t82 = 32;

	t82 = (((x3253-x3254)<=x3255)<<x3256);

	if (t82 != 8) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x3285 = INT8_MAX;
	uint8_t x3287 = UINT8_MAX;
	int8_t x3288 = 9;
	volatile int32_t t83 = -976690708;

	t83 = (((x3285-x3286)<=x3287)<<x3288);

	if (t83 != 512) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x3309 = UINT16_MAX;
	int16_t x3310 = -12012;
	volatile int16_t x3312 = 0;
	int32_t t84 = 0;

	t84 = (((x3309-x3310)<=x3311)<<x3312);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x3313 = UINT64_MAX;
	int16_t x3315 = INT16_MAX;
	uint8_t x3316 = 17U;
	volatile int32_t t85 = -450551370;

	t85 = (((x3313-x3314)<=x3315)<<x3316);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x3349 = UINT64_MAX;
	volatile uint64_t x3350 = 1472LLU;
	uint8_t x3352 = 1U;

	t86 = (((x3349-x3350)<=x3351)<<x3352);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x3366 = 104461U;
	uint32_t x3368 = 13U;
	volatile int32_t t87 = -24265881;

	t87 = (((x3365-x3366)<=x3367)<<x3368);

	if (t87 != 8192) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x3377 = INT8_MAX;
	volatile uint32_t x3378 = 669358U;
	static int64_t x3379 = INT64_MIN;
	volatile int32_t t88 = -1059480;

	t88 = (((x3377-x3378)<=x3379)<<x3380);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x3401 = 6221LL;
	int8_t x3402 = INT8_MIN;
	int8_t x3404 = 7;
	int32_t t89 = -211493154;

	t89 = (((x3401-x3402)<=x3403)<<x3404);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x3473 = INT64_MIN;
	volatile int8_t x3475 = INT8_MAX;
	int32_t t90 = -55396;

	t90 = (((x3473-x3474)<=x3475)<<x3476);

	if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x3509 = INT16_MIN;
	static int64_t x3510 = -1LL;
	uint64_t x3511 = UINT64_MAX;
	static volatile uint8_t x3512 = 1U;
	volatile int32_t t91 = 583860;

	t91 = (((x3509-x3510)<=x3511)<<x3512);

	if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x3518 = 21;
	int16_t x3519 = INT16_MAX;
	volatile uint32_t x3520 = 1U;
	int32_t t92 = -12248385;

	t92 = (((x3517-x3518)<=x3519)<<x3520);

	if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x3529 = INT32_MAX;
	int32_t x3531 = INT32_MAX;
	static volatile int32_t t93 = -6452;

	t93 = (((x3529-x3530)<=x3531)<<x3532);

	if (t93 != 8192) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint8_t x3550 = UINT8_MAX;
	volatile int64_t x3551 = INT64_MIN;
	int16_t x3552 = 0;
	volatile int32_t t94 = 1;

	t94 = (((x3549-x3550)<=x3551)<<x3552);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x3629 = INT8_MIN;
	volatile uint32_t x3630 = 40506843U;
	int8_t x3632 = 6;
	int32_t t95 = -821794;

	t95 = (((x3629-x3630)<=x3631)<<x3632);

	if (t95 != 64) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x3673 = INT16_MIN;
	uint16_t x3674 = UINT16_MAX;
	uint8_t x3675 = 0U;
	volatile uint8_t x3676 = 0U;

	t96 = (((x3673-x3674)<=x3675)<<x3676);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x3737 = 44389722429LLU;
	volatile int16_t x3738 = -1;
	int16_t x3739 = -1;
	volatile int8_t x3740 = 2;

	t97 = (((x3737-x3738)<=x3739)<<x3740);

	if (t97 != 4) { NG(); } else { ; }
	
}

void f98(void) {


	t98 = (((x3749-x3750)<=x3751)<<x3752);

	if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x3809 = INT32_MAX;
	int8_t x3810 = 53;
	volatile int16_t x3811 = -2;
	static int32_t t99 = -28496;

	t99 = (((x3809-x3810)<=x3811)<<x3812);

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

