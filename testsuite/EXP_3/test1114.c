#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x43 = UINT64_MAX;
int64_t x102 = INT64_MIN;
uint32_t x103 = UINT32_MAX;
uint32_t x124 = 31U;
int8_t x188 = 8;
uint16_t x225 = 9U;
static int32_t t6 = -7787597;
int64_t x342 = 1391600LL;
static volatile int16_t x354 = INT16_MIN;
int8_t x356 = 1;
volatile int32_t t11 = 93475;
static int64_t x590 = 488183732400771LL;
int8_t x615 = INT8_MAX;
int32_t t14 = 257031640;
int8_t x674 = 2;
uint32_t x731 = 746151142U;
int8_t x884 = 0;
int32_t x888 = 7;
uint16_t x911 = UINT16_MAX;
uint8_t x1332 = 4U;
int8_t x1378 = -8;
int8_t x1379 = 0;
uint32_t x1451 = 55U;
int8_t x1506 = -26;
uint8_t x1522 = UINT8_MAX;
volatile int32_t t34 = 4;
volatile int64_t x1837 = INT64_MIN;
uint8_t x1844 = 50U;
static uint8_t x1877 = 3U;
int8_t x1881 = INT8_MIN;
uint8_t x1884 = 2U;
volatile int32_t t42 = -53673;
int64_t x2021 = 13591942717LL;
int16_t x2024 = 9;
volatile int32_t t45 = -2140;
uint32_t x2158 = 16U;
volatile int8_t x2160 = 0;
int8_t x2228 = 43;
int32_t t48 = -114940;
static int64_t x2462 = INT64_MIN;
volatile int32_t t49 = -68255151;
int32_t t50 = 380496628;
volatile int32_t t55 = 2097;
int32_t t58 = 28584;
static int32_t x2947 = INT32_MAX;
int64_t x2950 = INT64_MIN;
static int16_t x2951 = 4743;
int8_t x2972 = 2;
volatile int32_t t62 = -10436;
static int64_t x3217 = INT64_MAX;
volatile int32_t x3218 = 63;
int32_t t63 = 1870;
static volatile uint16_t x3393 = UINT16_MAX;
static int8_t x3412 = 5;
uint32_t x3463 = 581050302U;
volatile int32_t t69 = 1637;
int8_t x3514 = -11;
uint64_t x3533 = 53180LLU;
static volatile uint64_t x3536 = 16LLU;
volatile int8_t x3609 = INT8_MIN;
int8_t x3753 = INT8_MIN;
volatile int32_t t75 = 106;
int8_t x3776 = 1;
int16_t x3859 = INT16_MAX;
uint8_t x3860 = 5U;
static uint32_t x3863 = 583803U;
int8_t x3864 = 2;
volatile uint64_t x4015 = UINT64_MAX;
int8_t x4016 = 0;
volatile int32_t t79 = -935;
volatile uint16_t x4344 = 6U;
uint64_t x4507 = 91862126386LLU;
static volatile int16_t x4508 = 6;
volatile uint64_t x4571 = 203448168545LLU;
static uint8_t x4572 = 1U;
int32_t t85 = 1;
volatile uint32_t x4578 = UINT32_MAX;
int64_t x4717 = -2763102467019LL;
volatile int32_t t89 = 3818;
volatile uint32_t x4981 = 7061140U;
int8_t x4984 = 24;
uint64_t x5046 = 1828392437LLU;
static uint16_t x5094 = 3U;
int32_t t93 = -1341;
volatile uint64_t x5098 = 703249523978LLU;
volatile int8_t x5100 = 2;
int64_t x5114 = INT64_MAX;
uint64_t x5116 = 0LLU;
int32_t x5133 = INT32_MAX;
uint8_t x5135 = UINT8_MAX;
uint32_t x5136 = 0U;


