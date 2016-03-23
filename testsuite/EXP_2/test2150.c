
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

uint16_t x3 = 46U;
int32_t t2 = 17;
volatile int32_t t3 = 1202;
uint8_t x325 = 6U;
static volatile int32_t t4 = 202582874;
int8_t x423 = 1;
volatile int32_t t5 = -184;
static volatile uint64_t x538 = 7482906774379719LLU;
volatile int32_t x540 = -1;
volatile int32_t t6 = 343527922;
static int8_t x593 = 19;
int32_t t8 = 9;
static uint16_t x772 = UINT16_MAX;
int32_t x812 = INT32_MIN;
volatile int32_t t12 = -486042442;
uint8_t x876 = 65U;
int64_t x964 = INT64_MIN;
static int8_t x1067 = 1;
uint64_t x1116 = UINT64_MAX;
uint8_t x1167 = 0U;
int32_t x1168 = INT32_MIN;
static uint16_t x1314 = UINT16_MAX;
volatile int64_t x1316 = INT64_MIN;
uint16_t x1515 = 15U;
int8_t x1569 = INT8_MAX;
volatile int8_t x1572 = -1;
uint32_t x1591 = 26U;
static int8_t x1629 = -1;
volatile int16_t x1631 = 0;
int8_t x1632 = INT8_MAX;
static uint16_t x1644 = 54U;
uint16_t x1705 = 13436U;
static volatile uint8_t x1708 = UINT8_MAX;
static volatile int32_t x1777 = 252300;
int8_t x1838 = 43;
static volatile int32_t t32 = 2781;
int8_t x1847 = 3;
volatile int32_t t33 = 633121;
volatile int16_t x1973 = INT16_MIN;
int8_t x1976 = -1;
volatile int32_t t36 = -14;
volatile int32_t t38 = 40774;
static int16_t x2223 = 3;
int8_t x2224 = -2;
int16_t x2229 = -213;
volatile int32_t t42 = 311231;
volatile int32_t x2316 = INT32_MAX;
volatile int32_t t43 = 143;
int16_t x2343 = 6;
volatile int32_t x2344 = 206719164;
static int32_t t45 = -175;
int32_t t46 = 2465697;
uint8_t x2363 = 0U;
uint64_t x2446 = 110237850172879204LLU;
static int64_t x2447 = 0LL;
volatile int32_t t48 = 1;
volatile uint64_t x2746 = UINT64_MAX;
volatile int32_t t51 = -1;
volatile int32_t t52 = 2;
uint32_t x2782 = UINT32_MAX;
static volatile int16_t x2825 = INT16_MIN;
volatile int8_t x2828 = -1;
int64_t x3286 = INT64_MAX;
int32_t x3493 = -1;
static int8_t x3548 = INT8_MIN;
int32_t t64 = 1425122;
uint32_t x3600 = 832207079U;
int64_t x3806 = INT64_MAX;
uint64_t x3862 = UINT64_MAX;
static uint32_t x3865 = 32U;
int32_t x3899 = 0;
static volatile uint8_t x4019 = 5U;
volatile int32_t t73 = 630;
volatile int64_t x4042 = 104LL;
static int64_t x4209 = -1LL;
uint8_t x4211 = 2U;
static int32_t t78 = -114833761;
volatile int8_t x4277 = INT8_MAX;
uint32_t x4279 = 30U;
uint16_t x4355 = 3U;
static int16_t x4409 = INT16_MIN;
volatile int32_t x4429 = INT32_MIN;
int64_t x4430 = INT64_MAX;
int32_t x4432 = INT32_MIN;
int16_t x4485 = 431;
int8_t x4567 = 5;
static uint32_t x4568 = 12384656U;
uint16_t x4579 = 3U;
int16_t x4580 = -1;
static volatile int32_t t88 = 215313;
static uint64_t x4642 = 12202205638LLU;
int32_t t90 = 33;
volatile uint16_t x4687 = 15U;
static volatile int32_t t91 = -70859;
int32_t x4772 = -1;
int32_t x4796 = INT32_MAX;
int16_t x4878 = 2;
uint8_t x5058 = UINT8_MAX;
static volatile int8_t x5060 = INT8_MIN;
uint16_t x5101 = UINT16_MAX;
uint16_t x5131 = 15U;


