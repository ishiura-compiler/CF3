#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x21 = -1;
static uint32_t x24 = 0U;
int8_t x56 = 31;
int32_t x129 = INT32_MIN;
uint64_t x130 = UINT64_MAX;
uint8_t x132 = 17U;
uint64_t t2 = 22907149964LLU;
int32_t x190 = -1204;
volatile int32_t t3 = -7;
int16_t x262 = -4195;
volatile int64_t t5 = -15035022709648547LL;
uint16_t x322 = UINT16_MAX;
volatile int8_t x394 = INT8_MIN;
static uint8_t x396 = 2U;
int64_t x513 = -1444518475535LL;
static uint64_t t10 = 33305LLU;
uint32_t x643 = 469U;
int8_t x648 = 53;
uint64_t t13 = 253752894505849LLU;
volatile int16_t x681 = 91;
int32_t x878 = INT32_MAX;
volatile uint8_t x879 = UINT8_MAX;
uint64_t x1125 = 7142LLU;
int16_t x1226 = -19;
int8_t x1345 = 15;
int8_t x1373 = INT8_MAX;
static volatile int32_t t25 = -2913;
volatile int8_t x1436 = 1;
uint32_t x1469 = UINT32_MAX;
int32_t x1470 = -1;
int8_t x1496 = 27;
static int64_t t29 = 11535822LL;
static int8_t x1550 = INT8_MAX;
volatile int32_t t31 = 3098;
int32_t x1579 = -1;
volatile int32_t x1765 = -15;
uint8_t x1787 = UINT8_MAX;
uint16_t x1791 = 9U;
uint32_t x1815 = UINT32_MAX;
int8_t x1816 = 9;
static int64_t x1883 = -1LL;
volatile uint64_t t37 = 864617873244364050LLU;
static int8_t x1909 = INT8_MAX;
volatile uint8_t x1951 = 86U;
volatile int64_t t40 = -834705814021LL;
static uint64_t x1989 = UINT64_MAX;
static volatile int32_t x2055 = INT32_MIN;
uint64_t x2109 = UINT64_MAX;
volatile uint32_t x2125 = 21748U;
static uint32_t x2174 = 0U;
int64_t t47 = 19038865945136480LL;
volatile uint8_t x2346 = 1U;
int8_t x2347 = -1;
int64_t x2359 = -10039309694099276LL;
uint64_t x2453 = 738693LLU;
static int64_t x2454 = INT64_MIN;
static int8_t x2596 = 2;
static uint64_t x2613 = 2857464243349LLU;
uint64_t x2638 = 17010695470LLU;
uint16_t x2642 = 13275U;
uint64_t x2665 = UINT64_MAX;
static uint16_t x2667 = UINT16_MAX;
volatile uint16_t x2701 = 49U;
static int32_t x2703 = -1;
static volatile uint32_t t64 = 251705426U;
static int32_t t65 = 5928117;
uint64_t x3067 = UINT64_MAX;
int8_t x3072 = 1;
static volatile uint32_t x3174 = 12609922U;
uint8_t x3237 = 94U;
uint16_t x3429 = 0U;
volatile uint16_t x3474 = 233U;
uint32_t t74 = 23192U;
volatile uint32_t x3546 = 1742U;
volatile uint32_t t75 = 60932U;
uint32_t x3560 = 1U;
int64_t x3572 = 5LL;
volatile uint64_t t77 = 88418548458926705LLU;
static volatile int32_t t78 = -751888;
static uint16_t x3678 = 13596U;
int64_t x3737 = 1LL;
volatile int64_t t80 = -1LL;
int16_t x3783 = -5;
uint16_t x3805 = 117U;
static int32_t t83 = 12;
int16_t x3901 = -1;
static int32_t t84 = -4745;
static uint32_t t87 = 4984U;
int16_t x4198 = 1;
int16_t x4230 = INT16_MIN;
static int8_t x4231 = -1;
volatile int16_t x4263 = INT16_MIN;
int32_t x4318 = -1;
uint64_t x4323 = UINT64_MAX;
volatile uint64_t t92 = 19871LLU;
int32_t x4403 = INT32_MIN;
uint32_t t93 = 13415U;
static int8_t x4466 = INT8_MIN;
static int64_t x4467 = INT64_MIN;
uint64_t t94 = 1449485LLU;
volatile uint8_t x4540 = 3U;
volatile int32_t t95 = 105300764;
int16_t x4780 = 24;
static volatile uint64_t x4795 = 89393155650676675LLU;
int16_t x4796 = 0;