void f0(void) {
	int8_t x41 = -1;
	int32_t x42 = INT32_MIN;
	int8_t x44 = 47;
	volatile int32_t t0 = 1222069;

	t0 = ((x41==x42)<(x43>>x44));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x49 = INT32_MIN;
	volatile uint16_t x50 = 7628U;
	uint16_t x51 = UINT16_MAX;
	int32_t x52 = 0;
	volatile int32_t t1 = -1000;

	t1 = ((x49==x50)<(x51>>x52));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x101 = 33;
	volatile int32_t x104 = 0;
	volatile int32_t t2 = -75199232;

	t2 = ((x101==x102)<(x103>>x104));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x121 = 5;
	int8_t x122 = INT8_MAX;
	uint16_t x123 = UINT16_MAX;
	static int32_t t3 = 42294253;

	t3 = ((x121==x122)<(x123>>x124));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x185 = 648U;
	volatile uint32_t x186 = 19877U;
	uint16_t x187 = 10U;
	int32_t t4 = -4037693;

	t4 = ((x185==x186)<(x187>>x188));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x189 = INT16_MIN;
	int8_t x190 = INT8_MIN;
	int32_t x191 = 14258;
	int8_t x192 = 24;
	int32_t t5 = 5566;

	t5 = ((x189==x190)<(x191>>x192));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x226 = 354326203;
	int64_t x227 = 793538LL;
	static volatile uint16_t x228 = 2U;

	t6 = ((x225==x226)<(x227>>x228));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x229 = 178451508U;
	int8_t x230 = INT8_MAX;
	static int32_t x231 = 484283;
	volatile int16_t x232 = 1;
	int32_t t7 = -174;

	t7 = ((x229==x230)<(x231>>x232));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x341 = INT8_MAX;
	int64_t x343 = 4329202497698742410LL;
	uint8_t x344 = 4U;
	int32_t t8 = 1;

	t8 = ((x341==x342)<(x343>>x344));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x353 = 1;
	int16_t x355 = 50;
	static int32_t t9 = 60873;

	t9 = ((x353==x354)<(x355>>x356));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x481 = INT8_MIN;
	int32_t x482 = INT32_MIN;
	int32_t x483 = INT32_MAX;
	volatile uint8_t x484 = 1U;
	int32_t t10 = -7873;

	t10 = ((x481==x482)<(x483>>x484));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x493 = -13;
	uint8_t x494 = 1U;
	int8_t x495 = 2;
	uint16_t x496 = 11U;

	t11 = ((x493==x494)<(x495>>x496));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint16_t x569 = 3380U;
	static int16_t x570 = INT16_MIN;
	uint8_t x571 = 0U;
	static int8_t x572 = 1;
	int32_t t12 = 1;

	t12 = ((x569==x570)<(x571>>x572));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x589 = INT64_MIN;
	volatile uint8_t x591 = 30U;
	static uint16_t x592 = 0U;
	int32_t t13 = 1;

	t13 = ((x589==x590)<(x591>>x592));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x613 = 398U;
	static int32_t x614 = -1;
	int8_t x616 = 1;

	t14 = ((x613==x614)<(x615>>x616));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x673 = 673053727;
	static uint64_t x675 = 74041LLU;
	uint16_t x676 = 3U;
	volatile int32_t t15 = -1715;

	t15 = ((x673==x674)<(x675>>x676));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x729 = 7;
	uint8_t x730 = 28U;
	uint8_t x732 = 17U;
	int32_t t16 = 52;

	t16 = ((x729==x730)<(x731>>x732));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x853 = 4105522U;
	static uint16_t x854 = 2U;
	uint64_t x855 = 108503978LLU;
	uint8_t x856 = 63U;
	static volatile int32_t t17 = 5715850;

	t17 = ((x853==x854)<(x855>>x856));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x881 = 4248U;
	uint32_t x882 = 2816U;
	uint16_t x883 = 22429U;
	volatile int32_t t18 = -6004702;

	t18 = ((x881==x882)<(x883>>x884));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x885 = UINT64_MAX;
	int16_t x886 = INT16_MIN;
	static volatile int16_t x887 = 82;
	static volatile int32_t t19 = 4331348;

	t19 = ((x885==x886)<(x887>>x888));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x909 = 182324859U;
	uint16_t x910 = UINT16_MAX;
	int8_t x912 = 7;
	int32_t t20 = -3013991;

	t20 = ((x909==x910)<(x911>>x912));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x949 = INT16_MIN;
	static int8_t x950 = INT8_MAX;
	uint32_t x951 = 2655075U;
	static int16_t x952 = 8;
	volatile int32_t t21 = -384192875;

	t21 = ((x949==x950)<(x951>>x952));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x993 = 38165013LLU;
	int8_t x994 = 2;
	uint64_t x995 = 31LLU;
	uint16_t x996 = 8U;
	int32_t t22 = -52;

	t22 = ((x993==x994)<(x995>>x996));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1217 = 1;
	int32_t x1218 = -2;
	static uint64_t x1219 = 8452LLU;
	static volatile int64_t x1220 = 6LL;
	volatile int32_t t23 = 1106074;

	t23 = ((x1217==x1218)<(x1219>>x1220));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1273 = -271199867;
	uint16_t x1274 = 1322U;
	int32_t x1275 = 789789;
	uint32_t x1276 = 2U;
	volatile int32_t t24 = -15512055;

	t24 = ((x1273==x1274)<(x1275>>x1276));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1329 = 96103092547929864LL;
	int64_t x1330 = INT64_MIN;
	volatile int8_t x1331 = 0;
	volatile int32_t t25 = 7;

	t25 = ((x1329==x1330)<(x1331>>x1332));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1377 = INT64_MIN;
	uint16_t x1380 = 31U;
	volatile int32_t t26 = 104752;

	t26 = ((x1377==x1378)<(x1379>>x1380));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1389 = INT16_MIN;
	int16_t x1390 = -1;
	volatile int8_t x1391 = INT8_MAX;
	volatile uint16_t x1392 = 0U;
	int32_t t27 = 94765;

	t27 = ((x1389==x1390)<(x1391>>x1392));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1437 = -1;
	uint64_t x1438 = UINT64_MAX;
	static uint16_t x1439 = 25597U;
	uint32_t x1440 = 2U;
	static int32_t t28 = -1;

	t28 = ((x1437==x1438)<(x1439>>x1440));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x1449 = 1;
	int32_t x1450 = 13809;
	uint16_t x1452 = 2U;
	volatile int32_t t29 = -57114;

	t29 = ((x1449==x1450)<(x1451>>x1452));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x1505 = INT64_MIN;
	volatile int64_t x1507 = 44495792986081LL;
	int64_t x1508 = 1LL;
	int32_t t30 = 156550;

	t30 = ((x1505==x1506)<(x1507>>x1508));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1521 = -1;
	static int8_t x1523 = INT8_MAX;
	uint8_t x1524 = 5U;
	int32_t t31 = 494144408;

	t31 = ((x1521==x1522)<(x1523>>x1524));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1629 = INT8_MIN;
	uint64_t x1630 = 222LLU;
	uint8_t x1631 = UINT8_MAX;
	static int8_t x1632 = 7;
	int32_t t32 = 64075;

	t32 = ((x1629==x1630)<(x1631>>x1632));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1665 = -1;
	int16_t x1666 = INT16_MIN;
	static int64_t x1667 = 234540007568LL;
	volatile int8_t x1668 = 0;
	static volatile int32_t t33 = -6;

	t33 = ((x1665==x1666)<(x1667>>x1668));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1817 = INT8_MIN;
	int64_t x1818 = -1LL;
	uint16_t x1819 = UINT16_MAX;
	int16_t x1820 = 2;

	t34 = ((x1817==x1818)<(x1819>>x1820));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x1838 = -1;
	uint16_t x1839 = 0U;
	uint8_t x1840 = 30U;
	volatile int32_t t35 = 30;

	t35 = ((x1837==x1838)<(x1839>>x1840));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1841 = INT16_MIN;
	int16_t x1842 = INT16_MIN;
	uint64_t x1843 = 674856LLU;
	int32_t t36 = -24;

	t36 = ((x1841==x1842)<(x1843>>x1844));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1857 = INT64_MIN;
	volatile int16_t x1858 = -1;
	uint32_t x1859 = 57U;
	int16_t x1860 = 1;
	int32_t t37 = -120171;

	t37 = ((x1857==x1858)<(x1859>>x1860));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x1878 = INT32_MAX;
	volatile int16_t x1879 = INT16_MAX;
	uint8_t x1880 = 11U;
	volatile int32_t t38 = 438354841;

	t38 = ((x1877==x1878)<(x1879>>x1880));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x1882 = UINT16_MAX;
	static volatile int8_t x1883 = INT8_MAX;
	int32_t t39 = 0;

	t39 = ((x1881==x1882)<(x1883>>x1884));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1897 = 95057LLU;
	int16_t x1898 = INT16_MIN;
	volatile uint64_t x1899 = UINT64_MAX;
	int16_t x1900 = 38;
	volatile int32_t t40 = -329655;

	t40 = ((x1897==x1898)<(x1899>>x1900));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x1961 = INT16_MIN;
	volatile int16_t x1962 = -1;
	uint32_t x1963 = UINT32_MAX;
	int16_t x1964 = 1;
	volatile int32_t t41 = 14356798;

	t41 = ((x1961==x1962)<(x1963>>x1964));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x1989 = 45U;
	int16_t x1990 = INT16_MAX;
	int32_t x1991 = 210;
	static uint8_t x1992 = 5U;

	t42 = ((x1989==x1990)<(x1991>>x1992));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x2017 = 1141717;
	static uint8_t x2018 = 1U;
	volatile uint16_t x2019 = 25292U;
	uint16_t x2020 = 1U;
	volatile int32_t t43 = -23;

	t43 = ((x2017==x2018)<(x2019>>x2020));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2022 = -1;
	uint64_t x2023 = 1LLU;
	static volatile int32_t t44 = -10913;

	t44 = ((x2021==x2022)<(x2023>>x2024));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x2113 = UINT32_MAX;
	int8_t x2114 = INT8_MIN;
	static int32_t x2115 = 139727836;
	int8_t x2116 = 1;

	t45 = ((x2113==x2114)<(x2115>>x2116));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x2157 = 7LLU;
	uint16_t x2159 = 125U;
	volatile int32_t t46 = -812346;

	t46 = ((x2157==x2158)<(x2159>>x2160));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x2161 = UINT64_MAX;
	int32_t x2162 = 74530;
	static int8_t x2163 = 0;
	uint8_t x2164 = 13U;
	int32_t t47 = -1;

	t47 = ((x2161==x2162)<(x2163>>x2164));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x2225 = -1;
	static int16_t x2226 = -1;
	uint64_t x2227 = UINT64_MAX;

	t48 = ((x2225==x2226)<(x2227>>x2228));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2461 = -1;
	uint16_t x2463 = UINT16_MAX;
	int8_t x2464 = 0;

	t49 = ((x2461==x2462)<(x2463>>x2464));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2481 = -1;
	uint32_t x2482 = 4U;
	volatile uint8_t x2483 = UINT8_MAX;
	static volatile int8_t x2484 = 1;

	t50 = ((x2481==x2482)<(x2483>>x2484));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x2525 = 114U;
	int8_t x2526 = -1;
	int16_t x2527 = INT16_MAX;
	int16_t x2528 = 4;
	volatile int32_t t51 = -18;

	t51 = ((x2525==x2526)<(x2527>>x2528));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x2585 = 5655;
	volatile int16_t x2586 = -785;
	uint64_t x2587 = 8238220557568219LLU;
	volatile uint8_t x2588 = 1U;
	static int32_t t52 = 309;

	t52 = ((x2585==x2586)<(x2587>>x2588));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x2693 = 6708;
	static volatile int64_t x2694 = INT64_MAX;
	volatile uint8_t x2695 = 3U;
	uint8_t x2696 = 5U;
	volatile int32_t t53 = -178770;

	t53 = ((x2693==x2694)<(x2695>>x2696));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x2705 = INT16_MAX;
	int64_t x2706 = INT64_MAX;
	uint64_t x2707 = UINT64_MAX;
	static uint8_t x2708 = 22U;
	static int32_t t54 = -213869433;

	t54 = ((x2705==x2706)<(x2707>>x2708));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2733 = INT16_MAX;
	int64_t x2734 = INT64_MIN;
	volatile int16_t x2735 = INT16_MAX;
	uint8_t x2736 = 2U;

	t55 = ((x2733==x2734)<(x2735>>x2736));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2797 = -1;
	int16_t x2798 = INT16_MIN;
	uint16_t x2799 = UINT16_MAX;
	int16_t x2800 = 0;
	int32_t t56 = -22172757;

	t56 = ((x2797==x2798)<(x2799>>x2800));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x2913 = -426879;
	int8_t x2914 = INT8_MIN;
	uint8_t x2915 = UINT8_MAX;
	uint16_t x2916 = 3U;
	static int32_t t57 = -117974243;

	t57 = ((x2913==x2914)<(x2915>>x2916));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x2921 = 1471536LL;
	int8_t x2922 = INT8_MIN;
	int32_t x2923 = 0;
	uint8_t x2924 = 2U;

	t58 = ((x2921==x2922)<(x2923>>x2924));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x2945 = INT32_MIN;
	volatile int32_t x2946 = -1;
	uint16_t x2948 = 19U;
	volatile int32_t t59 = -20;

	t59 = ((x2945==x2946)<(x2947>>x2948));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x2949 = 15;
	uint32_t x2952 = 0U;
	volatile int32_t t60 = -38;

	t60 = ((x2949==x2950)<(x2951>>x2952));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2969 = -1;
	uint32_t x2970 = 22U;
	uint32_t x2971 = 179U;
	int32_t t61 = 0;

	t61 = ((x2969==x2970)<(x2971>>x2972));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x3005 = 1250;
	static int8_t x3006 = INT8_MIN;
	int16_t x3007 = 4880;
	volatile uint16_t x3008 = 0U;

	t62 = ((x3005==x3006)<(x3007>>x3008));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3219 = 9036U;
	uint16_t x3220 = 4U;

	t63 = ((x3217==x3218)<(x3219>>x3220));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x3221 = -1;
	uint32_t x3222 = 491U;
	static uint64_t x3223 = 119484LLU;
	int32_t x3224 = 1;
	volatile int32_t t64 = -51482530;

	t64 = ((x3221==x3222)<(x3223>>x3224));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x3394 = INT8_MAX;
	int8_t x3395 = 7;
	int64_t x3396 = 3LL;
	static volatile int32_t t65 = 3294863;

	t65 = ((x3393==x3394)<(x3395>>x3396));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x3409 = 6510LL;
	int16_t x3410 = 0;
	volatile uint64_t x3411 = 110730694415LLU;
	volatile int32_t t66 = -2;

	t66 = ((x3409==x3410)<(x3411>>x3412));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x3461 = -1;
	int32_t x3462 = -42;
	uint16_t x3464 = 3U;
	int32_t t67 = 8;

	t67 = ((x3461==x3462)<(x3463>>x3464));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x3473 = 1U;
	uint16_t x3474 = UINT16_MAX;
	static uint64_t x3475 = UINT64_MAX;
	uint32_t x3476 = 2U;
	volatile int32_t t68 = 221;

	t68 = ((x3473==x3474)<(x3475>>x3476));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3497 = -1;
	static int8_t x3498 = -1;
	static uint64_t x3499 = UINT64_MAX;
	static uint8_t x3500 = 6U;

	t69 = ((x3497==x3498)<(x3499>>x3500));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x3513 = 15881938560LL;
	uint64_t x3515 = 7515LLU;
	volatile int8_t x3516 = 40;
	volatile int32_t t70 = 714763015;

	t70 = ((x3513==x3514)<(x3515>>x3516));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x3534 = -1;
	int8_t x3535 = 2;
	int32_t t71 = 1278112;

	t71 = ((x3533==x3534)<(x3535>>x3536));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x3601 = UINT16_MAX;
	uint64_t x3602 = UINT64_MAX;
	uint32_t x3603 = UINT32_MAX;
	int16_t x3604 = 13;
	int32_t t72 = -4805113;

	t72 = ((x3601==x3602)<(x3603>>x3604));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x3610 = 104858;
	uint16_t x3611 = 224U;
	uint8_t x3612 = 11U;
	int32_t t73 = 7;

	t73 = ((x3609==x3610)<(x3611>>x3612));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x3693 = -276;
	int64_t x3694 = -1LL;
	static volatile uint32_t x3695 = 21025U;
	volatile int16_t x3696 = 3;
	int32_t t74 = -22281669;

	t74 = ((x3693==x3694)<(x3695>>x3696));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x3754 = INT64_MIN;
	uint64_t x3755 = UINT64_MAX;
	volatile int16_t x3756 = 0;

	t75 = ((x3753==x3754)<(x3755>>x3756));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x3773 = -1;
	int32_t x3774 = INT32_MAX;
	int64_t x3775 = 2615985010878LL;
	int32_t t76 = 290;

	t76 = ((x3773==x3774)<(x3775>>x3776));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x3857 = INT32_MAX;
	int32_t x3858 = INT32_MIN;
	volatile int32_t t77 = -914411906;

	t77 = ((x3857==x3858)<(x3859>>x3860));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x3861 = 1U;
	uint32_t x3862 = 1U;
	int32_t t78 = -42671;

	t78 = ((x3861==x3862)<(x3863>>x3864));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x4013 = 54U;
	volatile int16_t x4014 = -6957;

	t79 = ((x4013==x4014)<(x4015>>x4016));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x4217 = UINT8_MAX;
	static volatile uint32_t x4218 = 1U;
	int64_t x4219 = 107403996LL;
	uint32_t x4220 = 11U;
	int32_t t80 = 6830407;

	t80 = ((x4217==x4218)<(x4219>>x4220));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x4341 = -82;
	uint16_t x4342 = UINT16_MAX;
	uint8_t x4343 = UINT8_MAX;
	int32_t t81 = 464321;

	t81 = ((x4341==x4342)<(x4343>>x4344));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x4445 = 227078U;
	int16_t x4446 = INT16_MIN;
	static uint64_t x4447 = 6184891433LLU;
	int64_t x4448 = 0LL;
	int32_t t82 = 572;

	t82 = ((x4445==x4446)<(x4447>>x4448));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x4505 = UINT64_MAX;
	volatile int32_t x4506 = -1;
	volatile int32_t t83 = 58;

	t83 = ((x4505==x4506)<(x4507>>x4508));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x4565 = -1;
	int16_t x4566 = 3;
	static int64_t x4567 = INT64_MAX;
	uint16_t x4568 = 31U;
	volatile int32_t t84 = -7874;

	t84 = ((x4565==x4566)<(x4567>>x4568));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x4569 = INT16_MIN;
	static volatile int32_t x4570 = INT32_MIN;

	t85 = ((x4569==x4570)<(x4571>>x4572));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x4577 = INT32_MIN;
	int8_t x4579 = 1;
	volatile uint32_t x4580 = 1U;
	static int32_t t86 = -4865;

	t86 = ((x4577==x4578)<(x4579>>x4580));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x4621 = -1LL;
	static int32_t x4622 = INT32_MIN;
	int32_t x4623 = INT32_MAX;
	uint8_t x4624 = 0U;
	volatile int32_t t87 = -400262003;

	t87 = ((x4621==x4622)<(x4623>>x4624));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x4718 = 7U;
	uint8_t x4719 = 0U;
	uint16_t x4720 = 6U;
	int32_t t88 = -4097;

	t88 = ((x4717==x4718)<(x4719>>x4720));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x4809 = INT64_MIN;
	uint64_t x4810 = 3290LLU;
	static int32_t x4811 = 204369;
	int16_t x4812 = 5;

	t89 = ((x4809==x4810)<(x4811>>x4812));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x4913 = -1;
	int8_t x4914 = -21;
	uint8_t x4915 = UINT8_MAX;
	volatile uint64_t x4916 = 31LLU;
	int32_t t90 = 3;

	t90 = ((x4913==x4914)<(x4915>>x4916));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x4982 = 6LL;
	uint8_t x4983 = 3U;
	volatile int32_t t91 = -16237;

	t91 = ((x4981==x4982)<(x4983>>x4984));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x5045 = -1;
	static int32_t x5047 = 2571939;
	volatile int8_t x5048 = 0;
	static volatile int32_t t92 = 4522;

	t92 = ((x5045==x5046)<(x5047>>x5048));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x5093 = INT32_MIN;
	int16_t x5095 = 17;
	static int16_t x5096 = 0;

	t93 = ((x5093==x5094)<(x5095>>x5096));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x5097 = -4;
	static volatile uint16_t x5099 = 20U;
	volatile int32_t t94 = -7085579;

	t94 = ((x5097==x5098)<(x5099>>x5100));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x5113 = UINT64_MAX;
	int8_t x5115 = 0;
	volatile int32_t t95 = 93142;

	t95 = ((x5113==x5114)<(x5115>>x5116));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x5129 = UINT32_MAX;
	uint16_t x5130 = UINT16_MAX;
	static uint64_t x5131 = UINT64_MAX;
	static int8_t x5132 = 1;
	static int32_t t96 = 171388374;

	t96 = ((x5129==x5130)<(x5131>>x5132));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x5134 = INT32_MIN;
	int32_t t97 = 1122872;

	t97 = ((x5133==x5134)<(x5135>>x5136));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x5197 = INT32_MIN;
	int16_t x5198 = 5760;
	static uint16_t x5199 = 29368U;
	uint16_t x5200 = 0U;
	static volatile int32_t t98 = -1045;

	t98 = ((x5197==x5198)<(x5199>>x5200));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x5233 = 861785708095783LLU;
	volatile uint32_t x5234 = UINT32_MAX;
	int64_t x5235 = INT64_MAX;
	uint16_t x5236 = 3U;
	static int32_t t99 = -182669377;

	t99 = ((x5233==x5234)<(x5235>>x5236));

	if (t99 != 1) { NG(); } else { ; }
	
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

