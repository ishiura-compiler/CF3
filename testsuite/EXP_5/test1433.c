#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x52 = 14;
static int32_t t3 = 793;
static int32_t x159 = INT32_MIN;
int8_t x160 = 1;
int8_t x178 = -1;
static volatile uint8_t x180 = 3U;
int32_t t6 = 0;
uint32_t x214 = UINT32_MAX;
static int64_t x237 = -1LL;
int16_t x253 = -1;
int32_t x255 = -2402152;
uint32_t x277 = 247786U;
static uint16_t x320 = 3U;
volatile int32_t t11 = -4;
int32_t x437 = INT32_MIN;
uint32_t x438 = 278871U;
volatile int32_t x439 = -1;
int32_t t12 = -7134;
int64_t x462 = INT64_MIN;
uint32_t x463 = 238958087U;
static uint32_t x478 = 12938U;
int16_t x489 = INT16_MIN;
static int64_t x490 = 18737LL;
int32_t x530 = 18797;
volatile uint64_t x531 = 452LLU;
uint16_t x563 = UINT16_MAX;
volatile uint64_t x600 = 7LLU;
volatile int32_t x669 = INT32_MIN;
static volatile int64_t x734 = INT64_MIN;
static uint16_t x736 = 10U;
volatile int64_t t21 = 1LL;
int64_t x751 = -1LL;
volatile int8_t x909 = INT8_MIN;
static uint32_t x911 = UINT32_MAX;
uint64_t t26 = 32LLU;
int64_t x994 = INT64_MIN;
int32_t t28 = 1264425;
static volatile int32_t t29 = 42;
int32_t x1041 = INT32_MAX;
volatile int32_t x1044 = 25;
volatile int32_t t31 = -5408;
int64_t x1101 = 665048488173423799LL;
int8_t x1125 = 0;
static volatile int64_t x1126 = -1LL;
int8_t x1128 = 3;
int8_t x1152 = 6;
int32_t t36 = -441370945;
static int16_t x1154 = -111;
int16_t x1155 = INT16_MAX;
int8_t x1177 = INT8_MIN;
int32_t t43 = -1;
volatile int32_t t45 = -10398;
volatile int32_t t46 = 129910999;
volatile int32_t t47 = -80;
uint16_t x1663 = 4U;
int64_t t51 = 56193491374536151LL;
uint8_t x1741 = 71U;
int16_t x1789 = -31;
static uint32_t x1793 = 4242020U;
int8_t x1796 = 0;
volatile int32_t t57 = -857;
int8_t x1942 = INT8_MIN;
int32_t t58 = INT32_MIN;
volatile uint16_t x2008 = 18U;
int32_t x2094 = 1542281;
uint8_t x2096 = 19U;
int64_t x2137 = INT64_MIN;
int64_t t63 = -689LL;
uint32_t x2279 = UINT32_MAX;
uint32_t x2323 = 103386U;
int64_t x2466 = INT64_MAX;
int16_t x2467 = -1;
volatile int32_t t70 = -15;
uint8_t x2498 = 11U;
int8_t x2500 = 1;
uint32_t x2504 = 15U;
int16_t x2565 = 495;
int16_t x2567 = -836;
int32_t t74 = -790395481;
uint32_t x2646 = 30639U;
static int32_t t76 = 2200108;
volatile int64_t t77 = INT64_MAX;
uint64_t x2786 = 444LLU;
volatile int64_t x2787 = -1LL;
static uint64_t x2858 = 55680526LLU;
int16_t x2860 = 26;
uint16_t x2861 = 10U;
volatile int32_t t85 = 137324;
volatile uint8_t x2945 = 0U;
int32_t x2946 = INT32_MIN;
volatile int64_t x2947 = INT64_MIN;
int8_t x2948 = 0;
int32_t x2951 = INT32_MIN;
volatile int32_t t88 = 200790923;
static uint64_t x3015 = UINT64_MAX;
static int32_t x3016 = 13;
int64_t x3017 = -27056971779966LL;
int64_t x3019 = INT64_MAX;
int64_t t91 = 131433094878677118LL;
int16_t x3124 = 0;
volatile uint32_t t94 = 2325400U;
static uint64_t t95 = 238LLU;
int32_t x3189 = INT32_MAX;


