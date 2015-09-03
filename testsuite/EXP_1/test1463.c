#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x9 = -1LL;
uint32_t x10 = UINT32_MAX;
int8_t x142 = 3;
static volatile int32_t x179 = INT32_MIN;
volatile int32_t t2 = -61866;
static volatile int32_t t3 = 194253811;
static int32_t t6 = -8528;
static volatile int32_t t9 = 619044;
volatile uint32_t x439 = 136U;
uint16_t x440 = 15U;
int64_t x505 = 312191LL;
int16_t x513 = 54;
static uint16_t x559 = 7378U;
uint8_t x560 = 2U;
volatile int8_t x633 = 1;
int8_t x635 = 0;
int16_t x636 = 10;
uint64_t x681 = UINT64_MAX;
int16_t x720 = 1;
int32_t t17 = -117597;
uint32_t x842 = 26U;
int32_t x844 = 14;
volatile uint32_t x881 = 4481U;
static int8_t x883 = INT8_MIN;
static volatile uint32_t x937 = UINT32_MAX;
static volatile int32_t t20 = 4;
volatile int32_t x945 = INT32_MIN;
int16_t x999 = INT16_MIN;
volatile int32_t x1038 = INT32_MIN;
volatile uint8_t x1135 = 12U;
static int8_t x1141 = -2;
int8_t x1142 = -1;
static int8_t x1172 = 2;
static int16_t x1235 = 822;
uint32_t x1278 = 72353247U;
int16_t x1279 = -17;
int32_t t31 = 1;
volatile uint32_t x1326 = 859U;
int8_t x1341 = INT8_MIN;
static volatile uint32_t x1347 = UINT32_MAX;
uint64_t x1423 = 282834013LLU;
volatile int32_t t37 = -4;
static uint8_t x1450 = 0U;
int32_t t38 = 31768628;
int8_t x1517 = INT8_MIN;
int8_t x1520 = 1;
int32_t t42 = -1;
static int8_t x1612 = 6;
static volatile int32_t t44 = -523396219;
volatile int64_t x1627 = INT64_MAX;
uint64_t x1797 = 223415829251LLU;
int32_t x1799 = -1;
static volatile int32_t t47 = -465571627;
int32_t x1821 = INT32_MIN;
uint16_t x1823 = 3U;
volatile int16_t x1833 = -11;
uint64_t x1835 = 118LLU;
int64_t x1901 = -4821123793371975LL;
uint64_t x1902 = 69788LLU;
int64_t x1903 = -3715585628880870LL;
int16_t x1934 = INT16_MAX;
int8_t x1935 = 1;
uint32_t x1949 = 202U;
static int8_t x1970 = -1;
uint8_t x1971 = UINT8_MAX;
uint8_t x1972 = 1U;
uint64_t x2063 = 125061LLU;
volatile int8_t x2136 = 2;
uint32_t x2145 = 19978U;
uint64_t x2147 = UINT64_MAX;
int64_t x2211 = INT64_MIN;
uint16_t x2296 = 7U;
int8_t x2313 = INT8_MIN;
volatile int64_t x2314 = 43424447869LL;
uint32_t x2321 = 32281U;
uint8_t x2322 = 68U;
volatile int16_t x2324 = 4;
uint32_t x2331 = 7959U;
static int32_t t69 = 923;
int32_t x2361 = 9150724;
uint32_t x2368 = 5U;
volatile int32_t t72 = -1019;
uint8_t x2424 = 11U;
volatile int8_t x2542 = INT8_MIN;
volatile int32_t x2598 = -1389;
int8_t x2621 = INT8_MAX;
volatile int32_t t80 = 1992;
int8_t x2646 = INT8_MAX;
uint8_t x2648 = 14U;
static volatile int64_t x2701 = 970137228476755LL;
volatile uint16_t x2704 = 13U;
int32_t t83 = 6143;
static int32_t x2733 = INT32_MIN;
int8_t x2736 = 19;
uint32_t x2760 = 29U;
int32_t t90 = -54331;
volatile int8_t x2917 = 1;
int64_t x2919 = INT64_MAX;
volatile int32_t t91 = 56666384;
volatile int8_t x2987 = INT8_MIN;
int16_t x3029 = INT16_MIN;
static uint64_t x3055 = UINT64_MAX;
int32_t x3104 = 0;


