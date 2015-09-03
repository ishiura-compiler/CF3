#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x68 = 1;
int32_t t1 = 3;
static uint8_t x84 = 7U;
int16_t x104 = 4;
static int32_t x139 = INT32_MAX;
int64_t x226 = INT64_MIN;
uint16_t x228 = 15U;
int8_t x261 = INT8_MIN;
int32_t t8 = 642551865;
int32_t x307 = 2;
volatile int64_t x357 = -1LL;
uint32_t x394 = UINT32_MAX;
int64_t x418 = 0LL;
static int8_t x419 = INT8_MIN;
int64_t x458 = INT64_MAX;
volatile int16_t x460 = 2;
static volatile int32_t t17 = -3;
uint16_t x560 = 21U;
volatile int32_t t18 = 190;
uint8_t x629 = UINT8_MAX;
volatile int32_t t20 = -6;
static volatile int16_t x687 = 0;
uint32_t x688 = 0U;
int32_t x728 = 29;
int8_t x872 = 8;
uint8_t x895 = 19U;
int8_t x896 = 1;
int16_t x908 = 21;
int8_t x918 = -1;
int64_t x953 = 3522990072473741LL;
uint16_t x993 = 498U;
int32_t x995 = INT32_MAX;
volatile int32_t t31 = 1025637;
int16_t x1007 = 479;
static int32_t x1015 = 218728482;
volatile int32_t x1017 = INT32_MIN;
uint16_t x1079 = 19U;
int8_t x1080 = 7;
int8_t x1092 = 10;
int32_t t39 = 3;
volatile int32_t x1314 = -1;
static int16_t x1315 = 1;
uint8_t x1316 = 14U;
int32_t t41 = 459731452;
int16_t x1424 = 0;
static volatile int32_t t43 = 229928;
int32_t x1489 = INT32_MIN;
static int16_t x1490 = -37;
static int8_t x1492 = 1;
int8_t x1518 = INT8_MIN;
volatile uint8_t x1537 = 17U;
static int32_t t47 = 1;
uint64_t x1557 = UINT64_MAX;
uint16_t x1571 = 1U;
uint8_t x1572 = 9U;
int8_t x1592 = 0;
static volatile int32_t t50 = 9;
static uint32_t x1647 = 120816896U;
static int64_t x1709 = INT64_MIN;
int32_t t52 = -222061;
int8_t x1808 = 0;
int32_t t57 = -3719;
static uint32_t x1877 = 103143U;
int8_t x1985 = INT8_MIN;
int32_t x2113 = INT32_MIN;
static int32_t x2115 = INT32_MIN;
volatile int32_t t65 = -1954797;
static uint16_t x2127 = 20U;
uint64_t x2138 = 4541318634774265424LLU;
volatile int32_t t69 = -1078;
int16_t x2245 = -4057;
int64_t x2318 = INT64_MIN;
int16_t x2320 = 6;
volatile int32_t t71 = 166;
static volatile int16_t x2377 = INT16_MIN;
volatile int8_t x2378 = -2;
int32_t x2379 = INT32_MIN;
int32_t x2439 = INT32_MIN;
volatile int32_t t75 = 28;
int32_t t77 = 466;
static int8_t x2616 = 0;
int32_t x2618 = 33739577;
uint16_t x2620 = 8U;
int32_t t79 = -48056;
static uint32_t x2803 = 649067U;
static uint32_t x2823 = 11096U;
uint32_t x2827 = UINT32_MAX;
uint8_t x2828 = 2U;
volatile int32_t t86 = 27203;
static int16_t x2889 = INT16_MAX;
int32_t t88 = -183411105;
int32_t x2894 = 22027917;
int8_t x2896 = 5;
int16_t x2912 = 0;
int32_t x2950 = -12072;
int32_t x3007 = -1;
static int32_t t94 = 549240295;
volatile int16_t x3037 = 107;
uint8_t x3057 = UINT8_MAX;
static volatile int16_t x3134 = 1;
volatile int8_t x3135 = 61;
uint64_t x3136 = 3LLU;
volatile int32_t t99 = -43392;


