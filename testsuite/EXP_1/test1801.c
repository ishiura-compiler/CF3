#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x25 = -1;
int8_t x26 = INT8_MAX;
uint32_t x29 = 4U;
int8_t x30 = -7;
static uint8_t x32 = 31U;
volatile int32_t x41 = INT32_MIN;
uint8_t x120 = 16U;
int32_t x160 = 2;
volatile int32_t t5 = 242341801;
volatile int32_t x189 = -1530773;
volatile int32_t x214 = INT32_MIN;
uint16_t x297 = UINT16_MAX;
int8_t x388 = 13;
int8_t x528 = 9;
int32_t t14 = 2;
int32_t x658 = -1;
int32_t t17 = -84150;
uint32_t x730 = UINT32_MAX;
int32_t x731 = -43319548;
int32_t x813 = INT32_MIN;
static uint16_t x834 = 13U;
volatile uint8_t x852 = 0U;
volatile int32_t t23 = 10992421;
uint32_t x922 = UINT32_MAX;
uint32_t x997 = 1523231039U;
uint16_t x998 = 22U;
volatile int32_t t28 = 187989;
uint8_t x1054 = UINT8_MAX;
static uint8_t x1056 = 0U;
static int64_t x1089 = -1LL;
volatile int8_t x1112 = 1;
int32_t t33 = -18085;
int64_t x1161 = -82LL;
int32_t t35 = -127763063;
static int16_t x1197 = INT16_MIN;
uint8_t x1200 = 0U;
static int64_t x1206 = -1LL;
static uint16_t x1240 = 10U;
uint8_t x1258 = 1U;
volatile int32_t t39 = 2;
int32_t x1317 = INT32_MAX;
volatile int16_t x1331 = INT16_MIN;
int8_t x1344 = 1;
int8_t x1365 = -1;
int16_t x1368 = 14;
static int32_t t44 = 128831862;
int32_t t45 = -1;
static int16_t x1409 = INT16_MAX;
uint64_t x1425 = UINT64_MAX;
int16_t x1429 = -108;
uint16_t x1457 = 1U;
volatile int64_t x1458 = 4134525235190030799LL;
static int16_t x1459 = INT16_MAX;
volatile int16_t x1487 = -4;
uint8_t x1488 = 2U;
int16_t x1562 = INT16_MIN;
volatile int32_t t53 = -7204780;
volatile int32_t x1586 = INT32_MIN;
int16_t x1588 = 0;
uint32_t x1653 = 22U;
int64_t x1655 = INT64_MAX;
volatile int8_t x1764 = 6;
int32_t t58 = 0;
static uint64_t x1801 = 171LLU;
uint8_t x1847 = 5U;
uint8_t x1852 = 26U;
static volatile int32_t t64 = -7887;
volatile uint16_t x1915 = UINT16_MAX;
static volatile int32_t x1989 = -1;
static volatile int64_t x2035 = INT64_MIN;
int32_t t73 = -8113;
int32_t x2180 = 1;
static uint8_t x2201 = 14U;
int64_t x2225 = INT64_MIN;
static int64_t x2242 = INT64_MIN;
volatile int32_t t78 = 5;
uint8_t x2256 = 4U;
static int32_t x2286 = 113243;
static int32_t t80 = -10516;
uint16_t x2304 = 2U;
static int32_t t82 = -9002422;
int64_t x2361 = INT64_MIN;
volatile int32_t t84 = -33429273;
uint32_t x2384 = 25U;
int32_t x2421 = -215279;
static int8_t x2423 = INT8_MAX;
uint32_t x2442 = 14U;
static int32_t t88 = 209608;
volatile int64_t x2557 = INT64_MIN;
uint8_t x2641 = 0U;
static uint32_t x2678 = 306336U;
int8_t x2680 = 0;
int32_t t95 = 401568405;
int8_t x2689 = -26;
int32_t t96 = 13;
volatile int16_t x2762 = -9;
static uint16_t x2812 = 3U;
static volatile int32_t t99 = -6;


