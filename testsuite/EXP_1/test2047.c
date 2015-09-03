#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x51 = INT32_MIN;
static volatile uint8_t x73 = 119U;
int8_t x144 = 27;
int16_t x169 = INT16_MAX;
static uint64_t x170 = 272LLU;
uint16_t x195 = UINT16_MAX;
volatile uint64_t t8 = 1830993103395490618LLU;
volatile uint8_t x293 = 36U;
int8_t x294 = -2;
uint64_t x369 = 120934118839509LLU;
volatile uint64_t t11 = 884757854962LLU;
static uint8_t x383 = 1U;
int32_t t12 = 3;
volatile uint32_t x438 = UINT32_MAX;
volatile int64_t t15 = 37108398495159465LL;
volatile uint64_t x679 = 4085423642LLU;
static uint16_t x874 = UINT16_MAX;
volatile uint64_t x901 = 3630253960LLU;
uint8_t x1057 = 15U;
int64_t x1114 = 84577331LL;
int8_t x1116 = 26;
uint64_t x1195 = UINT64_MAX;
volatile int64_t t26 = 52012054593614238LL;
int8_t x1387 = 1;
int8_t x1428 = 1;
uint64_t x1451 = 6147538771132563434LLU;
volatile uint64_t t32 = 17356177LLU;
volatile uint32_t x1495 = 34U;
int8_t x1527 = -1;
static volatile uint32_t t36 = 30938U;
volatile int64_t x1693 = INT64_MIN;
int32_t x1826 = INT32_MIN;
int8_t x1827 = 2;
static int8_t x1852 = 2;
static int16_t x1901 = INT16_MAX;
static int64_t x1903 = 329LL;
static volatile uint8_t x1904 = 6U;
static int16_t x1905 = 131;
static int32_t t42 = -6406;
static int32_t x1954 = INT32_MAX;
uint64_t x1989 = 882701703641197LLU;
uint8_t x1991 = 114U;
int8_t x2141 = INT8_MAX;
static volatile uint8_t x2144 = 7U;
int64_t x2157 = -3904LL;
uint32_t x2173 = 946657U;
volatile uint32_t t48 = 1U;
int32_t x2361 = 253453;
int16_t x2363 = INT16_MIN;
int32_t x2398 = 0;
volatile uint32_t t50 = 1023387U;
int8_t x2486 = -1;
uint8_t x2508 = 1U;
uint64_t t52 = 1595871357096338014LLU;
static int8_t x2511 = INT8_MIN;
uint8_t x2512 = 5U;
int64_t x2532 = 31LL;
int8_t x2653 = 0;
int8_t x2656 = 1;
uint64_t t56 = 2LLU;
uint32_t t58 = 26560U;
static int32_t x2793 = INT32_MAX;
volatile uint32_t x2795 = 10U;
static uint32_t t60 = 1198335699U;
uint32_t x2799 = UINT32_MAX;
int16_t x2800 = 0;
uint32_t t61 = 7U;
uint16_t x2803 = 857U;
int64_t x2833 = INT64_MIN;
volatile int64_t t63 = -145307LL;
static volatile int16_t x2914 = INT16_MIN;
int16_t x2915 = 11;
static uint32_t x3073 = UINT32_MAX;
int16_t x3174 = INT16_MIN;
uint8_t x3268 = 25U;
volatile uint64_t t70 = 2090081648262632LLU;
uint8_t x3292 = 3U;
uint64_t x3361 = UINT64_MAX;
int64_t x3362 = INT64_MIN;
static uint32_t t77 = 6170572U;
volatile uint64_t t78 = 15664029LLU;
int32_t x3534 = -1;
int16_t x3535 = -13;
volatile int32_t t79 = -41324900;
static volatile int64_t t80 = -26LL;
uint64_t t81 = 216880443LLU;
uint64_t x3674 = UINT64_MAX;
uint64_t t84 = 73927015591LLU;
int32_t x3827 = INT32_MIN;
uint32_t t86 = 535U;
uint8_t x4081 = UINT8_MAX;
uint16_t x4118 = UINT16_MAX;
static uint8_t x4120 = 2U;
int16_t x4122 = INT16_MIN;
uint64_t x4446 = 1501541345LLU;
volatile uint64_t t91 = 278233015831297823LLU;
uint64_t x4481 = 6422200705397LLU;
volatile int32_t t93 = -114;
uint32_t x4686 = UINT32_MAX;
static volatile uint8_t x4688 = 0U;
static uint64_t t98 = 98LLU;
uint8_t x4696 = 6U;


