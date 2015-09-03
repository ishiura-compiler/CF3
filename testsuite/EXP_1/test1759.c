#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x11 = 3U;
static int8_t x59 = 11;
static int16_t x60 = 9;
static int64_t x88 = INT64_MIN;
static uint32_t t7 = 1U;
int64_t x329 = 1456378LL;
uint64_t x330 = 986290LLU;
int32_t x338 = INT32_MAX;
int64_t x339 = 34LL;
static int32_t x351 = 5;
int8_t x352 = INT8_MIN;
uint32_t x410 = 3161U;
uint64_t x436 = 163996422LLU;
int16_t x440 = INT16_MIN;
int32_t x466 = 0;
uint16_t x467 = 15U;
uint16_t x642 = UINT16_MAX;
static int64_t x674 = 58466213LL;
uint32_t x722 = UINT32_MAX;
uint8_t x729 = 6U;
int32_t t25 = 6;
int8_t x794 = INT8_MIN;
volatile uint16_t x807 = 0U;
volatile uint32_t t27 = 187U;
uint8_t x810 = UINT8_MAX;
static volatile int8_t x812 = INT8_MAX;
static int64_t t28 = -19410362617199LL;
uint32_t x813 = 9185U;
uint16_t x909 = 1U;
static uint32_t x921 = 97784915U;
int32_t x952 = INT32_MIN;
static int32_t t34 = 264813433;
volatile uint16_t x1081 = UINT16_MAX;
uint8_t x1082 = 103U;
uint64_t x1084 = 1155132LLU;
volatile uint32_t x1151 = 0U;
static volatile int64_t x1156 = INT64_MIN;
uint8_t x1174 = 3U;
int16_t x1219 = 6;
volatile uint8_t x1382 = 103U;
uint16_t x1412 = 1U;
int32_t t45 = -12;
volatile int16_t x1469 = -1;
static uint32_t x1471 = 1U;
uint16_t x1486 = 2423U;
int64_t x1488 = -7233828LL;
static int32_t x1509 = 410681738;
uint32_t x1654 = 59832520U;
uint64_t x1685 = 26LLU;
uint16_t x1686 = 10U;
uint32_t x1793 = UINT32_MAX;
int8_t x1795 = 7;
static uint64_t x1861 = 19LLU;
int16_t x1863 = 22;
int8_t x1883 = 11;
static uint16_t x1886 = 0U;
int32_t x1888 = INT32_MAX;
int32_t x1892 = 307891189;
int64_t t58 = -22LL;
int16_t x2101 = -1;
volatile uint64_t t60 = 1463507917913LLU;
static volatile int32_t x2138 = 535;
int8_t x2181 = -3;
int8_t x2199 = 3;
int16_t x2218 = INT16_MIN;
int8_t x2363 = 7;
volatile int64_t x2364 = INT64_MIN;
uint8_t x2383 = 13U;
uint32_t x2410 = UINT32_MAX;
static uint32_t t72 = 1564268U;
static int64_t x2430 = INT64_MIN;
uint64_t x2467 = 0LLU;
int32_t x2509 = INT32_MIN;
uint16_t x2512 = 288U;
static uint8_t x2518 = UINT8_MAX;
static int64_t t76 = 3LL;
volatile uint64_t t77 = 31347627LLU;
static int16_t x2595 = 0;
uint64_t x2621 = 895354836894LLU;
static int32_t x2622 = INT32_MAX;
uint8_t x2623 = 11U;
int8_t x2703 = 55;
int64_t x2792 = -1LL;
static volatile int8_t x2819 = 1;
volatile int32_t t86 = -140237991;
uint16_t x3275 = 63U;
int8_t x3318 = 3;
int64_t t94 = -38551357LL;
int16_t x3409 = -1;
int64_t t96 = 3913597LL;
uint32_t x3522 = 46562687U;
int8_t x3565 = 1;
static int32_t x3566 = -1;


