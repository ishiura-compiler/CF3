#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x70 = 2LLU;
volatile int32_t t1 = 3788060;
int64_t x133 = INT64_MAX;
int8_t x134 = -1;
int32_t t6 = -3021456;
uint8_t x330 = 98U;
int64_t x331 = INT64_MAX;
static int32_t x407 = INT32_MIN;
int8_t x418 = -6;
static int32_t x419 = INT32_MAX;
uint16_t x508 = 26U;
static uint64_t x565 = UINT64_MAX;
static uint16_t x567 = 431U;
int32_t t16 = 747;
int16_t x666 = INT16_MIN;
volatile int32_t t18 = -862;
uint32_t x789 = UINT32_MAX;
static int32_t t20 = 1;
uint64_t x893 = UINT64_MAX;
volatile int32_t t21 = -1;
int32_t t22 = 28744144;
static int64_t x949 = INT64_MIN;
int32_t x953 = INT32_MAX;
int8_t x974 = -25;
static int16_t x975 = INT16_MIN;
uint8_t x976 = 2U;
int16_t x1001 = -1;
uint64_t x1003 = 25003549769979LLU;
static volatile int64_t x1062 = 7550043454LL;
int8_t x1064 = 5;
volatile int32_t x1087 = -97173249;
int64_t x1145 = 183658048195060670LL;
uint64_t x1147 = UINT64_MAX;
uint16_t x1148 = 3U;
int32_t t31 = 17938;
uint32_t x1210 = 9441456U;
uint8_t x1227 = UINT8_MAX;
static uint64_t x1228 = 6LLU;
int16_t x1259 = INT16_MIN;
int32_t x1274 = INT32_MIN;
volatile int32_t t38 = 0;
int32_t t42 = -730438773;
uint64_t x1482 = 193304469172957LLU;
int16_t x1483 = -2093;
int16_t x1484 = 7;
static volatile int32_t t44 = -64553;
uint16_t x1513 = 6U;
volatile uint8_t x1516 = 1U;
uint16_t x1529 = 20U;
int8_t x1766 = INT8_MIN;
volatile int16_t x1783 = -386;
static uint8_t x1796 = 5U;
int32_t t51 = -291088;
volatile int64_t x1831 = -19626LL;
uint8_t x1928 = 10U;
uint64_t x1943 = 43804081LLU;
volatile uint8_t x1944 = 12U;
uint32_t x1952 = 0U;
uint64_t x1995 = 11518117375LLU;
volatile int32_t t58 = -31976544;
static int8_t x2018 = -1;
int32_t x2095 = 11019155;
uint32_t x2110 = 29394U;
int64_t x2213 = INT64_MAX;
volatile int32_t x2214 = 58024;
volatile int8_t x2294 = 2;
int32_t x2295 = INT32_MIN;
uint8_t x2369 = UINT8_MAX;
int8_t x2371 = INT8_MAX;
volatile uint32_t x2372 = 1U;
uint8_t x2406 = 3U;
int64_t x2431 = INT64_MAX;
uint32_t x2465 = 88U;
int64_t x2466 = -1LL;
uint64_t x2575 = UINT64_MAX;
volatile int16_t x2581 = -1;
int8_t x2598 = 0;
volatile int32_t x2637 = -1;
int32_t x2705 = INT32_MIN;
volatile int8_t x2708 = 0;
int8_t x2713 = INT8_MIN;
int64_t x2715 = -1LL;
int16_t x2716 = 31;
volatile int32_t t77 = -13277;
int32_t t79 = -690441178;
static int64_t x2857 = INT64_MIN;
int64_t x2859 = INT64_MIN;
volatile int32_t t83 = -922071;
volatile int32_t t85 = -3;
int8_t x3030 = INT8_MAX;
volatile uint16_t x3033 = UINT16_MAX;
int8_t x3034 = INT8_MIN;
int32_t t88 = 1898;
int32_t x3053 = 0;
volatile uint8_t x3081 = UINT8_MAX;
volatile int64_t x3109 = -261184603793598LL;
static uint8_t x3112 = 3U;
volatile int32_t x3131 = -796;
static int8_t x3136 = 0;
volatile int32_t t95 = -11617529;
int16_t x3204 = 8;
volatile int8_t x3217 = INT8_MAX;
volatile uint8_t x3219 = 15U;


