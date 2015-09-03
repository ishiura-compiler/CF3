#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x12 = 3U;
static volatile uint32_t t0 = 3403425U;
static volatile int64_t x178 = 3222909LL;
volatile int64_t x257 = 1770LL;
int64_t x258 = INT64_MIN;
uint64_t x282 = 79097670152LLU;
int64_t x314 = 53749091638358LL;
volatile int64_t x322 = -36698LL;
uint32_t x324 = 2U;
volatile uint32_t x398 = UINT32_MAX;
volatile uint64_t t8 = 586446108101LLU;
volatile int64_t x498 = INT64_MIN;
uint8_t x559 = UINT8_MAX;
int16_t x579 = -132;
volatile int32_t x580 = 1;
volatile int64_t t18 = -571087517359125139LL;
uint64_t x667 = 3291677LLU;
static uint64_t x677 = UINT64_MAX;
static int8_t x679 = INT8_MIN;
int32_t x680 = 1;
volatile int64_t t21 = -322238046852LL;
int32_t x814 = -176091386;
uint8_t x840 = 8U;
uint64_t x849 = 1284288242254LLU;
int32_t x871 = -5193968;
volatile uint8_t x872 = 29U;
int32_t x1000 = 13;
int8_t x1067 = INT8_MIN;
static int32_t x1077 = INT32_MIN;
static int64_t t30 = -2057064997126441504LL;
int16_t x1128 = 15;
static int16_t x1137 = INT16_MIN;
int8_t x1174 = -14;
int64_t x1203 = INT64_MAX;
volatile uint64_t x1213 = 102388092LLU;
int8_t x1215 = -30;
volatile uint64_t t35 = 86915798076757199LLU;
static volatile int32_t x1274 = -1;
int64_t t36 = 1LL;
int64_t x1330 = -1LL;
volatile uint8_t x1331 = 6U;
uint8_t x1332 = 27U;
uint8_t x1354 = UINT8_MAX;
int32_t x1509 = INT32_MIN;
volatile int16_t x1511 = INT16_MAX;
int32_t x1512 = 24;
static uint16_t x1528 = 1U;
uint16_t x1561 = 808U;
static uint16_t x1564 = 1U;
volatile int8_t x1744 = 1;
int64_t x1945 = 182335329LL;
int16_t x1965 = -3;
uint8_t x1982 = 12U;
volatile int64_t t54 = -6033LL;
int8_t x2037 = 20;
volatile int64_t t55 = 2LL;
uint32_t x2086 = 397U;
uint32_t t58 = 101U;
int64_t x2109 = INT64_MIN;
volatile uint64_t x2119 = UINT64_MAX;
uint8_t x2120 = 30U;
volatile int16_t x2238 = 72;
int32_t x2315 = 58871636;
uint8_t x2456 = 1U;
volatile uint64_t t66 = 58LLU;
static int16_t x2608 = 1;
uint64_t t70 = 2545864738407160LLU;
int64_t x2774 = 49305203LL;
static uint64_t x2849 = UINT64_MAX;
int64_t t74 = 59752019366LL;
int16_t x3182 = 0;
static int8_t x3306 = INT8_MAX;
int32_t x3307 = INT32_MIN;
int64_t x3421 = INT64_MAX;
uint64_t x3455 = UINT64_MAX;
int8_t x3560 = 1;
static int16_t x3562 = INT16_MIN;
int32_t x3563 = 5131184;
volatile int32_t t87 = 432;
static uint16_t x3759 = 0U;
int32_t x3843 = INT32_MIN;
int64_t x3865 = -1LL;
static uint64_t x3868 = 23LLU;
volatile uint64_t t90 = 1623232944LLU;
volatile int32_t x3966 = -1;
int64_t x4141 = -351477LL;
int32_t t97 = -4131;


