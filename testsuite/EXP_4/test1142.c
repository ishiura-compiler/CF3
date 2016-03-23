
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

static uint8_t x1 = 0U;
int8_t x3 = 0;
static uint8_t x201 = 4U;
int16_t x204 = 17;
int8_t x222 = 35;
volatile int8_t x223 = INT8_MAX;
volatile int32_t t3 = -263089785;
volatile int32_t t4 = 611083;
int8_t x325 = -1;
int16_t x519 = INT16_MAX;
int16_t x625 = -1;
int8_t x781 = INT8_MIN;
int8_t x848 = 1;
uint32_t x910 = 32203U;
uint16_t x911 = 8143U;
volatile int16_t x1071 = INT16_MAX;
int32_t t13 = -36261297;
int16_t x1188 = 1;
volatile int8_t x1372 = 1;
int32_t t16 = 110190794;
int64_t x1385 = -1LL;
volatile uint16_t x1387 = UINT16_MAX;
uint64_t x1448 = 0LLU;
uint64_t x1571 = 15599039053LLU;
int16_t x1589 = -1;
volatile uint16_t x1644 = 10U;
uint64_t x1691 = 31943LLU;
int16_t x1756 = 5;
int32_t t28 = 48;
int8_t x1786 = 0;
uint64_t x1787 = 12LLU;
static uint32_t x1930 = 392236129U;
int16_t x2129 = -1;
uint16_t x2145 = 27927U;
int8_t x2147 = 1;
int32_t x2209 = INT32_MIN;
static int64_t x2224 = 25LL;
volatile int8_t x2235 = 6;
int32_t t38 = 8;
static int32_t t39 = 14798152;
volatile int32_t t40 = -1;
static uint8_t x2400 = 7U;
uint64_t x2437 = 1225078LLU;
static int64_t x2445 = INT64_MAX;
static volatile uint8_t x2448 = 10U;
uint32_t x2643 = 2U;
uint8_t x2800 = 15U;
static uint64_t x2823 = 182933566345LLU;
int8_t x2837 = 4;
int32_t t49 = -727652;
int32_t x2854 = -1;
uint8_t x2957 = 70U;
uint64_t x3303 = 47768242689396LLU;
uint16_t x3347 = 16U;
volatile int32_t t58 = -17393;
static uint64_t x3558 = 1436LLU;
static int8_t x3560 = 12;
volatile uint64_t x3722 = UINT64_MAX;
volatile int32_t t63 = -42891;
int64_t x3949 = INT64_MIN;
uint16_t x3952 = 1U;
volatile int32_t t67 = -1;
static int32_t x4262 = INT32_MIN;
static uint32_t x4263 = 239U;
int32_t x4264 = 12;
int32_t t69 = 56856;
int16_t x4422 = INT16_MIN;
static uint32_t x4423 = 2562U;
volatile uint8_t x4484 = 6U;
uint8_t x4607 = 82U;
uint32_t x4652 = 3U;
volatile int64_t x4723 = 8LL;
int8_t x4804 = 0;
int64_t x5134 = -1LL;
volatile int32_t t82 = 0;
int64_t x5386 = -108LL;
uint64_t x5388 = 10LLU;
uint8_t x5396 = 2U;
uint8_t x5449 = 0U;
int16_t x5605 = INT16_MAX;
volatile uint16_t x5637 = UINT16_MAX;
static uint16_t x5696 = 1U;
volatile int16_t x5766 = INT16_MIN;
volatile uint16_t x5768 = 6U;
volatile uint32_t x5829 = 10U;
int8_t x5877 = INT8_MAX;
int16_t x5889 = -1;
int64_t x5890 = INT64_MIN;
int32_t t95 = -61;
static int8_t x6102 = -1;
uint32_t x6103 = 28763752U;
uint64_t x6223 = 167564460866784LLU;
uint32_t x6609 = 7155532U;
static uint16_t x6642 = 0U;
int8_t x6722 = 0;
volatile int8_t x6723 = INT8_MAX;
static int64_t x6724 = 7LL;
volatile uint32_t x6819 = 112579U;
int32_t x6843 = 3069955;
uint8_t x6844 = 7U;
int32_t x6917 = -1;
uint8_t x6919 = UINT8_MAX;
volatile int32_t t108 = 110140;
static volatile int32_t t109 = -424537124;
uint16_t x7051 = UINT16_MAX;
int32_t t111 = 33849;
volatile int32_t t112 = -1;
int64_t x7126 = INT64_MAX;
uint8_t x7142 = 35U;
volatile int32_t x7144 = 0;
uint64_t x7145 = 77603733369898899LLU;
static volatile int64_t x7147 = 1240256610848958LL;
int32_t t115 = 452;
volatile int32_t t117 = -340202;
int32_t x7420 = 7;
int8_t x7569 = 0;
static uint8_t x7696 = 31U;
int16_t x7797 = 210;
uint32_t x7798 = UINT32_MAX;
uint8_t x7800 = 2U;
static int32_t t125 = 22;
int16_t x7885 = INT16_MIN;
uint16_t x7888 = 0U;
int32_t t127 = -65;
volatile int32_t t128 = 34924;
volatile uint16_t x8133 = 239U;
volatile uint64_t x8175 = 1376689521763LLU;
volatile int32_t t130 = -968;
volatile int64_t x8417 = INT64_MIN;
int32_t t132 = 114792035;
volatile uint16_t x8555 = 5U;
uint64_t x8753 = 4LLU;
uint8_t x8756 = 0U;
int64_t x9066 = -31122642LL;
uint64_t x9114 = 3748281LLU;
static int32_t t137 = -479;
volatile uint32_t x9230 = 14529U;
int32_t t140 = 0;
int32_t x9406 = INT32_MIN;
uint64_t x9407 = 12417550465LLU;
static int32_t t141 = 0;
volatile uint8_t x9418 = 107U;
uint8_t x9419 = UINT8_MAX;
static int8_t x9420 = 1;
volatile int32_t t142 = -5836;
uint32_t x9450 = 12533578U;
uint8_t x9665 = 123U;
uint64_t x9667 = UINT64_MAX;
uint64_t x9727 = UINT64_MAX;
int16_t x9821 = -415;
uint8_t x9823 = 1U;
volatile int32_t x9824 = 26;
int32_t x9833 = INT32_MIN;
int64_t x9834 = INT64_MAX;
static uint16_t x9901 = 3422U;
uint64_t x9903 = 15878318397LLU;
volatile uint16_t x9904 = 1U;
volatile int64_t x9958 = -1LL;
int16_t x10101 = -1;
int8_t x10102 = -1;
int8_t x10149 = 0;
uint8_t x10456 = 0U;
int64_t x10498 = INT64_MAX;
volatile int32_t t161 = 81590428;
uint64_t x10603 = 266015LLU;
int32_t x10934 = INT32_MIN;
int16_t x11142 = 167;
volatile uint8_t x11170 = UINT8_MAX;
int64_t x11171 = 10LL;
int32_t t167 = 10284;
volatile int32_t x11176 = 4;
int32_t x11213 = 26122701;
int32_t t170 = 85833;
volatile int8_t x11444 = 0;
int8_t x11461 = -1;
uint8_t x11464 = 1U;
static volatile int16_t x11708 = 0;
static uint16_t x11745 = UINT16_MAX;
int32_t x11746 = -1;
static int16_t x11845 = INT16_MAX;
volatile uint32_t x11846 = 78679U;
static uint16_t x11947 = 2297U;
static uint32_t x12019 = 2529562U;
uint8_t x12020 = 5U;
int8_t x12053 = INT8_MIN;
volatile int8_t x12134 = -1;
static volatile int32_t t181 = -167531;
static uint8_t x12146 = UINT8_MAX;
uint16_t x12148 = 3U;
volatile int32_t t183 = -28774967;
uint64_t x12163 = 4158907148LLU;
volatile uint8_t x12164 = 10U;
int32_t t185 = 1818;
int64_t x12251 = 106LL;
static uint8_t x12544 = 0U;
static int32_t x12597 = INT32_MAX;
int16_t x12599 = INT16_MAX;
static int8_t x12761 = INT8_MAX;
int16_t x12762 = INT16_MIN;
volatile uint32_t x12909 = UINT32_MAX;
int32_t x12910 = INT32_MIN;
uint16_t x12911 = 1010U;
uint32_t x13049 = 30908U;
static uint16_t x13051 = 29974U;
int32_t t193 = -1;
uint16_t x13064 = 0U;
int32_t t194 = -190;
int64_t x13146 = -1LL;
volatile uint8_t x13148 = 0U;
static volatile int32_t t195 = 7599;
int32_t t196 = 1833896;
int64_t x13247 = 68447132LL;
uint8_t x13248 = 2U;
volatile int32_t t197 = 1;
uint8_t x13296 = 1U;


