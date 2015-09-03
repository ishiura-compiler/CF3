#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x42 = -1;
volatile int8_t x93 = 5;
int32_t t1 = 7;
int8_t x103 = -1;
int64_t x133 = 10636422586251LL;
volatile int64_t x135 = INT64_MIN;
uint32_t x167 = 1077U;
volatile int32_t t4 = -1270999;
volatile uint32_t t5 = 410626U;
int64_t x282 = 7LL;
volatile int32_t t6 = 13281;
uint32_t x311 = UINT32_MAX;
int16_t x313 = INT16_MAX;
uint8_t x337 = 7U;
static int16_t x345 = INT16_MAX;
volatile uint8_t x348 = UINT8_MAX;
static int16_t x425 = INT16_MAX;
int32_t x426 = -1;
volatile uint32_t x427 = UINT32_MAX;
volatile int32_t t13 = 440;
int8_t x474 = INT8_MIN;
volatile uint64_t x493 = 259828LLU;
uint64_t t15 = 515823810370LLU;
static int8_t x653 = 0;
uint16_t x654 = UINT16_MAX;
static int32_t t16 = -3;
int32_t x667 = INT32_MAX;
volatile int32_t t17 = 20;
int32_t x694 = INT32_MAX;
volatile int64_t x787 = INT64_MIN;
uint32_t x880 = 881952150U;
volatile int32_t t23 = 0;
uint32_t x933 = UINT32_MAX;
uint8_t x934 = UINT8_MAX;
uint32_t t24 = 37U;
uint16_t x1077 = 12939U;
int32_t x1079 = INT32_MIN;
volatile uint32_t x1113 = 959U;
int32_t x1116 = INT32_MIN;
uint32_t t27 = 24099U;
static uint8_t x1133 = 5U;
static int64_t x1202 = INT64_MAX;
static volatile int32_t x1378 = INT32_MAX;
int16_t x1443 = INT16_MIN;
static uint16_t x1444 = 11432U;
uint8_t x1498 = 7U;
int32_t x1500 = INT32_MAX;
static int16_t x1548 = -1;
volatile uint64_t x1573 = 1226873527911895755LLU;
volatile uint64_t x1593 = UINT64_MAX;
int8_t x1594 = INT8_MIN;
uint64_t t42 = UINT64_MAX;
uint8_t x1649 = 2U;
uint64_t x1749 = 56907336LLU;
static uint16_t x1813 = 12U;
int32_t x1816 = -1;
volatile int32_t t51 = 11;
int32_t x1944 = -1;
static int8_t x1981 = 3;
int32_t x1987 = -1;
int16_t x2006 = -1;
int64_t x2007 = -1LL;
uint8_t x2141 = UINT8_MAX;
int8_t x2142 = 2;
int32_t x2144 = 3142015;
volatile uint64_t x2179 = UINT64_MAX;
volatile uint8_t x2213 = 0U;
int8_t x2216 = -1;
volatile int32_t t59 = 99;
int16_t x2222 = -1;
int32_t t60 = 55178909;
uint64_t x2265 = UINT64_MAX;
uint64_t x2343 = UINT64_MAX;
volatile uint64_t x2393 = 63886190LLU;
uint32_t x2409 = 1221U;
int64_t x2433 = 50LL;
int64_t x2435 = INT64_MIN;
int32_t x2487 = INT32_MIN;
int64_t t71 = -576096387242LL;
volatile int32_t t73 = -261946;
int16_t x2745 = 119;
uint16_t x2807 = UINT16_MAX;
static uint64_t x2857 = 124819661LLU;
volatile int16_t x2858 = INT16_MIN;
volatile uint64_t x2945 = 5632694300LLU;
int64_t t80 = 324651023603876001LL;
static int64_t x2986 = INT64_MIN;
volatile int64_t t81 = -1506LL;
uint8_t x2998 = 25U;
int8_t x3000 = 1;
volatile uint32_t t83 = 2889U;
uint64_t x3110 = 542935064875609232LLU;
static volatile int64_t x3236 = INT64_MAX;
int64_t x3261 = 1LL;
static volatile int16_t x3272 = -1;
int32_t x3317 = 1;


