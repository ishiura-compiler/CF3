#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x42 = INT8_MIN;
static int32_t x44 = 3;
uint64_t x85 = 14942138LLU;
int64_t x207 = INT64_MIN;
uint8_t x208 = 1U;
uint32_t x283 = 75696660U;
int64_t x287 = INT64_MIN;
int16_t x309 = -119;
uint32_t x311 = 6053047U;
volatile int32_t t7 = 113896;
volatile int64_t x338 = 53137458843568LL;
int16_t x598 = -1;
uint8_t x600 = 30U;
static volatile int64_t x619 = 0LL;
volatile uint8_t x647 = 1U;
uint32_t x648 = 3U;
volatile int8_t x785 = 11;
int32_t t14 = -84589;
static int32_t x799 = -1;
volatile int32_t t16 = 76832;
uint64_t x846 = UINT64_MAX;
int16_t x860 = 0;
static int16_t x918 = -221;
int32_t x977 = -1;
int32_t x979 = INT32_MIN;
uint16_t x993 = 3810U;
static int32_t x994 = INT32_MIN;
int16_t x996 = 2;
static uint8_t x1104 = 9U;
int8_t x1113 = -1;
volatile int32_t t23 = 6110;
static uint32_t x1127 = 371154U;
volatile uint16_t x1180 = 4U;
volatile uint8_t x1204 = 28U;
static uint16_t x1214 = UINT16_MAX;
int64_t x1233 = INT64_MIN;
int64_t x1234 = INT64_MIN;
int8_t x1325 = -1;
static volatile int8_t x1328 = 7;
uint64_t x1330 = 210003103LLU;
int8_t x1366 = -1;
uint64_t x1403 = 78888LLU;
int32_t t38 = -6048;
int64_t x1407 = -890471767116LL;
int8_t x1483 = 1;
int32_t t43 = -4;
volatile uint16_t x1565 = 30U;
int64_t x1595 = INT64_MAX;
int32_t t46 = 21573289;
int8_t x1658 = -63;
int8_t x1660 = 22;
volatile int32_t t49 = 1414416;
int32_t x1681 = -188270;
volatile int16_t x1684 = 2;
static int8_t x1705 = -31;
volatile int32_t t52 = 172;
int64_t x1733 = -1LL;
static int8_t x1736 = 0;
volatile int16_t x1773 = INT16_MIN;
static volatile uint8_t x1776 = 31U;
uint8_t x1811 = UINT8_MAX;
int16_t x1812 = 7;
volatile int32_t t57 = 247;
static int8_t x1980 = 6;
volatile int32_t t58 = 145168;
volatile int64_t x2079 = -402306LL;
int16_t x2092 = 1;
static int32_t x2099 = INT32_MIN;
volatile int16_t x2100 = 17;
static int32_t x2197 = INT32_MIN;
static int8_t x2198 = INT8_MAX;
int32_t t64 = 25855612;
static volatile uint8_t x2212 = 7U;
uint16_t x2268 = 11U;
int16_t x2370 = -1;
int16_t x2371 = -1;
volatile int8_t x2377 = INT8_MIN;
int64_t x2379 = 780415LL;
uint8_t x2380 = 0U;
static volatile int32_t t70 = -64766;
int32_t x2381 = INT32_MAX;
int32_t x2383 = -1192900;
volatile int8_t x2443 = INT8_MIN;
int64_t x2494 = 830404635780LL;
int16_t x2495 = 2;
int16_t x2572 = 4;
static volatile int32_t t74 = -73780501;
static int64_t x2602 = INT64_MIN;
volatile int64_t x2646 = INT64_MAX;
volatile uint16_t x2650 = 2604U;
int32_t x2794 = 27;
static uint64_t x2796 = 15LLU;
static int16_t x2868 = 0;
static int16_t x2887 = INT16_MIN;
static int8_t x2913 = -1;
static int8_t x2914 = INT8_MIN;
static volatile int8_t x2916 = 4;
static uint16_t x2933 = 1U;
int16_t x2934 = 106;
uint16_t x2936 = 3U;
uint16_t x2944 = 1U;
volatile uint16_t x2970 = UINT16_MAX;
static int32_t t94 = 719274566;
int64_t x3054 = -1LL;
volatile int32_t t97 = 98715978;
int32_t x3125 = -1;


