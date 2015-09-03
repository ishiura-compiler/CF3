#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x9 = -1;
static int16_t x42 = -180;
int32_t t1 = -50;
volatile int32_t t2 = 104153847;
volatile uint64_t x99 = UINT64_MAX;
static uint8_t x100 = 13U;
int16_t x189 = INT16_MIN;
uint32_t x289 = UINT32_MAX;
static int32_t x383 = -1;
uint16_t x482 = 4U;
int16_t x483 = INT16_MAX;
uint16_t x484 = 18U;
int32_t t13 = 58688968;
static uint8_t x548 = 1U;
volatile int32_t t14 = -2983641;
volatile uint32_t x559 = 338166U;
static int32_t t15 = -31;
static int16_t x561 = INT16_MAX;
int8_t x566 = INT8_MIN;
static int32_t t17 = -2;
uint32_t x633 = UINT32_MAX;
uint8_t x662 = 49U;
int64_t x755 = -1LL;
int16_t x761 = 2896;
int16_t x764 = 3;
static volatile int32_t t24 = 253576417;
static volatile int32_t t25 = 1;
uint8_t x808 = 0U;
int16_t x921 = INT16_MIN;
uint64_t x923 = UINT64_MAX;
static uint32_t x924 = 1U;
int8_t x962 = -1;
volatile uint8_t x964 = 5U;
volatile int32_t x994 = INT32_MIN;
uint32_t x996 = 1U;
static int16_t x1005 = INT16_MAX;
int64_t x1006 = INT64_MAX;
int8_t x1018 = INT8_MAX;
int32_t x1044 = 7;
static uint8_t x1081 = 7U;
int8_t x1109 = INT8_MAX;
uint8_t x1138 = 1U;
volatile int8_t x1139 = 0;
uint16_t x1194 = 741U;
uint64_t x1291 = 250361LLU;
int8_t x1429 = INT8_MAX;
volatile uint8_t x1532 = 1U;
static uint64_t x1659 = UINT64_MAX;
static int8_t x1664 = 1;
int16_t x1778 = -8557;
volatile int16_t x1890 = INT16_MIN;
static uint8_t x1891 = 1U;
static volatile int32_t x1895 = INT32_MIN;
static uint32_t x1979 = 3520U;
int8_t x2031 = INT8_MIN;
static volatile int32_t t62 = -12;
int64_t x2070 = -308759968307930LL;
uint32_t x2071 = 27U;
uint8_t x2072 = 5U;
uint64_t x2304 = 1LLU;
int64_t x2395 = INT64_MAX;
int32_t x2438 = INT32_MAX;
volatile int64_t x2439 = 489231LL;
uint8_t x2440 = 0U;
int16_t x2541 = -20;
static volatile int32_t x2567 = -42625;
volatile int8_t x2568 = 0;
static volatile uint64_t x2621 = 210206686618LLU;
int16_t x2624 = 2;
static int8_t x2683 = INT8_MIN;
uint8_t x2684 = 10U;
int64_t x2707 = -1LL;
int8_t x2741 = -1;
int16_t x2902 = INT16_MIN;
int16_t x3090 = -6100;
uint16_t x3151 = UINT16_MAX;
volatile int16_t x3152 = 3;
uint8_t x3228 = 3U;
int32_t t91 = 7447694;
int16_t x3239 = INT16_MAX;
int32_t x3294 = -10267;
int32_t x3309 = 592643;
uint32_t x3335 = UINT32_MAX;
volatile int32_t t98 = 6247410;
uint64_t x3397 = 241804972062LLU;


