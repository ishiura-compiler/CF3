#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x5 = INT32_MAX;
static uint64_t x19 = 14044665LLU;
int64_t x22 = -1LL;
uint32_t x79 = 187U;
uint8_t x133 = UINT8_MAX;
int64_t x159 = 39LL;
volatile uint8_t x160 = 0U;
volatile uint32_t x233 = UINT32_MAX;
static uint8_t x244 = 3U;
static int32_t x263 = 50390845;
static uint16_t x277 = UINT16_MAX;
static uint64_t x279 = UINT64_MAX;
volatile int8_t x397 = -7;
volatile uint64_t x400 = 1LLU;
int8_t x456 = 15;
int64_t t17 = 137143775944138336LL;
uint16_t x539 = 1U;
static int64_t x573 = 14986444LL;
int16_t x574 = INT16_MIN;
static uint8_t x624 = 0U;
uint32_t t20 = 4530181U;
uint8_t x694 = 4U;
static int32_t x695 = INT32_MAX;
uint8_t x817 = 7U;
uint8_t x861 = 72U;
uint8_t x1009 = UINT8_MAX;
static uint8_t x1012 = 6U;
uint16_t x1032 = 0U;
int64_t t31 = 366588419646217LL;
static int8_t x1102 = -1;
static int8_t x1103 = 0;
int32_t x1105 = INT32_MIN;
uint64_t t33 = 8508039446614416867LLU;
static int16_t x1280 = 0;
volatile int32_t t39 = 130987582;
volatile uint64_t t40 = 71150877542868LLU;
volatile uint64_t x1348 = 0LLU;
static volatile uint64_t t41 = UINT64_MAX;
uint8_t x1365 = UINT8_MAX;
uint8_t x1388 = 15U;
int16_t x1414 = INT16_MIN;
static int16_t x1425 = INT16_MIN;
uint8_t x1560 = 2U;
volatile int16_t x1589 = -1;
int32_t x1590 = INT32_MIN;
int64_t t53 = 6395957587LL;
volatile int64_t x1682 = INT64_MIN;
static uint16_t x1731 = UINT16_MAX;
int32_t x1735 = INT32_MIN;
volatile int32_t x1773 = INT32_MAX;
static int64_t x1774 = INT64_MIN;
volatile uint64_t x1808 = 0LLU;
int32_t x1826 = INT32_MIN;
static int16_t x1828 = 23;
volatile int32_t t61 = 5795591;
int32_t x2163 = INT32_MIN;
int16_t x2233 = INT16_MIN;
static uint8_t x2255 = 0U;
volatile int8_t x2331 = 0;
uint8_t x2357 = 2U;
static uint32_t x2358 = 900U;
uint32_t x2375 = 204961181U;
volatile uint32_t x2569 = UINT32_MAX;
int8_t x2571 = -1;
int64_t x2629 = INT64_MIN;
uint32_t x2631 = 1172815140U;
volatile int64_t t77 = -143387749LL;
int64_t x2698 = 8743328LL;
volatile int32_t t79 = 1;
uint16_t x2803 = 38U;
uint32_t x2831 = UINT32_MAX;
volatile int8_t x2836 = 1;
volatile uint32_t x2917 = UINT32_MAX;
static volatile int64_t t84 = 49638217336232671LL;
static int32_t x2981 = 0;
int8_t x2983 = -37;
uint8_t x3096 = 18U;
static uint32_t x3181 = UINT32_MAX;
static volatile int32_t t91 = 34435;
int64_t x3246 = INT64_MIN;
static int16_t x3291 = INT16_MIN;
uint8_t x3292 = 1U;
int32_t x3457 = 1;
uint8_t x3460 = 12U;
volatile int32_t t96 = -6454921;
static int32_t x3537 = INT32_MAX;
uint16_t x3540 = 10U;
static int64_t x3614 = -1LL;
int8_t x3630 = INT8_MIN;


