#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x55 = INT8_MIN;
uint8_t x84 = 63U;
int64_t x109 = -1LL;
uint16_t x112 = 38U;
int16_t x170 = -1;
volatile int64_t t4 = 95378LL;
volatile uint8_t x384 = 1U;
int32_t t5 = -58;
uint64_t x414 = UINT64_MAX;
volatile uint64_t t7 = 85138752LLU;
int8_t x441 = INT8_MIN;
static int64_t x442 = -1LL;
volatile uint32_t t10 = 1085761307U;
int32_t x621 = INT32_MIN;
static int8_t x689 = 0;
int16_t x690 = INT16_MIN;
volatile int8_t x709 = INT8_MIN;
volatile int8_t x711 = 0;
int8_t x832 = 0;
volatile int32_t x919 = -17428121;
uint8_t x1002 = 23U;
volatile int32_t t22 = 956;
int64_t x1093 = -1LL;
uint64_t x1175 = 2369916LLU;
uint8_t x1215 = 1U;
volatile int32_t x1265 = -143628888;
volatile uint64_t t31 = 0LLU;
int64_t x1345 = 1LL;
volatile uint16_t x1388 = 2U;
uint8_t x1424 = 24U;
volatile uint64_t t37 = 0LLU;
static int64_t x1491 = -1LL;
static uint8_t x1526 = 3U;
int8_t x1534 = INT8_MIN;
int64_t x1537 = 27054143308487LL;
static volatile int64_t x1539 = -1LL;
int64_t t41 = -2167433111LL;
volatile int8_t x1553 = INT8_MIN;
volatile uint32_t t43 = 129995U;
int32_t x1578 = 3137;
uint32_t x1580 = 1U;
uint64_t x1817 = 2949LLU;
uint16_t x1818 = UINT16_MAX;
int32_t x1841 = INT32_MIN;
int16_t x1916 = 15;
uint64_t x2002 = 0LLU;
volatile uint64_t t50 = 29322399LLU;
int64_t x2165 = -1LL;
int8_t x2166 = 1;
volatile int64_t t51 = -1814667093651LL;
uint16_t x2216 = 0U;
int8_t x2402 = INT8_MAX;
static uint8_t x2404 = 1U;
volatile int16_t x2458 = 741;
static volatile int32_t t56 = 62965;
static uint16_t x2504 = 56U;
volatile uint16_t x2522 = 15721U;
int8_t x2524 = 0;
int64_t x2562 = INT64_MIN;
int16_t x2617 = INT16_MIN;
volatile int8_t x2646 = -1;
volatile int32_t t62 = -34;
int8_t x2736 = 7;
int16_t x2848 = 0;
uint8_t x2870 = UINT8_MAX;
uint16_t x2872 = 1U;
int32_t x2890 = 0;
static uint16_t x2925 = UINT16_MAX;
uint64_t x2926 = 229LLU;
int32_t x2939 = INT32_MIN;
int64_t x2974 = INT64_MIN;
uint8_t x2976 = 0U;
uint32_t x2980 = 2U;
int16_t x3088 = 7;
static int64_t x3101 = -1LL;
uint64_t t77 = 21818030976LLU;
static int16_t x3110 = INT16_MAX;
uint16_t x3111 = 11U;
static volatile int8_t x3456 = 5;
uint8_t x3520 = 0U;
volatile uint32_t x3610 = UINT32_MAX;
int8_t x3611 = INT8_MIN;
static int32_t x3625 = 9198;
volatile int64_t x3911 = -6948391615697LL;
uint8_t x4012 = 3U;
uint16_t x4044 = 12U;
volatile int16_t x4054 = 816;
static uint8_t x4056 = 3U;
volatile int8_t x4092 = 50;
volatile uint32_t x4101 = UINT32_MAX;
int8_t x4103 = INT8_MIN;
static uint32_t t93 = UINT32_MAX;
int16_t x4111 = INT16_MIN;
uint64_t x4234 = 451219454LLU;
static uint64_t t95 = 1149406273563LLU;
int64_t x4278 = INT64_MIN;
volatile int64_t t96 = 232110174275674868LL;
static int8_t x4331 = INT8_MAX;
uint8_t x4366 = 1U;
static uint8_t x4367 = 0U;
int64_t x4370 = 28895972543688928LL;
int64_t t99 = 197LL;


