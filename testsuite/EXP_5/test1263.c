#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x29 = 422U;
volatile int16_t x30 = INT16_MAX;
int16_t x31 = -1;
uint16_t x98 = 149U;
static int8_t x131 = INT8_MIN;
int64_t t3 = 1045231246499LL;
int64_t x135 = -1LL;
int8_t x138 = INT8_MIN;
volatile uint16_t x139 = 17092U;
static uint32_t x166 = 21213274U;
static uint32_t x168 = 0U;
int32_t x235 = INT32_MAX;
uint16_t x317 = 18U;
int64_t x354 = INT64_MAX;
static volatile uint8_t x356 = 1U;
uint16_t x434 = UINT16_MAX;
volatile int32_t x443 = INT32_MAX;
int16_t x563 = INT16_MIN;
static int8_t x564 = 1;
uint8_t x640 = 1U;
uint64_t x762 = 8773293377801LLU;
int8_t x781 = -1;
static uint8_t x784 = 3U;
static int16_t x815 = INT16_MIN;
int16_t x829 = INT16_MIN;
int32_t t18 = -7474;
uint64_t x883 = 491668677769242LLU;
uint8_t x884 = 26U;
int64_t t20 = 1963232035204613624LL;
uint32_t x950 = UINT32_MAX;
int32_t x1054 = INT32_MIN;
int8_t x1091 = INT8_MIN;
static int32_t x1197 = INT32_MIN;
static volatile int16_t x1222 = 7;
int8_t x1303 = INT8_MIN;
int32_t x1304 = 0;
volatile int16_t x1355 = INT16_MAX;
int8_t x1389 = INT8_MAX;
int64_t x1407 = INT64_MAX;
int64_t x1455 = INT64_MIN;
static uint8_t x1456 = 9U;
int32_t t35 = 5667;
int8_t x1566 = INT8_MIN;
static uint16_t x1568 = 4U;
int64_t t37 = INT64_MIN;
uint32_t x1658 = UINT32_MAX;
int8_t x1659 = 6;
static int32_t x1669 = -1;
volatile int32_t t41 = -30;
volatile int32_t t42 = 255;
static volatile int32_t t43 = -60;
volatile int16_t x1824 = 3;
volatile uint16_t x1877 = UINT16_MAX;
volatile int32_t t45 = 1389;
static volatile int8_t x1907 = INT8_MAX;
int8_t x1908 = 10;
volatile int32_t t47 = -6472;
volatile int64_t x1969 = -15280LL;
int64_t x1970 = INT64_MIN;
uint32_t x2040 = 12U;
uint16_t x2095 = UINT16_MAX;
int8_t x2131 = INT8_MIN;
volatile int8_t x2166 = -1;
uint32_t x2168 = 1U;
volatile uint64_t x2184 = 2LLU;
int8_t x2206 = INT8_MIN;
static volatile uint8_t x2208 = 7U;
volatile int32_t t55 = -3946;
int64_t x2261 = INT64_MIN;
volatile uint16_t x2263 = 188U;
uint8_t x2340 = 22U;
uint32_t t59 = 2259324U;
int64_t x2353 = -1LL;
static volatile int16_t x2355 = -1;
volatile int64_t t62 = 3508947779380762LL;
uint32_t x2420 = 3U;
uint8_t x2492 = 13U;
int8_t x2607 = INT8_MIN;
int8_t x2608 = 1;
uint64_t x2749 = UINT64_MAX;
volatile int8_t x2752 = 1;
uint64_t t72 = UINT64_MAX;
uint8_t x2775 = UINT8_MAX;
volatile uint16_t x2836 = 2U;
uint32_t x2874 = 252927U;
uint8_t x2876 = 13U;
volatile int8_t x2921 = -1;
volatile int32_t x2946 = -1;
int8_t x3024 = 0;
int64_t x3081 = INT64_MIN;
static uint64_t x3083 = UINT64_MAX;
static int16_t x3089 = 1773;
int32_t t84 = 866;
int64_t x3110 = -1LL;
volatile int8_t x3112 = 1;
int16_t x3118 = 0;
volatile int32_t t86 = 1115032;
static volatile int64_t t87 = INT64_MAX;
uint16_t x3284 = 3U;
int8_t x3300 = 28;
int64_t x3334 = -283194734LL;
int8_t x3347 = -1;
uint32_t x3415 = 16256U;
volatile int16_t x3433 = INT16_MAX;
volatile int32_t t98 = -6031300;
uint32_t t99 = 29499798U;


