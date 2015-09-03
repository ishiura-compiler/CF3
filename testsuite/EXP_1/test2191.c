#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x102 = INT32_MIN;
uint8_t x104 = 0U;
int16_t x238 = 4;
volatile uint32_t x239 = UINT32_MAX;
int8_t x279 = 0;
int16_t x289 = -1;
int8_t x318 = 12;
int16_t x319 = INT16_MAX;
uint16_t x320 = 0U;
static int32_t x415 = INT32_MAX;
volatile int32_t t8 = -1188;
volatile int16_t x457 = 777;
uint32_t x599 = 207671649U;
uint16_t x615 = UINT16_MAX;
uint64_t t13 = 5164986418935LLU;
uint32_t x675 = 428455056U;
int8_t x676 = 0;
uint32_t x784 = 10U;
int32_t x1118 = INT32_MIN;
volatile uint64_t t19 = 246LLU;
int32_t x1152 = 40;
int32_t x1213 = INT32_MIN;
int64_t x1214 = 206LL;
static uint64_t x1215 = UINT64_MAX;
int8_t x1270 = INT8_MIN;
volatile uint32_t t27 = 560154U;
static uint32_t x1442 = UINT32_MAX;
uint64_t t28 = 108909214LLU;
static uint8_t x1516 = 0U;
int64_t t32 = -29879116043031LL;
int32_t x1653 = INT32_MAX;
uint8_t x1656 = 5U;
uint16_t x1707 = 0U;
static uint32_t x1708 = 0U;
int16_t x1713 = INT16_MAX;
uint8_t x1721 = UINT8_MAX;
static volatile int32_t t36 = 114333921;
int32_t x1806 = INT32_MAX;
volatile int32_t t38 = 93;
uint64_t x1842 = UINT64_MAX;
volatile uint64_t t39 = 12LLU;
volatile int32_t x1848 = 2;
int32_t x1921 = INT32_MIN;
int32_t x2047 = INT32_MIN;
uint16_t x2096 = 6U;
int32_t x2101 = INT32_MIN;
int32_t x2103 = -1;
int64_t x2302 = INT64_MAX;
volatile uint8_t x2384 = 42U;
volatile uint64_t t47 = 428LLU;
int8_t x2417 = INT8_MIN;
volatile uint64_t t49 = 247456941LLU;
volatile uint64_t x2589 = UINT64_MAX;
int8_t x2608 = 0;
volatile int8_t x2638 = -1;
uint32_t x2639 = UINT32_MAX;
uint8_t x2640 = 8U;
static int32_t x2781 = -1;
volatile int64_t t56 = 477224967521LL;
int64_t x2841 = -3091212LL;
int64_t t59 = 58LL;
volatile int16_t x2896 = 29;
volatile uint64_t t61 = 3207831856292LLU;
int8_t x2987 = 2;
uint8_t x3036 = 1U;
volatile int8_t x3098 = -1;
int64_t t67 = -54350447582LL;
static volatile uint32_t x3194 = 187U;
int64_t x3213 = -770LL;
uint64_t x3265 = 31100671486020434LLU;
int32_t x3266 = 1194;
uint16_t x3358 = 6U;
volatile int32_t t74 = -47814454;
uint16_t x3432 = 4U;
int64_t x3521 = -10824745211274LL;
int64_t x3522 = INT64_MIN;
volatile uint64_t t77 = 48260031872845LLU;
static uint32_t x3650 = 4595U;
uint8_t x3796 = 22U;
uint32_t t81 = 501017222U;
static uint16_t x3859 = 1U;
uint16_t x3928 = 3U;
int64_t x4010 = 16LL;
int64_t x4037 = INT64_MIN;
uint32_t x4040 = 9U;
uint64_t x4075 = 2090177886222216474LLU;
volatile int8_t x4165 = -1;
uint8_t x4284 = 9U;
uint8_t x4311 = 4U;
volatile uint32_t t95 = 115970859U;