void f0(void) {
	int8_t x9 = -1;
	uint32_t x10 = UINT32_MAX;
	int32_t x11 = 1;

	t0 = (((x9+x10)&x11)<<x12);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x177 = -1;
	volatile int32_t x179 = INT32_MIN;
	static uint16_t x180 = 49U;
	volatile int64_t t1 = -13706314835814LL;

	t1 = (((x177+x178)&x179)<<x180);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x197 = -1LL;
	uint16_t x198 = 50U;
	int32_t x199 = 1354;
	uint16_t x200 = 7U;
	static volatile int64_t t2 = -10942168857763LL;

	t2 = (((x197+x198)&x199)<<x200);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x259 = 1;
	uint16_t x260 = 37U;
	int64_t t3 = -566239795483350690LL;

	t3 = (((x257+x258)&x259)<<x260);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x281 = INT64_MIN;
	uint8_t x283 = 0U;
	int8_t x284 = 9;
	volatile uint64_t t4 = 1226LLU;

	t4 = (((x281+x282)&x283)<<x284);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x313 = -27;
	uint8_t x315 = UINT8_MAX;
	static int32_t x316 = 1;
	int64_t t5 = -1LL;

	t5 = (((x313+x314)&x315)<<x316);

	if (t5 != 118LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x321 = INT8_MIN;
	uint8_t x323 = 71U;
	static int64_t t6 = 15565LL;

	t6 = (((x321+x322)&x323)<<x324);

	if (t6 != 24LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x397 = -1;
	static uint64_t x399 = 37LLU;
	int8_t x400 = 1;
	uint64_t t7 = 51205854580003274LLU;

	t7 = (((x397+x398)&x399)<<x400);

	if (t7 != 72LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x413 = INT64_MIN;
	int8_t x414 = 27;
	static uint64_t x415 = UINT64_MAX;
	uint16_t x416 = 11U;

	t8 = (((x413+x414)&x415)<<x416);

	if (t8 != 55296LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x429 = 4360LL;
	volatile int64_t x430 = 1209778LL;
	uint16_t x431 = UINT16_MAX;
	uint8_t x432 = 0U;
	volatile int64_t t9 = -1557755343541187LL;

	t9 = (((x429+x430)&x431)<<x432);

	if (t9 != 34490LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x441 = -43879043402LL;
	volatile int8_t x442 = INT8_MIN;
	uint16_t x443 = 18516U;
	uint16_t x444 = 1U;
	int64_t t10 = -792073025624196010LL;

	t10 = (((x441+x442)&x443)<<x444);

	if (t10 != 36904LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x469 = 1;
	int32_t x470 = 0;
	volatile int16_t x471 = INT16_MAX;
	static uint8_t x472 = 14U;
	int32_t t11 = 2608367;

	t11 = (((x469+x470)&x471)<<x472);

	if (t11 != 16384) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x489 = UINT64_MAX;
	volatile int16_t x490 = 7;
	uint8_t x491 = 35U;
	int16_t x492 = 15;
	uint64_t t12 = 9LLU;

	t12 = (((x489+x490)&x491)<<x492);

	if (t12 != 65536LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x497 = 108U;
	volatile uint8_t x499 = 59U;
	uint32_t x500 = 0U;
	static volatile int64_t t13 = 2013047661764LL;

	t13 = (((x497+x498)&x499)<<x500);

	if (t13 != 40LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x545 = INT16_MIN;
	static int64_t x546 = -1LL;
	uint8_t x547 = 41U;
	static int8_t x548 = 0;
	int64_t t14 = 2192056044004340773LL;

	t14 = (((x545+x546)&x547)<<x548);

	if (t14 != 41LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x557 = 1;
	int32_t x558 = -1;
	uint8_t x560 = 1U;
	static volatile int32_t t15 = -242;

	t15 = (((x557+x558)&x559)<<x560);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x561 = 6U;
	volatile int8_t x562 = INT8_MIN;
	uint16_t x563 = UINT16_MAX;
	static volatile int8_t x564 = 5;
	int32_t t16 = 2;

	t16 = (((x561+x562)&x563)<<x564);

	if (t16 != 2093248) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x577 = 6;
	int32_t x578 = 16;
	static int32_t t17 = 7998;

	t17 = (((x577+x578)&x579)<<x580);

	if (t17 != 40) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x589 = -1;
	int16_t x590 = 1022;
	int64_t x591 = -45667LL;
	volatile int16_t x592 = 10;

	t18 = (((x589+x590)&x591)<<x592);

	if (t18 != 422912LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x665 = INT64_MIN;
	uint8_t x666 = UINT8_MAX;
	uint8_t x668 = 2U;
	uint64_t t19 = 2911145853LLU;

	t19 = (((x665+x666)&x667)<<x668);

	if (t19 != 116LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x678 = UINT16_MAX;
	volatile uint64_t t20 = 110728831955667LLU;

	t20 = (((x677+x678)&x679)<<x680);

	if (t20 != 130816LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x713 = -334767751LL;
	volatile int8_t x714 = INT8_MIN;
	static volatile uint16_t x715 = UINT16_MAX;
	static int16_t x716 = 4;

	t21 = (((x713+x714)&x715)<<x716);

	if (t21 != 888720LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x813 = 1681817;
	int8_t x815 = 9;
	static uint16_t x816 = 3U;
	volatile int32_t t22 = -1345210;

	t22 = (((x813+x814)&x815)<<x816);

	if (t22 != 72) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x825 = -1;
	static uint8_t x826 = UINT8_MAX;
	volatile int16_t x827 = INT16_MIN;
	uint8_t x828 = 29U;
	int32_t t23 = -3385168;

	t23 = (((x825+x826)&x827)<<x828);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x837 = 97U;
	int64_t x838 = -1LL;
	uint32_t x839 = UINT32_MAX;
	volatile int64_t t24 = 91LL;

	t24 = (((x837+x838)&x839)<<x840);

	if (t24 != 24576LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x850 = INT8_MIN;
	volatile uint64_t x851 = UINT64_MAX;
	uint64_t x852 = 6LLU;
	static uint64_t t25 = 254993138LLU;

	t25 = (((x849+x850)&x851)<<x852);

	if (t25 != 82194447496064LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x869 = UINT32_MAX;
	uint16_t x870 = UINT16_MAX;
	volatile uint32_t t26 = 272631244U;

	t26 = (((x869+x870)&x871)<<x872);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x953 = INT64_MAX;
	volatile int32_t x954 = INT32_MIN;
	int32_t x955 = -9517840;
	volatile int8_t x956 = 0;
	volatile int64_t t27 = -1549LL;

	t27 = (((x953+x954)&x955)<<x956);

	if (t27 != 9223372034697774320LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x997 = -6328811498952LL;
	uint8_t x998 = 91U;
	uint8_t x999 = 6U;
	int64_t t28 = 332LL;

	t28 = (((x997+x998)&x999)<<x1000);

	if (t28 != 16384LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1065 = -1;
	uint32_t x1066 = 1U;
	int8_t x1068 = 5;
	uint32_t t29 = 943U;

	t29 = (((x1065+x1066)&x1067)<<x1068);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1078 = INT64_MAX;
	static int8_t x1079 = 2;
	static int32_t x1080 = 1;

	t30 = (((x1077+x1078)&x1079)<<x1080);

	if (t30 != 4LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x1125 = -1LL;
	int64_t x1126 = 2261LL;
	volatile int16_t x1127 = INT16_MAX;
	int64_t t31 = -1012924524884LL;

	t31 = (((x1125+x1126)&x1127)<<x1128);

	if (t31 != 74055680LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x1138 = 5559346615LL;
	volatile int32_t x1139 = INT32_MAX;
	static uint8_t x1140 = 0U;
	volatile int64_t t32 = 2022997495111536344LL;

	t32 = (((x1137+x1138)&x1139)<<x1140);

	if (t32 != 1264346551LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1173 = UINT16_MAX;
	int32_t x1175 = INT32_MIN;
	uint16_t x1176 = 0U;
	int32_t t33 = 448236;

	t33 = (((x1173+x1174)&x1175)<<x1176);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x1201 = 22982U;
	static int16_t x1202 = INT16_MIN;
	uint8_t x1204 = 0U;
	int64_t t34 = 204163LL;

	t34 = (((x1201+x1202)&x1203)<<x1204);

	if (t34 != 4294957510LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1214 = UINT64_MAX;
	static uint8_t x1216 = 3U;

	t35 = (((x1213+x1214)&x1215)<<x1216);

	if (t35 != 819104528LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x1273 = INT16_MIN;
	int64_t x1275 = INT64_MAX;
	volatile int16_t x1276 = 0;

	t36 = (((x1273+x1274)&x1275)<<x1276);

	if (t36 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1329 = 1032729597243659653LLU;
	volatile uint64_t t37 = 5LLU;

	t37 = (((x1329+x1330)&x1331)<<x1332);

	if (t37 != 536870912LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x1337 = UINT64_MAX;
	volatile int64_t x1338 = INT64_MIN;
	uint32_t x1339 = 588675572U;
	uint16_t x1340 = 4U;
	uint64_t t38 = 0LLU;

	t38 = (((x1337+x1338)&x1339)<<x1340);

	if (t38 != 9418809152LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x1353 = 9U;
	int32_t x1355 = -617;
	uint8_t x1356 = 5U;
	volatile int32_t t39 = 0;

	t39 = (((x1353+x1354)&x1355)<<x1356);

	if (t39 != 8192) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1437 = -1LL;
	volatile int64_t x1438 = -1LL;
	volatile int32_t x1439 = INT32_MAX;
	int16_t x1440 = 9;
	int64_t t40 = -3489158733284445007LL;

	t40 = (((x1437+x1438)&x1439)<<x1440);

	if (t40 != 1099511626752LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x1473 = UINT8_MAX;
	volatile int32_t x1474 = 9249;
	int8_t x1475 = -3;
	uint8_t x1476 = 10U;
	static volatile int32_t t41 = -878790;

	t41 = (((x1473+x1474)&x1475)<<x1476);

	if (t41 != 9732096) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1489 = 18U;
	int8_t x1490 = 3;
	volatile int8_t x1491 = INT8_MIN;
	static int16_t x1492 = 0;
	volatile int32_t t42 = -185953;

	t42 = (((x1489+x1490)&x1491)<<x1492);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1510 = INT64_MAX;
	int64_t t43 = -2167537905LL;

	t43 = (((x1509+x1510)&x1511)<<x1512);

	if (t43 != 549739036672LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1525 = 1LLU;
	int8_t x1526 = -1;
	uint64_t x1527 = 1878481304228LLU;
	volatile uint64_t t44 = 15820431289048LLU;

	t44 = (((x1525+x1526)&x1527)<<x1528);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1562 = -5479;
	int32_t x1563 = 45112768;
	int32_t t45 = -339401;

	t45 = (((x1561+x1562)&x1563)<<x1564);

	if (t45 != 90217344) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1741 = 1759;
	uint16_t x1742 = 3U;
	static uint64_t x1743 = UINT64_MAX;
	uint64_t t46 = 7678577463998760LLU;

	t46 = (((x1741+x1742)&x1743)<<x1744);

	if (t46 != 3524LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x1745 = INT8_MAX;
	uint8_t x1746 = 2U;
	static int16_t x1747 = INT16_MAX;
	volatile int8_t x1748 = 0;
	volatile int32_t t47 = 22;

	t47 = (((x1745+x1746)&x1747)<<x1748);

	if (t47 != 129) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x1813 = 65976212LLU;
	static uint32_t x1814 = 1236U;
	volatile uint32_t x1815 = 7477U;
	uint8_t x1816 = 54U;
	volatile uint64_t t48 = 2428LLU;

	t48 = (((x1813+x1814)&x1815)<<x1816);

	if (t48 != 576460752303423488LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x1946 = 3488742680822162LLU;
	static uint64_t x1947 = 5259LLU;
	uint32_t x1948 = 22U;
	volatile uint64_t t49 = 985011417374615692LLU;

	t49 = (((x1945+x1946)&x1947)<<x1948);

	if (t49 != 17729323008LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x1957 = -19;
	uint16_t x1958 = 114U;
	int16_t x1959 = INT16_MIN;
	int8_t x1960 = 1;
	static int32_t t50 = -18533599;

	t50 = (((x1957+x1958)&x1959)<<x1960);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x1966 = -26843528;
	int16_t x1967 = 1;
	static volatile uint32_t x1968 = 12U;
	static volatile int32_t t51 = 3910;

	t51 = (((x1965+x1966)&x1967)<<x1968);

	if (t51 != 4096) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x1977 = INT64_MIN;
	uint16_t x1978 = 22010U;
	int16_t x1979 = 2;
	uint8_t x1980 = 51U;
	volatile int64_t t52 = 4331LL;

	t52 = (((x1977+x1978)&x1979)<<x1980);

	if (t52 != 4503599627370496LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x1981 = -2;
	int32_t x1983 = -1;
	static int64_t x1984 = 5LL;
	static int32_t t53 = -23;

	t53 = (((x1981+x1982)&x1983)<<x1984);

	if (t53 != 320) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x2013 = 14022U;
	int16_t x2014 = INT16_MAX;
	int64_t x2015 = -1LL;
	int16_t x2016 = 16;

	t54 = (((x2013+x2014)&x2015)<<x2016);

	if (t54 != 3066363904LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x2038 = INT64_MIN;
	uint16_t x2039 = 346U;
	uint32_t x2040 = 6U;

	t55 = (((x2037+x2038)&x2039)<<x2040);

	if (t55 != 1024LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x2065 = -124;
	int8_t x2066 = INT8_MAX;
	uint8_t x2067 = UINT8_MAX;
	int8_t x2068 = 0;
	static int32_t t56 = -5546640;

	t56 = (((x2065+x2066)&x2067)<<x2068);

	if (t56 != 3) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x2069 = UINT16_MAX;
	int8_t x2070 = -7;
	int16_t x2071 = -1;
	uint16_t x2072 = 15U;
	int32_t t57 = -1440492;

	t57 = (((x2069+x2070)&x2071)<<x2072);

	if (t57 != 2147221504) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x2085 = 938U;
	int16_t x2087 = -1;
	static int8_t x2088 = 17;

	t58 = (((x2085+x2086)&x2087)<<x2088);

	if (t58 != 174981120U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x2110 = UINT8_MAX;
	int64_t x2111 = INT64_MAX;
	uint16_t x2112 = 24U;
	int64_t t59 = -274548163796LL;

	t59 = (((x2109+x2110)&x2111)<<x2112);

	if (t59 != 4278190080LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x2117 = INT8_MAX;
	volatile int32_t x2118 = -1;
	uint64_t t60 = 5188554988488LLU;

	t60 = (((x2117+x2118)&x2119)<<x2120);

	if (t60 != 135291469824LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x2209 = INT32_MIN;
	static volatile uint32_t x2210 = UINT32_MAX;
	volatile int64_t x2211 = INT64_MIN;
	static int8_t x2212 = 1;
	static int64_t t61 = 7421308480162LL;

	t61 = (((x2209+x2210)&x2211)<<x2212);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x2237 = 5U;
	uint64_t x2239 = UINT64_MAX;
	int8_t x2240 = 1;
	uint64_t t62 = 4891004LLU;

	t62 = (((x2237+x2238)&x2239)<<x2240);

	if (t62 != 154LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2313 = 0;
	int64_t x2314 = INT64_MIN;
	static uint32_t x2316 = 26U;
	static int64_t t63 = -3697212849857LL;

	t63 = (((x2313+x2314)&x2315)<<x2316);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x2361 = 0U;
	int64_t x2362 = INT64_MAX;
	uint32_t x2363 = 284952666U;
	static uint8_t x2364 = 34U;
	int64_t t64 = 7057LL;

	t64 = (((x2361+x2362)&x2363)<<x2364);

	if (t64 != 4895449525512044544LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x2369 = 1U;
	int8_t x2370 = INT8_MAX;
	volatile uint64_t x2371 = UINT64_MAX;
	volatile uint8_t x2372 = 3U;
	static volatile uint64_t t65 = 2602LLU;

	t65 = (((x2369+x2370)&x2371)<<x2372);

	if (t65 != 1024LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x2453 = 1;
	int64_t x2454 = INT64_MIN;
	uint64_t x2455 = 78LLU;

	t66 = (((x2453+x2454)&x2455)<<x2456);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x2521 = 4U;
	int16_t x2522 = INT16_MIN;
	uint64_t x2523 = 945360568LLU;
	volatile uint8_t x2524 = 24U;
	volatile uint64_t t67 = 528163LLU;

	t67 = (((x2521+x2522)&x2523)<<x2524);

	if (t67 != 15860455230668800LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2605 = 1;
	uint32_t x2606 = UINT32_MAX;
	volatile uint32_t x2607 = 220059U;
	uint32_t t68 = 28U;

	t68 = (((x2605+x2606)&x2607)<<x2608);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2677 = -1;
	uint16_t x2678 = UINT16_MAX;
	volatile int8_t x2679 = INT8_MAX;
	int16_t x2680 = 1;
	int32_t t69 = -150916;

	t69 = (((x2677+x2678)&x2679)<<x2680);

	if (t69 != 252) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x2761 = 22693852857082471LLU;
	int32_t x2762 = -1;
	int8_t x2763 = 1;
	volatile uint16_t x2764 = 13U;

	t70 = (((x2761+x2762)&x2763)<<x2764);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x2773 = 1;
	int32_t x2775 = -1;
	int32_t x2776 = 0;
	int64_t t71 = 253927622372536979LL;

	t71 = (((x2773+x2774)&x2775)<<x2776);

	if (t71 != 49305204LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x2850 = -1;
	int8_t x2851 = 7;
	uint8_t x2852 = 0U;
	volatile uint64_t t72 = 122792LLU;

	t72 = (((x2849+x2850)&x2851)<<x2852);

	if (t72 != 6LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x3013 = INT32_MAX;
	int64_t x3014 = 167085703LL;
	static volatile uint64_t x3015 = UINT64_MAX;
	uint8_t x3016 = 15U;
	uint64_t t73 = 455896562433LLU;

	t73 = (((x3013+x3014)&x3015)<<x3016);

	if (t73 != 75843808460800LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x3145 = 7;
	uint32_t x3146 = UINT32_MAX;
	int64_t x3147 = INT64_MIN;
	uint8_t x3148 = 14U;

	t74 = (((x3145+x3146)&x3147)<<x3148);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x3181 = INT64_MIN;
	uint8_t x3183 = 4U;
	volatile uint8_t x3184 = 4U;
	static volatile int64_t t75 = -3393783877591009186LL;

	t75 = (((x3181+x3182)&x3183)<<x3184);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x3185 = INT64_MAX;
	volatile uint64_t x3186 = UINT64_MAX;
	static volatile int8_t x3187 = INT8_MIN;
	int16_t x3188 = 2;
	volatile uint64_t t76 = 1845LLU;

	t76 = (((x3185+x3186)&x3187)<<x3188);

	if (t76 != 18446744073709551104LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x3205 = 21138769LLU;
	volatile uint16_t x3206 = UINT16_MAX;
	volatile int8_t x3207 = 27;
	int8_t x3208 = 12;
	volatile uint64_t t77 = 14256LLU;

	t77 = (((x3205+x3206)&x3207)<<x3208);

	if (t77 != 65536LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x3261 = 548U;
	volatile uint16_t x3262 = 8U;
	uint64_t x3263 = UINT64_MAX;
	volatile int32_t x3264 = 13;
	volatile uint64_t t78 = 279703LLU;

	t78 = (((x3261+x3262)&x3263)<<x3264);

	if (t78 != 4554752LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x3305 = UINT64_MAX;
	static volatile int32_t x3308 = 58;
	uint64_t t79 = 553LLU;

	t79 = (((x3305+x3306)&x3307)<<x3308);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x3357 = -275;
	uint64_t x3358 = 370772269005LLU;
	int32_t x3359 = INT32_MAX;
	uint16_t x3360 = 1U;
	volatile uint64_t t80 = 3730394LLU;

	t80 = (((x3357+x3358)&x3359)<<x3360);

	if (t80 != 2810162548LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x3422 = INT32_MIN;
	volatile uint64_t x3423 = 65832772231438LLU;
	static uint16_t x3424 = 4U;
	uint64_t t81 = 8LLU;

	t81 = (((x3421+x3422)&x3423)<<x3424);

	if (t81 != 1053289995964640LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x3453 = -3;
	static int32_t x3454 = -53529;
	uint16_t x3456 = 34U;
	uint64_t t82 = 121914855LLU;

	t82 = (((x3453+x3454)&x3455)<<x3456);

	if (t82 != 18445824400952393728LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x3557 = 15908U;
	int64_t x3558 = -1LL;
	int8_t x3559 = -1;
	static int64_t t83 = -4261878179829834793LL;

	t83 = (((x3557+x3558)&x3559)<<x3560);

	if (t83 != 31814LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x3561 = UINT8_MAX;
	static volatile uint64_t x3564 = 2LLU;
	static int32_t t84 = 432424;

	t84 = (((x3561+x3562)&x3563)<<x3564);

	if (t84 != 20447936) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x3681 = 1U;
	static int32_t x3682 = INT32_MIN;
	uint8_t x3683 = 1U;
	int8_t x3684 = 1;
	volatile int32_t t85 = 384;

	t85 = (((x3681+x3682)&x3683)<<x3684);

	if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x3705 = 92711620U;
	volatile uint32_t x3706 = 36U;
	volatile uint32_t x3707 = 3638U;
	int32_t x3708 = 5;
	volatile uint32_t t86 = 16523088U;

	t86 = (((x3705+x3706)&x3707)<<x3708);

	if (t86 != 82944U) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x3729 = 1932;
	int16_t x3730 = INT16_MAX;
	int8_t x3731 = -15;
	int8_t x3732 = 0;

	t87 = (((x3729+x3730)&x3731)<<x3732);

	if (t87 != 34689) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x3757 = -1;
	uint64_t x3758 = 2096153361668408032LLU;
	int8_t x3760 = 0;
	volatile uint64_t t88 = 14291455628599001LLU;

	t88 = (((x3757+x3758)&x3759)<<x3760);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x3841 = UINT32_MAX;
	static int16_t x3842 = INT16_MIN;
	uint16_t x3844 = 1U;
	uint32_t t89 = 1U;

	t89 = (((x3841+x3842)&x3843)<<x3844);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x3866 = 301126394099121LLU;
	uint64_t x3867 = 16276960LLU;

	t90 = (((x3865+x3866)&x3867)<<x3868);

	if (t90 != 105599555600384LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x3933 = 59933467098278LL;
	int32_t x3934 = INT32_MIN;
	volatile uint32_t x3935 = 164U;
	int32_t x3936 = 22;
	static int64_t t91 = 137008LL;

	t91 = (((x3933+x3934)&x3935)<<x3936);

	if (t91 != 687865856LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint8_t x3965 = 1U;
	volatile int32_t x3967 = 77238;
	int16_t x3968 = 9;
	int32_t t92 = 1;

	t92 = (((x3965+x3966)&x3967)<<x3968);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x3989 = 2071961LLU;
	static int16_t x3990 = -378;
	uint16_t x3991 = UINT16_MAX;
	int8_t x3992 = 0;
	static volatile uint64_t t93 = 4127613987321287LLU;

	t93 = (((x3989+x3990)&x3991)<<x3992);

	if (t93 != 39967LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x4069 = INT64_MIN;
	uint64_t x4070 = UINT64_MAX;
	int32_t x4071 = INT32_MIN;
	uint8_t x4072 = 1U;
	uint64_t t94 = 211793090700LLU;

	t94 = (((x4069+x4070)&x4071)<<x4072);

	if (t94 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x4085 = 12065312;
	static int32_t x4086 = 1035647;
	int32_t x4087 = 57190;
	uint8_t x4088 = 2U;
	volatile int32_t t95 = 2;

	t95 = (((x4085+x4086)&x4087)<<x4088);

	if (t95 != 203800) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x4142 = -1;
	uint16_t x4143 = 0U;
	uint8_t x4144 = 7U;
	volatile int64_t t96 = 473693418LL;

	t96 = (((x4141+x4142)&x4143)<<x4144);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x4153 = INT32_MIN;
	uint16_t x4154 = 13937U;
	uint8_t x4155 = UINT8_MAX;
	static uint8_t x4156 = 24U;

	t97 = (((x4153+x4154)&x4155)<<x4156);

	if (t97 != 1895825408) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x4221 = INT8_MAX;
	static volatile uint32_t x4222 = 388U;
	volatile int32_t x4223 = INT32_MAX;
	int8_t x4224 = 8;
	uint32_t t98 = 0U;

	t98 = (((x4221+x4222)&x4223)<<x4224);

	if (t98 != 131840U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x4317 = -1;
	static uint32_t x4318 = 53U;
	uint16_t x4319 = UINT16_MAX;
	uint8_t x4320 = 17U;
	static uint32_t t99 = 4799449U;

	t99 = (((x4317+x4318)&x4319)<<x4320);

	if (t99 != 6815744U) { NG(); } else { ; }
	
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

