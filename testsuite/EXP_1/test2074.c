#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = UINT32_MAX;
static volatile uint32_t t1 = 117092985U;
int32_t x55 = -97624939;
volatile int32_t t3 = 15;
int32_t x170 = -1;
static uint64_t x401 = 114411LLU;
int32_t x437 = INT32_MIN;
int64_t x439 = 974635810905772736LL;
uint64_t x455 = UINT64_MAX;
int8_t x481 = INT8_MIN;
int32_t x482 = INT32_MIN;
int64_t x501 = INT64_MIN;
volatile int32_t x574 = 450236;
static int64_t x581 = INT64_MIN;
int8_t x606 = INT8_MIN;
volatile int8_t x608 = 18;
uint64_t t16 = 1091188525LLU;
volatile int16_t x616 = 2;
int8_t x634 = 2;
int16_t x672 = 3;
volatile int32_t t21 = -124926686;
uint64_t x941 = 1LLU;
volatile uint8_t x944 = 12U;
volatile uint64_t t24 = 5608127957588806LLU;
static uint8_t x966 = 59U;
uint16_t x1009 = 0U;
int8_t x1010 = -1;
int8_t x1011 = -1;
volatile int16_t x1012 = 23;
uint64_t x1077 = 39696850372LLU;
uint64_t x1114 = 3050972111997LLU;
int8_t x1167 = -1;
uint16_t x1168 = 0U;
int8_t x1241 = INT8_MAX;
int64_t x1242 = 679509101LL;
int16_t x1275 = INT16_MAX;
int8_t x1281 = -1;
volatile int32_t t36 = -6;
volatile uint32_t t39 = 983U;
static uint64_t t41 = 30272099LLU;
int64_t x1765 = -90066LL;
uint32_t x1788 = 0U;
uint64_t t44 = 40216LLU;
int8_t x1826 = INT8_MIN;
volatile uint32_t x1869 = 1669637363U;
uint16_t x1872 = 24U;
int16_t x1882 = 50;
uint8_t x1884 = 6U;
static volatile uint8_t x1929 = 55U;
int64_t t49 = -1LL;
int16_t x1974 = INT16_MAX;
static volatile int16_t x2105 = INT16_MIN;
int32_t x2107 = INT32_MIN;
volatile int32_t x2181 = -1;
int16_t x2342 = -1;
int8_t x2358 = -1;
uint32_t x2359 = 14088426U;
uint8_t x2360 = 0U;
volatile int16_t x2385 = 3;
int32_t t63 = -507715;
uint64_t x2419 = 89321562565426LLU;
static int32_t x2420 = 0;
static int16_t x2479 = -1;
uint8_t x2480 = 2U;
uint16_t x2506 = 54U;
uint8_t x2508 = 1U;
uint64_t x2513 = 6905307LLU;
int32_t x2569 = 7067;
int8_t x2570 = 0;
volatile int32_t x2575 = 2116981;
volatile int64_t x2650 = INT64_MIN;
int32_t x2651 = INT32_MIN;
int8_t x2661 = 1;
volatile int8_t x2734 = -1;
uint16_t x2735 = UINT16_MAX;
uint8_t x2736 = 0U;
int16_t x2758 = INT16_MIN;
volatile int16_t x2760 = 2;
uint64_t t75 = 319739697LLU;
uint32_t x3053 = 12777264U;
volatile int64_t x3141 = 134254342861142LL;
uint16_t x3165 = UINT16_MAX;
uint8_t x3168 = 13U;
uint32_t x3240 = 0U;
volatile int16_t x3404 = 0;
volatile int32_t t89 = -464;
uint32_t t90 = 926927U;
int64_t x3471 = -1LL;
int8_t x3472 = 0;
static volatile int32_t t92 = -922210870;
int8_t x3708 = 6;
uint16_t x3757 = 1820U;
int16_t x3837 = 110;
volatile int32_t t99 = -3754523;


