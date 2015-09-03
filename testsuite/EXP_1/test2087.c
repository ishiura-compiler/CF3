#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x38 = 0LLU;
uint8_t x42 = 118U;
int16_t x95 = INT16_MIN;
uint8_t x96 = 1U;
uint16_t x126 = 318U;
uint64_t x187 = 25069LLU;
uint8_t x207 = 3U;
int32_t x229 = 112583;
int64_t x298 = 14318622276912613LL;
volatile int8_t x310 = INT8_MAX;
uint32_t x312 = 14U;
static int64_t t9 = -19105436338LL;
int32_t x317 = INT32_MIN;
volatile int32_t t10 = 36;
int64_t t12 = 70397847004209LL;
uint16_t x388 = 17U;
uint32_t x525 = 4U;
volatile uint8_t x795 = 44U;
uint8_t x796 = 1U;
volatile int32_t t18 = -16;
uint64_t x887 = 3570120975LLU;
int32_t x1031 = -1;
static uint64_t x1101 = 7104510939251488542LLU;
int8_t x1104 = 6;
volatile uint64_t t22 = 28659LLU;
static int32_t x1170 = -1;
static int8_t x1173 = -15;
int32_t t24 = -26;
int32_t x1307 = -1;
int64_t x1337 = INT64_MIN;
volatile int8_t x1373 = INT8_MAX;
int8_t x1375 = INT8_MIN;
volatile int32_t x1394 = -2661239;
static int32_t x1426 = -1;
int8_t x1427 = -1;
static int64_t x1430 = INT64_MIN;
static int8_t x1431 = -1;
volatile int16_t x1492 = 18;
uint64_t t34 = 2716967LLU;
volatile int64_t t35 = -6106LL;
uint8_t x1599 = UINT8_MAX;
volatile int8_t x1642 = INT8_MIN;
uint64_t t38 = 99LLU;
volatile int64_t t39 = -52LL;
static uint32_t t41 = 0U;
uint16_t x1789 = 16U;
uint8_t x1826 = 30U;
uint8_t x1828 = 0U;
uint16_t x1833 = UINT16_MAX;
volatile uint64_t x1851 = 880183146646707LLU;
uint64_t t46 = 728863604965369LLU;
uint32_t x2012 = 18U;
int16_t x2053 = -10501;
int16_t x2055 = INT16_MIN;
uint32_t x2119 = 7U;
volatile uint64_t x2120 = 15LLU;
int64_t x2134 = INT64_MAX;
int16_t x2299 = INT16_MIN;
uint32_t x2305 = UINT32_MAX;
volatile uint16_t x2310 = 230U;
int32_t x2426 = -5;
static int64_t x2427 = INT64_MIN;
static volatile int32_t x2441 = INT32_MIN;
static int32_t x2442 = -10;
uint16_t x2576 = 1U;
int16_t x2582 = INT16_MAX;
static int16_t x2642 = -1;
uint64_t x2644 = 3LLU;
int8_t x2661 = INT8_MIN;
volatile uint64_t x2663 = 4663834230942LLU;
int64_t t66 = -1LL;
volatile int64_t t67 = -724LL;
uint64_t t69 = 461868141561136079LLU;
uint16_t x2794 = UINT16_MAX;
uint16_t x2845 = 1U;
int32_t x2846 = INT32_MIN;
int16_t x2990 = -1;
int8_t x3030 = INT8_MAX;
int32_t x3031 = -880647;
uint64_t t76 = 124LLU;
int64_t x3087 = -264LL;
uint64_t t79 = 29756153399339LLU;
volatile int16_t x3186 = -80;
int16_t x3217 = 2;
int32_t x3345 = -1398;
volatile uint64_t t82 = 0LLU;
static volatile int8_t x3401 = INT8_MIN;
volatile int64_t x3601 = INT64_MAX;
static volatile uint32_t t91 = 1442U;
static volatile uint32_t x3644 = 6U;
int16_t x3689 = -985;
uint64_t t95 = 142128173792916435LLU;
int64_t x3708 = 1LL;
uint16_t x3709 = 840U;
volatile int64_t x3710 = INT64_MIN;
int16_t x3711 = -1;
int64_t x3734 = INT64_MAX;
int8_t x3765 = INT8_MIN;
int32_t t99 = 3957;