void f0(void) {
	uint16_t x27 = 0U;
	volatile int16_t x28 = 19;
	static volatile int32_t t0 = -65842;

	t0 = (((x25&x26)<x27)>>x28);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x31 = 15U;
	static int32_t t1 = 98114;

	t1 = (((x29&x30)<x31)>>x32);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x42 = -1;
	static volatile int8_t x43 = -1;
	static volatile uint32_t x44 = 0U;
	volatile int32_t t2 = -4;

	t2 = (((x41&x42)<x43)>>x44);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x113 = 437842748U;
	int8_t x114 = INT8_MIN;
	int32_t x115 = INT32_MIN;
	static uint8_t x116 = 12U;
	int32_t t3 = -10250;

	t3 = (((x113&x114)<x115)>>x116);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x117 = 1;
	uint64_t x118 = UINT64_MAX;
	int64_t x119 = -1LL;
	volatile int32_t t4 = 200;

	t4 = (((x117&x118)<x119)>>x120);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x157 = INT16_MAX;
	uint64_t x158 = UINT64_MAX;
	int64_t x159 = INT64_MAX;

	t5 = (((x157&x158)<x159)>>x160);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x190 = 63504U;
	int64_t x191 = 126694786494156126LL;
	int8_t x192 = 6;
	int32_t t6 = -4224;

	t6 = (((x189&x190)<x191)>>x192);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x213 = 0;
	int8_t x215 = 1;
	uint16_t x216 = 0U;
	volatile int32_t t7 = -406932;

	t7 = (((x213&x214)<x215)>>x216);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x225 = 1LLU;
	int8_t x226 = 41;
	int8_t x227 = INT8_MIN;
	uint16_t x228 = 3U;
	volatile int32_t t8 = -117389871;

	t8 = (((x225&x226)<x227)>>x228);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x298 = 6508837160LL;
	uint32_t x299 = 30U;
	int16_t x300 = 17;
	static volatile int32_t t9 = -122;

	t9 = (((x297&x298)<x299)>>x300);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x373 = UINT8_MAX;
	int16_t x374 = INT16_MIN;
	uint16_t x375 = 3U;
	static uint64_t x376 = 13LLU;
	int32_t t10 = 16059050;

	t10 = (((x373&x374)<x375)>>x376);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x385 = INT32_MIN;
	volatile uint8_t x386 = 0U;
	int64_t x387 = INT64_MIN;
	static int32_t t11 = 321374270;

	t11 = (((x385&x386)<x387)>>x388);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x397 = 7U;
	uint8_t x398 = 127U;
	uint8_t x399 = 24U;
	static int8_t x400 = 1;
	volatile int32_t t12 = 18741208;

	t12 = (((x397&x398)<x399)>>x400);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x405 = 13U;
	int32_t x406 = -310;
	int32_t x407 = -32128;
	static uint8_t x408 = 23U;
	volatile int32_t t13 = -3625088;

	t13 = (((x405&x406)<x407)>>x408);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x525 = 45434364882102LLU;
	int64_t x526 = INT64_MAX;
	volatile int32_t x527 = -1;

	t14 = (((x525&x526)<x527)>>x528);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x649 = 2U;
	uint8_t x650 = UINT8_MAX;
	uint64_t x651 = 264573243LLU;
	int16_t x652 = 21;
	volatile int32_t t15 = 943;

	t15 = (((x649&x650)<x651)>>x652);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x657 = INT32_MIN;
	int64_t x659 = -1LL;
	uint8_t x660 = 0U;
	volatile int32_t t16 = 340207491;

	t16 = (((x657&x658)<x659)>>x660);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x685 = -1;
	volatile uint32_t x686 = UINT32_MAX;
	int32_t x687 = INT32_MIN;
	int8_t x688 = 2;

	t17 = (((x685&x686)<x687)>>x688);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x689 = INT8_MIN;
	volatile uint64_t x690 = 1336151LLU;
	int16_t x691 = INT16_MIN;
	uint32_t x692 = 6U;
	int32_t t18 = -62291;

	t18 = (((x689&x690)<x691)>>x692);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x721 = 0;
	int64_t x722 = INT64_MIN;
	volatile int16_t x723 = 1;
	int8_t x724 = 19;
	volatile int32_t t19 = 939444354;

	t19 = (((x721&x722)<x723)>>x724);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x729 = 2U;
	uint8_t x732 = 3U;
	volatile int32_t t20 = 224944;

	t20 = (((x729&x730)<x731)>>x732);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x814 = 7;
	uint64_t x815 = UINT64_MAX;
	uint8_t x816 = 1U;
	int32_t t21 = 67581308;

	t21 = (((x813&x814)<x815)>>x816);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x833 = INT32_MIN;
	uint8_t x835 = 77U;
	volatile uint8_t x836 = 19U;
	int32_t t22 = -1;

	t22 = (((x833&x834)<x835)>>x836);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x849 = 787808LLU;
	uint8_t x850 = 24U;
	volatile int64_t x851 = -1LL;

	t23 = (((x849&x850)<x851)>>x852);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x877 = -8857443LL;
	volatile uint32_t x878 = 1814889097U;
	int64_t x879 = 437084591766735LL;
	static uint16_t x880 = 1U;
	volatile int32_t t24 = -112762;

	t24 = (((x877&x878)<x879)>>x880);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x921 = INT64_MIN;
	int16_t x923 = 50;
	static uint16_t x924 = 8U;
	volatile int32_t t25 = 3082090;

	t25 = (((x921&x922)<x923)>>x924);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x973 = 110799U;
	static int16_t x974 = INT16_MIN;
	int8_t x975 = INT8_MIN;
	uint8_t x976 = 0U;
	int32_t t26 = 9;

	t26 = (((x973&x974)<x975)>>x976);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x981 = INT16_MIN;
	static volatile int16_t x982 = -1;
	static int16_t x983 = INT16_MIN;
	int8_t x984 = 0;
	static volatile int32_t t27 = -1680563;

	t27 = (((x981&x982)<x983)>>x984);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x999 = INT8_MIN;
	uint16_t x1000 = 1U;

	t28 = (((x997&x998)<x999)>>x1000);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x1017 = -491430307LL;
	int32_t x1018 = 247800460;
	uint32_t x1019 = 93U;
	uint32_t x1020 = 1U;
	volatile int32_t t29 = 142;

	t29 = (((x1017&x1018)<x1019)>>x1020);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1053 = INT32_MIN;
	static int16_t x1055 = INT16_MAX;
	volatile int32_t t30 = 79614630;

	t30 = (((x1053&x1054)<x1055)>>x1056);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1069 = INT8_MIN;
	uint32_t x1070 = UINT32_MAX;
	int8_t x1071 = INT8_MIN;
	int8_t x1072 = 1;
	volatile int32_t t31 = -123;

	t31 = (((x1069&x1070)<x1071)>>x1072);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1090 = INT8_MIN;
	static uint8_t x1091 = UINT8_MAX;
	volatile int16_t x1092 = 3;
	int32_t t32 = -124;

	t32 = (((x1089&x1090)<x1091)>>x1092);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1109 = INT16_MIN;
	static int64_t x1110 = 1351988695854366LL;
	uint64_t x1111 = 669123363038928LLU;

	t33 = (((x1109&x1110)<x1111)>>x1112);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1125 = INT32_MAX;
	int64_t x1126 = INT64_MAX;
	uint32_t x1127 = 510111752U;
	int32_t x1128 = 10;
	volatile int32_t t34 = 859;

	t34 = (((x1125&x1126)<x1127)>>x1128);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1162 = INT16_MAX;
	volatile int16_t x1163 = 155;
	uint8_t x1164 = 0U;

	t35 = (((x1161&x1162)<x1163)>>x1164);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x1198 = INT8_MIN;
	uint64_t x1199 = 17302294608LLU;
	int32_t t36 = 3894159;

	t36 = (((x1197&x1198)<x1199)>>x1200);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x1205 = INT16_MIN;
	static volatile int32_t x1207 = -1;
	uint8_t x1208 = 1U;
	volatile int32_t t37 = -62;

	t37 = (((x1205&x1206)<x1207)>>x1208);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1237 = -32380058038LL;
	static uint16_t x1238 = 933U;
	int16_t x1239 = INT16_MIN;
	volatile int32_t t38 = -339008082;

	t38 = (((x1237&x1238)<x1239)>>x1240);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1257 = INT64_MIN;
	int32_t x1259 = INT32_MIN;
	uint16_t x1260 = 2U;

	t39 = (((x1257&x1258)<x1259)>>x1260);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1318 = 34LLU;
	int64_t x1319 = -99790936534LL;
	volatile int8_t x1320 = 4;
	volatile int32_t t40 = 3245206;

	t40 = (((x1317&x1318)<x1319)>>x1320);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x1321 = -20359LL;
	int32_t x1322 = -1;
	volatile int8_t x1323 = INT8_MAX;
	uint16_t x1324 = 26U;
	static volatile int32_t t41 = 890;

	t41 = (((x1321&x1322)<x1323)>>x1324);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x1329 = 2065643;
	volatile int32_t x1330 = 24;
	static uint8_t x1332 = 1U;
	int32_t t42 = -5023095;

	t42 = (((x1329&x1330)<x1331)>>x1332);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1341 = INT8_MAX;
	static int64_t x1342 = INT64_MAX;
	static volatile int64_t x1343 = INT64_MIN;
	volatile int32_t t43 = 2;

	t43 = (((x1341&x1342)<x1343)>>x1344);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1366 = -1;
	uint16_t x1367 = 3U;

	t44 = (((x1365&x1366)<x1367)>>x1368);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x1369 = INT32_MAX;
	int64_t x1370 = INT64_MIN;
	int8_t x1371 = 24;
	uint8_t x1372 = 1U;

	t45 = (((x1369&x1370)<x1371)>>x1372);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x1410 = 5420239675613585LL;
	int8_t x1411 = INT8_MAX;
	uint8_t x1412 = 31U;
	volatile int32_t t46 = 2;

	t46 = (((x1409&x1410)<x1411)>>x1412);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1426 = INT16_MIN;
	int16_t x1427 = INT16_MIN;
	int8_t x1428 = 24;
	static int32_t t47 = 11655575;

	t47 = (((x1425&x1426)<x1427)>>x1428);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1430 = INT64_MAX;
	static uint32_t x1431 = 1611U;
	static uint8_t x1432 = 1U;
	int32_t t48 = -404;

	t48 = (((x1429&x1430)<x1431)>>x1432);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x1460 = 11U;
	static volatile int32_t t49 = -76418593;

	t49 = (((x1457&x1458)<x1459)>>x1460);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x1485 = INT64_MIN;
	int8_t x1486 = -1;
	volatile int32_t t50 = 4123;

	t50 = (((x1485&x1486)<x1487)>>x1488);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x1501 = 590U;
	int32_t x1502 = INT32_MAX;
	int8_t x1503 = INT8_MIN;
	uint16_t x1504 = 9U;
	volatile int32_t t51 = 864;

	t51 = (((x1501&x1502)<x1503)>>x1504);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x1537 = INT16_MIN;
	uint32_t x1538 = UINT32_MAX;
	int32_t x1539 = INT32_MAX;
	int32_t x1540 = 0;
	volatile int32_t t52 = -22152;

	t52 = (((x1537&x1538)<x1539)>>x1540);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x1561 = -1;
	volatile int32_t x1563 = INT32_MIN;
	int8_t x1564 = 9;

	t53 = (((x1561&x1562)<x1563)>>x1564);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x1585 = 102;
	volatile int32_t x1587 = INT32_MIN;
	int32_t t54 = -4997089;

	t54 = (((x1585&x1586)<x1587)>>x1588);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x1654 = UINT8_MAX;
	uint8_t x1656 = 13U;
	volatile int32_t t55 = -1;

	t55 = (((x1653&x1654)<x1655)>>x1656);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x1669 = 1;
	int32_t x1670 = -1;
	uint32_t x1671 = UINT32_MAX;
	int8_t x1672 = 1;
	int32_t t56 = -30;

	t56 = (((x1669&x1670)<x1671)>>x1672);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x1709 = INT8_MAX;
	static int64_t x1710 = INT64_MIN;
	int64_t x1711 = INT64_MIN;
	int8_t x1712 = 1;
	int32_t t57 = -14922224;

	t57 = (((x1709&x1710)<x1711)>>x1712);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x1761 = 3993895513LL;
	volatile uint16_t x1762 = 30775U;
	volatile int64_t x1763 = INT64_MAX;

	t58 = (((x1761&x1762)<x1763)>>x1764);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x1765 = INT16_MIN;
	int16_t x1766 = -380;
	int64_t x1767 = INT64_MIN;
	uint8_t x1768 = 1U;
	volatile int32_t t59 = 58612631;

	t59 = (((x1765&x1766)<x1767)>>x1768);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x1802 = UINT64_MAX;
	int16_t x1803 = INT16_MAX;
	int8_t x1804 = 11;
	volatile int32_t t60 = 426;

	t60 = (((x1801&x1802)<x1803)>>x1804);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x1821 = UINT32_MAX;
	uint64_t x1822 = 769928110485LLU;
	int16_t x1823 = 5;
	volatile uint8_t x1824 = 1U;
	static volatile int32_t t61 = -735274;

	t61 = (((x1821&x1822)<x1823)>>x1824);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x1845 = -1;
	uint8_t x1846 = 1U;
	static int32_t x1848 = 0;
	static int32_t t62 = -12;

	t62 = (((x1845&x1846)<x1847)>>x1848);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x1849 = INT32_MAX;
	uint64_t x1850 = 33116286LLU;
	int8_t x1851 = INT8_MAX;
	volatile int32_t t63 = -11;

	t63 = (((x1849&x1850)<x1851)>>x1852);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x1885 = UINT32_MAX;
	volatile uint32_t x1886 = 151896578U;
	int32_t x1887 = 410;
	uint8_t x1888 = 3U;

	t64 = (((x1885&x1886)<x1887)>>x1888);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x1889 = -1007621092;
	int16_t x1890 = -1;
	volatile uint64_t x1891 = 10417LLU;
	uint8_t x1892 = 0U;
	static int32_t t65 = -187;

	t65 = (((x1889&x1890)<x1891)>>x1892);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x1913 = INT32_MIN;
	static int8_t x1914 = -1;
	volatile uint8_t x1916 = 1U;
	volatile int32_t t66 = 1166;

	t66 = (((x1913&x1914)<x1915)>>x1916);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x1977 = 4U;
	int64_t x1978 = -112004244526328379LL;
	int16_t x1979 = INT16_MIN;
	uint8_t x1980 = 26U;
	int32_t t67 = 2399;

	t67 = (((x1977&x1978)<x1979)>>x1980);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x1990 = -12074;
	int32_t x1991 = INT32_MIN;
	static uint8_t x1992 = 2U;
	static volatile int32_t t68 = -7937;

	t68 = (((x1989&x1990)<x1991)>>x1992);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x2001 = INT32_MAX;
	uint32_t x2002 = 3594507U;
	uint8_t x2003 = 62U;
	uint8_t x2004 = 3U;
	volatile int32_t t69 = -612669;

	t69 = (((x2001&x2002)<x2003)>>x2004);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x2033 = 71002842385047725LLU;
	static int16_t x2034 = INT16_MIN;
	static int8_t x2036 = 0;
	int32_t t70 = -183675;

	t70 = (((x2033&x2034)<x2035)>>x2036);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x2089 = INT32_MAX;
	uint64_t x2090 = 33LLU;
	int32_t x2091 = INT32_MIN;
	uint8_t x2092 = 0U;
	int32_t t71 = -764773;

	t71 = (((x2089&x2090)<x2091)>>x2092);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x2133 = 0U;
	uint8_t x2134 = 10U;
	volatile uint16_t x2135 = UINT16_MAX;
	uint8_t x2136 = 9U;
	volatile int32_t t72 = -6303327;

	t72 = (((x2133&x2134)<x2135)>>x2136);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x2161 = 965345816303990109LL;
	int64_t x2162 = 50LL;
	int32_t x2163 = INT32_MIN;
	uint16_t x2164 = 4U;

	t73 = (((x2161&x2162)<x2163)>>x2164);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x2177 = INT8_MAX;
	int16_t x2178 = -5404;
	static int64_t x2179 = 807803273534313359LL;
	static int32_t t74 = -790878;

	t74 = (((x2177&x2178)<x2179)>>x2180);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x2202 = 350U;
	int8_t x2203 = INT8_MAX;
	static int8_t x2204 = 0;
	static volatile int32_t t75 = 62;

	t75 = (((x2201&x2202)<x2203)>>x2204);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x2226 = 276U;
	int32_t x2227 = 3909445;
	static uint8_t x2228 = 6U;
	static volatile int32_t t76 = 28;

	t76 = (((x2225&x2226)<x2227)>>x2228);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x2241 = INT32_MAX;
	int32_t x2243 = INT32_MIN;
	uint8_t x2244 = 0U;
	int32_t t77 = 23;

	t77 = (((x2241&x2242)<x2243)>>x2244);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x2249 = 12;
	int64_t x2250 = INT64_MIN;
	int64_t x2251 = INT64_MAX;
	int32_t x2252 = 5;

	t78 = (((x2249&x2250)<x2251)>>x2252);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x2253 = 51U;
	volatile uint16_t x2254 = 32510U;
	int32_t x2255 = INT32_MIN;
	int32_t t79 = -5246192;

	t79 = (((x2253&x2254)<x2255)>>x2256);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x2285 = 2U;
	int16_t x2287 = INT16_MAX;
	uint8_t x2288 = 7U;

	t80 = (((x2285&x2286)<x2287)>>x2288);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x2301 = INT8_MAX;
	uint16_t x2302 = UINT16_MAX;
	static int16_t x2303 = -4;
	int32_t t81 = 51423;

	t81 = (((x2301&x2302)<x2303)>>x2304);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x2341 = INT16_MIN;
	int32_t x2342 = -1;
	static volatile int16_t x2343 = -1;
	int16_t x2344 = 12;

	t82 = (((x2341&x2342)<x2343)>>x2344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x2353 = 1LLU;
	static int64_t x2354 = -1LL;
	int32_t x2355 = INT32_MAX;
	volatile uint8_t x2356 = 1U;
	static int32_t t83 = -7325624;

	t83 = (((x2353&x2354)<x2355)>>x2356);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x2362 = 1LLU;
	int8_t x2363 = 14;
	uint16_t x2364 = 1U;

	t84 = (((x2361&x2362)<x2363)>>x2364);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x2381 = 84747533;
	int64_t x2382 = INT64_MIN;
	int8_t x2383 = -49;
	int32_t t85 = -9156;

	t85 = (((x2381&x2382)<x2383)>>x2384);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x2422 = INT64_MIN;
	uint8_t x2424 = 3U;
	static int32_t t86 = 13077;

	t86 = (((x2421&x2422)<x2423)>>x2424);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x2429 = INT8_MIN;
	uint64_t x2430 = 1093229770552847250LLU;
	int64_t x2431 = -1LL;
	uint8_t x2432 = 24U;
	int32_t t87 = -1084;

	t87 = (((x2429&x2430)<x2431)>>x2432);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x2441 = -1;
	int32_t x2443 = INT32_MIN;
	int16_t x2444 = 0;

	t88 = (((x2441&x2442)<x2443)>>x2444);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x2453 = -1;
	int16_t x2454 = -1;
	int16_t x2455 = INT16_MAX;
	int16_t x2456 = 0;
	volatile int32_t t89 = -4926;

	t89 = (((x2453&x2454)<x2455)>>x2456);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x2529 = INT32_MAX;
	int16_t x2530 = INT16_MIN;
	int32_t x2531 = INT32_MAX;
	int64_t x2532 = 1LL;
	int32_t t90 = 5829209;

	t90 = (((x2529&x2530)<x2531)>>x2532);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x2533 = INT32_MAX;
	int32_t x2534 = -1;
	static uint64_t x2535 = 139569029421388LLU;
	int8_t x2536 = 1;
	volatile int32_t t91 = -47;

	t91 = (((x2533&x2534)<x2535)>>x2536);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x2558 = -1930;
	int32_t x2559 = INT32_MIN;
	int64_t x2560 = 3LL;
	int32_t t92 = -2706;

	t92 = (((x2557&x2558)<x2559)>>x2560);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x2633 = -2424;
	static int32_t x2634 = -1;
	int16_t x2635 = -1;
	int16_t x2636 = 13;
	int32_t t93 = -1157;

	t93 = (((x2633&x2634)<x2635)>>x2636);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x2642 = 5U;
	int8_t x2643 = INT8_MAX;
	int8_t x2644 = 0;
	volatile int32_t t94 = -117166;

	t94 = (((x2641&x2642)<x2643)>>x2644);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x2677 = 238219;
	static int8_t x2679 = -1;

	t95 = (((x2677&x2678)<x2679)>>x2680);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x2690 = -1;
	int32_t x2691 = INT32_MIN;
	uint16_t x2692 = 9U;

	t96 = (((x2689&x2690)<x2691)>>x2692);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x2761 = INT16_MIN;
	int8_t x2763 = -6;
	static uint8_t x2764 = 0U;
	volatile int32_t t97 = 217688820;

	t97 = (((x2761&x2762)<x2763)>>x2764);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x2789 = 0U;
	static int16_t x2790 = INT16_MAX;
	uint32_t x2791 = 0U;
	static int64_t x2792 = 0LL;
	static int32_t t98 = -3170085;

	t98 = (((x2789&x2790)<x2791)>>x2792);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x2809 = INT32_MIN;
	volatile int32_t x2810 = INT32_MIN;
	volatile int64_t x2811 = INT64_MAX;

	t99 = (((x2809&x2810)<x2811)>>x2812);

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

