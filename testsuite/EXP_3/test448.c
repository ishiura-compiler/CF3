#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x7 = -1;
int8_t x9 = -1;
int16_t x10 = -2;
volatile uint64_t x21 = 3195595LLU;
static volatile int32_t t2 = 473837;
int8_t x60 = INT8_MAX;
int8_t x77 = INT8_MAX;
uint16_t x80 = 1U;
int64_t x126 = INT64_MIN;
int64_t x129 = -698677LL;
int64_t x131 = INT64_MIN;
volatile int32_t t8 = -903406;
static volatile int16_t x158 = INT16_MIN;
uint32_t x159 = UINT32_MAX;
int32_t x192 = INT32_MIN;
volatile int8_t x214 = INT8_MAX;
static volatile uint32_t x216 = 17U;
int32_t x225 = -651;
volatile int32_t x227 = -1;
int16_t x230 = 4988;
uint64_t x318 = 70917LLU;
static int8_t x354 = 12;
int16_t x355 = INT16_MIN;
volatile uint32_t x664 = UINT32_MAX;
uint64_t x681 = 373158882349LLU;
volatile int16_t x683 = 0;
volatile int32_t t27 = -334;
volatile int16_t x820 = 7;
volatile int32_t t28 = 136851116;
int64_t x846 = INT64_MAX;
int8_t x885 = -1;
static uint8_t x911 = 0U;
static int32_t t31 = -762355290;
int8_t x948 = 0;
int32_t x974 = INT32_MIN;
volatile int32_t t35 = 32594;
volatile int32_t x1127 = -1;
int8_t x1254 = INT8_MIN;
volatile int32_t t37 = -133317794;
uint8_t x1263 = 0U;
int32_t x1303 = -1;
static int16_t x1361 = -1;
int16_t x1389 = -3212;
int64_t x1390 = INT64_MIN;
int64_t x1533 = INT64_MIN;
static volatile int8_t x1599 = -1;
static volatile uint8_t x1604 = 1U;
uint16_t x1625 = 50U;
int32_t t50 = 18;
volatile int64_t x1701 = -1LL;
volatile uint32_t x1702 = 53222U;
int16_t x1897 = 16119;
volatile int32_t t54 = 193;
static int16_t x1914 = -1;
static int32_t t55 = 33045819;
uint8_t x1956 = 2U;
int32_t x2073 = 103287391;
uint8_t x2253 = UINT8_MAX;
static uint8_t x2254 = 1U;
uint32_t x2261 = 6U;
uint16_t x2263 = 0U;
static int16_t x2281 = INT16_MIN;
int8_t x2317 = INT8_MAX;
static int32_t x2389 = 45;
int16_t x2478 = INT16_MIN;
volatile uint32_t x2499 = 0U;
int32_t x2537 = -1;
uint8_t x2603 = 0U;
int8_t x2604 = INT8_MIN;
int32_t x2714 = INT32_MIN;
volatile int32_t t73 = -18138742;
int16_t x2797 = INT16_MIN;
static volatile uint32_t x2798 = 1U;
int32_t x2817 = INT32_MIN;
static volatile int32_t t75 = 109;
int16_t x2882 = INT16_MAX;
static volatile int32_t x2903 = -1;
int32_t x2971 = INT32_MIN;
uint16_t x3073 = 3U;
int8_t x3082 = INT8_MIN;
int32_t x3123 = 0;
volatile int16_t x3164 = INT16_MIN;
int32_t t86 = 322;
int16_t x3289 = INT16_MAX;
int16_t x3290 = -1648;
int8_t x3291 = INT8_MIN;
int8_t x3296 = -1;
volatile uint16_t x3457 = 2956U;
int64_t x3485 = INT64_MIN;
static volatile int16_t x3509 = 1;
int8_t x3555 = INT8_MIN;
volatile int16_t x3622 = INT16_MIN;