void f0(void) {
	int64_t x37 = INT64_MAX;
	volatile uint64_t x39 = 2LLU;
	static uint16_t x40 = 14U;
	static uint64_t t0 = 845188062LLU;

	t0 = (((x37^x38)%x39)>>x40);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x41 = 11089LL;
	static int8_t x43 = -1;
	uint16_t x44 = 45U;
	volatile int64_t t1 = -266314453259572380LL;

	t1 = (((x41^x42)%x43)>>x44);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x93 = 0U;
	int16_t x94 = 57;
	int32_t t2 = -198828;

	t2 = (((x93^x94)%x95)>>x96);

	if (t2 != 28) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x125 = 1415U;
	static int32_t x127 = INT32_MIN;
	int8_t x128 = 29;
	int32_t t3 = 14751;

	t3 = (((x125^x126)%x127)>>x128);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x153 = -1;
	int16_t x154 = INT16_MAX;
	int64_t x155 = -1LL;
	uint8_t x156 = 41U;
	int64_t t4 = 6085087569848297LL;

	t4 = (((x153^x154)%x155)>>x156);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x185 = 214;
	int64_t x186 = INT64_MAX;
	uint8_t x188 = 0U;
	static volatile uint64_t t5 = 3304316004373131LLU;

	t5 = (((x185^x186)%x187)>>x188);

	if (t5 != 12168LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x205 = INT32_MIN;
	int64_t x206 = INT64_MIN;
	volatile int8_t x208 = 1;
	static int64_t t6 = -2861731265412756587LL;

	t6 = (((x205^x206)%x207)>>x208);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x230 = 354LL;
	uint16_t x231 = UINT16_MAX;
	static volatile uint16_t x232 = 1U;
	volatile int64_t t7 = 8316973LL;

	t7 = (((x229^x230)%x231)>>x232);

	if (t7 != 23379LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x297 = UINT32_MAX;
	int8_t x299 = -1;
	volatile int16_t x300 = 27;
	int64_t t8 = 33590538802617LL;

	t8 = (((x297^x298)%x299)>>x300);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x309 = 4239218LL;
	int32_t x311 = INT32_MIN;

	t9 = (((x309^x310)%x311)>>x312);

	if (t9 != 258LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x318 = INT32_MIN;
	static int8_t x319 = -1;
	static uint8_t x320 = 0U;

	t10 = (((x317^x318)%x319)>>x320);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x325 = INT16_MIN;
	uint16_t x326 = 7349U;
	static int16_t x327 = 1;
	volatile uint16_t x328 = 28U;
	volatile int32_t t11 = 6;

	t11 = (((x325^x326)%x327)>>x328);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x369 = INT8_MIN;
	int32_t x370 = -10889959;
	static int64_t x371 = -1LL;
	uint16_t x372 = 0U;

	t12 = (((x369^x370)%x371)>>x372);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x385 = -1;
	volatile int64_t x386 = -1LL;
	int32_t x387 = 123610;
	int64_t t13 = 113654333LL;

	t13 = (((x385^x386)%x387)>>x388);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x526 = 10;
	uint8_t x527 = 1U;
	int8_t x528 = 4;
	static uint32_t t14 = 28U;

	t14 = (((x525^x526)%x527)>>x528);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x633 = -17947;
	int8_t x634 = INT8_MAX;
	int16_t x635 = -1;
	uint8_t x636 = 7U;
	volatile int32_t t15 = 30021550;

	t15 = (((x633^x634)%x635)>>x636);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x793 = 2;
	volatile uint32_t x794 = UINT32_MAX;
	volatile uint32_t t16 = 5567U;

	t16 = (((x793^x794)%x795)>>x796);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x825 = -29;
	int64_t x826 = -540LL;
	int16_t x827 = INT16_MIN;
	uint16_t x828 = 1U;
	int64_t t17 = 11232736826LL;

	t17 = (((x825^x826)%x827)>>x828);

	if (t17 != 259LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x833 = INT16_MAX;
	int32_t x834 = INT32_MAX;
	int8_t x835 = -1;
	static int8_t x836 = 1;

	t18 = (((x833^x834)%x835)>>x836);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x841 = INT8_MIN;
	int8_t x842 = INT8_MAX;
	static uint8_t x843 = 1U;
	uint8_t x844 = 3U;
	int32_t t19 = -19769156;

	t19 = (((x841^x842)%x843)>>x844);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x885 = -1;
	int8_t x886 = 0;
	static uint8_t x888 = 27U;
	uint64_t t20 = 282389LLU;

	t20 = (((x885^x886)%x887)>>x888);

	if (t20 != 15LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1029 = -2;
	int8_t x1030 = INT8_MAX;
	int8_t x1032 = 0;
	int32_t t21 = 150;

	t21 = (((x1029^x1030)%x1031)>>x1032);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1102 = 54552898014708645LLU;
	static int8_t x1103 = -1;

	t22 = (((x1101^x1102)%x1103)>>x1104);

	if (t22 != 110731895259353810LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x1169 = UINT8_MAX;
	int64_t x1171 = -1LL;
	int32_t x1172 = 38;
	volatile int64_t t23 = 700324947LL;

	t23 = (((x1169^x1170)%x1171)>>x1172);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1174 = -1;
	static int8_t x1175 = INT8_MIN;
	static uint8_t x1176 = 27U;

	t24 = (((x1173^x1174)%x1175)>>x1176);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1201 = 9787U;
	volatile int8_t x1202 = -1;
	int8_t x1203 = -2;
	uint8_t x1204 = 7U;
	uint32_t t25 = 1594U;

	t25 = (((x1201^x1202)%x1203)>>x1204);

	if (t25 != 33554355U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1305 = 23U;
	static int64_t x1306 = -1LL;
	int8_t x1308 = 0;
	static volatile int64_t t26 = -15427179LL;

	t26 = (((x1305^x1306)%x1307)>>x1308);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1338 = -2;
	static int16_t x1339 = INT16_MAX;
	uint8_t x1340 = 6U;
	volatile int64_t t27 = 577643716993761254LL;

	t27 = (((x1337^x1338)%x1339)>>x1340);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1374 = -1;
	static uint16_t x1376 = 11U;
	int32_t t28 = 2948;

	t28 = (((x1373^x1374)%x1375)>>x1376);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x1393 = -1;
	int8_t x1395 = -12;
	volatile uint32_t x1396 = 2U;
	volatile int32_t t29 = 321;

	t29 = (((x1393^x1394)%x1395)>>x1396);

	if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1401 = 105;
	volatile int16_t x1402 = INT16_MIN;
	static uint64_t x1403 = 376231214590LLU;
	uint32_t x1404 = 4U;
	uint64_t t30 = 312416587842483LLU;

	t30 = (((x1401^x1402)%x1403)>>x1404);

	if (t30 != 4998754558LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1405 = -1LL;
	int64_t x1406 = 396181LL;
	uint64_t x1407 = UINT64_MAX;
	int8_t x1408 = 7;
	uint64_t t31 = 203736LLU;

	t31 = (((x1405^x1406)%x1407)>>x1408);

	if (t31 != 144115188075852776LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1425 = 39U;
	uint32_t x1428 = 4U;
	volatile int32_t t32 = -10;

	t32 = (((x1425^x1426)%x1427)>>x1428);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1429 = 0;
	uint8_t x1432 = 21U;
	int64_t t33 = -13376419782412LL;

	t33 = (((x1429^x1430)%x1431)>>x1432);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x1489 = INT64_MIN;
	int16_t x1490 = INT16_MAX;
	uint64_t x1491 = 403037011LLU;

	t34 = (((x1489^x1490)%x1491)>>x1492);

	if (t34 != 801LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x1505 = INT64_MIN;
	int64_t x1506 = -322144893501072193LL;
	static int16_t x1507 = -1;
	static uint8_t x1508 = 25U;

	t35 = (((x1505^x1506)%x1507)>>x1508);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x1597 = -4;
	uint32_t x1598 = 5U;
	uint8_t x1600 = 8U;
	uint32_t t36 = 725428260U;

	t36 = (((x1597^x1598)%x1599)>>x1600);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x1641 = INT64_MIN;
	int16_t x1643 = INT16_MIN;
	uint8_t x1644 = 61U;
	volatile int64_t t37 = 62059LL;

	t37 = (((x1641^x1642)%x1643)>>x1644);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1653 = INT16_MIN;
	uint64_t x1654 = UINT64_MAX;
	uint16_t x1655 = 9606U;
	uint16_t x1656 = 53U;

	t38 = (((x1653^x1654)%x1655)>>x1656);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x1701 = INT64_MIN;
	int8_t x1702 = INT8_MIN;
	int32_t x1703 = INT32_MAX;
	int32_t x1704 = 1;

	t39 = (((x1701^x1702)%x1703)>>x1704);

	if (t39 != 1073741760LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1705 = INT64_MAX;
	volatile int8_t x1706 = 0;
	uint8_t x1707 = 2U;
	volatile int32_t x1708 = 10;
	int64_t t40 = 3441561242046LL;

	t40 = (((x1705^x1706)%x1707)>>x1708);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1745 = 1U;
	int16_t x1746 = INT16_MIN;
	uint8_t x1747 = UINT8_MAX;
	volatile uint8_t x1748 = 1U;

	t41 = (((x1745^x1746)%x1747)>>x1748);

	if (t41 != 64U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x1790 = INT16_MIN;
	int8_t x1791 = -1;
	static int32_t x1792 = 1;
	volatile int32_t t42 = -104735;

	t42 = (((x1789^x1790)%x1791)>>x1792);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x1809 = INT16_MAX;
	int32_t x1810 = INT32_MAX;
	static int32_t x1811 = -202661;
	int8_t x1812 = 6;
	static int32_t t43 = -2488;

	t43 = (((x1809^x1810)%x1811)>>x1812);

	if (t43 != 858) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x1825 = UINT16_MAX;
	int16_t x1827 = INT16_MAX;
	static int32_t t44 = 45593;

	t44 = (((x1825^x1826)%x1827)>>x1828);

	if (t44 != 32738) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x1834 = INT64_MAX;
	static uint32_t x1835 = 1381587U;
	static uint8_t x1836 = 7U;
	static volatile int64_t t45 = 29113412887884630LL;

	t45 = (((x1833^x1834)%x1835)>>x1836);

	if (t45 != 6596LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x1849 = 5711513LLU;
	uint16_t x1850 = UINT16_MAX;
	static int16_t x1852 = 5;

	t46 = (((x1849^x1850)%x1851)>>x1852);

	if (t46 != 179915LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x1977 = 4094U;
	int32_t x1978 = 4602185;
	int64_t x1979 = 15227LL;
	static volatile int16_t x1980 = 1;
	static volatile int64_t t47 = 8305945379LL;

	t47 = (((x1977^x1978)%x1979)>>x1980);

	if (t47 != 1486LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x2009 = -1;
	static volatile int64_t x2010 = -1LL;
	static int16_t x2011 = INT16_MIN;
	volatile int64_t t48 = -3421563LL;

	t48 = (((x2009^x2010)%x2011)>>x2012);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x2054 = -1;
	uint8_t x2056 = 7U;
	int32_t t49 = -916355302;

	t49 = (((x2053^x2054)%x2055)>>x2056);

	if (t49 != 82) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2117 = 0;
	int32_t x2118 = INT32_MIN;
	uint32_t t50 = 606U;

	t50 = (((x2117^x2118)%x2119)>>x2120);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2133 = 10;
	uint8_t x2135 = 22U;
	static int8_t x2136 = 14;
	int64_t t51 = 20LL;

	t51 = (((x2133^x2134)%x2135)>>x2136);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2241 = INT8_MIN;
	int16_t x2242 = INT16_MIN;
	static int64_t x2243 = -14784661423229LL;
	uint64_t x2244 = 1LLU;
	int64_t t52 = 6369LL;

	t52 = (((x2241^x2242)%x2243)>>x2244);

	if (t52 != 16320LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2293 = -1;
	uint32_t x2294 = UINT32_MAX;
	uint64_t x2295 = UINT64_MAX;
	uint16_t x2296 = 1U;
	volatile uint64_t t53 = 2888128835604589608LLU;

	t53 = (((x2293^x2294)%x2295)>>x2296);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x2297 = UINT64_MAX;
	int32_t x2298 = -1;
	volatile uint8_t x2300 = 12U;
	volatile uint64_t t54 = 150648467368LLU;

	t54 = (((x2297^x2298)%x2299)>>x2300);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2306 = INT16_MIN;
	static uint16_t x2307 = 94U;
	int8_t x2308 = 0;
	volatile uint32_t t55 = 53U;

	t55 = (((x2305^x2306)%x2307)>>x2308);

	if (t55 != 55U) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x2309 = 650234874615472869LLU;
	static volatile int16_t x2311 = INT16_MAX;
	static volatile int8_t x2312 = 30;
	uint64_t t56 = 217LLU;

	t56 = (((x2309^x2310)%x2311)>>x2312);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x2381 = -3;
	int16_t x2382 = INT16_MIN;
	int8_t x2383 = 13;
	uint8_t x2384 = 2U;
	volatile int32_t t57 = 194105;

	t57 = (((x2381^x2382)%x2383)>>x2384);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x2425 = INT16_MIN;
	int16_t x2428 = 4;
	volatile int64_t t58 = 27390346154LL;

	t58 = (((x2425^x2426)%x2427)>>x2428);

	if (t58 != 2047LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x2443 = 1;
	volatile int8_t x2444 = 8;
	volatile int32_t t59 = -3824;

	t59 = (((x2441^x2442)%x2443)>>x2444);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x2573 = INT16_MIN;
	volatile uint64_t x2574 = UINT64_MAX;
	volatile int8_t x2575 = INT8_MIN;
	static volatile uint64_t t60 = 42373713384LLU;

	t60 = (((x2573^x2574)%x2575)>>x2576);

	if (t60 != 16383LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x2581 = INT16_MIN;
	volatile int16_t x2583 = -1;
	int32_t x2584 = 13;
	volatile int32_t t61 = -20346;

	t61 = (((x2581^x2582)%x2583)>>x2584);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x2605 = INT16_MIN;
	volatile int8_t x2606 = INT8_MIN;
	int32_t x2607 = -56;
	static int8_t x2608 = 0;
	static int32_t t62 = 31967823;

	t62 = (((x2605^x2606)%x2607)>>x2608);

	if (t62 != 48) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x2633 = 2077008521LL;
	uint8_t x2634 = 1U;
	int8_t x2635 = 45;
	uint8_t x2636 = 7U;
	volatile int64_t t63 = 14112009437301LL;

	t63 = (((x2633^x2634)%x2635)>>x2636);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x2641 = INT32_MIN;
	volatile int64_t x2643 = INT64_MIN;
	volatile int64_t t64 = 40LL;

	t64 = (((x2641^x2642)%x2643)>>x2644);

	if (t64 != 268435455LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x2662 = INT16_MAX;
	int8_t x2664 = 15;
	volatile uint64_t t65 = 82184413556304970LLU;

	t65 = (((x2661^x2662)%x2663)>>x2664);

	if (t65 != 54924152LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x2693 = INT8_MIN;
	int16_t x2694 = -1;
	int64_t x2695 = INT64_MIN;
	int8_t x2696 = 0;

	t66 = (((x2693^x2694)%x2695)>>x2696);

	if (t66 != 127LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x2701 = -1LL;
	int32_t x2702 = -1;
	static int8_t x2703 = INT8_MIN;
	uint8_t x2704 = 49U;

	t67 = (((x2701^x2702)%x2703)>>x2704);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x2741 = 2;
	uint32_t x2742 = UINT32_MAX;
	int16_t x2743 = INT16_MIN;
	uint16_t x2744 = 1U;
	volatile uint32_t t68 = 196170179U;

	t68 = (((x2741^x2742)%x2743)>>x2744);

	if (t68 != 16382U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x2777 = 25U;
	int32_t x2778 = -1;
	uint64_t x2779 = UINT64_MAX;
	int32_t x2780 = 3;

	t69 = (((x2777^x2778)%x2779)>>x2780);

	if (t69 != 2305843009213693948LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x2793 = INT16_MAX;
	int64_t x2795 = INT64_MIN;
	uint16_t x2796 = 0U;
	int64_t t70 = -3LL;

	t70 = (((x2793^x2794)%x2795)>>x2796);

	if (t70 != 32768LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x2847 = -1;
	static uint16_t x2848 = 31U;
	volatile int32_t t71 = -58313330;

	t71 = (((x2845^x2846)%x2847)>>x2848);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x2985 = 46252U;
	uint16_t x2986 = 7U;
	int32_t x2987 = 2433;
	uint8_t x2988 = 31U;
	volatile uint32_t t72 = 54339008U;

	t72 = (((x2985^x2986)%x2987)>>x2988);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x2989 = -1;
	int64_t x2991 = INT64_MIN;
	uint16_t x2992 = 13U;
	volatile int64_t t73 = 76941LL;

	t73 = (((x2989^x2990)%x2991)>>x2992);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x3005 = 46606272U;
	int32_t x3006 = INT32_MIN;
	static volatile int16_t x3007 = 2;
	int8_t x3008 = 26;
	volatile uint32_t t74 = 6289U;

	t74 = (((x3005^x3006)%x3007)>>x3008);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x3029 = 0;
	static uint16_t x3032 = 0U;
	int32_t t75 = -22648;

	t75 = (((x3029^x3030)%x3031)>>x3032);

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x3049 = INT16_MIN;
	uint64_t x3050 = 66914LLU;
	int8_t x3051 = -1;
	uint32_t x3052 = 0U;

	t76 = (((x3049^x3050)%x3051)>>x3052);

	if (t76 != 18446744073709454690LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x3085 = INT8_MIN;
	volatile int8_t x3086 = -1;
	uint64_t x3088 = 3LLU;
	volatile int64_t t77 = -178579906LL;

	t77 = (((x3085^x3086)%x3087)>>x3088);

	if (t77 != 15LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x3113 = -3;
	int8_t x3114 = -1;
	int8_t x3115 = INT8_MIN;
	int8_t x3116 = 1;
	int32_t t78 = 1;

	t78 = (((x3113^x3114)%x3115)>>x3116);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x3133 = INT16_MIN;
	int32_t x3134 = INT32_MIN;
	volatile uint64_t x3135 = 271LLU;
	int16_t x3136 = 5;

	t79 = (((x3133^x3134)%x3135)>>x3136);

	if (t79 != 8LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x3185 = INT8_MIN;
	int16_t x3187 = INT16_MIN;
	uint16_t x3188 = 5U;
	int32_t t80 = 109828894;

	t80 = (((x3185^x3186)%x3187)>>x3188);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x3218 = 86858047755LLU;
	int16_t x3219 = INT16_MIN;
	static int8_t x3220 = 1;
	volatile uint64_t t81 = 133484168215180LLU;

	t81 = (((x3217^x3218)%x3219)>>x3220);

	if (t81 != 43429023876LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x3346 = INT32_MIN;
	uint64_t x3347 = UINT64_MAX;
	int8_t x3348 = 4;

	t82 = (((x3345^x3346)%x3347)>>x3348);

	if (t82 != 134217640LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x3397 = INT32_MAX;
	int8_t x3398 = -19;
	uint32_t x3399 = UINT32_MAX;
	uint8_t x3400 = 7U;
	volatile uint32_t t83 = 37428U;

	t83 = (((x3397^x3398)%x3399)>>x3400);

	if (t83 != 16777216U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x3402 = 48;
	static volatile uint64_t x3403 = 42LLU;
	static volatile uint32_t x3404 = 5U;
	uint64_t t84 = 17835397003695LLU;

	t84 = (((x3401^x3402)%x3403)>>x3404);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x3409 = UINT16_MAX;
	int16_t x3410 = 14573;
	int32_t x3411 = INT32_MAX;
	volatile uint8_t x3412 = 0U;
	static int32_t t85 = 0;

	t85 = (((x3409^x3410)%x3411)>>x3412);

	if (t85 != 50962) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x3433 = INT8_MIN;
	uint8_t x3434 = 37U;
	static int16_t x3435 = -1;
	int8_t x3436 = 31;
	int32_t t86 = 57934;

	t86 = (((x3433^x3434)%x3435)>>x3436);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x3437 = -6;
	int8_t x3438 = INT8_MIN;
	static uint8_t x3439 = 64U;
	static int8_t x3440 = 0;
	int32_t t87 = -3;

	t87 = (((x3437^x3438)%x3439)>>x3440);

	if (t87 != 58) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x3441 = 1U;
	static uint16_t x3442 = UINT16_MAX;
	volatile int16_t x3443 = -925;
	uint32_t x3444 = 0U;
	volatile uint32_t t88 = 1135U;

	t88 = (((x3441^x3442)%x3443)>>x3444);

	if (t88 != 65534U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x3581 = 2606874U;
	volatile int32_t x3582 = INT32_MIN;
	static int8_t x3583 = INT8_MIN;
	uint8_t x3584 = 3U;
	volatile uint32_t t89 = 26217260U;

	t89 = (((x3581^x3582)%x3583)>>x3584);

	if (t89 != 268761315U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x3602 = -1LL;
	static int32_t x3603 = -1;
	uint8_t x3604 = 63U;
	int64_t t90 = 44404719647656499LL;

	t90 = (((x3601^x3602)%x3603)>>x3604);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x3609 = 5;
	uint32_t x3610 = 283814U;
	volatile uint16_t x3611 = 9U;
	uint16_t x3612 = 9U;

	t91 = (((x3609^x3610)%x3611)>>x3612);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x3641 = -1;
	uint32_t x3642 = UINT32_MAX;
	static volatile uint32_t x3643 = UINT32_MAX;
	static uint32_t t92 = 1U;

	t92 = (((x3641^x3642)%x3643)>>x3644);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x3665 = 9240U;
	int8_t x3666 = INT8_MAX;
	int64_t x3667 = -1LL;
	uint16_t x3668 = 3U;
	static int64_t t93 = 687774461613440471LL;

	t93 = (((x3665^x3666)%x3667)>>x3668);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x3690 = INT8_MIN;
	int16_t x3691 = INT16_MIN;
	uint32_t x3692 = 8U;
	volatile int32_t t94 = 342353158;

	t94 = (((x3689^x3690)%x3691)>>x3692);

	if (t94 != 3) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x3693 = 16979LLU;
	static int64_t x3694 = 133775906214337660LL;
	int32_t x3695 = -6268;
	static uint32_t x3696 = 3U;

	t95 = (((x3693^x3694)%x3695)>>x3696);

	if (t95 != 16721988276790213LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x3705 = -1;
	int16_t x3706 = INT16_MAX;
	volatile uint16_t x3707 = 8U;
	int32_t t96 = -343;

	t96 = (((x3705^x3706)%x3707)>>x3708);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x3712 = 15;
	int64_t t97 = 399055207709LL;

	t97 = (((x3709^x3710)%x3711)>>x3712);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x3733 = INT8_MAX;
	int64_t x3735 = INT64_MAX;
	uint8_t x3736 = 47U;
	int64_t t98 = -18487LL;

	t98 = (((x3733^x3734)%x3735)>>x3736);

	if (t98 != 65535LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x3766 = INT16_MIN;
	static uint8_t x3767 = 15U;
	uint32_t x3768 = 4U;

	t99 = (((x3765^x3766)%x3767)>>x3768);

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