void f0(void) {
	int64_t x5 = 298753016904LL;
	int8_t x6 = INT8_MAX;
	uint8_t x7 = 2U;
	int16_t x8 = 14;
	int32_t t0 = -1;

	t0 = ((x5<(x6^x7))>>x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x69 = -11517721;
	int32_t x71 = -7;
	int16_t x72 = 5;

	t1 = ((x69<(x70^x71))>>x72);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x117 = INT16_MIN;
	static uint16_t x118 = 22498U;
	uint64_t x119 = 151132902LLU;
	volatile int64_t x120 = 2LL;
	static int32_t t2 = 203594679;

	t2 = ((x117<(x118^x119))>>x120);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x135 = INT8_MAX;
	static int8_t x136 = 1;
	volatile int32_t t3 = 6;

	t3 = ((x133<(x134^x135))>>x136);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x269 = INT8_MIN;
	uint8_t x270 = UINT8_MAX;
	int32_t x271 = INT32_MIN;
	int16_t x272 = 5;
	volatile int32_t t4 = -1341;

	t4 = ((x269<(x270^x271))>>x272);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x277 = INT8_MAX;
	int8_t x278 = -1;
	int8_t x279 = -1;
	int8_t x280 = 1;
	volatile int32_t t5 = 52666664;

	t5 = ((x277<(x278^x279))>>x280);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x321 = UINT8_MAX;
	static uint64_t x322 = UINT64_MAX;
	int64_t x323 = INT64_MIN;
	uint32_t x324 = 2U;

	t6 = ((x321<(x322^x323))>>x324);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x329 = -1;
	int8_t x332 = 14;
	volatile int32_t t7 = 73688;

	t7 = ((x329<(x330^x331))>>x332);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x345 = 1;
	static int16_t x346 = INT16_MIN;
	uint16_t x347 = UINT16_MAX;
	uint16_t x348 = 0U;
	volatile int32_t t8 = 211;

	t8 = ((x345<(x346^x347))>>x348);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x373 = INT64_MIN;
	int8_t x374 = -1;
	uint64_t x375 = UINT64_MAX;
	static volatile int64_t x376 = 0LL;
	volatile int32_t t9 = 2476756;

	t9 = ((x373<(x374^x375))>>x376);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x397 = 49;
	int64_t x398 = INT64_MAX;
	static volatile int64_t x399 = INT64_MIN;
	int32_t x400 = 0;
	int32_t t10 = -1;

	t10 = ((x397<(x398^x399))>>x400);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x405 = 795U;
	static int32_t x406 = -3029;
	uint8_t x408 = 18U;
	int32_t t11 = 0;

	t11 = ((x405<(x406^x407))>>x408);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x417 = INT64_MIN;
	static int8_t x420 = 11;
	volatile int32_t t12 = 11862628;

	t12 = ((x417<(x418^x419))>>x420);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x501 = UINT32_MAX;
	volatile uint64_t x502 = UINT64_MAX;
	int64_t x503 = -1970579LL;
	static uint8_t x504 = 0U;
	volatile int32_t t13 = -2877;

	t13 = ((x501<(x502^x503))>>x504);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x505 = -1;
	static volatile uint16_t x506 = 10085U;
	uint8_t x507 = UINT8_MAX;
	volatile int32_t t14 = -1635;

	t14 = ((x505<(x506^x507))>>x508);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x566 = -1;
	volatile uint8_t x568 = 5U;
	static int32_t t15 = 512171;

	t15 = ((x565<(x566^x567))>>x568);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x569 = -1;
	int64_t x570 = -1181141164LL;
	int32_t x571 = INT32_MAX;
	int8_t x572 = 1;

	t16 = ((x569<(x570^x571))>>x572);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x665 = 118U;
	int16_t x667 = -1;
	uint8_t x668 = 6U;
	int32_t t17 = 236;

	t17 = ((x665<(x666^x667))>>x668);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x733 = INT32_MAX;
	int32_t x734 = INT32_MIN;
	int8_t x735 = 0;
	int32_t x736 = 1;

	t18 = ((x733<(x734^x735))>>x736);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x790 = INT32_MIN;
	static volatile uint64_t x791 = UINT64_MAX;
	uint32_t x792 = 22U;
	volatile int32_t t19 = 65696;

	t19 = ((x789<(x790^x791))>>x792);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x797 = INT16_MIN;
	int8_t x798 = INT8_MAX;
	volatile uint64_t x799 = UINT64_MAX;
	int8_t x800 = 1;

	t20 = ((x797<(x798^x799))>>x800);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint16_t x894 = 812U;
	static int8_t x895 = -1;
	uint8_t x896 = 11U;

	t21 = ((x893<(x894^x895))>>x896);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x901 = 4U;
	int64_t x902 = INT64_MIN;
	static volatile int32_t x903 = 715723876;
	int8_t x904 = 1;

	t22 = ((x901<(x902^x903))>>x904);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x950 = -1LL;
	int64_t x951 = 8325579914372330LL;
	static uint8_t x952 = 15U;
	static int32_t t23 = -1;

	t23 = ((x949<(x950^x951))>>x952);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x954 = -1;
	int8_t x955 = INT8_MAX;
	uint32_t x956 = 2U;
	volatile int32_t t24 = -2747;

	t24 = ((x953<(x954^x955))>>x956);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x973 = 5;
	volatile int32_t t25 = 3176810;

	t25 = ((x973<(x974^x975))>>x976);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x989 = -18;
	int32_t x990 = 89323;
	static int64_t x991 = INT64_MIN;
	static uint8_t x992 = 0U;
	volatile int32_t t26 = -14350732;

	t26 = ((x989<(x990^x991))>>x992);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x1002 = -1;
	int8_t x1004 = 4;
	volatile int32_t t27 = -349983646;

	t27 = ((x1001<(x1002^x1003))>>x1004);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1037 = INT16_MIN;
	int16_t x1038 = -1;
	int8_t x1039 = -1;
	uint8_t x1040 = 2U;
	volatile int32_t t28 = -270524;

	t28 = ((x1037<(x1038^x1039))>>x1040);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x1061 = INT64_MIN;
	volatile int32_t x1063 = -21474;
	volatile int32_t t29 = -1;

	t29 = ((x1061<(x1062^x1063))>>x1064);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1085 = -22857582104360151LL;
	int8_t x1086 = -1;
	uint8_t x1088 = 1U;
	int32_t t30 = 139;

	t30 = ((x1085<(x1086^x1087))>>x1088);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1146 = -1;

	t31 = ((x1145<(x1146^x1147))>>x1148);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x1193 = 0;
	volatile uint8_t x1194 = 26U;
	static int32_t x1195 = -1;
	volatile int8_t x1196 = 27;
	int32_t t32 = 2;

	t32 = ((x1193<(x1194^x1195))>>x1196);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x1209 = 52911253445026LLU;
	uint64_t x1211 = 412632LLU;
	uint8_t x1212 = 0U;
	int32_t t33 = -978;

	t33 = ((x1209<(x1210^x1211))>>x1212);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x1225 = 337876;
	volatile int64_t x1226 = -104306LL;
	int32_t t34 = 0;

	t34 = ((x1225<(x1226^x1227))>>x1228);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x1241 = 1451603U;
	volatile int64_t x1242 = INT64_MAX;
	int64_t x1243 = INT64_MAX;
	uint64_t x1244 = 14LLU;
	int32_t t35 = -150636;

	t35 = ((x1241<(x1242^x1243))>>x1244);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1257 = UINT64_MAX;
	static volatile uint16_t x1258 = 1255U;
	int32_t x1260 = 0;
	volatile int32_t t36 = -32041;

	t36 = ((x1257<(x1258^x1259))>>x1260);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1273 = -74305852398007846LL;
	int32_t x1275 = INT32_MIN;
	volatile int16_t x1276 = 0;
	int32_t t37 = -696323;

	t37 = ((x1273<(x1274^x1275))>>x1276);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x1281 = INT32_MIN;
	int16_t x1282 = 341;
	static volatile int32_t x1283 = INT32_MIN;
	uint8_t x1284 = 17U;

	t38 = ((x1281<(x1282^x1283))>>x1284);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1329 = -1;
	uint64_t x1330 = 6223430095549994444LLU;
	int16_t x1331 = INT16_MIN;
	uint8_t x1332 = 10U;
	static volatile int32_t t39 = 37243;

	t39 = ((x1329<(x1330^x1331))>>x1332);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x1381 = INT16_MIN;
	volatile int64_t x1382 = -236644506875LL;
	int64_t x1383 = INT64_MAX;
	uint8_t x1384 = 0U;
	static int32_t t40 = 27436687;

	t40 = ((x1381<(x1382^x1383))>>x1384);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1389 = 181967226970505916LLU;
	int64_t x1390 = 8303403961LL;
	int32_t x1391 = 943529;
	int8_t x1392 = 23;
	volatile int32_t t41 = 238;

	t41 = ((x1389<(x1390^x1391))>>x1392);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x1441 = INT8_MIN;
	int32_t x1442 = INT32_MIN;
	int64_t x1443 = -304LL;
	int8_t x1444 = 25;

	t42 = ((x1441<(x1442^x1443))>>x1444);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x1445 = 0LLU;
	int16_t x1446 = INT16_MAX;
	volatile int32_t x1447 = INT32_MAX;
	uint8_t x1448 = 0U;
	int32_t t43 = 5987888;

	t43 = ((x1445<(x1446^x1447))>>x1448);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1481 = INT16_MAX;

	t44 = ((x1481<(x1482^x1483))>>x1484);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1514 = 7786792;
	int8_t x1515 = INT8_MAX;
	static volatile int32_t t45 = 65582938;

	t45 = ((x1513<(x1514^x1515))>>x1516);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1530 = INT64_MIN;
	static int16_t x1531 = INT16_MAX;
	uint32_t x1532 = 5U;
	int32_t t46 = 77951699;

	t46 = ((x1529<(x1530^x1531))>>x1532);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x1677 = INT8_MIN;
	volatile int16_t x1678 = -1;
	int32_t x1679 = 213;
	int8_t x1680 = 1;
	int32_t t47 = -37450;

	t47 = ((x1677<(x1678^x1679))>>x1680);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x1713 = 38;
	int16_t x1714 = 3;
	int8_t x1715 = INT8_MIN;
	static int8_t x1716 = 20;
	static volatile int32_t t48 = -1;

	t48 = ((x1713<(x1714^x1715))>>x1716);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1765 = INT32_MIN;
	int16_t x1767 = 55;
	uint32_t x1768 = 15U;
	int32_t t49 = 63159;

	t49 = ((x1765<(x1766^x1767))>>x1768);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x1781 = 292454049114291752LLU;
	uint16_t x1782 = UINT16_MAX;
	int32_t x1784 = 0;
	int32_t t50 = -25023;

	t50 = ((x1781<(x1782^x1783))>>x1784);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x1793 = INT64_MIN;
	volatile int64_t x1794 = INT64_MIN;
	volatile int8_t x1795 = -1;

	t51 = ((x1793<(x1794^x1795))>>x1796);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x1797 = 1899;
	static int16_t x1798 = -14434;
	int16_t x1799 = INT16_MAX;
	uint8_t x1800 = 13U;
	volatile int32_t t52 = -3;

	t52 = ((x1797<(x1798^x1799))>>x1800);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x1829 = 703813U;
	int64_t x1830 = -1LL;
	uint32_t x1832 = 1U;
	volatile int32_t t53 = 120441858;

	t53 = ((x1829<(x1830^x1831))>>x1832);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x1897 = -1LL;
	int16_t x1898 = INT16_MIN;
	int16_t x1899 = INT16_MIN;
	uint16_t x1900 = 11U;
	int32_t t54 = -1065477;

	t54 = ((x1897<(x1898^x1899))>>x1900);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1925 = INT32_MAX;
	int8_t x1926 = -1;
	int16_t x1927 = -2247;
	volatile int32_t t55 = -85538312;

	t55 = ((x1925<(x1926^x1927))>>x1928);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1941 = INT16_MAX;
	static int16_t x1942 = -4;
	int32_t t56 = 7521;

	t56 = ((x1941<(x1942^x1943))>>x1944);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x1949 = INT64_MIN;
	int64_t x1950 = INT64_MAX;
	uint64_t x1951 = UINT64_MAX;
	int32_t t57 = -17317612;

	t57 = ((x1949<(x1950^x1951))>>x1952);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x1993 = 9197985923373546LLU;
	int16_t x1994 = INT16_MAX;
	int8_t x1996 = 4;

	t58 = ((x1993<(x1994^x1995))>>x1996);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x2017 = INT16_MAX;
	int32_t x2019 = 1;
	uint32_t x2020 = 8U;
	volatile int32_t t59 = 180542;

	t59 = ((x2017<(x2018^x2019))>>x2020);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2029 = INT8_MIN;
	int64_t x2030 = -1LL;
	uint16_t x2031 = 1311U;
	int32_t x2032 = 4;
	static int32_t t60 = 871737;

	t60 = ((x2029<(x2030^x2031))>>x2032);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x2093 = INT64_MAX;
	volatile int64_t x2094 = INT64_MIN;
	uint16_t x2096 = 0U;
	int32_t t61 = 36669;

	t61 = ((x2093<(x2094^x2095))>>x2096);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2109 = INT8_MIN;
	static int64_t x2111 = INT64_MIN;
	uint16_t x2112 = 9U;
	int32_t t62 = -1;

	t62 = ((x2109<(x2110^x2111))>>x2112);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2185 = INT8_MIN;
	int32_t x2186 = -21532;
	static int16_t x2187 = -2;
	int8_t x2188 = 1;
	volatile int32_t t63 = 33201119;

	t63 = ((x2185<(x2186^x2187))>>x2188);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x2215 = INT16_MIN;
	int32_t x2216 = 11;
	static volatile int32_t t64 = 155344374;

	t64 = ((x2213<(x2214^x2215))>>x2216);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x2293 = UINT8_MAX;
	static int8_t x2296 = 0;
	volatile int32_t t65 = 46256;

	t65 = ((x2293<(x2294^x2295))>>x2296);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x2313 = -24633110;
	uint16_t x2314 = 2U;
	static int64_t x2315 = -1LL;
	int8_t x2316 = 1;
	static volatile int32_t t66 = 76754;

	t66 = ((x2313<(x2314^x2315))>>x2316);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x2370 = UINT64_MAX;
	static volatile int32_t t67 = 39460;

	t67 = ((x2369<(x2370^x2371))>>x2372);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x2405 = INT8_MAX;
	static uint16_t x2407 = 4U;
	static uint8_t x2408 = 10U;
	volatile int32_t t68 = -118;

	t68 = ((x2405<(x2406^x2407))>>x2408);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2429 = -1;
	int64_t x2430 = INT64_MIN;
	int8_t x2432 = 1;
	volatile int32_t t69 = -2893602;

	t69 = ((x2429<(x2430^x2431))>>x2432);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x2467 = 244024019;
	int16_t x2468 = 0;
	static volatile int32_t t70 = 35930001;

	t70 = ((x2465<(x2466^x2467))>>x2468);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x2573 = 0;
	volatile uint8_t x2574 = UINT8_MAX;
	uint16_t x2576 = 4U;
	volatile int32_t t71 = -20804;

	t71 = ((x2573<(x2574^x2575))>>x2576);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x2582 = 0U;
	volatile int16_t x2583 = -15;
	uint16_t x2584 = 19U;
	volatile int32_t t72 = 3663655;

	t72 = ((x2581<(x2582^x2583))>>x2584);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x2585 = 15U;
	int8_t x2586 = INT8_MIN;
	static uint16_t x2587 = 116U;
	static int16_t x2588 = 1;
	volatile int32_t t73 = 1310;

	t73 = ((x2585<(x2586^x2587))>>x2588);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x2597 = -1LL;
	int64_t x2599 = -40306115079436230LL;
	uint8_t x2600 = 11U;
	volatile int32_t t74 = -29735774;

	t74 = ((x2597<(x2598^x2599))>>x2600);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x2638 = INT64_MIN;
	int64_t x2639 = INT64_MAX;
	volatile int8_t x2640 = 3;
	volatile int32_t t75 = -97315340;

	t75 = ((x2637<(x2638^x2639))>>x2640);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x2706 = INT8_MIN;
	volatile int16_t x2707 = INT16_MIN;
	int32_t t76 = -62591681;

	t76 = ((x2705<(x2706^x2707))>>x2708);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x2714 = -459;

	t77 = ((x2713<(x2714^x2715))>>x2716);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x2729 = INT64_MIN;
	int16_t x2730 = 3;
	static uint32_t x2731 = 45U;
	static int16_t x2732 = 1;
	volatile int32_t t78 = -701287587;

	t78 = ((x2729<(x2730^x2731))>>x2732);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x2773 = -1;
	int64_t x2774 = INT64_MIN;
	volatile int16_t x2775 = 1606;
	volatile uint8_t x2776 = 5U;

	t79 = ((x2773<(x2774^x2775))>>x2776);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x2789 = 0U;
	int8_t x2790 = INT8_MIN;
	int32_t x2791 = -15413;
	uint8_t x2792 = 12U;
	int32_t t80 = -48;

	t80 = ((x2789<(x2790^x2791))>>x2792);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x2841 = INT8_MAX;
	uint32_t x2842 = UINT32_MAX;
	int16_t x2843 = 31;
	uint8_t x2844 = 29U;
	int32_t t81 = 1399340;

	t81 = ((x2841<(x2842^x2843))>>x2844);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x2858 = 0;
	uint16_t x2860 = 7U;
	volatile int32_t t82 = 22;

	t82 = ((x2857<(x2858^x2859))>>x2860);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x2905 = INT8_MIN;
	int64_t x2906 = INT64_MIN;
	int64_t x2907 = INT64_MAX;
	static uint32_t x2908 = 1U;

	t83 = ((x2905<(x2906^x2907))>>x2908);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x2949 = INT64_MIN;
	uint8_t x2950 = 105U;
	volatile int8_t x2951 = -3;
	int32_t x2952 = 1;
	int32_t t84 = 182937;

	t84 = ((x2949<(x2950^x2951))>>x2952);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x2985 = 3;
	int64_t x2986 = 202965LL;
	int64_t x2987 = INT64_MIN;
	static volatile int32_t x2988 = 0;

	t85 = ((x2985<(x2986^x2987))>>x2988);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x3009 = -262101432504207LL;
	int32_t x3010 = -593;
	int16_t x3011 = INT16_MAX;
	volatile uint32_t x3012 = 3U;
	volatile int32_t t86 = -48;

	t86 = ((x3009<(x3010^x3011))>>x3012);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x3029 = 3003U;
	static uint16_t x3031 = 2U;
	uint64_t x3032 = 2LLU;
	volatile int32_t t87 = -13112821;

	t87 = ((x3029<(x3030^x3031))>>x3032);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x3035 = UINT16_MAX;
	volatile uint16_t x3036 = 29U;

	t88 = ((x3033<(x3034^x3035))>>x3036);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x3054 = INT16_MAX;
	volatile int8_t x3055 = -1;
	uint8_t x3056 = 3U;
	volatile int32_t t89 = 1;

	t89 = ((x3053<(x3054^x3055))>>x3056);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x3082 = 4054U;
	static int32_t x3083 = -1;
	static uint8_t x3084 = 2U;
	static int32_t t90 = 841058924;

	t90 = ((x3081<(x3082^x3083))>>x3084);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x3110 = INT64_MIN;
	static volatile uint64_t x3111 = UINT64_MAX;
	int32_t t91 = 691;

	t91 = ((x3109<(x3110^x3111))>>x3112);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x3113 = -1;
	static int64_t x3114 = 228LL;
	int32_t x3115 = -177418799;
	uint8_t x3116 = 1U;
	volatile int32_t t92 = 2392;

	t92 = ((x3113<(x3114^x3115))>>x3116);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x3129 = 28;
	static int16_t x3130 = INT16_MIN;
	volatile uint8_t x3132 = 3U;
	volatile int32_t t93 = 17;

	t93 = ((x3129<(x3130^x3131))>>x3132);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x3133 = INT8_MIN;
	volatile uint32_t x3134 = UINT32_MAX;
	int32_t x3135 = INT32_MIN;
	volatile int32_t t94 = 492661;

	t94 = ((x3133<(x3134^x3135))>>x3136);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x3141 = 21;
	uint8_t x3142 = 3U;
	int8_t x3143 = -1;
	int8_t x3144 = 0;

	t95 = ((x3141<(x3142^x3143))>>x3144);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x3201 = 562670093146634783LL;
	int64_t x3202 = INT64_MIN;
	static int64_t x3203 = INT64_MIN;
	volatile int32_t t96 = -402806253;

	t96 = ((x3201<(x3202^x3203))>>x3204);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x3218 = -1LL;
	volatile int8_t x3220 = 1;
	volatile int32_t t97 = -10728364;

	t97 = ((x3217<(x3218^x3219))>>x3220);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x3225 = UINT16_MAX;
	int8_t x3226 = INT8_MIN;
	static volatile uint16_t x3227 = 7U;
	uint8_t x3228 = 5U;
	int32_t t98 = -1;

	t98 = ((x3225<(x3226^x3227))>>x3228);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x3241 = -1;
	int64_t x3242 = INT64_MIN;
	static volatile uint64_t x3243 = UINT64_MAX;
	uint8_t x3244 = 13U;
	int32_t t99 = 271453;

	t99 = ((x3241<(x3242^x3243))>>x3244);

	if (t99 != 0) { NG(); } else { ; }
	
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

