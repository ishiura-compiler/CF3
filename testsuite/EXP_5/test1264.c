#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -64984633;
int32_t x141 = -962543266;
static uint64_t x161 = UINT64_MAX;
int64_t x190 = -84911108836584569LL;
volatile uint8_t x192 = 6U;
uint16_t x204 = 3U;
volatile int64_t t4 = 1080LL;
uint64_t x259 = UINT64_MAX;
int8_t x282 = INT8_MIN;
int8_t x326 = INT8_MIN;
uint16_t x347 = UINT16_MAX;
int8_t x372 = 4;
int32_t x409 = INT32_MIN;
static int8_t x411 = 42;
int32_t x414 = -237;
static int64_t x415 = -2674277230731LL;
int64_t t12 = -9642943LL;
int8_t x505 = -5;
static volatile int64_t x587 = 1068703182747556341LL;
uint32_t x629 = 26388U;
static uint32_t x687 = 94U;
uint64_t t19 = 1563147779LLU;
int64_t x698 = -683285314191524649LL;
int32_t t20 = 14;
uint64_t x722 = 4332LLU;
volatile int64_t x729 = -1LL;
static int16_t x838 = 37;
uint32_t x839 = 1273U;
uint8_t x840 = 3U;
int8_t x878 = INT8_MIN;
uint32_t x880 = 0U;
uint32_t x922 = 85518722U;
static volatile int8_t x938 = INT8_MIN;
static uint8_t x940 = 21U;
int8_t x976 = 0;
int8_t x1019 = 0;
int8_t x1020 = 6;
int32_t t31 = 0;
static int64_t x1105 = -9548464627LL;
volatile int32_t x1107 = INT32_MIN;
int8_t x1173 = INT8_MAX;
static int32_t t36 = -7672949;
static volatile int16_t x1317 = 1;
int32_t x1319 = 21636999;
volatile uint16_t x1320 = 7U;
int16_t x1330 = -1;
static int8_t x1345 = INT8_MIN;
static int16_t x1360 = 20;
int8_t x1371 = INT8_MIN;
static volatile uint64_t x1400 = 3LLU;
volatile int8_t x1422 = -1;
volatile uint16_t x1423 = 3U;
int16_t x1439 = INT16_MIN;
uint8_t x1454 = UINT8_MAX;
uint32_t x1456 = 1U;
volatile uint64_t x1491 = 31345633LLU;
int32_t t49 = -92346;
uint64_t x1513 = 549502099717LLU;
uint32_t x1630 = UINT32_MAX;
uint64_t x1631 = 1249925267526LLU;
int64_t x1653 = -1LL;
int32_t t55 = 13084970;
uint8_t x1796 = 3U;
int32_t x1815 = INT32_MIN;
volatile int64_t x1847 = -1355705016488208LL;
volatile int32_t t61 = -379438;
static int16_t x1900 = 1;
int64_t x1905 = 12932LL;
int64_t t64 = -3866LL;
volatile int64_t t66 = 13881064026LL;
uint8_t x2160 = 7U;
static uint32_t t69 = 32945995U;
uint32_t t70 = 15466U;
uint32_t x2217 = 186893U;
int8_t x2219 = INT8_MIN;
int32_t x2221 = INT32_MIN;
volatile int64_t x2225 = -1LL;
volatile int16_t x2249 = 7020;
int32_t t74 = -122;
volatile int8_t x2321 = -1;
int8_t x2337 = INT8_MIN;
uint16_t x2340 = 1U;
int8_t x2490 = INT8_MIN;
uint8_t x2507 = UINT8_MAX;
uint8_t x2508 = 5U;
volatile uint64_t t80 = 234216LLU;
uint8_t x2552 = 1U;
static uint32_t x2554 = 57U;
int64_t t82 = 29LL;
volatile int32_t t83 = 985608;
volatile uint32_t x2671 = 11274U;
volatile uint16_t x2816 = 1U;
int16_t x2941 = INT16_MIN;
uint32_t x2942 = 198U;
int64_t x2943 = -60963LL;
int8_t x3001 = INT8_MAX;
int32_t x3025 = INT32_MIN;
int32_t t95 = -187;
volatile uint32_t t98 = 22U;
static int8_t x3125 = 2;
int64_t x3126 = -11803976513465LL;
int32_t x3128 = 5;
int32_t t99 = -16105163;