void f0(void) {
    	int64_t x1 = -1LL;
	uint64_t x2 = 2862699LLU;
	int64_t x4 = INT64_MIN;
	int32_t t0 = -6736;

    t0 = ((x1^(x2>>x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x25 = 113300;
	volatile uint64_t x26 = 30473LLU;
	uint16_t x27 = 11U;
	volatile uint8_t x28 = 78U;
	volatile int32_t t1 = -44465;

    t1 = ((x25^(x26>>x27))==x28);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x109 = 0;
	volatile int16_t x110 = 2;
	volatile int16_t x111 = 1;
	uint16_t x112 = 43U;

    t2 = ((x109^(x110>>x111))==x112);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x193 = INT16_MIN;
	int64_t x194 = 4115171LL;
	int8_t x195 = 3;
	int32_t x196 = INT32_MIN;

    t3 = ((x193^(x194>>x195))==x196);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x326 = 6U;
	int16_t x327 = 0;
	volatile uint32_t x328 = UINT32_MAX;

    t4 = ((x325^(x326>>x327))==x328);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x421 = 1972395926U;
	uint64_t x422 = UINT64_MAX;
	int8_t x424 = 0;

    t5 = ((x421^(x422>>x423))==x424);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x537 = INT16_MIN;
	uint8_t x539 = 30U;

    t6 = ((x537^(x538>>x539))==x540);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x594 = 94U;
	uint8_t x595 = 6U;
	int64_t x596 = -1LL;
	volatile int32_t t7 = -1210804;

    t7 = ((x593^(x594>>x595))==x596);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x645 = INT64_MIN;
	uint64_t x646 = UINT64_MAX;
	static int8_t x647 = 32;
	volatile uint64_t x648 = 108070LLU;

    t8 = ((x645^(x646>>x647))==x648);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x769 = 9;
	int8_t x770 = 0;
	int16_t x771 = 26;
	volatile int32_t t9 = 458;

    t9 = ((x769^(x770>>x771))==x772);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x809 = INT32_MIN;
	uint64_t x810 = 0LLU;
	uint8_t x811 = 0U;
	volatile int32_t t10 = 3126590;

    t10 = ((x809^(x810>>x811))==x812);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x821 = -1911042279014LL;
	uint16_t x822 = 9123U;
	uint16_t x823 = 4U;
	int16_t x824 = -7897;
	static int32_t t11 = 0;

    t11 = ((x821^(x822>>x823))==x824);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x829 = -5;
	int16_t x830 = INT16_MAX;
	uint8_t x831 = 2U;
	int64_t x832 = 21534794284LL;

    t12 = ((x829^(x830>>x831))==x832);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x869 = INT8_MIN;
	int64_t x870 = 2313935LL;
	uint8_t x871 = 3U;
	volatile int64_t x872 = INT64_MAX;
	static volatile int32_t t13 = -37;

    t13 = ((x869^(x870>>x871))==x872);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x873 = 0U;
	static uint16_t x874 = 1U;
	uint16_t x875 = 4U;
	static int32_t t14 = -1569;

    t14 = ((x873^(x874>>x875))==x876);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x961 = UINT32_MAX;
	volatile uint8_t x962 = 25U;
	volatile int8_t x963 = 1;
	int32_t t15 = 361312200;

    t15 = ((x961^(x962>>x963))==x964);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x1037 = -1;
	uint8_t x1038 = 15U;
	static volatile uint64_t x1039 = 0LLU;
	static int8_t x1040 = -1;
	int32_t t16 = -22;

    t16 = ((x1037^(x1038>>x1039))==x1040);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x1065 = UINT16_MAX;
	static int64_t x1066 = 13913700034031LL;
	static int64_t x1068 = INT64_MAX;
	static volatile int32_t t17 = 476601112;

    t17 = ((x1065^(x1066>>x1067))==x1068);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x1113 = INT64_MIN;
	int16_t x1114 = INT16_MAX;
	int16_t x1115 = 7;
	volatile int32_t t18 = -8574;

    t18 = ((x1113^(x1114>>x1115))==x1116);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x1165 = 9;
	int8_t x1166 = 1;
	volatile int32_t t19 = 52937318;

    t19 = ((x1165^(x1166>>x1167))==x1168);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x1177 = INT32_MIN;
	int32_t x1178 = INT32_MAX;
	int8_t x1179 = 6;
	uint64_t x1180 = UINT64_MAX;
	volatile int32_t t20 = -2758537;

    t20 = ((x1177^(x1178>>x1179))==x1180);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x1233 = -1;
	int32_t x1234 = 27;
	int16_t x1235 = 1;
	static volatile int32_t x1236 = -1;
	static int32_t t21 = -2842;

    t21 = ((x1233^(x1234>>x1235))==x1236);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x1313 = -1;
	uint16_t x1315 = 1U;
	int32_t t22 = 37041784;

    t22 = ((x1313^(x1314>>x1315))==x1316);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x1497 = -1;
	int32_t x1498 = 176118;
	uint16_t x1499 = 29U;
	int8_t x1500 = -1;
	int32_t t23 = -184228;

    t23 = ((x1497^(x1498>>x1499))==x1500);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x1513 = INT16_MIN;
	int32_t x1514 = INT32_MAX;
	uint8_t x1516 = 12U;
	static volatile int32_t t24 = 6;

    t24 = ((x1513^(x1514>>x1515))==x1516);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x1570 = INT64_MAX;
	uint8_t x1571 = 3U;
	volatile int32_t t25 = -18593765;

    t25 = ((x1569^(x1570>>x1571))==x1572);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x1589 = INT64_MIN;
	static uint8_t x1590 = UINT8_MAX;
	int8_t x1592 = -2;
	int32_t t26 = -1991;

    t26 = ((x1589^(x1590>>x1591))==x1592);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x1630 = 0;
	static int32_t t27 = 5652;

    t27 = ((x1629^(x1630>>x1631))==x1632);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x1641 = -2;
	volatile uint8_t x1642 = 25U;
	uint16_t x1643 = 1U;
	int32_t t28 = -221;

    t28 = ((x1641^(x1642>>x1643))==x1644);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x1706 = 2U;
	static int16_t x1707 = 1;
	int32_t t29 = -12127;

    t29 = ((x1705^(x1706>>x1707))==x1708);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x1778 = INT8_MAX;
	uint16_t x1779 = 30U;
	static int64_t x1780 = -1LL;
	volatile int32_t t30 = 35833674;

    t30 = ((x1777^(x1778>>x1779))==x1780);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x1809 = UINT16_MAX;
	uint8_t x1810 = 0U;
	volatile uint16_t x1811 = 8U;
	static volatile int64_t x1812 = INT64_MIN;
	volatile int32_t t31 = -531;

    t31 = ((x1809^(x1810>>x1811))==x1812);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x1837 = UINT16_MAX;
	volatile int8_t x1839 = 5;
	volatile int32_t x1840 = INT32_MAX;

    t32 = ((x1837^(x1838>>x1839))==x1840);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x1845 = INT16_MIN;
	uint64_t x1846 = 3515377190983047832LLU;
	volatile int16_t x1848 = INT16_MIN;

    t33 = ((x1845^(x1846>>x1847))==x1848);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x1889 = -20LL;
	int32_t x1890 = 0;
	uint16_t x1891 = 27U;
	int16_t x1892 = -1;
	volatile int32_t t34 = -523387;

    t34 = ((x1889^(x1890>>x1891))==x1892);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x1974 = INT16_MAX;
	uint16_t x1975 = 6U;
	int32_t t35 = -827207540;

    t35 = ((x1973^(x1974>>x1975))==x1976);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x1985 = INT32_MIN;
	int16_t x1986 = INT16_MAX;
	uint16_t x1987 = 3U;
	int64_t x1988 = -1LL;

    t36 = ((x1985^(x1986>>x1987))==x1988);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x2049 = UINT16_MAX;
	uint16_t x2050 = UINT16_MAX;
	static uint16_t x2051 = 20U;
	int32_t x2052 = -43253;
	static int32_t t37 = 2333579;

    t37 = ((x2049^(x2050>>x2051))==x2052);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int16_t x2101 = INT16_MIN;
	static uint32_t x2102 = UINT32_MAX;
	static uint8_t x2103 = 1U;
	int16_t x2104 = 406;

    t38 = ((x2101^(x2102>>x2103))==x2104);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x2109 = -1;
	static int32_t x2110 = 64;
	uint16_t x2111 = 19U;
	int32_t x2112 = -1;
	int32_t t39 = -2811;

    t39 = ((x2109^(x2110>>x2111))==x2112);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x2221 = 50U;
	volatile uint16_t x2222 = 90U;
	int32_t t40 = 3358;

    t40 = ((x2221^(x2222>>x2223))==x2224);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x2230 = INT32_MAX;
	uint8_t x2231 = 6U;
	int16_t x2232 = 10033;
	static int32_t t41 = 2024;

    t41 = ((x2229^(x2230>>x2231))==x2232);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x2285 = INT8_MIN;
	uint32_t x2286 = 1694905U;
	volatile uint16_t x2287 = 5U;
	int32_t x2288 = -3064479;

    t42 = ((x2285^(x2286>>x2287))==x2288);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x2313 = INT32_MIN;
	int16_t x2314 = INT16_MAX;
	uint8_t x2315 = 13U;

    t43 = ((x2313^(x2314>>x2315))==x2316);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x2321 = 94;
	uint64_t x2322 = UINT64_MAX;
	int16_t x2323 = 4;
	int8_t x2324 = INT8_MAX;
	volatile int32_t t44 = 67;

    t44 = ((x2321^(x2322>>x2323))==x2324);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x2341 = INT8_MIN;
	uint16_t x2342 = 217U;

    t45 = ((x2341^(x2342>>x2343))==x2344);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x2349 = 130773950293530893LLU;
	static volatile uint8_t x2350 = 1U;
	uint16_t x2351 = 6U;
	volatile int64_t x2352 = INT64_MIN;

    t46 = ((x2349^(x2350>>x2351))==x2352);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x2361 = UINT16_MAX;
	static uint32_t x2362 = 1U;
	static int32_t x2364 = INT32_MIN;
	volatile int32_t t47 = 203;

    t47 = ((x2361^(x2362>>x2363))==x2364);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x2445 = INT32_MAX;
	uint16_t x2448 = 1285U;

    t48 = ((x2445^(x2446>>x2447))==x2448);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x2669 = INT32_MIN;
	int64_t x2670 = INT64_MAX;
	uint16_t x2671 = 23U;
	uint16_t x2672 = 12U;
	int32_t t49 = 672167847;

    t49 = ((x2669^(x2670>>x2671))==x2672);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x2717 = 1;
	int64_t x2718 = INT64_MAX;
	int8_t x2719 = 3;
	int64_t x2720 = INT64_MIN;
	static int32_t t50 = 244;

    t50 = ((x2717^(x2718>>x2719))==x2720);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x2745 = INT8_MIN;
	static int8_t x2747 = 2;
	int64_t x2748 = INT64_MIN;

    t51 = ((x2745^(x2746>>x2747))==x2748);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x2753 = UINT8_MAX;
	volatile uint32_t x2754 = 805386452U;
	uint32_t x2755 = 14U;
	int8_t x2756 = -1;

    t52 = ((x2753^(x2754>>x2755))==x2756);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x2781 = 0U;
	static uint32_t x2783 = 0U;
	volatile int16_t x2784 = -3;
	volatile int32_t t53 = -3266487;

    t53 = ((x2781^(x2782>>x2783))==x2784);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x2826 = INT8_MAX;
	int32_t x2827 = 2;
	int32_t t54 = 6655235;

    t54 = ((x2825^(x2826>>x2827))==x2828);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x2997 = 464437021411077208LLU;
	volatile uint32_t x2998 = 833U;
	volatile int16_t x2999 = 10;
	static int32_t x3000 = INT32_MIN;
	static volatile int32_t t55 = 38936800;

    t55 = ((x2997^(x2998>>x2999))==x3000);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x3093 = -14482154000LL;
	uint16_t x3094 = 12590U;
	static uint16_t x3095 = 1U;
	int64_t x3096 = INT64_MIN;
	static volatile int32_t t56 = -810285;

    t56 = ((x3093^(x3094>>x3095))==x3096);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x3225 = INT32_MAX;
	uint32_t x3226 = 3350581U;
	static volatile int16_t x3227 = 23;
	volatile int16_t x3228 = 6761;
	int32_t t57 = 3263911;

    t57 = ((x3225^(x3226>>x3227))==x3228);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x3285 = 30843U;
	static volatile uint8_t x3287 = 5U;
	uint16_t x3288 = 302U;
	int32_t t58 = 46614;

    t58 = ((x3285^(x3286>>x3287))==x3288);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x3353 = INT64_MIN;
	uint64_t x3354 = 250743LLU;
	volatile uint8_t x3355 = 0U;
	volatile int8_t x3356 = -1;
	static int32_t t59 = 409;

    t59 = ((x3353^(x3354>>x3355))==x3356);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x3405 = 63980670U;
	volatile int64_t x3406 = 182528177651198LL;
	int32_t x3407 = 2;
	int8_t x3408 = INT8_MIN;
	int32_t t60 = 1272;

    t60 = ((x3405^(x3406>>x3407))==x3408);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x3477 = 2752LLU;
	uint16_t x3478 = UINT16_MAX;
	uint8_t x3479 = 12U;
	int32_t x3480 = INT32_MIN;
	int32_t t61 = 570848;

    t61 = ((x3477^(x3478>>x3479))==x3480);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x3494 = INT64_MAX;
	int8_t x3495 = 15;
	int16_t x3496 = 30;
	int32_t t62 = 21063;

    t62 = ((x3493^(x3494>>x3495))==x3496);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x3545 = INT64_MIN;
	uint16_t x3546 = 658U;
	uint16_t x3547 = 0U;
	int32_t t63 = 376677136;

    t63 = ((x3545^(x3546>>x3547))==x3548);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x3557 = -1;
	uint64_t x3558 = 1833748594127129LLU;
	uint8_t x3559 = 12U;
	int8_t x3560 = INT8_MIN;

    t64 = ((x3557^(x3558>>x3559))==x3560);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x3565 = -850;
	uint64_t x3566 = 48874LLU;
	uint16_t x3567 = 5U;
	uint64_t x3568 = 18662642609553LLU;
	int32_t t65 = 45100538;

    t65 = ((x3565^(x3566>>x3567))==x3568);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x3597 = INT64_MAX;
	volatile int64_t x3598 = INT64_MAX;
	static volatile uint32_t x3599 = 1U;
	static volatile int32_t t66 = -90589;

    t66 = ((x3597^(x3598>>x3599))==x3600);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x3805 = INT64_MAX;
	int16_t x3807 = 10;
	volatile int16_t x3808 = -1;
	int32_t t67 = -1845;

    t67 = ((x3805^(x3806>>x3807))==x3808);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x3861 = 10U;
	int8_t x3863 = 1;
	int32_t x3864 = -1;
	int32_t t68 = -25;

    t68 = ((x3861^(x3862>>x3863))==x3864);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x3866 = 103879U;
	uint8_t x3867 = 14U;
	int32_t x3868 = 84075245;
	int32_t t69 = 1;

    t69 = ((x3865^(x3866>>x3867))==x3868);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x3897 = -1;
	uint64_t x3898 = UINT64_MAX;
	int32_t x3900 = -8544295;
	int32_t t70 = -59291571;

    t70 = ((x3897^(x3898>>x3899))==x3900);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x3929 = INT8_MAX;
	static uint32_t x3930 = 182905173U;
	static int16_t x3931 = 0;
	static int64_t x3932 = INT64_MIN;
	int32_t t71 = 293554123;

    t71 = ((x3929^(x3930>>x3931))==x3932);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x3961 = 3750U;
	uint64_t x3962 = UINT64_MAX;
	static int32_t x3963 = 0;
	uint8_t x3964 = UINT8_MAX;
	volatile int32_t t72 = 1320862;

    t72 = ((x3961^(x3962>>x3963))==x3964);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x4017 = 930560499128429LL;
	volatile uint16_t x4018 = UINT16_MAX;
	int16_t x4020 = INT16_MIN;

    t73 = ((x4017^(x4018>>x4019))==x4020);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x4041 = 49U;
	static int32_t x4043 = 14;
	static uint8_t x4044 = UINT8_MAX;
	volatile int32_t t74 = 12;

    t74 = ((x4041^(x4042>>x4043))==x4044);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x4061 = INT64_MIN;
	uint64_t x4062 = 1LLU;
	uint32_t x4063 = 45U;
	uint8_t x4064 = 1U;
	volatile int32_t t75 = -6079172;

    t75 = ((x4061^(x4062>>x4063))==x4064);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x4210 = INT32_MAX;
	uint32_t x4212 = 328U;
	int32_t t76 = 0;

    t76 = ((x4209^(x4210>>x4211))==x4212);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x4213 = 5U;
	volatile uint64_t x4214 = 4679LLU;
	uint8_t x4215 = 0U;
	int8_t x4216 = -28;
	int32_t t77 = -11;

    t77 = ((x4213^(x4214>>x4215))==x4216);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint8_t x4233 = 15U;
	uint64_t x4234 = 47723LLU;
	int32_t x4235 = 1;
	volatile int64_t x4236 = 500141LL;

    t78 = ((x4233^(x4234>>x4235))==x4236);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x4257 = INT8_MIN;
	uint32_t x4258 = 267651U;
	uint32_t x4259 = 11U;
	volatile uint32_t x4260 = 58U;
	static int32_t t79 = 12630;

    t79 = ((x4257^(x4258>>x4259))==x4260);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x4278 = 1269366448228008LL;
	uint32_t x4280 = 8552U;
	static int32_t t80 = 114;

    t80 = ((x4277^(x4278>>x4279))==x4280);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x4353 = INT32_MIN;
	int16_t x4354 = 51;
	int32_t x4356 = -21618926;
	int32_t t81 = -8059805;

    t81 = ((x4353^(x4354>>x4355))==x4356);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x4410 = 2565U;
	uint32_t x4411 = 22U;
	volatile int8_t x4412 = -1;
	static int32_t t82 = -10;

    t82 = ((x4409^(x4410>>x4411))==x4412);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x4417 = -108;
	int16_t x4418 = 104;
	volatile int8_t x4419 = 3;
	int64_t x4420 = -33215828621166927LL;
	volatile int32_t t83 = 63;

    t83 = ((x4417^(x4418>>x4419))==x4420);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile uint32_t x4431 = 2U;
	volatile int32_t t84 = 216;

    t84 = ((x4429^(x4430>>x4431))==x4432);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x4486 = 200284LL;
	uint8_t x4487 = 3U;
	int8_t x4488 = -1;
	volatile int32_t t85 = -27204909;

    t85 = ((x4485^(x4486>>x4487))==x4488);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x4497 = 19U;
	volatile uint32_t x4498 = 3U;
	static uint8_t x4499 = 19U;
	int32_t x4500 = 10;
	int32_t t86 = 2403;

    t86 = ((x4497^(x4498>>x4499))==x4500);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x4565 = INT32_MIN;
	volatile int16_t x4566 = INT16_MAX;
	int32_t t87 = 23038688;

    t87 = ((x4565^(x4566>>x4567))==x4568);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x4577 = -12;
	int32_t x4578 = INT32_MAX;

    t88 = ((x4577^(x4578>>x4579))==x4580);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x4621 = -529;
	uint32_t x4622 = 2903460U;
	static uint8_t x4623 = 2U;
	int64_t x4624 = -4911LL;
	volatile int32_t t89 = -2;

    t89 = ((x4621^(x4622>>x4623))==x4624);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x4641 = -1;
	uint8_t x4643 = 8U;
	int64_t x4644 = INT64_MAX;

    t90 = ((x4641^(x4642>>x4643))==x4644);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x4685 = INT8_MAX;
	uint8_t x4686 = UINT8_MAX;
	volatile uint32_t x4688 = UINT32_MAX;

    t91 = ((x4685^(x4686>>x4687))==x4688);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x4725 = 769416466020340360LLU;
	volatile uint64_t x4726 = UINT64_MAX;
	uint8_t x4727 = 10U;
	int64_t x4728 = 2910565073LL;
	volatile int32_t t92 = -628054;

    t92 = ((x4725^(x4726>>x4727))==x4728);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x4769 = -3988402293LL;
	int64_t x4770 = INT64_MAX;
	uint8_t x4771 = 3U;
	volatile int32_t t93 = -15751;

    t93 = ((x4769^(x4770>>x4771))==x4772);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x4793 = UINT32_MAX;
	volatile uint64_t x4794 = 3971LLU;
	int16_t x4795 = 0;
	int32_t t94 = -1;

    t94 = ((x4793^(x4794>>x4795))==x4796);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x4877 = UINT16_MAX;
	int32_t x4879 = 0;
	int64_t x4880 = 1415009100859438534LL;
	int32_t t95 = 70572;

    t95 = ((x4877^(x4878>>x4879))==x4880);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x4913 = -1;
	volatile uint64_t x4914 = 4862LLU;
	int8_t x4915 = 30;
	int64_t x4916 = INT64_MAX;
	int32_t t96 = -335643;

    t96 = ((x4913^(x4914>>x4915))==x4916);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x5017 = UINT16_MAX;
	uint64_t x5018 = 137160194923LLU;
	int64_t x5019 = 8LL;
	int8_t x5020 = -22;
	int32_t t97 = -2705838;

    t97 = ((x5017^(x5018>>x5019))==x5020);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x5057 = INT8_MIN;
	uint8_t x5059 = 2U;
	int32_t t98 = 225508325;

    t98 = ((x5057^(x5058>>x5059))==x5060);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x5102 = INT64_MAX;
	static uint16_t x5103 = 0U;
	int32_t x5104 = INT32_MIN;
	volatile int32_t t99 = 9186520;

    t99 = ((x5101^(x5102>>x5103))==x5104);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x5129 = 3;
	volatile uint16_t x5130 = 93U;
	uint16_t x5132 = 1850U;
	static int32_t t100 = -121;

    t100 = ((x5129^(x5130>>x5131))==x5132);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x5165 = 0U;
	uint64_t x5166 = UINT64_MAX;
	static uint8_t x5167 = 54U;
	static int64_t x5168 = INT64_MAX;
	volatile int32_t t101 = 115070230;

    t101 = ((x5165^(x5166>>x5167))==x5168);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x5181 = -1LL;
	int16_t x5182 = 90;
	static volatile int32_t x5183 = 1;
	volatile int64_t x5184 = INT64_MIN;
	volatile int32_t t102 = -935471832;

    t102 = ((x5181^(x5182>>x5183))==x5184);

    if (t102 != 0) { NG(); } else { ; }
	
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


    return 0;
}

