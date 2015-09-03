#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = INT64_MAX;
int8_t x66 = INT8_MIN;
int8_t x68 = 3;
volatile uint32_t t2 = 1110U;
uint8_t x88 = 18U;
static volatile int64_t t3 = 25232451240627LL;
uint16_t x126 = 1651U;
volatile int64_t t4 = 208734937LL;
uint8_t x384 = 13U;
int32_t x416 = 0;
volatile int8_t x516 = 1;
int64_t x557 = INT64_MAX;
uint64_t x559 = 9104568199535063LLU;
int16_t x560 = 0;
volatile uint64_t x590 = UINT64_MAX;
int64_t x591 = -1LL;
uint64_t t17 = 1LLU;
int8_t x616 = 0;
volatile int64_t t18 = 1782142399467580LL;
int16_t x798 = -1;
uint64_t t21 = 79187854LLU;
uint16_t x829 = 937U;
static volatile uint64_t x830 = 138854941561267LLU;
volatile uint64_t t22 = 1114LLU;
volatile uint64_t x867 = 1810089240148LLU;
static uint8_t x868 = 0U;
uint16_t x962 = 285U;
uint64_t x963 = 2061417414906LLU;
static volatile uint64_t t24 = 69596455841965LLU;
int16_t x1062 = -1;
static volatile int32_t t26 = -6;
int16_t x1113 = INT16_MIN;
static int64_t t28 = -1070230239LL;
uint8_t x1222 = 4U;
int64_t t30 = 273LL;
static int16_t x1302 = -1;
int32_t x1333 = INT32_MIN;
uint16_t x1358 = 18U;
static int8_t x1362 = -44;
volatile int64_t x1363 = -1LL;
volatile int64_t t35 = -43925905LL;
static int64_t x1395 = INT64_MIN;
uint16_t x1426 = 1U;
volatile int64_t x1439 = INT64_MIN;
volatile uint8_t x1459 = 2U;
int16_t x1460 = 0;
static uint32_t x1493 = UINT32_MAX;
volatile uint32_t t40 = 3486400U;
int64_t x1625 = -2580LL;
int16_t x1626 = INT16_MAX;
volatile uint64_t t41 = 127051LLU;
int32_t x1663 = -347;
uint16_t x1693 = 13U;
static volatile uint16_t x1695 = UINT16_MAX;
uint16_t x1734 = 940U;
uint8_t x1744 = 0U;
int32_t x1781 = -1;
int16_t x1783 = INT16_MAX;
int64_t t47 = -46512178685512LL;
volatile uint64_t t48 = 21921366210795LLU;
int8_t x1875 = -1;
int64_t x1917 = 6439717969545915LL;
int8_t x2046 = 35;
volatile uint8_t x2048 = 6U;
static volatile int8_t x2069 = INT8_MIN;
uint64_t t54 = 132570094990786LLU;
static uint32_t x2098 = UINT32_MAX;
uint8_t x2193 = 23U;
volatile int64_t x2195 = INT64_MIN;
int16_t x2222 = INT16_MIN;
static int8_t x2232 = 0;
uint8_t x2282 = 3U;
volatile int64_t x2371 = INT64_MIN;
volatile int64_t t61 = -935919103243748LL;
uint64_t x2389 = 132950507978427289LLU;
volatile uint8_t x2401 = 6U;
static int32_t x2530 = -1;
int32_t t65 = 148359237;
uint16_t x2558 = 11U;
int8_t x2559 = INT8_MIN;
uint32_t x2570 = UINT32_MAX;
int16_t x2572 = 1;
uint64_t t67 = 397761607577412354LLU;
uint16_t x2612 = 2U;
int32_t x2631 = 30;
int8_t x2714 = -1;
uint32_t x2716 = 0U;
volatile int32_t t70 = -4704109;
uint64_t x2861 = 0LLU;
volatile uint16_t x2862 = 944U;
int32_t x2864 = 7;
uint64_t t71 = 1966064235557046LLU;
volatile int32_t x2871 = INT32_MAX;
uint64_t x2978 = UINT64_MAX;
int16_t x2980 = 4;
uint8_t x3093 = 1U;
int8_t x3094 = -1;
int32_t t79 = -69974;
static int32_t x3123 = INT32_MIN;
static volatile int32_t t80 = 59;
static volatile uint64_t x3133 = 98012LLU;
int32_t x3134 = INT32_MAX;
int32_t x3137 = -1;
int64_t x3139 = INT64_MIN;
int64_t t82 = 0LL;
volatile uint64_t x3175 = 5723439927LLU;
static uint64_t t83 = 66283051623LLU;
volatile int32_t x3234 = -1;
uint16_t x3250 = 1267U;
int32_t t87 = -19619;
uint16_t x3435 = 8U;
volatile uint8_t x3436 = 0U;
uint16_t x3528 = 4U;
uint64_t t90 = 23LLU;
volatile uint64_t t91 = 69390135LLU;
uint8_t x3753 = 5U;
uint8_t x3786 = 1U;
volatile int32_t t95 = 46268;
int16_t x4030 = -1;
volatile int32_t t98 = -58338;


