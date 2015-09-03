#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x184 = 23U;
volatile uint32_t t0 = 244U;
int32_t x339 = INT32_MIN;
uint16_t x378 = 2U;
static uint16_t x412 = 16U;
int32_t t5 = -1419;
int16_t x437 = -1;
int8_t x439 = -28;
int64_t x477 = 118LL;
int64_t x478 = INT64_MIN;
int8_t x551 = -1;
volatile int32_t t11 = -678243;
int16_t x593 = -4;
volatile int8_t x706 = INT8_MIN;
int64_t t17 = 1LL;
uint16_t x746 = 168U;
uint32_t x747 = UINT32_MAX;
int16_t x748 = 1;
static uint32_t x829 = 14043302U;
static volatile uint32_t t19 = 8U;
static volatile uint16_t x880 = 13U;
uint64_t t21 = 1427309821LLU;
int16_t x886 = INT16_MAX;
static uint8_t x888 = 28U;
int32_t x957 = -628123920;
uint8_t x1060 = 3U;
static int64_t t27 = -1969839996LL;
int16_t x1173 = -11738;
uint32_t x1217 = 5796365U;
static int32_t x1239 = -8977158;
static int8_t x1246 = -1;
static uint32_t t31 = 22257513U;
int32_t x1252 = 13;
int64_t x1445 = INT64_MIN;
int64_t x1447 = -2LL;
int64_t x1451 = -1852158LL;
int16_t x1452 = 1;
int16_t x1473 = -678;
int8_t x1475 = INT8_MAX;
uint8_t x1522 = 0U;
int8_t x1536 = 2;
uint8_t x1604 = 2U;
int32_t t42 = 416232;
volatile int32_t t44 = -3;
volatile uint8_t x1744 = 5U;
int8_t x1796 = 9;
static volatile uint64_t t46 = 6LLU;
static uint32_t x1813 = 16U;
volatile int32_t x1902 = -225287841;
uint32_t x1935 = 81U;
int8_t x1948 = 7;
int32_t x2165 = INT32_MIN;
volatile uint8_t x2169 = 38U;
uint32_t x2262 = 203487139U;
volatile int32_t x2263 = 96128545;
int16_t x2302 = INT16_MIN;
uint64_t x2304 = 2LLU;
volatile int32_t t62 = -6113;
volatile uint64_t t63 = 7353901101837567460LLU;
int64_t x2369 = INT64_MAX;
static uint8_t x2424 = 46U;
volatile uint32_t x2460 = 0U;
int64_t x2474 = -1LL;
int16_t x2544 = 0;
int16_t x2578 = -118;
volatile int64_t t72 = 54137808LL;
uint64_t t73 = 3084531LLU;
volatile int32_t x2631 = -227603;
static int16_t x2659 = INT16_MIN;
uint64_t x2702 = 1661888397LLU;
uint32_t x2707 = UINT32_MAX;
uint32_t x2798 = 409609752U;
int64_t x2801 = -1LL;
uint16_t x2824 = 19U;
int32_t t82 = 128365;
int16_t x2895 = INT16_MAX;
int32_t x2918 = INT32_MIN;
static uint32_t x2941 = 4691U;
int8_t x3078 = -1;
uint64_t x3081 = UINT64_MAX;
int64_t x3134 = INT64_MIN;
int8_t x3214 = INT8_MIN;
int8_t x3263 = INT8_MIN;
volatile uint32_t t96 = 2U;
uint32_t x3337 = 6982527U;
int64_t t98 = -313385814353LL;
int32_t x3523 = INT32_MIN;