void f0(void) {
	uint8_t x57 = UINT8_MAX;
	int8_t x58 = -1;
	volatile uint32_t x59 = 128U;
	static uint8_t x60 = 4U;
	volatile int32_t t0 = 45630087;

	t0 = (((x57<x58)<=x59)>>x60);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x65 = 0;
	int16_t x66 = 135;
	volatile int8_t x67 = 32;

	t1 = (((x65<x66)<=x67)>>x68);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x81 = 16U;
	int64_t x82 = -48783485384LL;
	static volatile int64_t x83 = INT64_MIN;
	int32_t t2 = 6305;

	t2 = (((x81<x82)<=x83)>>x84);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x101 = INT8_MAX;
	int8_t x102 = -1;
	uint8_t x103 = 7U;
	int32_t t3 = -128576;

	t3 = (((x101<x102)<=x103)>>x104);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x137 = 6U;
	uint16_t x138 = UINT16_MAX;
	static volatile uint16_t x140 = 6U;
	volatile int32_t t4 = 21;

	t4 = (((x137<x138)<=x139)>>x140);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x193 = INT8_MIN;
	int32_t x194 = 103967817;
	int16_t x195 = INT16_MAX;
	uint8_t x196 = 2U;
	volatile int32_t t5 = 47371525;

	t5 = (((x193<x194)<=x195)>>x196);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x201 = -10268;
	uint16_t x202 = 12U;
	uint16_t x203 = 2089U;
	int8_t x204 = 1;
	volatile int32_t t6 = -30;

	t6 = (((x201<x202)<=x203)>>x204);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x225 = 46200LLU;
	int64_t x227 = -1LL;
	volatile int32_t t7 = -151575;

	t7 = (((x225<x226)<=x227)>>x228);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x262 = 14272;
	uint64_t x263 = 1025038244611368LLU;
	uint32_t x264 = 14U;

	t8 = (((x261<x262)<=x263)>>x264);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x289 = -382005591;
	int16_t x290 = INT16_MAX;
	static volatile int16_t x291 = INT16_MIN;
	static int8_t x292 = 31;
	static volatile int32_t t9 = 123;

	t9 = (((x289<x290)<=x291)>>x292);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x305 = 30U;
	int32_t x306 = INT32_MAX;
	static uint16_t x308 = 25U;
	volatile int32_t t10 = 18;

	t10 = (((x305<x306)<=x307)>>x308);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x345 = UINT32_MAX;
	volatile int64_t x346 = -1LL;
	uint64_t x347 = UINT64_MAX;
	uint64_t x348 = 22LLU;
	volatile int32_t t11 = -1;

	t11 = (((x345<x346)<=x347)>>x348);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x358 = 395LLU;
	static int32_t x359 = 267911394;
	volatile int8_t x360 = 0;
	int32_t t12 = -300;

	t12 = (((x357<x358)<=x359)>>x360);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x393 = INT16_MIN;
	volatile int32_t x395 = -1;
	uint32_t x396 = 1U;
	int32_t t13 = -224057644;

	t13 = (((x393<x394)<=x395)>>x396);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x417 = 240LL;
	uint8_t x420 = 5U;
	volatile int32_t t14 = -5153231;

	t14 = (((x417<x418)<=x419)>>x420);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x457 = UINT16_MAX;
	volatile uint16_t x459 = 44U;
	int32_t t15 = 247;

	t15 = (((x457<x458)<=x459)>>x460);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x485 = 107U;
	int16_t x486 = -1;
	static volatile int16_t x487 = 15187;
	uint16_t x488 = 8U;
	int32_t t16 = 13049178;

	t16 = (((x485<x486)<=x487)>>x488);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x521 = -47202618135439LL;
	volatile uint16_t x522 = 2U;
	volatile int8_t x523 = 0;
	uint16_t x524 = 0U;

	t17 = (((x521<x522)<=x523)>>x524);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x557 = INT8_MIN;
	volatile int16_t x558 = 40;
	uint8_t x559 = UINT8_MAX;

	t18 = (((x557<x558)<=x559)>>x560);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x630 = -1;
	static volatile int8_t x631 = INT8_MAX;
	uint16_t x632 = 2U;
	static int32_t t19 = -65;

	t19 = (((x629<x630)<=x631)>>x632);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x649 = -9057759261862LL;
	static int64_t x650 = INT64_MIN;
	int16_t x651 = INT16_MIN;
	uint8_t x652 = 10U;

	t20 = (((x649<x650)<=x651)>>x652);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x685 = 1;
	int16_t x686 = -1;
	int32_t t21 = 86402;

	t21 = (((x685<x686)<=x687)>>x688);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x725 = UINT32_MAX;
	uint64_t x726 = 14550206771LLU;
	volatile uint8_t x727 = 6U;
	int32_t t22 = 48;

	t22 = (((x725<x726)<=x727)>>x728);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x765 = -1;
	volatile int64_t x766 = INT64_MIN;
	int8_t x767 = -20;
	uint8_t x768 = 5U;
	int32_t t23 = -206;

	t23 = (((x765<x766)<=x767)>>x768);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x785 = INT64_MAX;
	int8_t x786 = INT8_MAX;
	uint32_t x787 = UINT32_MAX;
	uint64_t x788 = 0LLU;
	static int32_t t24 = -26;

	t24 = (((x785<x786)<=x787)>>x788);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x869 = 6008LLU;
	int8_t x870 = INT8_MIN;
	static volatile int32_t x871 = 16059870;
	static volatile int32_t t25 = -960499848;

	t25 = (((x869<x870)<=x871)>>x872);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x893 = INT8_MAX;
	uint64_t x894 = 1039551LLU;
	int32_t t26 = -1;

	t26 = (((x893<x894)<=x895)>>x896);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x905 = -1;
	int16_t x906 = 1597;
	static int8_t x907 = -1;
	int32_t t27 = 1254;

	t27 = (((x905<x906)<=x907)>>x908);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x917 = INT64_MIN;
	int8_t x919 = INT8_MAX;
	volatile uint8_t x920 = 1U;
	int32_t t28 = 1000114;

	t28 = (((x917<x918)<=x919)>>x920);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x954 = 11U;
	int32_t x955 = INT32_MIN;
	volatile uint8_t x956 = 4U;
	int32_t t29 = -1340455;

	t29 = (((x953<x954)<=x955)>>x956);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x981 = 2820U;
	uint16_t x982 = UINT16_MAX;
	int32_t x983 = INT32_MIN;
	static int8_t x984 = 1;
	static volatile int32_t t30 = 86716529;

	t30 = (((x981<x982)<=x983)>>x984);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x994 = 0U;
	uint8_t x996 = 13U;

	t31 = (((x993<x994)<=x995)>>x996);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x1005 = INT64_MIN;
	int8_t x1006 = INT8_MIN;
	int8_t x1008 = 2;
	int32_t t32 = 1;

	t32 = (((x1005<x1006)<=x1007)>>x1008);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x1013 = INT8_MIN;
	uint32_t x1014 = UINT32_MAX;
	volatile uint32_t x1016 = 3U;
	volatile int32_t t33 = 33;

	t33 = (((x1013<x1014)<=x1015)>>x1016);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x1018 = UINT64_MAX;
	static volatile int8_t x1019 = -1;
	uint32_t x1020 = 12U;
	volatile int32_t t34 = 33017054;

	t34 = (((x1017<x1018)<=x1019)>>x1020);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1077 = 1;
	uint8_t x1078 = UINT8_MAX;
	volatile int32_t t35 = 716;

	t35 = (((x1077<x1078)<=x1079)>>x1080);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1089 = 1117U;
	int32_t x1090 = -1;
	int16_t x1091 = -4;
	int32_t t36 = -739434518;

	t36 = (((x1089<x1090)<=x1091)>>x1092);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x1121 = -1;
	int16_t x1122 = 31;
	int8_t x1123 = INT8_MIN;
	uint8_t x1124 = 7U;
	volatile int32_t t37 = 88273;

	t37 = (((x1121<x1122)<=x1123)>>x1124);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x1273 = 3U;
	static uint16_t x1274 = 1U;
	int8_t x1275 = INT8_MAX;
	int16_t x1276 = 2;
	volatile int32_t t38 = -128194;

	t38 = (((x1273<x1274)<=x1275)>>x1276);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x1293 = 0U;
	uint8_t x1294 = 1U;
	static uint8_t x1295 = UINT8_MAX;
	uint64_t x1296 = 14LLU;

	t39 = (((x1293<x1294)<=x1295)>>x1296);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1313 = -1;
	volatile int32_t t40 = -7042211;

	t40 = (((x1313<x1314)<=x1315)>>x1316);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x1329 = INT64_MIN;
	int64_t x1330 = INT64_MAX;
	int32_t x1331 = 343;
	uint8_t x1332 = 3U;

	t41 = (((x1329<x1330)<=x1331)>>x1332);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1389 = INT8_MAX;
	int32_t x1390 = INT32_MAX;
	uint16_t x1391 = 7U;
	int8_t x1392 = 0;
	volatile int32_t t42 = 822039;

	t42 = (((x1389<x1390)<=x1391)>>x1392);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x1421 = 3563;
	int64_t x1422 = INT64_MIN;
	volatile uint64_t x1423 = 87159LLU;

	t43 = (((x1421<x1422)<=x1423)>>x1424);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x1461 = INT32_MAX;
	static int32_t x1462 = -1;
	volatile uint8_t x1463 = 3U;
	int8_t x1464 = 0;
	volatile int32_t t44 = 835975;

	t44 = (((x1461<x1462)<=x1463)>>x1464);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x1491 = 1U;
	volatile int32_t t45 = -41569;

	t45 = (((x1489<x1490)<=x1491)>>x1492);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1517 = -4;
	int16_t x1519 = 7;
	volatile int16_t x1520 = 1;
	int32_t t46 = -323879;

	t46 = (((x1517<x1518)<=x1519)>>x1520);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x1538 = 49U;
	int64_t x1539 = -1LL;
	uint16_t x1540 = 7U;

	t47 = (((x1537<x1538)<=x1539)>>x1540);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x1558 = 127U;
	int32_t x1559 = INT32_MIN;
	int64_t x1560 = 1LL;
	static int32_t t48 = 111230;

	t48 = (((x1557<x1558)<=x1559)>>x1560);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x1569 = INT8_MIN;
	int64_t x1570 = -62547364LL;
	int32_t t49 = 25800861;

	t49 = (((x1569<x1570)<=x1571)>>x1572);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x1589 = 0U;
	static int32_t x1590 = -1073289455;
	int64_t x1591 = -4812306524976347LL;

	t50 = (((x1589<x1590)<=x1591)>>x1592);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x1645 = UINT16_MAX;
	static int32_t x1646 = -1;
	int16_t x1648 = 0;
	int32_t t51 = 20;

	t51 = (((x1645<x1646)<=x1647)>>x1648);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1710 = -1;
	int64_t x1711 = -1LL;
	int8_t x1712 = 0;

	t52 = (((x1709<x1710)<=x1711)>>x1712);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x1737 = UINT8_MAX;
	uint32_t x1738 = UINT32_MAX;
	static int8_t x1739 = INT8_MIN;
	int16_t x1740 = 19;
	int32_t t53 = -120898010;

	t53 = (((x1737<x1738)<=x1739)>>x1740);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x1769 = 224U;
	volatile uint16_t x1770 = 1836U;
	uint32_t x1771 = UINT32_MAX;
	volatile uint8_t x1772 = 2U;
	static volatile int32_t t54 = -13;

	t54 = (((x1769<x1770)<=x1771)>>x1772);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1805 = INT32_MIN;
	int64_t x1806 = -1LL;
	uint64_t x1807 = 28308186937LLU;
	static volatile int32_t t55 = -27839;

	t55 = (((x1805<x1806)<=x1807)>>x1808);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x1813 = 2362U;
	static uint64_t x1814 = UINT64_MAX;
	int16_t x1815 = -1;
	uint8_t x1816 = 1U;
	volatile int32_t t56 = -835913;

	t56 = (((x1813<x1814)<=x1815)>>x1816);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x1817 = 29U;
	static int16_t x1818 = INT16_MIN;
	uint8_t x1819 = UINT8_MAX;
	static volatile int8_t x1820 = 1;

	t57 = (((x1817<x1818)<=x1819)>>x1820);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x1857 = INT64_MAX;
	int32_t x1858 = 8648;
	int16_t x1859 = INT16_MIN;
	static uint16_t x1860 = 1U;
	int32_t t58 = 65;

	t58 = (((x1857<x1858)<=x1859)>>x1860);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x1869 = INT16_MIN;
	volatile int32_t x1870 = -147130;
	volatile int64_t x1871 = INT64_MIN;
	uint8_t x1872 = 3U;
	volatile int32_t t59 = 3265757;

	t59 = (((x1869<x1870)<=x1871)>>x1872);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x1878 = -231LL;
	uint16_t x1879 = 33U;
	int16_t x1880 = 21;
	int32_t t60 = 83853412;

	t60 = (((x1877<x1878)<=x1879)>>x1880);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x1981 = INT16_MAX;
	int64_t x1982 = INT64_MIN;
	uint64_t x1983 = 234443886LLU;
	static volatile uint16_t x1984 = 1U;
	static int32_t t61 = -1;

	t61 = (((x1981<x1982)<=x1983)>>x1984);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x1986 = -6682;
	static int64_t x1987 = INT64_MAX;
	int8_t x1988 = 3;
	volatile int32_t t62 = -42264314;

	t62 = (((x1985<x1986)<=x1987)>>x1988);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x2017 = 117U;
	int16_t x2018 = -1;
	int8_t x2019 = -1;
	uint8_t x2020 = 6U;
	static volatile int32_t t63 = -19155;

	t63 = (((x2017<x2018)<=x2019)>>x2020);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x2061 = -1;
	volatile int32_t x2062 = 41;
	uint32_t x2063 = 0U;
	uint32_t x2064 = 9U;
	volatile int32_t t64 = 2;

	t64 = (((x2061<x2062)<=x2063)>>x2064);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x2114 = 1;
	static int32_t x2116 = 2;

	t65 = (((x2113<x2114)<=x2115)>>x2116);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint8_t x2125 = UINT8_MAX;
	int32_t x2126 = 719954890;
	uint8_t x2128 = 9U;
	volatile int32_t t66 = -373810741;

	t66 = (((x2125<x2126)<=x2127)>>x2128);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x2137 = 6U;
	int16_t x2139 = INT16_MAX;
	uint8_t x2140 = 1U;
	int32_t t67 = -1571140;

	t67 = (((x2137<x2138)<=x2139)>>x2140);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x2145 = INT64_MIN;
	uint8_t x2146 = UINT8_MAX;
	static int8_t x2147 = INT8_MIN;
	uint8_t x2148 = 1U;
	static volatile int32_t t68 = 146651504;

	t68 = (((x2145<x2146)<=x2147)>>x2148);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x2225 = -14637;
	int32_t x2226 = INT32_MAX;
	static int64_t x2227 = INT64_MAX;
	volatile int8_t x2228 = 1;

	t69 = (((x2225<x2226)<=x2227)>>x2228);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x2246 = UINT16_MAX;
	uint32_t x2247 = 38006U;
	uint8_t x2248 = 20U;
	static volatile int32_t t70 = 0;

	t70 = (((x2245<x2246)<=x2247)>>x2248);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x2317 = INT16_MIN;
	static volatile int64_t x2319 = INT64_MAX;

	t71 = (((x2317<x2318)<=x2319)>>x2320);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x2365 = -111;
	static int32_t x2366 = INT32_MIN;
	int64_t x2367 = 1228968LL;
	static volatile int8_t x2368 = 3;
	int32_t t72 = 773177836;

	t72 = (((x2365<x2366)<=x2367)>>x2368);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x2369 = -1;
	static int8_t x2370 = INT8_MAX;
	int32_t x2371 = INT32_MAX;
	static uint8_t x2372 = 4U;
	int32_t t73 = -17;

	t73 = (((x2369<x2370)<=x2371)>>x2372);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x2380 = 8U;
	volatile int32_t t74 = -6325216;

	t74 = (((x2377<x2378)<=x2379)>>x2380);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x2437 = UINT8_MAX;
	static volatile int16_t x2438 = 432;
	uint16_t x2440 = 14U;

	t75 = (((x2437<x2438)<=x2439)>>x2440);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x2441 = INT16_MAX;
	static int8_t x2442 = 9;
	static uint16_t x2443 = 8748U;
	uint8_t x2444 = 0U;
	volatile int32_t t76 = -629960499;

	t76 = (((x2441<x2442)<=x2443)>>x2444);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x2509 = -1;
	static uint32_t x2510 = 1U;
	static volatile uint32_t x2511 = 13407U;
	volatile uint64_t x2512 = 12LLU;

	t77 = (((x2509<x2510)<=x2511)>>x2512);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x2613 = INT8_MAX;
	int8_t x2614 = INT8_MIN;
	static int32_t x2615 = INT32_MIN;
	volatile int32_t t78 = 5995;

	t78 = (((x2613<x2614)<=x2615)>>x2616);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2617 = INT8_MAX;
	volatile uint16_t x2619 = UINT16_MAX;

	t79 = (((x2617<x2618)<=x2619)>>x2620);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x2649 = INT32_MIN;
	int16_t x2650 = INT16_MAX;
	uint32_t x2651 = UINT32_MAX;
	volatile uint8_t x2652 = 18U;
	static volatile int32_t t80 = -801;

	t80 = (((x2649<x2650)<=x2651)>>x2652);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x2693 = INT64_MAX;
	int32_t x2694 = INT32_MIN;
	int16_t x2695 = INT16_MIN;
	static uint8_t x2696 = 6U;
	volatile int32_t t81 = 2029338;

	t81 = (((x2693<x2694)<=x2695)>>x2696);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x2729 = 1U;
	int64_t x2730 = -1213279LL;
	static int64_t x2731 = -1LL;
	static int8_t x2732 = 14;
	volatile int32_t t82 = -7435;

	t82 = (((x2729<x2730)<=x2731)>>x2732);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x2801 = 2414574108487330725LLU;
	int16_t x2802 = -162;
	uint16_t x2804 = 1U;
	volatile int32_t t83 = -31;

	t83 = (((x2801<x2802)<=x2803)>>x2804);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x2821 = INT16_MIN;
	int8_t x2822 = INT8_MIN;
	static volatile uint8_t x2824 = 1U;
	static volatile int32_t t84 = 10254252;

	t84 = (((x2821<x2822)<=x2823)>>x2824);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x2825 = INT64_MIN;
	uint16_t x2826 = 3U;
	int32_t t85 = 784552204;

	t85 = (((x2825<x2826)<=x2827)>>x2828);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x2849 = INT16_MAX;
	int8_t x2850 = -19;
	int32_t x2851 = INT32_MAX;
	uint8_t x2852 = 7U;

	t86 = (((x2849<x2850)<=x2851)>>x2852);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x2869 = INT32_MAX;
	volatile uint8_t x2870 = 3U;
	static int8_t x2871 = 1;
	uint8_t x2872 = 3U;
	volatile int32_t t87 = 26;

	t87 = (((x2869<x2870)<=x2871)>>x2872);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x2890 = -1;
	uint8_t x2891 = UINT8_MAX;
	static uint32_t x2892 = 3U;

	t88 = (((x2889<x2890)<=x2891)>>x2892);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x2893 = 7246159LLU;
	static int16_t x2895 = 10;
	volatile int32_t t89 = -277757307;

	t89 = (((x2893<x2894)<=x2895)>>x2896);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x2909 = UINT8_MAX;
	int64_t x2910 = INT64_MIN;
	int8_t x2911 = 1;
	static int32_t t90 = -6869;

	t90 = (((x2909<x2910)<=x2911)>>x2912);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x2921 = 571591;
	static int8_t x2922 = INT8_MIN;
	int16_t x2923 = -3;
	uint8_t x2924 = 3U;
	volatile int32_t t91 = -26567702;

	t91 = (((x2921<x2922)<=x2923)>>x2924);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x2949 = INT32_MAX;
	static int16_t x2951 = 18;
	uint64_t x2952 = 0LLU;
	volatile int32_t t92 = 18;

	t92 = (((x2949<x2950)<=x2951)>>x2952);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x2965 = 8454;
	static int8_t x2966 = -1;
	static uint8_t x2967 = UINT8_MAX;
	uint8_t x2968 = 9U;
	int32_t t93 = -72635;

	t93 = (((x2965<x2966)<=x2967)>>x2968);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x3005 = 26137757U;
	volatile int64_t x3006 = -1LL;
	int8_t x3008 = 14;

	t94 = (((x3005<x3006)<=x3007)>>x3008);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x3038 = UINT64_MAX;
	static uint8_t x3039 = 117U;
	uint16_t x3040 = 0U;
	int32_t t95 = -760712954;

	t95 = (((x3037<x3038)<=x3039)>>x3040);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x3058 = 7;
	int32_t x3059 = INT32_MIN;
	uint8_t x3060 = 0U;
	int32_t t96 = 12;

	t96 = (((x3057<x3058)<=x3059)>>x3060);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x3113 = 1U;
	static int8_t x3114 = INT8_MAX;
	int64_t x3115 = INT64_MIN;
	static uint64_t x3116 = 19LLU;
	static volatile int32_t t97 = -3770496;

	t97 = (((x3113<x3114)<=x3115)>>x3116);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x3133 = INT32_MAX;
	int32_t t98 = 787;

	t98 = (((x3133<x3134)<=x3135)>>x3136);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x3141 = 26636182232LLU;
	int32_t x3142 = INT32_MAX;
	volatile uint16_t x3143 = 108U;
	volatile uint8_t x3144 = 1U;

	t99 = (((x3141<x3142)<=x3143)>>x3144);

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

