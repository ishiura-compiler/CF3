#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x31 = UINT64_MAX;
volatile uint64_t t0 = 2643507LLU;
int32_t x38 = INT32_MIN;
volatile int64_t t1 = 54164445380230LL;
volatile int8_t x81 = -1;
static volatile int32_t x276 = 9;
int64_t x290 = -73LL;
static uint8_t x292 = 49U;
static int64_t t5 = -5766045848874LL;
static int8_t x317 = INT8_MIN;
int8_t x318 = -1;
int16_t x357 = -1838;
int16_t x364 = 1;
volatile uint16_t x387 = UINT16_MAX;
volatile int64_t t9 = 3314668134LL;
uint64_t x406 = 5112633822656737222LLU;
volatile int32_t x513 = -1;
int64_t x594 = INT64_MIN;
int32_t x607 = INT32_MAX;
int32_t x665 = INT32_MIN;
volatile int32_t x666 = INT32_MIN;
int16_t x674 = INT16_MIN;
int8_t x679 = INT8_MIN;
uint32_t x680 = 17U;
uint32_t t18 = 342151U;
volatile uint64_t t19 = 13755284567221LLU;
volatile int16_t x697 = 168;
uint64_t x702 = 7833276498337374LLU;
uint8_t x809 = 20U;
int32_t t23 = 109594;
int16_t x816 = 4;
volatile int16_t x826 = 736;
int16_t x849 = 7;
volatile int32_t x851 = INT32_MIN;
static volatile int32_t t26 = 1;
volatile int8_t x934 = INT8_MIN;
static int64_t x941 = -1LL;
uint32_t x950 = UINT32_MAX;
int8_t x951 = -1;
int8_t x959 = INT8_MIN;
int32_t x970 = INT32_MAX;
int8_t x1003 = INT8_MIN;
static uint16_t x1004 = 1U;
int32_t x1113 = -6;
uint64_t x1141 = 44327LLU;
uint8_t x1192 = 49U;
static uint16_t x1218 = 1133U;
uint64_t x1345 = 968LLU;
uint64_t x1348 = 0LLU;
static int32_t x1369 = 610754;
int64_t t47 = 11649029548LL;
uint16_t x1669 = 14U;
uint64_t x1670 = UINT64_MAX;
int32_t t49 = -86925878;
uint64_t t50 = 8620799LLU;
int8_t x1801 = INT8_MIN;
int8_t x1804 = 63;
uint16_t x1805 = UINT16_MAX;
int32_t x1806 = -246288237;
int16_t x1857 = INT16_MAX;
uint8_t x1858 = 1U;
static volatile uint16_t x1860 = 0U;
int32_t t57 = 41944143;
int16_t x1913 = INT16_MIN;
volatile int32_t x1987 = -1;
int64_t t60 = 199LL;
uint8_t x2024 = 17U;
int64_t x2030 = 8827866812079893LL;
volatile int8_t x2031 = -17;
static volatile int32_t x2131 = INT32_MIN;
uint64_t x2141 = 33905219354860887LLU;
static uint32_t x2144 = 11U;
uint64_t x2193 = UINT64_MAX;
volatile uint16_t x2196 = 2U;
uint8_t x2293 = 1U;
int16_t x2296 = 0;
uint32_t x2359 = 368362U;
uint32_t x2360 = 1U;
volatile uint32_t x2412 = 47U;
static int32_t x2446 = INT32_MIN;
static uint64_t x2455 = 7LLU;
uint16_t x2465 = UINT16_MAX;
uint32_t x2669 = UINT32_MAX;
int16_t x2671 = INT16_MAX;
int16_t x2707 = INT16_MAX;
volatile int32_t t81 = 578688;
volatile uint64_t t83 = 982524463255406683LLU;
int64_t x2963 = INT64_MIN;
uint16_t x3020 = 2U;
uint64_t x3103 = 311716752747LLU;
uint8_t x3104 = 2U;
volatile uint8_t x3164 = 0U;
volatile uint64_t x3165 = 15543LLU;
int16_t x3168 = 8;
int64_t x3214 = -1131LL;
static volatile uint64_t t90 = 19LLU;
static int64_t x3225 = INT64_MAX;
int8_t x3226 = -1;
uint32_t t94 = 690648166U;
uint32_t x3457 = 873923U;


