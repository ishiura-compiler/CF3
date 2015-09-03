#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t0 = 6154818908172103909LLU;
static int64_t t1 = 1LL;
int32_t x101 = INT32_MIN;
int32_t x102 = -900073914;
int64_t x113 = INT64_MIN;
static uint32_t x114 = UINT32_MAX;
int64_t x195 = 299873301252LL;
static int8_t x200 = 0;
int64_t t6 = 7086412482615540LL;
static volatile int64_t x347 = INT64_MAX;
uint16_t x348 = 3U;
volatile uint32_t t9 = 0U;
volatile int8_t x832 = 40;
int16_t x903 = 7;
int8_t x904 = 4;
uint32_t x1000 = 10U;
uint32_t x1017 = 23U;
volatile uint16_t x1019 = 8U;
static int64_t t18 = 234400324170LL;
static int32_t x1025 = INT32_MIN;
static uint32_t x1028 = 28U;
static uint64_t x1189 = 13268837LLU;
uint32_t x1190 = UINT32_MAX;
static uint8_t x1280 = 3U;
uint8_t x1338 = 2U;
int8_t x1354 = 24;
int64_t x1513 = INT64_MIN;
volatile int64_t x1565 = -117865LL;
int16_t x1593 = INT16_MAX;
uint16_t x1613 = 1U;
int64_t x1615 = INT64_MIN;
int32_t x1795 = INT32_MAX;
uint64_t x1803 = UINT64_MAX;
static int16_t x1805 = -5486;
uint16_t x1861 = 1488U;
int64_t x1869 = 374159LL;
uint8_t x1872 = 7U;
static uint32_t x1932 = 1U;
static volatile uint8_t x1980 = 2U;
uint16_t x2002 = 90U;
uint16_t x2003 = 794U;
static uint32_t x2072 = 17U;
static volatile uint32_t t43 = 114926U;
static uint64_t x2218 = UINT64_MAX;
volatile int64_t x2379 = -2038650427LL;
int32_t x2380 = 0;
static int16_t x2445 = -1;
volatile int64_t t52 = -7953824LL;
volatile int16_t x2544 = 1;
uint8_t x2721 = 8U;
uint8_t x2915 = 2U;
static int64_t t59 = 22132442221347563LL;
int8_t x3041 = -4;
int64_t x3042 = INT64_MAX;
volatile uint32_t x3043 = 262827U;
int16_t x3103 = INT16_MIN;
int64_t x3155 = INT64_MIN;
volatile int64_t x3223 = 5101573866354LL;
volatile int32_t x3250 = -1;
int64_t x3282 = INT64_MAX;
static uint32_t x3310 = 517U;
uint32_t x3311 = UINT32_MAX;
volatile uint32_t t70 = 647132247U;
uint16_t x3407 = 384U;
volatile int32_t t73 = -5247634;
int64_t x3793 = INT64_MIN;
int32_t t79 = -69620080;
uint8_t x3850 = 17U;
volatile int8_t x4018 = INT8_MAX;
static int64_t x4019 = INT64_MIN;
int64_t t81 = 34729LL;
static uint8_t x4199 = UINT8_MAX;
uint64_t x4365 = 7LLU;
uint8_t x4368 = 8U;
volatile uint64_t t84 = 5590377423096377LLU;
volatile int16_t x4439 = INT16_MIN;
static int64_t t87 = -1340713803LL;
static int32_t x4617 = 20952;
int64_t x4670 = 192511040419734LL;
uint64_t x4671 = 15899LLU;
volatile int64_t x4685 = INT64_MIN;
int64_t t94 = -6LL;
int64_t x4767 = INT64_MIN;
static uint64_t t98 = 7356017113LLU;
int32_t t99 = -2;


