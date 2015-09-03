#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x98 = UINT16_MAX;
uint64_t x99 = 195170526LLU;
uint64_t x159 = 1152929LLU;
int32_t t3 = -30250;
uint32_t x214 = UINT32_MAX;
int32_t x241 = INT32_MIN;
static int8_t x243 = -1;
int64_t t8 = 0LL;
int16_t x307 = -1;
static int64_t t9 = -80LL;
uint64_t x314 = 360252276LLU;
uint8_t x316 = 52U;
int32_t x325 = INT32_MAX;
static int16_t x414 = INT16_MAX;
int8_t x416 = 0;
int64_t x726 = -933LL;
int8_t x728 = 54;
int8_t x747 = -1;
volatile uint8_t x856 = 1U;
int32_t t15 = 29571;
static int64_t x961 = 51073LL;
int16_t x963 = INT16_MIN;
static int32_t x964 = 9;
uint16_t x1026 = 7004U;
uint16_t x1027 = 1937U;
int8_t x1039 = -1;
int32_t x1041 = INT32_MIN;
static int32_t x1085 = INT32_MIN;
int32_t x1087 = 1;
volatile int32_t t22 = INT32_MIN;
static uint32_t x1103 = UINT32_MAX;
static volatile int32_t x1122 = INT32_MIN;
static int64_t x1139 = -1LL;
uint32_t x1228 = 7U;
volatile uint64_t t29 = 315228LLU;
volatile int32_t x1390 = INT32_MIN;
uint8_t x1392 = 0U;
volatile uint64_t t30 = 1700227536891LLU;
uint64_t x1444 = 39LLU;
uint64_t t33 = 4LLU;
int32_t t36 = -5607;
volatile uint64_t t38 = 0LLU;
uint32_t x1877 = 0U;
int64_t x1879 = INT64_MAX;
volatile uint32_t x1908 = 4U;
volatile uint32_t t43 = 1119U;
int64_t x1949 = 2012LL;
int32_t x1960 = 1;
static int16_t x1963 = INT16_MAX;
int32_t x2001 = 1521;
int32_t t48 = 1862510;
volatile int16_t x2017 = INT16_MAX;
static int8_t x2020 = 20;
uint64_t x2055 = 75244343LLU;
uint32_t x2084 = 14U;
volatile int32_t t51 = -3;
int16_t x2094 = INT16_MIN;
static int16_t x2095 = INT16_MIN;
static uint32_t x2130 = 9282U;
static uint64_t t53 = 3451LLU;
uint8_t x2228 = 0U;
volatile uint64_t x2268 = 34LLU;
volatile int64_t t56 = -235203489674778LL;
uint64_t t57 = 407559834147550878LLU;
int16_t x2513 = INT16_MIN;
static int32_t x2530 = INT32_MIN;
volatile uint32_t t60 = 56U;
volatile uint32_t x2851 = 3195U;
volatile uint64_t t62 = 41884336589LLU;
static uint64_t x2863 = 76250891LLU;
int16_t x2921 = 7;
volatile int64_t x2922 = INT64_MAX;
static volatile int64_t t64 = 55559LL;
int64_t x2958 = INT64_MAX;
volatile int16_t x2993 = INT16_MIN;
uint8_t x2994 = UINT8_MAX;
volatile int32_t t66 = 146065;
static uint64_t x3045 = UINT64_MAX;
uint16_t x3048 = 6U;
volatile uint64_t t67 = 442517706LLU;
uint8_t x3204 = 4U;
int32_t t69 = 1;
static volatile uint8_t x3413 = 60U;
uint8_t x3414 = 3U;
volatile int16_t x3457 = 13055;
volatile int64_t x3515 = -1LL;
uint16_t x3652 = 7U;
static volatile int64_t t76 = 6LL;
static volatile uint64_t x3730 = UINT64_MAX;
uint8_t x3744 = 2U;
uint64_t x3805 = 202891LLU;
int64_t t81 = -2391LL;
int32_t x3910 = -97345;
static uint16_t x3923 = 1733U;
volatile int32_t t83 = 2;
int64_t x4037 = -1LL;
int64_t x4119 = INT64_MAX;
static volatile uint16_t x4141 = 2U;
uint64_t t89 = 0LLU;
uint32_t t90 = 7982694U;
uint64_t x4285 = UINT64_MAX;
int16_t x4286 = 12428;
int64_t x4287 = INT64_MAX;
volatile uint64_t t91 = 15993518288663594LLU;
uint8_t x4294 = UINT8_MAX;
static uint64_t x4486 = UINT64_MAX;
static int16_t x4745 = INT16_MIN;


