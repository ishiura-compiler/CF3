#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x74 = 3091392U;
int32_t x76 = 85;
volatile int32_t x145 = INT32_MAX;
int8_t x148 = INT8_MAX;
volatile int8_t x204 = -1;
int32_t t4 = 548114;
static volatile int8_t x225 = -1;
uint16_t x226 = UINT16_MAX;
int16_t x493 = INT16_MIN;
static int16_t x496 = INT16_MIN;
volatile int8_t x517 = -1;
uint16_t x520 = 13344U;
static volatile uint16_t x607 = 1U;
int32_t x628 = INT32_MIN;
static volatile int32_t t14 = 568;
int16_t x721 = -1;
static int8_t x756 = INT8_MAX;
int32_t x853 = 102094688;
uint64_t x885 = UINT64_MAX;
volatile int64_t x944 = -2835LL;
int64_t x1121 = -1LL;
int16_t x1149 = INT16_MIN;
uint16_t x1199 = 1U;
int32_t t27 = 329133;
int8_t x1322 = 23;
uint16_t x1505 = UINT16_MAX;
int32_t t30 = 162587871;
static int8_t x1509 = INT8_MIN;
int32_t t31 = -12618;
uint64_t x1610 = 9203578875723LLU;
int32_t x1612 = INT32_MIN;
static uint64_t x1625 = 197550761LLU;
static volatile uint8_t x1639 = 27U;
volatile uint8_t x1640 = 28U;
int32_t x1697 = -51;
static uint8_t x1699 = 3U;
int16_t x1727 = 1;
volatile int32_t x1734 = 24182;
uint8_t x1735 = 0U;
int64_t x1736 = -1LL;
uint8_t x1831 = 31U;
volatile uint32_t t39 = 42U;
static uint32_t x1839 = 20U;
uint64_t x1905 = 2LLU;
static uint64_t t41 = 63156LLU;
static uint16_t x1921 = 43U;
volatile int64_t t43 = -51797LL;
uint32_t x2041 = 388325143U;
volatile int32_t t46 = -649;
int32_t x2250 = 215;
uint32_t t47 = 4095940U;
uint32_t x2318 = 151273697U;
int32_t x2482 = INT32_MAX;
uint32_t t52 = 196U;
uint32_t x2645 = 78617209U;
uint16_t x2705 = 12993U;
uint16_t x2707 = 6U;
volatile int32_t t54 = -887625670;
static int8_t x2753 = -1;
volatile int32_t t55 = 379;
int64_t x2762 = 23200LL;
static uint16_t x2763 = 9U;
static volatile uint8_t x2780 = 6U;
int64_t t58 = 20486003LL;
static int32_t x2878 = 51;
static int32_t t59 = 2;
static int16_t x2922 = INT16_MAX;
volatile int16_t x2924 = INT16_MAX;
uint32_t x3038 = UINT32_MAX;
static uint16_t x3043 = 23U;
int64_t x3242 = 1046045726LL;
uint16_t x3342 = 3287U;
uint32_t x3343 = 1U;
int32_t t71 = 101;
int8_t x3605 = -1;
int64_t x3606 = 3288114299208385LL;
static int64_t x3617 = 404550703321869864LL;
uint32_t x3710 = UINT32_MAX;
uint64_t t75 = 95LLU;
static uint16_t x4101 = 2U;
uint16_t x4102 = 1U;
volatile uint8_t x4103 = 12U;
static int32_t x4120 = INT32_MAX;
static uint32_t x4130 = 2U;
uint64_t t79 = 930462313797705LLU;
uint8_t x4262 = 21U;
int32_t x4263 = 5;
int32_t t83 = 1274327;
static uint16_t x4386 = 1598U;
uint16_t x4387 = 3U;
static int8_t x4453 = 2;
int8_t x4579 = 27;
int32_t t87 = 181399;
volatile int32_t t89 = -1;
int64_t x4701 = 3630888300122681250LL;
static volatile int64_t t90 = -2018809661925287662LL;
int8_t x4796 = INT8_MIN;
uint16_t x4914 = 48U;
int64_t t95 = -237714LL;
int32_t x4925 = 10435827;
static uint8_t x4983 = 8U;
volatile uint64_t t97 = 1LLU;