void f0(void) {
	uint8_t x32 = 7U;
	uint32_t t0 = 3U;

	t0 = (x29-((x30==x31)>>x32));

	if (t0 != 422U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x53 = INT32_MIN;
	uint16_t x54 = UINT16_MAX;
	int64_t x55 = INT64_MAX;
	uint32_t x56 = 15U;
	static int32_t t1 = INT32_MIN;

	t1 = (x53-((x54==x55)>>x56));

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x97 = 303522198763390LLU;
	int32_t x99 = INT32_MIN;
	int8_t x100 = 1;
	volatile uint64_t t2 = 96430584LLU;

	t2 = (x97-((x98==x99)>>x100));

	if (t2 != 303522198763390LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x129 = 2437762152832LL;
	static uint32_t x130 = UINT32_MAX;
	uint8_t x132 = 1U;

	t3 = (x129-((x130==x131)>>x132));

	if (t3 != 2437762152832LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x133 = -1;
	int64_t x134 = INT64_MIN;
	int16_t x136 = 0;
	static int32_t t4 = 112;

	t4 = (x133-((x134==x135)>>x136));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x137 = 3U;
	uint16_t x140 = 30U;
	uint32_t t5 = 5U;

	t5 = (x137-((x138==x139)>>x140));

	if (t5 != 3U) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x165 = -1LL;
	int8_t x167 = INT8_MAX;
	static int64_t t6 = 3397873163132LL;

	t6 = (x165-((x166==x167)>>x168));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x233 = INT64_MIN;
	volatile int8_t x234 = INT8_MIN;
	uint8_t x236 = 3U;
	volatile int64_t t7 = INT64_MIN;

	t7 = (x233-((x234==x235)>>x236));

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x318 = -206;
	volatile int16_t x319 = INT16_MIN;
	static uint16_t x320 = 15U;
	int32_t t8 = -12;

	t8 = (x317-((x318==x319)>>x320));

	if (t8 != 18) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint64_t x353 = 35LLU;
	static volatile int64_t x355 = INT64_MAX;
	volatile uint64_t t9 = 2LLU;

	t9 = (x353-((x354==x355)>>x356));

	if (t9 != 35LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x433 = 1101670226752888LLU;
	int64_t x435 = INT64_MAX;
	int16_t x436 = 20;
	volatile uint64_t t10 = 20792173982LLU;

	t10 = (x433-((x434==x435)>>x436));

	if (t10 != 1101670226752888LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x441 = UINT8_MAX;
	int64_t x442 = 0LL;
	uint32_t x444 = 3U;
	volatile int32_t t11 = 2;

	t11 = (x441-((x442==x443)>>x444));

	if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x561 = INT16_MIN;
	int16_t x562 = INT16_MAX;
	static int32_t t12 = -118;

	t12 = (x561-((x562==x563)>>x564));

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x637 = -45;
	static int32_t x638 = INT32_MAX;
	volatile int8_t x639 = INT8_MAX;
	volatile int32_t t13 = -2462358;

	t13 = (x637-((x638==x639)>>x640));

	if (t13 != -45) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x717 = 0U;
	static uint16_t x718 = 1U;
	int8_t x719 = INT8_MAX;
	uint8_t x720 = 14U;
	int32_t t14 = 3927285;

	t14 = (x717-((x718==x719)>>x720));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x761 = -1;
	int16_t x763 = -1;
	int8_t x764 = 1;
	int32_t t15 = 6725;

	t15 = (x761-((x762==x763)>>x764));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x782 = UINT32_MAX;
	int64_t x783 = INT64_MAX;
	volatile int32_t t16 = -22768671;

	t16 = (x781-((x782==x783)>>x784));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x813 = -8096607355939LL;
	int16_t x814 = -1;
	int16_t x816 = 0;
	int64_t t17 = -479510372134422015LL;

	t17 = (x813-((x814==x815)>>x816));

	if (t17 != -8096607355939LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x830 = UINT8_MAX;
	uint16_t x831 = UINT16_MAX;
	static int64_t x832 = 3LL;

	t18 = (x829-((x830==x831)>>x832));

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x833 = 0U;
	volatile uint64_t x834 = 115377817434LLU;
	uint64_t x835 = UINT64_MAX;
	volatile uint64_t x836 = 31LLU;
	volatile int32_t t19 = 0;

	t19 = (x833-((x834==x835)>>x836));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x881 = -1LL;
	volatile int32_t x882 = -1;

	t20 = (x881-((x882==x883)>>x884));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x949 = 14U;
	uint16_t x951 = UINT16_MAX;
	static volatile uint16_t x952 = 10U;
	static int32_t t21 = 410;

	t21 = (x949-((x950==x951)>>x952));

	if (t21 != 14) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1053 = INT16_MAX;
	static int8_t x1055 = INT8_MIN;
	uint32_t x1056 = 12U;
	int32_t t22 = 0;

	t22 = (x1053-((x1054==x1055)>>x1056));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x1089 = INT8_MIN;
	int64_t x1090 = -1LL;
	static uint64_t x1092 = 3LLU;
	volatile int32_t t23 = -237;

	t23 = (x1089-((x1090==x1091)>>x1092));

	if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1198 = -1;
	static int32_t x1199 = INT32_MIN;
	uint16_t x1200 = 20U;
	int32_t t24 = INT32_MIN;

	t24 = (x1197-((x1198==x1199)>>x1200));

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x1221 = -1LL;
	uint16_t x1223 = 3897U;
	int8_t x1224 = 1;
	volatile int64_t t25 = 232556220785024053LL;

	t25 = (x1221-((x1222==x1223)>>x1224));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x1237 = INT16_MIN;
	int16_t x1238 = INT16_MAX;
	uint32_t x1239 = UINT32_MAX;
	int8_t x1240 = 4;
	int32_t t26 = -1;

	t26 = (x1237-((x1238==x1239)>>x1240));

	if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1281 = UINT32_MAX;
	volatile uint64_t x1282 = 18LLU;
	volatile int8_t x1283 = -24;
	uint16_t x1284 = 4U;
	static uint32_t t27 = UINT32_MAX;

	t27 = (x1281-((x1282==x1283)>>x1284));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1301 = UINT8_MAX;
	static int64_t x1302 = -154090776406199948LL;
	int32_t t28 = 1089571;

	t28 = (x1301-((x1302==x1303)>>x1304));

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x1353 = 210U;
	volatile uint16_t x1354 = 66U;
	static uint8_t x1356 = 3U;
	static volatile int32_t t29 = 23115043;

	t29 = (x1353-((x1354==x1355)>>x1356));

	if (t29 != 210) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x1373 = -64090LL;
	static volatile int16_t x1374 = INT16_MIN;
	static uint8_t x1375 = 0U;
	static uint16_t x1376 = 3U;
	volatile int64_t t30 = -5318562LL;

	t30 = (x1373-((x1374==x1375)>>x1376));

	if (t30 != -64090LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x1390 = INT16_MAX;
	int16_t x1391 = INT16_MIN;
	static volatile int8_t x1392 = 30;
	int32_t t31 = 12691;

	t31 = (x1389-((x1390==x1391)>>x1392));

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1405 = INT16_MIN;
	uint16_t x1406 = 113U;
	int8_t x1408 = 16;
	static volatile int32_t t32 = -8530501;

	t32 = (x1405-((x1406==x1407)>>x1408));

	if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1413 = -238;
	int16_t x1414 = 8810;
	volatile uint8_t x1415 = UINT8_MAX;
	uint8_t x1416 = 6U;
	int32_t t33 = 25572782;

	t33 = (x1413-((x1414==x1415)>>x1416));

	if (t33 != -238) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1445 = 56772737326198117LL;
	static int16_t x1446 = 111;
	volatile uint64_t x1447 = 1253138629504LLU;
	volatile uint8_t x1448 = 13U;
	int64_t t34 = 2LL;

	t34 = (x1445-((x1446==x1447)>>x1448));

	if (t34 != 56772737326198117LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1453 = 7414U;
	uint8_t x1454 = 52U;

	t35 = (x1453-((x1454==x1455)>>x1456));

	if (t35 != 7414) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1509 = -90935385051LL;
	int64_t x1510 = -25453701530822323LL;
	int16_t x1511 = 584;
	int8_t x1512 = 1;
	int64_t t36 = -682143LL;

	t36 = (x1509-((x1510==x1511)>>x1512));

	if (t36 != -90935385051LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1565 = INT64_MIN;
	int16_t x1567 = -306;

	t37 = (x1565-((x1566==x1567)>>x1568));

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1641 = 0;
	int64_t x1642 = -1LL;
	int16_t x1643 = -1;
	static volatile uint64_t x1644 = 0LLU;
	static volatile int32_t t38 = -97;

	t38 = (x1641-((x1642==x1643)>>x1644));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x1657 = -24;
	volatile uint8_t x1660 = 4U;
	volatile int32_t t39 = -48226162;

	t39 = (x1657-((x1658==x1659)>>x1660));

	if (t39 != -24) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x1670 = 5;
	static int8_t x1671 = INT8_MIN;
	uint16_t x1672 = 1U;
	static volatile int32_t t40 = 1;

	t40 = (x1669-((x1670==x1671)>>x1672));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x1689 = 54U;
	int8_t x1690 = INT8_MIN;
	int16_t x1691 = INT16_MAX;
	int32_t x1692 = 7;

	t41 = (x1689-((x1690==x1691)>>x1692));

	if (t41 != 54) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1717 = 66U;
	static volatile int32_t x1718 = INT32_MIN;
	int64_t x1719 = -1LL;
	uint8_t x1720 = 2U;

	t42 = (x1717-((x1718==x1719)>>x1720));

	if (t42 != 66) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1809 = INT16_MAX;
	uint16_t x1810 = 0U;
	static volatile int32_t x1811 = -567333711;
	int8_t x1812 = 2;

	t43 = (x1809-((x1810==x1811)>>x1812));

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x1821 = 3U;
	int64_t x1822 = -1LL;
	int8_t x1823 = INT8_MAX;
	static volatile int32_t t44 = -446;

	t44 = (x1821-((x1822==x1823)>>x1824));

	if (t44 != 3) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x1878 = 360U;
	int32_t x1879 = 1204;
	static int8_t x1880 = 19;

	t45 = (x1877-((x1878==x1879)>>x1880));

	if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1893 = -4368;
	uint64_t x1894 = UINT64_MAX;
	int32_t x1895 = 4366;
	uint8_t x1896 = 2U;
	int32_t t46 = -55486;

	t46 = (x1893-((x1894==x1895)>>x1896));

	if (t46 != -4368) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1905 = -33;
	int16_t x1906 = INT16_MIN;

	t47 = (x1905-((x1906==x1907)>>x1908));

	if (t47 != -33) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1971 = 710588486;
	uint8_t x1972 = 1U;
	int64_t t48 = 2LL;

	t48 = (x1969-((x1970==x1971)>>x1972));

	if (t48 != -15280LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x1997 = 2U;
	int32_t x1998 = -1;
	volatile uint32_t x1999 = 165U;
	static uint16_t x2000 = 1U;
	int32_t t49 = 180687597;

	t49 = (x1997-((x1998==x1999)>>x2000));

	if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x2037 = 112695207LLU;
	int8_t x2038 = -1;
	int64_t x2039 = INT64_MIN;
	static volatile uint64_t t50 = 162158LLU;

	t50 = (x2037-((x2038==x2039)>>x2040));

	if (t50 != 112695207LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2093 = INT8_MIN;
	static uint8_t x2094 = 11U;
	uint8_t x2096 = 20U;
	int32_t t51 = 205049;

	t51 = (x2093-((x2094==x2095)>>x2096));

	if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x2129 = INT64_MIN;
	static volatile int32_t x2130 = INT32_MIN;
	static uint16_t x2132 = 0U;
	volatile int64_t t52 = INT64_MIN;

	t52 = (x2129-((x2130==x2131)>>x2132));

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x2165 = 31012317U;
	int8_t x2167 = INT8_MIN;
	static volatile uint32_t t53 = 15U;

	t53 = (x2165-((x2166==x2167)>>x2168));

	if (t53 != 31012317U) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x2181 = -1;
	uint16_t x2182 = UINT16_MAX;
	static int32_t x2183 = -1;
	int32_t t54 = 10753660;

	t54 = (x2181-((x2182==x2183)>>x2184));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x2205 = INT8_MIN;
	volatile uint64_t x2207 = 97748282928LLU;

	t55 = (x2205-((x2206==x2207)>>x2208));

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x2233 = UINT32_MAX;
	volatile int32_t x2234 = INT32_MIN;
	int16_t x2235 = INT16_MIN;
	uint8_t x2236 = 13U;
	volatile uint32_t t56 = UINT32_MAX;

	t56 = (x2233-((x2234==x2235)>>x2236));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x2262 = UINT16_MAX;
	static uint8_t x2264 = 15U;
	static int64_t t57 = INT64_MIN;

	t57 = (x2261-((x2262==x2263)>>x2264));

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x2269 = INT16_MAX;
	int64_t x2270 = -1LL;
	int64_t x2271 = INT64_MIN;
	uint8_t x2272 = 3U;
	static volatile int32_t t58 = 1;

	t58 = (x2269-((x2270==x2271)>>x2272));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x2337 = 55U;
	volatile int16_t x2338 = 2;
	int16_t x2339 = -1;

	t59 = (x2337-((x2338==x2339)>>x2340));

	if (t59 != 55U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2354 = INT32_MIN;
	uint8_t x2356 = 1U;
	volatile int64_t t60 = -2066LL;

	t60 = (x2353-((x2354==x2355)>>x2356));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x2405 = UINT8_MAX;
	volatile int8_t x2406 = -1;
	uint32_t x2407 = UINT32_MAX;
	int32_t x2408 = 2;
	int32_t t61 = 0;

	t61 = (x2405-((x2406==x2407)>>x2408));

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x2409 = 33402LL;
	volatile int8_t x2410 = INT8_MIN;
	int16_t x2411 = INT16_MIN;
	volatile uint8_t x2412 = 5U;

	t62 = (x2409-((x2410==x2411)>>x2412));

	if (t62 != 33402LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x2417 = UINT64_MAX;
	volatile uint32_t x2418 = UINT32_MAX;
	volatile uint32_t x2419 = UINT32_MAX;
	uint64_t t63 = UINT64_MAX;

	t63 = (x2417-((x2418==x2419)>>x2420));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x2433 = -1;
	int16_t x2434 = INT16_MAX;
	int16_t x2435 = INT16_MIN;
	static uint64_t x2436 = 31LLU;
	volatile int32_t t64 = 4051056;

	t64 = (x2433-((x2434==x2435)>>x2436));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x2489 = -1LL;
	volatile uint8_t x2490 = 1U;
	static int16_t x2491 = -4;
	volatile int64_t t65 = -2422277661548LL;

	t65 = (x2489-((x2490==x2491)>>x2492));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x2493 = UINT64_MAX;
	static int16_t x2494 = -1;
	static int32_t x2495 = 2497;
	volatile int8_t x2496 = 1;
	volatile uint64_t t66 = UINT64_MAX;

	t66 = (x2493-((x2494==x2495)>>x2496));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x2517 = INT32_MAX;
	int64_t x2518 = INT64_MAX;
	uint8_t x2519 = 2U;
	uint16_t x2520 = 19U;
	volatile int32_t t67 = INT32_MAX;

	t67 = (x2517-((x2518==x2519)>>x2520));

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x2525 = 0U;
	int32_t x2526 = 0;
	volatile int32_t x2527 = -98007646;
	static int8_t x2528 = 31;
	volatile int32_t t68 = -833755068;

	t68 = (x2525-((x2526==x2527)>>x2528));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x2605 = 39U;
	int16_t x2606 = INT16_MIN;
	int32_t t69 = -20846115;

	t69 = (x2605-((x2606==x2607)>>x2608));

	if (t69 != 39) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x2669 = INT64_MIN;
	int16_t x2670 = 0;
	static int8_t x2671 = 40;
	static uint8_t x2672 = 11U;
	volatile int64_t t70 = INT64_MIN;

	t70 = (x2669-((x2670==x2671)>>x2672));

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x2721 = INT64_MIN;
	int32_t x2722 = 2802471;
	static volatile int64_t x2723 = -1LL;
	int16_t x2724 = 0;
	int64_t t71 = INT64_MIN;

	t71 = (x2721-((x2722==x2723)>>x2724));

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2750 = INT16_MIN;
	int8_t x2751 = INT8_MIN;

	t72 = (x2749-((x2750==x2751)>>x2752));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x2773 = INT64_MIN;
	int8_t x2774 = -10;
	int32_t x2776 = 26;
	volatile int64_t t73 = INT64_MIN;

	t73 = (x2773-((x2774==x2775)>>x2776));

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x2777 = 361733500;
	int16_t x2778 = 63;
	volatile uint8_t x2779 = UINT8_MAX;
	int32_t x2780 = 1;
	static volatile int32_t t74 = 1122326;

	t74 = (x2777-((x2778==x2779)>>x2780));

	if (t74 != 361733500) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x2785 = INT8_MIN;
	uint32_t x2786 = 11169U;
	uint32_t x2787 = UINT32_MAX;
	uint32_t x2788 = 21U;
	int32_t t75 = -391097294;

	t75 = (x2785-((x2786==x2787)>>x2788));

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x2817 = -1;
	static int32_t x2818 = INT32_MIN;
	static volatile int64_t x2819 = 29LL;
	volatile uint32_t x2820 = 8U;
	volatile int32_t t76 = 23262;

	t76 = (x2817-((x2818==x2819)>>x2820));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x2833 = 47U;
	int32_t x2834 = INT32_MIN;
	uint64_t x2835 = 2201LLU;
	static volatile int32_t t77 = 28;

	t77 = (x2833-((x2834==x2835)>>x2836));

	if (t77 != 47) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x2873 = 12833640628LL;
	volatile int8_t x2875 = INT8_MIN;
	static int64_t t78 = -15495302LL;

	t78 = (x2873-((x2874==x2875)>>x2876));

	if (t78 != 12833640628LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2922 = INT8_MIN;
	int64_t x2923 = 175477807LL;
	int8_t x2924 = 1;
	int32_t t79 = -15410;

	t79 = (x2921-((x2922==x2923)>>x2924));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x2945 = UINT16_MAX;
	uint32_t x2947 = 711547U;
	int16_t x2948 = 0;
	int32_t t80 = 1;

	t80 = (x2945-((x2946==x2947)>>x2948));

	if (t80 != 65535) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x2953 = 21342232057435LL;
	static uint16_t x2954 = UINT16_MAX;
	int32_t x2955 = INT32_MIN;
	uint16_t x2956 = 24U;
	volatile int64_t t81 = -253469418LL;

	t81 = (x2953-((x2954==x2955)>>x2956));

	if (t81 != 21342232057435LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x3021 = INT32_MIN;
	static int16_t x3022 = INT16_MAX;
	volatile int32_t x3023 = INT32_MIN;
	volatile int32_t t82 = INT32_MIN;

	t82 = (x3021-((x3022==x3023)>>x3024));

	if (t82 != INT32_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x3082 = INT32_MIN;
	uint16_t x3084 = 1U;
	volatile int64_t t83 = INT64_MIN;

	t83 = (x3081-((x3082==x3083)>>x3084));

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x3090 = UINT16_MAX;
	static volatile int8_t x3091 = 1;
	int8_t x3092 = 1;

	t84 = (x3089-((x3090==x3091)>>x3092));

	if (t84 != 1773) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x3109 = -1LL;
	uint8_t x3111 = 59U;
	int64_t t85 = -264530755239LL;

	t85 = (x3109-((x3110==x3111)>>x3112));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x3117 = 5;
	int64_t x3119 = INT64_MAX;
	int16_t x3120 = 6;

	t86 = (x3117-((x3118==x3119)>>x3120));

	if (t86 != 5) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x3129 = INT64_MAX;
	int8_t x3130 = -1;
	uint32_t x3131 = UINT32_MAX;
	uint8_t x3132 = 3U;

	t87 = (x3129-((x3130==x3131)>>x3132));

	if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x3241 = 47U;
	int16_t x3242 = 805;
	uint32_t x3243 = 1U;
	uint8_t x3244 = 18U;
	static int32_t t88 = 384409;

	t88 = (x3241-((x3242==x3243)>>x3244));

	if (t88 != 47) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x3253 = 7U;
	int8_t x3254 = 0;
	int32_t x3255 = INT32_MIN;
	uint8_t x3256 = 4U;
	volatile int32_t t89 = 355339;

	t89 = (x3253-((x3254==x3255)>>x3256));

	if (t89 != 7) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x3257 = 54436170LLU;
	uint16_t x3258 = UINT16_MAX;
	volatile uint32_t x3259 = 3917253U;
	uint64_t x3260 = 0LLU;
	uint64_t t90 = 20729887494005240LLU;

	t90 = (x3257-((x3258==x3259)>>x3260));

	if (t90 != 54436170LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x3281 = UINT32_MAX;
	int16_t x3282 = -1;
	int16_t x3283 = -1;
	uint32_t t91 = UINT32_MAX;

	t91 = (x3281-((x3282==x3283)>>x3284));

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x3297 = INT32_MAX;
	uint16_t x3298 = 13U;
	int16_t x3299 = INT16_MIN;
	int32_t t92 = INT32_MAX;

	t92 = (x3297-((x3298==x3299)>>x3300));

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x3333 = INT32_MIN;
	int8_t x3335 = INT8_MAX;
	uint16_t x3336 = 19U;
	int32_t t93 = INT32_MIN;

	t93 = (x3333-((x3334==x3335)>>x3336));

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x3345 = UINT16_MAX;
	int8_t x3346 = INT8_MIN;
	int8_t x3348 = 1;
	int32_t t94 = -2066868;

	t94 = (x3345-((x3346==x3347)>>x3348));

	if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x3405 = INT32_MIN;
	int16_t x3406 = INT16_MAX;
	int8_t x3407 = -1;
	uint8_t x3408 = 21U;
	static volatile int32_t t95 = INT32_MIN;

	t95 = (x3405-((x3406==x3407)>>x3408));

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x3409 = 100LLU;
	int16_t x3410 = INT16_MIN;
	uint32_t x3411 = 106U;
	int64_t x3412 = 0LL;
	volatile uint64_t t96 = 367355349377117LLU;

	t96 = (x3409-((x3410==x3411)>>x3412));

	if (t96 != 100LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x3413 = INT32_MAX;
	volatile int32_t x3414 = -2;
	int8_t x3416 = 2;
	volatile int32_t t97 = INT32_MAX;

	t97 = (x3413-((x3414==x3415)>>x3416));

	if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x3434 = -11;
	int8_t x3435 = 3;
	int32_t x3436 = 1;

	t98 = (x3433-((x3434==x3435)>>x3436));

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x3449 = 1033U;
	int64_t x3450 = -168094242194493729LL;
	static volatile int8_t x3451 = -1;
	int8_t x3452 = 3;

	t99 = (x3449-((x3450==x3451)>>x3452));

	if (t99 != 1033U) { NG(); } else { ; }
	
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

