#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x59 = INT8_MIN;
uint16_t x140 = 798U;
volatile uint8_t x142 = 4U;
volatile int64_t t3 = -256LL;
int64_t x212 = INT64_MAX;
uint16_t x241 = 1U;
int32_t x321 = INT32_MAX;
static uint16_t x323 = 278U;
volatile int64_t x351 = INT64_MIN;
uint16_t x550 = 14U;
uint64_t t12 = 60550919767026590LLU;
int64_t x559 = INT64_MIN;
int16_t x602 = 1;
uint16_t x726 = 17U;
int64_t x749 = 300677867611594LL;
int64_t x873 = 20120865965LL;
static volatile uint64_t t22 = 105495624726LLU;
uint8_t x1014 = 13U;
static uint32_t x1083 = UINT32_MAX;
volatile uint8_t x1122 = 19U;
uint8_t x1222 = 18U;
int16_t x1223 = INT16_MAX;
int64_t x1269 = INT64_MAX;
volatile uint8_t x1272 = 20U;
uint8_t x1302 = 1U;
int64_t x1304 = INT64_MIN;
uint8_t x1366 = 17U;
int8_t x1368 = INT8_MIN;
volatile uint8_t x1370 = 7U;
int64_t t34 = -770250459391624LL;
uint8_t x1380 = 34U;
int32_t x1552 = INT32_MIN;
uint64_t t36 = 673854304488968LLU;
int8_t x1647 = -2;
uint64_t x1649 = UINT64_MAX;
static uint16_t x1657 = 1226U;
static int16_t x1800 = INT16_MIN;
int32_t x1820 = INT32_MAX;
volatile int32_t t43 = -213;
int16_t x1871 = INT16_MIN;
static int32_t x1901 = 98;
volatile uint16_t x1954 = 21U;
static uint64_t t46 = 505107LLU;
int64_t x1967 = -1LL;
static uint32_t t48 = 3097U;
int16_t x2039 = -18;
int32_t x2105 = 0;
volatile uint64_t t52 = 1344279837LLU;
uint8_t x2126 = 4U;
uint8_t x2138 = 0U;
uint8_t x2250 = 15U;
static int32_t x2424 = 1;
volatile int64_t t59 = 1180321LL;
int8_t x2451 = INT8_MIN;
int16_t x2538 = 0;
int16_t x2577 = 0;
uint64_t x2580 = 1290LLU;
uint32_t x2645 = 442108U;
uint64_t t66 = 19726927391LLU;
uint16_t x2726 = 0U;
uint64_t x2727 = 7140673LLU;
volatile int8_t x2774 = 8;
int64_t x2775 = -351429409622492872LL;
volatile int64_t t70 = -2LL;
int64_t x2807 = -19284504835LL;
volatile int64_t t71 = 13026778599LL;
static volatile int32_t x2831 = INT32_MAX;
int64_t x2885 = INT64_MAX;
static int8_t x2898 = 0;
int64_t x2899 = INT64_MAX;
volatile int8_t x2900 = INT8_MAX;
volatile uint32_t x2917 = UINT32_MAX;
uint32_t x2919 = UINT32_MAX;
volatile int64_t t76 = 4018583031822LL;
uint8_t x3210 = 49U;
uint8_t x3250 = 5U;
static volatile int8_t x3261 = 7;
uint16_t x3264 = 1U;
volatile uint64_t t80 = 328322004085LLU;
volatile uint64_t x3377 = 228303667558010549LLU;
uint16_t x3378 = 59U;
uint8_t x3380 = UINT8_MAX;
int64_t x3692 = INT64_MIN;
int8_t x3941 = 1;
int64_t x3942 = 8LL;
volatile int64_t t92 = 2214488154774321LL;
int64_t x4060 = INT64_MIN;
uint64_t t94 = 29732233666LLU;
uint16_t x4204 = 2U;
uint64_t t96 = 8093991324LLU;
volatile uint8_t x4302 = 45U;
volatile uint64_t t98 = 24LLU;


