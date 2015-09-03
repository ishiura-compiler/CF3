#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t0 = UINT32_MAX;
int32_t x25 = 424660258;
int32_t t2 = -9382;
int8_t x89 = 5;
uint64_t x121 = 37618LLU;
int8_t x123 = -1;
volatile int32_t t5 = 533005543;
int8_t x194 = -1;
int16_t x256 = -1;
int16_t x326 = -1;
uint32_t x333 = UINT32_MAX;
uint64_t x335 = UINT64_MAX;
int8_t x423 = -1;
uint64_t x427 = UINT64_MAX;
int16_t x448 = -1;
static volatile uint64_t t15 = 114LLU;
volatile int32_t x485 = INT32_MAX;
uint16_t x509 = 3168U;
int8_t x564 = -1;
int8_t x569 = INT8_MAX;
volatile int64_t x571 = 0LL;
volatile int32_t t20 = -2331033;
int8_t x785 = 8;
int32_t x786 = INT32_MIN;
int64_t x825 = 78293LL;
static uint16_t x932 = 31U;
volatile uint64_t t29 = 3309508760963LLU;
int8_t x1120 = -1;
uint64_t x1130 = UINT64_MAX;
int64_t x1131 = -11266LL;
volatile int32_t t32 = -128108;
int16_t x1192 = -1;
volatile int64_t t34 = 27606698020023LL;
uint8_t x1193 = 114U;
volatile uint8_t x1197 = 20U;
int32_t x1199 = -1;
uint8_t x1290 = 0U;
uint16_t x1367 = UINT16_MAX;
int64_t x1368 = -1LL;
static volatile int32_t x1443 = -1;
int64_t x1470 = -1LL;
volatile int32_t x1471 = -150459;
volatile int32_t x1486 = INT32_MAX;
int32_t x1487 = -1;
static int64_t x1534 = 0LL;
static int8_t x1557 = INT8_MAX;
uint64_t x1565 = 76LLU;
int8_t x1568 = INT8_MIN;
int16_t x1626 = INT16_MIN;
static uint8_t x1664 = UINT8_MAX;
int32_t t52 = -7;
int8_t x1771 = 0;
int16_t x1772 = -3;
static volatile uint64_t t55 = 1LLU;
static volatile int64_t x1886 = INT64_MIN;
static int32_t t60 = -17;
int16_t x1907 = INT16_MAX;
static int16_t x1908 = -2;
uint32_t x1909 = 0U;
volatile int32_t x1989 = 265519226;
int16_t x1991 = INT16_MIN;
volatile uint64_t t65 = 0LLU;
uint64_t x2121 = UINT64_MAX;
int32_t x2187 = INT32_MIN;
static volatile int32_t t67 = -3;
volatile uint8_t x2197 = 12U;
static int8_t x2200 = 1;
uint32_t x2236 = 104991U;
int8_t x2264 = INT8_MIN;
uint16_t x2379 = UINT16_MAX;
static volatile uint32_t x2465 = UINT32_MAX;
int64_t x2504 = -1LL;
int16_t x2561 = INT16_MAX;
uint64_t x2582 = 2638933248638LLU;
uint8_t x2584 = 25U;
int32_t x2586 = 63502740;
volatile int32_t t82 = 5177135;
volatile int32_t x2739 = 43530;
int16_t x2740 = -20;
int64_t x2768 = INT64_MIN;
static uint64_t t86 = 6730233291803680LLU;
uint16_t x2821 = 127U;
uint16_t x2833 = 2034U;
int32_t x2854 = INT32_MIN;
volatile uint16_t x2881 = UINT16_MAX;
int32_t x2883 = -130780640;
volatile int32_t t93 = -120753;
uint8_t x2988 = UINT8_MAX;
volatile uint64_t x2998 = UINT64_MAX;
int8_t x3067 = INT8_MIN;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int32_t x2 = -1;
	static volatile int8_t x3 = INT8_MIN;
	int64_t x4 = -1LL;

	t0 = (x1<<((x2*x3)%x4));

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x26 = -627;
	int8_t x27 = INT8_MAX;
	static int64_t x28 = -1LL;
	volatile int32_t t1 = 299348;

	t1 = (x25<<((x26*x27)%x28));

	if (t1 != 424660258) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x73 = 2U;
	static uint64_t x74 = 35195148818LLU;
	uint16_t x75 = 4U;
	int8_t x76 = INT8_MAX;

	t2 = (x73<<((x74*x75)%x76));

	if (t2 != 33554432) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x90 = 25U;
	int32_t x91 = INT32_MAX;
	int64_t x92 = -1LL;
	volatile int32_t t3 = -63;

	t3 = (x89<<((x90*x91)%x92));

	if (t3 != 5) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x122 = -1;
	int8_t x124 = INT8_MIN;
	uint64_t t4 = 26795LLU;

	t4 = (x121<<((x122*x123)%x124));

	if (t4 != 75236LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x169 = 8;
	int16_t x170 = 0;
	uint64_t x171 = 3817435LLU;
	int16_t x172 = -1;

	t5 = (x169<<((x170*x171)%x172));

	if (t5 != 8) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x193 = 8479078365517577LLU;
	volatile int8_t x195 = -1;
	int64_t x196 = INT64_MAX;
	uint64_t t6 = 209525782LLU;

	t6 = (x193<<((x194*x195)%x196));

	if (t6 != 16958156731035154LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x253 = 1U;
	int16_t x254 = -1;
	uint64_t x255 = UINT64_MAX;
	int32_t t7 = -419;

	t7 = (x253<<((x254*x255)%x256));

	if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x273 = INT8_MAX;
	int64_t x274 = -2315LL;
	volatile int8_t x275 = INT8_MIN;
	int64_t x276 = -1LL;
	int32_t t8 = -259871;

	t8 = (x273<<((x274*x275)%x276));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x325 = 2;
	int16_t x327 = INT16_MAX;
	volatile int64_t x328 = -1LL;
	int32_t t9 = 1651;

	t9 = (x325<<((x326*x327)%x328));

	if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x334 = 1;
	volatile uint8_t x336 = 17U;
	uint32_t t10 = UINT32_MAX;

	t10 = (x333<<((x334*x335)%x336));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x353 = INT32_MAX;
	int8_t x354 = 0;
	int64_t x355 = -13265LL;
	uint16_t x356 = 24U;
	int32_t t11 = INT32_MAX;

	t11 = (x353<<((x354*x355)%x356));

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x421 = 5;
	int8_t x422 = -1;
	static int64_t x424 = INT64_MIN;
	volatile int32_t t12 = 1073488793;

	t12 = (x421<<((x422*x423)%x424));

	if (t12 != 10) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x425 = UINT16_MAX;
	volatile int8_t x426 = 0;
	int8_t x428 = 3;
	volatile int32_t t13 = 7825;

	t13 = (x425<<((x426*x427)%x428));

	if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x445 = UINT8_MAX;
	volatile int16_t x446 = -2;
	static uint16_t x447 = 3U;
	volatile int32_t t14 = 14972;

	t14 = (x445<<((x446*x447)%x448));

	if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x469 = UINT64_MAX;
	uint16_t x470 = UINT16_MAX;
	volatile uint16_t x471 = 2U;
	static int16_t x472 = -9;

	t15 = (x469<<((x470*x471)%x472));

	if (t15 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x486 = INT16_MIN;
	uint8_t x487 = 10U;
	static int32_t x488 = -1;
	volatile int32_t t16 = INT32_MAX;

	t16 = (x485<<((x486*x487)%x488));

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x497 = 49;
	int32_t x498 = INT32_MAX;
	volatile uint8_t x499 = 0U;
	int32_t x500 = INT32_MIN;
	static volatile int32_t t17 = 532864323;

	t17 = (x497<<((x498*x499)%x500));

	if (t17 != 49) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint64_t x510 = 16167024882LLU;
	static int64_t x511 = INT64_MIN;
	volatile uint64_t x512 = UINT64_MAX;
	static volatile int32_t t18 = -3457263;

	t18 = (x509<<((x510*x511)%x512));

	if (t18 != 3168) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x561 = 23350747575320LLU;
	volatile int16_t x562 = -28;
	uint16_t x563 = 9406U;
	volatile uint64_t t19 = 22402849408264189LLU;

	t19 = (x561<<((x562*x563)%x564));

	if (t19 != 23350747575320LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x570 = 0U;
	uint16_t x572 = 587U;

	t20 = (x569<<((x570*x571)%x572));

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x677 = 4983U;
	uint32_t x678 = 1351U;
	int64_t x679 = 125786558LL;
	int16_t x680 = 5;
	volatile uint32_t t21 = 1240926641U;

	t21 = (x677<<((x678*x679)%x680));

	if (t21 != 39864U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x705 = 52;
	int8_t x706 = -1;
	int64_t x707 = -4167372304679LL;
	static uint8_t x708 = 19U;
	int32_t t22 = -314325;

	t22 = (x705<<((x706*x707)%x708));

	if (t22 != 1703936) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x709 = 954498573U;
	int32_t x710 = -1;
	volatile int16_t x711 = INT16_MIN;
	volatile int16_t x712 = INT16_MAX;
	volatile uint32_t t23 = 1951U;

	t23 = (x709<<((x710*x711)%x712));

	if (t23 != 1908997146U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x787 = UINT64_MAX;
	int8_t x788 = INT8_MAX;
	static int32_t t24 = -353305;

	t24 = (x785<<((x786*x787)%x788));

	if (t24 != 2048) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x826 = UINT32_MAX;
	int32_t x827 = 11;
	static uint32_t x828 = 67U;
	int64_t t25 = -12LL;

	t25 = (x825<<((x826*x827)%x828));

	if (t25 != 328384643072LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x921 = 222157U;
	uint16_t x922 = 8953U;
	static int32_t x923 = 29004;
	uint16_t x924 = 7U;
	uint32_t t26 = 0U;

	t26 = (x921<<((x922*x923)%x924));

	if (t26 != 222157U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x929 = 11804U;
	int64_t x930 = 3201LL;
	uint32_t x931 = 18844640U;
	volatile uint32_t t27 = 3U;

	t27 = (x929<<((x930*x931)%x932));

	if (t27 != 3221225472U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x981 = 2U;
	int32_t x982 = INT32_MIN;
	static uint64_t x983 = 4016LLU;
	int8_t x984 = 7;
	volatile int32_t t28 = 0;

	t28 = (x981<<((x982*x983)%x984));

	if (t28 != 128) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1017 = UINT64_MAX;
	static int32_t x1018 = 886509628;
	uint8_t x1019 = 1U;
	uint8_t x1020 = 50U;

	t29 = (x1017<<((x1018*x1019)%x1020));

	if (t29 != 18446744073441116160LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1029 = 1U;
	int16_t x1030 = -1;
	int8_t x1031 = -1;
	int16_t x1032 = INT16_MAX;
	volatile uint32_t t30 = 765U;

	t30 = (x1029<<((x1030*x1031)%x1032));

	if (t30 != 2U) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x1117 = INT64_MAX;
	volatile uint8_t x1118 = UINT8_MAX;
	static int16_t x1119 = INT16_MIN;
	volatile int64_t t31 = INT64_MAX;

	t31 = (x1117<<((x1118*x1119)%x1120));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1129 = UINT8_MAX;
	static uint8_t x1132 = 44U;

	t32 = (x1129<<((x1130*x1131)%x1132));

	if (t32 != 1020) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1169 = 1;
	volatile uint64_t x1170 = UINT64_MAX;
	int16_t x1171 = -17;
	int16_t x1172 = INT16_MAX;
	int32_t t33 = -119815;

	t33 = (x1169<<((x1170*x1171)%x1172));

	if (t33 != 131072) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x1189 = 862813279285788600LL;
	volatile int8_t x1190 = INT8_MIN;
	int16_t x1191 = INT16_MIN;

	t34 = (x1189<<((x1190*x1191)%x1192));

	if (t34 != 862813279285788600LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x1194 = -38;
	int32_t x1195 = -221;
	int8_t x1196 = 1;
	int32_t t35 = 4;

	t35 = (x1193<<((x1194*x1195)%x1196));

	if (t35 != 114) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1198 = UINT64_MAX;
	int64_t x1200 = -1LL;
	int32_t t36 = -942712683;

	t36 = (x1197<<((x1198*x1199)%x1200));

	if (t36 != 40) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1201 = 143126U;
	int8_t x1202 = INT8_MIN;
	int16_t x1203 = INT16_MAX;
	uint8_t x1204 = 2U;
	uint32_t t37 = 15519419U;

	t37 = (x1201<<((x1202*x1203)%x1204));

	if (t37 != 143126U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x1289 = 2287228LLU;
	volatile uint32_t x1291 = 15U;
	static int16_t x1292 = -1;
	uint64_t t38 = 5298221LLU;

	t38 = (x1289<<((x1290*x1291)%x1292));

	if (t38 != 2287228LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x1305 = UINT8_MAX;
	volatile int16_t x1306 = 0;
	uint64_t x1307 = UINT64_MAX;
	int16_t x1308 = 173;
	static int32_t t39 = 94;

	t39 = (x1305<<((x1306*x1307)%x1308));

	if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1313 = INT32_MAX;
	static volatile uint8_t x1314 = 19U;
	volatile int16_t x1315 = INT16_MAX;
	uint64_t x1316 = 7LLU;
	volatile int32_t t40 = INT32_MAX;

	t40 = (x1313<<((x1314*x1315)%x1316));

	if (t40 != INT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1365 = 4543384U;
	int8_t x1366 = -2;
	uint32_t t41 = 0U;

	t41 = (x1365<<((x1366*x1367)%x1368));

	if (t41 != 4543384U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1405 = 0U;
	int64_t x1406 = -1LL;
	uint16_t x1407 = UINT16_MAX;
	volatile uint8_t x1408 = UINT8_MAX;
	int32_t t42 = -8886;

	t42 = (x1405<<((x1406*x1407)%x1408));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1441 = 600024642;
	int32_t x1442 = 36244;
	static int8_t x1444 = 1;
	int32_t t43 = -19147;

	t43 = (x1441<<((x1442*x1443)%x1444));

	if (t43 != 600024642) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x1469 = UINT32_MAX;
	volatile uint8_t x1472 = UINT8_MAX;
	uint32_t t44 = 15U;

	t44 = (x1469<<((x1470*x1471)%x1472));

	if (t44 != 4294966784U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x1485 = 21U;
	volatile int16_t x1488 = -1;
	int32_t t45 = 37;

	t45 = (x1485<<((x1486*x1487)%x1488));

	if (t45 != 21) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1529 = 2766;
	int32_t x1530 = 50697;
	static uint64_t x1531 = 283309699867528420LLU;
	int8_t x1532 = 1;
	volatile int32_t t46 = -100166024;

	t46 = (x1529<<((x1530*x1531)%x1532));

	if (t46 != 2766) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x1533 = 56433128LLU;
	int8_t x1535 = -18;
	static volatile int64_t x1536 = INT64_MAX;
	volatile uint64_t t47 = 48538830323994189LLU;

	t47 = (x1533<<((x1534*x1535)%x1536));

	if (t47 != 56433128LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1558 = -61;
	static int64_t x1559 = -1LL;
	static uint8_t x1560 = 15U;
	volatile int32_t t48 = 22392103;

	t48 = (x1557<<((x1558*x1559)%x1560));

	if (t48 != 254) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x1566 = 1U;
	int16_t x1567 = INT16_MIN;
	static volatile uint64_t t49 = 33731096647LLU;

	t49 = (x1565<<((x1566*x1567)%x1568));

	if (t49 != 76LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x1625 = 755U;
	uint32_t x1627 = 30036U;
	static int8_t x1628 = 1;
	volatile int32_t t50 = 1375;

	t50 = (x1625<<((x1626*x1627)%x1628));

	if (t50 != 755) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x1661 = 22173528042LLU;
	int16_t x1662 = -1;
	uint8_t x1663 = UINT8_MAX;
	uint64_t t51 = 13515528308435LLU;

	t51 = (x1661<<((x1662*x1663)%x1664));

	if (t51 != 22173528042LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1689 = 90;
	int16_t x1690 = INT16_MIN;
	uint8_t x1691 = UINT8_MAX;
	static volatile int8_t x1692 = -5;

	t52 = (x1689<<((x1690*x1691)%x1692));

	if (t52 != 90) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x1701 = 7096LL;
	uint8_t x1702 = 2U;
	volatile int8_t x1703 = -1;
	volatile uint16_t x1704 = 1U;
	volatile int64_t t53 = 93489LL;

	t53 = (x1701<<((x1702*x1703)%x1704));

	if (t53 != 7096LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x1769 = 52479326U;
	uint32_t x1770 = 16365915U;
	static uint32_t t54 = 1508943U;

	t54 = (x1769<<((x1770*x1771)%x1772));

	if (t54 != 52479326U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x1781 = 249LLU;
	volatile uint16_t x1782 = 45U;
	int16_t x1783 = INT16_MIN;
	static int16_t x1784 = INT16_MIN;

	t55 = (x1781<<((x1782*x1783)%x1784));

	if (t55 != 249LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1797 = INT16_MAX;
	volatile int64_t x1798 = -1LL;
	int32_t x1799 = -1;
	uint64_t x1800 = 16845496153088403LLU;
	int32_t t56 = -5758856;

	t56 = (x1797<<((x1798*x1799)%x1800));

	if (t56 != 65534) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x1837 = UINT8_MAX;
	static volatile int64_t x1838 = 6721LL;
	volatile int16_t x1839 = -5349;
	int16_t x1840 = -1;
	volatile int32_t t57 = 187163;

	t57 = (x1837<<((x1838*x1839)%x1840));

	if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x1841 = 0;
	volatile int16_t x1842 = INT16_MIN;
	volatile int8_t x1843 = 0;
	static uint16_t x1844 = UINT16_MAX;
	volatile int32_t t58 = 42373;

	t58 = (x1841<<((x1842*x1843)%x1844));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x1885 = 4;
	uint16_t x1887 = 1U;
	int64_t x1888 = INT64_MIN;
	volatile int32_t t59 = -265;

	t59 = (x1885<<((x1886*x1887)%x1888));

	if (t59 != 4) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x1897 = 122120;
	static volatile uint32_t x1898 = 1U;
	int8_t x1899 = 1;
	uint64_t x1900 = 751849577122LLU;

	t60 = (x1897<<((x1898*x1899)%x1900));

	if (t60 != 244240) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x1905 = 46703241LL;
	static uint16_t x1906 = UINT16_MAX;
	int64_t t61 = 61512495679578LL;

	t61 = (x1905<<((x1906*x1907)%x1908));

	if (t61 != 93406482LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x1910 = INT16_MIN;
	volatile int64_t x1911 = 15811088586895LL;
	int16_t x1912 = INT16_MIN;
	uint32_t t62 = 64U;

	t62 = (x1909<<((x1910*x1911)%x1912));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x1985 = 1;
	int16_t x1986 = -24;
	uint8_t x1987 = 5U;
	int8_t x1988 = -1;
	int32_t t63 = -631194560;

	t63 = (x1985<<((x1986*x1987)%x1988));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x1990 = 1U;
	int16_t x1992 = INT16_MIN;
	volatile int32_t t64 = 65652;

	t64 = (x1989<<((x1990*x1991)%x1992));

	if (t64 != 265519226) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x2045 = 434380816LLU;
	static volatile int16_t x2046 = -1;
	volatile int64_t x2047 = INT64_MAX;
	int8_t x2048 = 1;

	t65 = (x2045<<((x2046*x2047)%x2048));

	if (t65 != 434380816LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x2122 = 0U;
	int8_t x2123 = INT8_MIN;
	uint64_t x2124 = 26LLU;
	volatile uint64_t t66 = UINT64_MAX;

	t66 = (x2121<<((x2122*x2123)%x2124));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x2185 = 0U;
	static volatile int8_t x2186 = 0;
	int16_t x2188 = -1;

	t67 = (x2185<<((x2186*x2187)%x2188));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x2198 = -1;
	volatile uint64_t x2199 = 11LLU;
	static volatile int32_t t68 = -449;

	t68 = (x2197<<((x2198*x2199)%x2200));

	if (t68 != 12) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x2229 = 27725U;
	static int32_t x2230 = 1;
	uint32_t x2231 = UINT32_MAX;
	uint16_t x2232 = 1U;
	volatile uint32_t t69 = 73U;

	t69 = (x2229<<((x2230*x2231)%x2232));

	if (t69 != 27725U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x2233 = INT16_MAX;
	int16_t x2234 = 0;
	static int64_t x2235 = INT64_MAX;
	volatile int32_t t70 = 0;

	t70 = (x2233<<((x2234*x2235)%x2236));

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x2261 = 274U;
	uint8_t x2262 = 0U;
	static int32_t x2263 = -1;
	int32_t t71 = 31806682;

	t71 = (x2261<<((x2262*x2263)%x2264));

	if (t71 != 274) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2317 = 0;
	int8_t x2318 = INT8_MAX;
	int16_t x2319 = 202;
	static volatile int64_t x2320 = 1LL;
	volatile int32_t t72 = -568661630;

	t72 = (x2317<<((x2318*x2319)%x2320));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x2373 = 472U;
	int8_t x2374 = -10;
	uint8_t x2375 = UINT8_MAX;
	static int8_t x2376 = 2;
	int32_t t73 = 8863;

	t73 = (x2373<<((x2374*x2375)%x2376));

	if (t73 != 472) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x2377 = 30;
	static int64_t x2378 = -1LL;
	volatile int32_t x2380 = -1;
	volatile int32_t t74 = -5;

	t74 = (x2377<<((x2378*x2379)%x2380));

	if (t74 != 30) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x2466 = -7;
	int16_t x2467 = INT16_MIN;
	static int16_t x2468 = -1;
	volatile uint32_t t75 = UINT32_MAX;

	t75 = (x2465<<((x2466*x2467)%x2468));

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x2473 = 1;
	uint8_t x2474 = 0U;
	uint64_t x2475 = UINT64_MAX;
	int16_t x2476 = -1;
	int32_t t76 = 30102933;

	t76 = (x2473<<((x2474*x2475)%x2476));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x2501 = 44U;
	int32_t x2502 = -11;
	static uint16_t x2503 = 415U;
	int32_t t77 = -121;

	t77 = (x2501<<((x2502*x2503)%x2504));

	if (t77 != 44) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x2509 = UINT64_MAX;
	uint8_t x2510 = UINT8_MAX;
	static int16_t x2511 = INT16_MAX;
	uint32_t x2512 = 59U;
	static uint64_t t78 = 2LLU;

	t78 = (x2509<<((x2510*x2511)%x2512));

	if (t78 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x2562 = 8U;
	uint8_t x2563 = 7U;
	int32_t x2564 = -1;
	volatile int32_t t79 = 50828533;

	t79 = (x2561<<((x2562*x2563)%x2564));

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x2581 = 1;
	int32_t x2583 = 9;
	volatile int32_t t80 = -23146;

	t80 = (x2581<<((x2582*x2583)%x2584));

	if (t80 != 131072) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x2585 = UINT64_MAX;
	uint32_t x2587 = 7727313U;
	int64_t x2588 = -1LL;
	uint64_t t81 = UINT64_MAX;

	t81 = (x2585<<((x2586*x2587)%x2588));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x2605 = 3;
	uint8_t x2606 = 7U;
	uint16_t x2607 = 0U;
	static int16_t x2608 = -358;

	t82 = (x2605<<((x2606*x2607)%x2608));

	if (t82 != 3) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x2737 = UINT8_MAX;
	volatile uint8_t x2738 = 0U;
	int32_t t83 = 8906;

	t83 = (x2737<<((x2738*x2739)%x2740));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x2761 = UINT16_MAX;
	uint16_t x2762 = 59U;
	int64_t x2763 = 31188317199LL;
	int32_t x2764 = -1;
	volatile int32_t t84 = 126174077;

	t84 = (x2761<<((x2762*x2763)%x2764));

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint64_t x2765 = UINT64_MAX;
	int8_t x2766 = -1;
	volatile int8_t x2767 = -1;
	uint64_t t85 = 2226780113806LLU;

	t85 = (x2765<<((x2766*x2767)%x2768));

	if (t85 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x2777 = 3569039758516LLU;
	int16_t x2778 = INT16_MAX;
	static int16_t x2779 = 127;
	int8_t x2780 = INT8_MIN;

	t86 = (x2777<<((x2778*x2779)%x2780));

	if (t86 != 7138079517032LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x2813 = INT8_MAX;
	static uint8_t x2814 = 63U;
	uint16_t x2815 = 24014U;
	volatile uint8_t x2816 = 3U;
	volatile int32_t t87 = -29019;

	t87 = (x2813<<((x2814*x2815)%x2816));

	if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x2822 = 202618945295092825LLU;
	static int16_t x2823 = -1;
	static int16_t x2824 = 95;
	volatile int32_t t88 = 0;

	t88 = (x2821<<((x2822*x2823)%x2824));

	if (t88 != 260096) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x2834 = 0U;
	static int8_t x2835 = INT8_MIN;
	int16_t x2836 = INT16_MIN;
	static volatile int32_t t89 = 336831;

	t89 = (x2833<<((x2834*x2835)%x2836));

	if (t89 != 2034) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x2853 = INT8_MAX;
	static uint32_t x2855 = 418038U;
	int64_t x2856 = INT64_MAX;
	int32_t t90 = 6096;

	t90 = (x2853<<((x2854*x2855)%x2856));

	if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x2882 = 12827504LLU;
	volatile int8_t x2884 = 23;
	int32_t t91 = -1;

	t91 = (x2881<<((x2882*x2883)%x2884));

	if (t91 != 262140) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x2901 = 97U;
	volatile int32_t x2902 = -1;
	static int64_t x2903 = -1LL;
	static uint32_t x2904 = 9202153U;
	static volatile int32_t t92 = 13;

	t92 = (x2901<<((x2902*x2903)%x2904));

	if (t92 != 194) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x2945 = UINT8_MAX;
	uint64_t x2946 = UINT64_MAX;
	int16_t x2947 = INT16_MIN;
	int32_t x2948 = 14;

	t93 = (x2945<<((x2946*x2947)%x2948));

	if (t93 != 65280) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x2949 = 7U;
	uint32_t x2950 = 1710881U;
	uint32_t x2951 = 128U;
	static uint16_t x2952 = 16U;
	volatile int32_t t94 = 1;

	t94 = (x2949<<((x2950*x2951)%x2952));

	if (t94 != 7) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x2973 = 915118LLU;
	int16_t x2974 = -160;
	int16_t x2975 = -1;
	static int64_t x2976 = -14LL;
	static uint64_t t95 = 656LLU;

	t95 = (x2973<<((x2974*x2975)%x2976));

	if (t95 != 58567552LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x2981 = INT32_MAX;
	static volatile int8_t x2982 = -2;
	volatile int16_t x2983 = INT16_MAX;
	volatile int16_t x2984 = 1;
	volatile int32_t t96 = INT32_MAX;

	t96 = (x2981<<((x2982*x2983)%x2984));

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x2985 = UINT64_MAX;
	int8_t x2986 = -10;
	int32_t x2987 = -1;
	volatile uint64_t t97 = 3062831LLU;

	t97 = (x2985<<((x2986*x2987)%x2988));

	if (t97 != 18446744073709550592LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x2997 = INT64_MAX;
	int32_t x2999 = 0;
	static uint64_t x3000 = 748758339538895LLU;
	int64_t t98 = INT64_MAX;

	t98 = (x2997<<((x2998*x2999)%x3000));

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x3065 = 3U;
	static int16_t x3066 = 1241;
	volatile uint32_t x3068 = 49U;
	volatile int32_t t99 = 1;

	t99 = (x3065<<((x3066*x3067)%x3068));

	if (t99 != 3) { NG(); } else { ; }
	
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

