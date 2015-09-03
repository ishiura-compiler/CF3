#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -63921;
static uint8_t x14 = UINT8_MAX;
uint32_t x16 = 13U;
int32_t x46 = INT32_MIN;
static uint64_t x48 = 8LLU;
static int16_t x193 = 28;
static volatile int64_t t4 = 64571LL;
static uint64_t x229 = 49008LLU;
volatile uint8_t x230 = 95U;
static int8_t x232 = 6;
uint32_t x273 = 19155U;
int16_t x319 = INT16_MIN;
uint32_t x320 = 33U;
uint32_t x322 = UINT32_MAX;
static uint8_t x370 = UINT8_MAX;
int8_t x527 = -11;
int8_t x528 = 0;
int8_t x557 = INT8_MIN;
static int64_t x558 = INT64_MIN;
int64_t t20 = -1084040153916053LL;
static int64_t x606 = 1858179249661731899LL;
int8_t x607 = -7;
volatile uint64_t t22 = 14LLU;
static volatile int8_t x664 = 1;
uint64_t x685 = 416311836673640345LLU;
static volatile int8_t x692 = 1;
volatile uint64_t t25 = 951214230857420395LLU;
int8_t x704 = 1;
int64_t x770 = -1LL;
uint32_t x771 = 5897U;
static int64_t t27 = -200748951138379LL;
volatile uint8_t x916 = 0U;
int32_t x1001 = -1;
uint32_t x1002 = 47747U;
uint64_t x1062 = UINT64_MAX;
int64_t x1063 = INT64_MAX;
uint8_t x1149 = UINT8_MAX;
volatile int64_t x1179 = INT64_MAX;
int16_t x1204 = 0;
static int8_t x1243 = -1;
static volatile int32_t t36 = -11930416;
int8_t x1286 = -1;
static int8_t x1288 = 62;
uint16_t x1336 = 18U;
uint8_t x1361 = UINT8_MAX;
volatile int32_t t42 = 0;
static volatile uint64_t x1433 = 235795LLU;
uint64_t x1435 = 2461222427376600LLU;
int8_t x1436 = 0;
uint64_t t43 = 3749857LLU;
int16_t x1439 = -505;
int32_t t44 = -6339;
uint16_t x1488 = 0U;
int16_t x1524 = 5;
uint32_t x1549 = UINT32_MAX;
int8_t x1563 = INT8_MAX;
uint64_t t49 = 394521282692449LLU;
int8_t x1641 = INT8_MAX;
static int8_t x1648 = 2;
int8_t x1671 = -1;
int8_t x1725 = -1;
uint32_t x1761 = UINT32_MAX;
uint16_t x1893 = UINT16_MAX;
static volatile uint16_t x1894 = UINT16_MAX;
int32_t x1997 = 4;
static volatile int32_t x2021 = -1;
volatile uint64_t t59 = 1590387LLU;
volatile uint64_t t60 = 284658704115279839LLU;
static int16_t x2039 = INT16_MIN;
volatile uint8_t x2058 = 1U;
static int16_t x2060 = 41;
volatile uint32_t x2075 = 228344775U;
uint64_t x2089 = 13257699081673461LLU;
static volatile uint64_t t64 = 3271LLU;
int32_t x2119 = -1;
uint32_t x2155 = 10U;
static uint16_t x2169 = 1U;
volatile int32_t t68 = -60167;
int16_t x2248 = 12;
int8_t x2269 = -28;
volatile int8_t x2270 = INT8_MIN;
volatile int16_t x2278 = -1;
int32_t x2285 = 5705;
static uint8_t x2292 = 4U;
volatile int32_t x2341 = -1;
volatile uint64_t t78 = 10LLU;
static volatile int32_t x2377 = -890359;
int16_t x2378 = INT16_MIN;
volatile int32_t x2379 = INT32_MIN;
uint32_t x2405 = 9780U;
static int64_t t80 = 166246629597979LL;
uint8_t x2480 = 13U;
uint64_t t81 = 146294434986LLU;
uint64_t x2523 = 1185533385738728LLU;
uint8_t x2524 = 16U;
uint8_t x2528 = 0U;
volatile uint32_t x2742 = 32330008U;
int16_t x2777 = 9301;
uint64_t x2953 = UINT64_MAX;
uint16_t x2956 = 10U;
static uint32_t x3045 = 530116U;
volatile uint64_t x3047 = UINT64_MAX;
static volatile int8_t x3048 = 3;
volatile int64_t t94 = -2587LL;
int64_t x3098 = INT64_MIN;
int8_t x3099 = INT8_MIN;
volatile int64_t t95 = 11LL;
static int64_t t96 = -2326877837010LL;
volatile int8_t x3291 = INT8_MAX;
int8_t x3326 = INT8_MIN;
uint8_t x3328 = 3U;
uint16_t x3396 = 63U;