void f0(void) {
	static uint8_t x97 = 1U;
	uint32_t x100 = 50U;
	uint64_t t0 = 112816519LLU;

	t0 = (x97+((x98%x99)<<x100));

	if (t0 != 18445618173802708993LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x129 = INT64_MAX;
	int32_t x130 = 29;
	static int8_t x131 = 1;
	static int16_t x132 = 10;
	int64_t t1 = INT64_MAX;

	t1 = (x129+((x130%x131)<<x132));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x157 = 2425U;
	static int16_t x158 = -1;
	static uint8_t x160 = 41U;
	volatile uint64_t t2 = 3719604213176LLU;

	t2 = (x157+((x158%x159)<<x160));

	if (t2 != 1356390529373309305LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x201 = 51;
	uint16_t x202 = 15681U;
	int16_t x203 = -1;
	uint8_t x204 = 0U;

	t3 = (x201+((x202%x203)<<x204));

	if (t3 != 51) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x209 = -5;
	static uint16_t x210 = 5793U;
	static volatile int64_t x211 = -96568627LL;
	static uint8_t x212 = 10U;
	static volatile int64_t t4 = -1LL;

	t4 = (x209+((x210%x211)<<x212));

	if (t4 != 5932027LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x213 = UINT64_MAX;
	int64_t x215 = -6LL;
	volatile int16_t x216 = 4;
	volatile uint64_t t5 = 1260953172669905307LLU;

	t5 = (x213+((x214%x215)<<x216));

	if (t5 != 47LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x242 = INT64_MIN;
	int8_t x244 = 6;
	static int64_t t6 = 91LL;

	t6 = (x241+((x242%x243)<<x244));

	if (t6 != -2147483648LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x257 = INT64_MIN;
	static int32_t x258 = INT32_MAX;
	uint8_t x259 = 74U;
	int8_t x260 = 0;
	volatile int64_t t7 = -68445689LL;

	t7 = (x257+((x258%x259)<<x260));

	if (t7 != -9223372036854775787LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x285 = 104976533U;
	int64_t x286 = INT64_MIN;
	int8_t x287 = -1;
	static int8_t x288 = 4;

	t8 = (x285+((x286%x287)<<x288));

	if (t8 != 104976533LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x305 = UINT32_MAX;
	int64_t x306 = -1LL;
	uint8_t x308 = 2U;

	t9 = (x305+((x306%x307)<<x308));

	if (t9 != 4294967295LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x313 = 933236LL;
	uint64_t x315 = 39497162079LLU;
	volatile uint64_t t10 = 2525076833173218482LLU;

	t10 = (x313+((x314%x315)<<x316));

	if (t10 != 3981182070596451700LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x326 = INT16_MAX;
	uint64_t x327 = 3371895308080644581LLU;
	uint16_t x328 = 0U;
	volatile uint64_t t11 = 5032650243LLU;

	t11 = (x325+((x326%x327)<<x328));

	if (t11 != 2147516414LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x413 = 0;
	int16_t x415 = INT16_MIN;
	int32_t t12 = -1;

	t12 = (x413+((x414%x415)<<x416));

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x725 = 40;
	uint64_t x727 = 91020007900996LLU;
	uint64_t t13 = 32LLU;

	t13 = (x725+((x726%x727)<<x728));

	if (t13 != 5530420342410969128LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x745 = UINT32_MAX;
	volatile int32_t x746 = 1324802;
	volatile uint16_t x748 = 0U;
	uint32_t t14 = UINT32_MAX;

	t14 = (x745+((x746%x747)<<x748));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x853 = INT16_MAX;
	int32_t x854 = INT32_MAX;
	uint16_t x855 = 785U;

	t15 = (x853+((x854%x855)<<x856));

	if (t15 != 34271) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x917 = INT64_MIN;
	int32_t x918 = INT32_MIN;
	static int32_t x919 = INT32_MIN;
	static uint16_t x920 = 2U;
	static int64_t t16 = INT64_MIN;

	t16 = (x917+((x918%x919)<<x920));

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x962 = INT32_MIN;
	volatile int64_t t17 = -24110LL;

	t17 = (x961+((x962%x963)<<x964));

	if (t17 != 51073LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x1025 = INT32_MIN;
	int8_t x1028 = 3;
	volatile int32_t t18 = -2084;

	t18 = (x1025+((x1026%x1027)<<x1028));

	if (t18 != -2147474104) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x1037 = 113U;
	int64_t x1038 = INT64_MAX;
	static int8_t x1040 = 26;
	int64_t t19 = 7891LL;

	t19 = (x1037+((x1038%x1039)<<x1040));

	if (t19 != 113LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x1042 = -61;
	int16_t x1043 = -1;
	int8_t x1044 = 1;
	static int32_t t20 = INT32_MIN;

	t20 = (x1041+((x1042%x1043)<<x1044));

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1081 = -1;
	int16_t x1082 = INT16_MAX;
	int64_t x1083 = 1859340660946201LL;
	int8_t x1084 = 6;
	int64_t t21 = 1321628263338453LL;

	t21 = (x1081+((x1082%x1083)<<x1084));

	if (t21 != 2097087LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x1086 = UINT16_MAX;
	static int8_t x1088 = 6;

	t22 = (x1085+((x1086%x1087)<<x1088));

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x1101 = -30177236LL;
	volatile int64_t x1102 = INT64_MAX;
	int8_t x1104 = 0;
	int64_t t23 = -132550572016LL;

	t23 = (x1101+((x1102%x1103)<<x1104));

	if (t23 != 2117306411LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x1121 = 16145;
	uint64_t x1123 = UINT64_MAX;
	int32_t x1124 = 6;
	uint64_t t24 = 325LLU;

	t24 = (x1121+((x1122%x1123)<<x1124));

	if (t24 != 18446743936270614289LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1137 = INT16_MIN;
	int64_t x1138 = -1LL;
	uint8_t x1140 = 30U;
	int64_t t25 = -33182LL;

	t25 = (x1137+((x1138%x1139)<<x1140));

	if (t25 != -32768LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x1145 = -1LL;
	volatile uint16_t x1146 = UINT16_MAX;
	volatile int32_t x1147 = INT32_MIN;
	uint32_t x1148 = 2U;
	int64_t t26 = 8658501LL;

	t26 = (x1145+((x1146%x1147)<<x1148));

	if (t26 != 262139LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x1153 = 7U;
	static uint32_t x1154 = 293U;
	uint8_t x1155 = 20U;
	volatile uint16_t x1156 = 9U;
	volatile uint32_t t27 = 5U;

	t27 = (x1153+((x1154%x1155)<<x1156));

	if (t27 != 6663U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1225 = INT16_MIN;
	uint32_t x1226 = UINT32_MAX;
	int32_t x1227 = 140;
	uint32_t t28 = 0U;

	t28 = (x1225+((x1226%x1227)<<x1228));

	if (t28 != 4294949248U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1305 = INT32_MAX;
	volatile uint64_t x1306 = 1482240847836777LLU;
	int64_t x1307 = -3052931667222LL;
	uint16_t x1308 = 12U;

	t29 = (x1305+((x1306%x1307)<<x1308));

	if (t29 != 6071258514886922239LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x1389 = 9LLU;
	int8_t x1391 = INT8_MIN;

	t30 = (x1389+((x1390%x1391)<<x1392));

	if (t30 != 9LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1441 = INT16_MIN;
	static uint32_t x1442 = UINT32_MAX;
	int64_t x1443 = 741LL;
	static volatile int64_t t31 = 1359100019071LL;

	t31 = (x1441+((x1442%x1443)<<x1444));

	if (t31 != 75866302283776LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1449 = INT16_MAX;
	static volatile uint64_t x1450 = 6891330068242414LLU;
	uint64_t x1451 = UINT64_MAX;
	uint8_t x1452 = 3U;
	uint64_t t32 = 2921634LLU;

	t32 = (x1449+((x1450%x1451)<<x1452));

	if (t32 != 55130640545972079LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1521 = -1;
	uint64_t x1522 = 2757923958LLU;
	int32_t x1523 = INT32_MAX;
	uint64_t x1524 = 3LLU;

	t33 = (x1521+((x1522%x1523)<<x1524));

	if (t33 != 4883522487LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1581 = INT32_MIN;
	int64_t x1582 = 4034669961306620991LL;
	int8_t x1583 = INT8_MIN;
	uint32_t x1584 = 7U;
	int64_t t34 = -1000569561367690218LL;

	t34 = (x1581+((x1582%x1583)<<x1584));

	if (t34 != -2147475584LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1613 = -1;
	uint32_t x1614 = 15420238U;
	int32_t x1615 = INT32_MIN;
	int8_t x1616 = 0;
	uint32_t t35 = 3793225U;

	t35 = (x1613+((x1614%x1615)<<x1616));

	if (t35 != 15420237U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1625 = UINT8_MAX;
	static uint16_t x1626 = UINT16_MAX;
	static int16_t x1627 = 1;
	static uint8_t x1628 = 0U;

	t36 = (x1625+((x1626%x1627)<<x1628));

	if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x1697 = UINT32_MAX;
	int64_t x1698 = INT64_MAX;
	volatile uint32_t x1699 = UINT32_MAX;
	uint8_t x1700 = 0U;
	volatile int64_t t37 = 12LL;

	t37 = (x1697+((x1698%x1699)<<x1700));

	if (t37 != 6442450942LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x1741 = INT32_MAX;
	volatile int64_t x1742 = -1LL;
	volatile uint64_t x1743 = 5686518LLU;
	static uint64_t x1744 = 16LLU;

	t38 = (x1741+((x1742%x1743)<<x1744));

	if (t38 != 292490510335LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x1753 = INT8_MAX;
	static uint8_t x1754 = 1U;
	int64_t x1755 = INT64_MAX;
	uint8_t x1756 = 12U;
	volatile int64_t t39 = -1051LL;

	t39 = (x1753+((x1754%x1755)<<x1756));

	if (t39 != 4223LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1833 = -1;
	int32_t x1834 = -43858497;
	volatile uint64_t x1835 = 654LLU;
	uint8_t x1836 = 7U;
	uint64_t t40 = 10073722LLU;

	t40 = (x1833+((x1834%x1835)<<x1836));

	if (t40 != 70783LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1878 = 86U;
	uint8_t x1880 = 53U;
	volatile int64_t t41 = -1LL;

	t41 = (x1877+((x1878%x1879)<<x1880));

	if (t41 != 774619135907725312LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1905 = 0;
	uint16_t x1906 = 1U;
	static uint32_t x1907 = 261653660U;
	static uint32_t t42 = 2406817U;

	t42 = (x1905+((x1906%x1907)<<x1908));

	if (t42 != 16U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1929 = 49U;
	static volatile uint32_t x1930 = UINT32_MAX;
	static int16_t x1931 = INT16_MIN;
	uint8_t x1932 = 25U;

	t43 = (x1929+((x1930%x1931)<<x1932));

	if (t43 != 4261412913U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1950 = 9;
	int16_t x1951 = -1;
	uint16_t x1952 = 0U;
	volatile int64_t t44 = 0LL;

	t44 = (x1949+((x1950%x1951)<<x1952));

	if (t44 != 2012LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1957 = -1;
	int16_t x1958 = 4272;
	static int16_t x1959 = INT16_MAX;
	int32_t t45 = 62766;

	t45 = (x1957+((x1958%x1959)<<x1960));

	if (t45 != 8543) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1961 = INT8_MIN;
	volatile uint32_t x1962 = UINT32_MAX;
	volatile uint32_t x1964 = 1U;
	static uint32_t t46 = 159866U;

	t46 = (x1961+((x1962%x1963)<<x1964));

	if (t46 != 4294967174U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x1981 = INT8_MAX;
	int16_t x1982 = 4;
	int64_t x1983 = 4141154019883773458LL;
	int16_t x1984 = 8;
	static volatile int64_t t47 = 26LL;

	t47 = (x1981+((x1982%x1983)<<x1984));

	if (t47 != 1151LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2002 = INT16_MAX;
	int32_t x2003 = -1;
	uint16_t x2004 = 0U;

	t48 = (x2001+((x2002%x2003)<<x2004));

	if (t48 != 1521) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x2018 = 0U;
	volatile uint64_t x2019 = UINT64_MAX;
	volatile uint64_t t49 = 178543054690LLU;

	t49 = (x2017+((x2018%x2019)<<x2020));

	if (t49 != 32767LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x2053 = INT64_MIN;
	int32_t x2054 = INT32_MAX;
	uint32_t x2056 = 4U;
	static uint64_t t50 = 883244155627661424LLU;

	t50 = (x2053+((x2054%x2055)<<x2056));

	if (t50 != 9223372037505048496LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x2081 = -1;
	volatile uint8_t x2082 = UINT8_MAX;
	static int8_t x2083 = INT8_MIN;

	t51 = (x2081+((x2082%x2083)<<x2084));

	if (t51 != 2080767) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x2093 = UINT8_MAX;
	int8_t x2096 = 3;
	int32_t t52 = 103452;

	t52 = (x2093+((x2094%x2095)<<x2096));

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x2129 = 1681U;
	uint64_t x2131 = 73177LLU;
	int8_t x2132 = 18;

	t53 = (x2129+((x2130%x2131)<<x2132));

	if (t53 != 2433222289LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2225 = INT64_MAX;
	static uint64_t x2226 = UINT64_MAX;
	uint16_t x2227 = 6610U;
	volatile uint64_t t54 = 2005309990618755LLU;

	t54 = (x2225+((x2226%x2227)<<x2228));

	if (t54 != 9223372036854780662LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x2265 = UINT8_MAX;
	int64_t x2266 = INT64_MAX;
	int64_t x2267 = -1LL;
	volatile int64_t t55 = -173214027504792516LL;

	t55 = (x2265+((x2266%x2267)<<x2268));

	if (t55 != 255LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x2277 = INT64_MIN;
	int16_t x2278 = INT16_MAX;
	int32_t x2279 = INT32_MIN;
	int8_t x2280 = 3;

	t56 = (x2277+((x2278%x2279)<<x2280));

	if (t56 != -9223372036854513672LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x2377 = UINT64_MAX;
	int16_t x2378 = INT16_MAX;
	static volatile int64_t x2379 = INT64_MIN;
	volatile int32_t x2380 = 11;

	t57 = (x2377+((x2378%x2379)<<x2380));

	if (t57 != 67106815LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x2514 = UINT16_MAX;
	int16_t x2515 = INT16_MIN;
	uint8_t x2516 = 3U;
	int32_t t58 = -3880128;

	t58 = (x2513+((x2514%x2515)<<x2516));

	if (t58 != 229368) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x2529 = INT64_MIN;
	uint32_t x2531 = 2820377U;
	uint16_t x2532 = 0U;
	static int64_t t59 = 3051462135289918116LL;

	t59 = (x2529+((x2530%x2531)<<x2532));

	if (t59 != -9223372036853599057LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x2777 = 17U;
	uint32_t x2778 = 191151U;
	int32_t x2779 = -1;
	uint8_t x2780 = 0U;

	t60 = (x2777+((x2778%x2779)<<x2780));

	if (t60 != 191168U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x2821 = 9U;
	static uint64_t x2822 = 107901460785228544LLU;
	static int16_t x2823 = INT16_MIN;
	static uint64_t x2824 = 1LLU;
	volatile uint64_t t61 = 7546246LLU;

	t61 = (x2821+((x2822%x2823)<<x2824));

	if (t61 != 215802921570457097LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x2849 = INT32_MAX;
	static uint64_t x2850 = 4353518213908LLU;
	int8_t x2852 = 4;

	t62 = (x2849+((x2850%x2851)<<x2852));

	if (t62 != 2147526095LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x2861 = INT16_MIN;
	uint8_t x2862 = 1U;
	static int8_t x2864 = 12;
	volatile uint64_t t63 = 30526392LLU;

	t63 = (x2861+((x2862%x2863)<<x2864));

	if (t63 != 18446744073709522944LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x2923 = -507589998051LL;
	volatile uint8_t x2924 = 7U;

	t64 = (x2921+((x2922%x2923)<<x2924));

	if (t64 != 47738864313351LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x2957 = 2U;
	uint16_t x2959 = 23816U;
	uint16_t x2960 = 1U;
	int64_t t65 = -399430484LL;

	t65 = (x2957+((x2958%x2959)<<x2960));

	if (t65 != 15616LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2995 = INT16_MAX;
	uint8_t x2996 = 0U;

	t66 = (x2993+((x2994%x2995)<<x2996));

	if (t66 != -32513) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint64_t x3046 = 11349444017LLU;
	volatile uint8_t x3047 = 46U;

	t67 = (x3045+((x3046%x3047)<<x3048));

	if (t67 != 2495LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint8_t x3101 = UINT8_MAX;
	int16_t x3102 = INT16_MAX;
	volatile uint16_t x3103 = UINT16_MAX;
	volatile int16_t x3104 = 7;
	volatile int32_t t68 = -71;

	t68 = (x3101+((x3102%x3103)<<x3104));

	if (t68 != 4194431) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3201 = INT8_MIN;
	volatile int8_t x3202 = INT8_MAX;
	static uint16_t x3203 = 1U;

	t69 = (x3201+((x3202%x3203)<<x3204));

	if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x3293 = 0U;
	uint8_t x3294 = UINT8_MAX;
	volatile int32_t x3295 = 2517785;
	volatile uint16_t x3296 = 1U;
	int32_t t70 = -228;

	t70 = (x3293+((x3294%x3295)<<x3296));

	if (t70 != 510) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x3317 = -7;
	static volatile int32_t x3318 = INT32_MIN;
	uint64_t x3319 = 72683791LLU;
	int16_t x3320 = 14;
	static volatile uint64_t t71 = 1603745374453070LLU;

	t71 = (x3317+((x3318%x3319)<<x3320));

	if (t71 != 370787516409LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x3349 = 69U;
	int16_t x3350 = INT16_MAX;
	int32_t x3351 = 19641877;
	uint32_t x3352 = 1U;
	int32_t t72 = -5043273;

	t72 = (x3349+((x3350%x3351)<<x3352));

	if (t72 != 65603) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x3415 = -3LL;
	uint8_t x3416 = 1U;
	static volatile int64_t t73 = -1441876537198048LL;

	t73 = (x3413+((x3414%x3415)<<x3416));

	if (t73 != 60LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x3458 = UINT16_MAX;
	int16_t x3459 = INT16_MIN;
	uint16_t x3460 = 15U;
	int32_t t74 = 75976846;

	t74 = (x3457+((x3458%x3459)<<x3460));

	if (t74 != 1073722111) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x3513 = INT64_MIN;
	static int64_t x3514 = INT64_MIN;
	static uint8_t x3516 = 41U;
	static volatile int64_t t75 = INT64_MIN;

	t75 = (x3513+((x3514%x3515)<<x3516));

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x3649 = 52U;
	uint32_t x3650 = 1439U;
	static int64_t x3651 = -1LL;

	t76 = (x3649+((x3650%x3651)<<x3652));

	if (t76 != 52LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x3713 = INT64_MIN;
	static uint32_t x3714 = 5826U;
	uint32_t x3715 = 682521U;
	uint32_t x3716 = 16U;
	volatile int64_t t77 = -34503971218LL;

	t77 = (x3713+((x3714%x3715)<<x3716));

	if (t77 != -9223372036472963072LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x3729 = UINT64_MAX;
	volatile int8_t x3731 = 5;
	int8_t x3732 = 1;
	uint64_t t78 = UINT64_MAX;

	t78 = (x3729+((x3730%x3731)<<x3732));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x3741 = -1;
	uint32_t x3742 = UINT32_MAX;
	int16_t x3743 = INT16_MAX;
	volatile uint32_t t79 = 34371U;

	t79 = (x3741+((x3742%x3743)<<x3744));

	if (t79 != 11U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x3806 = 40949683041LLU;
	static int32_t x3807 = INT32_MIN;
	int16_t x3808 = 3;
	static volatile uint64_t t80 = 14812381LLU;

	t80 = (x3805+((x3806%x3807)<<x3808));

	if (t80 != 327597667219LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x3901 = INT64_MIN;
	static uint8_t x3902 = 2U;
	static uint8_t x3903 = 66U;
	uint8_t x3904 = 0U;

	t81 = (x3901+((x3902%x3903)<<x3904));

	if (t81 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x3909 = INT8_MAX;
	static uint64_t x3911 = UINT64_MAX;
	uint32_t x3912 = 2U;
	uint64_t t82 = 13542558LLU;

	t82 = (x3909+((x3910%x3911)<<x3912));

	if (t82 != 18446744073709162363LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x3921 = -1;
	int32_t x3922 = 3235962;
	int8_t x3924 = 1;

	t83 = (x3921+((x3922%x3923)<<x3924));

	if (t83 != 901) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x3969 = 9466U;
	uint8_t x3970 = 0U;
	uint8_t x3971 = UINT8_MAX;
	volatile int8_t x3972 = 18;
	uint32_t t84 = 14236467U;

	t84 = (x3969+((x3970%x3971)<<x3972));

	if (t84 != 9466U) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x4038 = INT32_MIN;
	int16_t x4039 = INT16_MIN;
	uint8_t x4040 = 1U;
	volatile int64_t t85 = 215377793924LL;

	t85 = (x4037+((x4038%x4039)<<x4040));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x4105 = -1LL;
	uint8_t x4106 = UINT8_MAX;
	static uint16_t x4107 = 3292U;
	volatile int8_t x4108 = 10;
	int64_t t86 = -998674332108739050LL;

	t86 = (x4105+((x4106%x4107)<<x4108));

	if (t86 != 261119LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint64_t x4117 = 209435130161LLU;
	int32_t x4118 = INT32_MAX;
	uint32_t x4120 = 0U;
	uint64_t t87 = 1718083LLU;

	t87 = (x4117+((x4118%x4119)<<x4120));

	if (t87 != 211582613808LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x4142 = 542864U;
	volatile int32_t x4143 = 7058887;
	uint8_t x4144 = 4U;
	volatile uint32_t t88 = 321U;

	t88 = (x4141+((x4142%x4143)<<x4144));

	if (t88 != 8685826U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x4185 = INT16_MIN;
	static uint64_t x4186 = 10584889033165LLU;
	uint32_t x4187 = UINT32_MAX;
	volatile uint8_t x4188 = 0U;

	t89 = (x4185+((x4186%x4187)<<x4188));

	if (t89 != 2089585517LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x4205 = INT16_MIN;
	static volatile uint8_t x4206 = UINT8_MAX;
	volatile uint32_t x4207 = 7234U;
	volatile uint8_t x4208 = 23U;

	t90 = (x4205+((x4206%x4207)<<x4208));

	if (t90 != 2139062272U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x4288 = 19U;

	t91 = (x4285+((x4286%x4287)<<x4288));

	if (t91 != 6515851263LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x4293 = 12LLU;
	static int16_t x4295 = INT16_MIN;
	int8_t x4296 = 0;
	uint64_t t92 = 175853342LLU;

	t92 = (x4293+((x4294%x4295)<<x4296));

	if (t92 != 267LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x4485 = -1;
	volatile int16_t x4487 = -15079;
	uint8_t x4488 = 0U;
	static uint64_t t93 = 34581932725619674LLU;

	t93 = (x4485+((x4486%x4487)<<x4488));

	if (t93 != 15077LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x4497 = -39797LL;
	uint64_t x4498 = UINT64_MAX;
	uint16_t x4499 = 49U;
	uint16_t x4500 = 3U;
	volatile uint64_t t94 = 469649698161LLU;

	t94 = (x4497+((x4498%x4499)<<x4500));

	if (t94 != 18446744073709511827LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x4601 = -1LL;
	uint32_t x4602 = UINT32_MAX;
	uint32_t x4603 = UINT32_MAX;
	int32_t x4604 = 22;
	int64_t t95 = 3384310167457511LL;

	t95 = (x4601+((x4602%x4603)<<x4604));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x4649 = UINT32_MAX;
	volatile int16_t x4650 = -1;
	uint32_t x4651 = UINT32_MAX;
	uint16_t x4652 = 0U;
	static uint32_t t96 = UINT32_MAX;

	t96 = (x4649+((x4650%x4651)<<x4652));

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x4746 = INT64_MIN;
	uint64_t x4747 = 9LLU;
	volatile uint8_t x4748 = 7U;
	uint64_t t97 = 20900707932428870LLU;

	t97 = (x4745+((x4746%x4747)<<x4748));

	if (t97 != 18446744073709519872LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x4773 = UINT16_MAX;
	static volatile int8_t x4774 = INT8_MIN;
	uint64_t x4775 = UINT64_MAX;
	int32_t x4776 = 5;
	volatile uint64_t t98 = 2LLU;

	t98 = (x4773+((x4774%x4775)<<x4776));

	if (t98 != 61439LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x4781 = 12U;
	uint8_t x4782 = 1U;
	int32_t x4783 = 8;
	volatile int8_t x4784 = 3;
	int32_t t99 = 2921;

	t99 = (x4781+((x4782%x4783)<<x4784));

	if (t99 != 20) { NG(); } else { ; }
	
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

