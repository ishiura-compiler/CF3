#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x35 = UINT32_MAX;
static uint32_t x42 = 1565U;
uint16_t x210 = 109U;
int8_t x230 = -2;
int16_t x264 = 16;
static int32_t x326 = -44828;
int8_t x328 = 8;
uint64_t x351 = 67LLU;
int8_t x359 = INT8_MAX;
int8_t x370 = -1;
uint32_t x371 = UINT32_MAX;
volatile uint8_t x404 = 0U;
int32_t x405 = -38;
uint16_t x407 = UINT16_MAX;
volatile int32_t t11 = 4478965;
int64_t x494 = 2471912784403LL;
uint32_t x593 = 26140U;
int32_t x595 = -1;
int8_t x596 = 2;
uint32_t x629 = 10010U;
uint8_t x671 = 1U;
static volatile int64_t x742 = -1LL;
int32_t x743 = -1;
int8_t x763 = INT8_MIN;
uint32_t x773 = 120407U;
uint16_t x776 = 12U;
uint16_t x928 = 5U;
int16_t x933 = INT16_MAX;
static volatile int16_t x1121 = 13949;
volatile int32_t t27 = -4042;
int32_t x1155 = -65819;
int64_t x1221 = -1LL;
int32_t x1223 = INT32_MIN;
int32_t t29 = 991141423;
uint64_t x1262 = UINT64_MAX;
volatile uint8_t x1264 = 3U;
static uint64_t x1287 = 18LLU;
int64_t x1362 = 1921184069293715267LL;
uint8_t x1371 = 1U;
int8_t x1372 = 1;
int32_t t35 = 11;
int8_t x1402 = INT8_MIN;
uint8_t x1603 = 14U;
int16_t x1604 = 28;
volatile int32_t t39 = 9532910;
int32_t t41 = -9376;
int32_t t42 = 2376;
static uint32_t x1758 = 56491U;
uint16_t x1759 = 1U;
int16_t x1786 = INT16_MAX;
uint8_t x1876 = 24U;
int8_t x1880 = 4;
volatile int8_t x1881 = INT8_MAX;
int16_t x1940 = 0;
volatile int32_t t53 = -11386;
uint8_t x2137 = UINT8_MAX;
static uint8_t x2292 = 10U;
static uint16_t x2378 = UINT16_MAX;
int32_t x2390 = 1;
int16_t x2391 = -15;
int16_t x2419 = -1;
static int8_t x2420 = 7;
int32_t t61 = 146;
int32_t t62 = 485954677;
int16_t x2489 = INT16_MAX;
int32_t t64 = -125278678;
int32_t x2573 = -3181156;
uint64_t x2574 = UINT64_MAX;
static uint32_t x2642 = 75249648U;
int64_t x2643 = INT64_MIN;
uint64_t x2650 = 30725699LLU;
int8_t x2708 = 1;
int8_t x2771 = INT8_MIN;
static uint16_t x2792 = 5U;
static volatile int8_t x2857 = INT8_MIN;
int16_t x2899 = -3;
uint8_t x2933 = 0U;
static int16_t x2934 = INT16_MAX;
int8_t x3067 = INT8_MAX;
uint16_t x3068 = 23U;
int32_t t75 = -514487;
static int32_t x3243 = INT32_MIN;
static volatile uint16_t x3272 = 1U;
int16_t x3331 = INT16_MAX;
int64_t x3353 = -1LL;
uint16_t x3387 = UINT16_MAX;
int8_t x3388 = 10;
uint32_t x3434 = 5177U;
volatile int32_t t87 = 263633180;
int8_t x3464 = 2;
int32_t x3550 = -1;
volatile int8_t x3577 = -10;
volatile int32_t t91 = -27;
volatile uint32_t x3645 = UINT32_MAX;
int32_t t92 = -4;
static volatile int16_t x3699 = -1;
uint16_t x3769 = 1U;
int64_t x3771 = INT64_MAX;
volatile int16_t x3824 = 3;
uint64_t x3845 = 62554781779LLU;
uint32_t x3933 = 51039U;
volatile int32_t t98 = 268540068;
int32_t x3938 = 1332585;
int16_t x3940 = 5;