void f0(void) {
	volatile int32_t x9 = -1;
	int16_t x10 = -1;
	int32_t x11 = 6581615;
	uint8_t x12 = 12U;

	t0 = ((x9^(x10%x11))>>x12);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x13 = INT32_MIN;
	volatile uint32_t x15 = 13U;
	volatile uint32_t t1 = 3810U;

	t1 = ((x13^(x14%x15))>>x16);

	if (t1 != 262144U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x21 = 482783714121389880LL;
	volatile int64_t x22 = INT64_MIN;
	uint64_t x23 = 199183157994400493LLU;
	uint8_t x24 = 50U;
	volatile uint64_t t2 = 15980761LLU;

	t2 = ((x21^(x22%x23))>>x24);

	if (t2 != 410LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x45 = INT32_MAX;
	static int16_t x47 = INT16_MIN;
	static volatile int32_t t3 = -1559706;

	t3 = ((x45^(x46%x47))>>x48);

	if (t3 != 8388607) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x194 = 220876100U;
	int64_t x195 = -9641627933614LL;
	uint8_t x196 = 7U;

	t4 = ((x193^(x194%x195))>>x196);

	if (t4 != 1725594LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x231 = INT8_MAX;
	volatile uint64_t t5 = 1LLU;

	t5 = ((x229^(x230%x231))>>x232);

	if (t5 != 764LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x241 = 473767;
	uint8_t x242 = 3U;
	static int16_t x243 = -1;
	uint8_t x244 = 12U;
	static volatile int32_t t6 = 1;

	t6 = ((x241^(x242%x243))>>x244);

	if (t6 != 115) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x253 = 137LLU;
	volatile int64_t x254 = -448289128237395577LL;
	int16_t x255 = INT16_MAX;
	uint8_t x256 = 9U;
	static uint64_t t7 = 115LLU;

	t7 = ((x253^(x254%x255))>>x256);

	if (t7 != 36028797018963937LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x274 = 2U;
	volatile int16_t x275 = -1;
	int8_t x276 = 0;
	uint32_t t8 = 15U;

	t8 = ((x273^(x274%x275))>>x276);

	if (t8 != 19153U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x317 = 10820984738LL;
	uint8_t x318 = 0U;
	volatile int64_t t9 = 12713LL;

	t9 = ((x317^(x318%x319))>>x320);

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x321 = INT16_MAX;
	int16_t x323 = 1;
	uint8_t x324 = 6U;
	static volatile uint32_t t10 = 1499629U;

	t10 = ((x321^(x322%x323))>>x324);

	if (t10 != 511U) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x325 = UINT8_MAX;
	volatile uint16_t x326 = 8465U;
	uint32_t x327 = UINT32_MAX;
	static volatile uint64_t x328 = 7LLU;
	static volatile uint32_t t11 = 4433850U;

	t11 = ((x325^(x326%x327))>>x328);

	if (t11 != 67U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x369 = 1U;
	static uint32_t x371 = 1U;
	int16_t x372 = 0;
	uint32_t t12 = 385408U;

	t12 = ((x369^(x370%x371))>>x372);

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x389 = INT8_MAX;
	uint16_t x390 = 122U;
	static volatile int8_t x391 = INT8_MIN;
	int64_t x392 = 0LL;
	volatile int32_t t13 = -11651840;

	t13 = ((x389^(x390%x391))>>x392);

	if (t13 != 5) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x413 = INT64_MIN;
	int16_t x414 = INT16_MAX;
	uint64_t x415 = 51279700LLU;
	uint16_t x416 = 7U;
	static volatile uint64_t t14 = 208486607212305LLU;

	t14 = ((x413^(x414%x415))>>x416);

	if (t14 != 72057594037928191LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x461 = 92612817958984775LLU;
	volatile int32_t x462 = INT32_MIN;
	int16_t x463 = INT16_MIN;
	uint32_t x464 = 8U;
	volatile uint64_t t15 = 2637884017LLU;

	t15 = ((x461^(x462%x463))>>x464);

	if (t15 != 361768820152284LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x477 = UINT16_MAX;
	int64_t x478 = INT64_MIN;
	volatile uint8_t x479 = 1U;
	uint8_t x480 = 24U;
	volatile int64_t t16 = 3115448646843819LL;

	t16 = ((x477^(x478%x479))>>x480);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x525 = 74U;
	volatile uint8_t x526 = 14U;
	int32_t t17 = 1;

	t17 = ((x525^(x526%x527))>>x528);

	if (t17 != 73) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x529 = UINT8_MAX;
	static int16_t x530 = INT16_MIN;
	volatile uint32_t x531 = UINT32_MAX;
	static int16_t x532 = 1;
	volatile uint32_t t18 = 1910U;

	t18 = ((x529^(x530%x531))>>x532);

	if (t18 != 2147467391U) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x559 = 253LL;
	uint64_t x560 = 1LLU;
	int64_t t19 = 3260530656050825LL;

	t19 = ((x557^(x558%x559))>>x560);

	if (t19 != 5LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x577 = 20U;
	volatile uint32_t x578 = UINT32_MAX;
	int64_t x579 = INT64_MIN;
	uint16_t x580 = 12U;

	t20 = ((x577^(x578%x579))>>x580);

	if (t20 != 1048575LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x601 = INT32_MIN;
	int64_t x602 = INT64_MIN;
	static int16_t x603 = 8575;
	int8_t x604 = 0;
	volatile int64_t t21 = -1375822318463284LL;

	t21 = ((x601^(x602%x603))>>x604);

	if (t21 != 2147476640LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x605 = UINT64_MAX;
	volatile uint8_t x608 = 58U;

	t22 = ((x605^(x606%x607))>>x608);

	if (t22 != 63LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x661 = UINT8_MAX;
	volatile int16_t x662 = INT16_MAX;
	static int32_t x663 = INT32_MAX;
	int32_t t23 = 1;

	t23 = ((x661^(x662%x663))>>x664);

	if (t23 != 16256) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x686 = -1;
	int32_t x687 = 30;
	int8_t x688 = 44;
	volatile uint64_t t24 = 5310317926527LLU;

	t24 = ((x685^(x686%x687))>>x688);

	if (t24 != 1024911LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x689 = 108;
	static int16_t x690 = INT16_MIN;
	uint64_t x691 = 1514LLU;

	t25 = ((x689^(x690%x691))>>x692);

	if (t25 != 246LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x701 = 978745523646658321LLU;
	static uint8_t x702 = UINT8_MAX;
	int32_t x703 = INT32_MAX;
	volatile uint64_t t26 = 17387LLU;

	t26 = ((x701^(x702%x703))>>x704);

	if (t26 != 489372761823329271LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x769 = INT16_MIN;
	uint64_t x772 = 1LLU;

	t27 = ((x769^(x770%x771))>>x772);

	if (t27 != 16383LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x773 = -1;
	int32_t x774 = -1;
	int64_t x775 = -107156355LL;
	uint8_t x776 = 21U;
	int64_t t28 = -6LL;

	t28 = ((x773^(x774%x775))>>x776);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x913 = INT32_MAX;
	volatile uint64_t x914 = 4366389410847977LLU;
	static int8_t x915 = INT8_MIN;
	uint64_t t29 = 607324922805438LLU;

	t29 = ((x913^(x914%x915))>>x916);

	if (t29 != 4366389350966038LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x1003 = -1;
	uint16_t x1004 = 7U;
	uint32_t t30 = 1325586570U;

	t30 = ((x1001^(x1002%x1003))>>x1004);

	if (t30 != 33554058U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x1061 = INT8_MAX;
	uint16_t x1064 = 0U;
	volatile uint64_t t31 = 275807917898176LLU;

	t31 = ((x1061^(x1062%x1063))>>x1064);

	if (t31 != 126LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x1150 = 29LL;
	int64_t x1151 = -1LL;
	uint16_t x1152 = 3U;
	static volatile int64_t t32 = -233392017645LL;

	t32 = ((x1149^(x1150%x1151))>>x1152);

	if (t32 != 31LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1177 = -1;
	int64_t x1178 = INT64_MIN;
	uint8_t x1180 = 4U;
	volatile int64_t t33 = 3466959778135640487LL;

	t33 = ((x1177^(x1178%x1179))>>x1180);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x1201 = 29U;
	int16_t x1202 = INT16_MAX;
	int64_t x1203 = 225278303LL;
	volatile int64_t t34 = 5993654LL;

	t34 = ((x1201^(x1202%x1203))>>x1204);

	if (t34 != 32738LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1237 = UINT8_MAX;
	static uint8_t x1238 = UINT8_MAX;
	static volatile int16_t x1239 = -2;
	uint32_t x1240 = 0U;
	int32_t t35 = 3;

	t35 = ((x1237^(x1238%x1239))>>x1240);

	if (t35 != 254) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1241 = 0U;
	uint8_t x1242 = UINT8_MAX;
	int8_t x1244 = 1;

	t36 = ((x1241^(x1242%x1243))>>x1244);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x1277 = 7U;
	uint64_t x1278 = 185624723732LLU;
	static uint64_t x1279 = UINT64_MAX;
	static uint16_t x1280 = 11U;
	uint64_t t37 = 1956129LLU;

	t37 = ((x1277^(x1278%x1279))>>x1280);

	if (t37 != 90637072LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1285 = UINT16_MAX;
	int64_t x1287 = -1LL;
	volatile int64_t t38 = 14245569LL;

	t38 = ((x1285^(x1286%x1287))>>x1288);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1321 = -1;
	int16_t x1322 = INT16_MIN;
	int64_t x1323 = INT64_MIN;
	uint16_t x1324 = 1U;
	volatile int64_t t39 = -1681LL;

	t39 = ((x1321^(x1322%x1323))>>x1324);

	if (t39 != 16383LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1333 = -199772238;
	volatile int32_t x1334 = -1;
	uint16_t x1335 = UINT16_MAX;
	volatile int32_t t40 = -227917;

	t40 = ((x1333^(x1334%x1335))>>x1336);

	if (t40 != 762) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1357 = -2135;
	int16_t x1358 = -5;
	int64_t x1359 = -373571LL;
	uint16_t x1360 = 57U;
	static int64_t t41 = 1596374222LL;

	t41 = ((x1357^(x1358%x1359))>>x1360);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x1362 = 385U;
	uint16_t x1363 = 134U;
	uint8_t x1364 = 22U;

	t42 = ((x1361^(x1362%x1363))>>x1364);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x1434 = 2159269164821538LLU;

	t43 = ((x1433^(x1434%x1435))>>x1436);

	if (t43 != 2159269164660017LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x1437 = UINT8_MAX;
	volatile int16_t x1438 = 3;
	static int16_t x1440 = 1;

	t44 = ((x1437^(x1438%x1439))>>x1440);

	if (t44 != 126) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x1485 = INT16_MIN;
	int32_t x1486 = -2168;
	uint8_t x1487 = 9U;
	volatile int32_t t45 = -1027;

	t45 = ((x1485^(x1486%x1487))>>x1488);

	if (t45 != 32760) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x1489 = 12U;
	int16_t x1490 = INT16_MIN;
	static int64_t x1491 = -1LL;
	volatile int16_t x1492 = 0;
	int64_t t46 = -414660598259629LL;

	t46 = ((x1489^(x1490%x1491))>>x1492);

	if (t46 != 12LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x1521 = UINT8_MAX;
	uint32_t x1522 = 55U;
	static int64_t x1523 = INT64_MIN;
	static int64_t t47 = 113468LL;

	t47 = ((x1521^(x1522%x1523))>>x1524);

	if (t47 != 6LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1550 = 7;
	int32_t x1551 = -1;
	uint32_t x1552 = 0U;
	uint32_t t48 = UINT32_MAX;

	t48 = ((x1549^(x1550%x1551))>>x1552);

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x1561 = -15;
	uint64_t x1562 = 171084LLU;
	uint8_t x1564 = 2U;

	t49 = ((x1561^(x1562%x1563))>>x1564);

	if (t49 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x1573 = INT32_MIN;
	int64_t x1574 = -8803997349LL;
	int8_t x1575 = INT8_MIN;
	volatile int8_t x1576 = 1;
	int64_t t50 = 69795110353353LL;

	t50 = ((x1573^(x1574%x1575))>>x1576);

	if (t50 != 1073741805LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x1642 = 24834061U;
	uint8_t x1643 = 102U;
	uint8_t x1644 = 1U;
	static uint32_t t51 = 574357934U;

	t51 = ((x1641^(x1642%x1643))>>x1644);

	if (t51 != 54U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x1645 = 4U;
	static uint8_t x1646 = UINT8_MAX;
	int16_t x1647 = INT16_MIN;
	int32_t t52 = -720;

	t52 = ((x1645^(x1646%x1647))>>x1648);

	if (t52 != 62) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x1649 = 7U;
	static int32_t x1650 = 0;
	volatile int32_t x1651 = 1808;
	static uint16_t x1652 = 0U;
	volatile int32_t t53 = 1;

	t53 = ((x1649^(x1650%x1651))>>x1652);

	if (t53 != 7) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x1669 = 112044040;
	int32_t x1670 = INT32_MAX;
	static volatile int8_t x1672 = 9;
	volatile int32_t t54 = -87;

	t54 = ((x1669^(x1670%x1671))>>x1672);

	if (t54 != 218836) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x1726 = INT16_MIN;
	volatile int64_t x1727 = 7456LL;
	uint32_t x1728 = 3U;
	int64_t t55 = 228907704554762LL;

	t55 = ((x1725^(x1726%x1727))>>x1728);

	if (t55 != 367LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x1762 = 7U;
	uint64_t x1763 = 22916165LLU;
	uint64_t x1764 = 20LLU;
	uint64_t t56 = 233031517LLU;

	t56 = ((x1761^(x1762%x1763))>>x1764);

	if (t56 != 4095LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x1895 = INT64_MIN;
	static uint16_t x1896 = 30U;
	int64_t t57 = 1076282LL;

	t57 = ((x1893^(x1894%x1895))>>x1896);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x1998 = 47768LLU;
	int8_t x1999 = -1;
	int16_t x2000 = 1;
	uint64_t t58 = 0LLU;

	t58 = ((x1997^(x1998%x1999))>>x2000);

	if (t58 != 23886LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x2022 = 302538537LLU;
	static volatile int64_t x2023 = -7167129197685LL;
	volatile uint8_t x2024 = 56U;

	t59 = ((x2021^(x2022%x2023))>>x2024);

	if (t59 != 255LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2033 = 6;
	static int16_t x2034 = -1;
	uint64_t x2035 = 10929553888399LLU;
	uint16_t x2036 = 6U;

	t60 = ((x2033^(x2034%x2035))>>x2036);

	if (t60 != 108815281959LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x2037 = INT64_MIN;
	int32_t x2038 = -1;
	int64_t x2040 = 32LL;
	int64_t t61 = -921986173476742232LL;

	t61 = ((x2037^(x2038%x2039))>>x2040);

	if (t61 != 2147483647LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x2057 = 605U;
	volatile int64_t x2059 = INT64_MIN;
	static volatile int64_t t62 = -27839916LL;

	t62 = ((x2057^(x2058%x2059))>>x2060);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x2073 = 47741054;
	int32_t x2074 = 4881664;
	volatile uint8_t x2076 = 4U;
	volatile uint32_t t63 = 657003U;

	t63 = ((x2073^(x2074%x2075))>>x2076);

	if (t63 != 2695255U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x2090 = UINT8_MAX;
	volatile int8_t x2091 = INT8_MIN;
	int8_t x2092 = 3;

	t64 = ((x2089^(x2090%x2091))>>x2092);

	if (t64 != 1657212385209169LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x2117 = 0U;
	uint64_t x2118 = 864LLU;
	volatile uint16_t x2120 = 2U;
	uint64_t t65 = 550201560940301LLU;

	t65 = ((x2117^(x2118%x2119))>>x2120);

	if (t65 != 216LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2133 = -224;
	int8_t x2134 = -1;
	uint64_t x2135 = UINT64_MAX;
	static uint16_t x2136 = 47U;
	uint64_t t66 = 3250LLU;

	t66 = ((x2133^(x2134%x2135))>>x2136);

	if (t66 != 131071LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x2153 = 3155869LLU;
	volatile int16_t x2154 = INT16_MAX;
	uint8_t x2156 = 1U;
	volatile uint64_t t67 = 590160549252145262LLU;

	t67 = ((x2153^(x2154%x2155))>>x2156);

	if (t67 != 1577933LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x2170 = INT16_MIN;
	int32_t x2171 = -1;
	static int8_t x2172 = 9;

	t68 = ((x2169^(x2170%x2171))>>x2172);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x2189 = 13457U;
	volatile int8_t x2190 = INT8_MIN;
	uint32_t x2191 = 5U;
	uint8_t x2192 = 5U;
	uint32_t t69 = 371U;

	t69 = ((x2189^(x2190%x2191))>>x2192);

	if (t69 != 420U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x2197 = 437933170213LLU;
	static int16_t x2198 = INT16_MIN;
	int64_t x2199 = INT64_MIN;
	uint8_t x2200 = 2U;
	uint64_t t70 = 11LLU;

	t70 = ((x2197^(x2198%x2199))>>x2200);

	if (t70 != 4611685908944099209LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x2245 = 2U;
	int8_t x2246 = -1;
	uint8_t x2247 = UINT8_MAX;
	uint32_t t71 = 11110U;

	t71 = ((x2245^(x2246%x2247))>>x2248);

	if (t71 != 1048575U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x2271 = INT32_MIN;
	volatile uint8_t x2272 = 3U;
	int32_t t72 = -60192231;

	t72 = ((x2269^(x2270%x2271))>>x2272);

	if (t72 != 12) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2277 = 143;
	uint32_t x2279 = UINT32_MAX;
	static uint8_t x2280 = 5U;
	volatile uint32_t t73 = 0U;

	t73 = ((x2277^(x2278%x2279))>>x2280);

	if (t73 != 4U) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int64_t x2281 = INT64_MIN;
	int8_t x2282 = INT8_MIN;
	int64_t x2283 = INT64_MIN;
	uint8_t x2284 = 45U;
	int64_t t74 = -38659267LL;

	t74 = ((x2281^(x2282%x2283))>>x2284);

	if (t74 != 262143LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x2286 = 115992956724650LLU;
	int8_t x2287 = 2;
	int64_t x2288 = 28LL;
	volatile uint64_t t75 = 6327483922960477998LLU;

	t75 = ((x2285^(x2286%x2287))>>x2288);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x2289 = INT32_MAX;
	int32_t x2290 = INT32_MAX;
	volatile int64_t x2291 = -1LL;
	int64_t t76 = -65179210LL;

	t76 = ((x2289^(x2290%x2291))>>x2292);

	if (t76 != 134217727LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x2293 = 21;
	uint64_t x2294 = 5211668045778813LLU;
	volatile int8_t x2295 = -3;
	uint16_t x2296 = 18U;
	volatile uint64_t t77 = 590426LLU;

	t77 = ((x2293^(x2294%x2295))>>x2296);

	if (t77 != 19880935843LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x2342 = INT64_MAX;
	uint64_t x2343 = 390630868848716049LLU;
	static uint32_t x2344 = 63U;

	t78 = ((x2341^(x2342%x2343))>>x2344);

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x2380 = 13LLU;
	int32_t t79 = 45991808;

	t79 = ((x2377^(x2378%x2379))>>x2380);

	if (t79 != 111) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2406 = 5714;
	volatile int64_t x2407 = -1LL;
	uint8_t x2408 = 16U;

	t80 = ((x2405^(x2406%x2407))>>x2408);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x2477 = 44090649452600LLU;
	static int32_t x2478 = -1;
	int32_t x2479 = -1;

	t81 = ((x2477^(x2478%x2479))>>x2480);

	if (t81 != 5382159357LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x2521 = UINT8_MAX;
	volatile int8_t x2522 = INT8_MIN;
	volatile uint64_t t82 = 307563773431LLU;

	t82 = ((x2521^(x2522%x2523))>>x2524);

	if (t82 != 15718460093LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x2525 = INT32_MIN;
	int8_t x2526 = INT8_MIN;
	volatile int64_t x2527 = -293076410LL;
	static int64_t t83 = 3LL;

	t83 = ((x2525^(x2526%x2527))>>x2528);

	if (t83 != 2147483520LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x2597 = 1U;
	volatile int32_t x2598 = 62393;
	int8_t x2599 = INT8_MIN;
	uint8_t x2600 = 0U;
	volatile int32_t t84 = 1889;

	t84 = ((x2597^(x2598%x2599))>>x2600);

	if (t84 != 56) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x2709 = 16702947U;
	volatile int64_t x2710 = INT64_MAX;
	volatile uint64_t x2711 = UINT64_MAX;
	uint32_t x2712 = 24U;
	volatile uint64_t t85 = 285LLU;

	t85 = ((x2709^(x2710%x2711))>>x2712);

	if (t85 != 549755813887LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x2737 = -772;
	uint64_t x2738 = UINT64_MAX;
	static uint32_t x2739 = 13U;
	uint8_t x2740 = 5U;
	volatile uint64_t t86 = 3LLU;

	t86 = ((x2737^(x2738%x2739))>>x2740);

	if (t86 != 576460752303423463LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x2741 = 0;
	uint64_t x2743 = UINT64_MAX;
	uint8_t x2744 = 11U;
	volatile uint64_t t87 = 22965925860375LLU;

	t87 = ((x2741^(x2742%x2743))>>x2744);

	if (t87 != 15786LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x2778 = INT64_MAX;
	static uint16_t x2779 = 5292U;
	volatile int8_t x2780 = 0;
	volatile int64_t t88 = 845432739069967LL;

	t88 = ((x2777^(x2778%x2779))>>x2780);

	if (t88 != 14306LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x2805 = INT8_MIN;
	int64_t x2806 = 17526LL;
	uint64_t x2807 = 3452636291LLU;
	volatile uint16_t x2808 = 3U;
	uint64_t t89 = 160853611714462886LLU;

	t89 = ((x2805^(x2806%x2807))>>x2808);

	if (t89 != 2305843009213691774LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x2954 = UINT32_MAX;
	volatile uint64_t x2955 = 12045174222LLU;
	volatile uint64_t t90 = 56960990118192150LLU;

	t90 = ((x2953^(x2954%x2955))>>x2956);

	if (t90 != 18014398505287680LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x2961 = INT64_MAX;
	static volatile uint8_t x2962 = 1U;
	uint64_t x2963 = 28835507638895773LLU;
	uint16_t x2964 = 7U;
	static volatile uint64_t t91 = 259242996878605888LLU;

	t91 = ((x2961^(x2962%x2963))>>x2964);

	if (t91 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x3046 = -2585030780LL;
	volatile uint64_t t92 = 2172LLU;

	t92 = ((x3045^(x3046%x3047))>>x3048);

	if (t92 != 2305843008890499880LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x3073 = INT32_MIN;
	int16_t x3074 = INT16_MIN;
	static int64_t x3075 = INT64_MAX;
	uint8_t x3076 = 63U;
	volatile int64_t t93 = 124338281422LL;

	t93 = ((x3073^(x3074%x3075))>>x3076);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x3081 = INT64_MAX;
	uint8_t x3082 = 12U;
	int8_t x3083 = -47;
	int64_t x3084 = 54LL;

	t94 = ((x3081^(x3082%x3083))>>x3084);

	if (t94 != 511LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x3097 = 0;
	uint8_t x3100 = 14U;

	t95 = ((x3097^(x3098%x3099))>>x3100);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x3249 = INT32_MIN;
	int64_t x3250 = -1LL;
	volatile int32_t x3251 = 3414737;
	static uint8_t x3252 = 14U;

	t96 = ((x3249^(x3250%x3251))>>x3252);

	if (t96 != 131071LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x3289 = 290245704U;
	volatile uint8_t x3290 = 10U;
	static uint64_t x3292 = 3LLU;
	volatile uint32_t t97 = 351406671U;

	t97 = ((x3289^(x3290%x3291))>>x3292);

	if (t97 != 36280712U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x3325 = UINT16_MAX;
	uint32_t x3327 = UINT32_MAX;
	static uint32_t t98 = 963U;

	t98 = ((x3325^(x3326%x3327))>>x3328);

	if (t98 != 536862735U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x3393 = UINT64_MAX;
	int32_t x3394 = INT32_MIN;
	int64_t x3395 = -1LL;
	static volatile uint64_t t99 = 568869527LLU;

	t99 = ((x3393^(x3394%x3395))>>x3396);

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

