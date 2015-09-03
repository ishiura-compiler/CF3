#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x90 = 23LLU;
int64_t x200 = 0LL;
static int8_t x432 = 1;
int32_t t7 = 2818719;
int64_t x466 = -159LL;
static volatile int16_t x467 = INT16_MIN;
int64_t t9 = 636LL;
uint64_t x494 = UINT64_MAX;
static int32_t x504 = 14;
int16_t x545 = INT16_MAX;
volatile int8_t x546 = INT8_MIN;
static uint8_t x577 = 109U;
uint8_t x578 = UINT8_MAX;
uint32_t x579 = UINT32_MAX;
static int32_t t14 = -4326;
int32_t x599 = INT32_MAX;
static int16_t x685 = INT16_MAX;
static int32_t t17 = 269;
uint8_t x816 = 5U;
int64_t t22 = 164999LL;
int8_t x820 = 0;
int32_t t23 = 14385958;
static uint16_t x912 = 8U;
static int64_t t25 = 12116235407462LL;
static int64_t x913 = 4996LL;
uint16_t x916 = 2U;
uint32_t x922 = 478682352U;
int32_t x927 = INT32_MAX;
int32_t x951 = 3;
volatile int32_t x978 = -1;
int32_t x980 = 0;
int8_t x1001 = INT8_MIN;
int16_t x1002 = -776;
int64_t x1027 = INT64_MAX;
int8_t x1068 = 3;
int64_t x1330 = -1LL;
int64_t x1331 = -30470490603957216LL;
uint32_t x1332 = 0U;
int64_t t38 = -1530000941435LL;
int32_t x1385 = 3211;
uint32_t x1389 = UINT32_MAX;
int64_t x1434 = -49489563LL;
static uint64_t x1435 = UINT64_MAX;
uint64_t t43 = 204913655LLU;
volatile int16_t x1447 = INT16_MIN;
int16_t x1450 = INT16_MIN;
int8_t x1451 = 3;
volatile int64_t x1477 = -1LL;
int64_t x1480 = 1LL;
uint16_t x1537 = UINT16_MAX;
volatile int32_t t50 = 38;
int64_t t52 = -196851100707696LL;
static volatile uint16_t x1690 = 0U;
uint32_t x1691 = 259333786U;
int8_t x1746 = INT8_MIN;
static volatile int32_t t58 = -27217094;
static int8_t x1843 = 46;
uint64_t x1894 = 66632346LLU;
uint16_t x1991 = 2779U;
int32_t t64 = -49716913;
uint8_t x2032 = 11U;
static volatile int64_t t65 = 937141380LL;
volatile int16_t x2034 = -1;
int32_t t67 = -232037999;
static uint8_t x2125 = 7U;
int64_t x2128 = 1LL;
int64_t x2175 = 3192416649521360LL;
volatile uint8_t x2176 = 48U;
int32_t x2233 = -6;
int32_t x2235 = -1;
static uint8_t x2236 = 2U;
static int32_t x2245 = -141191;
volatile int32_t t73 = 253;
static int8_t x2364 = 2;
static volatile int64_t t74 = 382LL;
int64_t x2461 = INT64_MIN;
static uint32_t x2464 = 4U;
volatile uint64_t t77 = 110658644LLU;
uint16_t x2564 = 6U;
uint16_t x2569 = 2U;
int64_t x2605 = -67455739576815214LL;
uint8_t x2607 = 2U;
int32_t t80 = -39296013;
uint8_t x2647 = 22U;
volatile int32_t t82 = 11;
int32_t t83 = 70819;
static uint8_t x2792 = 4U;
volatile uint16_t x2828 = 40U;
uint64_t t90 = 102LLU;
int16_t x2966 = INT16_MAX;
static uint64_t x2985 = 4405889802965664890LLU;
uint8_t x3102 = UINT8_MAX;
int8_t x3141 = INT8_MIN;
int32_t t96 = -3683;
int8_t x3223 = INT8_MIN;
int8_t x3278 = INT8_MIN;
int32_t x3285 = -923695892;
uint32_t x3288 = 19U;