void f0(void) {
	int64_t x1 = 4404255622910854LL;
	int64_t x2 = -1LL;
	uint64_t x3 = 5LLU;
	int16_t x4 = INT16_MIN;
	volatile int64_t t0 = 2LL;

	t0 = (((x1&x2)<<x3)/x4);

	if (t0 != -4301030881748LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint32_t x9 = UINT32_MAX;
	int8_t x10 = INT8_MAX;
	int32_t x12 = INT32_MAX;
	volatile uint32_t t1 = 360685160U;

	t1 = (((x9&x10)<<x11)/x12);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x53 = UINT64_MAX;
	int8_t x54 = INT8_MIN;
	uint8_t x55 = 5U;
	int8_t x56 = -1;
	static volatile uint64_t t2 = 28217LLU;

	t2 = (((x53&x54)<<x55)/x56);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x57 = 1U;
	uint16_t x58 = 13595U;
	volatile int32_t t3 = -983885549;

	t3 = (((x57&x58)<<x59)/x60);

	if (t3 != 227) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x85 = -37;
	uint8_t x86 = UINT8_MAX;
	static uint8_t x87 = 0U;
	int64_t t4 = 13LL;

	t4 = (((x85&x86)<<x87)/x88);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x121 = INT8_MAX;
	volatile int8_t x122 = 0;
	int16_t x123 = 1;
	static volatile int8_t x124 = -18;
	static int32_t t5 = 1953612;

	t5 = (((x121&x122)<<x123)/x124);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x217 = INT64_MAX;
	int32_t x218 = INT32_MAX;
	static volatile uint64_t x219 = 23LLU;
	static int8_t x220 = -14;
	volatile int64_t t6 = -247146086491088LL;

	t6 = (((x217&x218)<<x219)/x220);

	if (t6 != -1286742750078098LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x249 = 141020U;
	uint32_t x250 = 59662418U;
	uint8_t x251 = 1U;
	int32_t x252 = 53397;

	t7 = (((x249&x250)<<x251)/x252);

	if (t7 != 5U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x269 = 240LLU;
	int8_t x270 = -1;
	uint8_t x271 = 1U;
	int8_t x272 = INT8_MAX;
	uint64_t t8 = 4794091026LLU;

	t8 = (((x269&x270)<<x271)/x272);

	if (t8 != 3LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x325 = -1LL;
	uint32_t x326 = 435U;
	int8_t x327 = 9;
	volatile int32_t x328 = INT32_MAX;
	volatile int64_t t9 = -61086729945LL;

	t9 = (((x325&x326)<<x327)/x328);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x331 = 33U;
	volatile int16_t x332 = -1;
	static uint64_t t10 = 10279307881169680LLU;

	t10 = (((x329&x330)<<x331)/x332);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x337 = 1678LLU;
	int64_t x340 = INT64_MAX;
	uint64_t t11 = 2064772677LLU;

	t11 = (((x337&x338)<<x339)/x340);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x349 = 823146014U;
	static uint8_t x350 = UINT8_MAX;
	volatile uint32_t t12 = 121890U;

	t12 = (((x349&x350)<<x351)/x352);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x409 = -1LL;
	uint8_t x411 = 6U;
	static volatile int8_t x412 = 5;
	volatile int64_t t13 = -354LL;

	t13 = (((x409&x410)<<x411)/x412);

	if (t13 != 40460LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x433 = 10;
	uint32_t x434 = 342420054U;
	uint32_t x435 = 5U;
	uint64_t t14 = 19939935127LLU;

	t14 = (((x433&x434)<<x435)/x436);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x437 = 194180010U;
	volatile int32_t x438 = 8;
	uint32_t x439 = 0U;
	volatile uint32_t t15 = 1124001U;

	t15 = (((x437&x438)<<x439)/x440);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x465 = 15;
	int16_t x468 = INT16_MAX;
	volatile int32_t t16 = -144625;

	t16 = (((x465&x466)<<x467)/x468);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x469 = 455987U;
	int64_t x470 = INT64_MIN;
	volatile uint32_t x471 = 4U;
	uint8_t x472 = 2U;
	static volatile int64_t t17 = 120LL;

	t17 = (((x469&x470)<<x471)/x472);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x513 = 10;
	uint64_t x514 = 99244LLU;
	int8_t x515 = 44;
	static int8_t x516 = 1;
	static volatile uint64_t t18 = 33270262725109LLU;

	t18 = (((x513&x514)<<x515)/x516);

	if (t18 != 140737488355328LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x561 = INT8_MAX;
	uint32_t x562 = 25U;
	int8_t x563 = 0;
	uint64_t x564 = 71497329792908LLU;
	volatile uint64_t t19 = 2538150922LLU;

	t19 = (((x561&x562)<<x563)/x564);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x625 = -248;
	int64_t x626 = INT64_MAX;
	int64_t x627 = 0LL;
	int16_t x628 = INT16_MIN;
	volatile int64_t t20 = -27560329144338LL;

	t20 = (((x625&x626)<<x627)/x628);

	if (t20 != -281474976710655LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x641 = 3563U;
	uint32_t x643 = 1U;
	volatile int32_t x644 = -15;
	uint32_t t21 = 165U;

	t21 = (((x641&x642)<<x643)/x644);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x673 = INT8_MAX;
	uint32_t x675 = 20U;
	volatile int16_t x676 = INT16_MIN;
	int64_t t22 = -3897912194488719LL;

	t22 = (((x673&x674)<<x675)/x676);

	if (t22 != -1184LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x709 = INT8_MAX;
	uint64_t x710 = UINT64_MAX;
	static uint32_t x711 = 24U;
	static uint8_t x712 = 100U;
	uint64_t t23 = 3179634552365LLU;

	t23 = (((x709&x710)<<x711)/x712);

	if (t23 != 21307064LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x721 = 2U;
	volatile uint8_t x723 = 6U;
	int64_t x724 = -1LL;
	volatile int64_t t24 = -2453502762687373587LL;

	t24 = (((x721&x722)<<x723)/x724);

	if (t24 != -128LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x730 = -4;
	static uint32_t x731 = 3U;
	int32_t x732 = -6219;

	t25 = (((x729&x730)<<x731)/x732);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x793 = 14973U;
	int8_t x795 = 22;
	volatile int16_t x796 = 45;
	uint32_t t26 = 1106U;

	t26 = (((x793&x794)<<x795)/x796);

	if (t26 != 47721858U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x805 = 30354U;
	int16_t x806 = 230;
	static volatile int8_t x808 = INT8_MIN;

	t27 = (((x805&x806)<<x807)/x808);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x809 = INT64_MIN;
	volatile int16_t x811 = 26;

	t28 = (((x809&x810)<<x811)/x812);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x814 = -5;
	static uint8_t x815 = 0U;
	int8_t x816 = INT8_MIN;
	static volatile uint32_t t29 = 4516U;

	t29 = (((x813&x814)<<x815)/x816);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x893 = 3U;
	int32_t x894 = INT32_MIN;
	uint16_t x895 = 0U;
	int64_t x896 = -258514862LL;
	int64_t t30 = 121099615355LL;

	t30 = (((x893&x894)<<x895)/x896);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x910 = -45;
	int64_t x911 = 0LL;
	uint32_t x912 = 42704U;
	volatile uint32_t t31 = 35968541U;

	t31 = (((x909&x910)<<x911)/x912);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x922 = 33449020U;
	volatile int8_t x923 = 3;
	static int8_t x924 = INT8_MIN;
	static uint32_t t32 = 128U;

	t32 = (((x921&x922)<<x923)/x924);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x941 = INT16_MIN;
	static int32_t x942 = 1356;
	volatile uint8_t x943 = 11U;
	int64_t x944 = INT64_MAX;
	int64_t t33 = 50157751471245728LL;

	t33 = (((x941&x942)<<x943)/x944);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x949 = 60U;
	volatile int16_t x950 = -1;
	static int16_t x951 = 5;

	t34 = (((x949&x950)<<x951)/x952);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x953 = INT32_MIN;
	uint16_t x954 = 17602U;
	uint16_t x955 = 5U;
	static uint16_t x956 = 121U;
	int32_t t35 = -59826;

	t35 = (((x953&x954)<<x955)/x956);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x1083 = 6U;
	volatile uint64_t t36 = 1423004285319111237LLU;

	t36 = (((x1081&x1082)<<x1083)/x1084);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1137 = 0;
	int32_t x1138 = 1;
	int8_t x1139 = 4;
	int32_t x1140 = INT32_MAX;
	int32_t t37 = -283;

	t37 = (((x1137&x1138)<<x1139)/x1140);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1149 = 50;
	volatile int16_t x1150 = -1;
	int16_t x1152 = INT16_MIN;
	static volatile int32_t t38 = -1;

	t38 = (((x1149&x1150)<<x1151)/x1152);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1153 = INT8_MIN;
	uint32_t x1154 = 1378U;
	int16_t x1155 = 3;
	int64_t t39 = -20561955678288LL;

	t39 = (((x1153&x1154)<<x1155)/x1156);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1173 = -1;
	int8_t x1175 = 1;
	volatile uint32_t x1176 = UINT32_MAX;
	uint32_t t40 = 815U;

	t40 = (((x1173&x1174)<<x1175)/x1176);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x1181 = 5U;
	static int8_t x1182 = -1;
	uint16_t x1183 = 23U;
	int8_t x1184 = INT8_MIN;
	int32_t t41 = -303;

	t41 = (((x1181&x1182)<<x1183)/x1184);

	if (t41 != -327680) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1217 = INT32_MIN;
	uint8_t x1218 = 44U;
	uint8_t x1220 = 2U;
	int32_t t42 = 68534609;

	t42 = (((x1217&x1218)<<x1219)/x1220);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x1381 = -3;
	static uint8_t x1383 = 7U;
	int32_t x1384 = INT32_MIN;
	volatile int32_t t43 = -36;

	t43 = (((x1381&x1382)<<x1383)/x1384);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1401 = INT32_MAX;
	uint64_t x1402 = 102143619LLU;
	uint8_t x1403 = 4U;
	int16_t x1404 = -39;
	volatile uint64_t t44 = 79941391497296LLU;

	t44 = (((x1401&x1402)<<x1403)/x1404);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x1409 = UINT16_MAX;
	volatile int16_t x1410 = 3483;
	uint8_t x1411 = 1U;

	t45 = (((x1409&x1410)<<x1411)/x1412);

	if (t45 != 6966) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1470 = 4;
	volatile int16_t x1472 = 395;
	int32_t t46 = -1;

	t46 = (((x1469&x1470)<<x1471)/x1472);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x1485 = INT8_MIN;
	static uint8_t x1487 = 0U;
	volatile int64_t t47 = -73271567LL;

	t47 = (((x1485&x1486)<<x1487)/x1488);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1510 = -2110293;
	volatile uint16_t x1511 = 0U;
	volatile int16_t x1512 = 4;
	static volatile int32_t t48 = 688;

	t48 = (((x1509&x1510)<<x1511)/x1512);

	if (t48 != 102146082) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1621 = -136593LL;
	uint8_t x1622 = UINT8_MAX;
	int64_t x1623 = 1LL;
	int8_t x1624 = 5;
	int64_t t49 = -234279762LL;

	t49 = (((x1621&x1622)<<x1623)/x1624);

	if (t49 != 44LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1653 = INT64_MAX;
	uint16_t x1655 = 1U;
	int64_t x1656 = INT64_MIN;
	volatile int64_t t50 = -6774337LL;

	t50 = (((x1653&x1654)<<x1655)/x1656);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x1687 = 0;
	static uint16_t x1688 = UINT16_MAX;
	volatile uint64_t t51 = 215LLU;

	t51 = (((x1685&x1686)<<x1687)/x1688);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x1725 = 388187908LLU;
	uint64_t x1726 = UINT64_MAX;
	uint8_t x1727 = 1U;
	uint32_t x1728 = 5211U;
	uint64_t t52 = 5573929524579982LLU;

	t52 = (((x1725&x1726)<<x1727)/x1728);

	if (t52 != 148987LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x1769 = INT8_MAX;
	int64_t x1770 = INT64_MIN;
	static volatile uint16_t x1771 = 52U;
	int32_t x1772 = 1026;
	int64_t t53 = -53649LL;

	t53 = (((x1769&x1770)<<x1771)/x1772);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x1794 = -1LL;
	int16_t x1796 = INT16_MIN;
	volatile int64_t t54 = 225206031492LL;

	t54 = (((x1793&x1794)<<x1795)/x1796);

	if (t54 != -16777215LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x1862 = INT8_MAX;
	int8_t x1864 = INT8_MAX;
	static uint64_t t55 = 0LLU;

	t55 = (((x1861&x1862)<<x1863)/x1864);

	if (t55 != 627494LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1881 = INT16_MAX;
	volatile int8_t x1882 = INT8_MIN;
	static int64_t x1884 = INT64_MAX;
	static int64_t t56 = -470410067857LL;

	t56 = (((x1881&x1882)<<x1883)/x1884);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x1885 = -1LL;
	static int64_t x1887 = 0LL;
	int64_t t57 = 98753200555893908LL;

	t57 = (((x1885&x1886)<<x1887)/x1888);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x1889 = INT64_MIN;
	uint16_t x1890 = 18504U;
	uint16_t x1891 = 25U;

	t58 = (((x1889&x1890)<<x1891)/x1892);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x1913 = INT8_MAX;
	int8_t x1914 = -1;
	volatile int16_t x1915 = 9;
	int32_t x1916 = INT32_MAX;
	int32_t t59 = -128971974;

	t59 = (((x1913&x1914)<<x1915)/x1916);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x2102 = 17U;
	uint16_t x2103 = 6U;
	uint64_t x2104 = UINT64_MAX;

	t60 = (((x2101&x2102)<<x2103)/x2104);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x2125 = INT64_MIN;
	static uint32_t x2126 = UINT32_MAX;
	int8_t x2127 = 52;
	volatile int8_t x2128 = INT8_MIN;
	int64_t t61 = 8026302420986765LL;

	t61 = (((x2125&x2126)<<x2127)/x2128);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x2137 = 250U;
	int16_t x2139 = 1;
	int8_t x2140 = INT8_MIN;
	static volatile uint32_t t62 = 3U;

	t62 = (((x2137&x2138)<<x2139)/x2140);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x2157 = 37806239LLU;
	uint8_t x2158 = 3U;
	volatile uint8_t x2159 = 13U;
	int32_t x2160 = -163639;
	uint64_t t63 = 679443191511LLU;

	t63 = (((x2157&x2158)<<x2159)/x2160);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x2182 = UINT8_MAX;
	int32_t x2183 = 1;
	static uint64_t x2184 = 5022103207533808LLU;
	uint64_t t64 = 9LLU;

	t64 = (((x2181&x2182)<<x2183)/x2184);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x2197 = -1;
	static uint32_t x2198 = UINT32_MAX;
	int64_t x2200 = 4075331LL;
	int64_t t65 = -31158366LL;

	t65 = (((x2197&x2198)<<x2199)/x2200);

	if (t65 != 1053LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x2217 = 275U;
	int8_t x2219 = 0;
	int32_t x2220 = INT32_MIN;
	uint32_t t66 = 899661U;

	t66 = (((x2217&x2218)<<x2219)/x2220);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x2249 = INT16_MAX;
	int64_t x2250 = INT64_MAX;
	volatile int8_t x2251 = 0;
	int16_t x2252 = INT16_MIN;
	static int64_t t67 = 730638395842206LL;

	t67 = (((x2249&x2250)<<x2251)/x2252);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x2285 = 1047U;
	volatile int32_t x2286 = 427;
	volatile int32_t x2287 = 0;
	int16_t x2288 = 1006;
	static volatile int32_t t68 = -2423127;

	t68 = (((x2285&x2286)<<x2287)/x2288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x2361 = -1;
	int16_t x2362 = INT16_MAX;
	volatile int64_t t69 = 13630038336573LL;

	t69 = (((x2361&x2362)<<x2363)/x2364);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x2381 = INT16_MAX;
	static int16_t x2382 = INT16_MIN;
	int16_t x2384 = INT16_MIN;
	volatile int32_t t70 = -1720;

	t70 = (((x2381&x2382)<<x2383)/x2384);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x2405 = -99;
	uint64_t x2406 = 66073524LLU;
	uint8_t x2407 = 3U;
	static int32_t x2408 = INT32_MIN;
	static uint64_t t71 = 29LLU;

	t71 = (((x2405&x2406)<<x2407)/x2408);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x2409 = UINT32_MAX;
	volatile uint8_t x2411 = 1U;
	int16_t x2412 = INT16_MAX;

	t72 = (((x2409&x2410)<<x2411)/x2412);

	if (t72 != 131076U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x2429 = 12U;
	volatile uint16_t x2431 = 0U;
	uint32_t x2432 = 13299873U;
	volatile int64_t t73 = -17LL;

	t73 = (((x2429&x2430)<<x2431)/x2432);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x2465 = INT16_MIN;
	static uint16_t x2466 = UINT16_MAX;
	int16_t x2468 = 34;
	int32_t t74 = -3;

	t74 = (((x2465&x2466)<<x2467)/x2468);

	if (t74 != 963) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x2510 = 16U;
	uint8_t x2511 = 8U;
	uint32_t t75 = 1001813U;

	t75 = (((x2509&x2510)<<x2511)/x2512);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x2517 = -434226442501928LL;
	uint16_t x2519 = 3U;
	int32_t x2520 = INT32_MIN;

	t76 = (((x2517&x2518)<<x2519)/x2520);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x2569 = 1565704078355323LLU;
	int16_t x2570 = INT16_MAX;
	volatile uint8_t x2571 = 0U;
	static uint16_t x2572 = UINT16_MAX;

	t77 = (((x2569&x2570)<<x2571)/x2572);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2581 = -1;
	int64_t x2582 = INT64_MAX;
	static int8_t x2583 = 0;
	static uint8_t x2584 = 4U;
	volatile int64_t t78 = 408564612LL;

	t78 = (((x2581&x2582)<<x2583)/x2584);

	if (t78 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x2593 = INT32_MIN;
	uint16_t x2594 = 12002U;
	volatile int64_t x2596 = INT64_MAX;
	static volatile int64_t t79 = 14427305LL;

	t79 = (((x2593&x2594)<<x2595)/x2596);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x2624 = 32946198288378LL;
	volatile uint64_t t80 = 356316LLU;

	t80 = (((x2621&x2622)<<x2623)/x2624);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x2685 = UINT16_MAX;
	int16_t x2686 = INT16_MAX;
	uint16_t x2687 = 9U;
	static int16_t x2688 = -25;
	static volatile int32_t t81 = 85202;

	t81 = (((x2685&x2686)<<x2687)/x2688);

	if (t81 != -671068) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x2701 = -1;
	uint64_t x2702 = UINT64_MAX;
	volatile int8_t x2704 = -6;
	volatile uint64_t t82 = 192LLU;

	t82 = (((x2701&x2702)<<x2703)/x2704);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x2789 = -1LL;
	int64_t x2790 = 8681963971661LL;
	uint8_t x2791 = 0U;
	static int64_t t83 = 55013998253LL;

	t83 = (((x2789&x2790)<<x2791)/x2792);

	if (t83 != -8681963971661LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x2817 = 0;
	uint16_t x2818 = 57U;
	int8_t x2820 = INT8_MAX;
	static volatile int32_t t84 = 1509;

	t84 = (((x2817&x2818)<<x2819)/x2820);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x2881 = -1;
	static int32_t x2882 = 29;
	int32_t x2883 = 7;
	static int16_t x2884 = INT16_MIN;
	static int32_t t85 = 264456198;

	t85 = (((x2881&x2882)<<x2883)/x2884);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x2965 = 856U;
	int8_t x2966 = -15;
	volatile int16_t x2967 = 1;
	volatile int16_t x2968 = INT16_MIN;

	t86 = (((x2965&x2966)<<x2967)/x2968);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x3093 = -1LL;
	uint8_t x3094 = UINT8_MAX;
	volatile uint64_t x3095 = 2LLU;
	uint8_t x3096 = 34U;
	volatile int64_t t87 = 477945704134946LL;

	t87 = (((x3093&x3094)<<x3095)/x3096);

	if (t87 != 30LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x3125 = 126;
	volatile int8_t x3126 = INT8_MIN;
	uint8_t x3127 = 15U;
	int64_t x3128 = -1LL;
	int64_t t88 = -88580LL;

	t88 = (((x3125&x3126)<<x3127)/x3128);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x3181 = 10;
	int32_t x3182 = INT32_MAX;
	uint8_t x3183 = 0U;
	uint8_t x3184 = UINT8_MAX;
	volatile int32_t t89 = 284036154;

	t89 = (((x3181&x3182)<<x3183)/x3184);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x3213 = INT64_MAX;
	uint8_t x3214 = 10U;
	int32_t x3215 = 8;
	static int16_t x3216 = INT16_MIN;
	volatile int64_t t90 = -2LL;

	t90 = (((x3213&x3214)<<x3215)/x3216);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x3273 = INT16_MIN;
	static uint64_t x3274 = UINT64_MAX;
	volatile int32_t x3276 = INT32_MIN;
	volatile uint64_t t91 = 254LLU;

	t91 = (((x3273&x3274)<<x3275)/x3276);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x3293 = 3;
	int8_t x3294 = 0;
	uint32_t x3295 = 0U;
	static volatile int32_t x3296 = INT32_MIN;
	volatile int32_t t92 = -120045310;

	t92 = (((x3293&x3294)<<x3295)/x3296);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x3317 = -65785967;
	int8_t x3319 = 21;
	static int64_t x3320 = -3820038509LL;
	static volatile int64_t t93 = 1LL;

	t93 = (((x3317&x3318)<<x3319)/x3320);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x3397 = -1LL;
	uint8_t x3398 = 54U;
	uint8_t x3399 = 4U;
	int64_t x3400 = -902909018LL;

	t94 = (((x3397&x3398)<<x3399)/x3400);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x3410 = 385U;
	uint8_t x3411 = 21U;
	uint16_t x3412 = UINT16_MAX;
	static uint32_t t95 = 1U;

	t95 = (((x3409&x3410)<<x3411)/x3412);

	if (t95 != 12320U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x3485 = -9840LL;
	uint16_t x3486 = UINT16_MAX;
	uint16_t x3487 = 6U;
	static int64_t x3488 = INT64_MIN;

	t96 = (((x3485&x3486)<<x3487)/x3488);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x3521 = INT32_MAX;
	uint8_t x3523 = 0U;
	uint32_t x3524 = 8354U;
	volatile uint32_t t97 = 29096879U;

	t97 = (((x3521&x3522)<<x3523)/x3524);

	if (t97 != 5573U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x3529 = INT16_MIN;
	uint32_t x3530 = UINT32_MAX;
	uint32_t x3531 = 17U;
	uint16_t x3532 = 493U;
	uint32_t t98 = 16188191U;

	t98 = (((x3529&x3530)<<x3531)/x3532);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x3567 = 0LL;
	int64_t x3568 = 1174438387314415LL;
	volatile int64_t t99 = 38260017LL;

	t99 = (((x3565&x3566)<<x3567)/x3568);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

