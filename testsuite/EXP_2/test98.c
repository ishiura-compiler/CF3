#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x90 = UINT8_MAX;
int8_t x92 = 2;
volatile int8_t x198 = -1;
int32_t x325 = INT32_MAX;
int32_t x326 = -1;
volatile int32_t t5 = -832;
int16_t x466 = INT16_MAX;
volatile uint8_t x510 = 0U;
int32_t x669 = -4335;
volatile uint16_t x670 = 2U;
uint8_t x672 = 1U;
int64_t x754 = INT64_MIN;
int8_t x792 = 1;
static volatile int16_t x898 = INT16_MAX;
int32_t x899 = -1;
int32_t x929 = INT32_MIN;
uint8_t x1029 = 16U;
uint16_t x1030 = UINT16_MAX;
int16_t x1037 = -4872;
uint64_t x1041 = UINT64_MAX;
static int16_t x1086 = INT16_MIN;
static int16_t x1168 = 6;
volatile int64_t x1237 = INT64_MIN;
int32_t t28 = 63637692;
uint64_t x1266 = 3LLU;
uint8_t x1268 = 3U;
int16_t x1295 = INT16_MIN;
static int8_t x1296 = 5;
int32_t t30 = 2405389;
int16_t x1323 = -1;
int32_t t31 = -12607;
static uint64_t x1420 = 6LLU;
int64_t x1587 = -1LL;
static uint8_t x1627 = UINT8_MAX;
int32_t x1686 = -1;
uint16_t x1687 = UINT16_MAX;
int16_t x1688 = 5;
int32_t t39 = -7838;
volatile uint8_t x1744 = 5U;
volatile int32_t t41 = 1;
int32_t t44 = -412183;
int16_t x1938 = -103;
volatile int16_t x1940 = 0;
int32_t t45 = -247908963;
volatile uint8_t x1942 = 112U;
int32_t t46 = -778748282;
volatile int16_t x2075 = INT16_MIN;
int16_t x2107 = INT16_MIN;
uint16_t x2140 = 13U;
uint16_t x2174 = 2U;
int32_t x2218 = INT32_MIN;
int8_t x2260 = 1;
uint32_t x2280 = 0U;
volatile int32_t x2321 = INT32_MIN;
int32_t x2351 = INT32_MIN;
static int64_t x2352 = 0LL;
int16_t x2442 = -6;
int8_t x2445 = INT8_MAX;
volatile int32_t t66 = 319;
volatile int16_t x2449 = INT16_MAX;
static volatile int32_t x2451 = INT32_MIN;
uint8_t x2469 = 3U;
uint64_t x2471 = UINT64_MAX;
int32_t t68 = -64;
uint8_t x2476 = 11U;
int16_t x2527 = -1;
volatile int32_t t71 = 1535405;
int32_t x2616 = 0;
int32_t t72 = -301;
volatile int32_t x2726 = INT32_MAX;
int16_t x2765 = -1;
volatile int32_t x2767 = 10;
volatile int32_t t75 = -15769338;
int8_t x2840 = 1;
int64_t x2899 = 26275988625278LL;
uint32_t x2908 = 1U;
uint32_t x2968 = 14U;
static int8_t x3013 = INT8_MAX;
static int64_t x3037 = INT64_MAX;
int8_t x3043 = 51;
int16_t x3052 = 1;
int32_t x3063 = -1;
volatile int16_t x3064 = 0;
uint8_t x3220 = 0U;
static uint64_t x3226 = UINT64_MAX;
volatile int8_t x3227 = INT8_MAX;
int8_t x3228 = 0;
static int16_t x3314 = 116;
uint8_t x3316 = 1U;
volatile int32_t t90 = 203963749;
int32_t x3379 = -227172;
uint64_t x3411 = UINT64_MAX;
volatile int16_t x3474 = INT16_MAX;
static int32_t t93 = 8025391;
uint32_t x3629 = UINT32_MAX;
int16_t x3630 = -1;
volatile uint8_t x3631 = 43U;
uint16_t x3672 = 10U;
static int32_t t99 = 4519;


