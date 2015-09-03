#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x22 = INT32_MIN;
int16_t x30 = 29;
uint8_t x32 = 13U;
uint64_t x57 = UINT64_MAX;
static uint64_t x58 = UINT64_MAX;
uint64_t x95 = UINT64_MAX;
static uint64_t t3 = 149494547411LLU;
static int64_t x173 = -2293LL;
uint32_t x198 = 4647U;
int64_t t7 = 4143176663745704LL;
volatile uint8_t x318 = UINT8_MAX;
int16_t x338 = INT16_MAX;
volatile uint8_t x340 = 13U;
volatile uint64_t t9 = 716198LLU;
uint8_t x348 = 12U;
int64_t x650 = -32324519LL;
int8_t x651 = INT8_MAX;
int16_t x950 = -101;
static volatile int64_t t15 = 24351LL;
volatile int64_t t18 = -14832499353998LL;
uint64_t x1119 = UINT64_MAX;
volatile uint64_t x1125 = 772452446104LLU;
uint16_t x1171 = 13U;
uint32_t x1182 = 20U;
volatile uint8_t x1184 = 1U;
volatile int64_t x1273 = INT64_MIN;
int64_t x1343 = 372713758499385738LL;
volatile int16_t x1349 = -8;
int16_t x1351 = INT16_MAX;
static volatile int8_t x1600 = 7;
uint64_t x1639 = 29254159587897LLU;
int32_t x1649 = INT32_MIN;
static int64_t x1662 = -29529LL;
uint64_t x1664 = 12LLU;
volatile uint16_t x1668 = 22U;
volatile uint8_t x1721 = UINT8_MAX;
uint8_t x1736 = 6U;
volatile int64_t t39 = 2083755LL;
int64_t x1854 = INT64_MAX;
uint32_t x1856 = 7U;
static int8_t x1990 = INT8_MIN;
uint32_t x2036 = 3U;
static int8_t x2120 = 1;
uint16_t x2167 = 47U;
volatile int8_t x2168 = 0;
int64_t t47 = -1970759441687LL;
int64_t x2329 = INT64_MIN;
static volatile int16_t x2332 = 16;
static volatile int64_t t48 = 4584189LL;
uint8_t x2375 = UINT8_MAX;
int32_t x2447 = INT32_MAX;
uint32_t x2593 = 730781U;
static uint16_t x2596 = 0U;
volatile int64_t t56 = 81791895LL;
volatile int8_t x2694 = INT8_MIN;
volatile int64_t x2727 = INT64_MAX;
int16_t x2733 = INT16_MAX;
volatile uint32_t x2747 = 12784651U;
volatile int16_t x2806 = -7732;
uint32_t x2809 = UINT32_MAX;
int8_t x2876 = 1;
static volatile uint16_t x2886 = 5U;
volatile uint8_t x2895 = UINT8_MAX;
volatile int8_t x2896 = 8;
int32_t t65 = 237847276;
volatile uint8_t x2952 = 28U;
volatile uint16_t x2973 = 915U;
int32_t x3123 = 5;
int8_t x3124 = 2;
volatile int8_t x3178 = -1;
int32_t t70 = 1094233;
uint64_t x3195 = UINT64_MAX;
volatile uint16_t x3202 = 302U;
uint64_t t73 = 5098528588266545819LLU;
static int16_t x3785 = -1;
static int64_t t79 = -1309347626877880LL;
uint16_t x3819 = UINT16_MAX;
volatile int64_t t81 = -10LL;
volatile int8_t x3909 = INT8_MAX;
volatile int32_t t82 = 0;
static uint64_t x3977 = 283710467120LLU;
static volatile uint64_t t84 = 94424224473LLU;
uint32_t x4015 = 3505873U;
uint16_t x4035 = 8854U;
volatile int32_t t86 = 186456924;
uint64_t x4055 = 4264LLU;
volatile uint64_t t87 = 178842630477LLU;
uint64_t x4073 = 863042895316242LLU;
volatile uint64_t t88 = 77450314798LLU;
volatile int32_t x4138 = -683;
uint8_t x4242 = UINT8_MAX;
uint64_t t91 = 1311222LLU;
volatile int8_t x4309 = INT8_MAX;
int64_t x4311 = INT64_MAX;
volatile uint8_t x4564 = 1U;
uint8_t x4571 = UINT8_MAX;
int64_t t97 = -553450795781125LL;
uint8_t x4684 = 0U;


