#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x67 = 3U;
int64_t x106 = 6196424322871315LL;
int64_t t4 = -10979LL;
uint16_t x273 = UINT16_MAX;
uint64_t x333 = 8477845153265929LLU;
int8_t x334 = INT8_MAX;
static uint64_t x439 = 18766388995874020LLU;
static int64_t t9 = -629024164614778026LL;
static uint8_t x522 = 1U;
uint8_t x548 = 1U;
int32_t x663 = -1;
uint8_t x664 = 3U;
int32_t t13 = 1444342;
volatile int32_t t14 = -45069427;
volatile uint8_t x736 = 30U;
volatile int32_t t16 = 2338281;
static int16_t x917 = INT16_MAX;
int8_t x919 = INT8_MIN;
uint16_t x952 = 0U;
uint8_t x1024 = 0U;
int64_t x1126 = INT64_MIN;
uint64_t x1183 = UINT64_MAX;
uint16_t x1193 = 606U;
volatile uint8_t x1196 = 7U;
uint16_t x1293 = 15U;
int16_t x1296 = 4;
static volatile uint32_t x1449 = 8642U;
uint8_t x1452 = 5U;
static int8_t x1458 = -1;
static int8_t x1520 = 16;
uint16_t x1533 = 0U;
int16_t x1604 = 1;
static int16_t x1649 = 0;
uint32_t x1678 = 209753U;
volatile int8_t x1680 = 0;
uint64_t x1735 = 11524701LLU;
uint32_t x1736 = 6U;
uint16_t x1790 = UINT16_MAX;
volatile uint32_t t41 = 128612U;
uint32_t x1898 = 1601197967U;
int32_t x1899 = INT32_MIN;
static uint64_t x1975 = 2LLU;
uint64_t t43 = 4679084243662LLU;
volatile int8_t x2012 = 1;
volatile uint32_t t44 = 80201U;
volatile int32_t x2147 = INT32_MIN;
static uint16_t x2220 = 1U;
uint32_t t50 = 486U;
uint32_t x2353 = UINT32_MAX;
static int32_t x2355 = -1;
uint32_t t51 = 98171395U;
uint16_t x2358 = 16226U;
int8_t x2359 = INT8_MIN;
uint16_t x2389 = UINT16_MAX;
uint64_t x2391 = 3422LLU;
volatile int32_t t53 = 11788150;
static volatile int8_t x2396 = 15;
uint64_t x2467 = UINT64_MAX;
uint32_t x2546 = UINT32_MAX;
int16_t x2547 = -1533;
volatile int32_t x2571 = INT32_MAX;
int32_t t60 = -852920270;
uint64_t x2585 = 1671LLU;
volatile uint64_t t61 = 121282983LLU;
int32_t x2803 = INT32_MIN;
uint32_t t63 = 16U;
uint32_t x2830 = 69671U;
uint8_t x2835 = UINT8_MAX;
uint16_t x2836 = 5U;
uint16_t x3040 = 12U;
int32_t x3061 = 37650;
int16_t x3174 = INT16_MIN;
int8_t x3176 = 0;
static int32_t t71 = -190947;
uint8_t x3217 = 4U;
volatile int8_t x3246 = INT8_MIN;
uint8_t x3308 = 3U;
volatile int32_t t76 = 193;
int32_t x3374 = INT32_MIN;
int64_t x3401 = 19992737318728408LL;
uint16_t x3421 = 0U;
static uint64_t x3449 = UINT64_MAX;
uint32_t x3666 = UINT32_MAX;
volatile uint8_t x3668 = 1U;
volatile int32_t x3764 = 10;
volatile int64_t t84 = -207028194160912LL;
volatile uint64_t x3845 = 26526LLU;
int32_t x3847 = -1;
uint32_t t86 = 94U;
static int8_t x3888 = 0;
volatile int8_t x3962 = 1;
static uint64_t t89 = 5LLU;
uint8_t x4032 = 8U;
static int8_t x4059 = -1;
static volatile uint16_t x4060 = 1U;
uint32_t t95 = 65639U;
int32_t x4354 = INT32_MAX;
uint32_t x4361 = 16U;
volatile uint8_t x4362 = UINT8_MAX;
volatile int64_t x4389 = -1LL;
volatile int32_t x4390 = -6964;
int16_t x4392 = 0;
static int64_t t99 = 1214956217LL;


