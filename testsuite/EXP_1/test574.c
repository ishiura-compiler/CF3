#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x30 = -1;
uint16_t x31 = 0U;
int8_t x32 = INT8_MIN;
uint64_t t0 = 5345123LLU;
uint8_t x55 = 5U;
static volatile int8_t x131 = 3;
volatile int64_t t2 = 1LL;
static int8_t x307 = 1;
volatile uint32_t t9 = 2073947952U;
volatile int32_t x493 = INT32_MIN;
volatile int32_t x496 = INT32_MAX;
static int8_t x597 = -1;
int16_t x765 = INT16_MIN;
int64_t x766 = -1LL;
uint64_t x861 = UINT64_MAX;
uint32_t x863 = 23U;
int16_t x864 = INT16_MAX;
int16_t x965 = -1;
int32_t x966 = -2;
int16_t x968 = INT16_MIN;
uint64_t x1122 = UINT64_MAX;
uint8_t x1124 = UINT8_MAX;
int16_t x1205 = INT16_MAX;
uint16_t x1213 = 177U;
uint32_t x1215 = 5U;
int32_t x1230 = INT32_MIN;
volatile uint8_t x1232 = 0U;
int32_t t28 = -14698;
static int16_t x1281 = INT16_MAX;
int8_t x1333 = INT8_MIN;
static uint8_t x1363 = 1U;
int32_t x1364 = INT32_MAX;
volatile uint32_t x1413 = UINT32_MAX;
static int32_t x1478 = 149788446;
static uint8_t x1571 = 0U;
uint16_t x1605 = UINT16_MAX;
uint16_t x1607 = 1U;
int32_t x1608 = INT32_MAX;
int64_t x1648 = -1LL;
int64_t x1790 = 912898LL;
uint16_t x1915 = 6U;
uint16_t x1987 = 4U;
static uint64_t x2041 = UINT64_MAX;
int16_t x2044 = INT16_MIN;
volatile uint64_t t50 = 50196195959667872LLU;
volatile int32_t t53 = 305258;
int64_t x2203 = 27LL;
volatile uint32_t x2204 = UINT32_MAX;
int64_t x2254 = 563735699937LL;
uint64_t t56 = 325450403085307884LLU;
uint8_t x2281 = UINT8_MAX;
static uint8_t x2283 = 3U;
static uint8_t x2350 = 51U;
volatile int32_t t62 = -1;
volatile uint32_t x2425 = 55780452U;
static uint8_t x2532 = 1U;
int32_t x2546 = 213;
uint8_t x2632 = UINT8_MAX;
volatile int32_t t69 = -1;
int16_t x2777 = -1;
volatile uint8_t x2779 = 0U;
uint32_t x2842 = UINT32_MAX;
static volatile int32_t x2921 = -458;
uint8_t x2923 = 31U;
int16_t x2947 = 16;
volatile int8_t x2985 = INT8_MAX;
int32_t t78 = -1;
volatile uint8_t x3214 = UINT8_MAX;
volatile int32_t t81 = 5007029;
volatile int64_t x3282 = 116150521663973LL;
int64_t t82 = -69365912LL;
uint64_t x3365 = 1138759430790LLU;
static uint64_t x3366 = 898LLU;
volatile int32_t t85 = 1221;
static int8_t x3395 = 6;
uint8_t x3421 = UINT8_MAX;
uint8_t x3423 = 13U;
static int8_t x3424 = 19;
int8_t x3449 = INT8_MIN;
int64_t x3450 = INT64_MAX;
int32_t t89 = -7452995;
static int16_t x3526 = INT16_MIN;
volatile int8_t x3628 = 6;
volatile uint64_t t96 = 717275006961856LLU;
int8_t x3647 = 13;
int32_t x3658 = INT32_MIN;


