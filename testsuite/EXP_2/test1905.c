#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = INT64_MAX;
static uint32_t x17 = 7U;
uint64_t x131 = UINT64_MAX;
uint8_t x133 = 70U;
int32_t x135 = -58989;
volatile int32_t x171 = -857423479;
int64_t x199 = INT64_MIN;
uint64_t t9 = 3673241LLU;
int32_t x353 = -1;
uint64_t x354 = 329944978LLU;
int64_t x377 = 114215LL;
uint8_t x380 = 0U;
static int8_t x579 = INT8_MIN;
int64_t t15 = -21284898781LL;
static int32_t x716 = 7;
uint16_t x742 = 6U;
int32_t x743 = INT32_MIN;
int32_t x753 = -1;
int8_t x755 = -11;
int8_t x785 = -6;
int64_t t23 = 321LL;
int32_t x805 = 458972;
uint64_t x806 = UINT64_MAX;
int8_t x808 = 1;
int64_t x829 = INT64_MIN;
volatile uint32_t x830 = 517534367U;
uint64_t t27 = 561LLU;
static int32_t x894 = -1;
int8_t x898 = -1;
static volatile int64_t x979 = INT64_MIN;
volatile int16_t x980 = 0;
int32_t x1045 = -4156;
uint16_t x1246 = UINT16_MAX;
uint64_t t36 = 87LLU;
static int32_t x1278 = INT32_MAX;
int8_t x1279 = -6;
volatile uint8_t x1280 = 0U;
int32_t x1295 = -1;
static volatile uint32_t t38 = 7947U;
volatile int32_t t40 = 9887001;
volatile int64_t x1466 = INT64_MIN;
static int16_t x1468 = 10;
int8_t x1481 = -1;
volatile int16_t x1483 = INT16_MIN;
uint16_t x1504 = 49U;
static volatile uint64_t t46 = 218405LLU;
uint16_t x1600 = 3U;
int32_t t48 = 7729881;
volatile int32_t x1694 = INT32_MAX;
volatile int64_t x1695 = 4275LL;
static int64_t t50 = -1879786LL;
int8_t x1734 = -1;
int32_t x1794 = -1;
uint32_t t53 = 174U;
static volatile uint8_t x1810 = UINT8_MAX;
volatile int8_t x1847 = INT8_MAX;
volatile int32_t t55 = -247;
int32_t x1923 = INT32_MIN;
uint8_t x1957 = 7U;
volatile uint32_t x1958 = 1824U;
int32_t x1970 = -1;
int8_t x2045 = -14;
int16_t x2046 = -1;
static int32_t x2047 = -1547096;
int64_t x2074 = -1LL;
static uint8_t x2076 = 7U;
volatile int16_t x2077 = -1;
int32_t t62 = 24727;
volatile int8_t x2111 = 0;
uint16_t x2112 = 1U;
static uint8_t x2271 = 31U;
uint32_t x2272 = 0U;
uint16_t x2345 = 6342U;
static int16_t x2417 = 104;
volatile uint8_t x2496 = 2U;
int16_t x2498 = INT16_MAX;
int64_t x2499 = INT64_MIN;
int8_t x2532 = 10;
volatile int16_t x2782 = -1;
uint32_t x2789 = 164052U;
static int16_t x2791 = -1;
uint16_t x2832 = 1U;
int32_t x2885 = 185307;
uint64_t x2983 = UINT64_MAX;
static uint64_t x3015 = 5272830151126LLU;
volatile uint64_t t89 = 14655234343066829LLU;
int8_t x3092 = 2;
int32_t t90 = 14;
uint64_t t91 = 38749604476002LLU;
int16_t x3227 = INT16_MAX;
int32_t t97 = -14;
static volatile int64_t x3302 = INT64_MAX;


