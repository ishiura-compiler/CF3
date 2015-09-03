#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MAX;
static uint32_t x19 = 5U;
int32_t t1 = 559;
int16_t x158 = 5412;
uint16_t x229 = UINT16_MAX;
int16_t x230 = INT16_MAX;
volatile int32_t t6 = 2623;
int16_t x335 = 0;
int8_t x500 = 6;
static uint32_t x609 = 2697820U;
volatile int32_t x610 = INT32_MAX;
int32_t x662 = INT32_MAX;
uint8_t x699 = 5U;
static uint64_t x793 = 1517984412990507LLU;
static uint32_t x795 = 4U;
int64_t x824 = INT64_MIN;
uint64_t x850 = 68798985LLU;
volatile int32_t t19 = 196457;
static uint16_t x869 = UINT16_MAX;
static uint8_t x871 = 1U;
uint8_t x897 = 4U;
volatile int32_t t22 = -972228394;
uint64_t x1034 = 2560827LLU;
int32_t x1038 = INT32_MAX;
uint16_t x1168 = 446U;
int32_t x1199 = 2;
volatile int32_t t28 = -5;
static volatile int32_t t29 = -235543308;
static int32_t t32 = -41;
int8_t x1387 = 13;
volatile int32_t t34 = -62533;
uint16_t x1451 = 0U;
int32_t t35 = -775;
uint32_t x1474 = 244979U;
int32_t t37 = 1;
volatile int64_t x1565 = INT64_MIN;
int64_t x1637 = INT64_MIN;
int16_t x1701 = -1;
static int32_t x1801 = INT32_MIN;
uint64_t x1803 = 0LLU;
uint16_t x1804 = 4542U;
static volatile int32_t t41 = 18;
uint32_t x1950 = UINT32_MAX;
int32_t x2014 = INT32_MAX;
static volatile int32_t t48 = 7908;
int32_t x2113 = INT32_MAX;
static int64_t x2159 = 1LL;
int32_t x2197 = 45845179;
static uint64_t x2200 = UINT64_MAX;
int8_t x2229 = INT8_MIN;
uint16_t x2238 = 59U;
int16_t x2289 = -1;
int64_t x2424 = INT64_MAX;
volatile int32_t t56 = -1;
uint32_t x2459 = 2U;
int16_t x2529 = INT16_MIN;
uint16_t x2531 = 1U;
int32_t t59 = 25002070;
uint64_t x2866 = UINT64_MAX;
int8_t x2867 = 0;
int16_t x2981 = 5;
int8_t x3065 = 13;
static int8_t x3083 = 0;
int16_t x3084 = 13353;
volatile int32_t t65 = 0;
volatile int32_t t66 = 8919;
int64_t x3145 = INT64_MIN;
static volatile int8_t x3147 = 31;
volatile int8_t x3215 = 1;
volatile uint64_t x3216 = UINT64_MAX;
volatile int32_t t68 = 89864690;
int32_t t69 = -1706704;
int8_t x3259 = 0;
int8_t x3298 = INT8_MAX;
uint16_t x3338 = 0U;
int16_t x3339 = 1;
int32_t x3389 = INT32_MIN;
volatile uint32_t x3392 = UINT32_MAX;
uint8_t x3405 = 13U;
int64_t x3406 = 0LL;
volatile int32_t t75 = -27291939;
uint16_t x3515 = 1U;
uint32_t x3516 = 3749U;
static volatile int32_t t82 = 12;
volatile uint8_t x3995 = 1U;
int64_t x3996 = INT64_MIN;
uint32_t x4026 = UINT32_MAX;
volatile int32_t t85 = -1726045;
uint16_t x4049 = UINT16_MAX;
static uint8_t x4050 = 3U;
volatile int64_t x4052 = INT64_MIN;
static uint8_t x4107 = 2U;
uint8_t x4170 = UINT8_MAX;
uint16_t x4171 = 31U;
static int16_t x4333 = -356;
int8_t x4335 = 1;
int16_t x4336 = INT16_MAX;
int16_t x4444 = 396;
volatile uint32_t x4537 = UINT32_MAX;
static volatile int32_t t95 = -2;
int16_t x4573 = INT16_MIN;
int32_t t97 = -3;
volatile uint32_t x4626 = 151838064U;
static uint32_t x4679 = 9U;