void f0(void) {
	static uint64_t x29 = UINT64_MAX;

	t0 = (((x29/x30)<<x31)-x32);

	if (t0 != 129LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x53 = 25U;
	int64_t x54 = INT64_MIN;
	volatile uint32_t x56 = 235819U;
	int64_t t1 = 1LL;

	t1 = (((x53/x54)<<x55)-x56);

	if (t1 != -235819LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x129 = -27;
	int64_t x130 = -507313857LL;
	volatile int8_t x132 = INT8_MIN;

	t2 = (((x129/x130)<<x131)-x132);

	if (t2 != 128LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x157 = INT16_MIN;
	int64_t x158 = INT64_MIN;
	uint8_t x159 = 0U;
	int8_t x160 = INT8_MIN;
	volatile int64_t t3 = -593LL;

	t3 = (((x157/x158)<<x159)-x160);

	if (t3 != 128LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x241 = INT8_MIN;
	static volatile int32_t x242 = 12209;
	static uint16_t x243 = 6U;
	int64_t x244 = -6LL;
	volatile int64_t t4 = -7049023335767222LL;

	t4 = (((x241/x242)<<x243)-x244);

	if (t4 != 6LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x253 = 2903288035647383980LLU;
	int64_t x254 = -187156040LL;
	uint8_t x255 = 2U;
	static volatile int16_t x256 = INT16_MIN;
	static uint64_t t5 = 99LLU;

	t5 = (((x253/x254)<<x255)-x256);

	if (t5 != 32768LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x261 = 49U;
	int16_t x262 = INT16_MAX;
	int8_t x263 = 26;
	uint8_t x264 = 3U;
	int32_t t6 = -18636030;

	t6 = (((x261/x262)<<x263)-x264);

	if (t6 != -3) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x305 = INT16_MIN;
	uint32_t x306 = 4808U;
	int32_t x308 = -1;
	volatile uint32_t t7 = 235072094U;

	t7 = (((x305/x306)<<x307)-x308);

	if (t7 != 1786579U) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x325 = INT16_MIN;
	uint64_t x326 = 982714329284236LLU;
	static uint8_t x327 = 53U;
	uint16_t x328 = 48U;
	uint64_t t8 = 60775161061631LLU;

	t8 = (((x325/x326)<<x327)-x328);

	if (t8 != 3053440547357196240LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x353 = INT16_MAX;
	int32_t x354 = INT32_MAX;
	uint8_t x355 = 29U;
	uint32_t x356 = 311278U;

	t9 = (((x353/x354)<<x355)-x356);

	if (t9 != 4294656018U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x373 = INT8_MIN;
	volatile int8_t x374 = INT8_MIN;
	uint8_t x375 = 0U;
	volatile int8_t x376 = 1;
	static volatile int32_t t10 = -5;

	t10 = (((x373/x374)<<x375)-x376);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x481 = 1210857U;
	int32_t x482 = -22515;
	int8_t x483 = 14;
	volatile int16_t x484 = INT16_MIN;
	uint32_t t11 = 0U;

	t11 = (((x481/x482)<<x483)-x484);

	if (t11 != 32768U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x494 = INT16_MIN;
	int16_t x495 = 0;
	static volatile int32_t t12 = 208452;

	t12 = (((x493/x494)<<x495)-x496);

	if (t12 != -2147418111) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x561 = 10U;
	uint32_t x562 = 6724990U;
	uint8_t x563 = 7U;
	int8_t x564 = INT8_MAX;
	uint32_t t13 = 7U;

	t13 = (((x561/x562)<<x563)-x564);

	if (t13 != 4294967169U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x598 = UINT16_MAX;
	uint16_t x599 = 0U;
	uint8_t x600 = UINT8_MAX;
	int32_t t14 = -864727616;

	t14 = (((x597/x598)<<x599)-x600);

	if (t14 != -255) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x625 = 1LLU;
	uint64_t x626 = 54062743588587LLU;
	uint8_t x627 = 2U;
	int32_t x628 = INT32_MIN;
	static volatile uint64_t t15 = 823549981807LLU;

	t15 = (((x625/x626)<<x627)-x628);

	if (t15 != 2147483648LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x721 = -1;
	uint64_t x722 = UINT64_MAX;
	uint64_t x723 = 0LLU;
	int32_t x724 = -1;
	volatile uint64_t t16 = 886431425874LLU;

	t16 = (((x721/x722)<<x723)-x724);

	if (t16 != 2LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x767 = 35U;
	int8_t x768 = INT8_MAX;
	volatile int64_t t17 = -125LL;

	t17 = (((x765/x766)<<x767)-x768);

	if (t17 != 1125899906842497LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x805 = 171U;
	uint8_t x806 = UINT8_MAX;
	volatile int8_t x807 = 1;
	volatile uint32_t x808 = UINT32_MAX;
	volatile uint32_t t18 = 200U;

	t18 = (((x805/x806)<<x807)-x808);

	if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x862 = 1U;
	volatile uint64_t t19 = 1994851557868790286LLU;

	t19 = (((x861/x862)<<x863)-x864);

	if (t19 != 18446744073701130241LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x869 = UINT64_MAX;
	int32_t x870 = -1;
	uint8_t x871 = 0U;
	int32_t x872 = INT32_MIN;
	static uint64_t t20 = 45439192310771LLU;

	t20 = (((x869/x870)<<x871)-x872);

	if (t20 != 2147483649LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x877 = INT64_MAX;
	uint64_t x878 = 7157414192932LLU;
	int8_t x879 = 1;
	int64_t x880 = 12726909LL;
	volatile uint64_t t21 = 1146061061586482LLU;

	t21 = (((x877/x878)<<x879)-x880);

	if (t21 != 18446744073699401997LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x967 = 0U;
	volatile int32_t t22 = -64117;

	t22 = (((x965/x966)<<x967)-x968);

	if (t22 != 32768) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x1029 = -1;
	int32_t x1030 = INT32_MIN;
	uint8_t x1031 = 0U;
	static uint16_t x1032 = 1U;
	volatile int32_t t23 = -303516;

	t23 = (((x1029/x1030)<<x1031)-x1032);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1121 = UINT8_MAX;
	uint8_t x1123 = 0U;
	volatile uint64_t t24 = 127156360680101LLU;

	t24 = (((x1121/x1122)<<x1123)-x1124);

	if (t24 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1206 = -1224657003171497LL;
	uint8_t x1207 = 26U;
	uint8_t x1208 = 0U;
	volatile int64_t t25 = 899346065LL;

	t25 = (((x1205/x1206)<<x1207)-x1208);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1214 = UINT8_MAX;
	uint16_t x1216 = 63U;
	volatile int32_t t26 = 1;

	t26 = (((x1213/x1214)<<x1215)-x1216);

	if (t26 != -63) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1229 = INT16_MIN;
	int8_t x1231 = 0;
	int32_t t27 = -10316;

	t27 = (((x1229/x1230)<<x1231)-x1232);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x1257 = 2U;
	uint8_t x1258 = UINT8_MAX;
	uint32_t x1259 = 6U;
	int8_t x1260 = 1;

	t28 = (((x1257/x1258)<<x1259)-x1260);

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1273 = 4126209885126045LLU;
	static uint8_t x1274 = 86U;
	uint8_t x1275 = 13U;
	static uint8_t x1276 = 10U;
	uint64_t t29 = 384620099983886LLU;

	t29 = (((x1273/x1274)<<x1275)-x1276);

	if (t29 != 393045481150603254LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1282 = UINT8_MAX;
	int8_t x1283 = 0;
	static uint16_t x1284 = 38U;
	volatile int32_t t30 = -76;

	t30 = (((x1281/x1282)<<x1283)-x1284);

	if (t30 != 90) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x1334 = INT64_MIN;
	volatile uint8_t x1335 = 0U;
	uint8_t x1336 = UINT8_MAX;
	volatile int64_t t31 = 0LL;

	t31 = (((x1333/x1334)<<x1335)-x1336);

	if (t31 != -255LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1361 = INT32_MIN;
	volatile uint64_t x1362 = 11902305962999LLU;
	uint64_t t32 = 105199015883419LLU;

	t32 = (((x1361/x1362)<<x1363)-x1364);

	if (t32 != 18446744071565167661LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x1414 = INT64_MAX;
	uint32_t x1415 = 0U;
	static int16_t x1416 = 1;
	volatile int64_t t33 = 98574047LL;

	t33 = (((x1413/x1414)<<x1415)-x1416);

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x1465 = -1;
	volatile uint64_t x1466 = UINT64_MAX;
	uint8_t x1467 = 0U;
	uint16_t x1468 = 1U;
	uint64_t t34 = 205LLU;

	t34 = (((x1465/x1466)<<x1467)-x1468);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1477 = UINT64_MAX;
	static int8_t x1479 = 6;
	int64_t x1480 = -1LL;
	uint64_t t35 = 7632287267141LLU;

	t35 = (((x1477/x1478)<<x1479)-x1480);

	if (t35 != 7881726877057LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1485 = -1;
	volatile int64_t x1486 = 32712105219LL;
	int16_t x1487 = 22;
	int64_t x1488 = INT64_MAX;
	int64_t t36 = 1348653640261599874LL;

	t36 = (((x1485/x1486)<<x1487)-x1488);

	if (t36 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1541 = -1;
	static int64_t x1542 = -1LL;
	uint8_t x1543 = 19U;
	int16_t x1544 = -1;
	static volatile int64_t t37 = 1038841305195439194LL;

	t37 = (((x1541/x1542)<<x1543)-x1544);

	if (t37 != 524289LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1545 = 1;
	int32_t x1546 = -66193798;
	static int8_t x1547 = 1;
	volatile int8_t x1548 = INT8_MAX;
	int32_t t38 = 1;

	t38 = (((x1545/x1546)<<x1547)-x1548);

	if (t38 != -127) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1569 = INT8_MAX;
	uint16_t x1570 = UINT16_MAX;
	int64_t x1572 = -1LL;
	int64_t t39 = 58786LL;

	t39 = (((x1569/x1570)<<x1571)-x1572);

	if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1585 = INT8_MIN;
	static volatile uint8_t x1586 = UINT8_MAX;
	int8_t x1587 = 28;
	uint16_t x1588 = 4019U;
	static volatile int32_t t40 = 1028690593;

	t40 = (((x1585/x1586)<<x1587)-x1588);

	if (t40 != -4019) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1606 = 76114643LLU;
	static volatile uint64_t t41 = 3628790054287LLU;

	t41 = (((x1605/x1606)<<x1607)-x1608);

	if (t41 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x1645 = INT8_MIN;
	uint64_t x1646 = 75594727100LLU;
	int16_t x1647 = 40;
	volatile uint64_t t42 = 482LLU;

	t42 = (((x1645/x1646)<<x1647)-x1648);

	if (t42 != 10050137710733033473LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1705 = -9;
	static uint8_t x1706 = UINT8_MAX;
	int32_t x1707 = 0;
	static int32_t x1708 = -1;
	int32_t t43 = -43;

	t43 = (((x1705/x1706)<<x1707)-x1708);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x1721 = UINT16_MAX;
	static uint32_t x1722 = UINT32_MAX;
	int16_t x1723 = 0;
	static int32_t x1724 = 21414688;
	uint32_t t44 = 35390169U;

	t44 = (((x1721/x1722)<<x1723)-x1724);

	if (t44 != 4273552608U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1789 = INT8_MIN;
	static int8_t x1791 = 0;
	int16_t x1792 = INT16_MAX;
	static int64_t t45 = -37LL;

	t45 = (((x1789/x1790)<<x1791)-x1792);

	if (t45 != -32767LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x1909 = UINT16_MAX;
	static int32_t x1910 = INT32_MIN;
	int64_t x1911 = 1LL;
	int64_t x1912 = -1LL;
	int64_t t46 = 74LL;

	t46 = (((x1909/x1910)<<x1911)-x1912);

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x1913 = INT8_MAX;
	static volatile uint16_t x1914 = UINT16_MAX;
	uint16_t x1916 = 4U;
	int32_t t47 = -1;

	t47 = (((x1913/x1914)<<x1915)-x1916);

	if (t47 != -4) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x1925 = UINT32_MAX;
	int16_t x1926 = INT16_MIN;
	uint8_t x1927 = 30U;
	int32_t x1928 = INT32_MIN;
	volatile uint32_t t48 = 8132819U;

	t48 = (((x1925/x1926)<<x1927)-x1928);

	if (t48 != 3221225472U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x1985 = -1;
	int16_t x1986 = INT16_MIN;
	volatile int64_t x1988 = -9919097803732248LL;
	static volatile int64_t t49 = 1668410LL;

	t49 = (((x1985/x1986)<<x1987)-x1988);

	if (t49 != 9919097803732248LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x2042 = INT16_MIN;
	volatile int8_t x2043 = 0;

	t50 = (((x2041/x2042)<<x2043)-x2044);

	if (t50 != 32769LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint64_t x2061 = UINT64_MAX;
	volatile int64_t x2062 = 396452124157241LL;
	uint8_t x2063 = 20U;
	int8_t x2064 = INT8_MIN;
	volatile uint64_t t51 = 423LLU;

	t51 = (((x2061/x2062)<<x2063)-x2064);

	if (t51 != 48789192832LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x2105 = 5U;
	uint32_t x2106 = 118603U;
	uint8_t x2107 = 6U;
	int64_t x2108 = 1LL;
	static int64_t t52 = 6040183014893LL;

	t52 = (((x2105/x2106)<<x2107)-x2108);

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x2161 = -7;
	int32_t x2162 = INT32_MIN;
	int16_t x2163 = 7;
	int8_t x2164 = -2;

	t53 = (((x2161/x2162)<<x2163)-x2164);

	if (t53 != 2) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x2165 = -120;
	int16_t x2166 = INT16_MAX;
	int16_t x2167 = 14;
	int8_t x2168 = INT8_MIN;
	int32_t t54 = 1;

	t54 = (((x2165/x2166)<<x2167)-x2168);

	if (t54 != 128) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x2201 = -261;
	int8_t x2202 = INT8_MIN;
	volatile uint32_t t55 = 114U;

	t55 = (((x2201/x2202)<<x2203)-x2204);

	if (t55 != 268435457U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x2253 = 332U;
	int8_t x2255 = 2;
	uint64_t x2256 = 1692385418343676839LLU;

	t56 = (((x2253/x2254)<<x2255)-x2256);

	if (t56 != 16754358655365874777LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x2282 = UINT32_MAX;
	volatile int16_t x2284 = INT16_MAX;
	volatile uint32_t t57 = 1619U;

	t57 = (((x2281/x2282)<<x2283)-x2284);

	if (t57 != 4294934529U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x2297 = UINT64_MAX;
	static uint8_t x2298 = 2U;
	int16_t x2299 = 3;
	int32_t x2300 = -89963620;
	volatile uint64_t t58 = 8132433166743LLU;

	t58 = (((x2297/x2298)<<x2299)-x2300);

	if (t58 != 89963612LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2345 = -1;
	int16_t x2346 = -914;
	static uint16_t x2347 = 5U;
	uint16_t x2348 = UINT16_MAX;
	volatile int32_t t59 = 32431;

	t59 = (((x2345/x2346)<<x2347)-x2348);

	if (t59 != -65535) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x2349 = 5U;
	uint8_t x2351 = 1U;
	int16_t x2352 = -1;
	int32_t t60 = 0;

	t60 = (((x2349/x2350)<<x2351)-x2352);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x2365 = -1;
	static uint64_t x2366 = 28421274542LLU;
	int8_t x2367 = 0;
	volatile int32_t x2368 = INT32_MIN;
	volatile uint64_t t61 = 69098991158113LLU;

	t61 = (((x2365/x2366)<<x2367)-x2368);

	if (t61 != 2796530686LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2381 = -1;
	static volatile uint16_t x2382 = 233U;
	static int8_t x2383 = 1;
	static int16_t x2384 = INT16_MIN;

	t62 = (((x2381/x2382)<<x2383)-x2384);

	if (t62 != 32768) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x2426 = INT32_MAX;
	int32_t x2427 = 12;
	int16_t x2428 = INT16_MAX;
	static uint32_t t63 = 1034734590U;

	t63 = (((x2425/x2426)<<x2427)-x2428);

	if (t63 != 4294934529U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x2449 = -195;
	uint8_t x2450 = UINT8_MAX;
	uint8_t x2451 = 5U;
	int8_t x2452 = INT8_MIN;
	volatile int32_t t64 = 6460185;

	t64 = (((x2449/x2450)<<x2451)-x2452);

	if (t64 != 128) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x2489 = -1;
	int16_t x2490 = 491;
	static int16_t x2491 = 1;
	uint64_t x2492 = UINT64_MAX;
	volatile uint64_t t65 = 5993343LLU;

	t65 = (((x2489/x2490)<<x2491)-x2492);

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x2529 = 0U;
	uint64_t x2530 = UINT64_MAX;
	volatile uint8_t x2531 = 39U;
	volatile uint64_t t66 = UINT64_MAX;

	t66 = (((x2529/x2530)<<x2531)-x2532);

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x2545 = 687627389U;
	uint16_t x2547 = 5U;
	uint16_t x2548 = 3U;
	uint32_t t67 = 79U;

	t67 = (((x2545/x2546)<<x2547)-x2548);

	if (t67 != 103305501U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x2609 = INT16_MIN;
	volatile int64_t x2610 = 25912222572LL;
	static uint8_t x2611 = 57U;
	uint16_t x2612 = 30U;
	int64_t t68 = -467943LL;

	t68 = (((x2609/x2610)<<x2611)-x2612);

	if (t68 != -30LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x2629 = INT8_MAX;
	int16_t x2630 = INT16_MAX;
	int16_t x2631 = 1;

	t69 = (((x2629/x2630)<<x2631)-x2632);

	if (t69 != -255) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x2778 = INT32_MIN;
	int32_t x2780 = -1;
	volatile int32_t t70 = 8;

	t70 = (((x2777/x2778)<<x2779)-x2780);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x2841 = 23;
	volatile uint8_t x2843 = 1U;
	uint8_t x2844 = 11U;
	volatile uint32_t t71 = 78127744U;

	t71 = (((x2841/x2842)<<x2843)-x2844);

	if (t71 != 4294967285U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2877 = -1;
	int32_t x2878 = -12129;
	int16_t x2879 = 0;
	int16_t x2880 = INT16_MAX;
	int32_t t72 = -914549507;

	t72 = (((x2877/x2878)<<x2879)-x2880);

	if (t72 != -32767) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x2922 = INT64_MIN;
	int16_t x2924 = 126;
	static volatile int64_t t73 = 12146682918LL;

	t73 = (((x2921/x2922)<<x2923)-x2924);

	if (t73 != -126LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x2941 = 2621211LL;
	volatile int8_t x2942 = INT8_MAX;
	uint8_t x2943 = 1U;
	volatile int64_t x2944 = -39491531LL;
	volatile int64_t t74 = 1043280147LL;

	t74 = (((x2941/x2942)<<x2943)-x2944);

	if (t74 != 39532809LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x2945 = 7527;
	static int8_t x2946 = 2;
	volatile int8_t x2948 = INT8_MIN;
	static int32_t t75 = 1019264096;

	t75 = (((x2945/x2946)<<x2947)-x2948);

	if (t75 != 246612096) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x2957 = INT8_MIN;
	int16_t x2958 = INT16_MIN;
	static uint16_t x2959 = 2U;
	int16_t x2960 = -1;
	int32_t t76 = -34973295;

	t76 = (((x2957/x2958)<<x2959)-x2960);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2986 = INT8_MIN;
	static int16_t x2987 = 3;
	static int64_t x2988 = -1LL;
	static int64_t t77 = -747665LL;

	t77 = (((x2985/x2986)<<x2987)-x2988);

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x3037 = 87U;
	int32_t x3038 = INT32_MAX;
	volatile int8_t x3039 = 14;
	int16_t x3040 = INT16_MIN;

	t78 = (((x3037/x3038)<<x3039)-x3040);

	if (t78 != 32768) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x3093 = -3726875501LL;
	int64_t x3094 = INT64_MIN;
	uint32_t x3095 = 2U;
	uint64_t x3096 = 1660959687325LLU;
	static uint64_t t79 = 19163542225LLU;

	t79 = (((x3093/x3094)<<x3095)-x3096);

	if (t79 != 18446742412749864291LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x3133 = -1;
	static int32_t x3134 = -1;
	uint8_t x3135 = 27U;
	uint32_t x3136 = 257U;
	volatile uint32_t t80 = 19U;

	t80 = (((x3133/x3134)<<x3135)-x3136);

	if (t80 != 134217471U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x3213 = -1;
	volatile uint8_t x3215 = 0U;
	volatile uint8_t x3216 = 28U;

	t81 = (((x3213/x3214)<<x3215)-x3216);

	if (t81 != -28) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x3281 = 667559687;
	static uint8_t x3283 = 0U;
	volatile uint16_t x3284 = 21385U;

	t82 = (((x3281/x3282)<<x3283)-x3284);

	if (t82 != -21385LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x3309 = INT8_MIN;
	int64_t x3310 = -1LL;
	volatile uint64_t x3311 = 1LLU;
	volatile int64_t x3312 = -1LL;
	int64_t t83 = -3051714540588418LL;

	t83 = (((x3309/x3310)<<x3311)-x3312);

	if (t83 != 257LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x3367 = 3;
	volatile int32_t x3368 = INT32_MIN;
	uint64_t t84 = 8303121385100835LLU;

	t84 = (((x3365/x3366)<<x3367)-x3368);

	if (t84 != 12292333808LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x3377 = -792;
	static int8_t x3378 = INT8_MIN;
	int8_t x3379 = 3;
	int8_t x3380 = INT8_MIN;

	t85 = (((x3377/x3378)<<x3379)-x3380);

	if (t85 != 176) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x3393 = 2U;
	static int32_t x3394 = INT32_MIN;
	static uint8_t x3396 = UINT8_MAX;
	int32_t t86 = 7;

	t86 = (((x3393/x3394)<<x3395)-x3396);

	if (t86 != -255) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x3422 = UINT32_MAX;
	static uint32_t t87 = 55894961U;

	t87 = (((x3421/x3422)<<x3423)-x3424);

	if (t87 != 4294967277U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x3451 = 3LLU;
	volatile uint16_t x3452 = UINT16_MAX;
	volatile int64_t t88 = 63LL;

	t88 = (((x3449/x3450)<<x3451)-x3452);

	if (t88 != -65535LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x3473 = -1;
	uint8_t x3474 = 8U;
	static int16_t x3475 = 11;
	int16_t x3476 = INT16_MIN;

	t89 = (((x3473/x3474)<<x3475)-x3476);

	if (t89 != 32768) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x3509 = INT16_MIN;
	int16_t x3510 = INT16_MIN;
	int64_t x3511 = 6LL;
	int32_t x3512 = INT32_MAX;
	volatile int32_t t90 = 386215;

	t90 = (((x3509/x3510)<<x3511)-x3512);

	if (t90 != -2147483583) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x3521 = INT8_MIN;
	uint64_t x3522 = 3113LLU;
	int16_t x3523 = 1;
	int8_t x3524 = -1;
	static uint64_t t91 = 479519332803327993LLU;

	t91 = (((x3521/x3522)<<x3523)-x3524);

	if (t91 != 11851425681792195LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x3525 = 11146U;
	static uint16_t x3527 = 17U;
	int16_t x3528 = INT16_MIN;
	volatile int32_t t92 = -1829925;

	t92 = (((x3525/x3526)<<x3527)-x3528);

	if (t92 != 32768) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x3545 = -1;
	uint64_t x3546 = 15788939305414074LLU;
	uint8_t x3547 = 27U;
	int32_t x3548 = INT32_MAX;
	volatile uint64_t t93 = 717692786373977LLU;

	t93 = (((x3545/x3546)<<x3547)-x3548);

	if (t93 != 154618822657LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x3585 = 0U;
	static int16_t x3586 = INT16_MIN;
	uint16_t x3587 = 3U;
	uint16_t x3588 = 11421U;
	volatile int32_t t94 = 0;

	t94 = (((x3585/x3586)<<x3587)-x3588);

	if (t94 != -11421) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x3609 = UINT32_MAX;
	int32_t x3610 = 2157;
	volatile int8_t x3611 = 0;
	int64_t x3612 = -1LL;
	volatile int64_t t95 = 144LL;

	t95 = (((x3609/x3610)<<x3611)-x3612);

	if (t95 != 1991177LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x3625 = -1024354LL;
	uint64_t x3626 = UINT64_MAX;
	static uint64_t x3627 = 7LLU;

	t96 = (((x3625/x3626)<<x3627)-x3628);

	if (t96 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x3645 = 73495U;
	uint16_t x3646 = UINT16_MAX;
	int64_t x3648 = INT64_MAX;
	volatile int64_t t97 = -281686068359183LL;

	t97 = (((x3645/x3646)<<x3647)-x3648);

	if (t97 != -9223372036854767615LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x3657 = -1;
	uint16_t x3659 = 23U;
	int64_t x3660 = 359826LL;
	static volatile int64_t t98 = 33377982LL;

	t98 = (((x3657/x3658)<<x3659)-x3660);

	if (t98 != -359826LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x3669 = 85U;
	int64_t x3670 = INT64_MAX;
	int16_t x3671 = 1;
	uint64_t x3672 = UINT64_MAX;
	uint64_t t99 = 117469437625205LLU;

	t99 = (((x3669/x3670)<<x3671)-x3672);

	if (t99 != 1LLU) { NG(); } else { ; }
	
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

