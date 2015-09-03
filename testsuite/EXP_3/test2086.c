#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x97 = UINT16_MAX;
volatile int16_t x99 = -1;
int8_t x106 = 16;
int32_t x158 = -13998;
uint32_t x159 = 10U;
int8_t x167 = INT8_MIN;
static int32_t t5 = -2569811;
static volatile int8_t x292 = INT8_MIN;
uint64_t t6 = 400823645262311858LLU;
int8_t x360 = INT8_MIN;
int16_t x406 = -164;
uint8_t x430 = 48U;
volatile uint8_t x537 = 6U;
int64_t t12 = 0LL;
int8_t x800 = -1;
static int32_t x850 = -26090229;
volatile int64_t t18 = 51LL;
int32_t x1038 = -531577235;
int16_t x1040 = -1;
volatile uint32_t t21 = 4951882U;
static uint16_t x1249 = 4227U;
uint16_t x1250 = UINT16_MAX;
uint64_t x1251 = UINT64_MAX;
static uint16_t x1329 = 11U;
static int8_t x1332 = 1;
uint16_t x1469 = 20502U;
int32_t t31 = -3;
int8_t x1857 = 7;
static int16_t x1907 = 10;
uint32_t t33 = 1U;
volatile int64_t t34 = -1LL;
static int32_t x2006 = INT32_MIN;
volatile uint32_t x2226 = 2124568U;
int32_t x2285 = 828;
int16_t x2286 = -1;
int32_t t40 = -8696;
int16_t x2354 = INT16_MIN;
uint32_t x2355 = UINT32_MAX;
static uint32_t x2577 = 7628776U;
int32_t x2579 = -1;
uint16_t x2610 = UINT16_MAX;
uint16_t x2613 = UINT16_MAX;
volatile int32_t x2616 = -1;
volatile uint64_t t47 = 4298785059056696128LLU;
uint32_t x2632 = UINT32_MAX;
int64_t x2841 = INT64_MIN;
static uint8_t x2857 = 22U;
static int64_t x2858 = 1634LL;
volatile uint32_t t53 = 4776424U;
static uint32_t x3022 = UINT32_MAX;
int32_t x3023 = INT32_MIN;
int64_t x3037 = 1503235630685554380LL;
volatile uint32_t x3039 = UINT32_MAX;
int16_t x3191 = INT16_MIN;
volatile int32_t t57 = 21155060;
uint64_t x3421 = 33682140785404689LLU;
uint32_t x3423 = UINT32_MAX;
volatile int16_t x3449 = INT16_MIN;
static volatile int8_t x3508 = INT8_MAX;
static int16_t x3868 = -1;
uint64_t x3884 = UINT64_MAX;
static int32_t x4063 = -1;
static int32_t x4064 = -1;
volatile int64_t t66 = -1601248516258LL;
int8_t x4140 = -4;
static int64_t x4208 = INT64_MIN;
static uint16_t x4285 = 2U;
static volatile int64_t x4288 = -1LL;
int16_t x4324 = -1;
int64_t x4409 = -1LL;
static uint8_t x4479 = 19U;
int16_t x4899 = -2;
int32_t x4904 = INT32_MIN;
static int32_t t81 = 681042048;
uint32_t x5057 = UINT32_MAX;
uint8_t x5060 = 0U;
int8_t x5147 = -1;
int64_t x5265 = 13034328720736LL;
int16_t x5268 = -1;
static volatile uint64_t x5345 = 2975575075191430562LLU;
int16_t x5346 = INT16_MAX;
int32_t x5521 = -1627;
static volatile int32_t t88 = 20584474;
int16_t x5798 = INT16_MAX;
volatile int16_t x5974 = -1;
volatile uint8_t x5976 = 1U;
static int32_t t91 = -1982777;
uint64_t x6025 = 307LLU;
int16_t x6179 = 108;
static volatile uint64_t x6218 = 517LLU;
uint8_t x6220 = 0U;
uint32_t x6263 = UINT32_MAX;
int32_t x6512 = INT32_MIN;
uint32_t x6692 = UINT32_MAX;