void f0(void) {
	volatile int32_t x6 = -1;
	static int64_t x7 = INT64_MIN;
	uint8_t x8 = 12U;
	int64_t t0 = 100661795229LL;

	t0 = ((x5*(x6/x7))<<x8);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x65 = INT64_MAX;
	int32_t x67 = -16729;
	volatile int64_t t1 = 473073LL;

	t1 = ((x65*(x66/x67))<<x68);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x81 = -1;
	static int8_t x82 = INT8_MIN;
	uint32_t x83 = UINT32_MAX;
	uint8_t x84 = 0U;

	t2 = ((x81*(x82/x83))<<x84);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x85 = 9;
	int64_t x86 = -90180642859708979LL;
	int16_t x87 = INT16_MIN;

	t3 = ((x85*(x86/x87))<<x88);

	if (t3 != 6493006285896941568LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x125 = 32216LL;
	int32_t x127 = INT32_MIN;
	volatile int32_t x128 = 17;

	t4 = ((x125*(x126/x127))<<x128);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x313 = INT8_MIN;
	int16_t x314 = INT16_MIN;
	uint32_t x315 = UINT32_MAX;
	uint32_t x316 = 13U;
	uint32_t t5 = 4354393U;

	t5 = ((x313*(x314/x315))<<x316);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x325 = 1U;
	int16_t x326 = -68;
	int16_t x327 = INT16_MIN;
	volatile int32_t x328 = 1;
	volatile int32_t t6 = -30;

	t6 = ((x325*(x326/x327))<<x328);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x341 = INT8_MIN;
	int8_t x342 = 21;
	int8_t x343 = INT8_MIN;
	int8_t x344 = 0;
	volatile int32_t t7 = 112;

	t7 = ((x341*(x342/x343))<<x344);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x381 = 1019LLU;
	uint16_t x382 = UINT16_MAX;
	static int8_t x383 = 1;
	uint64_t t8 = 2506079LLU;

	t8 = ((x381*(x382/x383))<<x384);

	if (t8 != 547063111680LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x389 = UINT16_MAX;
	int8_t x390 = -1;
	int32_t x391 = -69;
	static int16_t x392 = 25;
	int32_t t9 = -3;

	t9 = ((x389*(x390/x391))<<x392);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x393 = UINT8_MAX;
	int8_t x394 = INT8_MIN;
	uint32_t x395 = UINT32_MAX;
	static volatile uint16_t x396 = 1U;
	uint32_t t10 = 45332U;

	t10 = ((x393*(x394/x395))<<x396);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x413 = INT16_MIN;
	uint16_t x414 = 0U;
	static uint32_t x415 = 1379661984U;
	static uint32_t t11 = 2U;

	t11 = ((x413*(x414/x415))<<x416);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x425 = INT16_MAX;
	static volatile int16_t x426 = 1569;
	uint32_t x427 = 1755844U;
	volatile uint32_t x428 = 2U;
	volatile uint32_t t12 = 882917272U;

	t12 = ((x425*(x426/x427))<<x428);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x509 = -27;
	volatile int8_t x510 = INT8_MIN;
	int16_t x511 = INT16_MAX;
	uint8_t x512 = 1U;
	volatile int32_t t13 = 0;

	t13 = ((x509*(x510/x511))<<x512);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x513 = 53U;
	int8_t x514 = INT8_MIN;
	static volatile int64_t x515 = INT64_MIN;
	volatile int64_t t14 = -407LL;

	t14 = ((x513*(x514/x515))<<x516);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x558 = INT64_MAX;
	uint64_t t15 = 282100168LLU;

	t15 = ((x557*(x558/x559))<<x560);

	if (t15 != 9223372036854774795LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x565 = INT64_MIN;
	uint16_t x566 = UINT16_MAX;
	uint64_t x567 = 2394LLU;
	uint16_t x568 = 12U;
	volatile uint64_t t16 = 1126220651172446281LLU;

	t16 = ((x565*(x566/x567))<<x568);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x589 = INT8_MAX;
	volatile int8_t x592 = 1;

	t17 = ((x589*(x590/x591))<<x592);

	if (t17 != 254LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x613 = -1;
	int64_t x614 = -5758238200781325LL;
	static uint32_t x615 = UINT32_MAX;

	t18 = ((x613*(x614/x615))<<x616);

	if (t18 != 1340694LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x725 = 0U;
	int32_t x726 = INT32_MIN;
	int16_t x727 = INT16_MIN;
	uint8_t x728 = 20U;
	static volatile int32_t t19 = 0;

	t19 = ((x725*(x726/x727))<<x728);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x797 = INT8_MAX;
	static int16_t x799 = INT16_MIN;
	uint32_t x800 = 0U;
	volatile int32_t t20 = 6315;

	t20 = ((x797*(x798/x799))<<x800);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x825 = 15LLU;
	int32_t x826 = -1;
	static int64_t x827 = -1LL;
	int64_t x828 = 1LL;

	t21 = ((x825*(x826/x827))<<x828);

	if (t21 != 30LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x831 = -2223843625098863444LL;
	volatile int8_t x832 = 1;

	t22 = ((x829*(x830/x831))<<x832);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x865 = UINT16_MAX;
	uint16_t x866 = 1355U;
	uint64_t t23 = 25410403LLU;

	t23 = ((x865*(x866/x867))<<x868);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x961 = 11U;
	uint64_t x964 = 53LLU;

	t24 = ((x961*(x962/x963))<<x964);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x1009 = 116311353U;
	volatile uint64_t x1010 = 1189782LLU;
	int32_t x1011 = 159980;
	static uint8_t x1012 = 4U;
	static uint64_t t25 = 5270252264277285LLU;

	t25 = ((x1009*(x1010/x1011))<<x1012);

	if (t25 != 13026871536LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1061 = -397317677;
	static volatile int32_t x1063 = INT32_MAX;
	int8_t x1064 = 10;

	t26 = ((x1061*(x1062/x1063))<<x1064);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1114 = INT8_MAX;
	int16_t x1115 = INT16_MIN;
	volatile int8_t x1116 = 1;
	int32_t t27 = -325;

	t27 = ((x1113*(x1114/x1115))<<x1116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1117 = UINT16_MAX;
	uint16_t x1118 = UINT16_MAX;
	static int64_t x1119 = INT64_MAX;
	int8_t x1120 = 1;

	t28 = ((x1117*(x1118/x1119))<<x1120);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1121 = -1;
	uint8_t x1122 = 36U;
	int8_t x1123 = INT8_MIN;
	volatile uint8_t x1124 = 1U;
	volatile int32_t t29 = 204;

	t29 = ((x1121*(x1122/x1123))<<x1124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1221 = UINT32_MAX;
	int64_t x1223 = -415LL;
	uint16_t x1224 = 4U;

	t30 = ((x1221*(x1222/x1223))<<x1224);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1225 = 2228U;
	int8_t x1226 = -1;
	static int16_t x1227 = INT16_MIN;
	uint8_t x1228 = 7U;
	uint32_t t31 = 91797195U;

	t31 = ((x1225*(x1226/x1227))<<x1228);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1301 = INT8_MAX;
	int64_t x1303 = -82661LL;
	int8_t x1304 = 1;
	static volatile int64_t t32 = -3330877969566LL;

	t32 = ((x1301*(x1302/x1303))<<x1304);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x1334 = 7U;
	static int8_t x1335 = INT8_MIN;
	int16_t x1336 = 1;
	volatile int32_t t33 = 151646387;

	t33 = ((x1333*(x1334/x1335))<<x1336);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x1357 = INT8_MAX;
	volatile uint16_t x1359 = UINT16_MAX;
	static volatile uint16_t x1360 = 7U;
	volatile int32_t t34 = -2;

	t34 = ((x1357*(x1358/x1359))<<x1360);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x1361 = 25U;
	volatile int8_t x1364 = 1;

	t35 = ((x1361*(x1362/x1363))<<x1364);

	if (t35 != 2200LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1393 = -1;
	uint32_t x1394 = UINT32_MAX;
	volatile uint32_t x1396 = 11U;
	int64_t t36 = 8085623745547LL;

	t36 = ((x1393*(x1394/x1395))<<x1396);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1425 = INT32_MIN;
	volatile int16_t x1427 = 4795;
	volatile uint8_t x1428 = 7U;
	static volatile int32_t t37 = -11;

	t37 = ((x1425*(x1426/x1427))<<x1428);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1437 = 36U;
	int64_t x1438 = INT64_MIN;
	uint8_t x1440 = 20U;
	volatile int64_t t38 = -38326891738335LL;

	t38 = ((x1437*(x1438/x1439))<<x1440);

	if (t38 != 37748736LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x1457 = INT64_MIN;
	uint64_t x1458 = UINT64_MAX;
	uint64_t t39 = 70672843639083619LLU;

	t39 = ((x1457*(x1458/x1459))<<x1460);

	if (t39 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x1494 = -27;
	volatile uint8_t x1495 = UINT8_MAX;
	uint8_t x1496 = 11U;

	t40 = ((x1493*(x1494/x1495))<<x1496);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x1627 = 547225429919LLU;
	uint32_t x1628 = 3U;

	t41 = ((x1625*(x1626/x1627))<<x1628);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x1661 = 0;
	static int32_t x1662 = -62;
	uint8_t x1664 = 10U;
	static volatile int32_t t42 = 214708;

	t42 = ((x1661*(x1662/x1663))<<x1664);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x1694 = INT64_MAX;
	int8_t x1696 = 2;
	volatile int64_t t43 = -14435288467958LL;

	t43 = ((x1693*(x1694/x1695))<<x1696);

	if (t43 != 7318461065330688LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1713 = 33LLU;
	uint8_t x1714 = 11U;
	int16_t x1715 = -1;
	uint8_t x1716 = 57U;
	uint64_t t44 = 1998316272438160127LLU;

	t44 = ((x1713*(x1714/x1715))<<x1716);

	if (t44 != 3026418949592973312LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1733 = INT8_MIN;
	static volatile int16_t x1735 = INT16_MIN;
	volatile uint16_t x1736 = 1U;
	static int32_t t45 = -3153;

	t45 = ((x1733*(x1734/x1735))<<x1736);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1741 = INT8_MIN;
	int64_t x1742 = INT64_MAX;
	volatile int8_t x1743 = INT8_MIN;
	static volatile int64_t t46 = 171LL;

	t46 = ((x1741*(x1742/x1743))<<x1744);

	if (t46 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1782 = -3985746LL;
	static uint16_t x1784 = 0U;

	t47 = ((x1781*(x1782/x1783))<<x1784);

	if (t47 != 121LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint32_t x1793 = 533867677U;
	uint16_t x1794 = 245U;
	static uint64_t x1795 = UINT64_MAX;
	uint64_t x1796 = 2LLU;

	t48 = ((x1793*(x1794/x1795))<<x1796);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1873 = INT32_MAX;
	uint64_t x1874 = 35LLU;
	int16_t x1876 = 63;
	uint64_t t49 = 3LLU;

	t49 = ((x1873*(x1874/x1875))<<x1876);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x1897 = 2;
	volatile int16_t x1898 = INT16_MIN;
	static uint32_t x1899 = 30908988U;
	volatile int64_t x1900 = 5LL;
	volatile uint32_t t50 = 5364U;

	t50 = ((x1897*(x1898/x1899))<<x1900);

	if (t50 != 8832U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x1901 = 37752873U;
	uint8_t x1902 = 0U;
	volatile int8_t x1903 = -1;
	int8_t x1904 = 0;
	volatile uint32_t t51 = 92338U;

	t51 = ((x1901*(x1902/x1903))<<x1904);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x1918 = -1;
	int8_t x1919 = INT8_MIN;
	volatile int8_t x1920 = 1;
	int64_t t52 = 1524LL;

	t52 = ((x1917*(x1918/x1919))<<x1920);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2045 = INT32_MAX;
	uint32_t x2047 = UINT32_MAX;
	uint32_t t53 = 1165642U;

	t53 = ((x2045*(x2046/x2047))<<x2048);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x2070 = INT32_MIN;
	uint64_t x2071 = 1504935295955633016LLU;
	uint64_t x2072 = 31LLU;

	t54 = ((x2069*(x2070/x2071))<<x2072);

	if (t54 != 18446740775174668288LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x2097 = INT8_MIN;
	volatile int64_t x2099 = -1LL;
	volatile uint16_t x2100 = 1U;
	volatile int64_t t55 = 10310854008234955LL;

	t55 = ((x2097*(x2098/x2099))<<x2100);

	if (t55 != 1099511627520LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x2141 = UINT32_MAX;
	int8_t x2142 = -1;
	uint64_t x2143 = 221998736436714462LLU;
	int16_t x2144 = 55;
	volatile uint64_t t56 = 379275115508246570LLU;

	t56 = ((x2141*(x2142/x2143))<<x2144);

	if (t56 != 15456353921135542272LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2194 = UINT64_MAX;
	uint8_t x2196 = 10U;
	uint64_t t57 = 23LLU;

	t57 = ((x2193*(x2194/x2195))<<x2196);

	if (t57 != 23552LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x2221 = 95;
	static volatile int8_t x2223 = -17;
	uint8_t x2224 = 9U;
	int32_t t58 = -99;

	t58 = ((x2221*(x2222/x2223))<<x2224);

	if (t58 != 93729280) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x2229 = INT8_MIN;
	uint8_t x2230 = 46U;
	uint16_t x2231 = 88U;
	volatile int32_t t59 = 43699;

	t59 = ((x2229*(x2230/x2231))<<x2232);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x2281 = 1;
	int32_t x2283 = -34;
	int8_t x2284 = 6;
	volatile int32_t t60 = 70;

	t60 = ((x2281*(x2282/x2283))<<x2284);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x2369 = 10071587026518LL;
	int64_t x2370 = INT64_MIN;
	uint8_t x2372 = 0U;

	t61 = ((x2369*(x2370/x2371))<<x2372);

	if (t61 != 10071587026518LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x2390 = UINT8_MAX;
	uint64_t x2391 = 258LLU;
	int8_t x2392 = 0;
	static volatile uint64_t t62 = 4234818570LLU;

	t62 = ((x2389*(x2390/x2391))<<x2392);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x2402 = UINT32_MAX;
	int8_t x2403 = 1;
	int8_t x2404 = 10;
	volatile uint32_t t63 = 5633978U;

	t63 = ((x2401*(x2402/x2403))<<x2404);

	if (t63 != 4294961152U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x2413 = 69581621LLU;
	static volatile uint16_t x2414 = 4646U;
	volatile int64_t x2415 = INT64_MIN;
	static volatile uint8_t x2416 = 9U;
	uint64_t t64 = 944460164062LLU;

	t64 = ((x2413*(x2414/x2415))<<x2416);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x2529 = 0U;
	uint8_t x2531 = 23U;
	uint16_t x2532 = 4U;

	t65 = ((x2529*(x2530/x2531))<<x2532);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x2557 = 1554270U;
	static volatile int8_t x2560 = 6;
	uint32_t t66 = 105730U;

	t66 = ((x2557*(x2558/x2559))<<x2560);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x2569 = 1;
	volatile uint64_t x2571 = 11977233044546945LLU;

	t67 = ((x2569*(x2570/x2571))<<x2572);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x2609 = INT16_MIN;
	volatile int16_t x2610 = -1;
	static uint8_t x2611 = 70U;
	static int32_t t68 = -4215;

	t68 = ((x2609*(x2610/x2611))<<x2612);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2629 = -1;
	volatile int8_t x2630 = -1;
	int8_t x2632 = 1;
	static volatile int32_t t69 = 11;

	t69 = ((x2629*(x2630/x2631))<<x2632);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x2713 = INT16_MIN;
	uint8_t x2715 = 124U;

	t70 = ((x2713*(x2714/x2715))<<x2716);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x2863 = INT8_MAX;

	t71 = ((x2861*(x2862/x2863))<<x2864);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x2869 = INT32_MAX;
	int8_t x2870 = INT8_MIN;
	static int64_t x2872 = 9LL;
	volatile int32_t t72 = -553769;

	t72 = ((x2869*(x2870/x2871))<<x2872);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x2873 = INT8_MIN;
	uint8_t x2874 = 0U;
	volatile int64_t x2875 = INT64_MAX;
	volatile int8_t x2876 = 0;
	volatile int64_t t73 = 1002595239LL;

	t73 = ((x2873*(x2874/x2875))<<x2876);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x2945 = 14946808U;
	int16_t x2946 = -3920;
	int32_t x2947 = -1;
	int16_t x2948 = 0;
	uint32_t t74 = 409708U;

	t74 = ((x2945*(x2946/x2947))<<x2948);

	if (t74 != 2756912512U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x2953 = INT32_MIN;
	int8_t x2954 = -1;
	uint8_t x2955 = 9U;
	int8_t x2956 = 0;
	static int32_t t75 = 532869536;

	t75 = ((x2953*(x2954/x2955))<<x2956);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x2977 = INT64_MIN;
	uint16_t x2979 = UINT16_MAX;
	uint64_t t76 = 434628195582768LLU;

	t76 = ((x2977*(x2978/x2979))<<x2980);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x2997 = UINT32_MAX;
	int32_t x2998 = -1;
	int64_t x2999 = -1331LL;
	volatile uint8_t x3000 = 2U;
	volatile int64_t t77 = -2219LL;

	t77 = ((x2997*(x2998/x2999))<<x3000);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x3017 = UINT64_MAX;
	uint8_t x3018 = 3U;
	static int64_t x3019 = INT64_MIN;
	volatile uint8_t x3020 = 1U;
	uint64_t t78 = 59LLU;

	t78 = ((x3017*(x3018/x3019))<<x3020);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x3095 = INT16_MIN;
	volatile int16_t x3096 = 5;

	t79 = ((x3093*(x3094/x3095))<<x3096);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x3121 = INT16_MAX;
	static uint8_t x3122 = UINT8_MAX;
	uint8_t x3124 = 27U;

	t80 = ((x3121*(x3122/x3123))<<x3124);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x3135 = UINT8_MAX;
	int16_t x3136 = 7;
	volatile uint64_t t81 = 1LLU;

	t81 = ((x3133*(x3134/x3135))<<x3136);

	if (t81 != 105652281606144LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x3138 = 26U;
	int8_t x3140 = 0;

	t82 = ((x3137*(x3138/x3139))<<x3140);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x3173 = UINT32_MAX;
	uint8_t x3174 = 2U;
	static int32_t x3176 = 3;

	t83 = ((x3173*(x3174/x3175))<<x3176);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x3233 = -1LL;
	static uint8_t x3235 = 5U;
	volatile uint32_t x3236 = 3U;
	int64_t t84 = -2LL;

	t84 = ((x3233*(x3234/x3235))<<x3236);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x3249 = 1;
	volatile uint32_t x3251 = 8503U;
	static uint8_t x3252 = 22U;
	volatile uint32_t t85 = 24622U;

	t85 = ((x3249*(x3250/x3251))<<x3252);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint8_t x3265 = UINT8_MAX;
	int16_t x3266 = 2;
	int8_t x3267 = INT8_MIN;
	volatile uint16_t x3268 = 1U;
	int32_t t86 = -13483;

	t86 = ((x3265*(x3266/x3267))<<x3268);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x3413 = -1;
	volatile uint8_t x3414 = 12U;
	static int16_t x3415 = INT16_MAX;
	uint8_t x3416 = 10U;

	t87 = ((x3413*(x3414/x3415))<<x3416);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x3433 = 84U;
	int8_t x3434 = INT8_MAX;
	volatile int32_t t88 = -121552;

	t88 = ((x3433*(x3434/x3435))<<x3436);

	if (t88 != 1260) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x3445 = 1U;
	volatile int64_t x3446 = INT64_MAX;
	int64_t x3447 = INT64_MIN;
	uint8_t x3448 = 37U;
	volatile int64_t t89 = 794271998142LL;

	t89 = ((x3445*(x3446/x3447))<<x3448);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x3525 = UINT16_MAX;
	static uint16_t x3526 = UINT16_MAX;
	volatile uint64_t x3527 = UINT64_MAX;

	t90 = ((x3525*(x3526/x3527))<<x3528);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x3705 = -23;
	uint64_t x3706 = 486762678LLU;
	volatile int8_t x3707 = INT8_MAX;
	uint16_t x3708 = 5U;

	t91 = ((x3705*(x3706/x3707))<<x3708);

	if (t91 != 18446744070888628480LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x3754 = -4477786;
	volatile int16_t x3755 = INT16_MIN;
	volatile int64_t x3756 = 7LL;
	volatile int32_t t92 = 1556;

	t92 = ((x3753*(x3754/x3755))<<x3756);

	if (t92 != 87040) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x3785 = 3692;
	static int32_t x3787 = INT32_MAX;
	uint8_t x3788 = 1U;
	static int32_t t93 = 9184606;

	t93 = ((x3785*(x3786/x3787))<<x3788);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x3833 = 4LL;
	volatile int64_t x3834 = -1LL;
	volatile uint32_t x3835 = UINT32_MAX;
	uint8_t x3836 = 10U;
	int64_t t94 = 5678994717389LL;

	t94 = ((x3833*(x3834/x3835))<<x3836);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x3853 = UINT8_MAX;
	static uint8_t x3854 = UINT8_MAX;
	volatile int16_t x3855 = -5982;
	static uint8_t x3856 = 1U;

	t95 = ((x3853*(x3854/x3855))<<x3856);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x4021 = -1;
	uint16_t x4022 = 97U;
	int8_t x4023 = INT8_MAX;
	uint8_t x4024 = 1U;
	static volatile int32_t t96 = -33;

	t96 = ((x4021*(x4022/x4023))<<x4024);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x4029 = INT32_MIN;
	static int32_t x4031 = INT32_MIN;
	int16_t x4032 = 0;
	volatile int32_t t97 = -198124931;

	t97 = ((x4029*(x4030/x4031))<<x4032);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x4033 = -1;
	uint16_t x4034 = 8809U;
	int32_t x4035 = INT32_MAX;
	int32_t x4036 = 1;

	t98 = ((x4033*(x4034/x4035))<<x4036);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x4045 = UINT64_MAX;
	uint32_t x4046 = 16012U;
	static int32_t x4047 = INT32_MIN;
	uint16_t x4048 = 52U;
	volatile uint64_t t99 = 29LLU;

	t99 = ((x4045*(x4046/x4047))<<x4048);

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

