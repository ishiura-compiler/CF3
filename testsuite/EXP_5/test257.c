#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x114 = INT8_MAX;
uint64_t x254 = UINT64_MAX;
int32_t x303 = -42;
int32_t x329 = 66743281;
uint64_t x373 = 1730255836LLU;
volatile int64_t x667 = -691195216297786701LL;
uint64_t x733 = UINT64_MAX;
uint8_t x734 = UINT8_MAX;
uint16_t x736 = 40U;
int32_t x737 = INT32_MAX;
int8_t x738 = -1;
int8_t x826 = INT8_MIN;
int32_t x829 = -1;
uint8_t x870 = UINT8_MAX;
int32_t t17 = -5778;
int16_t x946 = INT16_MIN;
static uint8_t x948 = 15U;
volatile int64_t x1031 = INT64_MIN;
volatile int8_t x1042 = INT8_MAX;
uint64_t x1070 = UINT64_MAX;
volatile int8_t x1071 = INT8_MAX;
uint32_t x1076 = 29U;
int8_t x1301 = INT8_MIN;
int32_t t30 = 12;
volatile int32_t t32 = -129680899;
int32_t x1436 = 4;
int8_t x1444 = 6;
uint8_t x1472 = 3U;
static int16_t x1497 = 5325;
volatile int16_t x1499 = 338;
uint8_t x1627 = 13U;
static int32_t t41 = 186;
int8_t x1808 = 0;
uint16_t x1892 = 0U;
static uint16_t x1893 = 59U;
uint32_t x1894 = UINT32_MAX;
int16_t x1895 = INT16_MAX;
volatile uint8_t x1896 = 0U;
static volatile int32_t x1957 = INT32_MIN;
uint32_t x1960 = 1U;
int8_t x2216 = 1;
int8_t x2261 = INT8_MAX;
volatile int8_t x2264 = 1;
static volatile uint8_t x2279 = UINT8_MAX;
int8_t x2327 = INT8_MAX;
int8_t x2328 = 3;
int16_t x2451 = -1;
int32_t t59 = -64788711;
int64_t x2579 = INT64_MIN;
static int16_t x2655 = INT16_MAX;
int16_t x2677 = INT16_MIN;
int16_t x2678 = 281;
int8_t x2691 = 9;
static volatile int32_t t64 = 438608;
volatile uint8_t x2932 = 11U;
int8_t x3079 = INT8_MIN;
uint8_t x3129 = 0U;
int64_t x3220 = 5LL;
int32_t t72 = 0;
static int64_t x3443 = -1LL;
volatile int32_t t79 = -16;
static uint64_t x3590 = 4198478052191756547LLU;
volatile int16_t x3635 = -1;
int32_t x3706 = INT32_MAX;
static uint8_t x3760 = 6U;
static volatile int64_t x3793 = 1LL;
static int32_t x3794 = -1059156589;
int64_t x3829 = INT64_MIN;
volatile uint64_t x3901 = 46330460076962655LLU;
static uint32_t x4069 = UINT32_MAX;
int32_t x4070 = 0;
uint8_t x4072 = 11U;
int32_t t92 = -1826798;
volatile int8_t x4084 = 20;
int32_t t93 = -18309;
uint16_t x4184 = 32U;
int32_t t95 = 474743;
uint64_t x4305 = UINT64_MAX;
volatile int64_t x4306 = -35863768480530LL;
static uint8_t x4313 = 47U;


