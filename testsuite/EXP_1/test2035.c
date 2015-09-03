#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint16_t x3 = 4858U;
int8_t x9 = -24;
int64_t t1 = -2433769152031237LL;
static uint16_t x134 = UINT16_MAX;
int32_t t5 = -7006;
static int8_t x264 = 4;
uint64_t x450 = 237643089151696990LLU;
volatile uint32_t x606 = 58127016U;
int8_t x623 = INT8_MIN;
volatile uint32_t t12 = 61U;
uint32_t x690 = UINT32_MAX;
uint64_t t14 = 390273624615LLU;
volatile uint64_t t15 = 96821847LLU;
volatile uint32_t x850 = 3966263U;
uint8_t x852 = 1U;
static uint32_t t16 = 0U;
volatile int16_t x898 = INT16_MIN;
static volatile int8_t x899 = INT8_MAX;
uint8_t x915 = 13U;
int8_t x916 = 50;
volatile int16_t x1009 = -1;
uint64_t x1111 = 108124663938LLU;
int32_t x1182 = INT32_MAX;
uint8_t x1221 = UINT8_MAX;
volatile int32_t x1224 = 40;
volatile uint64_t t25 = 97664854339074LLU;
uint64_t t26 = 0LLU;
uint64_t t27 = 31332LLU;
volatile uint64_t t28 = 3LLU;
int32_t x1513 = INT32_MIN;
volatile uint64_t x1514 = 2706535327560LLU;
int8_t x1708 = 1;
int64_t t35 = 1245008393884524LL;
uint32_t x1937 = 1U;
int16_t x1974 = INT16_MIN;
volatile uint64_t t38 = 0LLU;
volatile uint64_t t40 = 0LLU;
volatile int32_t x2061 = 834432;
static uint8_t x2062 = UINT8_MAX;
volatile int32_t t41 = -949;
uint32_t x2181 = 1609240U;
uint32_t t42 = 2U;
static int32_t t43 = -12086;
uint32_t x2351 = 51103693U;
volatile uint32_t t47 = 55381U;
uint32_t x2386 = 23104U;
uint64_t t50 = 1642511630162151185LLU;
volatile int32_t x2479 = 6703;
volatile uint32_t x2527 = 501U;
static int32_t x2593 = INT32_MIN;
uint32_t x2594 = UINT32_MAX;
volatile uint32_t t55 = 3327U;
int8_t x2619 = 51;
uint16_t x2709 = UINT16_MAX;
uint64_t x2711 = 983386931772773327LLU;
int64_t x2715 = INT64_MAX;
volatile uint8_t x2721 = UINT8_MAX;
uint8_t x2722 = 35U;
static uint16_t x2723 = UINT16_MAX;
uint16_t x2724 = 0U;
static volatile uint32_t x2848 = 1U;
volatile int16_t x2858 = INT16_MAX;
volatile int64_t x2902 = -1LL;
int64_t x2949 = INT64_MIN;
int8_t x2950 = -2;
int8_t x3427 = -1;
volatile int32_t t71 = -3966;
static volatile int8_t x3466 = INT8_MIN;
static volatile int8_t x3517 = INT8_MIN;
int32_t x3582 = INT32_MIN;
int16_t x3583 = INT16_MIN;
uint64_t x3590 = 768LLU;
uint8_t x3592 = 1U;
volatile int64_t x3602 = -1LL;
int32_t t78 = 72245;
int64_t t80 = 8661744LL;
int8_t x3748 = 1;
int8_t x3762 = 14;
uint64_t x3763 = 143148956131578LLU;
int8_t x3782 = -6;
static uint32_t x3810 = UINT32_MAX;
uint8_t x3812 = 9U;
int64_t x3890 = -771892237769840017LL;
static int64_t t86 = -875617736054050216LL;
uint64_t x3905 = 45806303401LLU;
volatile uint64_t x3939 = 2955852LLU;
int8_t x3976 = 1;
volatile uint16_t x4054 = UINT16_MAX;
static volatile uint8_t x4056 = 9U;
int32_t t92 = 3281;
uint16_t x4145 = 4527U;
int64_t x4148 = 0LL;
volatile uint16_t x4259 = 1U;
int32_t x4260 = 2;
uint8_t x4261 = 41U;
volatile int32_t t98 = 51;


