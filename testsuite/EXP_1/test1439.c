#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x64 = 0;
uint64_t x101 = 12498283884019LLU;
int8_t x103 = 0;
uint8_t x123 = 1U;
int32_t t4 = 1402788;
volatile int8_t x145 = INT8_MIN;
uint16_t x295 = 15U;
int8_t x437 = INT8_MAX;
volatile uint64_t x480 = UINT64_MAX;
int32_t t12 = 1;
volatile int32_t t13 = -2082756;
static volatile uint8_t x527 = 1U;
uint32_t x564 = 144U;
static int32_t t18 = 0;
int32_t x664 = INT32_MIN;
int32_t t20 = -214366;
int32_t t22 = 24;
int64_t x854 = INT64_MIN;
static volatile uint64_t x956 = UINT64_MAX;
int64_t x1077 = INT64_MIN;
volatile uint32_t x1094 = UINT32_MAX;
int32_t t29 = -2;
uint32_t x1102 = 4687107U;
int8_t x1125 = INT8_MAX;
uint8_t x1160 = 10U;
volatile int32_t t34 = -3932;
volatile uint32_t x1282 = UINT32_MAX;
int64_t x1283 = 3LL;
static uint16_t x1284 = UINT16_MAX;
static volatile int32_t x1294 = 0;
volatile int32_t t37 = 10;
static int16_t x1386 = INT16_MIN;
volatile uint8_t x1387 = 6U;
int16_t x1420 = 102;
int8_t x1434 = -1;
uint16_t x1435 = 26U;
volatile int8_t x1446 = INT8_MIN;
int32_t x1528 = INT32_MAX;
int32_t x1530 = -5776;
uint64_t x1532 = 364008LLU;
int32_t t47 = 3301;
uint64_t x1593 = UINT64_MAX;
int32_t x1599 = 2;
int64_t x1622 = INT64_MIN;
volatile int8_t x1623 = 2;
uint8_t x1624 = UINT8_MAX;
int32_t t51 = -3;
int8_t x1704 = INT8_MIN;
int32_t t55 = -6993;
uint16_t x1904 = 2526U;
static uint32_t x1953 = 566U;
uint16_t x2155 = 7U;
int32_t t66 = 311886967;
int64_t x2166 = -1LL;
uint8_t x2183 = 1U;
int8_t x2193 = 0;
int32_t x2196 = -226024;
static uint64_t x2202 = 2056520LLU;
int16_t x2214 = -2;
int8_t x2279 = 3;
int32_t x2280 = INT32_MIN;
static int8_t x2291 = 1;
volatile int32_t t75 = -102564889;
volatile uint64_t x2325 = UINT64_MAX;
int8_t x2337 = -1;
static int32_t x2377 = 2959;
uint32_t x2512 = UINT32_MAX;
static volatile int32_t t84 = 3622585;
static int32_t x2573 = INT32_MAX;
volatile uint32_t x2576 = UINT32_MAX;
static int16_t x2580 = 177;
int64_t x2595 = 14LL;
uint32_t x2720 = 910U;
int32_t t91 = -14930;
uint64_t x2806 = 2546921LLU;
uint16_t x2867 = 13U;
int32_t t94 = 4069;
static uint8_t x2883 = 3U;
uint8_t x3008 = 2U;
static volatile int32_t t98 = -3362;
volatile uint8_t x3057 = 10U;