void f0(void) {
	volatile int32_t x1 = -35781;
	int16_t x3 = 0;
	uint64_t x4 = 8380543417462495457LLU;
	volatile int32_t t0 = 16960916;

	t0 = ((x1+(x2>>x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x17 = 339320755U;
	int32_t x18 = INT32_MAX;
	uint64_t x20 = 6655948978609533LLU;

	t1 = ((x17+(x18>>x19))<=x20);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x117 = INT16_MAX;
	uint16_t x118 = 514U;
	uint8_t x119 = 30U;
	uint32_t x120 = 2U;
	static volatile int32_t t2 = -7665360;

	t2 = ((x117+(x118>>x119))<=x120);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x157 = INT8_MIN;
	static uint8_t x159 = 26U;
	int8_t x160 = 23;
	int32_t t3 = -2;

	t3 = ((x157+(x158>>x159))<=x160);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x231 = 22U;
	uint32_t x232 = 25U;
	int32_t t4 = 4;

	t4 = ((x229+(x230>>x231))<=x232);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x233 = -1LL;
	int64_t x234 = INT64_MAX;
	int8_t x235 = 49;
	uint16_t x236 = UINT16_MAX;
	volatile int32_t t5 = 3;

	t5 = ((x233+(x234>>x235))<=x236);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x325 = -1;
	int64_t x326 = INT64_MAX;
	volatile int8_t x327 = 1;
	static volatile uint8_t x328 = 1U;

	t6 = ((x325+(x326>>x327))<=x328);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x333 = 0;
	uint8_t x334 = UINT8_MAX;
	volatile int8_t x336 = INT8_MIN;
	volatile int32_t t7 = 744679008;

	t7 = ((x333+(x334>>x335))<=x336);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x497 = -1018;
	uint16_t x498 = 4383U;
	uint16_t x499 = 11U;
	static int32_t t8 = -3;

	t8 = ((x497+(x498>>x499))<=x500);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x557 = INT32_MIN;
	volatile uint64_t x558 = 8654866632LLU;
	uint8_t x559 = 43U;
	int64_t x560 = -1LL;
	int32_t t9 = -3314058;

	t9 = ((x557+(x558>>x559))<=x560);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x611 = 1LL;
	uint8_t x612 = 35U;
	volatile int32_t t10 = 55;

	t10 = ((x609+(x610>>x611))<=x612);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x661 = INT8_MIN;
	volatile uint32_t x663 = 27U;
	int32_t x664 = INT32_MIN;
	int32_t t11 = -7716;

	t11 = ((x661+(x662>>x663))<=x664);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x697 = 132093;
	uint16_t x698 = 3391U;
	int32_t x700 = -1;
	volatile int32_t t12 = -6627901;

	t12 = ((x697+(x698>>x699))<=x700);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x721 = -1LL;
	uint32_t x722 = 940302U;
	int8_t x723 = 12;
	uint8_t x724 = UINT8_MAX;
	volatile int32_t t13 = 370877;

	t13 = ((x721+(x722>>x723))<=x724);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x773 = INT16_MIN;
	uint64_t x774 = 34LLU;
	uint16_t x775 = 40U;
	uint64_t x776 = 614958LLU;
	volatile int32_t t14 = -13862;

	t14 = ((x773+(x774>>x775))<=x776);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x794 = INT64_MAX;
	int32_t x796 = 3;
	volatile int32_t t15 = 736;

	t15 = ((x793+(x794>>x795))<=x796);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x817 = -1;
	int64_t x818 = INT64_MAX;
	int8_t x819 = 0;
	int32_t x820 = INT32_MIN;
	volatile int32_t t16 = 1790808;

	t16 = ((x817+(x818>>x819))<=x820);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x821 = -1;
	static int16_t x822 = 0;
	int8_t x823 = 0;
	int32_t t17 = -597752982;

	t17 = ((x821+(x822>>x823))<=x824);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x849 = -1LL;
	volatile int8_t x851 = 1;
	volatile int8_t x852 = INT8_MIN;
	volatile int32_t t18 = 1253120;

	t18 = ((x849+(x850>>x851))<=x852);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x861 = INT8_MIN;
	uint64_t x862 = 10151431415LLU;
	int16_t x863 = 1;
	int16_t x864 = -1;

	t19 = ((x861+(x862>>x863))<=x864);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x870 = INT32_MAX;
	static volatile int16_t x872 = -1;
	volatile int32_t t20 = 777885;

	t20 = ((x869+(x870>>x871))<=x872);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x898 = 19;
	int8_t x899 = 4;
	int32_t x900 = INT32_MIN;
	volatile int32_t t21 = -1;

	t21 = ((x897+(x898>>x899))<=x900);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x901 = INT32_MIN;
	uint16_t x902 = 19U;
	uint8_t x903 = 1U;
	uint64_t x904 = 14897LLU;

	t22 = ((x901+(x902>>x903))<=x904);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x941 = 0;
	int8_t x942 = INT8_MAX;
	uint8_t x943 = 19U;
	int32_t x944 = INT32_MIN;
	volatile int32_t t23 = -56885606;

	t23 = ((x941+(x942>>x943))<=x944);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1033 = INT64_MIN;
	uint16_t x1035 = 8U;
	int64_t x1036 = INT64_MIN;
	int32_t t24 = 444326;

	t24 = ((x1033+(x1034>>x1035))<=x1036);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1037 = 1009217LL;
	volatile uint32_t x1039 = 6U;
	int32_t x1040 = 20414;
	int32_t t25 = -255743024;

	t25 = ((x1037+(x1038>>x1039))<=x1040);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1129 = -38916LL;
	static uint16_t x1130 = 11U;
	uint8_t x1131 = 2U;
	uint16_t x1132 = UINT16_MAX;
	int32_t t26 = -499665991;

	t26 = ((x1129+(x1130>>x1131))<=x1132);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x1165 = 77LLU;
	uint32_t x1166 = 1264U;
	uint32_t x1167 = 0U;
	int32_t t27 = -933000067;

	t27 = ((x1165+(x1166>>x1167))<=x1168);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1197 = INT16_MIN;
	volatile int64_t x1198 = INT64_MAX;
	volatile uint32_t x1200 = 18892U;

	t28 = ((x1197+(x1198>>x1199))<=x1200);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x1229 = 9U;
	int64_t x1230 = INT64_MAX;
	static uint16_t x1231 = 1U;
	volatile uint16_t x1232 = 11783U;

	t29 = ((x1229+(x1230>>x1231))<=x1232);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1289 = INT64_MAX;
	static uint16_t x1290 = 1106U;
	static volatile uint8_t x1291 = 16U;
	uint64_t x1292 = 507419636399243LLU;
	int32_t t30 = -28188;

	t30 = ((x1289+(x1290>>x1291))<=x1292);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1301 = 5911;
	static uint16_t x1302 = 0U;
	volatile uint32_t x1303 = 2U;
	int16_t x1304 = INT16_MAX;
	int32_t t31 = 245;

	t31 = ((x1301+(x1302>>x1303))<=x1304);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1349 = 856860550322LLU;
	uint64_t x1350 = 1037LLU;
	volatile int8_t x1351 = 1;
	volatile int8_t x1352 = -1;

	t32 = ((x1349+(x1350>>x1351))<=x1352);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1385 = INT8_MIN;
	static int32_t x1386 = 28898747;
	volatile int8_t x1388 = -1;
	int32_t t33 = 13275;

	t33 = ((x1385+(x1386>>x1387))<=x1388);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1433 = UINT64_MAX;
	static uint16_t x1434 = 2288U;
	volatile uint8_t x1435 = 10U;
	int64_t x1436 = -11318LL;

	t34 = ((x1433+(x1434>>x1435))<=x1436);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x1449 = 2162U;
	uint64_t x1450 = UINT64_MAX;
	uint32_t x1452 = 64904U;

	t35 = ((x1449+(x1450>>x1451))<=x1452);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1473 = 1462901786096268LLU;
	uint8_t x1475 = 20U;
	int32_t x1476 = INT32_MIN;
	int32_t t36 = 57586612;

	t36 = ((x1473+(x1474>>x1475))<=x1476);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1561 = -37931152334430846LL;
	uint64_t x1562 = 1562LLU;
	uint32_t x1563 = 0U;
	static int32_t x1564 = -3966261;

	t37 = ((x1561+(x1562>>x1563))<=x1564);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1566 = 88U;
	uint8_t x1567 = 1U;
	int32_t x1568 = INT32_MAX;
	int32_t t38 = -3;

	t38 = ((x1565+(x1566>>x1567))<=x1568);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x1638 = UINT16_MAX;
	uint16_t x1639 = 20U;
	int64_t x1640 = INT64_MIN;
	volatile int32_t t39 = -20300725;

	t39 = ((x1637+(x1638>>x1639))<=x1640);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1702 = INT8_MAX;
	int8_t x1703 = 0;
	int64_t x1704 = INT64_MIN;
	int32_t t40 = -12264349;

	t40 = ((x1701+(x1702>>x1703))<=x1704);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1802 = INT16_MAX;

	t41 = ((x1801+(x1802>>x1803))<=x1804);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x1833 = -497;
	int32_t x1834 = INT32_MAX;
	uint8_t x1835 = 4U;
	uint16_t x1836 = 5638U;
	int32_t t42 = -1;

	t42 = ((x1833+(x1834>>x1835))<=x1836);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x1857 = 3U;
	uint8_t x1858 = 23U;
	static int16_t x1859 = 0;
	int32_t x1860 = INT32_MAX;
	static volatile int32_t t43 = 57886;

	t43 = ((x1857+(x1858>>x1859))<=x1860);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x1893 = -1;
	uint64_t x1894 = 1881497655LLU;
	uint8_t x1895 = 26U;
	uint64_t x1896 = UINT64_MAX;
	static volatile int32_t t44 = -13575816;

	t44 = ((x1893+(x1894>>x1895))<=x1896);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1949 = INT32_MAX;
	volatile uint8_t x1951 = 14U;
	int8_t x1952 = INT8_MIN;
	int32_t t45 = 547;

	t45 = ((x1949+(x1950>>x1951))<=x1952);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1961 = 14271;
	uint64_t x1962 = UINT64_MAX;
	static volatile int8_t x1963 = 3;
	static uint32_t x1964 = UINT32_MAX;
	volatile int32_t t46 = -9966894;

	t46 = ((x1961+(x1962>>x1963))<=x1964);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x2013 = -480;
	int16_t x2015 = 0;
	volatile int8_t x2016 = -6;
	volatile int32_t t47 = -1;

	t47 = ((x2013+(x2014>>x2015))<=x2016);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint16_t x2025 = 214U;
	static volatile int8_t x2026 = 1;
	int32_t x2027 = 1;
	int32_t x2028 = INT32_MIN;

	t48 = ((x2025+(x2026>>x2027))<=x2028);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x2114 = 7594684U;
	volatile int64_t x2115 = 0LL;
	uint16_t x2116 = 5376U;
	int32_t t49 = 3;

	t49 = ((x2113+(x2114>>x2115))<=x2116);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2157 = -3174;
	int64_t x2158 = INT64_MAX;
	int32_t x2160 = INT32_MIN;
	static int32_t t50 = 967124825;

	t50 = ((x2157+(x2158>>x2159))<=x2160);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x2198 = 28U;
	static int16_t x2199 = 8;
	volatile int32_t t51 = 172;

	t51 = ((x2197+(x2198>>x2199))<=x2200);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2230 = 8073;
	int32_t x2231 = 4;
	int8_t x2232 = INT8_MIN;
	int32_t t52 = 673424;

	t52 = ((x2229+(x2230>>x2231))<=x2232);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x2237 = INT8_MAX;
	uint8_t x2239 = 2U;
	int8_t x2240 = INT8_MIN;
	static volatile int32_t t53 = -15731508;

	t53 = ((x2237+(x2238>>x2239))<=x2240);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x2290 = 1U;
	static int8_t x2291 = 17;
	volatile int64_t x2292 = INT64_MIN;
	volatile int32_t t54 = 4;

	t54 = ((x2289+(x2290>>x2291))<=x2292);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2401 = INT16_MIN;
	int32_t x2402 = 26;
	int8_t x2403 = 0;
	int32_t x2404 = INT32_MAX;
	volatile int32_t t55 = 518231263;

	t55 = ((x2401+(x2402>>x2403))<=x2404);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x2421 = -1;
	int8_t x2422 = 6;
	int16_t x2423 = 0;

	t56 = ((x2421+(x2422>>x2423))<=x2424);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2453 = -1;
	uint64_t x2454 = 361737594823335LLU;
	int8_t x2455 = 3;
	uint16_t x2456 = UINT16_MAX;
	static volatile int32_t t57 = -25;

	t57 = ((x2453+(x2454>>x2455))<=x2456);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x2457 = -228;
	static volatile int8_t x2458 = 1;
	volatile int8_t x2460 = INT8_MAX;
	int32_t t58 = -25418449;

	t58 = ((x2457+(x2458>>x2459))<=x2460);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x2530 = UINT16_MAX;
	uint64_t x2532 = 110LLU;

	t59 = ((x2529+(x2530>>x2531))<=x2532);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x2777 = 4380;
	static int16_t x2778 = 1359;
	uint8_t x2779 = 17U;
	int64_t x2780 = -1LL;
	static volatile int32_t t60 = 0;

	t60 = ((x2777+(x2778>>x2779))<=x2780);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x2865 = INT8_MAX;
	uint32_t x2868 = UINT32_MAX;
	volatile int32_t t61 = -10281642;

	t61 = ((x2865+(x2866>>x2867))<=x2868);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x2982 = 1U;
	int8_t x2983 = 0;
	volatile uint64_t x2984 = 571650892085098437LLU;
	int32_t t62 = 3932;

	t62 = ((x2981+(x2982>>x2983))<=x2984);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3066 = 14475U;
	static volatile int64_t x3067 = 0LL;
	int64_t x3068 = -146428429948LL;
	int32_t t63 = 139;

	t63 = ((x3065+(x3066>>x3067))<=x3068);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x3081 = -1;
	uint64_t x3082 = 1432652LLU;
	int32_t t64 = 3204;

	t64 = ((x3081+(x3082>>x3083))<=x3084);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3121 = -3919;
	int16_t x3122 = INT16_MAX;
	int8_t x3123 = 0;
	volatile uint8_t x3124 = 80U;

	t65 = ((x3121+(x3122>>x3123))<=x3124);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x3129 = -1;
	int64_t x3130 = 1487246862482LL;
	static uint16_t x3131 = 21U;
	int64_t x3132 = -1922086811LL;

	t66 = ((x3129+(x3130>>x3131))<=x3132);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x3146 = 103U;
	static int16_t x3148 = INT16_MIN;
	volatile int32_t t67 = -1457952;

	t67 = ((x3145+(x3146>>x3147))<=x3148);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x3213 = UINT64_MAX;
	int8_t x3214 = INT8_MAX;

	t68 = ((x3213+(x3214>>x3215))<=x3216);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3241 = INT8_MIN;
	uint8_t x3242 = 11U;
	int8_t x3243 = 3;
	volatile uint16_t x3244 = 803U;

	t69 = ((x3241+(x3242>>x3243))<=x3244);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x3257 = -1;
	uint32_t x3258 = UINT32_MAX;
	volatile int32_t x3260 = 79;
	int32_t t70 = 289878432;

	t70 = ((x3257+(x3258>>x3259))<=x3260);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x3277 = INT32_MIN;
	static volatile int32_t x3278 = INT32_MAX;
	int8_t x3279 = 3;
	int64_t x3280 = -784303LL;
	volatile int32_t t71 = -61331798;

	t71 = ((x3277+(x3278>>x3279))<=x3280);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x3297 = INT16_MAX;
	static volatile int16_t x3299 = 0;
	int32_t x3300 = INT32_MIN;
	volatile int32_t t72 = 219;

	t72 = ((x3297+(x3298>>x3299))<=x3300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x3337 = -4;
	uint64_t x3340 = 25424LLU;
	static volatile int32_t t73 = 1401;

	t73 = ((x3337+(x3338>>x3339))<=x3340);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x3390 = UINT32_MAX;
	uint16_t x3391 = 2U;
	int32_t t74 = -1108382;

	t74 = ((x3389+(x3390>>x3391))<=x3392);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x3407 = 7;
	int64_t x3408 = -40410783LL;

	t75 = ((x3405+(x3406>>x3407))<=x3408);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x3469 = 636;
	int16_t x3470 = 6;
	uint32_t x3471 = 1U;
	int8_t x3472 = INT8_MAX;
	volatile int32_t t76 = 182;

	t76 = ((x3469+(x3470>>x3471))<=x3472);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x3513 = -1;
	uint32_t x3514 = 788967U;
	int32_t t77 = -277930;

	t77 = ((x3513+(x3514>>x3515))<=x3516);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x3621 = INT8_MAX;
	uint8_t x3622 = UINT8_MAX;
	static int16_t x3623 = 4;
	uint8_t x3624 = UINT8_MAX;
	int32_t t78 = -403;

	t78 = ((x3621+(x3622>>x3623))<=x3624);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x3749 = INT16_MAX;
	uint8_t x3750 = 60U;
	int64_t x3751 = 0LL;
	int16_t x3752 = INT16_MIN;
	volatile int32_t t79 = 4;

	t79 = ((x3749+(x3750>>x3751))<=x3752);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x3809 = 19U;
	int64_t x3810 = 6940LL;
	static uint8_t x3811 = 1U;
	volatile uint64_t x3812 = 416701537331LLU;
	int32_t t80 = 0;

	t80 = ((x3809+(x3810>>x3811))<=x3812);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x3893 = -641590324;
	volatile uint8_t x3894 = 1U;
	volatile uint8_t x3895 = 8U;
	uint32_t x3896 = 0U;
	static volatile int32_t t81 = -23396084;

	t81 = ((x3893+(x3894>>x3895))<=x3896);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x3949 = -1;
	int16_t x3950 = 3;
	static volatile uint8_t x3951 = 26U;
	int16_t x3952 = 225;

	t82 = ((x3949+(x3950>>x3951))<=x3952);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x3981 = -1;
	uint32_t x3982 = UINT32_MAX;
	uint16_t x3983 = 20U;
	uint64_t x3984 = UINT64_MAX;
	volatile int32_t t83 = -223107;

	t83 = ((x3981+(x3982>>x3983))<=x3984);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x3993 = 3220U;
	static int32_t x3994 = INT32_MAX;
	volatile int32_t t84 = -14;

	t84 = ((x3993+(x3994>>x3995))<=x3996);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x4025 = INT16_MIN;
	volatile uint32_t x4027 = 10U;
	int32_t x4028 = INT32_MIN;

	t85 = ((x4025+(x4026>>x4027))<=x4028);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x4051 = 13LLU;
	int32_t t86 = -332065;

	t86 = ((x4049+(x4050>>x4051))<=x4052);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x4105 = -1;
	static int32_t x4106 = INT32_MAX;
	uint8_t x4108 = 1U;
	volatile int32_t t87 = -16;

	t87 = ((x4105+(x4106>>x4107))<=x4108);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x4149 = -1;
	volatile int8_t x4150 = INT8_MAX;
	volatile uint8_t x4151 = 0U;
	static uint8_t x4152 = UINT8_MAX;
	static int32_t t88 = -15495399;

	t88 = ((x4149+(x4150>>x4151))<=x4152);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x4169 = INT8_MIN;
	uint8_t x4172 = 6U;
	static volatile int32_t t89 = -8103;

	t89 = ((x4169+(x4170>>x4171))<=x4172);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x4197 = UINT64_MAX;
	volatile uint8_t x4198 = UINT8_MAX;
	uint8_t x4199 = 5U;
	int8_t x4200 = -30;
	int32_t t90 = -134894;

	t90 = ((x4197+(x4198>>x4199))<=x4200);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x4205 = INT16_MIN;
	int8_t x4206 = INT8_MAX;
	volatile int32_t x4207 = 6;
	int64_t x4208 = INT64_MIN;
	int32_t t91 = -2064;

	t91 = ((x4205+(x4206>>x4207))<=x4208);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x4334 = 420297LLU;
	volatile int32_t t92 = 359721817;

	t92 = ((x4333+(x4334>>x4335))<=x4336);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x4385 = 186818232U;
	volatile int8_t x4386 = 10;
	uint16_t x4387 = 0U;
	int32_t x4388 = INT32_MAX;
	static volatile int32_t t93 = -81;

	t93 = ((x4385+(x4386>>x4387))<=x4388);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x4441 = 0;
	uint8_t x4442 = 10U;
	uint8_t x4443 = 13U;
	int32_t t94 = 1364;

	t94 = ((x4441+(x4442>>x4443))<=x4444);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x4538 = 106623U;
	static uint32_t x4539 = 0U;
	int16_t x4540 = INT16_MAX;

	t95 = ((x4537+(x4538>>x4539))<=x4540);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x4541 = 12U;
	int8_t x4542 = 7;
	int16_t x4543 = 1;
	int8_t x4544 = INT8_MIN;
	int32_t t96 = -260;

	t96 = ((x4541+(x4542>>x4543))<=x4544);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x4574 = INT16_MAX;
	int8_t x4575 = 31;
	volatile int8_t x4576 = INT8_MAX;

	t97 = ((x4573+(x4574>>x4575))<=x4576);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x4625 = 1U;
	uint16_t x4627 = 2U;
	uint64_t x4628 = UINT64_MAX;
	static int32_t t98 = -885;

	t98 = ((x4625+(x4626>>x4627))<=x4628);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x4677 = 0;
	static uint16_t x4678 = UINT16_MAX;
	int8_t x4680 = INT8_MIN;
	int32_t t99 = -5126781;

	t99 = ((x4677+(x4678>>x4679))<=x4680);

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

