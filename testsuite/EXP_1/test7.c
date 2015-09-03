#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x8 = 15U;
int16_t x205 = INT16_MAX;
static uint64_t x280 = 13LLU;
static uint64_t t5 = 2385LLU;
uint8_t x337 = UINT8_MAX;
int64_t t6 = -84092190548LL;
uint32_t x606 = UINT32_MAX;
uint64_t x681 = 703LLU;
static uint8_t x684 = 19U;
int32_t x701 = INT32_MAX;
static int64_t x790 = -1LL;
int64_t x810 = -1LL;
static int64_t x847 = 4933LL;
uint64_t x849 = UINT64_MAX;
volatile uint64_t t17 = 553382351567LLU;
static volatile int64_t x862 = 4252391528519298209LL;
volatile int64_t t19 = -34289LL;
uint64_t t21 = 218662322114535LLU;
static uint32_t x960 = 1U;
uint64_t t22 = 204397039812LLU;
volatile uint8_t x964 = 0U;
uint64_t t23 = 25260LLU;
volatile int8_t x1060 = 0;
volatile int32_t x1097 = INT32_MAX;
uint8_t x1112 = 31U;
static int64_t x1175 = INT64_MAX;
int32_t x1207 = INT32_MAX;
int64_t x1215 = INT64_MIN;
int8_t x1216 = 2;
volatile uint8_t x1230 = 22U;
volatile int64_t x1231 = 7202972LL;
int32_t x1232 = 2;
static uint32_t x1249 = 302561630U;
static uint16_t x1250 = 0U;
volatile uint32_t t32 = 71606148U;
volatile int64_t x1370 = 2340245737817LL;
int16_t x1411 = -1;
int8_t x1416 = 1;
uint64_t x1417 = 16322980550LLU;
static volatile int16_t x1422 = -1;
static int64_t x1481 = -3737042LL;
static int8_t x1484 = 1;
static volatile int32_t x1526 = -10;
static uint64_t t42 = 2450670295LLU;
int8_t x1899 = INT8_MAX;
int32_t x1956 = 9;
int8_t x2047 = INT8_MIN;
uint64_t x2189 = UINT64_MAX;
int16_t x2190 = 1;
uint64_t t53 = 1564993LLU;
uint8_t x2372 = 33U;
int32_t x2557 = INT32_MIN;
uint32_t x2704 = 42U;
int16_t x2790 = INT16_MIN;
volatile uint64_t x2859 = 26494502LLU;
int8_t x2898 = -1;
uint32_t t65 = 1388U;
int64_t x2925 = INT64_MAX;
volatile int8_t x2928 = 37;
int64_t x3039 = 9594694756073738LL;
uint32_t x3055 = UINT32_MAX;
static volatile int16_t x3056 = 5;
int8_t x3088 = 0;
uint64_t t72 = 17LLU;
static uint64_t x3121 = 4651271494173LLU;
uint64_t t73 = 121LLU;
uint64_t t74 = 2108267795843357475LLU;
volatile uint64_t t75 = 47LLU;
int8_t x3454 = INT8_MIN;
static int64_t t80 = 675475833208187657LL;
uint32_t x3746 = 1288U;
int8_t x3842 = INT8_MIN;
int8_t x3844 = 3;
uint64_t t85 = 275131362LLU;
uint64_t x3964 = 0LLU;
int32_t x3989 = -1;
uint32_t x4066 = 6178273U;
uint8_t x4068 = 1U;
uint32_t x4537 = 1242U;
int8_t x4562 = 1;
int16_t x4627 = INT16_MAX;
uint64_t x4646 = 20652328863LLU;
volatile uint64_t t95 = 57763814325842629LLU;
volatile uint32_t x5125 = 5U;
int16_t x5127 = INT16_MIN;
int8_t x5193 = 10;