void f0(void) {
	uint8_t x89 = UINT8_MAX;
	uint32_t x91 = 2U;
	int32_t t0 = 0;

	t0 = ((x89==(x90+x91))>>x92);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x197 = UINT32_MAX;
	int16_t x199 = -9521;
	int8_t x200 = 4;
	int32_t t1 = -649562;

	t1 = ((x197==(x198+x199))>>x200);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x241 = INT32_MIN;
	static volatile uint64_t x242 = 4563207854979307514LLU;
	int64_t x243 = INT64_MAX;
	uint8_t x244 = 9U;
	volatile int32_t t2 = 236436714;

	t2 = ((x241==(x242+x243))>>x244);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x301 = 51U;
	static uint8_t x302 = UINT8_MAX;
	int8_t x303 = INT8_MIN;
	int16_t x304 = 0;
	volatile int32_t t3 = 334628;

	t3 = ((x301==(x302+x303))>>x304);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x305 = INT16_MIN;
	volatile int16_t x306 = 1;
	int64_t x307 = -1LL;
	volatile int64_t x308 = 0LL;
	int32_t t4 = 13581;

	t4 = ((x305==(x306+x307))>>x308);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x327 = -1LL;
	uint32_t x328 = 0U;

	t5 = ((x325==(x326+x327))>>x328);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x465 = INT64_MIN;
	int64_t x467 = -1LL;
	static volatile int16_t x468 = 6;
	int32_t t6 = -28183;

	t6 = ((x465==(x466+x467))>>x468);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x469 = INT64_MIN;
	int8_t x470 = 2;
	volatile int16_t x471 = -148;
	static int8_t x472 = 11;
	int32_t t7 = 2945;

	t7 = ((x469==(x470+x471))>>x472);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x509 = 457U;
	int32_t x511 = -1;
	uint32_t x512 = 0U;
	static int32_t t8 = -267;

	t8 = ((x509==(x510+x511))>>x512);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x525 = 1U;
	int16_t x526 = INT16_MIN;
	uint8_t x527 = UINT8_MAX;
	volatile int32_t x528 = 2;
	int32_t t9 = -34;

	t9 = ((x525==(x526+x527))>>x528);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x633 = INT16_MIN;
	volatile uint16_t x634 = 4U;
	uint64_t x635 = 677367836571121809LLU;
	static uint8_t x636 = 8U;
	int32_t t10 = 12689;

	t10 = ((x633==(x634+x635))>>x636);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x657 = 239695U;
	static uint8_t x658 = 25U;
	volatile int16_t x659 = -1;
	uint8_t x660 = 3U;
	int32_t t11 = 1;

	t11 = ((x657==(x658+x659))>>x660);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x665 = -21227764;
	static volatile uint16_t x666 = 170U;
	volatile int64_t x667 = INT64_MIN;
	volatile int16_t x668 = 30;
	volatile int32_t t12 = -4198297;

	t12 = ((x665==(x666+x667))>>x668);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x671 = 12U;
	volatile int32_t t13 = -212;

	t13 = ((x669==(x670+x671))>>x672);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x753 = 44U;
	uint64_t x755 = 1416499426338212LLU;
	uint64_t x756 = 3LLU;
	int32_t t14 = -8196;

	t14 = ((x753==(x754+x755))>>x756);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x765 = -466;
	static uint8_t x766 = UINT8_MAX;
	static int64_t x767 = 39361876106738744LL;
	int8_t x768 = 1;
	int32_t t15 = 88;

	t15 = ((x765==(x766+x767))>>x768);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x789 = -3445;
	volatile uint16_t x790 = 30U;
	int8_t x791 = 0;
	volatile int32_t t16 = 1859;

	t16 = ((x789==(x790+x791))>>x792);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x797 = INT16_MAX;
	static uint32_t x798 = UINT32_MAX;
	uint16_t x799 = 2718U;
	uint8_t x800 = 2U;
	volatile int32_t t17 = -3;

	t17 = ((x797==(x798+x799))>>x800);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x897 = -1;
	int32_t x900 = 1;
	int32_t t18 = 14634;

	t18 = ((x897==(x898+x899))>>x900);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x930 = INT8_MIN;
	uint32_t x931 = UINT32_MAX;
	uint8_t x932 = 7U;
	int32_t t19 = -722217;

	t19 = ((x929==(x930+x931))>>x932);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x957 = INT8_MIN;
	static int8_t x958 = INT8_MAX;
	uint64_t x959 = 2148922716319LLU;
	int8_t x960 = 0;
	volatile int32_t t20 = 1;

	t20 = ((x957==(x958+x959))>>x960);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1031 = -211501;
	uint32_t x1032 = 10U;
	int32_t t21 = -814090;

	t21 = ((x1029==(x1030+x1031))>>x1032);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1038 = UINT32_MAX;
	int8_t x1039 = INT8_MIN;
	int32_t x1040 = 0;
	static int32_t t22 = 1;

	t22 = ((x1037==(x1038+x1039))>>x1040);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x1042 = 2U;
	int16_t x1043 = INT16_MIN;
	static volatile uint8_t x1044 = 6U;
	int32_t t23 = 120153;

	t23 = ((x1041==(x1042+x1043))>>x1044);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1085 = INT64_MIN;
	static int16_t x1087 = -453;
	uint8_t x1088 = 1U;
	int32_t t24 = -31;

	t24 = ((x1085==(x1086+x1087))>>x1088);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1089 = UINT16_MAX;
	int64_t x1090 = INT64_MAX;
	int32_t x1091 = INT32_MIN;
	uint8_t x1092 = 0U;
	static volatile int32_t t25 = 4596822;

	t25 = ((x1089==(x1090+x1091))>>x1092);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1117 = INT16_MAX;
	int16_t x1118 = INT16_MAX;
	int8_t x1119 = INT8_MIN;
	static volatile int8_t x1120 = 0;
	volatile int32_t t26 = -66555298;

	t26 = ((x1117==(x1118+x1119))>>x1120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x1165 = -1;
	volatile uint8_t x1166 = UINT8_MAX;
	uint32_t x1167 = UINT32_MAX;
	static volatile int32_t t27 = -239;

	t27 = ((x1165==(x1166+x1167))>>x1168);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1238 = 780506154399609LLU;
	static volatile uint16_t x1239 = 37U;
	volatile int8_t x1240 = 1;

	t28 = ((x1237==(x1238+x1239))>>x1240);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x1265 = INT8_MIN;
	int16_t x1267 = -1747;
	int32_t t29 = 0;

	t29 = ((x1265==(x1266+x1267))>>x1268);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x1293 = INT32_MIN;
	volatile int16_t x1294 = INT16_MIN;

	t30 = ((x1293==(x1294+x1295))>>x1296);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1321 = 14593631LL;
	uint8_t x1322 = UINT8_MAX;
	uint16_t x1324 = 17U;

	t31 = ((x1321==(x1322+x1323))>>x1324);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1417 = INT16_MIN;
	volatile uint32_t x1418 = 20952882U;
	volatile int64_t x1419 = INT64_MIN;
	static int32_t t32 = -57118;

	t32 = ((x1417==(x1418+x1419))>>x1420);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1585 = INT32_MIN;
	int16_t x1586 = INT16_MIN;
	uint16_t x1588 = 4U;
	static int32_t t33 = 121;

	t33 = ((x1585==(x1586+x1587))>>x1588);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1589 = 336968379U;
	uint32_t x1590 = UINT32_MAX;
	int32_t x1591 = INT32_MIN;
	uint32_t x1592 = 3U;
	int32_t t34 = -1337;

	t34 = ((x1589==(x1590+x1591))>>x1592);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x1625 = -6;
	uint16_t x1626 = 36U;
	uint32_t x1628 = 5U;
	int32_t t35 = -56;

	t35 = ((x1625==(x1626+x1627))>>x1628);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x1629 = INT8_MIN;
	uint64_t x1630 = UINT64_MAX;
	volatile int16_t x1631 = -1;
	static uint8_t x1632 = 0U;
	volatile int32_t t36 = 9;

	t36 = ((x1629==(x1630+x1631))>>x1632);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x1677 = 78U;
	static uint8_t x1678 = UINT8_MAX;
	int64_t x1679 = -1LL;
	uint16_t x1680 = 0U;
	int32_t t37 = 688083;

	t37 = ((x1677==(x1678+x1679))>>x1680);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x1685 = INT16_MIN;
	static int32_t t38 = -109172;

	t38 = ((x1685==(x1686+x1687))>>x1688);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x1697 = 5924;
	volatile int32_t x1698 = 36;
	volatile int64_t x1699 = -1778834859460969133LL;
	uint16_t x1700 = 6U;

	t39 = ((x1697==(x1698+x1699))>>x1700);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x1741 = UINT32_MAX;
	int8_t x1742 = INT8_MIN;
	static volatile uint64_t x1743 = UINT64_MAX;
	volatile int32_t t40 = 56749143;

	t40 = ((x1741==(x1742+x1743))>>x1744);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1801 = 1U;
	int16_t x1802 = 64;
	uint16_t x1803 = 0U;
	uint64_t x1804 = 29LLU;

	t41 = ((x1801==(x1802+x1803))>>x1804);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1805 = INT64_MIN;
	static volatile int16_t x1806 = INT16_MIN;
	int32_t x1807 = 115;
	int8_t x1808 = 1;
	int32_t t42 = -5;

	t42 = ((x1805==(x1806+x1807))>>x1808);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1817 = 13416;
	volatile int16_t x1818 = INT16_MIN;
	uint8_t x1819 = 0U;
	int8_t x1820 = 0;
	static int32_t t43 = -260266825;

	t43 = ((x1817==(x1818+x1819))>>x1820);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x1921 = -121;
	int16_t x1922 = -1259;
	uint16_t x1923 = 7119U;
	uint64_t x1924 = 2LLU;

	t44 = ((x1921==(x1922+x1923))>>x1924);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1937 = INT32_MAX;
	volatile uint8_t x1939 = 49U;

	t45 = ((x1937==(x1938+x1939))>>x1940);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x1941 = 6964U;
	int64_t x1943 = INT64_MIN;
	static int8_t x1944 = 13;

	t46 = ((x1941==(x1942+x1943))>>x1944);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1969 = -1LL;
	uint64_t x1970 = 15LLU;
	int64_t x1971 = -1LL;
	static int8_t x1972 = 1;
	int32_t t47 = -1043393784;

	t47 = ((x1969==(x1970+x1971))>>x1972);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x1989 = 13710U;
	int32_t x1990 = INT32_MAX;
	int16_t x1991 = INT16_MIN;
	int8_t x1992 = 1;
	volatile int32_t t48 = -1930151;

	t48 = ((x1989==(x1990+x1991))>>x1992);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1993 = INT32_MIN;
	int32_t x1994 = -1;
	int16_t x1995 = -1;
	int8_t x1996 = 3;
	int32_t t49 = 29;

	t49 = ((x1993==(x1994+x1995))>>x1996);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x2073 = 14U;
	uint16_t x2074 = 4U;
	uint8_t x2076 = 4U;
	volatile int32_t t50 = 239779;

	t50 = ((x2073==(x2074+x2075))>>x2076);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x2105 = 15890LLU;
	int64_t x2106 = -1LL;
	static uint8_t x2108 = 0U;
	volatile int32_t t51 = -13731038;

	t51 = ((x2105==(x2106+x2107))>>x2108);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x2137 = 10775U;
	static int8_t x2138 = INT8_MAX;
	int8_t x2139 = 3;
	volatile int32_t t52 = -8;

	t52 = ((x2137==(x2138+x2139))>>x2140);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x2173 = INT64_MIN;
	volatile uint32_t x2175 = UINT32_MAX;
	uint8_t x2176 = 7U;
	volatile int32_t t53 = -1;

	t53 = ((x2173==(x2174+x2175))>>x2176);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2217 = INT8_MIN;
	uint32_t x2219 = UINT32_MAX;
	uint32_t x2220 = 13U;
	static volatile int32_t t54 = -326569;

	t54 = ((x2217==(x2218+x2219))>>x2220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x2257 = 1863401LLU;
	int32_t x2258 = INT32_MIN;
	uint16_t x2259 = UINT16_MAX;
	static volatile int32_t t55 = 6634929;

	t55 = ((x2257==(x2258+x2259))>>x2260);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x2265 = UINT8_MAX;
	static int16_t x2266 = -165;
	static int8_t x2267 = -1;
	uint8_t x2268 = 5U;
	volatile int32_t t56 = 101;

	t56 = ((x2265==(x2266+x2267))>>x2268);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2269 = 5762813208963LLU;
	int16_t x2270 = INT16_MIN;
	uint8_t x2271 = 0U;
	static int64_t x2272 = 7LL;
	int32_t t57 = 59652;

	t57 = ((x2269==(x2270+x2271))>>x2272);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x2277 = INT16_MIN;
	int8_t x2278 = -1;
	static int16_t x2279 = INT16_MAX;
	volatile int32_t t58 = 189807352;

	t58 = ((x2277==(x2278+x2279))>>x2280);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x2297 = 92988968;
	int32_t x2298 = INT32_MAX;
	static uint64_t x2299 = 39197601782468LLU;
	uint16_t x2300 = 0U;
	int32_t t59 = 111;

	t59 = ((x2297==(x2298+x2299))>>x2300);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x2322 = 32199LL;
	volatile int8_t x2323 = INT8_MIN;
	volatile int16_t x2324 = 5;
	int32_t t60 = -13839011;

	t60 = ((x2321==(x2322+x2323))>>x2324);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x2337 = -1;
	static volatile uint64_t x2338 = 1LLU;
	int64_t x2339 = 15792671241034084LL;
	static int8_t x2340 = 10;
	int32_t t61 = 40352272;

	t61 = ((x2337==(x2338+x2339))>>x2340);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x2349 = UINT64_MAX;
	int8_t x2350 = INT8_MAX;
	static volatile int32_t t62 = -264689755;

	t62 = ((x2349==(x2350+x2351))>>x2352);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x2413 = -1;
	static int16_t x2414 = 7;
	static uint32_t x2415 = 358303U;
	int8_t x2416 = 9;
	static int32_t t63 = 188;

	t63 = ((x2413==(x2414+x2415))>>x2416);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint32_t x2433 = 4987320U;
	int64_t x2434 = INT64_MAX;
	int8_t x2435 = -1;
	uint8_t x2436 = 0U;
	volatile int32_t t64 = -32;

	t64 = ((x2433==(x2434+x2435))>>x2436);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x2441 = -1;
	uint8_t x2443 = UINT8_MAX;
	volatile int16_t x2444 = 0;
	volatile int32_t t65 = 37;

	t65 = ((x2441==(x2442+x2443))>>x2444);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x2446 = INT32_MIN;
	volatile int8_t x2447 = 34;
	static uint32_t x2448 = 1U;

	t66 = ((x2445==(x2446+x2447))>>x2448);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x2450 = 1553875505U;
	int64_t x2452 = 6LL;
	volatile int32_t t67 = -43815360;

	t67 = ((x2449==(x2450+x2451))>>x2452);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x2470 = -1;
	uint8_t x2472 = 7U;

	t68 = ((x2469==(x2470+x2471))>>x2472);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x2473 = -1;
	uint64_t x2474 = 112244596LLU;
	int32_t x2475 = -50079;
	static int32_t t69 = 1439786;

	t69 = ((x2473==(x2474+x2475))>>x2476);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x2525 = INT8_MIN;
	static int64_t x2526 = 688524624755337079LL;
	static volatile uint64_t x2528 = 8LLU;
	int32_t t70 = -9;

	t70 = ((x2525==(x2526+x2527))>>x2528);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x2609 = 24038U;
	static volatile int16_t x2610 = INT16_MAX;
	static uint8_t x2611 = UINT8_MAX;
	volatile uint8_t x2612 = 5U;

	t71 = ((x2609==(x2610+x2611))>>x2612);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x2613 = UINT64_MAX;
	uint64_t x2614 = 4248547LLU;
	static volatile int16_t x2615 = -244;

	t72 = ((x2613==(x2614+x2615))>>x2616);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x2617 = -472427;
	int64_t x2618 = INT64_MIN;
	volatile uint8_t x2619 = 1U;
	uint32_t x2620 = 0U;
	int32_t t73 = -1555051;

	t73 = ((x2617==(x2618+x2619))>>x2620);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x2725 = UINT64_MAX;
	static volatile int32_t x2727 = -604747;
	uint8_t x2728 = 16U;
	volatile int32_t t74 = -466;

	t74 = ((x2725==(x2726+x2727))>>x2728);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x2766 = -2886569293LL;
	static uint8_t x2768 = 3U;

	t75 = ((x2765==(x2766+x2767))>>x2768);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x2789 = INT64_MAX;
	int16_t x2790 = -1;
	uint32_t x2791 = 23670U;
	int8_t x2792 = 0;
	volatile int32_t t76 = -5435664;

	t76 = ((x2789==(x2790+x2791))>>x2792);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x2801 = 72172U;
	int32_t x2802 = 18700;
	uint64_t x2803 = 2929207068114504LLU;
	uint64_t x2804 = 9LLU;
	volatile int32_t t77 = 19865;

	t77 = ((x2801==(x2802+x2803))>>x2804);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x2837 = 6308U;
	int16_t x2838 = INT16_MAX;
	int32_t x2839 = INT32_MIN;
	volatile int32_t t78 = -72;

	t78 = ((x2837==(x2838+x2839))>>x2840);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x2897 = INT32_MIN;
	uint16_t x2898 = 1195U;
	uint32_t x2900 = 6U;
	volatile int32_t t79 = 3;

	t79 = ((x2897==(x2898+x2899))>>x2900);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x2905 = 84U;
	int64_t x2906 = -1LL;
	int8_t x2907 = INT8_MAX;
	volatile int32_t t80 = 139301632;

	t80 = ((x2905==(x2906+x2907))>>x2908);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x2965 = -25;
	int32_t x2966 = -103501084;
	static int32_t x2967 = INT32_MAX;
	volatile int32_t t81 = -258007;

	t81 = ((x2965==(x2966+x2967))>>x2968);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x3014 = UINT16_MAX;
	uint8_t x3015 = UINT8_MAX;
	volatile uint32_t x3016 = 6U;
	volatile int32_t t82 = 35;

	t82 = ((x3013==(x3014+x3015))>>x3016);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x3038 = INT8_MAX;
	volatile int8_t x3039 = -6;
	int32_t x3040 = 0;
	int32_t t83 = -679;

	t83 = ((x3037==(x3038+x3039))>>x3040);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x3041 = 0;
	uint8_t x3042 = 6U;
	volatile int8_t x3044 = 31;
	volatile int32_t t84 = -14392848;

	t84 = ((x3041==(x3042+x3043))>>x3044);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x3049 = INT64_MIN;
	static volatile uint32_t x3050 = 9231U;
	int16_t x3051 = INT16_MAX;
	int32_t t85 = 1067463928;

	t85 = ((x3049==(x3050+x3051))>>x3052);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x3061 = 74U;
	int8_t x3062 = INT8_MIN;
	int32_t t86 = -110267;

	t86 = ((x3061==(x3062+x3063))>>x3064);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x3149 = 1;
	int64_t x3150 = 547LL;
	int16_t x3151 = INT16_MIN;
	uint8_t x3152 = 1U;
	volatile int32_t t87 = -88988121;

	t87 = ((x3149==(x3150+x3151))>>x3152);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x3217 = 9799394LLU;
	int32_t x3218 = -1;
	static volatile int64_t x3219 = -1LL;
	volatile int32_t t88 = -23978;

	t88 = ((x3217==(x3218+x3219))>>x3220);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x3225 = INT64_MIN;
	volatile int32_t t89 = 3;

	t89 = ((x3225==(x3226+x3227))>>x3228);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x3313 = INT16_MIN;
	uint8_t x3315 = UINT8_MAX;

	t90 = ((x3313==(x3314+x3315))>>x3316);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x3377 = UINT8_MAX;
	int16_t x3378 = INT16_MAX;
	uint32_t x3380 = 0U;
	static volatile int32_t t91 = -193771797;

	t91 = ((x3377==(x3378+x3379))>>x3380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int32_t x3409 = 13029435;
	uint64_t x3410 = 5LLU;
	uint8_t x3412 = 0U;
	volatile int32_t t92 = -1;

	t92 = ((x3409==(x3410+x3411))>>x3412);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x3473 = -1LL;
	int16_t x3475 = 63;
	int8_t x3476 = 0;

	t93 = ((x3473==(x3474+x3475))>>x3476);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint16_t x3509 = 14U;
	uint32_t x3510 = 84410013U;
	static uint16_t x3511 = 0U;
	uint8_t x3512 = 1U;
	static volatile int32_t t94 = 147;

	t94 = ((x3509==(x3510+x3511))>>x3512);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x3632 = 13;
	volatile int32_t t95 = -185981410;

	t95 = ((x3629==(x3630+x3631))>>x3632);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x3633 = 1;
	volatile uint8_t x3634 = 7U;
	uint8_t x3635 = UINT8_MAX;
	int32_t x3636 = 3;
	int32_t t96 = -5;

	t96 = ((x3633==(x3634+x3635))>>x3636);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x3665 = -1;
	int8_t x3666 = -1;
	int8_t x3667 = 0;
	int8_t x3668 = 1;
	volatile int32_t t97 = -1844153;

	t97 = ((x3665==(x3666+x3667))>>x3668);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x3669 = 3U;
	int64_t x3670 = INT64_MAX;
	int8_t x3671 = -12;
	volatile int32_t t98 = 148;

	t98 = ((x3669==(x3670+x3671))>>x3672);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x3789 = 733527736U;
	volatile int64_t x3790 = INT64_MIN;
	volatile uint64_t x3791 = 22LLU;
	uint8_t x3792 = 1U;

	t99 = ((x3789==(x3790+x3791))>>x3792);

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