void f0(void) {
	uint64_t x33 = UINT64_MAX;
	int64_t x34 = INT64_MAX;
	uint8_t x36 = 1U;
	int32_t t0 = 3762941;

	t0 = (((x33*x34)<=x35)<<x36);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x41 = -1;
	int8_t x43 = 1;
	static volatile int16_t x44 = 1;
	int32_t t1 = -784527;

	t1 = (((x41*x42)<=x43)<<x44);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x205 = -215;
	int8_t x206 = INT8_MAX;
	int64_t x207 = -3697959272360119141LL;
	uint8_t x208 = 12U;
	static volatile int32_t t2 = 33;

	t2 = (((x205*x206)<=x207)<<x208);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x209 = -1;
	int64_t x211 = INT64_MIN;
	uint8_t x212 = 1U;
	int32_t t3 = 1;

	t3 = (((x209*x210)<=x211)<<x212);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x229 = UINT64_MAX;
	static uint16_t x231 = 7U;
	static uint16_t x232 = 16U;
	volatile int32_t t4 = -957643462;

	t4 = (((x229*x230)<=x231)<<x232);

	if (t4 != 65536) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x261 = UINT16_MAX;
	static uint16_t x262 = 2U;
	static uint32_t x263 = UINT32_MAX;
	int32_t t5 = -99930;

	t5 = (((x261*x262)<=x263)<<x264);

	if (t5 != 65536) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x325 = 1748U;
	volatile int8_t x327 = INT8_MIN;
	int32_t t6 = 5159690;

	t6 = (((x325*x326)<=x327)<<x328);

	if (t6 != 256) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x349 = -1;
	int16_t x350 = INT16_MIN;
	uint8_t x352 = 0U;
	int32_t t7 = -6188;

	t7 = (((x349*x350)<=x351)<<x352);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x357 = INT8_MIN;
	uint64_t x358 = 192913605296915267LLU;
	int64_t x360 = 29LL;
	static int32_t t8 = 182;

	t8 = (((x357*x358)<=x359)<<x360);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x369 = 1;
	volatile int8_t x372 = 2;
	volatile int32_t t9 = 96003;

	t9 = (((x369*x370)<=x371)<<x372);

	if (t9 != 4) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x401 = 4443914809LLU;
	uint16_t x402 = 12993U;
	uint8_t x403 = 100U;
	static volatile int32_t t10 = 76;

	t10 = (((x401*x402)<=x403)<<x404);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint16_t x406 = 486U;
	volatile int8_t x408 = 6;

	t11 = (((x405*x406)<=x407)<<x408);

	if (t11 != 64) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x493 = 1U;
	int64_t x495 = INT64_MIN;
	static uint8_t x496 = 0U;
	volatile int32_t t12 = 73;

	t12 = (((x493*x494)<=x495)<<x496);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x594 = 4390364U;
	int32_t t13 = -230464087;

	t13 = (((x593*x594)<=x595)<<x596);

	if (t13 != 4) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x630 = -5917039LL;
	static int8_t x631 = INT8_MIN;
	int8_t x632 = 0;
	volatile int32_t t14 = -10;

	t14 = (((x629*x630)<=x631)<<x632);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x669 = UINT16_MAX;
	static volatile uint64_t x670 = UINT64_MAX;
	int16_t x672 = 2;
	volatile int32_t t15 = 16;

	t15 = (((x669*x670)<=x671)<<x672);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x741 = UINT8_MAX;
	int16_t x744 = 19;
	int32_t t16 = -4;

	t16 = (((x741*x742)<=x743)<<x744);

	if (t16 != 524288) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x761 = 2592501U;
	static int32_t x762 = -1;
	uint8_t x764 = 22U;
	int32_t t17 = 22121613;

	t17 = (((x761*x762)<=x763)<<x764);

	if (t17 != 4194304) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x774 = UINT16_MAX;
	uint8_t x775 = 13U;
	int32_t t18 = 16175243;

	t18 = (((x773*x774)<=x775)<<x776);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x853 = UINT64_MAX;
	int8_t x854 = 47;
	uint8_t x855 = UINT8_MAX;
	int8_t x856 = 0;
	int32_t t19 = -238470;

	t19 = (((x853*x854)<=x855)<<x856);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x921 = UINT32_MAX;
	int64_t x922 = -26LL;
	int32_t x923 = INT32_MAX;
	int64_t x924 = 1LL;
	int32_t t20 = -5281960;

	t20 = (((x921*x922)<=x923)<<x924);

	if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x925 = -1;
	static volatile uint32_t x926 = UINT32_MAX;
	int32_t x927 = INT32_MIN;
	volatile int32_t t21 = -125160;

	t21 = (((x925*x926)<=x927)<<x928);

	if (t21 != 32) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x934 = -1;
	int8_t x935 = 0;
	uint16_t x936 = 11U;
	volatile int32_t t22 = 212;

	t22 = (((x933*x934)<=x935)<<x936);

	if (t22 != 2048) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x941 = 97331775975512645LLU;
	uint16_t x942 = 0U;
	uint8_t x943 = 15U;
	int32_t x944 = 6;
	int32_t t23 = -639433;

	t23 = (((x941*x942)<=x943)<<x944);

	if (t23 != 64) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x973 = INT8_MIN;
	volatile int16_t x974 = INT16_MIN;
	uint16_t x975 = 11U;
	uint32_t x976 = 0U;
	volatile int32_t t24 = 12765064;

	t24 = (((x973*x974)<=x975)<<x976);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1041 = 11600935452110LL;
	int16_t x1042 = -1;
	int64_t x1043 = -1LL;
	uint16_t x1044 = 1U;
	volatile int32_t t25 = -1573;

	t25 = (((x1041*x1042)<=x1043)<<x1044);

	if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x1053 = 18U;
	int8_t x1054 = INT8_MAX;
	int16_t x1055 = -148;
	uint8_t x1056 = 3U;
	volatile int32_t t26 = -97009;

	t26 = (((x1053*x1054)<=x1055)<<x1056);

	if (t26 != 8) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x1122 = -1;
	uint64_t x1123 = UINT64_MAX;
	uint16_t x1124 = 5U;

	t27 = (((x1121*x1122)<=x1123)<<x1124);

	if (t27 != 32) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1153 = 0;
	int64_t x1154 = 5LL;
	int32_t x1156 = 0;
	volatile int32_t t28 = -36222;

	t28 = (((x1153*x1154)<=x1155)<<x1156);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1222 = -23;
	static int32_t x1224 = 1;

	t29 = (((x1221*x1222)<=x1223)<<x1224);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x1261 = -17;
	uint8_t x1263 = 7U;
	volatile int32_t t30 = 847990;

	t30 = (((x1261*x1262)<=x1263)<<x1264);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1285 = UINT32_MAX;
	uint16_t x1286 = 754U;
	int8_t x1288 = 1;
	int32_t t31 = 330936;

	t31 = (((x1285*x1286)<=x1287)<<x1288);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x1293 = UINT8_MAX;
	static uint8_t x1294 = 1U;
	int8_t x1295 = -1;
	static int16_t x1296 = 7;
	volatile int32_t t32 = 728;

	t32 = (((x1293*x1294)<=x1295)<<x1296);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1337 = UINT32_MAX;
	uint16_t x1338 = 254U;
	static uint16_t x1339 = 6670U;
	volatile int16_t x1340 = 22;
	volatile int32_t t33 = -15;

	t33 = (((x1337*x1338)<=x1339)<<x1340);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1361 = -2;
	static int32_t x1363 = INT32_MIN;
	int8_t x1364 = 1;
	volatile int32_t t34 = -26;

	t34 = (((x1361*x1362)<=x1363)<<x1364);

	if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1369 = INT32_MAX;
	uint64_t x1370 = UINT64_MAX;

	t35 = (((x1369*x1370)<=x1371)<<x1372);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x1401 = -1;
	static uint16_t x1403 = UINT16_MAX;
	int8_t x1404 = 6;
	static int32_t t36 = -1;

	t36 = (((x1401*x1402)<=x1403)<<x1404);

	if (t36 != 64) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1537 = UINT64_MAX;
	uint32_t x1538 = 1392989U;
	volatile uint32_t x1539 = 703964255U;
	int8_t x1540 = 1;
	int32_t t37 = 3782896;

	t37 = (((x1537*x1538)<=x1539)<<x1540);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x1601 = -1;
	int16_t x1602 = 20;
	volatile int32_t t38 = -12;

	t38 = (((x1601*x1602)<=x1603)<<x1604);

	if (t38 != 268435456) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x1605 = INT16_MIN;
	int64_t x1606 = 135496718LL;
	int64_t x1607 = INT64_MAX;
	uint64_t x1608 = 7LLU;

	t39 = (((x1605*x1606)<=x1607)<<x1608);

	if (t39 != 128) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1625 = 4666684359LLU;
	volatile int16_t x1626 = INT16_MAX;
	int8_t x1627 = -1;
	uint8_t x1628 = 2U;
	volatile int32_t t40 = 1566852;

	t40 = (((x1625*x1626)<=x1627)<<x1628);

	if (t40 != 4) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x1693 = -32593;
	int64_t x1694 = -45305621350LL;
	uint64_t x1695 = 8473805495204LLU;
	volatile uint8_t x1696 = 1U;

	t41 = (((x1693*x1694)<=x1695)<<x1696);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x1705 = 24360387568LLU;
	static int16_t x1706 = 0;
	volatile int16_t x1707 = INT16_MIN;
	int8_t x1708 = 1;

	t42 = (((x1705*x1706)<=x1707)<<x1708);

	if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1717 = 1546853LL;
	uint8_t x1718 = 14U;
	int32_t x1719 = -150370502;
	uint8_t x1720 = 9U;
	static int32_t t43 = 128212;

	t43 = (((x1717*x1718)<=x1719)<<x1720);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1725 = -1;
	int16_t x1726 = INT16_MIN;
	uint16_t x1727 = UINT16_MAX;
	uint32_t x1728 = 29U;
	static int32_t t44 = -206661688;

	t44 = (((x1725*x1726)<=x1727)<<x1728);

	if (t44 != 536870912) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x1733 = UINT8_MAX;
	int8_t x1734 = 2;
	int32_t x1735 = INT32_MIN;
	volatile int8_t x1736 = 1;
	volatile int32_t t45 = 5445559;

	t45 = (((x1733*x1734)<=x1735)<<x1736);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1757 = -1;
	uint8_t x1760 = 6U;
	volatile int32_t t46 = 1;

	t46 = (((x1757*x1758)<=x1759)<<x1760);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x1785 = 6684U;
	int64_t x1787 = INT64_MAX;
	uint16_t x1788 = 1U;
	volatile int32_t t47 = 11588116;

	t47 = (((x1785*x1786)<=x1787)<<x1788);

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1873 = INT32_MIN;
	uint64_t x1874 = 4618058LLU;
	volatile uint32_t x1875 = 1769769U;
	volatile int32_t t48 = 4034123;

	t48 = (((x1873*x1874)<=x1875)<<x1876);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1877 = INT64_MAX;
	volatile int64_t x1878 = -1LL;
	volatile uint8_t x1879 = 33U;
	volatile int32_t t49 = -3428543;

	t49 = (((x1877*x1878)<=x1879)<<x1880);

	if (t49 != 16) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x1882 = 14686523U;
	static uint32_t x1883 = 7497U;
	int8_t x1884 = 18;
	int32_t t50 = -158;

	t50 = (((x1881*x1882)<=x1883)<<x1884);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x1937 = 8920LL;
	int32_t x1938 = INT32_MIN;
	int16_t x1939 = INT16_MAX;
	int32_t t51 = 16;

	t51 = (((x1937*x1938)<=x1939)<<x1940);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x1969 = -83419284LL;
	static uint8_t x1970 = 44U;
	volatile int32_t x1971 = -1;
	int16_t x1972 = 6;
	int32_t t52 = 1;

	t52 = (((x1969*x1970)<=x1971)<<x1972);

	if (t52 != 64) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x1985 = -1LL;
	uint8_t x1986 = 0U;
	int16_t x1987 = -1;
	uint16_t x1988 = 16U;

	t53 = (((x1985*x1986)<=x1987)<<x1988);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x2093 = INT8_MIN;
	volatile int8_t x2094 = -1;
	volatile int8_t x2095 = INT8_MIN;
	uint8_t x2096 = 30U;
	static volatile int32_t t54 = -7126;

	t54 = (((x2093*x2094)<=x2095)<<x2096);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x2121 = INT8_MIN;
	int8_t x2122 = INT8_MIN;
	static uint8_t x2123 = UINT8_MAX;
	uint8_t x2124 = 1U;
	static volatile int32_t t55 = 11928;

	t55 = (((x2121*x2122)<=x2123)<<x2124);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x2138 = 29U;
	int8_t x2139 = 45;
	int32_t x2140 = 1;
	static int32_t t56 = 507159;

	t56 = (((x2137*x2138)<=x2139)<<x2140);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x2257 = INT8_MAX;
	uint16_t x2258 = UINT16_MAX;
	uint16_t x2259 = 336U;
	static uint64_t x2260 = 22LLU;
	volatile int32_t t57 = -1139681;

	t57 = (((x2257*x2258)<=x2259)<<x2260);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x2289 = -1;
	uint16_t x2290 = UINT16_MAX;
	volatile int64_t x2291 = INT64_MIN;
	static volatile int32_t t58 = -114464369;

	t58 = (((x2289*x2290)<=x2291)<<x2292);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x2377 = 32U;
	static volatile uint64_t x2379 = 0LLU;
	volatile int8_t x2380 = 31;
	static volatile int32_t t59 = -118214;

	t59 = (((x2377*x2378)<=x2379)<<x2380);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2389 = 7;
	int8_t x2392 = 5;
	int32_t t60 = 700;

	t60 = (((x2389*x2390)<=x2391)<<x2392);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x2417 = -1LL;
	volatile int32_t x2418 = -18874227;

	t61 = (((x2417*x2418)<=x2419)<<x2420);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x2485 = INT32_MIN;
	uint32_t x2486 = 1707032U;
	uint8_t x2487 = 6U;
	static uint8_t x2488 = 1U;

	t62 = (((x2485*x2486)<=x2487)<<x2488);

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x2490 = 812LLU;
	int16_t x2491 = INT16_MAX;
	volatile uint32_t x2492 = 3U;
	int32_t t63 = -1409;

	t63 = (((x2489*x2490)<=x2491)<<x2492);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x2561 = 4U;
	int32_t x2562 = INT32_MIN;
	int8_t x2563 = -47;
	uint8_t x2564 = 27U;

	t64 = (((x2561*x2562)<=x2563)<<x2564);

	if (t64 != 134217728) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x2575 = -1;
	static uint8_t x2576 = 6U;
	volatile int32_t t65 = -236;

	t65 = (((x2573*x2574)<=x2575)<<x2576);

	if (t65 != 64) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x2641 = 223904315LLU;
	int8_t x2644 = 1;
	static int32_t t66 = -621064;

	t66 = (((x2641*x2642)<=x2643)<<x2644);

	if (t66 != 2) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x2649 = UINT32_MAX;
	uint32_t x2651 = 0U;
	volatile int8_t x2652 = 6;
	volatile int32_t t67 = 36;

	t67 = (((x2649*x2650)<=x2651)<<x2652);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x2705 = 38LLU;
	int8_t x2706 = INT8_MIN;
	uint16_t x2707 = 20552U;
	int32_t t68 = 743564;

	t68 = (((x2705*x2706)<=x2707)<<x2708);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x2769 = 10785LL;
	int16_t x2770 = -1;
	int8_t x2772 = 0;
	static volatile int32_t t69 = 0;

	t69 = (((x2769*x2770)<=x2771)<<x2772);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x2789 = INT16_MIN;
	int64_t x2790 = -1LL;
	volatile int32_t x2791 = INT32_MIN;
	volatile int32_t t70 = 50131886;

	t70 = (((x2789*x2790)<=x2791)<<x2792);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x2858 = 26U;
	uint16_t x2859 = UINT16_MAX;
	static uint16_t x2860 = 2U;
	volatile int32_t t71 = 9;

	t71 = (((x2857*x2858)<=x2859)<<x2860);

	if (t71 != 4) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x2897 = 35685;
	int16_t x2898 = INT16_MIN;
	volatile uint16_t x2900 = 0U;
	static volatile int32_t t72 = 3888603;

	t72 = (((x2897*x2898)<=x2899)<<x2900);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x2935 = INT64_MIN;
	static uint32_t x2936 = 11U;
	static volatile int32_t t73 = -1;

	t73 = (((x2933*x2934)<=x2935)<<x2936);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x3065 = 1;
	static volatile uint64_t x3066 = UINT64_MAX;
	volatile int32_t t74 = -428453136;

	t74 = (((x3065*x3066)<=x3067)<<x3068);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x3209 = 62;
	int8_t x3210 = INT8_MIN;
	static int8_t x3211 = INT8_MAX;
	volatile uint8_t x3212 = 5U;

	t75 = (((x3209*x3210)<=x3211)<<x3212);

	if (t75 != 32) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x3225 = -1;
	static volatile uint16_t x3226 = 5U;
	int32_t x3227 = 244927830;
	uint16_t x3228 = 28U;
	volatile int32_t t76 = 21661530;

	t76 = (((x3225*x3226)<=x3227)<<x3228);

	if (t76 != 268435456) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x3241 = INT32_MAX;
	uint32_t x3242 = 13082511U;
	static int8_t x3244 = 17;
	int32_t t77 = -63;

	t77 = (((x3241*x3242)<=x3243)<<x3244);

	if (t77 != 131072) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x3269 = INT16_MAX;
	int8_t x3270 = -1;
	int16_t x3271 = 193;
	int32_t t78 = 49196787;

	t78 = (((x3269*x3270)<=x3271)<<x3272);

	if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x3329 = 84212LLU;
	int16_t x3330 = INT16_MAX;
	volatile uint16_t x3332 = 1U;
	int32_t t79 = 13;

	t79 = (((x3329*x3330)<=x3331)<<x3332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x3349 = -1;
	static volatile int32_t x3350 = 469876;
	int32_t x3351 = 23;
	uint32_t x3352 = 1U;
	int32_t t80 = -2110;

	t80 = (((x3349*x3350)<=x3351)<<x3352);

	if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x3354 = INT16_MIN;
	int64_t x3355 = 61859803925105748LL;
	static volatile int8_t x3356 = 1;
	static int32_t t81 = 1;

	t81 = (((x3353*x3354)<=x3355)<<x3356);

	if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x3385 = 7502199U;
	volatile uint32_t x3386 = 115U;
	int32_t t82 = -45471156;

	t82 = (((x3385*x3386)<=x3387)<<x3388);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x3389 = 6U;
	int8_t x3390 = 10;
	uint64_t x3391 = 265637814273568LLU;
	uint32_t x3392 = 24U;
	static int32_t t83 = -2227;

	t83 = (((x3389*x3390)<=x3391)<<x3392);

	if (t83 != 16777216) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x3401 = -2;
	uint64_t x3402 = 409826LLU;
	int64_t x3403 = -1LL;
	int16_t x3404 = 1;
	volatile int32_t t84 = 6741626;

	t84 = (((x3401*x3402)<=x3403)<<x3404);

	if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x3405 = -41;
	int16_t x3406 = -1;
	int64_t x3407 = INT64_MIN;
	volatile int16_t x3408 = 3;
	int32_t t85 = 244768291;

	t85 = (((x3405*x3406)<=x3407)<<x3408);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x3425 = INT8_MIN;
	volatile int8_t x3426 = INT8_MIN;
	int16_t x3427 = -6126;
	int32_t x3428 = 13;
	static volatile int32_t t86 = 711416492;

	t86 = (((x3425*x3426)<=x3427)<<x3428);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x3433 = -1;
	static uint16_t x3435 = UINT16_MAX;
	uint16_t x3436 = 1U;

	t87 = (((x3433*x3434)<=x3435)<<x3436);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x3461 = 387U;
	int16_t x3462 = INT16_MIN;
	static int8_t x3463 = 2;
	int32_t t88 = -106742765;

	t88 = (((x3461*x3462)<=x3463)<<x3464);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x3549 = 402726396;
	static volatile uint32_t x3551 = 929U;
	static volatile uint8_t x3552 = 22U;
	int32_t t89 = -4;

	t89 = (((x3549*x3550)<=x3551)<<x3552);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x3561 = INT32_MIN;
	uint32_t x3562 = 38U;
	static int64_t x3563 = 49604998347LL;
	int64_t x3564 = 0LL;
	volatile int32_t t90 = 95581;

	t90 = (((x3561*x3562)<=x3563)<<x3564);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x3578 = UINT8_MAX;
	static int16_t x3579 = INT16_MIN;
	uint16_t x3580 = 0U;

	t91 = (((x3577*x3578)<=x3579)<<x3580);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x3646 = 1;
	int64_t x3647 = INT64_MAX;
	volatile int16_t x3648 = 21;

	t92 = (((x3645*x3646)<=x3647)<<x3648);

	if (t92 != 2097152) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x3649 = -6003;
	uint16_t x3650 = 8U;
	int8_t x3651 = -1;
	uint16_t x3652 = 0U;
	int32_t t93 = 41529186;

	t93 = (((x3649*x3650)<=x3651)<<x3652);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x3697 = UINT64_MAX;
	int8_t x3698 = -1;
	uint32_t x3700 = 2U;
	int32_t t94 = 281;

	t94 = (((x3697*x3698)<=x3699)<<x3700);

	if (t94 != 4) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x3770 = INT16_MIN;
	uint32_t x3772 = 0U;
	volatile int32_t t95 = 230816632;

	t95 = (((x3769*x3770)<=x3771)<<x3772);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x3821 = 1LL;
	static int64_t x3822 = -1632109306384246LL;
	int16_t x3823 = INT16_MIN;
	volatile int32_t t96 = -170124776;

	t96 = (((x3821*x3822)<=x3823)<<x3824);

	if (t96 != 8) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x3846 = 5079U;
	int16_t x3847 = -1;
	uint16_t x3848 = 10U;
	int32_t t97 = 511;

	t97 = (((x3845*x3846)<=x3847)<<x3848);

	if (t97 != 1024) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x3934 = 35LLU;
	uint32_t x3935 = 2913717U;
	uint8_t x3936 = 1U;

	t98 = (((x3933*x3934)<=x3935)<<x3936);

	if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x3937 = -20;
	uint64_t x3939 = 513728563LLU;
	int32_t t99 = 1203;

	t99 = (((x3937*x3938)<=x3939)<<x3940);

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