void f0(void) {
	volatile uint32_t x5 = 133U;
	int32_t x6 = INT32_MIN;
	static int32_t x7 = -1;
	static volatile uint32_t t0 = 1033885487U;

	t0 = (((x5+x6)+x7)>>x8);

	if (t0 != 65536U) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x13 = -1;
	int64_t x14 = INT64_MAX;
	int64_t x15 = -1LL;
	int32_t x16 = 13;
	volatile int64_t t1 = -901366991LL;

	t1 = (((x13+x14)+x15)>>x16);

	if (t1 != 1125899906842623LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x37 = -1;
	uint64_t x38 = UINT64_MAX;
	int64_t x39 = INT64_MIN;
	uint16_t x40 = 6U;
	volatile uint64_t t2 = 732065325812625LLU;

	t2 = (((x37+x38)+x39)>>x40);

	if (t2 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x113 = INT32_MAX;
	int64_t x114 = 2LL;
	int32_t x115 = INT32_MIN;
	static uint8_t x116 = 2U;
	volatile int64_t t3 = -44570288LL;

	t3 = (((x113+x114)+x115)>>x116);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x206 = UINT64_MAX;
	static int8_t x207 = INT8_MIN;
	int64_t x208 = 0LL;
	static volatile uint64_t t4 = 49600561730773390LLU;

	t4 = (((x205+x206)+x207)>>x208);

	if (t4 != 32638LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x277 = UINT8_MAX;
	static uint64_t x278 = 840757946390912846LLU;
	uint8_t x279 = 11U;

	t5 = (((x277+x278)+x279)>>x280);

	if (t5 != 102631585252797LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x338 = -117LL;
	int32_t x339 = 21445791;
	static volatile uint8_t x340 = 5U;

	t6 = (((x337+x338)+x339)>>x340);

	if (t6 != 670185LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x561 = 1835053U;
	static uint32_t x562 = 31445077U;
	int16_t x563 = INT16_MIN;
	int8_t x564 = 3;
	uint32_t t7 = 402084537U;

	t7 = (((x561+x562)+x563)>>x564);

	if (t7 != 4155920U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x593 = INT8_MIN;
	uint64_t x594 = UINT64_MAX;
	uint64_t x595 = UINT64_MAX;
	static volatile int8_t x596 = 1;
	static uint64_t t8 = 3LLU;

	t8 = (((x593+x594)+x595)>>x596);

	if (t8 != 9223372036854775743LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x605 = 7721835U;
	volatile uint32_t x607 = 21084584U;
	uint16_t x608 = 16U;
	uint32_t t9 = 79254288U;

	t9 = (((x605+x606)+x607)>>x608);

	if (t9 != 439U) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x682 = UINT16_MAX;
	volatile int8_t x683 = INT8_MIN;
	volatile uint64_t t10 = 4378784042879136983LLU;

	t10 = (((x681+x682)+x683)>>x684);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x697 = -1;
	int16_t x698 = 13483;
	static uint16_t x699 = 31U;
	int16_t x700 = 9;
	volatile int32_t t11 = 6;

	t11 = (((x697+x698)+x699)>>x700);

	if (t11 != 26) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x702 = -86392293;
	int8_t x703 = INT8_MIN;
	int8_t x704 = 0;
	static volatile int32_t t12 = -29439;

	t12 = (((x701+x702)+x703)>>x704);

	if (t12 != 2061091226) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x749 = INT64_MIN;
	static uint64_t x750 = 26701LLU;
	int64_t x751 = INT64_MIN;
	int8_t x752 = 4;
	static volatile uint64_t t13 = 71161049944224LLU;

	t13 = (((x749+x750)+x751)>>x752);

	if (t13 != 1668LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x789 = UINT8_MAX;
	volatile int8_t x791 = INT8_MIN;
	int16_t x792 = 1;
	int64_t t14 = 1340774085614118LL;

	t14 = (((x789+x790)+x791)>>x792);

	if (t14 != 63LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x809 = -1;
	static int16_t x811 = INT16_MAX;
	static int16_t x812 = 0;
	int64_t t15 = 81103LL;

	t15 = (((x809+x810)+x811)>>x812);

	if (t15 != 32765LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x845 = 35U;
	static uint8_t x846 = UINT8_MAX;
	static int8_t x848 = 11;
	int64_t t16 = -483792857812LL;

	t16 = (((x845+x846)+x847)>>x848);

	if (t16 != 2LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x850 = INT16_MIN;
	int8_t x851 = INT8_MIN;
	static volatile int8_t x852 = 10;

	t17 = (((x849+x850)+x851)>>x852);

	if (t17 != 18014398509481951LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x853 = 16291981655157LLU;
	int8_t x854 = -1;
	volatile int32_t x855 = -270826656;
	uint8_t x856 = 0U;
	uint64_t t18 = 16634223853354LLU;

	t18 = (((x853+x854)+x855)>>x856);

	if (t18 != 16291710828500LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x861 = 3431U;
	int16_t x863 = -2434;
	int8_t x864 = 1;

	t19 = (((x861+x862)+x863)>>x864);

	if (t19 != 2126195764259649603LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x893 = INT16_MIN;
	volatile uint64_t x894 = UINT64_MAX;
	static volatile int8_t x895 = -1;
	static uint8_t x896 = 51U;
	uint64_t t20 = 1103595LLU;

	t20 = (((x893+x894)+x895)>>x896);

	if (t20 != 8191LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x941 = INT64_MAX;
	uint64_t x942 = 89894LLU;
	uint16_t x943 = 22U;
	static int8_t x944 = 1;

	t21 = (((x941+x942)+x943)>>x944);

	if (t21 != 4611686018427432861LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x957 = UINT64_MAX;
	uint32_t x958 = UINT32_MAX;
	int32_t x959 = -867681358;

	t22 = (((x957+x958)+x959)>>x960);

	if (t22 != 1713642968LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x961 = UINT64_MAX;
	static uint64_t x962 = 1044521LLU;
	volatile int16_t x963 = INT16_MIN;

	t23 = (((x961+x962)+x963)>>x964);

	if (t23 != 1011752LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1057 = INT8_MIN;
	uint64_t x1058 = 71692LLU;
	static int64_t x1059 = INT64_MAX;
	volatile uint64_t t24 = 7400538LLU;

	t24 = (((x1057+x1058)+x1059)>>x1060);

	if (t24 != 9223372036854847371LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x1098 = -1LL;
	int16_t x1099 = -2;
	uint8_t x1100 = 13U;
	volatile int64_t t25 = 441559LL;

	t25 = (((x1097+x1098)+x1099)>>x1100);

	if (t25 != 262143LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1109 = 11020322985LLU;
	uint16_t x1110 = 729U;
	uint64_t x1111 = UINT64_MAX;
	volatile uint64_t t26 = 6057257994500935402LLU;

	t26 = (((x1109+x1110)+x1111)>>x1112);

	if (t26 != 5LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1173 = -2658288;
	int16_t x1174 = INT16_MIN;
	uint8_t x1176 = 3U;
	int64_t t27 = 8LL;

	t27 = (((x1173+x1174)+x1175)>>x1176);

	if (t27 != 1152921504606510593LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1205 = -1LL;
	volatile int16_t x1206 = -1;
	uint16_t x1208 = 29U;
	int64_t t28 = -3LL;

	t28 = (((x1205+x1206)+x1207)>>x1208);

	if (t28 != 3LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x1209 = 741;
	static int8_t x1210 = INT8_MIN;
	uint8_t x1211 = 6U;
	uint16_t x1212 = 0U;
	volatile int32_t t29 = -152106223;

	t29 = (((x1209+x1210)+x1211)>>x1212);

	if (t29 != 619) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x1213 = 14LLU;
	static int64_t x1214 = INT64_MIN;
	volatile uint64_t t30 = 557907LLU;

	t30 = (((x1213+x1214)+x1215)>>x1216);

	if (t30 != 3LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1229 = 31U;
	static int64_t t31 = 53899LL;

	t31 = (((x1229+x1230)+x1231)>>x1232);

	if (t31 != 1800756LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x1251 = INT16_MAX;
	static volatile uint16_t x1252 = 10U;

	t32 = (((x1249+x1250)+x1251)>>x1252);

	if (t32 != 295502U) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x1289 = -1;
	uint8_t x1290 = UINT8_MAX;
	uint64_t x1291 = 40756887286388580LLU;
	static int64_t x1292 = 2LL;
	uint64_t t33 = 441319LLU;

	t33 = (((x1289+x1290)+x1291)>>x1292);

	if (t33 != 10189221821597208LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x1369 = INT64_MIN;
	static uint64_t x1371 = 1064365521890104LLU;
	uint16_t x1372 = 9U;
	static volatile uint64_t t34 = 1186817964LLU;

	t34 = (((x1369+x1370)+x1371)>>x1372);

	if (t34 != 18016481919184382LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x1409 = 3936456LL;
	int64_t x1410 = 47443097760684902LL;
	static volatile int16_t x1412 = 54;
	int64_t t35 = -507900162184LL;

	t35 = (((x1409+x1410)+x1411)>>x1412);

	if (t35 != 2LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x1413 = INT64_MAX;
	int32_t x1414 = INT32_MIN;
	volatile uint32_t x1415 = 21U;
	int64_t t36 = 47533589911525LL;

	t36 = (((x1413+x1414)+x1415)>>x1416);

	if (t36 != 4611686017353646090LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x1418 = 17U;
	volatile int32_t x1419 = INT32_MAX;
	volatile int8_t x1420 = 1;
	uint64_t t37 = 1907678065901733138LLU;

	t37 = (((x1417+x1418)+x1419)>>x1420);

	if (t37 != 9235232107LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x1421 = 31161U;
	static int32_t x1423 = -1;
	uint8_t x1424 = 5U;
	volatile uint32_t t38 = 1131570593U;

	t38 = (((x1421+x1422)+x1423)>>x1424);

	if (t38 != 973U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x1482 = 10315743U;
	static uint32_t x1483 = 50532157U;
	volatile int64_t t39 = 3459851598LL;

	t39 = (((x1481+x1482)+x1483)>>x1484);

	if (t39 != 28555429LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x1525 = INT16_MAX;
	static uint8_t x1527 = 3U;
	volatile uint8_t x1528 = 10U;
	int32_t t40 = 24167870;

	t40 = (((x1525+x1526)+x1527)>>x1528);

	if (t40 != 31) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x1565 = 6LLU;
	int32_t x1566 = -1;
	int8_t x1567 = INT8_MIN;
	static int16_t x1568 = 1;
	uint64_t t41 = 22162286756458LLU;

	t41 = (((x1565+x1566)+x1567)>>x1568);

	if (t41 != 9223372036854775746LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x1585 = UINT32_MAX;
	static uint64_t x1586 = UINT64_MAX;
	int16_t x1587 = INT16_MIN;
	static int32_t x1588 = 0;

	t42 = (((x1585+x1586)+x1587)>>x1588);

	if (t42 != 4294934526LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1589 = INT16_MIN;
	volatile uint32_t x1590 = 21962U;
	uint64_t x1591 = 11814229125501334LLU;
	int8_t x1592 = 26;
	uint64_t t43 = 333962384LLU;

	t43 = (((x1589+x1590)+x1591)>>x1592);

	if (t43 != 176045796LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1709 = -1;
	static volatile uint64_t x1710 = 338LLU;
	uint64_t x1711 = UINT64_MAX;
	uint8_t x1712 = 63U;
	volatile uint64_t t44 = 3075804306LLU;

	t44 = (((x1709+x1710)+x1711)>>x1712);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1733 = -1;
	int8_t x1734 = 0;
	uint8_t x1735 = 1U;
	uint32_t x1736 = 7U;
	volatile int32_t t45 = 299824036;

	t45 = (((x1733+x1734)+x1735)>>x1736);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x1845 = -197;
	uint16_t x1846 = UINT16_MAX;
	uint64_t x1847 = UINT64_MAX;
	int8_t x1848 = 35;
	volatile uint64_t t46 = 892822019061LLU;

	t46 = (((x1845+x1846)+x1847)>>x1848);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x1857 = 632U;
	uint64_t x1858 = UINT64_MAX;
	int64_t x1859 = 7453521LL;
	volatile int16_t x1860 = 16;
	uint64_t t47 = 2190445198173567534LLU;

	t47 = (((x1857+x1858)+x1859)>>x1860);

	if (t47 != 113LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1865 = -1;
	static uint64_t x1866 = 848603148LLU;
	static int64_t x1867 = INT64_MIN;
	int8_t x1868 = 13;
	volatile uint64_t t48 = 3735595492LLU;

	t48 = (((x1865+x1866)+x1867)>>x1868);

	if (t48 != 1125899906946213LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x1897 = INT8_MIN;
	int16_t x1898 = 21;
	uint16_t x1900 = 3U;
	static volatile int32_t t49 = 26406098;

	t49 = (((x1897+x1898)+x1899)>>x1900);

	if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x1901 = 263U;
	static int16_t x1902 = INT16_MIN;
	volatile uint64_t x1903 = 2034124765091LLU;
	uint32_t x1904 = 1U;
	volatile uint64_t t50 = 1605035663034LLU;

	t50 = (((x1901+x1902)+x1903)>>x1904);

	if (t50 != 1017062366293LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x1953 = INT32_MIN;
	int64_t x1954 = INT64_MAX;
	int64_t x1955 = -1LL;
	volatile int64_t t51 = -28LL;

	t51 = (((x1953+x1954)+x1955)>>x1956);

	if (t51 != 18014398505287679LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2045 = 14LLU;
	int16_t x2046 = INT16_MIN;
	static uint8_t x2048 = 0U;
	uint64_t t52 = 146787881548LLU;

	t52 = (((x2045+x2046)+x2047)>>x2048);

	if (t52 != 18446744073709518734LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2191 = 511LLU;
	uint8_t x2192 = 0U;

	t53 = (((x2189+x2190)+x2191)>>x2192);

	if (t53 != 511LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x2317 = -1;
	uint64_t x2318 = UINT64_MAX;
	static uint8_t x2319 = 17U;
	uint16_t x2320 = 7U;
	static uint64_t t54 = 12279635LLU;

	t54 = (((x2317+x2318)+x2319)>>x2320);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x2369 = UINT32_MAX;
	int32_t x2370 = -1;
	uint64_t x2371 = UINT64_MAX;
	static volatile uint64_t t55 = 12658474579LLU;

	t55 = (((x2369+x2370)+x2371)>>x2372);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x2409 = INT64_MIN;
	volatile int8_t x2410 = INT8_MAX;
	int64_t x2411 = INT64_MAX;
	static uint8_t x2412 = 0U;
	int64_t t56 = -13388174090833888LL;

	t56 = (((x2409+x2410)+x2411)>>x2412);

	if (t56 != 126LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x2449 = UINT32_MAX;
	int8_t x2450 = -1;
	uint64_t x2451 = 972919613079346LLU;
	volatile uint8_t x2452 = 13U;
	uint64_t t57 = 71LLU;

	t57 = (((x2449+x2450)+x2451)>>x2452);

	if (t57 != 118765125493LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x2558 = UINT32_MAX;
	int32_t x2559 = -31315653;
	uint8_t x2560 = 20U;
	volatile uint32_t t58 = 49U;

	t58 = (((x2557+x2558)+x2559)>>x2560);

	if (t58 != 2018U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x2589 = 3141U;
	static uint8_t x2590 = UINT8_MAX;
	int32_t x2591 = 47756687;
	uint64_t x2592 = 16LLU;
	int32_t t59 = 3;

	t59 = (((x2589+x2590)+x2591)>>x2592);

	if (t59 != 728) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x2637 = 3189U;
	int8_t x2638 = -1;
	volatile int32_t x2639 = -235;
	uint8_t x2640 = 6U;
	int32_t t60 = -1;

	t60 = (((x2637+x2638)+x2639)>>x2640);

	if (t60 != 46) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x2701 = INT64_MAX;
	static volatile int64_t x2702 = -1LL;
	int16_t x2703 = INT16_MIN;
	volatile int64_t t61 = -2828584866447651LL;

	t61 = (((x2701+x2702)+x2703)>>x2704);

	if (t61 != 2097151LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x2789 = 10998U;
	int16_t x2791 = INT16_MAX;
	uint16_t x2792 = 0U;
	volatile uint32_t t62 = 301U;

	t62 = (((x2789+x2790)+x2791)>>x2792);

	if (t62 != 10997U) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x2845 = 58345968792550924LLU;
	static uint16_t x2846 = 19U;
	int8_t x2847 = -1;
	volatile uint8_t x2848 = 1U;
	volatile uint64_t t63 = 773389202498LLU;

	t63 = (((x2845+x2846)+x2847)>>x2848);

	if (t63 != 29172984396275471LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x2857 = INT8_MIN;
	uint32_t x2858 = UINT32_MAX;
	volatile int16_t x2860 = 0;
	volatile uint64_t t64 = 7455LLU;

	t64 = (((x2857+x2858)+x2859)>>x2860);

	if (t64 != 4321461669LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x2897 = 409695U;
	int8_t x2899 = INT8_MIN;
	uint16_t x2900 = 15U;

	t65 = (((x2897+x2898)+x2899)>>x2900);

	if (t65 != 12U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x2926 = 99LLU;
	uint64_t x2927 = 5585892LLU;
	uint64_t t66 = 5237498LLU;

	t66 = (((x2925+x2926)+x2927)>>x2928);

	if (t66 != 67108864LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x2945 = 4U;
	uint32_t x2946 = UINT32_MAX;
	volatile int16_t x2947 = INT16_MAX;
	uint64_t x2948 = 0LLU;
	uint32_t t67 = 46966U;

	t67 = (((x2945+x2946)+x2947)>>x2948);

	if (t67 != 32770U) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x3025 = 15454561304052900LL;
	static int64_t x3026 = 61987954400LL;
	uint64_t x3027 = 11LLU;
	uint64_t x3028 = 55LLU;
	uint64_t t68 = 28801197074111241LLU;

	t68 = (((x3025+x3026)+x3027)>>x3028);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x3037 = -1;
	static volatile uint8_t x3038 = 115U;
	uint8_t x3040 = 5U;
	volatile int64_t t69 = -1046924164543290LL;

	t69 = (((x3037+x3038)+x3039)>>x3040);

	if (t69 != 299834211127307LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x3053 = INT16_MAX;
	volatile uint8_t x3054 = UINT8_MAX;
	volatile uint32_t t70 = 929U;

	t70 = (((x3053+x3054)+x3055)>>x3056);

	if (t70 != 1031U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x3085 = -2;
	volatile uint8_t x3086 = 6U;
	static int16_t x3087 = INT16_MAX;
	int32_t t71 = 5;

	t71 = (((x3085+x3086)+x3087)>>x3088);

	if (t71 != 32771) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x3093 = 74184923490LLU;
	int64_t x3094 = 21761427LL;
	int8_t x3095 = INT8_MAX;
	static uint8_t x3096 = 10U;

	t72 = (((x3093+x3094)+x3095)>>x3096);

	if (t72 != 72467465LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x3122 = 272499U;
	uint64_t x3123 = 3784038455513245LLU;
	uint8_t x3124 = 1U;

	t73 = (((x3121+x3122)+x3123)>>x3124);

	if (t73 != 1894344863639958LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint8_t x3169 = 0U;
	int32_t x3170 = -1;
	uint64_t x3171 = 289764960802767925LLU;
	volatile uint8_t x3172 = 1U;

	t74 = (((x3169+x3170)+x3171)>>x3172);

	if (t74 != 144882480401383962LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x3209 = -1;
	static int64_t x3210 = -6436755946LL;
	static uint64_t x3211 = 3587116449178369231LLU;
	int8_t x3212 = 57;

	t75 = (((x3209+x3210)+x3211)>>x3212);

	if (t75 != 24LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x3453 = 1079;
	uint16_t x3455 = UINT16_MAX;
	uint32_t x3456 = 4U;
	int32_t t76 = -4944;

	t76 = (((x3453+x3454)+x3455)>>x3456);

	if (t76 != 4155) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x3521 = INT8_MIN;
	volatile uint64_t x3522 = 8615245288LLU;
	static volatile int8_t x3523 = -1;
	static uint16_t x3524 = 50U;
	volatile uint64_t t77 = 632918651934LLU;

	t77 = (((x3521+x3522)+x3523)>>x3524);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x3557 = -1;
	int16_t x3558 = -1;
	int16_t x3559 = INT16_MAX;
	static int16_t x3560 = 1;
	static volatile int32_t t78 = 4177704;

	t78 = (((x3557+x3558)+x3559)>>x3560);

	if (t78 != 16382) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x3633 = -1LL;
	int16_t x3634 = 0;
	static int16_t x3635 = 54;
	uint8_t x3636 = 0U;
	int64_t t79 = 1LL;

	t79 = (((x3633+x3634)+x3635)>>x3636);

	if (t79 != 53LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x3641 = 48U;
	static int16_t x3642 = 7;
	volatile int64_t x3643 = 113142725371738385LL;
	uint32_t x3644 = 52U;

	t80 = (((x3641+x3642)+x3643)>>x3644);

	if (t80 != 25LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x3669 = INT16_MIN;
	static int8_t x3670 = -1;
	uint64_t x3671 = 5498382079067LLU;
	uint8_t x3672 = 27U;
	volatile uint64_t t81 = 31201028LLU;

	t81 = (((x3669+x3670)+x3671)>>x3672);

	if (t81 != 40966LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x3745 = UINT8_MAX;
	static uint8_t x3747 = 23U;
	int64_t x3748 = 3LL;
	static uint32_t t82 = 914U;

	t82 = (((x3745+x3746)+x3747)>>x3748);

	if (t82 != 195U) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x3757 = INT64_MAX;
	uint64_t x3758 = 7541LLU;
	static int64_t x3759 = INT64_MAX;
	volatile uint16_t x3760 = 40U;
	uint64_t t83 = 224021770430701493LLU;

	t83 = (((x3757+x3758)+x3759)>>x3760);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x3841 = 16065396LLU;
	int32_t x3843 = -126363;
	uint64_t t84 = 421544250672LLU;

	t84 = (((x3841+x3842)+x3843)>>x3844);

	if (t84 != 1992363LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x3917 = INT8_MIN;
	int64_t x3918 = INT64_MAX;
	uint64_t x3919 = UINT64_MAX;
	static uint8_t x3920 = 59U;

	t85 = (((x3917+x3918)+x3919)>>x3920);

	if (t85 != 15LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x3961 = -1;
	static int16_t x3962 = INT16_MIN;
	uint32_t x3963 = 207863U;
	static uint32_t t86 = 0U;

	t86 = (((x3961+x3962)+x3963)>>x3964);

	if (t86 != 175094U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x3990 = INT8_MIN;
	volatile uint16_t x3991 = UINT16_MAX;
	volatile uint16_t x3992 = 2U;
	volatile int32_t t87 = -1649;

	t87 = (((x3989+x3990)+x3991)>>x3992);

	if (t87 != 16351) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x4065 = 5034476522LLU;
	uint64_t x4067 = 1LLU;
	uint64_t t88 = 1071565LLU;

	t88 = (((x4065+x4066)+x4067)>>x4068);

	if (t88 != 2520327398LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x4113 = -13;
	int16_t x4114 = INT16_MAX;
	uint8_t x4115 = 0U;
	uint16_t x4116 = 27U;
	static int32_t t89 = 45585181;

	t89 = (((x4113+x4114)+x4115)>>x4116);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x4489 = 1716U;
	int64_t x4490 = INT64_MIN;
	uint64_t x4491 = 1158931379923728LLU;
	volatile int16_t x4492 = 0;
	uint64_t t90 = 1070478699LLU;

	t90 = (((x4489+x4490)+x4491)>>x4492);

	if (t90 != 9224530968234701252LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x4538 = INT8_MIN;
	uint16_t x4539 = UINT16_MAX;
	static volatile uint8_t x4540 = 2U;
	static uint32_t t91 = 276617638U;

	t91 = (((x4537+x4538)+x4539)>>x4540);

	if (t91 != 16662U) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x4561 = 3U;
	int32_t x4563 = 475397584;
	uint16_t x4564 = 8U;
	static volatile int32_t t92 = -53952;

	t92 = (((x4561+x4562)+x4563)>>x4564);

	if (t92 != 1857021) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x4625 = 606176970143770631LLU;
	volatile int64_t x4626 = INT64_MIN;
	uint16_t x4628 = 2U;
	uint64_t t93 = 488LLU;

	t93 = (((x4625+x4626)+x4627)>>x4628);

	if (t93 != 2457387251749644801LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x4645 = UINT64_MAX;
	volatile uint64_t x4647 = 198845605351108701LLU;
	volatile uint16_t x4648 = 32U;
	static uint64_t t94 = 4169492545811582185LLU;

	t94 = (((x4645+x4646)+x4647)>>x4648);

	if (t94 != 46297355LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x4825 = INT16_MAX;
	volatile uint64_t x4826 = 20162477224568621LLU;
	static int16_t x4827 = -3078;
	int8_t x4828 = 3;

	t95 = (((x4825+x4826)+x4827)>>x4828);

	if (t95 != 2520309653074788LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x5017 = 3822;
	uint64_t x5018 = 518193LLU;
	uint16_t x5019 = 1979U;
	static volatile int8_t x5020 = 50;
	uint64_t t96 = 45456LLU;

	t96 = (((x5017+x5018)+x5019)>>x5020);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x5069 = 92723444LLU;
	uint64_t x5070 = UINT64_MAX;
	int16_t x5071 = INT16_MIN;
	static int8_t x5072 = 15;
	uint64_t t97 = 2947081743LLU;

	t97 = (((x5069+x5070)+x5071)>>x5072);

	if (t97 != 2828LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x5126 = UINT8_MAX;
	static uint64_t x5128 = 22LLU;
	volatile uint32_t t98 = 119527U;

	t98 = (((x5125+x5126)+x5127)>>x5128);

	if (t98 != 1023U) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x5194 = INT16_MAX;
	static volatile int8_t x5195 = -1;
	static int16_t x5196 = 3;
	int32_t t99 = -15;

	t99 = (((x5193+x5194)+x5195)>>x5196);

	if (t99 != 4097) { NG(); } else { ; }
	
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