void f0(void) {
	int64_t x22 = -7546293594047LL;
	int8_t x23 = -1;
	int64_t t0 = 57212081LL;

	t0 = (((x21*x22)%x23)<<x24);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x53 = UINT32_MAX;
	volatile uint64_t x54 = 349352793078553667LLU;
	uint64_t x55 = 45269733LLU;
	uint64_t t1 = 61723659311LLU;

	t1 = (((x53*x54)%x55)<<x56);

	if (t1 != 86501158884999168LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x131 = -1;

	t2 = (((x129*x130)%x131)<<x132);

	if (t2 != 281474976710656LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x189 = 152U;
	int8_t x191 = -1;
	int8_t x192 = 28;

	t3 = (((x189*x190)%x191)<<x192);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x221 = UINT32_MAX;
	static int8_t x222 = INT8_MIN;
	int16_t x223 = INT16_MIN;
	int64_t x224 = 0LL;
	uint32_t t4 = 383677079U;

	t4 = (((x221*x222)%x223)<<x224);

	if (t4 != 128U) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x261 = INT16_MIN;
	int64_t x263 = 181167062164502393LL;
	static volatile int32_t x264 = 18;

	t5 = (((x261*x262)%x263)<<x264);

	if (t5 != 36034775613440LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x293 = UINT64_MAX;
	int64_t x294 = INT64_MIN;
	int32_t x295 = INT32_MIN;
	uint8_t x296 = 26U;
	uint64_t t6 = 722430131347LLU;

	t6 = (((x293*x294)%x295)<<x296);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x321 = UINT8_MAX;
	int64_t x323 = INT64_MAX;
	int16_t x324 = 12;
	int64_t t7 = 785192898318481LL;

	t7 = (((x321*x322)%x323)<<x324);

	if (t7 != 68449996800LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x393 = 2U;
	int64_t x395 = INT64_MIN;
	volatile int64_t t8 = 882741942287321LL;

	t8 = (((x393*x394)%x395)<<x396);

	if (t8 != 17179868160LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x514 = INT16_MIN;
	static int16_t x515 = -1;
	int8_t x516 = 0;
	static volatile int64_t t9 = -201232145392513627LL;

	t9 = (((x513*x514)%x515)<<x516);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x561 = 142966804663037208LLU;
	uint16_t x562 = 31U;
	int8_t x563 = INT8_MAX;
	uint8_t x564 = 6U;

	t10 = (((x561*x562)%x563)<<x564);

	if (t10 != 5888LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x641 = 1;
	int32_t x642 = -36;
	uint8_t x644 = 6U;
	uint32_t t11 = 214318096U;

	t11 = (((x641*x642)%x643)<<x644);

	if (t11 != 21248U) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x645 = -14;
	volatile uint32_t x646 = 1U;
	uint64_t x647 = 430250880LLU;
	uint64_t t12 = 33LLU;

	t12 = (((x645*x646)%x647)<<x648);

	if (t12 != 1026820715040473088LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x661 = INT16_MIN;
	int32_t x662 = -123;
	uint64_t x663 = 1597856LLU;
	uint8_t x664 = 35U;

	t13 = (((x661*x662)%x663)<<x664);

	if (t13 != 28681860322164736LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x682 = 9891850LL;
	static int16_t x683 = INT16_MAX;
	uint8_t x684 = 4U;
	volatile int64_t t14 = 117LL;

	t14 = (((x681*x682)%x683)<<x684);

	if (t14 != 257488LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x877 = 0U;
	uint8_t x880 = 3U;
	int32_t t15 = 4086967;

	t15 = (((x877*x878)%x879)<<x880);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x957 = 1;
	static int8_t x958 = 2;
	uint8_t x959 = UINT8_MAX;
	static uint8_t x960 = 5U;
	static int32_t t16 = -125;

	t16 = (((x957*x958)%x959)<<x960);

	if (t16 != 64) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x977 = INT16_MAX;
	int64_t x978 = 943985591LL;
	int16_t x979 = 14;
	volatile uint8_t x980 = 13U;
	volatile int64_t t17 = 100285803656LL;

	t17 = (((x977*x978)%x979)<<x980);

	if (t17 != 57344LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x1126 = INT16_MIN;
	uint64_t x1127 = 70198118146385LLU;
	volatile uint8_t x1128 = 2U;
	uint64_t t18 = 191016424375739845LLU;

	t18 = (((x1125*x1126)%x1127)<<x1128);

	if (t18 != 49555401303500LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x1157 = 11502732;
	uint64_t x1158 = 0LLU;
	int16_t x1159 = 8355;
	int32_t x1160 = 1;
	uint64_t t19 = 235942244387547714LLU;

	t19 = (((x1157*x1158)%x1159)<<x1160);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x1221 = -1;
	int8_t x1222 = -1;
	uint64_t x1223 = 34175LLU;
	uint16_t x1224 = 28U;
	uint64_t t20 = 1503292032399342606LLU;

	t20 = (((x1221*x1222)%x1223)<<x1224);

	if (t20 != 268435456LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1225 = 19325240LLU;
	int16_t x1227 = INT16_MIN;
	volatile uint8_t x1228 = 1U;
	uint64_t t21 = 91LLU;

	t21 = (((x1225*x1226)%x1227)<<x1228);

	if (t21 != 18446744072975192496LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1317 = 1U;
	static volatile uint16_t x1318 = UINT16_MAX;
	int32_t x1319 = -12035004;
	static int8_t x1320 = 1;
	int32_t t22 = 215;

	t22 = (((x1317*x1318)%x1319)<<x1320);

	if (t22 != 131070) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1346 = UINT8_MAX;
	volatile int64_t x1347 = INT64_MIN;
	volatile uint16_t x1348 = 13U;
	int64_t t23 = 873541061459594LL;

	t23 = (((x1345*x1346)%x1347)<<x1348);

	if (t23 != 31334400LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1349 = 106124U;
	int16_t x1350 = INT16_MAX;
	uint16_t x1351 = 14U;
	uint8_t x1352 = 1U;
	uint32_t t24 = 7186U;

	t24 = (((x1349*x1350)%x1351)<<x1352);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1374 = UINT16_MAX;
	static int16_t x1375 = INT16_MAX;
	static int8_t x1376 = 8;

	t25 = (((x1373*x1374)%x1375)<<x1376);

	if (t25 != 32512) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x1433 = -1;
	int64_t x1434 = -109596943088LL;
	int32_t x1435 = INT32_MIN;
	int64_t t26 = 114793008180744123LL;

	t26 = (((x1433*x1434)%x1435)<<x1436);

	if (t26 != 150554080LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1471 = -1257LL;
	volatile int16_t x1472 = 45;
	static int64_t t27 = -5LL;

	t27 = (((x1469*x1470)%x1471)<<x1472);

	if (t27 != 35184372088832LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x1481 = 14U;
	int64_t x1482 = -1LL;
	uint64_t x1483 = UINT64_MAX;
	uint64_t x1484 = 0LLU;
	uint64_t t28 = 2132282987203976929LLU;

	t28 = (((x1481*x1482)%x1483)<<x1484);

	if (t28 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x1493 = -1LL;
	int8_t x1494 = 3;
	int64_t x1495 = -1LL;

	t29 = (((x1493*x1494)%x1495)<<x1496);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1533 = 2387315885112LLU;
	static volatile uint8_t x1534 = 1U;
	uint32_t x1535 = 2875238U;
	uint8_t x1536 = 0U;
	uint64_t t30 = 19714769239099LLU;

	t30 = (((x1533*x1534)%x1535)<<x1536);

	if (t30 != 23236LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1549 = 0;
	int32_t x1551 = INT32_MAX;
	volatile uint8_t x1552 = 15U;

	t31 = (((x1549*x1550)%x1551)<<x1552);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1577 = 31102715LLU;
	int32_t x1578 = INT32_MIN;
	static volatile uint32_t x1580 = 1U;
	static uint64_t t32 = 910589856662LLU;

	t32 = (((x1577*x1578)%x1579)<<x1580);

	if (t32 != 18313158929967742976LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x1766 = 42187013U;
	static uint8_t x1767 = 104U;
	uint8_t x1768 = 4U;
	uint32_t t33 = 40342U;

	t33 = (((x1765*x1766)%x1767)<<x1768);

	if (t33 != 208U) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x1785 = -28;
	int32_t x1786 = -1;
	static int8_t x1788 = 0;
	volatile int32_t t34 = 6;

	t34 = (((x1785*x1786)%x1787)<<x1788);

	if (t34 != 28) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x1789 = 434890056LLU;
	int32_t x1790 = -4382440;
	volatile uint16_t x1792 = 22U;
	uint64_t t35 = 17981874LLU;

	t35 = (((x1789*x1790)%x1791)<<x1792);

	if (t35 != 16777216LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x1813 = 5202LLU;
	volatile uint64_t x1814 = UINT64_MAX;
	volatile uint64_t t36 = 5080988478168LLU;

	t36 = (((x1813*x1814)%x1815)<<x1816);

	if (t36 != 2199020592128LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x1881 = UINT64_MAX;
	static int8_t x1882 = INT8_MAX;
	uint8_t x1884 = 12U;

	t37 = (((x1881*x1882)%x1883)<<x1884);

	if (t37 != 18446744073709031424LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x1893 = 0;
	int64_t x1894 = INT64_MIN;
	uint8_t x1895 = 9U;
	uint64_t x1896 = 11LLU;
	volatile int64_t t38 = 46183519LL;

	t38 = (((x1893*x1894)%x1895)<<x1896);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1910 = 0LL;
	uint8_t x1911 = UINT8_MAX;
	int32_t x1912 = 3;
	int64_t t39 = -1LL;

	t39 = (((x1909*x1910)%x1911)<<x1912);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1949 = 37167LL;
	volatile uint16_t x1950 = UINT16_MAX;
	uint8_t x1952 = 0U;

	t40 = (((x1949*x1950)%x1951)<<x1952);

	if (t40 != 45LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x1990 = 55U;
	int32_t x1991 = INT32_MAX;
	static int8_t x1992 = 1;
	volatile uint64_t t41 = 4249926308362LLU;

	t41 = (((x1989*x1990)%x1991)<<x1992);

	if (t41 != 4294967192LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x2025 = 7946156510588408117LLU;
	static uint16_t x2026 = 110U;
	int64_t x2027 = -51867031612726LL;
	int32_t x2028 = 48;
	uint64_t t42 = 0LLU;

	t42 = (((x2025*x2026)%x2027)<<x2028);

	if (t42 != 7261491449181503488LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x2037 = INT8_MIN;
	int16_t x2038 = INT16_MAX;
	static uint16_t x2039 = 7U;
	int8_t x2040 = 13;
	static volatile int32_t t43 = -48;

	t43 = (((x2037*x2038)%x2039)<<x2040);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x2053 = UINT64_MAX;
	volatile int8_t x2054 = INT8_MAX;
	int32_t x2056 = 34;
	volatile uint64_t t44 = 158875652380571578LLU;

	t44 = (((x2053*x2054)%x2055)<<x2056);

	if (t44 != 18446741891866165248LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x2110 = 1890605U;
	int16_t x2111 = -1;
	static uint64_t x2112 = 0LLU;
	volatile uint64_t t45 = 20383LLU;

	t45 = (((x2109*x2110)%x2111)<<x2112);

	if (t45 != 18446744073707661011LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2126 = 101183;
	static int32_t x2127 = -1;
	int16_t x2128 = 16;
	static uint32_t t46 = 247339763U;

	t46 = (((x2125*x2126)%x2127)<<x2128);

	if (t46 != 1678508032U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2173 = -19LL;
	static int64_t x2175 = INT64_MAX;
	static int64_t x2176 = 14LL;

	t47 = (((x2173*x2174)%x2175)<<x2176);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x2205 = 1113220U;
	uint32_t x2206 = 105596U;
	volatile int32_t x2207 = -1;
	int8_t x2208 = 0;
	volatile uint32_t t48 = 867956813U;

	t48 = (((x2205*x2206)%x2207)<<x2208);

	if (t48 != 1587462128U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2233 = -61539874;
	uint32_t x2234 = 26U;
	uint32_t x2235 = 226152U;
	uint8_t x2236 = 5U;
	volatile uint32_t t49 = 73035634U;

	t49 = (((x2233*x2234)%x2235)<<x2236);

	if (t49 != 3306880U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2321 = -646884LL;
	uint8_t x2322 = UINT8_MAX;
	static uint8_t x2323 = UINT8_MAX;
	int16_t x2324 = 52;
	int64_t t50 = -12LL;

	t50 = (((x2321*x2322)%x2323)<<x2324);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x2345 = 109U;
	volatile uint32_t x2348 = 3U;
	volatile int32_t t51 = -1;

	t51 = (((x2345*x2346)%x2347)<<x2348);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x2357 = 10958805U;
	int8_t x2358 = -1;
	static volatile uint8_t x2360 = 1U;
	int64_t t52 = 3LL;

	t52 = (((x2357*x2358)%x2359)<<x2360);

	if (t52 != 8568016982LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x2455 = 8161;
	uint8_t x2456 = 1U;
	volatile uint64_t t53 = 8585304175711109020LLU;

	t53 = (((x2453*x2454)%x2455)<<x2456);

	if (t53 != 4262LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2509 = -4135195599992592LL;
	static int64_t x2510 = 73LL;
	int8_t x2511 = 2;
	uint64_t x2512 = 47LLU;
	volatile int64_t t54 = 37LL;

	t54 = (((x2509*x2510)%x2511)<<x2512);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2593 = INT16_MIN;
	int8_t x2594 = -1;
	volatile int16_t x2595 = INT16_MAX;
	static int32_t t55 = 863333;

	t55 = (((x2593*x2594)%x2595)<<x2596);

	if (t55 != 4) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x2614 = 11529U;
	uint16_t x2615 = UINT16_MAX;
	uint8_t x2616 = 30U;
	uint64_t t56 = 729077035327LLU;

	t56 = (((x2613*x2614)%x2615)<<x2616);

	if (t56 != 43573516959744LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x2637 = INT32_MIN;
	volatile uint32_t x2639 = 52U;
	volatile uint32_t x2640 = 10U;
	volatile uint64_t t57 = 27943674LLU;

	t57 = (((x2637*x2638)%x2639)<<x2640);

	if (t57 != 36864LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x2641 = 23U;
	volatile int16_t x2643 = -13;
	static volatile uint32_t x2644 = 8U;
	volatile int32_t t58 = 0;

	t58 = (((x2641*x2642)%x2643)<<x2644);

	if (t58 != 1792) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2666 = INT16_MIN;
	uint8_t x2668 = 1U;
	static volatile uint64_t t59 = 5912481582361449091LLU;

	t59 = (((x2665*x2666)%x2667)<<x2668);

	if (t59 != 65536LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x2702 = -1;
	uint8_t x2704 = 4U;
	volatile int32_t t60 = 20321477;

	t60 = (((x2701*x2702)%x2703)<<x2704);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2741 = -1;
	int8_t x2742 = INT8_MAX;
	int16_t x2743 = 1;
	int32_t x2744 = 1;
	int32_t t61 = 44850755;

	t61 = (((x2741*x2742)%x2743)<<x2744);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2749 = INT8_MIN;
	int8_t x2750 = INT8_MIN;
	uint32_t x2751 = UINT32_MAX;
	volatile uint16_t x2752 = 0U;
	volatile uint32_t t62 = 4908659U;

	t62 = (((x2749*x2750)%x2751)<<x2752);

	if (t62 != 16384U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2917 = -1;
	int32_t x2918 = INT32_MAX;
	static uint32_t x2919 = 85094U;
	uint8_t x2920 = 24U;
	uint32_t t63 = 7U;

	t63 = (((x2917*x2918)%x2919)<<x2920);

	if (t63 != 150994944U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3025 = 1;
	int32_t x3026 = INT32_MIN;
	uint32_t x3027 = 61569U;
	int64_t x3028 = 13LL;

	t64 = (((x3025*x3026)%x3027)<<x3028);

	if (t64 != 151527424U) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x3033 = -1;
	int8_t x3034 = -1;
	int16_t x3035 = -1;
	uint8_t x3036 = 7U;

	t65 = (((x3033*x3034)%x3035)<<x3036);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x3053 = -1;
	int16_t x3054 = -1;
	int8_t x3055 = INT8_MIN;
	uint16_t x3056 = 5U;
	volatile int32_t t66 = 236;

	t66 = (((x3053*x3054)%x3055)<<x3056);

	if (t66 != 32) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x3065 = -1;
	int8_t x3066 = INT8_MIN;
	uint8_t x3068 = 2U;
	volatile uint64_t t67 = 1406977245824LLU;

	t67 = (((x3065*x3066)%x3067)<<x3068);

	if (t67 != 512LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3069 = INT8_MIN;
	int8_t x3070 = 0;
	volatile int64_t x3071 = INT64_MAX;
	volatile int64_t t68 = -34809514898085034LL;

	t68 = (((x3069*x3070)%x3071)<<x3072);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x3173 = 913407880LLU;
	uint32_t x3175 = 12U;
	uint8_t x3176 = 12U;
	uint64_t t69 = 42115406095LLU;

	t69 = (((x3173*x3174)%x3175)<<x3176);

	if (t69 != 16384LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x3238 = INT16_MIN;
	uint64_t x3239 = UINT64_MAX;
	int8_t x3240 = 0;
	uint64_t t70 = 7531LLU;

	t70 = (((x3237*x3238)%x3239)<<x3240);

	if (t70 != 18446744073706471424LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x3241 = UINT64_MAX;
	int32_t x3242 = 6634596;
	uint8_t x3243 = UINT8_MAX;
	uint16_t x3244 = 41U;
	volatile uint64_t t71 = 222430552687LLU;

	t71 = (((x3241*x3242)%x3243)<<x3244);

	if (t71 != 549755813888000LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x3430 = UINT64_MAX;
	static int8_t x3431 = 1;
	uint32_t x3432 = 3U;
	uint64_t t72 = 1LLU;

	t72 = (((x3429*x3430)%x3431)<<x3432);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x3473 = INT8_MAX;
	int8_t x3475 = 31;
	volatile int16_t x3476 = 7;
	int32_t t73 = 88;

	t73 = (((x3473*x3474)%x3475)<<x3476);

	if (t73 != 2176) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x3505 = UINT32_MAX;
	uint8_t x3506 = 99U;
	int32_t x3507 = -788871115;
	int8_t x3508 = 20;

	t74 = (((x3505*x3506)%x3507)<<x3508);

	if (t74 != 1988100096U) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x3545 = INT32_MIN;
	static volatile int32_t x3547 = -183909410;
	volatile int32_t x3548 = 0;

	t75 = (((x3545*x3546)%x3547)<<x3548);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x3557 = UINT8_MAX;
	static uint16_t x3558 = UINT16_MAX;
	int32_t x3559 = INT32_MIN;
	volatile int32_t t76 = -1102;

	t76 = (((x3557*x3558)%x3559)<<x3560);

	if (t76 != 33422850) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x3569 = -7;
	volatile uint64_t x3570 = 118932517242484363LLU;
	uint32_t x3571 = 120779U;

	t77 = (((x3569*x3570)%x3571)<<x3572);

	if (t77 != 3273152LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x3593 = -1;
	static uint8_t x3594 = 0U;
	int8_t x3595 = 3;
	uint8_t x3596 = 7U;

	t78 = (((x3593*x3594)%x3595)<<x3596);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x3677 = 1U;
	uint32_t x3679 = 33519848U;
	static uint8_t x3680 = 17U;
	static uint32_t t79 = 13U;

	t79 = (((x3677*x3678)%x3679)<<x3680);

	if (t79 != 1782054912U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x3738 = UINT32_MAX;
	static int16_t x3739 = INT16_MAX;
	uint8_t x3740 = 4U;

	t80 = (((x3737*x3738)%x3739)<<x3740);

	if (t80 != 48LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x3761 = -56;
	uint64_t x3762 = 24090245689847LLU;
	int64_t x3763 = INT64_MIN;
	int8_t x3764 = 6;
	static uint64_t t81 = 4LLU;

	t81 = (((x3761*x3762)%x3763)<<x3764);

	if (t81 != 18360404633157139968LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x3781 = 898;
	int16_t x3782 = INT16_MAX;
	uint64_t x3784 = 3LLU;
	volatile int32_t t82 = 24;

	t82 = (((x3781*x3782)%x3783)<<x3784);

	if (t82 != 8) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x3806 = -1;
	uint8_t x3807 = 1U;
	uint32_t x3808 = 1U;

	t83 = (((x3805*x3806)%x3807)<<x3808);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x3902 = INT16_MIN;
	int8_t x3903 = 1;
	uint8_t x3904 = 28U;

	t84 = (((x3901*x3902)%x3903)<<x3904);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x3973 = 105U;
	uint32_t x3974 = UINT32_MAX;
	volatile int32_t x3975 = INT32_MIN;
	uint16_t x3976 = 3U;
	volatile uint32_t t85 = 8U;

	t85 = (((x3973*x3974)%x3975)<<x3976);

	if (t85 != 4294966456U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x4065 = INT16_MIN;
	int8_t x4066 = INT8_MIN;
	static volatile int16_t x4067 = 95;
	int8_t x4068 = 6;
	volatile int32_t t86 = -601767915;

	t86 = (((x4065*x4066)%x4067)<<x4068);

	if (t86 != 3456) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x4117 = INT16_MAX;
	int16_t x4118 = -42;
	static uint32_t x4119 = UINT32_MAX;
	static uint16_t x4120 = 4U;

	t87 = (((x4117*x4118)%x4119)<<x4120);

	if (t87 != 4272947872U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x4197 = 3U;
	uint64_t x4199 = 8949LLU;
	uint32_t x4200 = 6U;
	uint64_t t88 = 875093447LLU;

	t88 = (((x4197*x4198)%x4199)<<x4200);

	if (t88 != 192LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x4229 = 1;
	uint16_t x4232 = 1U;
	volatile int32_t t89 = 88232914;

	t89 = (((x4229*x4230)%x4231)<<x4232);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x4261 = -1;
	int16_t x4262 = -1;
	uint8_t x4264 = 12U;
	int32_t t90 = -38735;

	t90 = (((x4261*x4262)%x4263)<<x4264);

	if (t90 != 4096) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x4317 = UINT64_MAX;
	volatile int16_t x4319 = INT16_MAX;
	int8_t x4320 = 9;
	uint64_t t91 = 2031168283LLU;

	t91 = (((x4317*x4318)%x4319)<<x4320);

	if (t91 != 512LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x4321 = 7;
	uint8_t x4322 = UINT8_MAX;
	int16_t x4324 = 0;

	t92 = (((x4321*x4322)%x4323)<<x4324);

	if (t92 != 1785LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x4401 = INT16_MIN;
	uint32_t x4402 = UINT32_MAX;
	uint32_t x4404 = 8U;

	t93 = (((x4401*x4402)%x4403)<<x4404);

	if (t93 != 8388608U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x4465 = UINT64_MAX;
	volatile int8_t x4468 = 20;

	t94 = (((x4465*x4466)%x4467)<<x4468);

	if (t94 != 134217728LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x4537 = INT16_MAX;
	int32_t x4538 = 60;
	int32_t x4539 = -503696326;

	t95 = (((x4537*x4538)%x4539)<<x4540);

	if (t95 != 15728160) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x4541 = UINT64_MAX;
	int64_t x4542 = INT64_MAX;
	uint32_t x4543 = 15636648U;
	volatile uint8_t x4544 = 0U;
	uint64_t t96 = 503LLU;

	t96 = (((x4541*x4542)%x4543)<<x4544);

	if (t96 != 3240129LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x4777 = INT8_MIN;
	int16_t x4778 = 1;
	uint32_t x4779 = UINT32_MAX;
	static volatile uint32_t t97 = 42445210U;

	t97 = (((x4777*x4778)%x4779)<<x4780);

	if (t97 != 2147483648U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x4793 = 119U;
	volatile int16_t x4794 = INT16_MIN;
	uint64_t t98 = 2633039266325843371LLU;

	t98 = (((x4793*x4794)%x4795)<<x4796);

	if (t98 != 31754009666257174LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x4809 = INT16_MAX;
	static volatile uint64_t x4810 = UINT64_MAX;
	uint8_t x4811 = 9U;
	int8_t x4812 = 1;
	static uint64_t t99 = 4378263953699LLU;

	t99 = (((x4809*x4810)%x4811)<<x4812);

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

