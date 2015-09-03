#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x4 = 8;
int8_t x10 = INT8_MIN;
int64_t x93 = -1LL;
uint32_t x119 = 151181U;
int64_t x189 = INT64_MAX;
volatile int32_t t5 = -75784;
uint16_t x196 = 1U;
static volatile int16_t x227 = INT16_MAX;
int8_t x228 = 1;
uint16_t x266 = UINT16_MAX;
volatile uint8_t x268 = 2U;
static int32_t x270 = -24715;
uint32_t x305 = 81548310U;
uint16_t x308 = 3U;
volatile uint8_t x354 = 28U;
uint32_t x435 = 88U;
volatile int32_t t16 = 7;
volatile int8_t x503 = 39;
uint8_t x559 = 3U;
volatile int32_t t19 = -64384637;
uint64_t x645 = 27577360LLU;
volatile int32_t t21 = 35759204;
int16_t x719 = INT16_MIN;
int64_t x814 = INT64_MAX;
int32_t x857 = INT32_MIN;
uint8_t x858 = 1U;
int64_t x859 = 39LL;
volatile int8_t x906 = -22;
static int64_t x909 = 1930711671LL;
static int64_t x910 = 477654LL;
volatile int32_t x911 = INT32_MIN;
int64_t x979 = -1LL;
int64_t x1049 = -70161495029055LL;
int16_t x1070 = -1;
volatile int8_t x1072 = 22;
int32_t x1074 = -14033;
volatile int32_t t33 = 0;
uint32_t x1082 = 178064U;
int32_t t36 = -16360;
int32_t x1149 = -1;
int8_t x1151 = 1;
int16_t x1152 = 0;
int32_t x1185 = -759597968;
uint8_t x1337 = UINT8_MAX;
int16_t x1382 = 104;
static volatile int32_t x1383 = -8;
int64_t x1553 = -6023LL;
volatile int32_t t42 = -465757;
uint16_t x1576 = 2U;
volatile int32_t t44 = 3917;
int64_t x1591 = -454463687111661LL;
int32_t t45 = 3655;
static int16_t x1598 = 508;
int16_t x1600 = 8;
volatile int32_t t47 = 2;
volatile int16_t x1628 = 1;
int16_t x1673 = -59;
volatile int32_t x1675 = INT32_MAX;
volatile int32_t t50 = 48062;
static uint32_t x1735 = 1717U;
volatile int32_t t53 = 45184;
int32_t t54 = 454235;
static uint8_t x1844 = 0U;
static uint16_t x1846 = 2060U;
int64_t x1847 = 371051438LL;
int32_t x1848 = 28;
static int64_t x1858 = 57485741709312LL;
uint16_t x1860 = 0U;
int8_t x1865 = INT8_MAX;
static uint64_t x1867 = 318LLU;
uint8_t x1868 = 25U;
volatile int32_t t59 = 191093579;
volatile int16_t x1906 = INT16_MAX;
volatile uint8_t x1908 = 1U;
static uint8_t x1932 = 3U;
static volatile int32_t x1974 = INT32_MIN;
int32_t t62 = -6732;
int32_t t63 = 88454255;
volatile int32_t t64 = 125038;
uint8_t x2139 = 48U;
volatile int32_t t65 = 2091;
int32_t x2142 = INT32_MIN;
int32_t x2143 = INT32_MIN;
int32_t t66 = -83904113;
uint8_t x2172 = 1U;
uint8_t x2182 = UINT8_MAX;
int8_t x2190 = 28;
uint8_t x2221 = UINT8_MAX;
int16_t x2224 = 6;
volatile uint16_t x2250 = 380U;
static volatile int32_t t71 = -25653;
uint64_t x2285 = 9LLU;
int32_t x2286 = 204242;
int16_t x2287 = INT16_MIN;
int8_t x2288 = 9;
uint16_t x2306 = UINT16_MAX;
int16_t x2307 = -1;
int32_t t73 = 17214;
int32_t x2419 = INT32_MAX;
volatile uint8_t x2521 = 104U;
uint8_t x2585 = 1U;
static uint16_t x2586 = 51U;
uint8_t x2623 = UINT8_MAX;
static int16_t x2677 = INT16_MIN;
uint32_t x2678 = UINT32_MAX;
uint8_t x2704 = 24U;
uint8_t x2705 = 1U;
int16_t x2708 = 0;
int64_t x2722 = -300814097041824LL;
int8_t x2724 = 0;
int16_t x2750 = -1;
int8_t x2752 = 30;
static uint8_t x2805 = UINT8_MAX;
int64_t x2806 = 1947879201LL;
int8_t x2816 = 0;
int32_t t91 = 83;
volatile int32_t t93 = -15031;
uint8_t x2877 = UINT8_MAX;
volatile uint16_t x2878 = 776U;
int64_t x2979 = INT64_MAX;
int16_t x3018 = INT16_MIN;
int8_t x3019 = -7;
volatile int32_t x3061 = INT32_MAX;
uint32_t x3072 = 0U;
int32_t t99 = 254;


