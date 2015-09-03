#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x71 = -1;
volatile int32_t t1 = -18;
static int8_t x96 = -1;
int32_t t2 = 29581837;
int16_t x124 = 0;
int32_t t5 = -684664059;
int32_t x280 = -454374;
int8_t x312 = -2;
int8_t x376 = -1;
int64_t x438 = INT64_MIN;
int8_t x481 = -1;
int32_t x505 = -1;
volatile int8_t x615 = -1;
uint32_t x616 = UINT32_MAX;
int16_t x627 = 0;
int64_t x628 = -1LL;
volatile int32_t t18 = 1;
int8_t x656 = 0;
int32_t x764 = -1;
volatile int16_t x776 = -1;
static int32_t x835 = 100;
uint8_t x858 = 92U;
int32_t t24 = -410570805;
int64_t x903 = INT64_MIN;
static volatile int32_t t25 = 830155409;
volatile int16_t x934 = 0;
int8_t x936 = -2;
int16_t x993 = INT16_MIN;
int8_t x1065 = INT8_MIN;
volatile int32_t t30 = 2;
uint8_t x1075 = 0U;
int32_t x1100 = -1;
int64_t x1130 = -8454462138468969LL;
int32_t t34 = 969;
int8_t x1221 = INT8_MIN;
uint32_t x1222 = 0U;
int32_t t36 = -53988;
int16_t x1245 = INT16_MAX;
int32_t t37 = -584;
uint32_t x1291 = UINT32_MAX;
int32_t x1367 = 0;
volatile int64_t x1437 = 0LL;
uint32_t x1438 = 91849U;
int64_t x1462 = INT64_MIN;
static volatile int32_t t43 = -108254962;
static int8_t x1544 = -1;
int8_t x1554 = INT8_MIN;
int8_t x1662 = -3;
int32_t x1663 = -1;
static int32_t t48 = 149987;
int16_t x1731 = 0;
volatile int32_t t52 = 29;
uint8_t x1834 = 12U;
static volatile int32_t x1836 = -1;
int16_t x1872 = INT16_MAX;
volatile int32_t t56 = -19026897;
int8_t x1991 = 0;
static volatile int32_t x1992 = INT32_MIN;
volatile int32_t x2032 = INT32_MIN;
volatile int32_t t61 = 277492274;
uint16_t x2172 = 0U;
static volatile int16_t x2233 = INT16_MIN;
volatile uint8_t x2236 = 1U;
int32_t x2254 = 50307;
uint8_t x2256 = 0U;
int32_t t64 = 10;
int16_t x2421 = INT16_MAX;
static volatile int8_t x2439 = 0;
volatile uint64_t x2514 = UINT64_MAX;
volatile int32_t t70 = -579604;
volatile int32_t t73 = 675562;
volatile uint64_t x2813 = 79683750435767LLU;
int8_t x2814 = INT8_MIN;
static uint8_t x2815 = 0U;
uint16_t x2838 = 152U;
uint8_t x2936 = 63U;
int8_t x2938 = INT8_MIN;
uint8_t x2939 = 0U;
static int8_t x2967 = 0;
uint16_t x2968 = 1U;
volatile int16_t x2981 = INT16_MIN;
static int64_t x2983 = -1LL;
int8_t x2993 = -1;
volatile int64_t x2994 = INT64_MAX;
static int32_t x3022 = INT32_MIN;
int16_t x3185 = -14;
int64_t x3188 = -1LL;
int32_t t83 = 100385589;
int8_t x3199 = 0;
int8_t x3200 = INT8_MIN;
uint16_t x3254 = 414U;
uint8_t x3256 = 0U;
volatile int32_t t85 = 412032419;
int16_t x3498 = -1;
int32_t t90 = -752152740;
int8_t x3638 = -1;
uint16_t x3653 = 27U;
volatile int32_t x3706 = 189578;
static int16_t x3708 = 0;
int64_t x3762 = INT64_MIN;
uint64_t x3789 = UINT64_MAX;
int32_t t96 = -10738081;
static volatile int16_t x3842 = 13;
uint8_t x3844 = 0U;
int32_t x3854 = INT32_MIN;
static volatile int32_t t99 = 3243;


