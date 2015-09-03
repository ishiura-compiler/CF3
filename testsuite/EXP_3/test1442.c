#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x48 = UINT8_MAX;
uint32_t x59 = 447U;
static volatile int32_t t1 = -837302402;
uint64_t x213 = 508069385535286LLU;
static int8_t x324 = -1;
static uint64_t t7 = 5LLU;
int32_t x401 = INT32_MAX;
static uint64_t x457 = 0LLU;
int32_t x577 = INT32_MAX;
volatile int32_t t11 = 27;
int32_t x589 = 15;
static uint8_t x592 = 16U;
uint8_t x610 = 14U;
volatile uint16_t x634 = 9U;
static uint16_t x641 = UINT16_MAX;
int8_t x671 = -1;
int32_t t16 = 1699;
int8_t x743 = -1;
int64_t x837 = INT64_MAX;
volatile int8_t x838 = 2;
int64_t x839 = -1LL;
int16_t x939 = -15754;
int32_t t22 = -1;
int32_t x1116 = 53;
uint8_t x1150 = 1U;
uint32_t x1200 = 834337680U;
uint8_t x1295 = UINT8_MAX;
int8_t x1356 = INT8_MIN;
volatile uint8_t x1386 = 2U;
static int32_t x1387 = INT32_MAX;
uint32_t t30 = 192541U;
static int32_t t31 = 56720591;
static volatile uint16_t x1467 = UINT16_MAX;
int32_t x1473 = INT32_MAX;
static int16_t x1477 = 360;
int16_t x1478 = 0;
int32_t t34 = 42136;
static uint32_t x1560 = 4034U;
int16_t x1563 = -1782;
static int32_t x1585 = 0;
static uint8_t x1586 = 20U;
uint8_t x1587 = 1U;
uint64_t x1588 = 624104249413LLU;
volatile int32_t t39 = -9258738;
int64_t x1659 = INT64_MIN;
int8_t x1735 = INT8_MIN;
uint8_t x1810 = 0U;
int64_t t45 = 136852382LL;
static int64_t x2339 = -229170218LL;
static volatile uint16_t x2340 = 409U;
uint64_t x2499 = 266866895671932LLU;
volatile uint64_t t52 = 26LLU;
static volatile uint8_t x2558 = 10U;
int8_t x2645 = 0;
int8_t x2646 = 3;
static int64_t x2647 = 1361523334LL;
uint64_t x2799 = 69842819687104323LLU;
int32_t t55 = -1;
uint8_t x2801 = UINT8_MAX;
uint32_t x2860 = UINT32_MAX;
volatile int64_t t59 = 3300LL;
volatile uint8_t x2953 = 2U;
uint64_t x3001 = 110782993041LLU;
volatile uint32_t x3002 = 54U;
int32_t x3004 = INT32_MAX;
volatile int8_t x3035 = -6;
int64_t x3081 = 2084343040LL;
static uint32_t t66 = 36690075U;
uint32_t x3140 = 21U;
uint8_t x3293 = UINT8_MAX;
int32_t x3294 = 0;
int16_t x3295 = INT16_MIN;
int32_t t70 = 1068;
uint64_t x3297 = 236669683LLU;
uint16_t x3355 = 6928U;
int16_t x3568 = -1;
int32_t t74 = -1;
volatile int16_t x3676 = INT16_MIN;
static int32_t t75 = -774;
uint64_t t76 = UINT64_MAX;
int16_t x3760 = INT16_MIN;
uint16_t x3779 = 29251U;
static int64_t x3780 = INT64_MIN;
volatile int32_t x3845 = INT32_MAX;
int8_t x3853 = 5;
int64_t x3856 = -1LL;
volatile int32_t t81 = -12;
volatile int16_t x3861 = INT16_MAX;
static int32_t t82 = 2633;
int8_t x4151 = 7;
uint16_t x4297 = UINT16_MAX;
int16_t x4299 = -22;
uint32_t x4329 = UINT32_MAX;
volatile int16_t x4396 = INT16_MIN;
static int32_t t91 = 5;
static uint64_t x4421 = 1055812710757871LLU;
int32_t x4451 = INT32_MIN;
uint16_t x4646 = 2U;
int32_t t97 = -31190;
static volatile uint8_t x5179 = 0U;