void f0(void) {
	static volatile int32_t x1 = 92884027;
	static uint8_t x2 = 10U;
	int8_t x3 = 5;
	static uint64_t x4 = UINT64_MAX;
	static int32_t t0 = 28;

	t0 = (((x1<x2)>>x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x53 = INT16_MIN;
	uint16_t x54 = 37U;
	uint8_t x55 = 6U;
	volatile uint8_t x56 = UINT8_MAX;
	static int32_t t1 = 16483362;

	t1 = (((x53<x54)>>x55)<x56);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint8_t x61 = 0U;
	volatile int32_t x62 = 102893621;
	static volatile uint8_t x63 = 4U;
	volatile int32_t t2 = -729;

	t2 = (((x61<x62)>>x63)<x64);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x102 = -1;
	uint16_t x104 = 4168U;
	volatile int32_t t3 = 3;

	t3 = (((x101<x102)>>x103)<x104);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x121 = INT8_MIN;
	int64_t x122 = INT64_MIN;
	static uint32_t x124 = 453916046U;

	t4 = (((x121<x122)>>x123)<x124);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x146 = 6U;
	static uint8_t x147 = 5U;
	static int16_t x148 = INT16_MAX;
	volatile int32_t t5 = 75229064;

	t5 = (((x145<x146)>>x147)<x148);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x189 = INT64_MAX;
	static int16_t x190 = -35;
	volatile uint64_t x191 = 7LLU;
	static uint64_t x192 = 98619981LLU;
	int32_t t6 = 266;

	t6 = (((x189<x190)>>x191)<x192);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x293 = -600;
	int64_t x294 = -123444915287337490LL;
	int32_t x296 = INT32_MIN;
	static int32_t t7 = 54;

	t7 = (((x293<x294)>>x295)<x296);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x321 = 70U;
	uint64_t x322 = UINT64_MAX;
	volatile uint32_t x323 = 24U;
	static volatile int16_t x324 = INT16_MIN;
	volatile int32_t t8 = 513272;

	t8 = (((x321<x322)>>x323)<x324);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x333 = -1;
	static volatile uint64_t x334 = UINT64_MAX;
	volatile int8_t x335 = 27;
	int64_t x336 = 7LL;
	volatile int32_t t9 = -1;

	t9 = (((x333<x334)>>x335)<x336);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x345 = INT32_MIN;
	volatile uint64_t x346 = 7028048637LLU;
	uint32_t x347 = 5U;
	uint32_t x348 = 20897U;
	volatile int32_t t10 = -12987424;

	t10 = (((x345<x346)>>x347)<x348);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x438 = INT64_MIN;
	static uint8_t x439 = 12U;
	volatile uint8_t x440 = UINT8_MAX;
	volatile int32_t t11 = -1110193;

	t11 = (((x437<x438)>>x439)<x440);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x477 = -330509839;
	uint32_t x478 = UINT32_MAX;
	int16_t x479 = 1;

	t12 = (((x477<x478)>>x479)<x480);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x481 = -1;
	uint16_t x482 = 81U;
	uint8_t x483 = 8U;
	uint32_t x484 = UINT32_MAX;

	t13 = (((x481<x482)>>x483)<x484);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x525 = 548861362U;
	uint64_t x526 = UINT64_MAX;
	int64_t x528 = -20330283234LL;
	int32_t t14 = 480553290;

	t14 = (((x525<x526)>>x527)<x528);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x537 = -15;
	uint64_t x538 = UINT64_MAX;
	int8_t x539 = 3;
	static int32_t x540 = INT32_MIN;
	int32_t t15 = -129;

	t15 = (((x537<x538)>>x539)<x540);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x561 = INT16_MIN;
	int16_t x562 = INT16_MIN;
	int8_t x563 = 15;
	volatile int32_t t16 = -33561;

	t16 = (((x561<x562)>>x563)<x564);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x589 = INT32_MAX;
	static uint32_t x590 = UINT32_MAX;
	int8_t x591 = 1;
	int32_t x592 = -1;
	volatile int32_t t17 = -3880;

	t17 = (((x589<x590)>>x591)<x592);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x593 = INT64_MIN;
	int32_t x594 = -1;
	uint8_t x595 = 2U;
	volatile uint8_t x596 = UINT8_MAX;

	t18 = (((x593<x594)>>x595)<x596);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x657 = -1;
	volatile int64_t x658 = -1LL;
	uint8_t x659 = 8U;
	static int8_t x660 = INT8_MIN;
	volatile int32_t t19 = -67;

	t19 = (((x657<x658)>>x659)<x660);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x661 = INT16_MAX;
	int32_t x662 = INT32_MIN;
	volatile int8_t x663 = 0;

	t20 = (((x661<x662)>>x663)<x664);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x781 = INT8_MAX;
	static volatile int32_t x782 = INT32_MAX;
	int16_t x783 = 6;
	int32_t x784 = INT32_MIN;
	volatile int32_t t21 = 118936;

	t21 = (((x781<x782)>>x783)<x784);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x813 = 3U;
	int8_t x814 = 48;
	int8_t x815 = 9;
	int64_t x816 = INT64_MIN;

	t22 = (((x813<x814)>>x815)<x816);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x853 = INT32_MIN;
	uint8_t x855 = 4U;
	int8_t x856 = -1;
	int32_t t23 = -21409982;

	t23 = (((x853<x854)>>x855)<x856);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x929 = 1;
	int16_t x930 = 58;
	static uint16_t x931 = 0U;
	int16_t x932 = INT16_MIN;
	volatile int32_t t24 = 928765990;

	t24 = (((x929<x930)>>x931)<x932);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x941 = -1;
	static volatile int64_t x942 = -1792LL;
	uint16_t x943 = 27U;
	int64_t x944 = 418893284854LL;
	static volatile int32_t t25 = 6950;

	t25 = (((x941<x942)>>x943)<x944);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x953 = 54;
	static int8_t x954 = 55;
	uint16_t x955 = 0U;
	static int32_t t26 = -7458193;

	t26 = (((x953<x954)>>x955)<x956);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x985 = UINT64_MAX;
	int32_t x986 = -1;
	volatile uint32_t x987 = 30U;
	int16_t x988 = INT16_MAX;
	int32_t t27 = -18177;

	t27 = (((x985<x986)>>x987)<x988);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x1078 = 179410891668844LLU;
	uint64_t x1079 = 2LLU;
	int8_t x1080 = 0;
	static int32_t t28 = -8619;

	t28 = (((x1077<x1078)>>x1079)<x1080);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1093 = UINT64_MAX;
	int8_t x1095 = 0;
	int64_t x1096 = -9631073322165651LL;

	t29 = (((x1093<x1094)>>x1095)<x1096);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x1101 = INT8_MIN;
	uint16_t x1103 = 1U;
	int16_t x1104 = INT16_MAX;
	int32_t t30 = 31;

	t30 = (((x1101<x1102)>>x1103)<x1104);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x1126 = 18U;
	int16_t x1127 = 1;
	uint16_t x1128 = 788U;
	volatile int32_t t31 = -209412;

	t31 = (((x1125<x1126)>>x1127)<x1128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x1157 = INT16_MIN;
	static uint16_t x1158 = UINT16_MAX;
	volatile uint16_t x1159 = 0U;
	int32_t t32 = 397697945;

	t32 = (((x1157<x1158)>>x1159)<x1160);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x1185 = -2284251;
	static uint16_t x1186 = UINT16_MAX;
	static uint8_t x1187 = 2U;
	uint64_t x1188 = 902535LLU;
	static int32_t t33 = -423725870;

	t33 = (((x1185<x1186)>>x1187)<x1188);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1193 = INT64_MAX;
	static int16_t x1194 = -1;
	int16_t x1195 = 1;
	int16_t x1196 = INT16_MAX;

	t34 = (((x1193<x1194)>>x1195)<x1196);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x1225 = 129000749;
	uint64_t x1226 = UINT64_MAX;
	uint8_t x1227 = 1U;
	uint32_t x1228 = UINT32_MAX;
	int32_t t35 = 1;

	t35 = (((x1225<x1226)>>x1227)<x1228);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1281 = -50LL;
	int32_t t36 = -44253265;

	t36 = (((x1281<x1282)>>x1283)<x1284);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1293 = INT16_MIN;
	static int16_t x1295 = 1;
	uint32_t x1296 = 5505U;

	t37 = (((x1293<x1294)>>x1295)<x1296);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1385 = -1;
	int32_t x1388 = -1;
	volatile int32_t t38 = 47;

	t38 = (((x1385<x1386)>>x1387)<x1388);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x1405 = 20U;
	int8_t x1406 = 0;
	uint32_t x1407 = 29U;
	int16_t x1408 = -1;
	static volatile int32_t t39 = 1;

	t39 = (((x1405<x1406)>>x1407)<x1408);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x1417 = INT64_MAX;
	int64_t x1418 = INT64_MAX;
	static int32_t x1419 = 12;
	static int32_t t40 = 214148746;

	t40 = (((x1417<x1418)>>x1419)<x1420);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1433 = -1;
	static volatile int32_t x1436 = 187;
	static int32_t t41 = -7;

	t41 = (((x1433<x1434)>>x1435)<x1436);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x1441 = UINT32_MAX;
	volatile int64_t x1442 = -1LL;
	uint16_t x1443 = 2U;
	uint64_t x1444 = UINT64_MAX;
	int32_t t42 = 0;

	t42 = (((x1441<x1442)>>x1443)<x1444);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x1445 = 50958U;
	static int8_t x1447 = 0;
	uint16_t x1448 = 1U;
	volatile int32_t t43 = 511787196;

	t43 = (((x1445<x1446)>>x1447)<x1448);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1493 = 806;
	int64_t x1494 = INT64_MIN;
	uint16_t x1495 = 27U;
	int32_t x1496 = INT32_MIN;
	volatile int32_t t44 = 10152113;

	t44 = (((x1493<x1494)>>x1495)<x1496);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1525 = INT64_MIN;
	int16_t x1526 = -10553;
	uint64_t x1527 = 26LLU;
	int32_t t45 = 27154;

	t45 = (((x1525<x1526)>>x1527)<x1528);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1529 = INT64_MIN;
	volatile int8_t x1531 = 5;
	int32_t t46 = -383;

	t46 = (((x1529<x1530)>>x1531)<x1532);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1573 = -25814129761367260LL;
	static uint64_t x1574 = 40414482782530LLU;
	uint32_t x1575 = 26U;
	static int16_t x1576 = -37;

	t47 = (((x1573<x1574)>>x1575)<x1576);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x1581 = UINT8_MAX;
	int32_t x1582 = -1;
	volatile int16_t x1583 = 19;
	uint16_t x1584 = 1U;
	int32_t t48 = -3761584;

	t48 = (((x1581<x1582)>>x1583)<x1584);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1594 = -35579;
	static uint32_t x1595 = 26U;
	uint64_t x1596 = UINT64_MAX;
	static volatile int32_t t49 = 314723766;

	t49 = (((x1593<x1594)>>x1595)<x1596);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x1597 = -9;
	int16_t x1598 = INT16_MAX;
	int8_t x1600 = INT8_MIN;
	int32_t t50 = -34298539;

	t50 = (((x1597<x1598)>>x1599)<x1600);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x1621 = -3526;

	t51 = (((x1621<x1622)>>x1623)<x1624);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x1701 = INT64_MIN;
	static uint16_t x1702 = UINT16_MAX;
	uint16_t x1703 = 11U;
	static int32_t t52 = 3644;

	t52 = (((x1701<x1702)>>x1703)<x1704);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x1709 = INT8_MIN;
	int8_t x1710 = 6;
	int8_t x1711 = 1;
	volatile uint64_t x1712 = 14292457868422LLU;
	volatile int32_t t53 = 128304612;

	t53 = (((x1709<x1710)>>x1711)<x1712);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x1713 = INT32_MIN;
	int8_t x1714 = INT8_MIN;
	volatile uint16_t x1715 = 0U;
	int32_t x1716 = INT32_MAX;
	int32_t t54 = 772442;

	t54 = (((x1713<x1714)>>x1715)<x1716);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x1741 = 29451342LLU;
	volatile uint32_t x1742 = 1327371663U;
	static volatile int32_t x1743 = 1;
	volatile uint32_t x1744 = 14817387U;

	t55 = (((x1741<x1742)>>x1743)<x1744);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x1785 = UINT8_MAX;
	int8_t x1786 = 0;
	volatile int8_t x1787 = 3;
	int64_t x1788 = INT64_MIN;
	int32_t t56 = 20971;

	t56 = (((x1785<x1786)>>x1787)<x1788);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x1813 = UINT64_MAX;
	volatile int64_t x1814 = 29548743627500LL;
	uint64_t x1815 = 19LLU;
	static volatile int8_t x1816 = INT8_MIN;
	int32_t t57 = 349575;

	t57 = (((x1813<x1814)>>x1815)<x1816);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x1853 = -1;
	uint8_t x1854 = 1U;
	uint16_t x1855 = 21U;
	int8_t x1856 = INT8_MIN;
	volatile int32_t t58 = 33405;

	t58 = (((x1853<x1854)>>x1855)<x1856);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x1885 = UINT16_MAX;
	int32_t x1886 = -1;
	int16_t x1887 = 1;
	int16_t x1888 = INT16_MIN;
	volatile int32_t t59 = -4018;

	t59 = (((x1885<x1886)>>x1887)<x1888);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x1901 = INT64_MAX;
	uint64_t x1902 = 16621815397721956LLU;
	int16_t x1903 = 3;
	int32_t t60 = -60;

	t60 = (((x1901<x1902)>>x1903)<x1904);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x1954 = INT64_MIN;
	static uint16_t x1955 = 2U;
	int32_t x1956 = INT32_MIN;
	int32_t t61 = -253;

	t61 = (((x1953<x1954)>>x1955)<x1956);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2033 = 2;
	uint8_t x2034 = 119U;
	uint8_t x2035 = 9U;
	int8_t x2036 = -1;
	static volatile int32_t t62 = -29;

	t62 = (((x2033<x2034)>>x2035)<x2036);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x2077 = INT32_MIN;
	uint32_t x2078 = 176679356U;
	static uint16_t x2079 = 3U;
	uint32_t x2080 = 65U;
	volatile int32_t t63 = 175386970;

	t63 = (((x2077<x2078)>>x2079)<x2080);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x2101 = INT32_MIN;
	int32_t x2102 = INT32_MIN;
	uint16_t x2103 = 31U;
	uint64_t x2104 = UINT64_MAX;
	static int32_t t64 = -542;

	t64 = (((x2101<x2102)>>x2103)<x2104);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x2133 = 3697841300346568843LLU;
	volatile uint32_t x2134 = 2220U;
	int8_t x2135 = 29;
	uint16_t x2136 = 1865U;
	volatile int32_t t65 = -163948687;

	t65 = (((x2133<x2134)>>x2135)<x2136);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x2153 = 97436U;
	int32_t x2154 = INT32_MIN;
	int64_t x2156 = INT64_MIN;

	t66 = (((x2153<x2154)>>x2155)<x2156);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x2165 = 3U;
	volatile int8_t x2167 = 3;
	static int16_t x2168 = 128;
	int32_t t67 = -580878;

	t67 = (((x2165<x2166)>>x2167)<x2168);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x2181 = INT64_MIN;
	volatile uint16_t x2182 = 3675U;
	int32_t x2184 = -1;
	int32_t t68 = -1;

	t68 = (((x2181<x2182)>>x2183)<x2184);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x2194 = 538124184812LLU;
	int32_t x2195 = 2;
	int32_t t69 = 0;

	t69 = (((x2193<x2194)>>x2195)<x2196);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x2201 = INT32_MIN;
	static int64_t x2203 = 0LL;
	int8_t x2204 = -1;
	static int32_t t70 = -11;

	t70 = (((x2201<x2202)>>x2203)<x2204);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x2205 = INT16_MAX;
	volatile int32_t x2206 = INT32_MIN;
	volatile int8_t x2207 = 1;
	int32_t x2208 = INT32_MIN;
	volatile int32_t t71 = 1790;

	t71 = (((x2205<x2206)>>x2207)<x2208);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x2213 = 58U;
	uint8_t x2215 = 2U;
	int32_t x2216 = -1;
	volatile int32_t t72 = 461858270;

	t72 = (((x2213<x2214)>>x2215)<x2216);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x2257 = 703457LLU;
	int64_t x2258 = INT64_MIN;
	int8_t x2259 = 6;
	volatile int64_t x2260 = INT64_MIN;
	volatile int32_t t73 = 13;

	t73 = (((x2257<x2258)>>x2259)<x2260);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x2277 = INT8_MIN;
	int8_t x2278 = INT8_MIN;
	int32_t t74 = 30403;

	t74 = (((x2277<x2278)>>x2279)<x2280);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x2289 = INT8_MIN;
	int64_t x2290 = 0LL;
	int64_t x2292 = INT64_MAX;

	t75 = (((x2289<x2290)>>x2291)<x2292);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2326 = -1;
	volatile uint16_t x2327 = 29U;
	uint32_t x2328 = 1372U;
	volatile int32_t t76 = 28;

	t76 = (((x2325<x2326)>>x2327)<x2328);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x2338 = 1014290LLU;
	uint8_t x2339 = 4U;
	int16_t x2340 = INT16_MAX;
	int32_t t77 = -14491;

	t77 = (((x2337<x2338)>>x2339)<x2340);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2361 = 1233;
	static int64_t x2362 = INT64_MAX;
	uint8_t x2363 = 1U;
	int64_t x2364 = INT64_MIN;
	volatile int32_t t78 = 12;

	t78 = (((x2361<x2362)>>x2363)<x2364);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x2378 = INT16_MIN;
	volatile int16_t x2379 = 1;
	int32_t x2380 = INT32_MIN;
	volatile int32_t t79 = -1;

	t79 = (((x2377<x2378)>>x2379)<x2380);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x2493 = INT32_MAX;
	volatile uint64_t x2494 = 449000LLU;
	uint8_t x2495 = 11U;
	volatile int64_t x2496 = 1345LL;
	static volatile int32_t t80 = -7;

	t80 = (((x2493<x2494)>>x2495)<x2496);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x2509 = INT64_MAX;
	static int16_t x2510 = -1;
	uint8_t x2511 = 0U;
	int32_t t81 = 500943974;

	t81 = (((x2509<x2510)>>x2511)<x2512);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x2553 = 128990LLU;
	int32_t x2554 = INT32_MIN;
	uint8_t x2555 = 7U;
	int64_t x2556 = INT64_MIN;
	volatile int32_t t82 = -61508;

	t82 = (((x2553<x2554)>>x2555)<x2556);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x2565 = INT8_MIN;
	uint16_t x2566 = UINT16_MAX;
	int16_t x2567 = 16;
	int64_t x2568 = -1LL;
	volatile int32_t t83 = 2648;

	t83 = (((x2565<x2566)>>x2567)<x2568);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x2569 = 0;
	int32_t x2570 = INT32_MAX;
	uint8_t x2571 = 6U;
	int16_t x2572 = -16306;

	t84 = (((x2569<x2570)>>x2571)<x2572);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x2574 = INT8_MAX;
	int32_t x2575 = 11;
	volatile int32_t t85 = -11;

	t85 = (((x2573<x2574)>>x2575)<x2576);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x2577 = -1;
	uint16_t x2578 = 40U;
	static int64_t x2579 = 1LL;
	volatile int32_t t86 = -20;

	t86 = (((x2577<x2578)>>x2579)<x2580);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x2581 = 52;
	int16_t x2582 = INT16_MIN;
	static uint8_t x2583 = 9U;
	int32_t x2584 = -1;
	int32_t t87 = -23;

	t87 = (((x2581<x2582)>>x2583)<x2584);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x2593 = -24;
	volatile uint8_t x2594 = 14U;
	uint64_t x2596 = UINT64_MAX;
	int32_t t88 = 19;

	t88 = (((x2593<x2594)>>x2595)<x2596);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x2645 = -1;
	static volatile uint32_t x2646 = 1466U;
	volatile uint32_t x2647 = 23U;
	int8_t x2648 = INT8_MIN;
	volatile int32_t t89 = 0;

	t89 = (((x2645<x2646)>>x2647)<x2648);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x2709 = 3U;
	volatile uint32_t x2710 = UINT32_MAX;
	int32_t x2711 = 1;
	int64_t x2712 = -1LL;
	int32_t t90 = -10230198;

	t90 = (((x2709<x2710)>>x2711)<x2712);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x2717 = 105179LL;
	uint8_t x2718 = 3U;
	int16_t x2719 = 11;

	t91 = (((x2717<x2718)>>x2719)<x2720);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint8_t x2729 = 122U;
	uint32_t x2730 = 21527616U;
	int16_t x2731 = 0;
	uint8_t x2732 = UINT8_MAX;
	volatile int32_t t92 = 35963038;

	t92 = (((x2729<x2730)>>x2731)<x2732);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x2805 = -669;
	int8_t x2807 = 0;
	uint64_t x2808 = 3181807LLU;
	volatile int32_t t93 = -1258774;

	t93 = (((x2805<x2806)>>x2807)<x2808);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x2865 = INT16_MIN;
	uint16_t x2866 = 1U;
	uint8_t x2868 = 27U;

	t94 = (((x2865<x2866)>>x2867)<x2868);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x2881 = -1;
	uint32_t x2882 = 359283U;
	static uint32_t x2884 = 212U;
	int32_t t95 = -51309;

	t95 = (((x2881<x2882)>>x2883)<x2884);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x2993 = UINT64_MAX;
	uint32_t x2994 = UINT32_MAX;
	uint8_t x2995 = 1U;
	volatile uint8_t x2996 = 1U;
	volatile int32_t t96 = -2088410;

	t96 = (((x2993<x2994)>>x2995)<x2996);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x3005 = -319;
	volatile int64_t x3006 = 4168110785452078LL;
	static volatile int8_t x3007 = 1;
	volatile int32_t t97 = 84;

	t97 = (((x3005<x3006)>>x3007)<x3008);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x3013 = -1;
	static int32_t x3014 = 1;
	uint8_t x3015 = 11U;
	uint32_t x3016 = 10150869U;

	t98 = (((x3013<x3014)>>x3015)<x3016);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x3058 = 838306U;
	volatile uint8_t x3059 = 9U;
	volatile uint64_t x3060 = 344489LLU;
	volatile int32_t t99 = 35;

	t99 = (((x3057<x3058)>>x3059)<x3060);

	if (t99 != 1) { NG(); } else { ; }
	
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

