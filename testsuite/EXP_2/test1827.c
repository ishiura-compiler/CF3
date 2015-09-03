#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x39 = -1;
static volatile int32_t t1 = -1;
uint32_t x62 = 202701443U;
int32_t x65 = INT32_MIN;
static volatile int64_t t5 = 739LL;
volatile int32_t t7 = -476;
static uint64_t t9 = 1361310249LLU;
static int8_t x308 = 0;
static int64_t t10 = -384LL;
static int32_t x355 = INT32_MIN;
int64_t x405 = INT64_MIN;
static uint8_t x489 = 117U;
int16_t x496 = 10;
static int8_t x597 = INT8_MIN;
volatile uint16_t x673 = UINT16_MAX;
int8_t x721 = INT8_MAX;
uint8_t x724 = 9U;
uint64_t x857 = 0LLU;
int32_t x859 = 2947523;
uint64_t x893 = 948695809441844614LLU;
volatile int64_t x945 = INT64_MIN;
static uint16_t x946 = 1U;
static int32_t x960 = 2;
int8_t x967 = -1;
static volatile int8_t x1145 = INT8_MIN;
uint8_t x1148 = 30U;
volatile int32_t t27 = 328472974;
int64_t x1201 = INT64_MIN;
static uint32_t x1213 = UINT32_MAX;
uint16_t x1217 = 18036U;
int16_t x1219 = INT16_MAX;
uint32_t x1242 = 996U;
static int16_t x1301 = -1;
int8_t x1303 = -5;
int8_t x1315 = INT8_MAX;
volatile int32_t x1333 = 70761334;
uint64_t x1352 = 41LLU;
volatile int16_t x1435 = INT16_MIN;
int32_t x1473 = -2226;
int64_t t41 = 3172158015989LL;
uint64_t x1520 = 12LLU;
int32_t x1535 = INT32_MAX;
int32_t x1538 = -1;
uint8_t x1539 = 13U;
int16_t x1555 = INT16_MIN;
static int32_t x1594 = INT32_MAX;
uint16_t x1596 = 13U;
int16_t x1628 = 0;
volatile int64_t t48 = 30766020416LL;
volatile int64_t t49 = -1LL;
int8_t x1667 = -1;
uint8_t x1676 = 0U;
uint32_t x1742 = 26U;
int8_t x1743 = INT8_MAX;
uint64_t x2033 = 8485618956LLU;
volatile int16_t x2102 = INT16_MAX;
int64_t x2118 = 8120034874LL;
int64_t t59 = 31090559LL;
volatile int8_t x2155 = -1;
int64_t x2175 = -41655754138251700LL;
volatile uint16_t x2201 = 163U;
volatile uint16_t x2271 = UINT16_MAX;
int64_t x2297 = INT64_MAX;
volatile int32_t t68 = 205571483;
static volatile int32_t x2463 = INT32_MIN;
volatile int64_t t70 = -80913921LL;
static int32_t x2484 = 3;
int32_t t72 = 197440948;
volatile int8_t x2611 = -1;
static int8_t x2625 = INT8_MIN;
uint16_t x2628 = 0U;
static int16_t x2640 = 45;
int32_t x2641 = 20781;
static int32_t x2683 = INT32_MIN;
int32_t t79 = 6365024;
int16_t x2747 = -1;
static int64_t t81 = 131LL;
static uint8_t x2773 = 12U;
static int8_t x2821 = 0;
volatile int8_t x2841 = -1;
int64_t x2842 = -1LL;
int8_t x2919 = INT8_MAX;
int64_t t88 = 14245720613908791LL;
int8_t x2940 = 1;
int64_t x3021 = INT64_MAX;
static uint64_t x3022 = 76LLU;
static int64_t x3023 = INT64_MIN;
uint64_t t92 = 9888783331405461LLU;
uint32_t x3059 = 3160U;
volatile int32_t t94 = -1480183;
uint8_t x3136 = 0U;
static uint32_t t96 = 8438086U;
static int32_t x3302 = 2190;
static volatile int64_t x3355 = -2063122626569LL;
int16_t x3356 = 1;