void f0(void) {
	static uint16_t x13 = 12U;
	int8_t x14 = INT8_MIN;
	uint16_t x15 = 3U;
	uint8_t x16 = 6U;
	int32_t t0 = -11;

	t0 = (x13*((x14<x15)>>x16));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x29 = INT8_MIN;
	int32_t x30 = INT32_MIN;
	uint8_t x31 = UINT8_MAX;
	static uint16_t x32 = 1U;
	int32_t t1 = 83298;

	t1 = (x29*((x30<x31)>>x32));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x49 = 15U;
	int64_t x50 = INT64_MIN;
	uint64_t x51 = 1023119901319LLU;
	static int32_t t2 = 26;

	t2 = (x49*((x50<x51)>>x52));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x101 = -1;
	uint16_t x102 = 369U;
	static int16_t x103 = INT16_MIN;
	static int8_t x104 = 0;

	t3 = (x101*((x102<x103)>>x104));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x129 = -1LL;
	uint8_t x130 = 5U;
	static int32_t x131 = INT32_MIN;
	uint8_t x132 = 3U;
	static int64_t t4 = -22515496927211866LL;

	t4 = (x129*((x130<x131)>>x132));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x157 = INT8_MIN;
	int64_t x158 = INT64_MIN;
	static volatile int32_t t5 = 123340050;

	t5 = (x157*((x158<x159)>>x160));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x177 = INT8_MAX;
	int64_t x179 = -1LL;

	t6 = (x177*((x178<x179)>>x180));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x213 = -1;
	int64_t x215 = -231457274752661588LL;
	static int8_t x216 = 12;
	static volatile int32_t t7 = -24;

	t7 = (x213*((x214<x215)>>x216));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x238 = 759;
	uint64_t x239 = 242941958095398637LLU;
	volatile uint8_t x240 = 0U;
	volatile int64_t t8 = -4381708466LL;

	t8 = (x237*((x238<x239)>>x240));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x254 = -31LL;
	static volatile uint8_t x256 = 3U;
	int32_t t9 = 57;

	t9 = (x253*((x254<x255)>>x256));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x278 = -1;
	volatile int8_t x279 = INT8_MAX;
	uint8_t x280 = 0U;
	uint32_t t10 = 22552U;

	t10 = (x277*((x278<x279)>>x280));

	if (t10 != 247786U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x317 = -134179521;
	int64_t x318 = INT64_MIN;
	static uint64_t x319 = 53LLU;

	t11 = (x317*((x318<x319)>>x320));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x440 = 1;

	t12 = (x437*((x438<x439)>>x440));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x449 = 4100293669190775403LL;
	uint64_t x450 = 2626LLU;
	int16_t x451 = INT16_MIN;
	uint8_t x452 = 1U;
	int64_t t13 = 8142LL;

	t13 = (x449*((x450<x451)>>x452));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x461 = 1148U;
	uint32_t x464 = 4U;
	static volatile int32_t t14 = 15;

	t14 = (x461*((x462<x463)>>x464));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x477 = 62484999U;
	int64_t x479 = -1LL;
	uint32_t x480 = 10U;
	uint32_t t15 = 599543280U;

	t15 = (x477*((x478<x479)>>x480));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x491 = INT16_MIN;
	static int16_t x492 = 1;
	static volatile int32_t t16 = 52;

	t16 = (x489*((x490<x491)>>x492));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x529 = -1;
	static uint8_t x532 = 6U;
	volatile int32_t t17 = -133638964;

	t17 = (x529*((x530<x531)>>x532));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x561 = -1;
	int16_t x562 = INT16_MAX;
	uint16_t x564 = 0U;
	int32_t t18 = 236;

	t18 = (x561*((x562<x563)>>x564));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x597 = 1345806033LL;
	int16_t x598 = INT16_MIN;
	int16_t x599 = INT16_MAX;
	static volatile int64_t t19 = 3LL;

	t19 = (x597*((x598<x599)>>x600));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x670 = INT32_MAX;
	int64_t x671 = -1LL;
	static int8_t x672 = 0;
	volatile int32_t t20 = 16257107;

	t20 = (x669*((x670<x671)>>x672));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x733 = INT64_MAX;
	uint64_t x735 = 174135LLU;

	t21 = (x733*((x734<x735)>>x736));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x749 = -1LL;
	static int16_t x750 = -4;
	static uint8_t x752 = 0U;
	int64_t t22 = 7387331LL;

	t22 = (x749*((x750<x751)>>x752));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x761 = 31U;
	static int32_t x762 = 28;
	int8_t x763 = INT8_MIN;
	uint16_t x764 = 3U;
	volatile int32_t t23 = 29;

	t23 = (x761*((x762<x763)>>x764));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x897 = 8415161643LL;
	int64_t x898 = INT64_MIN;
	static uint32_t x899 = 6340U;
	int16_t x900 = 10;
	volatile int64_t t24 = 1911LL;

	t24 = (x897*((x898<x899)>>x900));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x910 = 3;
	uint16_t x912 = 8U;
	static int32_t t25 = -880;

	t25 = (x909*((x910<x911)>>x912));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x945 = UINT64_MAX;
	int16_t x946 = INT16_MIN;
	int8_t x947 = 54;
	volatile int8_t x948 = 1;

	t26 = (x945*((x946<x947)>>x948));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x969 = -1;
	uint16_t x970 = 121U;
	int32_t x971 = INT32_MAX;
	uint8_t x972 = 1U;
	static volatile int32_t t27 = -2325;

	t27 = (x969*((x970<x971)>>x972));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x993 = 30U;
	uint8_t x995 = 1U;
	static uint8_t x996 = 13U;

	t28 = (x993*((x994<x995)>>x996));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1009 = INT16_MIN;
	int8_t x1010 = 0;
	uint64_t x1011 = UINT64_MAX;
	int8_t x1012 = 14;

	t29 = (x1009*((x1010<x1011)>>x1012));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1042 = 2U;
	static int16_t x1043 = INT16_MIN;
	int32_t t30 = -1;

	t30 = (x1041*((x1042<x1043)>>x1044));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x1053 = 1664;
	uint32_t x1054 = UINT32_MAX;
	int8_t x1055 = 45;
	uint8_t x1056 = 15U;

	t31 = (x1053*((x1054<x1055)>>x1056));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x1097 = INT64_MIN;
	static int16_t x1098 = 109;
	uint16_t x1099 = 1U;
	int16_t x1100 = 1;
	int64_t t32 = -729LL;

	t32 = (x1097*((x1098<x1099)>>x1100));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1102 = INT16_MAX;
	static uint32_t x1103 = 2672434U;
	int16_t x1104 = 0;
	static volatile int64_t t33 = 1LL;

	t33 = (x1101*((x1102<x1103)>>x1104));

	if (t33 != 665048488173423799LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1127 = -3;
	int32_t t34 = -123;

	t34 = (x1125*((x1126<x1127)>>x1128));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1145 = 3542U;
	uint8_t x1146 = 86U;
	int64_t x1147 = INT64_MIN;
	volatile uint8_t x1148 = 0U;
	int32_t t35 = -1007296;

	t35 = (x1145*((x1146<x1147)>>x1148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1149 = 8;
	int32_t x1150 = INT32_MIN;
	int64_t x1151 = 29713LL;

	t36 = (x1149*((x1150<x1151)>>x1152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1153 = 1;
	static uint32_t x1156 = 1U;
	int32_t t37 = 369278863;

	t37 = (x1153*((x1154<x1155)>>x1156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x1178 = INT16_MIN;
	int32_t x1179 = -672166670;
	uint16_t x1180 = 20U;
	int32_t t38 = 2;

	t38 = (x1177*((x1178<x1179)>>x1180));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x1253 = -1;
	int16_t x1254 = INT16_MIN;
	volatile int16_t x1255 = INT16_MAX;
	static uint32_t x1256 = 10U;
	int32_t t39 = 498;

	t39 = (x1253*((x1254<x1255)>>x1256));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1301 = INT8_MIN;
	int32_t x1302 = INT32_MIN;
	static volatile int32_t x1303 = INT32_MIN;
	uint16_t x1304 = 20U;
	static int32_t t40 = 18;

	t40 = (x1301*((x1302<x1303)>>x1304));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1325 = INT8_MIN;
	int64_t x1326 = INT64_MAX;
	uint16_t x1327 = 6U;
	int8_t x1328 = 15;
	static int32_t t41 = 476;

	t41 = (x1325*((x1326<x1327)>>x1328));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x1353 = INT16_MAX;
	static int32_t x1354 = 13024;
	volatile uint8_t x1355 = 100U;
	volatile int32_t x1356 = 0;
	volatile int32_t t42 = 111;

	t42 = (x1353*((x1354<x1355)>>x1356));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x1365 = -1;
	volatile uint64_t x1366 = UINT64_MAX;
	int64_t x1367 = INT64_MAX;
	int8_t x1368 = 0;

	t43 = (x1365*((x1366<x1367)>>x1368));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x1373 = INT32_MIN;
	static int32_t x1374 = INT32_MIN;
	static uint64_t x1375 = UINT64_MAX;
	int8_t x1376 = 1;
	volatile int32_t t44 = -8026926;

	t44 = (x1373*((x1374<x1375)>>x1376));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x1453 = 10U;
	uint16_t x1454 = UINT16_MAX;
	static int64_t x1455 = INT64_MAX;
	int8_t x1456 = 2;

	t45 = (x1453*((x1454<x1455)>>x1456));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1473 = INT8_MIN;
	static int8_t x1474 = -1;
	int32_t x1475 = -1;
	int8_t x1476 = 1;

	t46 = (x1473*((x1474<x1475)>>x1476));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1485 = -1;
	int64_t x1486 = -1LL;
	int8_t x1487 = -1;
	int16_t x1488 = 16;

	t47 = (x1485*((x1486<x1487)>>x1488));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x1577 = 805328480LLU;
	int16_t x1578 = INT16_MIN;
	static volatile int16_t x1579 = -2026;
	static uint8_t x1580 = 28U;
	volatile uint64_t t48 = 2201627LLU;

	t48 = (x1577*((x1578<x1579)>>x1580));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x1625 = 223;
	volatile int64_t x1626 = INT64_MAX;
	uint8_t x1627 = 63U;
	volatile int8_t x1628 = 0;
	volatile int32_t t49 = -743306085;

	t49 = (x1625*((x1626<x1627)>>x1628));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x1661 = -1;
	uint8_t x1662 = 49U;
	int8_t x1664 = 0;
	volatile int32_t t50 = -146073811;

	t50 = (x1661*((x1662<x1663)>>x1664));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x1701 = 8069595LL;
	volatile int16_t x1702 = INT16_MIN;
	volatile uint32_t x1703 = 3775999U;
	volatile uint8_t x1704 = 9U;

	t51 = (x1701*((x1702<x1703)>>x1704));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x1742 = 1146;
	uint8_t x1743 = 1U;
	uint8_t x1744 = 7U;
	volatile int32_t t52 = 385670;

	t52 = (x1741*((x1742<x1743)>>x1744));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x1781 = INT8_MIN;
	uint16_t x1782 = UINT16_MAX;
	int8_t x1783 = -1;
	static volatile uint64_t x1784 = 3LLU;
	volatile int32_t t53 = 39613;

	t53 = (x1781*((x1782<x1783)>>x1784));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x1790 = 29U;
	volatile uint32_t x1791 = 3756301U;
	int8_t x1792 = 1;
	int32_t t54 = 760422;

	t54 = (x1789*((x1790<x1791)>>x1792));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x1794 = 1420U;
	int8_t x1795 = INT8_MAX;
	static uint32_t t55 = 10U;

	t55 = (x1793*((x1794<x1795)>>x1796));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x1857 = UINT32_MAX;
	uint32_t x1858 = UINT32_MAX;
	volatile uint32_t x1859 = 430066981U;
	volatile uint8_t x1860 = 8U;
	volatile uint32_t t56 = 1977862333U;

	t56 = (x1857*((x1858<x1859)>>x1860));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x1933 = 5844U;
	int32_t x1934 = -1;
	int32_t x1935 = INT32_MAX;
	uint8_t x1936 = 28U;

	t57 = (x1933*((x1934<x1935)>>x1936));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x1941 = INT32_MIN;
	static int8_t x1943 = 2;
	volatile uint8_t x1944 = 0U;

	t58 = (x1941*((x1942<x1943)>>x1944));

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x2005 = INT8_MIN;
	uint64_t x2006 = UINT64_MAX;
	int8_t x2007 = INT8_MIN;
	volatile int32_t t59 = -31;

	t59 = (x2005*((x2006<x2007)>>x2008));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x2093 = 48LLU;
	uint64_t x2095 = 1341973803430LLU;
	static uint64_t t60 = 0LLU;

	t60 = (x2093*((x2094<x2095)>>x2096));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x2105 = UINT64_MAX;
	uint64_t x2106 = 32001851937LLU;
	int64_t x2107 = -1LL;
	static int16_t x2108 = 1;
	static uint64_t t61 = 26500948832075432LLU;

	t61 = (x2105*((x2106<x2107)>>x2108));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x2113 = INT16_MIN;
	uint64_t x2114 = 199585638LLU;
	int8_t x2115 = INT8_MIN;
	uint16_t x2116 = 1U;
	static int32_t t62 = -914;

	t62 = (x2113*((x2114<x2115)>>x2116));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x2138 = UINT32_MAX;
	uint16_t x2139 = 0U;
	volatile uint8_t x2140 = 27U;

	t63 = (x2137*((x2138<x2139)>>x2140));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x2193 = INT16_MIN;
	uint8_t x2194 = 0U;
	uint16_t x2195 = 0U;
	uint8_t x2196 = 1U;
	static int32_t t64 = 156573791;

	t64 = (x2193*((x2194<x2195)>>x2196));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x2277 = INT32_MIN;
	volatile uint16_t x2278 = 2915U;
	static int8_t x2280 = 1;
	int32_t t65 = 5142657;

	t65 = (x2277*((x2278<x2279)>>x2280));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x2321 = 371866243860LL;
	int64_t x2322 = -2LL;
	uint8_t x2324 = 27U;
	static volatile int64_t t66 = -54631308097838LL;

	t66 = (x2321*((x2322<x2323)>>x2324));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x2397 = UINT8_MAX;
	volatile uint8_t x2398 = UINT8_MAX;
	static int64_t x2399 = 16LL;
	static int16_t x2400 = 0;
	volatile int32_t t67 = -21;

	t67 = (x2397*((x2398<x2399)>>x2400));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x2405 = -1LL;
	volatile int64_t x2406 = INT64_MIN;
	int16_t x2407 = INT16_MIN;
	static int8_t x2408 = 0;
	volatile int64_t t68 = -1467944LL;

	t68 = (x2405*((x2406<x2407)>>x2408));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x2461 = UINT8_MAX;
	volatile int32_t x2462 = INT32_MIN;
	uint8_t x2463 = 91U;
	static uint16_t x2464 = 3U;
	static volatile int32_t t69 = 3511075;

	t69 = (x2461*((x2462<x2463)>>x2464));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x2465 = INT16_MIN;
	uint8_t x2468 = 25U;

	t70 = (x2465*((x2466<x2467)>>x2468));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x2489 = INT32_MAX;
	int8_t x2490 = INT8_MAX;
	static int16_t x2491 = 35;
	static uint16_t x2492 = 1U;
	volatile int32_t t71 = 616953205;

	t71 = (x2489*((x2490<x2491)>>x2492));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x2497 = -1;
	int64_t x2499 = INT64_MAX;
	volatile int32_t t72 = -733785;

	t72 = (x2497*((x2498<x2499)>>x2500));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x2501 = -2874965474830904312LL;
	int32_t x2502 = 23978647;
	uint32_t x2503 = UINT32_MAX;
	int64_t t73 = -1944426LL;

	t73 = (x2501*((x2502<x2503)>>x2504));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x2566 = INT16_MIN;
	uint8_t x2568 = 25U;

	t74 = (x2565*((x2566<x2567)>>x2568));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x2577 = -1;
	int8_t x2578 = INT8_MIN;
	static int64_t x2579 = INT64_MIN;
	uint8_t x2580 = 0U;
	int32_t t75 = 3;

	t75 = (x2577*((x2578<x2579)>>x2580));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2645 = 325;
	volatile int8_t x2647 = -1;
	uint8_t x2648 = 0U;

	t76 = (x2645*((x2646<x2647)>>x2648));

	if (t76 != 325) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x2741 = INT64_MAX;
	volatile int64_t x2742 = -1LL;
	volatile int16_t x2743 = INT16_MAX;
	int8_t x2744 = 0;

	t77 = (x2741*((x2742<x2743)>>x2744));

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x2753 = INT8_MAX;
	int64_t x2754 = 7487268993105482LL;
	static volatile uint64_t x2755 = 6607654LLU;
	uint8_t x2756 = 4U;
	int32_t t78 = -8;

	t78 = (x2753*((x2754<x2755)>>x2756));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2781 = INT8_MAX;
	uint32_t x2782 = 571001163U;
	int16_t x2783 = -1;
	volatile int16_t x2784 = 0;
	volatile int32_t t79 = 31992893;

	t79 = (x2781*((x2782<x2783)>>x2784));

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x2785 = 50850160LLU;
	static int8_t x2788 = 14;
	static uint64_t t80 = 12980133134553LLU;

	t80 = (x2785*((x2786<x2787)>>x2788));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x2829 = 1;
	int64_t x2830 = INT64_MIN;
	int16_t x2831 = INT16_MIN;
	uint8_t x2832 = 25U;
	int32_t t81 = -42929548;

	t81 = (x2829*((x2830<x2831)>>x2832));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x2857 = INT16_MIN;
	int8_t x2859 = INT8_MIN;
	static volatile int32_t t82 = -22023;

	t82 = (x2857*((x2858<x2859)>>x2860));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x2862 = INT32_MIN;
	int16_t x2863 = 45;
	uint8_t x2864 = 27U;
	volatile int32_t t83 = 426;

	t83 = (x2861*((x2862<x2863)>>x2864));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x2901 = -1LL;
	int64_t x2902 = INT64_MAX;
	static int16_t x2903 = -1;
	int16_t x2904 = 0;
	int64_t t84 = -53LL;

	t84 = (x2901*((x2902<x2903)>>x2904));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x2937 = 116;
	int32_t x2938 = -123190594;
	int32_t x2939 = INT32_MIN;
	static uint16_t x2940 = 5U;

	t85 = (x2937*((x2938<x2939)>>x2940));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t t86 = -924245216;

	t86 = (x2945*((x2946<x2947)>>x2948));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x2949 = 5;
	uint64_t x2950 = 456053697206LLU;
	static volatile uint16_t x2952 = 10U;
	static int32_t t87 = -1;

	t87 = (x2949*((x2950<x2951)>>x2952));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x3001 = -3015699;
	int32_t x3002 = INT32_MIN;
	volatile uint8_t x3003 = 12U;
	int8_t x3004 = 3;

	t88 = (x3001*((x3002<x3003)>>x3004));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x3005 = 1U;
	int16_t x3006 = 13;
	uint64_t x3007 = 1LLU;
	int8_t x3008 = 10;
	int32_t t89 = 173186237;

	t89 = (x3005*((x3006<x3007)>>x3008));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x3013 = UINT8_MAX;
	int64_t x3014 = -2LL;
	int32_t t90 = -20;

	t90 = (x3013*((x3014<x3015)>>x3016));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x3018 = -1LL;
	static uint16_t x3020 = 0U;

	t91 = (x3017*((x3018<x3019)>>x3020));

	if (t91 != -27056971779966LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x3057 = 53;
	int16_t x3058 = 336;
	volatile uint32_t x3059 = UINT32_MAX;
	volatile uint8_t x3060 = 3U;
	static volatile int32_t t92 = 0;

	t92 = (x3057*((x3058<x3059)>>x3060));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x3093 = -18;
	uint32_t x3094 = UINT32_MAX;
	static volatile int64_t x3095 = -1LL;
	volatile int8_t x3096 = 8;
	volatile int32_t t93 = 405397;

	t93 = (x3093*((x3094<x3095)>>x3096));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x3121 = 1901U;
	static volatile int16_t x3122 = 0;
	int64_t x3123 = -1LL;

	t94 = (x3121*((x3122<x3123)>>x3124));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x3145 = 6197776797LLU;
	static int16_t x3146 = 1103;
	volatile uint32_t x3147 = UINT32_MAX;
	int32_t x3148 = 21;

	t95 = (x3145*((x3146<x3147)>>x3148));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x3177 = 79U;
	int8_t x3178 = INT8_MIN;
	static int32_t x3179 = INT32_MIN;
	int8_t x3180 = 0;
	static volatile int32_t t96 = -107145810;

	t96 = (x3177*((x3178<x3179)>>x3180));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x3190 = 7;
	int8_t x3191 = INT8_MIN;
	uint16_t x3192 = 23U;
	volatile int32_t t97 = 323836757;

	t97 = (x3189*((x3190<x3191)>>x3192));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x3217 = -1;
	volatile int32_t x3218 = INT32_MIN;
	volatile int64_t x3219 = -6895LL;
	static int8_t x3220 = 1;
	static int32_t t98 = -1;

	t98 = (x3217*((x3218<x3219)>>x3220));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x3253 = -9164LL;
	static int16_t x3254 = -1;
	int8_t x3255 = INT8_MAX;
	volatile int8_t x3256 = 4;
	int64_t t99 = -3353411747LL;

	t99 = (x3253*((x3254<x3255)>>x3256));

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

