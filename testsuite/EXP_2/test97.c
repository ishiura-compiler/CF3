#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x28 = 2U;
int32_t x54 = 125947958;
int64_t x55 = -1LL;
int8_t x67 = INT8_MIN;
volatile uint64_t x77 = 0LLU;
static uint8_t x91 = 28U;
static volatile int32_t t4 = 116;
int16_t x298 = -1;
volatile int8_t x401 = INT8_MIN;
uint32_t x449 = 94405U;
uint32_t x450 = UINT32_MAX;
int16_t x451 = INT16_MIN;
volatile int32_t t11 = -8594094;
int64_t x480 = 0LL;
static volatile int8_t x488 = 7;
int32_t x509 = -14144;
int16_t x555 = 1;
int32_t t15 = -64230313;
volatile int8_t x641 = INT8_MAX;
volatile int16_t x643 = -1;
static int32_t x693 = -26;
static int32_t x722 = INT32_MIN;
volatile uint8_t x805 = 46U;
int16_t x806 = INT16_MIN;
uint64_t x807 = UINT64_MAX;
int32_t x808 = 1;
int32_t t20 = 57483954;
static int32_t t21 = -424;
uint32_t x875 = 11819U;
volatile int32_t t22 = 48637851;
uint16_t x911 = 1U;
volatile int32_t t23 = 603896;
int16_t x1180 = 14;
volatile int8_t x1247 = INT8_MIN;
uint32_t x1270 = 201780U;
volatile int32_t t36 = 888;
static volatile uint8_t x1310 = UINT8_MAX;
int32_t t40 = 788545;
int8_t x1356 = 19;
int32_t t41 = -55771933;
volatile int32_t x1371 = -1;
volatile uint8_t x1372 = 5U;
static uint32_t x1381 = UINT32_MAX;
volatile int8_t x1383 = INT8_MAX;
static volatile int32_t t43 = -9;
uint16_t x1495 = UINT16_MAX;
static int64_t x1514 = -58911335511795434LL;
int64_t x1557 = -1LL;
static int16_t x1559 = INT16_MAX;
int64_t x1760 = 1LL;
volatile uint16_t x1792 = 3U;
volatile uint8_t x1854 = UINT8_MAX;
static int16_t x1861 = 0;
int32_t t55 = 209;
int8_t x1894 = 48;
int8_t x1955 = INT8_MIN;
volatile uint8_t x1956 = 0U;
int16_t x1983 = INT16_MIN;
static volatile uint64_t x2047 = UINT64_MAX;
int8_t x2048 = 23;
int64_t x2118 = 1021383LL;
volatile int32_t t60 = 5829402;
uint32_t x2134 = 2U;
uint8_t x2204 = 25U;
static uint8_t x2290 = 1U;
int64_t x2361 = INT64_MIN;
int16_t x2377 = INT16_MAX;
static uint16_t x2380 = 1U;
int16_t x2458 = 1961;
int64_t x2459 = INT64_MIN;
static uint16_t x2530 = 120U;
volatile uint8_t x2531 = 9U;
uint32_t x2582 = 38071325U;
volatile uint16_t x2635 = 0U;
int32_t t74 = 65688156;
uint8_t x2996 = 5U;
volatile int32_t t80 = 1753;
int8_t x3004 = 3;
volatile uint32_t x3006 = 293U;
int32_t x3029 = -529468244;
static uint64_t x3031 = UINT64_MAX;
int16_t x3032 = 8;
int32_t t84 = 532342589;
uint8_t x3050 = UINT8_MAX;
int8_t x3124 = 0;
int16_t x3187 = 27;
volatile int32_t t89 = 28626;
int32_t t91 = 13;
static int32_t x3378 = -428;
uint8_t x3414 = UINT8_MAX;
static volatile int32_t t93 = -7;
int32_t t95 = -10485864;
uint64_t x3571 = 13505337026232269LLU;
int32_t t97 = 125;
int16_t x3606 = INT16_MIN;


