#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x28 = 1U;
volatile int64_t x123 = INT64_MIN;
uint8_t x168 = 3U;
uint32_t x204 = 0U;
uint64_t x233 = 1779831556579LLU;
volatile int32_t x235 = INT32_MAX;
volatile uint64_t t9 = 830LLU;
int8_t x683 = -1;
int16_t x873 = INT16_MAX;
int16_t x875 = -1;
uint8_t x917 = 2U;
int16_t x937 = -13;
volatile uint64_t t16 = 2036058476122978619LLU;
int32_t t17 = -1;
uint64_t x1031 = 752073048337LLU;
volatile uint64_t t19 = 1002596031179315044LLU;
uint32_t x1051 = 16212501U;
int64_t x1054 = INT64_MIN;
static uint8_t x1056 = 0U;
volatile uint64_t t21 = 1747907016982LLU;
uint16_t x1172 = 0U;
static int32_t t23 = -4523618;
static uint32_t x1175 = 3052584U;
volatile uint16_t x1255 = UINT16_MAX;
static int32_t t26 = 27987;
volatile int16_t x1367 = INT16_MAX;
uint64_t t28 = 82261LLU;
volatile uint8_t x1390 = UINT8_MAX;
uint64_t x1430 = 6241128449331276219LLU;
int16_t x1474 = 133;
uint16_t x1476 = 0U;
uint32_t x1521 = 241507U;
volatile uint64_t t40 = 12414LLU;
uint8_t x1793 = 7U;
uint32_t x1796 = 0U;
int8_t x1870 = INT8_MAX;
volatile int64_t x1937 = -11888384LL;
int8_t x1940 = 14;
volatile int8_t x1958 = 6;
int8_t x2040 = 5;
uint32_t x2058 = 517977U;
int16_t x2250 = 315;
volatile uint8_t x2252 = 0U;
int32_t t51 = -1020946431;
uint32_t x2297 = 12U;
static int16_t x2310 = -1;
int16_t x2365 = 720;
uint8_t x2406 = UINT8_MAX;
static volatile uint64_t x2429 = 28661415691652LLU;
static int16_t x2430 = 2933;
uint32_t x2472 = 5U;
int8_t x2480 = 0;
int8_t x2553 = INT8_MIN;
static int32_t t63 = 59;
uint64_t t64 = 10788182410LLU;
uint16_t x2688 = 0U;
uint64_t t67 = 1018115118151007443LLU;
uint32_t x3044 = 17U;
uint8_t x3108 = 0U;
static int8_t x3127 = 14;
uint32_t x3213 = 1735207U;
static int8_t x3231 = -1;
volatile uint64_t x3393 = 42LLU;
static volatile uint64_t x3394 = 5286233872426643536LLU;
volatile uint64_t t76 = 113531458339LLU;
volatile uint32_t x3498 = 1036013358U;
int32_t x3500 = 1;
volatile uint16_t x3528 = 4U;
uint32_t x3551 = 1U;
uint32_t x3572 = 1U;
uint16_t x3596 = 7U;
volatile int32_t t82 = 29;
volatile int16_t x3638 = -15;
int8_t x3675 = INT8_MAX;
volatile int64_t x3681 = -1LL;
static uint8_t x3684 = 13U;
int16_t x3750 = -1;
int64_t x3900 = 22LL;
uint32_t x4054 = 14462209U;
int64_t x4055 = INT64_MIN;
int64_t t95 = -1LL;
static volatile uint32_t x4092 = 7U;
int8_t x4119 = INT8_MIN;
volatile uint16_t x4201 = 794U;
uint32_t x4284 = 0U;


