#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x40 = 7U;
uint16_t x51 = UINT16_MAX;
int32_t t2 = 14;
uint16_t x149 = 182U;
int16_t x152 = 3;
static volatile int32_t x183 = INT32_MIN;
static int8_t x194 = INT8_MAX;
static volatile uint32_t x339 = 120914771U;
int8_t x374 = -1;
int64_t t10 = -7657480LL;
int8_t x458 = INT8_MIN;
int64_t x522 = -98258205407LL;
static volatile int32_t x523 = INT32_MIN;
int64_t t12 = -15028885995362LL;
volatile uint32_t x600 = 1U;
volatile int64_t t14 = -415919560233774LL;
int8_t x683 = INT8_MIN;
int8_t x684 = 2;
uint8_t x733 = 1U;
int16_t x736 = 0;
int64_t x759 = 1045263LL;
int16_t x770 = -1;
static int16_t x772 = 0;
uint16_t x776 = 1U;
static int32_t x878 = 1416;
int64_t t22 = -750LL;
volatile int64_t t23 = 7753241704507LL;
int64_t x939 = INT64_MIN;
int16_t x984 = 17;
uint16_t x1050 = UINT16_MAX;
int64_t x1051 = INT64_MIN;
int16_t x1052 = 1;
static volatile int64_t x1095 = -231328717LL;
int32_t x1103 = -1;
int32_t x1107 = -1;
int32_t t30 = -171694457;
static int16_t x1115 = -1;
volatile int64_t x1211 = INT64_MIN;
volatile int64_t t32 = 3383LL;
int32_t x1271 = 13849;
volatile uint8_t x1276 = 3U;
uint16_t x1348 = 5U;
int64_t x1447 = -976LL;
int64_t t37 = 195536378138LL;
int32_t x1498 = INT32_MAX;
static volatile int64_t x1499 = INT64_MIN;
volatile int8_t x1501 = INT8_MAX;
uint16_t x1502 = 1364U;
int8_t x1504 = 43;
volatile int32_t x1522 = -9;
int8_t x1528 = 0;
static uint16_t x1536 = 19U;
uint64_t x1570 = 3023LLU;
uint16_t x1572 = 11U;
static volatile uint64_t t44 = 181124LLU;
int64_t x1585 = 4091159996632586149LL;
uint8_t x1588 = 0U;
int64_t t45 = 205834122371129LL;
int32_t x1629 = -1;
int32_t x1754 = -1;
volatile int16_t x1756 = 61;
static int32_t x1815 = INT32_MAX;
static int64_t x1823 = INT64_MIN;
volatile uint16_t x1824 = 60U;
static int8_t x1828 = 3;
static uint64_t x1845 = 6322372669LLU;
volatile int64_t x1846 = INT64_MAX;
static int64_t t56 = -13LL;
volatile int64_t t57 = 1737209478LL;
uint16_t x2117 = 9U;
uint32_t x2119 = UINT32_MAX;
static uint32_t x2174 = 55353U;
uint16_t x2176 = 11U;
int32_t t61 = 13205722;
int32_t x2215 = INT32_MIN;
static int8_t x2397 = 12;
int8_t x2405 = 5;
int8_t x2408 = 3;
uint16_t x2458 = 4071U;
uint8_t x2459 = 73U;
volatile int32_t t66 = -10708;
static uint16_t x2473 = UINT16_MAX;
uint8_t x2552 = 7U;
static volatile int64_t x2601 = INT64_MIN;
int16_t x2686 = INT16_MIN;
int32_t t72 = -440602384;
uint8_t x2832 = 22U;
uint32_t x2950 = 289U;
static uint8_t x2966 = 8U;
static volatile int64_t x2985 = 400223234998168LL;
volatile uint64_t x3051 = 5958241LLU;
volatile int64_t x3224 = 0LL;
static volatile int64_t t83 = -6981262549619LL;
int64_t x3226 = INT64_MIN;
static uint32_t x3228 = 8U;
int16_t x3290 = 1458;
int8_t x3292 = 0;
int16_t x3349 = -1;
int8_t x3408 = 4;
uint64_t x3414 = 173791220748LLU;
uint64_t x3415 = 61215895830825LLU;
volatile uint8_t x3418 = UINT8_MAX;
int32_t t92 = 564788316;
int32_t x3425 = 27;
int64_t x3427 = -1LL;
uint8_t x3480 = 24U;
uint32_t t97 = 5U;
int8_t x3530 = 1;
int16_t x3532 = 1;
int16_t x3636 = 1;


