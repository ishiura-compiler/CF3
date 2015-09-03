#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint16_t x14 = 707U;
volatile uint8_t x65 = 3U;
static volatile int16_t x66 = -1;
volatile int16_t x126 = -1;
uint16_t x152 = 3U;
uint64_t x153 = 93182081LLU;
int32_t x189 = -1;
uint8_t x263 = 21U;
int32_t t10 = -281641912;
volatile int32_t x280 = 3;
uint32_t x294 = UINT32_MAX;
uint8_t x313 = 4U;
static volatile uint32_t x314 = 71053U;
int32_t t15 = 1;
uint32_t x388 = 26U;
uint32_t x402 = 71200782U;
int16_t x421 = 38;
uint16_t x423 = UINT16_MAX;
static volatile uint8_t x424 = 15U;
volatile int32_t x443 = -1;
uint8_t x494 = UINT8_MAX;
uint64_t x504 = 2LLU;
volatile int32_t t21 = 26276652;
uint16_t x620 = 19U;
int16_t x638 = -1;
static uint16_t x926 = 22U;
int64_t x1043 = INT64_MAX;
int16_t x1158 = -1;
static int32_t x1206 = 355978896;
static volatile int64_t x1262 = 42247674405630081LL;
volatile int32_t t34 = -29;
uint8_t x1337 = 1U;
static int8_t x1346 = INT8_MIN;
int64_t t36 = -660988027163LL;
volatile int64_t x1351 = 41709LL;
int8_t x1352 = 0;
volatile int64_t t37 = -4228659338258184493LL;
int32_t x1374 = 129156323;
static uint16_t x1436 = 10U;
volatile uint64_t t44 = 352LLU;
volatile int64_t x1521 = 258LL;
volatile int64_t x1523 = INT64_MAX;
int32_t x1534 = 324497;
int32_t t47 = 119;
volatile uint16_t x1545 = UINT16_MAX;
int64_t x1546 = INT64_MIN;
static int32_t x1547 = INT32_MIN;
uint16_t x1551 = 15U;
volatile int64_t x1621 = INT64_MAX;
int16_t x1681 = -1;
int64_t x1682 = INT64_MIN;
static int16_t x1683 = INT16_MAX;
volatile uint16_t x1802 = UINT16_MAX;
int16_t x1803 = -15;
volatile int8_t x1873 = INT8_MIN;
int16_t x1901 = -1;
uint8_t x2056 = 5U;
static int32_t t60 = 7518;
static volatile int8_t x2152 = 1;
int8_t x2206 = -1;
static int8_t x2208 = 4;
uint8_t x2436 = 13U;
uint64_t t68 = 1262693LLU;
int32_t t69 = -75;
int64_t x2467 = INT64_MIN;
int32_t x2638 = INT32_MIN;
uint8_t x2651 = 12U;
int64_t x2701 = -1LL;
int32_t x2739 = -9588;
uint8_t x2740 = 30U;
static volatile int8_t x2769 = INT8_MIN;
int64_t x2770 = -3427607680815494LL;
int32_t t77 = 1;
volatile uint8_t x2824 = 0U;
volatile int32_t t80 = -2066;
volatile uint64_t x2902 = 429666060175225LLU;
uint16_t x3012 = 3U;
volatile uint32_t x3039 = 1054543U;
uint16_t x3203 = 3U;
volatile int8_t x3204 = 0;
int8_t x3278 = 19;
volatile int32_t t92 = -77964;
int8_t x3347 = -1;
volatile uint16_t x3349 = UINT16_MAX;