void f0(void) {
	volatile uint64_t x25 = UINT64_MAX;
	uint64_t x26 = UINT64_MAX;
	volatile int32_t x27 = INT32_MIN;
	static volatile uint64_t t0 = 37LLU;

	t0 = (((x25*x26)&x27)>>x28);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x121 = 57430289554960058LLU;
	uint64_t x122 = UINT64_MAX;
	int8_t x124 = 2;
	uint64_t t1 = 177772802568184252LLU;

	t1 = (((x121*x122)&x123)>>x124);

	if (t1 != 2305843009213693952LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x161 = 63293LLU;
	volatile int64_t x162 = -4008927536422LL;
	volatile int16_t x163 = -1;
	static uint8_t x164 = 0U;
	uint64_t t2 = 1863LLU;

	t2 = (((x161*x162)&x163)>>x164);

	if (t2 != 18193007023146793970LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x165 = UINT32_MAX;
	int16_t x166 = INT16_MIN;
	static uint8_t x167 = 2U;
	static uint32_t t3 = 837497U;

	t3 = (((x165*x166)&x167)>>x168);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x169 = INT8_MAX;
	uint64_t x170 = UINT64_MAX;
	int8_t x171 = INT8_MIN;
	int16_t x172 = 0;
	volatile uint64_t t4 = 1707LLU;

	t4 = (((x169*x170)&x171)>>x172);

	if (t4 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x201 = 0;
	int8_t x202 = 1;
	int16_t x203 = -1;
	static int32_t t5 = -779;

	t5 = (((x201*x202)&x203)>>x204);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x234 = INT8_MIN;
	volatile int8_t x236 = 1;
	static volatile uint64_t t6 = 1460LLU;

	t6 = (((x233*x234)&x235)>>x236);

	if (t6 != 829261632LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x293 = 17U;
	volatile uint64_t x294 = 8912LLU;
	int16_t x295 = INT16_MIN;
	uint8_t x296 = 1U;
	volatile uint64_t t7 = 4292750379LLU;

	t7 = (((x293*x294)&x295)>>x296);

	if (t7 != 65536LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x477 = -1;
	int64_t x478 = -1LL;
	int64_t x479 = INT64_MIN;
	int8_t x480 = 57;
	volatile int64_t t8 = 4298612406865LL;

	t8 = (((x477*x478)&x479)>>x480);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x617 = INT16_MAX;
	volatile uint64_t x618 = UINT64_MAX;
	int16_t x619 = 33;
	static int16_t x620 = 3;

	t9 = (((x617*x618)&x619)>>x620);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x681 = 1095048;
	uint32_t x682 = 460370U;
	uint8_t x684 = 0U;
	uint32_t t10 = 2073U;

	t10 = (((x681*x682)&x683)>>x684);

	if (t10 != 1616074128U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x701 = 1;
	int16_t x702 = -1;
	int8_t x703 = INT8_MAX;
	uint8_t x704 = 23U;
	static int32_t t11 = 29326101;

	t11 = (((x701*x702)&x703)>>x704);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x801 = UINT64_MAX;
	int32_t x802 = 1;
	int16_t x803 = 4905;
	uint32_t x804 = 7U;
	static uint64_t t12 = 97164371067LLU;

	t12 = (((x801*x802)&x803)>>x804);

	if (t12 != 38LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x874 = 1423U;
	uint8_t x876 = 27U;
	static int32_t t13 = -3197;

	t13 = (((x873*x874)&x875)>>x876);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x909 = -5;
	uint64_t x910 = 21802547371396LLU;
	static int8_t x911 = INT8_MIN;
	static uint16_t x912 = 1U;
	uint64_t t14 = 95513LLU;

	t14 = (((x909*x910)&x911)>>x912);

	if (t14 != 9223317530486347264LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x918 = 10192850U;
	int64_t x919 = INT64_MIN;
	uint32_t x920 = 1U;
	int64_t t15 = 618LL;

	t15 = (((x917*x918)&x919)>>x920);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x938 = 817960335LLU;
	volatile int16_t x939 = -1;
	uint16_t x940 = 6U;

	t16 = (((x937*x938)&x939)>>x940);

	if (t16 != 288230375985563550LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x961 = INT8_MAX;
	int16_t x962 = INT16_MIN;
	int8_t x963 = 7;
	uint32_t x964 = 1U;

	t17 = (((x961*x962)&x963)>>x964);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x1025 = INT8_MIN;
	volatile uint64_t x1026 = 2595218633957190LLU;
	volatile uint64_t x1027 = 10603530678LLU;
	static int8_t x1028 = 10;
	volatile uint64_t t18 = 2878LLU;

	t18 = (((x1025*x1026)&x1027)>>x1028);

	if (t18 != 393218LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1029 = UINT64_MAX;
	static int64_t x1030 = INT64_MIN;
	uint16_t x1032 = 34U;

	t19 = (((x1029*x1030)&x1031)>>x1032);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x1049 = -1;
	int16_t x1050 = -10;
	uint8_t x1052 = 6U;
	volatile uint32_t t20 = 10U;

	t20 = (((x1049*x1050)&x1051)>>x1052);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1053 = UINT64_MAX;
	int16_t x1055 = INT16_MIN;

	t21 = (((x1053*x1054)&x1055)>>x1056);

	if (t21 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x1117 = -486992577467LL;
	uint64_t x1118 = 28351736822704LLU;
	int16_t x1119 = INT16_MIN;
	int8_t x1120 = 0;
	uint64_t t22 = 2068456733LLU;

	t22 = (((x1117*x1118)&x1119)>>x1120);

	if (t22 != 7400311745867317248LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1169 = -5666;
	volatile int16_t x1170 = INT16_MIN;
	int32_t x1171 = 151472841;

	t23 = (((x1169*x1170)&x1171)>>x1172);

	if (t23 != 151060480) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1173 = 40788213LLU;
	int16_t x1174 = INT16_MIN;
	uint64_t x1176 = 2LLU;
	uint64_t t24 = 3576LLU;

	t24 = (((x1173*x1174)&x1175)>>x1176);

	if (t24 != 73728LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1197 = INT8_MIN;
	volatile int8_t x1198 = 50;
	uint16_t x1199 = UINT16_MAX;
	static int8_t x1200 = 1;
	int32_t t25 = -10;

	t25 = (((x1197*x1198)&x1199)>>x1200);

	if (t25 != 29568) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1253 = 19U;
	uint16_t x1254 = 16U;
	static volatile int32_t x1256 = 0;

	t26 = (((x1253*x1254)&x1255)>>x1256);

	if (t26 != 304) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x1297 = 1478742;
	static uint64_t x1298 = UINT64_MAX;
	int32_t x1299 = -1;
	uint64_t x1300 = 5LLU;
	uint64_t t27 = 1502220919171LLU;

	t27 = (((x1297*x1298)&x1299)>>x1300);

	if (t27 != 576460752303377277LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1365 = 62165209930978371LLU;
	static int64_t x1366 = INT64_MIN;
	uint8_t x1368 = 0U;

	t28 = (((x1365*x1366)&x1367)>>x1368);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1389 = -1;
	uint64_t x1391 = 1506LLU;
	volatile uint8_t x1392 = 1U;
	volatile uint64_t t29 = 124868LLU;

	t29 = (((x1389*x1390)&x1391)>>x1392);

	if (t29 != 640LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1429 = INT8_MIN;
	uint64_t x1431 = 48521592993975LLU;
	uint16_t x1432 = 54U;
	volatile uint64_t t30 = 721LLU;

	t30 = (((x1429*x1430)&x1431)>>x1432);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x1461 = INT16_MAX;
	int32_t x1462 = 5799;
	static volatile int64_t x1463 = INT64_MAX;
	uint32_t x1464 = 18U;
	int64_t t31 = -571LL;

	t31 = (((x1461*x1462)&x1463)>>x1464);

	if (t31 != 724LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x1473 = INT16_MAX;
	uint32_t x1475 = UINT32_MAX;
	volatile uint32_t t32 = 0U;

	t32 = (((x1473*x1474)&x1475)>>x1476);

	if (t32 != 4358011U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1497 = -1LL;
	static int8_t x1498 = -1;
	volatile uint32_t x1499 = 30U;
	uint32_t x1500 = 21U;
	volatile int64_t t33 = -2119982506696949907LL;

	t33 = (((x1497*x1498)&x1499)>>x1500);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint8_t x1522 = 7U;
	int32_t x1523 = INT32_MIN;
	int16_t x1524 = 28;
	volatile uint32_t t34 = 8210142U;

	t34 = (((x1521*x1522)&x1523)>>x1524);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1565 = INT32_MIN;
	uint16_t x1566 = 0U;
	volatile uint16_t x1567 = 76U;
	uint32_t x1568 = 3U;
	int32_t t35 = -439;

	t35 = (((x1565*x1566)&x1567)>>x1568);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1573 = INT8_MIN;
	static volatile uint16_t x1574 = UINT16_MAX;
	int8_t x1575 = INT8_MAX;
	uint64_t x1576 = 6LLU;
	int32_t t36 = 10;

	t36 = (((x1573*x1574)&x1575)>>x1576);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1641 = INT16_MIN;
	static volatile int8_t x1642 = INT8_MIN;
	static volatile uint64_t x1643 = 1730LLU;
	static volatile int16_t x1644 = 27;
	volatile uint64_t t37 = 4065LLU;

	t37 = (((x1641*x1642)&x1643)>>x1644);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x1661 = 15080;
	int8_t x1662 = INT8_MIN;
	volatile uint64_t x1663 = UINT64_MAX;
	uint8_t x1664 = 1U;
	uint64_t t38 = 6286LLU;

	t38 = (((x1661*x1662)&x1663)>>x1664);

	if (t38 != 9223372036853810688LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1669 = 433;
	volatile int16_t x1670 = INT16_MIN;
	static uint32_t x1671 = 65406254U;
	uint16_t x1672 = 0U;
	uint32_t t39 = 142420900U;

	t39 = (((x1669*x1670)&x1671)>>x1672);

	if (t39 != 52822016U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x1693 = 9701825502LLU;
	int8_t x1694 = -1;
	static volatile int64_t x1695 = 59385LL;
	volatile uint8_t x1696 = 0U;

	t40 = (((x1693*x1694)&x1695)>>x1696);

	if (t40 != 58400LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint32_t x1794 = 1546U;
	int16_t x1795 = -427;
	volatile uint32_t t41 = 3U;

	t41 = (((x1793*x1794)&x1795)>>x1796);

	if (t41 != 10820U) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x1869 = -1;
	static int8_t x1871 = 1;
	uint8_t x1872 = 1U;
	int32_t t42 = 3;

	t42 = (((x1869*x1870)&x1871)>>x1872);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x1873 = UINT32_MAX;
	int8_t x1874 = INT8_MAX;
	uint64_t x1875 = 5223036163273190810LLU;
	uint32_t x1876 = 11U;
	uint64_t t43 = 201359149393LLU;

	t43 = (((x1873*x1874)&x1875)>>x1876);

	if (t43 != 1514845LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1938 = 2;
	uint8_t x1939 = 10U;
	volatile int64_t t44 = -1546LL;

	t44 = (((x1937*x1938)&x1939)>>x1940);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1957 = 20;
	volatile int64_t x1959 = INT64_MIN;
	uint8_t x1960 = 2U;
	volatile int64_t t45 = 60LL;

	t45 = (((x1957*x1958)&x1959)>>x1960);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1989 = 0;
	uint32_t x1990 = UINT32_MAX;
	static uint8_t x1991 = 5U;
	uint8_t x1992 = 10U;
	uint32_t t46 = 1943418723U;

	t46 = (((x1989*x1990)&x1991)>>x1992);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x2025 = 2U;
	int64_t x2026 = -1LL;
	uint8_t x2027 = UINT8_MAX;
	static uint8_t x2028 = 9U;
	int64_t t47 = 7LL;

	t47 = (((x2025*x2026)&x2027)>>x2028);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x2037 = -1LL;
	int64_t x2038 = -3451LL;
	static volatile uint64_t x2039 = UINT64_MAX;
	uint64_t t48 = 103860740LLU;

	t48 = (((x2037*x2038)&x2039)>>x2040);

	if (t48 != 107LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2057 = INT16_MIN;
	static int16_t x2059 = INT16_MIN;
	uint64_t x2060 = 14LLU;
	uint32_t t49 = 1U;

	t49 = (((x2057*x2058)&x2059)>>x2060);

	if (t49 != 12622U) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x2209 = -4891994833429LL;
	volatile uint8_t x2210 = UINT8_MAX;
	static volatile uint16_t x2211 = 129U;
	int8_t x2212 = 1;
	volatile int64_t t50 = 423859LL;

	t50 = (((x2209*x2210)&x2211)>>x2212);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x2249 = 69U;
	static int32_t x2251 = INT32_MAX;

	t51 = (((x2249*x2250)&x2251)>>x2252);

	if (t51 != 21735) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x2298 = UINT32_MAX;
	int64_t x2299 = -1LL;
	volatile uint32_t x2300 = 44U;
	int64_t t52 = -206695946LL;

	t52 = (((x2297*x2298)&x2299)>>x2300);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x2309 = INT16_MIN;
	volatile uint16_t x2311 = UINT16_MAX;
	int16_t x2312 = 0;
	int32_t t53 = 40;

	t53 = (((x2309*x2310)&x2311)>>x2312);

	if (t53 != 32768) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x2366 = INT16_MAX;
	int16_t x2367 = -1;
	uint32_t x2368 = 7U;
	int32_t t54 = -79;

	t54 = (((x2365*x2366)&x2367)>>x2368);

	if (t54 != 184314) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2405 = INT16_MAX;
	int16_t x2407 = -1;
	int16_t x2408 = 1;
	volatile int32_t t55 = -901;

	t55 = (((x2405*x2406)&x2407)>>x2408);

	if (t55 != 4177792) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x2421 = -11648938;
	static int8_t x2422 = -1;
	int64_t x2423 = INT64_MIN;
	static uint16_t x2424 = 56U;
	static volatile int64_t t56 = 4629853899025LL;

	t56 = (((x2421*x2422)&x2423)>>x2424);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x2431 = 19319U;
	uint32_t x2432 = 10U;
	uint64_t t57 = 17185311524859LLU;

	t57 = (((x2429*x2430)&x2431)>>x2432);

	if (t57 != 16LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x2433 = INT8_MIN;
	uint8_t x2434 = UINT8_MAX;
	static int64_t x2435 = 1LL;
	uint16_t x2436 = 1U;
	volatile int64_t t58 = -479888773LL;

	t58 = (((x2433*x2434)&x2435)>>x2436);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x2469 = -1;
	int64_t x2470 = -1LL;
	volatile uint64_t x2471 = 508615039004991185LLU;
	uint64_t t59 = 1230LLU;

	t59 = (((x2469*x2470)&x2471)>>x2472);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2477 = -1;
	static volatile int16_t x2478 = -1;
	static volatile int16_t x2479 = 0;
	int32_t t60 = -5839907;

	t60 = (((x2477*x2478)&x2479)>>x2480);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x2513 = 44U;
	uint64_t x2514 = 10519LLU;
	uint8_t x2515 = UINT8_MAX;
	static int32_t x2516 = 37;
	uint64_t t61 = 188LLU;

	t61 = (((x2513*x2514)&x2515)>>x2516);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x2545 = 32U;
	static int32_t x2546 = -1;
	uint32_t x2547 = UINT32_MAX;
	uint16_t x2548 = 23U;
	volatile uint32_t t62 = 487U;

	t62 = (((x2545*x2546)&x2547)>>x2548);

	if (t62 != 511U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2554 = INT8_MIN;
	int32_t x2555 = INT32_MAX;
	uint8_t x2556 = 0U;

	t63 = (((x2553*x2554)&x2555)>>x2556);

	if (t63 != 16384) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x2673 = -2LL;
	static int8_t x2674 = INT8_MIN;
	uint64_t x2675 = 4396715LLU;
	uint64_t x2676 = 4LLU;

	t64 = (((x2673*x2674)&x2675)>>x2676);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x2685 = 8;
	int16_t x2686 = 10887;
	int16_t x2687 = 123;
	volatile int32_t t65 = 506375;

	t65 = (((x2685*x2686)&x2687)>>x2688);

	if (t65 != 56) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2809 = -1;
	int16_t x2810 = -1;
	int8_t x2811 = INT8_MIN;
	static int16_t x2812 = 1;
	static int32_t t66 = 18385203;

	t66 = (((x2809*x2810)&x2811)>>x2812);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x2881 = INT64_MIN;
	uint64_t x2882 = 223830710785566LLU;
	int8_t x2883 = INT8_MAX;
	uint16_t x2884 = 45U;

	t67 = (((x2881*x2882)&x2883)>>x2884);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x2937 = 48U;
	uint32_t x2938 = UINT32_MAX;
	int8_t x2939 = INT8_MAX;
	uint8_t x2940 = 4U;
	volatile uint32_t t68 = 58609U;

	t68 = (((x2937*x2938)&x2939)>>x2940);

	if (t68 != 5U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3041 = -1;
	int8_t x3042 = INT8_MIN;
	int64_t x3043 = INT64_MIN;
	volatile int64_t t69 = -191LL;

	t69 = (((x3041*x3042)&x3043)>>x3044);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x3105 = 53U;
	int8_t x3106 = -2;
	static int64_t x3107 = INT64_MAX;
	int64_t t70 = 9816254298950143LL;

	t70 = (((x3105*x3106)&x3107)>>x3108);

	if (t70 != 9223372036854775702LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x3125 = INT8_MIN;
	uint64_t x3126 = 196057LLU;
	uint8_t x3128 = 43U;
	volatile uint64_t t71 = 376LLU;

	t71 = (((x3125*x3126)&x3127)>>x3128);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x3214 = INT8_MIN;
	static uint64_t x3215 = UINT64_MAX;
	uint8_t x3216 = 1U;
	uint64_t t72 = 3278652050787075LLU;

	t72 = (((x3213*x3214)&x3215)>>x3216);

	if (t72 != 2036430400LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x3229 = 1558600LLU;
	int8_t x3230 = -1;
	uint16_t x3232 = 1U;
	uint64_t t73 = 4221720820029944LLU;

	t73 = (((x3229*x3230)&x3231)>>x3232);

	if (t73 != 9223372036853996508LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x3285 = 14;
	int8_t x3286 = INT8_MAX;
	static uint64_t x3287 = 37014415LLU;
	int16_t x3288 = 1;
	volatile uint64_t t74 = 456390190442LLU;

	t74 = (((x3285*x3286)&x3287)>>x3288);

	if (t74 != 321LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x3305 = UINT64_MAX;
	int8_t x3306 = -1;
	int32_t x3307 = INT32_MAX;
	volatile int32_t x3308 = 0;
	volatile uint64_t t75 = 27944LLU;

	t75 = (((x3305*x3306)&x3307)>>x3308);

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x3395 = UINT32_MAX;
	static uint16_t x3396 = 24U;

	t76 = (((x3393*x3394)&x3395)>>x3396);

	if (t76 != 236LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x3489 = UINT16_MAX;
	uint32_t x3490 = 65746953U;
	static int64_t x3491 = INT64_MAX;
	static volatile uint32_t x3492 = 0U;
	volatile int64_t t77 = 1698419350974508LL;

	t77 = (((x3489*x3490)&x3491)>>x3492);

	if (t77 != 874366967LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x3497 = UINT16_MAX;
	uint64_t x3499 = 1112676714555800LLU;
	uint64_t t78 = 11734LLU;

	t78 = (((x3497*x3498)&x3499)>>x3500);

	if (t78 != 136319048LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x3525 = -1;
	static int16_t x3526 = -1;
	uint64_t x3527 = 13824LLU;
	uint64_t t79 = 9458063LLU;

	t79 = (((x3525*x3526)&x3527)>>x3528);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x3549 = -1;
	uint32_t x3550 = 6023U;
	volatile int8_t x3552 = 4;
	uint32_t t80 = 18U;

	t80 = (((x3549*x3550)&x3551)>>x3552);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x3569 = INT8_MAX;
	volatile uint32_t x3570 = 1426474424U;
	int8_t x3571 = INT8_MIN;
	static volatile uint32_t t81 = 26529U;

	t81 = (((x3569*x3570)&x3571)>>x3572);

	if (t81 != 386812672U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x3593 = -1;
	volatile uint16_t x3594 = 3252U;
	int32_t x3595 = 31;

	t82 = (((x3593*x3594)&x3595)>>x3596);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x3637 = INT16_MIN;
	uint8_t x3639 = 10U;
	uint8_t x3640 = 15U;
	volatile int32_t t83 = 836;

	t83 = (((x3637*x3638)&x3639)>>x3640);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x3657 = -1;
	int16_t x3658 = INT16_MIN;
	volatile uint8_t x3659 = UINT8_MAX;
	uint8_t x3660 = 0U;
	volatile int32_t t84 = 10;

	t84 = (((x3657*x3658)&x3659)>>x3660);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x3673 = INT16_MAX;
	uint8_t x3674 = 3U;
	volatile uint16_t x3676 = 0U;
	volatile int32_t t85 = -11;

	t85 = (((x3673*x3674)&x3675)>>x3676);

	if (t85 != 125) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x3682 = -57695249LL;
	volatile int32_t x3683 = -1;
	volatile int64_t t86 = 26LL;

	t86 = (((x3681*x3682)&x3683)>>x3684);

	if (t86 != 7042LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x3749 = 81U;
	uint32_t x3751 = 155161282U;
	int16_t x3752 = 5;
	static uint32_t t87 = 1U;

	t87 = (((x3749*x3750)&x3751)>>x3752);

	if (t87 != 4848788U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x3833 = 2784188063840768LLU;
	static int8_t x3834 = INT8_MAX;
	static int8_t x3835 = INT8_MIN;
	int8_t x3836 = 7;
	uint64_t t88 = 267273111LLU;

	t88 = (((x3833*x3834)&x3835)>>x3836);

	if (t88 != 2762436594592012LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x3893 = -179166LL;
	int64_t x3894 = -49LL;
	int32_t x3895 = INT32_MIN;
	uint8_t x3896 = 1U;
	volatile int64_t t89 = 23295879407691LL;

	t89 = (((x3893*x3894)&x3895)>>x3896);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x3897 = 61U;
	volatile uint64_t x3898 = 12405093663195015LLU;
	uint64_t x3899 = 372528704082669813LLU;
	volatile uint64_t t90 = 0LLU;

	t90 = (((x3897*x3898)&x3899)>>x3900);

	if (t90 != 25264580LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x3913 = INT32_MAX;
	volatile uint64_t x3914 = 1758237621819757189LLU;
	int8_t x3915 = INT8_MIN;
	uint16_t x3916 = 43U;
	static uint64_t t91 = 490045828137579LLU;

	t91 = (((x3913*x3914)&x3915)>>x3916);

	if (t91 != 1042404LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint64_t x3945 = 301987LLU;
	static int64_t x3946 = 35219LL;
	static int8_t x3947 = INT8_MAX;
	volatile int32_t x3948 = 0;
	uint64_t t92 = 508284250998048198LLU;

	t92 = (((x3945*x3946)&x3947)>>x3948);

	if (t92 != 25LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x4045 = 32851940LL;
	static int8_t x4046 = -1;
	uint8_t x4047 = UINT8_MAX;
	uint8_t x4048 = 35U;
	static int64_t t93 = 1880928369487055LL;

	t93 = (((x4045*x4046)&x4047)>>x4048);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x4049 = UINT16_MAX;
	int16_t x4050 = INT16_MIN;
	int32_t x4051 = 1931148;
	int8_t x4052 = 1;
	volatile int32_t t94 = 243;

	t94 = (((x4049*x4050)&x4051)>>x4052);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x4053 = INT32_MIN;
	volatile int8_t x4056 = 0;

	t95 = (((x4053*x4054)&x4055)>>x4056);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x4089 = UINT32_MAX;
	static uint16_t x4090 = 2U;
	static int16_t x4091 = INT16_MIN;
	uint32_t t96 = 1U;

	t96 = (((x4089*x4090)&x4091)>>x4092);

	if (t96 != 33554176U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x4117 = 405U;
	static int16_t x4118 = INT16_MIN;
	int32_t x4120 = 2;
	volatile uint32_t t97 = 12981756U;

	t97 = (((x4117*x4118)&x4119)>>x4120);

	if (t97 != 1070424064U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x4202 = 114366975U;
	uint64_t x4203 = UINT64_MAX;
	volatile int64_t x4204 = 1LL;
	volatile uint64_t t98 = 1436176251625925LLU;

	t98 = (((x4201*x4202)&x4203)>>x4204);

	if (t98 != 306532467LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x4281 = -2;
	volatile int64_t x4282 = -1LL;
	int8_t x4283 = INT8_MIN;
	int64_t t99 = -454LL;

	t99 = (((x4281*x4282)&x4283)>>x4284);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