void f0(void) {
	int16_t x1 = 29;
	int64_t x2 = -1LL;
	int8_t x4 = 0;
	volatile int64_t t0 = 3308LL;

	t0 = (((x1^x2)+x3)>>x4);

	if (t0 != 4828LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x10 = UINT8_MAX;
	int64_t x11 = 1178LL;
	uint8_t x12 = 27U;

	t1 = (((x9^x10)+x11)>>x12);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x33 = INT64_MAX;
	volatile int64_t x34 = INT64_MAX;
	uint16_t x35 = 27457U;
	volatile uint8_t x36 = 1U;
	int64_t t2 = -3LL;

	t2 = (((x33^x34)+x35)>>x36);

	if (t2 != 13728LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x81 = INT16_MAX;
	volatile uint64_t x82 = 7710895908LLU;
	volatile int16_t x83 = INT16_MIN;
	volatile uint8_t x84 = 1U;
	volatile uint64_t t3 = 36043984995752LLU;

	t3 = (((x81^x82)+x83)>>x84);

	if (t3 != 3855419501LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x89 = INT8_MAX;
	int16_t x90 = INT16_MAX;
	static uint32_t x91 = 107095U;
	uint8_t x92 = 21U;
	static volatile uint32_t t4 = 2U;

	t4 = (((x89^x90)+x91)>>x92);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x133 = 19U;
	int16_t x135 = -1;
	int8_t x136 = 0;

	t5 = (((x133^x134)+x135)>>x136);

	if (t5 != 65515) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x261 = 30825289LL;
	uint8_t x262 = UINT8_MAX;
	static int8_t x263 = -1;
	volatile int64_t t6 = 101LL;

	t6 = (((x261^x262)+x263)>>x264);

	if (t6 != 1926587LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x305 = INT16_MAX;
	volatile uint64_t x306 = 2LLU;
	int32_t x307 = -1;
	int8_t x308 = 9;
	static uint64_t t7 = 96669056LLU;

	t7 = (((x305^x306)+x307)>>x308);

	if (t7 != 63LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x389 = INT32_MIN;
	int8_t x390 = -1;
	uint64_t x391 = 432LLU;
	uint32_t x392 = 3U;
	static volatile uint64_t t8 = 943LLU;

	t8 = (((x389^x390)+x391)>>x392);

	if (t8 != 268435509LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x449 = UINT8_MAX;
	static uint32_t x451 = UINT32_MAX;
	int16_t x452 = 3;
	volatile uint64_t t9 = 587025811477105531LLU;

	t9 = (((x449^x450)+x451)>>x452);

	if (t9 != 29705386680833044LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x509 = -1;
	int16_t x510 = -6;
	volatile int8_t x511 = 22;
	int8_t x512 = 0;
	static int32_t t10 = 1;

	t10 = (((x509^x510)+x511)>>x512);

	if (t10 != 27) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x605 = UINT64_MAX;
	int8_t x607 = -13;
	volatile int32_t x608 = 6;
	static uint64_t t11 = 6879246205575731192LLU;

	t11 = (((x605^x606)+x607)>>x608);

	if (t11 != 288230376150803509LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x621 = UINT32_MAX;
	volatile int16_t x622 = INT16_MIN;
	volatile uint8_t x624 = 0U;

	t12 = (((x621^x622)+x623)>>x624);

	if (t12 != 32639U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x657 = UINT32_MAX;
	static uint64_t x658 = 115228866LLU;
	uint64_t x659 = 1975927393LLU;
	static uint8_t x660 = 13U;
	static uint64_t t13 = 276964607492150LLU;

	t13 = (((x657^x658)+x659)>>x660);

	if (t13 != 751424LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x689 = INT32_MAX;
	static volatile uint64_t x691 = UINT64_MAX;
	static uint8_t x692 = 2U;

	t14 = (((x689^x690)+x691)>>x692);

	if (t14 != 536870911LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x705 = UINT64_MAX;
	int8_t x706 = 1;
	volatile uint8_t x707 = 7U;
	volatile uint64_t x708 = 54LLU;

	t15 = (((x705^x706)+x707)>>x708);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x849 = INT8_MAX;
	int16_t x851 = INT16_MAX;

	t16 = (((x849^x850)+x851)>>x852);

	if (t16 != 1999523U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x897 = -18761517466263LL;
	uint8_t x900 = 3U;
	int64_t t17 = -17977751739253LL;

	t17 = (((x897^x898)+x899)>>x900);

	if (t17 != 2345189687229LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x913 = 11LLU;
	int8_t x914 = INT8_MIN;
	volatile uint64_t t18 = 185077903720034290LLU;

	t18 = (((x913^x914)+x915)>>x916);

	if (t18 != 16383LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x961 = INT16_MIN;
	int64_t x962 = INT64_MIN;
	static uint16_t x963 = 127U;
	volatile int16_t x964 = 40;
	volatile int64_t t19 = 728239255LL;

	t19 = (((x961^x962)+x963)>>x964);

	if (t19 != 8388607LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x1010 = -1;
	uint16_t x1011 = 1572U;
	uint8_t x1012 = 9U;
	volatile int32_t t20 = 10972;

	t20 = (((x1009^x1010)+x1011)>>x1012);

	if (t20 != 3) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1109 = UINT16_MAX;
	int64_t x1110 = -1LL;
	int16_t x1112 = 0;
	volatile uint64_t t21 = 457LLU;

	t21 = (((x1109^x1110)+x1111)>>x1112);

	if (t21 != 108124598402LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1121 = -1;
	volatile int64_t x1122 = -1LL;
	volatile int8_t x1123 = INT8_MAX;
	static int8_t x1124 = 5;
	int64_t t22 = 970069152009291LL;

	t22 = (((x1121^x1122)+x1123)>>x1124);

	if (t22 != 3LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1181 = 163124;
	int32_t x1183 = 32783;
	int16_t x1184 = 0;
	int32_t t23 = 2;

	t23 = (((x1181^x1182)+x1183)>>x1184);

	if (t23 != 2147353306) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x1222 = 4035160891797642LLU;
	int16_t x1223 = INT16_MAX;
	volatile uint64_t t24 = 15LLU;

	t24 = (((x1221^x1222)+x1223)>>x1224);

	if (t24 != 3669LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x1241 = UINT64_MAX;
	static int64_t x1242 = INT64_MIN;
	static int16_t x1243 = -1;
	uint16_t x1244 = 1U;

	t25 = (((x1241^x1242)+x1243)>>x1244);

	if (t25 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1265 = -1;
	uint32_t x1266 = UINT32_MAX;
	uint64_t x1267 = UINT64_MAX;
	uint8_t x1268 = 29U;

	t26 = (((x1265^x1266)+x1267)>>x1268);

	if (t26 != 34359738367LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1329 = INT64_MIN;
	volatile uint64_t x1330 = UINT64_MAX;
	int32_t x1331 = 0;
	uint16_t x1332 = 1U;

	t27 = (((x1329^x1330)+x1331)>>x1332);

	if (t27 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1401 = INT16_MIN;
	static uint32_t x1402 = 11362U;
	static uint64_t x1403 = UINT64_MAX;
	uint16_t x1404 = 0U;

	t28 = (((x1401^x1402)+x1403)>>x1404);

	if (t28 != 4294945889LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x1425 = INT16_MIN;
	volatile uint64_t x1426 = 23606122LLU;
	int64_t x1427 = INT64_MAX;
	static int8_t x1428 = 7;
	volatile uint64_t t29 = 3730406301LLU;

	t29 = (((x1425^x1426)+x1427)>>x1428);

	if (t29 != 72057594037743462LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x1515 = INT64_MAX;
	uint8_t x1516 = 4U;
	uint64_t t30 = 22181606050242825LLU;

	t30 = (((x1513^x1514)+x1515)>>x1516);

	if (t30 != 576460583098989172LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1541 = INT32_MAX;
	uint16_t x1542 = UINT16_MAX;
	volatile uint16_t x1543 = 122U;
	volatile int16_t x1544 = 1;
	static int32_t t31 = 67997;

	t31 = (((x1541^x1542)+x1543)>>x1544);

	if (t31 != 1073709117) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x1621 = 1;
	uint8_t x1622 = 68U;
	volatile int8_t x1623 = -34;
	uint16_t x1624 = 1U;
	static int32_t t32 = 1105;

	t32 = (((x1621^x1622)+x1623)>>x1624);

	if (t32 != 17) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x1705 = UINT8_MAX;
	static uint8_t x1706 = UINT8_MAX;
	static uint8_t x1707 = UINT8_MAX;
	static int32_t t33 = 0;

	t33 = (((x1705^x1706)+x1707)>>x1708);

	if (t33 != 127) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x1709 = INT8_MIN;
	int16_t x1710 = 482;
	uint32_t x1711 = 30U;
	uint32_t x1712 = 0U;
	static volatile uint32_t t34 = 673U;

	t34 = (((x1709^x1710)+x1711)>>x1712);

	if (t34 != 4294966912U) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x1749 = -579655879641033952LL;
	volatile int64_t x1750 = INT64_MIN;
	volatile uint32_t x1751 = 266147794U;
	uint8_t x1752 = 13U;

	t35 = (((x1749^x1750)+x1751)>>x1752);

	if (t35 != 1055141132504869LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1753 = -1LL;
	int8_t x1754 = INT8_MIN;
	volatile int8_t x1755 = -4;
	static int8_t x1756 = 1;
	volatile int64_t t36 = 17LL;

	t36 = (((x1753^x1754)+x1755)>>x1756);

	if (t36 != 61LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1938 = 6528092LLU;
	int16_t x1939 = -5;
	uint8_t x1940 = 30U;
	volatile uint64_t t37 = 9022923838919681785LLU;

	t37 = (((x1937^x1938)+x1939)>>x1940);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1973 = 3351U;
	uint64_t x1975 = 33450133069LLU;
	volatile int8_t x1976 = 15;

	t38 = (((x1973^x1974)+x1975)>>x1976);

	if (t38 != 1020816LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x2053 = 6;
	static uint16_t x2054 = 1146U;
	uint16_t x2055 = 17U;
	uint8_t x2056 = 1U;
	volatile int32_t t39 = 52;

	t39 = (((x2053^x2054)+x2055)>>x2056);

	if (t39 != 582) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2057 = 17559348;
	int64_t x2058 = -1LL;
	uint64_t x2059 = UINT64_MAX;
	volatile int32_t x2060 = 3;

	t40 = (((x2057^x2058)+x2059)>>x2060);

	if (t40 != 2305843009211499033LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2063 = 6;
	static uint8_t x2064 = 12U;

	t41 = (((x2061^x2062)+x2063)>>x2064);

	if (t41 != 203) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x2182 = -1;
	int32_t x2183 = 380191;
	int64_t x2184 = 1LL;

	t42 = (((x2181^x2182)+x2183)>>x2184);

	if (t42 != 2146869123U) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2225 = 17U;
	int16_t x2226 = -1;
	int32_t x2227 = 1008510;
	uint8_t x2228 = 1U;

	t43 = (((x2225^x2226)+x2227)>>x2228);

	if (t43 != 504246) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x2261 = 12U;
	uint64_t x2262 = UINT64_MAX;
	int32_t x2263 = -1;
	int16_t x2264 = 10;
	volatile uint64_t t44 = 175972LLU;

	t44 = (((x2261^x2262)+x2263)>>x2264);

	if (t44 != 18014398509481983LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x2309 = 15U;
	int32_t x2310 = 263432014;
	volatile int32_t x2311 = -1;
	uint8_t x2312 = 1U;
	volatile int32_t t45 = 66987811;

	t45 = (((x2309^x2310)+x2311)>>x2312);

	if (t45 != 131716000) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x2313 = INT32_MAX;
	int16_t x2314 = INT16_MIN;
	int64_t x2315 = INT64_MAX;
	volatile uint32_t x2316 = 51U;
	int64_t t46 = -111864LL;

	t46 = (((x2313^x2314)+x2315)>>x2316);

	if (t46 != 4095LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2349 = -19;
	int32_t x2350 = 169153;
	int32_t x2352 = 5;

	t47 = (((x2349^x2350)+x2351)>>x2352);

	if (t47 != 1591703U) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x2373 = 396U;
	volatile uint64_t x2374 = 346134737319123LLU;
	static int8_t x2375 = 3;
	int16_t x2376 = 23;
	uint64_t t48 = 396LLU;

	t48 = (((x2373^x2374)+x2375)>>x2376);

	if (t48 != 41262476LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x2385 = 1270U;
	uint64_t x2387 = 3LLU;
	uint8_t x2388 = 0U;
	volatile uint64_t t49 = 10320768LLU;

	t49 = (((x2385^x2386)+x2387)>>x2388);

	if (t49 != 24249LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x2413 = 734LLU;
	static int8_t x2414 = 1;
	uint32_t x2415 = 30U;
	uint8_t x2416 = 62U;

	t50 = (((x2413^x2414)+x2415)>>x2416);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x2477 = 6500U;
	int8_t x2478 = 0;
	volatile int64_t x2480 = 1LL;
	uint32_t t51 = 49233U;

	t51 = (((x2477^x2478)+x2479)>>x2480);

	if (t51 != 6601U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2525 = 698672;
	static uint16_t x2526 = 1336U;
	int8_t x2528 = 0;
	static uint32_t t52 = 0U;

	t52 = (((x2525^x2526)+x2527)>>x2528);

	if (t52 != 699901U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x2557 = INT16_MIN;
	int32_t x2558 = INT32_MIN;
	int8_t x2559 = 8;
	uint8_t x2560 = 2U;
	int32_t t53 = -506;

	t53 = (((x2557^x2558)+x2559)>>x2560);

	if (t53 != 536862722) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x2569 = -1;
	int8_t x2570 = INT8_MIN;
	int64_t x2571 = -1LL;
	int8_t x2572 = 15;
	int64_t t54 = -3LL;

	t54 = (((x2569^x2570)+x2571)>>x2572);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x2595 = 7003U;
	uint8_t x2596 = 1U;

	t55 = (((x2593^x2594)+x2595)>>x2596);

	if (t55 != 1073745325U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x2617 = INT16_MIN;
	volatile int64_t x2618 = INT64_MIN;
	volatile int8_t x2620 = 1;
	volatile int64_t t56 = -321613LL;

	t56 = (((x2617^x2618)+x2619)>>x2620);

	if (t56 != 4611686018427371545LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x2710 = INT8_MIN;
	uint8_t x2712 = 46U;
	volatile uint64_t t57 = 908282LLU;

	t57 = (((x2709^x2710)+x2711)>>x2712);

	if (t57 != 13974LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x2713 = INT64_MIN;
	static uint8_t x2714 = 1U;
	int8_t x2716 = 60;
	int64_t t58 = -815LL;

	t58 = (((x2713^x2714)+x2715)>>x2716);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t t59 = -6531428;

	t59 = (((x2721^x2722)+x2723)>>x2724);

	if (t59 != 65755) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2825 = -7;
	static int16_t x2826 = -53;
	uint16_t x2827 = 1U;
	volatile int16_t x2828 = 0;
	volatile int32_t t60 = -316;

	t60 = (((x2825^x2826)+x2827)>>x2828);

	if (t60 != 51) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2845 = INT32_MIN;
	static uint32_t x2846 = 1582716U;
	int16_t x2847 = -1;
	uint32_t t61 = 1441828U;

	t61 = (((x2845^x2846)+x2847)>>x2848);

	if (t61 != 1074533181U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x2857 = 17888U;
	volatile int8_t x2859 = INT8_MIN;
	uint8_t x2860 = 12U;
	int32_t t62 = 217473;

	t62 = (((x2857^x2858)+x2859)>>x2860);

	if (t62 != 3) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x2885 = 7006U;
	int8_t x2886 = -1;
	uint32_t x2887 = 6891738U;
	volatile int8_t x2888 = 0;
	static volatile uint32_t t63 = 453U;

	t63 = (((x2885^x2886)+x2887)>>x2888);

	if (t63 != 6884731U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x2901 = -1;
	uint16_t x2903 = UINT16_MAX;
	uint8_t x2904 = 48U;
	volatile int64_t t64 = 61784LL;

	t64 = (((x2901^x2902)+x2903)>>x2904);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x2951 = 328819169896606786LLU;
	volatile uint64_t x2952 = 0LLU;
	uint64_t t65 = 7805478928LLU;

	t65 = (((x2949^x2950)+x2951)>>x2952);

	if (t65 != 9552191206751382592LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x3005 = 11LLU;
	int16_t x3006 = -32;
	uint32_t x3007 = 1U;
	volatile uint16_t x3008 = 17U;
	volatile uint64_t t66 = 86008774LLU;

	t66 = (((x3005^x3006)+x3007)>>x3008);

	if (t66 != 140737488355327LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x3021 = INT32_MIN;
	int64_t x3022 = INT64_MIN;
	int64_t x3023 = 343827LL;
	volatile uint64_t x3024 = 4LLU;
	volatile int64_t t67 = 1956109235599125LL;

	t67 = (((x3021^x3022)+x3023)>>x3024);

	if (t67 != 576460752169227249LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x3133 = 21U;
	int8_t x3134 = INT8_MIN;
	static uint32_t x3135 = UINT32_MAX;
	volatile int16_t x3136 = 2;
	volatile uint32_t t68 = 242109248U;

	t68 = (((x3133^x3134)+x3135)>>x3136);

	if (t68 != 1073741797U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x3253 = 19251379979LL;
	static uint8_t x3254 = 10U;
	int64_t x3255 = -1LL;
	volatile uint8_t x3256 = 0U;
	static int64_t t69 = -238LL;

	t69 = (((x3253^x3254)+x3255)>>x3256);

	if (t69 != 19251379968LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x3257 = INT16_MIN;
	uint64_t x3258 = UINT64_MAX;
	volatile uint8_t x3259 = UINT8_MAX;
	uint8_t x3260 = 14U;
	static uint64_t t70 = 27977LLU;

	t70 = (((x3257^x3258)+x3259)>>x3260);

	if (t70 != 2LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x3425 = INT16_MAX;
	uint16_t x3426 = 14U;
	static uint8_t x3428 = 1U;

	t71 = (((x3425^x3426)+x3427)>>x3428);

	if (t71 != 16376) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x3465 = -1;
	int16_t x3467 = -7;
	int8_t x3468 = 0;
	int32_t t72 = -86;

	t72 = (((x3465^x3466)+x3467)>>x3468);

	if (t72 != 120) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x3518 = -1;
	static int8_t x3519 = -1;
	uint64_t x3520 = 10LLU;
	int32_t t73 = 28451;

	t73 = (((x3517^x3518)+x3519)>>x3520);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x3581 = INT64_MIN;
	uint16_t x3584 = 0U;
	int64_t t74 = -6706391455031363LL;

	t74 = (((x3581^x3582)+x3583)>>x3584);

	if (t74 != 9223372034707259392LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x3589 = INT64_MAX;
	int16_t x3591 = -1807;
	uint64_t t75 = 74899956174261LLU;

	t75 = (((x3589^x3590)+x3591)>>x3592);

	if (t75 != 4611686018427386616LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x3601 = 20U;
	int32_t x3603 = INT32_MAX;
	volatile int8_t x3604 = 3;
	int64_t t76 = 12591873LL;

	t76 = (((x3601^x3602)+x3603)>>x3604);

	if (t76 != 268435453LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x3653 = INT8_MAX;
	static uint32_t x3654 = 127358979U;
	uint8_t x3655 = UINT8_MAX;
	static uint16_t x3656 = 28U;
	uint32_t t77 = 13468471U;

	t77 = (((x3653^x3654)+x3655)>>x3656);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x3673 = INT16_MIN;
	int32_t x3674 = -166;
	uint16_t x3675 = UINT16_MAX;
	uint16_t x3676 = 13U;

	t78 = (((x3673^x3674)+x3675)>>x3676);

	if (t78 != 11) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x3697 = -1LL;
	static int8_t x3698 = -1;
	int32_t x3699 = INT32_MAX;
	static volatile uint8_t x3700 = 30U;
	int64_t t79 = 4112922168024881052LL;

	t79 = (((x3697^x3698)+x3699)>>x3700);

	if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x3725 = 29968U;
	int64_t x3726 = INT64_MAX;
	volatile int16_t x3727 = -17;
	volatile uint16_t x3728 = 24U;

	t80 = (((x3725^x3726)+x3727)>>x3728);

	if (t80 != 549755813887LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x3745 = INT8_MIN;
	int8_t x3746 = INT8_MIN;
	int64_t x3747 = 1LL;
	static int64_t t81 = -125151LL;

	t81 = (((x3745^x3746)+x3747)>>x3748);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x3761 = UINT64_MAX;
	static uint8_t x3764 = 2U;
	uint64_t t82 = 37901808LLU;

	t82 = (((x3761^x3762)+x3763)>>x3764);

	if (t82 != 35787239032890LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x3781 = 4U;
	int64_t x3783 = 265711900LL;
	int32_t x3784 = 0;
	volatile int64_t t83 = 33623331LL;

	t83 = (((x3781^x3782)+x3783)>>x3784);

	if (t83 != 265711898LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x3809 = 890U;
	uint8_t x3811 = 1U;
	uint32_t t84 = 3917U;

	t84 = (((x3809^x3810)+x3811)>>x3812);

	if (t84 != 8388606U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x3885 = -1;
	uint64_t x3886 = 415LLU;
	int64_t x3887 = INT64_MIN;
	uint32_t x3888 = 0U;
	static uint64_t t85 = 711086997LLU;

	t85 = (((x3885^x3886)+x3887)>>x3888);

	if (t85 != 9223372036854775392LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x3889 = INT32_MIN;
	static volatile int32_t x3891 = INT32_MIN;
	int8_t x3892 = 1;

	t86 = (((x3889^x3890)+x3891)>>x3892);

	if (t86 != 385946118664254775LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x3906 = INT16_MAX;
	uint32_t x3907 = UINT32_MAX;
	uint8_t x3908 = 10U;
	volatile uint64_t t87 = 505LLU;

	t87 = (((x3905^x3906)+x3907)>>x3908);

	if (t87 != 48927025LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x3937 = 7411;
	static int64_t x3938 = 4145882319474196363LL;
	volatile uint8_t x3940 = 17U;
	volatile uint64_t t88 = 484774025724874305LLU;

	t88 = (((x3937^x3938)+x3939)>>x3940);

	if (t88 != 31630571895424LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x3973 = INT64_MIN;
	static volatile int32_t x3974 = INT32_MIN;
	uint64_t x3975 = UINT64_MAX;
	volatile uint64_t t89 = 40954858LLU;

	t89 = (((x3973^x3974)+x3975)>>x3976);

	if (t89 != 4611686017353646079LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x4017 = -1;
	int64_t x4018 = INT64_MIN;
	int64_t x4019 = -119398LL;
	volatile uint16_t x4020 = 1U;
	static volatile int64_t t90 = 345495714454288LL;

	t90 = (((x4017^x4018)+x4019)>>x4020);

	if (t90 != 4611686018427328204LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x4025 = INT16_MIN;
	uint8_t x4026 = UINT8_MAX;
	uint64_t x4027 = 11072LLU;
	uint16_t x4028 = 17U;
	uint64_t t91 = 6LLU;

	t91 = (((x4025^x4026)+x4027)>>x4028);

	if (t91 != 140737488355327LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x4053 = -968;
	static int32_t x4055 = INT32_MAX;

	t92 = (((x4053^x4054)+x4055)>>x4056);

	if (t92 != 4194177) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x4065 = UINT32_MAX;
	uint64_t x4066 = UINT64_MAX;
	int64_t x4067 = INT64_MIN;
	static volatile uint8_t x4068 = 1U;
	volatile uint64_t t93 = 3LLU;

	t93 = (((x4065^x4066)+x4067)>>x4068);

	if (t93 != 4611686016279904256LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x4109 = 1;
	volatile int32_t x4110 = 2009119;
	int16_t x4111 = 1;
	int8_t x4112 = 1;
	int32_t t94 = 136211;

	t94 = (((x4109^x4110)+x4111)>>x4112);

	if (t94 != 1004559) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x4146 = INT16_MAX;
	int16_t x4147 = -3172;
	int32_t t95 = -5789;

	t95 = (((x4145^x4146)+x4147)>>x4148);

	if (t95 != 25068) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x4221 = 5LLU;
	static volatile int16_t x4222 = -12;
	volatile int16_t x4223 = 7225;
	int32_t x4224 = 49;
	static volatile uint64_t t96 = 6308727838LLU;

	t96 = (((x4221^x4222)+x4223)>>x4224);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x4257 = -1LL;
	volatile int8_t x4258 = -1;
	volatile int64_t t97 = 1LL;

	t97 = (((x4257^x4258)+x4259)>>x4260);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x4262 = UINT16_MAX;
	int16_t x4263 = -10592;
	int16_t x4264 = 1;

	t98 = (((x4261^x4262)+x4263)>>x4264);

	if (t98 != 27451) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x4273 = 9132994437268LLU;
	int8_t x4274 = -1;
	uint32_t x4275 = 1429U;
	uint16_t x4276 = 18U;
	uint64_t t99 = 1019768152LLU;

	t99 = (((x4273^x4274)+x4275)>>x4276);

	if (t99 != 70368709338055LLU) { NG(); } else { ; }
	
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