void f0(void) {
	uint64_t x37 = 7583LLU;
	static int64_t x38 = -9716143493LL;
	static int64_t x39 = -1LL;
	static uint64_t t0 = 72066595LLU;

	t0 = ((x37*(x38/x39))>>x40);

	if (t0 != 575605594589LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x49 = INT32_MAX;
	uint32_t x50 = UINT32_MAX;
	static uint8_t x52 = 1U;
	uint32_t t1 = 1445665U;

	t1 = ((x49*(x50/x51))>>x52);

	if (t1 != 1073709055U) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x129 = -1;
	volatile int16_t x130 = INT16_MIN;
	uint8_t x131 = 20U;
	static int32_t x132 = 0;

	t2 = ((x129*(x130/x131))>>x132);

	if (t2 != 1638) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x150 = 5520U;
	uint32_t x151 = UINT32_MAX;
	volatile uint32_t t3 = 299U;

	t3 = ((x149*(x150/x151))>>x152);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x181 = 35780;
	static uint16_t x182 = 5534U;
	int8_t x184 = 6;
	int32_t t4 = -40770;

	t4 = ((x181*(x182/x183))>>x184);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x193 = 2978358LL;
	int8_t x195 = INT8_MIN;
	volatile int8_t x196 = 3;
	volatile int64_t t5 = 589845509077800766LL;

	t5 = ((x193*(x194/x195))>>x196);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x217 = 3792LL;
	uint32_t x218 = 463593417U;
	uint64_t x219 = 82955058LLU;
	static volatile uint32_t x220 = 17U;
	volatile uint64_t t6 = 131618004297140LLU;

	t6 = ((x217*(x218/x219))>>x220);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x337 = INT8_MAX;
	volatile uint8_t x338 = UINT8_MAX;
	volatile uint16_t x340 = 0U;
	uint32_t t7 = 644251881U;

	t7 = ((x337*(x338/x339))>>x340);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x373 = UINT8_MAX;
	uint8_t x375 = 7U;
	uint8_t x376 = 4U;
	static volatile int32_t t8 = -1;

	t8 = ((x373*(x374/x375))>>x376);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x405 = INT16_MIN;
	static uint64_t x406 = 54010399LLU;
	int16_t x407 = INT16_MIN;
	int8_t x408 = 0;
	volatile uint64_t t9 = 1232839LLU;

	t9 = ((x405*(x406/x407))>>x408);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x429 = INT32_MAX;
	int8_t x430 = INT8_MIN;
	int64_t x431 = -1LL;
	uint16_t x432 = 5U;

	t10 = ((x429*(x430/x431))>>x432);

	if (t10 != 8589934588LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x457 = 97U;
	int64_t x459 = 490207LL;
	uint8_t x460 = 1U;
	int64_t t11 = 491997621LL;

	t11 = ((x457*(x458/x459))>>x460);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x521 = UINT8_MAX;
	static volatile int8_t x524 = 25;

	t12 = ((x521*(x522/x523))>>x524);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x597 = 183LLU;
	uint8_t x598 = 46U;
	static int64_t x599 = 395725LL;
	uint64_t t13 = 2942319244LLU;

	t13 = ((x597*(x598/x599))>>x600);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x677 = INT64_MIN;
	static int8_t x678 = 32;
	int8_t x679 = INT8_MIN;
	int16_t x680 = 3;

	t14 = ((x677*(x678/x679))>>x680);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x681 = UINT8_MAX;
	uint8_t x682 = 51U;
	int32_t t15 = 7124977;

	t15 = ((x681*(x682/x683))>>x684);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x701 = INT8_MIN;
	int8_t x702 = 63;
	volatile uint64_t x703 = UINT64_MAX;
	int16_t x704 = 3;
	volatile uint64_t t16 = 585337224713LLU;

	t16 = ((x701*(x702/x703))>>x704);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x734 = INT8_MIN;
	int16_t x735 = INT16_MIN;
	int32_t t17 = 2683;

	t17 = ((x733*(x734/x735))>>x736);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x757 = -20;
	int64_t x758 = -851065658LL;
	uint8_t x760 = 0U;
	volatile int64_t t18 = -2031LL;

	t18 = ((x757*(x758/x759))>>x760);

	if (t18 != 16280LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x769 = -1;
	int16_t x771 = INT16_MAX;
	volatile int32_t t19 = 65598079;

	t19 = ((x769*(x770/x771))>>x772);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x773 = INT8_MIN;
	volatile uint32_t x774 = 102U;
	uint64_t x775 = 135405720646LLU;
	uint64_t t20 = 24240379023742LLU;

	t20 = ((x773*(x774/x775))>>x776);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x817 = INT64_MIN;
	static volatile int64_t x818 = -1LL;
	int16_t x819 = 2;
	uint8_t x820 = 36U;
	int64_t t21 = -1LL;

	t21 = ((x817*(x818/x819))>>x820);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x877 = 1LL;
	uint32_t x879 = 380U;
	volatile uint16_t x880 = 5U;

	t22 = ((x877*(x878/x879))>>x880);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x901 = -1;
	volatile int16_t x902 = INT16_MIN;
	int64_t x903 = 69058712746013436LL;
	volatile uint8_t x904 = 1U;

	t23 = ((x901*(x902/x903))>>x904);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x937 = INT8_MIN;
	volatile int16_t x938 = 0;
	int16_t x940 = 1;
	int64_t t24 = -10183313444823LL;

	t24 = ((x937*(x938/x939))>>x940);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x981 = 3799468389216151277LL;
	static int16_t x982 = -1;
	int64_t x983 = -604LL;
	int64_t t25 = -2011919239974731230LL;

	t25 = ((x981*(x982/x983))>>x984);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x997 = 265484287LL;
	uint64_t x998 = 183036624408350528LLU;
	static int8_t x999 = -38;
	int8_t x1000 = 0;
	volatile uint64_t t26 = 17905566192LLU;

	t26 = ((x997*(x998/x999))>>x1000);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1049 = INT64_MAX;
	volatile int64_t t27 = -4884426LL;

	t27 = ((x1049*(x1050/x1051))>>x1052);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1093 = 100;
	int32_t x1094 = -368164;
	uint64_t x1096 = 7LLU;
	volatile int64_t t28 = 1632LL;

	t28 = ((x1093*(x1094/x1095))>>x1096);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x1101 = -312LL;
	volatile uint64_t x1102 = UINT64_MAX;
	int8_t x1104 = 0;
	volatile uint64_t t29 = 744978133841LLU;

	t29 = ((x1101*(x1102/x1103))>>x1104);

	if (t29 != 18446744073709551304LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1105 = 45U;
	int8_t x1106 = -3;
	volatile int32_t x1108 = 0;

	t30 = ((x1105*(x1106/x1107))>>x1108);

	if (t30 != 135) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1113 = -1;
	uint32_t x1114 = 355333U;
	uint16_t x1116 = 2U;
	uint32_t t31 = 1635U;

	t31 = ((x1113*(x1114/x1115))>>x1116);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1209 = UINT32_MAX;
	int32_t x1210 = -174731;
	uint8_t x1212 = 0U;

	t32 = ((x1209*(x1210/x1211))>>x1212);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1213 = -1;
	static uint8_t x1214 = UINT8_MAX;
	int64_t x1215 = INT64_MIN;
	int32_t x1216 = 0;
	volatile int64_t t33 = 23108504611373LL;

	t33 = ((x1213*(x1214/x1215))>>x1216);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x1269 = 84687096494LLU;
	volatile int32_t x1270 = INT32_MIN;
	int8_t x1272 = 0;
	uint64_t t34 = 242LLU;

	t34 = ((x1269*(x1270/x1271))>>x1272);

	if (t34 != 18433612153778806000LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1273 = 1;
	static volatile int32_t x1274 = 8499498;
	int32_t x1275 = 56;
	int32_t t35 = -945340083;

	t35 = ((x1273*(x1274/x1275))>>x1276);

	if (t35 != 18972) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x1345 = 100LLU;
	int16_t x1346 = INT16_MAX;
	int8_t x1347 = INT8_MIN;
	uint64_t t36 = 9212675913962137LLU;

	t36 = ((x1345*(x1346/x1347))>>x1348);

	if (t36 != 576460752303422691LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1445 = -1;
	uint16_t x1446 = UINT16_MAX;
	volatile int8_t x1448 = 9;

	t37 = ((x1445*(x1446/x1447))>>x1448);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1453 = INT64_MIN;
	uint8_t x1454 = 10U;
	int32_t x1455 = INT32_MIN;
	static volatile int8_t x1456 = 26;
	volatile int64_t t38 = -13115573682978882LL;

	t38 = ((x1453*(x1454/x1455))>>x1456);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1497 = -1;
	uint8_t x1500 = 1U;
	int64_t t39 = 1LL;

	t39 = ((x1497*(x1498/x1499))>>x1500);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x1503 = 1497078604LLU;
	volatile uint64_t t40 = 190103409618069LLU;

	t40 = ((x1501*(x1502/x1503))>>x1504);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1521 = 6615423157026325LLU;
	int8_t x1523 = INT8_MAX;
	static int8_t x1524 = 46;
	volatile uint64_t t41 = 1549116202LLU;

	t41 = ((x1521*(x1522/x1523))>>x1524);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x1525 = UINT32_MAX;
	int16_t x1526 = INT16_MIN;
	int16_t x1527 = 457;
	volatile uint32_t t42 = 31495085U;

	t42 = ((x1525*(x1526/x1527))>>x1528);

	if (t42 != 71U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x1533 = 1U;
	int8_t x1534 = INT8_MIN;
	int8_t x1535 = -38;
	volatile int32_t t43 = -703;

	t43 = ((x1533*(x1534/x1535))>>x1536);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x1569 = 1451U;
	uint8_t x1571 = UINT8_MAX;

	t44 = ((x1569*(x1570/x1571))>>x1572);

	if (t44 != 7LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1586 = INT8_MAX;
	int64_t x1587 = INT64_MAX;

	t45 = ((x1585*(x1586/x1587))>>x1588);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1617 = INT8_MAX;
	volatile int64_t x1618 = -1LL;
	static uint32_t x1619 = 301480292U;
	uint8_t x1620 = 3U;
	volatile int64_t t46 = -62036LL;

	t46 = ((x1617*(x1618/x1619))>>x1620);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x1630 = -4;
	int64_t x1631 = 2212847LL;
	static volatile uint8_t x1632 = 0U;
	volatile int64_t t47 = 65146445995346LL;

	t47 = ((x1629*(x1630/x1631))>>x1632);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x1705 = -1;
	volatile int8_t x1706 = INT8_MAX;
	uint8_t x1707 = UINT8_MAX;
	int8_t x1708 = 13;
	volatile int32_t t48 = -79;

	t48 = ((x1705*(x1706/x1707))>>x1708);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x1753 = INT8_MIN;
	int64_t x1755 = 44417229896LL;
	volatile int64_t t49 = 4738251136467LL;

	t49 = ((x1753*(x1754/x1755))>>x1756);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x1813 = 70565244355812331LLU;
	int16_t x1814 = 12942;
	uint8_t x1816 = 7U;
	static volatile uint64_t t50 = 538927284223792LLU;

	t50 = ((x1813*(x1814/x1815))>>x1816);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1821 = INT8_MAX;
	int32_t x1822 = -1;
	volatile int64_t t51 = 4237648231LL;

	t51 = ((x1821*(x1822/x1823))>>x1824);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1825 = -1948;
	int16_t x1826 = INT16_MIN;
	int32_t x1827 = 211799881;
	volatile int32_t t52 = 16320;

	t52 = ((x1825*(x1826/x1827))>>x1828);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x1833 = INT32_MAX;
	volatile int16_t x1834 = -6;
	int64_t x1835 = 27511LL;
	int8_t x1836 = 32;
	static volatile int64_t t53 = 5296538393LL;

	t53 = ((x1833*(x1834/x1835))>>x1836);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x1847 = 698LL;
	volatile int8_t x1848 = 3;
	volatile uint64_t t54 = 19632789LLU;

	t54 = ((x1845*(x1846/x1847))>>x1848);

	if (t54 != 576460751981870150LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x1889 = 200;
	int16_t x1890 = -9050;
	int64_t x1891 = 656218063126LL;
	uint32_t x1892 = 1U;
	static int64_t t55 = 50537028258234531LL;

	t55 = ((x1889*(x1890/x1891))>>x1892);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x1957 = 745177801LL;
	int32_t x1958 = INT32_MAX;
	int32_t x1959 = 849614;
	int8_t x1960 = 36;

	t56 = ((x1957*(x1958/x1959))>>x1960);

	if (t56 != 27LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x1969 = INT64_MIN;
	uint32_t x1970 = 30640932U;
	int32_t x1971 = INT32_MAX;
	int16_t x1972 = 1;

	t57 = ((x1969*(x1970/x1971))>>x1972);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x2021 = 518U;
	int32_t x2022 = INT32_MIN;
	uint32_t x2023 = 795197U;
	uint8_t x2024 = 0U;
	uint32_t t58 = 12U;

	t58 = ((x2021*(x2022/x2023))>>x2024);

	if (t58 != 1398600U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x2118 = 11U;
	static int8_t x2120 = 0;
	uint32_t t59 = 50813985U;

	t59 = ((x2117*(x2118/x2119))>>x2120);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x2173 = 19U;
	int16_t x2175 = 3;
	volatile uint32_t t60 = 9U;

	t60 = ((x2173*(x2174/x2175))>>x2176);

	if (t60 != 171U) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x2209 = INT8_MIN;
	volatile uint16_t x2210 = 0U;
	int8_t x2211 = INT8_MIN;
	static int8_t x2212 = 1;

	t61 = ((x2209*(x2210/x2211))>>x2212);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x2213 = 0;
	int64_t x2214 = 3264LL;
	static volatile uint8_t x2216 = 6U;
	volatile int64_t t62 = -40836298LL;

	t62 = ((x2213*(x2214/x2215))>>x2216);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x2389 = -1LL;
	uint8_t x2390 = 7U;
	volatile int8_t x2391 = INT8_MIN;
	int16_t x2392 = 23;
	int64_t t63 = 11LL;

	t63 = ((x2389*(x2390/x2391))>>x2392);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x2398 = INT8_MIN;
	uint64_t x2399 = UINT64_MAX;
	int16_t x2400 = 1;
	uint64_t t64 = 1577616LLU;

	t64 = ((x2397*(x2398/x2399))>>x2400);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x2406 = UINT16_MAX;
	static int32_t x2407 = -790124964;
	volatile int32_t t65 = -145502397;

	t65 = ((x2405*(x2406/x2407))>>x2408);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x2457 = 4;
	int8_t x2460 = 1;

	t66 = ((x2457*(x2458/x2459))>>x2460);

	if (t66 != 110) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2474 = -1;
	static int8_t x2475 = -1;
	uint8_t x2476 = 13U;
	int32_t t67 = 30;

	t67 = ((x2473*(x2474/x2475))>>x2476);

	if (t67 != 7) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x2509 = UINT16_MAX;
	volatile uint8_t x2510 = UINT8_MAX;
	int32_t x2511 = -8171942;
	uint8_t x2512 = 25U;
	volatile int32_t t68 = -3867294;

	t68 = ((x2509*(x2510/x2511))>>x2512);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x2549 = 0U;
	int32_t x2550 = 293722;
	int64_t x2551 = INT64_MIN;
	int64_t t69 = -19789396096LL;

	t69 = ((x2549*(x2550/x2551))>>x2552);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x2602 = INT8_MIN;
	int64_t x2603 = INT64_MIN;
	uint32_t x2604 = 2U;
	int64_t t70 = 58835286003LL;

	t70 = ((x2601*(x2602/x2603))>>x2604);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x2665 = UINT64_MAX;
	static int16_t x2666 = -30;
	volatile int16_t x2667 = INT16_MIN;
	int64_t x2668 = 0LL;
	static uint64_t t71 = 11999073LLU;

	t71 = ((x2665*(x2666/x2667))>>x2668);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2685 = INT16_MIN;
	uint8_t x2687 = 4U;
	int8_t x2688 = 1;

	t72 = ((x2685*(x2686/x2687))>>x2688);

	if (t72 != 134217728) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2781 = -1021;
	int16_t x2782 = -11;
	uint32_t x2783 = UINT32_MAX;
	uint8_t x2784 = 8U;
	volatile uint32_t t73 = 865833U;

	t73 = ((x2781*(x2782/x2783))>>x2784);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x2829 = INT16_MAX;
	volatile int64_t x2830 = -1LL;
	int32_t x2831 = INT32_MIN;
	volatile int64_t t74 = 1212354342072LL;

	t74 = ((x2829*(x2830/x2831))>>x2832);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x2865 = -1;
	int8_t x2866 = 1;
	int64_t x2867 = -1030982102LL;
	uint16_t x2868 = 7U;
	volatile int64_t t75 = 1229994287630546LL;

	t75 = ((x2865*(x2866/x2867))>>x2868);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x2869 = 666377U;
	int64_t x2870 = -1LL;
	static int8_t x2871 = INT8_MIN;
	uint8_t x2872 = 5U;
	volatile int64_t t76 = -4006908510790040LL;

	t76 = ((x2869*(x2870/x2871))>>x2872);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x2949 = -86107LL;
	int16_t x2951 = -40;
	int8_t x2952 = 3;
	volatile int64_t t77 = -4983479LL;

	t77 = ((x2949*(x2950/x2951))>>x2952);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x2965 = UINT8_MAX;
	volatile int16_t x2967 = -101;
	uint16_t x2968 = 10U;
	int32_t t78 = -2586006;

	t78 = ((x2965*(x2966/x2967))>>x2968);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x2986 = -12155LL;
	static int32_t x2987 = -469918580;
	volatile int8_t x2988 = 0;
	volatile int64_t t79 = 151880262101059LL;

	t79 = ((x2985*(x2986/x2987))>>x2988);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x3049 = 129855;
	int32_t x3050 = -2001209;
	uint32_t x3052 = 0U;
	volatile uint64_t t80 = 1567117038LLU;

	t80 = ((x3049*(x3050/x3051))>>x3052);

	if (t80 != 402031732467874740LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x3053 = 2;
	volatile int64_t x3054 = -1LL;
	int32_t x3055 = -1;
	uint32_t x3056 = 0U;
	static volatile int64_t t81 = 3272LL;

	t81 = ((x3053*(x3054/x3055))>>x3056);

	if (t81 != 2LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x3193 = INT16_MIN;
	int8_t x3194 = 1;
	int32_t x3195 = INT32_MAX;
	static uint16_t x3196 = 8U;
	int32_t t82 = 4223;

	t82 = ((x3193*(x3194/x3195))>>x3196);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x3221 = UINT16_MAX;
	static int64_t x3222 = INT64_MIN;
	int32_t x3223 = INT32_MIN;

	t83 = ((x3221*(x3222/x3223))>>x3224);

	if (t83 != 281470681743360LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x3225 = -1;
	static int8_t x3227 = 3;
	volatile int64_t t84 = -5LL;

	t84 = ((x3225*(x3226/x3227))>>x3228);

	if (t84 != 12009599006321322LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x3289 = INT32_MAX;
	uint32_t x3291 = UINT32_MAX;
	static uint32_t t85 = 40U;

	t85 = ((x3289*(x3290/x3291))>>x3292);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x3293 = 346U;
	uint16_t x3294 = UINT16_MAX;
	static uint32_t x3295 = UINT32_MAX;
	int8_t x3296 = 1;
	uint32_t t86 = 222240600U;

	t86 = ((x3293*(x3294/x3295))>>x3296);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x3301 = INT32_MIN;
	int32_t x3302 = 20;
	uint32_t x3303 = UINT32_MAX;
	int8_t x3304 = 0;
	volatile uint32_t t87 = 1013969U;

	t87 = ((x3301*(x3302/x3303))>>x3304);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x3350 = INT16_MIN;
	int64_t x3351 = 48670LL;
	static uint16_t x3352 = 0U;
	int64_t t88 = 621133653960LL;

	t88 = ((x3349*(x3350/x3351))>>x3352);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x3397 = 245159729LLU;
	int8_t x3398 = -1;
	int16_t x3399 = -1;
	int32_t x3400 = 1;
	volatile uint64_t t89 = 1503270LLU;

	t89 = ((x3397*(x3398/x3399))>>x3400);

	if (t89 != 122579864LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x3405 = INT8_MIN;
	int32_t x3406 = -1;
	int8_t x3407 = INT8_MIN;
	int32_t t90 = 209;

	t90 = ((x3405*(x3406/x3407))>>x3408);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x3413 = 130U;
	static volatile uint8_t x3416 = 10U;
	static volatile uint64_t t91 = 249344LLU;

	t91 = ((x3413*(x3414/x3415))>>x3416);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x3417 = 18118U;
	int8_t x3419 = INT8_MAX;
	static volatile int8_t x3420 = 1;

	t92 = ((x3417*(x3418/x3419))>>x3420);

	if (t92 != 18118) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x3426 = UINT64_MAX;
	volatile uint64_t x3428 = 11LLU;
	volatile uint64_t t93 = 61059832247160LLU;

	t93 = ((x3425*(x3426/x3427))>>x3428);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x3429 = 1U;
	int64_t x3430 = 862878974813938LL;
	uint8_t x3431 = UINT8_MAX;
	volatile int32_t x3432 = 6;
	volatile int64_t t94 = -1222153931498917LL;

	t94 = ((x3429*(x3430/x3431))>>x3432);

	if (t94 != 52872486201LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x3461 = -10;
	volatile int16_t x3462 = 0;
	volatile int16_t x3463 = INT16_MIN;
	int8_t x3464 = 17;
	volatile int32_t t95 = 76;

	t95 = ((x3461*(x3462/x3463))>>x3464);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x3477 = INT16_MIN;
	int32_t x3478 = INT32_MAX;
	int64_t x3479 = -1LL;
	static int64_t t96 = -606991779881802865LL;

	t96 = ((x3477*(x3478/x3479))>>x3480);

	if (t96 != 4194303LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x3509 = UINT32_MAX;
	int32_t x3510 = INT32_MIN;
	static uint16_t x3511 = 2254U;
	uint32_t x3512 = 10U;

	t97 = ((x3509*(x3510/x3511))>>x3512);

	if (t97 != 930U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x3529 = -670830;
	int8_t x3531 = INT8_MIN;
	int32_t t98 = 230;

	t98 = ((x3529*(x3530/x3531))>>x3532);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x3633 = -13752;
	uint8_t x3634 = 7U;
	int16_t x3635 = -5266;
	volatile int32_t t99 = 301045;

	t99 = ((x3633*(x3634/x3635))>>x3636);

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

