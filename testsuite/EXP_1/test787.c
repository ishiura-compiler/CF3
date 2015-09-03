#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x40 = 26;
static int16_t x188 = 14;
uint16_t x199 = 22046U;
volatile int16_t x242 = INT16_MAX;
static int32_t x251 = INT32_MIN;
volatile int32_t t6 = 16360604;
uint8_t x308 = 1U;
volatile int32_t t7 = 333944870;
int32_t t8 = 14606873;
int32_t t9 = 480;
int64_t x473 = 0LL;
volatile uint8_t x474 = 2U;
volatile uint8_t x478 = UINT8_MAX;
int8_t x479 = INT8_MIN;
volatile int32_t t12 = -27;
int32_t t15 = -14934010;
volatile int64_t x627 = -2197LL;
int32_t t17 = -7;
static uint64_t x763 = 12522206082245LLU;
int16_t x843 = -1;
volatile int32_t t21 = -659720;
static volatile int64_t x907 = 6LL;
static int64_t x935 = -1LL;
volatile int8_t x936 = 1;
int16_t x944 = 0;
static int16_t x1023 = INT16_MIN;
volatile int8_t x1061 = 63;
int32_t t28 = 229;
uint8_t x1084 = 0U;
int32_t t32 = -95337705;
int16_t x1226 = INT16_MAX;
volatile int8_t x1304 = 1;
int64_t x1323 = 10013719LL;
uint8_t x1353 = 3U;
int16_t x1354 = -800;
volatile uint32_t x1375 = 696U;
uint8_t x1380 = 8U;
volatile int64_t x1395 = -1LL;
int32_t x1396 = 2;
uint8_t x1422 = 46U;
volatile uint8_t x1424 = 9U;
uint32_t x1447 = 6U;
volatile int64_t x1470 = -1LL;
volatile int16_t x1515 = -1;
int32_t t48 = 1866;
int16_t x1601 = -1031;
static int16_t x1655 = INT16_MIN;
volatile uint8_t x1705 = 63U;
volatile int32_t t52 = 18;
int64_t x1902 = INT64_MAX;
int32_t x1933 = INT32_MAX;
uint8_t x2000 = 10U;
int64_t x2086 = INT64_MIN;
volatile uint16_t x2094 = 938U;
int8_t x2096 = 3;
int64_t x2134 = 5083089160LL;
static int64_t x2135 = INT64_MIN;
int16_t x2136 = 0;
uint64_t x2146 = 19312187792587403LLU;
int16_t x2178 = INT16_MIN;
int32_t x2182 = 8502;
int32_t t71 = -98762;
static int32_t x2250 = 109;
uint8_t x2251 = UINT8_MAX;
int32_t x2262 = -2627;
uint8_t x2264 = 0U;
uint32_t x2373 = 3U;
uint16_t x2375 = 16U;
volatile uint8_t x2517 = 0U;
int8_t x2518 = -2;
static volatile int32_t x2524 = 1;
int32_t t81 = -9341;
uint8_t x2587 = UINT8_MAX;
int16_t x2588 = 1;
int16_t x2679 = INT16_MIN;
uint32_t x2742 = 4104U;
static uint64_t x2882 = 3275LLU;
int32_t t89 = -52650;
static int64_t x2967 = INT64_MIN;
int32_t x2986 = 1329070;
int32_t x2988 = 5;
int32_t x3005 = -1;
static uint8_t x3007 = 0U;
int16_t x3019 = -1;
static uint8_t x3056 = 0U;
int32_t t95 = -607376;
int8_t x3131 = 5;