void f0(void) {
	volatile uint64_t x41 = 1395763159660086475LLU;
	static int8_t x43 = -1;
	uint32_t x44 = UINT32_MAX;
	uint64_t t0 = 21870488251719943LLU;

	t0 = (x41<<(x42%(x43/x44)));

	if (t0 != 1395763159660086475LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x94 = -545;
	int16_t x95 = INT16_MIN;
	int16_t x96 = INT16_MAX;

	t1 = (x93<<(x94%(x95/x96)));

	if (t1 != 5) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x101 = INT64_MAX;
	uint16_t x102 = 3U;
	int16_t x104 = -1;
	static volatile int64_t t2 = INT64_MAX;

	t2 = (x101<<(x102%(x103/x104)));

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x134 = UINT16_MAX;
	int64_t x136 = INT64_MIN;
	static volatile int64_t t3 = -105244749845006LL;

	t3 = (x133<<(x134%(x135/x136)));

	if (t3 != 10636422586251LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x165 = 9;
	volatile int64_t x166 = INT64_MIN;
	int8_t x168 = INT8_MAX;

	t4 = (x165<<(x166%(x167/x168)));

	if (t4 != 9) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x241 = 14U;
	static volatile int16_t x242 = INT16_MIN;
	int32_t x243 = -1;
	static uint32_t x244 = UINT32_MAX;

	t5 = (x241<<(x242%(x243/x244)));

	if (t5 != 14U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x281 = 6;
	volatile int64_t x283 = INT64_MAX;
	uint8_t x284 = 125U;

	t6 = (x281<<(x282%(x283/x284)));

	if (t6 != 768) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x293 = INT16_MAX;
	int8_t x294 = 3;
	uint16_t x295 = UINT16_MAX;
	uint8_t x296 = 2U;
	static volatile int32_t t7 = -14;

	t7 = (x293<<(x294%(x295/x296)));

	if (t7 != 262136) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x309 = 5;
	volatile int8_t x310 = -1;
	static int8_t x312 = INT8_MAX;
	int32_t t8 = -250;

	t8 = (x309<<(x310%(x311/x312)));

	if (t8 != 163840) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x314 = 1U;
	int64_t x315 = INT64_MIN;
	int16_t x316 = INT16_MIN;
	volatile int32_t t9 = 1229334;

	t9 = (x313<<(x314%(x315/x316)));

	if (t9 != 65534) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x338 = UINT16_MAX;
	int8_t x339 = -1;
	static uint64_t x340 = UINT64_MAX;
	volatile int32_t t10 = -254732;

	t10 = (x337<<(x338%(x339/x340)));

	if (t10 != 7) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x346 = 1U;
	uint64_t x347 = 16020LLU;
	volatile int32_t t11 = 467;

	t11 = (x345<<(x346%(x347/x348)));

	if (t11 != 65534) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x428 = 11;
	volatile int32_t t12 = 123;

	t12 = (x425<<(x426%(x427/x428)));

	if (t12 != 262136) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x429 = 7U;
	static int32_t x430 = INT32_MAX;
	volatile uint8_t x431 = 63U;
	int32_t x432 = -1;

	t13 = (x429<<(x430%(x431/x432)));

	if (t13 != 14) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x473 = INT32_MAX;
	uint32_t x475 = UINT32_MAX;
	int8_t x476 = INT8_MIN;
	static volatile int32_t t14 = INT32_MAX;

	t14 = (x473<<(x474%(x475/x476)));

	if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x494 = UINT8_MAX;
	int8_t x495 = -1;
	int16_t x496 = -1;

	t15 = (x493<<(x494%(x495/x496)));

	if (t15 != 259828LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x655 = 162;
	static uint64_t x656 = 124LLU;

	t16 = (x653<<(x654%(x655/x656)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x665 = UINT8_MAX;
	static int32_t x666 = INT32_MAX;
	uint8_t x668 = 33U;

	t17 = (x665<<(x666%(x667/x668)));

	if (t17 != 510) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x693 = 48423342U;
	int32_t x695 = INT32_MAX;
	int16_t x696 = -1;
	uint32_t t18 = 3364U;

	t18 = (x693<<(x694%(x695/x696)));

	if (t18 != 48423342U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x737 = 102U;
	uint16_t x738 = 37U;
	int64_t x739 = INT64_MAX;
	static int64_t x740 = INT64_MAX;
	static volatile int32_t t19 = -3144348;

	t19 = (x737<<(x738%(x739/x740)));

	if (t19 != 102) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x785 = 513037U;
	int32_t x786 = INT32_MIN;
	int64_t x788 = INT64_MIN;
	uint32_t t20 = 7046U;

	t20 = (x785<<(x786%(x787/x788)));

	if (t20 != 513037U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x793 = 76U;
	static uint32_t x794 = 150567U;
	volatile int16_t x795 = INT16_MAX;
	uint16_t x796 = 1911U;
	volatile int32_t t21 = 21;

	t21 = (x793<<(x794%(x795/x796)));

	if (t21 != 2490368) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x869 = UINT32_MAX;
	int8_t x870 = INT8_MAX;
	volatile int32_t x871 = -251;
	uint64_t x872 = 178768090653727849LLU;
	static volatile uint32_t t22 = 0U;

	t22 = (x869<<(x870%(x871/x872)));

	if (t22 != 4278190080U) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x877 = 2U;
	volatile int8_t x878 = INT8_MIN;
	int32_t x879 = INT32_MAX;

	t23 = (x877<<(x878%(x879/x880)));

	if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x935 = 48U;
	int64_t x936 = -1LL;

	t24 = (x933<<(x934%(x935/x936)));

	if (t24 != 4294934528U) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x1021 = 1;
	static uint8_t x1022 = UINT8_MAX;
	uint16_t x1023 = 5U;
	int16_t x1024 = -1;
	static volatile int32_t t25 = 82903;

	t25 = (x1021<<(x1022%(x1023/x1024)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x1078 = 1;
	static int32_t x1080 = INT32_MAX;
	int32_t t26 = -3758;

	t26 = (x1077<<(x1078%(x1079/x1080)));

	if (t26 != 12939) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1114 = -1762;
	uint64_t x1115 = UINT64_MAX;

	t27 = (x1113<<(x1114%(x1115/x1116)));

	if (t27 != 959U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1121 = 231115LLU;
	static uint8_t x1122 = 3U;
	uint16_t x1123 = 2640U;
	volatile int8_t x1124 = INT8_MAX;
	static volatile uint64_t t28 = 7787457244LLU;

	t28 = (x1121<<(x1122%(x1123/x1124)));

	if (t28 != 1848920LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1134 = 0;
	uint32_t x1135 = 138U;
	uint8_t x1136 = 8U;
	volatile int32_t t29 = 29;

	t29 = (x1133<<(x1134%(x1135/x1136)));

	if (t29 != 5) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1201 = 896;
	uint64_t x1203 = 153405LLU;
	uint16_t x1204 = UINT16_MAX;
	volatile int32_t t30 = -112;

	t30 = (x1201<<(x1202%(x1203/x1204)));

	if (t30 != 1792) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x1217 = INT8_MAX;
	volatile uint16_t x1218 = UINT16_MAX;
	volatile uint32_t x1219 = UINT32_MAX;
	static uint32_t x1220 = UINT32_MAX;
	int32_t t31 = 2327;

	t31 = (x1217<<(x1218%(x1219/x1220)));

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1245 = 5U;
	uint64_t x1246 = 4128LLU;
	static int64_t x1247 = -1LL;
	int8_t x1248 = -1;
	volatile int32_t t32 = -133;

	t32 = (x1245<<(x1246%(x1247/x1248)));

	if (t32 != 5) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1341 = 20798;
	int32_t x1342 = INT32_MIN;
	uint64_t x1343 = UINT64_MAX;
	int64_t x1344 = INT64_MAX;
	int32_t t33 = 876;

	t33 = (x1341<<(x1342%(x1343/x1344)));

	if (t33 != 20798) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1365 = 263162858854041978LL;
	static volatile uint8_t x1366 = 19U;
	volatile int32_t x1367 = INT32_MAX;
	int32_t x1368 = INT32_MAX;
	static int64_t t34 = 971011022584LL;

	t34 = (x1365<<(x1366%(x1367/x1368)));

	if (t34 != 263162858854041978LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1377 = INT64_MAX;
	static uint64_t x1379 = 130LLU;
	int8_t x1380 = INT8_MAX;
	int64_t t35 = INT64_MAX;

	t35 = (x1377<<(x1378%(x1379/x1380)));

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x1437 = UINT64_MAX;
	static int64_t x1438 = INT64_MAX;
	uint8_t x1439 = 46U;
	int8_t x1440 = 1;
	uint64_t t36 = 2973753166565LLU;

	t36 = (x1437<<(x1438%(x1439/x1440)));

	if (t36 != 18446744073675997184LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x1441 = 1U;
	int16_t x1442 = INT16_MAX;
	volatile int32_t t37 = -92;

	t37 = (x1441<<(x1442%(x1443/x1444)));

	if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x1481 = 17;
	static int16_t x1482 = 4413;
	uint8_t x1483 = 1U;
	int16_t x1484 = -1;
	volatile int32_t t38 = -3909;

	t38 = (x1481<<(x1482%(x1483/x1484)));

	if (t38 != 17) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x1497 = 39913071U;
	static uint32_t x1499 = UINT32_MAX;
	uint32_t t39 = 745U;

	t39 = (x1497<<(x1498%(x1499/x1500)));

	if (t39 != 79826142U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x1545 = UINT64_MAX;
	int32_t x1546 = 543552;
	static int8_t x1547 = 6;
	static volatile uint64_t t40 = UINT64_MAX;

	t40 = (x1545<<(x1546%(x1547/x1548)));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x1574 = UINT8_MAX;
	int64_t x1575 = -1LL;
	int16_t x1576 = -1;
	uint64_t t41 = 955588287699534LLU;

	t41 = (x1573<<(x1574%(x1575/x1576)));

	if (t41 != 1226873527911895755LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1595 = INT8_MIN;
	static int8_t x1596 = INT8_MIN;

	t42 = (x1593<<(x1594%(x1595/x1596)));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x1645 = 4U;
	static int8_t x1646 = 1;
	static int32_t x1647 = -108;
	volatile uint16_t x1648 = 11U;
	int32_t t43 = 266955021;

	t43 = (x1645<<(x1646%(x1647/x1648)));

	if (t43 != 8) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1650 = 62958329LL;
	static uint64_t x1651 = UINT64_MAX;
	int32_t x1652 = -922;
	int32_t t44 = 0;

	t44 = (x1649<<(x1650%(x1651/x1652)));

	if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x1685 = 1U;
	static int8_t x1686 = INT8_MIN;
	int16_t x1687 = -1;
	int16_t x1688 = -1;
	int32_t t45 = -3372814;

	t45 = (x1685<<(x1686%(x1687/x1688)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x1713 = 63U;
	static int16_t x1714 = INT16_MAX;
	uint32_t x1715 = UINT32_MAX;
	int8_t x1716 = INT8_MIN;
	volatile int32_t t46 = 42272;

	t46 = (x1713<<(x1714%(x1715/x1716)));

	if (t46 != 63) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1721 = INT32_MAX;
	static int32_t x1722 = 518;
	volatile int64_t x1723 = -1LL;
	int64_t x1724 = -1LL;
	volatile int32_t t47 = INT32_MAX;

	t47 = (x1721<<(x1722%(x1723/x1724)));

	if (t47 != INT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint8_t x1750 = 5U;
	volatile uint16_t x1751 = UINT16_MAX;
	volatile int8_t x1752 = INT8_MAX;
	uint64_t t48 = 108578967508LLU;

	t48 = (x1749<<(x1750%(x1751/x1752)));

	if (t48 != 1821034752LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x1814 = INT16_MIN;
	int16_t x1815 = -1;
	static volatile int32_t t49 = 6699109;

	t49 = (x1813<<(x1814%(x1815/x1816)));

	if (t49 != 12) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x1829 = 48;
	uint32_t x1830 = UINT32_MAX;
	uint32_t x1831 = UINT32_MAX;
	int8_t x1832 = -1;
	int32_t t50 = -6250;

	t50 = (x1829<<(x1830%(x1831/x1832)));

	if (t50 != 48) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x1925 = INT16_MAX;
	static uint16_t x1926 = 3U;
	int64_t x1927 = INT64_MIN;
	int8_t x1928 = INT8_MIN;

	t51 = (x1925<<(x1926%(x1927/x1928)));

	if (t51 != 262136) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x1941 = UINT16_MAX;
	int16_t x1942 = INT16_MIN;
	volatile int16_t x1943 = -1;
	static int32_t t52 = -258;

	t52 = (x1941<<(x1942%(x1943/x1944)));

	if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x1982 = 16281;
	int8_t x1983 = INT8_MAX;
	static uint16_t x1984 = 2U;
	int32_t t53 = 514345942;

	t53 = (x1981<<(x1982%(x1983/x1984)));

	if (t53 != 402653184) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x1985 = INT8_MAX;
	int32_t x1986 = -16122267;
	volatile uint32_t x1988 = 478567394U;
	volatile int32_t t54 = 17731782;

	t54 = (x1985<<(x1986%(x1987/x1988)));

	if (t54 != 4064) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x2005 = 45320175LL;
	volatile int8_t x2008 = -1;
	volatile int64_t t55 = 57399093163928LL;

	t55 = (x2005<<(x2006%(x2007/x2008)));

	if (t55 != 45320175LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x2097 = 0U;
	volatile int16_t x2098 = -1;
	static volatile int16_t x2099 = 806;
	uint32_t x2100 = 27U;
	volatile int32_t t56 = 0;

	t56 = (x2097<<(x2098%(x2099/x2100)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x2143 = UINT32_MAX;
	int32_t t57 = -34616154;

	t57 = (x2141<<(x2142%(x2143/x2144)));

	if (t57 != 1020) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x2177 = 305198181494846429LLU;
	uint8_t x2178 = 14U;
	volatile int8_t x2180 = INT8_MAX;
	uint64_t t58 = 45363LLU;

	t58 = (x2177<<(x2178%(x2179/x2180)));

	if (t58 != 1299361636275404800LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x2214 = INT64_MIN;
	volatile int32_t x2215 = -1;

	t59 = (x2213<<(x2214%(x2215/x2216)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x2221 = 6064U;
	int64_t x2223 = INT64_MIN;
	int64_t x2224 = INT64_MIN;

	t60 = (x2221<<(x2222%(x2223/x2224)));

	if (t60 != 6064) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x2266 = 45U;
	int8_t x2267 = -2;
	int16_t x2268 = -1;
	volatile uint64_t t61 = 8347273062302135370LLU;

	t61 = (x2265<<(x2266%(x2267/x2268)));

	if (t61 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x2341 = UINT16_MAX;
	int64_t x2342 = 3244350225174255373LL;
	int16_t x2344 = -722;
	static int32_t t62 = 52536487;

	t62 = (x2341<<(x2342%(x2343/x2344)));

	if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x2345 = UINT32_MAX;
	int32_t x2346 = INT32_MAX;
	uint16_t x2347 = 26U;
	static volatile int8_t x2348 = -1;
	uint32_t t63 = 506120569U;

	t63 = (x2345<<(x2346%(x2347/x2348)));

	if (t63 != 4286578688U) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x2394 = INT32_MIN;
	int16_t x2395 = INT16_MIN;
	int64_t x2396 = -1LL;
	static uint64_t t64 = 419LLU;

	t64 = (x2393<<(x2394%(x2395/x2396)));

	if (t64 != 63886190LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x2410 = 103U;
	int32_t x2411 = 35;
	int8_t x2412 = 2;
	volatile uint32_t t65 = 540U;

	t65 = (x2409<<(x2410%(x2411/x2412)));

	if (t65 != 2442U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x2417 = 19941321880373247LL;
	int16_t x2418 = -1;
	int32_t x2419 = INT32_MAX;
	uint32_t x2420 = 525783794U;
	volatile int64_t t66 = 8656414797292596LL;

	t66 = (x2417<<(x2418%(x2419/x2420)));

	if (t66 != 159530575042985976LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x2434 = 7;
	volatile int64_t x2436 = INT64_MIN;
	volatile int64_t t67 = -930776625593400LL;

	t67 = (x2433<<(x2434%(x2435/x2436)));

	if (t67 != 50LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x2441 = 3382975702LLU;
	uint32_t x2442 = 14723951U;
	static uint64_t x2443 = 4499332LLU;
	volatile uint16_t x2444 = UINT16_MAX;
	volatile uint64_t t68 = 4483514090884LLU;

	t68 = (x2441<<(x2442%(x2443/x2444)));

	if (t68 != 1038924139039031296LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x2485 = 904U;
	int8_t x2486 = 3;
	static uint64_t x2488 = 1835164409700LLU;
	static volatile int32_t t69 = -61;

	t69 = (x2485<<(x2486%(x2487/x2488)));

	if (t69 != 7232) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint16_t x2489 = 0U;
	static uint16_t x2490 = 143U;
	static int32_t x2491 = 5;
	int8_t x2492 = -1;
	volatile int32_t t70 = -236554278;

	t70 = (x2489<<(x2490%(x2491/x2492)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x2545 = 4399066533431999LL;
	static uint8_t x2546 = UINT8_MAX;
	int64_t x2547 = -1LL;
	int16_t x2548 = -1;

	t71 = (x2545<<(x2546%(x2547/x2548)));

	if (t71 != 4399066533431999LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x2613 = UINT32_MAX;
	static int32_t x2614 = -124453848;
	int16_t x2615 = -1;
	volatile uint8_t x2616 = 1U;
	uint32_t t72 = UINT32_MAX;

	t72 = (x2613<<(x2614%(x2615/x2616)));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x2621 = 7U;
	int8_t x2622 = 0;
	int8_t x2623 = -1;
	int8_t x2624 = -1;

	t73 = (x2621<<(x2622%(x2623/x2624)));

	if (t73 != 7) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x2645 = UINT16_MAX;
	int64_t x2646 = INT64_MAX;
	static volatile int32_t x2647 = INT32_MIN;
	volatile int32_t x2648 = INT32_MAX;
	volatile int32_t t74 = 3129;

	t74 = (x2645<<(x2646%(x2647/x2648)));

	if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x2746 = UINT8_MAX;
	static volatile uint16_t x2747 = UINT16_MAX;
	int16_t x2748 = INT16_MIN;
	int32_t t75 = 1;

	t75 = (x2745<<(x2746%(x2747/x2748)));

	if (t75 != 119) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x2805 = INT8_MAX;
	volatile uint32_t x2806 = UINT32_MAX;
	volatile int16_t x2808 = INT16_MIN;
	int32_t t76 = 1;

	t76 = (x2805<<(x2806%(x2807/x2808)));

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x2817 = 225U;
	int32_t x2818 = INT32_MIN;
	volatile int8_t x2819 = INT8_MIN;
	int8_t x2820 = INT8_MIN;
	static int32_t t77 = 344;

	t77 = (x2817<<(x2818%(x2819/x2820)));

	if (t77 != 225) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x2859 = UINT16_MAX;
	static uint32_t x2860 = 6U;
	volatile uint64_t t78 = 1557347576864LLU;

	t78 = (x2857<<(x2858%(x2859/x2860)));

	if (t78 != 2045045325824LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x2946 = UINT64_MAX;
	static volatile int32_t x2947 = INT32_MIN;
	int32_t x2948 = INT32_MAX;
	uint64_t t79 = 3LLU;

	t79 = (x2945<<(x2946%(x2947/x2948)));

	if (t79 != 5632694300LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x2961 = 2103001952261LL;
	int32_t x2962 = INT32_MAX;
	static int32_t x2963 = INT32_MIN;
	int32_t x2964 = INT32_MAX;

	t80 = (x2961<<(x2962%(x2963/x2964)));

	if (t80 != 2103001952261LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x2985 = 66702893691961LL;
	volatile int16_t x2987 = -1;
	static uint64_t x2988 = UINT64_MAX;

	t81 = (x2985<<(x2986%(x2987/x2988)));

	if (t81 != 66702893691961LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x2993 = UINT64_MAX;
	int8_t x2994 = 15;
	uint32_t x2995 = 568199128U;
	static uint16_t x2996 = 195U;
	static volatile uint64_t t82 = 5470745943876859176LLU;

	t82 = (x2993<<(x2994%(x2995/x2996)));

	if (t82 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x2997 = UINT32_MAX;
	uint8_t x2999 = UINT8_MAX;

	t83 = (x2997<<(x2998%(x2999/x3000)));

	if (t83 != 4261412864U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x3053 = 1470300LLU;
	int32_t x3054 = -1;
	uint32_t x3055 = UINT32_MAX;
	volatile int16_t x3056 = INT16_MIN;
	volatile uint64_t t84 = 123798555LLU;

	t84 = (x3053<<(x3054%(x3055/x3056)));

	if (t84 != 1470300LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x3109 = 43U;
	static uint8_t x3111 = 84U;
	uint8_t x3112 = 60U;
	static volatile int32_t t85 = 126166;

	t85 = (x3109<<(x3110%(x3111/x3112)));

	if (t85 != 43) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x3173 = UINT8_MAX;
	int64_t x3174 = -97081LL;
	int16_t x3175 = INT16_MIN;
	int16_t x3176 = INT16_MIN;
	static int32_t t86 = -35448;

	t86 = (x3173<<(x3174%(x3175/x3176)));

	if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x3189 = 2U;
	static int64_t x3190 = 1LL;
	static volatile uint64_t x3191 = UINT64_MAX;
	int32_t x3192 = -1;
	volatile int32_t t87 = 1747;

	t87 = (x3189<<(x3190%(x3191/x3192)));

	if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x3201 = 0U;
	int16_t x3202 = 1219;
	uint32_t x3203 = UINT32_MAX;
	volatile int8_t x3204 = -37;
	volatile int32_t t88 = -3638374;

	t88 = (x3201<<(x3202%(x3203/x3204)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x3233 = 260LLU;
	uint32_t x3234 = 3U;
	int64_t x3235 = INT64_MIN;
	volatile uint64_t t89 = 12925538898073139LLU;

	t89 = (x3233<<(x3234%(x3235/x3236)));

	if (t89 != 260LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x3262 = 9LLU;
	int16_t x3263 = -185;
	static uint64_t x3264 = 2471002254859LLU;
	volatile int64_t t90 = 681288129LL;

	t90 = (x3261<<(x3262%(x3263/x3264)));

	if (t90 != 512LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x3269 = 25783743293961LLU;
	static volatile int32_t x3270 = INT32_MIN;
	int64_t x3271 = -1LL;
	volatile uint64_t t91 = 69852215036167LLU;

	t91 = (x3269<<(x3270%(x3271/x3272)));

	if (t91 != 25783743293961LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x3318 = 491134560029447LLU;
	int64_t x3319 = 163LL;
	int8_t x3320 = INT8_MAX;
	int32_t t92 = 45013;

	t92 = (x3317<<(x3318%(x3319/x3320)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x3337 = INT64_MAX;
	int64_t x3338 = INT64_MIN;
	static volatile int16_t x3339 = INT16_MIN;
	int32_t x3340 = -1;
	volatile int64_t t93 = INT64_MAX;

	t93 = (x3337<<(x3338%(x3339/x3340)));

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x3377 = UINT32_MAX;
	static int8_t x3378 = 49;
	int16_t x3379 = INT16_MIN;
	volatile int16_t x3380 = INT16_MIN;
	volatile uint32_t t94 = UINT32_MAX;

	t94 = (x3377<<(x3378%(x3379/x3380)));

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x3465 = 79;
	uint64_t x3466 = 101856455152095LLU;
	volatile uint64_t x3467 = UINT64_MAX;
	int32_t x3468 = -251569;
	volatile int32_t t95 = 122;

	t95 = (x3465<<(x3466%(x3467/x3468)));

	if (t95 != 79) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x3469 = UINT8_MAX;
	int8_t x3470 = INT8_MIN;
	uint8_t x3471 = UINT8_MAX;
	volatile int8_t x3472 = INT8_MIN;
	volatile int32_t t96 = 65351838;

	t96 = (x3469<<(x3470%(x3471/x3472)));

	if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x3517 = 6U;
	volatile int64_t x3518 = 2525303053760LL;
	volatile int16_t x3519 = INT16_MIN;
	int16_t x3520 = INT16_MAX;
	volatile int32_t t97 = -1055;

	t97 = (x3517<<(x3518%(x3519/x3520)));

	if (t97 != 6) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x3521 = 7;
	uint16_t x3522 = 7U;
	static uint64_t x3523 = 24585814499473LLU;
	int16_t x3524 = INT16_MAX;
	int32_t t98 = 1;

	t98 = (x3521<<(x3522%(x3523/x3524)));

	if (t98 != 896) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x3581 = 1274U;
	int16_t x3582 = -9274;
	static volatile int8_t x3583 = INT8_MIN;
	int8_t x3584 = INT8_MIN;
	static int32_t t99 = -1079;

	t99 = (x3581<<(x3582%(x3583/x3584)));

	if (t99 != 1274) { NG(); } else { ; }
	
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

