
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x60 = 2U;
int16_t x112 = 0;
static int32_t x160 = 1;
int8_t x239 = -6;
int64_t x255 = INT64_MIN;
volatile uint8_t x265 = 0U;
static volatile int32_t x509 = -1;
int8_t x533 = INT8_MIN;
int8_t x534 = -1;
static int8_t x554 = -1;
int16_t x909 = -88;
static uint64_t x911 = UINT64_MAX;
uint64_t x927 = 43005LLU;
int8_t x928 = 2;
uint8_t x1036 = 3U;
int16_t x1065 = 346;
int16_t x1081 = 0;
uint8_t x1101 = 17U;
int64_t x1102 = -1LL;
uint32_t x1213 = 440U;
uint64_t x1215 = 1LLU;
int32_t t23 = 492;
uint64_t x1281 = UINT64_MAX;
uint16_t x1284 = 3U;
uint32_t x1338 = UINT32_MAX;
static uint8_t x1383 = UINT8_MAX;
int16_t x1451 = INT16_MIN;
volatile int8_t x1452 = 4;
uint16_t x1512 = 4U;
uint32_t x1554 = 443470U;
uint8_t x1556 = 2U;
int16_t x1657 = INT16_MIN;
uint8_t x1680 = 3U;
volatile int8_t x1691 = -15;
uint64_t t33 = 54LLU;
uint32_t t35 = 3420U;
int32_t x1946 = 46976;
volatile uint32_t t38 = 6483U;
uint64_t x2017 = 38566779LLU;
int16_t x2025 = -1;
uint64_t x2026 = 15310LLU;
uint64_t x2165 = 7323947LLU;
uint64_t x2167 = 80496217340182627LLU;
uint64_t x2226 = 163137LLU;
static uint8_t x2228 = 7U;
static volatile uint64_t t43 = 9485LLU;
uint64_t x2243 = 28482919LLU;
volatile uint64_t t44 = 5351LLU;
uint64_t x2256 = 2LLU;
int64_t x2310 = -50704LL;
int8_t x2312 = 4;
int8_t x2456 = 16;
uint32_t x2584 = 7U;
uint8_t x2832 = 5U;
static volatile int64_t t54 = -395168558909812310LL;
uint8_t x2839 = UINT8_MAX;
volatile uint32_t t58 = 72857609U;
static uint64_t x3320 = 2LLU;
uint8_t x3402 = 63U;
int64_t x3477 = INT64_MIN;
static volatile uint64_t t67 = 266371621918882LLU;
volatile int32_t x3684 = 1;
uint32_t x3694 = UINT32_MAX;
static int64_t x3961 = -1LL;
int64_t x4238 = -55512LL;
volatile uint8_t x4240 = 5U;
uint32_t x4621 = UINT32_MAX;
int16_t x4623 = -1;
volatile int64_t x4632 = 37LL;
volatile uint8_t x4982 = 7U;
volatile int32_t t81 = 2045253;
static uint8_t x5230 = 0U;
volatile uint8_t x5276 = 0U;
int32_t x5311 = -102871608;
uint32_t x5317 = 331U;
int8_t x5318 = INT8_MIN;
uint32_t x5363 = UINT32_MAX;
static int16_t x5571 = -1;
volatile uint64_t t90 = 1496804659LLU;
static volatile uint16_t x5648 = 0U;
static uint64_t x5661 = UINT64_MAX;
uint32_t x5662 = 241U;
volatile int64_t t94 = -4LL;
int16_t x5765 = -1;
uint8_t x5768 = 3U;
volatile uint32_t t95 = 26219U;
uint32_t x5797 = 2561254U;
int8_t x5849 = -1;
int8_t x5965 = -2;
static int64_t x5966 = -13946786198143494LL;
int8_t x5978 = INT8_MIN;
uint8_t x5980 = 2U;
int8_t x6019 = INT8_MIN;
int32_t x6020 = 1;
int16_t x6041 = INT16_MAX;