void f0(void) {
	int8_t x1 = -2;
	int64_t x2 = -2796377863LL;
	int16_t x3 = INT16_MIN;
	int16_t x4 = 0;
	static int32_t t0 = -11489779;

	t0 = (((x1%x2)<x3)>>x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x37 = 15U;
	static volatile int8_t x38 = INT8_MIN;
	int64_t x39 = 0LL;
	int32_t t1 = 44;

	t1 = (((x37%x38)<x39)>>x40);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x73 = UINT32_MAX;
	volatile uint8_t x74 = 2U;
	uint64_t x75 = 8525440330537LLU;
	uint32_t x76 = 5U;
	volatile int32_t t2 = -34;

	t2 = (((x73%x74)<x75)>>x76);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x185 = 201764351478LL;
	int32_t x186 = -1;
	int16_t x187 = 5198;
	int32_t t3 = -1164;

	t3 = (((x185%x186)<x187)>>x188);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x197 = UINT8_MAX;
	volatile int16_t x198 = INT16_MIN;
	volatile int32_t x200 = 12;
	static volatile int32_t t4 = 41166;

	t4 = (((x197%x198)<x199)>>x200);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x241 = INT16_MIN;
	static uint64_t x243 = 2003871183172167LLU;
	volatile int32_t x244 = 1;
	static volatile int32_t t5 = -6192115;

	t5 = (((x241%x242)<x243)>>x244);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x249 = 97U;
	uint64_t x250 = UINT64_MAX;
	int32_t x252 = 1;

	t6 = (((x249%x250)<x251)>>x252);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x305 = INT32_MAX;
	int64_t x306 = -1LL;
	static int64_t x307 = INT64_MAX;

	t7 = (((x305%x306)<x307)>>x308);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x417 = 5663760948758088914LLU;
	uint32_t x418 = 119595U;
	int32_t x419 = 1576641;
	uint8_t x420 = 1U;

	t8 = (((x417%x418)<x419)>>x420);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint8_t x469 = 12U;
	int64_t x470 = INT64_MAX;
	int8_t x471 = INT8_MAX;
	uint8_t x472 = 0U;

	t9 = (((x469%x470)<x471)>>x472);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x475 = 7U;
	uint8_t x476 = 5U;
	volatile int32_t t10 = -3;

	t10 = (((x473%x474)<x475)>>x476);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x477 = INT64_MIN;
	volatile uint32_t x480 = 8U;
	volatile int32_t t11 = 2;

	t11 = (((x477%x478)<x479)>>x480);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x521 = UINT32_MAX;
	int16_t x522 = -548;
	volatile int64_t x523 = 15395196374040LL;
	static uint32_t x524 = 28U;

	t12 = (((x521%x522)<x523)>>x524);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x573 = INT8_MAX;
	volatile int16_t x574 = INT16_MIN;
	static uint64_t x575 = 1421406074LLU;
	static volatile uint8_t x576 = 12U;
	static volatile int32_t t13 = -27;

	t13 = (((x573%x574)<x575)>>x576);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x589 = 586LLU;
	int64_t x590 = -1LL;
	int16_t x591 = -92;
	uint8_t x592 = 0U;
	static volatile int32_t t14 = -49189;

	t14 = (((x589%x590)<x591)>>x592);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x621 = INT16_MIN;
	volatile int8_t x622 = 1;
	int64_t x623 = -262805LL;
	uint8_t x624 = 3U;

	t15 = (((x621%x622)<x623)>>x624);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int32_t x625 = -19118838;
	int64_t x626 = -1LL;
	static uint8_t x628 = 0U;
	static volatile int32_t t16 = 3431587;

	t16 = (((x625%x626)<x627)>>x628);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x645 = -1;
	static int16_t x646 = -1;
	int32_t x647 = INT32_MIN;
	static int8_t x648 = 1;

	t17 = (((x645%x646)<x647)>>x648);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x661 = 15U;
	int16_t x662 = INT16_MIN;
	uint64_t x663 = UINT64_MAX;
	uint16_t x664 = 20U;
	int32_t t18 = 4;

	t18 = (((x661%x662)<x663)>>x664);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x709 = 0LL;
	int64_t x710 = -32216350932145LL;
	int32_t x711 = -19319737;
	static volatile int16_t x712 = 1;
	int32_t t19 = -371;

	t19 = (((x709%x710)<x711)>>x712);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x761 = -1;
	int16_t x762 = -1;
	volatile uint8_t x764 = 1U;
	int32_t t20 = 46424;

	t20 = (((x761%x762)<x763)>>x764);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x841 = 0;
	int16_t x842 = -1065;
	uint32_t x844 = 12U;

	t21 = (((x841%x842)<x843)>>x844);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x885 = 1892244LLU;
	static int16_t x886 = -1;
	int32_t x887 = INT32_MIN;
	uint32_t x888 = 2U;
	static int32_t t22 = 191;

	t22 = (((x885%x886)<x887)>>x888);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x905 = 532511851278759472LLU;
	int16_t x906 = -8;
	volatile uint8_t x908 = 12U;
	volatile int32_t t23 = -30092862;

	t23 = (((x905%x906)<x907)>>x908);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x933 = -1825373LL;
	int16_t x934 = INT16_MAX;
	int32_t t24 = -119446501;

	t24 = (((x933%x934)<x935)>>x936);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x941 = 851781LLU;
	int64_t x942 = -1LL;
	uint64_t x943 = UINT64_MAX;
	volatile int32_t t25 = -11;

	t25 = (((x941%x942)<x943)>>x944);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x981 = -26376331436048081LL;
	uint32_t x982 = UINT32_MAX;
	int8_t x983 = 0;
	static volatile uint8_t x984 = 3U;
	int32_t t26 = -457557242;

	t26 = (((x981%x982)<x983)>>x984);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1021 = 29366U;
	int32_t x1022 = INT32_MAX;
	uint8_t x1024 = 10U;
	volatile int32_t t27 = -6032;

	t27 = (((x1021%x1022)<x1023)>>x1024);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x1062 = INT8_MIN;
	static int8_t x1063 = INT8_MAX;
	static uint8_t x1064 = 0U;

	t28 = (((x1061%x1062)<x1063)>>x1064);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x1081 = -1;
	uint8_t x1082 = 12U;
	static int8_t x1083 = INT8_MIN;
	int32_t t29 = 1784253;

	t29 = (((x1081%x1082)<x1083)>>x1084);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1109 = UINT8_MAX;
	uint64_t x1110 = 245585717075063LLU;
	uint16_t x1111 = 20441U;
	static volatile uint16_t x1112 = 19U;
	int32_t t30 = -21626775;

	t30 = (((x1109%x1110)<x1111)>>x1112);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1129 = 0;
	int8_t x1130 = 1;
	static int16_t x1131 = 1912;
	uint8_t x1132 = 29U;
	int32_t t31 = 1319971;

	t31 = (((x1129%x1130)<x1131)>>x1132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x1133 = INT32_MIN;
	int8_t x1134 = INT8_MIN;
	int32_t x1135 = INT32_MIN;
	int8_t x1136 = 22;

	t32 = (((x1133%x1134)<x1135)>>x1136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1181 = -1;
	int64_t x1182 = -1LL;
	int8_t x1183 = 1;
	static volatile int64_t x1184 = 7LL;
	static int32_t t33 = -115965;

	t33 = (((x1181%x1182)<x1183)>>x1184);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x1225 = UINT8_MAX;
	uint16_t x1227 = 122U;
	uint16_t x1228 = 0U;
	static int32_t t34 = -505;

	t34 = (((x1225%x1226)<x1227)>>x1228);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1301 = UINT64_MAX;
	int64_t x1302 = -9457LL;
	volatile int64_t x1303 = -1691LL;
	int32_t t35 = -3806605;

	t35 = (((x1301%x1302)<x1303)>>x1304);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1321 = 1;
	uint16_t x1322 = UINT16_MAX;
	static int8_t x1324 = 4;
	volatile int32_t t36 = -4225;

	t36 = (((x1321%x1322)<x1323)>>x1324);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1355 = INT16_MIN;
	int16_t x1356 = 16;
	int32_t t37 = -58671;

	t37 = (((x1353%x1354)<x1355)>>x1356);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1373 = -1;
	volatile uint16_t x1374 = 58U;
	static volatile int64_t x1376 = 11LL;
	static volatile int32_t t38 = -61103069;

	t38 = (((x1373%x1374)<x1375)>>x1376);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1377 = INT16_MIN;
	int32_t x1378 = INT32_MIN;
	uint64_t x1379 = 91LLU;
	volatile int32_t t39 = 927100;

	t39 = (((x1377%x1378)<x1379)>>x1380);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1393 = INT8_MIN;
	int16_t x1394 = -1;
	volatile int32_t t40 = 55;

	t40 = (((x1393%x1394)<x1395)>>x1396);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x1421 = UINT16_MAX;
	uint16_t x1423 = 0U;
	static volatile int32_t t41 = -582109;

	t41 = (((x1421%x1422)<x1423)>>x1424);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x1425 = INT64_MAX;
	int64_t x1426 = INT64_MAX;
	uint32_t x1427 = 20053U;
	int8_t x1428 = 26;
	volatile int32_t t42 = 415749;

	t42 = (((x1425%x1426)<x1427)>>x1428);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1445 = 1;
	volatile int64_t x1446 = INT64_MIN;
	uint8_t x1448 = 13U;
	int32_t t43 = -228317;

	t43 = (((x1445%x1446)<x1447)>>x1448);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x1461 = 3;
	int16_t x1462 = INT16_MAX;
	int16_t x1463 = -83;
	uint16_t x1464 = 1U;
	int32_t t44 = 39510;

	t44 = (((x1461%x1462)<x1463)>>x1464);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x1469 = UINT16_MAX;
	uint32_t x1471 = UINT32_MAX;
	volatile int8_t x1472 = 5;
	volatile int32_t t45 = -8442037;

	t45 = (((x1469%x1470)<x1471)>>x1472);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x1489 = 60240647LLU;
	uint8_t x1490 = 112U;
	static int64_t x1491 = INT64_MIN;
	uint8_t x1492 = 2U;
	volatile int32_t t46 = 23;

	t46 = (((x1489%x1490)<x1491)>>x1492);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x1513 = -1;
	uint16_t x1514 = 298U;
	static uint8_t x1516 = 0U;
	int32_t t47 = -229872877;

	t47 = (((x1513%x1514)<x1515)>>x1516);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1529 = -179255745;
	int32_t x1530 = INT32_MIN;
	int16_t x1531 = INT16_MIN;
	int16_t x1532 = 1;

	t48 = (((x1529%x1530)<x1531)>>x1532);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x1569 = 1;
	int16_t x1570 = 1;
	static int64_t x1571 = -1LL;
	uint32_t x1572 = 19U;
	static volatile int32_t t49 = 83607;

	t49 = (((x1569%x1570)<x1571)>>x1572);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1602 = INT16_MIN;
	int8_t x1603 = INT8_MIN;
	uint8_t x1604 = 2U;
	int32_t t50 = -2039;

	t50 = (((x1601%x1602)<x1603)>>x1604);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x1653 = UINT8_MAX;
	static uint64_t x1654 = 3LLU;
	static uint8_t x1656 = 24U;
	volatile int32_t t51 = -343071911;

	t51 = (((x1653%x1654)<x1655)>>x1656);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x1706 = 18213514917768808LLU;
	volatile int16_t x1707 = INT16_MIN;
	int8_t x1708 = 6;

	t52 = (((x1705%x1706)<x1707)>>x1708);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x1713 = 2U;
	int16_t x1714 = 5910;
	int64_t x1715 = -1806837546024318LL;
	static int32_t x1716 = 1;
	volatile int32_t t53 = 5244473;

	t53 = (((x1713%x1714)<x1715)>>x1716);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x1813 = UINT16_MAX;
	volatile uint8_t x1814 = 6U;
	volatile int16_t x1815 = 16;
	volatile uint16_t x1816 = 0U;
	volatile int32_t t54 = -1;

	t54 = (((x1813%x1814)<x1815)>>x1816);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x1893 = INT16_MIN;
	volatile uint64_t x1894 = UINT64_MAX;
	int16_t x1895 = INT16_MAX;
	volatile int16_t x1896 = 0;
	volatile int32_t t55 = -15840;

	t55 = (((x1893%x1894)<x1895)>>x1896);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1901 = 1;
	int8_t x1903 = 7;
	int16_t x1904 = 4;
	static volatile int32_t t56 = 16096845;

	t56 = (((x1901%x1902)<x1903)>>x1904);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x1934 = INT8_MIN;
	static int8_t x1935 = -5;
	volatile int32_t x1936 = 0;
	int32_t t57 = 295641;

	t57 = (((x1933%x1934)<x1935)>>x1936);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x1949 = INT16_MIN;
	int64_t x1950 = INT64_MIN;
	uint16_t x1951 = UINT16_MAX;
	uint8_t x1952 = 15U;
	static int32_t t58 = 1;

	t58 = (((x1949%x1950)<x1951)>>x1952);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x1997 = INT16_MAX;
	uint16_t x1998 = 50U;
	uint64_t x1999 = 1760LLU;
	int32_t t59 = -2;

	t59 = (((x1997%x1998)<x1999)>>x2000);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x2009 = -1;
	int32_t x2010 = INT32_MAX;
	int32_t x2011 = -38103;
	int8_t x2012 = 0;
	int32_t t60 = 2247;

	t60 = (((x2009%x2010)<x2011)>>x2012);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x2049 = 0;
	uint32_t x2050 = 6786845U;
	uint32_t x2051 = UINT32_MAX;
	uint16_t x2052 = 7U;
	volatile int32_t t61 = -33244320;

	t61 = (((x2049%x2050)<x2051)>>x2052);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x2085 = 11962568664LLU;
	int64_t x2087 = -1LL;
	int16_t x2088 = 0;
	static int32_t t62 = -2;

	t62 = (((x2085%x2086)<x2087)>>x2088);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x2093 = INT8_MIN;
	static uint8_t x2095 = UINT8_MAX;
	static int32_t t63 = 29846;

	t63 = (((x2093%x2094)<x2095)>>x2096);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x2117 = 7929202874LL;
	int32_t x2118 = INT32_MAX;
	int16_t x2119 = INT16_MAX;
	uint8_t x2120 = 2U;
	volatile int32_t t64 = 163;

	t64 = (((x2117%x2118)<x2119)>>x2120);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x2121 = 177U;
	uint32_t x2122 = UINT32_MAX;
	int32_t x2123 = INT32_MIN;
	uint8_t x2124 = 5U;
	volatile int32_t t65 = -5;

	t65 = (((x2121%x2122)<x2123)>>x2124);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x2133 = INT8_MAX;
	int32_t t66 = 1;

	t66 = (((x2133%x2134)<x2135)>>x2136);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2145 = INT8_MIN;
	int16_t x2147 = -1;
	int16_t x2148 = 11;
	int32_t t67 = -959300776;

	t67 = (((x2145%x2146)<x2147)>>x2148);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x2173 = INT64_MAX;
	uint16_t x2174 = 3U;
	int32_t x2175 = INT32_MIN;
	uint8_t x2176 = 1U;
	int32_t t68 = 4743;

	t68 = (((x2173%x2174)<x2175)>>x2176);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x2177 = -1LL;
	uint8_t x2179 = 1U;
	volatile uint16_t x2180 = 3U;
	volatile int32_t t69 = -36466963;

	t69 = (((x2177%x2178)<x2179)>>x2180);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x2181 = 9;
	static int16_t x2183 = 1;
	volatile int8_t x2184 = 21;
	int32_t t70 = 31;

	t70 = (((x2181%x2182)<x2183)>>x2184);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x2237 = 11U;
	int8_t x2238 = 28;
	volatile uint16_t x2239 = 1371U;
	volatile int16_t x2240 = 1;

	t71 = (((x2237%x2238)<x2239)>>x2240);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x2249 = -930;
	uint16_t x2252 = 0U;
	int32_t t72 = -222;

	t72 = (((x2249%x2250)<x2251)>>x2252);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x2261 = 5;
	uint64_t x2263 = 11LLU;
	int32_t t73 = -258137022;

	t73 = (((x2261%x2262)<x2263)>>x2264);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x2305 = 234U;
	volatile int32_t x2306 = -3324;
	uint64_t x2307 = 1311888167LLU;
	volatile int8_t x2308 = 2;
	volatile int32_t t74 = -14221754;

	t74 = (((x2305%x2306)<x2307)>>x2308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x2374 = INT8_MAX;
	uint8_t x2376 = 7U;
	volatile int32_t t75 = -162132027;

	t75 = (((x2373%x2374)<x2375)>>x2376);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x2377 = INT8_MIN;
	int32_t x2378 = INT32_MIN;
	int16_t x2379 = INT16_MAX;
	static uint8_t x2380 = 2U;
	int32_t t76 = 12686;

	t76 = (((x2377%x2378)<x2379)>>x2380);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint64_t x2493 = 2LLU;
	int64_t x2494 = -1606LL;
	uint16_t x2495 = 3U;
	uint32_t x2496 = 31U;
	int32_t t77 = 393926795;

	t77 = (((x2493%x2494)<x2495)>>x2496);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x2505 = UINT32_MAX;
	static int64_t x2506 = -1LL;
	uint16_t x2507 = 15525U;
	uint8_t x2508 = 26U;
	static int32_t t78 = 5;

	t78 = (((x2505%x2506)<x2507)>>x2508);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x2519 = UINT16_MAX;
	int8_t x2520 = 1;
	static int32_t t79 = 0;

	t79 = (((x2517%x2518)<x2519)>>x2520);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x2521 = -55;
	int16_t x2522 = -1;
	volatile int8_t x2523 = INT8_MIN;
	int32_t t80 = -7926;

	t80 = (((x2521%x2522)<x2523)>>x2524);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x2545 = UINT8_MAX;
	static int64_t x2546 = -41905390252LL;
	int64_t x2547 = -1LL;
	static uint16_t x2548 = 3U;

	t81 = (((x2545%x2546)<x2547)>>x2548);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x2585 = UINT16_MAX;
	volatile uint32_t x2586 = 29913U;
	int32_t t82 = 595816;

	t82 = (((x2585%x2586)<x2587)>>x2588);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x2677 = INT16_MIN;
	uint8_t x2678 = 1U;
	uint16_t x2680 = 1U;
	static int32_t t83 = -13;

	t83 = (((x2677%x2678)<x2679)>>x2680);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x2737 = INT16_MAX;
	static volatile int8_t x2738 = -32;
	static int32_t x2739 = -25;
	uint8_t x2740 = 1U;
	int32_t t84 = -1443;

	t84 = (((x2737%x2738)<x2739)>>x2740);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x2741 = -226956LL;
	int64_t x2743 = INT64_MIN;
	volatile int8_t x2744 = 0;
	volatile int32_t t85 = 4470;

	t85 = (((x2741%x2742)<x2743)>>x2744);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x2761 = -1LL;
	int16_t x2762 = INT16_MIN;
	static volatile int16_t x2763 = INT16_MAX;
	uint8_t x2764 = 8U;
	volatile int32_t t86 = 496;

	t86 = (((x2761%x2762)<x2763)>>x2764);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x2769 = UINT32_MAX;
	volatile int8_t x2770 = 59;
	static uint8_t x2771 = 0U;
	volatile uint16_t x2772 = 2U;
	int32_t t87 = -1550863;

	t87 = (((x2769%x2770)<x2771)>>x2772);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x2789 = 1;
	static int16_t x2790 = INT16_MIN;
	uint16_t x2791 = 481U;
	int8_t x2792 = 3;
	int32_t t88 = -2471;

	t88 = (((x2789%x2790)<x2791)>>x2792);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x2881 = INT64_MAX;
	uint32_t x2883 = UINT32_MAX;
	uint16_t x2884 = 26U;

	t89 = (((x2881%x2882)<x2883)>>x2884);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x2965 = 1024528877074881LLU;
	static int16_t x2966 = INT16_MIN;
	uint8_t x2968 = 2U;
	int32_t t90 = 0;

	t90 = (((x2965%x2966)<x2967)>>x2968);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x2985 = 3921502LL;
	static uint8_t x2987 = 23U;
	volatile int32_t t91 = 73385;

	t91 = (((x2985%x2986)<x2987)>>x2988);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x3006 = INT8_MIN;
	uint32_t x3008 = 3U;
	volatile int32_t t92 = 454060;

	t92 = (((x3005%x3006)<x3007)>>x3008);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x3009 = -1;
	int16_t x3010 = INT16_MAX;
	int16_t x3011 = INT16_MAX;
	int8_t x3012 = 21;
	int32_t t93 = -35781890;

	t93 = (((x3009%x3010)<x3011)>>x3012);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x3017 = 395U;
	int32_t x3018 = 369;
	static uint8_t x3020 = 2U;
	volatile int32_t t94 = 63686;

	t94 = (((x3017%x3018)<x3019)>>x3020);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x3053 = 1422739054050404728LLU;
	volatile uint64_t x3054 = 180710490LLU;
	uint64_t x3055 = UINT64_MAX;

	t95 = (((x3053%x3054)<x3055)>>x3056);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x3081 = -23;
	volatile int64_t x3082 = 7234146943704077LL;
	int8_t x3083 = INT8_MIN;
	uint16_t x3084 = 11U;
	volatile int32_t t96 = 643344984;

	t96 = (((x3081%x3082)<x3083)>>x3084);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x3089 = INT64_MAX;
	static uint8_t x3090 = UINT8_MAX;
	uint8_t x3091 = 58U;
	static volatile int8_t x3092 = 0;
	static volatile int32_t t97 = 153;

	t97 = (((x3089%x3090)<x3091)>>x3092);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x3121 = 0U;
	int64_t x3122 = INT64_MAX;
	static uint64_t x3123 = 1322394069047LLU;
	volatile uint16_t x3124 = 2U;
	int32_t t98 = 5;

	t98 = (((x3121%x3122)<x3123)>>x3124);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x3129 = -1;
	int64_t x3130 = INT64_MAX;
	volatile int8_t x3132 = 1;
	volatile int32_t t99 = 8;

	t99 = (((x3129%x3130)<x3131)>>x3132);

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