void f0(void) {
	int8_t x13 = INT8_MIN;
	int16_t x15 = INT16_MAX;
	static int8_t x16 = 0;
	volatile int32_t t0 = -111;

	t0 = (((x13<=x14)/x15)<<x16);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x17 = INT64_MAX;
	static int8_t x18 = -1;
	int64_t x19 = INT64_MAX;
	uint16_t x20 = 1U;
	int64_t t1 = 543721079428LL;

	t1 = (((x17<=x18)/x19)<<x20);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x67 = INT32_MAX;
	uint16_t x68 = 28U;
	volatile int32_t t2 = -6561;

	t2 = (((x65<=x66)/x67)<<x68);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x125 = -1;
	static int8_t x127 = INT8_MIN;
	int16_t x128 = 1;
	static int32_t t3 = -916187;

	t3 = (((x125<=x126)/x127)<<x128);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x129 = INT64_MIN;
	static int16_t x130 = INT16_MIN;
	int8_t x131 = 1;
	uint8_t x132 = 6U;
	volatile int32_t t4 = 17906;

	t4 = (((x129<=x130)/x131)<<x132);

	if (t4 != 64) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x149 = INT64_MIN;
	static int64_t x150 = 9723696LL;
	uint8_t x151 = UINT8_MAX;
	volatile int32_t t5 = -921366;

	t5 = (((x149<=x150)/x151)<<x152);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x154 = -1;
	uint8_t x155 = UINT8_MAX;
	volatile int32_t x156 = 3;
	volatile int32_t t6 = 1;

	t6 = (((x153<=x154)/x155)<<x156);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x190 = UINT64_MAX;
	static int8_t x191 = INT8_MIN;
	static uint8_t x192 = 24U;
	volatile int32_t t7 = 73;

	t7 = (((x189<=x190)/x191)<<x192);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x209 = INT32_MAX;
	static volatile uint64_t x210 = UINT64_MAX;
	uint8_t x211 = UINT8_MAX;
	uint16_t x212 = 0U;
	int32_t t8 = -15;

	t8 = (((x209<=x210)/x211)<<x212);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x257 = 10466;
	int16_t x258 = INT16_MAX;
	uint8_t x259 = UINT8_MAX;
	int16_t x260 = 1;
	int32_t t9 = 113567178;

	t9 = (((x257<=x258)/x259)<<x260);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x261 = UINT8_MAX;
	int16_t x262 = INT16_MIN;
	int32_t x264 = 0;

	t10 = (((x261<=x262)/x263)<<x264);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x277 = INT16_MAX;
	int64_t x278 = 1198349LL;
	uint64_t x279 = UINT64_MAX;
	volatile uint64_t t11 = 14373381LLU;

	t11 = (((x277<=x278)/x279)<<x280);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x293 = -14280LL;
	uint32_t x295 = 81U;
	uint8_t x296 = 1U;
	static uint32_t t12 = 1592287U;

	t12 = (((x293<=x294)/x295)<<x296);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x309 = -1;
	static int64_t x310 = 27538392LL;
	volatile int64_t x311 = 10LL;
	int8_t x312 = 0;
	int64_t t13 = 1487422060LL;

	t13 = (((x309<=x310)/x311)<<x312);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x315 = 81U;
	static uint8_t x316 = 6U;
	uint32_t t14 = 8023509U;

	t14 = (((x313<=x314)/x315)<<x316);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x377 = INT8_MIN;
	int16_t x378 = INT16_MAX;
	uint8_t x379 = UINT8_MAX;
	uint16_t x380 = 3U;

	t15 = (((x377<=x378)/x379)<<x380);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x385 = INT32_MAX;
	uint16_t x386 = 1U;
	int32_t x387 = -677;
	int32_t t16 = 79724836;

	t16 = (((x385<=x386)/x387)<<x388);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x401 = -1;
	int16_t x403 = INT16_MIN;
	static int16_t x404 = 1;
	int32_t t17 = -1;

	t17 = (((x401<=x402)/x403)<<x404);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint64_t x422 = 2191LLU;
	volatile int32_t t18 = -102268679;

	t18 = (((x421<=x422)/x423)<<x424);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x441 = 26U;
	uint16_t x442 = 5U;
	volatile uint8_t x444 = 9U;
	static int32_t t19 = -22;

	t19 = (((x441<=x442)/x443)<<x444);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x493 = INT8_MIN;
	uint16_t x495 = 19U;
	int16_t x496 = 0;
	int32_t t20 = -3924868;

	t20 = (((x493<=x494)/x495)<<x496);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x501 = 4310253718693160801LLU;
	uint16_t x502 = UINT16_MAX;
	int32_t x503 = -2122;

	t21 = (((x501<=x502)/x503)<<x504);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x533 = 79;
	int32_t x534 = -1;
	static int64_t x535 = INT64_MIN;
	int8_t x536 = 1;
	volatile int64_t t22 = 30952LL;

	t22 = (((x533<=x534)/x535)<<x536);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x617 = 9543U;
	int64_t x618 = 125674366679343LL;
	int16_t x619 = INT16_MIN;
	volatile int32_t t23 = -346;

	t23 = (((x617<=x618)/x619)<<x620);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x633 = INT32_MIN;
	volatile int16_t x634 = INT16_MIN;
	uint16_t x635 = 77U;
	int8_t x636 = 0;
	int32_t t24 = -70281996;

	t24 = (((x633<=x634)/x635)<<x636);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x637 = INT32_MIN;
	volatile int32_t x639 = -5783404;
	uint8_t x640 = 3U;
	int32_t t25 = -1857;

	t25 = (((x637<=x638)/x639)<<x640);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x697 = -5;
	int32_t x698 = -6370428;
	static int32_t x699 = INT32_MIN;
	int8_t x700 = 1;
	volatile int32_t t26 = 1149;

	t26 = (((x697<=x698)/x699)<<x700);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x925 = INT32_MIN;
	uint32_t x927 = UINT32_MAX;
	uint16_t x928 = 0U;
	static volatile uint32_t t27 = 26344U;

	t27 = (((x925<=x926)/x927)<<x928);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1041 = 1848388;
	uint16_t x1042 = UINT16_MAX;
	volatile int8_t x1044 = 4;
	int64_t t28 = -1600LL;

	t28 = (((x1041<=x1042)/x1043)<<x1044);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x1145 = -1;
	static int64_t x1146 = INT64_MIN;
	static uint8_t x1147 = 2U;
	uint8_t x1148 = 4U;
	static int32_t t29 = 154375642;

	t29 = (((x1145<=x1146)/x1147)<<x1148);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1157 = UINT64_MAX;
	uint16_t x1159 = UINT16_MAX;
	uint8_t x1160 = 29U;
	int32_t t30 = 29133;

	t30 = (((x1157<=x1158)/x1159)<<x1160);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1205 = 0;
	uint64_t x1207 = 6711107902019840LLU;
	volatile int16_t x1208 = 2;
	volatile uint64_t t31 = 90338LLU;

	t31 = (((x1205<=x1206)/x1207)<<x1208);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x1261 = 4U;
	uint64_t x1263 = 4537LLU;
	uint8_t x1264 = 3U;
	volatile uint64_t t32 = 2193020924286LLU;

	t32 = (((x1261<=x1262)/x1263)<<x1264);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1309 = 1964U;
	int8_t x1310 = INT8_MAX;
	int8_t x1311 = INT8_MIN;
	static int16_t x1312 = 7;
	int32_t t33 = 5819606;

	t33 = (((x1309<=x1310)/x1311)<<x1312);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1329 = -374930431982540LL;
	int64_t x1330 = INT64_MAX;
	int32_t x1331 = 3;
	uint16_t x1332 = 7U;

	t34 = (((x1329<=x1330)/x1331)<<x1332);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x1338 = INT16_MIN;
	int16_t x1339 = INT16_MAX;
	uint8_t x1340 = 0U;
	volatile int32_t t35 = -212296;

	t35 = (((x1337<=x1338)/x1339)<<x1340);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1345 = UINT64_MAX;
	int64_t x1347 = INT64_MIN;
	int8_t x1348 = 0;

	t36 = (((x1345<=x1346)/x1347)<<x1348);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1349 = -1;
	int16_t x1350 = INT16_MIN;

	t37 = (((x1349<=x1350)/x1351)<<x1352);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1373 = -1;
	uint16_t x1375 = 3853U;
	static uint8_t x1376 = 18U;
	volatile int32_t t38 = -1281;

	t38 = (((x1373<=x1374)/x1375)<<x1376);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x1425 = INT8_MIN;
	int8_t x1426 = 9;
	static volatile int16_t x1427 = 31;
	uint16_t x1428 = 19U;
	int32_t t39 = -4;

	t39 = (((x1425<=x1426)/x1427)<<x1428);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1433 = INT32_MIN;
	static int8_t x1434 = INT8_MAX;
	int64_t x1435 = INT64_MIN;
	int64_t t40 = -24041059340LL;

	t40 = (((x1433<=x1434)/x1435)<<x1436);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1457 = INT64_MIN;
	int32_t x1458 = INT32_MIN;
	volatile int8_t x1459 = -31;
	uint16_t x1460 = 1U;
	int32_t t41 = 332;

	t41 = (((x1457<=x1458)/x1459)<<x1460);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x1481 = 2273U;
	static int16_t x1482 = -1;
	uint64_t x1483 = UINT64_MAX;
	int8_t x1484 = 58;
	volatile uint64_t t42 = 147LLU;

	t42 = (((x1481<=x1482)/x1483)<<x1484);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1501 = 397U;
	static volatile uint32_t x1502 = 620825U;
	static int32_t x1503 = INT32_MAX;
	int8_t x1504 = 0;
	static volatile int32_t t43 = -1150635;

	t43 = (((x1501<=x1502)/x1503)<<x1504);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x1517 = INT8_MIN;
	int8_t x1518 = INT8_MIN;
	uint64_t x1519 = 1595602995297LLU;
	uint16_t x1520 = 0U;

	t44 = (((x1517<=x1518)/x1519)<<x1520);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x1522 = INT8_MIN;
	volatile uint8_t x1524 = 13U;
	int64_t t45 = 204734LL;

	t45 = (((x1521<=x1522)/x1523)<<x1524);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1533 = -1LL;
	volatile int64_t x1535 = INT64_MIN;
	static uint8_t x1536 = 9U;
	static volatile int64_t t46 = -95318LL;

	t46 = (((x1533<=x1534)/x1535)<<x1536);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x1537 = UINT16_MAX;
	int32_t x1538 = -1;
	uint16_t x1539 = 15U;
	uint8_t x1540 = 30U;

	t47 = (((x1537<=x1538)/x1539)<<x1540);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x1548 = 7;
	volatile int32_t t48 = 1;

	t48 = (((x1545<=x1546)/x1547)<<x1548);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x1549 = 56U;
	uint32_t x1550 = 140U;
	volatile int16_t x1552 = 2;
	volatile int32_t t49 = -1192;

	t49 = (((x1549<=x1550)/x1551)<<x1552);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x1622 = INT8_MAX;
	int16_t x1623 = -1;
	volatile uint8_t x1624 = 4U;
	int32_t t50 = 12158;

	t50 = (((x1621<=x1622)/x1623)<<x1624);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1684 = 0;
	volatile int32_t t51 = 993;

	t51 = (((x1681<=x1682)/x1683)<<x1684);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x1769 = 3150LLU;
	static int64_t x1770 = INT64_MIN;
	int32_t x1771 = INT32_MIN;
	uint16_t x1772 = 1U;
	volatile int32_t t52 = -91435012;

	t52 = (((x1769<=x1770)/x1771)<<x1772);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x1777 = INT8_MIN;
	uint32_t x1778 = 5288U;
	int64_t x1779 = 1317163706LL;
	volatile uint8_t x1780 = 13U;
	static volatile int64_t t53 = 2594805LL;

	t53 = (((x1777<=x1778)/x1779)<<x1780);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x1801 = INT8_MIN;
	volatile int8_t x1804 = 3;
	static int32_t t54 = -4463;

	t54 = (((x1801<=x1802)/x1803)<<x1804);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x1813 = 1;
	int32_t x1814 = INT32_MIN;
	int64_t x1815 = -1LL;
	int8_t x1816 = 1;
	volatile int64_t t55 = 17115679LL;

	t55 = (((x1813<=x1814)/x1815)<<x1816);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1857 = -1;
	uint8_t x1858 = 1U;
	int64_t x1859 = -64516319LL;
	uint8_t x1860 = 1U;
	static int64_t t56 = 1LL;

	t56 = (((x1857<=x1858)/x1859)<<x1860);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x1874 = -1LL;
	int8_t x1875 = INT8_MAX;
	static int16_t x1876 = 1;
	volatile int32_t t57 = -10347046;

	t57 = (((x1873<=x1874)/x1875)<<x1876);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x1902 = 10164988067321LLU;
	uint32_t x1903 = UINT32_MAX;
	int8_t x1904 = 0;
	volatile uint32_t t58 = 340U;

	t58 = (((x1901<=x1902)/x1903)<<x1904);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x1913 = -1;
	uint32_t x1914 = 334406667U;
	int16_t x1915 = INT16_MIN;
	int8_t x1916 = 4;
	static volatile int32_t t59 = 23;

	t59 = (((x1913<=x1914)/x1915)<<x1916);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x2053 = UINT64_MAX;
	uint16_t x2054 = 702U;
	uint16_t x2055 = 2632U;

	t60 = (((x2053<=x2054)/x2055)<<x2056);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x2073 = 22747LLU;
	uint8_t x2074 = 3U;
	int8_t x2075 = INT8_MIN;
	uint32_t x2076 = 1U;
	static int32_t t61 = 0;

	t61 = (((x2073<=x2074)/x2075)<<x2076);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x2149 = 126094589LLU;
	uint16_t x2150 = UINT16_MAX;
	int64_t x2151 = INT64_MAX;
	volatile int64_t t62 = 8042754177LL;

	t62 = (((x2149<=x2150)/x2151)<<x2152);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x2193 = 570997612944112900LL;
	static volatile uint16_t x2194 = 6713U;
	int16_t x2195 = INT16_MIN;
	volatile uint32_t x2196 = 3U;
	volatile int32_t t63 = -2251;

	t63 = (((x2193<=x2194)/x2195)<<x2196);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x2205 = UINT64_MAX;
	volatile uint16_t x2207 = 25044U;
	volatile int32_t t64 = 544220;

	t64 = (((x2205<=x2206)/x2207)<<x2208);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x2293 = -1176;
	int16_t x2294 = INT16_MIN;
	uint32_t x2295 = 3792U;
	int32_t x2296 = 1;
	uint32_t t65 = 541302U;

	t65 = (((x2293<=x2294)/x2295)<<x2296);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2313 = INT16_MIN;
	volatile int16_t x2314 = INT16_MIN;
	uint64_t x2315 = 3640419886256918LLU;
	uint8_t x2316 = 1U;
	volatile uint64_t t66 = 3019202815LLU;

	t66 = (((x2313<=x2314)/x2315)<<x2316);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x2433 = INT64_MIN;
	uint8_t x2434 = UINT8_MAX;
	int16_t x2435 = INT16_MAX;
	volatile int32_t t67 = 210254;

	t67 = (((x2433<=x2434)/x2435)<<x2436);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x2437 = 97922LL;
	int16_t x2438 = INT16_MIN;
	uint64_t x2439 = UINT64_MAX;
	volatile uint8_t x2440 = 7U;

	t68 = (((x2437<=x2438)/x2439)<<x2440);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x2453 = INT64_MIN;
	volatile int32_t x2454 = -1;
	static uint16_t x2455 = 3234U;
	uint64_t x2456 = 2LLU;

	t69 = (((x2453<=x2454)/x2455)<<x2456);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x2465 = -1;
	static int16_t x2466 = INT16_MIN;
	int8_t x2468 = 9;
	volatile int64_t t70 = -555LL;

	t70 = (((x2465<=x2466)/x2467)<<x2468);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x2509 = INT16_MIN;
	int16_t x2510 = -24;
	static uint16_t x2511 = UINT16_MAX;
	volatile int32_t x2512 = 1;
	int32_t t71 = -69425;

	t71 = (((x2509<=x2510)/x2511)<<x2512);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x2637 = INT32_MIN;
	uint64_t x2639 = UINT64_MAX;
	static int16_t x2640 = 2;
	volatile uint64_t t72 = 4408191698244LLU;

	t72 = (((x2637<=x2638)/x2639)<<x2640);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x2649 = 387U;
	int16_t x2650 = -1;
	static volatile int8_t x2652 = 17;
	static int32_t t73 = -12;

	t73 = (((x2649<=x2650)/x2651)<<x2652);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x2702 = -4714;
	uint16_t x2703 = UINT16_MAX;
	uint8_t x2704 = 0U;
	volatile int32_t t74 = 466864248;

	t74 = (((x2701<=x2702)/x2703)<<x2704);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x2729 = 199181891;
	int32_t x2730 = -1;
	int32_t x2731 = 12541;
	int8_t x2732 = 0;
	volatile int32_t t75 = 104158577;

	t75 = (((x2729<=x2730)/x2731)<<x2732);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x2737 = INT64_MAX;
	uint16_t x2738 = UINT16_MAX;
	volatile int32_t t76 = 6141875;

	t76 = (((x2737<=x2738)/x2739)<<x2740);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x2771 = INT16_MIN;
	int32_t x2772 = 4;

	t77 = (((x2769<=x2770)/x2771)<<x2772);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x2793 = UINT8_MAX;
	volatile int32_t x2794 = 0;
	static int16_t x2795 = INT16_MAX;
	uint16_t x2796 = 4U;
	volatile int32_t t78 = -46474338;

	t78 = (((x2793<=x2794)/x2795)<<x2796);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2813 = INT8_MIN;
	int8_t x2814 = INT8_MIN;
	uint64_t x2815 = 1LLU;
	uint8_t x2816 = 22U;
	static uint64_t t79 = 834235925463905LLU;

	t79 = (((x2813<=x2814)/x2815)<<x2816);

	if (t79 != 4194304LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x2821 = INT32_MAX;
	uint32_t x2822 = 276430U;
	int32_t x2823 = INT32_MIN;

	t80 = (((x2821<=x2822)/x2823)<<x2824);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x2901 = INT32_MAX;
	int64_t x2903 = INT64_MAX;
	int16_t x2904 = 0;
	int64_t t81 = 1243548246557LL;

	t81 = (((x2901<=x2902)/x2903)<<x2904);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x2905 = 2607484U;
	int16_t x2906 = INT16_MIN;
	uint16_t x2907 = 1U;
	volatile int64_t x2908 = 1LL;
	int32_t t82 = -259410;

	t82 = (((x2905<=x2906)/x2907)<<x2908);

	if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x2925 = 23U;
	int64_t x2926 = 0LL;
	volatile int16_t x2927 = -181;
	volatile uint8_t x2928 = 0U;
	int32_t t83 = -288189284;

	t83 = (((x2925<=x2926)/x2927)<<x2928);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x2961 = INT16_MIN;
	static int32_t x2962 = INT32_MIN;
	volatile int16_t x2963 = INT16_MAX;
	volatile int8_t x2964 = 15;
	volatile int32_t t84 = -10920201;

	t84 = (((x2961<=x2962)/x2963)<<x2964);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x2985 = UINT32_MAX;
	uint8_t x2986 = 8U;
	uint8_t x2987 = 24U;
	volatile uint32_t x2988 = 0U;
	static int32_t t85 = -4640;

	t85 = (((x2985<=x2986)/x2987)<<x2988);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x3009 = INT64_MAX;
	volatile int8_t x3010 = INT8_MAX;
	int64_t x3011 = -1LL;
	static int64_t t86 = -65125479848LL;

	t86 = (((x3009<=x3010)/x3011)<<x3012);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x3033 = INT16_MIN;
	int32_t x3034 = INT32_MIN;
	uint16_t x3035 = 1U;
	volatile uint64_t x3036 = 1LLU;
	volatile int32_t t87 = -4;

	t87 = (((x3033<=x3034)/x3035)<<x3036);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x3037 = INT16_MIN;
	static volatile uint32_t x3038 = UINT32_MAX;
	volatile uint8_t x3040 = 10U;
	volatile uint32_t t88 = 278U;

	t88 = (((x3037<=x3038)/x3039)<<x3040);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x3197 = 3U;
	static volatile uint64_t x3198 = UINT64_MAX;
	int64_t x3199 = 76307446290121LL;
	volatile uint8_t x3200 = 48U;
	static int64_t t89 = 4413962191859LL;

	t89 = (((x3197<=x3198)/x3199)<<x3200);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x3201 = 10832U;
	uint64_t x3202 = 3614LLU;
	int32_t t90 = 49183677;

	t90 = (((x3201<=x3202)/x3203)<<x3204);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x3209 = 32U;
	int8_t x3210 = 14;
	int8_t x3211 = INT8_MIN;
	int32_t x3212 = 0;
	int32_t t91 = 1962523;

	t91 = (((x3209<=x3210)/x3211)<<x3212);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x3277 = -1;
	int16_t x3279 = INT16_MAX;
	int16_t x3280 = 21;

	t92 = (((x3277<=x3278)/x3279)<<x3280);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x3317 = 2U;
	uint8_t x3318 = 2U;
	int16_t x3319 = INT16_MAX;
	uint8_t x3320 = 1U;
	volatile int32_t t93 = 2978;

	t93 = (((x3317<=x3318)/x3319)<<x3320);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x3341 = INT16_MAX;
	uint8_t x3342 = UINT8_MAX;
	static uint64_t x3343 = 11801837046688LLU;
	int8_t x3344 = 48;
	uint64_t t94 = 1319LLU;

	t94 = (((x3341<=x3342)/x3343)<<x3344);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x3345 = INT32_MAX;
	int32_t x3346 = -1;
	uint8_t x3348 = 2U;
	static int32_t t95 = 1;

	t95 = (((x3345<=x3346)/x3347)<<x3348);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x3350 = 56U;
	int32_t x3351 = INT32_MIN;
	int8_t x3352 = 1;
	volatile int32_t t96 = -312546;

	t96 = (((x3349<=x3350)/x3351)<<x3352);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x3389 = 3629;
	uint64_t x3390 = UINT64_MAX;
	volatile int8_t x3391 = INT8_MIN;
	int8_t x3392 = 4;
	volatile int32_t t97 = 28;

	t97 = (((x3389<=x3390)/x3391)<<x3392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x3429 = INT64_MIN;
	volatile int8_t x3430 = INT8_MIN;
	int8_t x3431 = -8;
	volatile int16_t x3432 = 21;
	volatile int32_t t98 = 239;

	t98 = (((x3429<=x3430)/x3431)<<x3432);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x3493 = INT8_MIN;
	int8_t x3494 = -3;
	int16_t x3495 = 6;
	int32_t x3496 = 3;
	static volatile int32_t t99 = -1283;

	t99 = (((x3493<=x3494)/x3495)<<x3496);

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