void f0(void) {
	uint32_t x10 = 464239307U;
	int32_t x11 = -1;
	int16_t x12 = 1;
	volatile int32_t t0 = 3963247;

	t0 = (((x9^x10)<x11)<<x12);

	if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x41 = 37U;
	int32_t x43 = -1;
	volatile int16_t x44 = 2;

	t1 = (((x41^x42)<x43)<<x44);

	if (t1 != 4) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x49 = UINT8_MAX;
	int16_t x50 = INT16_MIN;
	uint64_t x51 = UINT64_MAX;
	uint8_t x52 = 1U;

	t2 = (((x49^x50)<x51)<<x52);

	if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x89 = 313139389710539003LLU;
	static int64_t x90 = INT64_MAX;
	static uint16_t x91 = UINT16_MAX;
	uint8_t x92 = 1U;
	volatile int32_t t3 = 72439;

	t3 = (((x89^x90)<x91)<<x92);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x93 = 11900;
	int32_t x94 = INT32_MAX;
	int16_t x95 = -15113;
	static volatile uint64_t x96 = 25LLU;
	volatile int32_t t4 = 86452;

	t4 = (((x93^x94)<x95)<<x96);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x97 = 2922LLU;
	uint8_t x98 = UINT8_MAX;
	int32_t t5 = -11;

	t5 = (((x97^x98)<x99)<<x100);

	if (t5 != 8192) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x125 = 6LLU;
	int32_t x126 = INT32_MIN;
	int16_t x127 = -4034;
	uint8_t x128 = 2U;
	int32_t t6 = 31;

	t6 = (((x125^x126)<x127)<<x128);

	if (t6 != 4) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x190 = 0;
	volatile int16_t x191 = INT16_MIN;
	int8_t x192 = 6;
	volatile int32_t t7 = 18;

	t7 = (((x189^x190)<x191)<<x192);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x233 = -1;
	static int32_t x234 = 1;
	volatile int64_t x235 = INT64_MAX;
	int16_t x236 = 12;
	static int32_t t8 = 1;

	t8 = (((x233^x234)<x235)<<x236);

	if (t8 != 4096) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x290 = -1LL;
	uint32_t x291 = 819180U;
	uint32_t x292 = 0U;
	volatile int32_t t9 = -934;

	t9 = (((x289^x290)<x291)<<x292);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x313 = 0U;
	int16_t x314 = 28;
	uint64_t x315 = UINT64_MAX;
	int8_t x316 = 3;
	static int32_t t10 = 3639;

	t10 = (((x313^x314)<x315)<<x316);

	if (t10 != 8) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x349 = INT32_MAX;
	uint64_t x350 = 1LLU;
	volatile int8_t x351 = INT8_MIN;
	int8_t x352 = 4;
	volatile int32_t t11 = 812;

	t11 = (((x349^x350)<x351)<<x352);

	if (t11 != 16) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x381 = INT8_MIN;
	uint64_t x382 = 4LLU;
	uint8_t x384 = 7U;
	int32_t t12 = 160;

	t12 = (((x381^x382)<x383)<<x384);

	if (t12 != 128) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x481 = INT16_MIN;

	t13 = (((x481^x482)<x483)<<x484);

	if (t13 != 262144) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint32_t x545 = 14362U;
	int64_t x546 = INT64_MIN;
	int16_t x547 = INT16_MAX;

	t14 = (((x545^x546)<x547)<<x548);

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x557 = UINT32_MAX;
	static int64_t x558 = -1LL;
	uint8_t x560 = 1U;

	t15 = (((x557^x558)<x559)<<x560);

	if (t15 != 2) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x562 = UINT32_MAX;
	volatile int16_t x563 = 13180;
	int8_t x564 = 0;
	volatile int32_t t16 = 1;

	t16 = (((x561^x562)<x563)<<x564);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x565 = 1U;
	int32_t x567 = INT32_MAX;
	uint8_t x568 = 12U;

	t17 = (((x565^x566)<x567)<<x568);

	if (t17 != 4096) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x601 = UINT8_MAX;
	int8_t x602 = INT8_MAX;
	uint16_t x603 = 1U;
	int8_t x604 = 0;
	int32_t t18 = 6;

	t18 = (((x601^x602)<x603)<<x604);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x634 = -177989045;
	int64_t x635 = INT64_MIN;
	uint8_t x636 = 7U;
	volatile int32_t t19 = -3486;

	t19 = (((x633^x634)<x635)<<x636);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x661 = INT16_MIN;
	int64_t x663 = 11LL;
	uint8_t x664 = 12U;
	int32_t t20 = 1573149;

	t20 = (((x661^x662)<x663)<<x664);

	if (t20 != 4096) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x737 = 736173439293093LLU;
	static int64_t x738 = 26748269081147LL;
	uint32_t x739 = 61065403U;
	uint16_t x740 = 3U;
	volatile int32_t t21 = -476149;

	t21 = (((x737^x738)<x739)<<x740);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x753 = INT16_MIN;
	uint64_t x754 = 118466237439048LLU;
	int32_t x756 = 5;
	volatile int32_t t22 = -89;

	t22 = (((x753^x754)<x755)<<x756);

	if (t22 != 32) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x762 = 45U;
	int32_t x763 = INT32_MAX;
	volatile int32_t t23 = 360031;

	t23 = (((x761^x762)<x763)<<x764);

	if (t23 != 8) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x777 = INT32_MAX;
	int64_t x778 = INT64_MAX;
	uint16_t x779 = 399U;
	uint64_t x780 = 0LLU;

	t24 = (((x777^x778)<x779)<<x780);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x785 = -1LL;
	uint64_t x786 = 171LLU;
	int8_t x787 = 0;
	uint8_t x788 = 6U;

	t25 = (((x785^x786)<x787)<<x788);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x805 = INT32_MIN;
	int64_t x806 = INT64_MAX;
	int16_t x807 = -1;
	int32_t t26 = -1985493;

	t26 = (((x805^x806)<x807)<<x808);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x849 = INT64_MIN;
	static int32_t x850 = INT32_MIN;
	int64_t x851 = -1LL;
	static uint32_t x852 = 6U;
	int32_t t27 = 582526188;

	t27 = (((x849^x850)<x851)<<x852);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x877 = INT64_MAX;
	volatile int16_t x878 = INT16_MAX;
	static volatile uint64_t x879 = UINT64_MAX;
	static uint8_t x880 = 3U;
	volatile int32_t t28 = 0;

	t28 = (((x877^x878)<x879)<<x880);

	if (t28 != 8) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x881 = INT16_MIN;
	static int16_t x882 = INT16_MIN;
	static int64_t x883 = -117082928916047LL;
	int8_t x884 = 9;
	volatile int32_t t29 = 46719058;

	t29 = (((x881^x882)<x883)<<x884);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x922 = -411421424543LL;
	volatile int32_t t30 = -1;

	t30 = (((x921^x922)<x923)<<x924);

	if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x961 = 6398U;
	int16_t x963 = 15;
	volatile int32_t t31 = 0;

	t31 = (((x961^x962)<x963)<<x964);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x993 = -1;
	int16_t x995 = -440;
	static int32_t t32 = 9256;

	t32 = (((x993^x994)<x995)<<x996);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x1007 = INT16_MIN;
	uint32_t x1008 = 1U;
	int32_t t33 = -359493939;

	t33 = (((x1005^x1006)<x1007)<<x1008);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x1009 = INT64_MIN;
	int32_t x1010 = -27737;
	int64_t x1011 = INT64_MAX;
	volatile uint32_t x1012 = 5U;
	int32_t t34 = 10485;

	t34 = (((x1009^x1010)<x1011)<<x1012);

	if (t34 != 32) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1017 = INT16_MAX;
	static int32_t x1019 = INT32_MIN;
	int8_t x1020 = 1;
	volatile int32_t t35 = -5078;

	t35 = (((x1017^x1018)<x1019)<<x1020);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1041 = 35;
	static int16_t x1042 = INT16_MIN;
	int64_t x1043 = INT64_MIN;
	int32_t t36 = -13660;

	t36 = (((x1041^x1042)<x1043)<<x1044);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1082 = 69U;
	int64_t x1083 = INT64_MAX;
	uint8_t x1084 = 0U;
	int32_t t37 = 0;

	t37 = (((x1081^x1082)<x1083)<<x1084);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x1089 = UINT32_MAX;
	static int8_t x1090 = INT8_MIN;
	int16_t x1091 = INT16_MIN;
	static int8_t x1092 = 0;
	volatile int32_t t38 = 4;

	t38 = (((x1089^x1090)<x1091)<<x1092);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1093 = INT32_MAX;
	static volatile int16_t x1094 = -1;
	uint32_t x1095 = UINT32_MAX;
	uint16_t x1096 = 26U;
	int32_t t39 = 12160272;

	t39 = (((x1093^x1094)<x1095)<<x1096);

	if (t39 != 67108864) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x1110 = INT64_MAX;
	volatile int8_t x1111 = -7;
	int8_t x1112 = 0;
	volatile int32_t t40 = -3152;

	t40 = (((x1109^x1110)<x1111)<<x1112);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint16_t x1137 = 9711U;
	uint16_t x1140 = 1U;
	static int32_t t41 = 192;

	t41 = (((x1137^x1138)<x1139)<<x1140);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x1153 = 400315LLU;
	volatile int64_t x1154 = -1LL;
	volatile int16_t x1155 = -200;
	uint8_t x1156 = 6U;
	static volatile int32_t t42 = 16;

	t42 = (((x1153^x1154)<x1155)<<x1156);

	if (t42 != 64) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1193 = 51U;
	int8_t x1195 = INT8_MIN;
	uint8_t x1196 = 27U;
	volatile int32_t t43 = -482;

	t43 = (((x1193^x1194)<x1195)<<x1196);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x1289 = -272853817LL;
	volatile int32_t x1290 = 60;
	int16_t x1292 = 22;
	volatile int32_t t44 = -85657;

	t44 = (((x1289^x1290)<x1291)<<x1292);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x1385 = 19U;
	int16_t x1386 = INT16_MIN;
	int16_t x1387 = -2;
	int32_t x1388 = 27;
	static int32_t t45 = 3567697;

	t45 = (((x1385^x1386)<x1387)<<x1388);

	if (t45 != 134217728) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x1389 = INT8_MIN;
	static int64_t x1390 = -1LL;
	int16_t x1391 = INT16_MIN;
	volatile uint16_t x1392 = 0U;
	volatile int32_t t46 = -771375448;

	t46 = (((x1389^x1390)<x1391)<<x1392);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x1430 = 29;
	int32_t x1431 = INT32_MAX;
	uint8_t x1432 = 0U;
	static int32_t t47 = -205;

	t47 = (((x1429^x1430)<x1431)<<x1432);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x1453 = INT16_MIN;
	static int8_t x1454 = INT8_MAX;
	int16_t x1455 = 5;
	static uint8_t x1456 = 0U;
	int32_t t48 = -287738;

	t48 = (((x1453^x1454)<x1455)<<x1456);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x1493 = 11490U;
	volatile uint8_t x1494 = 32U;
	int16_t x1495 = INT16_MIN;
	volatile uint8_t x1496 = 1U;
	int32_t t49 = 579;

	t49 = (((x1493^x1494)<x1495)<<x1496);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x1529 = -1;
	int32_t x1530 = -1;
	static int64_t x1531 = INT64_MIN;
	static volatile int32_t t50 = -8;

	t50 = (((x1529^x1530)<x1531)<<x1532);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1657 = -11;
	uint32_t x1658 = 24963U;
	uint16_t x1660 = 1U;
	static volatile int32_t t51 = 3;

	t51 = (((x1657^x1658)<x1659)<<x1660);

	if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x1661 = UINT8_MAX;
	static int16_t x1662 = INT16_MIN;
	static int64_t x1663 = -1LL;
	volatile int32_t t52 = 368950;

	t52 = (((x1661^x1662)<x1663)<<x1664);

	if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x1777 = 11U;
	static volatile int64_t x1779 = INT64_MAX;
	uint64_t x1780 = 21LLU;
	volatile int32_t t53 = 39;

	t53 = (((x1777^x1778)<x1779)<<x1780);

	if (t53 != 2097152) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x1841 = -94624032816857161LL;
	uint8_t x1842 = UINT8_MAX;
	volatile int8_t x1843 = INT8_MIN;
	static volatile uint8_t x1844 = 3U;
	volatile int32_t t54 = -6055;

	t54 = (((x1841^x1842)<x1843)<<x1844);

	if (t54 != 8) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x1877 = 2U;
	int16_t x1878 = INT16_MAX;
	int8_t x1879 = -2;
	uint8_t x1880 = 1U;
	volatile int32_t t55 = 278982443;

	t55 = (((x1877^x1878)<x1879)<<x1880);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x1889 = 8625U;
	int8_t x1892 = 0;
	int32_t t56 = 7810604;

	t56 = (((x1889^x1890)<x1891)<<x1892);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x1893 = INT64_MIN;
	uint64_t x1894 = 1LLU;
	int16_t x1896 = 6;
	int32_t t57 = -798059;

	t57 = (((x1893^x1894)<x1895)<<x1896);

	if (t57 != 64) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint64_t x1913 = UINT64_MAX;
	uint64_t x1914 = 75LLU;
	uint8_t x1915 = UINT8_MAX;
	int8_t x1916 = 6;
	volatile int32_t t58 = -10223;

	t58 = (((x1913^x1914)<x1915)<<x1916);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x1937 = INT64_MIN;
	volatile uint32_t x1938 = UINT32_MAX;
	int16_t x1939 = INT16_MIN;
	uint8_t x1940 = 22U;
	volatile int32_t t59 = -3;

	t59 = (((x1937^x1938)<x1939)<<x1940);

	if (t59 != 4194304) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x1957 = INT64_MIN;
	uint32_t x1958 = 201476U;
	volatile int64_t x1959 = INT64_MIN;
	int8_t x1960 = 3;
	int32_t t60 = -954812512;

	t60 = (((x1957^x1958)<x1959)<<x1960);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x1977 = UINT16_MAX;
	uint8_t x1978 = 12U;
	uint64_t x1980 = 14LLU;
	volatile int32_t t61 = -462722557;

	t61 = (((x1977^x1978)<x1979)<<x1980);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x2029 = 1;
	int64_t x2030 = -1LL;
	uint8_t x2032 = 10U;

	t62 = (((x2029^x2030)<x2031)<<x2032);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x2069 = 422;
	volatile int32_t t63 = -44924505;

	t63 = (((x2069^x2070)<x2071)<<x2072);

	if (t63 != 32) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x2253 = -1LL;
	volatile uint64_t x2254 = UINT64_MAX;
	uint64_t x2255 = 341230494520761LLU;
	uint32_t x2256 = 1U;
	int32_t t64 = 127227;

	t64 = (((x2253^x2254)<x2255)<<x2256);

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x2301 = INT16_MIN;
	volatile int16_t x2302 = -1007;
	int16_t x2303 = -1;
	int32_t t65 = 971555;

	t65 = (((x2301^x2302)<x2303)<<x2304);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x2349 = INT8_MIN;
	int32_t x2350 = -64579;
	int32_t x2351 = -39;
	uint8_t x2352 = 0U;
	volatile int32_t t66 = 13;

	t66 = (((x2349^x2350)<x2351)<<x2352);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x2393 = 14541143LLU;
	uint16_t x2394 = UINT16_MAX;
	uint32_t x2396 = 3U;
	volatile int32_t t67 = 207642;

	t67 = (((x2393^x2394)<x2395)<<x2396);

	if (t67 != 8) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x2401 = UINT16_MAX;
	uint64_t x2402 = UINT64_MAX;
	int64_t x2403 = -1LL;
	uint16_t x2404 = 1U;
	int32_t t68 = 2;

	t68 = (((x2401^x2402)<x2403)<<x2404);

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x2437 = INT64_MAX;
	volatile int32_t t69 = 53559517;

	t69 = (((x2437^x2438)<x2439)<<x2440);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x2441 = 570755LL;
	volatile int64_t x2442 = -1LL;
	static volatile uint64_t x2443 = 53010608441LLU;
	uint32_t x2444 = 3U;
	int32_t t70 = -3178;

	t70 = (((x2441^x2442)<x2443)<<x2444);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x2501 = INT64_MIN;
	int8_t x2502 = -4;
	volatile int32_t x2503 = INT32_MAX;
	int32_t x2504 = 0;
	int32_t t71 = -1778821;

	t71 = (((x2501^x2502)<x2503)<<x2504);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x2505 = INT8_MIN;
	int64_t x2506 = 125164196015924LL;
	volatile int32_t x2507 = INT32_MAX;
	uint8_t x2508 = 6U;
	static volatile int32_t t72 = -1475;

	t72 = (((x2505^x2506)<x2507)<<x2508);

	if (t72 != 64) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x2542 = 38865U;
	static uint64_t x2543 = UINT64_MAX;
	static uint16_t x2544 = 4U;
	int32_t t73 = 5318073;

	t73 = (((x2541^x2542)<x2543)<<x2544);

	if (t73 != 16) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x2565 = 7U;
	uint64_t x2566 = 4144878732775149535LLU;
	int32_t t74 = -81004;

	t74 = (((x2565^x2566)<x2567)<<x2568);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x2597 = 204;
	int16_t x2598 = INT16_MIN;
	int32_t x2599 = INT32_MIN;
	int8_t x2600 = 1;
	volatile int32_t t75 = 17;

	t75 = (((x2597^x2598)<x2599)<<x2600);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x2622 = INT8_MIN;
	uint64_t x2623 = 130360LLU;
	static int32_t t76 = -1821;

	t76 = (((x2621^x2622)<x2623)<<x2624);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x2629 = -108010590902528389LL;
	static uint8_t x2630 = UINT8_MAX;
	int8_t x2631 = INT8_MIN;
	int16_t x2632 = 10;
	int32_t t77 = 6016;

	t77 = (((x2629^x2630)<x2631)<<x2632);

	if (t77 != 1024) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x2681 = 0;
	int32_t x2682 = INT32_MAX;
	volatile int32_t t78 = 736630;

	t78 = (((x2681^x2682)<x2683)<<x2684);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x2705 = 359U;
	int64_t x2706 = 1546358619LL;
	int8_t x2708 = 5;
	volatile int32_t t79 = -61;

	t79 = (((x2705^x2706)<x2707)<<x2708);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x2742 = 13U;
	int64_t x2743 = -62LL;
	int64_t x2744 = 26LL;
	int32_t t80 = 247897027;

	t80 = (((x2741^x2742)<x2743)<<x2744);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x2825 = -558112926150627819LL;
	int32_t x2826 = 1;
	int8_t x2827 = -1;
	uint16_t x2828 = 30U;
	int32_t t81 = -1;

	t81 = (((x2825^x2826)<x2827)<<x2828);

	if (t81 != 1073741824) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x2901 = INT64_MIN;
	int64_t x2903 = INT64_MIN;
	uint16_t x2904 = 12U;
	volatile int32_t t82 = 639;

	t82 = (((x2901^x2902)<x2903)<<x2904);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x2905 = 26958319U;
	uint16_t x2906 = 3564U;
	int16_t x2907 = INT16_MAX;
	uint8_t x2908 = 2U;
	static int32_t t83 = 145882939;

	t83 = (((x2905^x2906)<x2907)<<x2908);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x2937 = INT16_MIN;
	uint8_t x2938 = 66U;
	volatile int8_t x2939 = INT8_MIN;
	uint32_t x2940 = 4U;
	volatile int32_t t84 = -27082;

	t84 = (((x2937^x2938)<x2939)<<x2940);

	if (t84 != 16) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x2941 = INT16_MIN;
	uint16_t x2942 = 7U;
	static int8_t x2943 = -1;
	int8_t x2944 = 4;
	int32_t t85 = 139;

	t85 = (((x2941^x2942)<x2943)<<x2944);

	if (t85 != 16) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x3025 = INT8_MIN;
	int16_t x3026 = INT16_MAX;
	uint64_t x3027 = 47398225652412948LLU;
	static uint64_t x3028 = 22LLU;
	int32_t t86 = -221;

	t86 = (((x3025^x3026)<x3027)<<x3028);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x3061 = 14540;
	uint8_t x3062 = UINT8_MAX;
	int64_t x3063 = 3338LL;
	uint8_t x3064 = 1U;
	volatile int32_t t87 = 244;

	t87 = (((x3061^x3062)<x3063)<<x3064);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x3089 = 1635719LLU;
	int16_t x3091 = INT16_MIN;
	static int32_t x3092 = 0;
	volatile int32_t t88 = -74064;

	t88 = (((x3089^x3090)<x3091)<<x3092);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x3149 = INT8_MIN;
	uint64_t x3150 = 187LLU;
	int32_t t89 = -2588022;

	t89 = (((x3149^x3150)<x3151)<<x3152);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x3161 = 37006U;
	uint64_t x3162 = UINT64_MAX;
	static int8_t x3163 = INT8_MIN;
	uint32_t x3164 = 11U;
	static volatile int32_t t90 = -1;

	t90 = (((x3161^x3162)<x3163)<<x3164);

	if (t90 != 2048) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x3225 = 250;
	int16_t x3226 = INT16_MIN;
	int8_t x3227 = INT8_MAX;

	t91 = (((x3225^x3226)<x3227)<<x3228);

	if (t91 != 8) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x3237 = 806822207;
	uint32_t x3238 = UINT32_MAX;
	uint16_t x3240 = 13U;
	int32_t t92 = 367;

	t92 = (((x3237^x3238)<x3239)<<x3240);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x3273 = UINT8_MAX;
	static volatile int32_t x3274 = -30109453;
	int8_t x3275 = INT8_MIN;
	int8_t x3276 = 4;
	volatile int32_t t93 = -18621531;

	t93 = (((x3273^x3274)<x3275)<<x3276);

	if (t93 != 16) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x3277 = 2U;
	static uint16_t x3278 = 24U;
	static int32_t x3279 = INT32_MIN;
	volatile int8_t x3280 = 0;
	volatile int32_t t94 = -8;

	t94 = (((x3277^x3278)<x3279)<<x3280);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x3281 = INT16_MAX;
	uint8_t x3282 = 1U;
	int16_t x3283 = INT16_MAX;
	int8_t x3284 = 2;
	int32_t t95 = -483187297;

	t95 = (((x3281^x3282)<x3283)<<x3284);

	if (t95 != 4) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x3293 = INT8_MIN;
	int32_t x3295 = -621791;
	uint8_t x3296 = 1U;
	int32_t t96 = -3;

	t96 = (((x3293^x3294)<x3295)<<x3296);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x3310 = INT16_MIN;
	uint32_t x3311 = 15U;
	volatile uint8_t x3312 = 10U;
	volatile int32_t t97 = -159194154;

	t97 = (((x3309^x3310)<x3311)<<x3312);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x3333 = -1;
	static int16_t x3334 = -1;
	static int8_t x3336 = 23;

	t98 = (((x3333^x3334)<x3335)<<x3336);

	if (t98 != 8388608) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x3398 = 28189399340990LL;
	uint16_t x3399 = UINT16_MAX;
	volatile int16_t x3400 = 0;
	int32_t t99 = 9230290;

	t99 = (((x3397^x3398)<x3399)<<x3400);

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