void f0(void) {
	int8_t x57 = 1;
	static volatile int8_t x58 = 19;
	volatile int64_t x60 = INT64_MAX;
	volatile int64_t t0 = -15872LL;

	t0 = (((x57>>x58)/x59)%x60);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x77 = INT8_MAX;
	static int8_t x78 = 5;
	static int16_t x79 = -7400;
	uint16_t x80 = UINT16_MAX;
	static volatile int32_t t1 = -47479403;

	t1 = (((x77>>x78)/x79)%x80);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x137 = 5;
	int32_t x138 = 6;
	uint16_t x139 = 1140U;
	volatile int32_t t2 = 24894236;

	t2 = (((x137>>x138)/x139)%x140);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x141 = 1;
	volatile int64_t x143 = INT64_MIN;
	int64_t x144 = INT64_MAX;

	t3 = (((x141>>x142)/x143)%x144);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x209 = 4478475559469973LL;
	uint8_t x210 = 1U;
	volatile int64_t x211 = INT64_MIN;
	volatile int64_t t4 = -263277LL;

	t4 = (((x209>>x210)/x211)%x212);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x242 = 0U;
	uint16_t x243 = UINT16_MAX;
	static int32_t x244 = -981969;
	int32_t t5 = 0;

	t5 = (((x241>>x242)/x243)%x244);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x293 = UINT8_MAX;
	int16_t x294 = 1;
	int8_t x295 = INT8_MIN;
	uint32_t x296 = 14U;
	uint32_t t6 = 2401U;

	t6 = (((x293>>x294)/x295)%x296);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x313 = INT8_MAX;
	volatile uint32_t x314 = 0U;
	int64_t x315 = -1LL;
	int64_t x316 = INT64_MIN;
	static volatile int64_t t7 = -38068649LL;

	t7 = (((x313>>x314)/x315)%x316);

	if (t7 != -127LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint8_t x322 = 1U;
	int64_t x324 = INT64_MIN;
	int64_t t8 = 11337LL;

	t8 = (((x321>>x322)/x323)%x324);

	if (t8 != 3862380LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x349 = 1367236904721125380LL;
	volatile int8_t x350 = 61;
	volatile uint64_t x352 = 6933982487038186LLU;
	uint64_t t9 = 4094LLU;

	t9 = (((x349>>x350)/x351)%x352);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x361 = 6544931U;
	static uint16_t x362 = 1U;
	static uint32_t x363 = UINT32_MAX;
	uint32_t x364 = UINT32_MAX;
	static volatile uint32_t t10 = 558U;

	t10 = (((x361>>x362)/x363)%x364);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x501 = INT8_MAX;
	uint16_t x502 = 10U;
	int32_t x503 = INT32_MAX;
	int16_t x504 = INT16_MAX;
	static volatile int32_t t11 = 4004;

	t11 = (((x501>>x502)/x503)%x504);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x549 = 2LL;
	int32_t x551 = INT32_MIN;
	uint64_t x552 = UINT64_MAX;

	t12 = (((x549>>x550)/x551)%x552);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x557 = 99U;
	static uint8_t x558 = 1U;
	int16_t x560 = INT16_MIN;
	int64_t t13 = -47892LL;

	t13 = (((x557>>x558)/x559)%x560);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x569 = 11769141;
	int16_t x570 = 3;
	uint32_t x571 = UINT32_MAX;
	int64_t x572 = -1858LL;
	volatile int64_t t14 = 8007311676658LL;

	t14 = (((x569>>x570)/x571)%x572);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x593 = INT16_MAX;
	static int64_t x594 = 0LL;
	static int32_t x595 = INT32_MIN;
	int16_t x596 = 14160;
	volatile int32_t t15 = -90109;

	t15 = (((x593>>x594)/x595)%x596);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x601 = 27U;
	uint32_t x603 = 546743923U;
	uint8_t x604 = 70U;
	volatile uint32_t t16 = 98340025U;

	t16 = (((x601>>x602)/x603)%x604);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x613 = 342989331284623778LLU;
	uint8_t x614 = 1U;
	uint16_t x615 = 589U;
	static uint64_t x616 = 3950LLU;
	uint64_t t17 = 1064547205233342458LLU;

	t17 = (((x613>>x614)/x615)%x616);

	if (t17 != 151LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x725 = 1264440LLU;
	int64_t x727 = INT64_MIN;
	static uint8_t x728 = UINT8_MAX;
	uint64_t t18 = 4LLU;

	t18 = (((x725>>x726)/x727)%x728);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x750 = 2U;
	int64_t x751 = INT64_MIN;
	static volatile int32_t x752 = INT32_MAX;
	volatile int64_t t19 = 845079580100337606LL;

	t19 = (((x749>>x750)/x751)%x752);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x865 = 404;
	int8_t x866 = 5;
	int32_t x867 = INT32_MIN;
	int32_t x868 = -1;
	int32_t t20 = 3977;

	t20 = (((x865>>x866)/x867)%x868);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x874 = 5;
	static int16_t x875 = -1;
	static int8_t x876 = -6;
	int64_t t21 = 61774807492LL;

	t21 = (((x873>>x874)/x875)%x876);

	if (t21 != -5LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x881 = UINT16_MAX;
	int8_t x882 = 0;
	int8_t x883 = INT8_MIN;
	uint64_t x884 = 25LLU;

	t22 = (((x881>>x882)/x883)%x884);

	if (t22 != 5LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x937 = INT32_MAX;
	uint8_t x938 = 13U;
	volatile int8_t x939 = 17;
	int32_t x940 = -122785223;
	int32_t t23 = -734732;

	t23 = (((x937>>x938)/x939)%x940);

	if (t23 != 15420) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x949 = UINT32_MAX;
	static uint64_t x950 = 4LLU;
	static volatile int16_t x951 = INT16_MIN;
	static int32_t x952 = -1470684;
	uint32_t t24 = 406616U;

	t24 = (((x949>>x950)/x951)%x952);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x1013 = UINT16_MAX;
	uint32_t x1015 = 12875U;
	volatile uint8_t x1016 = UINT8_MAX;
	volatile uint32_t t25 = 662464U;

	t25 = (((x1013>>x1014)/x1015)%x1016);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1053 = 1541U;
	volatile uint8_t x1054 = 0U;
	static volatile int8_t x1055 = INT8_MIN;
	volatile int64_t x1056 = INT64_MIN;
	volatile int64_t t26 = 11995227490383787LL;

	t26 = (((x1053>>x1054)/x1055)%x1056);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x1077 = 2082565U;
	int8_t x1078 = 1;
	static int8_t x1079 = 26;
	static int16_t x1080 = -402;
	uint32_t t27 = 3U;

	t27 = (((x1077>>x1078)/x1079)%x1080);

	if (t27 != 40049U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1081 = 226U;
	uint8_t x1082 = 18U;
	int16_t x1084 = INT16_MIN;
	uint32_t t28 = 14386U;

	t28 = (((x1081>>x1082)/x1083)%x1084);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x1121 = INT64_MAX;
	int8_t x1123 = 3;
	static int16_t x1124 = -1;
	volatile int64_t t29 = 52254841701489LL;

	t29 = (((x1121>>x1122)/x1123)%x1124);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x1221 = INT16_MAX;
	uint32_t x1224 = 7719U;
	uint32_t t30 = 6747812U;

	t30 = (((x1221>>x1222)/x1223)%x1224);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x1270 = 4;
	static int32_t x1271 = -1;
	int64_t t31 = 1061304890417766LL;

	t31 = (((x1269>>x1270)/x1271)%x1272);

	if (t31 != -7LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1301 = 257301193LL;
	int8_t x1303 = INT8_MAX;
	int64_t t32 = 13LL;

	t32 = (((x1301>>x1302)/x1303)%x1304);

	if (t32 != 1012996LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x1365 = UINT64_MAX;
	int64_t x1367 = INT64_MIN;
	volatile uint64_t t33 = 374LLU;

	t33 = (((x1365>>x1366)/x1367)%x1368);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x1369 = 1017;
	int64_t x1371 = -194042566LL;
	volatile int8_t x1372 = INT8_MIN;

	t34 = (((x1369>>x1370)/x1371)%x1372);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1377 = INT16_MAX;
	volatile uint8_t x1378 = 9U;
	uint32_t x1379 = 119630U;
	volatile uint32_t t35 = 91846719U;

	t35 = (((x1377>>x1378)/x1379)%x1380);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x1549 = 3107714056762LL;
	uint32_t x1550 = 2U;
	uint64_t x1551 = 11233145648207804LLU;

	t36 = (((x1549>>x1550)/x1551)%x1552);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1645 = 653;
	int8_t x1646 = 0;
	volatile int8_t x1648 = 1;
	int32_t t37 = -34816;

	t37 = (((x1645>>x1646)/x1647)%x1648);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x1650 = 0LL;
	int16_t x1651 = 5;
	static uint16_t x1652 = UINT16_MAX;
	uint64_t t38 = 3557443113883LLU;

	t38 = (((x1649>>x1650)/x1651)%x1652);

	if (t38 != 52428LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x1658 = 1U;
	int64_t x1659 = INT64_MIN;
	int64_t x1660 = -1LL;
	volatile int64_t t39 = 1LL;

	t39 = (((x1657>>x1658)/x1659)%x1660);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1733 = UINT64_MAX;
	volatile uint8_t x1734 = 51U;
	int8_t x1735 = INT8_MIN;
	int32_t x1736 = 41;
	uint64_t t40 = 625024888LLU;

	t40 = (((x1733>>x1734)/x1735)%x1736);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1777 = 7U;
	int8_t x1778 = 16;
	volatile int64_t x1779 = -1LL;
	uint8_t x1780 = 74U;
	volatile int64_t t41 = 684552761229015LL;

	t41 = (((x1777>>x1778)/x1779)%x1780);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x1797 = UINT64_MAX;
	static uint16_t x1798 = 0U;
	volatile int16_t x1799 = -1;
	uint64_t t42 = 7039LLU;

	t42 = (((x1797>>x1798)/x1799)%x1800);

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1817 = 2562;
	uint32_t x1818 = 2U;
	int16_t x1819 = INT16_MIN;

	t43 = (((x1817>>x1818)/x1819)%x1820);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1869 = 119910775702LLU;
	int8_t x1870 = 1;
	int64_t x1872 = INT64_MIN;
	static uint64_t t44 = 328035316895816248LLU;

	t44 = (((x1869>>x1870)/x1871)%x1872);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x1902 = 25U;
	int16_t x1903 = INT16_MIN;
	int64_t x1904 = -3LL;
	int64_t t45 = 52732359375353730LL;

	t45 = (((x1901>>x1902)/x1903)%x1904);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x1953 = 104322132LLU;
	static int8_t x1955 = INT8_MIN;
	int32_t x1956 = -1;

	t46 = (((x1953>>x1954)/x1955)%x1956);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x1965 = 2020467LLU;
	uint8_t x1966 = 5U;
	int64_t x1968 = -1915599LL;
	uint64_t t47 = 9200067345963567669LLU;

	t47 = (((x1965>>x1966)/x1967)%x1968);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x1973 = 1629627530U;
	int64_t x1974 = 0LL;
	int32_t x1975 = 6929;
	int32_t x1976 = INT32_MIN;

	t48 = (((x1973>>x1974)/x1975)%x1976);

	if (t48 != 235189U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x2037 = 2938520980514727LLU;
	uint16_t x2038 = 12U;
	static int8_t x2040 = -11;
	static uint64_t t49 = 2118235LLU;

	t49 = (((x2037>>x2038)/x2039)%x2040);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2065 = INT64_MAX;
	uint16_t x2066 = 5U;
	int64_t x2067 = INT64_MAX;
	int8_t x2068 = 7;
	static volatile int64_t t50 = 4LL;

	t50 = (((x2065>>x2066)/x2067)%x2068);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x2106 = 2U;
	uint32_t x2107 = 55595U;
	volatile uint16_t x2108 = UINT16_MAX;
	uint32_t t51 = 10U;

	t51 = (((x2105>>x2106)/x2107)%x2108);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2113 = 28681276580LLU;
	static int8_t x2114 = 3;
	uint8_t x2115 = 10U;
	static int8_t x2116 = -1;

	t52 = (((x2113>>x2114)/x2115)%x2116);

	if (t52 != 358515957LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2125 = UINT64_MAX;
	volatile uint32_t x2127 = UINT32_MAX;
	int64_t x2128 = -1LL;
	volatile uint64_t t53 = 74LLU;

	t53 = (((x2125>>x2126)/x2127)%x2128);

	if (t53 != 268435456LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x2137 = 5375339890865LL;
	int32_t x2139 = INT32_MIN;
	uint16_t x2140 = UINT16_MAX;
	int64_t t54 = 13LL;

	t54 = (((x2137>>x2138)/x2139)%x2140);

	if (t54 != -2503LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x2249 = 182U;
	int64_t x2251 = -1LL;
	int16_t x2252 = -735;
	int64_t t55 = -1201341889LL;

	t55 = (((x2249>>x2250)/x2251)%x2252);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x2301 = 931623981290331LLU;
	uint8_t x2302 = 61U;
	int32_t x2303 = INT32_MAX;
	uint64_t x2304 = UINT64_MAX;
	uint64_t t56 = 1859211377LLU;

	t56 = (((x2301>>x2302)/x2303)%x2304);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x2345 = INT16_MAX;
	uint8_t x2346 = 10U;
	static int64_t x2347 = INT64_MAX;
	volatile int32_t x2348 = INT32_MIN;
	static int64_t t57 = -5891212364LL;

	t57 = (((x2345>>x2346)/x2347)%x2348);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x2373 = 1LLU;
	int8_t x2374 = 1;
	static int32_t x2375 = 11180985;
	int64_t x2376 = -6753949LL;
	volatile uint64_t t58 = 48002510945964035LLU;

	t58 = (((x2373>>x2374)/x2375)%x2376);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2421 = 1;
	int8_t x2422 = 7;
	volatile int64_t x2423 = 784350693823330312LL;

	t59 = (((x2421>>x2422)/x2423)%x2424);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x2449 = 359991850704891838LL;
	int8_t x2450 = 22;
	int16_t x2452 = -1;
	static volatile int64_t t60 = 18148LL;

	t60 = (((x2449>>x2450)/x2451)%x2452);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x2473 = UINT32_MAX;
	volatile int16_t x2474 = 1;
	int64_t x2475 = INT64_MIN;
	uint8_t x2476 = 19U;
	int64_t t61 = 8029699LL;

	t61 = (((x2473>>x2474)/x2475)%x2476);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x2537 = 5;
	int64_t x2539 = INT64_MIN;
	uint32_t x2540 = UINT32_MAX;
	volatile int64_t t62 = -13165705991799162LL;

	t62 = (((x2537>>x2538)/x2539)%x2540);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x2578 = 16LL;
	uint64_t x2579 = UINT64_MAX;
	volatile uint64_t t63 = 20620145698LLU;

	t63 = (((x2577>>x2578)/x2579)%x2580);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x2646 = 0U;
	static int16_t x2647 = -1;
	uint32_t x2648 = UINT32_MAX;
	uint32_t t64 = 6U;

	t64 = (((x2645>>x2646)/x2647)%x2648);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x2713 = 116599761646425LL;
	int8_t x2714 = 43;
	uint8_t x2715 = 14U;
	uint64_t x2716 = UINT64_MAX;
	uint64_t t65 = 18LLU;

	t65 = (((x2713>>x2714)/x2715)%x2716);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x2721 = UINT32_MAX;
	int32_t x2722 = 13;
	static uint64_t x2723 = UINT64_MAX;
	volatile int32_t x2724 = -15456;

	t66 = (((x2721>>x2722)/x2723)%x2724);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x2725 = UINT8_MAX;
	volatile int64_t x2728 = INT64_MAX;
	volatile uint64_t t67 = 678725886932LLU;

	t67 = (((x2725>>x2726)/x2727)%x2728);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x2769 = 444150LLU;
	volatile uint16_t x2770 = 6U;
	static uint64_t x2771 = 31406121281547LLU;
	static uint64_t x2772 = 263395923LLU;
	static uint64_t t68 = 955LLU;

	t68 = (((x2769>>x2770)/x2771)%x2772);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x2773 = INT32_MAX;
	static int16_t x2776 = -7238;
	int64_t t69 = 1LL;

	t69 = (((x2773>>x2774)/x2775)%x2776);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x2785 = INT16_MAX;
	uint16_t x2786 = 13U;
	volatile int64_t x2787 = INT64_MIN;
	int32_t x2788 = -1;

	t70 = (((x2785>>x2786)/x2787)%x2788);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x2805 = 437706U;
	uint8_t x2806 = 2U;
	int32_t x2808 = 22;

	t71 = (((x2805>>x2806)/x2807)%x2808);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x2829 = UINT8_MAX;
	volatile uint8_t x2830 = 0U;
	volatile int16_t x2832 = INT16_MAX;
	volatile int32_t t72 = 16373744;

	t72 = (((x2829>>x2830)/x2831)%x2832);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x2886 = 52U;
	int32_t x2887 = INT32_MIN;
	volatile int16_t x2888 = 1455;
	int64_t t73 = 1495596527523LL;

	t73 = (((x2885>>x2886)/x2887)%x2888);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x2897 = 96835614U;
	static int64_t t74 = -231960830LL;

	t74 = (((x2897>>x2898)/x2899)%x2900);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x2918 = 29U;
	uint16_t x2920 = 2U;
	uint32_t t75 = 7336U;

	t75 = (((x2917>>x2918)/x2919)%x2920);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x3109 = 570648U;
	int8_t x3110 = 1;
	int8_t x3111 = INT8_MIN;
	int64_t x3112 = -96175LL;

	t76 = (((x3109>>x3110)/x3111)%x3112);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x3209 = 9650133LLU;
	uint8_t x3211 = 11U;
	uint16_t x3212 = 1U;
	uint64_t t77 = 34041LLU;

	t77 = (((x3209>>x3210)/x3211)%x3212);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x3249 = 52LLU;
	int64_t x3251 = -82734LL;
	static volatile int32_t x3252 = -170020989;
	volatile uint64_t t78 = 17359457LLU;

	t78 = (((x3249>>x3250)/x3251)%x3252);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x3262 = 0U;
	uint64_t x3263 = UINT64_MAX;
	volatile uint64_t t79 = 8LLU;

	t79 = (((x3261>>x3262)/x3263)%x3264);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x3365 = 11285978816995LLU;
	uint8_t x3366 = 48U;
	volatile int64_t x3367 = INT64_MAX;
	int32_t x3368 = 185587083;

	t80 = (((x3365>>x3366)/x3367)%x3368);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x3379 = 20;
	volatile uint64_t t81 = 310863LLU;

	t81 = (((x3377>>x3378)/x3379)%x3380);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x3545 = INT32_MAX;
	uint8_t x3546 = 1U;
	int8_t x3547 = INT8_MAX;
	uint64_t x3548 = UINT64_MAX;
	volatile uint64_t t82 = 4511091623960765950LLU;

	t82 = (((x3545>>x3546)/x3547)%x3548);

	if (t82 != 8454660LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x3573 = UINT64_MAX;
	uint8_t x3574 = 21U;
	volatile int8_t x3575 = 2;
	uint16_t x3576 = 1418U;
	static uint64_t t83 = 15LLU;

	t83 = (((x3573>>x3574)/x3575)%x3576);

	if (t83 != 645LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x3689 = 6887U;
	uint16_t x3690 = 18U;
	static uint64_t x3691 = UINT64_MAX;
	uint64_t t84 = 1024LLU;

	t84 = (((x3689>>x3690)/x3691)%x3692);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x3729 = INT8_MAX;
	uint8_t x3730 = 1U;
	int32_t x3731 = INT32_MIN;
	int16_t x3732 = INT16_MIN;
	volatile int32_t t85 = -442818146;

	t85 = (((x3729>>x3730)/x3731)%x3732);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x3757 = 115U;
	int8_t x3758 = 1;
	static volatile uint16_t x3759 = 11U;
	uint16_t x3760 = 65U;
	volatile int32_t t86 = -2935;

	t86 = (((x3757>>x3758)/x3759)%x3760);

	if (t86 != 5) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x3829 = 6LLU;
	uint16_t x3830 = 6U;
	uint16_t x3831 = 25U;
	static uint32_t x3832 = 527776572U;
	uint64_t t87 = 165LLU;

	t87 = (((x3829>>x3830)/x3831)%x3832);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x3869 = INT8_MAX;
	int32_t x3870 = 7;
	uint16_t x3871 = UINT16_MAX;
	int16_t x3872 = INT16_MIN;
	volatile int32_t t88 = -96318;

	t88 = (((x3869>>x3870)/x3871)%x3872);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x3873 = 74635117190959LLU;
	uint16_t x3874 = 55U;
	uint64_t x3875 = 1089569608184581LLU;
	volatile uint32_t x3876 = 3782U;
	uint64_t t89 = 228738780212549986LLU;

	t89 = (((x3873>>x3874)/x3875)%x3876);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x3925 = 1;
	int16_t x3926 = 1;
	volatile int8_t x3927 = INT8_MIN;
	int8_t x3928 = INT8_MIN;
	int32_t t90 = 30;

	t90 = (((x3925>>x3926)/x3927)%x3928);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x3943 = INT16_MIN;
	static int64_t x3944 = INT64_MAX;
	volatile int64_t t91 = 1542848923906704237LL;

	t91 = (((x3941>>x3942)/x3943)%x3944);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x3977 = 0;
	uint8_t x3978 = 3U;
	static int64_t x3979 = 33813954LL;
	int64_t x3980 = INT64_MIN;

	t92 = (((x3977>>x3978)/x3979)%x3980);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x4057 = INT16_MAX;
	volatile uint8_t x4058 = 1U;
	static volatile uint8_t x4059 = 3U;
	static volatile int64_t t93 = -135099249585LL;

	t93 = (((x4057>>x4058)/x4059)%x4060);

	if (t93 != 5461LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x4193 = 3813743200763LLU;
	static uint16_t x4194 = 3U;
	int8_t x4195 = INT8_MIN;
	int16_t x4196 = -845;

	t94 = (((x4193>>x4194)/x4195)%x4196);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x4201 = 188887806U;
	uint8_t x4202 = 2U;
	int32_t x4203 = INT32_MIN;
	static volatile uint32_t t95 = 130237U;

	t95 = (((x4201>>x4202)/x4203)%x4204);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x4281 = 3870935LLU;
	volatile uint8_t x4282 = 5U;
	volatile int32_t x4283 = INT32_MAX;
	int16_t x4284 = INT16_MIN;

	t96 = (((x4281>>x4282)/x4283)%x4284);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x4293 = 97U;
	uint32_t x4294 = 3U;
	uint8_t x4295 = 1U;
	uint64_t x4296 = UINT64_MAX;
	static uint64_t t97 = 240449555084346LLU;

	t97 = (((x4293>>x4294)/x4295)%x4296);

	if (t97 != 12LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x4301 = 44875167023LLU;
	int16_t x4303 = -1;
	uint16_t x4304 = UINT16_MAX;

	t98 = (((x4301>>x4302)/x4303)%x4304);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x4349 = UINT64_MAX;
	int16_t x4350 = 55;
	int16_t x4351 = INT16_MAX;
	int16_t x4352 = -31;
	uint64_t t99 = 867610860862378156LLU;

	t99 = (((x4349>>x4350)/x4351)%x4352);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