void f0(void) {
	int64_t x45 = 1151489240006964804LL;
	uint16_t x46 = 13U;
	static int64_t x47 = INT64_MIN;
	volatile int64_t t0 = 30872LL;

	t0 = ((x45>>x46)|(x47<x48));

	if (t0 != 140562651368037LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x57 = UINT16_MAX;
	int8_t x58 = 23;
	uint32_t x60 = UINT32_MAX;

	t1 = ((x57>>x58)|(x59<x60));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x101 = UINT8_MAX;
	uint16_t x102 = 5U;
	static uint8_t x103 = 2U;
	static int16_t x104 = -2333;
	volatile int32_t t2 = -25;

	t2 = ((x101>>x102)|(x103<x104));

	if (t2 != 7) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x181 = 5U;
	static uint16_t x182 = 7U;
	int16_t x183 = -1;
	static int64_t x184 = INT64_MIN;
	int32_t t3 = -1377128;

	t3 = ((x181>>x182)|(x183<x184));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x193 = INT64_MAX;
	uint8_t x194 = 7U;
	int8_t x195 = INT8_MAX;
	int8_t x196 = 15;
	volatile int64_t t4 = 223693LL;

	t4 = ((x193>>x194)|(x195<x196));

	if (t4 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x214 = 54;
	volatile int16_t x215 = INT16_MIN;
	int64_t x216 = INT64_MIN;
	static uint64_t t5 = 123131072LLU;

	t5 = ((x213>>x214)|(x215<x216));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x313 = 15LLU;
	volatile uint32_t x314 = 32U;
	uint32_t x315 = 3608U;
	int64_t x316 = INT64_MIN;
	static volatile uint64_t t6 = 19260652LLU;

	t6 = ((x313>>x314)|(x315<x316));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x321 = 10LLU;
	int8_t x322 = 0;
	uint8_t x323 = UINT8_MAX;

	t7 = ((x321>>x322)|(x323<x324));

	if (t7 != 10LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x402 = 28U;
	uint32_t x403 = UINT32_MAX;
	int64_t x404 = INT64_MIN;
	static int32_t t8 = -2598;

	t8 = ((x401>>x402)|(x403<x404));

	if (t8 != 7) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x458 = 7U;
	volatile int8_t x459 = 1;
	static uint32_t x460 = 3785U;
	static volatile uint64_t t9 = 901398355149531LLU;

	t9 = ((x457>>x458)|(x459<x460));

	if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x549 = INT32_MAX;
	uint64_t x550 = 5LLU;
	volatile int16_t x551 = INT16_MAX;
	int16_t x552 = INT16_MIN;
	int32_t t10 = -165233;

	t10 = ((x549>>x550)|(x551<x552));

	if (t10 != 67108863) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x578 = 26U;
	static uint16_t x579 = UINT16_MAX;
	uint32_t x580 = 26U;

	t11 = ((x577>>x578)|(x579<x580));

	if (t11 != 31) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x590 = 8;
	volatile int8_t x591 = -4;
	volatile int32_t t12 = -55310526;

	t12 = ((x589>>x590)|(x591<x592));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x609 = 10791LLU;
	int32_t x611 = INT32_MAX;
	int32_t x612 = 372189300;
	volatile uint64_t t13 = 1028309358758113LLU;

	t13 = ((x609>>x610)|(x611<x612));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x633 = 0;
	uint32_t x635 = 12441846U;
	uint8_t x636 = UINT8_MAX;
	volatile int32_t t14 = 233;

	t14 = ((x633>>x634)|(x635<x636));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x642 = 6U;
	uint16_t x643 = 8890U;
	int32_t x644 = 2124918;
	volatile int32_t t15 = 36736517;

	t15 = ((x641>>x642)|(x643<x644));

	if (t15 != 1023) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x669 = 17792U;
	static volatile uint16_t x670 = 11U;
	uint32_t x672 = 15U;

	t16 = ((x669>>x670)|(x671<x672));

	if (t16 != 8) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x741 = 58092098535025633LL;
	uint8_t x742 = 1U;
	uint32_t x744 = UINT32_MAX;
	volatile int64_t t17 = 72LL;

	t17 = ((x741>>x742)|(x743<x744));

	if (t17 != 29046049267512816LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x840 = -1;
	volatile int64_t t18 = 2936896601519221279LL;

	t18 = ((x837>>x838)|(x839<x840));

	if (t18 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x849 = INT64_MAX;
	int16_t x850 = 0;
	int16_t x851 = INT16_MAX;
	static int32_t x852 = INT32_MIN;
	volatile int64_t t19 = INT64_MAX;

	t19 = ((x849>>x850)|(x851<x852));

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x893 = INT8_MAX;
	static uint32_t x894 = 1U;
	uint32_t x895 = 3621105U;
	int64_t x896 = INT64_MIN;
	int32_t t20 = -5;

	t20 = ((x893>>x894)|(x895<x896));

	if (t20 != 63) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x913 = 19LL;
	int8_t x914 = 1;
	volatile int8_t x915 = INT8_MIN;
	static uint64_t x916 = UINT64_MAX;
	volatile int64_t t21 = 65094382294279474LL;

	t21 = ((x913>>x914)|(x915<x916));

	if (t21 != 9LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x937 = INT16_MAX;
	uint32_t x938 = 30U;
	volatile int8_t x940 = -1;

	t22 = ((x937>>x938)|(x939<x940));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1113 = INT8_MAX;
	uint16_t x1114 = 3U;
	static volatile int32_t x1115 = 7981267;
	int32_t t23 = 51989;

	t23 = ((x1113>>x1114)|(x1115<x1116));

	if (t23 != 15) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1149 = 12292117U;
	uint8_t x1151 = 2U;
	volatile uint8_t x1152 = 0U;
	static uint32_t t24 = 3918349U;

	t24 = ((x1149>>x1150)|(x1151<x1152));

	if (t24 != 6146058U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1197 = INT16_MAX;
	volatile uint8_t x1198 = 2U;
	int64_t x1199 = -10233358213475LL;
	int32_t t25 = 0;

	t25 = ((x1197>>x1198)|(x1199<x1200));

	if (t25 != 8191) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1293 = 452106311385LLU;
	int8_t x1294 = 6;
	static volatile uint8_t x1296 = UINT8_MAX;
	static volatile uint64_t t26 = 739544006600821321LLU;

	t26 = ((x1293>>x1294)|(x1295<x1296));

	if (t26 != 7064161115LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1317 = 0U;
	volatile uint8_t x1318 = 1U;
	int64_t x1319 = INT64_MIN;
	static int8_t x1320 = INT8_MIN;
	volatile int32_t t27 = 42370;

	t27 = ((x1317>>x1318)|(x1319<x1320));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1353 = UINT64_MAX;
	uint32_t x1354 = 45U;
	int8_t x1355 = 14;
	uint64_t t28 = 0LLU;

	t28 = ((x1353>>x1354)|(x1355<x1356));

	if (t28 != 524287LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1361 = UINT8_MAX;
	static uint16_t x1362 = 6U;
	uint32_t x1363 = UINT32_MAX;
	int32_t x1364 = INT32_MIN;
	volatile int32_t t29 = 0;

	t29 = ((x1361>>x1362)|(x1363<x1364));

	if (t29 != 3) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1385 = 29265U;
	volatile uint16_t x1388 = 5568U;

	t30 = ((x1385>>x1386)|(x1387<x1388));

	if (t30 != 7316U) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint16_t x1389 = 0U;
	uint64_t x1390 = 20LLU;
	uint16_t x1391 = 760U;
	int32_t x1392 = -1630;

	t31 = ((x1389>>x1390)|(x1391<x1392));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1465 = 18906787040831LLU;
	uint8_t x1466 = 13U;
	static int32_t x1468 = INT32_MAX;
	static uint64_t t32 = 2742435LLU;

	t32 = ((x1465>>x1466)|(x1467<x1468));

	if (t32 != 2307957403LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1474 = 1U;
	static int8_t x1475 = INT8_MAX;
	volatile uint64_t x1476 = 990LLU;
	volatile int32_t t33 = -6458828;

	t33 = ((x1473>>x1474)|(x1475<x1476));

	if (t33 != 1073741823) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1479 = 143790U;
	uint16_t x1480 = 314U;

	t34 = ((x1477>>x1478)|(x1479<x1480));

	if (t34 != 360) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x1497 = UINT32_MAX;
	volatile uint8_t x1498 = 0U;
	uint64_t x1499 = 285568751441LLU;
	int32_t x1500 = INT32_MIN;
	volatile uint32_t t35 = UINT32_MAX;

	t35 = ((x1497>>x1498)|(x1499<x1500));

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1553 = 7593U;
	uint8_t x1554 = 3U;
	int32_t x1555 = 190;
	uint8_t x1556 = 2U;
	uint32_t t36 = 1760028326U;

	t36 = ((x1553>>x1554)|(x1555<x1556));

	if (t36 != 949U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x1557 = UINT16_MAX;
	static volatile int64_t x1558 = 2LL;
	int32_t x1559 = 1296;
	static volatile int32_t t37 = -1718279;

	t37 = ((x1557>>x1558)|(x1559<x1560));

	if (t37 != 16383) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1561 = 6;
	uint32_t x1562 = 0U;
	uint16_t x1564 = 9041U;
	static int32_t t38 = 104321;

	t38 = ((x1561>>x1562)|(x1563<x1564));

	if (t38 != 7) { NG(); } else { ; }
	
}

void f39(void) {


	t39 = ((x1585>>x1586)|(x1587<x1588));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1605 = 78336LLU;
	static int16_t x1606 = 1;
	int64_t x1607 = -1LL;
	int32_t x1608 = -1;
	volatile uint64_t t40 = 1867770854478518LLU;

	t40 = ((x1605>>x1606)|(x1607<x1608));

	if (t40 != 39168LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1649 = 6653U;
	static int8_t x1650 = 2;
	volatile uint64_t x1651 = UINT64_MAX;
	uint8_t x1652 = 7U;
	volatile uint32_t t41 = 68361U;

	t41 = ((x1649>>x1650)|(x1651<x1652));

	if (t41 != 1663U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1657 = INT8_MAX;
	uint16_t x1658 = 8U;
	int16_t x1660 = -420;
	static int32_t t42 = -23492;

	t42 = ((x1657>>x1658)|(x1659<x1660));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1725 = 522824158943267LL;
	uint8_t x1726 = 2U;
	static int16_t x1727 = -1;
	int16_t x1728 = -1;
	int64_t t43 = -605943278LL;

	t43 = ((x1725>>x1726)|(x1727<x1728));

	if (t43 != 130706039735816LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1733 = 311454334;
	uint16_t x1734 = 0U;
	int8_t x1736 = 31;
	static volatile int32_t t44 = -350065;

	t44 = ((x1733>>x1734)|(x1735<x1736));

	if (t44 != 311454335) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1809 = 2752LL;
	static uint8_t x1811 = 27U;
	int64_t x1812 = -1LL;

	t45 = ((x1809>>x1810)|(x1811<x1812));

	if (t45 != 2752LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint16_t x1985 = UINT16_MAX;
	static uint8_t x1986 = 0U;
	uint16_t x1987 = 10283U;
	static int64_t x1988 = 714833240681LL;
	int32_t t46 = -1017743127;

	t46 = ((x1985>>x1986)|(x1987<x1988));

	if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint64_t x2057 = 899912LLU;
	volatile int8_t x2058 = 1;
	volatile uint8_t x2059 = 0U;
	uint32_t x2060 = 102229394U;
	uint64_t t47 = 62755872052LLU;

	t47 = ((x2057>>x2058)|(x2059<x2060));

	if (t47 != 449957LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x2337 = UINT64_MAX;
	uint8_t x2338 = 19U;
	static uint64_t t48 = 2901LLU;

	t48 = ((x2337>>x2338)|(x2339<x2340));

	if (t48 != 35184372088831LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x2345 = 89360U;
	uint32_t x2346 = 6U;
	uint16_t x2347 = 55U;
	int16_t x2348 = -1;
	uint32_t t49 = 48U;

	t49 = ((x2345>>x2346)|(x2347<x2348));

	if (t49 != 1396U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x2373 = UINT16_MAX;
	int8_t x2374 = 1;
	int16_t x2375 = INT16_MAX;
	static uint8_t x2376 = 66U;
	int32_t t50 = 752251470;

	t50 = ((x2373>>x2374)|(x2375<x2376));

	if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x2497 = 33385585LLU;
	volatile uint16_t x2498 = 2U;
	int8_t x2500 = INT8_MAX;
	static uint64_t t51 = 534715502709960029LLU;

	t51 = ((x2497>>x2498)|(x2499<x2500));

	if (t51 != 8346396LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2533 = UINT64_MAX;
	uint32_t x2534 = 8U;
	uint8_t x2535 = 0U;
	static uint64_t x2536 = 15846052698790LLU;

	t52 = ((x2533>>x2534)|(x2535<x2536));

	if (t52 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2557 = UINT64_MAX;
	int64_t x2559 = -406LL;
	volatile uint16_t x2560 = 19U;
	volatile uint64_t t53 = 932999857088LLU;

	t53 = ((x2557>>x2558)|(x2559<x2560));

	if (t53 != 18014398509481983LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x2648 = -1;
	int32_t t54 = -96;

	t54 = ((x2645>>x2646)|(x2647<x2648));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x2797 = INT32_MAX;
	uint16_t x2798 = 19U;
	int16_t x2800 = INT16_MIN;

	t55 = ((x2797>>x2798)|(x2799<x2800));

	if (t55 != 4095) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x2802 = 8LL;
	static int64_t x2803 = INT64_MIN;
	volatile uint16_t x2804 = 1053U;
	volatile int32_t t56 = -34;

	t56 = ((x2801>>x2802)|(x2803<x2804));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x2809 = INT32_MAX;
	static int8_t x2810 = 31;
	int16_t x2811 = -1;
	int8_t x2812 = -27;
	volatile int32_t t57 = 856716257;

	t57 = ((x2809>>x2810)|(x2811<x2812));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x2857 = UINT64_MAX;
	uint16_t x2858 = 3U;
	volatile int8_t x2859 = INT8_MAX;
	uint64_t t58 = 9LLU;

	t58 = ((x2857>>x2858)|(x2859<x2860));

	if (t58 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x2937 = 88520LL;
	volatile int32_t x2938 = 0;
	uint32_t x2939 = UINT32_MAX;
	volatile uint64_t x2940 = 4364222491066LLU;

	t59 = ((x2937>>x2938)|(x2939<x2940));

	if (t59 != 88521LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x2954 = 3U;
	static int8_t x2955 = -1;
	int32_t x2956 = -1;
	volatile int32_t t60 = -8762604;

	t60 = ((x2953>>x2954)|(x2955<x2956));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x2985 = 2LLU;
	int16_t x2986 = 12;
	int32_t x2987 = INT32_MAX;
	int16_t x2988 = INT16_MAX;
	volatile uint64_t t61 = 1217895909367313LLU;

	t61 = ((x2985>>x2986)|(x2987<x2988));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x3003 = INT16_MIN;
	uint64_t t62 = 11051605837135LLU;

	t62 = ((x3001>>x3002)|(x3003<x3004));

	if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x3033 = INT8_MAX;
	int8_t x3034 = 0;
	uint32_t x3036 = UINT32_MAX;
	int32_t t63 = -23874;

	t63 = ((x3033>>x3034)|(x3035<x3036));

	if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x3057 = INT64_MAX;
	volatile uint8_t x3058 = 19U;
	uint32_t x3059 = 1U;
	int8_t x3060 = 0;
	volatile int64_t t64 = 3LL;

	t64 = ((x3057>>x3058)|(x3059<x3060));

	if (t64 != 17592186044415LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x3082 = 0U;
	volatile int32_t x3083 = -62191;
	int16_t x3084 = INT16_MIN;
	int64_t t65 = -147733LL;

	t65 = ((x3081>>x3082)|(x3083<x3084));

	if (t65 != 2084343041LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x3121 = 19837U;
	uint8_t x3122 = 8U;
	int64_t x3123 = INT64_MIN;
	int16_t x3124 = -1;

	t66 = ((x3121>>x3122)|(x3123<x3124));

	if (t66 != 77U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x3137 = 30U;
	volatile uint8_t x3138 = 0U;
	uint64_t x3139 = 5425150273874809435LLU;
	int32_t t67 = 1;

	t67 = ((x3137>>x3138)|(x3139<x3140));

	if (t67 != 30) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x3217 = INT16_MAX;
	uint64_t x3218 = 6LLU;
	static int64_t x3219 = -1LL;
	int16_t x3220 = -55;
	volatile int32_t t68 = -33406297;

	t68 = ((x3217>>x3218)|(x3219<x3220));

	if (t68 != 511) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x3249 = 19255788;
	uint16_t x3250 = 10U;
	uint8_t x3251 = UINT8_MAX;
	int8_t x3252 = 24;
	int32_t t69 = 28;

	t69 = ((x3249>>x3250)|(x3251<x3252));

	if (t69 != 18804) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x3296 = 75223U;

	t70 = ((x3293>>x3294)|(x3295<x3296));

	if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x3298 = 17U;
	int64_t x3299 = INT64_MIN;
	int16_t x3300 = INT16_MIN;
	uint64_t t71 = 39334LLU;

	t71 = ((x3297>>x3298)|(x3299<x3300));

	if (t71 != 1805LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x3337 = 78U;
	uint8_t x3338 = 2U;
	uint16_t x3339 = 30365U;
	uint8_t x3340 = 0U;
	volatile int32_t t72 = -16485342;

	t72 = ((x3337>>x3338)|(x3339<x3340));

	if (t72 != 19) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x3353 = 7517015414543059LLU;
	static uint16_t x3354 = 41U;
	int16_t x3356 = INT16_MIN;
	uint64_t t73 = 315118256014LLU;

	t73 = ((x3353>>x3354)|(x3355<x3356));

	if (t73 != 3418LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x3565 = 1U;
	int8_t x3566 = 6;
	int64_t x3567 = -1LL;

	t74 = ((x3565>>x3566)|(x3567<x3568));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x3673 = 137U;
	uint8_t x3674 = 5U;
	uint32_t x3675 = UINT32_MAX;

	t75 = ((x3673>>x3674)|(x3675<x3676));

	if (t75 != 4) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x3745 = UINT64_MAX;
	int16_t x3746 = 0;
	static volatile uint8_t x3747 = 34U;
	int8_t x3748 = 0;

	t76 = ((x3745>>x3746)|(x3747<x3748));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x3749 = 2;
	volatile uint8_t x3750 = 6U;
	int32_t x3751 = 0;
	int32_t x3752 = -389846;
	volatile int32_t t77 = 1;

	t77 = ((x3749>>x3750)|(x3751<x3752));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x3757 = 1472796093U;
	volatile int16_t x3758 = 14;
	int32_t x3759 = INT32_MIN;
	volatile uint32_t t78 = 146802838U;

	t78 = ((x3757>>x3758)|(x3759<x3760));

	if (t78 != 89893U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x3777 = UINT32_MAX;
	int8_t x3778 = 15;
	uint32_t t79 = 319U;

	t79 = ((x3777>>x3778)|(x3779<x3780));

	if (t79 != 131071U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x3846 = 0;
	int64_t x3847 = -217017913LL;
	volatile uint64_t x3848 = UINT64_MAX;
	volatile int32_t t80 = INT32_MAX;

	t80 = ((x3845>>x3846)|(x3847<x3848));

	if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x3854 = 4U;
	int32_t x3855 = INT32_MIN;

	t81 = ((x3853>>x3854)|(x3855<x3856));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x3862 = 1U;
	int64_t x3863 = INT64_MAX;
	uint16_t x3864 = 60U;

	t82 = ((x3861>>x3862)|(x3863<x3864));

	if (t82 != 16383) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x3929 = INT64_MAX;
	volatile int16_t x3930 = 49;
	int8_t x3931 = INT8_MIN;
	int64_t x3932 = INT64_MIN;
	int64_t t83 = -448555448617LL;

	t83 = ((x3929>>x3930)|(x3931<x3932));

	if (t83 != 16383LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x4037 = INT16_MAX;
	static uint8_t x4038 = 6U;
	int64_t x4039 = 20396341888157495LL;
	uint64_t x4040 = UINT64_MAX;
	static int32_t t84 = 7243;

	t84 = ((x4037>>x4038)|(x4039<x4040));

	if (t84 != 511) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x4097 = 471666LLU;
	volatile int16_t x4098 = 19;
	int8_t x4099 = 58;
	int32_t x4100 = -1;
	uint64_t t85 = 362588530660614413LLU;

	t85 = ((x4097>>x4098)|(x4099<x4100));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x4149 = 2470946987067711LL;
	int8_t x4150 = 0;
	int16_t x4152 = 0;
	static volatile int64_t t86 = 56996987685706134LL;

	t86 = ((x4149>>x4150)|(x4151<x4152));

	if (t86 != 2470946987067711LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x4205 = 1U;
	uint8_t x4206 = 8U;
	int16_t x4207 = 11;
	static volatile int64_t x4208 = INT64_MIN;
	int32_t t87 = -11898;

	t87 = ((x4205>>x4206)|(x4207<x4208));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x4281 = 17U;
	volatile uint8_t x4282 = 1U;
	int16_t x4283 = INT16_MAX;
	int16_t x4284 = -9;
	uint32_t t88 = 55U;

	t88 = ((x4281>>x4282)|(x4283<x4284));

	if (t88 != 8U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x4298 = 7U;
	int16_t x4300 = INT16_MIN;
	volatile int32_t t89 = 9;

	t89 = ((x4297>>x4298)|(x4299<x4300));

	if (t89 != 511) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x4330 = 0;
	uint64_t x4331 = 326029LLU;
	volatile int8_t x4332 = -1;
	volatile uint32_t t90 = UINT32_MAX;

	t90 = ((x4329>>x4330)|(x4331<x4332));

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x4393 = 30;
	static volatile uint8_t x4394 = 3U;
	uint16_t x4395 = 7U;

	t91 = ((x4393>>x4394)|(x4395<x4396));

	if (t91 != 3) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x4422 = 3U;
	int8_t x4423 = -1;
	int32_t x4424 = INT32_MIN;
	volatile uint64_t t92 = 3LLU;

	t92 = ((x4421>>x4422)|(x4423<x4424));

	if (t92 != 131976588844733LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x4449 = INT16_MAX;
	uint8_t x4450 = 30U;
	int32_t x4452 = 5;
	static int32_t t93 = 64;

	t93 = ((x4449>>x4450)|(x4451<x4452));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x4645 = 2;
	int16_t x4647 = INT16_MIN;
	int8_t x4648 = -1;
	volatile int32_t t94 = -11676;

	t94 = ((x4645>>x4646)|(x4647<x4648));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x4965 = 1661U;
	uint32_t x4966 = 0U;
	volatile int16_t x4967 = INT16_MIN;
	int64_t x4968 = INT64_MAX;
	int32_t t95 = 0;

	t95 = ((x4965>>x4966)|(x4967<x4968));

	if (t95 != 1661) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x4973 = UINT16_MAX;
	volatile int8_t x4974 = 2;
	int64_t x4975 = INT64_MIN;
	uint32_t x4976 = 13837U;
	static volatile int32_t t96 = -2;

	t96 = ((x4973>>x4974)|(x4975<x4976));

	if (t96 != 16383) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x5013 = 1;
	volatile uint16_t x5014 = 29U;
	int64_t x5015 = -31715273092LL;
	int16_t x5016 = -12;

	t97 = ((x5013>>x5014)|(x5015<x5016));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x5165 = INT32_MAX;
	uint16_t x5166 = 26U;
	uint64_t x5167 = 827409313LLU;
	int16_t x5168 = -7681;
	int32_t t98 = 438;

	t98 = ((x5165>>x5166)|(x5167<x5168));

	if (t98 != 31) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x5177 = 216907532342365038LL;
	int8_t x5178 = 1;
	volatile uint8_t x5180 = 18U;
	int64_t t99 = -23LL;

	t99 = ((x5177>>x5178)|(x5179<x5180));

	if (t99 != 108453766171182519LL) { NG(); } else { ; }
	
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