void f0(void) {
	static int32_t x9 = 0;
	static int8_t x10 = INT8_MIN;
	uint32_t x11 = 4715377U;
	int8_t x12 = 1;
	static uint32_t t0 = 5867450U;

	t0 = (((x9==x10)*x11)<<x12);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x89 = -1;
	static int16_t x91 = -62;
	int64_t x92 = 1LL;
	int32_t t1 = 1;

	t1 = (((x89==x90)*x91)<<x92);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x161 = UINT8_MAX;
	volatile int32_t x162 = 4082192;
	static volatile uint16_t x163 = UINT16_MAX;
	int32_t x164 = 1;
	int32_t t2 = -1;

	t2 = (((x161==x162)*x163)<<x164);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x197 = INT8_MAX;
	int8_t x198 = INT8_MIN;
	uint8_t x199 = 6U;
	int32_t t3 = 85;

	t3 = (((x197==x198)*x199)<<x200);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x221 = 6948U;
	int16_t x222 = -54;
	uint64_t x223 = UINT64_MAX;
	int8_t x224 = 1;
	static volatile uint64_t t4 = 4694432841757841352LLU;

	t4 = (((x221==x222)*x223)<<x224);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x361 = UINT64_MAX;
	int32_t x362 = INT32_MIN;
	int64_t x363 = 0LL;
	volatile uint8_t x364 = 0U;
	int64_t t5 = 124982426LL;

	t5 = (((x361==x362)*x363)<<x364);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x417 = 10154765767LLU;
	volatile int8_t x418 = INT8_MAX;
	uint8_t x419 = 3U;
	uint8_t x420 = 1U;
	static int32_t t6 = -4;

	t6 = (((x417==x418)*x419)<<x420);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x429 = INT16_MIN;
	int32_t x430 = -1;
	int16_t x431 = -513;

	t7 = (((x429==x430)*x431)<<x432);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x465 = INT32_MIN;
	static uint16_t x468 = 4U;
	int32_t t8 = 6;

	t8 = (((x465==x466)*x467)<<x468);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x469 = 8;
	uint8_t x470 = 17U;
	int64_t x471 = INT64_MIN;
	uint16_t x472 = 1U;

	t9 = (((x469==x470)*x471)<<x472);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x493 = INT32_MIN;
	uint64_t x495 = 9750258LLU;
	volatile int16_t x496 = 1;
	uint64_t t10 = 361LLU;

	t10 = (((x493==x494)*x495)<<x496);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x501 = -9;
	volatile int8_t x502 = 0;
	uint32_t x503 = 263741U;
	static uint32_t t11 = 4749250U;

	t11 = (((x501==x502)*x503)<<x504);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x547 = 0U;
	int16_t x548 = 25;
	volatile int32_t t12 = 1;

	t12 = (((x545==x546)*x547)<<x548);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x580 = 5;
	uint32_t t13 = 1759U;

	t13 = (((x577==x578)*x579)<<x580);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x593 = -349;
	int16_t x594 = INT16_MAX;
	uint16_t x595 = 227U;
	uint32_t x596 = 0U;

	t14 = (((x593==x594)*x595)<<x596);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x597 = 64U;
	int16_t x598 = -1;
	int8_t x600 = 4;
	int32_t t15 = -16037;

	t15 = (((x597==x598)*x599)<<x600);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x617 = -1;
	int64_t x618 = INT64_MAX;
	uint16_t x619 = 28060U;
	static uint8_t x620 = 24U;
	volatile int32_t t16 = 624;

	t16 = (((x617==x618)*x619)<<x620);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x686 = -1LL;
	int8_t x687 = INT8_MIN;
	uint64_t x688 = 1LLU;

	t17 = (((x685==x686)*x687)<<x688);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x729 = INT64_MIN;
	static int16_t x730 = INT16_MIN;
	int32_t x731 = INT32_MAX;
	int16_t x732 = 1;
	static int32_t t18 = 2468;

	t18 = (((x729==x730)*x731)<<x732);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x757 = INT32_MIN;
	volatile int16_t x758 = 1;
	static int64_t x759 = INT64_MAX;
	volatile uint8_t x760 = 0U;
	int64_t t19 = 25755516060994005LL;

	t19 = (((x757==x758)*x759)<<x760);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x761 = 266U;
	int8_t x762 = -1;
	uint64_t x763 = UINT64_MAX;
	static volatile int8_t x764 = 40;
	uint64_t t20 = 230LLU;

	t20 = (((x761==x762)*x763)<<x764);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x777 = -1;
	static int64_t x778 = -951974076038371249LL;
	static uint32_t x779 = UINT32_MAX;
	int16_t x780 = 0;
	static uint32_t t21 = 62U;

	t21 = (((x777==x778)*x779)<<x780);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x813 = -1;
	uint32_t x814 = 1003308643U;
	int64_t x815 = INT64_MIN;

	t22 = (((x813==x814)*x815)<<x816);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x817 = INT16_MIN;
	volatile int64_t x818 = INT64_MIN;
	int32_t x819 = INT32_MIN;

	t23 = (((x817==x818)*x819)<<x820);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x849 = INT16_MAX;
	uint8_t x850 = UINT8_MAX;
	static uint64_t x851 = UINT64_MAX;
	volatile int8_t x852 = 35;
	uint64_t t24 = 2284429933374LLU;

	t24 = (((x849==x850)*x851)<<x852);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x909 = -18;
	static int16_t x910 = INT16_MIN;
	int64_t x911 = -3206798LL;

	t25 = (((x909==x910)*x911)<<x912);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x914 = INT64_MAX;
	uint16_t x915 = 81U;
	int32_t t26 = -656576;

	t26 = (((x913==x914)*x915)<<x916);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x921 = INT64_MIN;
	volatile uint8_t x923 = 28U;
	int8_t x924 = 3;
	static int32_t t27 = -10349524;

	t27 = (((x921==x922)*x923)<<x924);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x925 = -1;
	int8_t x926 = INT8_MIN;
	uint8_t x928 = 0U;
	int32_t t28 = 6;

	t28 = (((x925==x926)*x927)<<x928);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x937 = -24;
	static int8_t x938 = INT8_MIN;
	int8_t x939 = -6;
	volatile uint8_t x940 = 21U;
	volatile int32_t t29 = 7;

	t29 = (((x937==x938)*x939)<<x940);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x949 = INT16_MIN;
	volatile uint32_t x950 = 2220890U;
	uint8_t x952 = 3U;
	int32_t t30 = -406820;

	t30 = (((x949==x950)*x951)<<x952);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x977 = INT16_MIN;
	volatile int64_t x979 = -125376LL;
	volatile int64_t t31 = -886771695LL;

	t31 = (((x977==x978)*x979)<<x980);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1003 = INT16_MAX;
	uint8_t x1004 = 2U;
	volatile int32_t t32 = 261068630;

	t32 = (((x1001==x1002)*x1003)<<x1004);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1013 = 1581168797LL;
	int64_t x1014 = 29659653498399574LL;
	int64_t x1015 = -24548753LL;
	uint32_t x1016 = 6U;
	volatile int64_t t33 = 27908LL;

	t33 = (((x1013==x1014)*x1015)<<x1016);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x1025 = 959U;
	uint8_t x1026 = 2U;
	volatile int8_t x1028 = 0;
	int64_t t34 = 3804819690233LL;

	t34 = (((x1025==x1026)*x1027)<<x1028);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1065 = INT64_MAX;
	uint32_t x1066 = 377090674U;
	int16_t x1067 = 68;
	int32_t t35 = -118192557;

	t35 = (((x1065==x1066)*x1067)<<x1068);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x1189 = 3;
	uint16_t x1190 = UINT16_MAX;
	uint8_t x1191 = UINT8_MAX;
	int8_t x1192 = 21;
	int32_t t36 = 48353;

	t36 = (((x1189==x1190)*x1191)<<x1192);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1225 = UINT32_MAX;
	int64_t x1226 = 3424575257191823921LL;
	volatile uint8_t x1227 = UINT8_MAX;
	static int32_t x1228 = 26;
	volatile int32_t t37 = 115175525;

	t37 = (((x1225==x1226)*x1227)<<x1228);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1329 = 2U;

	t38 = (((x1329==x1330)*x1331)<<x1332);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x1357 = INT32_MAX;
	int16_t x1358 = INT16_MAX;
	uint32_t x1359 = 12U;
	uint8_t x1360 = 0U;
	uint32_t t39 = 2956989U;

	t39 = (((x1357==x1358)*x1359)<<x1360);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x1377 = 8;
	uint16_t x1378 = 3U;
	int64_t x1379 = 45355802LL;
	int8_t x1380 = 24;
	static int64_t t40 = -1673256LL;

	t40 = (((x1377==x1378)*x1379)<<x1380);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1386 = -12;
	uint8_t x1387 = 1U;
	static uint16_t x1388 = 26U;
	volatile int32_t t41 = -3688;

	t41 = (((x1385==x1386)*x1387)<<x1388);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x1390 = -36613;
	int64_t x1391 = 5324095090LL;
	uint8_t x1392 = 6U;
	int64_t t42 = 0LL;

	t42 = (((x1389==x1390)*x1391)<<x1392);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1433 = 54;
	uint16_t x1436 = 1U;

	t43 = (((x1433==x1434)*x1435)<<x1436);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x1445 = 5978U;
	int8_t x1446 = INT8_MIN;
	volatile uint16_t x1448 = 0U;
	volatile int32_t t44 = 106;

	t44 = (((x1445==x1446)*x1447)<<x1448);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x1449 = 1U;
	uint8_t x1452 = 1U;
	volatile int32_t t45 = 601425653;

	t45 = (((x1449==x1450)*x1451)<<x1452);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x1478 = -695;
	volatile uint64_t x1479 = 85217900LLU;
	volatile uint64_t t46 = 600189682941649LLU;

	t46 = (((x1477==x1478)*x1479)<<x1480);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1501 = 772326563217LL;
	static volatile uint8_t x1502 = 13U;
	uint16_t x1503 = UINT16_MAX;
	uint32_t x1504 = 13U;
	volatile int32_t t47 = 253518;

	t47 = (((x1501==x1502)*x1503)<<x1504);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x1517 = 420U;
	int32_t x1518 = INT32_MAX;
	int64_t x1519 = INT64_MIN;
	static volatile int8_t x1520 = 12;
	int64_t t48 = -27693795LL;

	t48 = (((x1517==x1518)*x1519)<<x1520);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x1538 = 3U;
	int64_t x1539 = INT64_MAX;
	uint8_t x1540 = 0U;
	static int64_t t49 = -10263LL;

	t49 = (((x1537==x1538)*x1539)<<x1540);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x1589 = 64925097U;
	int32_t x1590 = 102710858;
	static int8_t x1591 = INT8_MAX;
	int32_t x1592 = 3;

	t50 = (((x1589==x1590)*x1591)<<x1592);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x1609 = INT32_MIN;
	int64_t x1610 = -24070LL;
	uint64_t x1611 = 41776919199183LLU;
	volatile uint16_t x1612 = 0U;
	volatile uint64_t t51 = 939658729LLU;

	t51 = (((x1609==x1610)*x1611)<<x1612);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x1685 = INT64_MIN;
	volatile int8_t x1686 = INT8_MIN;
	volatile int64_t x1687 = -1LL;
	uint8_t x1688 = 2U;

	t52 = (((x1685==x1686)*x1687)<<x1688);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint64_t x1689 = 162197382602343LLU;
	static volatile int8_t x1692 = 0;
	volatile uint32_t t53 = 33710U;

	t53 = (((x1689==x1690)*x1691)<<x1692);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x1713 = INT16_MIN;
	uint8_t x1714 = 30U;
	int64_t x1715 = INT64_MAX;
	static uint8_t x1716 = 8U;
	int64_t t54 = -121646517LL;

	t54 = (((x1713==x1714)*x1715)<<x1716);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x1741 = INT16_MIN;
	int16_t x1742 = INT16_MAX;
	int8_t x1743 = 1;
	static volatile uint8_t x1744 = 1U;
	int32_t t55 = 2849;

	t55 = (((x1741==x1742)*x1743)<<x1744);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x1745 = -120;
	int8_t x1747 = INT8_MIN;
	uint16_t x1748 = 3U;
	static volatile int32_t t56 = 6441;

	t56 = (((x1745==x1746)*x1747)<<x1748);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x1789 = 0U;
	volatile int32_t x1790 = INT32_MIN;
	int32_t x1791 = -1380;
	volatile int8_t x1792 = 1;
	volatile int32_t t57 = -3;

	t57 = (((x1789==x1790)*x1791)<<x1792);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x1797 = INT8_MIN;
	int64_t x1798 = INT64_MIN;
	uint16_t x1799 = 71U;
	uint8_t x1800 = 28U;

	t58 = (((x1797==x1798)*x1799)<<x1800);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x1805 = INT16_MAX;
	uint64_t x1806 = UINT64_MAX;
	int16_t x1807 = 1522;
	volatile int64_t x1808 = 3LL;
	volatile int32_t t59 = -170188;

	t59 = (((x1805==x1806)*x1807)<<x1808);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x1817 = INT8_MIN;
	int64_t x1818 = 1365LL;
	int32_t x1819 = 10182;
	uint16_t x1820 = 10U;
	static volatile int32_t t60 = -89;

	t60 = (((x1817==x1818)*x1819)<<x1820);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x1841 = 1905707730069782LLU;
	int8_t x1842 = -5;
	volatile uint16_t x1844 = 1U;
	volatile int32_t t61 = 3162;

	t61 = (((x1841==x1842)*x1843)<<x1844);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x1893 = 424387566LL;
	int8_t x1895 = 3;
	volatile int8_t x1896 = 11;
	volatile int32_t t62 = 1407356;

	t62 = (((x1893==x1894)*x1895)<<x1896);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x1989 = 32736774LL;
	uint32_t x1990 = UINT32_MAX;
	int8_t x1992 = 0;
	int32_t t63 = -17;

	t63 = (((x1989==x1990)*x1991)<<x1992);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x2025 = 238U;
	int16_t x2026 = -6;
	int8_t x2027 = INT8_MAX;
	int16_t x2028 = 0;

	t64 = (((x2025==x2026)*x2027)<<x2028);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x2029 = 0;
	static int32_t x2030 = INT32_MAX;
	int64_t x2031 = INT64_MIN;

	t65 = (((x2029==x2030)*x2031)<<x2032);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint16_t x2033 = 8U;
	int8_t x2035 = INT8_MIN;
	uint16_t x2036 = 0U;
	volatile int32_t t66 = 0;

	t66 = (((x2033==x2034)*x2035)<<x2036);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x2037 = 206411872849734LLU;
	volatile int8_t x2038 = -8;
	static int16_t x2039 = -1;
	static uint32_t x2040 = 13U;

	t67 = (((x2037==x2038)*x2039)<<x2040);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x2109 = INT16_MIN;
	static volatile uint32_t x2110 = 1325U;
	int16_t x2111 = -61;
	uint8_t x2112 = 15U;
	int32_t t68 = -224;

	t68 = (((x2109==x2110)*x2111)<<x2112);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x2126 = -1;
	uint64_t x2127 = 67414401520937475LLU;
	uint64_t t69 = 10251752LLU;

	t69 = (((x2125==x2126)*x2127)<<x2128);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x2173 = INT32_MAX;
	volatile int8_t x2174 = INT8_MIN;
	volatile int64_t t70 = 1LL;

	t70 = (((x2173==x2174)*x2175)<<x2176);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x2234 = INT64_MIN;
	int32_t t71 = 0;

	t71 = (((x2233==x2234)*x2235)<<x2236);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x2246 = 24U;
	int32_t x2247 = INT32_MIN;
	int8_t x2248 = 0;
	volatile int32_t t72 = 41107581;

	t72 = (((x2245==x2246)*x2247)<<x2248);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x2297 = UINT64_MAX;
	uint16_t x2298 = UINT16_MAX;
	int16_t x2299 = -219;
	volatile int64_t x2300 = 0LL;

	t73 = (((x2297==x2298)*x2299)<<x2300);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x2361 = 223U;
	uint32_t x2362 = 396525U;
	static volatile int64_t x2363 = -490903392139574526LL;

	t74 = (((x2361==x2362)*x2363)<<x2364);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x2462 = UINT8_MAX;
	volatile int32_t x2463 = INT32_MIN;
	int32_t t75 = 3;

	t75 = (((x2461==x2462)*x2463)<<x2464);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x2497 = UINT8_MAX;
	uint32_t x2498 = 252519U;
	int16_t x2499 = -11;
	int8_t x2500 = 7;
	volatile int32_t t76 = 59286;

	t76 = (((x2497==x2498)*x2499)<<x2500);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x2545 = -2728092074927LL;
	int64_t x2546 = -1LL;
	uint64_t x2547 = 286288471LLU;
	static int32_t x2548 = 1;

	t77 = (((x2545==x2546)*x2547)<<x2548);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x2561 = 686U;
	int64_t x2562 = INT64_MAX;
	int32_t x2563 = 1;
	int32_t t78 = 830219415;

	t78 = (((x2561==x2562)*x2563)<<x2564);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x2570 = -159;
	int16_t x2571 = -9033;
	static volatile uint64_t x2572 = 7LLU;
	volatile int32_t t79 = -587529663;

	t79 = (((x2569==x2570)*x2571)<<x2572);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x2606 = INT8_MIN;
	uint16_t x2608 = 0U;

	t80 = (((x2605==x2606)*x2607)<<x2608);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x2621 = INT64_MAX;
	int8_t x2622 = 1;
	uint64_t x2623 = 249264LLU;
	int8_t x2624 = 16;
	static uint64_t t81 = 174LLU;

	t81 = (((x2621==x2622)*x2623)<<x2624);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x2645 = 237123114U;
	int32_t x2646 = INT32_MIN;
	uint16_t x2648 = 15U;

	t82 = (((x2645==x2646)*x2647)<<x2648);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x2705 = INT64_MAX;
	int8_t x2706 = INT8_MAX;
	volatile int32_t x2707 = -1;
	uint16_t x2708 = 3U;

	t83 = (((x2705==x2706)*x2707)<<x2708);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x2725 = 163877312125972LLU;
	uint32_t x2726 = UINT32_MAX;
	int8_t x2727 = -52;
	uint8_t x2728 = 0U;
	int32_t t84 = -29234177;

	t84 = (((x2725==x2726)*x2727)<<x2728);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x2781 = 58U;
	static int8_t x2782 = INT8_MIN;
	volatile int32_t x2783 = -1;
	uint8_t x2784 = 0U;
	volatile int32_t t85 = 63012814;

	t85 = (((x2781==x2782)*x2783)<<x2784);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x2789 = 7U;
	int16_t x2790 = -1;
	volatile uint16_t x2791 = UINT16_MAX;
	int32_t t86 = 145296;

	t86 = (((x2789==x2790)*x2791)<<x2792);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x2817 = UINT64_MAX;
	int16_t x2818 = INT16_MAX;
	uint32_t x2819 = 68U;
	uint16_t x2820 = 0U;
	volatile uint32_t t87 = 701681911U;

	t87 = (((x2817==x2818)*x2819)<<x2820);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x2825 = -601609LL;
	static int32_t x2826 = INT32_MIN;
	uint64_t x2827 = UINT64_MAX;
	volatile uint64_t t88 = 60626977499702LLU;

	t88 = (((x2825==x2826)*x2827)<<x2828);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x2837 = 26LL;
	int64_t x2838 = -948312515213501LL;
	uint16_t x2839 = UINT16_MAX;
	volatile int8_t x2840 = 1;
	int32_t t89 = -3040832;

	t89 = (((x2837==x2838)*x2839)<<x2840);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x2881 = 7290701U;
	uint64_t x2882 = 394766371457421LLU;
	uint64_t x2883 = 27774LLU;
	uint16_t x2884 = 5U;

	t90 = (((x2881==x2882)*x2883)<<x2884);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x2965 = 309LL;
	uint64_t x2967 = 1027106768069LLU;
	int8_t x2968 = 9;
	uint64_t t91 = 1447343757847LLU;

	t91 = (((x2965==x2966)*x2967)<<x2968);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x2977 = INT32_MIN;
	uint64_t x2978 = UINT64_MAX;
	uint32_t x2979 = 98U;
	uint8_t x2980 = 7U;
	uint32_t t92 = 23350811U;

	t92 = (((x2977==x2978)*x2979)<<x2980);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x2986 = 3475U;
	volatile int16_t x2987 = 4;
	uint8_t x2988 = 2U;
	int32_t t93 = -27;

	t93 = (((x2985==x2986)*x2987)<<x2988);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x3061 = 30U;
	int32_t x3062 = 7;
	uint8_t x3063 = 3U;
	uint16_t x3064 = 17U;
	int32_t t94 = -263789;

	t94 = (((x3061==x3062)*x3063)<<x3064);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x3101 = -1;
	int32_t x3103 = 195558;
	static uint32_t x3104 = 14U;
	static volatile int32_t t95 = -32267;

	t95 = (((x3101==x3102)*x3103)<<x3104);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x3142 = 919854U;
	volatile int8_t x3143 = -1;
	static volatile int8_t x3144 = 11;

	t96 = (((x3141==x3142)*x3143)<<x3144);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x3221 = INT32_MIN;
	uint64_t x3222 = UINT64_MAX;
	uint8_t x3224 = 15U;
	int32_t t97 = 123;

	t97 = (((x3221==x3222)*x3223)<<x3224);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x3277 = INT64_MAX;
	uint8_t x3279 = 3U;
	uint8_t x3280 = 7U;
	static volatile int32_t t98 = 45830303;

	t98 = (((x3277==x3278)*x3279)<<x3280);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x3286 = 51U;
	static volatile int16_t x3287 = INT16_MIN;
	volatile int32_t t99 = -65;

	t99 = (((x3285==x3286)*x3287)<<x3288);

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