void f0(void) {
	int32_t x1 = -3524865;
	uint32_t x2 = UINT32_MAX;
	uint8_t x4 = 10U;
	int64_t t0 = 97419549775LL;

	t0 = ((x1/(x2|x3))>>x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x18 = 16811906846889LLU;
	static uint64_t x19 = 3103907736035LLU;
	uint8_t x20 = 1U;
	volatile uint64_t t1 = 1593925199LLU;

	t1 = ((x17/(x18|x19))>>x20);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x41 = 23260975989573085LL;
	uint32_t x42 = 535235801U;
	uint8_t x43 = 8U;
	static int8_t x44 = 57;
	int64_t t2 = 43657LL;

	t2 = ((x41/(x42|x43))>>x44);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x49 = INT16_MIN;
	uint8_t x50 = 97U;
	int16_t x51 = INT16_MIN;
	int32_t x52 = 15;
	int32_t t3 = -154910149;

	t3 = ((x49/(x50|x51))>>x52);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x65 = -1LL;
	uint64_t x66 = UINT64_MAX;
	volatile int8_t x67 = 46;
	volatile uint8_t x68 = 1U;
	volatile uint64_t t4 = 49723LLU;

	t4 = ((x65/(x66|x67))>>x68);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x117 = -1;
	int64_t x118 = INT64_MIN;
	static uint16_t x119 = 2U;
	uint16_t x120 = 0U;
	int64_t t5 = -3148191484001486548LL;

	t5 = ((x117/(x118|x119))>>x120);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x129 = -1;
	int16_t x130 = INT16_MIN;
	uint8_t x132 = 50U;
	uint64_t t6 = 36310887500LLU;

	t6 = ((x129/(x130|x131))>>x132);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x134 = INT32_MIN;
	int32_t x136 = 1;
	int32_t t7 = 1541783;

	t7 = ((x133/(x134|x135))>>x136);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x169 = 6;
	uint32_t x170 = 8U;
	int8_t x172 = 12;
	volatile uint32_t t8 = 383377U;

	t8 = ((x169/(x170|x171))>>x172);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x197 = 6610507588810LLU;
	static int32_t x198 = INT32_MIN;
	uint16_t x200 = 1U;

	t9 = ((x197/(x198|x199))>>x200);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x281 = 3U;
	uint16_t x282 = 2095U;
	uint32_t x283 = 697184U;
	volatile uint16_t x284 = 1U;
	uint32_t t10 = 2U;

	t10 = ((x281/(x282|x283))>>x284);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x355 = 0;
	uint16_t x356 = 1U;
	uint64_t t11 = 8177400LLU;

	t11 = ((x353/(x354|x355))>>x356);

	if (t11 != 27954273142LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x378 = 122825465U;
	volatile int8_t x379 = -11;
	volatile int64_t t12 = 0LL;

	t12 = ((x377/(x378|x379))>>x380);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x417 = 15U;
	int32_t x418 = -32;
	static int64_t x419 = INT64_MIN;
	int8_t x420 = 2;
	volatile int64_t t13 = -672169LL;

	t13 = ((x417/(x418|x419))>>x420);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x481 = INT16_MIN;
	static uint32_t x482 = 998489U;
	static int32_t x483 = -1;
	uint8_t x484 = 7U;
	volatile uint32_t t14 = 22147U;

	t14 = ((x481/(x482|x483))>>x484);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x577 = -1LL;
	static volatile int32_t x578 = -1;
	int16_t x580 = 0;

	t15 = ((x577/(x578|x579))>>x580);

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x609 = UINT16_MAX;
	uint16_t x610 = 29153U;
	static int8_t x611 = 0;
	int8_t x612 = 4;
	volatile int32_t t16 = -6393;

	t16 = ((x609/(x610|x611))>>x612);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x645 = INT8_MIN;
	int64_t x646 = INT64_MIN;
	int8_t x647 = INT8_MIN;
	uint8_t x648 = 27U;
	volatile int64_t t17 = 49322LL;

	t17 = ((x645/(x646|x647))>>x648);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x713 = 93125819802885LLU;
	static int64_t x714 = 19960667754LL;
	uint64_t x715 = 234351673033LLU;
	uint64_t t18 = 6595443764752755LLU;

	t18 = ((x713/(x714|x715))>>x716);

	if (t18 != 3LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x733 = 0U;
	int64_t x734 = INT64_MIN;
	int16_t x735 = INT16_MAX;
	uint32_t x736 = 0U;
	static volatile int64_t t19 = -1084161127438LL;

	t19 = ((x733/(x734|x735))>>x736);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x741 = INT64_MIN;
	volatile uint8_t x744 = 0U;
	static int64_t t20 = 177LL;

	t20 = ((x741/(x742|x743))>>x744);

	if (t20 != 4294967308LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x754 = UINT32_MAX;
	int8_t x756 = 0;
	volatile uint32_t t21 = 799399U;

	t21 = ((x753/(x754|x755))>>x756);

	if (t21 != 1U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x786 = 91456;
	volatile int16_t x787 = INT16_MAX;
	uint8_t x788 = 3U;
	int32_t t22 = 2054245;

	t22 = ((x785/(x786|x787))>>x788);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x793 = -372547LL;
	volatile uint32_t x794 = 11797U;
	int32_t x795 = -1;
	uint8_t x796 = 1U;

	t23 = ((x793/(x794|x795))>>x796);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x807 = INT32_MIN;
	static uint64_t t24 = 811077052165LLU;

	t24 = ((x805/(x806|x807))>>x808);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x817 = 6290U;
	volatile uint16_t x818 = 11604U;
	volatile uint32_t x819 = 1244876U;
	volatile int16_t x820 = 0;
	static volatile uint32_t t25 = 8670U;

	t25 = ((x817/(x818|x819))>>x820);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x821 = INT8_MAX;
	uint64_t x822 = UINT64_MAX;
	uint8_t x823 = 1U;
	uint64_t x824 = 3LLU;
	volatile uint64_t t26 = 22327096292399058LLU;

	t26 = ((x821/(x822|x823))>>x824);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x831 = 13161894363LLU;
	uint8_t x832 = 58U;

	t27 = ((x829/(x830|x831))>>x832);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x893 = -1;
	int32_t x895 = INT32_MIN;
	volatile int64_t x896 = 0LL;
	int32_t t28 = 14871483;

	t28 = ((x893/(x894|x895))>>x896);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x897 = INT32_MIN;
	uint32_t x899 = UINT32_MAX;
	uint8_t x900 = 3U;
	uint32_t t29 = 131236848U;

	t29 = ((x897/(x898|x899))>>x900);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x973 = -48LL;
	uint64_t x974 = 33307911330498LLU;
	uint16_t x975 = UINT16_MAX;
	int16_t x976 = 2;
	uint64_t t30 = 185331LLU;

	t30 = ((x973/(x974|x975))>>x976);

	if (t30 != 138456LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x977 = 1;
	volatile int32_t x978 = 0;
	static int64_t t31 = 27940635LL;

	t31 = ((x977/(x978|x979))>>x980);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1025 = 1603782553164LL;
	uint8_t x1026 = 94U;
	int8_t x1027 = INT8_MAX;
	static int16_t x1028 = 1;
	int64_t t32 = -53857470LL;

	t32 = ((x1025/(x1026|x1027))>>x1028);

	if (t32 != 6314104540LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1046 = UINT16_MAX;
	static uint8_t x1047 = 127U;
	int8_t x1048 = 0;
	static int32_t t33 = -9;

	t33 = ((x1045/(x1046|x1047))>>x1048);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1081 = 0U;
	int8_t x1082 = -1;
	uint64_t x1083 = 14640152LLU;
	int8_t x1084 = 0;
	volatile uint64_t t34 = 721397816873211LLU;

	t34 = ((x1081/(x1082|x1083))>>x1084);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1205 = INT16_MAX;
	int32_t x1206 = 1017165117;
	volatile int32_t x1207 = INT32_MIN;
	int8_t x1208 = 8;
	volatile int32_t t35 = -4;

	t35 = ((x1205/(x1206|x1207))>>x1208);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1245 = INT64_MAX;
	uint64_t x1247 = UINT64_MAX;
	int16_t x1248 = 1;

	t36 = ((x1245/(x1246|x1247))>>x1248);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint64_t x1277 = 25LLU;
	static uint64_t t37 = 118842265LLU;

	t37 = ((x1277/(x1278|x1279))>>x1280);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x1293 = UINT16_MAX;
	uint32_t x1294 = 260959U;
	uint8_t x1296 = 2U;

	t38 = ((x1293/(x1294|x1295))>>x1296);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x1301 = 115U;
	int16_t x1302 = INT16_MIN;
	uint8_t x1303 = 88U;
	volatile int8_t x1304 = 8;
	volatile int32_t t39 = 15705981;

	t39 = ((x1301/(x1302|x1303))>>x1304);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x1333 = -1;
	int16_t x1334 = INT16_MAX;
	int32_t x1335 = INT32_MAX;
	uint32_t x1336 = 3U;

	t40 = ((x1333/(x1334|x1335))>>x1336);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1365 = UINT32_MAX;
	int32_t x1366 = 1;
	int64_t x1367 = INT64_MIN;
	int8_t x1368 = 5;
	int64_t t41 = 25688053635LL;

	t41 = ((x1365/(x1366|x1367))>>x1368);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x1397 = 14671U;
	int16_t x1398 = 56;
	static uint32_t x1399 = 8620093U;
	volatile int8_t x1400 = 2;
	static uint32_t t42 = 0U;

	t42 = ((x1397/(x1398|x1399))>>x1400);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x1445 = 0U;
	int32_t x1446 = INT32_MAX;
	int64_t x1447 = INT64_MIN;
	uint8_t x1448 = 3U;
	int64_t t43 = 748387439980LL;

	t43 = ((x1445/(x1446|x1447))>>x1448);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x1465 = INT32_MIN;
	uint64_t x1467 = 67340520016384LLU;
	uint64_t t44 = 568508899LLU;

	t44 = ((x1465/(x1466|x1467))>>x1468);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1482 = -14;
	uint8_t x1484 = 1U;
	volatile int32_t t45 = 15619193;

	t45 = ((x1481/(x1482|x1483))>>x1484);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1501 = INT16_MAX;
	int64_t x1502 = -1959794LL;
	uint64_t x1503 = 45079089166LLU;

	t46 = ((x1501/(x1502|x1503))>>x1504);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x1597 = INT8_MAX;
	uint32_t x1598 = UINT32_MAX;
	volatile int32_t x1599 = INT32_MAX;
	static uint32_t t47 = 2736217U;

	t47 = ((x1597/(x1598|x1599))>>x1600);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x1645 = 0U;
	static int32_t x1646 = 1428;
	int8_t x1647 = INT8_MAX;
	uint8_t x1648 = 5U;

	t48 = ((x1645/(x1646|x1647))>>x1648);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x1685 = 3U;
	uint8_t x1686 = 19U;
	uint16_t x1687 = 39U;
	volatile int32_t x1688 = 1;
	volatile int32_t t49 = -744129;

	t49 = ((x1685/(x1686|x1687))>>x1688);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x1693 = INT16_MIN;
	uint8_t x1696 = 29U;

	t50 = ((x1693/(x1694|x1695))>>x1696);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1725 = INT32_MIN;
	uint8_t x1726 = UINT8_MAX;
	uint64_t x1727 = UINT64_MAX;
	volatile uint8_t x1728 = 21U;
	static uint64_t t51 = 41LLU;

	t51 = ((x1725/(x1726|x1727))>>x1728);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1733 = -117;
	int32_t x1735 = INT32_MIN;
	volatile uint32_t x1736 = 0U;
	volatile int32_t t52 = 103869;

	t52 = ((x1733/(x1734|x1735))>>x1736);

	if (t52 != 117) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x1793 = 78U;
	uint32_t x1795 = 1855353262U;
	static uint8_t x1796 = 12U;

	t53 = ((x1793/(x1794|x1795))>>x1796);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x1809 = 6780638212149221802LLU;
	int64_t x1811 = -1LL;
	volatile uint8_t x1812 = 0U;
	uint64_t t54 = 17383LLU;

	t54 = ((x1809/(x1810|x1811))>>x1812);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x1845 = INT16_MIN;
	int32_t x1846 = -2538;
	volatile int8_t x1848 = 1;

	t55 = ((x1845/(x1846|x1847))>>x1848);

	if (t55 != 6) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x1917 = INT64_MIN;
	int64_t x1918 = 325155384601805282LL;
	int32_t x1919 = INT32_MIN;
	static uint8_t x1920 = 1U;
	volatile int64_t t56 = -49LL;

	t56 = ((x1917/(x1918|x1919))>>x1920);

	if (t56 != 68652925953LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x1921 = -1;
	int32_t x1922 = INT32_MIN;
	static uint16_t x1924 = 1U;
	int32_t t57 = -208868;

	t57 = ((x1921/(x1922|x1923))>>x1924);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x1959 = -1;
	static int8_t x1960 = 0;
	uint32_t t58 = 52594566U;

	t58 = ((x1957/(x1958|x1959))>>x1960);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x1969 = 61696469U;
	int8_t x1971 = -11;
	uint16_t x1972 = 26U;
	uint32_t t59 = 47892U;

	t59 = ((x1969/(x1970|x1971))>>x1972);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x2048 = 3;
	volatile int32_t t60 = 44322335;

	t60 = ((x2045/(x2046|x2047))>>x2048);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x2073 = 145352594008877LLU;
	static int64_t x2075 = 373912174922120129LL;
	uint64_t t61 = 17006467692LLU;

	t61 = ((x2073/(x2074|x2075))>>x2076);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x2078 = INT16_MIN;
	volatile int32_t x2079 = -1978281;
	static uint8_t x2080 = 26U;

	t62 = ((x2077/(x2078|x2079))>>x2080);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x2109 = -13473;
	int16_t x2110 = -1;
	volatile int32_t t63 = 608;

	t63 = ((x2109/(x2110|x2111))>>x2112);

	if (t63 != 6736) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x2245 = 92311002984LL;
	volatile uint64_t x2246 = UINT64_MAX;
	int8_t x2247 = -20;
	uint32_t x2248 = 9U;
	static uint64_t t64 = 464614680498LLU;

	t64 = ((x2245/(x2246|x2247))>>x2248);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x2261 = 26U;
	uint64_t x2262 = UINT64_MAX;
	uint16_t x2263 = 2302U;
	static uint16_t x2264 = 2U;
	volatile uint64_t t65 = 81912358LLU;

	t65 = ((x2261/(x2262|x2263))>>x2264);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2269 = 1;
	int64_t x2270 = -2930147LL;
	int64_t t66 = -403943617LL;

	t66 = ((x2269/(x2270|x2271))>>x2272);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2346 = INT8_MAX;
	uint8_t x2347 = 86U;
	uint8_t x2348 = 2U;
	int32_t t67 = 13541;

	t67 = ((x2345/(x2346|x2347))>>x2348);

	if (t67 != 12) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x2349 = -1;
	static volatile int32_t x2350 = INT32_MIN;
	uint8_t x2351 = 69U;
	uint8_t x2352 = 4U;
	static volatile int32_t t68 = -783311;

	t68 = ((x2349/(x2350|x2351))>>x2352);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2401 = -32;
	uint64_t x2402 = 94245215908LLU;
	int16_t x2403 = INT16_MIN;
	int8_t x2404 = 0;
	static uint64_t t69 = 1482402726130LLU;

	t69 = ((x2401/(x2402|x2403))>>x2404);

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x2413 = INT32_MIN;
	static volatile uint64_t x2414 = UINT64_MAX;
	int64_t x2415 = INT64_MAX;
	uint8_t x2416 = 20U;
	static uint64_t t70 = 32887LLU;

	t70 = ((x2413/(x2414|x2415))>>x2416);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x2418 = 5LLU;
	int8_t x2419 = INT8_MAX;
	int16_t x2420 = 1;
	static volatile uint64_t t71 = 1881833600LLU;

	t71 = ((x2417/(x2418|x2419))>>x2420);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint8_t x2445 = 104U;
	int64_t x2446 = 65166645477977300LL;
	static int32_t x2447 = -66095107;
	static int8_t x2448 = 1;
	volatile int64_t t72 = 1009964608761277517LL;

	t72 = ((x2445/(x2446|x2447))>>x2448);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x2453 = -1;
	static int64_t x2454 = INT64_MAX;
	static volatile int8_t x2455 = INT8_MIN;
	int8_t x2456 = 1;
	static int64_t t73 = -508429684299303839LL;

	t73 = ((x2453/(x2454|x2455))>>x2456);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x2493 = 0;
	volatile uint8_t x2494 = UINT8_MAX;
	int64_t x2495 = 4047343387494026670LL;
	int64_t t74 = 125333421363LL;

	t74 = ((x2493/(x2494|x2495))>>x2496);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x2497 = INT16_MAX;
	static uint16_t x2500 = 32U;
	volatile int64_t t75 = 140370421427274LL;

	t75 = ((x2497/(x2498|x2499))>>x2500);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x2501 = INT8_MIN;
	volatile uint64_t x2502 = UINT64_MAX;
	volatile uint64_t x2503 = 40321664874LLU;
	uint8_t x2504 = 57U;
	uint64_t t76 = 4705118995538814LLU;

	t76 = ((x2501/(x2502|x2503))>>x2504);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x2509 = 189080U;
	volatile uint32_t x2510 = UINT32_MAX;
	volatile uint64_t x2511 = 2LLU;
	static int16_t x2512 = 1;
	volatile uint64_t t77 = 1160126LLU;

	t77 = ((x2509/(x2510|x2511))>>x2512);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x2529 = 47708874498LLU;
	int8_t x2530 = INT8_MIN;
	static int16_t x2531 = INT16_MIN;
	uint64_t t78 = 527125099774LLU;

	t78 = ((x2529/(x2530|x2531))>>x2532);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2533 = -10;
	static uint16_t x2534 = UINT16_MAX;
	int16_t x2535 = INT16_MAX;
	uint8_t x2536 = 29U;
	volatile int32_t t79 = -3128441;

	t79 = ((x2533/(x2534|x2535))>>x2536);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x2585 = -72952371;
	volatile int32_t x2586 = 20798;
	int64_t x2587 = -1LL;
	volatile uint8_t x2588 = 22U;
	volatile int64_t t80 = 2484632694583LL;

	t80 = ((x2585/(x2586|x2587))>>x2588);

	if (t80 != 17LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x2593 = INT8_MIN;
	uint8_t x2594 = 2U;
	uint64_t x2595 = 62323LLU;
	int16_t x2596 = 5;
	volatile uint64_t t81 = 703933807LLU;

	t81 = ((x2593/(x2594|x2595))>>x2596);

	if (t81 != 9249566810060LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x2721 = 98012931LLU;
	static int16_t x2722 = -1;
	int32_t x2723 = INT32_MIN;
	static uint16_t x2724 = 7U;
	uint64_t t82 = 200707469645LLU;

	t82 = ((x2721/(x2722|x2723))>>x2724);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x2781 = INT8_MIN;
	volatile uint8_t x2783 = 0U;
	uint8_t x2784 = 0U;
	volatile int32_t t83 = -4;

	t83 = ((x2781/(x2782|x2783))>>x2784);

	if (t83 != 128) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x2790 = 2;
	uint8_t x2792 = 7U;
	uint32_t t84 = 4198U;

	t84 = ((x2789/(x2790|x2791))>>x2792);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x2829 = UINT32_MAX;
	int16_t x2830 = INT16_MIN;
	int16_t x2831 = 6213;
	uint32_t t85 = 297U;

	t85 = ((x2829/(x2830|x2831))>>x2832);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x2886 = INT32_MAX;
	uint16_t x2887 = UINT16_MAX;
	uint8_t x2888 = 19U;
	int32_t t86 = -4700219;

	t86 = ((x2885/(x2886|x2887))>>x2888);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x2957 = -25866;
	static int64_t x2958 = INT64_MIN;
	int64_t x2959 = INT64_MIN;
	uint8_t x2960 = 11U;
	int64_t t87 = -1372LL;

	t87 = ((x2957/(x2958|x2959))>>x2960);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x2981 = 131104604267463817LL;
	uint16_t x2982 = UINT16_MAX;
	int8_t x2984 = 0;
	volatile uint64_t t88 = 21255676026LLU;

	t88 = ((x2981/(x2982|x2983))>>x2984);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x3013 = UINT16_MAX;
	static int32_t x3014 = 9;
	static uint16_t x3016 = 21U;

	t89 = ((x3013/(x3014|x3015))>>x3016);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x3089 = -1;
	int32_t x3090 = INT32_MIN;
	int32_t x3091 = -1;

	t90 = ((x3089/(x3090|x3091))>>x3092);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x3161 = 0LLU;
	static int16_t x3162 = -1;
	uint8_t x3163 = 5U;
	uint8_t x3164 = 46U;

	t91 = ((x3161/(x3162|x3163))>>x3164);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x3177 = 0;
	static int8_t x3178 = 1;
	volatile int64_t x3179 = INT64_MIN;
	static uint8_t x3180 = 0U;
	int64_t t92 = 16117736LL;

	t92 = ((x3177/(x3178|x3179))>>x3180);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x3209 = INT16_MIN;
	volatile int16_t x3210 = INT16_MIN;
	static volatile int16_t x3211 = INT16_MAX;
	int8_t x3212 = 16;
	static volatile int32_t t93 = 1;

	t93 = ((x3209/(x3210|x3211))>>x3212);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x3225 = UINT32_MAX;
	static int8_t x3226 = INT8_MAX;
	int8_t x3228 = 1;
	static volatile uint32_t t94 = 227378U;

	t94 = ((x3225/(x3226|x3227))>>x3228);

	if (t94 != 65538U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x3237 = INT16_MIN;
	static int32_t x3238 = INT32_MIN;
	volatile int64_t x3239 = -341331516607381150LL;
	uint16_t x3240 = 3U;
	volatile int64_t t95 = 802974698723249926LL;

	t95 = ((x3237/(x3238|x3239))>>x3240);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x3269 = UINT64_MAX;
	int16_t x3270 = -1;
	volatile int8_t x3271 = INT8_MIN;
	uint16_t x3272 = 12U;
	uint64_t t96 = 348492972436LLU;

	t96 = ((x3269/(x3270|x3271))>>x3272);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x3293 = 0U;
	int8_t x3294 = -6;
	int8_t x3295 = INT8_MIN;
	uint16_t x3296 = 6U;

	t97 = ((x3293/(x3294|x3295))>>x3296);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x3301 = INT8_MIN;
	uint8_t x3303 = UINT8_MAX;
	uint8_t x3304 = 1U;
	int64_t t98 = -3942554515906LL;

	t98 = ((x3301/(x3302|x3303))>>x3304);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x3305 = -16;
	uint64_t x3306 = UINT64_MAX;
	int64_t x3307 = -1013294311281335LL;
	static uint8_t x3308 = 0U;
	static volatile uint64_t t99 = 630099LLU;

	t99 = ((x3305/(x3306|x3307))>>x3308);

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

