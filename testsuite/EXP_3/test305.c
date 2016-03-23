
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x174 = UINT8_MAX;
int16_t x317 = INT16_MIN;
volatile int16_t x318 = INT16_MIN;
int32_t x319 = INT32_MIN;
volatile int32_t t3 = -97562533;
int16_t x355 = 1;
static volatile int8_t x356 = -1;
int32_t x463 = -1;
volatile int32_t t6 = -21;
int8_t x567 = 20;
volatile int32_t t7 = -5932023;
volatile int32_t x569 = -1;
int64_t x652 = INT64_MIN;
volatile int32_t t10 = -2;
int8_t x812 = 1;
uint64_t x889 = 3LLU;
int8_t x901 = INT8_MIN;
static volatile int16_t x1026 = 2999;
static volatile int8_t x1053 = -1;
int8_t x1070 = INT8_MIN;
int32_t t21 = -711;
int32_t x1090 = -1;
int8_t x1112 = -1;
static volatile uint8_t x1149 = 0U;
volatile int32_t x1151 = 4;
volatile int32_t x1228 = -2;
int8_t x1243 = -1;
volatile int32_t t27 = 18947763;
int32_t x1550 = 259104;
int16_t x1593 = 85;
volatile int32_t t30 = 979;
int16_t x1613 = INT16_MIN;
int8_t x1706 = 5;
int32_t x1729 = INT32_MAX;
volatile uint32_t x1731 = 5U;
static volatile int64_t x1741 = INT64_MIN;
int16_t x1746 = 0;
static uint64_t x1747 = UINT64_MAX;
volatile int32_t t38 = -7777;
int32_t x2039 = -1;
volatile uint8_t x2098 = 15U;
int8_t x2196 = -1;
static uint8_t x2229 = 38U;
int8_t x2237 = -1;
int8_t x2269 = INT8_MIN;
int8_t x2272 = -12;
static int32_t t50 = -18171;
int64_t x2293 = 112573454610635501LL;
static int32_t t52 = 17309;
int64_t x2333 = INT64_MIN;
static int64_t x2373 = -1LL;
uint32_t x2374 = 0U;
int64_t x2403 = -1LL;
static uint32_t x2492 = UINT32_MAX;
int32_t x2589 = INT32_MAX;
int32_t t58 = -714044625;
volatile int8_t x2610 = 24;
int32_t t59 = -50;
volatile int8_t x2630 = INT8_MAX;
volatile int32_t t61 = -576496938;
int64_t x2680 = -1LL;
int8_t x2784 = -1;
static volatile uint16_t x2792 = UINT16_MAX;
volatile int64_t x2817 = -1LL;
uint64_t x2820 = UINT64_MAX;
uint8_t x2845 = 3U;
volatile int32_t t70 = 96;
int64_t x2970 = -2015361125094LL;
int32_t t73 = 228480860;
uint32_t x3277 = UINT32_MAX;
int16_t x3280 = -1;
volatile int32_t t75 = -462196;
int32_t t78 = -73377302;
uint8_t x3364 = 2U;
uint16_t x3386 = 18209U;
uint32_t x3387 = UINT32_MAX;
volatile int32_t x3405 = -108085;
volatile int8_t x3420 = -22;
int32_t x3520 = -1;
static int32_t x3521 = 673695;
int64_t x3559 = INT64_MIN;
static int32_t t89 = 0;
static int32_t x3761 = -1;
volatile int32_t t91 = -882871;
uint64_t x3962 = 72326029LLU;
int32_t x3964 = INT32_MIN;
static int8_t x3988 = -4;
uint32_t x4023 = 38U;
int8_t x4024 = 21;
int64_t x4074 = INT64_MAX;
int32_t t97 = 285436303;
uint16_t x4114 = UINT16_MAX;
uint64_t x4205 = 26731LLU;
static int8_t x4208 = INT8_MIN;
volatile int8_t x4219 = -1;
uint64_t x4220 = UINT64_MAX;
volatile uint32_t x4351 = 17U;
uint32_t x4423 = 1U;
int16_t x4461 = INT16_MIN;
uint32_t x4462 = 3U;
static volatile int16_t x4502 = INT16_MIN;
int32_t t108 = 7192;
volatile int8_t x4590 = INT8_MIN;
volatile int32_t t109 = -14661638;
int64_t x4757 = -1LL;
static volatile uint32_t x4799 = UINT32_MAX;
volatile uint32_t x4892 = UINT32_MAX;
volatile int32_t t114 = -5;
uint8_t x5026 = 91U;
int8_t x5135 = 21;
static volatile uint64_t x5165 = 0LLU;
int16_t x5206 = INT16_MIN;
volatile uint8_t x5207 = UINT8_MAX;
int32_t x5218 = INT32_MAX;
static int8_t x5245 = INT8_MIN;
uint8_t x5283 = 3U;
int32_t t123 = 11;
static uint16_t x5317 = 575U;
uint8_t x5318 = 7U;
volatile int32_t x5337 = 12;
volatile int32_t t125 = 8;
int8_t x5422 = 0;
uint8_t x5654 = 1U;
uint32_t x5667 = UINT32_MAX;
int32_t x5701 = -1;
int32_t t132 = -23894;
static int8_t x5715 = INT8_MAX;
int16_t x5752 = -1;
static volatile uint64_t x5770 = 1086525421LLU;
static int8_t x5786 = INT8_MIN;
int8_t x5809 = 13;
volatile uint64_t x5877 = UINT64_MAX;
int8_t x6121 = INT8_MIN;
uint32_t x6122 = 915U;
int8_t x6333 = INT8_MIN;
static uint16_t x6442 = UINT16_MAX;
static uint64_t x6484 = UINT64_MAX;
static int32_t t152 = 20290;
int32_t x6495 = 1;
static int32_t x6601 = INT32_MIN;
uint32_t x6770 = 20U;
static int8_t x6780 = -1;
static volatile uint64_t x6834 = 707308418342240221LLU;
static uint32_t x6946 = 79173846U;
uint16_t x6982 = UINT16_MAX;
int32_t t166 = -1;
volatile int32_t t170 = 119111;
static volatile uint16_t x7132 = UINT16_MAX;
int8_t x7162 = -1;
int32_t t172 = -38897591;
static int32_t x7190 = INT32_MIN;
static int16_t x7192 = -1;
int32_t t173 = -1;
static volatile int8_t x7234 = INT8_MIN;
static int32_t t178 = 1666;
uint32_t x7546 = 1088038882U;
uint8_t x7623 = 9U;
uint32_t x7780 = UINT32_MAX;
volatile int8_t x7810 = INT8_MIN;
int32_t t188 = -3722;
int8_t x7915 = -1;
int64_t x7916 = -1LL;
int8_t x8016 = INT8_MIN;
uint32_t x8041 = 61192100U;
int32_t x8044 = INT32_MIN;
volatile int32_t t192 = -552;
int16_t x8073 = INT16_MIN;
volatile int32_t t198 = 13252721;