void f0(void) {
	static int32_t x81 = INT32_MIN;
	int32_t x82 = -1;
	int64_t x83 = INT64_MIN;
	uint8_t x84 = 42U;
	int32_t t0 = 63;

	t0 = (x81<=((x82-x83)>>x84));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x113 = 14808U;
	uint8_t x115 = 6U;
	static uint8_t x116 = 6U;
	volatile int32_t t1 = 33325343;

	t1 = (x113<=((x114-x115)>>x116));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x197 = INT16_MAX;
	int16_t x198 = -1;
	volatile int8_t x199 = -1;
	static int8_t x200 = 8;
	static volatile int32_t t2 = -130065395;

	t2 = (x197<=((x198-x199)>>x200));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x245 = INT32_MIN;
	int32_t x246 = INT32_MIN;
	static volatile uint64_t x247 = UINT64_MAX;
	uint8_t x248 = 2U;
	static int32_t t3 = 4438;

	t3 = (x245<=((x246-x247)>>x248));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x253 = 4U;
	int8_t x255 = -1;
	int16_t x256 = 4;
	int32_t t4 = -8478935;

	t4 = (x253<=((x254-x255)>>x256));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x301 = 21640231U;
	int8_t x302 = -2;
	uint16_t x304 = 5U;
	volatile int32_t t5 = -475482874;

	t5 = (x301<=((x302-x303)>>x304));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x330 = UINT64_MAX;
	int64_t x331 = INT64_MIN;
	int16_t x332 = 5;
	volatile int32_t t6 = 74682;

	t6 = (x329<=((x330-x331)>>x332));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x374 = 49405664U;
	volatile uint8_t x375 = UINT8_MAX;
	volatile uint16_t x376 = 1U;
	static int32_t t7 = -253256;

	t7 = (x373<=((x374-x375)>>x376));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x509 = 0U;
	uint64_t x510 = 404601682609390LLU;
	int16_t x511 = -409;
	int16_t x512 = 1;
	int32_t t8 = -5973;

	t8 = (x509<=((x510-x511)>>x512));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x605 = -4;
	int16_t x606 = -1;
	static int16_t x607 = -1;
	int8_t x608 = 0;
	int32_t t9 = -1;

	t9 = (x605<=((x606-x607)>>x608));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x645 = 16U;
	static volatile uint32_t x646 = UINT32_MAX;
	static int16_t x647 = -12;
	uint8_t x648 = 4U;
	int32_t t10 = 85;

	t10 = (x645<=((x646-x647)>>x648));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x665 = -1;
	int32_t x666 = INT32_MIN;
	int16_t x668 = 59;
	static volatile int32_t t11 = 136;

	t11 = (x665<=((x666-x667)>>x668));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x735 = -1LL;
	static volatile int32_t t12 = -4;

	t12 = (x733<=((x734-x735)>>x736));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x739 = INT64_MIN;
	uint8_t x740 = 45U;
	int32_t t13 = 1;

	t13 = (x737<=((x738-x739)>>x740));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x825 = 1909550132829618195LLU;
	volatile uint32_t x827 = UINT32_MAX;
	uint8_t x828 = 27U;
	volatile int32_t t14 = -718264306;

	t14 = (x825<=((x826-x827)>>x828));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x830 = 1987782U;
	int32_t x831 = -1;
	static uint8_t x832 = 7U;
	static volatile int32_t t15 = -455;

	t15 = (x829<=((x830-x831)>>x832));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x869 = INT16_MIN;
	volatile int8_t x871 = INT8_MIN;
	volatile uint32_t x872 = 2U;
	int32_t t16 = 9;

	t16 = (x869<=((x870-x871)>>x872));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x929 = -1LL;
	uint64_t x930 = UINT64_MAX;
	uint32_t x931 = 31U;
	uint8_t x932 = 0U;

	t17 = (x929<=((x930-x931)>>x932));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x945 = -42;
	int32_t x947 = INT32_MIN;
	int32_t t18 = 189403;

	t18 = (x945<=((x946-x947)>>x948));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x977 = 31296U;
	static int32_t x978 = -14;
	static int64_t x979 = -1492673473LL;
	uint16_t x980 = 1U;
	volatile int32_t t19 = -1346248;

	t19 = (x977<=((x978-x979)>>x980));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1029 = -1LL;
	static int8_t x1030 = -1;
	uint8_t x1032 = 31U;
	int32_t t20 = -4855;

	t20 = (x1029<=((x1030-x1031)>>x1032));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1041 = 6U;
	uint16_t x1043 = 2U;
	uint32_t x1044 = 7U;
	int32_t t21 = -18;

	t21 = (x1041<=((x1042-x1043)>>x1044));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x1053 = -2;
	uint16_t x1054 = UINT16_MAX;
	int16_t x1055 = -308;
	static uint8_t x1056 = 3U;
	int32_t t22 = 861863;

	t22 = (x1053<=((x1054-x1055)>>x1056));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1069 = INT16_MAX;
	uint8_t x1072 = 6U;
	static volatile int32_t t23 = -2755262;

	t23 = (x1069<=((x1070-x1071)>>x1072));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1073 = -28;
	uint64_t x1074 = UINT64_MAX;
	static int32_t x1075 = -1;
	volatile int32_t t24 = 1133203;

	t24 = (x1073<=((x1074-x1075)>>x1076));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x1121 = 13U;
	int64_t x1122 = 800763888LL;
	int16_t x1123 = -1;
	uint16_t x1124 = 0U;
	int32_t t25 = -126;

	t25 = (x1121<=((x1122-x1123)>>x1124));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1125 = -1;
	uint8_t x1126 = 1U;
	uint8_t x1127 = 1U;
	uint16_t x1128 = 0U;
	int32_t t26 = -30;

	t26 = (x1125<=((x1126-x1127)>>x1128));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x1285 = INT8_MIN;
	uint64_t x1286 = 149432081113943LLU;
	volatile uint16_t x1287 = 115U;
	uint8_t x1288 = 4U;
	static int32_t t27 = 4439;

	t27 = (x1285<=((x1286-x1287)>>x1288));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x1302 = UINT64_MAX;
	volatile int64_t x1303 = -1LL;
	uint16_t x1304 = 2U;
	volatile int32_t t28 = -474071;

	t28 = (x1301<=((x1302-x1303)>>x1304));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1329 = -1;
	static int64_t x1330 = INT64_MAX;
	uint16_t x1331 = UINT16_MAX;
	int8_t x1332 = 0;
	volatile int32_t t29 = -2630835;

	t29 = (x1329<=((x1330-x1331)>>x1332));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1337 = INT32_MAX;
	static uint8_t x1338 = UINT8_MAX;
	int8_t x1339 = INT8_MAX;
	static volatile uint8_t x1340 = 17U;

	t30 = (x1337<=((x1338-x1339)>>x1340));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1353 = -1;
	uint64_t x1354 = 22LLU;
	static volatile int64_t x1355 = -1LL;
	uint8_t x1356 = 1U;
	int32_t t31 = 33573;

	t31 = (x1353<=((x1354-x1355)>>x1356));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x1365 = UINT32_MAX;
	volatile int32_t x1366 = -1;
	int8_t x1367 = -1;
	static uint64_t x1368 = 11LLU;

	t32 = (x1365<=((x1366-x1367)>>x1368));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1433 = 109U;
	int8_t x1434 = INT8_MIN;
	uint32_t x1435 = UINT32_MAX;
	int32_t t33 = 1;

	t33 = (x1433<=((x1434-x1435)>>x1436));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1441 = -63;
	int16_t x1442 = INT16_MIN;
	int64_t x1443 = INT64_MIN;
	volatile int32_t t34 = -504;

	t34 = (x1441<=((x1442-x1443)>>x1444));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x1469 = INT64_MIN;
	volatile uint64_t x1470 = UINT64_MAX;
	int32_t x1471 = -1;
	volatile int32_t t35 = 59;

	t35 = (x1469<=((x1470-x1471)>>x1472));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x1498 = INT16_MAX;
	volatile uint64_t x1500 = 3LLU;
	volatile int32_t t36 = 3;

	t36 = (x1497<=((x1498-x1499)>>x1500));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1573 = INT8_MIN;
	int64_t x1574 = 15630659342900LL;
	static int32_t x1575 = INT32_MIN;
	volatile uint8_t x1576 = 1U;
	static volatile int32_t t37 = -75385;

	t37 = (x1573<=((x1574-x1575)>>x1576));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1605 = UINT16_MAX;
	int16_t x1606 = 45;
	uint32_t x1607 = 238U;
	int8_t x1608 = 1;
	int32_t t38 = 260;

	t38 = (x1605<=((x1606-x1607)>>x1608));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x1609 = INT32_MAX;
	uint64_t x1610 = 3LLU;
	int16_t x1611 = 16;
	static int32_t x1612 = 3;
	int32_t t39 = 82284247;

	t39 = (x1609<=((x1610-x1611)>>x1612));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x1625 = INT16_MIN;
	uint64_t x1626 = 184984715LLU;
	int8_t x1628 = 1;
	volatile int32_t t40 = -2506981;

	t40 = (x1625<=((x1626-x1627)>>x1628));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1725 = INT64_MIN;
	volatile int8_t x1726 = INT8_MAX;
	int16_t x1727 = -1;
	int8_t x1728 = 1;

	t41 = (x1725<=((x1726-x1727)>>x1728));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x1789 = 15244U;
	volatile int32_t x1790 = INT32_MAX;
	uint32_t x1791 = 1276U;
	volatile uint16_t x1792 = 1U;
	int32_t t42 = -25713085;

	t42 = (x1789<=((x1790-x1791)>>x1792));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint16_t x1805 = 216U;
	volatile uint8_t x1806 = 5U;
	uint32_t x1807 = 1U;
	volatile int32_t t43 = 27;

	t43 = (x1805<=((x1806-x1807)>>x1808));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1813 = INT32_MIN;
	static volatile int8_t x1814 = INT8_MIN;
	uint64_t x1815 = 6669790898829280LLU;
	uint8_t x1816 = 1U;
	volatile int32_t t44 = -655898366;

	t44 = (x1813<=((x1814-x1815)>>x1816));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1825 = -2437;
	int32_t x1826 = INT32_MAX;
	uint32_t x1827 = UINT32_MAX;
	static volatile int64_t x1828 = 1LL;
	int32_t t45 = -1;

	t45 = (x1825<=((x1826-x1827)>>x1828));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x1829 = UINT64_MAX;
	static int8_t x1830 = INT8_MIN;
	int8_t x1831 = INT8_MIN;
	int16_t x1832 = 1;
	volatile int32_t t46 = 12;

	t46 = (x1829<=((x1830-x1831)>>x1832));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x1889 = INT8_MIN;
	static int8_t x1890 = 17;
	static uint32_t x1891 = 7759674U;
	volatile int32_t t47 = -10847;

	t47 = (x1889<=((x1890-x1891)>>x1892));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t t48 = 96859;

	t48 = (x1893<=((x1894-x1895)>>x1896));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x1958 = 126775U;
	volatile int32_t x1959 = INT32_MIN;
	int32_t t49 = -11438357;

	t49 = (x1957<=((x1958-x1959)>>x1960));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x2021 = INT64_MAX;
	int16_t x2022 = 15;
	volatile int16_t x2023 = -1;
	int8_t x2024 = 0;
	int32_t t50 = 267;

	t50 = (x2021<=((x2022-x2023)>>x2024));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x2033 = INT8_MAX;
	static int32_t x2034 = 99064857;
	static volatile uint16_t x2035 = 8180U;
	static int8_t x2036 = 1;
	int32_t t51 = 521349;

	t51 = (x2033<=((x2034-x2035)>>x2036));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2097 = 2;
	int16_t x2098 = -6243;
	int64_t x2099 = INT64_MIN;
	volatile int64_t x2100 = 26LL;
	static int32_t t52 = 695345282;

	t52 = (x2097<=((x2098-x2099)>>x2100));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x2213 = -1;
	int32_t x2214 = INT32_MIN;
	int64_t x2215 = INT64_MIN;
	int32_t t53 = -454;

	t53 = (x2213<=((x2214-x2215)>>x2216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x2262 = 732U;
	int8_t x2263 = 1;
	int32_t t54 = 459697;

	t54 = (x2261<=((x2262-x2263)>>x2264));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x2277 = UINT8_MAX;
	static int64_t x2278 = INT64_MAX;
	static volatile int8_t x2280 = 28;
	static int32_t t55 = -55;

	t55 = (x2277<=((x2278-x2279)>>x2280));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x2325 = 22;
	uint16_t x2326 = 2318U;
	volatile int32_t t56 = 844697;

	t56 = (x2325<=((x2326-x2327)>>x2328));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2449 = -1;
	static uint64_t x2450 = 10951LLU;
	static uint32_t x2452 = 1U;
	volatile int32_t t57 = -25;

	t57 = (x2449<=((x2450-x2451)>>x2452));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x2517 = 44004U;
	int32_t x2518 = -1;
	static uint64_t x2519 = UINT64_MAX;
	uint32_t x2520 = 1U;
	static volatile int32_t t58 = 57111902;

	t58 = (x2517<=((x2518-x2519)>>x2520));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x2557 = -127483;
	static int16_t x2558 = -1351;
	int32_t x2559 = -4157887;
	int16_t x2560 = 2;

	t59 = (x2557<=((x2558-x2559)>>x2560));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x2577 = INT64_MAX;
	uint64_t x2578 = UINT64_MAX;
	static uint32_t x2580 = 0U;
	int32_t t60 = -1369717;

	t60 = (x2577<=((x2578-x2579)>>x2580));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x2641 = UINT64_MAX;
	volatile uint16_t x2642 = 0U;
	int8_t x2643 = -1;
	uint16_t x2644 = 2U;
	int32_t t61 = 7981156;

	t61 = (x2641<=((x2642-x2643)>>x2644));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x2653 = 24026U;
	uint32_t x2654 = UINT32_MAX;
	int8_t x2656 = 1;
	int32_t t62 = -703341;

	t62 = (x2653<=((x2654-x2655)>>x2656));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2679 = 4;
	int16_t x2680 = 15;
	volatile int32_t t63 = 0;

	t63 = (x2677<=((x2678-x2679)>>x2680));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x2689 = UINT16_MAX;
	int64_t x2690 = 20304LL;
	int8_t x2692 = 0;

	t64 = (x2689<=((x2690-x2691)>>x2692));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x2749 = UINT16_MAX;
	uint8_t x2750 = 75U;
	uint64_t x2751 = 64LLU;
	static uint8_t x2752 = 1U;
	int32_t t65 = 10836267;

	t65 = (x2749<=((x2750-x2751)>>x2752));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x2785 = -1;
	uint64_t x2786 = 148031196947453LLU;
	volatile int64_t x2787 = -12939861619489LL;
	uint16_t x2788 = 59U;
	int32_t t66 = 0;

	t66 = (x2785<=((x2786-x2787)>>x2788));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x2905 = UINT64_MAX;
	uint32_t x2906 = 732325U;
	volatile int64_t x2907 = -793033LL;
	volatile uint8_t x2908 = 21U;
	volatile int32_t t67 = 153100;

	t67 = (x2905<=((x2906-x2907)>>x2908));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x2929 = -196887509;
	int32_t x2930 = 0;
	int16_t x2931 = INT16_MIN;
	int32_t t68 = 21;

	t68 = (x2929<=((x2930-x2931)>>x2932));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x3077 = 3U;
	volatile uint16_t x3078 = UINT16_MAX;
	uint8_t x3080 = 19U;
	volatile int32_t t69 = 1901112;

	t69 = (x3077<=((x3078-x3079)>>x3080));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x3130 = 3U;
	int8_t x3131 = INT8_MIN;
	volatile uint8_t x3132 = 2U;
	int32_t t70 = 24653;

	t70 = (x3129<=((x3130-x3131)>>x3132));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x3133 = 0U;
	int64_t x3134 = 62440263LL;
	static uint8_t x3135 = UINT8_MAX;
	int8_t x3136 = 14;
	int32_t t71 = 1019615;

	t71 = (x3133<=((x3134-x3135)>>x3136));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x3217 = INT32_MAX;
	int16_t x3218 = 8;
	int16_t x3219 = INT16_MIN;

	t72 = (x3217<=((x3218-x3219)>>x3220));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x3313 = INT64_MIN;
	volatile int32_t x3314 = -125;
	int32_t x3315 = INT32_MIN;
	volatile int16_t x3316 = 1;
	int32_t t73 = -179725516;

	t73 = (x3313<=((x3314-x3315)>>x3316));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x3397 = INT8_MIN;
	int16_t x3398 = -931;
	int32_t x3399 = INT32_MIN;
	static int8_t x3400 = 0;
	int32_t t74 = 14174802;

	t74 = (x3397<=((x3398-x3399)>>x3400));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x3409 = INT16_MIN;
	static int32_t x3410 = -7506178;
	static uint32_t x3411 = UINT32_MAX;
	volatile uint8_t x3412 = 10U;
	int32_t t75 = 7;

	t75 = (x3409<=((x3410-x3411)>>x3412));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x3441 = -3;
	int32_t x3442 = INT32_MAX;
	uint16_t x3444 = 7U;
	volatile int32_t t76 = 321300767;

	t76 = (x3441<=((x3442-x3443)>>x3444));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x3513 = 486U;
	static uint8_t x3514 = 1U;
	static uint8_t x3515 = 1U;
	int32_t x3516 = 18;
	static int32_t t77 = 742;

	t77 = (x3513<=((x3514-x3515)>>x3516));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x3561 = INT16_MAX;
	uint64_t x3562 = UINT64_MAX;
	uint64_t x3563 = 1560402460937953LLU;
	uint8_t x3564 = 1U;
	int32_t t78 = -1769;

	t78 = (x3561<=((x3562-x3563)>>x3564));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x3577 = INT16_MAX;
	uint64_t x3578 = UINT64_MAX;
	uint16_t x3579 = 451U;
	uint16_t x3580 = 5U;

	t79 = (x3577<=((x3578-x3579)>>x3580));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x3589 = INT8_MIN;
	int32_t x3591 = INT32_MAX;
	int8_t x3592 = 0;
	int32_t t80 = -8;

	t80 = (x3589<=((x3590-x3591)>>x3592));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x3633 = 0;
	uint8_t x3634 = 110U;
	int8_t x3636 = 0;
	static int32_t t81 = 38;

	t81 = (x3633<=((x3634-x3635)>>x3636));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x3701 = INT64_MAX;
	int16_t x3702 = -1;
	static uint64_t x3703 = UINT64_MAX;
	int8_t x3704 = 47;
	static volatile int32_t t82 = -1009;

	t82 = (x3701<=((x3702-x3703)>>x3704));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x3705 = -8;
	int32_t x3707 = 215;
	volatile int8_t x3708 = 4;
	volatile int32_t t83 = 18;

	t83 = (x3705<=((x3706-x3707)>>x3708));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x3757 = 1146217710744964064LLU;
	int32_t x3758 = -1;
	int64_t x3759 = -1LL;
	volatile int32_t t84 = 1024;

	t84 = (x3757<=((x3758-x3759)>>x3760));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x3781 = INT8_MIN;
	int32_t x3782 = -5;
	uint32_t x3783 = 160U;
	uint8_t x3784 = 0U;
	volatile int32_t t85 = 0;

	t85 = (x3781<=((x3782-x3783)>>x3784));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x3795 = 13242195U;
	volatile uint8_t x3796 = 20U;
	volatile int32_t t86 = -11;

	t86 = (x3793<=((x3794-x3795)>>x3796));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x3805 = INT64_MIN;
	static volatile int16_t x3806 = INT16_MAX;
	uint16_t x3807 = 18267U;
	uint8_t x3808 = 7U;
	static volatile int32_t t87 = -350747262;

	t87 = (x3805<=((x3806-x3807)>>x3808));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x3830 = 6664;
	static volatile int16_t x3831 = -1;
	uint8_t x3832 = 1U;
	static int32_t t88 = -832;

	t88 = (x3829<=((x3830-x3831)>>x3832));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x3849 = UINT64_MAX;
	static volatile int16_t x3850 = INT16_MAX;
	volatile int32_t x3851 = -1;
	static volatile uint16_t x3852 = 22U;
	static volatile int32_t t89 = 1709;

	t89 = (x3849<=((x3850-x3851)>>x3852));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x3902 = -13;
	volatile int64_t x3903 = INT64_MIN;
	uint8_t x3904 = 59U;
	int32_t t90 = 13;

	t90 = (x3901<=((x3902-x3903)>>x3904));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x4049 = INT16_MAX;
	int32_t x4050 = INT32_MIN;
	static uint64_t x4051 = UINT64_MAX;
	uint8_t x4052 = 26U;
	static volatile int32_t t91 = -20308873;

	t91 = (x4049<=((x4050-x4051)>>x4052));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x4071 = -4669004LL;

	t92 = (x4069<=((x4070-x4071)>>x4072));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x4081 = UINT64_MAX;
	uint32_t x4082 = 384363026U;
	static int32_t x4083 = 357;

	t93 = (x4081<=((x4082-x4083)>>x4084));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x4093 = -1;
	static uint32_t x4094 = 127844U;
	int8_t x4095 = -12;
	uint16_t x4096 = 4U;
	int32_t t94 = 83108129;

	t94 = (x4093<=((x4094-x4095)>>x4096));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x4181 = 1LL;
	volatile uint64_t x4182 = 7797906LLU;
	int8_t x4183 = INT8_MAX;

	t95 = (x4181<=((x4182-x4183)>>x4184));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x4189 = UINT16_MAX;
	int8_t x4190 = INT8_MIN;
	int8_t x4191 = INT8_MIN;
	uint8_t x4192 = 13U;
	volatile int32_t t96 = -7508081;

	t96 = (x4189<=((x4190-x4191)>>x4192));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x4273 = INT32_MIN;
	int64_t x4274 = -1LL;
	int32_t x4275 = INT32_MIN;
	static uint16_t x4276 = 1U;
	volatile int32_t t97 = 147457300;

	t97 = (x4273<=((x4274-x4275)>>x4276));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x4307 = 9612LLU;
	uint16_t x4308 = 60U;
	volatile int32_t t98 = -29137;

	t98 = (x4305<=((x4306-x4307)>>x4308));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x4314 = -1;
	volatile uint64_t x4315 = 10LLU;
	uint16_t x4316 = 2U;
	int32_t t99 = 1;

	t99 = (x4313<=((x4314-x4315)>>x4316));

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