void f0(void) {
	int8_t x1 = 5;
	uint8_t x2 = 38U;
	int16_t x3 = 7024;
	static uint8_t x4 = 12U;
	static int32_t t0 = 0;

	t0 = ((x1+(x2<=x3))<<x4);

	if (t0 != 24576) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x49 = 2826868196220487238LLU;
	int32_t x50 = INT32_MIN;
	uint8_t x51 = 24U;
	uint8_t x52 = 2U;
	uint64_t t1 = 2407799030167LLU;

	t1 = ((x49+(x50<=x51))<<x52);

	if (t1 != 11307472784881948956LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x61 = UINT16_MAX;
	uint16_t x62 = 10U;
	int16_t x63 = INT16_MAX;
	uint8_t x64 = 1U;
	int32_t t2 = 648;

	t2 = ((x61+(x62<=x63))<<x64);

	if (t2 != 131072) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x65 = 219695893360828LLU;
	static uint64_t x66 = UINT64_MAX;
	uint8_t x68 = 2U;
	uint64_t t3 = 1LLU;

	t3 = ((x65+(x66<=x67))<<x68);

	if (t3 != 878783573443312LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x105 = 2418730864512947LL;
	int8_t x107 = INT8_MIN;
	static uint16_t x108 = 7U;

	t4 = ((x105+(x106<=x107))<<x108);

	if (t4 != 309597550657657216LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x161 = 72;
	uint16_t x162 = 5U;
	static volatile uint8_t x163 = UINT8_MAX;
	int8_t x164 = 24;
	volatile int32_t t5 = -402793760;

	t5 = ((x161+(x162<=x163))<<x164);

	if (t5 != 1224736768) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x274 = INT16_MIN;
	uint64_t x275 = 369938812LLU;
	int32_t x276 = 6;
	static volatile int32_t t6 = -729;

	t6 = ((x273+(x274<=x275))<<x276);

	if (t6 != 4194240) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x335 = INT32_MAX;
	uint8_t x336 = 13U;
	volatile uint64_t t7 = 0LLU;

	t7 = ((x333+(x334<=x335))<<x336);

	if (t7 != 14110275274425843712LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint32_t x357 = 1372476124U;
	volatile int8_t x358 = INT8_MAX;
	static int32_t x359 = INT32_MIN;
	static int16_t x360 = 0;
	static volatile uint32_t t8 = 2500706U;

	t8 = ((x357+(x358<=x359))<<x360);

	if (t8 != 1372476124U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x437 = -1LL;
	int8_t x438 = INT8_MAX;
	volatile uint16_t x440 = 18U;

	t9 = ((x437+(x438<=x439))<<x440);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x521 = INT8_MAX;
	static volatile uint32_t x523 = 1498557593U;
	volatile uint8_t x524 = 3U;
	volatile int32_t t10 = 3551;

	t10 = ((x521+(x522<=x523))<<x524);

	if (t10 != 1024) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x545 = UINT8_MAX;
	uint8_t x546 = 2U;
	static uint8_t x547 = UINT8_MAX;
	int32_t t11 = -227366;

	t11 = ((x545+(x546<=x547))<<x548);

	if (t11 != 512) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x601 = 5997;
	uint16_t x602 = UINT16_MAX;
	static uint32_t x603 = 32984151U;
	int8_t x604 = 1;
	int32_t t12 = -1709358;

	t12 = ((x601+(x602<=x603))<<x604);

	if (t12 != 11996) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x661 = INT8_MAX;
	int64_t x662 = -1LL;

	t13 = ((x661+(x662<=x663))<<x664);

	if (t13 != 1024) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x685 = 1U;
	int8_t x686 = -29;
	static uint32_t x687 = 23U;
	int8_t x688 = 1;

	t14 = ((x685+(x686<=x687))<<x688);

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x733 = 200304856938LLU;
	int16_t x734 = INT16_MIN;
	volatile int16_t x735 = INT16_MIN;
	uint64_t t15 = 25LLU;

	t15 = ((x733+(x734<=x735))<<x736);

	if (t15 != 12161517634935848960LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x793 = UINT8_MAX;
	static volatile int32_t x794 = -1;
	volatile int64_t x795 = INT64_MIN;
	uint32_t x796 = 13U;

	t16 = ((x793+(x794<=x795))<<x796);

	if (t16 != 2088960) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x805 = 58U;
	uint32_t x806 = UINT32_MAX;
	uint16_t x807 = 238U;
	uint16_t x808 = 22U;
	volatile int32_t t17 = 8490;

	t17 = ((x805+(x806<=x807))<<x808);

	if (t17 != 243269632) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x821 = UINT16_MAX;
	uint16_t x822 = 420U;
	uint16_t x823 = UINT16_MAX;
	volatile int8_t x824 = 0;
	volatile int32_t t18 = -1162612;

	t18 = ((x821+(x822<=x823))<<x824);

	if (t18 != 65536) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x918 = 7719393380732236LL;
	int32_t x920 = 0;
	volatile int32_t t19 = 46241;

	t19 = ((x917+(x918<=x919))<<x920);

	if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x949 = UINT8_MAX;
	static uint64_t x950 = 621066542LLU;
	uint64_t x951 = UINT64_MAX;
	int32_t t20 = 2;

	t20 = ((x949+(x950<=x951))<<x952);

	if (t20 != 256) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1021 = -1;
	volatile uint64_t x1022 = 399765277LLU;
	int64_t x1023 = -1LL;
	int32_t t21 = -14;

	t21 = ((x1021+(x1022<=x1023))<<x1024);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1053 = 94387LLU;
	int16_t x1054 = 1;
	int32_t x1055 = INT32_MIN;
	static volatile uint16_t x1056 = 61U;
	volatile uint64_t t22 = 2046496LLU;

	t22 = ((x1053+(x1054<=x1055))<<x1056);

	if (t22 != 6917529027641081856LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1125 = INT8_MAX;
	static volatile int64_t x1127 = -346LL;
	volatile int8_t x1128 = 0;
	static int32_t t23 = -22477;

	t23 = ((x1125+(x1126<=x1127))<<x1128);

	if (t23 != 128) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1181 = 38;
	volatile uint64_t x1182 = 2933501LLU;
	static uint8_t x1184 = 4U;
	static volatile int32_t t24 = -3846;

	t24 = ((x1181+(x1182<=x1183))<<x1184);

	if (t24 != 624) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1194 = INT16_MIN;
	uint64_t x1195 = 637029LLU;
	static volatile int32_t t25 = 133096;

	t25 = ((x1193+(x1194<=x1195))<<x1196);

	if (t25 != 77568) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x1241 = INT16_MAX;
	int64_t x1242 = -13431758LL;
	int32_t x1243 = 53;
	static int16_t x1244 = 1;
	static volatile int32_t t26 = 60872;

	t26 = ((x1241+(x1242<=x1243))<<x1244);

	if (t26 != 65536) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1294 = 1814U;
	uint64_t x1295 = 509974181LLU;
	int32_t t27 = 1;

	t27 = ((x1293+(x1294<=x1295))<<x1296);

	if (t27 != 256) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1377 = 1414LLU;
	static volatile uint32_t x1378 = UINT32_MAX;
	static int64_t x1379 = INT64_MAX;
	volatile uint8_t x1380 = 9U;
	uint64_t t28 = 123960287742LLU;

	t28 = ((x1377+(x1378<=x1379))<<x1380);

	if (t28 != 724480LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x1429 = 4790U;
	int16_t x1430 = 932;
	volatile int64_t x1431 = INT64_MIN;
	int8_t x1432 = 3;
	volatile int32_t t29 = -31031;

	t29 = ((x1429+(x1430<=x1431))<<x1432);

	if (t29 != 38320) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x1450 = -21;
	volatile int8_t x1451 = INT8_MIN;
	uint32_t t30 = 978205U;

	t30 = ((x1449+(x1450<=x1451))<<x1452);

	if (t30 != 276544U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1457 = 1LLU;
	int16_t x1459 = 444;
	volatile int8_t x1460 = 1;
	static volatile uint64_t t31 = 38942683263015249LLU;

	t31 = ((x1457+(x1458<=x1459))<<x1460);

	if (t31 != 4LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x1501 = 7365U;
	int32_t x1502 = INT32_MAX;
	int64_t x1503 = 814289327LL;
	int8_t x1504 = 2;
	int32_t t32 = 107919;

	t32 = ((x1501+(x1502<=x1503))<<x1504);

	if (t32 != 29460) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1517 = 81LLU;
	int16_t x1518 = 0;
	volatile uint32_t x1519 = 641276U;
	uint64_t t33 = 2079877173LLU;

	t33 = ((x1517+(x1518<=x1519))<<x1520);

	if (t33 != 5373952LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1534 = 1305676LLU;
	int32_t x1535 = INT32_MAX;
	uint8_t x1536 = 8U;
	volatile int32_t t34 = -731424385;

	t34 = ((x1533+(x1534<=x1535))<<x1536);

	if (t34 != 256) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1601 = 110U;
	uint64_t x1602 = 88038346687LLU;
	uint8_t x1603 = 4U;
	int32_t t35 = -32826004;

	t35 = ((x1601+(x1602<=x1603))<<x1604);

	if (t35 != 220) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1650 = INT16_MIN;
	static int64_t x1651 = -1LL;
	int16_t x1652 = 1;
	int32_t t36 = 23;

	t36 = ((x1649+(x1650<=x1651))<<x1652);

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x1677 = INT64_MAX;
	int32_t x1679 = 0;
	volatile int64_t t37 = INT64_MAX;

	t37 = ((x1677+(x1678<=x1679))<<x1680);

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1733 = 1503;
	int64_t x1734 = INT64_MIN;
	volatile int32_t t38 = 10865765;

	t38 = ((x1733+(x1734<=x1735))<<x1736);

	if (t38 != 96192) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x1765 = 80959U;
	int8_t x1766 = 2;
	static int16_t x1767 = -1;
	uint8_t x1768 = 2U;
	uint32_t t39 = 1U;

	t39 = ((x1765+(x1766<=x1767))<<x1768);

	if (t39 != 323836U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x1789 = 15U;
	static volatile int8_t x1791 = INT8_MAX;
	static uint32_t x1792 = 18U;
	int32_t t40 = -119469;

	t40 = ((x1789+(x1790<=x1791))<<x1792);

	if (t40 != 3932160) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1869 = 907U;
	uint16_t x1870 = 0U;
	uint16_t x1871 = 0U;
	int8_t x1872 = 0;

	t41 = ((x1869+(x1870<=x1871))<<x1872);

	if (t41 != 908U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x1897 = 58U;
	static int8_t x1900 = 0;
	static uint32_t t42 = 2U;

	t42 = ((x1897+(x1898<=x1899))<<x1900);

	if (t42 != 59U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x1973 = 2LLU;
	int16_t x1974 = -1;
	uint16_t x1976 = 60U;

	t43 = ((x1973+(x1974<=x1975))<<x1976);

	if (t43 != 2305843009213693952LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x2009 = 4003267U;
	volatile int8_t x2010 = INT8_MIN;
	int16_t x2011 = INT16_MIN;

	t44 = ((x2009+(x2010<=x2011))<<x2012);

	if (t44 != 8006534U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2013 = 10908825129LL;
	uint64_t x2014 = 274205814723151LLU;
	uint8_t x2015 = UINT8_MAX;
	uint16_t x2016 = 0U;
	int64_t t45 = 69723874362668726LL;

	t45 = ((x2013+(x2014<=x2015))<<x2016);

	if (t45 != 10908825129LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2041 = INT8_MAX;
	int8_t x2042 = -1;
	int64_t x2043 = INT64_MIN;
	uint16_t x2044 = 1U;
	volatile int32_t t46 = 3;

	t46 = ((x2041+(x2042<=x2043))<<x2044);

	if (t46 != 254) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x2073 = 19;
	static uint64_t x2074 = 463021819282300LLU;
	static int64_t x2075 = INT64_MIN;
	uint8_t x2076 = 5U;
	volatile int32_t t47 = -17042;

	t47 = ((x2073+(x2074<=x2075))<<x2076);

	if (t47 != 640) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2145 = 1U;
	static uint16_t x2146 = 20U;
	int8_t x2148 = 7;
	volatile int32_t t48 = 536;

	t48 = ((x2145+(x2146<=x2147))<<x2148);

	if (t48 != 128) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x2217 = 13;
	uint32_t x2218 = 4U;
	volatile int16_t x2219 = -856;
	int32_t t49 = 55497213;

	t49 = ((x2217+(x2218<=x2219))<<x2220);

	if (t49 != 28) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x2313 = 27812U;
	static volatile int8_t x2314 = 3;
	int32_t x2315 = -1;
	int16_t x2316 = 0;

	t50 = ((x2313+(x2314<=x2315))<<x2316);

	if (t50 != 27812U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2354 = INT32_MAX;
	int16_t x2356 = 19;

	t51 = ((x2353+(x2354<=x2355))<<x2356);

	if (t51 != 4294443008U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x2357 = 73U;
	volatile uint8_t x2360 = 1U;
	int32_t t52 = 1488319;

	t52 = ((x2357+(x2358<=x2359))<<x2360);

	if (t52 != 146) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x2390 = 3U;
	static uint16_t x2392 = 1U;

	t53 = ((x2389+(x2390<=x2391))<<x2392);

	if (t53 != 131072) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x2393 = 1114663LLU;
	int32_t x2394 = -1;
	int8_t x2395 = 11;
	uint64_t t54 = 724983LLU;

	t54 = ((x2393+(x2394<=x2395))<<x2396);

	if (t54 != 36525309952LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x2413 = UINT8_MAX;
	uint64_t x2414 = 498446864LLU;
	int64_t x2415 = INT64_MAX;
	uint8_t x2416 = 1U;
	volatile int32_t t55 = 3152;

	t55 = ((x2413+(x2414<=x2415))<<x2416);

	if (t55 != 512) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x2465 = 14U;
	uint32_t x2466 = UINT32_MAX;
	static uint32_t x2468 = 1U;
	volatile int32_t t56 = 3;

	t56 = ((x2465+(x2466<=x2467))<<x2468);

	if (t56 != 30) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2513 = 106785042681LLU;
	int16_t x2514 = 1;
	static uint32_t x2515 = 3U;
	static uint64_t x2516 = 22LLU;
	static volatile uint64_t t57 = 0LLU;

	t57 = ((x2513+(x2514<=x2515))<<x2516);

	if (t57 != 447888931661283328LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x2545 = 36176285LLU;
	uint16_t x2548 = 62U;
	volatile uint64_t t58 = 1326397398878858LLU;

	t58 = ((x2545+(x2546<=x2547))<<x2548);

	if (t58 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x2561 = UINT8_MAX;
	static int64_t x2562 = 230165LL;
	static int32_t x2563 = INT32_MAX;
	int8_t x2564 = 2;
	int32_t t59 = -3;

	t59 = ((x2561+(x2562<=x2563))<<x2564);

	if (t59 != 1024) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2569 = INT8_MAX;
	volatile int64_t x2570 = INT64_MIN;
	volatile int16_t x2572 = 0;

	t60 = ((x2569+(x2570<=x2571))<<x2572);

	if (t60 != 128) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x2586 = 99U;
	int64_t x2587 = INT64_MAX;
	static volatile int8_t x2588 = 1;

	t61 = ((x2585+(x2586<=x2587))<<x2588);

	if (t61 != 3344LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x2637 = 124442U;
	static uint16_t x2638 = 25744U;
	int32_t x2639 = -73731375;
	uint8_t x2640 = 1U;
	uint32_t t62 = 1543U;

	t62 = ((x2637+(x2638<=x2639))<<x2640);

	if (t62 != 248884U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x2801 = UINT32_MAX;
	uint16_t x2802 = 5U;
	uint16_t x2804 = 22U;

	t63 = ((x2801+(x2802<=x2803))<<x2804);

	if (t63 != 4290772992U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x2829 = 3504;
	int64_t x2831 = INT64_MIN;
	static uint32_t x2832 = 0U;
	volatile int32_t t64 = -1;

	t64 = ((x2829+(x2830<=x2831))<<x2832);

	if (t64 != 3504) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x2833 = 0U;
	uint64_t x2834 = 111LLU;
	int32_t t65 = -814;

	t65 = ((x2833+(x2834<=x2835))<<x2836);

	if (t65 != 32) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x2925 = 44;
	int64_t x2926 = INT64_MIN;
	static uint32_t x2927 = 1093836211U;
	static int32_t x2928 = 0;
	volatile int32_t t66 = 20415;

	t66 = ((x2925+(x2926<=x2927))<<x2928);

	if (t66 != 45) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x2937 = UINT8_MAX;
	int16_t x2938 = -1;
	int16_t x2939 = INT16_MIN;
	uint32_t x2940 = 0U;
	int32_t t67 = -1;

	t67 = ((x2937+(x2938<=x2939))<<x2940);

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x3037 = 10U;
	static uint64_t x3038 = 358649729877349159LLU;
	int8_t x3039 = -3;
	volatile int32_t t68 = -311;

	t68 = ((x3037+(x3038<=x3039))<<x3040);

	if (t68 != 45056) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3045 = INT16_MAX;
	uint8_t x3046 = 1U;
	static int16_t x3047 = -673;
	volatile uint8_t x3048 = 15U;
	volatile int32_t t69 = -19265;

	t69 = ((x3045+(x3046<=x3047))<<x3048);

	if (t69 != 1073709056) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3062 = -1;
	uint8_t x3063 = 1U;
	volatile uint8_t x3064 = 1U;
	int32_t t70 = 1;

	t70 = ((x3061+(x3062<=x3063))<<x3064);

	if (t70 != 75302) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x3173 = 11U;
	int64_t x3175 = INT64_MIN;

	t71 = ((x3173+(x3174<=x3175))<<x3176);

	if (t71 != 11) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x3213 = -1;
	int64_t x3214 = INT64_MIN;
	int16_t x3215 = INT16_MIN;
	int32_t x3216 = 1;
	volatile int32_t t72 = 1;

	t72 = ((x3213+(x3214<=x3215))<<x3216);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x3218 = INT32_MIN;
	uint16_t x3219 = UINT16_MAX;
	static volatile int8_t x3220 = 5;
	volatile int32_t t73 = 184544795;

	t73 = ((x3217+(x3218<=x3219))<<x3220);

	if (t73 != 160) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x3245 = UINT64_MAX;
	uint16_t x3247 = 48U;
	volatile uint8_t x3248 = 1U;
	uint64_t t74 = 485113117331380110LLU;

	t74 = ((x3245+(x3246<=x3247))<<x3248);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint16_t x3249 = 2337U;
	static int16_t x3250 = INT16_MIN;
	uint64_t x3251 = 18147426LLU;
	volatile int8_t x3252 = 7;
	volatile int32_t t75 = 26000545;

	t75 = ((x3249+(x3250<=x3251))<<x3252);

	if (t75 != 299136) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x3305 = UINT8_MAX;
	static volatile int32_t x3306 = -1;
	int16_t x3307 = 0;

	t76 = ((x3305+(x3306<=x3307))<<x3308);

	if (t76 != 2048) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x3373 = 0U;
	int32_t x3375 = INT32_MIN;
	int16_t x3376 = 0;
	static volatile uint32_t t77 = 1363032U;

	t77 = ((x3373+(x3374<=x3375))<<x3376);

	if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint64_t x3402 = 488980913232LLU;
	int8_t x3403 = -1;
	int8_t x3404 = 1;
	volatile int64_t t78 = 112596LL;

	t78 = ((x3401+(x3402<=x3403))<<x3404);

	if (t78 != 39985474637456818LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x3422 = INT32_MIN;
	volatile uint8_t x3423 = UINT8_MAX;
	uint32_t x3424 = 7U;
	int32_t t79 = -18819;

	t79 = ((x3421+(x3422<=x3423))<<x3424);

	if (t79 != 128) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x3450 = UINT8_MAX;
	int64_t x3451 = INT64_MIN;
	uint8_t x3452 = 2U;
	static volatile uint64_t t80 = 3274003326907152LLU;

	t80 = ((x3449+(x3450<=x3451))<<x3452);

	if (t80 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x3525 = 48U;
	int32_t x3526 = 258223;
	int16_t x3527 = INT16_MIN;
	uint32_t x3528 = 11U;
	int32_t t81 = 54007;

	t81 = ((x3525+(x3526<=x3527))<<x3528);

	if (t81 != 98304) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x3533 = 3864LLU;
	volatile int8_t x3534 = INT8_MIN;
	int32_t x3535 = INT32_MIN;
	volatile uint8_t x3536 = 53U;
	volatile uint64_t t82 = 26713686LLU;

	t82 = ((x3533+(x3534<=x3535))<<x3536);

	if (t82 != 16357073846609641472LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x3665 = 10U;
	int8_t x3667 = INT8_MIN;
	int32_t t83 = -2466;

	t83 = ((x3665+(x3666<=x3667))<<x3668);

	if (t83 != 20) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x3761 = 15328669527LL;
	int64_t x3762 = -44693141401LL;
	uint32_t x3763 = 8194427U;

	t84 = ((x3761+(x3762<=x3763))<<x3764);

	if (t84 != 15696557596672LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x3846 = -1;
	static uint16_t x3848 = 3U;
	uint64_t t85 = 649967848LLU;

	t85 = ((x3845+(x3846<=x3847))<<x3848);

	if (t85 != 212216LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x3873 = 0U;
	volatile int8_t x3874 = -1;
	static volatile int64_t x3875 = INT64_MAX;
	static uint16_t x3876 = 1U;

	t86 = ((x3873+(x3874<=x3875))<<x3876);

	if (t86 != 2U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x3885 = 102;
	int16_t x3886 = INT16_MIN;
	uint8_t x3887 = UINT8_MAX;
	volatile int32_t t87 = -50304;

	t87 = ((x3885+(x3886<=x3887))<<x3888);

	if (t87 != 103) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x3929 = UINT16_MAX;
	int32_t x3930 = -1;
	int8_t x3931 = INT8_MIN;
	uint32_t x3932 = 2U;
	volatile int32_t t88 = 438;

	t88 = ((x3929+(x3930<=x3931))<<x3932);

	if (t88 != 262140) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x3961 = 20832661622367LLU;
	uint16_t x3963 = UINT16_MAX;
	static uint16_t x3964 = 0U;

	t89 = ((x3961+(x3962<=x3963))<<x3964);

	if (t89 != 20832661622368LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x4029 = INT16_MAX;
	static volatile int16_t x4030 = INT16_MIN;
	static volatile uint8_t x4031 = 79U;
	static volatile int32_t t90 = 355218167;

	t90 = ((x4029+(x4030<=x4031))<<x4032);

	if (t90 != 8388608) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x4053 = 288U;
	int64_t x4054 = INT64_MIN;
	uint64_t x4055 = UINT64_MAX;
	uint8_t x4056 = 20U;
	volatile int32_t t91 = 1017867700;

	t91 = ((x4053+(x4054<=x4055))<<x4056);

	if (t91 != 303038464) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x4057 = 58;
	volatile int8_t x4058 = INT8_MAX;
	volatile int32_t t92 = -23282893;

	t92 = ((x4057+(x4058<=x4059))<<x4060);

	if (t92 != 116) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x4077 = 19854545612780396LLU;
	static uint16_t x4078 = 458U;
	static int16_t x4079 = INT16_MIN;
	static uint16_t x4080 = 7U;
	volatile uint64_t t93 = 7637034LLU;

	t93 = ((x4077+(x4078<=x4079))<<x4080);

	if (t93 != 2541381838435890688LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x4185 = 2262386118LL;
	uint64_t x4186 = 18110023571313022LLU;
	int64_t x4187 = -129777765206LL;
	static int8_t x4188 = 1;
	static int64_t t94 = -405496991540800376LL;

	t94 = ((x4185+(x4186<=x4187))<<x4188);

	if (t94 != 4524772238LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x4237 = 339938173U;
	int64_t x4238 = INT64_MIN;
	uint16_t x4239 = 5743U;
	int8_t x4240 = 1;

	t95 = ((x4237+(x4238<=x4239))<<x4240);

	if (t95 != 679876348U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x4353 = 0U;
	static uint64_t x4355 = UINT64_MAX;
	int16_t x4356 = 3;
	static volatile uint32_t t96 = 54686U;

	t96 = ((x4353+(x4354<=x4355))<<x4356);

	if (t96 != 8U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x4363 = -21934596319409841LL;
	uint8_t x4364 = 13U;
	uint32_t t97 = 8357U;

	t97 = ((x4361+(x4362<=x4363))<<x4364);

	if (t97 != 131072U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x4391 = 54458822;
	int64_t t98 = 123373650LL;

	t98 = ((x4389+(x4390<=x4391))<<x4392);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x4421 = 240139169LL;
	int8_t x4422 = INT8_MAX;
	uint32_t x4423 = 11U;
	static volatile int64_t x4424 = 2LL;

	t99 = ((x4421+(x4422<=x4423))<<x4424);

	if (t99 != 960556676LL) { NG(); } else { ; }
	
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