void f0(void) {
	static uint64_t x45 = 16729753730421721LLU;
	volatile uint64_t x46 = UINT64_MAX;
	static int64_t x47 = -1LL;
	uint8_t x48 = 3U;

	t0 = (x45^((x46&x47)<<x48));

	if (t0 != 18430014319979129889LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x73 = INT64_MIN;
	uint16_t x74 = 1043U;
	volatile uint16_t x75 = UINT16_MAX;
	volatile uint8_t x76 = 0U;

	t1 = (x73^((x74&x75)<<x76));

	if (t1 != -9223372036854774765LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x103 = 6U;
	static int8_t x104 = 1;
	int32_t t2 = -363;

	t2 = (x101^((x102&x103)<<x104));

	if (t2 != -2147483636) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x115 = INT8_MAX;
	volatile uint32_t x116 = 1U;
	int64_t t3 = 6797122136582077LL;

	t3 = (x113^((x114&x115)<<x116));

	if (t3 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x193 = -43989399;
	int32_t x194 = INT32_MIN;
	uint8_t x196 = 4U;
	int64_t t4 = -2553503334467039LL;

	t4 = (x193^((x194&x195)<<x196));

	if (t4 != -4776047622551LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x197 = -1LL;
	int8_t x198 = 1;
	int8_t x199 = 14;
	static volatile int64_t t5 = -98638931LL;

	t5 = (x197^((x198&x199)<<x200));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x277 = UINT16_MAX;
	int32_t x278 = INT32_MAX;
	volatile int64_t x279 = -1LL;
	static uint8_t x280 = 1U;

	t6 = (x277^((x278&x279)<<x280));

	if (t6 != 4294901761LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x345 = -1;
	static uint16_t x346 = 2U;
	int64_t t7 = -1606759LL;

	t7 = (x345^((x346&x347)<<x348));

	if (t7 != -17LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x353 = INT32_MIN;
	int64_t x354 = INT64_MIN;
	static int16_t x355 = INT16_MAX;
	int8_t x356 = 0;
	static int64_t t8 = 124651291147935LL;

	t8 = (x353^((x354&x355)<<x356));

	if (t8 != -2147483648LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x469 = 27U;
	static uint16_t x470 = 31170U;
	int32_t x471 = -1;
	uint8_t x472 = 1U;

	t9 = (x469^((x470&x471)<<x472));

	if (t9 != 62367U) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x525 = 13066U;
	int8_t x526 = 0;
	uint64_t x527 = UINT64_MAX;
	uint16_t x528 = 2U;
	uint64_t t10 = 812381596636838626LLU;

	t10 = (x525^((x526&x527)<<x528));

	if (t10 != 13066LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x685 = INT8_MIN;
	int64_t x686 = INT64_MIN;
	volatile uint8_t x687 = 3U;
	int16_t x688 = 1;
	static int64_t t11 = -414889514LL;

	t11 = (x685^((x686&x687)<<x688));

	if (t11 != -128LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x813 = -180;
	static int32_t x814 = -1;
	int64_t x815 = 232666344LL;
	int16_t x816 = 1;
	static volatile int64_t t12 = -204133575585224499LL;

	t12 = (x813^((x814&x815)<<x816));

	if (t12 != -465332580LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x829 = INT8_MAX;
	volatile uint64_t x830 = 18637082020393336LLU;
	int8_t x831 = 6;
	volatile uint64_t t13 = 22LLU;

	t13 = (x829^((x830&x831)<<x832));

	if (t13 != 127LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x849 = -1;
	static uint16_t x850 = UINT16_MAX;
	int64_t x851 = -1LL;
	uint8_t x852 = 1U;
	int64_t t14 = -377275923610630LL;

	t14 = (x849^((x850&x851)<<x852));

	if (t14 != -131071LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x901 = -1;
	volatile int8_t x902 = -1;
	volatile int32_t t15 = 30425;

	t15 = (x901^((x902&x903)<<x904));

	if (t15 != -113) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x961 = 13894607787864477LL;
	int32_t x962 = 9;
	int16_t x963 = INT16_MIN;
	uint8_t x964 = 7U;
	int64_t t16 = -23415229LL;

	t16 = (x961^((x962&x963)<<x964));

	if (t16 != 13894607787864477LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x997 = 0U;
	static uint32_t x998 = 41330U;
	int16_t x999 = -1;
	volatile uint32_t t17 = 10252243U;

	t17 = (x997^((x998&x999)<<x1000));

	if (t17 != 42321920U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x1018 = INT64_MIN;
	uint32_t x1020 = 2U;

	t18 = (x1017^((x1018&x1019)<<x1020));

	if (t18 != 23LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1026 = 6712LLU;
	int16_t x1027 = INT16_MIN;
	volatile uint64_t t19 = 2888446664812588LLU;

	t19 = (x1025^((x1026&x1027)<<x1028));

	if (t19 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x1129 = INT64_MIN;
	volatile uint32_t x1130 = 19706153U;
	uint32_t x1131 = UINT32_MAX;
	static uint64_t x1132 = 0LLU;
	int64_t t20 = 16854907LL;

	t20 = (x1129^((x1130&x1131)<<x1132));

	if (t20 != -9223372036835069655LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1191 = -1;
	uint8_t x1192 = 24U;
	uint64_t t21 = 1739166LLU;

	t21 = (x1189^((x1190&x1191)<<x1192));

	if (t21 != 4291458917LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x1277 = INT8_MIN;
	int16_t x1278 = INT16_MAX;
	volatile int8_t x1279 = INT8_MIN;
	volatile int32_t t22 = -2284;

	t22 = (x1277^((x1278&x1279)<<x1280));

	if (t22 != -261248) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1305 = INT64_MAX;
	static volatile uint32_t x1306 = 98524387U;
	uint32_t x1307 = UINT32_MAX;
	int8_t x1308 = 0;
	static volatile int64_t t23 = 1LL;

	t23 = (x1305^((x1306&x1307)<<x1308));

	if (t23 != 9223372036756251420LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x1337 = INT32_MAX;
	volatile uint64_t x1339 = UINT64_MAX;
	static int64_t x1340 = 29LL;
	static uint64_t t24 = 2282765661570484LLU;

	t24 = (x1337^((x1338&x1339)<<x1340));

	if (t24 != 1073741823LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x1353 = -1;
	static int16_t x1355 = INT16_MIN;
	uint16_t x1356 = 7U;
	static int32_t t25 = 0;

	t25 = (x1353^((x1354&x1355)<<x1356));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1514 = 96866U;
	int64_t x1515 = -1LL;
	volatile int8_t x1516 = 7;
	int64_t t26 = 14989LL;

	t26 = (x1513^((x1514&x1515)<<x1516));

	if (t26 != -9223372036842376960LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1566 = 13;
	static volatile int16_t x1567 = 3;
	static volatile int16_t x1568 = 5;
	int64_t t27 = -318267845815LL;

	t27 = (x1565^((x1566&x1567)<<x1568));

	if (t27 != -117833LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1594 = UINT32_MAX;
	int16_t x1595 = -4939;
	volatile int8_t x1596 = 0;
	static volatile uint32_t t28 = 0U;

	t28 = (x1593^((x1594&x1595)<<x1596));

	if (t28 != 4294939466U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1614 = 1U;
	volatile uint16_t x1616 = 7U;
	volatile int64_t t29 = 7LL;

	t29 = (x1613^((x1614&x1615)<<x1616));

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x1665 = INT8_MIN;
	volatile uint64_t x1666 = 888380745LLU;
	int8_t x1667 = INT8_MAX;
	uint16_t x1668 = 0U;
	volatile uint64_t t30 = 52375818106331399LLU;

	t30 = (x1665^((x1666&x1667)<<x1668));

	if (t30 != 18446744073709551561LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1793 = -191286LL;
	int8_t x1794 = INT8_MAX;
	volatile int8_t x1796 = 1;
	volatile int64_t t31 = -40753LL;

	t31 = (x1793^((x1794&x1795)<<x1796));

	if (t31 != -191436LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x1801 = 43U;
	int64_t x1802 = INT64_MIN;
	int16_t x1804 = 1;
	uint64_t t32 = 7126859098560LLU;

	t32 = (x1801^((x1802&x1803)<<x1804));

	if (t32 != 43LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1806 = INT8_MAX;
	volatile uint16_t x1807 = UINT16_MAX;
	uint8_t x1808 = 0U;
	volatile int32_t t33 = -2060;

	t33 = (x1805^((x1806&x1807)<<x1808));

	if (t33 != -5395) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1862 = INT32_MAX;
	static uint32_t x1863 = 60U;
	static int8_t x1864 = 1;
	static uint32_t t34 = 384253U;

	t34 = (x1861^((x1862&x1863)<<x1864));

	if (t34 != 1448U) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x1870 = UINT32_MAX;
	volatile int32_t x1871 = INT32_MIN;
	int64_t t35 = 0LL;

	t35 = (x1869^((x1870&x1871)<<x1872));

	if (t35 != 374159LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1889 = INT64_MIN;
	uint16_t x1890 = UINT16_MAX;
	volatile int64_t x1891 = INT64_MIN;
	uint8_t x1892 = 26U;
	volatile int64_t t36 = INT64_MIN;

	t36 = (x1889^((x1890&x1891)<<x1892));

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x1921 = 1U;
	uint8_t x1922 = UINT8_MAX;
	volatile uint32_t x1923 = 419243814U;
	volatile uint8_t x1924 = 6U;
	uint32_t t37 = 14U;

	t37 = (x1921^((x1922&x1923)<<x1924));

	if (t37 != 2433U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x1929 = UINT64_MAX;
	int16_t x1930 = -1;
	int32_t x1931 = 1143;
	uint64_t t38 = 231156974LLU;

	t38 = (x1929^((x1930&x1931)<<x1932));

	if (t38 != 18446744073709549329LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x1941 = 9918;
	int32_t x1942 = INT32_MAX;
	int64_t x1943 = INT64_MIN;
	int32_t x1944 = 0;
	int64_t t39 = 4243021LL;

	t39 = (x1941^((x1942&x1943)<<x1944));

	if (t39 != 9918LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1977 = INT64_MIN;
	int16_t x1978 = INT16_MAX;
	int64_t x1979 = INT64_MAX;
	int64_t t40 = 54238513129986429LL;

	t40 = (x1977^((x1978&x1979)<<x1980));

	if (t40 != -9223372036854644740LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2001 = 195189836U;
	static volatile uint64_t x2004 = 24LLU;
	static volatile uint32_t t41 = 2135705183U;

	t41 = (x2001^((x2002&x2003)<<x2004));

	if (t41 != 295853132U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x2021 = UINT16_MAX;
	uint64_t x2022 = UINT64_MAX;
	int64_t x2023 = -26LL;
	int8_t x2024 = 0;
	volatile uint64_t t42 = 61LLU;

	t42 = (x2021^((x2022&x2023)<<x2024));

	if (t42 != 18446744073709486105LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x2069 = 15U;
	uint32_t x2070 = 37U;
	uint32_t x2071 = UINT32_MAX;

	t43 = (x2069^((x2070&x2071)<<x2072));

	if (t43 != 4849679U) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x2085 = UINT8_MAX;
	uint8_t x2086 = UINT8_MAX;
	int64_t x2087 = -1LL;
	uint64_t x2088 = 1LLU;
	volatile int64_t t44 = 196LL;

	t44 = (x2085^((x2086&x2087)<<x2088));

	if (t44 != 257LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x2217 = INT8_MIN;
	static uint32_t x2219 = 95156U;
	uint64_t x2220 = 2LLU;
	uint64_t t45 = 3LLU;

	t45 = (x2217^((x2218&x2219)<<x2220));

	if (t45 != 18446744073709171024LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x2269 = 0U;
	static int16_t x2270 = INT16_MIN;
	static uint8_t x2271 = 20U;
	static int64_t x2272 = 14LL;
	volatile int32_t t46 = -24197305;

	t46 = (x2269^((x2270&x2271)<<x2272));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2313 = INT64_MAX;
	uint64_t x2314 = 142887LLU;
	static int8_t x2315 = INT8_MAX;
	uint8_t x2316 = 4U;
	volatile uint64_t t47 = 61759406128LLU;

	t47 = (x2313^((x2314&x2315)<<x2316));

	if (t47 != 9223372036854775183LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2369 = -1;
	int32_t x2370 = INT32_MIN;
	uint8_t x2371 = 9U;
	volatile int16_t x2372 = 0;
	int32_t t48 = -7957198;

	t48 = (x2369^((x2370&x2371)<<x2372));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2377 = INT8_MAX;
	static int32_t x2378 = 0;
	int64_t t49 = 3126965696402650LL;

	t49 = (x2377^((x2378&x2379)<<x2380));

	if (t49 != 127LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2405 = INT8_MIN;
	int8_t x2406 = 7;
	int64_t x2407 = INT64_MIN;
	uint32_t x2408 = 44U;
	int64_t t50 = -1632753001LL;

	t50 = (x2405^((x2406&x2407)<<x2408));

	if (t50 != -128LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x2446 = 9430U;
	int32_t x2447 = -150293394;
	static uint32_t x2448 = 1U;
	volatile int32_t t51 = 368013811;

	t51 = (x2445^((x2446&x2447)<<x2448));

	if (t51 != -18573) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2465 = INT8_MIN;
	int64_t x2466 = -132645722164026LL;
	volatile uint32_t x2467 = 348306U;
	int8_t x2468 = 2;

	t52 = (x2465^((x2466&x2467)<<x2468));

	if (t52 != -344696LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2541 = -106203;
	volatile int16_t x2542 = -264;
	uint16_t x2543 = 1U;
	int32_t t53 = 5393090;

	t53 = (x2541^((x2542&x2543)<<x2544));

	if (t53 != -106203) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x2722 = 0U;
	int16_t x2723 = -1;
	uint8_t x2724 = 31U;
	int32_t t54 = -8228106;

	t54 = (x2721^((x2722&x2723)<<x2724));

	if (t54 != 8) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x2793 = INT64_MIN;
	int8_t x2794 = 6;
	uint32_t x2795 = 0U;
	int16_t x2796 = 1;
	static int64_t t55 = INT64_MIN;

	t55 = (x2793^((x2794&x2795)<<x2796));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x2817 = -956;
	int8_t x2818 = INT8_MAX;
	static int32_t x2819 = -1;
	static volatile int64_t x2820 = 0LL;
	int32_t t56 = -46482;

	t56 = (x2817^((x2818&x2819)<<x2820));

	if (t56 != -965) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x2857 = 3229U;
	int8_t x2858 = 1;
	uint64_t x2859 = 3555LLU;
	uint8_t x2860 = 1U;
	uint64_t t57 = 186LLU;

	t57 = (x2857^((x2858&x2859)<<x2860));

	if (t57 != 3231LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x2913 = INT32_MIN;
	int16_t x2914 = -15;
	uint8_t x2916 = 0U;
	static volatile int32_t t58 = INT32_MIN;

	t58 = (x2913^((x2914&x2915)<<x2916));

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x2949 = UINT16_MAX;
	static int32_t x2950 = INT32_MAX;
	static int64_t x2951 = INT64_MIN;
	uint64_t x2952 = 1LLU;

	t59 = (x2949^((x2950&x2951)<<x2952));

	if (t59 != 65535LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x3021 = -1;
	volatile int8_t x3022 = -1;
	static int8_t x3023 = 3;
	volatile uint16_t x3024 = 15U;
	static volatile int32_t t60 = 6423436;

	t60 = (x3021^((x3022&x3023)<<x3024));

	if (t60 != -98305) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x3044 = 0U;
	static volatile int64_t t61 = -238076182637LL;

	t61 = (x3041^((x3042&x3043)<<x3044));

	if (t61 != -262825LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3101 = INT16_MAX;
	static volatile uint32_t x3102 = 841U;
	uint64_t x3104 = 3LLU;
	volatile uint32_t t62 = 3U;

	t62 = (x3101^((x3102&x3103)<<x3104));

	if (t62 != 32767U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3145 = -120;
	int16_t x3146 = INT16_MIN;
	int64_t x3147 = 3466042312009LL;
	static uint16_t x3148 = 0U;
	int64_t t63 = -2377281488919633568LL;

	t63 = (x3145^((x3146&x3147)<<x3148));

	if (t63 != -3466042310776LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x3153 = -1;
	uint32_t x3154 = UINT32_MAX;
	volatile int32_t x3156 = 0;
	int64_t t64 = -1990166LL;

	t64 = (x3153^((x3154&x3155)<<x3156));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x3181 = 11489LLU;
	static int8_t x3182 = -9;
	uint8_t x3183 = 60U;
	uint8_t x3184 = 5U;
	volatile uint64_t t65 = 57490925LLU;

	t65 = (x3181^((x3182&x3183)<<x3184));

	if (t65 != 10849LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x3221 = INT8_MAX;
	static int16_t x3222 = 0;
	uint16_t x3224 = 0U;
	int64_t t66 = -86LL;

	t66 = (x3221^((x3222&x3223)<<x3224));

	if (t66 != 127LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x3249 = 4806;
	volatile uint16_t x3251 = 1837U;
	uint8_t x3252 = 15U;
	int32_t t67 = -1;

	t67 = (x3249^((x3250&x3251)<<x3252));

	if (t67 != 60199622) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint32_t x3277 = 454384U;
	int8_t x3278 = -13;
	volatile int16_t x3279 = INT16_MAX;
	uint16_t x3280 = 1U;
	static volatile uint32_t t68 = 73U;

	t68 = (x3277^((x3278&x3279)<<x3280));

	if (t68 != 397590U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x3281 = 41883949256LLU;
	static uint64_t x3283 = UINT64_MAX;
	volatile uint16_t x3284 = 20U;
	volatile uint64_t t69 = 1893084251LLU;

	t69 = (x3281^((x3282&x3283)<<x3284));

	if (t69 != 18446744031825909960LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x3309 = INT32_MIN;
	uint8_t x3312 = 1U;

	t70 = (x3309^((x3310&x3311)<<x3312));

	if (t70 != 2147484682U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x3329 = 1504;
	int32_t x3330 = INT32_MIN;
	uint32_t x3331 = 1687U;
	static uint64_t x3332 = 20LLU;
	volatile uint32_t t71 = 205U;

	t71 = (x3329^((x3330&x3331)<<x3332));

	if (t71 != 1504U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x3333 = 3463U;
	static volatile int32_t x3334 = INT32_MIN;
	int8_t x3335 = 0;
	int32_t x3336 = 1;
	uint32_t t72 = 7494677U;

	t72 = (x3333^((x3334&x3335)<<x3336));

	if (t72 != 3463U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x3405 = -1;
	int32_t x3406 = INT32_MIN;
	int16_t x3408 = 0;

	t73 = (x3405^((x3406&x3407)<<x3408));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x3529 = INT8_MAX;
	int8_t x3530 = INT8_MIN;
	int8_t x3531 = 0;
	int16_t x3532 = 4;
	volatile int32_t t74 = -4499;

	t74 = (x3529^((x3530&x3531)<<x3532));

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x3665 = INT16_MIN;
	int8_t x3666 = -3;
	uint64_t x3667 = 64178631822430LLU;
	int16_t x3668 = 4;
	static uint64_t t75 = 398198809732186LLU;

	t75 = (x3665^((x3666&x3667)<<x3668));

	if (t75 != 18445717215600395712LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x3673 = INT64_MIN;
	int32_t x3674 = -6027;
	volatile uint32_t x3675 = 14984656U;
	volatile uint8_t x3676 = 1U;
	int64_t t76 = -68LL;

	t76 = (x3673^((x3674&x3675)<<x3676));

	if (t76 != -9223372036824809312LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x3709 = -1;
	uint64_t x3710 = UINT64_MAX;
	int16_t x3711 = 4;
	int8_t x3712 = 0;
	volatile uint64_t t77 = 52408320LLU;

	t77 = (x3709^((x3710&x3711)<<x3712));

	if (t77 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x3794 = 1U;
	int64_t x3795 = -1LL;
	uint8_t x3796 = 23U;
	static int64_t t78 = 8191LL;

	t78 = (x3793^((x3794&x3795)<<x3796));

	if (t78 != -9223372036846387200LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x3813 = INT32_MIN;
	static int32_t x3814 = -1;
	uint16_t x3815 = 9793U;
	uint8_t x3816 = 0U;

	t79 = (x3813^((x3814&x3815)<<x3816));

	if (t79 != -2147473855) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x3849 = INT16_MIN;
	uint16_t x3851 = 690U;
	int32_t x3852 = 11;
	static volatile int32_t t80 = -1;

	t80 = (x3849^((x3850&x3851)<<x3852));

	if (t80 != -65536) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x4017 = -1257572129899LL;
	static int8_t x4020 = 1;

	t81 = (x4017^((x4018&x4019)<<x4020));

	if (t81 != -1257572129899LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x4197 = -1LL;
	static volatile int32_t x4198 = 12201897;
	uint16_t x4200 = 6U;
	int64_t t82 = -4570870997689262654LL;

	t82 = (x4197^((x4198&x4199)<<x4200));

	if (t82 != -10817LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x4253 = -1;
	volatile int8_t x4254 = INT8_MIN;
	static int8_t x4255 = 35;
	static volatile int8_t x4256 = 29;
	volatile int32_t t83 = 9;

	t83 = (x4253^((x4254&x4255)<<x4256));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x4366 = 1U;
	volatile uint16_t x4367 = 1053U;

	t84 = (x4365^((x4366&x4367)<<x4368));

	if (t84 != 263LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x4437 = UINT8_MAX;
	static uint8_t x4438 = 0U;
	volatile uint32_t x4440 = 16U;
	static volatile int32_t t85 = 97;

	t85 = (x4437^((x4438&x4439)<<x4440));

	if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x4465 = INT64_MIN;
	volatile uint8_t x4466 = 46U;
	static int32_t x4467 = 30835793;
	int32_t x4468 = 3;
	int64_t t86 = INT64_MIN;

	t86 = (x4465^((x4466&x4467)<<x4468));

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x4529 = 12187;
	uint8_t x4530 = 6U;
	int64_t x4531 = INT64_MAX;
	int16_t x4532 = 1;

	t87 = (x4529^((x4530&x4531)<<x4532));

	if (t87 != 12183LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x4605 = -1LL;
	static uint64_t x4606 = UINT64_MAX;
	int32_t x4607 = INT32_MIN;
	volatile uint8_t x4608 = 3U;
	volatile uint64_t t88 = 427687LLU;

	t88 = (x4605^((x4606&x4607)<<x4608));

	if (t88 != 17179869183LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x4618 = INT16_MIN;
	static volatile uint64_t x4619 = 124223098LLU;
	static int16_t x4620 = 0;
	volatile uint64_t t89 = 11962LLU;

	t89 = (x4617^((x4618&x4619)<<x4620));

	if (t89 != 124211672LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x4629 = -1;
	int64_t x4630 = 96761503LL;
	int8_t x4631 = -1;
	static volatile uint16_t x4632 = 0U;
	int64_t t90 = -1712739LL;

	t90 = (x4629^((x4630&x4631)<<x4632));

	if (t90 != -96761504LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x4665 = -6234068478810396LL;
	static uint32_t x4666 = UINT32_MAX;
	int64_t x4667 = INT64_MIN;
	volatile int16_t x4668 = 3;
	volatile int64_t t91 = -249641441479169LL;

	t91 = (x4665^((x4666&x4667)<<x4668));

	if (t91 != -6234068478810396LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x4669 = -1LL;
	uint8_t x4672 = 11U;
	static volatile uint64_t t92 = 165500578LLU;

	t92 = (x4669^((x4670&x4671)<<x4672));

	if (t92 != 18446744073681203199LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x4686 = INT64_MAX;
	static int64_t x4687 = INT64_MIN;
	volatile int32_t x4688 = 10;
	int64_t t93 = INT64_MIN;

	t93 = (x4685^((x4686&x4687)<<x4688));

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x4733 = 542U;
	uint32_t x4734 = UINT32_MAX;
	int64_t x4735 = INT64_MIN;
	uint16_t x4736 = 1U;

	t94 = (x4733^((x4734&x4735)<<x4736));

	if (t94 != 542LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x4749 = INT64_MIN;
	int64_t x4750 = INT64_MIN;
	static int32_t x4751 = 28241697;
	static uint32_t x4752 = 10U;
	volatile int64_t t95 = INT64_MIN;

	t95 = (x4749^((x4750&x4751)<<x4752));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x4765 = -3979LL;
	volatile int32_t x4766 = INT32_MAX;
	uint8_t x4768 = 21U;
	int64_t t96 = 81089822LL;

	t96 = (x4765^((x4766&x4767)<<x4768));

	if (t96 != -3979LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x4773 = 2207U;
	int16_t x4774 = 17;
	volatile int64_t x4775 = INT64_MIN;
	uint8_t x4776 = 1U;
	int64_t t97 = 1LL;

	t97 = (x4773^((x4774&x4775)<<x4776));

	if (t97 != 2207LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x4817 = INT32_MIN;
	int16_t x4818 = -1;
	uint64_t x4819 = UINT64_MAX;
	uint8_t x4820 = 17U;

	t98 = (x4817^((x4818&x4819)<<x4820));

	if (t98 != 2147352576LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x4981 = INT16_MIN;
	int8_t x4982 = INT8_MAX;
	int16_t x4983 = -1;
	uint16_t x4984 = 20U;

	t99 = (x4981^((x4982&x4983)<<x4984));

	if (t99 != -133201920) { NG(); } else { ; }
	
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

