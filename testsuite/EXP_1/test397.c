#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x101 = -1LL;
uint8_t x230 = 0U;
int16_t x289 = INT16_MIN;
uint8_t x352 = 1U;
int32_t t5 = -429864;
volatile uint32_t x390 = UINT32_MAX;
int32_t t9 = 75142;
volatile uint8_t x520 = 14U;
int16_t x679 = -1;
int16_t x743 = INT16_MIN;
int64_t x841 = -1LL;
static int64_t x843 = INT64_MIN;
int64_t t17 = -4477602563868377LL;
static uint64_t x895 = 330780421885LLU;
int16_t x906 = -1;
volatile int64_t x1055 = 453548LL;
volatile int8_t x1072 = 1;
int8_t x1155 = -7;
volatile int32_t t23 = -54906;
int32_t x1292 = 1;
uint32_t t25 = 328767U;
uint32_t x1294 = 130816283U;
static volatile int8_t x1316 = 0;
static uint8_t x1373 = 49U;
uint32_t x1376 = 0U;
uint32_t x1395 = 605845237U;
int16_t x1414 = INT16_MIN;
volatile int64_t t32 = 39940592241337LL;
int64_t x1443 = INT64_MIN;
static int64_t x1502 = -1LL;
volatile uint64_t x1529 = 9148896018079LLU;
uint8_t x1530 = 0U;
volatile int16_t x1532 = 17;
int16_t x1593 = 1;
int64_t t38 = 2257806576642739673LL;
int8_t x1746 = INT8_MIN;
static int8_t x1747 = INT8_MAX;
uint8_t x1833 = UINT8_MAX;
uint32_t x1836 = 1U;
uint64_t x1849 = 0LLU;
int32_t t42 = -1073375669;
static uint16_t x1925 = 8U;
uint32_t x1973 = UINT32_MAX;
int32_t x1982 = INT32_MIN;
static uint64_t t45 = 535929316LLU;
int16_t x2073 = INT16_MIN;
volatile int32_t t47 = 653;
volatile uint64_t x2095 = 3547912LLU;
uint32_t x2133 = 4900231U;
int16_t x2165 = 3;
uint32_t x2193 = 1195374U;
uint16_t x2196 = 20U;
int16_t x2210 = INT16_MIN;
int32_t t52 = 95041;
static int16_t x2214 = -504;
volatile uint8_t x2253 = 28U;
volatile int8_t x2254 = 5;
int32_t t55 = 0;
volatile int32_t x2282 = INT32_MIN;
uint8_t x2284 = 7U;
int32_t t56 = -78;
uint16_t x2319 = 42U;
int32_t x2320 = 4;
volatile uint8_t x2508 = 1U;
volatile int64_t t59 = 109970776129213595LL;
uint8_t x2566 = 6U;
volatile uint32_t x2567 = UINT32_MAX;
volatile uint8_t x2598 = UINT8_MAX;
int16_t x2599 = -882;
int8_t x2603 = 3;
volatile int64_t x2610 = -1LL;
int32_t t64 = 1;
int16_t x2689 = INT16_MAX;
uint8_t x2692 = 11U;
uint64_t x2739 = UINT64_MAX;
volatile uint64_t t68 = 2799367588838LLU;
int16_t x2876 = 0;
int8_t x2937 = INT8_MIN;
int8_t x2939 = INT8_MIN;
int16_t x2975 = INT16_MIN;
uint32_t t72 = 608816U;
static int32_t x3007 = 1;
volatile uint8_t x3288 = 0U;
int16_t x3299 = INT16_MAX;
int8_t x3435 = -7;
static int64_t t79 = 15436645LL;
static volatile int8_t x3552 = 2;
int32_t x3817 = INT32_MAX;
static uint32_t t86 = 1583978077U;
static uint16_t x3948 = 0U;
int8_t x3966 = INT8_MIN;
volatile int32_t t88 = -5;
int32_t x4054 = -2223;
static int8_t x4056 = 1;
uint64_t t93 = 10486857854477LLU;
int16_t x4188 = 9;
volatile uint64_t t96 = 30926855LLU;
volatile int64_t x4203 = 348137707854736973LL;
volatile int32_t x4204 = 3;
uint64_t t97 = 13803622647271LLU;
volatile int32_t t99 = -3056233;