void f0(void) {
	int64_t x53 = INT64_MAX;
	int64_t x54 = 22579708056626480LL;
	uint8_t x56 = 0U;
	volatile int64_t t0 = -360513LL;

	t0 = (x53-((x54&x55)<<x56));

	if (t0 != 9200792328798149375LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x81 = 2080U;
	uint64_t x82 = UINT64_MAX;
	int16_t x83 = INT16_MAX;
	uint64_t t1 = 126788118441877LLU;

	t1 = (x81-((x82&x83)<<x84));

	if (t1 != 9223372036854777888LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x110 = INT8_MAX;
	volatile int64_t x111 = INT64_MIN;
	volatile int64_t t2 = 3095348LL;

	t2 = (x109-((x110&x111)<<x112));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x169 = INT32_MAX;
	int8_t x171 = INT8_MAX;
	int8_t x172 = 6;
	static volatile int32_t t3 = -2984;

	t3 = (x169-((x170&x171)<<x172));

	if (t3 != 2147475519) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x321 = -7724151302045523LL;
	static uint16_t x322 = UINT16_MAX;
	int16_t x323 = -3990;
	uint16_t x324 = 1U;

	t4 = (x321-((x322&x323)<<x324));

	if (t4 != -7724151302168615LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x381 = UINT8_MAX;
	int16_t x382 = INT16_MIN;
	int32_t x383 = 25668513;

	t5 = (x381-((x382&x383)<<x384));

	if (t5 != -51314433) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x385 = 6321U;
	int16_t x386 = 7;
	int16_t x387 = -1;
	int8_t x388 = 8;
	int32_t t6 = 1367;

	t6 = (x385-((x386&x387)<<x388));

	if (t6 != 4529) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x413 = 40U;
	static int16_t x415 = INT16_MAX;
	int64_t x416 = 0LL;

	t7 = (x413-((x414&x415)<<x416));

	if (t7 != 18446744073709518889LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x443 = 4008105U;
	int8_t x444 = 7;
	int64_t t8 = 423578LL;

	t8 = (x441-((x442&x443)<<x444));

	if (t8 != -513037568LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x465 = UINT16_MAX;
	int32_t x466 = 425;
	uint16_t x467 = UINT16_MAX;
	static volatile uint8_t x468 = 0U;
	static volatile int32_t t9 = -25849450;

	t9 = (x465-((x466&x467)<<x468));

	if (t9 != 65110) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x481 = INT32_MIN;
	volatile uint32_t x482 = 396639645U;
	volatile int16_t x483 = 3;
	uint8_t x484 = 14U;

	t10 = (x481-((x482&x483)<<x484));

	if (t10 != 2147467264U) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x529 = -822;
	uint64_t x530 = 111308LLU;
	uint64_t x531 = UINT64_MAX;
	uint8_t x532 = 0U;
	volatile uint64_t t11 = 397618424610644105LLU;

	t11 = (x529-((x530&x531)<<x532));

	if (t11 != 18446744073709439486LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x622 = -1LL;
	uint16_t x623 = 4U;
	int8_t x624 = 1;
	int64_t t12 = 6788975250068LL;

	t12 = (x621-((x622&x623)<<x624));

	if (t12 != -2147483656LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x691 = 9541U;
	static uint8_t x692 = 4U;
	static volatile int32_t t13 = 40410;

	t13 = (x689-((x690&x691)<<x692));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x697 = 980U;
	int8_t x698 = INT8_MAX;
	int32_t x699 = INT32_MIN;
	int8_t x700 = 1;
	static int32_t t14 = 7987;

	t14 = (x697-((x698&x699)<<x700));

	if (t14 != 980) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x710 = 14U;
	volatile uint16_t x712 = 20U;
	volatile uint32_t t15 = 4U;

	t15 = (x709-((x710&x711)<<x712));

	if (t15 != 4294967168U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x761 = 2U;
	volatile int16_t x762 = 14;
	int8_t x763 = INT8_MIN;
	uint64_t x764 = 5LLU;
	volatile int32_t t16 = -54;

	t16 = (x761-((x762&x763)<<x764));

	if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x825 = -54;
	static int64_t x826 = 55LL;
	static int16_t x827 = 3082;
	static int8_t x828 = 2;
	static int64_t t17 = -29438LL;

	t17 = (x825-((x826&x827)<<x828));

	if (t17 != -62LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x829 = INT32_MAX;
	volatile uint16_t x830 = UINT16_MAX;
	volatile int32_t x831 = -1;
	int32_t t18 = -5;

	t18 = (x829-((x830&x831)<<x832));

	if (t18 != 2147418112) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x849 = 1U;
	volatile int16_t x850 = 47;
	int16_t x851 = -1;
	volatile int64_t x852 = 1LL;
	volatile int32_t t19 = 375922591;

	t19 = (x849-((x850&x851)<<x852));

	if (t19 != -93) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x913 = INT16_MIN;
	uint8_t x914 = UINT8_MAX;
	static int64_t x915 = INT64_MIN;
	int16_t x916 = 3;
	volatile int64_t t20 = -12601696LL;

	t20 = (x913-((x914&x915)<<x916));

	if (t20 != -32768LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x917 = -1310884898LL;
	volatile int64_t x918 = 726LL;
	static int8_t x920 = 1;
	volatile int64_t t21 = -16402295122LL;

	t21 = (x917-((x918&x919)<<x920));

	if (t21 != -1310885038LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1001 = INT16_MAX;
	int32_t x1003 = INT32_MIN;
	uint32_t x1004 = 9U;

	t22 = (x1001-((x1002&x1003)<<x1004));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x1005 = UINT64_MAX;
	int32_t x1006 = INT32_MAX;
	uint32_t x1007 = UINT32_MAX;
	uint16_t x1008 = 7U;
	volatile uint64_t t23 = 360519033570123165LLU;

	t23 = (x1005-((x1006&x1007)<<x1008));

	if (t23 != 18446744069414584447LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1094 = INT8_MAX;
	int64_t x1095 = -1LL;
	int8_t x1096 = 0;
	volatile int64_t t24 = -19LL;

	t24 = (x1093-((x1094&x1095)<<x1096));

	if (t24 != -128LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x1153 = UINT32_MAX;
	uint8_t x1154 = 3U;
	static int16_t x1155 = 126;
	uint8_t x1156 = 2U;
	volatile uint32_t t25 = 1581U;

	t25 = (x1153-((x1154&x1155)<<x1156));

	if (t25 != 4294967287U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1173 = -1;
	int16_t x1174 = INT16_MAX;
	int16_t x1176 = 0;
	uint64_t t26 = 1154LLU;

	t26 = (x1173-((x1174&x1175)<<x1176));

	if (t26 != 18446744073709540995LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1213 = -1;
	uint8_t x1214 = 13U;
	uint8_t x1216 = 1U;
	volatile int32_t t27 = -31500559;

	t27 = (x1213-((x1214&x1215)<<x1216));

	if (t27 != -3) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1266 = INT16_MIN;
	uint64_t x1267 = 1LLU;
	int8_t x1268 = 1;
	uint64_t t28 = 3687475339801032LLU;

	t28 = (x1265-((x1266&x1267)<<x1268));

	if (t28 != 18446744073565922728LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1281 = UINT32_MAX;
	uint8_t x1282 = UINT8_MAX;
	int16_t x1283 = INT16_MIN;
	static uint64_t x1284 = 2LLU;
	volatile uint32_t t29 = UINT32_MAX;

	t29 = (x1281-((x1282&x1283)<<x1284));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1289 = INT16_MAX;
	static uint8_t x1290 = UINT8_MAX;
	volatile uint16_t x1291 = UINT16_MAX;
	static int8_t x1292 = 1;
	int32_t t30 = 89;

	t30 = (x1289-((x1290&x1291)<<x1292));

	if (t30 != 32257) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1317 = 0U;
	uint64_t x1318 = UINT64_MAX;
	uint32_t x1319 = 75909U;
	static volatile int16_t x1320 = 29;

	t31 = (x1317-((x1318&x1319)<<x1320));

	if (t31 != 18446703320375492608LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x1346 = INT64_MIN;
	int32_t x1347 = 200228314;
	int8_t x1348 = 2;
	static int64_t t32 = -7462335LL;

	t32 = (x1345-((x1346&x1347)<<x1348));

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x1357 = -1;
	uint8_t x1358 = UINT8_MAX;
	uint16_t x1359 = 56U;
	static volatile uint8_t x1360 = 3U;
	static int32_t t33 = 793221259;

	t33 = (x1357-((x1358&x1359)<<x1360));

	if (t33 != -449) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1365 = 19738667U;
	int16_t x1366 = 2470;
	volatile int32_t x1367 = 66267418;
	uint8_t x1368 = 19U;
	volatile uint32_t t34 = 293096473U;

	t34 = (x1365-((x1366&x1367)<<x1368));

	if (t34 != 3105697835U) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1385 = 10U;
	int16_t x1386 = INT16_MIN;
	volatile int64_t x1387 = 866679116223040LL;
	volatile int64_t t35 = -123915956485LL;

	t35 = (x1385-((x1386&x1387)<<x1388));

	if (t35 != -3466716464807926LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x1421 = 22201LLU;
	uint32_t x1422 = UINT32_MAX;
	uint32_t x1423 = UINT32_MAX;
	volatile uint64_t t36 = 18670402066190LLU;

	t36 = (x1421-((x1422&x1423)<<x1424));

	if (t36 != 18446744069431383737LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1481 = 129278265972686715LLU;
	uint64_t x1482 = 70311683140319143LLU;
	int8_t x1483 = 0;
	int16_t x1484 = 12;

	t37 = (x1481-((x1482&x1483)<<x1484));

	if (t37 != 129278265972686715LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x1489 = -1;
	uint8_t x1490 = 3U;
	volatile uint16_t x1492 = 2U;
	volatile int64_t t38 = 3465LL;

	t38 = (x1489-((x1490&x1491)<<x1492));

	if (t38 != -13LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x1525 = 3U;
	int16_t x1527 = -10757;
	int32_t x1528 = 15;
	volatile int32_t t39 = 1446;

	t39 = (x1525-((x1526&x1527)<<x1528));

	if (t39 != -98301) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x1533 = UINT16_MAX;
	int16_t x1535 = INT16_MAX;
	uint16_t x1536 = 1U;
	volatile int32_t t40 = 74128754;

	t40 = (x1533-((x1534&x1535)<<x1536));

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1538 = 97U;
	volatile uint8_t x1540 = 2U;

	t41 = (x1537-((x1538&x1539)<<x1540));

	if (t41 != 27054143308099LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1554 = INT8_MAX;
	static uint64_t x1555 = UINT64_MAX;
	int64_t x1556 = 1LL;
	volatile uint64_t t42 = 387381266LLU;

	t42 = (x1553-((x1554&x1555)<<x1556));

	if (t42 != 18446744073709551234LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x1565 = UINT32_MAX;
	int32_t x1566 = INT32_MAX;
	volatile int8_t x1567 = 16;
	uint8_t x1568 = 3U;

	t43 = (x1565-((x1566&x1567)<<x1568));

	if (t43 != 4294967167U) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x1577 = -7479223802492677LL;
	int32_t x1579 = INT32_MAX;
	volatile int64_t t44 = -4LL;

	t44 = (x1577-((x1578&x1579)<<x1580));

	if (t44 != -7479223802498951LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x1709 = 7199U;
	int32_t x1710 = INT32_MIN;
	uint32_t x1711 = UINT32_MAX;
	uint16_t x1712 = 7U;
	static volatile uint32_t t45 = 4U;

	t45 = (x1709-((x1710&x1711)<<x1712));

	if (t45 != 7199U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1819 = 35;
	uint8_t x1820 = 3U;
	uint64_t t46 = 14654925LLU;

	t46 = (x1817-((x1818&x1819)<<x1820));

	if (t46 != 2669LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x1842 = 34U;
	static volatile int64_t x1843 = INT64_MAX;
	volatile uint8_t x1844 = 3U;
	int64_t t47 = 3LL;

	t47 = (x1841-((x1842&x1843)<<x1844));

	if (t47 != -2147483920LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x1913 = UINT8_MAX;
	uint64_t x1914 = UINT64_MAX;
	volatile uint8_t x1915 = 7U;
	uint64_t t48 = 743617477255LLU;

	t48 = (x1913-((x1914&x1915)<<x1916));

	if (t48 != 18446744073709322495LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x1917 = INT16_MAX;
	int8_t x1918 = 10;
	int32_t x1919 = INT32_MIN;
	uint64_t x1920 = 30LLU;
	int32_t t49 = -114340230;

	t49 = (x1917-((x1918&x1919)<<x1920));

	if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x2001 = 235389249;
	static int32_t x2003 = 18;
	uint8_t x2004 = 10U;

	t50 = (x2001-((x2002&x2003)<<x2004));

	if (t50 != 235389249LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2167 = -1;
	int32_t x2168 = 1;

	t51 = (x2165-((x2166&x2167)<<x2168));

	if (t51 != -3LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x2197 = INT64_MAX;
	uint16_t x2198 = UINT16_MAX;
	int64_t x2199 = -234703177248801LL;
	volatile uint16_t x2200 = 46U;
	int64_t t52 = -823845LL;

	t52 = (x2197-((x2198&x2199)<<x2200));

	if (t52 != 8937463829260926975LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x2213 = 59U;
	static int64_t x2214 = INT64_MAX;
	int32_t x2215 = INT32_MIN;
	static int64_t t53 = 105794LL;

	t53 = (x2213-((x2214&x2215)<<x2216));

	if (t53 != -9223372034707292101LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x2369 = -1;
	static uint16_t x2370 = 7U;
	volatile int64_t x2371 = 26074314863LL;
	uint16_t x2372 = 5U;
	static int64_t t54 = -230LL;

	t54 = (x2369-((x2370&x2371)<<x2372));

	if (t54 != -225LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x2401 = -1;
	int16_t x2403 = INT16_MIN;
	static int32_t t55 = -46918;

	t55 = (x2401-((x2402&x2403)<<x2404));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x2457 = 6174U;
	int8_t x2459 = INT8_MAX;
	uint8_t x2460 = 2U;

	t56 = (x2457-((x2458&x2459)<<x2460));

	if (t56 != 5770) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x2501 = -1;
	int32_t x2502 = 9693;
	uint64_t x2503 = UINT64_MAX;
	uint64_t t57 = 3LLU;

	t57 = (x2501-((x2502&x2503)<<x2504));

	if (t57 != 2522015791327477759LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x2505 = UINT16_MAX;
	uint32_t x2506 = 17U;
	uint32_t x2507 = 13758231U;
	uint8_t x2508 = 2U;
	volatile uint32_t t58 = 17132U;

	t58 = (x2505-((x2506&x2507)<<x2508));

	if (t58 != 65467U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x2521 = 23380864;
	uint64_t x2523 = 17372101797LLU;
	volatile uint64_t t59 = 37058798LLU;

	t59 = (x2521-((x2522&x2523)<<x2524));

	if (t59 != 23365471LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x2561 = -1;
	static int64_t x2563 = INT64_MAX;
	int16_t x2564 = 1;
	volatile int64_t t60 = 640LL;

	t60 = (x2561-((x2562&x2563)<<x2564));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x2618 = 14599051993432LL;
	int8_t x2619 = INT8_MIN;
	volatile int16_t x2620 = 0;
	int64_t t61 = 2344315044195408LL;

	t61 = (x2617-((x2618&x2619)<<x2620));

	if (t61 != -14599052026112LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x2645 = INT16_MIN;
	static uint8_t x2647 = 3U;
	uint8_t x2648 = 12U;

	t62 = (x2645-((x2646&x2647)<<x2648));

	if (t62 != -45056) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x2701 = INT32_MAX;
	static uint32_t x2702 = UINT32_MAX;
	uint64_t x2703 = 13410197LLU;
	uint16_t x2704 = 1U;
	volatile uint64_t t63 = 3528337LLU;

	t63 = (x2701-((x2702&x2703)<<x2704));

	if (t63 != 2120663253LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x2733 = INT8_MAX;
	volatile int32_t x2734 = INT32_MIN;
	uint32_t x2735 = 108U;
	static uint32_t t64 = 243711737U;

	t64 = (x2733-((x2734&x2735)<<x2736));

	if (t64 != 127U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x2749 = INT16_MAX;
	int32_t x2750 = -1;
	static uint8_t x2751 = UINT8_MAX;
	uint16_t x2752 = 6U;
	int32_t t65 = -423826479;

	t65 = (x2749-((x2750&x2751)<<x2752));

	if (t65 != 16447) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x2789 = INT16_MIN;
	volatile uint64_t x2790 = 6804762452LLU;
	int8_t x2791 = -1;
	uint16_t x2792 = 3U;
	uint64_t t66 = 8660989714486086912LLU;

	t66 = (x2789-((x2790&x2791)<<x2792));

	if (t66 != 18446744019271419232LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x2845 = 13;
	int64_t x2846 = -11749648595930LL;
	int16_t x2847 = 7;
	int64_t t67 = 397269891LL;

	t67 = (x2845-((x2846&x2847)<<x2848));

	if (t67 != 7LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2865 = INT8_MIN;
	int8_t x2866 = -4;
	uint16_t x2867 = 2997U;
	static uint32_t x2868 = 0U;
	volatile int32_t t68 = 18901;

	t68 = (x2865-((x2866&x2867)<<x2868));

	if (t68 != -3124) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x2869 = INT16_MIN;
	static int32_t x2871 = 4057;
	volatile int32_t t69 = 290577;

	t69 = (x2869-((x2870&x2871)<<x2872));

	if (t69 != -33202) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x2889 = -116;
	volatile uint16_t x2891 = 437U;
	uint16_t x2892 = 4U;
	int32_t t70 = -7;

	t70 = (x2889-((x2890&x2891)<<x2892));

	if (t70 != -116) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x2927 = -2;
	uint32_t x2928 = 1U;
	uint64_t t71 = 4810591981388171LLU;

	t71 = (x2925-((x2926&x2927)<<x2928));

	if (t71 != 65079LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2937 = 56;
	volatile uint8_t x2938 = 0U;
	uint32_t x2940 = 6U;
	volatile int32_t t72 = 3786;

	t72 = (x2937-((x2938&x2939)<<x2940));

	if (t72 != 56) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x2961 = 953;
	uint8_t x2962 = 13U;
	uint32_t x2963 = 2910703U;
	static uint8_t x2964 = 0U;
	uint32_t t73 = 87053U;

	t73 = (x2961-((x2962&x2963)<<x2964));

	if (t73 != 940U) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x2973 = -1;
	int16_t x2975 = 0;
	volatile int64_t t74 = -672293LL;

	t74 = (x2973-((x2974&x2975)<<x2976));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint16_t x2977 = UINT16_MAX;
	int16_t x2978 = INT16_MAX;
	int16_t x2979 = INT16_MIN;
	volatile int32_t t75 = 14;

	t75 = (x2977-((x2978&x2979)<<x2980));

	if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x3085 = INT16_MIN;
	uint8_t x3086 = 3U;
	uint64_t x3087 = 131550652242332474LLU;
	volatile uint64_t t76 = 1368000LLU;

	t76 = (x3085-((x3086&x3087)<<x3088));

	if (t76 != 18446744073709518592LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x3102 = 6067LLU;
	uint8_t x3103 = 47U;
	uint8_t x3104 = 2U;

	t77 = (x3101-((x3102&x3103)<<x3104));

	if (t77 != 18446744073709551475LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x3109 = 43108827U;
	int64_t x3112 = 0LL;
	uint32_t t78 = 334702U;

	t78 = (x3109-((x3110&x3111)<<x3112));

	if (t78 != 43108816U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x3129 = -3;
	uint16_t x3130 = 217U;
	uint8_t x3131 = UINT8_MAX;
	uint16_t x3132 = 3U;
	static int32_t t79 = 369;

	t79 = (x3129-((x3130&x3131)<<x3132));

	if (t79 != -1739) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x3221 = -5906;
	volatile uint8_t x3222 = 9U;
	static int64_t x3223 = INT64_MIN;
	uint32_t x3224 = 14U;
	int64_t t80 = 1112626942086261LL;

	t80 = (x3221-((x3222&x3223)<<x3224));

	if (t80 != -5906LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x3277 = 15U;
	uint16_t x3278 = 1U;
	volatile int64_t x3279 = 447032090LL;
	uint16_t x3280 = 2U;
	int64_t t81 = 65LL;

	t81 = (x3277-((x3278&x3279)<<x3280));

	if (t81 != 15LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x3337 = 106;
	int32_t x3338 = -60866817;
	uint32_t x3339 = 1518872U;
	uint32_t x3340 = 3U;
	static uint32_t t82 = 0U;

	t82 = (x3337-((x3338&x3339)<<x3340));

	if (t82 != 4282818474U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x3453 = 256U;
	uint64_t x3454 = UINT64_MAX;
	static int32_t x3455 = INT32_MAX;
	uint64_t t83 = 45885730LLU;

	t83 = (x3453-((x3454&x3455)<<x3456));

	if (t83 != 18446744004990075168LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x3517 = UINT32_MAX;
	int64_t x3518 = -1LL;
	uint32_t x3519 = 180972122U;
	static volatile int64_t t84 = 17026211455LL;

	t84 = (x3517-((x3518&x3519)<<x3520));

	if (t84 != 4113995173LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x3609 = INT32_MIN;
	static int32_t x3612 = 0;
	uint32_t t85 = 2316U;

	t85 = (x3609-((x3610&x3611)<<x3612));

	if (t85 != 2147483776U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x3626 = -1;
	uint8_t x3627 = 3U;
	volatile uint32_t x3628 = 6U;
	static volatile int32_t t86 = 781;

	t86 = (x3625-((x3626&x3627)<<x3628));

	if (t86 != 9006) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x3877 = INT64_MAX;
	static volatile uint64_t x3878 = 10632119109472LLU;
	int32_t x3879 = INT32_MAX;
	uint8_t x3880 = 18U;
	uint64_t t87 = 2746663258791183022LLU;

	t87 = (x3877-((x3878&x3879)<<x3880));

	if (t87 != 9222828074456842239LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x3909 = -1;
	int32_t x3910 = 1076;
	uint32_t x3912 = 35U;
	int64_t t88 = 2LL;

	t88 = (x3909-((x3910&x3911)<<x3912));

	if (t88 != -1236950581249LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x4009 = -504906254LL;
	uint64_t x4010 = 626991221LLU;
	uint64_t x4011 = 3689LLU;
	uint64_t t89 = 7830666105091556LLU;

	t89 = (x4009-((x4010&x4011)<<x4012));

	if (t89 != 18446744073204644586LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x4041 = UINT16_MAX;
	volatile int16_t x4042 = -18;
	static uint16_t x4043 = 0U;
	static volatile int32_t t90 = -2557;

	t90 = (x4041-((x4042&x4043)<<x4044));

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint8_t x4053 = 3U;
	int64_t x4055 = -1LL;
	volatile int64_t t91 = 260155LL;

	t91 = (x4053-((x4054&x4055)<<x4056));

	if (t91 != -6525LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x4089 = -1;
	uint64_t x4090 = 3852421096353817393LLU;
	int8_t x4091 = INT8_MIN;
	uint64_t t92 = 2LLU;

	t92 = (x4089-((x4090&x4091)<<x4092));

	if (t92 != 8358680908399640575LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x4102 = 30;
	volatile uint8_t x4104 = 20U;

	t93 = (x4101-((x4102&x4103)<<x4104));

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x4109 = 4U;
	uint32_t x4110 = 47998285U;
	volatile uint16_t x4112 = 0U;
	uint32_t t94 = 0U;

	t94 = (x4109-((x4110&x4111)<<x4112));

	if (t94 != 4246994948U) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x4233 = 5555325U;
	volatile int32_t x4235 = INT32_MIN;
	uint64_t x4236 = 4LLU;

	t95 = (x4233-((x4234&x4235)<<x4236));

	if (t95 != 5555325LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x4277 = INT16_MIN;
	volatile uint16_t x4279 = 15726U;
	static uint32_t x4280 = 4U;

	t96 = (x4277-((x4278&x4279)<<x4280));

	if (t96 != -32768LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x4329 = -1LL;
	int8_t x4330 = INT8_MIN;
	int8_t x4332 = 0;
	static volatile int64_t t97 = -6857714880142LL;

	t97 = (x4329-((x4330&x4331)<<x4332));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x4365 = 1U;
	static uint16_t x4368 = 9U;
	volatile uint32_t t98 = 142491261U;

	t98 = (x4365-((x4366&x4367)<<x4368));

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x4369 = UINT32_MAX;
	int8_t x4371 = -43;
	int16_t x4372 = 0;

	t99 = (x4369-((x4370&x4371)<<x4372));

	if (t99 != -28895968248721601LL) { NG(); } else { ; }
	
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