void f0(void) {
	volatile int32_t x9 = INT32_MIN;
	uint8_t x10 = UINT8_MAX;
	static uint8_t x11 = 25U;
	int16_t x12 = INT16_MAX;
	volatile int32_t t0 = -58677;

	t0 = (x9&((x10>>x11)<=x12));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x73 = -230247647339729458LL;
	uint8_t x75 = 1U;
	int64_t t1 = 445391423592419LL;

	t1 = (x73&((x74>>x75)<=x76));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x101 = INT16_MAX;
	int8_t x102 = INT8_MAX;
	uint8_t x103 = 28U;
	uint8_t x104 = UINT8_MAX;
	volatile int32_t t2 = 3;

	t2 = (x101&((x102>>x103)<=x104));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x146 = INT64_MAX;
	uint8_t x147 = 3U;
	int32_t t3 = -9565;

	t3 = (x145&((x146>>x147)<=x148));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x201 = INT8_MIN;
	int64_t x202 = 29224515369657477LL;
	static volatile int8_t x203 = 0;

	t4 = (x201&((x202>>x203)<=x204));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x205 = INT16_MIN;
	static uint8_t x206 = UINT8_MAX;
	uint8_t x207 = 17U;
	volatile uint8_t x208 = 8U;
	static volatile int32_t t5 = 14;

	t5 = (x205&((x206>>x207)<=x208));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x227 = 0;
	volatile int64_t x228 = 13199374562597971LL;
	int32_t t6 = 45;

	t6 = (x225&((x226>>x227)<=x228));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x317 = UINT32_MAX;
	int16_t x318 = 1907;
	volatile int32_t x319 = 1;
	int32_t x320 = 516744;
	uint32_t t7 = 121U;

	t7 = (x317&((x318>>x319)<=x320));

	if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x361 = INT8_MIN;
	int8_t x362 = INT8_MAX;
	volatile uint64_t x363 = 1LLU;
	int8_t x364 = 0;
	int32_t t8 = 168;

	t8 = (x361&((x362>>x363)<=x364));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x461 = INT32_MIN;
	uint16_t x462 = UINT16_MAX;
	volatile int16_t x463 = 29;
	static int32_t x464 = INT32_MIN;
	volatile int32_t t9 = 7;

	t9 = (x461&((x462>>x463)<=x464));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x494 = 310LL;
	int16_t x495 = 0;
	static volatile int32_t t10 = 4;

	t10 = (x493&((x494>>x495)<=x496));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x518 = 15U;
	uint16_t x519 = 1U;
	volatile int32_t t11 = -3731;

	t11 = (x517&((x518>>x519)<=x520));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x577 = UINT32_MAX;
	int16_t x578 = 24;
	uint8_t x579 = 1U;
	int8_t x580 = INT8_MIN;
	uint32_t t12 = 1372041U;

	t12 = (x577&((x578>>x579)<=x580));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x605 = INT16_MIN;
	static uint64_t x606 = 30156LLU;
	int64_t x608 = INT64_MIN;
	static int32_t t13 = -837235800;

	t13 = (x605&((x606>>x607)<=x608));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x625 = -7726;
	uint64_t x626 = 6LLU;
	uint32_t x627 = 6U;

	t14 = (x625&((x626>>x627)<=x628));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x653 = -10028;
	static uint8_t x654 = 126U;
	static int8_t x655 = 5;
	static uint64_t x656 = 3883452343200163069LLU;
	int32_t t15 = -1;

	t15 = (x653&((x654>>x655)<=x656));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x722 = 1542U;
	uint16_t x723 = 2U;
	uint32_t x724 = UINT32_MAX;
	volatile int32_t t16 = 12667723;

	t16 = (x721&((x722>>x723)<=x724));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x753 = INT32_MIN;
	uint8_t x754 = 15U;
	static uint32_t x755 = 1U;
	volatile int32_t t17 = -182;

	t17 = (x753&((x754>>x755)<=x756));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x829 = 29U;
	static uint32_t x830 = 11682U;
	uint8_t x831 = 2U;
	int64_t x832 = 1269730009651LL;
	static int32_t t18 = 5931290;

	t18 = (x829&((x830>>x831)<=x832));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x854 = 30;
	static int8_t x855 = 28;
	volatile int16_t x856 = INT16_MAX;
	volatile int32_t t19 = -46;

	t19 = (x853&((x854>>x855)<=x856));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x886 = 19642U;
	uint8_t x887 = 23U;
	int16_t x888 = INT16_MIN;
	volatile uint64_t t20 = 4627754823272LLU;

	t20 = (x885&((x886>>x887)<=x888));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x941 = -6746999LL;
	int16_t x942 = INT16_MAX;
	static volatile int8_t x943 = 1;
	static int64_t t21 = 1LL;

	t21 = (x941&((x942>>x943)<=x944));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1117 = 12352028532LLU;
	static uint32_t x1118 = 2U;
	static uint16_t x1119 = 1U;
	static int64_t x1120 = INT64_MAX;
	static uint64_t t22 = 0LLU;

	t22 = (x1117&((x1118>>x1119)<=x1120));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1122 = 16276;
	uint16_t x1123 = 6U;
	int8_t x1124 = -12;
	int64_t t23 = -23590526522LL;

	t23 = (x1121&((x1122>>x1123)<=x1124));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x1150 = 3989927U;
	static uint8_t x1151 = 1U;
	uint64_t x1152 = UINT64_MAX;
	int32_t t24 = 318593;

	t24 = (x1149&((x1150>>x1151)<=x1152));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1185 = INT64_MIN;
	int8_t x1186 = 1;
	static uint16_t x1187 = 2U;
	int8_t x1188 = 1;
	volatile int64_t t25 = 195094787934326779LL;

	t25 = (x1185&((x1186>>x1187)<=x1188));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x1197 = INT32_MIN;
	volatile uint8_t x1198 = 96U;
	int32_t x1200 = INT32_MIN;
	static volatile int32_t t26 = 9023;

	t26 = (x1197&((x1198>>x1199)<=x1200));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1289 = INT32_MAX;
	int64_t x1290 = 5335364306345844LL;
	uint16_t x1291 = 4U;
	int32_t x1292 = INT32_MIN;

	t27 = (x1289&((x1290>>x1291)<=x1292));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1321 = INT8_MIN;
	volatile uint64_t x1323 = 0LLU;
	static int64_t x1324 = -451652306997064715LL;
	int32_t t28 = -4511;

	t28 = (x1321&((x1322>>x1323)<=x1324));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1333 = 15006U;
	volatile int8_t x1334 = INT8_MAX;
	int64_t x1335 = 22LL;
	int32_t x1336 = -1;
	uint32_t t29 = 18U;

	t29 = (x1333&((x1334>>x1335)<=x1336));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1506 = 1U;
	uint16_t x1507 = 20U;
	int16_t x1508 = INT16_MIN;

	t30 = (x1505&((x1506>>x1507)<=x1508));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1510 = 5388560U;
	uint8_t x1511 = 1U;
	uint64_t x1512 = 29LLU;

	t31 = (x1509&((x1510>>x1511)<=x1512));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x1609 = INT16_MIN;
	static volatile uint8_t x1611 = 2U;
	int32_t t32 = 99875;

	t32 = (x1609&((x1610>>x1611)<=x1612));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1626 = INT16_MAX;
	int16_t x1627 = 13;
	int64_t x1628 = INT64_MIN;
	volatile uint64_t t33 = 57761LLU;

	t33 = (x1625&((x1626>>x1627)<=x1628));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1637 = 1LL;
	int8_t x1638 = INT8_MAX;
	int64_t t34 = -60LL;

	t34 = (x1637&((x1638>>x1639)<=x1640));

	if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x1698 = 269845056131LLU;
	int64_t x1700 = 3370LL;
	volatile int32_t t35 = 1138;

	t35 = (x1697&((x1698>>x1699)<=x1700));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1709 = UINT32_MAX;
	volatile uint8_t x1710 = 0U;
	uint8_t x1711 = 16U;
	int8_t x1712 = 31;
	uint32_t t36 = 27U;

	t36 = (x1709&((x1710>>x1711)<=x1712));

	if (t36 != 1U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1725 = INT64_MIN;
	int64_t x1726 = 531194700LL;
	uint32_t x1728 = 184U;
	int64_t t37 = 7739170864LL;

	t37 = (x1725&((x1726>>x1727)<=x1728));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1733 = 70U;
	int32_t t38 = -4;

	t38 = (x1733&((x1734>>x1735)<=x1736));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x1829 = 52562958U;
	uint16_t x1830 = UINT16_MAX;
	static int8_t x1832 = 40;

	t39 = (x1829&((x1830>>x1831)<=x1832));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1837 = INT64_MIN;
	uint8_t x1838 = 108U;
	int64_t x1840 = -28LL;
	static int64_t t40 = -266423136771058LL;

	t40 = (x1837&((x1838>>x1839)<=x1840));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1906 = 49842675LLU;
	uint8_t x1907 = 1U;
	int64_t x1908 = 3263LL;

	t41 = (x1905&((x1906>>x1907)<=x1908));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x1922 = INT16_MAX;
	uint8_t x1923 = 1U;
	volatile uint16_t x1924 = UINT16_MAX;
	int32_t t42 = 1433829;

	t42 = (x1921&((x1922>>x1923)<=x1924));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2001 = 367405874094697LL;
	uint64_t x2002 = UINT64_MAX;
	volatile int16_t x2003 = 13;
	static uint16_t x2004 = UINT16_MAX;

	t43 = (x2001&((x2002>>x2003)<=x2004));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x2042 = 1373LLU;
	static int8_t x2043 = 1;
	volatile uint64_t x2044 = UINT64_MAX;
	volatile uint32_t t44 = 7325427U;

	t44 = (x2041&((x2042>>x2043)<=x2044));

	if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2221 = INT8_MAX;
	uint16_t x2222 = UINT16_MAX;
	uint16_t x2223 = 0U;
	static int32_t x2224 = INT32_MAX;
	volatile int32_t t45 = -52;

	t45 = (x2221&((x2222>>x2223)<=x2224));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x2237 = 546U;
	uint64_t x2238 = 12552109317765201LLU;
	static uint8_t x2239 = 9U;
	static int64_t x2240 = INT64_MIN;

	t46 = (x2237&((x2238>>x2239)<=x2240));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2249 = 1100447782U;
	static uint8_t x2251 = 1U;
	int8_t x2252 = 11;

	t47 = (x2249&((x2250>>x2251)<=x2252));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x2293 = -963218LL;
	int8_t x2294 = 1;
	static uint8_t x2295 = 4U;
	int32_t x2296 = INT32_MIN;
	volatile int64_t t48 = 480LL;

	t48 = (x2293&((x2294>>x2295)<=x2296));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2313 = -1;
	int64_t x2314 = 35007281LL;
	uint32_t x2315 = 0U;
	uint16_t x2316 = 170U;
	volatile int32_t t49 = 199;

	t49 = (x2313&((x2314>>x2315)<=x2316));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x2317 = 51411U;
	uint8_t x2319 = 0U;
	int8_t x2320 = INT8_MIN;
	static volatile uint32_t t50 = 3893U;

	t50 = (x2317&((x2318>>x2319)<=x2320));

	if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x2333 = -1;
	uint64_t x2334 = 8606401808016LLU;
	volatile int32_t x2335 = 27;
	volatile int32_t x2336 = -464852675;
	static int32_t t51 = -787105;

	t51 = (x2333&((x2334>>x2335)<=x2336));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x2481 = UINT32_MAX;
	static int8_t x2483 = 0;
	uint32_t x2484 = 22429U;

	t52 = (x2481&((x2482>>x2483)<=x2484));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x2646 = 1U;
	static volatile uint32_t x2647 = 0U;
	int8_t x2648 = INT8_MIN;
	volatile uint32_t t53 = 617U;

	t53 = (x2645&((x2646>>x2647)<=x2648));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x2706 = 53365U;
	volatile int64_t x2708 = INT64_MIN;

	t54 = (x2705&((x2706>>x2707)<=x2708));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x2754 = UINT16_MAX;
	static volatile uint16_t x2755 = 0U;
	int16_t x2756 = INT16_MAX;

	t55 = (x2753&((x2754>>x2755)<=x2756));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x2761 = -1;
	int16_t x2764 = -4789;
	int32_t t56 = -10;

	t56 = (x2761&((x2762>>x2763)<=x2764));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2777 = -1;
	int16_t x2778 = 0;
	uint16_t x2779 = 11U;
	int32_t t57 = 79939;

	t57 = (x2777&((x2778>>x2779)<=x2780));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x2829 = 119163654LL;
	int32_t x2830 = 153565838;
	uint64_t x2831 = 2LLU;
	static uint64_t x2832 = UINT64_MAX;

	t58 = (x2829&((x2830>>x2831)<=x2832));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x2877 = 12U;
	uint16_t x2879 = 17U;
	volatile int32_t x2880 = INT32_MAX;

	t59 = (x2877&((x2878>>x2879)<=x2880));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2897 = INT8_MAX;
	int8_t x2898 = INT8_MAX;
	static uint16_t x2899 = 0U;
	static int16_t x2900 = -23;
	int32_t t60 = 427;

	t60 = (x2897&((x2898>>x2899)<=x2900));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2921 = -249513;
	int8_t x2923 = 2;
	static int32_t t61 = -9;

	t61 = (x2921&((x2922>>x2923)<=x2924));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x2965 = -369;
	int64_t x2966 = 14LL;
	static uint16_t x2967 = 12U;
	int64_t x2968 = -12104LL;
	static volatile int32_t t62 = -4;

	t62 = (x2965&((x2966>>x2967)<=x2968));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x3037 = 70U;
	static int16_t x3039 = 17;
	int16_t x3040 = INT16_MIN;
	static int32_t t63 = 855;

	t63 = (x3037&((x3038>>x3039)<=x3040));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x3041 = -1;
	uint8_t x3042 = 6U;
	int64_t x3044 = INT64_MIN;
	volatile int32_t t64 = 7;

	t64 = (x3041&((x3042>>x3043)<=x3044));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x3125 = -5999333081LL;
	uint64_t x3126 = 82491LLU;
	int8_t x3127 = 21;
	int16_t x3128 = INT16_MAX;
	volatile int64_t t65 = 56LL;

	t65 = (x3125&((x3126>>x3127)<=x3128));

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x3133 = INT32_MAX;
	uint8_t x3134 = 0U;
	int8_t x3135 = 3;
	int8_t x3136 = -1;
	volatile int32_t t66 = 430877519;

	t66 = (x3133&((x3134>>x3135)<=x3136));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x3165 = INT32_MIN;
	volatile uint32_t x3166 = UINT32_MAX;
	uint32_t x3167 = 8U;
	uint16_t x3168 = 7U;
	volatile int32_t t67 = -5;

	t67 = (x3165&((x3166>>x3167)<=x3168));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x3241 = UINT64_MAX;
	static volatile int8_t x3243 = 1;
	uint16_t x3244 = UINT16_MAX;
	volatile uint64_t t68 = 660LLU;

	t68 = (x3241&((x3242>>x3243)<=x3244));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x3341 = UINT64_MAX;
	static int8_t x3344 = INT8_MIN;
	static volatile uint64_t t69 = 1943850942487512LLU;

	t69 = (x3341&((x3342>>x3343)<=x3344));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x3505 = -217712;
	static uint8_t x3506 = 35U;
	int16_t x3507 = 3;
	int32_t x3508 = INT32_MAX;
	int32_t t70 = 166925240;

	t70 = (x3505&((x3506>>x3507)<=x3508));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x3589 = INT32_MAX;
	uint16_t x3590 = 16066U;
	int32_t x3591 = 7;
	uint32_t x3592 = 42U;

	t71 = (x3589&((x3590>>x3591)<=x3592));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x3607 = 0U;
	int16_t x3608 = -1;
	int32_t t72 = 1;

	t72 = (x3605&((x3606>>x3607)<=x3608));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x3618 = UINT16_MAX;
	volatile uint8_t x3619 = 1U;
	static int8_t x3620 = INT8_MIN;
	volatile int64_t t73 = 0LL;

	t73 = (x3617&((x3618>>x3619)<=x3620));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x3709 = INT64_MAX;
	uint16_t x3711 = 1U;
	int16_t x3712 = -1;
	volatile int64_t t74 = -541LL;

	t74 = (x3709&((x3710>>x3711)<=x3712));

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x3861 = UINT64_MAX;
	int32_t x3862 = INT32_MAX;
	uint16_t x3863 = 11U;
	static int8_t x3864 = INT8_MIN;

	t75 = (x3861&((x3862>>x3863)<=x3864));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x4104 = -2;
	static int32_t t76 = 103;

	t76 = (x4101&((x4102>>x4103)<=x4104));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x4113 = -1;
	int8_t x4114 = 0;
	static volatile uint8_t x4115 = 6U;
	static uint64_t x4116 = UINT64_MAX;
	int32_t t77 = 173570;

	t77 = (x4113&((x4114>>x4115)<=x4116));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x4117 = INT16_MIN;
	uint8_t x4118 = UINT8_MAX;
	volatile int16_t x4119 = 2;
	int32_t t78 = -461451;

	t78 = (x4117&((x4118>>x4119)<=x4120));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x4129 = 1953321LLU;
	static int8_t x4131 = 1;
	uint16_t x4132 = 21827U;

	t79 = (x4129&((x4130>>x4131)<=x4132));

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x4185 = 11U;
	int64_t x4186 = INT64_MAX;
	uint16_t x4187 = 2U;
	static int64_t x4188 = INT64_MAX;
	volatile int32_t t80 = 0;

	t80 = (x4185&((x4186>>x4187)<=x4188));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x4209 = -201276;
	int16_t x4210 = 4654;
	uint64_t x4211 = 6LLU;
	uint16_t x4212 = 21U;
	int32_t t81 = 20;

	t81 = (x4209&((x4210>>x4211)<=x4212));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x4229 = -111741;
	static uint64_t x4230 = 1LLU;
	static volatile uint8_t x4231 = 3U;
	int16_t x4232 = INT16_MAX;
	volatile int32_t t82 = -1;

	t82 = (x4229&((x4230>>x4231)<=x4232));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x4261 = INT16_MAX;
	volatile uint64_t x4264 = UINT64_MAX;

	t83 = (x4261&((x4262>>x4263)<=x4264));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x4341 = INT32_MAX;
	static int32_t x4342 = 7307;
	volatile uint8_t x4343 = 25U;
	static int64_t x4344 = -1LL;
	int32_t t84 = -22;

	t84 = (x4341&((x4342>>x4343)<=x4344));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x4385 = -1;
	int16_t x4388 = INT16_MIN;
	int32_t t85 = -30079;

	t85 = (x4385&((x4386>>x4387)<=x4388));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x4454 = 45241645LLU;
	uint8_t x4455 = 1U;
	int32_t x4456 = -1;
	int32_t t86 = -12;

	t86 = (x4453&((x4454>>x4455)<=x4456));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x4577 = UINT8_MAX;
	static volatile uint16_t x4578 = 505U;
	int32_t x4580 = INT32_MIN;

	t87 = (x4577&((x4578>>x4579)<=x4580));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x4581 = -1LL;
	volatile uint8_t x4582 = UINT8_MAX;
	int8_t x4583 = 17;
	static uint8_t x4584 = UINT8_MAX;
	volatile int64_t t88 = -16883341360LL;

	t88 = (x4581&((x4582>>x4583)<=x4584));

	if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x4585 = -54;
	int16_t x4586 = INT16_MAX;
	uint16_t x4587 = 8U;
	int64_t x4588 = -1LL;

	t89 = (x4585&((x4586>>x4587)<=x4588));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x4702 = 634659095U;
	volatile uint8_t x4703 = 0U;
	int64_t x4704 = INT64_MIN;

	t90 = (x4701&((x4702>>x4703)<=x4704));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x4785 = INT32_MIN;
	uint16_t x4786 = UINT16_MAX;
	volatile int32_t x4787 = 0;
	static uint16_t x4788 = UINT16_MAX;
	int32_t t91 = -1;

	t91 = (x4785&((x4786>>x4787)<=x4788));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x4793 = INT16_MIN;
	static uint32_t x4794 = 1U;
	volatile int8_t x4795 = 30;
	int32_t t92 = -6648226;

	t92 = (x4793&((x4794>>x4795)<=x4796));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x4813 = INT8_MIN;
	static uint64_t x4814 = UINT64_MAX;
	volatile int16_t x4815 = 1;
	volatile int64_t x4816 = INT64_MIN;
	int32_t t93 = -44594;

	t93 = (x4813&((x4814>>x4815)<=x4816));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x4909 = INT32_MIN;
	uint32_t x4910 = UINT32_MAX;
	volatile uint8_t x4911 = 1U;
	uint16_t x4912 = 4U;
	int32_t t94 = -93371371;

	t94 = (x4909&((x4910>>x4911)<=x4912));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x4913 = -1LL;
	int8_t x4915 = 19;
	static volatile uint64_t x4916 = 4732381868LLU;

	t95 = (x4913&((x4914>>x4915)<=x4916));

	if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x4926 = UINT8_MAX;
	volatile int8_t x4927 = 8;
	static int16_t x4928 = -1;
	volatile int32_t t96 = -89;

	t96 = (x4925&((x4926>>x4927)<=x4928));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x4981 = 1LLU;
	uint32_t x4982 = 1042980U;
	int64_t x4984 = INT64_MIN;

	t97 = (x4981&((x4982>>x4983)<=x4984));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x4997 = 508466838U;
	uint16_t x4998 = 2U;
	int64_t x4999 = 6LL;
	int64_t x5000 = INT64_MIN;
	volatile uint32_t t98 = 2776U;

	t98 = (x4997&((x4998>>x4999)<=x5000));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x5037 = INT32_MIN;
	uint16_t x5038 = UINT16_MAX;
	int16_t x5039 = 0;
	uint8_t x5040 = UINT8_MAX;
	volatile int32_t t99 = 40;

	t99 = (x5037&((x5038>>x5039)<=x5040));

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