void f0(void) {
	static volatile uint8_t x41 = 30U;
	int8_t x42 = INT8_MIN;
	int16_t x43 = 0;
	int32_t x44 = INT32_MIN;
	int32_t t0 = -38701766;

	t0 = ((x41<=x42)>>(x43*x44));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x69 = 23U;
	static int16_t x70 = -1;
	uint64_t x72 = UINT64_MAX;

	t1 = ((x69<=x70)>>(x71*x72));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x93 = 1726U;
	int16_t x94 = -1828;
	int16_t x95 = -3;

	t2 = ((x93<=x94)>>(x95*x96));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x121 = -280080453463LL;
	volatile uint64_t x122 = UINT64_MAX;
	int16_t x123 = -1;
	int32_t t3 = -94953;

	t3 = ((x121<=x122)>>(x123*x124));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x225 = INT64_MAX;
	volatile int16_t x226 = INT16_MAX;
	volatile uint64_t x227 = 5545353732723446500LLU;
	int64_t x228 = INT64_MIN;
	volatile int32_t t4 = 13;

	t4 = ((x225<=x226)>>(x227*x228));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x237 = 95778679186LL;
	static int64_t x238 = -1LL;
	volatile int8_t x239 = -12;
	int16_t x240 = 0;

	t5 = ((x237<=x238)>>(x239*x240));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x261 = UINT32_MAX;
	volatile int16_t x262 = 180;
	int8_t x263 = -7;
	static uint32_t x264 = UINT32_MAX;
	int32_t t6 = 5911031;

	t6 = ((x261<=x262)>>(x263*x264));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x269 = INT32_MIN;
	static int64_t x270 = -1LL;
	int8_t x271 = 0;
	uint16_t x272 = 4662U;
	static volatile int32_t t7 = -7;

	t7 = ((x269<=x270)>>(x271*x272));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x277 = INT64_MIN;
	uint16_t x278 = 1U;
	uint16_t x279 = 0U;
	volatile int32_t t8 = 0;

	t8 = ((x277<=x278)>>(x279*x280));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x301 = INT32_MAX;
	static int32_t x302 = -1;
	static volatile int64_t x303 = INT64_MAX;
	volatile uint8_t x304 = 0U;
	static volatile int32_t t9 = -3304864;

	t9 = ((x301<=x302)>>(x303*x304));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x309 = 719U;
	uint64_t x310 = 4414092374566423514LLU;
	uint32_t x311 = UINT32_MAX;
	volatile int32_t t10 = -18;

	t10 = ((x309<=x310)>>(x311*x312));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x369 = 4U;
	uint16_t x370 = 837U;
	int8_t x371 = -1;
	int64_t x372 = -1LL;
	static int32_t t11 = -478698354;

	t11 = ((x369<=x370)>>(x371*x372));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x373 = -7878;
	int8_t x374 = 2;
	int16_t x375 = -15;
	int32_t t12 = 1;

	t12 = ((x373<=x374)>>(x375*x376));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x437 = INT16_MIN;
	volatile uint8_t x439 = 0U;
	static int32_t x440 = -23;
	volatile int32_t t13 = -1;

	t13 = ((x437<=x438)>>(x439*x440));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x482 = UINT64_MAX;
	static volatile int16_t x483 = -1;
	int8_t x484 = -1;
	static int32_t t14 = 8098759;

	t14 = ((x481<=x482)>>(x483*x484));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x506 = 91096U;
	static uint8_t x507 = 0U;
	int8_t x508 = 5;
	static int32_t t15 = 24403844;

	t15 = ((x505<=x506)>>(x507*x508));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x577 = 539;
	int64_t x578 = 10962LL;
	volatile uint16_t x579 = 0U;
	int16_t x580 = INT16_MAX;
	int32_t t16 = -77383514;

	t16 = ((x577<=x578)>>(x579*x580));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x613 = 13U;
	int32_t x614 = -5;
	int32_t t17 = -198411114;

	t17 = ((x613<=x614)>>(x615*x616));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x625 = 1292393086084LLU;
	uint8_t x626 = 2U;

	t18 = ((x625<=x626)>>(x627*x628));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x653 = -1LL;
	static uint64_t x654 = 91900954976LLU;
	int64_t x655 = INT64_MIN;
	int32_t t19 = 401993410;

	t19 = ((x653<=x654)>>(x655*x656));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x681 = INT64_MIN;
	int64_t x682 = -52713097189298LL;
	volatile int32_t x683 = -1;
	volatile int8_t x684 = -1;
	volatile int32_t t20 = -125270;

	t20 = ((x681<=x682)>>(x683*x684));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x761 = INT8_MIN;
	uint64_t x762 = 155545355661289764LLU;
	uint8_t x763 = 0U;
	int32_t t21 = -11116344;

	t21 = ((x761<=x762)>>(x763*x764));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x773 = 55130039182LLU;
	int8_t x774 = 1;
	volatile int64_t x775 = -1LL;
	volatile int32_t t22 = -203704230;

	t22 = ((x773<=x774)>>(x775*x776));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x833 = 2LLU;
	uint32_t x834 = 55416729U;
	int8_t x836 = 0;
	volatile int32_t t23 = -21650858;

	t23 = ((x833<=x834)>>(x835*x836));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x857 = -1LL;
	volatile int8_t x859 = -7;
	int16_t x860 = -1;

	t24 = ((x857<=x858)>>(x859*x860));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x901 = -228;
	uint64_t x902 = 67116852934007041LLU;
	static uint16_t x904 = 0U;

	t25 = ((x901<=x902)>>(x903*x904));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x933 = INT8_MIN;
	int32_t x935 = -1;
	volatile int32_t t26 = -4;

	t26 = ((x933<=x934)>>(x935*x936));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x981 = -2;
	uint32_t x982 = 127629U;
	int32_t x983 = -1;
	int16_t x984 = -1;
	volatile int32_t t27 = 0;

	t27 = ((x981<=x982)>>(x983*x984));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x994 = 0U;
	int16_t x995 = 0;
	static uint16_t x996 = 46U;
	int32_t t28 = -3443;

	t28 = ((x993<=x994)>>(x995*x996));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint16_t x1009 = 1291U;
	static uint64_t x1010 = UINT64_MAX;
	static uint32_t x1011 = 2U;
	uint8_t x1012 = 12U;
	static volatile int32_t t29 = -20106747;

	t29 = ((x1009<=x1010)>>(x1011*x1012));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1066 = INT32_MIN;
	volatile uint16_t x1067 = 0U;
	static int64_t x1068 = -3015418LL;

	t30 = ((x1065<=x1066)>>(x1067*x1068));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x1073 = -5;
	uint32_t x1074 = 119256821U;
	int16_t x1076 = INT16_MIN;
	int32_t t31 = 51;

	t31 = ((x1073<=x1074)>>(x1075*x1076));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x1077 = 45U;
	volatile int8_t x1078 = -2;
	static volatile uint64_t x1079 = 1367369652272LLU;
	int64_t x1080 = INT64_MIN;
	int32_t t32 = -870568449;

	t32 = ((x1077<=x1078)>>(x1079*x1080));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1097 = 0U;
	int32_t x1098 = INT32_MAX;
	static int32_t x1099 = -1;
	volatile int32_t t33 = -33002888;

	t33 = ((x1097<=x1098)>>(x1099*x1100));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1129 = -15;
	uint16_t x1131 = 36U;
	int8_t x1132 = 0;

	t34 = ((x1129<=x1130)>>(x1131*x1132));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x1141 = 11LLU;
	int64_t x1142 = -11063784405LL;
	int16_t x1143 = -1;
	volatile int16_t x1144 = -1;
	volatile int32_t t35 = 3170843;

	t35 = ((x1141<=x1142)>>(x1143*x1144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x1223 = 0;
	static int64_t x1224 = INT64_MAX;

	t36 = ((x1221<=x1222)>>(x1223*x1224));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1246 = UINT64_MAX;
	static int16_t x1247 = -1;
	uint64_t x1248 = UINT64_MAX;

	t37 = ((x1245<=x1246)>>(x1247*x1248));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1257 = INT8_MIN;
	volatile int8_t x1258 = INT8_MIN;
	uint64_t x1259 = 377693106306LLU;
	int64_t x1260 = INT64_MIN;
	volatile int32_t t38 = -393515618;

	t38 = ((x1257<=x1258)>>(x1259*x1260));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x1289 = 98713LL;
	static uint32_t x1290 = 3U;
	int8_t x1292 = -1;
	static int32_t t39 = -180;

	t39 = ((x1289<=x1290)>>(x1291*x1292));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1337 = INT16_MIN;
	int64_t x1338 = INT64_MIN;
	int8_t x1339 = -1;
	int32_t x1340 = -1;
	int32_t t40 = 23;

	t40 = ((x1337<=x1338)>>(x1339*x1340));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1365 = -1;
	int8_t x1366 = INT8_MIN;
	static volatile uint64_t x1368 = 13LLU;
	volatile int32_t t41 = 862062;

	t41 = ((x1365<=x1366)>>(x1367*x1368));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1439 = -1LL;
	int16_t x1440 = -1;
	volatile int32_t t42 = 1815410;

	t42 = ((x1437<=x1438)>>(x1439*x1440));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1461 = -1;
	volatile uint8_t x1463 = 1U;
	uint8_t x1464 = 13U;

	t43 = ((x1461<=x1462)>>(x1463*x1464));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1541 = INT16_MIN;
	uint8_t x1542 = UINT8_MAX;
	volatile uint32_t x1543 = UINT32_MAX;
	volatile int32_t t44 = -7840;

	t44 = ((x1541<=x1542)>>(x1543*x1544));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1545 = -2092;
	uint64_t x1546 = 1037855LLU;
	int64_t x1547 = -1LL;
	static uint8_t x1548 = 0U;
	static int32_t t45 = 100;

	t45 = ((x1545<=x1546)>>(x1547*x1548));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1553 = INT64_MAX;
	int8_t x1555 = -1;
	static int8_t x1556 = -1;
	int32_t t46 = 15;

	t46 = ((x1553<=x1554)>>(x1555*x1556));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1661 = INT32_MIN;
	volatile int8_t x1664 = -9;
	static volatile int32_t t47 = 0;

	t47 = ((x1661<=x1662)>>(x1663*x1664));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x1665 = INT32_MIN;
	int64_t x1666 = -2LL;
	static int32_t x1667 = -5;
	static volatile int16_t x1668 = -3;

	t48 = ((x1665<=x1666)>>(x1667*x1668));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1697 = -1LL;
	int16_t x1698 = INT16_MIN;
	int16_t x1699 = -1;
	volatile int64_t x1700 = -1LL;
	static int32_t t49 = -409;

	t49 = ((x1697<=x1698)>>(x1699*x1700));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x1721 = 5U;
	static int16_t x1722 = INT16_MAX;
	static int8_t x1723 = -1;
	volatile int8_t x1724 = -1;
	int32_t t50 = -385165482;

	t50 = ((x1721<=x1722)>>(x1723*x1724));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x1729 = INT64_MAX;
	static uint32_t x1730 = UINT32_MAX;
	volatile int64_t x1732 = 305LL;
	volatile int32_t t51 = -582;

	t51 = ((x1729<=x1730)>>(x1731*x1732));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x1789 = 1U;
	int32_t x1790 = INT32_MIN;
	int16_t x1791 = -1;
	int8_t x1792 = -2;

	t52 = ((x1789<=x1790)>>(x1791*x1792));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x1833 = -1;
	static int16_t x1835 = -1;
	volatile int32_t t53 = -1864;

	t53 = ((x1833<=x1834)>>(x1835*x1836));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x1869 = -1;
	int16_t x1870 = INT16_MAX;
	volatile uint8_t x1871 = 0U;
	int32_t t54 = 726;

	t54 = ((x1869<=x1870)>>(x1871*x1872));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x1937 = 29U;
	volatile uint64_t x1938 = UINT64_MAX;
	int16_t x1939 = -1;
	int64_t x1940 = -1LL;
	static int32_t t55 = 914107697;

	t55 = ((x1937<=x1938)>>(x1939*x1940));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint16_t x1945 = 486U;
	static uint8_t x1946 = UINT8_MAX;
	int64_t x1947 = INT64_MIN;
	uint64_t x1948 = 60LLU;

	t56 = ((x1945<=x1946)>>(x1947*x1948));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x1989 = -1;
	int32_t x1990 = 14;
	volatile int32_t t57 = -1;

	t57 = ((x1989<=x1990)>>(x1991*x1992));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x2013 = INT16_MIN;
	static uint8_t x2014 = UINT8_MAX;
	static int8_t x2015 = -1;
	volatile uint64_t x2016 = UINT64_MAX;
	int32_t t58 = 0;

	t58 = ((x2013<=x2014)>>(x2015*x2016));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x2025 = INT16_MIN;
	int64_t x2026 = -1LL;
	int16_t x2027 = INT16_MAX;
	static uint8_t x2028 = 0U;
	volatile int32_t t59 = -971770;

	t59 = ((x2025<=x2026)>>(x2027*x2028));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x2029 = 63U;
	int32_t x2030 = -45720725;
	uint8_t x2031 = 0U;
	static volatile int32_t t60 = 691656930;

	t60 = ((x2029<=x2030)>>(x2031*x2032));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2113 = INT32_MIN;
	int16_t x2114 = -24;
	int64_t x2115 = INT64_MIN;
	uint32_t x2116 = 0U;

	t61 = ((x2113<=x2114)>>(x2115*x2116));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x2169 = 48LLU;
	int8_t x2170 = INT8_MIN;
	static int8_t x2171 = INT8_MIN;
	int32_t t62 = -31828;

	t62 = ((x2169<=x2170)>>(x2171*x2172));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x2234 = INT32_MIN;
	uint32_t x2235 = 0U;
	volatile int32_t t63 = 1;

	t63 = ((x2233<=x2234)>>(x2235*x2236));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x2253 = 98545LLU;
	int64_t x2255 = -21047LL;

	t64 = ((x2253<=x2254)>>(x2255*x2256));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x2257 = UINT16_MAX;
	uint32_t x2258 = 74643062U;
	uint32_t x2259 = 6U;
	uint16_t x2260 = 0U;
	volatile int32_t t65 = -97960752;

	t65 = ((x2257<=x2258)>>(x2259*x2260));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x2301 = -1;
	volatile int32_t x2302 = INT32_MIN;
	int16_t x2303 = -7;
	int16_t x2304 = -1;
	volatile int32_t t66 = -3035531;

	t66 = ((x2301<=x2302)>>(x2303*x2304));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2422 = -1;
	int32_t x2423 = INT32_MAX;
	int8_t x2424 = 0;
	int32_t t67 = -13703954;

	t67 = ((x2421<=x2422)>>(x2423*x2424));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x2437 = 46U;
	static int32_t x2438 = 7273;
	static uint8_t x2440 = UINT8_MAX;
	volatile int32_t t68 = -32715998;

	t68 = ((x2437<=x2438)>>(x2439*x2440));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x2513 = INT16_MIN;
	int8_t x2515 = -22;
	uint64_t x2516 = UINT64_MAX;
	static int32_t t69 = 4807;

	t69 = ((x2513<=x2514)>>(x2515*x2516));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x2573 = INT16_MIN;
	volatile int8_t x2574 = INT8_MAX;
	volatile int16_t x2575 = -3;
	volatile int32_t x2576 = -1;

	t70 = ((x2573<=x2574)>>(x2575*x2576));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint16_t x2665 = 2U;
	int64_t x2666 = -4110LL;
	volatile uint8_t x2667 = 0U;
	int32_t x2668 = -1;
	volatile int32_t t71 = -1072952;

	t71 = ((x2665<=x2666)>>(x2667*x2668));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2721 = 1;
	uint16_t x2722 = 2U;
	volatile int32_t x2723 = -1;
	int8_t x2724 = -1;
	volatile int32_t t72 = -849;

	t72 = ((x2721<=x2722)>>(x2723*x2724));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x2733 = 8;
	uint64_t x2734 = UINT64_MAX;
	volatile int64_t x2735 = INT64_MIN;
	uint8_t x2736 = 0U;

	t73 = ((x2733<=x2734)>>(x2735*x2736));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x2816 = 12U;
	volatile int32_t t74 = 3;

	t74 = ((x2813<=x2814)>>(x2815*x2816));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x2837 = INT64_MIN;
	int8_t x2839 = -1;
	uint64_t x2840 = 0LLU;
	volatile int32_t t75 = 1724;

	t75 = ((x2837<=x2838)>>(x2839*x2840));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x2933 = INT64_MAX;
	int64_t x2934 = -373LL;
	uint8_t x2935 = 0U;
	volatile int32_t t76 = -375;

	t76 = ((x2933<=x2934)>>(x2935*x2936));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x2937 = 117U;
	int64_t x2940 = INT64_MIN;
	int32_t t77 = -3;

	t77 = ((x2937<=x2938)>>(x2939*x2940));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x2965 = INT8_MIN;
	int64_t x2966 = INT64_MAX;
	volatile int32_t t78 = 7840526;

	t78 = ((x2965<=x2966)>>(x2967*x2968));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x2982 = UINT32_MAX;
	int64_t x2984 = -1LL;
	static int32_t t79 = -33538336;

	t79 = ((x2981<=x2982)>>(x2983*x2984));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x2995 = -1;
	int64_t x2996 = -1LL;
	volatile int32_t t80 = 3;

	t80 = ((x2993<=x2994)>>(x2995*x2996));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x3021 = INT64_MAX;
	static int32_t x3023 = -1;
	int32_t x3024 = -1;
	volatile int32_t t81 = 13452;

	t81 = ((x3021<=x3022)>>(x3023*x3024));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x3077 = INT16_MIN;
	static uint8_t x3078 = 5U;
	static volatile int32_t x3079 = 0;
	int32_t x3080 = INT32_MIN;
	static int32_t t82 = -7;

	t82 = ((x3077<=x3078)>>(x3079*x3080));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x3186 = INT16_MAX;
	int8_t x3187 = -1;

	t83 = ((x3185<=x3186)>>(x3187*x3188));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x3197 = UINT32_MAX;
	int32_t x3198 = 1693;
	static int32_t t84 = -5507812;

	t84 = ((x3197<=x3198)>>(x3199*x3200));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x3253 = UINT16_MAX;
	static uint64_t x3255 = UINT64_MAX;

	t85 = ((x3253<=x3254)>>(x3255*x3256));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x3493 = INT16_MIN;
	int16_t x3494 = -1;
	int32_t x3495 = -1;
	uint8_t x3496 = 0U;
	int32_t t86 = -464;

	t86 = ((x3493<=x3494)>>(x3495*x3496));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x3497 = 0;
	int16_t x3499 = -1;
	int8_t x3500 = 0;
	static int32_t t87 = 5705665;

	t87 = ((x3497<=x3498)>>(x3499*x3500));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x3557 = 1563;
	uint64_t x3558 = UINT64_MAX;
	int8_t x3559 = -4;
	int8_t x3560 = -1;
	int32_t t88 = -129324;

	t88 = ((x3557<=x3558)>>(x3559*x3560));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x3613 = 10512107U;
	int64_t x3614 = -1048048LL;
	int32_t x3615 = 0;
	int8_t x3616 = INT8_MIN;
	volatile int32_t t89 = 0;

	t89 = ((x3613<=x3614)>>(x3615*x3616));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x3625 = 327496628434318376LL;
	static volatile int32_t x3626 = 181529245;
	int32_t x3627 = 0;
	int64_t x3628 = INT64_MIN;

	t90 = ((x3625<=x3626)>>(x3627*x3628));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x3637 = -842377236050LL;
	uint8_t x3639 = 1U;
	volatile int8_t x3640 = 9;
	static volatile int32_t t91 = -2;

	t91 = ((x3637<=x3638)>>(x3639*x3640));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x3649 = UINT8_MAX;
	int8_t x3650 = 1;
	volatile int16_t x3651 = -1;
	volatile int32_t x3652 = -14;
	int32_t t92 = -98740;

	t92 = ((x3649<=x3650)>>(x3651*x3652));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int8_t x3654 = INT8_MIN;
	static volatile uint8_t x3655 = UINT8_MAX;
	int16_t x3656 = 0;
	volatile int32_t t93 = -984296;

	t93 = ((x3653<=x3654)>>(x3655*x3656));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x3705 = 56U;
	volatile int64_t x3707 = INT64_MIN;
	volatile int32_t t94 = -374322;

	t94 = ((x3705<=x3706)>>(x3707*x3708));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x3761 = INT32_MIN;
	uint32_t x3763 = UINT32_MAX;
	uint32_t x3764 = UINT32_MAX;
	static volatile int32_t t95 = 12793;

	t95 = ((x3761<=x3762)>>(x3763*x3764));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x3790 = INT32_MIN;
	volatile int8_t x3791 = -1;
	uint64_t x3792 = UINT64_MAX;

	t96 = ((x3789<=x3790)>>(x3791*x3792));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x3837 = 115U;
	int8_t x3838 = -29;
	volatile uint8_t x3839 = UINT8_MAX;
	uint16_t x3840 = 0U;
	volatile int32_t t97 = -22111;

	t97 = ((x3837<=x3838)>>(x3839*x3840));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x3841 = -991350923LL;
	static int64_t x3843 = INT64_MIN;
	int32_t t98 = 57493;

	t98 = ((x3841<=x3842)>>(x3843*x3844));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x3853 = 27U;
	uint8_t x3855 = 0U;
	int32_t x3856 = 474071;

	t99 = ((x3853<=x3854)>>(x3855*x3856));

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