void f0(void) {
	volatile int32_t x113 = 16487862;
	volatile uint64_t x114 = 3017753901LLU;
	uint16_t x115 = UINT16_MAX;
	uint8_t x116 = 28U;

	t0 = (x113*((x114==x115)>>x116));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint16_t x142 = 2U;
	volatile int16_t x143 = INT16_MAX;
	volatile uint16_t x144 = 9U;
	volatile int32_t t1 = -179;

	t1 = (x141*((x142==x143)>>x144));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x162 = 306LL;
	uint32_t x163 = 0U;
	uint32_t x164 = 1U;
	volatile uint64_t t2 = 106LLU;

	t2 = (x161*((x162==x163)>>x164));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x189 = 5U;
	uint32_t x191 = 15707U;
	volatile int32_t t3 = 54548;

	t3 = (x189*((x190==x191)>>x192));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x201 = -7667397128LL;
	static int8_t x202 = INT8_MIN;
	uint8_t x203 = 49U;

	t4 = (x201*((x202==x203)>>x204));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x257 = UINT8_MAX;
	int8_t x258 = -5;
	uint8_t x260 = 29U;
	volatile int32_t t5 = 1649;

	t5 = (x257*((x258==x259)>>x260));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x281 = 189U;
	static uint32_t x283 = 933U;
	uint8_t x284 = 25U;
	volatile int32_t t6 = 34237;

	t6 = (x281*((x282==x283)>>x284));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x325 = UINT64_MAX;
	volatile int8_t x327 = -14;
	uint8_t x328 = 26U;
	static volatile uint64_t t7 = 18434403808666LLU;

	t7 = (x325*((x326==x327)>>x328));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x345 = INT64_MIN;
	int32_t x346 = 303669003;
	uint16_t x348 = 4U;
	volatile int64_t t8 = 6LL;

	t8 = (x345*((x346==x347)>>x348));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x369 = -2638;
	uint8_t x370 = 16U;
	int8_t x371 = -1;
	static int32_t t9 = 7419914;

	t9 = (x369*((x370==x371)>>x372));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x381 = INT16_MAX;
	static int32_t x382 = -1;
	int16_t x383 = INT16_MIN;
	static uint64_t x384 = 15LLU;
	volatile int32_t t10 = -649;

	t10 = (x381*((x382==x383)>>x384));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x410 = 156;
	uint8_t x412 = 1U;
	int32_t t11 = 352881;

	t11 = (x409*((x410==x411)>>x412));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x413 = INT64_MIN;
	static uint16_t x416 = 0U;

	t12 = (x413*((x414==x415)>>x416));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x433 = -1;
	int16_t x434 = INT16_MIN;
	uint64_t x435 = UINT64_MAX;
	int8_t x436 = 0;
	volatile int32_t t13 = -1118;

	t13 = (x433*((x434==x435)>>x436));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x497 = -1;
	static uint16_t x498 = UINT16_MAX;
	int16_t x499 = -1;
	uint64_t x500 = 0LLU;
	volatile int32_t t14 = 12;

	t14 = (x497*((x498==x499)>>x500));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x506 = INT64_MIN;
	volatile int16_t x507 = INT16_MIN;
	int32_t x508 = 7;
	volatile int32_t t15 = 88983384;

	t15 = (x505*((x506==x507)>>x508));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x585 = INT16_MIN;
	int16_t x586 = -1;
	int16_t x588 = 0;
	static volatile int32_t t16 = 18;

	t16 = (x585*((x586==x587)>>x588));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x630 = INT32_MIN;
	uint16_t x631 = UINT16_MAX;
	volatile uint8_t x632 = 27U;
	uint32_t t17 = 81U;

	t17 = (x629*((x630==x631)>>x632));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x657 = INT16_MIN;
	volatile int8_t x658 = 0;
	static uint32_t x659 = 3247594U;
	int16_t x660 = 15;
	int32_t t18 = 871154;

	t18 = (x657*((x658==x659)>>x660));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x685 = 4235768LLU;
	static int64_t x686 = INT64_MIN;
	uint16_t x688 = 0U;

	t19 = (x685*((x686==x687)>>x688));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x697 = INT8_MIN;
	int8_t x699 = INT8_MAX;
	static int8_t x700 = 7;

	t20 = (x697*((x698==x699)>>x700));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x721 = INT8_MIN;
	uint64_t x723 = 20406LLU;
	static int8_t x724 = 7;
	int32_t t21 = -82;

	t21 = (x721*((x722==x723)>>x724));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x730 = INT64_MIN;
	int64_t x731 = INT64_MIN;
	uint8_t x732 = 31U;
	int64_t t22 = 264LL;

	t22 = (x729*((x730==x731)>>x732));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x785 = INT32_MAX;
	static int32_t x786 = INT32_MAX;
	int64_t x787 = -20021125LL;
	int16_t x788 = 14;
	volatile int32_t t23 = 863;

	t23 = (x785*((x786==x787)>>x788));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x837 = -1;
	static int32_t t24 = -4711;

	t24 = (x837*((x838==x839)>>x840));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x877 = -1;
	static uint32_t x879 = 45U;
	int32_t t25 = -285661;

	t25 = (x877*((x878==x879)>>x880));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x921 = 2045U;
	volatile int32_t x923 = INT32_MAX;
	uint8_t x924 = 1U;
	volatile int32_t t26 = -1006951;

	t26 = (x921*((x922==x923)>>x924));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x937 = -174876832LL;
	static int64_t x939 = -376623019178LL;
	int64_t t27 = 508860844470LL;

	t27 = (x937*((x938==x939)>>x940));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x973 = 1159991942U;
	volatile int64_t x974 = -7023479952LL;
	volatile int32_t x975 = INT32_MIN;
	uint32_t t28 = 18285U;

	t28 = (x973*((x974==x975)>>x976));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x1009 = 29;
	uint32_t x1010 = 7U;
	uint8_t x1011 = 2U;
	int16_t x1012 = 5;
	volatile int32_t t29 = 5633;

	t29 = (x1009*((x1010==x1011)>>x1012));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x1017 = UINT32_MAX;
	static volatile int32_t x1018 = -38089;
	uint32_t t30 = 30556231U;

	t30 = (x1017*((x1018==x1019)>>x1020));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1037 = 0;
	int64_t x1038 = INT64_MIN;
	volatile uint16_t x1039 = 52U;
	uint8_t x1040 = 1U;

	t31 = (x1037*((x1038==x1039)>>x1040));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1053 = -1;
	int32_t x1054 = -1;
	int64_t x1055 = 10008LL;
	volatile uint32_t x1056 = 3U;
	int32_t t32 = 422;

	t32 = (x1053*((x1054==x1055)>>x1056));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x1077 = INT16_MIN;
	static int8_t x1078 = INT8_MIN;
	int64_t x1079 = INT64_MIN;
	uint32_t x1080 = 19U;
	int32_t t33 = -65;

	t33 = (x1077*((x1078==x1079)>>x1080));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x1101 = 3;
	int8_t x1102 = INT8_MAX;
	static int8_t x1103 = -1;
	uint16_t x1104 = 4U;
	static volatile int32_t t34 = 2047;

	t34 = (x1101*((x1102==x1103)>>x1104));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x1106 = UINT32_MAX;
	uint32_t x1108 = 16U;
	static volatile int64_t t35 = 4142599025560520283LL;

	t35 = (x1105*((x1106==x1107)>>x1108));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1174 = -1;
	static int8_t x1175 = INT8_MIN;
	static uint16_t x1176 = 1U;

	t36 = (x1173*((x1174==x1175)>>x1176));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x1221 = INT8_MAX;
	int64_t x1222 = -971415254LL;
	static uint64_t x1223 = UINT64_MAX;
	uint8_t x1224 = 29U;
	static int32_t t37 = -12845669;

	t37 = (x1221*((x1222==x1223)>>x1224));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1313 = INT8_MIN;
	volatile int8_t x1314 = INT8_MIN;
	volatile uint8_t x1315 = 12U;
	uint8_t x1316 = 17U;
	volatile int32_t t38 = -110154322;

	t38 = (x1313*((x1314==x1315)>>x1316));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1318 = INT16_MIN;
	int32_t t39 = -1775355;

	t39 = (x1317*((x1318==x1319)>>x1320));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1329 = -1LL;
	int16_t x1331 = INT16_MIN;
	int16_t x1332 = 0;
	volatile int64_t t40 = -27439475418LL;

	t40 = (x1329*((x1330==x1331)>>x1332));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x1346 = INT8_MIN;
	static int64_t x1347 = INT64_MIN;
	uint8_t x1348 = 12U;
	volatile int32_t t41 = -29000;

	t41 = (x1345*((x1346==x1347)>>x1348));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1357 = INT8_MIN;
	static int16_t x1358 = -1;
	int16_t x1359 = INT16_MAX;
	static int32_t t42 = 254241;

	t42 = (x1357*((x1358==x1359)>>x1360));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1369 = -1LL;
	static int16_t x1370 = INT16_MIN;
	int16_t x1372 = 1;
	static int64_t t43 = -8600796836LL;

	t43 = (x1369*((x1370==x1371)>>x1372));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x1397 = -6440LL;
	static uint64_t x1398 = 4759953227987699850LLU;
	volatile int32_t x1399 = 55757943;
	static int64_t t44 = 15539893882436LL;

	t44 = (x1397*((x1398==x1399)>>x1400));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x1421 = 2U;
	static uint8_t x1424 = 7U;
	volatile int32_t t45 = 58;

	t45 = (x1421*((x1422==x1423)>>x1424));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1437 = -212382735LL;
	static int64_t x1438 = 0LL;
	static int8_t x1440 = 24;
	static int64_t t46 = 1476584587626911LL;

	t46 = (x1437*((x1438==x1439)>>x1440));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1449 = INT64_MIN;
	uint32_t x1450 = UINT32_MAX;
	int16_t x1451 = INT16_MIN;
	static uint16_t x1452 = 11U;
	int64_t t47 = 131740525LL;

	t47 = (x1449*((x1450==x1451)>>x1452));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x1453 = UINT16_MAX;
	volatile uint8_t x1455 = 21U;
	int32_t t48 = -253624222;

	t48 = (x1453*((x1454==x1455)>>x1456));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x1489 = 106U;
	static int64_t x1490 = INT64_MIN;
	volatile int8_t x1492 = 6;

	t49 = (x1489*((x1490==x1491)>>x1492));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1514 = 46261LL;
	int64_t x1515 = -5533389057848192LL;
	uint16_t x1516 = 24U;
	volatile uint64_t t50 = 22893855LLU;

	t50 = (x1513*((x1514==x1515)>>x1516));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x1561 = INT16_MIN;
	uint32_t x1562 = 29629U;
	volatile int64_t x1563 = INT64_MIN;
	uint8_t x1564 = 1U;
	int32_t t51 = 485403;

	t51 = (x1561*((x1562==x1563)>>x1564));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x1621 = UINT16_MAX;
	static uint32_t x1622 = UINT32_MAX;
	static uint16_t x1623 = 2750U;
	int64_t x1624 = 0LL;
	int32_t t52 = -130;

	t52 = (x1621*((x1622==x1623)>>x1624));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x1629 = -887101644902LL;
	uint8_t x1632 = 31U;
	int64_t t53 = 533831340844007804LL;

	t53 = (x1629*((x1630==x1631)>>x1632));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x1654 = 163;
	int32_t x1655 = INT32_MAX;
	volatile int16_t x1656 = 0;
	volatile int64_t t54 = 6520908491374LL;

	t54 = (x1653*((x1654==x1655)>>x1656));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1681 = INT8_MAX;
	int64_t x1682 = INT64_MIN;
	int8_t x1683 = INT8_MIN;
	uint8_t x1684 = 0U;

	t55 = (x1681*((x1682==x1683)>>x1684));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x1777 = INT16_MIN;
	uint8_t x1778 = 4U;
	uint64_t x1779 = 2049LLU;
	volatile int8_t x1780 = 1;
	int32_t t56 = -63927914;

	t56 = (x1777*((x1778==x1779)>>x1780));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x1785 = 6;
	int16_t x1786 = INT16_MIN;
	int16_t x1787 = -1;
	uint8_t x1788 = 3U;
	int32_t t57 = 48894477;

	t57 = (x1785*((x1786==x1787)>>x1788));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint32_t x1793 = 39525U;
	int32_t x1794 = INT32_MAX;
	static int16_t x1795 = 0;
	volatile uint32_t t58 = 13518U;

	t58 = (x1793*((x1794==x1795)>>x1796));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x1809 = 29U;
	uint16_t x1810 = 6957U;
	int8_t x1811 = 5;
	uint64_t x1812 = 26LLU;
	static uint32_t t59 = 59U;

	t59 = (x1809*((x1810==x1811)>>x1812));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x1813 = -1;
	int32_t x1814 = 195313945;
	uint8_t x1816 = 2U;
	static volatile int32_t t60 = 186515;

	t60 = (x1813*((x1814==x1815)>>x1816));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x1845 = INT16_MAX;
	uint16_t x1846 = UINT16_MAX;
	int8_t x1848 = 3;

	t61 = (x1845*((x1846==x1847)>>x1848));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x1885 = -1;
	static int8_t x1886 = 0;
	static int64_t x1887 = INT64_MIN;
	uint32_t x1888 = 2U;
	volatile int32_t t62 = 1772295;

	t62 = (x1885*((x1886==x1887)>>x1888));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x1897 = -1;
	int32_t x1898 = INT32_MIN;
	int8_t x1899 = INT8_MAX;
	volatile int32_t t63 = 1260;

	t63 = (x1897*((x1898==x1899)>>x1900));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x1906 = 20239201440318124LL;
	volatile int8_t x1907 = INT8_MAX;
	int8_t x1908 = 1;

	t64 = (x1905*((x1906==x1907)>>x1908));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x1921 = INT64_MAX;
	int8_t x1922 = INT8_MIN;
	uint64_t x1923 = UINT64_MAX;
	uint8_t x1924 = 7U;
	volatile int64_t t65 = -4232887486957LL;

	t65 = (x1921*((x1922==x1923)>>x1924));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x1945 = 84LL;
	int8_t x1946 = -1;
	volatile int8_t x1947 = -1;
	volatile uint16_t x1948 = 1U;

	t66 = (x1945*((x1946==x1947)>>x1948));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2065 = INT8_MIN;
	int8_t x2066 = 28;
	volatile uint8_t x2067 = UINT8_MAX;
	static int16_t x2068 = 0;
	volatile int32_t t67 = -973199943;

	t67 = (x2065*((x2066==x2067)>>x2068));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2129 = INT8_MIN;
	int8_t x2130 = 2;
	int8_t x2131 = INT8_MIN;
	int8_t x2132 = 0;
	int32_t t68 = 0;

	t68 = (x2129*((x2130==x2131)>>x2132));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x2157 = 5012U;
	int16_t x2158 = -124;
	static int8_t x2159 = INT8_MIN;

	t69 = (x2157*((x2158==x2159)>>x2160));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x2197 = 275829U;
	int64_t x2198 = -1LL;
	int8_t x2199 = INT8_MIN;
	int32_t x2200 = 1;

	t70 = (x2197*((x2198==x2199)>>x2200));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x2218 = INT16_MAX;
	int8_t x2220 = 1;
	volatile uint32_t t71 = 483130088U;

	t71 = (x2217*((x2218==x2219)>>x2220));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x2222 = -323202545;
	uint64_t x2223 = 13051535LLU;
	int16_t x2224 = 3;
	int32_t t72 = -237179481;

	t72 = (x2221*((x2222==x2223)>>x2224));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x2226 = 6841076837896054LLU;
	int32_t x2227 = INT32_MAX;
	static int8_t x2228 = 2;
	int64_t t73 = -7679086686831LL;

	t73 = (x2225*((x2226==x2227)>>x2228));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x2250 = INT16_MIN;
	int16_t x2251 = 1091;
	uint32_t x2252 = 0U;

	t74 = (x2249*((x2250==x2251)>>x2252));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x2313 = -1LL;
	static int32_t x2314 = INT32_MAX;
	int8_t x2315 = -5;
	uint8_t x2316 = 0U;
	int64_t t75 = -1LL;

	t75 = (x2313*((x2314==x2315)>>x2316));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x2322 = 1;
	static uint8_t x2323 = UINT8_MAX;
	int8_t x2324 = 0;
	volatile int32_t t76 = -676021037;

	t76 = (x2321*((x2322==x2323)>>x2324));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x2338 = UINT16_MAX;
	int32_t x2339 = -1;
	volatile int32_t t77 = 344812;

	t77 = (x2337*((x2338==x2339)>>x2340));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x2341 = INT8_MAX;
	static volatile uint8_t x2342 = UINT8_MAX;
	int8_t x2343 = INT8_MAX;
	int32_t x2344 = 1;
	volatile int32_t t78 = -50471;

	t78 = (x2341*((x2342==x2343)>>x2344));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x2489 = INT64_MIN;
	int64_t x2491 = INT64_MIN;
	static volatile uint32_t x2492 = 24U;
	int64_t t79 = -257395LL;

	t79 = (x2489*((x2490==x2491)>>x2492));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x2505 = 1561748528844674LLU;
	int64_t x2506 = -1LL;

	t80 = (x2505*((x2506==x2507)>>x2508));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x2549 = -21015;
	static int16_t x2550 = -105;
	static volatile int64_t x2551 = 216LL;
	volatile int32_t t81 = -515141304;

	t81 = (x2549*((x2550==x2551)>>x2552));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x2553 = -245561402LL;
	static volatile uint64_t x2555 = 74LLU;
	static volatile uint16_t x2556 = 1U;

	t82 = (x2553*((x2554==x2555)>>x2556));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x2569 = -6;
	int16_t x2570 = 21;
	volatile int8_t x2571 = INT8_MIN;
	int32_t x2572 = 0;

	t83 = (x2569*((x2570==x2571)>>x2572));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x2593 = INT64_MAX;
	static uint32_t x2594 = 0U;
	int8_t x2595 = -1;
	uint64_t x2596 = 8LLU;
	static int64_t t84 = -19903690582251300LL;

	t84 = (x2593*((x2594==x2595)>>x2596));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint32_t x2629 = 119597U;
	int8_t x2630 = INT8_MAX;
	int16_t x2631 = INT16_MIN;
	uint16_t x2632 = 1U;
	uint32_t t85 = 8U;

	t85 = (x2629*((x2630==x2631)>>x2632));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x2657 = UINT32_MAX;
	int32_t x2658 = INT32_MIN;
	int32_t x2659 = -915;
	int8_t x2660 = 15;
	uint32_t t86 = 31833591U;

	t86 = (x2657*((x2658==x2659)>>x2660));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x2669 = -26;
	int8_t x2670 = INT8_MIN;
	volatile int32_t x2672 = 1;
	volatile int32_t t87 = 1260688;

	t87 = (x2669*((x2670==x2671)>>x2672));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint64_t x2701 = 1647147877233855888LLU;
	volatile uint64_t x2702 = 246806LLU;
	static uint16_t x2703 = 42U;
	int8_t x2704 = 1;
	uint64_t t88 = 236043185682LLU;

	t88 = (x2701*((x2702==x2703)>>x2704));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x2733 = INT64_MIN;
	int32_t x2734 = INT32_MAX;
	volatile int64_t x2735 = 657749LL;
	static uint8_t x2736 = 0U;
	static volatile int64_t t89 = -406LL;

	t89 = (x2733*((x2734==x2735)>>x2736));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x2813 = INT32_MIN;
	uint64_t x2814 = 8368465164603LLU;
	int64_t x2815 = 467482302330164LL;
	int32_t t90 = 64970020;

	t90 = (x2813*((x2814==x2815)>>x2816));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x2833 = 4700U;
	static uint16_t x2834 = 5362U;
	int32_t x2835 = INT32_MIN;
	static int16_t x2836 = 19;
	volatile int32_t t91 = 250656320;

	t91 = (x2833*((x2834==x2835)>>x2836));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x2933 = 3397115930533141LLU;
	static volatile uint16_t x2934 = UINT16_MAX;
	static int16_t x2935 = -117;
	uint8_t x2936 = 1U;
	volatile uint64_t t92 = 2084289LLU;

	t92 = (x2933*((x2934==x2935)>>x2936));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x2944 = 10;
	volatile int32_t t93 = -3365399;

	t93 = (x2941*((x2942==x2943)>>x2944));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x3002 = INT16_MIN;
	uint8_t x3003 = 14U;
	uint32_t x3004 = 1U;
	static int32_t t94 = 93;

	t94 = (x3001*((x3002==x3003)>>x3004));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x3026 = 15;
	int16_t x3027 = INT16_MAX;
	uint8_t x3028 = 5U;

	t95 = (x3025*((x3026==x3027)>>x3028));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x3033 = -1LL;
	static uint32_t x3034 = 190385659U;
	uint64_t x3035 = 2412861700517091LLU;
	uint8_t x3036 = 15U;
	int64_t t96 = -4LL;

	t96 = (x3033*((x3034==x3035)>>x3036));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x3041 = 1265283617U;
	int32_t x3042 = 2;
	uint8_t x3043 = 27U;
	int64_t x3044 = 21LL;
	uint32_t t97 = 67U;

	t97 = (x3041*((x3042==x3043)>>x3044));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x3069 = UINT32_MAX;
	int32_t x3070 = -16342;
	uint64_t x3071 = 766467104573308002LLU;
	uint8_t x3072 = 1U;

	t98 = (x3069*((x3070==x3071)>>x3072));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x3127 = -1;

	t99 = (x3125*((x3126==x3127)>>x3128));

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

