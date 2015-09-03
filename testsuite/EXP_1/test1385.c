#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x153 = -1;
static int32_t t2 = -152518344;
uint16_t x222 = 0U;
volatile int16_t x224 = 1;
int64_t x325 = -1LL;
int32_t x359 = 3662;
static int64_t x549 = INT64_MIN;
int8_t x570 = INT8_MAX;
int16_t x689 = -1;
int32_t x690 = 0;
uint64_t t10 = 88LLU;
int32_t x708 = 0;
int32_t x721 = INT32_MIN;
uint16_t x723 = 2699U;
int8_t x780 = 1;
int8_t x928 = 5;
volatile int64_t x954 = -1LL;
int8_t x981 = -15;
uint8_t x982 = 16U;
int16_t x1009 = -2;
int32_t t18 = -102511977;
volatile uint32_t t19 = 29648712U;
int16_t x1056 = 5;
volatile int32_t t20 = -1837310;
int64_t x1061 = 7488938072060555LL;
int8_t x1062 = INT8_MAX;
int8_t x1064 = 1;
int64_t t22 = -7420817399478LL;
volatile int32_t x1095 = INT32_MAX;
static volatile uint8_t x1103 = UINT8_MAX;
int64_t x1237 = INT64_MAX;
volatile int32_t t28 = 975;
static volatile uint32_t t30 = 3U;
volatile int64_t x1507 = INT64_MAX;
static int32_t x1550 = INT32_MIN;
volatile int32_t x1551 = -59437;
static int64_t x1555 = -1LL;
int64_t x1737 = 11097709823LL;
int32_t x1738 = INT32_MIN;
uint8_t x1739 = 2U;
uint8_t x1768 = 2U;
volatile uint64_t x1803 = 829823481LLU;
int16_t x1804 = 1;
static int8_t x1811 = INT8_MAX;
int32_t t42 = 752695;
int16_t x1849 = INT16_MAX;
static int16_t x1850 = INT16_MAX;
static volatile int16_t x1892 = 0;
volatile int32_t x1894 = INT32_MIN;
uint16_t x1935 = UINT16_MAX;
int8_t x1936 = 26;
volatile int32_t x1954 = INT32_MAX;
static uint8_t x2018 = 54U;
int32_t t48 = 1149548;
volatile int8_t x2033 = 0;
int64_t x2034 = 8LL;
uint32_t t49 = 140857U;
uint8_t x2215 = 40U;
uint8_t x2241 = UINT8_MAX;
int32_t t55 = 879113;
static volatile int64_t x2418 = INT64_MIN;
int64_t t57 = -975550590726886218LL;
int32_t t58 = -284781092;
uint16_t x2520 = 0U;
int16_t x2634 = -1;
int32_t t62 = -1;
int8_t x2647 = INT8_MAX;
uint8_t x2648 = 21U;
uint8_t x2732 = 2U;
static volatile int32_t t66 = 104501;
static uint8_t x2901 = UINT8_MAX;
int8_t x2902 = -2;
volatile uint64_t x2913 = 9351LLU;
int64_t x2914 = INT64_MIN;
int32_t x2937 = INT32_MIN;
int32_t t69 = 1;
int8_t x2944 = 1;
int32_t t70 = 24;
int32_t x2957 = INT32_MIN;
volatile int32_t x2997 = INT32_MIN;
int8_t x2998 = -6;
int32_t x3012 = 1;
static int16_t x3245 = INT16_MIN;
static volatile uint64_t x3247 = 69LLU;
int8_t x3277 = INT8_MIN;
int8_t x3312 = 0;
static int32_t x3374 = INT32_MIN;
int8_t x3392 = 5;
uint64_t x3394 = 205386217LLU;
static int16_t x3613 = 749;
static int32_t x3614 = -1;
static int64_t x3615 = -4452537034444856874LL;
int16_t x3626 = INT16_MIN;
static uint16_t x3628 = 0U;
static volatile int16_t x3652 = 0;
int32_t t88 = 2486500;
int64_t x3743 = -2860895556260528LL;
int64_t x3774 = INT64_MIN;
uint64_t x3901 = 47534180LLU;
volatile uint8_t x3904 = 18U;
static int64_t x4009 = 890964LL;
volatile int32_t t98 = 1;
static volatile int8_t x4154 = INT8_MIN;


