#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = 30254092;
volatile uint32_t x86 = 307987U;
uint16_t x88 = 20U;
uint64_t x134 = 6280899982725681LLU;
int8_t x219 = INT8_MIN;
int16_t x227 = -52;
int8_t x255 = 1;
int32_t x363 = -7405230;
static uint16_t x460 = 1U;
static int32_t t11 = -48275;
int64_t x468 = 3LL;
int32_t x529 = -12851;
volatile uint16_t x564 = 3U;
static volatile int8_t x566 = INT8_MIN;
volatile uint8_t x568 = 0U;
int8_t x576 = 1;
int64_t x614 = -93LL;
uint8_t x616 = 5U;
int8_t x704 = 1;
int64_t x739 = INT64_MIN;
int8_t x740 = 3;
static volatile uint16_t x754 = UINT16_MAX;
volatile int64_t x782 = -3326827224947557767LL;
int64_t x831 = INT64_MIN;
int8_t x889 = INT8_MAX;
int32_t t27 = 5;
int16_t x943 = 5;
static int16_t x958 = -7349;
uint16_t x960 = 8U;
int32_t x1053 = INT32_MIN;
volatile int32_t x1065 = INT32_MIN;
volatile int32_t x1066 = INT32_MIN;
static volatile uint16_t x1132 = 1U;
int32_t t33 = 1;
volatile int8_t x1212 = 0;
volatile int32_t t36 = 9104508;
uint16_t x1346 = 843U;
int64_t x1347 = -1LL;
uint16_t x1507 = 0U;
int32_t x1529 = INT32_MIN;
int32_t t39 = -25653;
static int8_t x1589 = INT8_MIN;
static int8_t x1590 = -45;
int16_t x1591 = INT16_MIN;
volatile int32_t t42 = 107536;
int8_t x1654 = -1;
volatile uint8_t x1656 = 0U;
static int32_t t44 = -445;
static int64_t x1753 = INT64_MIN;
int32_t t48 = -867;
int16_t x1785 = -1;
volatile uint64_t x1787 = 1474900LLU;
volatile int32_t t50 = -1941786;
static volatile int64_t x1858 = INT64_MAX;
uint16_t x1860 = 26U;
uint8_t x1867 = 1U;
volatile uint8_t x1938 = 3U;
volatile int32_t t56 = -1144263;
int16_t x1991 = INT16_MIN;
int32_t t57 = -14620;
uint32_t x2125 = 134U;
int8_t x2126 = INT8_MAX;
static int16_t x2161 = -2603;
int64_t x2164 = 3LL;
static int32_t x2189 = -18811239;
int8_t x2269 = INT8_MIN;
int16_t x2272 = 7;
volatile int32_t t67 = -21195246;
static uint16_t x2328 = 8U;
volatile uint16_t x2336 = 0U;
volatile int32_t t70 = 365769528;
int32_t t72 = 215;
int16_t x2482 = -1;
volatile uint8_t x2612 = 7U;
static volatile int32_t t76 = 8758537;
int32_t t77 = 815;
int32_t x2702 = INT32_MAX;
volatile int8_t x2704 = 1;
int16_t x2710 = -1;
int16_t x2777 = 16157;
int32_t x2833 = -758;
static uint64_t x2834 = UINT64_MAX;
volatile int32_t t83 = -5162;
volatile int8_t x2837 = 1;
uint64_t x2838 = 8573961093186113LLU;
static int32_t x2877 = -6;
uint32_t x2878 = UINT32_MAX;
uint8_t x2879 = 1U;
int32_t x2897 = -838;
volatile uint16_t x2905 = 1U;
static int8_t x2909 = INT8_MIN;
int16_t x2913 = 1;
static volatile int32_t x2966 = -250061;
int32_t t94 = -44394165;
static int16_t x3090 = -1;
int32_t t95 = 264;
volatile int32_t t97 = -2;
int32_t x3393 = -93194;
static int64_t x3395 = INT64_MIN;