void f0(void) {
	int16_t x181 = INT16_MIN;
	uint32_t x182 = 1548U;
	int16_t x183 = 2229;

	t0 = ((x181&(x182^x183))>>x184);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x277 = UINT64_MAX;
	static int16_t x278 = INT16_MIN;
	int64_t x279 = -1LL;
	static uint8_t x280 = 3U;
	volatile uint64_t t1 = 6LLU;

	t1 = ((x277&(x278^x279))>>x280);

	if (t1 != 4095LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x305 = INT16_MIN;
	uint8_t x306 = 0U;
	uint16_t x307 = 27U;
	volatile uint8_t x308 = 9U;
	static int32_t t2 = 73530;

	t2 = ((x305&(x306^x307))>>x308);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x337 = -461;
	static volatile uint64_t x338 = 924393388195252666LLU;
	uint8_t x340 = 23U;
	static uint64_t t3 = 10885519568869635LLU;

	t3 = ((x337&(x338^x339))>>x340);

	if (t3 != 2088826976288LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x377 = 99;
	static int8_t x379 = INT8_MIN;
	volatile int16_t x380 = 2;
	volatile int32_t t4 = -21;

	t4 = ((x377&(x378^x379))>>x380);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x409 = 1165U;
	volatile int16_t x410 = -1;
	static int16_t x411 = INT16_MIN;

	t5 = ((x409&(x410^x411))>>x412);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x438 = -6LL;
	static uint8_t x440 = 25U;
	volatile int64_t t6 = 5422943026732128LL;

	t6 = ((x437&(x438^x439))>>x440);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x461 = 322614LL;
	uint8_t x462 = 15U;
	static uint16_t x463 = 3087U;
	int32_t x464 = 9;
	int64_t t7 = -108068836720LL;

	t7 = ((x461&(x462^x463))>>x464);

	if (t7 != 6LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x479 = -1;
	int32_t x480 = 1;
	static volatile int64_t t8 = -102484LL;

	t8 = ((x477&(x478^x479))>>x480);

	if (t8 != 59LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x513 = -1;
	static volatile int16_t x514 = INT16_MIN;
	int8_t x515 = INT8_MIN;
	uint64_t x516 = 0LLU;
	volatile int32_t t9 = 0;

	t9 = ((x513&(x514^x515))>>x516);

	if (t9 != 32640) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x549 = -1LL;
	static int32_t x550 = -6;
	uint8_t x552 = 2U;
	int64_t t10 = -2617714LL;

	t10 = ((x549&(x550^x551))>>x552);

	if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x553 = 1;
	uint16_t x554 = UINT16_MAX;
	uint16_t x555 = 583U;
	uint8_t x556 = 6U;

	t11 = ((x553&(x554^x555))>>x556);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x594 = INT64_MIN;
	static int8_t x595 = -14;
	int8_t x596 = 0;
	static int64_t t12 = 3102738LL;

	t12 = ((x593&(x594^x595))>>x596);

	if (t12 != 9223372036854775792LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x641 = INT8_MAX;
	int16_t x642 = 6732;
	int64_t x643 = -1LL;
	uint16_t x644 = 5U;
	int64_t t13 = 29LL;

	t13 = ((x641&(x642^x643))>>x644);

	if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x657 = INT16_MAX;
	uint32_t x658 = 9U;
	static int8_t x659 = 0;
	volatile int8_t x660 = 0;
	volatile uint32_t t14 = 5506243U;

	t14 = ((x657&(x658^x659))>>x660);

	if (t14 != 9U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x685 = INT8_MAX;
	static volatile uint8_t x686 = UINT8_MAX;
	uint8_t x687 = 2U;
	int16_t x688 = 19;
	volatile int32_t t15 = -189730559;

	t15 = ((x685&(x686^x687))>>x688);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x697 = INT8_MAX;
	static int8_t x698 = -1;
	int64_t x699 = 1LL;
	int8_t x700 = 43;
	volatile int64_t t16 = -94LL;

	t16 = ((x697&(x698^x699))>>x700);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x705 = INT64_MAX;
	uint8_t x707 = 2U;
	static uint8_t x708 = 30U;

	t17 = ((x705&(x706^x707))>>x708);

	if (t17 != 8589934591LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x745 = 0U;
	static uint32_t t18 = 31247U;

	t18 = ((x745&(x746^x747))>>x748);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x830 = INT16_MIN;
	uint32_t x831 = 7U;
	uint8_t x832 = 10U;

	t19 = ((x829&(x830^x831))>>x832);

	if (t19 != 13696U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x853 = INT32_MIN;
	volatile uint16_t x854 = 11695U;
	int8_t x855 = 24;
	uint8_t x856 = 0U;
	volatile int32_t t20 = -107;

	t20 = ((x853&(x854^x855))>>x856);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x877 = INT32_MIN;
	static volatile uint64_t x878 = 2050LLU;
	volatile int16_t x879 = 0;

	t21 = ((x877&(x878^x879))>>x880);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x885 = INT64_MAX;
	int8_t x887 = -36;
	volatile int64_t t22 = 14LL;

	t22 = ((x885&(x886^x887))>>x888);

	if (t22 != 34359738367LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x905 = INT8_MIN;
	volatile uint64_t x906 = 16234383LLU;
	uint64_t x907 = 12984625621LLU;
	int8_t x908 = 1;
	uint64_t t23 = 1074431607652LLU;

	t23 = ((x905&(x906^x907))>>x908);

	if (t23 != 6484594432LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x958 = INT16_MAX;
	uint32_t x959 = 8977U;
	static int64_t x960 = 1LL;
	volatile uint32_t t24 = 1688603U;

	t24 = ((x957&(x958^x959))>>x960);

	if (t24 != 2672U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1057 = INT16_MIN;
	uint64_t x1058 = 263993816LLU;
	int32_t x1059 = -106;
	volatile uint64_t t25 = 953947319188482574LLU;

	t25 = ((x1057&(x1058^x1059))>>x1060);

	if (t25 != 2305843009180692480LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x1105 = INT32_MIN;
	uint64_t x1106 = 263689LLU;
	int8_t x1107 = INT8_MIN;
	static uint16_t x1108 = 1U;
	uint64_t t26 = 2782LLU;

	t26 = ((x1105&(x1106^x1107))>>x1108);

	if (t26 != 9223372035781033984LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1117 = 1806U;
	static int8_t x1118 = INT8_MIN;
	static int64_t x1119 = INT64_MIN;
	volatile int8_t x1120 = 7;

	t27 = ((x1117&(x1118^x1119))>>x1120);

	if (t27 != 14LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x1174 = INT16_MAX;
	static volatile uint32_t x1175 = 32U;
	volatile int8_t x1176 = 1;
	volatile uint32_t t28 = 126311819U;

	t28 = ((x1173&(x1174^x1175))>>x1176);

	if (t28 != 10499U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1218 = UINT8_MAX;
	volatile int64_t x1219 = INT64_MAX;
	static volatile uint8_t x1220 = 2U;
	int64_t t29 = -72856722829LL;

	t29 = ((x1217&(x1218^x1219))>>x1220);

	if (t29 != 1449088LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1237 = 14789549;
	int8_t x1238 = -1;
	static uint16_t x1240 = 5U;
	volatile int32_t t30 = -635173455;

	t30 = ((x1237&(x1238^x1239))>>x1240);

	if (t30 != 263512) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x1245 = -205;
	volatile uint32_t x1247 = 6749338U;
	int16_t x1248 = 17;

	t31 = ((x1245&(x1246^x1247))>>x1248);

	if (t31 != 32716U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1249 = 97717736168059LLU;
	volatile int8_t x1250 = INT8_MIN;
	int16_t x1251 = INT16_MAX;
	static uint64_t t32 = 4072633084226428730LLU;

	t32 = ((x1249&(x1250^x1251))>>x1252);

	if (t32 != 11928434588LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1413 = 450592873424858LLU;
	static uint64_t x1414 = UINT64_MAX;
	int8_t x1415 = -1;
	int64_t x1416 = 1LL;
	volatile uint64_t t33 = 15LLU;

	t33 = ((x1413&(x1414^x1415))>>x1416);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1446 = INT32_MIN;
	static uint8_t x1448 = 4U;
	int64_t t34 = -194501LL;

	t34 = ((x1445&(x1446^x1447))>>x1448);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1449 = INT8_MAX;
	int8_t x1450 = INT8_MIN;
	volatile int64_t t35 = 17LL;

	t35 = ((x1449&(x1450^x1451))>>x1452);

	if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x1474 = 97U;
	volatile int8_t x1476 = 31;
	volatile int32_t t36 = 783669685;

	t36 = ((x1473&(x1474^x1475))>>x1476);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1489 = 24;
	int8_t x1490 = -1;
	int16_t x1491 = 0;
	static int32_t x1492 = 1;
	int32_t t37 = 125;

	t37 = ((x1489&(x1490^x1491))>>x1492);

	if (t37 != 12) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x1521 = INT32_MIN;
	uint16_t x1523 = 7061U;
	static uint16_t x1524 = 12U;
	static int32_t t38 = 81198;

	t38 = ((x1521&(x1522^x1523))>>x1524);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1533 = -1437;
	volatile uint16_t x1534 = 1054U;
	uint64_t x1535 = 413578397460LLU;
	uint64_t t39 = 31611664847443LLU;

	t39 = ((x1533&(x1534^x1535))>>x1536);

	if (t39 != 103394599040LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1585 = INT16_MIN;
	int8_t x1586 = 0;
	static uint32_t x1587 = 102U;
	int8_t x1588 = 3;
	static uint32_t t40 = 17117226U;

	t40 = ((x1585&(x1586^x1587))>>x1588);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1601 = -1;
	int16_t x1602 = INT16_MIN;
	static uint32_t x1603 = 298U;
	uint32_t t41 = 6395609U;

	t41 = ((x1601&(x1602^x1603))>>x1604);

	if (t41 != 1073733706U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x1633 = -11628;
	int8_t x1634 = -1;
	int32_t x1635 = -1;
	int16_t x1636 = 15;

	t42 = ((x1633&(x1634^x1635))>>x1636);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1681 = INT8_MIN;
	uint32_t x1682 = 4920U;
	volatile int8_t x1683 = -1;
	int16_t x1684 = 24;
	uint32_t t43 = 7018728U;

	t43 = ((x1681&(x1682^x1683))>>x1684);

	if (t43 != 255U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1697 = INT16_MAX;
	int8_t x1698 = INT8_MAX;
	volatile int16_t x1699 = -1;
	uint32_t x1700 = 4U;

	t44 = ((x1697&(x1698^x1699))>>x1700);

	if (t44 != 2040) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x1741 = -1;
	static int16_t x1742 = INT16_MIN;
	int32_t x1743 = INT32_MIN;
	int32_t t45 = 2063933;

	t45 = ((x1741&(x1742^x1743))>>x1744);

	if (t45 != 67107840) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x1793 = UINT64_MAX;
	int64_t x1794 = INT64_MIN;
	static uint16_t x1795 = UINT16_MAX;

	t46 = ((x1793&(x1794^x1795))>>x1796);

	if (t46 != 18014398509482111LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x1814 = 1665065305131020720LLU;
	int32_t x1815 = 20728;
	int32_t x1816 = 1;
	static volatile uint64_t t47 = 49557621306288LLU;

	t47 = ((x1813&(x1814^x1815))>>x1816);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1877 = INT32_MAX;
	int32_t x1878 = -1;
	static volatile int8_t x1879 = INT8_MIN;
	static volatile int16_t x1880 = 1;
	volatile int32_t t48 = -3767378;

	t48 = ((x1877&(x1878^x1879))>>x1880);

	if (t48 != 63) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x1897 = UINT64_MAX;
	int64_t x1898 = -1LL;
	static int8_t x1899 = -1;
	static uint8_t x1900 = 13U;
	uint64_t t49 = 16953697445LLU;

	t49 = ((x1897&(x1898^x1899))>>x1900);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x1901 = 5180LLU;
	int64_t x1903 = -1LL;
	uint32_t x1904 = 31U;
	static uint64_t t50 = 790LLU;

	t50 = ((x1901&(x1902^x1903))>>x1904);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint8_t x1917 = 2U;
	int8_t x1918 = INT8_MIN;
	int8_t x1919 = INT8_MIN;
	uint64_t x1920 = 1LLU;
	int32_t t51 = -8113055;

	t51 = ((x1917&(x1918^x1919))>>x1920);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1933 = INT8_MAX;
	static volatile int8_t x1934 = INT8_MAX;
	static uint8_t x1936 = 1U;
	uint32_t t52 = 6U;

	t52 = ((x1933&(x1934^x1935))>>x1936);

	if (t52 != 23U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1945 = INT16_MAX;
	uint32_t x1946 = 467544417U;
	volatile int32_t x1947 = -102404095;
	volatile uint32_t t53 = 26040072U;

	t53 = ((x1945&(x1946^x1947))>>x1948);

	if (t53 != 178U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x2077 = -1;
	int64_t x2078 = 51423LL;
	int16_t x2079 = INT16_MAX;
	int8_t x2080 = 1;
	static int64_t t54 = 201947829LL;

	t54 = ((x2077&(x2078^x2079))>>x2080);

	if (t54 != 23440LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x2166 = 0;
	static uint16_t x2167 = UINT16_MAX;
	uint8_t x2168 = 1U;
	volatile int32_t t55 = -3;

	t55 = ((x2165&(x2166^x2167))>>x2168);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2170 = INT32_MIN;
	volatile uint32_t x2171 = 1944973U;
	uint16_t x2172 = 0U;
	static uint32_t t56 = 738510U;

	t56 = ((x2169&(x2170^x2171))>>x2172);

	if (t56 != 4U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x2193 = 107U;
	volatile int16_t x2194 = INT16_MIN;
	static int64_t x2195 = INT64_MAX;
	uint16_t x2196 = 0U;
	int64_t t57 = 168117295494094963LL;

	t57 = ((x2193&(x2194^x2195))>>x2196);

	if (t57 != 107LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2201 = INT8_MAX;
	int32_t x2202 = -1;
	volatile int8_t x2203 = -7;
	int16_t x2204 = 5;
	int32_t t58 = -35;

	t58 = ((x2201&(x2202^x2203))>>x2204);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x2249 = INT16_MIN;
	volatile uint8_t x2250 = 96U;
	volatile int32_t x2251 = INT32_MAX;
	uint8_t x2252 = 2U;
	volatile int32_t t59 = -7362;

	t59 = ((x2249&(x2250^x2251))>>x2252);

	if (t59 != 536862720) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x2253 = -1419073LL;
	int64_t x2254 = INT64_MIN;
	uint64_t x2255 = UINT64_MAX;
	int8_t x2256 = 36;
	volatile uint64_t t60 = 10LLU;

	t60 = ((x2253&(x2254^x2255))>>x2256);

	if (t60 != 134217727LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x2261 = 893535253LL;
	volatile uint8_t x2264 = 10U;
	volatile int64_t t61 = -203593041LL;

	t61 = ((x2261&(x2262^x2263))>>x2264);

	if (t61 != 16512LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x2301 = 50U;
	int32_t x2303 = INT32_MIN;

	t62 = ((x2301&(x2302^x2303))>>x2304);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x2345 = 1LLU;
	static int8_t x2346 = -1;
	int16_t x2347 = -3;
	int32_t x2348 = 56;

	t63 = ((x2345&(x2346^x2347))>>x2348);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x2370 = -12052LL;
	int8_t x2371 = INT8_MAX;
	int8_t x2372 = 4;
	int64_t t64 = 8034898894635797LL;

	t64 = ((x2369&(x2370^x2371))>>x2372);

	if (t64 != 576460752303422729LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x2389 = INT64_MIN;
	int16_t x2390 = INT16_MIN;
	static uint64_t x2391 = 3203204175435766LLU;
	uint8_t x2392 = 27U;
	volatile uint64_t t65 = 989765865787443596LLU;

	t65 = ((x2389&(x2390^x2391))>>x2392);

	if (t65 != 68719476736LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x2421 = 334270001U;
	int32_t x2422 = 104;
	static uint64_t x2423 = UINT64_MAX;
	volatile uint64_t t66 = 32778919596LLU;

	t66 = ((x2421&(x2422^x2423))>>x2424);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x2457 = 204;
	static int32_t x2458 = 50312015;
	int8_t x2459 = INT8_MIN;
	volatile int32_t t67 = -514327;

	t67 = ((x2457&(x2458^x2459))>>x2460);

	if (t67 != 204) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x2473 = 63U;
	int16_t x2475 = -1;
	volatile uint32_t x2476 = 16U;
	int64_t t68 = -2370550105077381LL;

	t68 = ((x2473&(x2474^x2475))>>x2476);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x2501 = INT64_MIN;
	static int32_t x2502 = INT32_MIN;
	volatile int64_t x2503 = -50030LL;
	static uint16_t x2504 = 7U;
	int64_t t69 = 11LL;

	t69 = ((x2501&(x2502^x2503))>>x2504);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x2541 = INT32_MAX;
	static volatile int8_t x2542 = INT8_MIN;
	int64_t x2543 = INT64_MAX;
	volatile int64_t t70 = -248582LL;

	t70 = ((x2541&(x2542^x2543))>>x2544);

	if (t70 != 127LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x2569 = INT8_MAX;
	uint32_t x2570 = UINT32_MAX;
	static uint32_t x2571 = 1801500970U;
	uint32_t x2572 = 2U;
	uint32_t t71 = 1268022U;

	t71 = ((x2569&(x2570^x2571))>>x2572);

	if (t71 != 21U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2577 = 17;
	static int64_t x2579 = INT64_MIN;
	uint8_t x2580 = 2U;

	t72 = ((x2577&(x2578^x2579))>>x2580);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x2581 = UINT64_MAX;
	int32_t x2582 = INT32_MIN;
	int8_t x2583 = INT8_MAX;
	uint32_t x2584 = 48U;

	t73 = ((x2581&(x2582^x2583))>>x2584);

	if (t73 != 65535LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x2629 = -1;
	static volatile int16_t x2630 = INT16_MIN;
	static int16_t x2632 = 4;
	int32_t t74 = -18460;

	t74 = ((x2629&(x2630^x2631))>>x2632);

	if (t74 != 12398) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x2637 = INT32_MAX;
	volatile uint64_t x2638 = 1257LLU;
	int64_t x2639 = INT64_MIN;
	uint8_t x2640 = 1U;
	volatile uint64_t t75 = 154992817LLU;

	t75 = ((x2637&(x2638^x2639))>>x2640);

	if (t75 != 628LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x2657 = 41;
	int16_t x2658 = -1;
	uint16_t x2660 = 1U;
	int32_t t76 = 8;

	t76 = ((x2657&(x2658^x2659))>>x2660);

	if (t76 != 20) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x2701 = 3U;
	volatile uint32_t x2703 = 4U;
	static int8_t x2704 = 51;
	static uint64_t t77 = 1619082482456LLU;

	t77 = ((x2701&(x2702^x2703))>>x2704);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x2705 = INT8_MAX;
	uint8_t x2706 = 3U;
	static int8_t x2708 = 12;
	static uint32_t t78 = 300433U;

	t78 = ((x2705&(x2706^x2707))>>x2708);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x2725 = 1241U;
	volatile uint32_t x2726 = UINT32_MAX;
	int16_t x2727 = 1138;
	volatile uint32_t x2728 = 2U;
	uint32_t t79 = 15783564U;

	t79 = ((x2725&(x2726^x2727))>>x2728);

	if (t79 != 34U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x2797 = INT8_MAX;
	static int8_t x2799 = INT8_MIN;
	uint16_t x2800 = 5U;
	volatile uint32_t t80 = 189988U;

	t80 = ((x2797&(x2798^x2799))>>x2800);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x2802 = 1;
	uint32_t x2803 = UINT32_MAX;
	uint8_t x2804 = 1U;
	volatile int64_t t81 = 13067LL;

	t81 = ((x2801&(x2802^x2803))>>x2804);

	if (t81 != 2147483647LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x2821 = UINT8_MAX;
	static volatile int8_t x2822 = INT8_MIN;
	uint16_t x2823 = 32247U;

	t82 = ((x2821&(x2822^x2823))>>x2824);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x2869 = -1;
	volatile int8_t x2870 = INT8_MIN;
	int16_t x2871 = -1;
	static uint8_t x2872 = 1U;
	volatile int32_t t83 = -3884478;

	t83 = ((x2869&(x2870^x2871))>>x2872);

	if (t83 != 63) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x2893 = 0U;
	int64_t x2894 = -1LL;
	uint16_t x2896 = 0U;
	volatile int64_t t84 = 43773236LL;

	t84 = ((x2893&(x2894^x2895))>>x2896);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x2917 = 272669U;
	int64_t x2919 = -1LL;
	static uint8_t x2920 = 41U;
	static volatile int64_t t85 = 108217823967LL;

	t85 = ((x2917&(x2918^x2919))>>x2920);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x2942 = UINT8_MAX;
	volatile uint64_t x2943 = 2599479316317632LLU;
	static uint8_t x2944 = 2U;
	static volatile uint64_t t86 = 2247625364563639LLU;

	t86 = ((x2941&(x2942^x2943))>>x2944);

	if (t86 != 4LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x3041 = INT64_MIN;
	int32_t x3042 = -4694728;
	int8_t x3043 = INT8_MIN;
	uint8_t x3044 = 3U;
	volatile int64_t t87 = 249973487818281LL;

	t87 = ((x3041&(x3042^x3043))>>x3044);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x3077 = INT64_MAX;
	static volatile uint64_t x3079 = 326LLU;
	static int16_t x3080 = 0;
	static volatile uint64_t t88 = 6758680016738458872LLU;

	t88 = ((x3077&(x3078^x3079))>>x3080);

	if (t88 != 9223372036854775481LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x3082 = INT64_MIN;
	int16_t x3083 = INT16_MAX;
	volatile uint16_t x3084 = 13U;
	static uint64_t t89 = 10275LLU;

	t89 = ((x3081&(x3082^x3083))>>x3084);

	if (t89 != 1125899906842627LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x3125 = UINT16_MAX;
	int8_t x3126 = -1;
	uint64_t x3127 = 1374LLU;
	int16_t x3128 = 2;
	uint64_t t90 = 39294884312132970LLU;

	t90 = ((x3125&(x3126^x3127))>>x3128);

	if (t90 != 16040LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x3133 = UINT64_MAX;
	int64_t x3135 = INT64_MIN;
	uint8_t x3136 = 1U;
	static volatile uint64_t t91 = 1614848LLU;

	t91 = ((x3133&(x3134^x3135))>>x3136);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x3149 = 73542U;
	int64_t x3150 = INT64_MIN;
	uint8_t x3151 = 78U;
	volatile uint8_t x3152 = 1U;
	volatile int64_t t92 = 64961545696170LL;

	t92 = ((x3149&(x3150^x3151))>>x3152);

	if (t92 != 35LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x3213 = UINT16_MAX;
	int8_t x3215 = -2;
	int8_t x3216 = 1;
	volatile int32_t t93 = -15235;

	t93 = ((x3213&(x3214^x3215))>>x3216);

	if (t93 != 63) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x3261 = INT16_MAX;
	uint16_t x3262 = 52U;
	int8_t x3264 = 28;
	int32_t t94 = -4300370;

	t94 = ((x3261&(x3262^x3263))>>x3264);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x3301 = UINT32_MAX;
	static int32_t x3302 = INT32_MIN;
	int16_t x3303 = 2;
	uint8_t x3304 = 1U;
	volatile uint32_t t95 = 27089U;

	t95 = ((x3301&(x3302^x3303))>>x3304);

	if (t95 != 1073741825U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x3305 = 318U;
	int16_t x3306 = INT16_MAX;
	uint16_t x3307 = 2U;
	uint8_t x3308 = 7U;

	t96 = ((x3305&(x3306^x3307))>>x3308);

	if (t96 != 2U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x3338 = 2402U;
	int8_t x3339 = INT8_MIN;
	volatile uint16_t x3340 = 3U;
	uint32_t t97 = 4U;

	t97 = ((x3337&(x3338^x3339))>>x3340);

	if (t97 != 872524U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x3461 = -13729811;
	static int8_t x3462 = -1;
	int64_t x3463 = -751044372LL;
	volatile uint32_t x3464 = 6U;

	t98 = ((x3461&(x3462^x3463))>>x3464);

	if (t98 != 11538460LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x3521 = INT32_MIN;
	int64_t x3522 = INT64_MIN;
	uint8_t x3524 = 28U;
	int64_t t99 = -1495137717LL;

	t99 = ((x3521&(x3522^x3523))>>x3524);

	if (t99 != 34359738360LL) { NG(); } else { ; }
	
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