void f0(void) {
	static int16_t x5 = -6;
	volatile uint8_t x6 = 3U;
	uint32_t x7 = 1950669U;
	int16_t x8 = 12;
	volatile uint32_t t0 = 114808501U;

	t0 = (((x5^x6)-x7)<<x8);

	if (t0 != 599965696U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x49 = 44859353057LL;
	int16_t x50 = INT16_MAX;
	uint8_t x52 = 1U;
	volatile int64_t t1 = 3580024118LL;

	t1 = (((x49^x50)-x51)<<x52);

	if (t1 != 94013632572LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x61 = INT8_MIN;
	int8_t x62 = -1;
	static int8_t x63 = INT8_MAX;
	uint16_t x64 = 7U;
	int32_t t2 = -1;

	t2 = (((x61^x62)-x63)<<x64);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x74 = 66811LLU;
	int64_t x75 = INT64_MAX;
	uint16_t x76 = 6U;
	volatile uint64_t t3 = 5LLU;

	t3 = (((x73^x74)-x75)<<x76);

	if (t3 != 4268864LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x141 = 1U;
	int16_t x142 = INT16_MAX;
	uint32_t x143 = 239009611U;
	uint32_t t4 = 1368821U;

	t4 = (((x141^x142)-x143)<<x144);

	if (t4 != 2550136832U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x157 = 3U;
	uint32_t x158 = UINT32_MAX;
	uint8_t x159 = 1U;
	int32_t x160 = 3;
	volatile uint32_t t5 = 5621838U;

	t5 = (((x157^x158)-x159)<<x160);

	if (t5 != 4294967256U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x171 = INT32_MIN;
	static uint8_t x172 = 12U;
	volatile uint64_t t6 = 32207142LLU;

	t6 = (((x169^x170)-x171)<<x172);

	if (t6 != 8796226121728LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x181 = -1;
	uint64_t x182 = 716868398704126LLU;
	static int8_t x183 = INT8_MIN;
	volatile uint8_t x184 = 4U;
	static volatile uint64_t t7 = 17101444LLU;

	t7 = (((x181^x182)-x183)<<x184);

	if (t7 != 18435274179330287632LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x193 = -1;
	uint64_t x194 = UINT64_MAX;
	uint8_t x196 = 2U;

	t8 = (((x193^x194)-x195)<<x196);

	if (t8 != 18446744073709289476LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x295 = -24255024688729783LL;
	static uint8_t x296 = 1U;
	volatile int64_t t9 = 36329664LL;

	t9 = (((x293^x294)-x295)<<x296);

	if (t9 != 48510049377459490LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x309 = 12623288027561LLU;
	int8_t x310 = 2;
	int32_t x311 = INT32_MAX;
	static uint16_t x312 = 27U;
	uint64_t t10 = 1678472069568358LLU;

	t10 = (((x309^x310)-x311)<<x312);

	if (t10 != 15327097865520545792LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x370 = INT32_MIN;
	uint8_t x371 = 60U;
	int8_t x372 = 1;

	t11 = (((x369^x370)-x371)<<x372);

	if (t11 != 18446502204075649330LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x381 = 2;
	uint16_t x382 = UINT16_MAX;
	volatile int16_t x384 = 0;

	t12 = (((x381^x382)-x383)<<x384);

	if (t12 != 65532) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x437 = UINT32_MAX;
	static int8_t x439 = -7;
	uint64_t x440 = 3LLU;
	uint32_t t13 = 528U;

	t13 = (((x437^x438)-x439)<<x440);

	if (t13 != 56U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x585 = INT8_MAX;
	static uint8_t x586 = 79U;
	int16_t x587 = INT16_MIN;
	int8_t x588 = 0;
	static volatile int32_t t14 = 850;

	t14 = (((x585^x586)-x587)<<x588);

	if (t14 != 32816) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x641 = 1U;
	volatile int32_t x642 = INT32_MAX;
	int64_t x643 = -4982178927796229LL;
	int8_t x644 = 1;

	t15 = (((x641^x642)-x643)<<x644);

	if (t15 != 9964362150559750LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x677 = -1;
	uint64_t x678 = UINT64_MAX;
	static uint8_t x680 = 59U;
	volatile uint64_t t16 = 166224686343232981LLU;

	t16 = (((x677^x678)-x679)<<x680);

	if (t16 != 3458764513820540928LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x761 = 367U;
	uint64_t x762 = UINT64_MAX;
	volatile uint32_t x763 = 15352087U;
	uint8_t x764 = 0U;
	volatile uint64_t t17 = 2679863803783LLU;

	t17 = (((x761^x762)-x763)<<x764);

	if (t17 != 18446744073694199161LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x809 = INT16_MIN;
	int64_t x810 = -1LL;
	int8_t x811 = -1;
	uint8_t x812 = 1U;
	int64_t t18 = 69682629LL;

	t18 = (((x809^x810)-x811)<<x812);

	if (t18 != 65536LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x873 = INT16_MAX;
	static volatile uint32_t x875 = 672U;
	static uint8_t x876 = 3U;
	volatile uint32_t t19 = 14U;

	t19 = (((x873^x874)-x875)<<x876);

	if (t19 != 256768U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x902 = -170;
	static volatile uint16_t x903 = 4693U;
	volatile uint64_t x904 = 55LLU;
	volatile uint64_t t20 = 261270939420131938LLU;

	t20 = (((x901^x902)-x903)<<x904);

	if (t20 != 4935945191598063616LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1058 = 1U;
	int16_t x1059 = INT16_MIN;
	static uint16_t x1060 = 7U;
	static int32_t t21 = 445801393;

	t21 = (((x1057^x1058)-x1059)<<x1060);

	if (t21 != 4196096) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1113 = 57453673U;
	int64_t x1115 = 4158LL;
	static int64_t t22 = -963LL;

	t22 = (((x1113^x1114)-x1115)<<x1116);

	if (t22 != 7204276942143488LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1133 = INT8_MIN;
	uint64_t x1134 = UINT64_MAX;
	int16_t x1135 = -11;
	volatile int16_t x1136 = 14;
	static volatile uint64_t t23 = 7260899LLU;

	t23 = (((x1133^x1134)-x1135)<<x1136);

	if (t23 != 2260992LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x1193 = INT64_MAX;
	int8_t x1194 = 29;
	volatile uint16_t x1196 = 6U;
	uint64_t t24 = 16998806026638826LLU;

	t24 = (((x1193^x1194)-x1195)<<x1196);

	if (t24 != 18446744073709549760LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1257 = 13390291LLU;
	int32_t x1258 = INT32_MAX;
	volatile int64_t x1259 = INT64_MAX;
	uint16_t x1260 = 3U;
	uint64_t t25 = 10042823682734LLU;

	t25 = (((x1257^x1258)-x1259)<<x1260);

	if (t25 != 17072746856LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x1333 = INT8_MIN;
	static int64_t x1334 = -7594124394LL;
	volatile int16_t x1335 = 1360;
	volatile int16_t x1336 = 10;

	t26 = (((x1333^x1334)-x1335)<<x1336);

	if (t26 != 7776381900800LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1345 = UINT8_MAX;
	uint16_t x1346 = 3342U;
	int16_t x1347 = -9;
	uint16_t x1348 = 7U;
	volatile int32_t t27 = -1;

	t27 = (((x1345^x1346)-x1347)<<x1348);

	if (t27 != 457984) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1385 = UINT64_MAX;
	int16_t x1386 = INT16_MIN;
	uint8_t x1388 = 60U;
	volatile uint64_t t28 = 29421LLU;

	t28 = (((x1385^x1386)-x1387)<<x1388);

	if (t28 != 16140901064495857664LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x1425 = 25;
	static uint8_t x1426 = UINT8_MAX;
	int16_t x1427 = INT16_MIN;
	int32_t t29 = 455271776;

	t29 = (((x1425^x1426)-x1427)<<x1428);

	if (t29 != 65996) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1449 = 673484U;
	int32_t x1450 = -170205;
	int16_t x1452 = 1;
	volatile uint64_t t30 = 2994171694523288LLU;

	t30 = (((x1449^x1450)-x1451)<<x1452);

	if (t30 != 6151666540033197066LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x1457 = INT32_MIN;
	uint64_t x1458 = 1553906968331899227LLU;
	uint32_t x1459 = 39U;
	int64_t x1460 = 1LL;
	volatile uint64_t t31 = 3198282206LLU;

	t31 = (((x1457^x1458)-x1459)<<x1460);

	if (t31 != 15338930134725599848LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1461 = INT64_MAX;
	static uint64_t x1462 = 201469879822LLU;
	uint64_t x1463 = UINT64_MAX;
	int32_t x1464 = 1;

	t32 = (((x1461^x1462)-x1463)<<x1464);

	if (t32 != 18446743670769791972LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x1493 = UINT8_MAX;
	static volatile uint8_t x1494 = UINT8_MAX;
	uint32_t x1496 = 24U;
	uint32_t t33 = 1532005682U;

	t33 = (((x1493^x1494)-x1495)<<x1496);

	if (t33 != 3724541952U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1525 = -1;
	int8_t x1526 = INT8_MIN;
	int32_t x1528 = 1;
	int32_t t34 = -6539;

	t34 = (((x1525^x1526)-x1527)<<x1528);

	if (t34 != 256) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1625 = 132742123082024LLU;
	volatile int64_t x1626 = -3253472943553801LL;
	uint64_t x1627 = 2103189LLU;
	uint8_t x1628 = 2U;
	uint64_t t35 = 1776309129LLU;

	t35 = (((x1625^x1626)-x1627)<<x1628);

	if (t35 != 18433269586887962920LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1677 = 2040932933U;
	static volatile int16_t x1678 = -642;
	int32_t x1679 = -1;
	int16_t x1680 = 0;

	t36 = (((x1677^x1678)-x1679)<<x1680);

	if (t36 != 2254034748U) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint32_t x1694 = 4773U;
	int64_t x1695 = INT64_MIN;
	uint8_t x1696 = 15U;
	int64_t t37 = -107044LL;

	t37 = (((x1693^x1694)-x1695)<<x1696);

	if (t37 != 156401664LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x1825 = UINT32_MAX;
	volatile int16_t x1828 = 0;
	volatile uint32_t t38 = 57766U;

	t38 = (((x1825^x1826)-x1827)<<x1828);

	if (t38 != 2147483645U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x1849 = 4U;
	static uint64_t x1850 = 992966LLU;
	int8_t x1851 = -2;
	static volatile uint64_t t39 = 396202798LLU;

	t39 = (((x1849^x1850)-x1851)<<x1852);

	if (t39 != 3971856LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x1893 = UINT16_MAX;
	uint16_t x1894 = 5U;
	volatile uint32_t x1895 = 1U;
	int8_t x1896 = 14;
	static volatile uint32_t t40 = 56954526U;

	t40 = (((x1893^x1894)-x1895)<<x1896);

	if (t40 != 1073627136U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x1902 = 35U;
	volatile int64_t t41 = -3723382729507LL;

	t41 = (((x1901^x1902)-x1903)<<x1904);

	if (t41 != 2073792LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x1906 = INT16_MAX;
	int8_t x1907 = INT8_MIN;
	int16_t x1908 = 1;

	t42 = (((x1905^x1906)-x1907)<<x1908);

	if (t42 != 65528) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1953 = INT32_MIN;
	uint64_t x1955 = 11589029841518LLU;
	static uint16_t x1956 = 14U;
	volatile uint64_t t43 = 1257LLU;

	t43 = (((x1953^x1954)-x1955)<<x1956);

	if (t43 != 18256869408786104320LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1973 = -2086;
	uint64_t x1974 = 89LLU;
	int16_t x1975 = -1;
	static uint8_t x1976 = 4U;
	volatile uint64_t t44 = 3542388906380LLU;

	t44 = (((x1973^x1974)-x1975)<<x1976);

	if (t44 != 18446744073709516864LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x1990 = INT64_MAX;
	uint8_t x1992 = 53U;
	volatile uint64_t t45 = 560099271148520940LLU;

	t45 = (((x1989^x1990)-x1991)<<x1992);

	if (t45 != 16429131440647569408LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x2142 = 2062413U;
	int16_t x2143 = INT16_MIN;
	uint32_t t46 = 50450345U;

	t46 = (((x2141^x2142)-x2143)<<x2144);

	if (t46 != 268179712U) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x2158 = INT32_MIN;
	int16_t x2159 = 61;
	uint16_t x2160 = 2U;
	int64_t t47 = 601LL;

	t47 = (((x2157^x2158)-x2159)<<x2160);

	if (t47 != 8589918732LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x2174 = INT8_MIN;
	int16_t x2175 = INT16_MIN;
	uint64_t x2176 = 0LLU;

	t48 = (((x2173^x2174)-x2175)<<x2176);

	if (t48 != 4294053473U) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2362 = UINT16_MAX;
	static int8_t x2364 = 1;
	volatile int32_t t49 = 74296851;

	t49 = (((x2361^x2362)-x2363)<<x2364);

	if (t49 != 476132) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x2397 = 8248219U;
	int8_t x2399 = INT8_MIN;
	uint8_t x2400 = 1U;

	t50 = (((x2397^x2398)-x2399)<<x2400);

	if (t50 != 16496694U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x2485 = UINT32_MAX;
	volatile uint32_t x2487 = 811739U;
	uint32_t x2488 = 25U;
	static uint32_t t51 = 1U;

	t51 = (((x2485^x2486)-x2487)<<x2488);

	if (t51 != 1241513984U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2505 = 1;
	int64_t x2506 = -1LL;
	uint64_t x2507 = 1951LLU;

	t52 = (((x2505^x2506)-x2507)<<x2508);

	if (t52 != 18446744073709547710LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x2509 = INT8_MIN;
	int8_t x2510 = INT8_MIN;
	static volatile int32_t t53 = -120;

	t53 = (((x2509^x2510)-x2511)<<x2512);

	if (t53 != 4096) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x2529 = 559281U;
	static int32_t x2530 = INT32_MIN;
	uint16_t x2531 = UINT16_MAX;
	static volatile uint32_t t54 = 1730014062U;

	t54 = (((x2529^x2530)-x2531)<<x2532);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x2633 = UINT16_MAX;
	volatile int8_t x2634 = 31;
	static int8_t x2635 = -1;
	int8_t x2636 = 11;
	static int32_t t55 = -9;

	t55 = (((x2633^x2634)-x2635)<<x2636);

	if (t55 != 134154240) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x2654 = 1221553LLU;
	int16_t x2655 = INT16_MAX;

	t56 = (((x2653^x2654)-x2655)<<x2656);

	if (t56 != 2377572LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x2697 = UINT16_MAX;
	int64_t x2698 = INT64_MIN;
	int64_t x2699 = INT64_MIN;
	uint16_t x2700 = 36U;
	volatile int64_t t57 = -782LL;

	t57 = (((x2697^x2698)-x2699)<<x2700);

	if (t57 != 4503530907893760LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x2721 = INT32_MIN;
	static uint32_t x2722 = 327968692U;
	int16_t x2723 = 10351;
	uint32_t x2724 = 3U;

	t58 = (((x2721^x2722)-x2723)<<x2724);

	if (t58 != 2623666728U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2785 = INT16_MIN;
	int16_t x2786 = 54;
	int16_t x2787 = INT16_MIN;
	uint16_t x2788 = 0U;
	volatile int32_t t59 = -213459;

	t59 = (((x2785^x2786)-x2787)<<x2788);

	if (t59 != 54) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x2794 = INT16_MAX;
	static uint64_t x2796 = 0LLU;

	t60 = (((x2793^x2794)-x2795)<<x2796);

	if (t60 != 2147450870U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x2797 = 4343U;
	int8_t x2798 = INT8_MIN;

	t61 = (((x2797^x2798)-x2799)<<x2800);

	if (t61 != 4294963064U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x2801 = -89259218891LL;
	int16_t x2802 = -502;
	volatile int16_t x2804 = 8;
	static int64_t t62 = 1400642488303656LL;

	t62 = (((x2801^x2802)-x2803)<<x2804);

	if (t62 != 22850359715328LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x2834 = 0;
	static int64_t x2835 = INT64_MIN;
	volatile uint16_t x2836 = 1U;

	t63 = (((x2833^x2834)-x2835)<<x2836);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x2881 = 1466276U;
	int32_t x2882 = -1;
	volatile int64_t x2883 = -238759LL;
	uint8_t x2884 = 0U;
	int64_t t64 = 112367876LL;

	t64 = (((x2881^x2882)-x2883)<<x2884);

	if (t64 != 4293739778LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x2913 = -1LL;
	int8_t x2916 = 1;
	int64_t t65 = 359137LL;

	t65 = (((x2913^x2914)-x2915)<<x2916);

	if (t65 != 65512LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x3074 = -3513318274355067914LL;
	uint64_t x3075 = 3332525LLU;
	uint32_t x3076 = 0U;
	uint64_t t66 = 301990924563726822LLU;

	t66 = (((x3073^x3074)-x3075)<<x3076);

	if (t66 != 14933425796593721948LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x3173 = UINT32_MAX;
	int32_t x3175 = INT32_MIN;
	static uint64_t x3176 = 4LLU;
	volatile uint32_t t67 = 3U;

	t67 = (((x3173^x3174)-x3175)<<x3176);

	if (t67 != 524272U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x3189 = 172577976U;
	uint32_t x3190 = 74259U;
	int8_t x3191 = INT8_MIN;
	uint8_t x3192 = 1U;
	uint32_t t68 = 27635U;

	t68 = (((x3189^x3190)-x3191)<<x3192);

	if (t68 != 345042518U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3245 = INT8_MIN;
	int32_t x3246 = -1;
	int16_t x3247 = INT16_MIN;
	int8_t x3248 = 2;
	volatile int32_t t69 = 1;

	t69 = (((x3245^x3246)-x3247)<<x3248);

	if (t69 != 131580) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x3265 = 0U;
	static uint64_t x3266 = 14956669627549212LLU;
	int16_t x3267 = INT16_MAX;

	t70 = (((x3265^x3266)-x3267)<<x3268);

	if (t70 != 434693623821369344LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x3277 = 661419LL;
	int8_t x3278 = 2;
	int32_t x3279 = 225098;
	int8_t x3280 = 7;
	volatile int64_t t71 = -853200312422LL;

	t71 = (((x3277^x3278)-x3279)<<x3280);

	if (t71 != 55848832LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x3289 = UINT16_MAX;
	uint16_t x3290 = 219U;
	volatile int8_t x3291 = INT8_MIN;
	volatile int32_t t72 = 93;

	t72 = (((x3289^x3290)-x3291)<<x3292);

	if (t72 != 523552) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x3309 = -174LL;
	int64_t x3310 = 1LL;
	int32_t x3311 = INT32_MIN;
	int8_t x3312 = 22;
	volatile int64_t t73 = 5123593748754187LL;

	t73 = (((x3309^x3310)-x3311)<<x3312);

	if (t73 != 9007198529126400LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x3325 = INT16_MIN;
	volatile int32_t x3326 = -14019417;
	static int16_t x3327 = -1;
	uint64_t x3328 = 5LLU;
	volatile int32_t t74 = -9534;

	t74 = (((x3325^x3326)-x3327)<<x3328);

	if (t74 != 447911168) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x3357 = INT16_MAX;
	volatile int16_t x3358 = INT16_MIN;
	static int8_t x3359 = INT8_MIN;
	int8_t x3360 = 1;
	int32_t t75 = -61522;

	t75 = (((x3357^x3358)-x3359)<<x3360);

	if (t75 != 254) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x3363 = INT32_MAX;
	uint8_t x3364 = 1U;
	uint64_t t76 = 539080901049136LLU;

	t76 = (((x3361^x3362)-x3363)<<x3364);

	if (t76 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x3445 = 1U;
	int32_t x3446 = INT32_MIN;
	int32_t x3447 = 15365035;
	uint8_t x3448 = 22U;

	t77 = (((x3445^x3446)-x3447)<<x3448);

	if (t77 != 360710144U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x3453 = 6U;
	uint64_t x3454 = 1354LLU;
	static int64_t x3455 = INT64_MAX;
	uint16_t x3456 = 0U;

	t78 = (((x3453^x3454)-x3455)<<x3456);

	if (t78 != 9223372036854777165LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x3533 = -1;
	volatile uint8_t x3536 = 1U;

	t79 = (((x3533^x3534)-x3535)<<x3536);

	if (t79 != 26) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x3557 = -1LL;
	static int8_t x3558 = INT8_MIN;
	uint8_t x3559 = 20U;
	uint8_t x3560 = 29U;

	t80 = (((x3557^x3558)-x3559)<<x3560);

	if (t80 != 57445187584LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x3585 = 1205LLU;
	uint16_t x3586 = 19U;
	uint8_t x3587 = UINT8_MAX;
	volatile uint16_t x3588 = 24U;

	t81 = (((x3585^x3586)-x3587)<<x3588);

	if (t81 != 15686696960LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x3673 = -1LL;
	int8_t x3675 = INT8_MIN;
	static uint32_t x3676 = 1U;
	volatile uint64_t t82 = 315LLU;

	t82 = (((x3673^x3674)-x3675)<<x3676);

	if (t82 != 256LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x3677 = INT16_MAX;
	uint32_t x3678 = 8569U;
	int64_t x3679 = -107628504LL;
	volatile uint8_t x3680 = 3U;
	static int64_t t83 = 6LL;

	t83 = (((x3677^x3678)-x3679)<<x3680);

	if (t83 != 861221616LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x3745 = 10493;
	uint64_t x3746 = 1071047LLU;
	int8_t x3747 = INT8_MIN;
	int8_t x3748 = 28;

	t84 = (((x3745^x3746)-x3747)<<x3748);

	if (t84 != 290252279250944LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x3825 = UINT16_MAX;
	uint32_t x3826 = 1134547U;
	uint32_t x3828 = 0U;
	volatile uint32_t t85 = 47531U;

	t85 = (((x3825^x3826)-x3827)<<x3828);

	if (t85 != 2148642860U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x3997 = -1;
	volatile int32_t x3998 = INT32_MAX;
	static volatile uint32_t x3999 = 51U;
	static uint8_t x4000 = 0U;

	t86 = (((x3997^x3998)-x3999)<<x4000);

	if (t86 != 2147483597U) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x4017 = 2097913568287332LL;
	uint64_t x4018 = 56694856329625LLU;
	uint64_t x4019 = UINT64_MAX;
	int32_t x4020 = 1;
	uint64_t t87 = 4157037592258878771LLU;

	t87 = (((x4017^x4018)-x4019)<<x4020);

	if (t87 != 4098110616299516LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x4082 = INT16_MAX;
	int64_t x4083 = -1LL;
	uint32_t x4084 = 13U;
	static volatile int64_t t88 = 2152LL;

	t88 = (((x4081^x4082)-x4083)<<x4084);

	if (t88 != 266346496LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x4117 = INT8_MIN;
	uint32_t x4119 = 959671105U;
	uint32_t t89 = 496188U;

	t89 = (((x4117^x4118)-x4119)<<x4120);

	if (t89 != 456021240U) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x4121 = INT32_MIN;
	uint32_t x4123 = 757558U;
	static volatile uint8_t x4124 = 0U;
	uint32_t t90 = 0U;

	t90 = (((x4121^x4122)-x4123)<<x4124);

	if (t90 != 2146693322U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x4445 = -610230508;
	int16_t x4447 = -1;
	uint8_t x4448 = 4U;

	t91 = (((x4445^x4446)-x4447)<<x4448);

	if (t91 != 18446744040120700768LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x4482 = INT16_MIN;
	int16_t x4483 = 13;
	int8_t x4484 = 0;
	static uint64_t t92 = 15LLU;

	t92 = (((x4481^x4482)-x4483)<<x4484);

	if (t92 != 18446737651508863336LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x4529 = INT16_MAX;
	uint16_t x4530 = UINT16_MAX;
	int8_t x4531 = INT8_MAX;
	uint16_t x4532 = 3U;

	t93 = (((x4529^x4530)-x4531)<<x4532);

	if (t93 != 261128) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x4577 = -1;
	uint8_t x4578 = 28U;
	uint64_t x4579 = UINT64_MAX;
	volatile uint8_t x4580 = 0U;
	uint64_t t94 = 111237872581437611LLU;

	t94 = (((x4577^x4578)-x4579)<<x4580);

	if (t94 != 18446744073709551588LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x4641 = -1621001973489204LL;
	static volatile int32_t x4642 = INT32_MIN;
	int16_t x4643 = 58;
	volatile int8_t x4644 = 0;
	int64_t t95 = 22534LL;

	t95 = (((x4641^x4642)-x4643)<<x4644);

	if (t95 != 1621000402805138LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x4673 = INT8_MIN;
	int8_t x4674 = -1;
	int64_t x4675 = -135567973618968629LL;
	uint8_t x4676 = 0U;
	volatile int64_t t96 = -2LL;

	t96 = (((x4673^x4674)-x4675)<<x4676);

	if (t96 != 135567973618968756LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x4681 = -1;
	int8_t x4682 = INT8_MIN;
	int8_t x4683 = INT8_MIN;
	volatile uint64_t x4684 = 3LLU;
	int32_t t97 = -74565;

	t97 = (((x4681^x4682)-x4683)<<x4684);

	if (t97 != 2040) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x4685 = 14657LLU;
	int16_t x4687 = INT16_MAX;

	t98 = (((x4685^x4686)-x4687)<<x4688);

	if (t98 != 4294919871LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x4693 = -1509LL;
	int32_t x4694 = INT32_MIN;
	static uint8_t x4695 = 5U;
	volatile int64_t t99 = -312110876LL;

	t99 = (((x4693^x4694)-x4695)<<x4696);

	if (t99 != 137438856576LL) { NG(); } else { ; }
	
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