void f0(void) {
	uint16_t x13 = UINT16_MAX;
	static volatile int16_t x14 = INT16_MIN;
	volatile int64_t x15 = INT64_MIN;
	static int16_t x16 = 12;
	volatile int32_t t0 = 0;

	t0 = (x13<((x14<=x15)>>x16));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x45 = UINT16_MAX;
	uint32_t x46 = UINT32_MAX;
	volatile int64_t x47 = -1LL;
	uint8_t x48 = 2U;

	t1 = (x45<((x46<=x47)>>x48));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x85 = UINT16_MAX;
	volatile int32_t x87 = INT32_MAX;
	volatile int32_t t2 = 21077553;

	t2 = (x85<((x86<=x87)>>x88));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x133 = 861U;
	int64_t x135 = INT64_MIN;
	uint8_t x136 = 4U;
	int32_t t3 = 1015948341;

	t3 = (x133<((x134<=x135)>>x136));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x189 = 3;
	uint16_t x190 = 1527U;
	uint64_t x191 = UINT64_MAX;
	int16_t x192 = 11;
	int32_t t4 = 8534;

	t4 = (x189<((x190<=x191)>>x192));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x217 = 2609;
	int8_t x218 = INT8_MIN;
	uint32_t x220 = 27U;
	static volatile int32_t t5 = -1;

	t5 = (x217<((x218<=x219)>>x220));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x225 = -560;
	volatile uint8_t x226 = UINT8_MAX;
	volatile uint16_t x228 = 14U;
	static int32_t t6 = -3612820;

	t6 = (x225<((x226<=x227)>>x228));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x253 = 624915692159772LLU;
	volatile int64_t x254 = INT64_MIN;
	uint8_t x256 = 11U;
	int32_t t7 = 298248;

	t7 = (x253<((x254<=x255)>>x256));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x361 = INT32_MIN;
	int64_t x362 = -3838059653210195LL;
	volatile uint16_t x364 = 3U;
	static int32_t t8 = -1990;

	t8 = (x361<((x362<=x363)>>x364));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x377 = -1;
	static int64_t x378 = -1638419LL;
	int16_t x379 = -6;
	int16_t x380 = 0;
	int32_t t9 = 1452641;

	t9 = (x377<((x378<=x379)>>x380));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x433 = INT16_MIN;
	static int16_t x434 = INT16_MIN;
	uint8_t x435 = 15U;
	uint8_t x436 = 0U;
	int32_t t10 = 2;

	t10 = (x433<((x434<=x435)>>x436));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x457 = UINT8_MAX;
	int32_t x458 = INT32_MAX;
	int16_t x459 = -1;

	t11 = (x457<((x458<=x459)>>x460));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x465 = -1;
	uint64_t x466 = UINT64_MAX;
	uint64_t x467 = 242322865LLU;
	static int32_t t12 = -349417460;

	t12 = (x465<((x466<=x467)>>x468));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x489 = 52U;
	static int16_t x490 = 1;
	int32_t x491 = INT32_MIN;
	uint32_t x492 = 3U;
	volatile int32_t t13 = 1;

	t13 = (x489<((x490<=x491)>>x492));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x509 = -109581217LL;
	uint64_t x510 = 11777850326987LLU;
	uint16_t x511 = 13U;
	static int8_t x512 = 1;
	volatile int32_t t14 = -107912;

	t14 = (x509<((x510<=x511)>>x512));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x530 = 231022929U;
	uint32_t x531 = 152U;
	static uint8_t x532 = 5U;
	int32_t t15 = -23901;

	t15 = (x529<((x530<=x531)>>x532));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x561 = INT32_MIN;
	int64_t x562 = INT64_MIN;
	uint16_t x563 = 0U;
	static int32_t t16 = 2171;

	t16 = (x561<((x562<=x563)>>x564));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x565 = 130679;
	int16_t x567 = INT16_MIN;
	int32_t t17 = -1675845;

	t17 = (x565<((x566<=x567)>>x568));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x573 = 27;
	int16_t x574 = INT16_MAX;
	uint32_t x575 = UINT32_MAX;
	int32_t t18 = 60;

	t18 = (x573<((x574<=x575)>>x576));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x613 = UINT8_MAX;
	int64_t x615 = INT64_MIN;
	volatile int32_t t19 = 2774390;

	t19 = (x613<((x614<=x615)>>x616));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x701 = 3;
	static uint32_t x702 = UINT32_MAX;
	static uint32_t x703 = UINT32_MAX;
	volatile int32_t t20 = 20;

	t20 = (x701<((x702<=x703)>>x704));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x729 = -664037749LL;
	int32_t x730 = -4005284;
	int32_t x731 = -4;
	uint8_t x732 = 0U;
	int32_t t21 = 3796525;

	t21 = (x729<((x730<=x731)>>x732));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x737 = -1666;
	int64_t x738 = INT64_MIN;
	volatile int32_t t22 = 1;

	t22 = (x737<((x738<=x739)>>x740));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x753 = INT8_MIN;
	uint32_t x755 = 71710627U;
	int8_t x756 = 15;
	volatile int32_t t23 = -11;

	t23 = (x753<((x754<=x755)>>x756));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x781 = UINT64_MAX;
	static uint64_t x783 = 99768LLU;
	static int8_t x784 = 4;
	volatile int32_t t24 = 2;

	t24 = (x781<((x782<=x783)>>x784));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x829 = UINT32_MAX;
	static int64_t x830 = -1LL;
	int16_t x832 = 1;
	volatile int32_t t25 = 4083205;

	t25 = (x829<((x830<=x831)>>x832));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x890 = -48;
	static volatile int16_t x891 = 3;
	int16_t x892 = 1;
	static volatile int32_t t26 = 21;

	t26 = (x889<((x890<=x891)>>x892));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x913 = 1032U;
	int16_t x914 = INT16_MIN;
	volatile int64_t x915 = INT64_MIN;
	int8_t x916 = 1;

	t27 = (x913<((x914<=x915)>>x916));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x941 = 3;
	int32_t x942 = -473814;
	uint16_t x944 = 5U;
	volatile int32_t t28 = 1;

	t28 = (x941<((x942<=x943)>>x944));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x957 = 4LLU;
	static int32_t x959 = INT32_MIN;
	static int32_t t29 = 2699;

	t29 = (x957<((x958<=x959)>>x960));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1037 = 93910U;
	int32_t x1038 = -1;
	int8_t x1039 = INT8_MAX;
	static uint16_t x1040 = 17U;
	volatile int32_t t30 = -15228;

	t30 = (x1037<((x1038<=x1039)>>x1040));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x1054 = INT8_MIN;
	int32_t x1055 = INT32_MIN;
	uint16_t x1056 = 0U;
	static volatile int32_t t31 = -249;

	t31 = (x1053<((x1054<=x1055)>>x1056));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x1067 = INT8_MIN;
	int64_t x1068 = 18LL;
	volatile int32_t t32 = -417087;

	t32 = (x1065<((x1066<=x1067)>>x1068));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1129 = 237U;
	uint16_t x1130 = 9U;
	static uint16_t x1131 = UINT16_MAX;

	t33 = (x1129<((x1130<=x1131)>>x1132));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x1209 = INT32_MIN;
	int32_t x1210 = INT32_MIN;
	int8_t x1211 = -2;
	static volatile int32_t t34 = -42461;

	t34 = (x1209<((x1210<=x1211)>>x1212));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x1217 = INT64_MAX;
	static int8_t x1218 = INT8_MAX;
	uint16_t x1219 = 713U;
	uint32_t x1220 = 5U;
	static int32_t t35 = -215399;

	t35 = (x1217<((x1218<=x1219)>>x1220));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1333 = -1226;
	volatile int8_t x1334 = INT8_MIN;
	volatile int16_t x1335 = INT16_MIN;
	uint8_t x1336 = 3U;

	t36 = (x1333<((x1334<=x1335)>>x1336));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x1345 = UINT8_MAX;
	uint8_t x1348 = 1U;
	volatile int32_t t37 = -189400754;

	t37 = (x1345<((x1346<=x1347)>>x1348));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1505 = -1LL;
	int8_t x1506 = INT8_MIN;
	volatile uint8_t x1508 = 6U;
	static int32_t t38 = -182685396;

	t38 = (x1505<((x1506<=x1507)>>x1508));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1530 = INT32_MIN;
	static uint32_t x1531 = UINT32_MAX;
	static int16_t x1532 = 4;

	t39 = (x1529<((x1530<=x1531)>>x1532));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1557 = -19;
	int64_t x1558 = -4300226292LL;
	int16_t x1559 = INT16_MIN;
	uint8_t x1560 = 0U;
	static volatile int32_t t40 = -137893;

	t40 = (x1557<((x1558<=x1559)>>x1560));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1592 = 1U;
	static volatile int32_t t41 = 18;

	t41 = (x1589<((x1590<=x1591)>>x1592));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x1601 = INT64_MAX;
	static int64_t x1602 = INT64_MIN;
	int32_t x1603 = INT32_MAX;
	uint32_t x1604 = 15U;

	t42 = (x1601<((x1602<=x1603)>>x1604));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1617 = UINT8_MAX;
	static int32_t x1618 = 1113969;
	uint8_t x1619 = 2U;
	uint8_t x1620 = 4U;
	int32_t t43 = 234444174;

	t43 = (x1617<((x1618<=x1619)>>x1620));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1653 = UINT64_MAX;
	int16_t x1655 = -630;

	t44 = (x1653<((x1654<=x1655)>>x1656));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x1669 = INT16_MAX;
	static int64_t x1670 = INT64_MIN;
	int16_t x1671 = INT16_MIN;
	uint8_t x1672 = 2U;
	volatile int32_t t45 = -5889;

	t45 = (x1669<((x1670<=x1671)>>x1672));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x1697 = INT8_MIN;
	uint16_t x1698 = 198U;
	int32_t x1699 = INT32_MAX;
	volatile int8_t x1700 = 24;
	static volatile int32_t t46 = -479;

	t46 = (x1697<((x1698<=x1699)>>x1700));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1701 = INT16_MIN;
	uint8_t x1702 = 105U;
	int64_t x1703 = INT64_MIN;
	static uint8_t x1704 = 1U;
	int32_t t47 = 10693665;

	t47 = (x1701<((x1702<=x1703)>>x1704));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x1754 = INT8_MIN;
	uint8_t x1755 = UINT8_MAX;
	uint32_t x1756 = 2U;

	t48 = (x1753<((x1754<=x1755)>>x1756));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1757 = -1;
	volatile int16_t x1758 = INT16_MIN;
	int16_t x1759 = -1;
	int8_t x1760 = 2;
	volatile int32_t t49 = 0;

	t49 = (x1757<((x1758<=x1759)>>x1760));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x1786 = 6576U;
	int16_t x1788 = 1;

	t50 = (x1785<((x1786<=x1787)>>x1788));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x1837 = -1;
	uint16_t x1838 = 5U;
	uint64_t x1839 = UINT64_MAX;
	static uint8_t x1840 = 0U;
	int32_t t51 = 1;

	t51 = (x1837<((x1838<=x1839)>>x1840));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x1857 = UINT64_MAX;
	static volatile int8_t x1859 = INT8_MIN;
	volatile int32_t t52 = 36866;

	t52 = (x1857<((x1858<=x1859)>>x1860));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x1865 = -2560LL;
	uint64_t x1866 = UINT64_MAX;
	uint8_t x1868 = 3U;
	volatile int32_t t53 = -27228936;

	t53 = (x1865<((x1866<=x1867)>>x1868));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x1909 = INT32_MAX;
	uint16_t x1910 = 10U;
	uint64_t x1911 = 3758202353LLU;
	volatile uint8_t x1912 = 22U;
	volatile int32_t t54 = -839658;

	t54 = (x1909<((x1910<=x1911)>>x1912));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x1937 = INT64_MAX;
	uint8_t x1939 = 21U;
	uint8_t x1940 = 31U;
	volatile int32_t t55 = 878545666;

	t55 = (x1937<((x1938<=x1939)>>x1940));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1941 = INT16_MAX;
	static volatile int8_t x1942 = -1;
	static int32_t x1943 = 927;
	uint32_t x1944 = 1U;

	t56 = (x1941<((x1942<=x1943)>>x1944));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x1989 = -32223LL;
	static volatile uint64_t x1990 = 801078LLU;
	uint8_t x1992 = 2U;

	t57 = (x1989<((x1990<=x1991)>>x1992));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x2069 = -1LL;
	uint8_t x2070 = UINT8_MAX;
	int16_t x2071 = INT16_MAX;
	uint32_t x2072 = 30U;
	int32_t t58 = 5;

	t58 = (x2069<((x2070<=x2071)>>x2072));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x2127 = 10;
	uint16_t x2128 = 7U;
	volatile int32_t t59 = 14;

	t59 = (x2125<((x2126<=x2127)>>x2128));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2157 = 135270527;
	int64_t x2158 = 8803129254599116LL;
	int8_t x2159 = INT8_MAX;
	int32_t x2160 = 24;
	static volatile int32_t t60 = -117;

	t60 = (x2157<((x2158<=x2159)>>x2160));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x2162 = 253;
	int64_t x2163 = -1LL;
	volatile int32_t t61 = -8070;

	t61 = (x2161<((x2162<=x2163)>>x2164));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x2177 = 114887092;
	static int16_t x2178 = INT16_MIN;
	uint8_t x2179 = 0U;
	static int8_t x2180 = 17;
	volatile int32_t t62 = 23753;

	t62 = (x2177<((x2178<=x2179)>>x2180));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x2190 = 32627399LL;
	int32_t x2191 = -1;
	uint16_t x2192 = 17U;
	volatile int32_t t63 = -57342;

	t63 = (x2189<((x2190<=x2191)>>x2192));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x2217 = 3U;
	int16_t x2218 = 7;
	static uint64_t x2219 = 1022937443LLU;
	uint32_t x2220 = 0U;
	volatile int32_t t64 = -15301;

	t64 = (x2217<((x2218<=x2219)>>x2220));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x2257 = UINT8_MAX;
	int16_t x2258 = INT16_MIN;
	int32_t x2259 = 7269;
	static uint8_t x2260 = 3U;
	static int32_t t65 = 437;

	t65 = (x2257<((x2258<=x2259)>>x2260));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x2265 = INT32_MAX;
	int64_t x2266 = INT64_MIN;
	uint16_t x2267 = UINT16_MAX;
	uint32_t x2268 = 0U;
	static int32_t t66 = -13406681;

	t66 = (x2265<((x2266<=x2267)>>x2268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x2270 = 0LLU;
	int64_t x2271 = INT64_MAX;

	t67 = (x2269<((x2270<=x2271)>>x2272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x2289 = 13566845U;
	int16_t x2290 = INT16_MAX;
	volatile int32_t x2291 = INT32_MIN;
	uint8_t x2292 = 0U;
	int32_t t68 = 69342;

	t68 = (x2289<((x2290<=x2291)>>x2292));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2325 = -15;
	volatile uint64_t x2326 = UINT64_MAX;
	int64_t x2327 = 0LL;
	volatile int32_t t69 = 0;

	t69 = (x2325<((x2326<=x2327)>>x2328));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x2333 = UINT64_MAX;
	int32_t x2334 = INT32_MAX;
	static int32_t x2335 = -1;

	t70 = (x2333<((x2334<=x2335)>>x2336));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x2377 = 12156309178LLU;
	int64_t x2378 = INT64_MIN;
	uint8_t x2379 = UINT8_MAX;
	volatile uint8_t x2380 = 4U;
	volatile int32_t t71 = 5166629;

	t71 = (x2377<((x2378<=x2379)>>x2380));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x2457 = 1213320LL;
	int16_t x2458 = INT16_MIN;
	uint32_t x2459 = 2206831U;
	int8_t x2460 = 5;

	t72 = (x2457<((x2458<=x2459)>>x2460));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x2481 = INT8_MIN;
	uint64_t x2483 = 660912399605152LLU;
	uint8_t x2484 = 0U;
	static int32_t t73 = -329177843;

	t73 = (x2481<((x2482<=x2483)>>x2484));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x2533 = INT32_MAX;
	volatile uint64_t x2534 = 64823LLU;
	int64_t x2535 = -1LL;
	uint8_t x2536 = 7U;
	volatile int32_t t74 = 21;

	t74 = (x2533<((x2534<=x2535)>>x2536));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x2609 = INT64_MAX;
	uint64_t x2610 = UINT64_MAX;
	int8_t x2611 = INT8_MAX;
	static volatile int32_t t75 = 59663811;

	t75 = (x2609<((x2610<=x2611)>>x2612));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x2621 = 116673;
	static int32_t x2622 = -1;
	int8_t x2623 = 1;
	static uint64_t x2624 = 0LLU;

	t76 = (x2621<((x2622<=x2623)>>x2624));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x2641 = INT64_MIN;
	int64_t x2642 = INT64_MAX;
	uint64_t x2643 = 354760962487LLU;
	static uint32_t x2644 = 14U;

	t77 = (x2641<((x2642<=x2643)>>x2644));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x2701 = -1;
	int64_t x2703 = INT64_MIN;
	static volatile int32_t t78 = -535;

	t78 = (x2701<((x2702<=x2703)>>x2704));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x2705 = INT64_MIN;
	uint32_t x2706 = 188U;
	uint64_t x2707 = 3747225766563930LLU;
	uint32_t x2708 = 7U;
	volatile int32_t t79 = 43;

	t79 = (x2705<((x2706<=x2707)>>x2708));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x2709 = 225;
	static int32_t x2711 = INT32_MAX;
	static volatile uint8_t x2712 = 3U;
	int32_t t80 = 417;

	t80 = (x2709<((x2710<=x2711)>>x2712));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x2713 = -4064;
	volatile uint32_t x2714 = UINT32_MAX;
	static int16_t x2715 = 0;
	uint8_t x2716 = 18U;
	volatile int32_t t81 = -40697059;

	t81 = (x2713<((x2714<=x2715)>>x2716));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x2778 = 5LL;
	int32_t x2779 = INT32_MAX;
	volatile int8_t x2780 = 30;
	volatile int32_t t82 = 63965835;

	t82 = (x2777<((x2778<=x2779)>>x2780));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x2835 = -11;
	int32_t x2836 = 2;

	t83 = (x2833<((x2834<=x2835)>>x2836));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x2839 = UINT16_MAX;
	volatile int8_t x2840 = 20;
	volatile int32_t t84 = 937338732;

	t84 = (x2837<((x2838<=x2839)>>x2840));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x2880 = 1;
	volatile int32_t t85 = 2790;

	t85 = (x2877<((x2878<=x2879)>>x2880));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x2898 = -1;
	uint8_t x2899 = UINT8_MAX;
	uint16_t x2900 = 3U;
	volatile int32_t t86 = -44592885;

	t86 = (x2897<((x2898<=x2899)>>x2900));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x2906 = INT16_MIN;
	int64_t x2907 = INT64_MIN;
	uint8_t x2908 = 0U;
	volatile int32_t t87 = -47;

	t87 = (x2905<((x2906<=x2907)>>x2908));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x2910 = -1;
	int8_t x2911 = 0;
	int8_t x2912 = 6;
	volatile int32_t t88 = -8574461;

	t88 = (x2909<((x2910<=x2911)>>x2912));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x2914 = INT32_MIN;
	uint64_t x2915 = UINT64_MAX;
	int8_t x2916 = 1;
	int32_t t89 = 1;

	t89 = (x2913<((x2914<=x2915)>>x2916));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x2957 = INT16_MAX;
	static int8_t x2958 = INT8_MAX;
	int32_t x2959 = -323447480;
	uint32_t x2960 = 1U;
	volatile int32_t t90 = 296;

	t90 = (x2957<((x2958<=x2959)>>x2960));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x2965 = 43325656;
	static int64_t x2967 = -1637821700307266LL;
	int32_t x2968 = 7;
	int32_t t91 = 248;

	t91 = (x2965<((x2966<=x2967)>>x2968));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x2981 = 2856LLU;
	int32_t x2982 = -1;
	volatile int64_t x2983 = 0LL;
	uint16_t x2984 = 1U;
	volatile int32_t t92 = 637680599;

	t92 = (x2981<((x2982<=x2983)>>x2984));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x2993 = UINT8_MAX;
	uint64_t x2994 = 3LLU;
	int32_t x2995 = INT32_MIN;
	int8_t x2996 = 0;
	static int32_t t93 = 3437244;

	t93 = (x2993<((x2994<=x2995)>>x2996));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x3033 = INT64_MIN;
	volatile int32_t x3034 = INT32_MIN;
	int8_t x3035 = INT8_MIN;
	uint8_t x3036 = 11U;

	t94 = (x3033<((x3034<=x3035)>>x3036));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x3089 = 517689LLU;
	int16_t x3091 = INT16_MAX;
	uint16_t x3092 = 5U;

	t95 = (x3089<((x3090<=x3091)>>x3092));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x3173 = UINT16_MAX;
	int8_t x3174 = 0;
	int16_t x3175 = INT16_MIN;
	volatile uint8_t x3176 = 2U;
	volatile int32_t t96 = -1;

	t96 = (x3173<((x3174<=x3175)>>x3176));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x3249 = UINT64_MAX;
	volatile uint16_t x3250 = UINT16_MAX;
	int16_t x3251 = 801;
	volatile int8_t x3252 = 1;

	t97 = (x3249<((x3250<=x3251)>>x3252));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x3309 = -1LL;
	uint8_t x3310 = UINT8_MAX;
	int8_t x3311 = INT8_MAX;
	int8_t x3312 = 1;
	int32_t t98 = -31;

	t98 = (x3309<((x3310<=x3311)>>x3312));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x3394 = 88;
	uint8_t x3396 = 31U;
	static volatile int32_t t99 = -865978;

	t99 = (x3393<((x3394<=x3395)>>x3396));

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