void f0(void) {
	static uint64_t x102 = UINT64_MAX;
	volatile uint8_t x103 = 6U;
	int8_t x104 = 1;
	uint64_t t0 = 44370515LLU;

	t0 = (((x101*x102)%x103)>>x104);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x229 = 1053191959539317LLU;
	static int64_t x231 = INT64_MIN;
	uint8_t x232 = 7U;
	uint64_t t1 = 55LLU;

	t1 = (((x229*x230)%x231)>>x232);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x257 = INT8_MAX;
	int16_t x258 = -1;
	uint64_t x259 = 19LLU;
	volatile uint8_t x260 = 8U;
	volatile uint64_t t2 = 1787172666948LLU;

	t2 = (((x257*x258)%x259)>>x260);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x277 = 256912758LL;
	volatile uint16_t x278 = 18378U;
	uint32_t x279 = UINT32_MAX;
	volatile uint32_t x280 = 3U;
	static volatile int64_t t3 = 14706LL;

	t3 = (((x277*x278)%x279)>>x280);

	if (t3 != 171701164LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x290 = -138;
	uint16_t x291 = 1U;
	static int8_t x292 = 4;
	volatile int32_t t4 = -171;

	t4 = (((x289*x290)%x291)>>x292);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x349 = -8;
	int16_t x350 = -1;
	static uint16_t x351 = 26125U;

	t5 = (((x349*x350)%x351)>>x352);

	if (t5 != 4) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x385 = UINT64_MAX;
	int64_t x386 = INT64_MIN;
	int8_t x387 = INT8_MIN;
	uint8_t x388 = 31U;
	volatile uint64_t t6 = 38312032291LLU;

	t6 = (((x385*x386)%x387)>>x388);

	if (t6 != 4294967296LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x389 = 19785346;
	int64_t x391 = -97811577557818953LL;
	uint64_t x392 = 0LLU;
	volatile int64_t t7 = 8627LL;

	t7 = (((x389*x390)%x391)>>x392);

	if (t7 != 4275181950LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x481 = 4321U;
	int64_t x482 = 375432LL;
	uint16_t x483 = 4U;
	volatile uint16_t x484 = 0U;
	int64_t t8 = 12333967497487LL;

	t8 = (((x481*x482)%x483)>>x484);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x493 = INT8_MIN;
	static int32_t x494 = -1;
	int32_t x495 = INT32_MIN;
	uint16_t x496 = 10U;

	t9 = (((x493*x494)%x495)>>x496);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x517 = INT8_MIN;
	uint64_t x518 = 3913789166364LLU;
	uint8_t x519 = UINT8_MAX;
	static volatile uint64_t t10 = 1031614022847LLU;

	t10 = (((x517*x518)%x519)>>x520);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x573 = 73U;
	static uint16_t x574 = 0U;
	uint64_t x575 = 898487942124LLU;
	static int8_t x576 = 2;
	static volatile uint64_t t11 = 221144009155LLU;

	t11 = (((x573*x574)%x575)>>x576);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x645 = -2007LL;
	int32_t x646 = -1875;
	int32_t x647 = -1;
	static int16_t x648 = 3;
	int64_t t12 = -111080LL;

	t12 = (((x645*x646)%x647)>>x648);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x661 = INT8_MIN;
	uint32_t x662 = UINT32_MAX;
	volatile uint32_t x663 = 93284492U;
	uint8_t x664 = 29U;
	volatile uint32_t t13 = 18U;

	t13 = (((x661*x662)%x663)>>x664);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x677 = UINT8_MAX;
	int16_t x678 = INT16_MIN;
	static uint8_t x680 = 2U;
	volatile int32_t t14 = -19;

	t14 = (((x677*x678)%x679)>>x680);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x741 = UINT16_MAX;
	uint64_t x742 = 6160779826163469LLU;
	uint8_t x744 = 1U;
	uint64_t t15 = 118865LLU;

	t15 = (((x741*x742)%x743)>>x744);

	if (t15 != 8182540179861178489LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x793 = UINT32_MAX;
	int32_t x794 = 119553;
	static int64_t x795 = -1LL;
	uint16_t x796 = 57U;
	static int64_t t16 = 1129930743LL;

	t16 = (((x793*x794)%x795)>>x796);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x842 = -8;
	static uint8_t x844 = 0U;

	t17 = (((x841*x842)%x843)>>x844);

	if (t17 != 8LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x893 = -59;
	int8_t x894 = -3;
	int8_t x896 = 0;
	uint64_t t18 = 166360348LLU;

	t18 = (((x893*x894)%x895)>>x896);

	if (t18 != 177LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x905 = INT8_MIN;
	int16_t x907 = INT16_MAX;
	uint16_t x908 = 3U;
	int32_t t19 = 1;

	t19 = (((x905*x906)%x907)>>x908);

	if (t19 != 16) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1001 = INT8_MAX;
	uint16_t x1002 = UINT16_MAX;
	int32_t x1003 = INT32_MIN;
	uint8_t x1004 = 0U;
	volatile int32_t t20 = -2304323;

	t20 = (((x1001*x1002)%x1003)>>x1004);

	if (t20 != 8322945) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1053 = INT16_MIN;
	uint32_t x1054 = UINT32_MAX;
	int32_t x1056 = 3;
	static int64_t t21 = 294200606LL;

	t21 = (((x1053*x1054)%x1055)>>x1056);

	if (t21 != 4096LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1069 = 2694U;
	int8_t x1070 = 0;
	volatile int32_t x1071 = INT32_MIN;
	volatile int32_t t22 = -18785;

	t22 = (((x1069*x1070)%x1071)>>x1072);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1153 = 6789;
	int8_t x1154 = 6;
	int8_t x1156 = 0;

	t23 = (((x1153*x1154)%x1155)>>x1156);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1201 = INT64_MIN;
	uint64_t x1202 = 24001145LLU;
	int8_t x1203 = -1;
	volatile int64_t x1204 = 8LL;
	uint64_t t24 = 37444663401011LLU;

	t24 = (((x1201*x1202)%x1203)>>x1204);

	if (t24 != 36028797018963968LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1289 = 232U;
	static int8_t x1290 = INT8_MIN;
	static volatile int16_t x1291 = INT16_MAX;

	t25 = (((x1289*x1290)%x1291)>>x1292);

	if (t25 != 1537U) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x1293 = INT32_MIN;
	uint32_t x1295 = UINT32_MAX;
	uint8_t x1296 = 0U;
	uint32_t t26 = 0U;

	t26 = (((x1293*x1294)%x1295)>>x1296);

	if (t26 != 2147483648U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1313 = 337LLU;
	int32_t x1314 = INT32_MAX;
	uint16_t x1315 = UINT16_MAX;
	uint64_t t27 = 1843535068LLU;

	t27 = (((x1313*x1314)%x1315)>>x1316);

	if (t27 != 32599LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1374 = UINT8_MAX;
	uint64_t x1375 = 332721LLU;
	volatile uint64_t t28 = 395966617543LLU;

	t28 = (((x1373*x1374)%x1375)>>x1376);

	if (t28 != 12495LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1393 = 12;
	int8_t x1394 = -1;
	uint8_t x1396 = 1U;
	uint32_t t29 = 518U;

	t29 = (((x1393*x1394)%x1395)>>x1396);

	if (t29 != 27025312U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1397 = UINT8_MAX;
	uint32_t x1398 = UINT32_MAX;
	uint64_t x1399 = 2957LLU;
	volatile uint8_t x1400 = 9U;
	uint64_t t30 = 786LLU;

	t30 = (((x1397*x1398)%x1399)>>x1400);

	if (t30 != 2LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1413 = INT8_MAX;
	int16_t x1415 = INT16_MIN;
	int8_t x1416 = 7;
	static int32_t t31 = 263519585;

	t31 = (((x1413*x1414)%x1415)>>x1416);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1433 = -2;
	int64_t x1434 = -1LL;
	static int32_t x1435 = INT32_MIN;
	uint8_t x1436 = 47U;

	t32 = (((x1433*x1434)%x1435)>>x1436);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x1441 = UINT16_MAX;
	static uint64_t x1442 = 479LLU;
	int16_t x1444 = 1;
	volatile uint64_t t33 = 10279LLU;

	t33 = (((x1441*x1442)%x1443)>>x1444);

	if (t33 != 15695632LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1501 = -2;
	volatile int64_t x1503 = 2225197LL;
	int8_t x1504 = 1;
	volatile int64_t t34 = 508LL;

	t34 = (((x1501*x1502)%x1503)>>x1504);

	if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1513 = INT16_MIN;
	int8_t x1514 = -18;
	int64_t x1515 = 7668699127LL;
	static volatile uint16_t x1516 = 1U;
	volatile int64_t t35 = 0LL;

	t35 = (((x1513*x1514)%x1515)>>x1516);

	if (t35 != 294912LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1531 = INT8_MIN;
	volatile uint64_t t36 = 63LLU;

	t36 = (((x1529*x1530)%x1531)>>x1532);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1594 = 1U;
	int32_t x1595 = 13415432;
	uint8_t x1596 = 0U;
	volatile uint32_t t37 = 68U;

	t37 = (((x1593*x1594)%x1595)>>x1596);

	if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x1629 = -3470676691930906864LL;
	int8_t x1630 = -1;
	int32_t x1631 = INT32_MIN;
	uint8_t x1632 = 13U;

	t38 = (((x1629*x1630)%x1631)>>x1632);

	if (t38 != 50728LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x1745 = -15LL;
	uint32_t x1748 = 1U;
	volatile int64_t t39 = -16393631936971457LL;

	t39 = (((x1745*x1746)%x1747)>>x1748);

	if (t39 != 7LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x1834 = 16U;
	static uint32_t x1835 = 6370255U;
	uint32_t t40 = 275489U;

	t40 = (((x1833*x1834)%x1835)>>x1836);

	if (t40 != 2040U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1850 = INT64_MAX;
	int8_t x1851 = INT8_MAX;
	int16_t x1852 = 8;
	volatile uint64_t t41 = 1910LLU;

	t41 = (((x1849*x1850)%x1851)>>x1852);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x1881 = 11U;
	uint8_t x1882 = 40U;
	static uint16_t x1883 = 6U;
	int8_t x1884 = 1;

	t42 = (((x1881*x1882)%x1883)>>x1884);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1926 = -7LL;
	volatile uint64_t x1927 = 45495394837098412LLU;
	uint16_t x1928 = 1U;
	static volatile uint64_t t43 = 112LLU;

	t43 = (((x1925*x1926)%x1927)>>x1928);

	if (t43 != 10554582342347350LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1974 = UINT64_MAX;
	int8_t x1975 = -1;
	int16_t x1976 = 9;
	static uint64_t t44 = 29893935686450325LLU;

	t44 = (((x1973*x1974)%x1975)>>x1976);

	if (t44 != 36028797010575360LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x1981 = UINT64_MAX;
	int64_t x1983 = -1LL;
	uint64_t x1984 = 40LLU;

	t45 = (((x1981*x1982)%x1983)>>x1984);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1985 = -2429380337LL;
	int16_t x1986 = INT16_MAX;
	int64_t x1987 = -1LL;
	int64_t x1988 = 42LL;
	int64_t t46 = 10729072103580540LL;

	t46 = (((x1985*x1986)%x1987)>>x1988);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x2074 = 2U;
	static volatile int16_t x2075 = INT16_MIN;
	int64_t x2076 = 0LL;

	t47 = (((x2073*x2074)%x2075)>>x2076);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x2093 = -1;
	uint16_t x2094 = 3674U;
	uint32_t x2096 = 54U;
	uint64_t t48 = 59LLU;

	t48 = (((x2093*x2094)%x2095)>>x2096);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2134 = INT8_MIN;
	int64_t x2135 = INT64_MAX;
	int32_t x2136 = 0;
	int64_t t49 = -393392061256161283LL;

	t49 = (((x2133*x2134)%x2135)>>x2136);

	if (t49 != 3667737728LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x2166 = UINT8_MAX;
	int64_t x2167 = 283LL;
	uint64_t x2168 = 1LLU;
	static volatile int64_t t50 = -130379135780LL;

	t50 = (((x2165*x2166)%x2167)>>x2168);

	if (t50 != 99LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x2194 = 0;
	int8_t x2195 = INT8_MIN;
	uint32_t t51 = 3U;

	t51 = (((x2193*x2194)%x2195)>>x2196);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2209 = INT16_MIN;
	int32_t x2211 = INT32_MIN;
	static uint64_t x2212 = 2LLU;

	t52 = (((x2209*x2210)%x2211)>>x2212);

	if (t52 != 268435456) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2213 = -1;
	static int16_t x2215 = INT16_MIN;
	volatile int8_t x2216 = 8;
	volatile int32_t t53 = 151;

	t53 = (((x2213*x2214)%x2215)>>x2216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x2221 = 370U;
	static uint16_t x2222 = 3U;
	static uint8_t x2223 = 5U;
	int16_t x2224 = 5;
	volatile int32_t t54 = 449676230;

	t54 = (((x2221*x2222)%x2223)>>x2224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x2255 = 3509;
	uint32_t x2256 = 2U;

	t55 = (((x2253*x2254)%x2255)>>x2256);

	if (t55 != 35) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x2281 = 0;
	int32_t x2283 = -44;

	t56 = (((x2281*x2282)%x2283)>>x2284);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x2317 = 18;
	volatile int8_t x2318 = 0;
	int32_t t57 = 267622980;

	t57 = (((x2317*x2318)%x2319)>>x2320);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x2429 = UINT64_MAX;
	volatile uint16_t x2430 = 7U;
	uint16_t x2431 = UINT16_MAX;
	uint8_t x2432 = 0U;
	volatile uint64_t t58 = 364846477LLU;

	t58 = (((x2429*x2430)%x2431)>>x2432);

	if (t58 != 65529LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2505 = INT16_MAX;
	static int32_t x2506 = -1;
	int64_t x2507 = -1LL;

	t59 = (((x2505*x2506)%x2507)>>x2508);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2565 = -1;
	volatile int8_t x2568 = 5;
	volatile uint32_t t60 = 7042751U;

	t60 = (((x2565*x2566)%x2567)>>x2568);

	if (t60 != 134217727U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x2597 = UINT64_MAX;
	uint8_t x2600 = 25U;
	uint64_t t61 = 13457LLU;

	t61 = (((x2597*x2598)%x2599)>>x2600);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x2601 = 6;
	int16_t x2602 = INT16_MIN;
	static volatile uint8_t x2604 = 1U;
	static int32_t t62 = 344;

	t62 = (((x2601*x2602)%x2603)>>x2604);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x2609 = INT16_MIN;
	volatile int32_t x2611 = INT32_MIN;
	volatile int8_t x2612 = 43;
	int64_t t63 = -74LL;

	t63 = (((x2609*x2610)%x2611)>>x2612);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x2649 = INT8_MAX;
	static uint8_t x2650 = 5U;
	volatile int16_t x2651 = 690;
	volatile int8_t x2652 = 6;

	t64 = (((x2649*x2650)%x2651)>>x2652);

	if (t64 != 9) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x2690 = 138120159429607518LLU;
	int32_t x2691 = INT32_MAX;
	static volatile uint64_t t65 = 18341965033089LLU;

	t65 = (((x2689*x2690)%x2691)>>x2692);

	if (t65 != 399614LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x2713 = UINT32_MAX;
	static uint32_t x2714 = 1703500532U;
	int64_t x2715 = INT64_MIN;
	uint8_t x2716 = 7U;
	int64_t t66 = -12LL;

	t66 = (((x2713*x2714)%x2715)>>x2716);

	if (t66 != 20245834LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2737 = -25;
	static uint16_t x2738 = UINT16_MAX;
	uint64_t x2740 = 21LLU;
	uint64_t t67 = 1449837493142080978LLU;

	t67 = (((x2737*x2738)%x2739)>>x2740);

	if (t67 != 8796093022207LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x2813 = 3LLU;
	int32_t x2814 = 531;
	int64_t x2815 = -1LL;
	uint16_t x2816 = 0U;

	t68 = (((x2813*x2814)%x2815)>>x2816);

	if (t68 != 1593LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x2873 = 3344U;
	uint8_t x2874 = 15U;
	int32_t x2875 = INT32_MIN;
	int32_t t69 = -349466;

	t69 = (((x2873*x2874)%x2875)>>x2876);

	if (t69 != 50160) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x2938 = -1;
	int16_t x2940 = 0;
	volatile int32_t t70 = -2798279;

	t70 = (((x2937*x2938)%x2939)>>x2940);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x2961 = 0U;
	volatile uint32_t x2962 = 6922140U;
	int32_t x2963 = -1;
	uint16_t x2964 = 6U;
	uint32_t t71 = 1897191698U;

	t71 = (((x2961*x2962)%x2963)>>x2964);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x2973 = 103U;
	uint32_t x2974 = UINT32_MAX;
	uint64_t x2976 = 2LLU;

	t72 = (((x2973*x2974)%x2975)>>x2976);

	if (t72 != 8166U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x2989 = 1U;
	int16_t x2990 = 191;
	volatile uint16_t x2991 = 27U;
	uint8_t x2992 = 0U;
	static int32_t t73 = 1207429;

	t73 = (((x2989*x2990)%x2991)>>x2992);

	if (t73 != 2) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x3005 = -10006;
	volatile uint16_t x3006 = UINT16_MAX;
	uint32_t x3008 = 6U;
	int32_t t74 = 944767;

	t74 = (((x3005*x3006)%x3007)>>x3008);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x3201 = INT8_MIN;
	int32_t x3202 = -1;
	volatile uint32_t x3203 = UINT32_MAX;
	static uint8_t x3204 = 0U;
	static volatile uint32_t t75 = 8U;

	t75 = (((x3201*x3202)%x3203)>>x3204);

	if (t75 != 128U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x3265 = INT64_MAX;
	uint64_t x3266 = 399290771706LLU;
	int32_t x3267 = INT32_MIN;
	int8_t x3268 = 17;
	static volatile uint64_t t76 = 51537588125060LLU;

	t76 = (((x3265*x3266)%x3267)>>x3268);

	if (t76 != 140737485308981LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x3285 = UINT64_MAX;
	static uint32_t x3286 = 529122069U;
	static int8_t x3287 = -1;
	uint64_t t77 = 7319LLU;

	t77 = (((x3285*x3286)%x3287)>>x3288);

	if (t77 != 18446744073180429547LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x3297 = INT32_MAX;
	int8_t x3298 = 1;
	uint64_t x3300 = 1LLU;
	int32_t t78 = -1177068;

	t78 = (((x3297*x3298)%x3299)>>x3300);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x3433 = -1;
	volatile int64_t x3434 = -2008507923LL;
	static int16_t x3436 = 1;

	t79 = (((x3433*x3434)%x3435)>>x3436);

	if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x3449 = 1LLU;
	int64_t x3450 = 33790100960307707LL;
	int64_t x3451 = 13244754153135904LL;
	uint8_t x3452 = 21U;
	uint64_t t80 = 8286636260573LLU;

	t80 = (((x3449*x3450)%x3451)>>x3452);

	if (t80 != 3481193854LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x3541 = -1;
	int8_t x3542 = INT8_MIN;
	static uint8_t x3543 = UINT8_MAX;
	static volatile uint32_t x3544 = 0U;
	static volatile int32_t t81 = -10;

	t81 = (((x3541*x3542)%x3543)>>x3544);

	if (t81 != 128) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint16_t x3549 = UINT16_MAX;
	static volatile uint8_t x3550 = UINT8_MAX;
	volatile int64_t x3551 = -1LL;
	int64_t t82 = 49231400268LL;

	t82 = (((x3549*x3550)%x3551)>>x3552);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x3717 = INT8_MIN;
	uint32_t x3718 = 4181542U;
	uint8_t x3719 = UINT8_MAX;
	static uint8_t x3720 = 0U;
	volatile uint32_t t83 = 15724515U;

	t83 = (((x3717*x3718)%x3719)>>x3720);

	if (t83 != 230U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x3761 = 1222U;
	int8_t x3762 = -1;
	volatile uint16_t x3763 = UINT16_MAX;
	static uint16_t x3764 = 3U;
	volatile uint32_t t84 = 210898285U;

	t84 = (((x3761*x3762)%x3763)>>x3764);

	if (t84 != 8039U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x3818 = 0U;
	static volatile int64_t x3819 = -1592073735674001116LL;
	int8_t x3820 = 16;
	volatile int64_t t85 = 2LL;

	t85 = (((x3817*x3818)%x3819)>>x3820);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x3865 = 0;
	static int16_t x3866 = INT16_MIN;
	uint32_t x3867 = 7402U;
	uint16_t x3868 = 8U;

	t86 = (((x3865*x3866)%x3867)>>x3868);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x3945 = 21U;
	uint64_t x3946 = 1369225613032LLU;
	uint64_t x3947 = UINT64_MAX;
	uint64_t t87 = 179617850577651959LLU;

	t87 = (((x3945*x3946)%x3947)>>x3948);

	if (t87 != 28753737873672LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x3965 = -1;
	int8_t x3967 = INT8_MIN;
	uint64_t x3968 = 7LLU;

	t88 = (((x3965*x3966)%x3967)>>x3968);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x3981 = 1659;
	uint8_t x3982 = UINT8_MAX;
	uint32_t x3983 = 58U;
	int8_t x3984 = 0;
	uint32_t t89 = 14U;

	t89 = (((x3981*x3982)%x3983)>>x3984);

	if (t89 != 51U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x3993 = INT16_MAX;
	int16_t x3994 = 0;
	uint8_t x3995 = 116U;
	uint8_t x3996 = 0U;
	volatile int32_t t90 = 2476;

	t90 = (((x3993*x3994)%x3995)>>x3996);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x4021 = INT16_MAX;
	int16_t x4022 = INT16_MAX;
	volatile uint64_t x4023 = UINT64_MAX;
	uint16_t x4024 = 6U;
	uint64_t t91 = 3337263087691025588LLU;

	t91 = (((x4021*x4022)%x4023)>>x4024);

	if (t91 != 16776192LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x4053 = -13067;
	int32_t x4055 = INT32_MIN;
	int32_t t92 = -1562;

	t92 = (((x4053*x4054)%x4055)>>x4056);

	if (t92 != 14523970) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x4113 = INT16_MIN;
	volatile int64_t x4114 = -77LL;
	uint64_t x4115 = UINT64_MAX;
	int8_t x4116 = 1;

	t93 = (((x4113*x4114)%x4115)>>x4116);

	if (t93 != 1261568LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x4169 = 28U;
	int16_t x4170 = 6;
	uint8_t x4171 = UINT8_MAX;
	volatile int32_t x4172 = 1;
	int32_t t94 = -41;

	t94 = (((x4169*x4170)%x4171)>>x4172);

	if (t94 != 84) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x4185 = INT16_MIN;
	int8_t x4186 = 1;
	volatile int16_t x4187 = -1;
	volatile int32_t t95 = 204;

	t95 = (((x4185*x4186)%x4187)>>x4188);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x4197 = 14U;
	volatile uint8_t x4198 = UINT8_MAX;
	uint64_t x4199 = 904LLU;
	static volatile uint32_t x4200 = 11U;

	t96 = (((x4197*x4198)%x4199)>>x4200);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x4201 = INT32_MIN;
	uint64_t x4202 = UINT64_MAX;

	t97 = (((x4201*x4202)%x4203)>>x4204);

	if (t97 != 268435456LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x4257 = 1971;
	int16_t x4258 = INT16_MAX;
	uint32_t x4259 = UINT32_MAX;
	int8_t x4260 = 0;
	uint32_t t98 = 220U;

	t98 = (((x4257*x4258)%x4259)>>x4260);

	if (t98 != 64583757U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x4393 = -1;
	int16_t x4394 = INT16_MIN;
	static volatile uint8_t x4395 = 66U;
	uint8_t x4396 = 0U;

	t99 = (((x4393*x4394)%x4395)>>x4396);

	if (t99 != 32) { NG(); } else { ; }
	
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