void f0(void) {
	static int64_t x21 = -1LL;
	static uint16_t x23 = 3697U;
	uint16_t x24 = 3U;
	int64_t t0 = 466142LL;

	t0 = (x21&(x22&(x23>>x24)));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x29 = 485U;
	uint16_t x31 = UINT16_MAX;
	uint32_t t1 = 5800U;

	t1 = (x29&(x30&(x31>>x32)));

	if (t1 != 5U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x59 = INT32_MAX;
	uint16_t x60 = 10U;
	uint64_t t2 = 10LLU;

	t2 = (x57&(x58&(x59>>x60)));

	if (t2 != 2097151LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x93 = -5;
	static uint8_t x94 = 1U;
	uint16_t x96 = 25U;

	t3 = (x93&(x94&(x95>>x96)));

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x161 = 567579LLU;
	int8_t x162 = INT8_MIN;
	volatile uint16_t x163 = 65U;
	int8_t x164 = 1;
	static volatile uint64_t t4 = 2822900681362995LLU;

	t4 = (x161&(x162&(x163>>x164)));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x169 = 3U;
	int8_t x170 = 4;
	int64_t x171 = 86452682LL;
	volatile uint16_t x172 = 0U;
	volatile int64_t t5 = -32896796538261200LL;

	t5 = (x169&(x170&(x171>>x172)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x174 = 1U;
	uint8_t x175 = 36U;
	int8_t x176 = 14;
	volatile int64_t t6 = 482346450324LL;

	t6 = (x173&(x174&(x175>>x176)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x197 = INT64_MIN;
	static int64_t x199 = 0LL;
	static int8_t x200 = 55;

	t7 = (x197&(x198&(x199>>x200)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x317 = UINT32_MAX;
	uint32_t x319 = 42342U;
	int8_t x320 = 12;
	volatile uint32_t t8 = 1524965U;

	t8 = (x317&(x318&(x319>>x320)));

	if (t8 != 10U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x337 = 129936U;
	uint64_t x339 = 12562030LLU;

	t9 = (x337&(x338&(x339>>x340)));

	if (t9 != 400LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x345 = 17087U;
	int16_t x346 = INT16_MIN;
	int64_t x347 = INT64_MAX;
	int64_t t10 = 520810728914LL;

	t10 = (x345&(x346&(x347>>x348)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x457 = INT16_MIN;
	int16_t x458 = 7729;
	int16_t x459 = 0;
	volatile uint16_t x460 = 1U;
	volatile int32_t t11 = 26306;

	t11 = (x457&(x458&(x459>>x460)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x605 = INT16_MAX;
	volatile int64_t x606 = INT64_MIN;
	volatile int64_t x607 = INT64_MAX;
	uint8_t x608 = 0U;
	volatile int64_t t12 = -850LL;

	t12 = (x605&(x606&(x607>>x608)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x649 = INT8_MAX;
	static int8_t x652 = 0;
	int64_t t13 = 5926448496108996LL;

	t13 = (x649&(x650&(x651>>x652)));

	if (t13 != 89LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x949 = 11U;
	uint32_t x951 = 490U;
	volatile uint8_t x952 = 0U;
	uint32_t t14 = 502908U;

	t14 = (x949&(x950&(x951>>x952)));

	if (t14 != 10U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x1021 = -52606;
	static int64_t x1022 = 28668611378317LL;
	uint8_t x1023 = 0U;
	int8_t x1024 = 2;

	t15 = (x1021&(x1022&(x1023>>x1024)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1029 = 7;
	int64_t x1030 = 196553992943699LL;
	int16_t x1031 = 22;
	int8_t x1032 = 2;
	int64_t t16 = 435208733198130LL;

	t16 = (x1029&(x1030&(x1031>>x1032)));

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x1085 = INT16_MAX;
	int64_t x1086 = 5LL;
	uint64_t x1087 = 794LLU;
	volatile uint64_t x1088 = 1LLU;
	uint64_t t17 = 277513090523170LLU;

	t17 = (x1085&(x1086&(x1087>>x1088)));

	if (t17 != 5LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x1089 = 8;
	int64_t x1090 = INT64_MAX;
	int32_t x1091 = 2;
	uint16_t x1092 = 17U;

	t18 = (x1089&(x1090&(x1091>>x1092)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x1109 = INT32_MAX;
	uint32_t x1110 = 1U;
	uint8_t x1111 = 30U;
	uint8_t x1112 = 4U;
	static volatile uint32_t t19 = 288712U;

	t19 = (x1109&(x1110&(x1111>>x1112)));

	if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x1117 = 1U;
	uint32_t x1118 = UINT32_MAX;
	int32_t x1120 = 1;
	static uint64_t t20 = 233752292099969048LLU;

	t20 = (x1117&(x1118&(x1119>>x1120)));

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1126 = UINT16_MAX;
	volatile uint64_t x1127 = 2LLU;
	int16_t x1128 = 7;
	uint64_t t21 = 461747449046524442LLU;

	t21 = (x1125&(x1126&(x1127>>x1128)));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1149 = 5108217LL;
	static int32_t x1150 = INT32_MIN;
	static int16_t x1151 = INT16_MAX;
	static uint32_t x1152 = 22U;
	static int64_t t22 = -5507LL;

	t22 = (x1149&(x1150&(x1151>>x1152)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x1169 = 480U;
	int16_t x1170 = 85;
	int16_t x1172 = 0;
	static uint32_t t23 = 26578224U;

	t23 = (x1169&(x1170&(x1171>>x1172)));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1181 = 22;
	static int16_t x1183 = 27;
	uint32_t t24 = 50145U;

	t24 = (x1181&(x1182&(x1183>>x1184)));

	if (t24 != 4U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1217 = -1;
	int64_t x1218 = INT64_MAX;
	int64_t x1219 = 17221440584157LL;
	static int16_t x1220 = 1;
	volatile int64_t t25 = -13855208357LL;

	t25 = (x1217&(x1218&(x1219>>x1220)));

	if (t25 != 8610720292078LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x1274 = -497439724957438LL;
	volatile int8_t x1275 = 3;
	static int8_t x1276 = 0;
	int64_t t26 = 121LL;

	t26 = (x1273&(x1274&(x1275>>x1276)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1301 = 14318U;
	volatile int16_t x1302 = 1462;
	int64_t x1303 = 1LL;
	int32_t x1304 = 0;
	volatile int64_t t27 = 2903268338533177343LL;

	t27 = (x1301&(x1302&(x1303>>x1304)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1341 = INT16_MIN;
	uint16_t x1342 = UINT16_MAX;
	uint8_t x1344 = 9U;
	volatile int64_t t28 = 17595253807LL;

	t28 = (x1341&(x1342&(x1343>>x1344)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x1350 = -1LL;
	static int32_t x1352 = 2;
	int64_t t29 = 11998690974LL;

	t29 = (x1349&(x1350&(x1351>>x1352)));

	if (t29 != 8184LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1373 = 1303;
	volatile int64_t x1374 = INT64_MIN;
	static int16_t x1375 = 0;
	static int16_t x1376 = 5;
	volatile int64_t t30 = 33723979952LL;

	t30 = (x1373&(x1374&(x1375>>x1376)));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1577 = -1;
	static int16_t x1578 = INT16_MIN;
	uint64_t x1579 = 77393457145LLU;
	volatile uint8_t x1580 = 0U;
	uint64_t t31 = 4LLU;

	t31 = (x1577&(x1578&(x1579>>x1580)));

	if (t31 != 77393428480LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x1597 = 7U;
	static int16_t x1598 = INT16_MIN;
	int32_t x1599 = INT32_MAX;
	volatile int32_t t32 = -3008;

	t32 = (x1597&(x1598&(x1599>>x1600)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1617 = 442912295931610650LLU;
	uint16_t x1618 = 480U;
	uint16_t x1619 = 3677U;
	uint8_t x1620 = 6U;
	volatile uint64_t t33 = 97158934625LLU;

	t33 = (x1617&(x1618&(x1619>>x1620)));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1637 = INT16_MAX;
	volatile uint8_t x1638 = 1U;
	int16_t x1640 = 0;
	static uint64_t t34 = 2116304081626182LLU;

	t34 = (x1637&(x1638&(x1639>>x1640)));

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x1650 = 3;
	volatile int16_t x1651 = INT16_MAX;
	uint64_t x1652 = 26LLU;
	int32_t t35 = -19098;

	t35 = (x1649&(x1650&(x1651>>x1652)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1661 = 9U;
	int16_t x1663 = 4;
	static volatile int64_t t36 = 504792145780LL;

	t36 = (x1661&(x1662&(x1663>>x1664)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x1665 = 6U;
	uint16_t x1666 = UINT16_MAX;
	uint8_t x1667 = 5U;
	volatile int32_t t37 = -85209057;

	t37 = (x1665&(x1666&(x1667>>x1668)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x1722 = INT8_MIN;
	uint32_t x1723 = 1554U;
	uint8_t x1724 = 18U;
	static volatile uint32_t t38 = 17U;

	t38 = (x1721&(x1722&(x1723>>x1724)));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1733 = INT64_MAX;
	uint32_t x1734 = 1346U;
	uint8_t x1735 = 1U;

	t39 = (x1733&(x1734&(x1735>>x1736)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1853 = INT32_MIN;
	uint8_t x1855 = 36U;
	static int64_t t40 = -1611894695961LL;

	t40 = (x1853&(x1854&(x1855>>x1856)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1989 = INT16_MIN;
	static int8_t x1991 = 42;
	volatile int64_t x1992 = 19LL;
	volatile int32_t t41 = -32;

	t41 = (x1989&(x1990&(x1991>>x1992)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1993 = INT64_MAX;
	int32_t x1994 = INT32_MIN;
	int16_t x1995 = INT16_MAX;
	uint8_t x1996 = 5U;
	volatile int64_t t42 = -3255021LL;

	t42 = (x1993&(x1994&(x1995>>x1996)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x1997 = INT8_MAX;
	uint16_t x1998 = 1U;
	static int8_t x1999 = 0;
	uint16_t x2000 = 0U;
	static int32_t t43 = 6;

	t43 = (x1997&(x1998&(x1999>>x2000)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2033 = 12U;
	volatile uint32_t x2034 = 21468U;
	uint64_t x2035 = 22549188998LLU;
	volatile uint64_t t44 = 1627808275LLU;

	t44 = (x2033&(x2034&(x2035>>x2036)));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x2117 = 108;
	int64_t x2118 = -1LL;
	uint16_t x2119 = UINT16_MAX;
	static int64_t t45 = -48276935524LL;

	t45 = (x2117&(x2118&(x2119>>x2120)));

	if (t45 != 108LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x2165 = 33976118274LL;
	uint32_t x2166 = 6425U;
	int64_t t46 = 22114LL;

	t46 = (x2165&(x2166&(x2167>>x2168)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2277 = -9288609;
	int64_t x2278 = 225182665156276LL;
	int8_t x2279 = INT8_MAX;
	static uint16_t x2280 = 7U;

	t47 = (x2277&(x2278&(x2279>>x2280)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x2330 = INT64_MIN;
	static int64_t x2331 = INT64_MAX;

	t48 = (x2329&(x2330&(x2331>>x2332)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2369 = INT8_MAX;
	int64_t x2370 = -125805625024573LL;
	volatile uint16_t x2371 = 5274U;
	int32_t x2372 = 1;
	volatile int64_t t49 = -340274382LL;

	t49 = (x2369&(x2370&(x2371>>x2372)));

	if (t49 != 65LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x2373 = 15563043897958805LLU;
	int64_t x2374 = INT64_MIN;
	int8_t x2376 = 1;
	volatile uint64_t t50 = 1913329469938686LLU;

	t50 = (x2373&(x2374&(x2375>>x2376)));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x2393 = 54980590243LLU;
	volatile int8_t x2394 = 3;
	volatile int64_t x2395 = 184878372870LL;
	int8_t x2396 = 2;
	uint64_t t51 = 136179723402773LLU;

	t51 = (x2393&(x2394&(x2395>>x2396)));

	if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x2433 = 44611U;
	uint32_t x2434 = 0U;
	int64_t x2435 = INT64_MAX;
	uint32_t x2436 = 24U;
	static volatile int64_t t52 = -82064345663902LL;

	t52 = (x2433&(x2434&(x2435>>x2436)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x2445 = 1;
	volatile uint64_t x2446 = 4911786815485796LLU;
	uint8_t x2448 = 7U;
	static uint64_t t53 = 52680760LLU;

	t53 = (x2445&(x2446&(x2447>>x2448)));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2541 = -1;
	int32_t x2542 = 57666976;
	uint8_t x2543 = UINT8_MAX;
	int16_t x2544 = 14;
	int32_t t54 = 1562;

	t54 = (x2541&(x2542&(x2543>>x2544)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x2594 = INT32_MAX;
	uint32_t x2595 = 41997425U;
	volatile uint32_t t55 = 704U;

	t55 = (x2593&(x2594&(x2595>>x2596)));

	if (t55 != 1041U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x2657 = UINT8_MAX;
	volatile int8_t x2658 = INT8_MAX;
	static int64_t x2659 = 212074733415578LL;
	static int16_t x2660 = 1;

	t56 = (x2657&(x2658&(x2659>>x2660)));

	if (t56 != 77LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x2693 = 3640U;
	int16_t x2695 = INT16_MAX;
	volatile uint16_t x2696 = 14U;
	volatile uint32_t t57 = 4924829U;

	t57 = (x2693&(x2694&(x2695>>x2696)));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x2725 = -68;
	int16_t x2726 = INT16_MIN;
	static uint8_t x2728 = 31U;
	volatile int64_t t58 = -222908934837202251LL;

	t58 = (x2725&(x2726&(x2727>>x2728)));

	if (t58 != 4294934528LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x2734 = -10;
	static uint16_t x2735 = UINT16_MAX;
	static int16_t x2736 = 1;
	int32_t t59 = 17544744;

	t59 = (x2733&(x2734&(x2735>>x2736)));

	if (t59 != 32758) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2745 = INT8_MIN;
	int16_t x2746 = -342;
	uint16_t x2748 = 0U;
	volatile uint32_t t60 = 30469U;

	t60 = (x2745&(x2746&(x2747>>x2748)));

	if (t60 != 12784640U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2805 = -1;
	uint8_t x2807 = UINT8_MAX;
	int16_t x2808 = 0;
	static volatile int32_t t61 = 10124;

	t61 = (x2805&(x2806&(x2807>>x2808)));

	if (t61 != 204) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x2810 = -117855;
	static uint16_t x2811 = 7U;
	int16_t x2812 = 1;
	uint32_t t62 = 77724U;

	t62 = (x2809&(x2810&(x2811>>x2812)));

	if (t62 != 1U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x2873 = INT64_MIN;
	static volatile int32_t x2874 = INT32_MIN;
	uint8_t x2875 = UINT8_MAX;
	int64_t t63 = 16164213LL;

	t63 = (x2873&(x2874&(x2875>>x2876)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x2885 = 5546LL;
	int8_t x2887 = INT8_MAX;
	int8_t x2888 = 1;
	volatile int64_t t64 = 430670948118944682LL;

	t64 = (x2885&(x2886&(x2887>>x2888)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x2893 = -1;
	static int32_t x2894 = INT32_MAX;

	t65 = (x2893&(x2894&(x2895>>x2896)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x2941 = INT64_MIN;
	uint64_t x2942 = 6LLU;
	static uint16_t x2943 = 4U;
	int16_t x2944 = 1;
	static volatile uint64_t t66 = 934408LLU;

	t66 = (x2941&(x2942&(x2943>>x2944)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x2949 = 25033257815282LLU;
	int32_t x2950 = INT32_MAX;
	uint16_t x2951 = 1U;
	uint64_t t67 = 4714LLU;

	t67 = (x2949&(x2950&(x2951>>x2952)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2974 = INT8_MAX;
	uint32_t x2975 = 6373U;
	int8_t x2976 = 15;
	static uint32_t t68 = 1419774U;

	t68 = (x2973&(x2974&(x2975>>x2976)));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x3121 = INT32_MIN;
	volatile int8_t x3122 = 0;
	int32_t t69 = -8832040;

	t69 = (x3121&(x3122&(x3123>>x3124)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x3177 = INT32_MAX;
	volatile int16_t x3179 = 6703;
	volatile uint8_t x3180 = 1U;

	t70 = (x3177&(x3178&(x3179>>x3180)));

	if (t70 != 3351) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x3193 = INT8_MIN;
	volatile int16_t x3194 = INT16_MIN;
	uint8_t x3196 = 5U;
	volatile uint64_t t71 = 214965LLU;

	t71 = (x3193&(x3194&(x3195>>x3196)));

	if (t71 != 576460752303390720LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x3201 = INT64_MAX;
	uint8_t x3203 = 3U;
	uint16_t x3204 = 16U;
	volatile int64_t t72 = 5894LL;

	t72 = (x3201&(x3202&(x3203>>x3204)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x3225 = -40;
	static int16_t x3226 = INT16_MIN;
	uint64_t x3227 = UINT64_MAX;
	uint16_t x3228 = 2U;

	t73 = (x3225&(x3226&(x3227>>x3228)));

	if (t73 != 4611686018427355136LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x3265 = -1LL;
	int16_t x3266 = INT16_MIN;
	int32_t x3267 = INT32_MAX;
	volatile uint16_t x3268 = 1U;
	int64_t t74 = 44511319783317725LL;

	t74 = (x3265&(x3266&(x3267>>x3268)));

	if (t74 != 1073709056LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x3277 = 42U;
	volatile int32_t x3278 = -4;
	int8_t x3279 = INT8_MAX;
	volatile int8_t x3280 = 0;
	static volatile int32_t t75 = 97;

	t75 = (x3277&(x3278&(x3279>>x3280)));

	if (t75 != 40) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x3405 = 11U;
	volatile int32_t x3406 = INT32_MIN;
	static int32_t x3407 = INT32_MAX;
	uint8_t x3408 = 3U;
	volatile int32_t t76 = 4;

	t76 = (x3405&(x3406&(x3407>>x3408)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x3441 = INT16_MIN;
	static int32_t x3442 = INT32_MIN;
	uint8_t x3443 = 10U;
	int32_t x3444 = 1;
	int32_t t77 = -109;

	t77 = (x3441&(x3442&(x3443>>x3444)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x3653 = INT64_MIN;
	int16_t x3654 = 23;
	volatile int32_t x3655 = 62093826;
	int8_t x3656 = 24;
	volatile int64_t t78 = -17006694107057253LL;

	t78 = (x3653&(x3654&(x3655>>x3656)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x3786 = INT16_MIN;
	int64_t x3787 = 115800LL;
	uint8_t x3788 = 20U;

	t79 = (x3785&(x3786&(x3787>>x3788)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x3817 = 115U;
	volatile int64_t x3818 = INT64_MIN;
	static uint8_t x3820 = 2U;
	volatile int64_t t80 = 1728330475840820646LL;

	t80 = (x3817&(x3818&(x3819>>x3820)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x3845 = UINT16_MAX;
	volatile int64_t x3846 = 51308571LL;
	uint16_t x3847 = UINT16_MAX;
	int16_t x3848 = 1;

	t81 = (x3845&(x3846&(x3847>>x3848)));

	if (t81 != 26651LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x3910 = INT32_MIN;
	int16_t x3911 = INT16_MAX;
	uint8_t x3912 = 1U;

	t82 = (x3909&(x3910&(x3911>>x3912)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x3957 = UINT64_MAX;
	volatile uint8_t x3958 = UINT8_MAX;
	uint16_t x3959 = 1975U;
	int32_t x3960 = 3;
	volatile uint64_t t83 = 71743508088508969LLU;

	t83 = (x3957&(x3958&(x3959>>x3960)));

	if (t83 != 246LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x3978 = INT16_MIN;
	uint32_t x3979 = 40918U;
	uint8_t x3980 = 0U;

	t84 = (x3977&(x3978&(x3979>>x3980)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x4013 = -855;
	int8_t x4014 = 9;
	int8_t x4016 = 6;
	uint32_t t85 = 98750100U;

	t85 = (x4013&(x4014&(x4015>>x4016)));

	if (t85 != 9U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x4033 = 0;
	uint8_t x4034 = 13U;
	volatile int8_t x4036 = 0;

	t86 = (x4033&(x4034&(x4035>>x4036)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x4053 = -5;
	static volatile int64_t x4054 = -1LL;
	uint32_t x4056 = 1U;

	t87 = (x4053&(x4054&(x4055>>x4056)));

	if (t87 != 2128LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x4074 = INT64_MIN;
	int8_t x4075 = 7;
	volatile uint64_t x4076 = 0LLU;

	t88 = (x4073&(x4074&(x4075>>x4076)));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x4137 = -57;
	volatile uint32_t x4139 = UINT32_MAX;
	volatile int8_t x4140 = 2;
	uint32_t t89 = 114871359U;

	t89 = (x4137&(x4138&(x4139>>x4140)));

	if (t89 != 1073741125U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x4241 = INT8_MAX;
	volatile uint16_t x4243 = 5385U;
	uint8_t x4244 = 2U;
	static volatile int32_t t90 = 895713171;

	t90 = (x4241&(x4242&(x4243>>x4244)));

	if (t90 != 66) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x4297 = INT8_MIN;
	int16_t x4298 = INT16_MIN;
	uint64_t x4299 = 266380761LLU;
	uint8_t x4300 = 0U;

	t91 = (x4297&(x4298&(x4299>>x4300)));

	if (t91 != 266371072LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint16_t x4310 = 2599U;
	uint8_t x4312 = 0U;
	volatile int64_t t92 = 21924100008LL;

	t92 = (x4309&(x4310&(x4311>>x4312)));

	if (t92 != 39LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x4373 = -3;
	static int8_t x4374 = 2;
	int32_t x4375 = INT32_MAX;
	int16_t x4376 = 5;
	volatile int32_t t93 = 33;

	t93 = (x4373&(x4374&(x4375>>x4376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x4501 = UINT16_MAX;
	volatile uint16_t x4502 = UINT16_MAX;
	uint16_t x4503 = 16380U;
	static uint8_t x4504 = 3U;
	static int32_t t94 = 190620;

	t94 = (x4501&(x4502&(x4503>>x4504)));

	if (t94 != 2047) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x4557 = INT64_MIN;
	int16_t x4558 = INT16_MIN;
	int32_t x4559 = 1338;
	uint8_t x4560 = 1U;
	volatile int64_t t95 = 99043880538578LL;

	t95 = (x4557&(x4558&(x4559>>x4560)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x4561 = 2;
	int32_t x4562 = 1485630;
	static uint8_t x4563 = 12U;
	int32_t t96 = -28;

	t96 = (x4561&(x4562&(x4563>>x4564)));

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x4569 = -1LL;
	int8_t x4570 = INT8_MIN;
	static uint8_t x4572 = 0U;

	t97 = (x4569&(x4570&(x4571>>x4572)));

	if (t97 != 128LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x4681 = INT64_MAX;
	uint16_t x4682 = 6432U;
	volatile uint64_t x4683 = 3470LLU;
	volatile uint64_t t98 = 2257573083LLU;

	t98 = (x4681&(x4682&(x4683>>x4684)));

	if (t98 != 2304LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x4725 = -29645132813215LL;
	static uint32_t x4726 = UINT32_MAX;
	volatile int8_t x4727 = INT8_MAX;
	static uint8_t x4728 = 3U;
	volatile int64_t t99 = -10169468LL;

	t99 = (x4725&(x4726&(x4727>>x4728)));

	if (t99 != 1LL) { NG(); } else { ; }
	
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