void f0(void) {
    	uint8_t x2 = 3U;
	int8_t x4 = 1;
	volatile int32_t t0 = 449968;

    t0 = (x1==(x2&(x3<<x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x202 = UINT64_MAX;
	uint64_t x203 = UINT64_MAX;
	int32_t t1 = 0;

    t1 = (x201==(x202&(x203<<x204)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int16_t x221 = INT16_MIN;
	uint16_t x224 = 0U;
	static volatile int32_t t2 = -4300381;

    t2 = (x221==(x222&(x223<<x224)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x229 = INT8_MAX;
	static uint16_t x230 = 1238U;
	uint8_t x231 = 4U;
	uint8_t x232 = 19U;

    t3 = (x229==(x230&(x231<<x232)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x305 = -5;
	uint64_t x306 = 5746397LLU;
	int8_t x307 = INT8_MAX;
	volatile uint8_t x308 = 4U;

    t4 = (x305==(x306&(x307<<x308)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x326 = INT64_MIN;
	uint32_t x327 = 33U;
	volatile uint16_t x328 = 14U;
	int32_t t5 = 6;

    t5 = (x325==(x326&(x327<<x328)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x517 = 0U;
	uint32_t x518 = UINT32_MAX;
	uint16_t x520 = 7U;
	int32_t t6 = 68;

    t6 = (x517==(x518&(x519<<x520)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x626 = 26339017227365690LLU;
	uint16_t x627 = UINT16_MAX;
	int8_t x628 = 1;
	static int32_t t7 = 26;

    t7 = (x625==(x626&(x627<<x628)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x782 = INT8_MAX;
	int16_t x783 = INT16_MAX;
	int32_t x784 = 1;
	volatile int32_t t8 = 29;

    t8 = (x781==(x782&(x783<<x784)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x845 = -3;
	volatile uint64_t x846 = 33512657374LLU;
	static int16_t x847 = 54;
	int32_t t9 = -690;

    t9 = (x845==(x846&(x847<<x848)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x909 = UINT32_MAX;
	uint32_t x912 = 9U;
	volatile int32_t t10 = 183;

    t10 = (x909==(x910&(x911<<x912)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x989 = -1LL;
	uint8_t x990 = 29U;
	uint8_t x991 = 4U;
	volatile uint8_t x992 = 3U;
	volatile int32_t t11 = -298;

    t11 = (x989==(x990&(x991<<x992)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x1069 = 1993472346297795LL;
	uint8_t x1070 = UINT8_MAX;
	uint64_t x1072 = 7LLU;
	volatile int32_t t12 = 3;

    t12 = (x1069==(x1070&(x1071<<x1072)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x1093 = 5U;
	uint8_t x1094 = 7U;
	volatile uint8_t x1095 = UINT8_MAX;
	uint8_t x1096 = 3U;

    t13 = (x1093==(x1094&(x1095<<x1096)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x1185 = UINT8_MAX;
	uint32_t x1186 = UINT32_MAX;
	int16_t x1187 = INT16_MAX;
	static volatile int32_t t14 = -7686;

    t14 = (x1185==(x1186&(x1187<<x1188)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x1353 = 21907825417282LL;
	int8_t x1354 = -1;
	int32_t x1355 = 0;
	volatile uint16_t x1356 = 5U;
	static volatile int32_t t15 = 0;

    t15 = (x1353==(x1354&(x1355<<x1356)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x1369 = 0U;
	static int16_t x1370 = INT16_MIN;
	static uint8_t x1371 = 30U;

    t16 = (x1369==(x1370&(x1371<<x1372)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x1386 = 58363;
	uint32_t x1388 = 0U;
	int32_t t17 = -232902998;

    t17 = (x1385==(x1386&(x1387<<x1388)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x1413 = INT32_MAX;
	uint8_t x1414 = 0U;
	uint8_t x1415 = 7U;
	uint16_t x1416 = 1U;
	volatile int32_t t18 = 60;

    t18 = (x1413==(x1414&(x1415<<x1416)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x1429 = INT16_MIN;
	static int64_t x1430 = INT64_MAX;
	int64_t x1431 = 196425040LL;
	uint8_t x1432 = 9U;
	int32_t t19 = -91104720;

    t19 = (x1429==(x1430&(x1431<<x1432)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x1445 = INT64_MAX;
	static int32_t x1446 = 4841;
	uint64_t x1447 = 6798305LLU;
	volatile int32_t t20 = -11335;

    t20 = (x1445==(x1446&(x1447<<x1448)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint64_t x1561 = 2028016746452504LLU;
	static uint8_t x1562 = 1U;
	uint32_t x1563 = UINT32_MAX;
	int16_t x1564 = 6;
	static int32_t t21 = 158078;

    t21 = (x1561==(x1562&(x1563<<x1564)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x1569 = 8;
	int32_t x1570 = INT32_MIN;
	int16_t x1572 = 6;
	volatile int32_t t22 = -2;

    t22 = (x1569==(x1570&(x1571<<x1572)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x1590 = -1;
	int64_t x1591 = 271LL;
	static uint8_t x1592 = 1U;
	int32_t t23 = 509086320;

    t23 = (x1589==(x1590&(x1591<<x1592)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint8_t x1629 = UINT8_MAX;
	uint32_t x1630 = 973U;
	uint32_t x1631 = UINT32_MAX;
	int32_t x1632 = 0;
	static volatile int32_t t24 = -3520709;

    t24 = (x1629==(x1630&(x1631<<x1632)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x1641 = INT16_MAX;
	volatile int32_t x1642 = -4019;
	int8_t x1643 = 5;
	volatile int32_t t25 = 128707;

    t25 = (x1641==(x1642&(x1643<<x1644)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x1673 = INT16_MIN;
	int16_t x1674 = -3;
	int8_t x1675 = 3;
	uint8_t x1676 = 2U;
	static int32_t t26 = -81358;

    t26 = (x1673==(x1674&(x1675<<x1676)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x1689 = -1;
	volatile int64_t x1690 = INT64_MAX;
	uint8_t x1692 = 56U;
	int32_t t27 = 139848;

    t27 = (x1689==(x1690&(x1691<<x1692)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x1753 = INT16_MAX;
	uint16_t x1754 = UINT16_MAX;
	static uint32_t x1755 = 2026U;

    t28 = (x1753==(x1754&(x1755<<x1756)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x1785 = 8836243278326842LL;
	int8_t x1788 = 22;
	volatile int32_t t29 = 199929758;

    t29 = (x1785==(x1786&(x1787<<x1788)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x1929 = INT8_MAX;
	uint16_t x1931 = UINT16_MAX;
	static volatile uint8_t x1932 = 5U;
	volatile int32_t t30 = -598185;

    t30 = (x1929==(x1930&(x1931<<x1932)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x2130 = 2092;
	static int8_t x2131 = INT8_MAX;
	uint8_t x2132 = 3U;
	int32_t t31 = 0;

    t31 = (x2129==(x2130&(x2131<<x2132)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x2146 = INT8_MIN;
	int64_t x2148 = 13LL;
	volatile int32_t t32 = 24528;

    t32 = (x2145==(x2146&(x2147<<x2148)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x2173 = 6175U;
	int8_t x2174 = INT8_MIN;
	uint16_t x2175 = UINT16_MAX;
	int8_t x2176 = 11;
	volatile int32_t t33 = -7559680;

    t33 = (x2173==(x2174&(x2175<<x2176)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x2201 = INT8_MIN;
	uint64_t x2202 = UINT64_MAX;
	int32_t x2203 = 5652550;
	uint16_t x2204 = 1U;
	volatile int32_t t34 = -1;

    t34 = (x2201==(x2202&(x2203<<x2204)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x2210 = 16U;
	static uint16_t x2211 = UINT16_MAX;
	volatile uint16_t x2212 = 8U;
	static int32_t t35 = -91060;

    t35 = (x2209==(x2210&(x2211<<x2212)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x2221 = 681406743LLU;
	int8_t x2222 = -23;
	uint64_t x2223 = UINT64_MAX;
	int32_t t36 = 192554826;

    t36 = (x2221==(x2222&(x2223<<x2224)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int16_t x2233 = 7;
	uint16_t x2234 = 98U;
	uint32_t x2236 = 13U;
	int32_t t37 = 0;

    t37 = (x2233==(x2234&(x2235<<x2236)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x2293 = 138;
	static uint32_t x2294 = 205966331U;
	uint8_t x2295 = 10U;
	uint8_t x2296 = 17U;

    t38 = (x2293==(x2294&(x2295<<x2296)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint16_t x2321 = 694U;
	int8_t x2322 = -1;
	static volatile uint32_t x2323 = 2U;
	uint16_t x2324 = 0U;

    t39 = (x2321==(x2322&(x2323<<x2324)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x2357 = INT16_MIN;
	int8_t x2358 = -1;
	uint32_t x2359 = UINT32_MAX;
	int8_t x2360 = 18;

    t40 = (x2357==(x2358&(x2359<<x2360)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x2397 = INT64_MAX;
	static int32_t x2398 = 4031;
	volatile int8_t x2399 = 3;
	static volatile int32_t t41 = 113145;

    t41 = (x2397==(x2398&(x2399<<x2400)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x2438 = -1;
	static uint32_t x2439 = 268U;
	uint64_t x2440 = 25LLU;
	volatile int32_t t42 = 11;

    t42 = (x2437==(x2438&(x2439<<x2440)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x2446 = INT16_MIN;
	static uint16_t x2447 = UINT16_MAX;
	volatile int32_t t43 = 1;

    t43 = (x2445==(x2446&(x2447<<x2448)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x2641 = -1;
	volatile uint8_t x2642 = UINT8_MAX;
	uint64_t x2644 = 12LLU;
	static int32_t t44 = 32231543;

    t44 = (x2641==(x2642&(x2643<<x2644)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint32_t x2661 = UINT32_MAX;
	uint64_t x2662 = 186004276LLU;
	volatile int16_t x2663 = 25;
	int32_t x2664 = 0;
	int32_t t45 = 1;

    t45 = (x2661==(x2662&(x2663<<x2664)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x2797 = 161U;
	static uint32_t x2798 = 95959U;
	volatile uint8_t x2799 = 27U;
	volatile int32_t t46 = -591383783;

    t46 = (x2797==(x2798&(x2799<<x2800)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x2805 = -6642868163823106LL;
	static volatile int16_t x2806 = -1;
	volatile uint8_t x2807 = 105U;
	uint16_t x2808 = 3U;
	int32_t t47 = -2786420;

    t47 = (x2805==(x2806&(x2807<<x2808)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x2821 = 8U;
	static volatile int8_t x2822 = -1;
	int8_t x2824 = 1;
	int32_t t48 = 0;

    t48 = (x2821==(x2822&(x2823<<x2824)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x2838 = INT8_MIN;
	static uint16_t x2839 = UINT16_MAX;
	volatile uint8_t x2840 = 3U;

    t49 = (x2837==(x2838&(x2839<<x2840)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x2853 = INT32_MAX;
	static volatile int8_t x2855 = 53;
	int16_t x2856 = 3;
	volatile int32_t t50 = -412;

    t50 = (x2853==(x2854&(x2855<<x2856)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x2949 = 180LLU;
	static uint32_t x2950 = UINT32_MAX;
	volatile int32_t x2951 = 23;
	static volatile int8_t x2952 = 7;
	int32_t t51 = 109152340;

    t51 = (x2949==(x2950&(x2951<<x2952)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x2958 = UINT16_MAX;
	uint32_t x2959 = 26U;
	static uint16_t x2960 = 14U;
	int32_t t52 = 1;

    t52 = (x2957==(x2958&(x2959<<x2960)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x2981 = 1328160924U;
	static int32_t x2982 = INT32_MIN;
	volatile int8_t x2983 = INT8_MAX;
	uint32_t x2984 = 3U;
	volatile int32_t t53 = 4170402;

    t53 = (x2981==(x2982&(x2983<<x2984)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x3061 = 780156U;
	volatile int8_t x3062 = INT8_MIN;
	static int16_t x3063 = 264;
	static volatile int8_t x3064 = 0;
	int32_t t54 = 1777;

    t54 = (x3061==(x3062&(x3063<<x3064)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x3161 = -1;
	volatile uint32_t x3162 = 9029U;
	uint16_t x3163 = 10U;
	int32_t x3164 = 2;
	volatile int32_t t55 = 22602590;

    t55 = (x3161==(x3162&(x3163<<x3164)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int32_t x3177 = 3514705;
	uint8_t x3178 = 9U;
	int8_t x3179 = INT8_MAX;
	uint16_t x3180 = 3U;
	int32_t t56 = 52;

    t56 = (x3177==(x3178&(x3179<<x3180)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x3301 = -1;
	static uint32_t x3302 = 2U;
	uint8_t x3304 = 22U;
	volatile int32_t t57 = -522045;

    t57 = (x3301==(x3302&(x3303<<x3304)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x3345 = 1;
	uint64_t x3346 = 401786007902LLU;
	int8_t x3348 = 9;

    t58 = (x3345==(x3346&(x3347<<x3348)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x3461 = 12U;
	uint8_t x3462 = 1U;
	static uint8_t x3463 = 6U;
	int8_t x3464 = 16;
	int32_t t59 = -934;

    t59 = (x3461==(x3462&(x3463<<x3464)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x3557 = UINT8_MAX;
	uint32_t x3559 = 31361U;
	int32_t t60 = -432660130;

    t60 = (x3557==(x3558&(x3559<<x3560)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint8_t x3721 = 30U;
	int16_t x3723 = INT16_MAX;
	volatile int8_t x3724 = 0;
	volatile int32_t t61 = -1;

    t61 = (x3721==(x3722&(x3723<<x3724)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int8_t x3853 = INT8_MIN;
	int8_t x3854 = 5;
	uint32_t x3855 = 1321U;
	int16_t x3856 = 0;
	int32_t t62 = -3151822;

    t62 = (x3853==(x3854&(x3855<<x3856)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x3925 = -1LL;
	static int16_t x3926 = 24;
	static volatile uint16_t x3927 = 291U;
	int64_t x3928 = 1LL;

    t63 = (x3925==(x3926&(x3927<<x3928)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x3950 = UINT64_MAX;
	int8_t x3951 = 0;
	volatile int32_t t64 = -150894;

    t64 = (x3949==(x3950&(x3951<<x3952)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x3993 = 403U;
	uint8_t x3994 = UINT8_MAX;
	uint8_t x3995 = UINT8_MAX;
	int8_t x3996 = 9;
	int32_t t65 = 3437;

    t65 = (x3993==(x3994&(x3995<<x3996)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x4029 = -1LL;
	volatile int16_t x4030 = INT16_MIN;
	static uint64_t x4031 = 2641LLU;
	uint32_t x4032 = 6U;
	volatile int32_t t66 = -966402079;

    t66 = (x4029==(x4030&(x4031<<x4032)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x4065 = INT32_MIN;
	int64_t x4066 = INT64_MIN;
	uint8_t x4067 = UINT8_MAX;
	uint32_t x4068 = 4U;

    t67 = (x4065==(x4066&(x4067<<x4068)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x4225 = 5U;
	int32_t x4226 = 8073079;
	static int16_t x4227 = 8135;
	uint8_t x4228 = 15U;
	volatile int32_t t68 = -7130;

    t68 = (x4225==(x4226&(x4227<<x4228)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x4261 = INT8_MIN;

    t69 = (x4261==(x4262&(x4263<<x4264)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x4313 = UINT64_MAX;
	int64_t x4314 = 2LL;
	uint16_t x4315 = UINT16_MAX;
	int8_t x4316 = 1;
	static int32_t t70 = -11;

    t70 = (x4313==(x4314&(x4315<<x4316)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x4421 = 7144LLU;
	uint8_t x4424 = 3U;
	volatile int32_t t71 = 8899334;

    t71 = (x4421==(x4422&(x4423<<x4424)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x4481 = INT8_MIN;
	int16_t x4482 = INT16_MAX;
	volatile int8_t x4483 = 12;
	volatile int32_t t72 = -65368;

    t72 = (x4481==(x4482&(x4483<<x4484)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x4605 = -504925464320421LL;
	volatile int16_t x4606 = INT16_MAX;
	uint16_t x4608 = 7U;
	int32_t t73 = -2574;

    t73 = (x4605==(x4606&(x4607<<x4608)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int64_t x4625 = INT64_MIN;
	static volatile int8_t x4626 = INT8_MIN;
	int64_t x4627 = 43669336853LL;
	volatile int16_t x4628 = 10;
	int32_t t74 = -388602;

    t74 = (x4625==(x4626&(x4627<<x4628)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint8_t x4645 = 15U;
	uint64_t x4646 = 1300819930LLU;
	int32_t x4647 = 4;
	uint8_t x4648 = 3U;
	static int32_t t75 = 398974;

    t75 = (x4645==(x4646&(x4647<<x4648)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x4649 = UINT8_MAX;
	uint16_t x4650 = 36U;
	uint16_t x4651 = UINT16_MAX;
	static int32_t t76 = 7;

    t76 = (x4649==(x4650&(x4651<<x4652)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x4721 = INT16_MIN;
	static uint32_t x4722 = 581117994U;
	int8_t x4724 = 9;
	volatile int32_t t77 = -7262906;

    t77 = (x4721==(x4722&(x4723<<x4724)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x4801 = -3;
	volatile int8_t x4802 = INT8_MIN;
	int16_t x4803 = INT16_MAX;
	static volatile int32_t t78 = -8295888;

    t78 = (x4801==(x4802&(x4803<<x4804)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x4913 = -122957;
	uint64_t x4914 = 1LLU;
	uint8_t x4915 = 3U;
	int8_t x4916 = 17;
	volatile int32_t t79 = 133389926;

    t79 = (x4913==(x4914&(x4915<<x4916)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x5133 = 59574U;
	uint16_t x5135 = UINT16_MAX;
	volatile int64_t x5136 = 6LL;
	volatile int32_t t80 = -8;

    t80 = (x5133==(x5134&(x5135<<x5136)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x5257 = -1;
	uint64_t x5258 = UINT64_MAX;
	int16_t x5259 = INT16_MAX;
	volatile uint32_t x5260 = 0U;
	volatile int32_t t81 = 0;

    t81 = (x5257==(x5258&(x5259<<x5260)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x5365 = 48831U;
	int64_t x5366 = INT64_MAX;
	int8_t x5367 = INT8_MAX;
	static volatile uint32_t x5368 = 3U;

    t82 = (x5365==(x5366&(x5367<<x5368)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile uint32_t x5385 = 1430144U;
	static volatile uint64_t x5387 = 108328102LLU;
	int32_t t83 = -123302;

    t83 = (x5385==(x5386&(x5387<<x5388)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x5393 = 521654U;
	int64_t x5394 = INT64_MAX;
	int16_t x5395 = 6386;
	int32_t t84 = 1302432;

    t84 = (x5393==(x5394&(x5395<<x5396)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x5450 = -1;
	static volatile uint16_t x5451 = 30U;
	int8_t x5452 = 1;
	static int32_t t85 = -1331535;

    t85 = (x5449==(x5450&(x5451<<x5452)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x5485 = INT64_MAX;
	uint16_t x5486 = 41U;
	uint8_t x5487 = UINT8_MAX;
	uint8_t x5488 = 9U;
	static volatile int32_t t86 = 95825;

    t86 = (x5485==(x5486&(x5487<<x5488)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x5569 = 1733U;
	int32_t x5570 = -1;
	int8_t x5571 = INT8_MAX;
	static uint8_t x5572 = 3U;
	int32_t t87 = 2179;

    t87 = (x5569==(x5570&(x5571<<x5572)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x5606 = INT16_MIN;
	volatile int8_t x5607 = INT8_MAX;
	volatile uint16_t x5608 = 3U;
	int32_t t88 = 0;

    t88 = (x5605==(x5606&(x5607<<x5608)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x5638 = 0U;
	uint32_t x5639 = 4920321U;
	int8_t x5640 = 0;
	static volatile int32_t t89 = 20026715;

    t89 = (x5637==(x5638&(x5639<<x5640)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x5693 = INT16_MAX;
	uint16_t x5694 = UINT16_MAX;
	uint16_t x5695 = 1065U;
	static volatile int32_t t90 = 87014;

    t90 = (x5693==(x5694&(x5695<<x5696)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x5765 = INT8_MIN;
	uint32_t x5767 = 324270U;
	volatile int32_t t91 = -172;

    t91 = (x5765==(x5766&(x5767<<x5768)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x5830 = 229U;
	int64_t x5831 = 205LL;
	int32_t x5832 = 0;
	int32_t t92 = 32;

    t92 = (x5829==(x5830&(x5831<<x5832)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x5878 = -70228239698334LL;
	static uint16_t x5879 = 1U;
	int64_t x5880 = 2LL;
	static int32_t t93 = 16460;

    t93 = (x5877==(x5878&(x5879<<x5880)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x5891 = 6;
	uint8_t x5892 = 22U;
	static volatile int32_t t94 = 51918069;

    t94 = (x5889==(x5890&(x5891<<x5892)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x6005 = UINT32_MAX;
	static volatile uint8_t x6006 = UINT8_MAX;
	uint64_t x6007 = 240LLU;
	volatile uint8_t x6008 = 6U;

    t95 = (x6005==(x6006&(x6007<<x6008)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x6101 = 0U;
	static int8_t x6104 = 1;
	volatile int32_t t96 = -3;

    t96 = (x6101==(x6102&(x6103<<x6104)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x6221 = INT32_MAX;
	int64_t x6222 = -122203434LL;
	static uint16_t x6224 = 63U;
	int32_t t97 = 3;

    t97 = (x6221==(x6222&(x6223<<x6224)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x6610 = INT8_MIN;
	int8_t x6611 = INT8_MAX;
	uint8_t x6612 = 2U;
	static int32_t t98 = 13421;

    t98 = (x6609==(x6610&(x6611<<x6612)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x6641 = -27;
	uint64_t x6643 = 23788372LLU;
	uint8_t x6644 = 0U;
	volatile int32_t t99 = 154;

    t99 = (x6641==(x6642&(x6643<<x6644)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x6645 = 235530;
	volatile int32_t x6646 = INT32_MAX;
	static uint32_t x6647 = 7208U;
	static int8_t x6648 = 0;
	volatile int32_t t100 = 2273;

    t100 = (x6645==(x6646&(x6647<<x6648)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x6693 = INT64_MAX;
	int16_t x6694 = INT16_MIN;
	uint16_t x6695 = UINT16_MAX;
	uint8_t x6696 = 15U;
	int32_t t101 = 1362;

    t101 = (x6693==(x6694&(x6695<<x6696)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x6721 = UINT32_MAX;
	int32_t t102 = -348135982;

    t102 = (x6721==(x6722&(x6723<<x6724)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x6817 = INT64_MIN;
	int16_t x6818 = INT16_MIN;
	uint8_t x6820 = 1U;
	int32_t t103 = 64430;

    t103 = (x6817==(x6818&(x6819<<x6820)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x6833 = UINT32_MAX;
	static int64_t x6834 = -7444LL;
	uint64_t x6835 = 22950451034LLU;
	static uint8_t x6836 = 2U;
	volatile int32_t t104 = -936322232;

    t104 = (x6833==(x6834&(x6835<<x6836)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int8_t x6841 = 7;
	static uint16_t x6842 = UINT16_MAX;
	volatile int32_t t105 = 1;

    t105 = (x6841==(x6842&(x6843<<x6844)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x6853 = INT64_MAX;
	int16_t x6854 = 1;
	uint8_t x6855 = 0U;
	volatile int8_t x6856 = 0;
	int32_t t106 = 12;

    t106 = (x6853==(x6854&(x6855<<x6856)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x6918 = INT8_MIN;
	static int16_t x6920 = 2;
	volatile int32_t t107 = -946;

    t107 = (x6917==(x6918&(x6919<<x6920)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x6965 = INT16_MIN;
	volatile uint16_t x6966 = 158U;
	uint32_t x6967 = UINT32_MAX;
	uint8_t x6968 = 0U;

    t108 = (x6965==(x6966&(x6967<<x6968)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x6993 = -1LL;
	uint8_t x6994 = 0U;
	uint8_t x6995 = 33U;
	uint16_t x6996 = 15U;

    t109 = (x6993==(x6994&(x6995<<x6996)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x7025 = -1;
	int64_t x7026 = INT64_MIN;
	uint16_t x7027 = UINT16_MAX;
	static volatile int8_t x7028 = 3;
	int32_t t110 = -1487641;

    t110 = (x7025==(x7026&(x7027<<x7028)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int64_t x7049 = -7568622159902LL;
	static int8_t x7050 = INT8_MIN;
	uint8_t x7052 = 4U;

    t111 = (x7049==(x7050&(x7051<<x7052)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x7057 = INT32_MIN;
	int64_t x7058 = INT64_MIN;
	uint64_t x7059 = 1726963095299687234LLU;
	uint32_t x7060 = 0U;

    t112 = (x7057==(x7058&(x7059<<x7060)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x7125 = 302;
	int16_t x7127 = INT16_MAX;
	static uint16_t x7128 = 1U;
	int32_t t113 = -80000;

    t113 = (x7125==(x7126&(x7127<<x7128)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x7141 = UINT64_MAX;
	int32_t x7143 = INT32_MAX;
	volatile int32_t t114 = 4861238;

    t114 = (x7141==(x7142&(x7143<<x7144)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x7146 = -795;
	static int16_t x7148 = 10;

    t115 = (x7145==(x7146&(x7147<<x7148)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x7209 = -1;
	int64_t x7210 = -1LL;
	int64_t x7211 = 395156617LL;
	int64_t x7212 = 3LL;
	volatile int32_t t116 = -9;

    t116 = (x7209==(x7210&(x7211<<x7212)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x7333 = INT16_MIN;
	int32_t x7334 = 3;
	uint16_t x7335 = 92U;
	volatile uint16_t x7336 = 0U;

    t117 = (x7333==(x7334&(x7335<<x7336)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x7417 = -1;
	int64_t x7418 = -225163407LL;
	uint32_t x7419 = 352595U;
	int32_t t118 = -9;

    t118 = (x7417==(x7418&(x7419<<x7420)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x7477 = 16809784240LL;
	int64_t x7478 = INT64_MIN;
	int32_t x7479 = INT32_MAX;
	volatile uint16_t x7480 = 0U;
	int32_t t119 = -113;

    t119 = (x7477==(x7478&(x7479<<x7480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x7570 = 4;
	int32_t x7571 = 776;
	static uint8_t x7572 = 1U;
	int32_t t120 = 224766;

    t120 = (x7569==(x7570&(x7571<<x7572)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x7617 = INT32_MAX;
	static uint32_t x7618 = 389831883U;
	static uint32_t x7619 = 3042752U;
	uint8_t x7620 = 3U;
	int32_t t121 = -2;

    t121 = (x7617==(x7618&(x7619<<x7620)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x7693 = -1;
	static int32_t x7694 = -3237;
	volatile int8_t x7695 = 0;
	int32_t t122 = 35;

    t122 = (x7693==(x7694&(x7695<<x7696)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x7769 = -253;
	volatile int64_t x7770 = INT64_MAX;
	uint8_t x7771 = 0U;
	static uint16_t x7772 = 15U;
	int32_t t123 = -677351659;

    t123 = (x7769==(x7770&(x7771<<x7772)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x7799 = 16653U;
	int32_t t124 = -611;

    t124 = (x7797==(x7798&(x7799<<x7800)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint8_t x7821 = 0U;
	static int8_t x7822 = INT8_MAX;
	int64_t x7823 = 4245507LL;
	uint8_t x7824 = 1U;

    t125 = (x7821==(x7822&(x7823<<x7824)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int64_t x7869 = INT64_MAX;
	static uint16_t x7870 = 12107U;
	static uint16_t x7871 = 0U;
	uint16_t x7872 = 0U;
	int32_t t126 = -14;

    t126 = (x7869==(x7870&(x7871<<x7872)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x7886 = -1;
	int16_t x7887 = INT16_MAX;

    t127 = (x7885==(x7886&(x7887<<x7888)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x8013 = INT8_MIN;
	static uint16_t x8014 = 1324U;
	int64_t x8015 = 251768928287361LL;
	int8_t x8016 = 0;

    t128 = (x8013==(x8014&(x8015<<x8016)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x8134 = -1LL;
	uint16_t x8135 = 1U;
	uint8_t x8136 = 0U;
	volatile int32_t t129 = 2600509;

    t129 = (x8133==(x8134&(x8135<<x8136)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x8173 = UINT64_MAX;
	static uint32_t x8174 = 56256U;
	static uint8_t x8176 = 1U;

    t130 = (x8173==(x8174&(x8175<<x8176)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int8_t x8305 = INT8_MIN;
	uint16_t x8306 = 1U;
	uint32_t x8307 = UINT32_MAX;
	static uint8_t x8308 = 0U;
	volatile int32_t t131 = -6;

    t131 = (x8305==(x8306&(x8307<<x8308)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x8418 = -1;
	uint8_t x8419 = UINT8_MAX;
	uint32_t x8420 = 21U;

    t132 = (x8417==(x8418&(x8419<<x8420)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x8449 = INT32_MIN;
	uint8_t x8450 = UINT8_MAX;
	volatile uint64_t x8451 = UINT64_MAX;
	uint8_t x8452 = 10U;
	static int32_t t133 = 57879350;

    t133 = (x8449==(x8450&(x8451<<x8452)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x8553 = UINT64_MAX;
	int16_t x8554 = 0;
	int8_t x8556 = 1;
	volatile int32_t t134 = -32393271;

    t134 = (x8553==(x8554&(x8555<<x8556)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x8754 = 0;
	volatile int16_t x8755 = INT16_MAX;
	int32_t t135 = -40321;

    t135 = (x8753==(x8754&(x8755<<x8756)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x9065 = INT64_MIN;
	static uint16_t x9067 = 31U;
	uint32_t x9068 = 0U;
	int32_t t136 = 10498384;

    t136 = (x9065==(x9066&(x9067<<x9068)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x9113 = 11;
	uint64_t x9115 = 0LLU;
	uint8_t x9116 = 4U;

    t137 = (x9113==(x9114&(x9115<<x9116)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x9229 = 0;
	volatile uint64_t x9231 = UINT64_MAX;
	uint8_t x9232 = 25U;
	volatile int32_t t138 = 195;

    t138 = (x9229==(x9230&(x9231<<x9232)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x9273 = INT32_MIN;
	int64_t x9274 = -42563211279581LL;
	int16_t x9275 = INT16_MAX;
	volatile uint32_t x9276 = 1U;
	volatile int32_t t139 = -469;

    t139 = (x9273==(x9274&(x9275<<x9276)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x9313 = 2197403852057383634LLU;
	int8_t x9314 = INT8_MAX;
	static uint16_t x9315 = UINT16_MAX;
	uint32_t x9316 = 5U;

    t140 = (x9313==(x9314&(x9315<<x9316)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x9405 = INT16_MIN;
	uint8_t x9408 = 0U;

    t141 = (x9405==(x9406&(x9407<<x9408)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x9417 = INT16_MAX;

    t142 = (x9417==(x9418&(x9419<<x9420)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint8_t x9449 = 2U;
	int8_t x9451 = INT8_MAX;
	int8_t x9452 = 22;
	volatile int32_t t143 = 7729488;

    t143 = (x9449==(x9450&(x9451<<x9452)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x9481 = INT32_MIN;
	uint32_t x9482 = UINT32_MAX;
	uint64_t x9483 = UINT64_MAX;
	uint16_t x9484 = 1U;
	int32_t t144 = 57691011;

    t144 = (x9481==(x9482&(x9483<<x9484)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x9573 = INT32_MIN;
	static int8_t x9574 = INT8_MIN;
	static uint64_t x9575 = 2522275534554544112LLU;
	uint8_t x9576 = 2U;
	int32_t t145 = 2513252;

    t145 = (x9573==(x9574&(x9575<<x9576)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x9666 = INT32_MAX;
	int8_t x9668 = 4;
	int32_t t146 = -108866;

    t146 = (x9665==(x9666&(x9667<<x9668)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x9725 = UINT8_MAX;
	static volatile int8_t x9726 = INT8_MIN;
	static uint32_t x9728 = 0U;
	volatile int32_t t147 = -31765595;

    t147 = (x9725==(x9726&(x9727<<x9728)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x9745 = INT16_MAX;
	int64_t x9746 = INT64_MIN;
	uint8_t x9747 = 3U;
	static uint8_t x9748 = 7U;
	int32_t t148 = 4;

    t148 = (x9745==(x9746&(x9747<<x9748)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x9822 = 7U;
	volatile int32_t t149 = -1;

    t149 = (x9821==(x9822&(x9823<<x9824)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x9835 = INT16_MAX;
	volatile int16_t x9836 = 1;
	static volatile int32_t t150 = 7;

    t150 = (x9833==(x9834&(x9835<<x9836)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x9877 = UINT32_MAX;
	int16_t x9878 = INT16_MIN;
	uint8_t x9879 = 0U;
	static volatile int8_t x9880 = 0;
	static int32_t t151 = 1878;

    t151 = (x9877==(x9878&(x9879<<x9880)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x9902 = INT8_MIN;
	static volatile int32_t t152 = -41186;

    t152 = (x9901==(x9902&(x9903<<x9904)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x9957 = 0;
	uint8_t x9959 = UINT8_MAX;
	static volatile uint8_t x9960 = 0U;
	volatile int32_t t153 = 12;

    t153 = (x9957==(x9958&(x9959<<x9960)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x9977 = INT16_MIN;
	volatile int64_t x9978 = -1LL;
	static volatile uint8_t x9979 = 27U;
	int64_t x9980 = 1LL;
	static int32_t t154 = -139010255;

    t154 = (x9977==(x9978&(x9979<<x9980)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x10103 = 14570106888110LLU;
	uint8_t x10104 = 10U;
	static int32_t t155 = -60226;

    t155 = (x10101==(x10102&(x10103<<x10104)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x10150 = INT16_MIN;
	uint16_t x10151 = 7886U;
	static uint16_t x10152 = 1U;
	int32_t t156 = -3143203;

    t156 = (x10149==(x10150&(x10151<<x10152)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x10169 = -1LL;
	int8_t x10170 = -1;
	int16_t x10171 = 1;
	static int32_t x10172 = 0;
	volatile int32_t t157 = -284;

    t157 = (x10169==(x10170&(x10171<<x10172)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x10277 = UINT32_MAX;
	int64_t x10278 = INT64_MIN;
	uint32_t x10279 = 20387437U;
	uint8_t x10280 = 7U;
	volatile int32_t t158 = -41;

    t158 = (x10277==(x10278&(x10279<<x10280)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x10453 = 0U;
	int64_t x10454 = INT64_MAX;
	static uint32_t x10455 = 39589U;
	volatile int32_t t159 = 916449;

    t159 = (x10453==(x10454&(x10455<<x10456)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x10497 = INT32_MIN;
	uint64_t x10499 = 5897LLU;
	static int64_t x10500 = 0LL;
	int32_t t160 = -8348846;

    t160 = (x10497==(x10498&(x10499<<x10500)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x10541 = INT32_MAX;
	int16_t x10542 = -1;
	uint8_t x10543 = 7U;
	int8_t x10544 = 1;

    t161 = (x10541==(x10542&(x10543<<x10544)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x10601 = UINT32_MAX;
	int8_t x10602 = INT8_MIN;
	int8_t x10604 = 7;
	static int32_t t162 = 166130;

    t162 = (x10601==(x10602&(x10603<<x10604)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x10697 = 3U;
	int64_t x10698 = INT64_MIN;
	uint8_t x10699 = 17U;
	static int16_t x10700 = 5;
	volatile int32_t t163 = -1;

    t163 = (x10697==(x10698&(x10699<<x10700)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x10933 = INT16_MAX;
	uint64_t x10935 = 487LLU;
	volatile int8_t x10936 = 8;
	static int32_t t164 = 68;

    t164 = (x10933==(x10934&(x10935<<x10936)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x10953 = -1;
	uint16_t x10954 = UINT16_MAX;
	static uint32_t x10955 = 56752661U;
	uint8_t x10956 = 17U;
	int32_t t165 = 89995388;

    t165 = (x10953==(x10954&(x10955<<x10956)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x11141 = -347271;
	volatile int8_t x11143 = 0;
	int8_t x11144 = 1;
	static volatile int32_t t166 = 128594;

    t166 = (x11141==(x11142&(x11143<<x11144)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x11169 = 6U;
	volatile uint16_t x11172 = 22U;

    t167 = (x11169==(x11170&(x11171<<x11172)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x11173 = INT8_MAX;
	uint32_t x11174 = UINT32_MAX;
	uint32_t x11175 = 45428U;
	volatile int32_t t168 = 9;

    t168 = (x11173==(x11174&(x11175<<x11176)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x11214 = INT8_MIN;
	uint8_t x11215 = 1U;
	uint8_t x11216 = 2U;
	static volatile int32_t t169 = 2884931;

    t169 = (x11213==(x11214&(x11215<<x11216)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x11221 = -52511890;
	int64_t x11222 = INT64_MIN;
	uint32_t x11223 = UINT32_MAX;
	uint16_t x11224 = 29U;

    t170 = (x11221==(x11222&(x11223<<x11224)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x11441 = INT32_MIN;
	int8_t x11442 = INT8_MIN;
	static volatile uint16_t x11443 = 1956U;
	volatile int32_t t171 = 15;

    t171 = (x11441==(x11442&(x11443<<x11444)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint8_t x11462 = UINT8_MAX;
	uint16_t x11463 = 956U;
	volatile int32_t t172 = -1;

    t172 = (x11461==(x11462&(x11463<<x11464)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x11705 = UINT16_MAX;
	uint32_t x11706 = 932U;
	int32_t x11707 = INT32_MAX;
	static volatile int32_t t173 = 4608202;

    t173 = (x11705==(x11706&(x11707<<x11708)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x11747 = 0U;
	uint8_t x11748 = 22U;
	static volatile int32_t t174 = 945246077;

    t174 = (x11745==(x11746&(x11747<<x11748)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x11847 = 51534LLU;
	volatile uint32_t x11848 = 59U;
	int32_t t175 = -213;

    t175 = (x11845==(x11846&(x11847<<x11848)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x11945 = INT8_MIN;
	int64_t x11946 = -69LL;
	volatile int8_t x11948 = 10;
	int32_t t176 = -3;

    t176 = (x11945==(x11946&(x11947<<x11948)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x12017 = UINT16_MAX;
	int16_t x12018 = INT16_MAX;
	int32_t t177 = 56608535;

    t177 = (x12017==(x12018&(x12019<<x12020)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x12054 = -1LL;
	static int16_t x12055 = INT16_MAX;
	uint8_t x12056 = 3U;
	volatile int32_t t178 = -122199151;

    t178 = (x12053==(x12054&(x12055<<x12056)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x12069 = -1;
	uint64_t x12070 = UINT64_MAX;
	static volatile int32_t x12071 = 244;
	static int8_t x12072 = 0;
	int32_t t179 = 3;

    t179 = (x12069==(x12070&(x12071<<x12072)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x12101 = -1;
	uint16_t x12102 = UINT16_MAX;
	volatile int32_t x12103 = 455815;
	volatile uint8_t x12104 = 6U;
	int32_t t180 = -263117;

    t180 = (x12101==(x12102&(x12103<<x12104)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x12133 = -4;
	volatile uint8_t x12135 = 7U;
	uint8_t x12136 = 10U;

    t181 = (x12133==(x12134&(x12135<<x12136)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x12145 = INT32_MIN;
	uint16_t x12147 = 53U;
	int32_t t182 = -250355;

    t182 = (x12145==(x12146&(x12147<<x12148)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x12153 = 6663;
	int64_t x12154 = -1LL;
	int64_t x12155 = 5703389411LL;
	static uint8_t x12156 = 1U;

    t183 = (x12153==(x12154&(x12155<<x12156)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x12161 = 7321965LLU;
	uint16_t x12162 = 25325U;
	static volatile int32_t t184 = -4625;

    t184 = (x12161==(x12162&(x12163<<x12164)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x12181 = 1581331112LL;
	int8_t x12182 = INT8_MAX;
	volatile uint16_t x12183 = UINT16_MAX;
	int8_t x12184 = 0;

    t185 = (x12181==(x12182&(x12183<<x12184)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x12249 = 7U;
	int64_t x12250 = -1LL;
	int8_t x12252 = 0;
	static volatile int32_t t186 = -114394690;

    t186 = (x12249==(x12250&(x12251<<x12252)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x12541 = -1LL;
	static volatile int32_t x12542 = -170060;
	int32_t x12543 = 1183523;
	static int32_t t187 = -1;

    t187 = (x12541==(x12542&(x12543<<x12544)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x12569 = INT16_MIN;
	volatile uint32_t x12570 = UINT32_MAX;
	int64_t x12571 = 2734925LL;
	volatile int16_t x12572 = 8;
	int32_t t188 = -9;

    t188 = (x12569==(x12570&(x12571<<x12572)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x12598 = -1;
	static uint32_t x12600 = 3U;
	int32_t t189 = -99790391;

    t189 = (x12597==(x12598&(x12599<<x12600)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x12763 = UINT8_MAX;
	static uint16_t x12764 = 14U;
	volatile int32_t t190 = -80480373;

    t190 = (x12761==(x12762&(x12763<<x12764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x12912 = 6U;
	volatile int32_t t191 = 3633297;

    t191 = (x12909==(x12910&(x12911<<x12912)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x12949 = -7;
	static int8_t x12950 = -1;
	volatile int16_t x12951 = INT16_MAX;
	static int8_t x12952 = 6;
	static int32_t t192 = 1165918;

    t192 = (x12949==(x12950&(x12951<<x12952)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x13050 = -8007550847LL;
	static int16_t x13052 = 1;

    t193 = (x13049==(x13050&(x13051<<x13052)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x13061 = INT16_MAX;
	static int32_t x13062 = INT32_MIN;
	volatile int64_t x13063 = 49526856LL;

    t194 = (x13061==(x13062&(x13063<<x13064)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint32_t x13145 = 15212U;
	uint64_t x13147 = UINT64_MAX;

    t195 = (x13145==(x13146&(x13147<<x13148)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x13157 = 751524934648993585LLU;
	volatile int16_t x13158 = -2;
	uint64_t x13159 = UINT64_MAX;
	uint8_t x13160 = 4U;

    t196 = (x13157==(x13158&(x13159<<x13160)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x13245 = 2515U;
	volatile int8_t x13246 = INT8_MIN;

    t197 = (x13245==(x13246&(x13247<<x13248)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x13277 = -13817;
	volatile int8_t x13278 = -1;
	static uint16_t x13279 = 324U;
	int16_t x13280 = 0;
	int32_t t198 = 0;

    t198 = (x13277==(x13278&(x13279<<x13280)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x13293 = INT16_MIN;
	static uint64_t x13294 = UINT64_MAX;
	static volatile uint64_t x13295 = UINT64_MAX;
	int32_t t199 = 218389;

    t199 = (x13293==(x13294&(x13295<<x13296)));

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