void f0(void) {
	uint8_t x117 = 1U;
	int32_t x118 = -1045;
	static int64_t x119 = INT64_MIN;
	int8_t x120 = 61;
	int64_t t0 = -560LL;

	t0 = (((x117<x118)*x119)>>x120);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x149 = 77U;
	uint64_t x150 = 7072096LLU;
	int8_t x151 = INT8_MAX;
	int64_t x152 = 1LL;
	int32_t t1 = 2;

	t1 = (((x149<x150)*x151)>>x152);

	if (t1 != 63) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x154 = -1LL;
	int32_t x155 = -12;
	volatile int8_t x156 = 6;

	t2 = (((x153<x154)*x155)>>x156);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x221 = INT64_MIN;
	uint64_t x223 = 962LLU;
	uint64_t t3 = 146340LLU;

	t3 = (((x221<x222)*x223)>>x224);

	if (t3 != 481LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x326 = 22U;
	static uint32_t x327 = 5383142U;
	volatile int16_t x328 = 3;
	volatile uint32_t t4 = 1U;

	t4 = (((x325<x326)*x327)>>x328);

	if (t4 != 672892U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x357 = 864U;
	uint64_t x358 = 716432612858359LLU;
	static volatile uint8_t x360 = 5U;
	int32_t t5 = -1391;

	t5 = (((x357<x358)*x359)>>x360);

	if (t5 != 114) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint8_t x365 = 59U;
	static int16_t x366 = INT16_MIN;
	volatile uint16_t x367 = 0U;
	volatile int16_t x368 = 12;
	int32_t t6 = -7;

	t6 = (((x365<x366)*x367)>>x368);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x469 = 445355LLU;
	int32_t x470 = -1;
	volatile int16_t x471 = INT16_MAX;
	uint8_t x472 = 4U;
	int32_t t7 = -10604;

	t7 = (((x469<x470)*x471)>>x472);

	if (t7 != 2047) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x550 = INT32_MAX;
	int8_t x551 = 2;
	static volatile int8_t x552 = 3;
	int32_t t8 = 5;

	t8 = (((x549<x550)*x551)>>x552);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x569 = INT32_MAX;
	uint16_t x571 = 5U;
	static volatile uint8_t x572 = 11U;
	int32_t t9 = -3;

	t9 = (((x569<x570)*x571)>>x572);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x691 = 448527LLU;
	uint16_t x692 = 32U;

	t10 = (((x689<x690)*x691)>>x692);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x705 = 3;
	static volatile uint32_t x706 = 3U;
	volatile uint64_t x707 = 15572983854LLU;
	volatile uint64_t t11 = 56923981144224633LLU;

	t11 = (((x705<x706)*x707)>>x708);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x722 = -1;
	volatile int32_t x724 = 0;
	static volatile int32_t t12 = -51081;

	t12 = (((x721<x722)*x723)>>x724);

	if (t12 != 2699) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x777 = UINT16_MAX;
	static uint16_t x778 = UINT16_MAX;
	int8_t x779 = -13;
	volatile int32_t t13 = -8;

	t13 = (((x777<x778)*x779)>>x780);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x865 = 4U;
	int16_t x866 = INT16_MAX;
	uint32_t x867 = UINT32_MAX;
	uint8_t x868 = 0U;
	static volatile uint32_t t14 = UINT32_MAX;

	t14 = (((x865<x866)*x867)>>x868);

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x925 = INT16_MAX;
	int16_t x926 = 3597;
	int16_t x927 = -1;
	volatile int32_t t15 = 0;

	t15 = (((x925<x926)*x927)>>x928);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x953 = -1;
	int32_t x955 = INT32_MAX;
	static uint8_t x956 = 1U;
	static volatile int32_t t16 = -1392928;

	t16 = (((x953<x954)*x955)>>x956);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x983 = INT16_MAX;
	volatile int8_t x984 = 0;
	static int32_t t17 = -670;

	t17 = (((x981<x982)*x983)>>x984);

	if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x1010 = UINT64_MAX;
	static volatile int16_t x1011 = 56;
	uint8_t x1012 = 28U;

	t18 = (((x1009<x1010)*x1011)>>x1012);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1045 = 4512801787526285382LLU;
	int8_t x1046 = 62;
	volatile uint32_t x1047 = 2010U;
	int8_t x1048 = 0;

	t19 = (((x1045<x1046)*x1047)>>x1048);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1053 = UINT8_MAX;
	volatile int64_t x1054 = INT64_MIN;
	int32_t x1055 = INT32_MAX;

	t20 = (((x1053<x1054)*x1055)>>x1056);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x1063 = 10530;
	int32_t t21 = 2;

	t21 = (((x1061<x1062)*x1063)>>x1064);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1085 = 473424960;
	int32_t x1086 = INT32_MIN;
	int64_t x1087 = INT64_MIN;
	volatile int32_t x1088 = 22;

	t22 = (((x1085<x1086)*x1087)>>x1088);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x1093 = INT8_MAX;
	int16_t x1094 = -1758;
	static int8_t x1096 = 16;
	int32_t t23 = 581599653;

	t23 = (((x1093<x1094)*x1095)>>x1096);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1101 = -1;
	volatile uint64_t x1102 = 6964621525626192991LLU;
	static volatile uint16_t x1104 = 17U;
	volatile int32_t t24 = -13751644;

	t24 = (((x1101<x1102)*x1103)>>x1104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1105 = 0;
	int8_t x1106 = INT8_MIN;
	volatile uint64_t x1107 = 6001631057015LLU;
	int8_t x1108 = 1;
	volatile uint64_t t25 = 331515LLU;

	t25 = (((x1105<x1106)*x1107)>>x1108);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1161 = UINT16_MAX;
	volatile uint64_t x1162 = UINT64_MAX;
	uint64_t x1163 = 6215LLU;
	uint16_t x1164 = 31U;
	uint64_t t26 = 35574LLU;

	t26 = (((x1161<x1162)*x1163)>>x1164);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1238 = 0U;
	uint8_t x1239 = 1U;
	int16_t x1240 = 1;
	volatile int32_t t27 = -9949507;

	t27 = (((x1237<x1238)*x1239)>>x1240);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x1309 = INT16_MIN;
	uint32_t x1310 = UINT32_MAX;
	uint16_t x1311 = 497U;
	int32_t x1312 = 0;

	t28 = (((x1309<x1310)*x1311)>>x1312);

	if (t28 != 497) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x1337 = INT16_MAX;
	static int32_t x1338 = INT32_MIN;
	uint16_t x1339 = 8233U;
	static volatile int32_t x1340 = 0;
	volatile int32_t t29 = 1174;

	t29 = (((x1337<x1338)*x1339)>>x1340);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1409 = -1;
	uint8_t x1410 = 1U;
	static uint32_t x1411 = 264U;
	static int16_t x1412 = 3;

	t30 = (((x1409<x1410)*x1411)>>x1412);

	if (t30 != 33U) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x1505 = INT16_MIN;
	int16_t x1506 = INT16_MIN;
	uint32_t x1508 = 28U;
	int64_t t31 = 22LL;

	t31 = (((x1505<x1506)*x1507)>>x1508);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1549 = UINT64_MAX;
	volatile int16_t x1552 = 0;
	volatile int32_t t32 = -5;

	t32 = (((x1549<x1550)*x1551)>>x1552);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1553 = INT16_MIN;
	int16_t x1554 = INT16_MIN;
	uint8_t x1556 = 1U;
	volatile int64_t t33 = 100315LL;

	t33 = (((x1553<x1554)*x1555)>>x1556);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1581 = 4LLU;
	uint8_t x1582 = 1U;
	volatile uint8_t x1583 = UINT8_MAX;
	volatile uint8_t x1584 = 4U;
	int32_t t34 = -1;

	t34 = (((x1581<x1582)*x1583)>>x1584);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1617 = INT64_MIN;
	int32_t x1618 = 11850;
	int16_t x1619 = 102;
	uint8_t x1620 = 6U;
	volatile int32_t t35 = -20;

	t35 = (((x1617<x1618)*x1619)>>x1620);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x1645 = 46U;
	uint8_t x1646 = UINT8_MAX;
	uint64_t x1647 = 308763LLU;
	uint8_t x1648 = 1U;
	volatile uint64_t t36 = 47842188356668LLU;

	t36 = (((x1645<x1646)*x1647)>>x1648);

	if (t36 != 154381LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x1740 = 7U;
	int32_t t37 = 46;

	t37 = (((x1737<x1738)*x1739)>>x1740);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1765 = INT32_MAX;
	int16_t x1766 = 2033;
	int32_t x1767 = -10038;
	int32_t t38 = 181718680;

	t38 = (((x1765<x1766)*x1767)>>x1768);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x1785 = 2;
	int32_t x1786 = INT32_MIN;
	uint64_t x1787 = UINT64_MAX;
	static uint32_t x1788 = 1U;
	uint64_t t39 = 18632LLU;

	t39 = (((x1785<x1786)*x1787)>>x1788);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x1801 = 1U;
	uint16_t x1802 = 15U;
	uint64_t t40 = 1788113086629LLU;

	t40 = (((x1801<x1802)*x1803)>>x1804);

	if (t40 != 414911740LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x1809 = INT64_MIN;
	int16_t x1810 = 1;
	int8_t x1812 = 1;
	int32_t t41 = 62852736;

	t41 = (((x1809<x1810)*x1811)>>x1812);

	if (t41 != 63) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1825 = -1LL;
	uint32_t x1826 = 28261U;
	static int16_t x1827 = INT16_MAX;
	static int8_t x1828 = 1;

	t42 = (((x1825<x1826)*x1827)>>x1828);

	if (t42 != 16383) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1851 = -1;
	int16_t x1852 = 24;
	int32_t t43 = 1;

	t43 = (((x1849<x1850)*x1851)>>x1852);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1889 = 1;
	int8_t x1890 = INT8_MIN;
	static int64_t x1891 = INT64_MIN;
	static int64_t t44 = 13LL;

	t44 = (((x1889<x1890)*x1891)>>x1892);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x1893 = INT32_MIN;
	volatile int64_t x1895 = -1108669503568LL;
	volatile uint8_t x1896 = 25U;
	volatile int64_t t45 = -209802309LL;

	t45 = (((x1893<x1894)*x1895)>>x1896);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x1933 = -1;
	int64_t x1934 = INT64_MIN;
	volatile int32_t t46 = -665614;

	t46 = (((x1933<x1934)*x1935)>>x1936);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x1953 = INT8_MIN;
	volatile uint32_t x1955 = 110U;
	volatile uint32_t x1956 = 1U;
	volatile uint32_t t47 = 5U;

	t47 = (((x1953<x1954)*x1955)>>x1956);

	if (t47 != 55U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x2017 = 8775LLU;
	int8_t x2019 = 1;
	volatile int8_t x2020 = 0;

	t48 = (((x2017<x2018)*x2019)>>x2020);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x2035 = 1040875916U;
	uint16_t x2036 = 3U;

	t49 = (((x2033<x2034)*x2035)>>x2036);

	if (t49 != 130109489U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2085 = INT16_MIN;
	uint8_t x2086 = 63U;
	uint8_t x2087 = UINT8_MAX;
	static uint32_t x2088 = 31U;
	volatile int32_t t50 = 79663776;

	t50 = (((x2085<x2086)*x2087)>>x2088);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x2165 = INT16_MAX;
	volatile int64_t x2166 = INT64_MIN;
	int8_t x2167 = -1;
	uint8_t x2168 = 28U;
	static int32_t t51 = 22700;

	t51 = (((x2165<x2166)*x2167)>>x2168);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x2189 = -1LL;
	static int32_t x2190 = INT32_MIN;
	static uint8_t x2191 = 12U;
	volatile int16_t x2192 = 14;
	static volatile int32_t t52 = 418;

	t52 = (((x2189<x2190)*x2191)>>x2192);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x2213 = -68;
	uint32_t x2214 = UINT32_MAX;
	int16_t x2216 = 7;
	int32_t t53 = 167919845;

	t53 = (((x2213<x2214)*x2215)>>x2216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x2242 = 9550395572086717LLU;
	int8_t x2243 = 5;
	uint8_t x2244 = 4U;
	volatile int32_t t54 = -42;

	t54 = (((x2241<x2242)*x2243)>>x2244);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x2293 = UINT32_MAX;
	static uint8_t x2294 = 1U;
	int16_t x2295 = -6747;
	int16_t x2296 = 5;

	t55 = (((x2293<x2294)*x2295)>>x2296);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x2333 = -1309;
	int64_t x2334 = -1LL;
	uint64_t x2335 = 28968627560LLU;
	static volatile uint16_t x2336 = 17U;
	volatile uint64_t t56 = 211244LLU;

	t56 = (((x2333<x2334)*x2335)>>x2336);

	if (t56 != 221013LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x2417 = -1LL;
	int64_t x2419 = INT64_MIN;
	int16_t x2420 = 1;

	t57 = (((x2417<x2418)*x2419)>>x2420);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2421 = INT8_MIN;
	static int64_t x2422 = -11115308231950303LL;
	int8_t x2423 = -1;
	static int8_t x2424 = 6;

	t58 = (((x2421<x2422)*x2423)>>x2424);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x2501 = 1;
	volatile uint64_t x2502 = 382LLU;
	int64_t x2503 = INT64_MAX;
	static uint16_t x2504 = 4U;
	int64_t t59 = 204573347222LL;

	t59 = (((x2501<x2502)*x2503)>>x2504);

	if (t59 != 576460752303423487LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x2517 = -59;
	int8_t x2518 = INT8_MAX;
	uint32_t x2519 = UINT32_MAX;
	volatile uint32_t t60 = UINT32_MAX;

	t60 = (((x2517<x2518)*x2519)>>x2520);

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x2629 = 13U;
	int32_t x2630 = 0;
	uint16_t x2631 = UINT16_MAX;
	int8_t x2632 = 20;
	int32_t t61 = 2092846;

	t61 = (((x2629<x2630)*x2631)>>x2632);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x2633 = UINT64_MAX;
	int8_t x2635 = INT8_MAX;
	uint16_t x2636 = 0U;

	t62 = (((x2633<x2634)*x2635)>>x2636);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x2645 = -9;
	uint64_t x2646 = 3341688130LLU;
	int32_t t63 = -1;

	t63 = (((x2645<x2646)*x2647)>>x2648);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x2697 = 1U;
	volatile int32_t x2698 = INT32_MAX;
	volatile uint64_t x2699 = UINT64_MAX;
	static int16_t x2700 = 6;
	uint64_t t64 = 79519023874994LLU;

	t64 = (((x2697<x2698)*x2699)>>x2700);

	if (t64 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x2729 = -1;
	uint16_t x2730 = 55U;
	int8_t x2731 = 3;
	volatile int32_t t65 = -7816675;

	t65 = (((x2729<x2730)*x2731)>>x2732);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2821 = -9890;
	static int16_t x2822 = -200;
	static int32_t x2823 = INT32_MAX;
	volatile uint8_t x2824 = 5U;

	t66 = (((x2821<x2822)*x2823)>>x2824);

	if (t66 != 67108863) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x2903 = -1LL;
	int8_t x2904 = 4;
	volatile int64_t t67 = 3543LL;

	t67 = (((x2901<x2902)*x2903)>>x2904);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x2915 = INT64_MAX;
	static int32_t x2916 = 2;
	volatile int64_t t68 = 3037483069364120LL;

	t68 = (((x2913<x2914)*x2915)>>x2916);

	if (t68 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x2938 = 30U;
	uint16_t x2939 = 508U;
	uint8_t x2940 = 11U;

	t69 = (((x2937<x2938)*x2939)>>x2940);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x2941 = UINT32_MAX;
	int16_t x2942 = INT16_MIN;
	uint8_t x2943 = UINT8_MAX;

	t70 = (((x2941<x2942)*x2943)>>x2944);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x2958 = -1;
	uint64_t x2959 = 44845421LLU;
	uint64_t x2960 = 10LLU;
	volatile uint64_t t71 = 261382783389LLU;

	t71 = (((x2957<x2958)*x2959)>>x2960);

	if (t71 != 43794LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2999 = INT8_MAX;
	volatile uint8_t x3000 = 14U;
	volatile int32_t t72 = 166;

	t72 = (((x2997<x2998)*x2999)>>x3000);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x3009 = 1U;
	uint16_t x3010 = 83U;
	int8_t x3011 = INT8_MAX;
	int32_t t73 = -182344;

	t73 = (((x3009<x3010)*x3011)>>x3012);

	if (t73 != 63) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x3069 = 55U;
	volatile int16_t x3070 = 13;
	int64_t x3071 = -1LL;
	static uint16_t x3072 = 3U;
	volatile int64_t t74 = -790360492971LL;

	t74 = (((x3069<x3070)*x3071)>>x3072);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x3189 = 1725492470619508037LLU;
	int32_t x3190 = INT32_MIN;
	int8_t x3191 = 19;
	uint32_t x3192 = 1U;
	static int32_t t75 = 353416114;

	t75 = (((x3189<x3190)*x3191)>>x3192);

	if (t75 != 9) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x3209 = INT64_MIN;
	int16_t x3210 = INT16_MIN;
	static int32_t x3211 = INT32_MAX;
	int8_t x3212 = 2;
	static int32_t t76 = 1;

	t76 = (((x3209<x3210)*x3211)>>x3212);

	if (t76 != 536870911) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x3233 = INT32_MIN;
	int64_t x3234 = INT64_MIN;
	int64_t x3235 = 4372462911LL;
	volatile uint64_t x3236 = 3LLU;
	int64_t t77 = -7303LL;

	t77 = (((x3233<x3234)*x3235)>>x3236);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x3246 = INT32_MIN;
	uint8_t x3248 = 5U;
	volatile uint64_t t78 = 1337257844828LLU;

	t78 = (((x3245<x3246)*x3247)>>x3248);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x3278 = 0U;
	static uint32_t x3279 = 387136642U;
	static uint8_t x3280 = 14U;
	volatile uint32_t t79 = 16U;

	t79 = (((x3277<x3278)*x3279)>>x3280);

	if (t79 != 23628U) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x3309 = -1;
	int32_t x3310 = -1;
	static int16_t x3311 = -1;
	volatile int32_t t80 = 433838;

	t80 = (((x3309<x3310)*x3311)>>x3312);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x3373 = 4723U;
	int16_t x3375 = -1;
	static uint32_t x3376 = 3U;
	static int32_t t81 = -1;

	t81 = (((x3373<x3374)*x3375)>>x3376);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x3377 = 1U;
	static int8_t x3378 = -5;
	static volatile int64_t x3379 = INT64_MIN;
	uint64_t x3380 = 58LLU;
	volatile int64_t t82 = -446LL;

	t82 = (((x3377<x3378)*x3379)>>x3380);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x3389 = 24U;
	volatile uint64_t x3390 = 4732213504282856LLU;
	volatile int16_t x3391 = 81;
	int32_t t83 = 198255969;

	t83 = (((x3389<x3390)*x3391)>>x3392);

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x3393 = 2U;
	int32_t x3395 = 66747029;
	uint8_t x3396 = 23U;
	volatile int32_t t84 = 16;

	t84 = (((x3393<x3394)*x3395)>>x3396);

	if (t84 != 7) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x3473 = INT64_MAX;
	volatile int16_t x3474 = INT16_MAX;
	int32_t x3475 = INT32_MAX;
	volatile int8_t x3476 = 0;
	int32_t t85 = -13748016;

	t85 = (((x3473<x3474)*x3475)>>x3476);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x3616 = 62;
	volatile int64_t t86 = 569933008794952884LL;

	t86 = (((x3613<x3614)*x3615)>>x3616);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x3625 = 4757;
	static volatile int16_t x3627 = -163;
	int32_t t87 = -189;

	t87 = (((x3625<x3626)*x3627)>>x3628);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x3649 = INT32_MAX;
	uint8_t x3650 = 4U;
	static int32_t x3651 = INT32_MIN;

	t88 = (((x3649<x3650)*x3651)>>x3652);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x3741 = 22U;
	int32_t x3742 = -1;
	uint32_t x3744 = 18U;
	static int64_t t89 = -27941700687LL;

	t89 = (((x3741<x3742)*x3743)>>x3744);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x3757 = 11170U;
	volatile int16_t x3758 = 324;
	int16_t x3759 = INT16_MIN;
	volatile int8_t x3760 = 2;
	int32_t t90 = -361617817;

	t90 = (((x3757<x3758)*x3759)>>x3760);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x3773 = 420150513U;
	int64_t x3775 = INT64_MIN;
	uint8_t x3776 = 39U;
	static volatile int64_t t91 = 1149868784025445LL;

	t91 = (((x3773<x3774)*x3775)>>x3776);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x3797 = -6;
	uint32_t x3798 = UINT32_MAX;
	static volatile int32_t x3799 = 3;
	uint8_t x3800 = 0U;
	int32_t t92 = 1;

	t92 = (((x3797<x3798)*x3799)>>x3800);

	if (t92 != 3) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x3845 = UINT32_MAX;
	int8_t x3846 = 5;
	static uint64_t x3847 = 429248895606858LLU;
	uint8_t x3848 = 1U;
	static uint64_t t93 = 3097732LLU;

	t93 = (((x3845<x3846)*x3847)>>x3848);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x3902 = INT64_MAX;
	volatile int32_t x3903 = INT32_MAX;
	volatile int32_t t94 = -91589;

	t94 = (((x3901<x3902)*x3903)>>x3904);

	if (t94 != 8191) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x3953 = INT8_MAX;
	volatile int32_t x3954 = -1945658;
	uint8_t x3955 = 0U;
	volatile uint8_t x3956 = 1U;
	volatile int32_t t95 = -26;

	t95 = (((x3953<x3954)*x3955)>>x3956);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x3969 = INT32_MIN;
	static int8_t x3970 = INT8_MIN;
	int32_t x3971 = INT32_MAX;
	uint8_t x3972 = 17U;
	volatile int32_t t96 = -533034289;

	t96 = (((x3969<x3970)*x3971)>>x3972);

	if (t96 != 16383) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x4010 = INT64_MIN;
	int16_t x4011 = INT16_MIN;
	uint8_t x4012 = 29U;
	volatile int32_t t97 = 1014068;

	t97 = (((x4009<x4010)*x4011)>>x4012);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x4061 = INT16_MIN;
	int16_t x4062 = INT16_MIN;
	int8_t x4063 = -1;
	static int8_t x4064 = 0;

	t98 = (((x4061<x4062)*x4063)>>x4064);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x4153 = 1;
	int32_t x4155 = INT32_MAX;
	volatile uint16_t x4156 = 2U;
	static volatile int32_t t99 = -6151;

	t99 = (((x4153<x4154)*x4155)>>x4156);

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