void f0(void) {
	static volatile int16_t x6 = INT16_MIN;
	int64_t x7 = -1LL;
	static uint8_t x8 = 15U;
	int64_t t0 = -6LL;

	t0 = (((x5<=x6)*x7)<<x8);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x17 = INT8_MAX;
	int32_t x18 = INT32_MIN;
	static uint16_t x20 = 42U;
	uint64_t t1 = 12504077589650LLU;

	t1 = (((x17<=x18)*x19)<<x20);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x21 = 5946038;
	int32_t x23 = INT32_MIN;
	volatile uint16_t x24 = 2U;
	volatile int32_t t2 = -62721294;

	t2 = (((x21<=x22)*x23)<<x24);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x77 = -1;
	int8_t x78 = INT8_MIN;
	volatile uint8_t x80 = 14U;
	uint32_t t3 = 117U;

	t3 = (((x77<=x78)*x79)<<x80);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x113 = 0U;
	int32_t x114 = INT32_MIN;
	uint64_t x115 = UINT64_MAX;
	uint8_t x116 = 21U;
	uint64_t t4 = 1743564LLU;

	t4 = (((x113<=x114)*x115)<<x116);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x134 = -1;
	static volatile int64_t x135 = INT64_MIN;
	static int32_t x136 = 3;
	static int64_t t5 = 82LL;

	t5 = (((x133<=x134)*x135)<<x136);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x157 = INT8_MIN;
	volatile uint16_t x158 = UINT16_MAX;
	volatile int64_t t6 = 91024567LL;

	t6 = (((x157<=x158)*x159)<<x160);

	if (t6 != 39LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x165 = 15U;
	int8_t x166 = INT8_MAX;
	uint8_t x167 = 2U;
	uint8_t x168 = 13U;
	volatile int32_t t7 = 75875;

	t7 = (((x165<=x166)*x167)<<x168);

	if (t7 != 16384) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x234 = 487;
	int16_t x235 = INT16_MIN;
	int64_t x236 = 8LL;
	int32_t t8 = 20655;

	t8 = (((x233<=x234)*x235)<<x236);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x237 = 37;
	int8_t x238 = INT8_MIN;
	int8_t x239 = 0;
	uint8_t x240 = 14U;
	int32_t t9 = 14;

	t9 = (((x237<=x238)*x239)<<x240);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x241 = INT16_MAX;
	static int64_t x242 = INT64_MIN;
	static uint16_t x243 = 9510U;
	volatile int32_t t10 = -1506788;

	t10 = (((x241<=x242)*x243)<<x244);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x261 = 7;
	static int64_t x262 = INT64_MIN;
	static uint32_t x264 = 3U;
	int32_t t11 = -52376351;

	t11 = (((x261<=x262)*x263)<<x264);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x278 = INT16_MAX;
	uint32_t x280 = 0U;
	uint64_t t12 = 182076496417113LLU;

	t12 = (((x277<=x278)*x279)<<x280);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x285 = 7U;
	volatile int16_t x286 = 2;
	uint32_t x287 = UINT32_MAX;
	volatile uint8_t x288 = 2U;
	volatile uint32_t t13 = 3590170U;

	t13 = (((x285<=x286)*x287)<<x288);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x353 = 116U;
	volatile int8_t x354 = -40;
	int8_t x355 = INT8_MIN;
	static uint16_t x356 = 30U;
	static int32_t t14 = 994415514;

	t14 = (((x353<=x354)*x355)<<x356);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x361 = 1U;
	int16_t x362 = 2944;
	uint64_t x363 = UINT64_MAX;
	uint64_t x364 = 27LLU;
	volatile uint64_t t15 = 15132LLU;

	t15 = (((x361<=x362)*x363)<<x364);

	if (t15 != 18446744073575333888LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x398 = -1LL;
	uint16_t x399 = 91U;
	static volatile int32_t t16 = -1;

	t16 = (((x397<=x398)*x399)<<x400);

	if (t16 != 182) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x453 = 2199U;
	int8_t x454 = 63;
	int64_t x455 = -1LL;

	t17 = (((x453<=x454)*x455)<<x456);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x537 = INT16_MAX;
	int32_t x538 = INT32_MIN;
	uint16_t x540 = 3U;
	int32_t t18 = -16;

	t18 = (((x537<=x538)*x539)<<x540);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x575 = INT32_MIN;
	uint8_t x576 = 4U;
	volatile int32_t t19 = -4079;

	t19 = (((x573<=x574)*x575)<<x576);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x621 = UINT16_MAX;
	int32_t x622 = INT32_MIN;
	volatile uint32_t x623 = 601314654U;

	t20 = (((x621<=x622)*x623)<<x624);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x693 = 24U;
	uint16_t x696 = 0U;
	volatile int32_t t21 = 7205060;

	t21 = (((x693<=x694)*x695)<<x696);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x721 = UINT64_MAX;
	volatile uint8_t x722 = UINT8_MAX;
	uint64_t x723 = UINT64_MAX;
	static int32_t x724 = 0;
	uint64_t t22 = 30948LLU;

	t22 = (((x721<=x722)*x723)<<x724);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x818 = INT32_MIN;
	int16_t x819 = 1;
	int8_t x820 = 4;
	volatile int32_t t23 = 486818126;

	t23 = (((x817<=x818)*x819)<<x820);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x833 = 136356450LLU;
	int64_t x834 = INT64_MIN;
	int16_t x835 = INT16_MAX;
	uint32_t x836 = 0U;
	static int32_t t24 = 5085;

	t24 = (((x833<=x834)*x835)<<x836);

	if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x849 = INT16_MIN;
	int64_t x850 = INT64_MIN;
	volatile uint64_t x851 = 2116123781331186LLU;
	uint8_t x852 = 4U;
	uint64_t t25 = 1323409132099LLU;

	t25 = (((x849<=x850)*x851)<<x852);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x862 = -1;
	int64_t x863 = 82LL;
	uint32_t x864 = 15U;
	int64_t t26 = -201571084597LL;

	t26 = (((x861<=x862)*x863)<<x864);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x893 = -1;
	volatile int32_t x894 = 370261067;
	volatile uint8_t x895 = 1U;
	static int64_t x896 = 3LL;
	int32_t t27 = 15887;

	t27 = (((x893<=x894)*x895)<<x896);

	if (t27 != 8) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x937 = 928229U;
	int8_t x938 = -1;
	uint32_t x939 = UINT32_MAX;
	uint8_t x940 = 13U;
	volatile uint32_t t28 = 69604U;

	t28 = (((x937<=x938)*x939)<<x940);

	if (t28 != 4294959104U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x957 = 56548728U;
	int64_t x958 = INT64_MIN;
	uint8_t x959 = 3U;
	static int8_t x960 = 27;
	volatile int32_t t29 = 6454;

	t29 = (((x957<=x958)*x959)<<x960);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1010 = -494546;
	int8_t x1011 = -26;
	volatile int32_t t30 = -65;

	t30 = (((x1009<=x1010)*x1011)<<x1012);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1029 = 206820127401256789LL;
	volatile uint32_t x1030 = 22U;
	static int64_t x1031 = INT64_MIN;

	t31 = (((x1029<=x1030)*x1031)<<x1032);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1101 = UINT32_MAX;
	uint8_t x1104 = 0U;
	volatile int32_t t32 = 202239964;

	t32 = (((x1101<=x1102)*x1103)<<x1104);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x1106 = 157815760478051LLU;
	uint64_t x1107 = 4492LLU;
	int32_t x1108 = 14;

	t33 = (((x1105<=x1106)*x1107)<<x1108);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1121 = UINT64_MAX;
	uint16_t x1122 = 1449U;
	int16_t x1123 = INT16_MIN;
	static int8_t x1124 = 7;
	int32_t t34 = -1299461;

	t34 = (((x1121<=x1122)*x1123)<<x1124);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x1165 = 1;
	static int8_t x1166 = INT8_MIN;
	volatile uint64_t x1167 = 1775077LLU;
	uint8_t x1168 = 53U;
	volatile uint64_t t35 = 12235911622009131LLU;

	t35 = (((x1165<=x1166)*x1167)<<x1168);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1233 = INT64_MIN;
	int32_t x1234 = INT32_MIN;
	uint64_t x1235 = UINT64_MAX;
	static int8_t x1236 = 2;
	volatile uint64_t t36 = 231073440017027LLU;

	t36 = (((x1233<=x1234)*x1235)<<x1236);

	if (t36 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1277 = INT16_MAX;
	int32_t x1278 = INT32_MIN;
	uint64_t x1279 = UINT64_MAX;
	static uint64_t t37 = 5152137771732476LLU;

	t37 = (((x1277<=x1278)*x1279)<<x1280);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x1297 = -1;
	int32_t x1298 = -164151;
	int64_t x1299 = 0LL;
	static int16_t x1300 = 3;
	static int64_t t38 = -997977016124LL;

	t38 = (((x1297<=x1298)*x1299)<<x1300);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x1309 = INT16_MIN;
	volatile int16_t x1310 = INT16_MIN;
	int16_t x1311 = 1527;
	uint32_t x1312 = 20U;

	t39 = (((x1309<=x1310)*x1311)<<x1312);

	if (t39 != 1601175552) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1313 = INT16_MIN;
	static int32_t x1314 = INT32_MIN;
	uint64_t x1315 = UINT64_MAX;
	uint16_t x1316 = 52U;

	t40 = (((x1313<=x1314)*x1315)<<x1316);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x1345 = INT32_MIN;
	int16_t x1346 = 43;
	uint64_t x1347 = UINT64_MAX;

	t41 = (((x1345<=x1346)*x1347)<<x1348);

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1349 = INT64_MAX;
	volatile int16_t x1350 = INT16_MAX;
	int16_t x1351 = INT16_MIN;
	int16_t x1352 = 3;
	volatile int32_t t42 = 0;

	t42 = (((x1349<=x1350)*x1351)<<x1352);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1366 = -1LL;
	static int32_t x1367 = -1;
	volatile uint8_t x1368 = 0U;
	int32_t t43 = 1;

	t43 = (((x1365<=x1366)*x1367)<<x1368);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x1385 = INT32_MAX;
	volatile int8_t x1386 = INT8_MIN;
	int32_t x1387 = 23135;
	volatile int32_t t44 = -1408;

	t44 = (((x1385<=x1386)*x1387)<<x1388);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x1409 = 15473023495LLU;
	int64_t x1410 = INT64_MAX;
	uint64_t x1411 = 1049441508536LLU;
	uint64_t x1412 = 11LLU;
	uint64_t t45 = 2071605873252569706LLU;

	t45 = (((x1409<=x1410)*x1411)<<x1412);

	if (t45 != 2149256209481728LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x1413 = 0U;
	static int16_t x1415 = INT16_MIN;
	static uint8_t x1416 = 1U;
	int32_t t46 = -904708;

	t46 = (((x1413<=x1414)*x1415)<<x1416);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x1426 = -1LL;
	uint64_t x1427 = 1054053999984875092LLU;
	volatile uint8_t x1428 = 9U;
	uint64_t t47 = 8380773998968773005LLU;

	t47 = (((x1425<=x1426)*x1427)<<x1428);

	if (t47 != 4720069854679050240LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x1429 = 29U;
	static int32_t x1430 = INT32_MIN;
	int32_t x1431 = -122511;
	static int8_t x1432 = 1;
	int32_t t48 = 87098408;

	t48 = (((x1429<=x1430)*x1431)<<x1432);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x1457 = UINT32_MAX;
	int64_t x1458 = -245885784711735LL;
	uint8_t x1459 = UINT8_MAX;
	int8_t x1460 = 3;
	int32_t t49 = -1;

	t49 = (((x1457<=x1458)*x1459)<<x1460);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x1501 = UINT32_MAX;
	uint8_t x1502 = UINT8_MAX;
	uint8_t x1503 = 44U;
	volatile int8_t x1504 = 1;
	int32_t t50 = 30591;

	t50 = (((x1501<=x1502)*x1503)<<x1504);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x1557 = -2;
	volatile int16_t x1558 = -1;
	volatile int16_t x1559 = 3;
	volatile int32_t t51 = -352;

	t51 = (((x1557<=x1558)*x1559)<<x1560);

	if (t51 != 12) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x1569 = INT8_MAX;
	int32_t x1570 = INT32_MIN;
	int16_t x1571 = -1;
	uint32_t x1572 = 1U;
	volatile int32_t t52 = 5;

	t52 = (((x1569<=x1570)*x1571)<<x1572);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x1591 = 214854357149620960LL;
	volatile uint16_t x1592 = 1U;

	t53 = (((x1589<=x1590)*x1591)<<x1592);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x1641 = 189U;
	volatile uint16_t x1642 = 797U;
	static uint8_t x1643 = 0U;
	uint8_t x1644 = 9U;
	static int32_t t54 = -12839276;

	t54 = (((x1641<=x1642)*x1643)<<x1644);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x1681 = 95U;
	int32_t x1683 = INT32_MIN;
	uint8_t x1684 = 12U;
	static int32_t t55 = 9472;

	t55 = (((x1681<=x1682)*x1683)<<x1684);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x1729 = INT8_MIN;
	int16_t x1730 = -1;
	static uint8_t x1732 = 3U;
	int32_t t56 = -23432919;

	t56 = (((x1729<=x1730)*x1731)<<x1732);

	if (t56 != 524280) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x1733 = INT64_MAX;
	static int8_t x1734 = INT8_MIN;
	uint8_t x1736 = 7U;
	int32_t t57 = -45236661;

	t57 = (((x1733<=x1734)*x1735)<<x1736);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x1775 = 14096808615LL;
	uint16_t x1776 = 7U;
	int64_t t58 = 114635901109372LL;

	t58 = (((x1773<=x1774)*x1775)<<x1776);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x1805 = 0U;
	int16_t x1806 = INT16_MIN;
	int64_t x1807 = INT64_MAX;
	static int64_t t59 = 12424190221LL;

	t59 = (((x1805<=x1806)*x1807)<<x1808);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x1825 = INT32_MAX;
	int8_t x1827 = 0;
	int32_t t60 = 17;

	t60 = (((x1825<=x1826)*x1827)<<x1828);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint64_t x1881 = 265733401403452LLU;
	static volatile int8_t x1882 = -1;
	volatile int16_t x1883 = INT16_MAX;
	int8_t x1884 = 3;

	t61 = (((x1881<=x1882)*x1883)<<x1884);

	if (t61 != 262136) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2145 = INT8_MAX;
	volatile int8_t x2146 = 3;
	static int16_t x2147 = INT16_MAX;
	int8_t x2148 = 29;
	volatile int32_t t62 = -10;

	t62 = (((x2145<=x2146)*x2147)<<x2148);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2149 = INT8_MAX;
	static uint32_t x2150 = 3494509U;
	uint16_t x2151 = 31U;
	uint8_t x2152 = 4U;
	volatile int32_t t63 = -1;

	t63 = (((x2149<=x2150)*x2151)<<x2152);

	if (t63 != 496) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x2161 = -1;
	int32_t x2162 = INT32_MIN;
	int8_t x2164 = 3;
	volatile int32_t t64 = 1;

	t64 = (((x2161<=x2162)*x2163)<<x2164);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x2234 = -1LL;
	uint64_t x2235 = 12909LLU;
	int16_t x2236 = 0;
	volatile uint64_t t65 = 515210LLU;

	t65 = (((x2233<=x2234)*x2235)<<x2236);

	if (t65 != 12909LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x2253 = INT32_MIN;
	int64_t x2254 = 2319242617LL;
	uint8_t x2256 = 8U;
	int32_t t66 = -356;

	t66 = (((x2253<=x2254)*x2255)<<x2256);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x2265 = INT64_MAX;
	int32_t x2266 = INT32_MIN;
	static int8_t x2267 = 0;
	uint8_t x2268 = 13U;
	int32_t t67 = -26353516;

	t67 = (((x2265<=x2266)*x2267)<<x2268);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x2273 = 881U;
	uint16_t x2274 = UINT16_MAX;
	volatile uint32_t x2275 = UINT32_MAX;
	volatile int8_t x2276 = 7;
	static volatile uint32_t t68 = 7772U;

	t68 = (((x2273<=x2274)*x2275)<<x2276);

	if (t68 != 4294967168U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2329 = -13;
	static uint32_t x2330 = UINT32_MAX;
	uint8_t x2332 = 1U;
	static int32_t t69 = -7;

	t69 = (((x2329<=x2330)*x2331)<<x2332);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x2359 = 21U;
	uint16_t x2360 = 2U;
	volatile int32_t t70 = -11577493;

	t70 = (((x2357<=x2358)*x2359)<<x2360);

	if (t70 != 84) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x2373 = INT16_MIN;
	static int16_t x2374 = INT16_MAX;
	uint8_t x2376 = 0U;
	uint32_t t71 = 713653572U;

	t71 = (((x2373<=x2374)*x2375)<<x2376);

	if (t71 != 204961181U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x2417 = UINT64_MAX;
	uint8_t x2418 = 3U;
	static int64_t x2419 = INT64_MIN;
	static int8_t x2420 = 7;
	volatile int64_t t72 = -1381LL;

	t72 = (((x2417<=x2418)*x2419)<<x2420);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x2457 = 24115U;
	int64_t x2458 = -1LL;
	int8_t x2459 = -48;
	uint8_t x2460 = 11U;
	int32_t t73 = 9;

	t73 = (((x2457<=x2458)*x2459)<<x2460);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x2477 = INT8_MIN;
	int32_t x2478 = -1242;
	uint32_t x2479 = UINT32_MAX;
	volatile int8_t x2480 = 5;
	volatile uint32_t t74 = 7U;

	t74 = (((x2477<=x2478)*x2479)<<x2480);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x2570 = 1U;
	volatile uint16_t x2572 = 2U;
	volatile int32_t t75 = -37855810;

	t75 = (((x2569<=x2570)*x2571)<<x2572);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x2630 = INT16_MIN;
	int8_t x2632 = 1;
	volatile uint32_t t76 = 9U;

	t76 = (((x2629<=x2630)*x2631)<<x2632);

	if (t76 != 2345630280U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x2681 = 144;
	int64_t x2682 = INT64_MIN;
	int64_t x2683 = INT64_MAX;
	int8_t x2684 = 6;

	t77 = (((x2681<=x2682)*x2683)<<x2684);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2697 = INT16_MAX;
	uint8_t x2699 = 3U;
	uint8_t x2700 = 1U;
	int32_t t78 = -1529;

	t78 = (((x2697<=x2698)*x2699)<<x2700);

	if (t78 != 6) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x2793 = -504364;
	volatile int16_t x2794 = 1806;
	uint16_t x2795 = 470U;
	volatile int16_t x2796 = 7;

	t79 = (((x2793<=x2794)*x2795)<<x2796);

	if (t79 != 60160) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x2801 = -15268;
	int64_t x2802 = -1LL;
	static uint8_t x2804 = 1U;
	volatile int32_t t80 = -4191;

	t80 = (((x2801<=x2802)*x2803)<<x2804);

	if (t80 != 76) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x2829 = 1167530161LLU;
	int64_t x2830 = INT64_MIN;
	volatile uint16_t x2832 = 22U;
	static uint32_t t81 = 258747U;

	t81 = (((x2829<=x2830)*x2831)<<x2832);

	if (t81 != 4290772992U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x2833 = 8U;
	volatile uint32_t x2834 = 25008U;
	int16_t x2835 = INT16_MAX;
	int32_t t82 = -333559384;

	t82 = (((x2833<=x2834)*x2835)<<x2836);

	if (t82 != 65534) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x2909 = 43LLU;
	uint16_t x2910 = UINT16_MAX;
	uint64_t x2911 = 520750996417LLU;
	uint8_t x2912 = 13U;
	static volatile uint64_t t83 = 9030199288410LLU;

	t83 = (((x2909<=x2910)*x2911)<<x2912);

	if (t83 != 4265992162648064LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x2918 = 26432886351247LLU;
	int64_t x2919 = 36742LL;
	volatile uint8_t x2920 = 11U;

	t84 = (((x2917<=x2918)*x2919)<<x2920);

	if (t84 != 75247616LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x2937 = INT32_MAX;
	int16_t x2938 = INT16_MIN;
	volatile uint8_t x2939 = 9U;
	uint32_t x2940 = 2U;
	volatile int32_t t85 = 1270373;

	t85 = (((x2937<=x2938)*x2939)<<x2940);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x2982 = INT8_MIN;
	volatile uint8_t x2984 = 5U;
	volatile int32_t t86 = -120;

	t86 = (((x2981<=x2982)*x2983)<<x2984);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x3017 = INT16_MAX;
	static uint32_t x3018 = 296U;
	int64_t x3019 = INT64_MIN;
	uint8_t x3020 = 0U;
	volatile int64_t t87 = 1918509460LL;

	t87 = (((x3017<=x3018)*x3019)<<x3020);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x3077 = 156813;
	volatile int64_t x3078 = INT64_MIN;
	int8_t x3079 = 0;
	static uint16_t x3080 = 2U;
	static int32_t t88 = 699442;

	t88 = (((x3077<=x3078)*x3079)<<x3080);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x3093 = -15;
	static int32_t x3094 = INT32_MIN;
	int16_t x3095 = INT16_MAX;
	volatile int32_t t89 = 1306;

	t89 = (((x3093<=x3094)*x3095)<<x3096);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x3121 = INT32_MIN;
	int64_t x3122 = INT64_MIN;
	int32_t x3123 = 76480;
	int8_t x3124 = 1;
	int32_t t90 = -6262;

	t90 = (((x3121<=x3122)*x3123)<<x3124);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x3182 = INT16_MIN;
	uint16_t x3183 = UINT16_MAX;
	uint8_t x3184 = 5U;

	t91 = (((x3181<=x3182)*x3183)<<x3184);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x3245 = 1;
	uint16_t x3247 = 6U;
	int32_t x3248 = 0;
	static int32_t t92 = 16209;

	t92 = (((x3245<=x3246)*x3247)<<x3248);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x3289 = 13U;
	int16_t x3290 = INT16_MIN;
	volatile int32_t t93 = -155471601;

	t93 = (((x3289<=x3290)*x3291)<<x3292);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x3341 = INT32_MAX;
	static uint8_t x3342 = 11U;
	uint32_t x3343 = 7241U;
	uint32_t x3344 = 1U;
	volatile uint32_t t94 = 4575387U;

	t94 = (((x3341<=x3342)*x3343)<<x3344);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x3405 = INT64_MAX;
	uint64_t x3406 = 4760709LLU;
	uint64_t x3407 = 29632669LLU;
	uint16_t x3408 = 1U;
	uint64_t t95 = 356243682103060686LLU;

	t95 = (((x3405<=x3406)*x3407)<<x3408);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x3458 = UINT8_MAX;
	int16_t x3459 = 68;

	t96 = (((x3457<=x3458)*x3459)<<x3460);

	if (t96 != 278528) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x3538 = -1;
	uint8_t x3539 = UINT8_MAX;
	int32_t t97 = -1040;

	t97 = (((x3537<=x3538)*x3539)<<x3540);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x3613 = INT16_MIN;
	uint32_t x3615 = 132048824U;
	uint16_t x3616 = 0U;
	volatile uint32_t t98 = 619U;

	t98 = (((x3613<=x3614)*x3615)<<x3616);

	if (t98 != 132048824U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x3629 = 10U;
	static uint16_t x3631 = 38U;
	volatile int16_t x3632 = 0;
	volatile int32_t t99 = -477229559;

	t99 = (((x3629<=x3630)*x3631)<<x3632);

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