void f0(void) {
	volatile int32_t x1 = INT32_MIN;
	int16_t x2 = INT16_MIN;
	int64_t x3 = INT64_MAX;
	volatile int32_t t0 = -228684;

	t0 = ((x1<(x2/x3))>>x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x9 = -7;
	int8_t x11 = INT8_MAX;
	uint8_t x12 = 20U;
	int32_t t1 = -25782648;

	t1 = ((x9<(x10/x11))>>x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x61 = UINT8_MAX;
	int16_t x62 = -1;
	int16_t x63 = -1;
	volatile uint8_t x64 = 0U;
	volatile int32_t t2 = -2858;

	t2 = ((x61<(x62/x63))>>x64);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x94 = -1;
	int8_t x95 = -1;
	int8_t x96 = 26;
	volatile int32_t t3 = 61;

	t3 = ((x93<(x94/x95))>>x96);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x117 = -1;
	int16_t x118 = -6428;
	static int8_t x120 = 1;
	int32_t t4 = -15594;

	t4 = ((x117<(x118/x119))>>x120);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x190 = -1;
	uint32_t x191 = 53760311U;
	static uint8_t x192 = 4U;

	t5 = ((x189<(x190/x191))>>x192);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x193 = INT32_MIN;
	static int16_t x194 = INT16_MAX;
	int16_t x195 = -1;
	int32_t t6 = 14822;

	t6 = ((x193<(x194/x195))>>x196);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x225 = 1LLU;
	uint32_t x226 = 75680U;
	static volatile int32_t t7 = 18222094;

	t7 = ((x225<(x226/x227))>>x228);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x249 = 604350U;
	int16_t x250 = -1060;
	uint32_t x251 = UINT32_MAX;
	static uint32_t x252 = 22U;
	volatile int32_t t8 = -204;

	t8 = ((x249<(x250/x251))>>x252);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x253 = 1696LLU;
	volatile int16_t x254 = INT16_MIN;
	int8_t x255 = INT8_MIN;
	volatile uint8_t x256 = 3U;
	volatile int32_t t9 = 113246;

	t9 = ((x253<(x254/x255))>>x256);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x265 = INT8_MIN;
	static int32_t x267 = INT32_MIN;
	static volatile int32_t t10 = 0;

	t10 = ((x265<(x266/x267))>>x268);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x269 = 595953;
	volatile int16_t x271 = INT16_MIN;
	int8_t x272 = 17;
	volatile int32_t t11 = -176881;

	t11 = ((x269<(x270/x271))>>x272);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x306 = -1416;
	volatile int64_t x307 = -1LL;
	volatile int32_t t12 = -3283241;

	t12 = ((x305<(x306/x307))>>x308);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x353 = 27U;
	static int16_t x355 = INT16_MIN;
	uint8_t x356 = 1U;
	int32_t t13 = 907830421;

	t13 = ((x353<(x354/x355))>>x356);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x405 = INT32_MIN;
	uint64_t x406 = UINT64_MAX;
	uint64_t x407 = 19485980339700408LLU;
	int8_t x408 = 1;
	volatile int32_t t14 = 25098;

	t14 = ((x405<(x406/x407))>>x408);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x433 = -1;
	int8_t x434 = INT8_MAX;
	volatile uint64_t x436 = 31LLU;
	int32_t t15 = -4;

	t15 = ((x433<(x434/x435))>>x436);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x469 = 48104990;
	uint64_t x470 = 10171629065291LLU;
	uint16_t x471 = 15617U;
	int64_t x472 = 1LL;

	t16 = ((x469<(x470/x471))>>x472);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x501 = INT16_MIN;
	volatile int64_t x502 = -1LL;
	volatile int16_t x504 = 26;
	int32_t t17 = -1065757;

	t17 = ((x501<(x502/x503))>>x504);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x557 = UINT64_MAX;
	int8_t x558 = -1;
	volatile uint8_t x560 = 10U;
	volatile int32_t t18 = -58;

	t18 = ((x557<(x558/x559))>>x560);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x629 = -1;
	volatile int64_t x630 = -2712570426315LL;
	uint8_t x631 = 6U;
	uint8_t x632 = 3U;

	t19 = ((x629<(x630/x631))>>x632);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x646 = INT32_MIN;
	static int32_t x647 = INT32_MAX;
	static int16_t x648 = 2;
	static volatile int32_t t20 = 289735817;

	t20 = ((x645<(x646/x647))>>x648);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x677 = -2;
	volatile int8_t x678 = INT8_MIN;
	int8_t x679 = -2;
	volatile int8_t x680 = 31;

	t21 = ((x677<(x678/x679))>>x680);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x717 = INT64_MIN;
	int16_t x718 = 16;
	int8_t x720 = 1;
	int32_t t22 = -1;

	t22 = ((x717<(x718/x719))>>x720);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x741 = 5;
	static uint32_t x742 = 1792U;
	int64_t x743 = -1LL;
	int16_t x744 = 6;
	int32_t t23 = 78;

	t23 = ((x741<(x742/x743))>>x744);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x765 = -1LL;
	static int16_t x766 = INT16_MIN;
	static volatile int64_t x767 = INT64_MIN;
	int8_t x768 = 1;
	volatile int32_t t24 = 0;

	t24 = ((x765<(x766/x767))>>x768);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x813 = -1829;
	int64_t x815 = -1LL;
	uint32_t x816 = 10U;
	volatile int32_t t25 = 20;

	t25 = ((x813<(x814/x815))>>x816);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x860 = 0U;
	static int32_t t26 = -8769;

	t26 = ((x857<(x858/x859))>>x860);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x905 = -1;
	uint8_t x907 = UINT8_MAX;
	int8_t x908 = 1;
	volatile int32_t t27 = 185079;

	t27 = ((x905<(x906/x907))>>x908);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x912 = 2U;
	int32_t t28 = 2766;

	t28 = ((x909<(x910/x911))>>x912);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x977 = -15754;
	int8_t x978 = INT8_MAX;
	int32_t x980 = 3;
	static volatile int32_t t29 = 179487;

	t29 = ((x977<(x978/x979))>>x980);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x1013 = UINT16_MAX;
	int64_t x1014 = INT64_MIN;
	static volatile uint8_t x1015 = 10U;
	static uint16_t x1016 = 0U;
	static volatile int32_t t30 = -1;

	t30 = ((x1013<(x1014/x1015))>>x1016);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1050 = 253871LLU;
	uint8_t x1051 = 3U;
	static uint16_t x1052 = 0U;
	int32_t t31 = -1015545;

	t31 = ((x1049<(x1050/x1051))>>x1052);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1069 = 225219015LLU;
	int8_t x1071 = -1;
	volatile int32_t t32 = -26;

	t32 = ((x1069<(x1070/x1071))>>x1072);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x1073 = INT8_MIN;
	volatile uint64_t x1075 = 195250689537LLU;
	uint8_t x1076 = 1U;

	t33 = ((x1073<(x1074/x1075))>>x1076);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1077 = INT8_MAX;
	static int16_t x1078 = INT16_MIN;
	uint64_t x1079 = UINT64_MAX;
	static uint32_t x1080 = 14U;
	static int32_t t34 = -2;

	t34 = ((x1077<(x1078/x1079))>>x1080);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1081 = -1;
	int64_t x1083 = -1LL;
	int8_t x1084 = 1;
	int32_t t35 = 21;

	t35 = ((x1081<(x1082/x1083))>>x1084);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x1101 = INT8_MIN;
	uint8_t x1102 = 47U;
	int64_t x1103 = 132609LL;
	uint8_t x1104 = 0U;

	t36 = ((x1101<(x1102/x1103))>>x1104);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1150 = INT8_MIN;
	volatile int32_t t37 = 87;

	t37 = ((x1149<(x1150/x1151))>>x1152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1169 = -1125;
	int64_t x1170 = INT64_MIN;
	int16_t x1171 = INT16_MIN;
	int8_t x1172 = 26;
	volatile int32_t t38 = -66438964;

	t38 = ((x1169<(x1170/x1171))>>x1172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x1186 = UINT32_MAX;
	volatile int8_t x1187 = INT8_MIN;
	uint16_t x1188 = 3U;
	volatile int32_t t39 = -15542;

	t39 = ((x1185<(x1186/x1187))>>x1188);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1338 = 425559842976835LLU;
	uint8_t x1339 = UINT8_MAX;
	static uint8_t x1340 = 1U;
	volatile int32_t t40 = 301148603;

	t40 = ((x1337<(x1338/x1339))>>x1340);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1381 = 897765967842LLU;
	uint16_t x1384 = 22U;
	static volatile int32_t t41 = -2427;

	t41 = ((x1381<(x1382/x1383))>>x1384);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1554 = INT32_MAX;
	uint8_t x1555 = 6U;
	uint16_t x1556 = 0U;

	t42 = ((x1553<(x1554/x1555))>>x1556);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1569 = INT16_MIN;
	volatile uint64_t x1570 = 275362169419602441LLU;
	uint64_t x1571 = UINT64_MAX;
	uint8_t x1572 = 7U;
	int32_t t43 = -2666;

	t43 = ((x1569<(x1570/x1571))>>x1572);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1573 = -1;
	int32_t x1574 = -1;
	static int32_t x1575 = -254799;

	t44 = ((x1573<(x1574/x1575))>>x1576);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x1589 = UINT8_MAX;
	int32_t x1590 = -1;
	int32_t x1592 = 1;

	t45 = ((x1589<(x1590/x1591))>>x1592);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x1597 = INT8_MIN;
	int32_t x1599 = -124325;
	int32_t t46 = -316431715;

	t46 = ((x1597<(x1598/x1599))>>x1600);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1609 = INT64_MIN;
	static volatile int8_t x1610 = 0;
	int32_t x1611 = -1;
	int8_t x1612 = 17;

	t47 = ((x1609<(x1610/x1611))>>x1612);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1625 = INT64_MAX;
	uint16_t x1626 = 2305U;
	int8_t x1627 = 2;
	int32_t t48 = -639877;

	t48 = ((x1625<(x1626/x1627))>>x1628);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x1661 = -1;
	int32_t x1662 = -1;
	static uint64_t x1663 = UINT64_MAX;
	int16_t x1664 = 22;
	volatile int32_t t49 = 8484626;

	t49 = ((x1661<(x1662/x1663))>>x1664);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x1674 = INT32_MIN;
	static uint32_t x1676 = 3U;

	t50 = ((x1673<(x1674/x1675))>>x1676);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x1725 = UINT32_MAX;
	volatile uint32_t x1726 = UINT32_MAX;
	static int8_t x1727 = INT8_MAX;
	volatile int16_t x1728 = 2;
	int32_t t51 = -5426137;

	t51 = ((x1725<(x1726/x1727))>>x1728);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1729 = INT8_MIN;
	int16_t x1730 = 0;
	int64_t x1731 = -1LL;
	static uint8_t x1732 = 0U;
	volatile int32_t t52 = -59;

	t52 = ((x1729<(x1730/x1731))>>x1732);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x1733 = 0;
	uint64_t x1734 = 518387847474LLU;
	uint32_t x1736 = 0U;

	t53 = ((x1733<(x1734/x1735))>>x1736);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x1769 = 7U;
	int64_t x1770 = INT64_MAX;
	int64_t x1771 = INT64_MIN;
	volatile uint8_t x1772 = 0U;

	t54 = ((x1769<(x1770/x1771))>>x1772);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x1841 = 615243475;
	int64_t x1842 = INT64_MIN;
	int16_t x1843 = INT16_MAX;
	volatile int32_t t55 = 7;

	t55 = ((x1841<(x1842/x1843))>>x1844);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x1845 = 645433020U;
	volatile int32_t t56 = 20423;

	t56 = ((x1845<(x1846/x1847))>>x1848);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x1857 = INT8_MIN;
	uint16_t x1859 = 14U;
	int32_t t57 = 10993;

	t57 = ((x1857<(x1858/x1859))>>x1860);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x1866 = -1;
	static int32_t t58 = -11;

	t58 = ((x1865<(x1866/x1867))>>x1868);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x1889 = UINT64_MAX;
	volatile int32_t x1890 = 1540;
	volatile int64_t x1891 = -8669706874450LL;
	volatile uint16_t x1892 = 27U;

	t59 = ((x1889<(x1890/x1891))>>x1892);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x1905 = 473;
	volatile uint32_t x1907 = UINT32_MAX;
	volatile int32_t t60 = 24;

	t60 = ((x1905<(x1906/x1907))>>x1908);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x1929 = INT16_MIN;
	volatile uint16_t x1930 = 3U;
	int16_t x1931 = INT16_MIN;
	static volatile int32_t t61 = -2921;

	t61 = ((x1929<(x1930/x1931))>>x1932);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x1973 = -6810339891268978LL;
	uint8_t x1975 = 15U;
	static int8_t x1976 = 15;

	t62 = ((x1973<(x1974/x1975))>>x1976);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x2001 = INT64_MAX;
	static uint16_t x2002 = UINT16_MAX;
	uint16_t x2003 = 3534U;
	uint8_t x2004 = 0U;

	t63 = ((x2001<(x2002/x2003))>>x2004);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x2133 = 15948LL;
	int64_t x2134 = INT64_MAX;
	static int32_t x2135 = -4891051;
	static int16_t x2136 = 2;

	t64 = ((x2133<(x2134/x2135))>>x2136);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x2137 = -292094;
	volatile int16_t x2138 = INT16_MAX;
	int8_t x2140 = 1;

	t65 = ((x2137<(x2138/x2139))>>x2140);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2141 = -36;
	volatile int16_t x2144 = 1;

	t66 = ((x2141<(x2142/x2143))>>x2144);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x2169 = INT32_MAX;
	volatile int32_t x2170 = INT32_MIN;
	uint64_t x2171 = 32889663LLU;
	int32_t t67 = 4565016;

	t67 = ((x2169<(x2170/x2171))>>x2172);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2181 = 0;
	uint32_t x2183 = 8637763U;
	uint8_t x2184 = 1U;
	int32_t t68 = -101922565;

	t68 = ((x2181<(x2182/x2183))>>x2184);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2189 = INT16_MIN;
	uint64_t x2191 = 3281192577421LLU;
	int16_t x2192 = 8;
	volatile int32_t t69 = 925698;

	t69 = ((x2189<(x2190/x2191))>>x2192);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x2222 = -1;
	int32_t x2223 = INT32_MAX;
	int32_t t70 = -7030;

	t70 = ((x2221<(x2222/x2223))>>x2224);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x2249 = INT64_MAX;
	uint64_t x2251 = 2904229220LLU;
	volatile uint8_t x2252 = 2U;

	t71 = ((x2249<(x2250/x2251))>>x2252);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t t72 = 10655;

	t72 = ((x2285<(x2286/x2287))>>x2288);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x2305 = INT32_MIN;
	int16_t x2308 = 0;

	t73 = ((x2305<(x2306/x2307))>>x2308);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x2417 = -54;
	uint64_t x2418 = UINT64_MAX;
	uint8_t x2420 = 0U;
	int32_t t74 = -116;

	t74 = ((x2417<(x2418/x2419))>>x2420);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x2425 = -1;
	int16_t x2426 = -602;
	volatile int8_t x2427 = INT8_MIN;
	int8_t x2428 = 6;
	int32_t t75 = -102002180;

	t75 = ((x2425<(x2426/x2427))>>x2428);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x2437 = 2U;
	volatile int64_t x2438 = -792903332087LL;
	volatile int8_t x2439 = -1;
	uint8_t x2440 = 0U;
	static int32_t t76 = -24642;

	t76 = ((x2437<(x2438/x2439))>>x2440);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2522 = -1;
	int32_t x2523 = INT32_MIN;
	uint16_t x2524 = 5U;
	volatile int32_t t77 = 162413960;

	t77 = ((x2521<(x2522/x2523))>>x2524);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x2587 = -1021955137LL;
	uint32_t x2588 = 2U;
	static int32_t t78 = 564400568;

	t78 = ((x2585<(x2586/x2587))>>x2588);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x2621 = INT64_MIN;
	uint16_t x2622 = UINT16_MAX;
	int8_t x2624 = 0;
	static int32_t t79 = -6825;

	t79 = ((x2621<(x2622/x2623))>>x2624);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x2679 = INT32_MIN;
	volatile int8_t x2680 = 3;
	volatile int32_t t80 = -7540;

	t80 = ((x2677<(x2678/x2679))>>x2680);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x2701 = INT8_MIN;
	int64_t x2702 = 2320LL;
	static volatile int32_t x2703 = INT32_MAX;
	volatile int32_t t81 = -15;

	t81 = ((x2701<(x2702/x2703))>>x2704);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x2706 = INT32_MAX;
	uint32_t x2707 = UINT32_MAX;
	int32_t t82 = 109424;

	t82 = ((x2705<(x2706/x2707))>>x2708);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x2709 = -1;
	volatile int16_t x2710 = 12;
	int16_t x2711 = INT16_MAX;
	int32_t x2712 = 6;
	volatile int32_t t83 = 145836;

	t83 = ((x2709<(x2710/x2711))>>x2712);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x2721 = INT16_MIN;
	volatile int8_t x2723 = INT8_MIN;
	int32_t t84 = 8946227;

	t84 = ((x2721<(x2722/x2723))>>x2724);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x2729 = INT16_MAX;
	int8_t x2730 = -6;
	int64_t x2731 = -1LL;
	int16_t x2732 = 3;
	volatile int32_t t85 = -1;

	t85 = ((x2729<(x2730/x2731))>>x2732);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x2749 = INT16_MAX;
	int8_t x2751 = 3;
	int32_t t86 = -1827020;

	t86 = ((x2749<(x2750/x2751))>>x2752);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x2785 = 80948306399980590LL;
	int16_t x2786 = -1;
	static volatile uint16_t x2787 = 18071U;
	uint8_t x2788 = 1U;
	static int32_t t87 = -2;

	t87 = ((x2785<(x2786/x2787))>>x2788);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x2797 = UINT64_MAX;
	int8_t x2798 = -1;
	static volatile uint8_t x2799 = 78U;
	uint16_t x2800 = 0U;
	int32_t t88 = 30034842;

	t88 = ((x2797<(x2798/x2799))>>x2800);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x2807 = 12U;
	static int16_t x2808 = 1;
	volatile int32_t t89 = 1;

	t89 = ((x2805<(x2806/x2807))>>x2808);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x2813 = 709095455U;
	static int8_t x2814 = INT8_MIN;
	uint64_t x2815 = 411378LLU;
	volatile int32_t t90 = 1;

	t90 = ((x2813<(x2814/x2815))>>x2816);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x2825 = -1;
	int64_t x2826 = INT64_MAX;
	int32_t x2827 = INT32_MAX;
	uint16_t x2828 = 9U;

	t91 = ((x2825<(x2826/x2827))>>x2828);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x2853 = -22136;
	static int64_t x2854 = INT64_MAX;
	int64_t x2855 = INT64_MAX;
	volatile uint32_t x2856 = 6U;
	int32_t t92 = 30;

	t92 = ((x2853<(x2854/x2855))>>x2856);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x2869 = 58U;
	uint64_t x2870 = 4907979010519502096LLU;
	int8_t x2871 = -1;
	static volatile uint32_t x2872 = 28U;

	t93 = ((x2869<(x2870/x2871))>>x2872);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x2879 = INT8_MIN;
	static uint32_t x2880 = 1U;
	int32_t t94 = 9849;

	t94 = ((x2877<(x2878/x2879))>>x2880);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x2977 = UINT8_MAX;
	int64_t x2978 = -3965628942010567LL;
	uint8_t x2980 = 10U;
	static int32_t t95 = -24092130;

	t95 = ((x2977<(x2978/x2979))>>x2980);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x2989 = INT32_MAX;
	int16_t x2990 = -1;
	uint64_t x2991 = 7LLU;
	int8_t x2992 = 27;
	static volatile int32_t t96 = 26056725;

	t96 = ((x2989<(x2990/x2991))>>x2992);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x3017 = INT64_MIN;
	static int8_t x3020 = 7;
	volatile int32_t t97 = -4;

	t97 = ((x3017<(x3018/x3019))>>x3020);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x3062 = INT16_MIN;
	uint64_t x3063 = 66940775310694LLU;
	int8_t x3064 = 10;
	int32_t t98 = -3494;

	t98 = ((x3061<(x3062/x3063))>>x3064);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x3069 = INT8_MIN;
	int64_t x3070 = INT64_MIN;
	static int8_t x3071 = INT8_MAX;

	t99 = ((x3069<(x3070/x3071))>>x3072);

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