void f0(void) {
	static volatile int32_t x29 = INT32_MAX;
	volatile int16_t x30 = -1;
	volatile int8_t x32 = 1;

	t0 = ((x29/(x30&x31))<<x32);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x37 = 0U;
	int64_t x39 = INT64_MAX;
	static uint8_t x40 = 5U;

	t1 = ((x37/(x38&x39))<<x40);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x82 = INT16_MIN;
	int64_t x83 = -11646831858078792LL;
	static volatile int8_t x84 = 3;
	volatile int64_t t2 = -889704229774257LL;

	t2 = ((x81/(x82&x83))<<x84);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x165 = 2U;
	volatile int64_t x166 = -2182LL;
	volatile uint32_t x167 = UINT32_MAX;
	volatile uint16_t x168 = 3U;
	int64_t t3 = -336050237565LL;

	t3 = ((x165/(x166&x167))<<x168);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x273 = -1LL;
	int16_t x274 = -1;
	uint8_t x275 = 122U;
	volatile int64_t t4 = 1927595464196686576LL;

	t4 = ((x273/(x274&x275))<<x276);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x289 = 23;
	volatile int64_t x291 = INT64_MIN;

	t5 = ((x289/(x290&x291))<<x292);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x319 = 3126LL;
	uint8_t x320 = 0U;
	int64_t t6 = 0LL;

	t6 = ((x317/(x318&x319))<<x320);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x358 = -3697;
	static int64_t x359 = INT64_MIN;
	static int8_t x360 = 0;
	int64_t t7 = 7029959983259531LL;

	t7 = ((x357/(x358&x359))<<x360);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x361 = UINT8_MAX;
	int8_t x362 = -1;
	volatile int8_t x363 = INT8_MAX;
	int32_t t8 = 262109781;

	t8 = ((x361/(x362&x363))<<x364);

	if (t8 != 4) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x385 = 1U;
	int64_t x386 = -1LL;
	static int8_t x388 = 11;

	t9 = ((x385/(x386&x387))<<x388);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x405 = 198;
	int8_t x407 = -6;
	volatile uint8_t x408 = 0U;
	volatile uint64_t t10 = 15989LLU;

	t10 = ((x405/(x406&x407))<<x408);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x509 = -1;
	uint32_t x510 = 1866U;
	int32_t x511 = -215015421;
	static volatile uint16_t x512 = 21U;
	volatile uint32_t t11 = 7889U;

	t11 = ((x509/(x510&x511))<<x512);

	if (t11 != 4292870144U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x514 = 239LLU;
	uint16_t x515 = UINT16_MAX;
	int16_t x516 = 9;
	uint64_t t12 = 9LLU;

	t12 = ((x513/(x514&x515))<<x516);

	if (t12 != 2624223006301776896LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x593 = INT8_MIN;
	static int8_t x595 = INT8_MIN;
	uint32_t x596 = 7U;
	int64_t t13 = 2293577922923572969LL;

	t13 = ((x593/(x594&x595))<<x596);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x605 = 5039081;
	int64_t x606 = -1LL;
	uint8_t x608 = 6U;
	int64_t t14 = 107LL;

	t14 = ((x605/(x606&x607))<<x608);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x649 = 306U;
	int64_t x650 = 1LL;
	int8_t x651 = -1;
	volatile int32_t x652 = 15;
	int64_t t15 = 4703914841430LL;

	t15 = ((x649/(x650&x651))<<x652);

	if (t15 != 10027008LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x667 = -1LL;
	int32_t x668 = 45;
	int64_t t16 = 33129LL;

	t16 = ((x665/(x666&x667))<<x668);

	if (t16 != 35184372088832LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x673 = 12U;
	int16_t x675 = INT16_MIN;
	uint8_t x676 = 29U;
	volatile int32_t t17 = -102;

	t17 = ((x673/(x674&x675))<<x676);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x677 = INT16_MIN;
	uint32_t x678 = UINT32_MAX;

	t18 = ((x677/(x678&x679))<<x680);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x681 = UINT8_MAX;
	int64_t x682 = -601377670606333LL;
	uint64_t x683 = 6LLU;
	uint32_t x684 = 1U;

	t19 = ((x681/(x682&x683))<<x684);

	if (t19 != 254LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x698 = INT8_MAX;
	int64_t x699 = -13340906103763084LL;
	static volatile int8_t x700 = 21;
	static int64_t t20 = -2236161258047756LL;

	t20 = ((x697/(x698&x699))<<x700);

	if (t20 != 2097152LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x701 = INT64_MIN;
	static uint8_t x703 = 5U;
	uint8_t x704 = 0U;
	volatile uint64_t t21 = 160514830LLU;

	t21 = ((x701/(x702&x703))<<x704);

	if (t21 != 2305843009213693952LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x725 = 2487;
	int32_t x726 = INT32_MIN;
	uint64_t x727 = UINT64_MAX;
	uint32_t x728 = 0U;
	uint64_t t22 = 2115546023596684LLU;

	t22 = ((x725/(x726&x727))<<x728);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x810 = -725;
	volatile int16_t x811 = -952;
	int16_t x812 = 0;

	t23 = ((x809/(x810&x811))<<x812);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x813 = 172282;
	uint64_t x814 = 44561977241535LLU;
	static int16_t x815 = INT16_MIN;
	volatile uint64_t t24 = 62117305LLU;

	t24 = ((x813/(x814&x815))<<x816);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x825 = -54;
	int64_t x827 = 59051805LL;
	static volatile uint8_t x828 = 0U;
	int64_t t25 = 1LL;

	t25 = ((x825/(x826&x827))<<x828);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x850 = INT16_MIN;
	int16_t x852 = 1;

	t26 = ((x849/(x850&x851))<<x852);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x933 = 670893786LL;
	uint64_t x935 = 7506LLU;
	int16_t x936 = 2;
	static volatile uint64_t t27 = 3758160053LLU;

	t27 = ((x933/(x934&x935))<<x936);

	if (t27 != 361472LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x942 = 1697568;
	int8_t x943 = INT8_MAX;
	int16_t x944 = 36;
	int64_t t28 = 1608291LL;

	t28 = ((x941/(x942&x943))<<x944);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x949 = -1LL;
	uint64_t x952 = 15LLU;
	volatile int64_t t29 = 984715LL;

	t29 = ((x949/(x950&x951))<<x952);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x957 = INT32_MIN;
	volatile int32_t x958 = INT32_MIN;
	uint16_t x960 = 18U;
	volatile int32_t t30 = -4166714;

	t30 = ((x957/(x958&x959))<<x960);

	if (t30 != 262144) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x969 = 17658679;
	volatile uint32_t x971 = 2015410904U;
	uint8_t x972 = 0U;
	uint32_t t31 = 15480119U;

	t31 = ((x969/(x970&x971))<<x972);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1001 = 8831906LLU;
	static int64_t x1002 = INT64_MIN;
	volatile uint64_t t32 = 103770LLU;

	t32 = ((x1001/(x1002&x1003))<<x1004);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1021 = -1;
	int64_t x1022 = -1LL;
	int32_t x1023 = INT32_MAX;
	uint8_t x1024 = 32U;
	volatile int64_t t33 = 365326836519LL;

	t33 = ((x1021/(x1022&x1023))<<x1024);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1114 = 4LLU;
	int16_t x1115 = INT16_MAX;
	volatile int32_t x1116 = 37;
	volatile uint64_t t34 = 4470369248309590604LLU;

	t34 = ((x1113/(x1114&x1115))<<x1116);

	if (t34 != 18446743798831644672LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1142 = INT32_MAX;
	int16_t x1143 = -1;
	uint8_t x1144 = 51U;
	volatile uint64_t t35 = 962319279735LLU;

	t35 = ((x1141/(x1142&x1143))<<x1144);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1189 = -11;
	int8_t x1190 = INT8_MIN;
	uint64_t x1191 = 421166324LLU;
	uint64_t t36 = 2154LLU;

	t36 = ((x1189/(x1190&x1191))<<x1192);

	if (t36 != 10832283003732885504LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x1217 = 0U;
	int64_t x1219 = -1LL;
	static uint8_t x1220 = 2U;
	volatile int64_t t37 = 9775892256594LL;

	t37 = ((x1217/(x1218&x1219))<<x1220);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x1329 = INT8_MAX;
	uint64_t x1330 = UINT64_MAX;
	int32_t x1331 = 395;
	int8_t x1332 = 62;
	volatile uint64_t t38 = 1168936377438568108LLU;

	t38 = ((x1329/(x1330&x1331))<<x1332);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x1346 = -1LL;
	int8_t x1347 = INT8_MIN;
	uint64_t t39 = 11146376012437LLU;

	t39 = ((x1345/(x1346&x1347))<<x1348);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x1349 = INT8_MIN;
	int16_t x1350 = INT16_MIN;
	volatile int64_t x1351 = INT64_MIN;
	int8_t x1352 = 1;
	volatile int64_t t40 = 894185639163460600LL;

	t40 = ((x1349/(x1350&x1351))<<x1352);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1370 = UINT32_MAX;
	int32_t x1371 = -1;
	volatile uint8_t x1372 = 15U;
	static uint32_t t41 = 7915U;

	t41 = ((x1369/(x1370&x1371))<<x1372);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1441 = 6U;
	uint32_t x1442 = 102502855U;
	int64_t x1443 = 20693562336LL;
	volatile uint8_t x1444 = 46U;
	static volatile int64_t t42 = 253022LL;

	t42 = ((x1441/(x1442&x1443))<<x1444);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x1457 = 1U;
	volatile int64_t x1458 = INT64_MIN;
	int32_t x1459 = INT32_MIN;
	volatile uint8_t x1460 = 0U;
	volatile int64_t t43 = -3576477800909LL;

	t43 = ((x1457/(x1458&x1459))<<x1460);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x1477 = INT64_MAX;
	volatile uint64_t x1478 = UINT64_MAX;
	static volatile int8_t x1479 = INT8_MIN;
	static int32_t x1480 = 4;
	uint64_t t44 = 14080LLU;

	t44 = ((x1477/(x1478&x1479))<<x1480);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1489 = 40;
	int64_t x1490 = -1LL;
	int16_t x1491 = 519;
	static int8_t x1492 = 0;
	volatile int64_t t45 = -1409LL;

	t45 = ((x1489/(x1490&x1491))<<x1492);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x1565 = 3920U;
	uint32_t x1566 = 2780U;
	int64_t x1567 = 38000914296222037LL;
	static uint16_t x1568 = 1U;
	static volatile int64_t t46 = -16241051LL;

	t46 = ((x1565/(x1566&x1567))<<x1568);

	if (t46 != 92LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x1569 = -1;
	int32_t x1570 = INT32_MAX;
	static int64_t x1571 = INT64_MAX;
	static int16_t x1572 = 1;

	t47 = ((x1569/(x1570&x1571))<<x1572);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x1671 = INT16_MIN;
	uint8_t x1672 = 29U;
	uint64_t t48 = 57276605163044597LLU;

	t48 = ((x1669/(x1670&x1671))<<x1672);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x1693 = INT8_MAX;
	int16_t x1694 = INT16_MIN;
	int8_t x1695 = INT8_MIN;
	int16_t x1696 = 18;

	t49 = ((x1693/(x1694&x1695))<<x1696);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x1749 = 269860846731139LL;
	int8_t x1750 = INT8_MIN;
	volatile uint64_t x1751 = 29776941374496845LLU;
	uint8_t x1752 = 0U;

	t50 = ((x1749/(x1750&x1751))<<x1752);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1777 = INT32_MIN;
	volatile int64_t x1778 = -1LL;
	volatile int32_t x1779 = -58;
	int16_t x1780 = 25;
	volatile int64_t t51 = 49592LL;

	t51 = ((x1777/(x1778&x1779))<<x1780);

	if (t51 != 1242372306370560LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x1802 = -1;
	volatile int64_t x1803 = INT64_MIN;
	volatile int64_t t52 = -13210193LL;

	t52 = ((x1801/(x1802&x1803))<<x1804);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x1807 = 26912U;
	uint8_t x1808 = 21U;
	int32_t t53 = 319486;

	t53 = ((x1805/(x1806&x1807))<<x1808);

	if (t53 != 4194304) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x1853 = -1;
	int32_t x1854 = INT32_MIN;
	int8_t x1855 = INT8_MIN;
	static uint8_t x1856 = 1U;
	int32_t t54 = 1;

	t54 = ((x1853/(x1854&x1855))<<x1856);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x1859 = 16371U;
	uint32_t t55 = 1U;

	t55 = ((x1857/(x1858&x1859))<<x1860);

	if (t55 != 32767U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x1865 = UINT8_MAX;
	int16_t x1866 = 488;
	volatile int16_t x1867 = 27;
	int8_t x1868 = 1;
	volatile int32_t t56 = 21;

	t56 = ((x1865/(x1866&x1867))<<x1868);

	if (t56 != 62) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x1889 = -11200;
	int16_t x1890 = -66;
	int16_t x1891 = INT16_MAX;
	uint16_t x1892 = 14U;

	t57 = ((x1889/(x1890&x1891))<<x1892);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x1901 = 17;
	int32_t x1902 = INT32_MIN;
	volatile int32_t x1903 = -1;
	volatile uint64_t x1904 = 27LLU;
	static int32_t t58 = 699;

	t58 = ((x1901/(x1902&x1903))<<x1904);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x1914 = UINT64_MAX;
	static uint16_t x1915 = 56U;
	uint8_t x1916 = 60U;
	uint64_t t59 = 1371922521LLU;

	t59 = ((x1913/(x1914&x1915))<<x1916);

	if (t59 != 10376293541461622784LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x1985 = 372139;
	volatile int64_t x1986 = INT64_MIN;
	uint8_t x1988 = 47U;

	t60 = ((x1985/(x1986&x1987))<<x1988);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x2021 = INT32_MIN;
	static uint8_t x2022 = UINT8_MAX;
	uint32_t x2023 = UINT32_MAX;
	volatile uint32_t t61 = 69U;

	t61 = ((x2021/(x2022&x2023))<<x2024);

	if (t61 != 16777216U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x2029 = 3185U;
	uint16_t x2032 = 2U;
	static int64_t t62 = 1LL;

	t62 = ((x2029/(x2030&x2031))<<x2032);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2125 = -1;
	volatile int32_t x2126 = INT32_MIN;
	int64_t x2127 = -1LL;
	static uint8_t x2128 = 22U;
	static int64_t t63 = 529035544204016452LL;

	t63 = ((x2125/(x2126&x2127))<<x2128);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x2129 = INT16_MIN;
	static int64_t x2130 = INT64_MAX;
	static int16_t x2132 = 3;
	static volatile int64_t t64 = 339LL;

	t64 = ((x2129/(x2130&x2131))<<x2132);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x2142 = -8;
	volatile int16_t x2143 = INT16_MAX;
	uint64_t t65 = 28838613358LLU;

	t65 = ((x2141/(x2142&x2143))<<x2144);

	if (t65 != 2119593688604672LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x2194 = UINT64_MAX;
	static volatile int8_t x2195 = INT8_MAX;
	volatile uint64_t t66 = 0LLU;

	t66 = ((x2193/(x2194&x2195))<<x2196);

	if (t66 != 580999813345182728LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x2205 = -1LL;
	int16_t x2206 = -1;
	int8_t x2207 = INT8_MAX;
	static volatile uint16_t x2208 = 1U;
	int64_t t67 = -54923264698LL;

	t67 = ((x2205/(x2206&x2207))<<x2208);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x2294 = INT32_MAX;
	volatile uint8_t x2295 = 16U;
	volatile int32_t t68 = 14;

	t68 = ((x2293/(x2294&x2295))<<x2296);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x2357 = 483U;
	int16_t x2358 = -1;
	static uint32_t t69 = 277913U;

	t69 = ((x2357/(x2358&x2359))<<x2360);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x2389 = 653571105833469699LLU;
	int8_t x2390 = 1;
	uint32_t x2391 = 99U;
	uint8_t x2392 = 0U;
	volatile uint64_t t70 = 1060132891759LLU;

	t70 = ((x2389/(x2390&x2391))<<x2392);

	if (t70 != 653571105833469699LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x2409 = INT8_MIN;
	int64_t x2410 = INT64_MIN;
	int16_t x2411 = INT16_MIN;
	int64_t t71 = -1064610248992422016LL;

	t71 = ((x2409/(x2410&x2411))<<x2412);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2445 = -1;
	int64_t x2447 = -1LL;
	int64_t x2448 = 8LL;
	volatile int64_t t72 = -1003365509LL;

	t72 = ((x2445/(x2446&x2447))<<x2448);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x2453 = INT8_MIN;
	uint64_t x2454 = 214536776471LLU;
	uint8_t x2456 = 13U;
	volatile uint64_t t73 = 19854786LLU;

	t73 = ((x2453/(x2454&x2455))<<x2456);

	if (t73 != 5270498306774007808LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x2466 = INT32_MIN;
	static int64_t x2467 = INT64_MIN;
	uint32_t x2468 = 5U;
	int64_t t74 = -1897LL;

	t74 = ((x2465/(x2466&x2467))<<x2468);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x2521 = 20LL;
	int8_t x2522 = INT8_MIN;
	uint32_t x2523 = 368U;
	int16_t x2524 = 3;
	volatile int64_t t75 = -700714011284737792LL;

	t75 = ((x2521/(x2522&x2523))<<x2524);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x2573 = 3LL;
	int8_t x2574 = INT8_MAX;
	static int32_t x2575 = -1;
	volatile uint8_t x2576 = 0U;
	int64_t t76 = 972618149579019LL;

	t76 = ((x2573/(x2574&x2575))<<x2576);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2601 = INT8_MAX;
	volatile uint64_t x2602 = 480299116LLU;
	static volatile int8_t x2603 = INT8_MIN;
	uint16_t x2604 = 15U;
	volatile uint64_t t77 = 6596425572LLU;

	t77 = ((x2601/(x2602&x2603))<<x2604);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x2670 = UINT16_MAX;
	volatile uint64_t x2672 = 9LLU;
	volatile uint32_t t78 = 36670U;

	t78 = ((x2669/(x2670&x2671))<<x2672);

	if (t78 != 67110912U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2705 = INT8_MIN;
	uint32_t x2706 = 1397432U;
	static uint8_t x2708 = 1U;
	volatile uint32_t t79 = 13585121U;

	t79 = ((x2705/(x2706&x2707))<<x2708);

	if (t79 != 405644U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x2713 = INT16_MAX;
	uint16_t x2714 = UINT16_MAX;
	static volatile int8_t x2715 = INT8_MIN;
	static volatile int16_t x2716 = 0;
	int32_t t80 = 40007;

	t80 = ((x2713/(x2714&x2715))<<x2716);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x2857 = -1;
	int16_t x2858 = INT16_MIN;
	int8_t x2859 = -11;
	int8_t x2860 = 0;

	t81 = ((x2857/(x2858&x2859))<<x2860);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x2877 = 42U;
	volatile uint32_t x2878 = 5U;
	volatile int16_t x2879 = 1;
	uint8_t x2880 = 3U;
	uint32_t t82 = 22223325U;

	t82 = ((x2877/(x2878&x2879))<<x2880);

	if (t82 != 336U) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint64_t x2945 = 46740229365605LLU;
	volatile int32_t x2946 = INT32_MAX;
	int16_t x2947 = -1;
	uint8_t x2948 = 38U;

	t83 = ((x2945/(x2946&x2947))<<x2948);

	if (t83 != 5982717644636160LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x2961 = 0;
	volatile int8_t x2962 = INT8_MIN;
	int8_t x2964 = 13;
	int64_t t84 = 229262488LL;

	t84 = ((x2961/(x2962&x2963))<<x2964);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x3017 = UINT16_MAX;
	uint64_t x3018 = 23519261733128LLU;
	int16_t x3019 = INT16_MIN;
	volatile uint64_t t85 = 2LLU;

	t85 = ((x3017/(x3018&x3019))<<x3020);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x3101 = INT64_MAX;
	static int8_t x3102 = 49;
	volatile uint64_t t86 = 162501LLU;

	t86 = ((x3101/(x3102&x3103))<<x3104);

	if (t86 != 1117984489315730400LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x3161 = INT32_MIN;
	uint16_t x3162 = 3U;
	uint64_t x3163 = 2583623088919384167LLU;
	volatile uint64_t t87 = 11773108LLU;

	t87 = ((x3161/(x3162&x3163))<<x3164);

	if (t87 != 6148914690520689322LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x3166 = 46701153LLU;
	uint64_t x3167 = 2397610128941LLU;
	volatile uint64_t t88 = 175601LLU;

	t88 = ((x3165/(x3166&x3167))<<x3168);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x3213 = 82U;
	uint16_t x3215 = UINT16_MAX;
	int8_t x3216 = 1;
	static volatile int64_t t89 = -51452325LL;

	t89 = ((x3213/(x3214&x3215))<<x3216);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x3221 = 1U;
	static uint64_t x3222 = 23284825614518064LLU;
	int32_t x3223 = INT32_MIN;
	static uint8_t x3224 = 8U;

	t90 = ((x3221/(x3222&x3223))<<x3224);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x3227 = 644739U;
	static uint32_t x3228 = 15U;
	volatile int64_t t91 = 1384468232920095860LL;

	t91 = ((x3225/(x3226&x3227))<<x3228);

	if (t91 != 468765585614700544LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x3229 = 29108694546LL;
	volatile uint16_t x3230 = 295U;
	uint64_t x3231 = 2229875291081840LLU;
	int16_t x3232 = 19;
	volatile uint64_t t92 = 4265349314LLU;

	t92 = ((x3229/(x3230&x3231))<<x3232);

	if (t92 != 476916851146752LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x3281 = INT16_MIN;
	static int32_t x3282 = -1;
	static volatile int32_t x3283 = INT32_MIN;
	int8_t x3284 = 0;
	int32_t t93 = -55785322;

	t93 = ((x3281/(x3282&x3283))<<x3284);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x3317 = INT32_MAX;
	uint32_t x3318 = UINT32_MAX;
	static int8_t x3319 = INT8_MIN;
	static uint8_t x3320 = 2U;

	t94 = ((x3317/(x3318&x3319))<<x3320);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x3337 = -1LL;
	volatile int32_t x3338 = INT32_MIN;
	volatile int16_t x3339 = INT16_MIN;
	uint16_t x3340 = 61U;
	static int64_t t95 = -406379195951LL;

	t95 = ((x3337/(x3338&x3339))<<x3340);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x3458 = -915834384302921316LL;
	int8_t x3459 = INT8_MAX;
	int8_t x3460 = 1;
	volatile int64_t t96 = 1774476070LL;

	t96 = ((x3457/(x3458&x3459))<<x3460);

	if (t96 != 62422LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x3521 = 2341U;
	int64_t x3522 = -1LL;
	volatile int64_t x3523 = 14372394LL;
	uint8_t x3524 = 62U;
	int64_t t97 = 242840129913996LL;

	t97 = ((x3521/(x3522&x3523))<<x3524);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x3573 = UINT64_MAX;
	static int64_t x3574 = INT64_MAX;
	uint8_t x3575 = UINT8_MAX;
	int8_t x3576 = 4;
	static uint64_t t98 = 18234LLU;

	t98 = ((x3573/(x3574&x3575))<<x3576);

	if (t98 != 1157442765409226768LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x3581 = INT64_MIN;
	int64_t x3582 = -1LL;
	int32_t x3583 = -11764;
	static uint64_t x3584 = 0LLU;
	volatile int64_t t99 = 737753761944462662LL;

	t99 = ((x3581/(x3582&x3583))<<x3584);

	if (t99 != 784033665152565LL) { NG(); } else { ; }
	
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