void f0(void) {
	uint64_t x11 = 94273898200096LLU;
	uint8_t x12 = 0U;
	int32_t t0 = 0;

	t0 = (((x9<x10)<x11)>>x12);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x141 = INT64_MAX;
	static int16_t x143 = -1;
	static volatile int8_t x144 = 1;
	static volatile int32_t t1 = 213;

	t1 = (((x141<x142)<x143)>>x144);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x177 = INT16_MIN;
	uint32_t x178 = 0U;
	uint16_t x180 = 6U;

	t2 = (((x177<x178)<x179)>>x180);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x197 = INT32_MIN;
	volatile int32_t x198 = INT32_MAX;
	uint8_t x199 = 8U;
	int8_t x200 = 21;

	t3 = (((x197<x198)<x199)>>x200);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x221 = INT64_MIN;
	static int16_t x222 = -7;
	static volatile int8_t x223 = 0;
	uint16_t x224 = 19U;
	int32_t t4 = -97;

	t4 = (((x221<x222)<x223)>>x224);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x273 = UINT32_MAX;
	volatile int16_t x274 = INT16_MIN;
	int8_t x275 = INT8_MIN;
	static volatile int8_t x276 = 0;
	int32_t t5 = -38547325;

	t5 = (((x273<x274)<x275)>>x276);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x281 = 676;
	uint64_t x282 = 185091LLU;
	uint8_t x283 = 14U;
	int16_t x284 = 5;

	t6 = (((x281<x282)<x283)>>x284);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x285 = INT16_MAX;
	static volatile uint8_t x286 = 15U;
	volatile uint8_t x287 = UINT8_MAX;
	volatile int8_t x288 = 19;
	volatile int32_t t7 = -172;

	t7 = (((x285<x286)<x287)>>x288);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x377 = -11313195925108LL;
	int16_t x378 = INT16_MIN;
	int32_t x379 = -1606732;
	int8_t x380 = 31;
	volatile int32_t t8 = -205;

	t8 = (((x377<x378)<x379)>>x380);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x397 = 0;
	static int16_t x398 = INT16_MAX;
	static int16_t x399 = INT16_MAX;
	int32_t x400 = 20;

	t9 = (((x397<x398)<x399)>>x400);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x437 = 507;
	volatile int64_t x438 = INT64_MIN;
	static int32_t t10 = 329;

	t10 = (((x437<x438)<x439)>>x440);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x506 = INT16_MIN;
	static int16_t x507 = INT16_MIN;
	uint16_t x508 = 1U;
	int32_t t11 = 26;

	t11 = (((x505<x506)<x507)>>x508);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x514 = -1LL;
	volatile int32_t x515 = INT32_MAX;
	uint8_t x516 = 1U;
	int32_t t12 = -51686816;

	t12 = (((x513<x514)<x515)>>x516);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x557 = INT8_MAX;
	int32_t x558 = INT32_MAX;
	volatile int32_t t13 = 45425;

	t13 = (((x557<x558)<x559)>>x560);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint16_t x634 = UINT16_MAX;
	static volatile int32_t t14 = -23;

	t14 = (((x633<x634)<x635)>>x636);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x661 = INT8_MAX;
	uint32_t x662 = 110U;
	int64_t x663 = -205988902116LL;
	static int16_t x664 = 22;
	static int32_t t15 = -104548397;

	t15 = (((x661<x662)<x663)>>x664);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x682 = -3;
	volatile uint16_t x683 = 50U;
	uint8_t x684 = 24U;
	static volatile int32_t t16 = -1084;

	t16 = (((x681<x682)<x683)>>x684);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x717 = -1;
	volatile int32_t x718 = -91345;
	int64_t x719 = 2803445LL;

	t17 = (((x717<x718)<x719)>>x720);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x841 = 1103584U;
	uint32_t x843 = 1799693U;
	int32_t t18 = -69145461;

	t18 = (((x841<x842)<x843)>>x844);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x882 = 68839048391LL;
	static uint8_t x884 = 14U;
	volatile int32_t t19 = -2069;

	t19 = (((x881<x882)<x883)>>x884);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x938 = INT8_MIN;
	int8_t x939 = -1;
	uint8_t x940 = 1U;

	t20 = (((x937<x938)<x939)>>x940);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x946 = -1;
	static int32_t x947 = INT32_MIN;
	uint8_t x948 = 3U;
	int32_t t21 = 125014807;

	t21 = (((x945<x946)<x947)>>x948);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x997 = INT32_MIN;
	int64_t x998 = -1LL;
	volatile uint8_t x1000 = 7U;
	int32_t t22 = 2678;

	t22 = (((x997<x998)<x999)>>x1000);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x1009 = 0U;
	uint16_t x1010 = 2376U;
	uint16_t x1011 = 3U;
	static volatile uint8_t x1012 = 15U;
	volatile int32_t t23 = -910115914;

	t23 = (((x1009<x1010)<x1011)>>x1012);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x1037 = 0;
	volatile uint8_t x1039 = 78U;
	volatile int32_t x1040 = 1;
	static int32_t t24 = 12988;

	t24 = (((x1037<x1038)<x1039)>>x1040);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1041 = UINT8_MAX;
	volatile int64_t x1042 = -19975167557710856LL;
	int8_t x1043 = INT8_MIN;
	uint8_t x1044 = 5U;
	int32_t t25 = -1967;

	t25 = (((x1041<x1042)<x1043)>>x1044);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1113 = INT16_MIN;
	int32_t x1114 = INT32_MIN;
	static int32_t x1115 = -6;
	static int8_t x1116 = 1;
	volatile int32_t t26 = -1456769;

	t26 = (((x1113<x1114)<x1115)>>x1116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1133 = 24U;
	volatile uint16_t x1134 = UINT16_MAX;
	static uint8_t x1136 = 16U;
	int32_t t27 = -22;

	t27 = (((x1133<x1134)<x1135)>>x1136);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1143 = INT16_MIN;
	uint8_t x1144 = 15U;
	volatile int32_t t28 = 24323854;

	t28 = (((x1141<x1142)<x1143)>>x1144);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1169 = INT8_MIN;
	int16_t x1170 = INT16_MIN;
	int32_t x1171 = -18;
	volatile int32_t t29 = -64896761;

	t29 = (((x1169<x1170)<x1171)>>x1172);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1233 = INT8_MIN;
	int16_t x1234 = -1;
	uint8_t x1236 = 3U;
	int32_t t30 = -1;

	t30 = (((x1233<x1234)<x1235)>>x1236);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x1277 = UINT16_MAX;
	volatile uint32_t x1280 = 7U;

	t31 = (((x1277<x1278)<x1279)>>x1280);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1325 = INT64_MIN;
	static volatile uint16_t x1327 = 11U;
	int8_t x1328 = 10;
	volatile int32_t t32 = -1;

	t32 = (((x1325<x1326)<x1327)>>x1328);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1342 = -214666213LL;
	int8_t x1343 = INT8_MAX;
	uint16_t x1344 = 6U;
	int32_t t33 = -9631;

	t33 = (((x1341<x1342)<x1343)>>x1344);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x1345 = 0LL;
	static int8_t x1346 = -3;
	int16_t x1348 = 0;
	volatile int32_t t34 = 1;

	t34 = (((x1345<x1346)<x1347)>>x1348);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1385 = INT32_MIN;
	int8_t x1386 = 0;
	uint16_t x1387 = 12158U;
	static volatile int8_t x1388 = 28;
	static int32_t t35 = 9;

	t35 = (((x1385<x1386)<x1387)>>x1388);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1401 = -4;
	int16_t x1402 = INT16_MAX;
	static volatile uint16_t x1403 = 1101U;
	uint64_t x1404 = 13LLU;
	static int32_t t36 = -20203;

	t36 = (((x1401<x1402)<x1403)>>x1404);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x1421 = INT8_MIN;
	volatile uint64_t x1422 = 135274447585136LLU;
	uint8_t x1424 = 13U;

	t37 = (((x1421<x1422)<x1423)>>x1424);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1449 = UINT16_MAX;
	uint32_t x1451 = 1950573019U;
	volatile uint8_t x1452 = 3U;

	t38 = (((x1449<x1450)<x1451)>>x1452);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1518 = 0;
	int64_t x1519 = 195LL;
	static volatile int32_t t39 = -311;

	t39 = (((x1517<x1518)<x1519)>>x1520);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1521 = -16;
	int64_t x1522 = -14665708639LL;
	uint32_t x1523 = 993176964U;
	uint8_t x1524 = 14U;
	volatile int32_t t40 = 69228;

	t40 = (((x1521<x1522)<x1523)>>x1524);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1541 = INT32_MAX;
	int8_t x1542 = -3;
	volatile int16_t x1543 = INT16_MIN;
	static uint8_t x1544 = 0U;
	int32_t t41 = 242339005;

	t41 = (((x1541<x1542)<x1543)>>x1544);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint16_t x1545 = 10U;
	int32_t x1546 = INT32_MAX;
	uint32_t x1547 = 1999783287U;
	uint8_t x1548 = 3U;

	t42 = (((x1545<x1546)<x1547)>>x1548);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1561 = 58;
	uint64_t x1562 = 1LLU;
	int64_t x1563 = 202213LL;
	static int8_t x1564 = 14;
	static int32_t t43 = 218366;

	t43 = (((x1561<x1562)<x1563)>>x1564);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1609 = -1;
	uint16_t x1610 = 30781U;
	int32_t x1611 = INT32_MIN;

	t44 = (((x1609<x1610)<x1611)>>x1612);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x1625 = 1;
	volatile int16_t x1626 = INT16_MAX;
	uint8_t x1628 = 20U;
	int32_t t45 = 0;

	t45 = (((x1625<x1626)<x1627)>>x1628);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x1773 = 2U;
	int64_t x1774 = INT64_MIN;
	int16_t x1775 = 62;
	static int16_t x1776 = 18;
	static int32_t t46 = 0;

	t46 = (((x1773<x1774)<x1775)>>x1776);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x1798 = INT16_MIN;
	uint8_t x1800 = 7U;

	t47 = (((x1797<x1798)<x1799)>>x1800);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x1822 = 11357U;
	uint8_t x1824 = 7U;
	volatile int32_t t48 = -18262;

	t48 = (((x1821<x1822)<x1823)>>x1824);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1834 = -12397604;
	int8_t x1836 = 1;
	int32_t t49 = 1442427;

	t49 = (((x1833<x1834)<x1835)>>x1836);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x1889 = INT32_MIN;
	int16_t x1890 = -256;
	int16_t x1891 = INT16_MAX;
	volatile uint8_t x1892 = 3U;
	static volatile int32_t t50 = 44;

	t50 = (((x1889<x1890)<x1891)>>x1892);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x1904 = 0LLU;
	volatile int32_t t51 = -5;

	t51 = (((x1901<x1902)<x1903)>>x1904);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1917 = -1;
	volatile int16_t x1918 = 8;
	uint32_t x1919 = 0U;
	int8_t x1920 = 0;
	static volatile int32_t t52 = 12782;

	t52 = (((x1917<x1918)<x1919)>>x1920);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x1933 = 3218640795061539197LL;
	int8_t x1936 = 2;
	volatile int32_t t53 = 5219682;

	t53 = (((x1933<x1934)<x1935)>>x1936);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x1950 = INT16_MIN;
	uint32_t x1951 = UINT32_MAX;
	int8_t x1952 = 5;
	volatile int32_t t54 = -46065155;

	t54 = (((x1949<x1950)<x1951)>>x1952);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1969 = -368527;
	int32_t t55 = 0;

	t55 = (((x1969<x1970)<x1971)>>x1972);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x2009 = -34460740690689LL;
	uint16_t x2010 = UINT16_MAX;
	uint16_t x2011 = 353U;
	uint8_t x2012 = 3U;
	volatile int32_t t56 = 2121082;

	t56 = (((x2009<x2010)<x2011)>>x2012);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x2017 = -1;
	volatile uint32_t x2018 = 13U;
	volatile int8_t x2019 = -1;
	volatile uint16_t x2020 = 0U;
	volatile int32_t t57 = -2916576;

	t57 = (((x2017<x2018)<x2019)>>x2020);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x2061 = -1LL;
	uint64_t x2062 = 233698LLU;
	int16_t x2064 = 30;
	volatile int32_t t58 = -853;

	t58 = (((x2061<x2062)<x2063)>>x2064);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x2117 = INT32_MIN;
	int64_t x2118 = 2271876252994637LL;
	uint64_t x2119 = 245214837934971364LLU;
	int16_t x2120 = 20;
	static volatile int32_t t59 = 151;

	t59 = (((x2117<x2118)<x2119)>>x2120);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x2133 = 26U;
	volatile uint64_t x2134 = 1002083270372LLU;
	int16_t x2135 = 215;
	int32_t t60 = 142362;

	t60 = (((x2133<x2134)<x2135)>>x2136);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x2146 = -1;
	static volatile uint32_t x2148 = 30U;
	int32_t t61 = -567040;

	t61 = (((x2145<x2146)<x2147)>>x2148);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x2209 = -1;
	uint8_t x2210 = 1U;
	int8_t x2212 = 15;
	volatile int32_t t62 = 5929320;

	t62 = (((x2209<x2210)<x2211)>>x2212);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x2245 = INT32_MIN;
	int64_t x2246 = 29621760LL;
	static int8_t x2247 = INT8_MIN;
	uint64_t x2248 = 1LLU;
	static int32_t t63 = 32712476;

	t63 = (((x2245<x2246)<x2247)>>x2248);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x2249 = 8LLU;
	uint8_t x2250 = UINT8_MAX;
	int32_t x2251 = -11424;
	static volatile uint8_t x2252 = 4U;
	int32_t t64 = -1;

	t64 = (((x2249<x2250)<x2251)>>x2252);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x2293 = 4U;
	int8_t x2294 = INT8_MIN;
	static int8_t x2295 = INT8_MIN;
	int32_t t65 = 24849121;

	t65 = (((x2293<x2294)<x2295)>>x2296);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x2315 = -2;
	volatile uint8_t x2316 = 6U;
	volatile int32_t t66 = 912;

	t66 = (((x2313<x2314)<x2315)>>x2316);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x2317 = 1;
	uint16_t x2318 = 52U;
	int8_t x2319 = INT8_MIN;
	uint64_t x2320 = 3LLU;
	int32_t t67 = -51067;

	t67 = (((x2317<x2318)<x2319)>>x2320);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2323 = INT8_MIN;
	volatile int32_t t68 = 0;

	t68 = (((x2321<x2322)<x2323)>>x2324);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x2329 = -1;
	uint64_t x2330 = 13433886LLU;
	uint16_t x2332 = 8U;

	t69 = (((x2329<x2330)<x2331)>>x2332);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x2333 = INT16_MIN;
	int16_t x2334 = 58;
	static int16_t x2335 = 6485;
	uint8_t x2336 = 29U;
	volatile int32_t t70 = -5;

	t70 = (((x2333<x2334)<x2335)>>x2336);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x2362 = -1033553066;
	uint64_t x2363 = 39961156423348244LLU;
	uint8_t x2364 = 0U;
	int32_t t71 = -434005;

	t71 = (((x2361<x2362)<x2363)>>x2364);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x2365 = INT8_MIN;
	static int64_t x2366 = INT64_MAX;
	int8_t x2367 = -1;

	t72 = (((x2365<x2366)<x2367)>>x2368);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x2393 = -3;
	uint32_t x2394 = UINT32_MAX;
	static int64_t x2395 = INT64_MIN;
	volatile int8_t x2396 = 2;
	volatile int32_t t73 = 752;

	t73 = (((x2393<x2394)<x2395)>>x2396);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x2421 = -1;
	uint8_t x2422 = 13U;
	int64_t x2423 = -2775LL;
	volatile int32_t t74 = -1034877780;

	t74 = (((x2421<x2422)<x2423)>>x2424);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x2433 = INT64_MAX;
	int32_t x2434 = -1;
	int64_t x2435 = 235596881669LL;
	volatile uint16_t x2436 = 2U;
	int32_t t75 = 0;

	t75 = (((x2433<x2434)<x2435)>>x2436);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x2541 = -1;
	volatile int32_t x2543 = 1;
	int32_t x2544 = 0;
	volatile int32_t t76 = -4057;

	t76 = (((x2541<x2542)<x2543)>>x2544);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x2569 = -1;
	int64_t x2570 = INT64_MIN;
	static volatile uint8_t x2571 = UINT8_MAX;
	volatile uint8_t x2572 = 3U;
	volatile int32_t t77 = -1;

	t77 = (((x2569<x2570)<x2571)>>x2572);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2597 = 15;
	int32_t x2599 = 819325299;
	int8_t x2600 = 2;
	static int32_t t78 = -76;

	t78 = (((x2597<x2598)<x2599)>>x2600);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x2613 = 5U;
	int16_t x2614 = INT16_MIN;
	int16_t x2615 = INT16_MIN;
	uint8_t x2616 = 1U;
	int32_t t79 = 996;

	t79 = (((x2613<x2614)<x2615)>>x2616);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x2622 = -1LL;
	volatile int32_t x2623 = -1;
	uint8_t x2624 = 2U;

	t80 = (((x2621<x2622)<x2623)>>x2624);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x2629 = 13247;
	int64_t x2630 = -1LL;
	static int16_t x2631 = -1;
	volatile uint8_t x2632 = 0U;
	static int32_t t81 = -3;

	t81 = (((x2629<x2630)<x2631)>>x2632);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x2645 = INT32_MIN;
	int64_t x2647 = INT64_MIN;
	static int32_t t82 = -9992;

	t82 = (((x2645<x2646)<x2647)>>x2648);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x2702 = -1;
	static volatile int32_t x2703 = -821334641;

	t83 = (((x2701<x2702)<x2703)>>x2704);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x2734 = INT16_MIN;
	static volatile int8_t x2735 = INT8_MIN;
	volatile int32_t t84 = 2;

	t84 = (((x2733<x2734)<x2735)>>x2736);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x2757 = 48;
	volatile int32_t x2758 = -18558406;
	volatile int64_t x2759 = INT64_MAX;
	static int32_t t85 = 1;

	t85 = (((x2757<x2758)<x2759)>>x2760);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x2781 = INT32_MIN;
	int64_t x2782 = -185125838338579LL;
	static volatile int64_t x2783 = INT64_MAX;
	volatile int8_t x2784 = 11;
	int32_t t86 = -224;

	t86 = (((x2781<x2782)<x2783)>>x2784);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x2821 = -6;
	static volatile int16_t x2822 = 3111;
	uint64_t x2823 = 1LLU;
	uint16_t x2824 = 7U;
	volatile int32_t t87 = 27;

	t87 = (((x2821<x2822)<x2823)>>x2824);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x2877 = INT8_MIN;
	uint64_t x2878 = 3009543LLU;
	int8_t x2879 = -1;
	uint32_t x2880 = 0U;
	volatile int32_t t88 = 9120676;

	t88 = (((x2877<x2878)<x2879)>>x2880);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x2905 = INT32_MAX;
	uint32_t x2906 = 14U;
	int8_t x2907 = INT8_MAX;
	volatile int8_t x2908 = 0;
	static volatile int32_t t89 = -75137051;

	t89 = (((x2905<x2906)<x2907)>>x2908);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x2913 = 1;
	int16_t x2914 = 90;
	static int32_t x2915 = -1;
	volatile uint16_t x2916 = 22U;

	t90 = (((x2913<x2914)<x2915)>>x2916);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x2918 = UINT8_MAX;
	static uint64_t x2920 = 15LLU;

	t91 = (((x2917<x2918)<x2919)>>x2920);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x2969 = INT16_MIN;
	int8_t x2970 = INT8_MIN;
	static int32_t x2971 = INT32_MAX;
	static int32_t x2972 = 23;
	volatile int32_t t92 = -363435993;

	t92 = (((x2969<x2970)<x2971)>>x2972);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x2985 = 324167U;
	static volatile int16_t x2986 = -3;
	static volatile uint8_t x2988 = 0U;
	volatile int32_t t93 = -1;

	t93 = (((x2985<x2986)<x2987)>>x2988);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x3030 = INT8_MIN;
	int8_t x3031 = INT8_MAX;
	static volatile uint16_t x3032 = 7U;
	volatile int32_t t94 = -13050;

	t94 = (((x3029<x3030)<x3031)>>x3032);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x3053 = -1;
	static volatile int32_t x3054 = -1271;
	int16_t x3056 = 0;
	volatile int32_t t95 = 1;

	t95 = (((x3053<x3054)<x3055)>>x3056);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x3101 = INT64_MIN;
	uint32_t x3102 = 50697720U;
	volatile int64_t x3103 = INT64_MIN;
	volatile int32_t t96 = -45;

	t96 = (((x3101<x3102)<x3103)>>x3104);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x3165 = 84U;
	uint64_t x3166 = 166672486LLU;
	uint8_t x3167 = 2U;
	int16_t x3168 = 2;
	static volatile int32_t t97 = -157;

	t97 = (((x3165<x3166)<x3167)>>x3168);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x3169 = UINT32_MAX;
	static int32_t x3170 = INT32_MAX;
	static int64_t x3171 = -1LL;
	volatile int8_t x3172 = 2;
	int32_t t98 = -99;

	t98 = (((x3169<x3170)<x3171)>>x3172);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x3197 = INT16_MIN;
	int8_t x3198 = -1;
	int8_t x3199 = INT8_MAX;
	uint8_t x3200 = 0U;
	static int32_t t99 = -102574169;

	t99 = (((x3197<x3198)<x3199)>>x3200);

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