void f0(void) {
    	int32_t x165 = INT32_MIN;
	volatile int16_t x166 = INT16_MAX;
	volatile int16_t x167 = -1;
	int64_t x168 = -1LL;
	int32_t t0 = -11748;

    t0 = ((x165==x166)>>(x167-x168));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x173 = -1;
	static volatile int8_t x175 = INT8_MIN;
	volatile int8_t x176 = INT8_MIN;
	volatile int32_t t1 = -2122581;

    t1 = ((x173==x174)>>(x175-x176));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x209 = 74U;
	int8_t x210 = INT8_MIN;
	int32_t x211 = 2;
	int64_t x212 = -1LL;
	volatile int32_t t2 = -7707;

    t2 = ((x209==x210)>>(x211-x212));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x320 = INT32_MIN;

    t3 = ((x317==x318)>>(x319-x320));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x353 = -1;
	int16_t x354 = 0;
	int32_t t4 = 907818;

    t4 = ((x353==x354)>>(x355-x356));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x461 = 3978U;
	static int16_t x462 = 53;
	uint64_t x464 = UINT64_MAX;
	int32_t t5 = 401308;

    t5 = ((x461==x462)>>(x463-x464));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int8_t x517 = INT8_MIN;
	int16_t x518 = -1;
	static volatile uint8_t x519 = 1U;
	volatile int64_t x520 = -1LL;

    t6 = ((x517==x518)>>(x519-x520));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x565 = 12;
	uint32_t x566 = 1045403282U;
	volatile uint32_t x568 = UINT32_MAX;

    t7 = ((x565==x566)>>(x567-x568));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x570 = INT16_MAX;
	int64_t x571 = -1LL;
	static int16_t x572 = -1;
	static int32_t t8 = 46230720;

    t8 = ((x569==x570)>>(x571-x572));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x649 = UINT32_MAX;
	int8_t x650 = -2;
	int64_t x651 = INT64_MIN;
	static volatile int32_t t9 = 266463144;

    t9 = ((x649==x650)>>(x651-x652));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x673 = INT32_MIN;
	static uint16_t x674 = 13462U;
	int16_t x675 = -1;
	int32_t x676 = -1;

    t10 = ((x673==x674)>>(x675-x676));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x809 = 18U;
	static int64_t x810 = -207374697531LL;
	uint16_t x811 = 1U;
	static volatile int32_t t11 = -4308;

    t11 = ((x809==x810)>>(x811-x812));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x837 = INT8_MIN;
	uint16_t x838 = UINT16_MAX;
	static int16_t x839 = INT16_MIN;
	int16_t x840 = INT16_MIN;
	int32_t t12 = 59114235;

    t12 = ((x837==x838)>>(x839-x840));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x877 = 0;
	volatile int32_t x878 = INT32_MIN;
	uint64_t x879 = UINT64_MAX;
	int32_t x880 = -1;
	static int32_t t13 = 262929;

    t13 = ((x877==x878)>>(x879-x880));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x890 = -30;
	int64_t x891 = -1LL;
	volatile int32_t x892 = -1;
	int32_t t14 = 7094;

    t14 = ((x889==x890)>>(x891-x892));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x902 = 17U;
	uint8_t x903 = 2U;
	static int8_t x904 = -1;
	static volatile int32_t t15 = 1560095;

    t15 = ((x901==x902)>>(x903-x904));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x933 = -1LL;
	uint8_t x934 = 57U;
	uint16_t x935 = 2U;
	static uint16_t x936 = 0U;
	volatile int32_t t16 = -2767;

    t16 = ((x933==x934)>>(x935-x936));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint8_t x1013 = 2U;
	static int64_t x1014 = INT64_MIN;
	int64_t x1015 = INT64_MIN;
	volatile int64_t x1016 = INT64_MIN;
	int32_t t17 = 153;

    t17 = ((x1013==x1014)>>(x1015-x1016));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x1025 = -1LL;
	static int16_t x1027 = 0;
	int16_t x1028 = -1;
	int32_t t18 = 15312;

    t18 = ((x1025==x1026)>>(x1027-x1028));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x1054 = INT8_MIN;
	int32_t x1055 = -1;
	int8_t x1056 = -1;
	int32_t t19 = 16583;

    t19 = ((x1053==x1054)>>(x1055-x1056));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x1069 = -15344719720LL;
	volatile int16_t x1071 = INT16_MIN;
	int16_t x1072 = INT16_MIN;
	static volatile int32_t t20 = 15692116;

    t20 = ((x1069==x1070)>>(x1071-x1072));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x1077 = -5564824LL;
	int16_t x1078 = -1;
	static int64_t x1079 = -1LL;
	uint64_t x1080 = UINT64_MAX;

    t21 = ((x1077==x1078)>>(x1079-x1080));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x1089 = 96282649959840134LLU;
	int32_t x1091 = -1;
	uint32_t x1092 = UINT32_MAX;
	volatile int32_t t22 = 14;

    t22 = ((x1089==x1090)>>(x1091-x1092));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x1109 = -1;
	int16_t x1110 = INT16_MIN;
	static int64_t x1111 = -1LL;
	int32_t t23 = 0;

    t23 = ((x1109==x1110)>>(x1111-x1112));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x1125 = -1;
	static volatile uint32_t x1126 = UINT32_MAX;
	volatile int16_t x1127 = -1;
	int32_t x1128 = -1;
	volatile int32_t t24 = -35;

    t24 = ((x1125==x1126)>>(x1127-x1128));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x1150 = INT8_MAX;
	int64_t x1152 = -1LL;
	int32_t t25 = -532891;

    t25 = ((x1149==x1150)>>(x1151-x1152));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x1225 = 0;
	uint8_t x1226 = 28U;
	volatile int32_t x1227 = -1;
	volatile int32_t t26 = -441257007;

    t26 = ((x1225==x1226)>>(x1227-x1228));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x1241 = INT8_MIN;
	uint16_t x1242 = 20752U;
	volatile uint32_t x1244 = UINT32_MAX;

    t27 = ((x1241==x1242)>>(x1243-x1244));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x1325 = 81;
	int8_t x1326 = 0;
	int64_t x1327 = INT64_MAX;
	volatile int64_t x1328 = INT64_MAX;
	int32_t t28 = 533998721;

    t28 = ((x1325==x1326)>>(x1327-x1328));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x1549 = UINT32_MAX;
	static int32_t x1551 = 3;
	int8_t x1552 = -1;
	volatile int32_t t29 = -2808011;

    t29 = ((x1549==x1550)>>(x1551-x1552));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x1594 = -442419;
	static int16_t x1595 = INT16_MIN;
	int16_t x1596 = INT16_MIN;

    t30 = ((x1593==x1594)>>(x1595-x1596));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x1614 = 13311813788244014LLU;
	int16_t x1615 = 15;
	int8_t x1616 = -2;
	int32_t t31 = 194664065;

    t31 = ((x1613==x1614)>>(x1615-x1616));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x1673 = INT16_MIN;
	int32_t x1674 = INT32_MIN;
	volatile int8_t x1675 = 5;
	int16_t x1676 = -1;
	int32_t t32 = -22260317;

    t32 = ((x1673==x1674)>>(x1675-x1676));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x1705 = 1620U;
	uint16_t x1707 = 22U;
	int64_t x1708 = -1LL;
	int32_t t33 = 9;

    t33 = ((x1705==x1706)>>(x1707-x1708));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x1730 = 14323U;
	uint32_t x1732 = UINT32_MAX;
	volatile int32_t t34 = -37;

    t34 = ((x1729==x1730)>>(x1731-x1732));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x1742 = INT32_MIN;
	static volatile int8_t x1743 = 0;
	int8_t x1744 = 0;
	volatile int32_t t35 = -7;

    t35 = ((x1741==x1742)>>(x1743-x1744));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x1745 = INT64_MIN;
	static int8_t x1748 = -29;
	int32_t t36 = 2345416;

    t36 = ((x1745==x1746)>>(x1747-x1748));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x1753 = INT64_MIN;
	int64_t x1754 = INT64_MIN;
	int16_t x1755 = INT16_MIN;
	volatile int16_t x1756 = INT16_MIN;
	volatile int32_t t37 = -9790;

    t37 = ((x1753==x1754)>>(x1755-x1756));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint32_t x1773 = 63U;
	volatile int16_t x1774 = -1;
	uint64_t x1775 = UINT64_MAX;
	static volatile int64_t x1776 = -1LL;

    t38 = ((x1773==x1774)>>(x1775-x1776));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x2029 = INT8_MIN;
	volatile uint64_t x2030 = UINT64_MAX;
	uint8_t x2031 = 0U;
	static int64_t x2032 = -1LL;
	int32_t t39 = -112899770;

    t39 = ((x2029==x2030)>>(x2031-x2032));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x2037 = INT16_MIN;
	static uint16_t x2038 = 126U;
	uint64_t x2040 = UINT64_MAX;
	volatile int32_t t40 = -1;

    t40 = ((x2037==x2038)>>(x2039-x2040));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x2097 = INT16_MAX;
	uint8_t x2099 = 24U;
	static int16_t x2100 = -1;
	volatile int32_t t41 = 384843508;

    t41 = ((x2097==x2098)>>(x2099-x2100));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x2121 = INT64_MIN;
	int32_t x2122 = INT32_MIN;
	uint8_t x2123 = 1U;
	uint32_t x2124 = UINT32_MAX;
	int32_t t42 = 10027300;

    t42 = ((x2121==x2122)>>(x2123-x2124));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x2193 = UINT8_MAX;
	int64_t x2194 = INT64_MIN;
	int8_t x2195 = -1;
	volatile int32_t t43 = -267;

    t43 = ((x2193==x2194)>>(x2195-x2196));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint32_t x2205 = 8410151U;
	uint16_t x2206 = UINT16_MAX;
	uint8_t x2207 = 1U;
	volatile int64_t x2208 = -1LL;
	int32_t t44 = 2837995;

    t44 = ((x2205==x2206)>>(x2207-x2208));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x2230 = 24420LL;
	uint32_t x2231 = UINT32_MAX;
	static int8_t x2232 = -2;
	int32_t t45 = 1374;

    t45 = ((x2229==x2230)>>(x2231-x2232));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x2238 = 39791666579LL;
	int8_t x2239 = -1;
	int8_t x2240 = -3;
	static int32_t t46 = 30820;

    t46 = ((x2237==x2238)>>(x2239-x2240));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x2253 = UINT8_MAX;
	int64_t x2254 = -1LL;
	volatile int16_t x2255 = INT16_MIN;
	int16_t x2256 = INT16_MIN;
	static volatile int32_t t47 = -572605234;

    t47 = ((x2253==x2254)>>(x2255-x2256));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x2257 = 38U;
	int16_t x2258 = -12;
	int32_t x2259 = 1;
	static int64_t x2260 = -1LL;
	int32_t t48 = 221;

    t48 = ((x2257==x2258)>>(x2259-x2260));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x2270 = -61;
	int16_t x2271 = 1;
	int32_t t49 = 86;

    t49 = ((x2269==x2270)>>(x2271-x2272));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x2273 = -1;
	int32_t x2274 = 3791;
	int8_t x2275 = -1;
	int16_t x2276 = -6;

    t50 = ((x2273==x2274)>>(x2275-x2276));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint32_t x2294 = 410496059U;
	int8_t x2295 = 1;
	static int64_t x2296 = 1LL;
	static volatile int32_t t51 = 5814;

    t51 = ((x2293==x2294)>>(x2295-x2296));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x2297 = INT32_MIN;
	int64_t x2298 = 365791791270797609LL;
	static volatile uint32_t x2299 = UINT32_MAX;
	int32_t x2300 = -23;

    t52 = ((x2297==x2298)>>(x2299-x2300));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x2334 = 12523915U;
	int64_t x2335 = -1LL;
	int16_t x2336 = -1;
	static volatile int32_t t53 = -3397;

    t53 = ((x2333==x2334)>>(x2335-x2336));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint64_t x2361 = UINT64_MAX;
	static volatile int16_t x2362 = -48;
	static int8_t x2363 = 2;
	volatile int8_t x2364 = 0;
	volatile int32_t t54 = -106;

    t54 = ((x2361==x2362)>>(x2363-x2364));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x2375 = 7;
	static volatile int8_t x2376 = 2;
	int32_t t55 = -13;

    t55 = ((x2373==x2374)>>(x2375-x2376));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x2401 = INT64_MIN;
	static int64_t x2402 = INT64_MAX;
	static int16_t x2404 = -1;
	volatile int32_t t56 = -401;

    t56 = ((x2401==x2402)>>(x2403-x2404));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x2489 = 189889U;
	static int16_t x2490 = INT16_MIN;
	volatile uint16_t x2491 = 15U;
	int32_t t57 = -102;

    t57 = ((x2489==x2490)>>(x2491-x2492));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x2590 = -523796352LL;
	uint8_t x2591 = 3U;
	volatile int64_t x2592 = -1LL;

    t58 = ((x2589==x2590)>>(x2591-x2592));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int16_t x2609 = INT16_MIN;
	uint64_t x2611 = 1LLU;
	int16_t x2612 = -1;

    t59 = ((x2609==x2610)>>(x2611-x2612));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x2621 = -1;
	static int64_t x2622 = -1LL;
	uint8_t x2623 = 73U;
	static uint8_t x2624 = 49U;
	volatile int32_t t60 = 33315360;

    t60 = ((x2621==x2622)>>(x2623-x2624));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x2629 = INT32_MAX;
	uint8_t x2631 = 2U;
	static int64_t x2632 = -1LL;

    t61 = ((x2629==x2630)>>(x2631-x2632));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x2677 = -1;
	static int32_t x2678 = -1;
	int32_t x2679 = -1;
	int32_t t62 = -239093;

    t62 = ((x2677==x2678)>>(x2679-x2680));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x2749 = INT16_MIN;
	int8_t x2750 = INT8_MAX;
	int32_t x2751 = INT32_MIN;
	int32_t x2752 = INT32_MIN;
	int32_t t63 = 42599583;

    t63 = ((x2749==x2750)>>(x2751-x2752));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x2781 = INT8_MIN;
	static int16_t x2782 = 15024;
	volatile uint32_t x2783 = UINT32_MAX;
	static volatile int32_t t64 = -6278;

    t64 = ((x2781==x2782)>>(x2783-x2784));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x2785 = 1;
	static int16_t x2786 = INT16_MIN;
	static uint8_t x2787 = 4U;
	int16_t x2788 = -2;
	int32_t t65 = 95523;

    t65 = ((x2785==x2786)>>(x2787-x2788));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x2789 = 194U;
	volatile uint8_t x2790 = UINT8_MAX;
	static uint16_t x2791 = UINT16_MAX;
	int32_t t66 = 162828;

    t66 = ((x2789==x2790)>>(x2791-x2792));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint8_t x2805 = UINT8_MAX;
	int32_t x2806 = 41529097;
	static volatile uint32_t x2807 = 5U;
	static volatile uint8_t x2808 = 2U;
	static int32_t t67 = 14162507;

    t67 = ((x2805==x2806)>>(x2807-x2808));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x2818 = INT8_MIN;
	volatile int32_t x2819 = -1;
	volatile int32_t t68 = 51;

    t68 = ((x2817==x2818)>>(x2819-x2820));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x2825 = INT32_MAX;
	uint8_t x2826 = 4U;
	uint8_t x2827 = 26U;
	int16_t x2828 = 0;
	int32_t t69 = 12304142;

    t69 = ((x2825==x2826)>>(x2827-x2828));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x2846 = UINT64_MAX;
	int64_t x2847 = -1LL;
	int64_t x2848 = -1LL;

    t70 = ((x2845==x2846)>>(x2847-x2848));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x2905 = UINT8_MAX;
	volatile uint8_t x2906 = 4U;
	uint32_t x2907 = 10U;
	int64_t x2908 = -1LL;
	volatile int32_t t71 = -55411059;

    t71 = ((x2905==x2906)>>(x2907-x2908));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x2969 = INT64_MIN;
	int8_t x2971 = -1;
	volatile int8_t x2972 = -1;
	int32_t t72 = -7334616;

    t72 = ((x2969==x2970)>>(x2971-x2972));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x3113 = INT32_MIN;
	volatile int32_t x3114 = -1;
	volatile int64_t x3115 = -1LL;
	int16_t x3116 = -25;

    t73 = ((x3113==x3114)>>(x3115-x3116));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x3117 = INT64_MIN;
	volatile int32_t x3118 = 416628;
	int32_t x3119 = 23;
	volatile int16_t x3120 = -1;
	volatile int32_t t74 = 7225;

    t74 = ((x3117==x3118)>>(x3119-x3120));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x3278 = -7;
	uint16_t x3279 = 4U;

    t75 = ((x3277==x3278)>>(x3279-x3280));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x3301 = 12301033U;
	int16_t x3302 = INT16_MAX;
	uint16_t x3303 = 11U;
	uint32_t x3304 = UINT32_MAX;
	int32_t t76 = 29;

    t76 = ((x3301==x3302)>>(x3303-x3304));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x3317 = UINT32_MAX;
	uint32_t x3318 = 562242238U;
	int16_t x3319 = -1;
	int8_t x3320 = -1;
	static int32_t t77 = -13196117;

    t77 = ((x3317==x3318)>>(x3319-x3320));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x3349 = UINT8_MAX;
	int64_t x3350 = -35080872631591LL;
	uint8_t x3351 = 9U;
	volatile int16_t x3352 = -1;

    t78 = ((x3349==x3350)>>(x3351-x3352));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x3361 = INT32_MAX;
	static int16_t x3362 = -1;
	uint16_t x3363 = 7U;
	volatile int32_t t79 = 40174;

    t79 = ((x3361==x3362)>>(x3363-x3364));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint32_t x3385 = 23503860U;
	volatile int16_t x3388 = -1;
	volatile int32_t t80 = -1;

    t80 = ((x3385==x3386)>>(x3387-x3388));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x3406 = INT16_MIN;
	int32_t x3407 = INT32_MIN;
	int32_t x3408 = INT32_MIN;
	int32_t t81 = 77743271;

    t81 = ((x3405==x3406)>>(x3407-x3408));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x3417 = -1LL;
	uint16_t x3418 = UINT16_MAX;
	int32_t x3419 = -1;
	volatile int32_t t82 = -47398717;

    t82 = ((x3417==x3418)>>(x3419-x3420));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x3421 = 1;
	int64_t x3422 = INT64_MIN;
	uint64_t x3423 = UINT64_MAX;
	int16_t x3424 = -12;
	static volatile int32_t t83 = 682;

    t83 = ((x3421==x3422)>>(x3423-x3424));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int8_t x3473 = -1;
	int8_t x3474 = -1;
	uint32_t x3475 = UINT32_MAX;
	static int8_t x3476 = -1;
	int32_t t84 = -295666697;

    t84 = ((x3473==x3474)>>(x3475-x3476));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x3481 = 12651686830847985LLU;
	int32_t x3482 = -1;
	int32_t x3483 = -1;
	uint64_t x3484 = UINT64_MAX;
	int32_t t85 = 224768735;

    t85 = ((x3481==x3482)>>(x3483-x3484));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x3513 = INT16_MAX;
	static int32_t x3514 = -316021;
	volatile uint8_t x3515 = 12U;
	int16_t x3516 = 10;
	volatile int32_t t86 = 43039;

    t86 = ((x3513==x3514)>>(x3515-x3516));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint32_t x3517 = 1644594696U;
	volatile uint64_t x3518 = 26LLU;
	volatile uint64_t x3519 = UINT64_MAX;
	volatile int32_t t87 = -978535885;

    t87 = ((x3517==x3518)>>(x3519-x3520));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x3522 = 764920003LLU;
	volatile int16_t x3523 = -1;
	static volatile int8_t x3524 = -1;
	static volatile int32_t t88 = 3;

    t88 = ((x3521==x3522)>>(x3523-x3524));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x3557 = -1LL;
	uint16_t x3558 = 1U;
	int64_t x3560 = INT64_MIN;

    t89 = ((x3557==x3558)>>(x3559-x3560));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x3762 = INT8_MIN;
	uint8_t x3763 = 20U;
	volatile int8_t x3764 = 3;
	int32_t t90 = -3202596;

    t90 = ((x3761==x3762)>>(x3763-x3764));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x3773 = 0;
	int8_t x3774 = INT8_MIN;
	static int64_t x3775 = -1LL;
	volatile int8_t x3776 = -4;

    t91 = ((x3773==x3774)>>(x3775-x3776));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x3869 = INT64_MIN;
	int32_t x3870 = INT32_MIN;
	int8_t x3871 = -1;
	static volatile int64_t x3872 = -1LL;
	int32_t t92 = -41015214;

    t92 = ((x3869==x3870)>>(x3871-x3872));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x3901 = 1U;
	int8_t x3902 = INT8_MIN;
	volatile int32_t x3903 = 3;
	int8_t x3904 = -1;
	int32_t t93 = -971206793;

    t93 = ((x3901==x3902)>>(x3903-x3904));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int64_t x3961 = INT64_MAX;
	int32_t x3963 = INT32_MIN;
	static volatile int32_t t94 = 14074;

    t94 = ((x3961==x3962)>>(x3963-x3964));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x3985 = INT16_MAX;
	volatile int64_t x3986 = INT64_MIN;
	int32_t x3987 = -1;
	int32_t t95 = -60657123;

    t95 = ((x3985==x3986)>>(x3987-x3988));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x4021 = INT32_MIN;
	static int8_t x4022 = -1;
	int32_t t96 = -12139;

    t96 = ((x4021==x4022)>>(x4023-x4024));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x4073 = -4;
	static int32_t x4075 = INT32_MIN;
	int32_t x4076 = INT32_MIN;

    t97 = ((x4073==x4074)>>(x4075-x4076));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x4113 = INT16_MIN;
	uint16_t x4115 = 7U;
	volatile uint8_t x4116 = 1U;
	int32_t t98 = 451596;

    t98 = ((x4113==x4114)>>(x4115-x4116));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x4189 = 26087U;
	static int8_t x4190 = INT8_MIN;
	volatile int16_t x4191 = -1;
	int32_t x4192 = -1;
	volatile int32_t t99 = -4339;

    t99 = ((x4189==x4190)>>(x4191-x4192));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x4206 = INT16_MIN;
	int8_t x4207 = INT8_MIN;
	volatile int32_t t100 = 990409790;

    t100 = ((x4205==x4206)>>(x4207-x4208));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x4217 = 49303389259LLU;
	int8_t x4218 = INT8_MAX;
	volatile int32_t t101 = -1;

    t101 = ((x4217==x4218)>>(x4219-x4220));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x4233 = INT64_MIN;
	int64_t x4234 = INT64_MAX;
	uint16_t x4235 = UINT16_MAX;
	uint16_t x4236 = UINT16_MAX;
	static int32_t t102 = -171559708;

    t102 = ((x4233==x4234)>>(x4235-x4236));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x4349 = INT64_MAX;
	static volatile uint32_t x4350 = 43511853U;
	int16_t x4352 = 2;
	volatile int32_t t103 = 0;

    t103 = ((x4349==x4350)>>(x4351-x4352));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x4389 = 0U;
	uint8_t x4390 = UINT8_MAX;
	volatile uint16_t x4391 = 0U;
	int16_t x4392 = -1;
	int32_t t104 = -2;

    t104 = ((x4389==x4390)>>(x4391-x4392));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x4405 = INT8_MAX;
	int16_t x4406 = 1019;
	int8_t x4407 = -1;
	int8_t x4408 = -1;
	static int32_t t105 = 20;

    t105 = ((x4405==x4406)>>(x4407-x4408));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x4421 = INT8_MAX;
	static int16_t x4422 = INT16_MAX;
	static uint8_t x4424 = 1U;
	static volatile int32_t t106 = 5741487;

    t106 = ((x4421==x4422)>>(x4423-x4424));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x4463 = 28;
	volatile uint32_t x4464 = 2U;
	int32_t t107 = -237832;

    t107 = ((x4461==x4462)>>(x4463-x4464));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x4501 = -555106046994509618LL;
	int16_t x4503 = INT16_MIN;
	static int16_t x4504 = INT16_MIN;

    t108 = ((x4501==x4502)>>(x4503-x4504));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint16_t x4589 = 467U;
	static volatile uint16_t x4591 = 129U;
	int8_t x4592 = INT8_MAX;

    t109 = ((x4589==x4590)>>(x4591-x4592));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x4605 = INT64_MAX;
	static uint32_t x4606 = 1U;
	int64_t x4607 = -1LL;
	uint64_t x4608 = UINT64_MAX;
	int32_t t110 = 1821;

    t110 = ((x4605==x4606)>>(x4607-x4608));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x4758 = -1;
	uint64_t x4759 = UINT64_MAX;
	static volatile int16_t x4760 = -1;
	int32_t t111 = 15;

    t111 = ((x4757==x4758)>>(x4759-x4760));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x4797 = INT8_MIN;
	static volatile int64_t x4798 = -25065827826LL;
	volatile int8_t x4800 = -1;
	volatile int32_t t112 = 1;

    t112 = ((x4797==x4798)>>(x4799-x4800));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x4841 = 127797U;
	int32_t x4842 = 98;
	uint8_t x4843 = 8U;
	volatile int64_t x4844 = -1LL;
	int32_t t113 = -2499910;

    t113 = ((x4841==x4842)>>(x4843-x4844));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x4889 = UINT32_MAX;
	int64_t x4890 = INT64_MIN;
	static uint32_t x4891 = UINT32_MAX;

    t114 = ((x4889==x4890)>>(x4891-x4892));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x5025 = INT32_MAX;
	int16_t x5027 = -1;
	uint64_t x5028 = UINT64_MAX;
	int32_t t115 = 294228798;

    t115 = ((x5025==x5026)>>(x5027-x5028));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x5133 = INT32_MIN;
	static int8_t x5134 = INT8_MIN;
	static int16_t x5136 = -1;
	int32_t t116 = -2;

    t116 = ((x5133==x5134)>>(x5135-x5136));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x5166 = 3813;
	int8_t x5167 = 0;
	volatile uint64_t x5168 = UINT64_MAX;
	volatile int32_t t117 = -151316;

    t117 = ((x5165==x5166)>>(x5167-x5168));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x5173 = 16198U;
	uint8_t x5174 = 14U;
	int16_t x5175 = 1;
	static uint32_t x5176 = UINT32_MAX;
	volatile int32_t t118 = 18265234;

    t118 = ((x5173==x5174)>>(x5175-x5176));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x5185 = UINT8_MAX;
	int32_t x5186 = INT32_MAX;
	int8_t x5187 = 0;
	volatile uint64_t x5188 = UINT64_MAX;
	volatile int32_t t119 = 1;

    t119 = ((x5185==x5186)>>(x5187-x5188));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x5205 = UINT16_MAX;
	uint8_t x5208 = UINT8_MAX;
	volatile int32_t t120 = 4868;

    t120 = ((x5205==x5206)>>(x5207-x5208));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x5217 = UINT64_MAX;
	static int8_t x5219 = INT8_MIN;
	volatile int8_t x5220 = INT8_MIN;
	static int32_t t121 = -1306;

    t121 = ((x5217==x5218)>>(x5219-x5220));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x5246 = UINT8_MAX;
	int8_t x5247 = -1;
	int16_t x5248 = -1;
	int32_t t122 = -360192649;

    t122 = ((x5245==x5246)>>(x5247-x5248));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x5281 = INT16_MIN;
	int64_t x5282 = -120773080835427LL;
	int8_t x5284 = -1;

    t123 = ((x5281==x5282)>>(x5283-x5284));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x5319 = INT8_MIN;
	volatile int8_t x5320 = INT8_MIN;
	volatile int32_t t124 = 265;

    t124 = ((x5317==x5318)>>(x5319-x5320));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x5338 = UINT64_MAX;
	static int8_t x5339 = -1;
	int32_t x5340 = -3;

    t125 = ((x5337==x5338)>>(x5339-x5340));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x5421 = INT8_MIN;
	int16_t x5423 = 0;
	static volatile int8_t x5424 = -1;
	volatile int32_t t126 = -54336;

    t126 = ((x5421==x5422)>>(x5423-x5424));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x5509 = 1837478065U;
	uint8_t x5510 = 0U;
	int32_t x5511 = 0;
	int16_t x5512 = -1;
	static int32_t t127 = 923910864;

    t127 = ((x5509==x5510)>>(x5511-x5512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x5581 = INT8_MIN;
	volatile uint16_t x5582 = 11272U;
	static int64_t x5583 = -1LL;
	static int16_t x5584 = -1;
	int32_t t128 = 26875;

    t128 = ((x5581==x5582)>>(x5583-x5584));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x5653 = 1;
	static int16_t x5655 = 26;
	static int16_t x5656 = 6;
	volatile int32_t t129 = 0;

    t129 = ((x5653==x5654)>>(x5655-x5656));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x5665 = 3946878U;
	int8_t x5666 = INT8_MIN;
	uint32_t x5668 = UINT32_MAX;
	volatile int32_t t130 = 3814407;

    t130 = ((x5665==x5666)>>(x5667-x5668));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x5693 = -1;
	int64_t x5694 = 4849436198840LL;
	int8_t x5695 = -1;
	volatile int16_t x5696 = -18;
	volatile int32_t t131 = 2044;

    t131 = ((x5693==x5694)>>(x5695-x5696));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x5702 = INT16_MIN;
	int8_t x5703 = 0;
	static int8_t x5704 = -1;

    t132 = ((x5701==x5702)>>(x5703-x5704));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x5713 = -1;
	int64_t x5714 = INT64_MAX;
	static volatile int8_t x5716 = INT8_MAX;
	int32_t t133 = 178124;

    t133 = ((x5713==x5714)>>(x5715-x5716));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x5749 = INT16_MAX;
	int16_t x5750 = 255;
	int64_t x5751 = -1LL;
	static int32_t t134 = -6246;

    t134 = ((x5749==x5750)>>(x5751-x5752));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x5769 = 21656590321LLU;
	int8_t x5771 = 1;
	int16_t x5772 = -1;
	int32_t t135 = 2967448;

    t135 = ((x5769==x5770)>>(x5771-x5772));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x5785 = INT16_MIN;
	int32_t x5787 = 7;
	static volatile int8_t x5788 = -1;
	int32_t t136 = 0;

    t136 = ((x5785==x5786)>>(x5787-x5788));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x5810 = 19798754U;
	uint16_t x5811 = 5U;
	uint64_t x5812 = UINT64_MAX;
	int32_t t137 = -4662842;

    t137 = ((x5809==x5810)>>(x5811-x5812));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x5841 = INT64_MIN;
	static uint16_t x5842 = UINT16_MAX;
	int32_t x5843 = -1;
	int32_t x5844 = -1;
	int32_t t138 = 1121;

    t138 = ((x5841==x5842)>>(x5843-x5844));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x5878 = UINT64_MAX;
	uint16_t x5879 = 9U;
	volatile int32_t x5880 = -9;
	int32_t t139 = -8;

    t139 = ((x5877==x5878)>>(x5879-x5880));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x5949 = UINT32_MAX;
	static volatile int8_t x5950 = 0;
	int32_t x5951 = -1;
	volatile int8_t x5952 = -1;
	int32_t t140 = 15;

    t140 = ((x5949==x5950)>>(x5951-x5952));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x6097 = UINT32_MAX;
	int16_t x6098 = 875;
	int8_t x6099 = INT8_MAX;
	volatile int8_t x6100 = INT8_MAX;
	int32_t t141 = -7;

    t141 = ((x6097==x6098)>>(x6099-x6100));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x6101 = 119672170315988999LLU;
	volatile int16_t x6102 = INT16_MIN;
	static uint32_t x6103 = UINT32_MAX;
	int8_t x6104 = -1;
	int32_t t142 = -79172022;

    t142 = ((x6101==x6102)>>(x6103-x6104));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int16_t x6109 = -1;
	int64_t x6110 = -1LL;
	uint8_t x6111 = 1U;
	int8_t x6112 = -1;
	int32_t t143 = 92435;

    t143 = ((x6109==x6110)>>(x6111-x6112));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x6123 = 23U;
	static int8_t x6124 = 20;
	static int32_t t144 = -777868;

    t144 = ((x6121==x6122)>>(x6123-x6124));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x6173 = 85328230U;
	volatile int64_t x6174 = -19521821792190530LL;
	static uint32_t x6175 = 15U;
	int64_t x6176 = -1LL;
	static int32_t t145 = 2;

    t145 = ((x6173==x6174)>>(x6175-x6176));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x6189 = INT8_MIN;
	uint8_t x6190 = 43U;
	static uint8_t x6191 = 1U;
	int8_t x6192 = -1;
	int32_t t146 = 0;

    t146 = ((x6189==x6190)>>(x6191-x6192));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x6225 = 126;
	int64_t x6226 = 56273181LL;
	static uint64_t x6227 = UINT64_MAX;
	uint64_t x6228 = UINT64_MAX;
	volatile int32_t t147 = 50925;

    t147 = ((x6225==x6226)>>(x6227-x6228));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x6277 = INT32_MIN;
	int8_t x6278 = -11;
	int16_t x6279 = -1;
	volatile uint64_t x6280 = UINT64_MAX;
	volatile int32_t t148 = -1;

    t148 = ((x6277==x6278)>>(x6279-x6280));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x6285 = 0U;
	int64_t x6286 = INT64_MIN;
	uint8_t x6287 = 0U;
	int16_t x6288 = -4;
	static int32_t t149 = -11;

    t149 = ((x6285==x6286)>>(x6287-x6288));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x6334 = -1;
	int32_t x6335 = -1;
	int64_t x6336 = -1LL;
	volatile int32_t t150 = -31852;

    t150 = ((x6333==x6334)>>(x6335-x6336));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x6441 = -8538;
	uint8_t x6443 = 23U;
	static volatile int8_t x6444 = 11;
	int32_t t151 = 358;

    t151 = ((x6441==x6442)>>(x6443-x6444));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x6481 = -1;
	volatile uint32_t x6482 = 644320691U;
	uint8_t x6483 = 4U;

    t152 = ((x6481==x6482)>>(x6483-x6484));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x6493 = INT16_MAX;
	uint16_t x6494 = 1860U;
	static int32_t x6496 = -1;
	int32_t t153 = 2;

    t153 = ((x6493==x6494)>>(x6495-x6496));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x6581 = 4443296620089657LLU;
	int32_t x6582 = 2771;
	int8_t x6583 = -1;
	int8_t x6584 = -1;
	volatile int32_t t154 = 2;

    t154 = ((x6581==x6582)>>(x6583-x6584));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x6602 = 895;
	int8_t x6603 = -1;
	int16_t x6604 = -1;
	int32_t t155 = -68733;

    t155 = ((x6601==x6602)>>(x6603-x6604));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x6621 = 5654285LLU;
	static int8_t x6622 = 21;
	volatile int16_t x6623 = -1;
	int8_t x6624 = -1;
	static int32_t t156 = -14;

    t156 = ((x6621==x6622)>>(x6623-x6624));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x6769 = INT32_MAX;
	int64_t x6771 = -1LL;
	int64_t x6772 = -1LL;
	volatile int32_t t157 = 64371497;

    t157 = ((x6769==x6770)>>(x6771-x6772));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x6777 = INT16_MIN;
	uint64_t x6778 = UINT64_MAX;
	uint32_t x6779 = UINT32_MAX;
	int32_t t158 = -15;

    t158 = ((x6777==x6778)>>(x6779-x6780));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x6801 = -4LL;
	volatile int64_t x6802 = INT64_MAX;
	volatile uint16_t x6803 = 5U;
	int64_t x6804 = -1LL;
	volatile int32_t t159 = 4743;

    t159 = ((x6801==x6802)>>(x6803-x6804));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x6829 = -9169;
	static uint8_t x6830 = 10U;
	int16_t x6831 = 7;
	uint32_t x6832 = UINT32_MAX;
	static int32_t t160 = 1;

    t160 = ((x6829==x6830)>>(x6831-x6832));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x6833 = INT32_MIN;
	static uint8_t x6835 = 1U;
	uint16_t x6836 = 0U;
	volatile int32_t t161 = 142702115;

    t161 = ((x6833==x6834)>>(x6835-x6836));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x6849 = 42114920508LL;
	uint16_t x6850 = 57U;
	uint16_t x6851 = 44U;
	uint32_t x6852 = 16U;
	int32_t t162 = -242912;

    t162 = ((x6849==x6850)>>(x6851-x6852));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x6921 = INT32_MIN;
	uint64_t x6922 = UINT64_MAX;
	volatile int8_t x6923 = 1;
	static int8_t x6924 = -16;
	int32_t t163 = -7359;

    t163 = ((x6921==x6922)>>(x6923-x6924));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x6929 = INT64_MIN;
	int8_t x6930 = INT8_MIN;
	static uint8_t x6931 = 0U;
	int64_t x6932 = -1LL;
	int32_t t164 = 1395;

    t164 = ((x6929==x6930)>>(x6931-x6932));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x6945 = UINT16_MAX;
	uint64_t x6947 = UINT64_MAX;
	int32_t x6948 = -1;
	int32_t t165 = 60088015;

    t165 = ((x6945==x6946)>>(x6947-x6948));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x6981 = UINT64_MAX;
	uint64_t x6983 = UINT64_MAX;
	volatile int32_t x6984 = -1;

    t166 = ((x6981==x6982)>>(x6983-x6984));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint32_t x6989 = UINT32_MAX;
	int32_t x6990 = -1;
	uint16_t x6991 = 0U;
	volatile int64_t x6992 = -1LL;
	volatile int32_t t167 = 3901867;

    t167 = ((x6989==x6990)>>(x6991-x6992));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x7017 = 117U;
	int16_t x7018 = INT16_MIN;
	int16_t x7019 = -1;
	int32_t x7020 = -1;
	static int32_t t168 = -1;

    t168 = ((x7017==x7018)>>(x7019-x7020));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x7049 = -1200591768042310945LL;
	static int16_t x7050 = INT16_MIN;
	static int64_t x7051 = -1LL;
	int8_t x7052 = -1;
	int32_t t169 = -31692;

    t169 = ((x7049==x7050)>>(x7051-x7052));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x7089 = 836925547;
	int32_t x7090 = INT32_MAX;
	volatile uint8_t x7091 = 1U;
	static uint64_t x7092 = UINT64_MAX;

    t170 = ((x7089==x7090)>>(x7091-x7092));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x7129 = -11;
	int16_t x7130 = INT16_MIN;
	uint16_t x7131 = UINT16_MAX;
	volatile int32_t t171 = 202388;

    t171 = ((x7129==x7130)>>(x7131-x7132));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x7161 = INT32_MAX;
	int32_t x7163 = 2;
	static int8_t x7164 = 0;

    t172 = ((x7161==x7162)>>(x7163-x7164));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x7189 = UINT16_MAX;
	static int16_t x7191 = -1;

    t173 = ((x7189==x7190)>>(x7191-x7192));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x7213 = 165232553U;
	static int32_t x7214 = INT32_MIN;
	static volatile uint8_t x7215 = 8U;
	volatile int8_t x7216 = -14;
	static volatile int32_t t174 = -6;

    t174 = ((x7213==x7214)>>(x7215-x7216));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x7233 = 989003U;
	volatile int16_t x7235 = 42;
	int16_t x7236 = 37;
	int32_t t175 = -636;

    t175 = ((x7233==x7234)>>(x7235-x7236));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x7237 = 147951;
	uint64_t x7238 = 2657355915124LLU;
	volatile int32_t x7239 = -1;
	int64_t x7240 = -1LL;
	volatile int32_t t176 = -1;

    t176 = ((x7237==x7238)>>(x7239-x7240));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x7277 = 2008967375U;
	static volatile int64_t x7278 = INT64_MAX;
	uint32_t x7279 = UINT32_MAX;
	uint32_t x7280 = UINT32_MAX;
	int32_t t177 = 599289;

    t177 = ((x7277==x7278)>>(x7279-x7280));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x7389 = INT32_MIN;
	int16_t x7390 = INT16_MIN;
	int8_t x7391 = 29;
	static int64_t x7392 = 1LL;

    t178 = ((x7389==x7390)>>(x7391-x7392));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint16_t x7517 = 7U;
	int16_t x7518 = INT16_MIN;
	int8_t x7519 = 13;
	int8_t x7520 = 12;
	volatile int32_t t179 = 159;

    t179 = ((x7517==x7518)>>(x7519-x7520));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x7545 = -1;
	int16_t x7547 = 1;
	static volatile uint64_t x7548 = UINT64_MAX;
	int32_t t180 = -8730;

    t180 = ((x7545==x7546)>>(x7547-x7548));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int8_t x7621 = INT8_MAX;
	int32_t x7622 = INT32_MIN;
	volatile uint64_t x7624 = UINT64_MAX;
	int32_t t181 = -1;

    t181 = ((x7621==x7622)>>(x7623-x7624));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x7713 = 946819957367549877LL;
	uint8_t x7714 = UINT8_MAX;
	int8_t x7715 = -1;
	uint32_t x7716 = UINT32_MAX;
	volatile int32_t t182 = 131669322;

    t182 = ((x7713==x7714)>>(x7715-x7716));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x7777 = UINT16_MAX;
	static uint16_t x7778 = 506U;
	int8_t x7779 = 24;
	int32_t t183 = 3983518;

    t183 = ((x7777==x7778)>>(x7779-x7780));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x7809 = INT16_MIN;
	int8_t x7811 = 0;
	int8_t x7812 = -26;
	int32_t t184 = -980632676;

    t184 = ((x7809==x7810)>>(x7811-x7812));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x7837 = -1;
	int64_t x7838 = INT64_MIN;
	int64_t x7839 = INT64_MIN;
	volatile int64_t x7840 = INT64_MIN;
	volatile int32_t t185 = -36287000;

    t185 = ((x7837==x7838)>>(x7839-x7840));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x7853 = INT16_MIN;
	volatile int16_t x7854 = 10933;
	int8_t x7855 = INT8_MAX;
	uint16_t x7856 = 126U;
	static volatile int32_t t186 = 251;

    t186 = ((x7853==x7854)>>(x7855-x7856));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x7861 = 4;
	int8_t x7862 = INT8_MAX;
	uint8_t x7863 = 27U;
	static uint32_t x7864 = UINT32_MAX;
	volatile int32_t t187 = -9;

    t187 = ((x7861==x7862)>>(x7863-x7864));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x7881 = -29;
	int8_t x7882 = INT8_MIN;
	uint8_t x7883 = 20U;
	static int8_t x7884 = 1;

    t188 = ((x7881==x7882)>>(x7883-x7884));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x7913 = INT64_MAX;
	volatile int64_t x7914 = INT64_MIN;
	int32_t t189 = 3695;

    t189 = ((x7913==x7914)>>(x7915-x7916));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x7945 = -1951276532805LL;
	static uint16_t x7946 = 7U;
	uint8_t x7947 = 5U;
	int64_t x7948 = -1LL;
	int32_t t190 = -50474;

    t190 = ((x7945==x7946)>>(x7947-x7948));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x8013 = INT32_MIN;
	volatile int32_t x8014 = INT32_MIN;
	volatile int8_t x8015 = INT8_MIN;
	volatile int32_t t191 = 454209;

    t191 = ((x8013==x8014)>>(x8015-x8016));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x8042 = INT16_MIN;
	volatile int32_t x8043 = INT32_MIN;

    t192 = ((x8041==x8042)>>(x8043-x8044));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x8074 = 1833U;
	uint32_t x8075 = 26U;
	uint32_t x8076 = 0U;
	volatile int32_t t193 = 607;

    t193 = ((x8073==x8074)>>(x8075-x8076));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x8097 = INT16_MAX;
	static int32_t x8098 = 1;
	int32_t x8099 = -1;
	int8_t x8100 = -1;
	volatile int32_t t194 = -1;

    t194 = ((x8097==x8098)>>(x8099-x8100));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x8157 = 3;
	volatile int64_t x8158 = INT64_MIN;
	volatile uint64_t x8159 = UINT64_MAX;
	volatile int32_t x8160 = -1;
	int32_t t195 = 301;

    t195 = ((x8157==x8158)>>(x8159-x8160));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x8213 = INT32_MIN;
	int64_t x8214 = INT64_MIN;
	int16_t x8215 = 26;
	int16_t x8216 = -1;
	int32_t t196 = 1;

    t196 = ((x8213==x8214)>>(x8215-x8216));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x8245 = INT32_MIN;
	uint8_t x8246 = 58U;
	static volatile uint64_t x8247 = UINT64_MAX;
	int8_t x8248 = -12;
	int32_t t197 = 60311104;

    t197 = ((x8245==x8246)>>(x8247-x8248));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x8265 = 74LL;
	volatile int64_t x8266 = -1LL;
	static volatile int32_t x8267 = 2;
	static uint32_t x8268 = UINT32_MAX;

    t198 = ((x8265==x8266)>>(x8267-x8268));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x8345 = INT64_MAX;
	int64_t x8346 = 128311LL;
	uint32_t x8347 = UINT32_MAX;
	volatile int8_t x8348 = -5;
	volatile int32_t t199 = 7879704;

    t199 = ((x8345==x8346)>>(x8347-x8348));

    if (t199 != 0) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