void f0(void) {
	static uint8_t x5 = UINT8_MAX;
	static int16_t x6 = -2;
	int32_t x8 = -1;
	volatile int32_t t0 = -2449;

	t0 = ((x5<x6)<<(x7*x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x11 = UINT64_MAX;
	int32_t x12 = -1;
	volatile int32_t t1 = -436614429;

	t1 = ((x9<x10)<<(x11*x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x22 = -31LL;
	int8_t x23 = -1;
	uint8_t x24 = 0U;

	t2 = ((x21<x22)<<(x23*x24));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x29 = INT32_MIN;
	volatile int64_t x30 = INT64_MAX;
	static int16_t x31 = 0;
	uint32_t x32 = UINT32_MAX;
	int32_t t3 = -130106;

	t3 = ((x29<x30)<<(x31*x32));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x57 = INT8_MIN;
	int32_t x58 = 1;
	int8_t x59 = 0;
	static int32_t t4 = 127;

	t4 = ((x57<x58)<<(x59*x60));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x78 = 518803LL;
	int8_t x79 = 0;
	static int32_t t5 = -297;

	t5 = ((x77<x78)<<(x79*x80));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x113 = 776834LL;
	uint8_t x114 = UINT8_MAX;
	int8_t x115 = -12;
	volatile int32_t x116 = -1;
	volatile int32_t t6 = -491;

	t6 = ((x113<x114)<<(x115*x116));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x125 = -1LL;
	int32_t x127 = INT32_MAX;
	int32_t x128 = 0;
	int32_t t7 = -6367492;

	t7 = ((x125<x126)<<(x127*x128));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x130 = -9;
	uint32_t x132 = 0U;

	t8 = ((x129<x130)<<(x131*x132));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x157 = UINT32_MAX;
	int8_t x160 = -1;
	volatile int32_t t9 = 24;

	t9 = ((x157<x158)<<(x159*x160));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x189 = INT8_MAX;
	static int32_t x190 = INT32_MAX;
	uint64_t x191 = 0LLU;
	volatile int32_t t10 = -25569;

	t10 = ((x189<x190)<<(x191*x192));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x213 = 303U;
	volatile int32_t x215 = 1;
	int32_t t11 = 36945;

	t11 = ((x213<x214)<<(x215*x216));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x226 = -1874LL;
	int16_t x228 = -1;
	volatile int32_t t12 = -21726128;

	t12 = ((x225<x226)<<(x227*x228));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x229 = UINT8_MAX;
	int16_t x231 = -1;
	int32_t x232 = -1;
	volatile int32_t t13 = 2777181;

	t13 = ((x229<x230)<<(x231*x232));

	if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x245 = 40;
	uint32_t x246 = UINT32_MAX;
	int64_t x247 = -1LL;
	int64_t x248 = -1LL;
	volatile int32_t t14 = 990161;

	t14 = ((x245<x246)<<(x247*x248));

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x317 = INT32_MIN;
	static int16_t x319 = INT16_MIN;
	int8_t x320 = 0;
	int32_t t15 = -6;

	t15 = ((x317<x318)<<(x319*x320));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x353 = 37U;
	int8_t x356 = 0;
	static int32_t t16 = -986647;

	t16 = ((x353<x354)<<(x355*x356));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x357 = INT64_MAX;
	uint32_t x358 = UINT32_MAX;
	static uint32_t x359 = UINT32_MAX;
	int16_t x360 = -1;
	int32_t t17 = -14;

	t17 = ((x357<x358)<<(x359*x360));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x413 = -1LL;
	int8_t x414 = -1;
	int32_t x415 = -4243;
	uint8_t x416 = 0U;
	int32_t t18 = -739439510;

	t18 = ((x413<x414)<<(x415*x416));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x437 = -1;
	uint8_t x438 = UINT8_MAX;
	int8_t x439 = -1;
	volatile int8_t x440 = -2;
	volatile int32_t t19 = 395706244;

	t19 = ((x437<x438)<<(x439*x440));

	if (t19 != 4) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x473 = 27U;
	uint16_t x474 = 1U;
	volatile int32_t x475 = -1;
	int32_t x476 = -1;
	int32_t t20 = 3179954;

	t20 = ((x473<x474)<<(x475*x476));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x597 = 4240862076211LLU;
	uint64_t x598 = 397105LLU;
	static uint8_t x599 = 3U;
	uint8_t x600 = 1U;
	volatile int32_t t21 = 47579443;

	t21 = ((x597<x598)<<(x599*x600));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x637 = -1;
	int8_t x638 = INT8_MIN;
	uint64_t x639 = UINT64_MAX;
	int8_t x640 = -19;
	volatile int32_t t22 = 43862839;

	t22 = ((x637<x638)<<(x639*x640));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x661 = UINT32_MAX;
	int32_t x662 = INT32_MIN;
	uint32_t x663 = UINT32_MAX;
	int32_t t23 = -6124380;

	t23 = ((x661<x662)<<(x663*x664));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x665 = INT32_MIN;
	uint8_t x666 = 2U;
	int8_t x667 = -4;
	volatile int16_t x668 = -1;
	static int32_t t24 = 249764444;

	t24 = ((x665<x666)<<(x667*x668));

	if (t24 != 16) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x682 = -882484;
	int64_t x684 = INT64_MAX;
	volatile int32_t t25 = 14;

	t25 = ((x681<x682)<<(x683*x684));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x749 = 141;
	static uint8_t x750 = 2U;
	int16_t x751 = 0;
	volatile uint8_t x752 = 1U;
	volatile int32_t t26 = -1;

	t26 = ((x749<x750)<<(x751*x752));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x753 = INT32_MIN;
	int32_t x754 = INT32_MIN;
	static volatile uint32_t x755 = 1U;
	int8_t x756 = 1;

	t27 = ((x753<x754)<<(x755*x756));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x817 = 3052U;
	int8_t x818 = INT8_MIN;
	uint8_t x819 = 1U;

	t28 = ((x817<x818)<<(x819*x820));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x845 = 6U;
	uint64_t x847 = 2109878964LLU;
	int64_t x848 = INT64_MIN;
	static volatile int32_t t29 = -452;

	t29 = ((x845<x846)<<(x847*x848));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x886 = INT32_MIN;
	uint8_t x887 = 1U;
	static volatile int8_t x888 = 0;
	static int32_t t30 = 102440;

	t30 = ((x885<x886)<<(x887*x888));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x909 = 279738202527069265LLU;
	int64_t x910 = 5439111187341351LL;
	int8_t x912 = INT8_MIN;

	t31 = ((x909<x910)<<(x911*x912));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x945 = UINT16_MAX;
	int32_t x946 = 3851;
	volatile uint8_t x947 = 7U;
	volatile int32_t t32 = -2332;

	t32 = ((x945<x946)<<(x947*x948));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x973 = INT8_MIN;
	uint8_t x975 = 1U;
	static int8_t x976 = 1;
	int32_t t33 = 567833393;

	t33 = ((x973<x974)<<(x975*x976));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x985 = 0U;
	int64_t x986 = INT64_MIN;
	static int32_t x987 = INT32_MIN;
	int8_t x988 = 0;
	int32_t t34 = 61170;

	t34 = ((x985<x986)<<(x987*x988));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1069 = INT32_MAX;
	int8_t x1070 = -1;
	static int8_t x1071 = -3;
	int64_t x1072 = -1LL;

	t35 = ((x1069<x1070)<<(x1071*x1072));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1125 = UINT8_MAX;
	uint8_t x1126 = UINT8_MAX;
	uint32_t x1128 = UINT32_MAX;
	int32_t t36 = -1965;

	t36 = ((x1125<x1126)<<(x1127*x1128));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x1253 = 8U;
	static int8_t x1255 = -1;
	volatile int16_t x1256 = -1;

	t37 = ((x1253<x1254)<<(x1255*x1256));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1261 = 1;
	int16_t x1262 = -1;
	static volatile uint16_t x1264 = 57U;
	volatile int32_t t38 = 3215;

	t38 = ((x1261<x1262)<<(x1263*x1264));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x1301 = INT16_MIN;
	uint16_t x1302 = 44U;
	volatile uint32_t x1304 = UINT32_MAX;
	int32_t t39 = 3;

	t39 = ((x1301<x1302)<<(x1303*x1304));

	if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x1362 = -1;
	uint8_t x1363 = 1U;
	volatile uint8_t x1364 = 4U;
	volatile int32_t t40 = -673;

	t40 = ((x1361<x1362)<<(x1363*x1364));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1391 = INT32_MIN;
	volatile uint32_t x1392 = 2U;
	int32_t t41 = 1;

	t41 = ((x1389<x1390)<<(x1391*x1392));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x1497 = 4887U;
	static int32_t x1498 = -188277220;
	volatile int8_t x1499 = -20;
	int32_t x1500 = -1;
	static int32_t t42 = -112937510;

	t42 = ((x1497<x1498)<<(x1499*x1500));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x1529 = 30U;
	int8_t x1530 = INT8_MIN;
	static int16_t x1531 = 0;
	static int16_t x1532 = INT16_MIN;
	int32_t t43 = -94;

	t43 = ((x1529<x1530)<<(x1531*x1532));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x1534 = 1U;
	uint8_t x1535 = 1U;
	uint8_t x1536 = 14U;
	static volatile int32_t t44 = 25470481;

	t44 = ((x1533<x1534)<<(x1535*x1536));

	if (t44 != 16384) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1585 = -6;
	static int64_t x1586 = -331746548393684719LL;
	int16_t x1587 = 0;
	static int8_t x1588 = INT8_MIN;
	int32_t t45 = -13589;

	t45 = ((x1585<x1586)<<(x1587*x1588));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x1597 = 21;
	int8_t x1598 = 0;
	static int8_t x1600 = -1;
	static volatile int32_t t46 = 7173;

	t46 = ((x1597<x1598)<<(x1599*x1600));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x1601 = INT32_MAX;
	uint16_t x1602 = 402U;
	int8_t x1603 = 19;
	static volatile int32_t t47 = -772325937;

	t47 = ((x1601<x1602)<<(x1603*x1604));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1613 = -1LL;
	static uint64_t x1614 = UINT64_MAX;
	int8_t x1615 = 0;
	static volatile int32_t x1616 = 12253;
	int32_t t48 = -647224123;

	t48 = ((x1613<x1614)<<(x1615*x1616));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x1626 = INT64_MIN;
	int8_t x1627 = -9;
	uint32_t x1628 = UINT32_MAX;
	int32_t t49 = 201007;

	t49 = ((x1625<x1626)<<(x1627*x1628));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x1633 = 109881U;
	int32_t x1634 = INT32_MIN;
	volatile uint64_t x1635 = 373584LLU;
	int64_t x1636 = INT64_MIN;

	t50 = ((x1633<x1634)<<(x1635*x1636));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x1685 = -66;
	static int8_t x1686 = -1;
	int64_t x1687 = -5LL;
	int8_t x1688 = -1;
	int32_t t51 = -594;

	t51 = ((x1685<x1686)<<(x1687*x1688));

	if (t51 != 32) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x1703 = -1;
	uint64_t x1704 = UINT64_MAX;
	int32_t t52 = 510;

	t52 = ((x1701<x1702)<<(x1703*x1704));

	if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x1709 = UINT8_MAX;
	uint16_t x1710 = 2U;
	int32_t x1711 = -1;
	volatile int64_t x1712 = -1LL;
	int32_t t53 = 473;

	t53 = ((x1709<x1710)<<(x1711*x1712));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x1898 = UINT16_MAX;
	int8_t x1899 = 0;
	static int64_t x1900 = -1LL;

	t54 = ((x1897<x1898)<<(x1899*x1900));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x1913 = UINT16_MAX;
	int64_t x1915 = -1LL;
	volatile int16_t x1916 = -1;

	t55 = ((x1913<x1914)<<(x1915*x1916));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x1953 = INT8_MIN;
	int64_t x1954 = INT64_MIN;
	volatile uint8_t x1955 = 4U;
	volatile int32_t t56 = 32571008;

	t56 = ((x1953<x1954)<<(x1955*x1956));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x2074 = INT64_MIN;
	int16_t x2075 = -1;
	int16_t x2076 = -7;
	volatile int32_t t57 = -180963;

	t57 = ((x2073<x2074)<<(x2075*x2076));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x2173 = 2797;
	static volatile uint64_t x2174 = UINT64_MAX;
	int32_t x2175 = INT32_MAX;
	static uint16_t x2176 = 0U;
	volatile int32_t t58 = 1;

	t58 = ((x2173<x2174)<<(x2175*x2176));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x2255 = INT32_MIN;
	int8_t x2256 = 0;
	static volatile int32_t t59 = 7;

	t59 = ((x2253<x2254)<<(x2255*x2256));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x2262 = 125270U;
	volatile uint16_t x2264 = 6U;
	int32_t t60 = -5535374;

	t60 = ((x2261<x2262)<<(x2263*x2264));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x2282 = INT16_MIN;
	uint32_t x2283 = 1U;
	volatile uint16_t x2284 = 0U;
	static int32_t t61 = 14;

	t61 = ((x2281<x2282)<<(x2283*x2284));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x2318 = 14U;
	int32_t x2319 = 0;
	int16_t x2320 = INT16_MIN;
	static volatile int32_t t62 = -28121245;

	t62 = ((x2317<x2318)<<(x2319*x2320));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x2353 = INT32_MIN;
	static int16_t x2354 = 614;
	int16_t x2355 = -1;
	volatile int64_t x2356 = -1LL;
	static int32_t t63 = 46213924;

	t63 = ((x2353<x2354)<<(x2355*x2356));

	if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x2390 = INT16_MIN;
	uint32_t x2391 = UINT32_MAX;
	uint32_t x2392 = UINT32_MAX;
	volatile int32_t t64 = 3;

	t64 = ((x2389<x2390)<<(x2391*x2392));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x2477 = -1LL;
	uint8_t x2479 = UINT8_MAX;
	uint16_t x2480 = 0U;
	int32_t t65 = -226520;

	t65 = ((x2477<x2478)<<(x2479*x2480));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2485 = -1;
	volatile uint64_t x2486 = 172LLU;
	int8_t x2487 = 0;
	volatile int64_t x2488 = INT64_MIN;
	static volatile int32_t t66 = 96452;

	t66 = ((x2485<x2486)<<(x2487*x2488));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x2497 = 158531033U;
	int8_t x2498 = -1;
	int16_t x2500 = -814;
	int32_t t67 = -2332;

	t67 = ((x2497<x2498)<<(x2499*x2500));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x2538 = -1;
	static volatile int32_t x2539 = INT32_MIN;
	uint8_t x2540 = 0U;
	volatile int32_t t68 = -3679779;

	t68 = ((x2537<x2538)<<(x2539*x2540));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x2541 = -470407838;
	uint32_t x2542 = UINT32_MAX;
	int8_t x2543 = -1;
	int8_t x2544 = -1;
	volatile int32_t t69 = 15236269;

	t69 = ((x2541<x2542)<<(x2543*x2544));

	if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x2545 = INT16_MIN;
	uint64_t x2546 = 4529974108LLU;
	static int16_t x2547 = 0;
	uint8_t x2548 = 6U;
	int32_t t70 = -1;

	t70 = ((x2545<x2546)<<(x2547*x2548));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x2585 = 0;
	int64_t x2586 = INT64_MAX;
	uint64_t x2587 = UINT64_MAX;
	static volatile uint8_t x2588 = 0U;
	volatile int32_t t71 = -21681063;

	t71 = ((x2585<x2586)<<(x2587*x2588));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x2601 = 1U;
	volatile int16_t x2602 = INT16_MIN;
	volatile int32_t t72 = -16209977;

	t72 = ((x2601<x2602)<<(x2603*x2604));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x2713 = -1;
	uint16_t x2715 = 0U;
	int32_t x2716 = INT32_MAX;

	t73 = ((x2713<x2714)<<(x2715*x2716));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x2799 = 0;
	static int32_t x2800 = INT32_MAX;
	int32_t t74 = 606;

	t74 = ((x2797<x2798)<<(x2799*x2800));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x2818 = -1;
	int32_t x2819 = 5474;
	int8_t x2820 = 0;

	t75 = ((x2817<x2818)<<(x2819*x2820));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x2881 = INT32_MAX;
	int32_t x2883 = INT32_MIN;
	uint16_t x2884 = 0U;
	volatile int32_t t76 = 15084;

	t76 = ((x2881<x2882)<<(x2883*x2884));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x2885 = 116939793U;
	int32_t x2886 = INT32_MAX;
	int32_t x2887 = 849858014;
	uint8_t x2888 = 0U;
	volatile int32_t t77 = 117494288;

	t77 = ((x2885<x2886)<<(x2887*x2888));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x2901 = -36;
	uint16_t x2902 = UINT16_MAX;
	int32_t x2904 = -1;
	volatile int32_t t78 = 40996831;

	t78 = ((x2901<x2902)<<(x2903*x2904));

	if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x2969 = 10LLU;
	static uint16_t x2970 = UINT16_MAX;
	uint32_t x2972 = 291762U;
	int32_t t79 = 64102;

	t79 = ((x2969<x2970)<<(x2971*x2972));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x3074 = 1U;
	static uint8_t x3075 = 0U;
	volatile uint8_t x3076 = UINT8_MAX;
	int32_t t80 = -2;

	t80 = ((x3073<x3074)<<(x3075*x3076));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x3081 = 46;
	uint32_t x3083 = UINT32_MAX;
	int8_t x3084 = -1;
	int32_t t81 = -1;

	t81 = ((x3081<x3082)<<(x3083*x3084));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x3101 = -178623564009569669LL;
	static int64_t x3102 = -1765796317LL;
	int16_t x3103 = -1;
	static int8_t x3104 = -1;
	int32_t t82 = 999460;

	t82 = ((x3101<x3102)<<(x3103*x3104));

	if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x3121 = 2U;
	int64_t x3122 = 263747034101510551LL;
	volatile int16_t x3124 = INT16_MAX;
	volatile int32_t t83 = -14828;

	t83 = ((x3121<x3122)<<(x3123*x3124));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x3161 = 4U;
	volatile int16_t x3162 = INT16_MIN;
	uint8_t x3163 = 0U;
	static int32_t t84 = 5455;

	t84 = ((x3161<x3162)<<(x3163*x3164));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x3205 = INT16_MIN;
	uint8_t x3206 = 107U;
	static uint32_t x3207 = 1196252U;
	static int32_t x3208 = INT32_MIN;
	static volatile int32_t t85 = -61;

	t85 = ((x3205<x3206)<<(x3207*x3208));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x3213 = 422;
	int32_t x3214 = 800;
	uint32_t x3215 = 0U;
	static int16_t x3216 = INT16_MAX;

	t86 = ((x3213<x3214)<<(x3215*x3216));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x3292 = 0;
	volatile int32_t t87 = -43346964;

	t87 = ((x3289<x3290)<<(x3291*x3292));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x3293 = INT64_MIN;
	int8_t x3294 = INT8_MAX;
	uint64_t x3295 = UINT64_MAX;
	int32_t t88 = -1;

	t88 = ((x3293<x3294)<<(x3295*x3296));

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x3397 = INT16_MIN;
	uint16_t x3398 = 0U;
	volatile int16_t x3399 = -1;
	int8_t x3400 = -19;
	int32_t t89 = 648;

	t89 = ((x3397<x3398)<<(x3399*x3400));

	if (t89 != 524288) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x3433 = 30488186680LLU;
	int8_t x3434 = -42;
	static int16_t x3435 = -1;
	int8_t x3436 = -1;
	volatile int32_t t90 = 96645287;

	t90 = ((x3433<x3434)<<(x3435*x3436));

	if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x3458 = 51114272107LLU;
	uint32_t x3459 = 0U;
	volatile uint64_t x3460 = 2316114324LLU;
	static volatile int32_t t91 = 3;

	t91 = ((x3457<x3458)<<(x3459*x3460));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x3473 = UINT32_MAX;
	uint8_t x3474 = 25U;
	int8_t x3475 = -1;
	volatile int16_t x3476 = -1;
	int32_t t92 = 8733;

	t92 = ((x3473<x3474)<<(x3475*x3476));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x3486 = INT8_MIN;
	volatile int16_t x3487 = 1;
	int16_t x3488 = 19;
	static int32_t t93 = 803;

	t93 = ((x3485<x3486)<<(x3487*x3488));

	if (t93 != 524288) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x3510 = 10;
	int32_t x3511 = -4;
	uint64_t x3512 = UINT64_MAX;
	int32_t t94 = 3;

	t94 = ((x3509<x3510)<<(x3511*x3512));

	if (t94 != 16) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x3553 = INT32_MIN;
	int32_t x3554 = INT32_MAX;
	uint8_t x3556 = 0U;
	int32_t t95 = 52;

	t95 = ((x3553<x3554)<<(x3555*x3556));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x3613 = 1U;
	static uint16_t x3614 = 21879U;
	uint32_t x3615 = 0U;
	int16_t x3616 = INT16_MIN;
	int32_t t96 = -37;

	t96 = ((x3613<x3614)<<(x3615*x3616));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x3621 = 21U;
	static int8_t x3623 = -1;
	int8_t x3624 = -1;
	volatile int32_t t97 = -1439;

	t97 = ((x3621<x3622)<<(x3623*x3624));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x3645 = INT64_MIN;
	int16_t x3646 = INT16_MIN;
	int32_t x3647 = INT32_MIN;
	int8_t x3648 = 0;
	int32_t t98 = 450936;

	t98 = ((x3645<x3646)<<(x3647*x3648));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint16_t x3677 = 0U;
	uint16_t x3678 = UINT16_MAX;
	int8_t x3679 = -1;
	int64_t x3680 = -1LL;
	volatile int32_t t99 = -175378014;

	t99 = ((x3677<x3678)<<(x3679*x3680));

	if (t99 != 2) { NG(); } else { ; }
	
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