void f0(void) {
	int32_t x93 = INT32_MAX;
	uint16_t x94 = UINT16_MAX;
	uint32_t x95 = UINT32_MAX;
	int8_t x96 = -1;
	int32_t t0 = 289;

	t0 = ((x93%x94)<<(x95^x96));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x98 = -2193106;
	int8_t x100 = -1;
	volatile int32_t t1 = 9596018;

	t1 = ((x97%x98)<<(x99^x100));

	if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x105 = INT32_MIN;
	uint8_t x107 = 1U;
	uint16_t x108 = 2U;
	int32_t t2 = -5237350;

	t2 = ((x105%x106)<<(x107^x108));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x157 = 11U;
	uint8_t x160 = 1U;
	int32_t t3 = -33508662;

	t3 = ((x157%x158)<<(x159^x160));

	if (t3 != 22528) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x165 = UINT32_MAX;
	volatile int8_t x166 = INT8_MIN;
	int8_t x168 = INT8_MIN;
	volatile uint32_t t4 = 937179933U;

	t4 = ((x165%x166)<<(x167^x168));

	if (t4 != 127U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x217 = 9;
	volatile int16_t x218 = -1;
	static volatile int64_t x219 = -1LL;
	int32_t x220 = -1;

	t5 = ((x217%x218)<<(x219^x220));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x289 = 114LLU;
	volatile int32_t x290 = INT32_MIN;
	int8_t x291 = INT8_MIN;

	t6 = ((x289%x290)<<(x291^x292));

	if (t6 != 114LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x357 = UINT32_MAX;
	int32_t x358 = -1;
	int8_t x359 = INT8_MIN;
	volatile uint32_t t7 = 3U;

	t7 = ((x357%x358)<<(x359^x360));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x405 = 8U;
	int32_t x407 = INT32_MAX;
	int32_t x408 = INT32_MAX;
	volatile int32_t t8 = 6539558;

	t8 = ((x405%x406)<<(x407^x408));

	if (t8 != 8) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x429 = 502;
	volatile int64_t x431 = -1LL;
	uint64_t x432 = UINT64_MAX;
	volatile int32_t t9 = -1367122;

	t9 = ((x429%x430)<<(x431^x432));

	if (t9 != 22) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x538 = 11U;
	int64_t x539 = -1LL;
	static int8_t x540 = -1;
	volatile int32_t t10 = -1;

	t10 = ((x537%x538)<<(x539^x540));

	if (t10 != 6) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x733 = 31864U;
	int64_t x734 = -156994LL;
	int8_t x735 = -7;
	uint32_t x736 = UINT32_MAX;
	volatile int64_t t11 = 1917LL;

	t11 = ((x733%x734)<<(x735^x736));

	if (t11 != 2039296LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x777 = INT32_MAX;
	static int64_t x778 = -1LL;
	uint32_t x779 = UINT32_MAX;
	volatile int8_t x780 = -1;

	t12 = ((x777%x778)<<(x779^x780));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x797 = -1;
	int8_t x798 = -1;
	int16_t x799 = -1;
	int32_t t13 = 0;

	t13 = ((x797%x798)<<(x799^x800));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x849 = INT16_MAX;
	int32_t x851 = INT32_MIN;
	int32_t x852 = INT32_MIN;
	int32_t t14 = 0;

	t14 = ((x849%x850)<<(x851^x852));

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x853 = 1100LLU;
	uint32_t x854 = 115979U;
	int32_t x855 = 29;
	static int8_t x856 = 0;
	static volatile uint64_t t15 = 2079038699840240782LLU;

	t15 = ((x853%x854)<<(x855^x856));

	if (t15 != 590558003200LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x857 = -186258938;
	static uint32_t x858 = 51663344U;
	int8_t x859 = -1;
	int16_t x860 = -1;
	uint32_t t16 = 196459469U;

	t16 = ((x857%x858)<<(x859^x860));

	if (t16 != 27304182U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x901 = UINT32_MAX;
	int16_t x902 = -13435;
	uint8_t x903 = 1U;
	uint16_t x904 = 1U;
	uint32_t t17 = 18U;

	t17 = ((x901%x902)<<(x903^x904));

	if (t17 != 13434U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x937 = 8U;
	int64_t x938 = 177643242968LL;
	int32_t x939 = -1;
	static int64_t x940 = -10LL;

	t18 = ((x937%x938)<<(x939^x940));

	if (t18 != 4096LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1033 = UINT32_MAX;
	int32_t x1034 = INT32_MAX;
	int8_t x1035 = 31;
	static uint8_t x1036 = 5U;
	uint32_t t19 = 1123U;

	t19 = ((x1033%x1034)<<(x1035^x1036));

	if (t19 != 67108864U) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x1037 = 7U;
	int16_t x1039 = -1;
	int32_t t20 = -37;

	t20 = ((x1037%x1038)<<(x1039^x1040));

	if (t20 != 7) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1073 = 0;
	uint32_t x1074 = 30367254U;
	static volatile uint8_t x1075 = UINT8_MAX;
	volatile uint32_t x1076 = 252U;

	t21 = ((x1073%x1074)<<(x1075^x1076));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1197 = UINT16_MAX;
	int16_t x1198 = 162;
	static volatile int32_t x1199 = INT32_MIN;
	int32_t x1200 = INT32_MIN;
	int32_t t22 = -26039;

	t22 = ((x1197%x1198)<<(x1199^x1200));

	if (t22 != 87) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1252 = -1;
	int32_t t23 = 22;

	t23 = ((x1249%x1250)<<(x1251^x1252));

	if (t23 != 4227) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1285 = 87862U;
	volatile int64_t x1286 = -508574001867699LL;
	static volatile int16_t x1287 = -1;
	volatile uint32_t x1288 = UINT32_MAX;
	int64_t t24 = -31444520LL;

	t24 = ((x1285%x1286)<<(x1287^x1288));

	if (t24 != 87862LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1330 = -149511;
	static int8_t x1331 = 1;
	static int32_t t25 = -14485552;

	t25 = ((x1329%x1330)<<(x1331^x1332));

	if (t25 != 11) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1377 = 0;
	int8_t x1378 = -1;
	int32_t x1379 = -1;
	int64_t x1380 = -1LL;
	volatile int32_t t26 = -8877;

	t26 = ((x1377%x1378)<<(x1379^x1380));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1470 = 666951U;
	int8_t x1471 = 0;
	volatile uint8_t x1472 = 2U;
	static uint32_t t27 = 202760U;

	t27 = ((x1469%x1470)<<(x1471^x1472));

	if (t27 != 82008U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1521 = UINT8_MAX;
	static uint64_t x1522 = UINT64_MAX;
	static int8_t x1523 = -26;
	uint32_t x1524 = UINT32_MAX;
	volatile uint64_t t28 = 37639335848LLU;

	t28 = ((x1521%x1522)<<(x1523^x1524));

	if (t28 != 8556380160LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1617 = INT32_MAX;
	int64_t x1618 = INT64_MIN;
	int8_t x1619 = -1;
	volatile int32_t x1620 = -12;
	int64_t t29 = 231809LL;

	t29 = ((x1617%x1618)<<(x1619^x1620));

	if (t29 != 4398046509056LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1693 = 134U;
	static uint32_t x1694 = 28055963U;
	int32_t x1695 = INT32_MIN;
	int32_t x1696 = INT32_MIN;
	uint32_t t30 = 130U;

	t30 = ((x1693%x1694)<<(x1695^x1696));

	if (t30 != 134U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1845 = -1;
	int32_t x1846 = -1;
	static uint16_t x1847 = 1U;
	int16_t x1848 = 13;

	t31 = ((x1845%x1846)<<(x1847^x1848));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1858 = 157;
	int8_t x1859 = -22;
	int32_t x1860 = -1;
	int32_t t32 = 128506085;

	t32 = ((x1857%x1858)<<(x1859^x1860));

	if (t32 != 14680064) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint8_t x1905 = 0U;
	uint32_t x1906 = 3U;
	volatile uint8_t x1908 = 0U;

	t33 = ((x1905%x1906)<<(x1907^x1908));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1969 = INT64_MAX;
	static int8_t x1970 = -23;
	int8_t x1971 = 24;
	volatile int32_t x1972 = 1;

	t34 = ((x1969%x1970)<<(x1971^x1972));

	if (t34 != 67108864LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x2005 = INT64_MIN;
	uint8_t x2007 = 28U;
	uint16_t x2008 = 4U;
	static int64_t t35 = -137810417LL;

	t35 = ((x2005%x2006)<<(x2007^x2008));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2109 = INT32_MAX;
	uint32_t x2110 = 80U;
	int16_t x2111 = -1;
	int16_t x2112 = -1;
	volatile uint32_t t36 = 649055U;

	t36 = ((x2109%x2110)<<(x2111^x2112));

	if (t36 != 47U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x2225 = 6660U;
	int16_t x2227 = INT16_MIN;
	int16_t x2228 = INT16_MIN;
	uint32_t t37 = 11561U;

	t37 = ((x2225%x2226)<<(x2227^x2228));

	if (t37 != 6660U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2249 = -1LL;
	static int16_t x2250 = -1;
	static int8_t x2251 = -28;
	volatile int32_t x2252 = -1;
	int64_t t38 = 1995783LL;

	t38 = ((x2249%x2250)<<(x2251^x2252));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2287 = -1;
	int8_t x2288 = -1;
	volatile int32_t t39 = 117331;

	t39 = ((x2285%x2286)<<(x2287^x2288));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2297 = 1;
	int32_t x2298 = -236369;
	uint32_t x2299 = UINT32_MAX;
	int32_t x2300 = -1;

	t40 = ((x2297%x2298)<<(x2299^x2300));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2305 = 2LLU;
	static int64_t x2306 = INT64_MIN;
	volatile uint8_t x2307 = 37U;
	int8_t x2308 = 61;
	static volatile uint64_t t41 = 139978296044155LLU;

	t41 = ((x2305%x2306)<<(x2307^x2308));

	if (t41 != 33554432LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2353 = INT64_MIN;
	volatile int8_t x2356 = -14;
	int64_t t42 = -489LL;

	t42 = ((x2353%x2354)<<(x2355^x2356));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2533 = 3U;
	uint32_t x2534 = UINT32_MAX;
	volatile int32_t x2535 = -1;
	int16_t x2536 = -1;
	volatile uint32_t t43 = 479U;

	t43 = ((x2533%x2534)<<(x2535^x2536));

	if (t43 != 3U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2573 = 403;
	uint32_t x2574 = UINT32_MAX;
	uint32_t x2575 = UINT32_MAX;
	int16_t x2576 = -6;
	static uint32_t t44 = 1554U;

	t44 = ((x2573%x2574)<<(x2575^x2576));

	if (t44 != 12896U) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x2578 = UINT8_MAX;
	int32_t x2580 = -17;
	volatile uint32_t t45 = 0U;

	t45 = ((x2577%x2578)<<(x2579^x2580));

	if (t45 != 12845056U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2609 = UINT64_MAX;
	int8_t x2611 = INT8_MIN;
	int8_t x2612 = INT8_MIN;
	volatile uint64_t t46 = 23LLU;

	t46 = ((x2609%x2610)<<(x2611^x2612));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x2614 = 164096046706LLU;
	uint64_t x2615 = UINT64_MAX;

	t47 = ((x2613%x2614)<<(x2615^x2616));

	if (t47 != 65535LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2629 = INT16_MIN;
	uint32_t x2630 = UINT32_MAX;
	int16_t x2631 = -1;
	volatile uint32_t t48 = 925U;

	t48 = ((x2629%x2630)<<(x2631^x2632));

	if (t48 != 4294934528U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2842 = INT8_MIN;
	int16_t x2843 = INT16_MIN;
	int16_t x2844 = INT16_MIN;
	int64_t t49 = 44045LL;

	t49 = ((x2841%x2842)<<(x2843^x2844));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x2859 = INT32_MIN;
	static int32_t x2860 = INT32_MIN;
	static volatile int64_t t50 = -520268LL;

	t50 = ((x2857%x2858)<<(x2859^x2860));

	if (t50 != 22LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2889 = INT64_MIN;
	static int64_t x2890 = INT64_MIN;
	static int8_t x2891 = -30;
	volatile int64_t x2892 = -1LL;
	volatile int64_t t51 = 433557559337LL;

	t51 = ((x2889%x2890)<<(x2891^x2892));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint16_t x2949 = 491U;
	uint16_t x2950 = 3730U;
	int16_t x2951 = INT16_MIN;
	int16_t x2952 = INT16_MIN;
	volatile int32_t t52 = 16170358;

	t52 = ((x2949%x2950)<<(x2951^x2952));

	if (t52 != 491) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x2957 = 4286U;
	uint32_t x2958 = UINT32_MAX;
	int8_t x2959 = 14;
	volatile int8_t x2960 = 0;

	t53 = ((x2957%x2958)<<(x2959^x2960));

	if (t53 != 70221824U) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x3021 = INT32_MAX;
	int32_t x3024 = INT32_MIN;
	volatile uint32_t t54 = 5U;

	t54 = ((x3021%x3022)<<(x3023^x3024));

	if (t54 != 2147483647U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x3038 = 2118745687988469889LLU;
	int16_t x3040 = -1;
	uint64_t t55 = 2035667096LLU;

	t55 = ((x3037%x3038)<<(x3039^x3040));

	if (t55 != 1503235630685554380LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x3145 = INT8_MAX;
	uint16_t x3146 = 3U;
	int64_t x3147 = -1LL;
	static int64_t x3148 = -1LL;
	volatile int32_t t56 = 1;

	t56 = ((x3145%x3146)<<(x3147^x3148));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x3189 = 0;
	volatile uint16_t x3190 = 3U;
	int16_t x3192 = INT16_MIN;

	t57 = ((x3189%x3190)<<(x3191^x3192));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x3193 = 3615U;
	static uint16_t x3194 = 4268U;
	int32_t x3195 = INT32_MAX;
	int32_t x3196 = INT32_MAX;
	int32_t t58 = -2561;

	t58 = ((x3193%x3194)<<(x3195^x3196));

	if (t58 != 3615) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x3422 = INT16_MIN;
	uint32_t x3424 = UINT32_MAX;
	volatile uint64_t t59 = 17906LLU;

	t59 = ((x3421%x3422)<<(x3423^x3424));

	if (t59 != 33682140785404689LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x3450 = -1;
	volatile int16_t x3451 = -1;
	volatile uint64_t x3452 = UINT64_MAX;
	volatile int32_t t60 = -200;

	t60 = ((x3449%x3450)<<(x3451^x3452));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x3505 = UINT64_MAX;
	uint64_t x3506 = 39404LLU;
	uint8_t x3507 = 92U;
	volatile uint64_t t61 = 107021LLU;

	t61 = ((x3505%x3506)<<(x3507^x3508));

	if (t61 != 1183864785469440LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x3513 = 1U;
	volatile int16_t x3514 = INT16_MIN;
	int64_t x3515 = INT64_MAX;
	int64_t x3516 = INT64_MAX;
	static int32_t t62 = -52785;

	t62 = ((x3513%x3514)<<(x3515^x3516));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x3657 = UINT32_MAX;
	static int8_t x3658 = INT8_MAX;
	int32_t x3659 = -1;
	int8_t x3660 = -1;
	static uint32_t t63 = 256U;

	t63 = ((x3657%x3658)<<(x3659^x3660));

	if (t63 != 15U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x3865 = 16121U;
	static uint32_t x3866 = 107823U;
	int64_t x3867 = -1LL;
	uint32_t t64 = 16055687U;

	t64 = ((x3865%x3866)<<(x3867^x3868));

	if (t64 != 16121U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x3881 = INT64_MAX;
	uint64_t x3882 = 28LLU;
	static int16_t x3883 = -8;
	volatile uint64_t t65 = 5790639424289LLU;

	t65 = ((x3881%x3882)<<(x3883^x3884));

	if (t65 != 896LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x4061 = -847489406993LL;
	volatile int8_t x4062 = 1;

	t66 = ((x4061%x4062)<<(x4063^x4064));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x4137 = INT64_MAX;
	int64_t x4138 = INT64_MAX;
	static int64_t x4139 = -1LL;
	volatile int64_t t67 = -11492515115733LL;

	t67 = ((x4137%x4138)<<(x4139^x4140));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x4161 = UINT16_MAX;
	uint16_t x4162 = 6940U;
	uint64_t x4163 = 12LLU;
	int32_t x4164 = 3;
	static volatile int32_t t68 = 1;

	t68 = ((x4161%x4162)<<(x4163^x4164));

	if (t68 != 100761600) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x4205 = UINT8_MAX;
	uint8_t x4206 = UINT8_MAX;
	int64_t x4207 = INT64_MIN;
	volatile int32_t t69 = 30;

	t69 = ((x4205%x4206)<<(x4207^x4208));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x4286 = 9U;
	static int16_t x4287 = -1;
	static uint32_t t70 = 57U;

	t70 = ((x4285%x4286)<<(x4287^x4288));

	if (t70 != 2U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x4321 = 1768;
	int32_t x4322 = INT32_MIN;
	volatile int32_t x4323 = -1;
	volatile int32_t t71 = -23152463;

	t71 = ((x4321%x4322)<<(x4323^x4324));

	if (t71 != 1768) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x4333 = INT32_MAX;
	static volatile int8_t x4334 = -1;
	uint8_t x4335 = 27U;
	volatile int8_t x4336 = 3;
	int32_t t72 = -136;

	t72 = ((x4333%x4334)<<(x4335^x4336));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x4410 = -1LL;
	uint16_t x4411 = 0U;
	int64_t x4412 = 0LL;
	int64_t t73 = 1320634741767776362LL;

	t73 = ((x4409%x4410)<<(x4411^x4412));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x4477 = 1479520322460451LLU;
	int64_t x4478 = INT64_MAX;
	uint32_t x4480 = 1U;
	uint64_t t74 = 5LLU;

	t74 = ((x4477%x4478)<<(x4479^x4480));

	if (t74 != 465749863171883008LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x4561 = 0;
	volatile uint32_t x4562 = 2429225U;
	volatile uint64_t x4563 = UINT64_MAX;
	int8_t x4564 = -1;
	static uint32_t t75 = 27U;

	t75 = ((x4561%x4562)<<(x4563^x4564));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x4569 = 2808985257407607LLU;
	int32_t x4570 = INT32_MAX;
	static uint16_t x4571 = UINT16_MAX;
	static uint16_t x4572 = UINT16_MAX;
	uint64_t t76 = 640900761457LLU;

	t76 = ((x4569%x4570)<<(x4571^x4572));

	if (t76 != 1485203962LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x4649 = 359LLU;
	volatile int64_t x4650 = -2320999LL;
	int32_t x4651 = -1;
	static int16_t x4652 = -7;
	volatile uint64_t t77 = 9138304LLU;

	t77 = ((x4649%x4650)<<(x4651^x4652));

	if (t77 != 22976LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x4897 = INT8_MIN;
	int16_t x4898 = -1;
	int16_t x4900 = -1;
	int32_t t78 = -4;

	t78 = ((x4897%x4898)<<(x4899^x4900));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x4901 = INT64_MAX;
	int32_t x4902 = 770398265;
	int32_t x4903 = INT32_MIN;
	int64_t t79 = -382269537471LL;

	t79 = ((x4901%x4902)<<(x4903^x4904));

	if (t79 != 499334752LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x5001 = 4U;
	static uint64_t x5002 = 30846987152729LLU;
	volatile int16_t x5003 = -1;
	volatile int16_t x5004 = -24;
	volatile uint64_t t80 = 75LLU;

	t80 = ((x5001%x5002)<<(x5003^x5004));

	if (t80 != 33554432LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x5037 = INT8_MIN;
	int8_t x5038 = INT8_MIN;
	uint64_t x5039 = UINT64_MAX;
	int64_t x5040 = -1LL;

	t81 = ((x5037%x5038)<<(x5039^x5040));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x5041 = 82268136613392LL;
	int64_t x5042 = -11010472961157LL;
	int8_t x5043 = -18;
	int16_t x5044 = -1;
	volatile int64_t t82 = -1LL;

	t82 = ((x5041%x5042)<<(x5043^x5044));

	if (t82 != 680896218437124096LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x5058 = 11;
	uint16_t x5059 = 0U;
	volatile uint32_t t83 = 541994U;

	t83 = ((x5057%x5058)<<(x5059^x5060));

	if (t83 != 3U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x5145 = 0;
	uint8_t x5146 = UINT8_MAX;
	volatile int64_t x5148 = -1LL;
	volatile int32_t t84 = -82343;

	t84 = ((x5145%x5146)<<(x5147^x5148));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x5266 = INT32_MAX;
	int8_t x5267 = -1;
	static int64_t t85 = -1LL;

	t85 = ((x5265%x5266)<<(x5267^x5268));

	if (t85 != 1250467093LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x5347 = INT8_MIN;
	int8_t x5348 = INT8_MIN;
	volatile uint64_t t86 = 16666LLU;

	t86 = ((x5345%x5346)<<(x5347^x5348));

	if (t86 != 23972LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x5381 = 4031154LL;
	uint16_t x5382 = 4U;
	int8_t x5383 = INT8_MAX;
	static int8_t x5384 = INT8_MAX;
	int64_t t87 = 4LL;

	t87 = ((x5381%x5382)<<(x5383^x5384));

	if (t87 != 2LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x5522 = -1;
	int8_t x5523 = -1;
	volatile int32_t x5524 = -2;

	t88 = ((x5521%x5522)<<(x5523^x5524));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x5581 = 3;
	volatile uint16_t x5582 = UINT16_MAX;
	int64_t x5583 = -1LL;
	volatile int8_t x5584 = -28;
	volatile int32_t t89 = -618096873;

	t89 = ((x5581%x5582)<<(x5583^x5584));

	if (t89 != 402653184) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x5797 = 3964146597404426LLU;
	uint8_t x5799 = 15U;
	uint8_t x5800 = 1U;
	volatile uint64_t t90 = 9490740LLU;

	t90 = ((x5797%x5798)<<(x5799^x5800));

	if (t90 != 69255168LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x5973 = 8;
	uint8_t x5975 = 3U;

	t91 = ((x5973%x5974)<<(x5975^x5976));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x5993 = 7191486U;
	int64_t x5994 = 7LL;
	uint64_t x5995 = UINT64_MAX;
	uint64_t x5996 = UINT64_MAX;
	volatile int64_t t92 = -291820572207LL;

	t92 = ((x5993%x5994)<<(x5995^x5996));

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x6026 = INT32_MIN;
	uint8_t x6027 = UINT8_MAX;
	static volatile uint8_t x6028 = UINT8_MAX;
	volatile uint64_t t93 = 1823943317LLU;

	t93 = ((x6025%x6026)<<(x6027^x6028));

	if (t93 != 307LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x6177 = -1;
	uint64_t x6178 = 808489LLU;
	uint32_t x6180 = 104U;
	static volatile uint64_t t94 = 22600092LLU;

	t94 = ((x6177%x6178)<<(x6179^x6180));

	if (t94 != 4798528LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x6217 = 16608210U;
	uint8_t x6219 = 59U;
	static volatile uint64_t t95 = 46506720732854942LLU;

	t95 = ((x6217%x6218)<<(x6219^x6220));

	if (t95 != 3458764513820540928LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x6261 = 6U;
	static int32_t x6262 = -1;
	int8_t x6264 = -1;
	volatile int32_t t96 = -1;

	t96 = ((x6261%x6262)<<(x6263^x6264));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x6277 = -144216;
	volatile uint32_t x6278 = UINT32_MAX;
	volatile uint16_t x6279 = 6U;
	int8_t x6280 = 4;
	static volatile uint32_t t97 = 100U;

	t97 = ((x6277%x6278)<<(x6279^x6280));

	if (t97 != 4294390432U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x6509 = 1U;
	int8_t x6510 = 1;
	int32_t x6511 = INT32_MIN;
	volatile int32_t t98 = 364991141;

	t98 = ((x6509%x6510)<<(x6511^x6512));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x6689 = 66727LL;
	uint8_t x6690 = 15U;
	static int32_t x6691 = -1;
	int64_t t99 = -469373LL;

	t99 = ((x6689%x6690)<<(x6691^x6692));

	if (t99 != 7LL) { NG(); } else { ; }
	
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