void f0(void) {
	static uint32_t x41 = 1347081U;
	int8_t x43 = INT8_MIN;
	volatile int32_t t0 = -185663;

	t0 = ((x41==(x42^x43))<<x44);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x86 = UINT8_MAX;
	static int16_t x87 = -1;
	int32_t x88 = 27;
	int32_t t1 = -4439;

	t1 = ((x85==(x86^x87))<<x88);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x177 = -2;
	static volatile int64_t x178 = INT64_MIN;
	int64_t x179 = INT64_MAX;
	uint8_t x180 = 2U;
	int32_t t2 = -1285;

	t2 = ((x177==(x178^x179))<<x180);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x205 = -1;
	static int32_t x206 = INT32_MIN;
	volatile int32_t t3 = 4;

	t3 = ((x205==(x206^x207))<<x208);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x253 = 151121583;
	uint64_t x254 = 259197727777207115LLU;
	uint32_t x255 = 94U;
	int16_t x256 = 1;
	static int32_t t4 = -391156653;

	t4 = ((x253==(x254^x255))<<x256);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x281 = -4841307LL;
	static int64_t x282 = -30LL;
	int16_t x284 = 0;
	int32_t t5 = -477;

	t5 = ((x281==(x282^x283))<<x284);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x285 = INT16_MAX;
	volatile int8_t x286 = INT8_MAX;
	uint32_t x288 = 0U;
	static volatile int32_t t6 = -3958;

	t6 = ((x285==(x286^x287))<<x288);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x310 = 0;
	static volatile uint8_t x312 = 0U;

	t7 = ((x309==(x310^x311))<<x312);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x337 = -25;
	int64_t x339 = -47674394349843216LL;
	uint32_t x340 = 8U;
	volatile int32_t t8 = 1888;

	t8 = ((x337==(x338^x339))<<x340);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x597 = INT16_MAX;
	uint32_t x599 = 5U;
	int32_t t9 = 564007;

	t9 = ((x597==(x598^x599))<<x600);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x609 = 15130914648LLU;
	volatile int8_t x610 = INT8_MIN;
	static volatile int16_t x611 = -3;
	static int16_t x612 = 18;
	volatile int32_t t10 = -7784;

	t10 = ((x609==(x610^x611))<<x612);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x617 = -1811779;
	volatile int8_t x618 = -1;
	uint8_t x620 = 1U;
	static volatile int32_t t11 = -24545300;

	t11 = ((x617==(x618^x619))<<x620);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x645 = -76;
	int8_t x646 = 25;
	int32_t t12 = 7217029;

	t12 = ((x645==(x646^x647))<<x648);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x761 = -1LL;
	static int16_t x762 = 196;
	static volatile int64_t x763 = INT64_MIN;
	int64_t x764 = 0LL;
	volatile int32_t t13 = -57951729;

	t13 = ((x761==(x762^x763))<<x764);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x786 = INT8_MAX;
	uint8_t x787 = 16U;
	uint32_t x788 = 27U;

	t14 = ((x785==(x786^x787))<<x788);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x797 = INT8_MAX;
	int8_t x798 = INT8_MIN;
	uint8_t x800 = 3U;
	int32_t t15 = 22219063;

	t15 = ((x797==(x798^x799))<<x800);

	if (t15 != 8) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x813 = -1;
	static uint16_t x814 = UINT16_MAX;
	static int64_t x815 = -1LL;
	uint16_t x816 = 6U;

	t16 = ((x813==(x814^x815))<<x816);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x845 = INT16_MIN;
	static uint8_t x847 = 49U;
	uint8_t x848 = 1U;
	volatile int32_t t17 = -6;

	t17 = ((x845==(x846^x847))<<x848);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x857 = UINT16_MAX;
	int8_t x858 = INT8_MAX;
	int32_t x859 = INT32_MIN;
	int32_t t18 = 89769;

	t18 = ((x857==(x858^x859))<<x860);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x917 = INT32_MIN;
	volatile uint32_t x919 = 467U;
	uint64_t x920 = 22LLU;
	static int32_t t19 = 29245;

	t19 = ((x917==(x918^x919))<<x920);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x978 = INT32_MAX;
	volatile uint8_t x980 = 1U;
	static int32_t t20 = 167609091;

	t20 = ((x977==(x978^x979))<<x980);

	if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x995 = -1151789007445325746LL;
	volatile int32_t t21 = -16337;

	t21 = ((x993==(x994^x995))<<x996);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1101 = INT64_MIN;
	static int16_t x1102 = -8810;
	uint64_t x1103 = UINT64_MAX;
	volatile int32_t t22 = -31;

	t22 = ((x1101==(x1102^x1103))<<x1104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1114 = INT8_MAX;
	int8_t x1115 = 1;
	uint8_t x1116 = 0U;

	t23 = ((x1113==(x1114^x1115))<<x1116);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1125 = -1LL;
	int8_t x1126 = INT8_MIN;
	uint16_t x1128 = 23U;
	volatile int32_t t24 = 54237;

	t24 = ((x1125==(x1126^x1127))<<x1128);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x1177 = UINT32_MAX;
	int64_t x1178 = INT64_MIN;
	static int32_t x1179 = INT32_MIN;
	volatile int32_t t25 = -10273238;

	t25 = ((x1177==(x1178^x1179))<<x1180);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x1201 = INT8_MIN;
	int8_t x1202 = INT8_MAX;
	int16_t x1203 = -24;
	volatile int32_t t26 = -22481073;

	t26 = ((x1201==(x1202^x1203))<<x1204);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1213 = -1;
	int8_t x1215 = INT8_MIN;
	static uint8_t x1216 = 25U;
	int32_t t27 = -382316462;

	t27 = ((x1213==(x1214^x1215))<<x1216);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1225 = -1;
	int64_t x1226 = INT64_MAX;
	static uint32_t x1227 = UINT32_MAX;
	volatile uint8_t x1228 = 1U;
	static volatile int32_t t28 = -1239912;

	t28 = ((x1225==(x1226^x1227))<<x1228);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1235 = INT8_MIN;
	static uint64_t x1236 = 3LLU;
	volatile int32_t t29 = -8301;

	t29 = ((x1233==(x1234^x1235))<<x1236);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x1237 = -2291895;
	static uint64_t x1238 = 38588283339376LLU;
	volatile int64_t x1239 = -714363LL;
	uint16_t x1240 = 31U;
	volatile int32_t t30 = -349016597;

	t30 = ((x1237==(x1238^x1239))<<x1240);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1253 = UINT32_MAX;
	uint16_t x1254 = 181U;
	uint8_t x1255 = 80U;
	volatile uint16_t x1256 = 12U;
	static volatile int32_t t31 = -5;

	t31 = ((x1253==(x1254^x1255))<<x1256);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x1285 = -5;
	int16_t x1286 = -1;
	static uint16_t x1287 = 2411U;
	uint32_t x1288 = 3U;
	volatile int32_t t32 = -8072829;

	t32 = ((x1285==(x1286^x1287))<<x1288);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1305 = UINT16_MAX;
	static volatile int64_t x1306 = 5132LL;
	static int64_t x1307 = INT64_MIN;
	uint32_t x1308 = 0U;
	int32_t t33 = 51113317;

	t33 = ((x1305==(x1306^x1307))<<x1308);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1326 = INT32_MIN;
	uint32_t x1327 = UINT32_MAX;
	int32_t t34 = 15473;

	t34 = ((x1325==(x1326^x1327))<<x1328);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1329 = -1;
	volatile int16_t x1331 = -5;
	uint8_t x1332 = 24U;
	int32_t t35 = 297314;

	t35 = ((x1329==(x1330^x1331))<<x1332);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1365 = -1LL;
	int16_t x1367 = INT16_MIN;
	uint16_t x1368 = 1U;
	static volatile int32_t t36 = -5977372;

	t36 = ((x1365==(x1366^x1367))<<x1368);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x1369 = 77U;
	int32_t x1370 = 1;
	volatile uint8_t x1371 = 2U;
	int8_t x1372 = 1;
	volatile int32_t t37 = 1210;

	t37 = ((x1369==(x1370^x1371))<<x1372);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1401 = 17U;
	int8_t x1402 = INT8_MIN;
	uint8_t x1404 = 0U;

	t38 = ((x1401==(x1402^x1403))<<x1404);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x1405 = -1;
	uint8_t x1406 = UINT8_MAX;
	static int8_t x1408 = 16;
	int32_t t39 = 16;

	t39 = ((x1405==(x1406^x1407))<<x1408);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1433 = 125113232192516965LLU;
	static uint8_t x1434 = UINT8_MAX;
	int64_t x1435 = 15827278481106LL;
	volatile int32_t x1436 = 1;
	volatile int32_t t40 = 965396187;

	t40 = ((x1433==(x1434^x1435))<<x1436);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1461 = 0U;
	uint64_t x1462 = 51238LLU;
	uint32_t x1463 = 1531U;
	volatile uint16_t x1464 = 2U;
	volatile int32_t t41 = -28296804;

	t41 = ((x1461==(x1462^x1463))<<x1464);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x1481 = INT64_MIN;
	uint8_t x1482 = UINT8_MAX;
	int64_t x1484 = 1LL;
	volatile int32_t t42 = 21595815;

	t42 = ((x1481==(x1482^x1483))<<x1484);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1537 = INT16_MIN;
	int8_t x1538 = INT8_MIN;
	static uint16_t x1539 = 741U;
	int8_t x1540 = 29;

	t43 = ((x1537==(x1538^x1539))<<x1540);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1553 = -4;
	static int16_t x1554 = INT16_MIN;
	int8_t x1555 = -1;
	int8_t x1556 = 1;
	int32_t t44 = -899860;

	t44 = ((x1553==(x1554^x1555))<<x1556);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x1566 = UINT64_MAX;
	int16_t x1567 = INT16_MIN;
	static uint32_t x1568 = 1U;
	static int32_t t45 = -85943;

	t45 = ((x1565==(x1566^x1567))<<x1568);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x1593 = -1016723135891LL;
	uint64_t x1594 = UINT64_MAX;
	static uint64_t x1596 = 4LLU;

	t46 = ((x1593==(x1594^x1595))<<x1596);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x1633 = 1U;
	int16_t x1634 = INT16_MAX;
	int64_t x1635 = INT64_MAX;
	uint32_t x1636 = 0U;
	static int32_t t47 = -135018;

	t47 = ((x1633==(x1634^x1635))<<x1636);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x1637 = 250508412;
	uint32_t x1638 = UINT32_MAX;
	uint16_t x1639 = 0U;
	int8_t x1640 = 1;
	static volatile int32_t t48 = -125539;

	t48 = ((x1637==(x1638^x1639))<<x1640);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1657 = 31926659LL;
	static int32_t x1659 = INT32_MIN;

	t49 = ((x1657==(x1658^x1659))<<x1660);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x1682 = 29U;
	int64_t x1683 = INT64_MAX;
	int32_t t50 = 2999;

	t50 = ((x1681==(x1682^x1683))<<x1684);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x1697 = UINT64_MAX;
	int16_t x1698 = INT16_MAX;
	uint16_t x1699 = 2U;
	int16_t x1700 = 1;
	volatile int32_t t51 = -201864587;

	t51 = ((x1697==(x1698^x1699))<<x1700);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x1706 = INT64_MAX;
	int16_t x1707 = -1;
	int8_t x1708 = 3;

	t52 = ((x1705==(x1706^x1707))<<x1708);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x1721 = -1;
	int32_t x1722 = -6057378;
	volatile int8_t x1723 = -32;
	static uint16_t x1724 = 1U;
	int32_t t53 = -20;

	t53 = ((x1721==(x1722^x1723))<<x1724);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x1734 = 31898901639207901LLU;
	uint64_t x1735 = 13177LLU;
	volatile int32_t t54 = 10;

	t54 = ((x1733==(x1734^x1735))<<x1736);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x1761 = INT64_MIN;
	volatile int16_t x1762 = INT16_MIN;
	static uint32_t x1763 = 15U;
	static uint8_t x1764 = 0U;
	static int32_t t55 = -24422354;

	t55 = ((x1761==(x1762^x1763))<<x1764);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x1774 = -1;
	int32_t x1775 = -1;
	volatile int32_t t56 = -86537;

	t56 = ((x1773==(x1774^x1775))<<x1776);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x1809 = INT32_MIN;
	int8_t x1810 = INT8_MIN;

	t57 = ((x1809==(x1810^x1811))<<x1812);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x1977 = INT32_MAX;
	int32_t x1978 = INT32_MIN;
	int8_t x1979 = -1;

	t58 = ((x1977==(x1978^x1979))<<x1980);

	if (t58 != 64) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x2017 = 6916U;
	volatile int64_t x2018 = -2936269LL;
	volatile int32_t x2019 = INT32_MIN;
	int16_t x2020 = 0;
	volatile int32_t t59 = 415;

	t59 = ((x2017==(x2018^x2019))<<x2020);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x2077 = 902U;
	int64_t x2078 = INT64_MIN;
	uint32_t x2080 = 2U;
	int32_t t60 = 31024588;

	t60 = ((x2077==(x2078^x2079))<<x2080);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x2089 = -1;
	volatile uint32_t x2090 = 28516U;
	uint16_t x2091 = 51U;
	volatile int32_t t61 = -1435419;

	t61 = ((x2089==(x2090^x2091))<<x2092);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x2097 = UINT32_MAX;
	int32_t x2098 = 15;
	volatile int32_t t62 = -5118407;

	t62 = ((x2097==(x2098^x2099))<<x2100);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x2181 = INT64_MIN;
	volatile int64_t x2182 = -1784863LL;
	static uint64_t x2183 = 40LLU;
	static int16_t x2184 = 0;
	volatile int32_t t63 = -776;

	t63 = ((x2181==(x2182^x2183))<<x2184);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x2199 = INT64_MIN;
	static uint64_t x2200 = 0LLU;

	t64 = ((x2197==(x2198^x2199))<<x2200);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x2209 = 32U;
	int32_t x2210 = -1;
	int8_t x2211 = INT8_MAX;
	int32_t t65 = 762;

	t65 = ((x2209==(x2210^x2211))<<x2212);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x2265 = 1U;
	int32_t x2266 = -499463;
	int16_t x2267 = -186;
	static volatile int32_t t66 = -154;

	t66 = ((x2265==(x2266^x2267))<<x2268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x2317 = 1585267478U;
	int8_t x2318 = -1;
	int16_t x2319 = INT16_MIN;
	volatile int8_t x2320 = 1;
	int32_t t67 = 98;

	t67 = ((x2317==(x2318^x2319))<<x2320);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x2345 = 709;
	uint16_t x2346 = 5U;
	volatile int8_t x2347 = INT8_MIN;
	uint8_t x2348 = 1U;
	int32_t t68 = 45556;

	t68 = ((x2345==(x2346^x2347))<<x2348);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x2369 = INT64_MAX;
	uint8_t x2372 = 0U;
	static volatile int32_t t69 = -383073611;

	t69 = ((x2369==(x2370^x2371))<<x2372);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x2378 = -1804343;

	t70 = ((x2377==(x2378^x2379))<<x2380);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x2382 = 0;
	static int8_t x2384 = 2;
	volatile int32_t t71 = 1033173;

	t71 = ((x2381==(x2382^x2383))<<x2384);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2441 = INT16_MIN;
	uint16_t x2442 = 4585U;
	int8_t x2444 = 6;
	int32_t t72 = -49971772;

	t72 = ((x2441==(x2442^x2443))<<x2444);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x2493 = 3;
	uint8_t x2496 = 2U;
	int32_t t73 = 7495;

	t73 = ((x2493==(x2494^x2495))<<x2496);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x2569 = INT16_MIN;
	int8_t x2570 = -11;
	int8_t x2571 = INT8_MAX;

	t74 = ((x2569==(x2570^x2571))<<x2572);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x2601 = INT64_MAX;
	static uint64_t x2603 = UINT64_MAX;
	int16_t x2604 = 3;
	volatile int32_t t75 = 5;

	t75 = ((x2601==(x2602^x2603))<<x2604);

	if (t75 != 8) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2629 = 2009;
	volatile int16_t x2630 = -1514;
	uint16_t x2631 = 1644U;
	uint16_t x2632 = 9U;
	volatile int32_t t76 = -212427;

	t76 = ((x2629==(x2630^x2631))<<x2632);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x2645 = INT32_MAX;
	int16_t x2647 = INT16_MIN;
	int8_t x2648 = 0;
	volatile int32_t t77 = 8427531;

	t77 = ((x2645==(x2646^x2647))<<x2648);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x2649 = 1U;
	volatile int32_t x2651 = INT32_MIN;
	int16_t x2652 = 1;
	int32_t t78 = -673;

	t78 = ((x2649==(x2650^x2651))<<x2652);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x2721 = INT8_MIN;
	uint8_t x2722 = UINT8_MAX;
	uint8_t x2723 = 0U;
	static uint8_t x2724 = 1U;
	static int32_t t79 = -489;

	t79 = ((x2721==(x2722^x2723))<<x2724);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x2757 = -1LL;
	int8_t x2758 = 17;
	int64_t x2759 = -1LL;
	uint8_t x2760 = 26U;
	volatile int32_t t80 = 1;

	t80 = ((x2757==(x2758^x2759))<<x2760);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x2793 = INT8_MAX;
	int64_t x2795 = 12LL;
	int32_t t81 = 28756136;

	t81 = ((x2793==(x2794^x2795))<<x2796);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x2837 = -357;
	volatile uint8_t x2838 = UINT8_MAX;
	int64_t x2839 = INT64_MAX;
	uint8_t x2840 = 21U;
	static volatile int32_t t82 = 22;

	t82 = ((x2837==(x2838^x2839))<<x2840);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x2865 = 0U;
	uint16_t x2866 = 15875U;
	static int32_t x2867 = 63658;
	int32_t t83 = 4245;

	t83 = ((x2865==(x2866^x2867))<<x2868);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x2873 = -1;
	int32_t x2874 = -1;
	static volatile int32_t x2875 = INT32_MIN;
	uint8_t x2876 = 5U;
	volatile int32_t t84 = 1;

	t84 = ((x2873==(x2874^x2875))<<x2876);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x2877 = 49U;
	int32_t x2878 = INT32_MIN;
	int16_t x2879 = INT16_MIN;
	static uint8_t x2880 = 0U;
	int32_t t85 = 104;

	t85 = ((x2877==(x2878^x2879))<<x2880);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x2885 = UINT8_MAX;
	volatile int32_t x2886 = INT32_MAX;
	uint32_t x2888 = 1U;
	int32_t t86 = -229748;

	t86 = ((x2885==(x2886^x2887))<<x2888);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x2901 = INT16_MIN;
	int16_t x2902 = INT16_MAX;
	int16_t x2903 = INT16_MIN;
	int16_t x2904 = 1;
	volatile int32_t t87 = 99;

	t87 = ((x2901==(x2902^x2903))<<x2904);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x2915 = UINT64_MAX;
	int32_t t88 = 2;

	t88 = ((x2913==(x2914^x2915))<<x2916);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x2935 = -252573LL;
	static volatile int32_t t89 = 1579;

	t89 = ((x2933==(x2934^x2935))<<x2936);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x2937 = 3382309846353462930LLU;
	volatile int16_t x2938 = INT16_MIN;
	int16_t x2939 = 30;
	uint16_t x2940 = 31U;
	volatile int32_t t90 = -3380;

	t90 = ((x2937==(x2938^x2939))<<x2940);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x2941 = -1;
	int32_t x2942 = INT32_MIN;
	int64_t x2943 = INT64_MIN;
	int32_t t91 = -3895;

	t91 = ((x2941==(x2942^x2943))<<x2944);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x2953 = UINT16_MAX;
	static int8_t x2954 = -1;
	int64_t x2955 = 975706226LL;
	int64_t x2956 = 1LL;
	int32_t t92 = 2;

	t92 = ((x2953==(x2954^x2955))<<x2956);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x2969 = UINT64_MAX;
	int32_t x2971 = INT32_MAX;
	uint8_t x2972 = 3U;
	volatile int32_t t93 = 6;

	t93 = ((x2969==(x2970^x2971))<<x2972);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x2993 = INT16_MIN;
	int32_t x2994 = -1;
	int32_t x2995 = INT32_MAX;
	uint8_t x2996 = 18U;

	t94 = ((x2993==(x2994^x2995))<<x2996);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x3053 = 74LLU;
	int8_t x3055 = INT8_MAX;
	uint32_t x3056 = 1U;
	int32_t t95 = 1328;

	t95 = ((x3053==(x3054^x3055))<<x3056);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x3069 = INT64_MIN;
	int16_t x3070 = -1;
	int32_t x3071 = -30247;
	uint8_t x3072 = 12U;
	int32_t t96 = -9;

	t96 = ((x3069==(x3070^x3071))<<x3072);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x3073 = INT16_MAX;
	uint32_t x3074 = 223739563U;
	int32_t x3075 = INT32_MIN;
	static int16_t x3076 = 21;

	t97 = ((x3073==(x3074^x3075))<<x3076);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x3105 = 1762U;
	static uint16_t x3106 = 9U;
	static int8_t x3107 = -1;
	static volatile uint16_t x3108 = 12U;
	static volatile int32_t t98 = -30;

	t98 = ((x3105==(x3106^x3107))<<x3108);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x3126 = -2;
	static int16_t x3127 = 104;
	static uint8_t x3128 = 12U;
	int32_t t99 = 79042;

	t99 = ((x3125==(x3126^x3127))<<x3128);

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