void f0(void) {
	static int32_t x33 = INT32_MIN;
	uint8_t x34 = 0U;
	int64_t x35 = INT64_MIN;
	uint8_t x36 = 6U;
	int64_t t0 = 944LL;

	t0 = ((x33&(x34&x35))>>x36);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x37 = INT8_MAX;
	int8_t x38 = INT8_MIN;
	static uint8_t x40 = 7U;

	t1 = ((x37&(x38&x39))>>x40);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x53 = -46;
	uint8_t x54 = 68U;
	volatile int8_t x55 = INT8_MIN;
	int32_t x56 = 0;
	int32_t t2 = 216;

	t2 = ((x53&(x54&x55))>>x56);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x61 = -1LL;
	int16_t x63 = INT16_MIN;
	volatile int8_t x64 = 20;
	int64_t t3 = -4151LL;

	t3 = ((x61&(x62&x63))>>x64);

	if (t3 != 193LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x66 = -1;
	int64_t x67 = INT64_MAX;
	int8_t x68 = 0;
	volatile int64_t t4 = -895052536LL;

	t4 = ((x65&(x66&x67))>>x68);

	if (t4 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x81 = INT64_MAX;
	static int32_t x82 = 2990;
	int32_t x83 = INT32_MIN;
	static uint16_t x84 = 1U;

	t5 = ((x81&(x82&x83))>>x84);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x109 = INT16_MAX;
	volatile int32_t x110 = -472791155;
	uint16_t x111 = UINT16_MAX;
	int8_t x112 = 0;
	static int32_t t6 = -57997394;

	t6 = ((x109&(x110&x111))>>x112);

	if (t6 != 18317) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x153 = 10;
	int32_t x154 = INT32_MAX;
	int16_t x155 = 1103;
	static uint16_t x156 = 20U;

	t7 = ((x153&(x154&x155))>>x156);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x157 = -1LL;
	uint32_t x158 = 3565U;
	int32_t x159 = -1;
	int8_t x160 = 0;
	volatile int64_t t8 = 337190582LL;

	t8 = ((x157&(x158&x159))>>x160);

	if (t8 != 3565LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x237 = UINT64_MAX;
	uint8_t x238 = 0U;
	static uint64_t x239 = 1732447194LLU;
	static uint16_t x240 = 6U;

	t9 = ((x237&(x238&x239))>>x240);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x305 = UINT32_MAX;
	int16_t x306 = 29;
	int64_t x307 = INT64_MAX;

	t10 = ((x305&(x306&x307))>>x308);

	if (t10 != 29LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x353 = UINT64_MAX;
	volatile uint8_t x354 = 1U;
	uint64_t x356 = 0LLU;
	static volatile uint64_t t11 = 149505650851521400LLU;

	t11 = ((x353&(x354&x355))>>x356);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x406 = 0U;
	uint64_t x407 = 29706LLU;
	int16_t x408 = 2;
	uint64_t t12 = 695LLU;

	t12 = ((x405&(x406&x407))>>x408);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x453 = UINT32_MAX;
	int8_t x454 = 1;
	static volatile int8_t x455 = -2;
	uint8_t x456 = 3U;
	uint32_t t13 = 5635U;

	t13 = ((x453&(x454&x455))>>x456);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x490 = INT64_MIN;
	int8_t x491 = 2;
	volatile uint16_t x492 = 1U;
	int64_t t14 = -197144LL;

	t14 = ((x489&(x490&x491))>>x492);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x493 = INT32_MAX;
	int64_t x494 = -3089483105112607970LL;
	int32_t x495 = 64798832;
	volatile int64_t t15 = -885106990870845LL;

	t15 = ((x493&(x494&x495))>>x496);

	if (t15 != 1024LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x598 = INT32_MIN;
	static int32_t x599 = 2;
	int8_t x600 = 1;
	int32_t t16 = 183;

	t16 = ((x597&(x598&x599))>>x600);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x674 = 936;
	int8_t x675 = -1;
	int32_t x676 = 1;
	volatile int32_t t17 = -248952;

	t17 = ((x673&(x674&x675))>>x676);

	if (t17 != 468) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x722 = -203;
	int64_t x723 = -19511828977227307LL;
	int64_t t18 = -751803813LL;

	t18 = ((x721&(x722&x723))>>x724);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x805 = 42940LL;
	int8_t x806 = INT8_MIN;
	uint16_t x807 = UINT16_MAX;
	int16_t x808 = 0;
	int64_t t19 = 131450388512228LL;

	t19 = ((x805&(x806&x807))>>x808);

	if (t19 != 42880LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x858 = -1;
	uint32_t x860 = 26U;
	static volatile uint64_t t20 = 92345LLU;

	t20 = ((x857&(x858&x859))>>x860);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x885 = 105U;
	uint64_t x886 = 103LLU;
	static int32_t x887 = INT32_MIN;
	int64_t x888 = 2LL;
	volatile uint64_t t21 = 29248087245409LLU;

	t21 = ((x885&(x886&x887))>>x888);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x894 = -4;
	uint16_t x895 = 3U;
	uint16_t x896 = 0U;
	uint64_t t22 = 3333892818LLU;

	t22 = ((x893&(x894&x895))>>x896);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x947 = 7U;
	int16_t x948 = 1;
	int64_t t23 = -54123976817LL;

	t23 = ((x945&(x946&x947))>>x948);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x957 = 0U;
	uint8_t x958 = 27U;
	int8_t x959 = INT8_MIN;
	int32_t t24 = 291;

	t24 = ((x957&(x958&x959))>>x960);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x965 = 206932;
	uint64_t x966 = 1404543182330368881LLU;
	uint16_t x968 = 1U;
	uint64_t t25 = 15LLU;

	t25 = ((x965&(x966&x967))>>x968);

	if (t25 != 98344LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1049 = 396554388904695444LLU;
	uint64_t x1050 = 152588333250925858LLU;
	static uint8_t x1051 = UINT8_MAX;
	int16_t x1052 = 38;
	volatile uint64_t t26 = 1LLU;

	t26 = ((x1049&(x1050&x1051))>>x1052);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1146 = 2785U;
	uint16_t x1147 = 58U;

	t27 = ((x1145&(x1146&x1147))>>x1148);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint8_t x1202 = UINT8_MAX;
	volatile int16_t x1203 = INT16_MIN;
	int8_t x1204 = 0;
	int64_t t28 = 12018637LL;

	t28 = ((x1201&(x1202&x1203))>>x1204);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1214 = -3304327;
	int64_t x1215 = INT64_MIN;
	int64_t x1216 = 3LL;
	volatile int64_t t29 = 1319991LL;

	t29 = ((x1213&(x1214&x1215))>>x1216);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1218 = -15318;
	static int8_t x1220 = 11;
	static volatile int32_t t30 = -19903;

	t30 = ((x1217&(x1218&x1219))>>x1220);

	if (t30 != 8) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1241 = INT64_MAX;
	int32_t x1243 = INT32_MIN;
	uint16_t x1244 = 3U;
	static volatile int64_t t31 = -8066015902422LL;

	t31 = ((x1241&(x1242&x1243))>>x1244);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x1297 = 176;
	volatile int8_t x1298 = -1;
	static int16_t x1299 = 1932;
	int8_t x1300 = 0;
	int32_t t32 = -119;

	t32 = ((x1297&(x1298&x1299))>>x1300);

	if (t32 != 128) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1302 = 1U;
	int16_t x1304 = 1;
	static volatile int32_t t33 = -4659747;

	t33 = ((x1301&(x1302&x1303))>>x1304);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x1313 = 2;
	uint32_t x1314 = 258804U;
	uint8_t x1316 = 26U;
	uint32_t t34 = 111U;

	t34 = ((x1313&(x1314&x1315))>>x1316);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint8_t x1334 = 0U;
	volatile uint64_t x1335 = 0LLU;
	static int8_t x1336 = 10;
	volatile uint64_t t35 = 175998LLU;

	t35 = ((x1333&(x1334&x1335))>>x1336);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x1341 = -1;
	uint32_t x1342 = 85097U;
	int64_t x1343 = -1LL;
	volatile uint8_t x1344 = 7U;
	volatile int64_t t36 = -60772985916163LL;

	t36 = ((x1341&(x1342&x1343))>>x1344);

	if (t36 != 664LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x1349 = INT64_MAX;
	int8_t x1350 = INT8_MIN;
	uint16_t x1351 = 1U;
	int64_t t37 = 2149436950933158517LL;

	t37 = ((x1349&(x1350&x1351))>>x1352);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x1433 = 0;
	static int8_t x1434 = -1;
	int16_t x1436 = 28;
	static int32_t t38 = -1;

	t38 = ((x1433&(x1434&x1435))>>x1436);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x1474 = 1;
	volatile uint8_t x1475 = 9U;
	uint16_t x1476 = 16U;
	static volatile int32_t t39 = -12706478;

	t39 = ((x1473&(x1474&x1475))>>x1476);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1481 = UINT8_MAX;
	volatile uint32_t x1482 = 1910621607U;
	uint64_t x1483 = 238LLU;
	volatile int8_t x1484 = 23;
	static uint64_t t40 = 9561046558861354LLU;

	t40 = ((x1481&(x1482&x1483))>>x1484);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1489 = INT32_MIN;
	static int64_t x1490 = INT64_MAX;
	volatile int8_t x1491 = -7;
	int32_t x1492 = 3;

	t41 = ((x1489&(x1490&x1491))>>x1492);

	if (t41 != 1152921504338411520LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1517 = 5U;
	int32_t x1518 = -1;
	volatile int16_t x1519 = INT16_MIN;
	int32_t t42 = 23659;

	t42 = ((x1517&(x1518&x1519))>>x1520);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x1533 = INT8_MAX;
	int16_t x1534 = INT16_MAX;
	int32_t x1536 = 3;
	volatile int32_t t43 = 15847560;

	t43 = ((x1533&(x1534&x1535))>>x1536);

	if (t43 != 15) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1537 = 1;
	volatile int8_t x1540 = 16;
	int32_t t44 = -17;

	t44 = ((x1537&(x1538&x1539))>>x1540);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x1553 = 5U;
	static int64_t x1554 = INT64_MIN;
	int16_t x1556 = 43;
	volatile int64_t t45 = -11193LL;

	t45 = ((x1553&(x1554&x1555))>>x1556);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1593 = INT32_MIN;
	int8_t x1595 = 0;
	volatile int32_t t46 = -32572;

	t46 = ((x1593&(x1594&x1595))>>x1596);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x1597 = INT64_MIN;
	uint16_t x1598 = UINT16_MAX;
	static int64_t x1599 = INT64_MIN;
	uint8_t x1600 = 22U;
	static volatile int64_t t47 = -2573332380938906299LL;

	t47 = ((x1597&(x1598&x1599))>>x1600);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x1625 = INT64_MAX;
	int32_t x1626 = INT32_MIN;
	uint16_t x1627 = 20U;

	t48 = ((x1625&(x1626&x1627))>>x1628);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x1645 = INT64_MIN;
	volatile int8_t x1646 = INT8_MIN;
	static uint16_t x1647 = 26U;
	volatile uint16_t x1648 = 26U;

	t49 = ((x1645&(x1646&x1647))>>x1648);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x1665 = INT32_MAX;
	volatile uint16_t x1666 = UINT16_MAX;
	uint32_t x1668 = 12U;
	volatile int32_t t50 = 353974954;

	t50 = ((x1665&(x1666&x1667))>>x1668);

	if (t50 != 15) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x1673 = INT16_MIN;
	int32_t x1674 = -622410;
	uint16_t x1675 = UINT16_MAX;
	volatile int32_t t51 = -518074;

	t51 = ((x1673&(x1674&x1675))>>x1676);

	if (t51 != 32768) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1741 = INT32_MIN;
	volatile uint32_t x1744 = 0U;
	uint32_t t52 = 1U;

	t52 = ((x1741&(x1742&x1743))>>x1744);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x1777 = UINT16_MAX;
	static uint8_t x1778 = 0U;
	int32_t x1779 = INT32_MIN;
	static volatile uint8_t x1780 = 15U;
	volatile int32_t t53 = -270;

	t53 = ((x1777&(x1778&x1779))>>x1780);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x1829 = -2;
	static int8_t x1830 = -1;
	int64_t x1831 = INT64_MAX;
	uint32_t x1832 = 18U;
	int64_t t54 = 3871272552392LL;

	t54 = ((x1829&(x1830&x1831))>>x1832);

	if (t54 != 35184372088831LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1833 = -1;
	int16_t x1834 = 1;
	int32_t x1835 = INT32_MIN;
	uint16_t x1836 = 6U;
	volatile int32_t t55 = 186220;

	t55 = ((x1833&(x1834&x1835))>>x1836);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x1973 = 12288LL;
	volatile uint16_t x1974 = 388U;
	static uint16_t x1975 = UINT16_MAX;
	uint64_t x1976 = 51LLU;
	static int64_t t56 = -924390LL;

	t56 = ((x1973&(x1974&x1975))>>x1976);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x2034 = 10;
	uint16_t x2035 = 891U;
	volatile uint32_t x2036 = 9U;
	static uint64_t t57 = 9LLU;

	t57 = ((x2033&(x2034&x2035))>>x2036);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x2101 = INT64_MIN;
	static int16_t x2103 = INT16_MIN;
	volatile int16_t x2104 = 9;
	volatile int64_t t58 = 47951LL;

	t58 = ((x2101&(x2102&x2103))>>x2104);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2117 = INT16_MAX;
	int64_t x2119 = INT64_MIN;
	volatile uint16_t x2120 = 1U;

	t59 = ((x2117&(x2118&x2119))>>x2120);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x2121 = 9386323U;
	int64_t x2122 = -1LL;
	volatile uint32_t x2123 = 13749U;
	uint8_t x2124 = 1U;
	int64_t t60 = -632777LL;

	t60 = ((x2121&(x2122&x2123))>>x2124);

	if (t60 != 6280LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x2153 = 0U;
	static volatile int64_t x2154 = -1LL;
	static int16_t x2156 = 7;
	volatile int64_t t61 = -402847070943259LL;

	t61 = ((x2153&(x2154&x2155))>>x2156);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x2173 = 43U;
	volatile uint32_t x2174 = 65U;
	uint8_t x2176 = 33U;
	int64_t t62 = 2072609LL;

	t62 = ((x2173&(x2174&x2175))>>x2176);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x2202 = UINT8_MAX;
	int16_t x2203 = 1363;
	uint32_t x2204 = 22U;
	static volatile int32_t t63 = 465;

	t63 = ((x2201&(x2202&x2203))>>x2204);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x2269 = 1829562LL;
	volatile int32_t x2270 = 236279;
	uint32_t x2272 = 6U;
	static volatile int64_t t64 = 19694851869313LL;

	t64 = ((x2269&(x2270&x2271))>>x2272);

	if (t64 != 554LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x2298 = INT16_MIN;
	static uint16_t x2299 = 44U;
	uint8_t x2300 = 1U;
	int64_t t65 = -137992653LL;

	t65 = ((x2297&(x2298&x2299))>>x2300);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x2353 = -104LL;
	uint8_t x2354 = 3U;
	volatile int32_t x2355 = INT32_MIN;
	uint8_t x2356 = 20U;
	int64_t t66 = -5235140LL;

	t66 = ((x2353&(x2354&x2355))>>x2356);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x2413 = -1LL;
	uint64_t x2414 = 9170151LLU;
	volatile int8_t x2415 = -1;
	uint8_t x2416 = 22U;
	volatile uint64_t t67 = 674335050LLU;

	t67 = ((x2413&(x2414&x2415))>>x2416);

	if (t67 != 2LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2433 = -1;
	static uint16_t x2434 = UINT16_MAX;
	int32_t x2435 = 235325214;
	static uint8_t x2436 = 5U;

	t68 = ((x2433&(x2434&x2435))>>x2436);

	if (t68 != 1592) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x2457 = -1;
	int8_t x2458 = INT8_MIN;
	int8_t x2459 = INT8_MAX;
	uint16_t x2460 = 22U;
	int32_t t69 = 1756;

	t69 = ((x2457&(x2458&x2459))>>x2460);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x2461 = 1U;
	static int64_t x2462 = 14573068846733210LL;
	uint32_t x2464 = 1U;

	t70 = ((x2461&(x2462&x2463))>>x2464);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x2481 = 10;
	int8_t x2482 = INT8_MIN;
	uint16_t x2483 = UINT16_MAX;
	int32_t t71 = -8234;

	t71 = ((x2481&(x2482&x2483))>>x2484);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x2545 = 2805U;
	int32_t x2546 = INT32_MAX;
	int8_t x2547 = INT8_MIN;
	int32_t x2548 = 2;

	t72 = ((x2545&(x2546&x2547))>>x2548);

	if (t72 != 672) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x2609 = -1322952972182357LL;
	int64_t x2610 = 188466975467073389LL;
	static uint8_t x2612 = 3U;
	int64_t t73 = -1376718805094596829LL;

	t73 = ((x2609&(x2610&x2611))>>x2612);

	if (t73 != 23397676158626181LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x2626 = INT64_MAX;
	int8_t x2627 = -1;
	static volatile int64_t t74 = 963961567LL;

	t74 = ((x2625&(x2626&x2627))>>x2628);

	if (t74 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x2637 = 66U;
	static uint64_t x2638 = UINT64_MAX;
	int64_t x2639 = -4341963855704759LL;
	uint64_t t75 = 2445638LLU;

	t75 = ((x2637&(x2638&x2639))>>x2640);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x2642 = -1;
	volatile uint32_t x2643 = 5197U;
	uint16_t x2644 = 6U;
	volatile uint32_t t76 = 65081120U;

	t76 = ((x2641&(x2642&x2643))>>x2644);

	if (t76 != 64U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x2653 = -59970904565152LL;
	uint16_t x2654 = 3U;
	uint32_t x2655 = UINT32_MAX;
	volatile uint8_t x2656 = 0U;
	volatile int64_t t77 = 45240361450LL;

	t77 = ((x2653&(x2654&x2655))>>x2656);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x2665 = 25U;
	int32_t x2666 = INT32_MIN;
	uint16_t x2667 = 179U;
	static uint16_t x2668 = 14U;
	int32_t t78 = 7;

	t78 = ((x2665&(x2666&x2667))>>x2668);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x2681 = INT16_MIN;
	volatile uint16_t x2682 = UINT16_MAX;
	int8_t x2684 = 0;

	t79 = ((x2681&(x2682&x2683))>>x2684);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x2745 = INT64_MIN;
	uint32_t x2746 = 7537419U;
	volatile uint8_t x2748 = 1U;
	int64_t t80 = -11293314588744LL;

	t80 = ((x2745&(x2746&x2747))>>x2748);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x2761 = INT16_MIN;
	int64_t x2762 = -5498847LL;
	int32_t x2763 = 29951;
	uint8_t x2764 = 12U;

	t81 = ((x2761&(x2762&x2763))>>x2764);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x2774 = INT16_MIN;
	uint16_t x2775 = UINT16_MAX;
	int32_t x2776 = 1;
	int32_t t82 = -2152753;

	t82 = ((x2773&(x2774&x2775))>>x2776);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x2822 = -1538LL;
	int32_t x2823 = INT32_MAX;
	int8_t x2824 = 31;
	int64_t t83 = 4006LL;

	t83 = ((x2821&(x2822&x2823))>>x2824);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x2843 = 21U;
	uint8_t x2844 = 2U;
	int64_t t84 = -456824120979LL;

	t84 = ((x2841&(x2842&x2843))>>x2844);

	if (t84 != 5LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x2853 = -200;
	volatile uint8_t x2854 = 4U;
	volatile uint8_t x2855 = 86U;
	static uint8_t x2856 = 27U;
	static int32_t t85 = -193321;

	t85 = ((x2853&(x2854&x2855))>>x2856);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x2873 = INT16_MAX;
	uint16_t x2874 = UINT16_MAX;
	static int64_t x2875 = -1LL;
	uint8_t x2876 = 27U;
	int64_t t86 = -41955LL;

	t86 = ((x2873&(x2874&x2875))>>x2876);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x2909 = INT64_MAX;
	int64_t x2910 = INT64_MIN;
	static int16_t x2911 = INT16_MIN;
	static uint8_t x2912 = 23U;
	volatile int64_t t87 = -260846537265LL;

	t87 = ((x2909&(x2910&x2911))>>x2912);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x2917 = -1LL;
	int32_t x2918 = -1;
	uint8_t x2920 = 23U;

	t88 = ((x2917&(x2918&x2919))>>x2920);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x2937 = 30U;
	volatile int16_t x2938 = -1;
	int64_t x2939 = -188292627311LL;
	int64_t t89 = -58255632563247922LL;

	t89 = ((x2937&(x2938&x2939))>>x2940);

	if (t89 != 8LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x2981 = 2LLU;
	uint64_t x2982 = UINT64_MAX;
	int8_t x2983 = INT8_MAX;
	uint64_t x2984 = 36LLU;
	uint64_t t90 = 2379636349532617LLU;

	t90 = ((x2981&(x2982&x2983))>>x2984);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x3013 = -59;
	static uint8_t x3014 = 1U;
	int64_t x3015 = INT64_MIN;
	int8_t x3016 = 10;
	int64_t t91 = -7437838LL;

	t91 = ((x3013&(x3014&x3015))>>x3016);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x3024 = 3U;

	t92 = ((x3021&(x3022&x3023))>>x3024);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x3057 = -3;
	uint64_t x3058 = 77062646749863597LLU;
	volatile int16_t x3060 = 7;
	static volatile uint64_t t93 = 1632LLU;

	t93 = ((x3057&(x3058&x3059))>>x3060);

	if (t93 != 24LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x3129 = UINT8_MAX;
	volatile int8_t x3130 = -1;
	uint8_t x3131 = UINT8_MAX;
	uint16_t x3132 = 8U;

	t94 = ((x3129&(x3130&x3131))>>x3132);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x3133 = INT16_MIN;
	int64_t x3134 = -1LL;
	int64_t x3135 = INT64_MAX;
	static volatile int64_t t95 = -4005336289LL;

	t95 = ((x3133&(x3134&x3135))>>x3136);

	if (t95 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x3281 = 1373413242U;
	volatile int32_t x3282 = INT32_MIN;
	volatile int32_t x3283 = INT32_MAX;
	volatile uint8_t x3284 = 3U;

	t96 = ((x3281&(x3282&x3283))>>x3284);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x3289 = 12062519LLU;
	uint8_t x3290 = 81U;
	static uint32_t x3291 = UINT32_MAX;
	uint16_t x3292 = 17U;
	uint64_t t97 = 15806LLU;

	t97 = ((x3289&(x3290&x3291))>>x3292);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x3301 = INT32_MIN;
	uint8_t x3303 = 1U;
	uint16_t x3304 = 0U;
	volatile int32_t t98 = -1051262558;

	t98 = ((x3301&(x3302&x3303))>>x3304);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x3353 = INT8_MIN;
	int8_t x3354 = INT8_MAX;
	volatile int64_t t99 = -1567388769755694089LL;

	t99 = ((x3353&(x3354&x3355))>>x3356);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