void f0(void) {
	static int8_t x25 = -1;
	volatile int8_t x26 = INT8_MIN;
	uint8_t x27 = UINT8_MAX;
	volatile int32_t t0 = 16512;

	t0 = ((x25==(x26+x27))<<x28);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x53 = 1099LL;
	int16_t x56 = 3;
	static volatile int32_t t1 = -2;

	t1 = ((x53==(x54+x55))<<x56);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x65 = 1;
	int64_t x66 = 92451601599133217LL;
	volatile int32_t x68 = 27;
	volatile int32_t t2 = -15;

	t2 = ((x65==(x66+x67))<<x68);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x78 = -373;
	static volatile int16_t x79 = INT16_MAX;
	uint16_t x80 = 3U;
	volatile int32_t t3 = 103308;

	t3 = ((x77==(x78+x79))<<x80);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x89 = 160870722173248LL;
	int16_t x90 = -1;
	uint8_t x92 = 0U;

	t4 = ((x89==(x90+x91))<<x92);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x109 = 34;
	int32_t x110 = -1;
	int32_t x111 = INT32_MAX;
	int8_t x112 = 1;
	volatile int32_t t5 = 1654483;

	t5 = ((x109==(x110+x111))<<x112);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x185 = 5091499563845LLU;
	int16_t x186 = 21;
	int64_t x187 = INT64_MIN;
	uint8_t x188 = 8U;
	volatile int32_t t6 = 43;

	t6 = ((x185==(x186+x187))<<x188);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x297 = 39736LLU;
	int16_t x299 = -74;
	int32_t x300 = 1;
	static int32_t t7 = -100964825;

	t7 = ((x297==(x298+x299))<<x300);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x402 = UINT64_MAX;
	uint32_t x403 = 1238480U;
	static uint8_t x404 = 1U;
	static int32_t t8 = -1685;

	t8 = ((x401==(x402+x403))<<x404);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x425 = 87U;
	uint64_t x426 = 1001092883627674LLU;
	int16_t x427 = INT16_MIN;
	int8_t x428 = 1;
	volatile int32_t t9 = 8;

	t9 = ((x425==(x426+x427))<<x428);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x429 = 0;
	int16_t x430 = INT16_MIN;
	int8_t x431 = INT8_MIN;
	uint16_t x432 = 11U;
	static int32_t t10 = -171663770;

	t10 = ((x429==(x430+x431))<<x432);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x452 = 2;

	t11 = ((x449==(x450+x451))<<x452);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x477 = -1;
	uint64_t x478 = 2LLU;
	static int32_t x479 = INT32_MIN;
	static int32_t t12 = 112365;

	t12 = ((x477==(x478+x479))<<x480);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x485 = INT8_MIN;
	int16_t x486 = INT16_MAX;
	static int8_t x487 = -1;
	volatile int32_t t13 = 32804499;

	t13 = ((x485==(x486+x487))<<x488);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x510 = 0;
	int8_t x511 = INT8_MIN;
	int8_t x512 = 6;
	int32_t t14 = -241783;

	t14 = ((x509==(x510+x511))<<x512);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x553 = INT16_MIN;
	uint16_t x554 = 729U;
	int8_t x556 = 27;

	t15 = ((x553==(x554+x555))<<x556);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint64_t x642 = 32487053LLU;
	uint16_t x644 = 0U;
	static int32_t t16 = 28;

	t16 = ((x641==(x642+x643))<<x644);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x694 = UINT16_MAX;
	int8_t x695 = -1;
	uint64_t x696 = 2LLU;
	volatile int32_t t17 = -452189;

	t17 = ((x693==(x694+x695))<<x696);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x721 = 10U;
	int16_t x723 = 1069;
	int32_t x724 = 15;
	int32_t t18 = 878;

	t18 = ((x721==(x722+x723))<<x724);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x737 = -32309320386409546LL;
	volatile int64_t x738 = INT64_MIN;
	static volatile uint16_t x739 = UINT16_MAX;
	uint16_t x740 = 6U;
	int32_t t19 = -11617;

	t19 = ((x737==(x738+x739))<<x740);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {


	t20 = ((x805==(x806+x807))<<x808);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x841 = UINT16_MAX;
	int8_t x842 = INT8_MAX;
	static int8_t x843 = -8;
	volatile uint8_t x844 = 8U;

	t21 = ((x841==(x842+x843))<<x844);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x873 = 478926327LLU;
	int16_t x874 = 1005;
	static uint8_t x876 = 1U;

	t22 = ((x873==(x874+x875))<<x876);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x909 = INT64_MIN;
	int64_t x910 = -1LL;
	int8_t x912 = 3;

	t23 = ((x909==(x910+x911))<<x912);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x941 = -4248;
	int32_t x942 = INT32_MIN;
	volatile int64_t x943 = INT64_MAX;
	uint32_t x944 = 0U;
	volatile int32_t t24 = 1;

	t24 = ((x941==(x942+x943))<<x944);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x961 = 860;
	volatile uint8_t x962 = UINT8_MAX;
	static volatile uint64_t x963 = UINT64_MAX;
	uint8_t x964 = 1U;
	volatile int32_t t25 = -10714700;

	t25 = ((x961==(x962+x963))<<x964);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x981 = INT8_MAX;
	uint8_t x982 = UINT8_MAX;
	volatile uint64_t x983 = 25335823869640LLU;
	int8_t x984 = 1;
	volatile int32_t t26 = -51790;

	t26 = ((x981==(x982+x983))<<x984);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x1017 = -1LL;
	int64_t x1018 = 58483739LL;
	volatile int16_t x1019 = INT16_MIN;
	int8_t x1020 = 1;
	volatile int32_t t27 = 867;

	t27 = ((x1017==(x1018+x1019))<<x1020);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x1049 = -1740;
	int16_t x1050 = INT16_MAX;
	uint32_t x1051 = UINT32_MAX;
	volatile uint16_t x1052 = 6U;
	volatile int32_t t28 = 597493;

	t28 = ((x1049==(x1050+x1051))<<x1052);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1069 = UINT32_MAX;
	uint64_t x1070 = 3781685038832LLU;
	int32_t x1071 = 1120;
	int16_t x1072 = 0;
	int32_t t29 = -1;

	t29 = ((x1069==(x1070+x1071))<<x1072);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x1085 = INT16_MIN;
	int8_t x1086 = -1;
	uint16_t x1087 = UINT16_MAX;
	uint32_t x1088 = 12U;
	int32_t t30 = 50140506;

	t30 = ((x1085==(x1086+x1087))<<x1088);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1093 = INT8_MIN;
	static int64_t x1094 = 525843466522756LL;
	int8_t x1095 = 9;
	uint8_t x1096 = 4U;
	static int32_t t31 = -23776;

	t31 = ((x1093==(x1094+x1095))<<x1096);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1177 = INT64_MIN;
	static volatile int16_t x1178 = INT16_MIN;
	int8_t x1179 = INT8_MIN;
	volatile int32_t t32 = 67;

	t32 = ((x1177==(x1178+x1179))<<x1180);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1245 = INT32_MIN;
	uint16_t x1246 = 0U;
	uint8_t x1248 = 11U;
	volatile int32_t t33 = 1;

	t33 = ((x1245==(x1246+x1247))<<x1248);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1269 = INT64_MIN;
	uint16_t x1271 = 370U;
	uint16_t x1272 = 13U;
	volatile int32_t t34 = 164407205;

	t34 = ((x1269==(x1270+x1271))<<x1272);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x1281 = INT32_MIN;
	static volatile int16_t x1282 = 53;
	static volatile int16_t x1283 = 394;
	uint16_t x1284 = 5U;
	int32_t t35 = 91704;

	t35 = ((x1281==(x1282+x1283))<<x1284);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1293 = 243U;
	volatile uint32_t x1294 = UINT32_MAX;
	static volatile int16_t x1295 = INT16_MIN;
	uint16_t x1296 = 23U;

	t36 = ((x1293==(x1294+x1295))<<x1296);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x1305 = UINT16_MAX;
	int64_t x1306 = -1LL;
	int32_t x1307 = -1;
	uint32_t x1308 = 0U;
	volatile int32_t t37 = -1;

	t37 = ((x1305==(x1306+x1307))<<x1308);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1309 = -6690369;
	static int32_t x1311 = -1;
	volatile uint16_t x1312 = 0U;
	volatile int32_t t38 = -523765;

	t38 = ((x1309==(x1310+x1311))<<x1312);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1345 = INT32_MIN;
	int16_t x1346 = 3;
	uint32_t x1347 = 779854U;
	static uint32_t x1348 = 1U;
	int32_t t39 = -289;

	t39 = ((x1345==(x1346+x1347))<<x1348);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1349 = INT16_MIN;
	volatile int8_t x1350 = INT8_MIN;
	int8_t x1351 = -1;
	uint8_t x1352 = 0U;

	t40 = ((x1349==(x1350+x1351))<<x1352);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x1353 = INT64_MIN;
	volatile uint8_t x1354 = UINT8_MAX;
	uint32_t x1355 = 2010U;

	t41 = ((x1353==(x1354+x1355))<<x1356);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x1369 = INT8_MAX;
	int64_t x1370 = -1LL;
	static volatile int32_t t42 = 21;

	t42 = ((x1369==(x1370+x1371))<<x1372);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1382 = UINT32_MAX;
	uint8_t x1384 = 1U;

	t43 = ((x1381==(x1382+x1383))<<x1384);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1429 = 1;
	uint16_t x1430 = UINT16_MAX;
	static volatile uint16_t x1431 = 17U;
	uint32_t x1432 = 1U;
	volatile int32_t t44 = -1;

	t44 = ((x1429==(x1430+x1431))<<x1432);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1449 = -3;
	static uint32_t x1450 = 30753U;
	static volatile int32_t x1451 = 763152;
	static volatile uint8_t x1452 = 18U;
	static int32_t t45 = 1281;

	t45 = ((x1449==(x1450+x1451))<<x1452);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x1481 = UINT8_MAX;
	static uint8_t x1482 = 110U;
	volatile uint16_t x1483 = UINT16_MAX;
	uint16_t x1484 = 22U;
	volatile int32_t t46 = 25;

	t46 = ((x1481==(x1482+x1483))<<x1484);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x1493 = UINT16_MAX;
	static int32_t x1494 = -1;
	volatile uint16_t x1496 = 2U;
	volatile int32_t t47 = 1;

	t47 = ((x1493==(x1494+x1495))<<x1496);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1513 = -117;
	static volatile int32_t x1515 = 1;
	volatile uint8_t x1516 = 0U;
	int32_t t48 = -136929;

	t48 = ((x1513==(x1514+x1515))<<x1516);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x1558 = 7;
	static int16_t x1560 = 27;
	volatile int32_t t49 = 24721183;

	t49 = ((x1557==(x1558+x1559))<<x1560);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1641 = -10713;
	static int16_t x1642 = INT16_MIN;
	uint8_t x1643 = UINT8_MAX;
	int8_t x1644 = 3;
	static volatile int32_t t50 = 130398629;

	t50 = ((x1641==(x1642+x1643))<<x1644);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1685 = -1;
	int64_t x1686 = -248618LL;
	uint64_t x1687 = 58590LLU;
	int8_t x1688 = 3;
	volatile int32_t t51 = 204;

	t51 = ((x1685==(x1686+x1687))<<x1688);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x1757 = UINT8_MAX;
	int64_t x1758 = -1LL;
	uint16_t x1759 = UINT16_MAX;
	int32_t t52 = -137820121;

	t52 = ((x1757==(x1758+x1759))<<x1760);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x1789 = -323987;
	int32_t x1790 = INT32_MIN;
	int64_t x1791 = 247225LL;
	int32_t t53 = 40240612;

	t53 = ((x1789==(x1790+x1791))<<x1792);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x1853 = UINT64_MAX;
	uint16_t x1855 = UINT16_MAX;
	uint16_t x1856 = 0U;
	int32_t t54 = -779356022;

	t54 = ((x1853==(x1854+x1855))<<x1856);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x1862 = INT64_MIN;
	static int8_t x1863 = INT8_MAX;
	uint8_t x1864 = 1U;

	t55 = ((x1861==(x1862+x1863))<<x1864);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x1893 = -1527440709LL;
	uint8_t x1895 = 24U;
	int8_t x1896 = 3;
	static int32_t t56 = 1271;

	t56 = ((x1893==(x1894+x1895))<<x1896);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x1953 = 1101U;
	int16_t x1954 = INT16_MIN;
	int32_t t57 = -4;

	t57 = ((x1953==(x1954+x1955))<<x1956);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x1981 = INT32_MIN;
	uint8_t x1982 = UINT8_MAX;
	uint32_t x1984 = 25U;
	int32_t t58 = -6500123;

	t58 = ((x1981==(x1982+x1983))<<x1984);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x2045 = UINT64_MAX;
	int64_t x2046 = INT64_MAX;
	static int32_t t59 = -44884;

	t59 = ((x2045==(x2046+x2047))<<x2048);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x2117 = -1LL;
	static int32_t x2119 = INT32_MIN;
	uint32_t x2120 = 0U;

	t60 = ((x2117==(x2118+x2119))<<x2120);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x2133 = 61996LLU;
	int16_t x2135 = INT16_MIN;
	int8_t x2136 = 0;
	int32_t t61 = 168226;

	t61 = ((x2133==(x2134+x2135))<<x2136);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x2173 = INT8_MIN;
	uint64_t x2174 = 48LLU;
	int16_t x2175 = INT16_MIN;
	uint8_t x2176 = 11U;
	volatile int32_t t62 = -98;

	t62 = ((x2173==(x2174+x2175))<<x2176);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2201 = -7;
	volatile int64_t x2202 = -29LL;
	int64_t x2203 = -1LL;
	volatile int32_t t63 = 63;

	t63 = ((x2201==(x2202+x2203))<<x2204);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x2233 = INT32_MIN;
	int32_t x2234 = -3;
	static uint16_t x2235 = 1U;
	int8_t x2236 = 3;
	volatile int32_t t64 = -234;

	t64 = ((x2233==(x2234+x2235))<<x2236);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x2289 = INT16_MAX;
	uint16_t x2291 = 3189U;
	int64_t x2292 = 1LL;
	int32_t t65 = 180426;

	t65 = ((x2289==(x2290+x2291))<<x2292);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x2341 = INT64_MAX;
	static int32_t x2342 = INT32_MIN;
	uint32_t x2343 = 11126U;
	static int16_t x2344 = 0;
	int32_t t66 = -1481;

	t66 = ((x2341==(x2342+x2343))<<x2344);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2362 = INT8_MAX;
	int16_t x2363 = INT16_MAX;
	uint16_t x2364 = 0U;
	int32_t t67 = -1;

	t67 = ((x2361==(x2362+x2363))<<x2364);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x2378 = INT32_MAX;
	static int8_t x2379 = INT8_MIN;
	volatile int32_t t68 = -46322412;

	t68 = ((x2377==(x2378+x2379))<<x2380);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2457 = -1;
	volatile uint8_t x2460 = 1U;
	int32_t t69 = 360454489;

	t69 = ((x2457==(x2458+x2459))<<x2460);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x2529 = -22879021;
	volatile uint8_t x2532 = 27U;
	volatile int32_t t70 = -255985222;

	t70 = ((x2529==(x2530+x2531))<<x2532);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x2537 = 279U;
	int32_t x2538 = -1;
	uint8_t x2539 = 22U;
	int8_t x2540 = 1;
	volatile int32_t t71 = 4778427;

	t71 = ((x2537==(x2538+x2539))<<x2540);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x2581 = INT64_MIN;
	uint32_t x2583 = 3428U;
	int8_t x2584 = 1;
	int32_t t72 = -2211;

	t72 = ((x2581==(x2582+x2583))<<x2584);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x2609 = 551;
	static uint32_t x2610 = 9471508U;
	static uint64_t x2611 = 2820083187846LLU;
	static uint32_t x2612 = 1U;
	int32_t t73 = 3148287;

	t73 = ((x2609==(x2610+x2611))<<x2612);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x2633 = -140;
	int64_t x2634 = INT64_MIN;
	uint8_t x2636 = 0U;

	t74 = ((x2633==(x2634+x2635))<<x2636);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x2809 = INT32_MIN;
	int64_t x2810 = -708LL;
	int64_t x2811 = -496488LL;
	volatile int8_t x2812 = 13;
	volatile int32_t t75 = 28359;

	t75 = ((x2809==(x2810+x2811))<<x2812);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x2825 = INT32_MIN;
	volatile int16_t x2826 = -1;
	uint8_t x2827 = 7U;
	uint32_t x2828 = 0U;
	volatile int32_t t76 = -41;

	t76 = ((x2825==(x2826+x2827))<<x2828);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x2885 = INT64_MIN;
	int32_t x2886 = 5835493;
	uint8_t x2887 = 12U;
	uint8_t x2888 = 15U;
	int32_t t77 = -8143244;

	t77 = ((x2885==(x2886+x2887))<<x2888);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x2889 = -15;
	static uint8_t x2890 = UINT8_MAX;
	int16_t x2891 = INT16_MIN;
	uint32_t x2892 = 7U;
	volatile int32_t t78 = 4424;

	t78 = ((x2889==(x2890+x2891))<<x2892);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x2957 = -1;
	uint32_t x2958 = 63U;
	static uint64_t x2959 = UINT64_MAX;
	uint8_t x2960 = 0U;
	static int32_t t79 = 3;

	t79 = ((x2957==(x2958+x2959))<<x2960);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x2993 = INT8_MIN;
	volatile int32_t x2994 = -130147;
	volatile int32_t x2995 = -851;

	t80 = ((x2993==(x2994+x2995))<<x2996);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x3001 = INT32_MAX;
	static uint16_t x3002 = UINT16_MAX;
	uint16_t x3003 = UINT16_MAX;
	static volatile int32_t t81 = -105839418;

	t81 = ((x3001==(x3002+x3003))<<x3004);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x3005 = UINT64_MAX;
	volatile uint8_t x3007 = 18U;
	uint8_t x3008 = 2U;
	volatile int32_t t82 = -29;

	t82 = ((x3005==(x3006+x3007))<<x3008);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x3021 = 66927911082LL;
	volatile int32_t x3022 = 7707430;
	int16_t x3023 = INT16_MAX;
	uint8_t x3024 = 1U;
	volatile int32_t t83 = 3133958;

	t83 = ((x3021==(x3022+x3023))<<x3024);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x3030 = 3U;

	t84 = ((x3029==(x3030+x3031))<<x3032);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x3049 = INT32_MIN;
	uint32_t x3051 = 22102U;
	int16_t x3052 = 0;
	static int32_t t85 = -5799596;

	t85 = ((x3049==(x3050+x3051))<<x3052);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x3109 = -1LL;
	int16_t x3110 = INT16_MIN;
	uint8_t x3111 = 4U;
	uint8_t x3112 = 3U;
	static volatile int32_t t86 = -281;

	t86 = ((x3109==(x3110+x3111))<<x3112);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x3121 = INT32_MIN;
	int16_t x3122 = 1;
	uint8_t x3123 = 114U;
	int32_t t87 = 317105709;

	t87 = ((x3121==(x3122+x3123))<<x3124);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x3161 = 181208LLU;
	static volatile int64_t x3162 = INT64_MIN;
	uint32_t x3163 = UINT32_MAX;
	uint16_t x3164 = 8U;
	volatile int32_t t88 = -2254;

	t88 = ((x3161==(x3162+x3163))<<x3164);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x3185 = -70854173;
	uint8_t x3186 = 7U;
	int32_t x3188 = 1;

	t89 = ((x3185==(x3186+x3187))<<x3188);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x3261 = INT16_MIN;
	int64_t x3262 = -7611162204LL;
	volatile uint8_t x3263 = UINT8_MAX;
	static int32_t x3264 = 3;
	volatile int32_t t90 = -66571;

	t90 = ((x3261==(x3262+x3263))<<x3264);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x3369 = INT32_MIN;
	volatile int64_t x3370 = -1LL;
	int64_t x3371 = -1LL;
	uint16_t x3372 = 4U;

	t91 = ((x3369==(x3370+x3371))<<x3372);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x3377 = -2;
	volatile int8_t x3379 = 1;
	int8_t x3380 = 2;
	int32_t t92 = 7127;

	t92 = ((x3377==(x3378+x3379))<<x3380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x3413 = UINT8_MAX;
	int16_t x3415 = INT16_MIN;
	static volatile uint16_t x3416 = 23U;

	t93 = ((x3413==(x3414+x3415))<<x3416);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x3421 = INT64_MIN;
	int64_t x3422 = INT64_MAX;
	static volatile int16_t x3423 = INT16_MIN;
	volatile int16_t x3424 = 25;
	static int32_t t94 = -70;

	t94 = ((x3421==(x3422+x3423))<<x3424);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x3465 = INT8_MIN;
	static int64_t x3466 = INT64_MIN;
	volatile int32_t x3467 = 509;
	uint64_t x3468 = 3LLU;

	t95 = ((x3465==(x3466+x3467))<<x3468);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x3513 = 0;
	int64_t x3514 = INT64_MIN;
	uint32_t x3515 = 1U;
	volatile uint16_t x3516 = 21U;
	volatile int32_t t96 = 1;

	t96 = ((x3513==(x3514+x3515))<<x3516);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x3569 = INT8_MIN;
	int64_t x3570 = 3270LL;
	uint8_t x3572 = 0U;

	t97 = ((x3569==(x3570+x3571))<<x3572);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x3605 = INT32_MAX;
	int64_t x3607 = INT64_MAX;
	int8_t x3608 = 7;
	volatile int32_t t98 = 34440494;

	t98 = ((x3605==(x3606+x3607))<<x3608);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x3665 = 38U;
	static uint8_t x3666 = 2U;
	static uint32_t x3667 = UINT32_MAX;
	static volatile uint16_t x3668 = 1U;
	static int32_t t99 = 1;

	t99 = ((x3665==(x3666+x3667))<<x3668);

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