void f0(void) {
	uint16_t x1 = 3U;
	volatile uint32_t x3 = 654807U;
	int32_t x4 = 3;
	volatile uint32_t t0 = 7U;

	t0 = (((x1^x2)/x3)>>x4);

	if (t0 != 819U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x13 = UINT32_MAX;
	int8_t x14 = -1;
	uint16_t x15 = 27U;
	uint16_t x16 = 8U;

	t1 = (((x13^x14)/x15)>>x16);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x49 = INT32_MIN;
	static volatile uint8_t x50 = 12U;
	volatile int64_t x51 = INT64_MIN;
	static volatile uint16_t x52 = 24U;
	volatile int64_t t2 = 2061739514787144410LL;

	t2 = (((x49^x50)/x51)>>x52);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x53 = INT8_MIN;
	int8_t x54 = INT8_MIN;
	uint8_t x56 = 12U;

	t3 = (((x53^x54)/x55)>>x56);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x169 = 1U;
	int32_t x171 = 44580;
	uint8_t x172 = 10U;
	volatile int32_t t4 = 3828;

	t4 = (((x169^x170)/x171)>>x172);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x389 = 53;
	uint8_t x390 = 24U;
	volatile int64_t x391 = 981658843LL;
	uint64_t x392 = 1LLU;
	int64_t t5 = -2324962LL;

	t5 = (((x389^x390)/x391)>>x392);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x402 = -1;
	uint32_t x403 = 10U;
	uint8_t x404 = 5U;
	static uint64_t t6 = 129377396152LLU;

	t6 = (((x401^x402)/x403)>>x404);

	if (t6 != 57646075230341991LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x438 = INT8_MAX;
	uint16_t x440 = 4U;
	int64_t t7 = -54855939370LL;

	t7 = (((x437^x438)/x439)>>x440);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x453 = -1;
	static int16_t x454 = INT16_MAX;
	uint32_t x456 = 4U;
	volatile uint64_t t8 = 134611288LLU;

	t8 = (((x453^x454)/x455)>>x456);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x469 = 1;
	int16_t x470 = INT16_MIN;
	int32_t x471 = INT32_MIN;
	volatile uint16_t x472 = 30U;
	int32_t t9 = -6498871;

	t9 = (((x469^x470)/x471)>>x472);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x483 = INT32_MIN;
	uint8_t x484 = 4U;
	int32_t t10 = 60;

	t10 = (((x481^x482)/x483)>>x484);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x502 = INT64_MIN;
	int64_t x503 = INT64_MIN;
	uint8_t x504 = 3U;
	volatile int64_t t11 = 1492772704110503104LL;

	t11 = (((x501^x502)/x503)>>x504);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x521 = 1;
	int64_t x522 = -1LL;
	int64_t x523 = -1LL;
	int16_t x524 = 5;
	int64_t t12 = 14618LL;

	t12 = (((x521^x522)/x523)>>x524);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x561 = INT16_MIN;
	int16_t x562 = INT16_MIN;
	int8_t x563 = 1;
	uint16_t x564 = 3U;
	int32_t t13 = -3814015;

	t13 = (((x561^x562)/x563)>>x564);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x573 = INT64_MIN;
	int32_t x575 = -1;
	int64_t x576 = 27LL;
	int64_t t14 = -1LL;

	t14 = (((x573^x574)/x575)>>x576);

	if (t14 != 68719476735LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x582 = -21;
	int32_t x583 = INT32_MAX;
	uint8_t x584 = 1U;
	volatile int64_t t15 = 196179LL;

	t15 = (((x581^x582)/x583)>>x584);

	if (t15 != 2147483648LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x605 = 112335855040LLU;
	volatile int32_t x607 = INT32_MIN;

	t16 = (((x605^x606)/x607)>>x608);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x613 = INT32_MAX;
	int16_t x614 = 3;
	static uint16_t x615 = UINT16_MAX;
	int32_t t17 = -4;

	t17 = (((x613^x614)/x615)>>x616);

	if (t17 != 8192) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x625 = UINT64_MAX;
	static uint8_t x626 = 3U;
	uint16_t x627 = 20777U;
	uint16_t x628 = 8U;
	uint64_t t18 = 254896353831LLU;

	t18 = (((x625^x626)/x627)>>x628);

	if (t18 != 3468142370791LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x633 = INT64_MIN;
	int8_t x635 = INT8_MIN;
	int8_t x636 = 20;
	static volatile int64_t t19 = -1LL;

	t19 = (((x633^x634)/x635)>>x636);

	if (t19 != 68719476735LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x669 = UINT64_MAX;
	static volatile uint32_t x670 = UINT32_MAX;
	int16_t x671 = INT16_MIN;
	volatile uint64_t t20 = 474042099LLU;

	t20 = (((x669^x670)/x671)>>x672);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x833 = INT32_MIN;
	int8_t x834 = INT8_MIN;
	int16_t x835 = 3;
	uint8_t x836 = 0U;

	t21 = (((x833^x834)/x835)>>x836);

	if (t21 != 715827840) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x849 = -1LL;
	int16_t x850 = INT16_MIN;
	uint8_t x851 = 1U;
	volatile int64_t x852 = 0LL;
	volatile int64_t t22 = 4453089407LL;

	t22 = (((x849^x850)/x851)>>x852);

	if (t22 != 32767LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x909 = INT64_MIN;
	static int16_t x910 = INT16_MIN;
	int16_t x911 = INT16_MAX;
	uint16_t x912 = 0U;
	int64_t t23 = -7LL;

	t23 = (((x909^x910)/x911)>>x912);

	if (t23 != 281483566907399LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x942 = 2U;
	static int32_t x943 = INT32_MIN;

	t24 = (((x941^x942)/x943)>>x944);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x957 = 3U;
	int64_t x958 = INT64_MAX;
	volatile int16_t x959 = INT16_MAX;
	int8_t x960 = 5;
	static int64_t t25 = 51250545439LL;

	t25 = (((x957^x958)/x959)>>x960);

	if (t25 != 8796361465856LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x965 = -18;
	int8_t x967 = INT8_MAX;
	int8_t x968 = 7;
	int32_t t26 = 31223618;

	t26 = (((x965^x966)/x967)>>x968);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t t27 = -4120421;

	t27 = (((x1009^x1010)/x1011)>>x1012);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1078 = INT8_MAX;
	int16_t x1079 = -8;
	uint16_t x1080 = 20U;
	uint64_t t28 = 32597625LLU;

	t28 = (((x1077^x1078)/x1079)>>x1080);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x1113 = 0U;
	int32_t x1115 = -1;
	int8_t x1116 = 1;
	static volatile uint64_t t29 = 10352737904LLU;

	t29 = (((x1113^x1114)/x1115)>>x1116);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1165 = 341854477536083LLU;
	uint64_t x1166 = 3360242LLU;
	volatile uint64_t t30 = 8010007LLU;

	t30 = (((x1165^x1166)/x1167)>>x1168);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x1243 = INT32_MAX;
	uint16_t x1244 = 3U;
	int64_t t31 = 1124057LL;

	t31 = (((x1241^x1242)/x1243)>>x1244);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1273 = INT16_MIN;
	volatile uint16_t x1274 = 214U;
	uint8_t x1276 = 28U;
	static int32_t t32 = -1391;

	t32 = (((x1273^x1274)/x1275)>>x1276);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x1282 = INT32_MIN;
	volatile uint16_t x1283 = 52U;
	int8_t x1284 = 0;
	static int32_t t33 = 86;

	t33 = (((x1281^x1282)/x1283)>>x1284);

	if (t33 != 41297762) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1293 = 272;
	int16_t x1294 = -4220;
	int32_t x1295 = INT32_MAX;
	uint8_t x1296 = 0U;
	volatile int32_t t34 = -4;

	t34 = (((x1293^x1294)/x1295)>>x1296);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x1365 = 11U;
	uint64_t x1366 = 2180LLU;
	static int64_t x1367 = -1LL;
	uint8_t x1368 = 1U;
	volatile uint64_t t35 = 10401361019LLU;

	t35 = (((x1365^x1366)/x1367)>>x1368);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x1433 = -237;
	int32_t x1434 = -864;
	uint8_t x1435 = UINT8_MAX;
	static uint8_t x1436 = 15U;

	t36 = (((x1433^x1434)/x1435)>>x1436);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1449 = 1515;
	uint32_t x1450 = 159042920U;
	int8_t x1451 = INT8_MIN;
	static uint16_t x1452 = 0U;
	volatile uint32_t t37 = 17461U;

	t37 = (((x1449^x1450)/x1451)>>x1452);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x1561 = -1;
	volatile int8_t x1562 = INT8_MIN;
	volatile int64_t x1563 = -1371609280094797340LL;
	static volatile uint8_t x1564 = 0U;
	static volatile int64_t t38 = 1996917315LL;

	t38 = (((x1561^x1562)/x1563)>>x1564);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x1705 = 4027935U;
	int16_t x1706 = INT16_MAX;
	uint32_t x1707 = 195997025U;
	uint16_t x1708 = 12U;

	t39 = (((x1705^x1706)/x1707)>>x1708);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1709 = 1861LLU;
	int32_t x1710 = INT32_MIN;
	static uint32_t x1711 = 500914U;
	uint32_t x1712 = 53U;
	volatile uint64_t t40 = 555923LLU;

	t40 = (((x1709^x1710)/x1711)>>x1712);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x1745 = UINT16_MAX;
	volatile uint64_t x1746 = 314800LLU;
	static uint32_t x1747 = 7870585U;
	int64_t x1748 = 2LL;

	t41 = (((x1745^x1746)/x1747)>>x1748);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1766 = -252441;
	uint32_t x1767 = 15U;
	uint32_t x1768 = 24U;
	static int64_t t42 = -211620665LL;

	t42 = (((x1765^x1766)/x1767)>>x1768);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1785 = 846;
	uint32_t x1786 = 1393U;
	int8_t x1787 = INT8_MAX;
	static uint32_t t43 = 115U;

	t43 = (((x1785^x1786)/x1787)>>x1788);

	if (t43 != 12U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x1797 = UINT32_MAX;
	uint64_t x1798 = 328434086792475945LLU;
	int32_t x1799 = INT32_MAX;
	int8_t x1800 = 1;

	t44 = (((x1797^x1798)/x1799)>>x1800);

	if (t44 != 76469519LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x1825 = 0;
	uint32_t x1827 = 2090832U;
	uint32_t x1828 = 11U;
	uint32_t t45 = 10118U;

	t45 = (((x1825^x1826)/x1827)>>x1828);

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x1870 = UINT64_MAX;
	volatile uint64_t x1871 = 2382655268LLU;
	volatile uint64_t t46 = 0LLU;

	t46 = (((x1869^x1870)/x1871)>>x1872);

	if (t46 != 461LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x1881 = -26;
	uint32_t x1883 = 495608935U;
	volatile uint32_t t47 = 64U;

	t47 = (((x1881^x1882)/x1883)>>x1884);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x1921 = 8U;
	int64_t x1922 = INT64_MAX;
	uint64_t x1923 = 25781562LLU;
	int8_t x1924 = 6;
	volatile uint64_t t48 = 20589178081648LLU;

	t48 = (((x1921^x1922)/x1923)>>x1924);

	if (t48 != 5589854799LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x1930 = INT64_MAX;
	uint16_t x1931 = 55U;
	static uint16_t x1932 = 37U;

	t49 = (((x1929^x1930)/x1931)>>x1932);

	if (t49 != 1220161LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x1973 = 10U;
	volatile uint8_t x1975 = 10U;
	static int8_t x1976 = 0;
	static volatile int32_t t50 = 0;

	t50 = (((x1973^x1974)/x1975)>>x1976);

	if (t50 != 3275) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x1989 = 6U;
	int64_t x1990 = INT64_MAX;
	uint32_t x1991 = 150320U;
	uint16_t x1992 = 3U;
	static volatile int64_t t51 = -72991860663LL;

	t51 = (((x1989^x1990)/x1991)>>x1992);

	if (t51 != 7669781164228LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x2073 = 52112U;
	int64_t x2074 = 185753LL;
	int16_t x2075 = INT16_MAX;
	volatile uint8_t x2076 = 14U;
	int64_t t52 = 1387028092457314070LL;

	t52 = (((x2073^x2074)/x2075)>>x2076);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x2106 = 0;
	int64_t x2108 = 1LL;
	volatile int32_t t53 = -25;

	t53 = (((x2105^x2106)/x2107)>>x2108);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x2145 = UINT8_MAX;
	uint32_t x2146 = 280747U;
	int8_t x2147 = INT8_MAX;
	int16_t x2148 = 5;
	static volatile uint32_t t54 = 236759407U;

	t54 = (((x2145^x2146)/x2147)>>x2148);

	if (t54 != 69U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x2157 = -17;
	static volatile int8_t x2158 = INT8_MAX;
	static int32_t x2159 = 785;
	int16_t x2160 = 3;
	int32_t t55 = -730;

	t55 = (((x2157^x2158)/x2159)>>x2160);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x2182 = UINT64_MAX;
	volatile int16_t x2183 = -15;
	uint64_t x2184 = 1LLU;
	uint64_t t56 = 135982524433236LLU;

	t56 = (((x2181^x2182)/x2183)>>x2184);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x2197 = INT32_MAX;
	uint16_t x2198 = 57U;
	uint16_t x2199 = 1U;
	uint16_t x2200 = 11U;
	int32_t t57 = 936566;

	t57 = (((x2197^x2198)/x2199)>>x2200);

	if (t57 != 1048575) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x2237 = 8U;
	volatile int64_t x2238 = INT64_MIN;
	static int64_t x2239 = INT64_MAX;
	volatile uint8_t x2240 = 33U;
	static volatile int64_t t58 = -367261LL;

	t58 = (((x2237^x2238)/x2239)>>x2240);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x2285 = INT64_MAX;
	volatile int64_t x2286 = INT64_MIN;
	static volatile int32_t x2287 = 7470781;
	volatile int8_t x2288 = 3;
	int64_t t59 = 833952581958189369LL;

	t59 = (((x2285^x2286)/x2287)>>x2288);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x2309 = -1LL;
	volatile int32_t x2310 = -1;
	volatile int32_t x2311 = -668;
	uint16_t x2312 = 9U;
	volatile int64_t t60 = -178622974896295LL;

	t60 = (((x2309^x2310)/x2311)>>x2312);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x2341 = INT64_MIN;
	uint8_t x2343 = 21U;
	uint8_t x2344 = 21U;
	volatile int64_t t61 = -6422964323LL;

	t61 = (((x2341^x2342)/x2343)>>x2344);

	if (t61 != 209430786243LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x2357 = -1LL;
	int64_t t62 = 239539LL;

	t62 = (((x2357^x2358)/x2359)>>x2360);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2386 = -2;
	int32_t x2387 = -1;
	int16_t x2388 = 2;

	t63 = (((x2385^x2386)/x2387)>>x2388);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x2397 = INT64_MAX;
	int32_t x2398 = INT32_MAX;
	int64_t x2399 = 11860195216007671LL;
	static uint8_t x2400 = 0U;
	volatile int64_t t64 = 162247150500LL;

	t64 = (((x2397^x2398)/x2399)>>x2400);

	if (t64 != 777LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x2417 = -73;
	int16_t x2418 = INT16_MIN;
	volatile uint64_t t65 = 1419LLU;

	t65 = (((x2417^x2418)/x2419)>>x2420);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x2477 = 30146LLU;
	static int16_t x2478 = INT16_MIN;
	static uint64_t t66 = 1345313LLU;

	t66 = (((x2477^x2478)/x2479)>>x2480);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x2497 = -1LL;
	uint16_t x2498 = 8125U;
	int8_t x2499 = -1;
	int8_t x2500 = 3;
	volatile int64_t t67 = 60602632530770107LL;

	t67 = (((x2497^x2498)/x2499)>>x2500);

	if (t67 != 1015LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x2505 = -3748;
	int8_t x2507 = INT8_MIN;
	static volatile int32_t t68 = -231782;

	t68 = (((x2505^x2506)/x2507)>>x2508);

	if (t68 != 14) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x2514 = -5607325494675LL;
	volatile int16_t x2515 = -182;
	volatile uint8_t x2516 = 22U;
	volatile uint64_t t69 = 68608920473LLU;

	t69 = (((x2513^x2514)/x2515)>>x2516);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x2571 = INT32_MIN;
	volatile int8_t x2572 = 1;
	volatile int32_t t70 = 9;

	t70 = (((x2569^x2570)/x2571)>>x2572);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x2573 = UINT64_MAX;
	int16_t x2574 = INT16_MAX;
	int8_t x2576 = 22;
	volatile uint64_t t71 = 105459LLU;

	t71 = (((x2573^x2574)/x2575)>>x2576);

	if (t71 != 2077508LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x2649 = 9421U;
	uint8_t x2652 = 24U;
	int64_t t72 = 505211695735LL;

	t72 = (((x2649^x2650)/x2651)>>x2652);

	if (t72 != 255LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x2662 = 1674137779043332LLU;
	int32_t x2663 = -701161;
	static uint16_t x2664 = 0U;
	volatile uint64_t t73 = 14215864477339LLU;

	t73 = (((x2661^x2662)/x2663)>>x2664);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x2733 = 4;
	static int32_t t74 = 638201882;

	t74 = (((x2733^x2734)/x2735)>>x2736);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x2757 = UINT64_MAX;
	uint8_t x2759 = 55U;

	t75 = (((x2757^x2758)/x2759)>>x2760);

	if (t75 != 148LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x2773 = 3877LLU;
	int64_t x2774 = INT64_MAX;
	volatile int64_t x2775 = INT64_MAX;
	int32_t x2776 = 0;
	volatile uint64_t t76 = 17LLU;

	t76 = (((x2773^x2774)/x2775)>>x2776);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x2825 = 6392LLU;
	int16_t x2826 = INT16_MIN;
	static int8_t x2827 = 1;
	volatile int8_t x2828 = 13;
	uint64_t t77 = 10287640LLU;

	t77 = (((x2825^x2826)/x2827)>>x2828);

	if (t77 != 2251799813685244LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x2885 = -24;
	int8_t x2886 = INT8_MIN;
	int64_t x2887 = INT64_MIN;
	uint16_t x2888 = 4U;
	int64_t t78 = -1LL;

	t78 = (((x2885^x2886)/x2887)>>x2888);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x3054 = -1;
	static int32_t x3055 = -1;
	int16_t x3056 = 1;
	volatile uint32_t t79 = 3U;

	t79 = (((x3053^x3054)/x3055)>>x3056);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x3073 = INT32_MIN;
	int32_t x3074 = INT32_MIN;
	int64_t x3075 = -1LL;
	uint8_t x3076 = 55U;
	int64_t t80 = -105931LL;

	t80 = (((x3073^x3074)/x3075)>>x3076);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x3113 = INT32_MIN;
	volatile int16_t x3114 = INT16_MIN;
	int32_t x3115 = INT32_MIN;
	int8_t x3116 = 0;
	volatile int32_t t81 = 362550720;

	t81 = (((x3113^x3114)/x3115)>>x3116);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x3142 = 325;
	static uint16_t x3143 = 55U;
	volatile int32_t x3144 = 0;
	int64_t t82 = -1202261175140463939LL;

	t82 = (((x3141^x3142)/x3143)>>x3144);

	if (t82 != 2440988052014LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x3166 = INT32_MIN;
	volatile int8_t x3167 = INT8_MIN;
	volatile int32_t t83 = -1022;

	t83 = (((x3165^x3166)/x3167)>>x3168);

	if (t83 != 2047) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x3209 = -1;
	int16_t x3210 = INT16_MIN;
	int32_t x3211 = -385255858;
	int8_t x3212 = 14;
	static int32_t t84 = 129;

	t84 = (((x3209^x3210)/x3211)>>x3212);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x3229 = -373LL;
	int16_t x3230 = -1;
	int64_t x3231 = INT64_MIN;
	int8_t x3232 = 4;
	int64_t t85 = 429LL;

	t85 = (((x3229^x3230)/x3231)>>x3232);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x3233 = INT32_MAX;
	volatile uint8_t x3234 = 61U;
	static uint64_t x3235 = UINT64_MAX;
	uint16_t x3236 = 1U;
	uint64_t t86 = 780LLU;

	t86 = (((x3233^x3234)/x3235)>>x3236);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x3237 = INT16_MAX;
	static int32_t x3238 = INT32_MIN;
	uint64_t x3239 = UINT64_MAX;
	volatile uint64_t t87 = 16104064858909LLU;

	t87 = (((x3237^x3238)/x3239)>>x3240);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x3317 = 0LL;
	int8_t x3318 = -1;
	int32_t x3319 = INT32_MIN;
	static volatile uint8_t x3320 = 3U;
	int64_t t88 = 13850LL;

	t88 = (((x3317^x3318)/x3319)>>x3320);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x3401 = 1U;
	int16_t x3402 = -133;
	static int8_t x3403 = INT8_MIN;

	t89 = (((x3401^x3402)/x3403)>>x3404);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x3421 = 10U;
	int8_t x3422 = INT8_MIN;
	uint16_t x3423 = 1U;
	static uint8_t x3424 = 0U;

	t90 = (((x3421^x3422)/x3423)>>x3424);

	if (t90 != 4294967178U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x3469 = INT32_MIN;
	uint16_t x3470 = 66U;
	int64_t t91 = 1008542452291LL;

	t91 = (((x3469^x3470)/x3471)>>x3472);

	if (t91 != 2147483582LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x3525 = 7956U;
	int32_t x3526 = INT32_MIN;
	volatile int32_t x3527 = INT32_MAX;
	int8_t x3528 = 0;

	t92 = (((x3525^x3526)/x3527)>>x3528);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x3701 = 319;
	uint64_t x3702 = 2355135184333040916LLU;
	uint8_t x3703 = 1U;
	static volatile uint16_t x3704 = 1U;
	volatile uint64_t t93 = 323677001353LLU;

	t93 = (((x3701^x3702)/x3703)>>x3704);

	if (t93 != 1177567592166520341LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x3705 = INT32_MAX;
	static uint8_t x3706 = 1U;
	int8_t x3707 = 6;
	volatile int32_t t94 = -1911;

	t94 = (((x3705^x3706)/x3707)>>x3708);

	if (t94 != 5592405) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x3758 = -1;
	static volatile int32_t x3759 = INT32_MAX;
	uint16_t x3760 = 3U;
	int32_t t95 = 40642;

	t95 = (((x3757^x3758)/x3759)>>x3760);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x3817 = INT32_MAX;
	uint16_t x3818 = 144U;
	uint8_t x3819 = UINT8_MAX;
	static uint16_t x3820 = 2U;
	volatile int32_t t96 = 6091;

	t96 = (((x3817^x3818)/x3819)>>x3820);

	if (t96 != 2105375) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x3838 = INT32_MIN;
	int32_t x3839 = INT32_MIN;
	int8_t x3840 = 4;
	int32_t t97 = -14377;

	t97 = (((x3837^x3838)/x3839)>>x3840);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x3853 = -15055;
	static uint64_t x3854 = 1462995LLU;
	uint64_t x3855 = UINT64_MAX;
	uint16_t x3856 = 24U;
	volatile uint64_t t98 = 91LLU;

	t98 = (((x3853^x3854)/x3855)>>x3856);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x3937 = INT16_MIN;
	static volatile int32_t x3938 = -1;
	int32_t x3939 = 1553;
	int16_t x3940 = 0;

	t99 = (((x3937^x3938)/x3939)>>x3940);

	if (t99 != 21) { NG(); } else { ; }
	
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