void f0(void) {
	int32_t x45 = 938991863;
	uint64_t x46 = 189760536LLU;
	uint16_t x47 = UINT16_MAX;
	volatile int8_t x48 = 7;
	volatile uint64_t t0 = 1859366656902018LLU;

	t0 = (((x45^x46)^x47)>>x48);

	if (t0 != 7958838LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint16_t x101 = 3492U;
	static int8_t x103 = INT8_MIN;
	int32_t t1 = 439986879;

	t1 = (((x101^x102)^x103)>>x104);

	if (t1 != 2147480100) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x209 = -3;
	volatile int16_t x210 = 697;
	uint64_t x211 = 156280289LLU;
	volatile int8_t x212 = 15;
	uint64_t t2 = 288964LLU;

	t2 = (((x209^x210)^x211)>>x212);

	if (t2 != 562949953416542LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x237 = 0U;
	static volatile uint8_t x240 = 2U;
	volatile uint32_t t3 = 146U;

	t3 = (((x237^x238)^x239)>>x240);

	if (t3 != 1073741822U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x277 = INT64_MIN;
	int8_t x278 = -4;
	uint8_t x280 = 51U;
	volatile int64_t t4 = 4252696399946LL;

	t4 = (((x277^x278)^x279)>>x280);

	if (t4 != 4095LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x290 = UINT64_MAX;
	uint64_t x291 = UINT64_MAX;
	int16_t x292 = 1;
	uint64_t t5 = 2LLU;

	t5 = (((x289^x290)^x291)>>x292);

	if (t5 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x301 = 222601LLU;
	uint8_t x302 = UINT8_MAX;
	int16_t x303 = 6687;
	uint8_t x304 = 2U;
	uint64_t t6 = 315999180313713292LLU;

	t6 = (((x301^x302)^x303)>>x304);

	if (t6 != 57306LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x317 = UINT16_MAX;
	volatile int32_t t7 = 3766;

	t7 = (((x317^x318)^x319)>>x320);

	if (t7 != 32780) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x413 = -2;
	static int16_t x414 = INT16_MIN;
	int16_t x416 = 1;

	t8 = (((x413^x414)^x415)>>x416);

	if (t8 != 1073725440) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x458 = INT64_MIN;
	int32_t x459 = -1;
	static int32_t x460 = 4;
	static volatile int64_t t9 = 195793089808501LL;

	t9 = (((x457^x458)^x459)>>x460);

	if (t9 != 576460752303423439LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x501 = INT16_MAX;
	uint16_t x502 = UINT16_MAX;
	uint32_t x503 = UINT32_MAX;
	uint8_t x504 = 25U;
	uint32_t t10 = 1381U;

	t10 = (((x501^x502)^x503)>>x504);

	if (t10 != 127U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x577 = 36;
	uint16_t x578 = 31359U;
	int16_t x579 = INT16_MAX;
	static int16_t x580 = 29;
	int32_t t11 = 696;

	t11 = (((x577^x578)^x579)>>x580);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x597 = INT32_MAX;
	int32_t x598 = -18235654;
	uint8_t x600 = 3U;
	static volatile uint32_t t12 = 88612100U;

	t12 = (((x597^x598)^x599)>>x600);

	if (t12 != 296669708U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x613 = 24LLU;
	int8_t x614 = INT8_MAX;
	uint8_t x616 = 20U;

	t13 = (((x613^x614)^x615)>>x616);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x673 = 72021541U;
	int32_t x674 = INT32_MIN;
	volatile uint32_t t14 = 58U;

	t14 = (((x673^x674)^x675)>>x676);

	if (t14 != 2646819509U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x781 = -249;
	int32_t x782 = INT32_MAX;
	volatile uint64_t x783 = UINT64_MAX;
	static uint64_t t15 = 553830462717LLU;

	t15 = (((x781^x782)^x783)>>x784);

	if (t15 != 2097151LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x841 = -1LL;
	uint16_t x842 = 8132U;
	static volatile int8_t x843 = -1;
	int8_t x844 = 0;
	int64_t t16 = 1868154115699443LL;

	t16 = (((x841^x842)^x843)>>x844);

	if (t16 != 8132LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x881 = INT64_MAX;
	static volatile uint64_t x882 = 4968229038419LLU;
	int32_t x883 = INT32_MIN;
	static uint64_t x884 = 1LLU;
	static uint64_t t17 = 112504125LLU;

	t17 = (((x881^x882)^x883)>>x884);

	if (t17 != 4611688502516288342LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint16_t x1085 = 2U;
	static uint64_t x1086 = 3324213459LLU;
	volatile int32_t x1087 = INT32_MIN;
	volatile uint32_t x1088 = 12U;
	static uint64_t t18 = 0LLU;

	t18 = (((x1085^x1086)^x1087)>>x1088);

	if (t18 != 4503599626609207LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x1117 = UINT64_MAX;
	static volatile int64_t x1119 = INT64_MIN;
	uint8_t x1120 = 22U;

	t19 = (((x1117^x1118)^x1119)>>x1120);

	if (t19 != 2199023256063LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint64_t x1149 = 2247496LLU;
	static volatile int16_t x1150 = INT16_MIN;
	int32_t x1151 = -1;
	uint64_t t20 = 6LLU;

	t20 = (((x1149^x1150)^x1151)>>x1152);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x1201 = 1;
	int8_t x1202 = INT8_MAX;
	int8_t x1203 = INT8_MAX;
	int8_t x1204 = 1;
	volatile int32_t t21 = -69;

	t21 = (((x1201^x1202)^x1203)>>x1204);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1216 = 0U;
	volatile uint64_t t22 = 10751013LLU;

	t22 = (((x1213^x1214)^x1215)>>x1216);

	if (t22 != 2147483441LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1229 = -12;
	uint32_t x1230 = 0U;
	volatile int32_t x1231 = -1;
	volatile int32_t x1232 = 13;
	static uint32_t t23 = 14U;

	t23 = (((x1229^x1230)^x1231)>>x1232);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1237 = INT32_MIN;
	int32_t x1238 = -927111;
	static int8_t x1239 = INT8_MAX;
	uint8_t x1240 = 12U;
	int32_t t24 = 52925;

	t24 = (((x1237^x1238)^x1239)>>x1240);

	if (t24 != 524061) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1269 = 7209;
	int8_t x1271 = INT8_MIN;
	volatile uint8_t x1272 = 6U;
	volatile int32_t t25 = -400536763;

	t25 = (((x1269^x1270)^x1271)>>x1272);

	if (t25 != 112) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1309 = INT64_MIN;
	int32_t x1310 = INT32_MAX;
	int32_t x1311 = INT32_MIN;
	int16_t x1312 = 1;
	static int64_t t26 = -358583325532LL;

	t26 = (((x1309^x1310)^x1311)>>x1312);

	if (t26 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1353 = INT8_MIN;
	uint32_t x1354 = 138U;
	uint16_t x1355 = 29U;
	uint8_t x1356 = 2U;

	t27 = (((x1353^x1354)^x1355)>>x1356);

	if (t27 != 1073741765U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x1441 = 1LLU;
	int16_t x1443 = -218;
	int8_t x1444 = 0;

	t28 = (((x1441^x1442)^x1443)>>x1444);

	if (t28 != 18446744069414584536LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x1477 = 6U;
	int16_t x1478 = INT16_MIN;
	static volatile uint32_t x1479 = 303U;
	int8_t x1480 = 0;
	uint32_t t29 = 35648122U;

	t29 = (((x1477^x1478)^x1479)>>x1480);

	if (t29 != 4294934825U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1489 = INT8_MIN;
	int32_t x1490 = -700104014;
	static uint16_t x1491 = UINT16_MAX;
	static uint16_t x1492 = 3U;
	static volatile int32_t t30 = 15739843;

	t30 = (((x1489^x1490)^x1491)>>x1492);

	if (t30 != 87509081) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x1513 = 1;
	int16_t x1514 = INT16_MAX;
	int16_t x1515 = 126;
	int32_t t31 = -74;

	t31 = (((x1513^x1514)^x1515)>>x1516);

	if (t31 != 32640) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1549 = 7LL;
	static volatile int8_t x1550 = -5;
	int16_t x1551 = INT16_MIN;
	uint32_t x1552 = 0U;

	t32 = (((x1549^x1550)^x1551)>>x1552);

	if (t32 != 32764LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1654 = INT64_MIN;
	volatile int32_t x1655 = -24200895;
	volatile int64_t t33 = -21290217449LL;

	t33 = (((x1653^x1654)^x1655)>>x1656);

	if (t33 != 288230376085359157LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1705 = INT64_MIN;
	int32_t x1706 = INT32_MIN;
	volatile int64_t t34 = 1LL;

	t34 = (((x1705^x1706)^x1707)>>x1708);

	if (t34 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1714 = UINT16_MAX;
	int64_t x1715 = 518820855625055LL;
	static uint32_t x1716 = 1U;
	volatile int64_t t35 = -2299686939954LL;

	t35 = (((x1713^x1714)^x1715)>>x1716);

	if (t35 != 259410427828911LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1722 = -1;
	int32_t x1723 = INT32_MIN;
	uint8_t x1724 = 29U;

	t36 = (((x1721^x1722)^x1723)>>x1724);

	if (t36 != 3) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1805 = -1320;
	static int64_t x1807 = -17923911LL;
	int16_t x1808 = 19;
	volatile int64_t t37 = -7LL;

	t37 = (((x1805^x1806)^x1807)>>x1808);

	if (t37 != 4061LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x1829 = -1;
	int32_t x1830 = INT32_MIN;
	volatile int8_t x1831 = INT8_MAX;
	uint16_t x1832 = 5U;

	t38 = (((x1829^x1830)^x1831)>>x1832);

	if (t38 != 67108860) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1841 = -1;
	int64_t x1843 = INT64_MIN;
	uint8_t x1844 = 0U;

	t39 = (((x1841^x1842)^x1843)>>x1844);

	if (t39 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x1845 = 970U;
	int16_t x1846 = -4;
	int64_t x1847 = -1LL;
	int64_t t40 = -108662385543652LL;

	t40 = (((x1845^x1846)^x1847)>>x1848);

	if (t40 != 242LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1922 = -55;
	int8_t x1923 = 9;
	static int8_t x1924 = 0;
	int32_t t41 = -531170159;

	t41 = (((x1921^x1922)^x1923)>>x1924);

	if (t41 != 2147483584) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2045 = 5796LLU;
	int32_t x2046 = INT32_MIN;
	uint64_t x2048 = 12LLU;
	static volatile uint64_t t42 = 9556LLU;

	t42 = (((x2045^x2046)^x2047)>>x2048);

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2093 = -2;
	static volatile int16_t x2094 = -9996;
	int16_t x2095 = INT16_MAX;
	volatile int32_t t43 = -14;

	t43 = (((x2093^x2094)^x2095)>>x2096);

	if (t43 != 355) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2102 = 1;
	int8_t x2104 = 29;
	volatile int32_t t44 = -55974934;

	t44 = (((x2101^x2102)^x2103)>>x2104);

	if (t44 != 3) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2149 = INT8_MIN;
	int16_t x2150 = INT16_MIN;
	uint64_t x2151 = 742206810LLU;
	int16_t x2152 = 1;
	uint64_t t45 = 781583909395195876LLU;

	t45 = (((x2149^x2150)^x2151)>>x2152);

	if (t45 != 371108205LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2301 = -1LL;
	int32_t x2303 = INT32_MIN;
	uint64_t x2304 = 14LLU;
	static int64_t t46 = 5965538511809594LL;

	t46 = (((x2301^x2302)^x2303)>>x2304);

	if (t46 != 562949953290240LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2381 = 3821198U;
	uint64_t x2382 = UINT64_MAX;
	uint32_t x2383 = 1784989U;

	t47 = (((x2381^x2382)^x2383)>>x2384);

	if (t47 != 4194303LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x2418 = UINT64_MAX;
	volatile int64_t x2419 = 252LL;
	int64_t x2420 = 0LL;
	volatile uint64_t t48 = 89481503LLU;

	t48 = (((x2417^x2418)^x2419)>>x2420);

	if (t48 != 131LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2421 = 297879554184749603LLU;
	int32_t x2422 = 2051;
	uint16_t x2423 = UINT16_MAX;
	uint8_t x2424 = 3U;

	t49 = (((x2421^x2422)^x2423)>>x2424);

	if (t49 != 37234944273091259LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x2445 = INT32_MIN;
	static volatile uint64_t x2446 = 35367844LLU;
	volatile int8_t x2447 = INT8_MAX;
	uint16_t x2448 = 49U;
	static volatile uint64_t t50 = 18949LLU;

	t50 = (((x2445^x2446)^x2447)>>x2448);

	if (t50 != 32767LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x2457 = INT16_MAX;
	static uint16_t x2458 = 1745U;
	int32_t x2459 = 279076239;
	volatile int16_t x2460 = 1;
	int32_t t51 = -8589;

	t51 = (((x2457^x2458)^x2459)>>x2460);

	if (t51 != 139530832) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x2590 = 25U;
	volatile uint8_t x2591 = 83U;
	int8_t x2592 = 0;
	static uint64_t t52 = 4LLU;

	t52 = (((x2589^x2590)^x2591)>>x2592);

	if (t52 != 18446744073709551541LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2605 = -1;
	int8_t x2606 = -1;
	static int16_t x2607 = 462;
	static int32_t t53 = -27243012;

	t53 = (((x2605^x2606)^x2607)>>x2608);

	if (t53 != 462) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x2637 = UINT16_MAX;
	volatile uint32_t t54 = 7523665U;

	t54 = (((x2637^x2638)^x2639)>>x2640);

	if (t54 != 255U) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x2753 = UINT8_MAX;
	uint32_t x2754 = 111880U;
	int32_t x2755 = 7426996;
	uint8_t x2756 = 2U;
	volatile uint32_t t55 = 300121U;

	t55 = (((x2753^x2754)^x2755)>>x2756);

	if (t55 != 1849744U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x2782 = INT8_MIN;
	int64_t x2783 = INT64_MAX;
	static uint8_t x2784 = 0U;

	t56 = (((x2781^x2782)^x2783)>>x2784);

	if (t56 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2789 = 735793242733673147LLU;
	uint32_t x2790 = 1322683U;
	int32_t x2791 = INT32_MAX;
	uint64_t x2792 = 6LLU;
	static volatile uint64_t t57 = 1290311049815290LLU;

	t57 = (((x2789^x2790)^x2791)>>x2792);

	if (t57 != 11496769410742447LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x2842 = INT64_MIN;
	int64_t x2843 = 805994036704320280LL;
	static int16_t x2844 = 4;
	volatile int64_t t58 = 98457LL;

	t58 = (((x2841^x2842)^x2843)>>x2844);

	if (t58 != 526086125009276158LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x2845 = 102U;
	static int8_t x2846 = INT8_MIN;
	static int64_t x2847 = -1LL;
	uint8_t x2848 = 0U;

	t59 = (((x2845^x2846)^x2847)>>x2848);

	if (t59 != 25LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x2849 = 52601456U;
	int8_t x2850 = INT8_MIN;
	volatile uint64_t x2851 = 1896LLU;
	uint32_t x2852 = 7U;
	uint64_t t60 = 51784668LLU;

	t60 = (((x2849^x2850)^x2851)>>x2852);

	if (t60 != 33143477LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2893 = INT32_MAX;
	uint64_t x2894 = 4051942510454787LLU;
	uint16_t x2895 = 0U;

	t61 = (((x2893^x2894)^x2895)>>x2896);

	if (t61 != 7547328LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x2921 = 187;
	int8_t x2922 = 4;
	static uint32_t x2923 = UINT32_MAX;
	uint32_t x2924 = 3U;
	uint32_t t62 = 80U;

	t62 = (((x2921^x2922)^x2923)>>x2924);

	if (t62 != 536870888U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x2985 = INT32_MIN;
	static int64_t x2986 = INT64_MIN;
	uint16_t x2988 = 23U;
	int64_t t63 = 1LL;

	t63 = (((x2985^x2986)^x2987)>>x2988);

	if (t63 != 1099511627520LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x3025 = -1;
	uint8_t x3026 = 1U;
	volatile int8_t x3027 = INT8_MIN;
	int8_t x3028 = 1;
	int32_t t64 = 18831;

	t64 = (((x3025^x3026)^x3027)>>x3028);

	if (t64 != 63) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x3033 = UINT8_MAX;
	int8_t x3034 = INT8_MIN;
	static int8_t x3035 = -1;
	volatile int32_t t65 = -2603;

	t65 = (((x3033^x3034)^x3035)>>x3036);

	if (t65 != 64) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3061 = INT16_MAX;
	volatile uint64_t x3062 = UINT64_MAX;
	int32_t x3063 = INT32_MIN;
	volatile int8_t x3064 = 43;
	uint64_t t66 = 179709533739606494LLU;

	t66 = (((x3061^x3062)^x3063)>>x3064);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x3097 = 58U;
	int64_t x3099 = INT64_MIN;
	uint8_t x3100 = 1U;

	t67 = (((x3097^x3098)^x3099)>>x3100);

	if (t67 != 4611686018427387874LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x3193 = -1;
	uint32_t x3195 = 49729672U;
	uint16_t x3196 = 10U;
	volatile uint32_t t68 = 27503U;

	t68 = (((x3193^x3194)^x3195)>>x3196);

	if (t68 != 4145739U) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x3214 = 5U;
	static int16_t x3215 = -1;
	uint8_t x3216 = 3U;
	int64_t t69 = 926623LL;

	t69 = (((x3213^x3214)^x3215)>>x3216);

	if (t69 != 96LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x3267 = -5702634320728504LL;
	uint16_t x3268 = 41U;
	volatile uint64_t t70 = 1990209012341LLU;

	t70 = (((x3265^x3266)^x3267)>>x3268);

	if (t70 != 8372960LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x3313 = -85056;
	int64_t x3314 = -1LL;
	uint16_t x3315 = 4303U;
	uint8_t x3316 = 3U;
	volatile int64_t t71 = -181261221771LL;

	t71 = (((x3313^x3314)^x3315)>>x3316);

	if (t71 != 11166LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x3329 = 614U;
	static int32_t x3330 = 10080;
	static volatile int8_t x3331 = -10;
	int64_t x3332 = 1LL;
	uint32_t t72 = 1U;

	t72 = (((x3329^x3330)^x3331)>>x3332);

	if (t72 != 2147478904U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x3357 = 128U;
	uint8_t x3359 = 2U;
	uint8_t x3360 = 0U;
	volatile int32_t t73 = 68583276;

	t73 = (((x3357^x3358)^x3359)>>x3360);

	if (t73 != 132) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x3381 = INT32_MIN;
	volatile int16_t x3382 = INT16_MIN;
	volatile int16_t x3383 = INT16_MAX;
	volatile uint8_t x3384 = 15U;

	t74 = (((x3381^x3382)^x3383)>>x3384);

	if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x3429 = INT32_MIN;
	int32_t x3430 = 0;
	int32_t x3431 = -15302989;
	volatile int32_t t75 = -7880961;

	t75 = (((x3429^x3430)^x3431)>>x3432);

	if (t75 != 133261291) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x3523 = 1U;
	int16_t x3524 = 14;
	static volatile int64_t t76 = -264671433086300316LL;

	t76 = (((x3521^x3522)^x3523)>>x3524);

	if (t76 != 562949292731296LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x3581 = INT32_MIN;
	static int64_t x3582 = -1LL;
	uint64_t x3583 = 241096018276012814LLU;
	static uint16_t x3584 = 3U;

	t77 = (((x3581^x3582)^x3583)>>x3584);

	if (t77 != 30137002426676638LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x3589 = 847U;
	uint16_t x3590 = 25660U;
	int64_t x3591 = 82270529LL;
	int8_t x3592 = 1;
	static int64_t t78 = 227473LL;

	t78 = (((x3589^x3590)^x3591)>>x3592);

	if (t78 != 41131801LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x3649 = INT16_MIN;
	static int16_t x3651 = INT16_MIN;
	int8_t x3652 = 0;
	volatile uint32_t t79 = 40U;

	t79 = (((x3649^x3650)^x3651)>>x3652);

	if (t79 != 4595U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x3685 = INT16_MAX;
	uint64_t x3686 = 11343LLU;
	int16_t x3687 = INT16_MIN;
	uint8_t x3688 = 6U;
	volatile uint64_t t80 = 2151LLU;

	t80 = (((x3685^x3686)^x3687)>>x3688);

	if (t80 != 288230376151711566LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x3793 = INT16_MIN;
	uint32_t x3794 = UINT32_MAX;
	uint8_t x3795 = 0U;

	t81 = (((x3793^x3794)^x3795)>>x3796);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x3805 = 19475111;
	int32_t x3806 = -1;
	static int16_t x3807 = INT16_MIN;
	int8_t x3808 = 1;
	static int32_t t82 = 1;

	t82 = (((x3805^x3806)^x3807)>>x3808);

	if (t82 != 9743020) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x3857 = 407237452962405LLU;
	int8_t x3858 = INT8_MIN;
	uint16_t x3860 = 1U;
	volatile uint64_t t83 = 120554LLU;

	t83 = (((x3857^x3858)^x3859)>>x3860);

	if (t83 != 9223168418128294642LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x3925 = 129580U;
	static uint16_t x3926 = 155U;
	int8_t x3927 = INT8_MIN;
	static uint32_t t84 = 238529177U;

	t84 = (((x3925^x3926)^x3927)>>x3928);

	if (t84 != 536854694U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x3941 = 32289U;
	static int8_t x3942 = -1;
	uint64_t x3943 = 768LLU;
	uint16_t x3944 = 1U;
	uint64_t t85 = 1977784098600691LLU;

	t85 = (((x3941^x3942)^x3943)>>x3944);

	if (t85 != 9223372036854759791LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x4005 = UINT16_MAX;
	static int16_t x4006 = 94;
	static int32_t x4007 = 56326;
	uint8_t x4008 = 0U;
	int32_t t86 = 10;

	t86 = (((x4005^x4006)^x4007)>>x4008);

	if (t86 != 9127) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x4009 = 3;
	uint8_t x4011 = 20U;
	int8_t x4012 = 1;
	int64_t t87 = -25385532058417128LL;

	t87 = (((x4009^x4010)^x4011)>>x4012);

	if (t87 != 3LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x4038 = 31973LLU;
	int16_t x4039 = -1;
	volatile uint64_t t88 = 52774435560032454LLU;

	t88 = (((x4037^x4038)^x4039)>>x4040);

	if (t88 != 18014398509481921LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x4073 = INT32_MIN;
	static int16_t x4074 = -473;
	int8_t x4076 = 3;
	volatile uint64_t t89 = 6162093262050210785LLU;

	t89 = (((x4073^x4074)^x4075)>>x4076);

	if (t89 != 261272235938620007LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x4081 = -3587507571486804LL;
	int32_t x4082 = 0;
	int8_t x4083 = -1;
	uint8_t x4084 = 58U;
	volatile int64_t t90 = -1596379383462LL;

	t90 = (((x4081^x4082)^x4083)>>x4084);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x4166 = 3U;
	static volatile int32_t x4167 = -1;
	uint8_t x4168 = 11U;
	int32_t t91 = -906076287;

	t91 = (((x4165^x4166)^x4167)>>x4168);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x4209 = 1660;
	int64_t x4210 = INT64_MIN;
	static int32_t x4211 = INT32_MIN;
	volatile uint8_t x4212 = 1U;
	static int64_t t92 = -278300LL;

	t92 = (((x4209^x4210)^x4211)>>x4212);

	if (t92 != 4611686017353646910LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x4281 = INT64_MIN;
	int64_t x4282 = INT64_MAX;
	int32_t x4283 = INT32_MIN;
	int64_t t93 = -801935416LL;

	t93 = (((x4281^x4282)^x4283)>>x4284);

	if (t93 != 4194303LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x4301 = INT32_MIN;
	static uint16_t x4302 = 2U;
	int64_t x4303 = INT64_MIN;
	static uint32_t x4304 = 4U;
	int64_t t94 = 69372464LL;

	t94 = (((x4301^x4302)^x4303)>>x4304);

	if (t94 != 576460752169205760LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x4309 = INT32_MIN;
	static uint32_t x4310 = 702679901U;
	uint8_t x4312 = 0U;

	t95 = (((x4309^x4310)^x4311)>>x4312);

	if (t95 != 2850163545U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x4337 = 32599862090419344LLU;
	volatile uint16_t x4338 = 7913U;
	int32_t x4339 = INT32_MAX;
	int8_t x4340 = 54;
	uint64_t t96 = 131LLU;

	t96 = (((x4337^x4338)^x4339)>>x4340);

	if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x4373 = 91U;
	volatile int16_t x4374 = 1;
	volatile uint64_t x4375 = 2LLU;
	static uint16_t x4376 = 14U;
	static uint64_t t97 = 92836LLU;

	t97 = (((x4373^x4374)^x4375)>>x4376);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x4413 = INT16_MIN;
	uint32_t x4414 = 1472515U;
	volatile int8_t x4415 = 44;
	volatile int16_t x4416 = 30;
	static uint32_t t98 = 343672U;

	t98 = (((x4413^x4414)^x4415)>>x4416);

	if (t98 != 3U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x4461 = INT16_MAX;
	static uint16_t x4462 = UINT16_MAX;
	uint32_t x4463 = 717741U;
	int8_t x4464 = 1;
	uint32_t t99 = 110U;

	t99 = (((x4461^x4462)^x4463)>>x4464);

	if (t99 != 342486U) { NG(); } else { ; }
	
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