void f0(void) {
    	uint8_t x57 = UINT8_MAX;
	static int16_t x58 = -6;
	int16_t x59 = INT16_MAX;
	volatile int32_t t0 = -13592;

    t0 = (((x57-x58)^x59)<<x60);

    if (t0 != 130024) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x109 = 1U;
	int32_t x110 = 68634;
	static int64_t x111 = -1LL;
	volatile int64_t t1 = -3822409206323507LL;

    t1 = (((x109-x110)^x111)<<x112);

    if (t1 != 68632LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x149 = INT32_MAX;
	volatile uint16_t x150 = 833U;
	uint32_t x151 = 342132672U;
	int8_t x152 = 10;
	static volatile uint32_t t2 = 3663U;

    t2 = (((x149-x150)^x151)<<x152);

    if (t2 != 1844312064U) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x157 = -1LL;
	static uint16_t x158 = 3U;
	volatile int16_t x159 = -1;
	volatile int64_t t3 = 360669619713LL;

    t3 = (((x157-x158)^x159)<<x160);

    if (t3 != 6LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x237 = INT64_MIN;
	int64_t x238 = -1LL;
	uint16_t x240 = 0U;
	volatile int64_t t4 = -4105908744LL;

    t4 = (((x237-x238)^x239)<<x240);

    if (t4 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x253 = INT64_MIN;
	volatile int16_t x254 = INT16_MIN;
	volatile uint8_t x256 = 3U;
	volatile int64_t t5 = -88125138634LL;

    t5 = (((x253-x254)^x255)<<x256);

    if (t5 != 262144LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x266 = 13U;
	volatile uint64_t x267 = 1LLU;
	volatile int16_t x268 = 1;
	uint64_t t6 = 186213167079LLU;

    t6 = (((x265-x266)^x267)<<x268);

    if (t6 != 18446744073709551588LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x429 = 60851981LL;
	volatile uint32_t x430 = UINT32_MAX;
	uint64_t x431 = UINT64_MAX;
	int16_t x432 = 34;
	volatile uint64_t t7 = 56667944LLU;

    t7 = (((x429-x430)^x431)<<x432);

    if (t7 != 17401314966182559744LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x510 = -1;
	uint32_t x511 = UINT32_MAX;
	int8_t x512 = 1;
	volatile uint32_t t8 = 11U;

    t8 = (((x509-x510)^x511)<<x512);

    if (t8 != 4294967294U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x535 = -5;
	uint32_t x536 = 0U;
	static int32_t t9 = -1052;

    t9 = (((x533-x534)^x535)<<x536);

    if (t9 != 122) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x553 = UINT16_MAX;
	static int64_t x555 = 42757LL;
	static int8_t x556 = 1;
	volatile int64_t t10 = -4422671LL;

    t10 = (((x553-x554)^x555)<<x556);

    if (t10 != 216586LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint16_t x817 = UINT16_MAX;
	static int64_t x818 = INT64_MAX;
	int8_t x819 = INT8_MIN;
	uint8_t x820 = 0U;
	int64_t t11 = -16371110848789LL;

    t11 = (((x817-x818)^x819)<<x820);

    if (t11 != 9223372036854710144LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x885 = INT8_MAX;
	uint64_t x886 = 683775481341412LLU;
	static uint16_t x887 = UINT16_MAX;
	uint8_t x888 = 2U;
	uint64_t t12 = 1591983LLU;

    t12 = (((x885-x886)^x887)<<x888);

    if (t12 != 18444008971784394128LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x910 = 14555972LL;
	int8_t x912 = 1;
	uint64_t t13 = 5LLU;

    t13 = (((x909-x910)^x911)<<x912);

    if (t13 != 29112118LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x925 = INT64_MIN;
	int8_t x926 = -1;
	uint64_t t14 = 188229LLU;

    t14 = (((x925-x926)^x927)<<x928);

    if (t14 != 172016LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x1001 = -1;
	int64_t x1002 = -1LL;
	uint16_t x1003 = UINT16_MAX;
	volatile uint16_t x1004 = 0U;
	static int64_t t15 = -21653LL;

    t15 = (((x1001-x1002)^x1003)<<x1004);

    if (t15 != 65535LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint32_t x1033 = 801986U;
	static int32_t x1034 = -1;
	volatile uint64_t x1035 = 4560LLU;
	volatile uint64_t t16 = 9299527LLU;

    t16 = (((x1033-x1034)^x1035)<<x1036);

    if (t16 != 6383768LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x1066 = 0U;
	volatile uint64_t x1067 = UINT64_MAX;
	int8_t x1068 = 48;
	uint64_t t17 = 0LLU;

    t17 = (((x1065-x1066)^x1067)<<x1068);

    if (t17 != 18349072256790953984LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x1077 = -4;
	volatile uint32_t x1078 = 1818006U;
	volatile int32_t x1079 = -1;
	int8_t x1080 = 4;
	volatile uint32_t t18 = 59554U;

    t18 = (((x1077-x1078)^x1079)<<x1080);

    if (t18 != 29088144U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x1082 = 142693323U;
	int32_t x1083 = INT32_MAX;
	int8_t x1084 = 1;
	static volatile uint32_t t19 = 3989506U;

    t19 = (((x1081-x1082)^x1083)<<x1084);

    if (t19 != 285386644U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x1103 = 0U;
	static uint8_t x1104 = 49U;
	volatile int64_t t20 = -463707006LL;

    t20 = (((x1101-x1102)^x1103)<<x1104);

    if (t20 != 10133099161583616LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x1121 = -16;
	volatile uint64_t x1122 = 32660495233883732LLU;
	int16_t x1123 = -1;
	int32_t x1124 = 4;
	uint64_t t21 = 37399254022LLU;

    t21 = (((x1121-x1122)^x1123)<<x1124);

    if (t21 != 522567923742139952LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x1214 = 181U;
	uint8_t x1216 = 12U;
	uint64_t t22 = 345847LLU;

    t22 = (((x1213-x1214)^x1215)<<x1216);

    if (t22 != 1056768LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x1217 = -1;
	int16_t x1218 = -127;
	uint16_t x1219 = 1U;
	int32_t x1220 = 1;

    t23 = (((x1217-x1218)^x1219)<<x1220);

    if (t23 != 254) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x1282 = 208;
	int64_t x1283 = 36409602LL;
	volatile uint64_t t24 = 138568LLU;

    t24 = (((x1281-x1282)^x1283)<<x1284);

    if (t24 != 18446744073418273128LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x1337 = 3271090615511LLU;
	int64_t x1339 = INT64_MIN;
	uint8_t x1340 = 27U;
	uint64_t t25 = 49004978101526LLU;

    t25 = (((x1337-x1338)^x1339)<<x1340);

    if (t25 != 14186776048519086080LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x1381 = 21694U;
	uint16_t x1382 = 379U;
	static uint32_t x1384 = 2U;
	volatile int32_t t26 = -325249;

    t26 = (((x1381-x1382)^x1383)<<x1384);

    if (t26 != 85744) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x1449 = -636013500LL;
	static int32_t x1450 = INT32_MAX;
	volatile int64_t t27 = 7620546030846LL;

    t27 = (((x1449-x1450)^x1451)<<x1452);

    if (t27 != 44535858256LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x1509 = UINT64_MAX;
	uint32_t x1510 = 847U;
	static int8_t x1511 = INT8_MIN;
	uint64_t t28 = 3567LLU;

    t28 = (((x1509-x1510)^x1511)<<x1512);

    if (t28 != 13056LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x1553 = 18596551450040LL;
	static int64_t x1555 = 13083879674LL;
	volatile int64_t t29 = 1232702922192110LL;

    t29 = (((x1553-x1554)^x1555)<<x1556);

    if (t29 != 74402996995648LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x1585 = 1;
	volatile uint32_t x1586 = 7685190U;
	static uint8_t x1587 = 7U;
	static int8_t x1588 = 11;
	static uint32_t t30 = 1916309780U;

    t30 = (((x1585-x1586)^x1587)<<x1588);

    if (t30 != 1440604160U) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x1658 = 1113570519730690409LL;
	volatile int16_t x1659 = -1;
	uint16_t x1660 = 0U;
	volatile int64_t t31 = -1599130410158LL;

    t31 = (((x1657-x1658)^x1659)<<x1660);

    if (t31 != 1113570519730723176LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x1677 = INT32_MIN;
	uint64_t x1678 = UINT64_MAX;
	volatile uint8_t x1679 = 4U;
	uint64_t t32 = 66649778236392LLU;

    t32 = (((x1677-x1678)^x1679)<<x1680);

    if (t32 != 18446744056529682472LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x1689 = 27U;
	static uint64_t x1690 = UINT64_MAX;
	static volatile int8_t x1692 = 5;

    t33 = (((x1689-x1690)^x1691)<<x1692);

    if (t33 != 18446744073709551008LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x1721 = 14813U;
	int8_t x1722 = 2;
	static uint16_t x1723 = UINT16_MAX;
	static int8_t x1724 = 0;
	volatile int32_t t34 = 233927936;

    t34 = (((x1721-x1722)^x1723)<<x1724);

    if (t34 != 50724) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x1765 = 0;
	uint32_t x1766 = 489U;
	int16_t x1767 = -1;
	uint8_t x1768 = 3U;

    t35 = (((x1765-x1766)^x1767)<<x1768);

    if (t35 != 3904U) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x1865 = 1163U;
	uint64_t x1866 = 34077249333LLU;
	volatile int32_t x1867 = -1;
	uint16_t x1868 = 1U;
	volatile uint64_t t36 = 1LLU;

    t36 = (((x1865-x1866)^x1867)<<x1868);

    if (t36 != 68154496338LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x1893 = UINT64_MAX;
	int16_t x1894 = -1;
	int64_t x1895 = -1LL;
	volatile uint32_t x1896 = 1U;
	volatile uint64_t t37 = 293824563941039LLU;

    t37 = (((x1893-x1894)^x1895)<<x1896);

    if (t37 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x1945 = UINT32_MAX;
	int16_t x1947 = 915;
	static uint32_t x1948 = 1U;

    t38 = (((x1945-x1946)^x1947)<<x1948);

    if (t38 != 4294875096U) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x2018 = INT64_MIN;
	int8_t x2019 = INT8_MIN;
	volatile uint8_t x2020 = 1U;
	uint64_t t39 = 2616482180LLU;

    t39 = (((x2017-x2018)^x2019)<<x2020);

    if (t39 != 18446744073632418294LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x2027 = INT32_MAX;
	static int16_t x2028 = 1;
	static uint64_t t40 = 4243LLU;

    t40 = (((x2025-x2026)^x2027)<<x2028);

    if (t40 != 18446744069414614940LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x2166 = -5;
	uint32_t x2168 = 0U;
	uint64_t t41 = 6555920897704LLU;

    t41 = (((x2165-x2166)^x2167)<<x2168);

    if (t41 != 80496217338724691LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x2205 = 2LLU;
	int32_t x2206 = INT32_MIN;
	uint64_t x2207 = UINT64_MAX;
	int8_t x2208 = 0;
	uint64_t t42 = 3478LLU;

    t42 = (((x2205-x2206)^x2207)<<x2208);

    if (t42 != 18446744071562067965LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x2225 = 55;
	int16_t x2227 = INT16_MIN;

    t43 = (((x2225-x2226)^x2227)<<x2228);

    if (t43 != 16874240LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x2241 = INT32_MIN;
	volatile int16_t x2242 = -2387;
	uint16_t x2244 = 1U;

    t44 = (((x2241-x2242)^x2243)<<x2244);

    if (t44 != 18446744069471545448LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x2253 = UINT64_MAX;
	int8_t x2254 = 18;
	int64_t x2255 = -515024180851LL;
	static uint64_t t45 = 139174LLU;

    t45 = (((x2253-x2254)^x2255)<<x2256);

    if (t45 != 2060096723328LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x2265 = INT64_MAX;
	uint64_t x2266 = 2LLU;
	static volatile uint64_t x2267 = 4324391481524217574LLU;
	uint32_t x2268 = 18U;
	uint64_t t46 = 0LLU;

    t46 = (((x2265-x2266)^x2267)<<x2268);

    if (t46 != 12929773062293553152LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x2285 = INT16_MAX;
	static int8_t x2286 = 25;
	static uint32_t x2287 = 18742497U;
	static int16_t x2288 = 1;
	volatile uint32_t t47 = 642U;

    t47 = (((x2285-x2286)^x2287)<<x2288);

    if (t47 != 37422606U) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x2309 = -11;
	volatile int32_t x2311 = INT32_MAX;
	volatile int64_t t48 = 1LL;

    t48 = (((x2309-x2310)^x2311)<<x2312);

    if (t48 != 34358927264LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x2437 = INT8_MIN;
	int32_t x2438 = 45763;
	uint32_t x2439 = 8019U;
	uint16_t x2440 = 3U;
	uint32_t t49 = 601U;

    t49 = (((x2437-x2438)^x2439)<<x2440);

    if (t49 != 4294614896U) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint8_t x2453 = 25U;
	int64_t x2454 = 225611260475LL;
	int16_t x2455 = -407;
	int64_t t50 = -2965782702212790LL;

    t50 = (((x2453-x2454)^x2455)<<x2456);

    if (t50 != 14785659591393280LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x2581 = -1;
	int32_t x2582 = 109;
	static int32_t x2583 = -1;
	int32_t t51 = -24;

    t51 = (((x2581-x2582)^x2583)<<x2584);

    if (t51 != 13952) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x2705 = INT16_MIN;
	int64_t x2706 = 5209932848854LL;
	static volatile int64_t x2707 = -2900886LL;
	uint8_t x2708 = 1U;
	volatile int64_t t52 = -2862LL;

    t52 = (((x2705-x2706)^x2707)<<x2708);

    if (t52 != 10419863108224LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x2713 = INT16_MIN;
	int64_t x2714 = INT64_MIN;
	uint64_t x2715 = 2664477953040139LLU;
	uint16_t x2716 = 15U;
	uint64_t t53 = 947009462LLU;

    t53 = (((x2713-x2714)^x2715)<<x2716);

    if (t53 != 4924106802775556096LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x2829 = -1LL;
	static int32_t x2830 = -1;
	uint16_t x2831 = UINT16_MAX;

    t54 = (((x2829-x2830)^x2831)<<x2832);

    if (t54 != 2097120LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x2837 = 1LLU;
	volatile int32_t x2838 = -679;
	uint8_t x2840 = 6U;
	static uint64_t t55 = 162925073972030LLU;

    t55 = (((x2837-x2838)^x2839)<<x2840);

    if (t55 != 38336LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x2921 = INT32_MIN;
	uint32_t x2922 = 2159U;
	int16_t x2923 = INT16_MAX;
	int8_t x2924 = 0;
	volatile uint32_t t56 = 2U;

    t56 = (((x2921-x2922)^x2923)<<x2924);

    if (t56 != 2147453038U) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x2989 = INT64_MIN;
	int64_t x2990 = INT64_MIN;
	uint64_t x2991 = UINT64_MAX;
	static volatile uint8_t x2992 = 28U;
	uint64_t t57 = 973LLU;

    t57 = (((x2989-x2990)^x2991)<<x2992);

    if (t57 != 18446744073441116160LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x3093 = INT32_MAX;
	uint32_t x3094 = UINT32_MAX;
	int32_t x3095 = INT32_MAX;
	static int8_t x3096 = 1;

    t58 = (((x3093-x3094)^x3095)<<x3096);

    if (t58 != 4294967294U) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x3297 = -1;
	static int64_t x3298 = INT64_MIN;
	static int64_t x3299 = INT64_MAX;
	static int16_t x3300 = 0;
	int64_t t59 = -3LL;

    t59 = (((x3297-x3298)^x3299)<<x3300);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint32_t x3309 = UINT32_MAX;
	int16_t x3310 = INT16_MIN;
	int32_t x3311 = INT32_MAX;
	int8_t x3312 = 1;
	static uint32_t t60 = 1036251U;

    t60 = (((x3309-x3310)^x3311)<<x3312);

    if (t60 != 4294901760U) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint8_t x3317 = 1U;
	volatile uint16_t x3318 = 2U;
	static uint32_t x3319 = UINT32_MAX;
	static volatile uint32_t t61 = 118292442U;

    t61 = (((x3317-x3318)^x3319)<<x3320);

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x3325 = INT32_MIN;
	static int32_t x3326 = INT32_MIN;
	int16_t x3327 = 1555;
	volatile uint32_t x3328 = 7U;
	int32_t t62 = 887;

    t62 = (((x3325-x3326)^x3327)<<x3328);

    if (t62 != 199040) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x3401 = INT8_MIN;
	int8_t x3403 = INT8_MIN;
	int8_t x3404 = 2;
	volatile int32_t t63 = -18240;

    t63 = (((x3401-x3402)^x3403)<<x3404);

    if (t63 != 772) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint64_t x3478 = 13683711LLU;
	uint64_t x3479 = 30508515683452LLU;
	static uint8_t x3480 = 3U;
	uint64_t t64 = 32344358351LLU;

    t64 = (((x3477-x3478)^x3479)<<x3480);

    if (t64 != 18446500005491688424LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x3489 = INT16_MIN;
	uint64_t x3490 = 118529850748LLU;
	int64_t x3491 = -24867817LL;
	uint32_t x3492 = 5U;
	uint64_t t65 = 1164790310902569878LLU;

    t65 = (((x3489-x3490)^x3491)<<x3492);

    if (t65 != 3793305588320LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x3533 = 56U;
	static int32_t x3534 = INT32_MIN;
	int32_t x3535 = -15;
	static uint8_t x3536 = 1U;
	volatile uint32_t t66 = 98546050U;

    t66 = (((x3533-x3534)^x3535)<<x3536);

    if (t66 != 4294967186U) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x3549 = -13;
	int32_t x3550 = 112705;
	static uint64_t x3551 = 139081538297918887LLU;
	uint16_t x3552 = 1U;

    t67 = (((x3549-x3550)^x3551)<<x3552);

    if (t67 != 18168580997113930794LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x3681 = UINT32_MAX;
	volatile uint64_t x3682 = 6LLU;
	int64_t x3683 = 62516246617LL;
	static volatile uint64_t t68 = 2364695673162359LLU;

    t68 = (((x3681-x3682)^x3683)<<x3684);

    if (t68 != 124075609920LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x3693 = UINT64_MAX;
	int8_t x3695 = INT8_MIN;
	static int8_t x3696 = 31;
	uint64_t t69 = 13LLU;

    t69 = (((x3693-x3694)^x3695)<<x3696);

    if (t69 != 9223371761976868864LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x3717 = UINT64_MAX;
	uint64_t x3718 = 4573257116046178640LLU;
	int64_t x3719 = INT64_MIN;
	int32_t x3720 = 0;
	uint64_t t70 = 501LLU;

    t70 = (((x3717-x3718)^x3719)<<x3720);

    if (t70 != 4650114920808597167LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x3962 = 572LL;
	int16_t x3963 = INT16_MIN;
	volatile int8_t x3964 = 9;
	int64_t t71 = -135426621LL;

    t71 = (((x3961-x3962)^x3963)<<x3964);

    if (t71 != 16483840LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint64_t x4185 = UINT64_MAX;
	uint16_t x4186 = 4658U;
	static int32_t x4187 = -1;
	uint8_t x4188 = 12U;
	volatile uint64_t t72 = 43LLU;

    t72 = (((x4185-x4186)^x4187)<<x4188);

    if (t72 != 19079168LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x4193 = -1;
	static int8_t x4194 = 0;
	int8_t x4195 = -1;
	uint8_t x4196 = 11U;
	static volatile int32_t t73 = -1317898;

    t73 = (((x4193-x4194)^x4195)<<x4196);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x4237 = -1;
	int32_t x4239 = 8861;
	static int64_t t74 = 65793914LL;

    t74 = (((x4237-x4238)^x4239)<<x4240);

    if (t74 != 2050368LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x4277 = 191591;
	int64_t x4278 = 342937LL;
	int8_t x4279 = INT8_MIN;
	uint8_t x4280 = 14U;
	volatile int64_t t75 = 8000796976LL;

    t75 = (((x4277-x4278)^x4279)<<x4280);

    if (t75 != 2480111616LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x4441 = -7;
	int8_t x4442 = 0;
	int8_t x4443 = INT8_MIN;
	volatile int16_t x4444 = 3;
	volatile int32_t t76 = 125;

    t76 = (((x4441-x4442)^x4443)<<x4444);

    if (t76 != 968) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x4622 = 99702;
	int8_t x4624 = 6;
	volatile uint32_t t77 = 633178U;

    t77 = (((x4621-x4622)^x4623)<<x4624);

    if (t77 != 6380928U) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x4629 = 15483371U;
	uint64_t x4630 = 1093306990LLU;
	uint32_t x4631 = UINT32_MAX;
	static volatile uint64_t t78 = 608411575LLU;

    t78 = (((x4629-x4630)^x4631)<<x4632);

    if (t78 != 560997495648288768LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x4741 = UINT64_MAX;
	static uint64_t x4742 = 83538610049554LLU;
	int64_t x4743 = 127052LL;
	static uint16_t x4744 = 8U;
	volatile uint64_t t79 = 6136LLU;

    t79 = (((x4741-x4742)^x4743)<<x4744);

    if (t79 != 18425358189548380416LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x4849 = UINT64_MAX;
	static volatile int8_t x4850 = INT8_MAX;
	int32_t x4851 = -1;
	int8_t x4852 = 0;
	volatile uint64_t t80 = 4LLU;

    t80 = (((x4849-x4850)^x4851)<<x4852);

    if (t80 != 127LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x4981 = -1;
	int16_t x4983 = -1;
	volatile int8_t x4984 = 2;

    t81 = (((x4981-x4982)^x4983)<<x4984);

    if (t81 != 28) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x4997 = -1;
	uint64_t x4998 = 51807040361071824LLU;
	int16_t x4999 = 8780;
	uint8_t x5000 = 39U;
	uint64_t t82 = 69938LLU;

    t82 = (((x4997-x4998)^x4999)<<x5000);

    if (t82 != 3813618147789897728LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x5149 = 2751749504648581846LLU;
	static int64_t x5150 = -1LL;
	int64_t x5151 = INT64_MIN;
	uint16_t x5152 = 43U;
	uint64_t t83 = 5112287812759LLU;

    t83 = (((x5149-x5150)^x5151)<<x5152);

    if (t83 != 8977565217349173248LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x5229 = 121092511894343929LLU;
	volatile uint64_t x5231 = UINT64_MAX;
	static uint8_t x5232 = 0U;
	uint64_t t84 = 27269773895LLU;

    t84 = (((x5229-x5230)^x5231)<<x5232);

    if (t84 != 18325651561815207686LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x5273 = -1;
	static int32_t x5274 = INT32_MAX;
	int16_t x5275 = INT16_MIN;
	volatile int32_t t85 = 243528968;

    t85 = (((x5273-x5274)^x5275)<<x5276);

    if (t85 != 2147450880) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x5309 = INT16_MIN;
	int32_t x5310 = -1;
	volatile uint16_t x5312 = 4U;
	volatile int32_t t86 = 341788;

    t86 = (((x5309-x5310)^x5311)<<x5312);

    if (t86 != 1646058640) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x5319 = INT16_MAX;
	static uint32_t x5320 = 1U;
	volatile uint32_t t87 = 0U;

    t87 = (((x5317-x5318)^x5319)<<x5320);

    if (t87 != 64616U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x5341 = UINT64_MAX;
	int32_t x5342 = INT32_MAX;
	uint32_t x5343 = UINT32_MAX;
	volatile uint8_t x5344 = 2U;
	uint64_t t88 = 1488157LLU;

    t88 = (((x5341-x5342)^x5343)<<x5344);

    if (t88 != 18446744065119617020LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x5361 = INT8_MAX;
	uint16_t x5362 = UINT16_MAX;
	uint8_t x5364 = 5U;
	uint32_t t89 = 7U;

    t89 = (((x5361-x5362)^x5363)<<x5364);

    if (t89 != 2093024U) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x5569 = -1;
	static uint64_t x5570 = 828264277371083LLU;
	uint16_t x5572 = 6U;

    t90 = (((x5569-x5570)^x5571)<<x5572);

    if (t90 != 53008913751749312LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x5645 = -1;
	uint32_t x5646 = 58141225U;
	uint16_t x5647 = 19877U;
	volatile uint32_t t91 = 12171U;

    t91 = (((x5645-x5646)^x5647)<<x5648);

    if (t91 != 4236810355U) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x5649 = INT64_MIN;
	volatile uint64_t x5650 = 1382339LLU;
	volatile uint64_t x5651 = 2594820949LLU;
	volatile int8_t x5652 = 2;
	volatile uint64_t t92 = 271725LLU;

    t92 = (((x5649-x5650)^x5651)<<x5652);

    if (t92 != 18446744063325302176LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x5663 = UINT64_MAX;
	static int8_t x5664 = 5;
	uint64_t t93 = 259082553LLU;

    t93 = (((x5661-x5662)^x5663)<<x5664);

    if (t93 != 7712LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x5665 = INT16_MAX;
	int16_t x5666 = -165;
	int64_t x5667 = 7LL;
	int16_t x5668 = 0;

    t94 = (((x5665-x5666)^x5667)<<x5668);

    if (t94 != 32931LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x5766 = -113;
	uint32_t x5767 = 2186U;

    t95 = (((x5765-x5766)^x5767)<<x5768);

    if (t95 != 18384U) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int16_t x5798 = -804;
	static uint8_t x5799 = 15U;
	uint32_t x5800 = 7U;
	uint32_t t96 = 4U;

    t96 = (((x5797-x5798)^x5799)<<x5800);

    if (t96 != 327942784U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x5850 = 100813LLU;
	int8_t x5851 = -1;
	static volatile int8_t x5852 = 1;
	uint64_t t97 = 162349220LLU;

    t97 = (((x5849-x5850)^x5851)<<x5852);

    if (t97 != 201626LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int16_t x5967 = INT16_MAX;
	uint16_t x5968 = 0U;
	volatile int64_t t98 = 55272392LL;

    t98 = (((x5965-x5966)^x5967)<<x5968);

    if (t98 != 13946786198142459LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x5977 = -1;
	uint32_t x5979 = 149126824U;
	volatile uint32_t t99 = 1U;

    t99 = (((x5977-x5978)^x5979)<<x5980);

    if (t99 != 596507484U) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x5993 = -7;
	static volatile int64_t x5994 = -1490871247449LL;
	static uint8_t x5995 = UINT8_MAX;
	volatile uint8_t x5996 = 4U;
	int64_t t100 = -1LL;

    t100 = (((x5993-x5994)^x5995)<<x5996);

    if (t100 != 23853939960528LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x6013 = 10U;
	uint64_t x6014 = UINT64_MAX;
	static uint8_t x6015 = 0U;
	uint8_t x6016 = 1U;
	uint64_t t101 = 95LLU;

    t101 = (((x6013-x6014)^x6015)<<x6016);

    if (t101 != 22LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x6017 = INT16_MIN;
	int8_t x6018 = 0;
	volatile int32_t t102 = 0;

    t102 = (((x6017-x6018)^x6019)<<x6020);

    if (t102 != 65280) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x6033 = INT16_MAX;
	static int16_t x6034 = -638;
	volatile uint64_t x6035 = 11956441588LLU;
	static int32_t x6036 = 2;
	uint64_t t103 = 2817265503894LLU;

    t103 = (((x6033-x6034)^x6035)<<x6036);

    if (t103 != 47825636900LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint64_t x6042 = 1019990LLU;
	uint16_t x6043 = 2U;
	static uint8_t x6044 = 1U;
	volatile uint64_t t104 = 6LLU;

    t104 = (((x6041-x6042)^x6043)<<x6044);

    if (t104 != 18446744073707577174LLU) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();


    return 0;
}

