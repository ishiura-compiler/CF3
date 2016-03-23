
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

static uint8_t x105 = UINT8_MAX;
int32_t x126 = 199;
static uint16_t x127 = 8U;
static uint8_t x273 = 13U;
volatile int32_t t3 = 13817;
int64_t x306 = -1LL;
uint64_t x307 = UINT64_MAX;
static uint32_t x308 = 63U;
int32_t x481 = -1;
uint32_t x484 = 2U;
int64_t x691 = INT64_MAX;
uint8_t x792 = 6U;
static uint32_t t12 = 625682187U;
static volatile uint32_t x868 = 5U;
uint8_t x873 = 58U;
uint64_t x875 = UINT64_MAX;
volatile uint8_t x1016 = 0U;
uint16_t x1039 = 916U;
volatile int32_t t18 = 1;
uint32_t x1227 = 4445U;
static int8_t x1238 = INT8_MIN;
static uint8_t x1255 = UINT8_MAX;
volatile int32_t x1386 = 6985;
volatile int64_t x1517 = INT64_MIN;
int8_t x1520 = 15;
int8_t x1672 = 1;
int64_t x1717 = INT64_MIN;
uint64_t x1718 = 86321578LLU;
volatile int16_t x1777 = -5896;
volatile int32_t t32 = -1971133;
int32_t x1845 = INT32_MAX;
uint32_t x1847 = UINT32_MAX;
int8_t x1913 = 20;
uint16_t x1914 = UINT16_MAX;
int32_t x2112 = 6;
static uint32_t x2215 = 1534127807U;
volatile uint32_t t39 = 1609239U;
uint32_t x2325 = 508389U;
volatile uint8_t x2328 = 0U;
int32_t x2353 = INT32_MIN;
uint8_t x2354 = 3U;
uint64_t x2355 = UINT64_MAX;
static volatile int32_t x2361 = INT32_MAX;
static int32_t x2391 = INT32_MAX;
volatile int32_t t45 = INT32_MAX;
static uint32_t x2705 = 8436959U;
int32_t x2858 = INT32_MIN;
int32_t t50 = 820791215;
volatile uint64_t t52 = 33LLU;
static volatile uint64_t x3082 = 162111819LLU;
volatile int32_t x3083 = 31555;
volatile int32_t t53 = -16377822;
uint16_t x3151 = UINT16_MAX;
volatile uint64_t t55 = 1261570011436284LLU;
int16_t x3186 = -486;
uint64_t x3367 = 4LLU;
uint16_t x3384 = 14U;
int16_t x3484 = 33;
static volatile uint16_t x3708 = 3U;
int16_t x3712 = 0;
int16_t x3722 = -1;
static int32_t x3742 = INT32_MIN;
uint16_t x3750 = 6U;
uint64_t x4095 = 798630033098147420LLU;
uint64_t x4139 = UINT64_MAX;
volatile int32_t x4166 = 39113000;
uint8_t x4168 = 2U;
uint16_t x4353 = UINT16_MAX;
volatile uint32_t x4355 = 349845U;
uint32_t t76 = 442978U;
static int64_t x4547 = 0LL;
uint8_t x4548 = 3U;
static uint64_t x4675 = UINT64_MAX;
int8_t x4676 = 21;
uint64_t t80 = 3613077LLU;
int8_t x4712 = 5;
volatile int64_t x4770 = INT64_MIN;
volatile int32_t x4782 = INT32_MIN;
uint32_t x4827 = 348848U;
uint8_t x4828 = 30U;
volatile uint16_t x4859 = UINT16_MAX;
static uint8_t x4889 = 2U;
int64_t x5046 = 26633LL;
uint8_t x5047 = UINT8_MAX;
int8_t x5129 = -1;
uint64_t x5134 = UINT64_MAX;
uint32_t x5136 = 2U;
static uint32_t x5301 = 224501U;
int8_t x5552 = 4;
volatile int32_t t100 = -504915631;
int64_t x5681 = INT64_MAX;
uint32_t x5682 = UINT32_MAX;
static int8_t x5684 = 0;
uint16_t x5737 = UINT16_MAX;
static int32_t x5740 = 5;
uint32_t x5812 = 1U;
volatile uint64_t t105 = 146335106491LLU;
uint64_t x5829 = 289LLU;
uint8_t x5836 = 0U;
volatile int32_t t109 = 6;
static uint8_t x6089 = UINT8_MAX;
uint64_t x6090 = UINT64_MAX;
volatile int32_t t111 = -3664;
static volatile int16_t x6099 = INT16_MAX;
static uint16_t x6100 = 6U;
volatile int64_t x6133 = INT64_MIN;
uint32_t t115 = UINT32_MAX;
int64_t x6223 = 69427130LL;
uint32_t x6234 = 9355U;
static uint64_t x6345 = 307910LLU;
int64_t x6621 = -1LL;
int32_t t122 = -30;
static uint16_t x6639 = UINT16_MAX;
uint8_t x6688 = 13U;
uint32_t x6707 = 442388U;
static uint32_t t125 = 101524595U;
int32_t x6737 = 51;
int64_t x6738 = INT64_MAX;
volatile int32_t t127 = 1139;
int64_t x6849 = INT64_MAX;
volatile uint16_t x6851 = 287U;
uint8_t x6852 = 1U;
volatile uint32_t x6858 = 3U;
uint64_t t129 = 626590370112594LLU;
uint8_t x6959 = UINT8_MAX;
volatile uint32_t t131 = 1621493U;
uint8_t x7134 = 109U;
static int16_t x7136 = 0;
static uint8_t x7138 = 18U;
int32_t t133 = INT32_MAX;
int64_t x7357 = INT64_MIN;
volatile int64_t x7378 = INT64_MIN;
int8_t x7380 = 21;
volatile int32_t x7388 = 11;
volatile int8_t x7637 = 1;
int64_t x7638 = INT64_MIN;
int16_t x7639 = INT16_MAX;
int8_t x7640 = 15;
volatile uint32_t t142 = 109613U;
static int32_t t145 = 89962;
int8_t x7878 = -1;
uint32_t x7912 = 0U;
int32_t t148 = -28777480;
uint16_t x8117 = 0U;
int64_t t149 = 9157373090682LL;
uint8_t x8225 = 2U;
uint64_t t152 = 0LLU;
static volatile uint32_t x8399 = UINT32_MAX;
volatile uint32_t t155 = 84509708U;
uint64_t t156 = 1272699091432946LLU;
uint64_t x8577 = UINT64_MAX;
uint8_t x8579 = 2U;
int16_t x8580 = 9;
int16_t x8674 = 59;
volatile int32_t t159 = -10441728;
int32_t x8769 = INT32_MIN;
int16_t x9021 = 1837;
int16_t x9022 = INT16_MIN;
uint64_t x9023 = 89211755519367288LLU;
uint32_t t163 = 2U;
int8_t x9229 = INT8_MIN;
int16_t x9342 = 5;
int32_t t165 = -80512;
static uint64_t t168 = 97LLU;
uint16_t x9549 = 33U;
int8_t x9552 = 20;
uint64_t t170 = 6510883523266568637LLU;
volatile uint16_t x9624 = 12U;
static volatile int32_t x9873 = -1;
int64_t x9875 = 2027516555148LL;
int8_t x9998 = -1;
static int16_t x10009 = 165;
int32_t x10122 = 52;
uint32_t x10138 = 64440U;
static uint32_t x10139 = 57395569U;
int8_t x10140 = 14;
uint8_t x10308 = 0U;
uint8_t x10356 = 3U;
uint16_t x10406 = 30U;
static int8_t x10525 = INT8_MIN;
uint16_t x10646 = 24U;
volatile int32_t x10647 = 7628269;
static int32_t t188 = 9756211;
int64_t x10694 = -40020539LL;
volatile uint16_t x10951 = 75U;
volatile int16_t x10952 = 20;
volatile int16_t x10959 = INT16_MAX;
volatile uint8_t x11048 = 6U;
volatile int32_t t196 = 446;
volatile uint32_t t197 = 198214762U;


void f0(void) {
    	int32_t x53 = -1;
	static int8_t x54 = 1;
	uint64_t x55 = UINT64_MAX;
	int8_t x56 = 1;
	volatile uint64_t t0 = 357LLU;

    t0 = (((x53==x54)^x55)<<x56);

    if (t0 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x106 = -1;
	static uint16_t x107 = 25846U;
	static uint8_t x108 = 4U;
	int32_t t1 = 5;

    t1 = (((x105==x106)^x107)<<x108);

    if (t1 != 413536) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x125 = INT8_MIN;
	int32_t x128 = 3;
	volatile int32_t t2 = 37;

    t2 = (((x125==x126)^x127)<<x128);

    if (t2 != 64) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x274 = UINT64_MAX;
	int8_t x275 = 0;
	int8_t x276 = 18;

    t3 = (((x273==x274)^x275)<<x276);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x305 = -15590491;
	uint64_t t4 = 1844094542708696513LLU;

    t4 = (((x305==x306)^x307)<<x308);

    if (t4 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x477 = INT16_MAX;
	uint16_t x478 = UINT16_MAX;
	uint32_t x479 = 921907U;
	static volatile uint16_t x480 = 0U;
	static volatile uint32_t t5 = 69274U;

    t5 = (((x477==x478)^x479)<<x480);

    if (t5 != 921907U) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x482 = INT8_MIN;
	uint8_t x483 = UINT8_MAX;
	int32_t t6 = 517734448;

    t6 = (((x481==x482)^x483)<<x484);

    if (t6 != 1020) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x553 = INT16_MIN;
	static uint8_t x554 = UINT8_MAX;
	volatile uint8_t x555 = 6U;
	int8_t x556 = 12;
	int32_t t7 = -3805530;

    t7 = (((x553==x554)^x555)<<x556);

    if (t7 != 24576) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x633 = -1LL;
	static volatile uint16_t x634 = 3U;
	uint8_t x635 = 3U;
	int8_t x636 = 1;
	int32_t t8 = -747;

    t8 = (((x633==x634)^x635)<<x636);

    if (t8 != 6) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x689 = 13737U;
	int16_t x690 = INT16_MIN;
	volatile int16_t x692 = 0;
	int64_t t9 = INT64_MAX;

    t9 = (((x689==x690)^x691)<<x692);

    if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x777 = UINT8_MAX;
	uint32_t x778 = UINT32_MAX;
	uint16_t x779 = 34U;
	int16_t x780 = 6;
	int32_t t10 = 115;

    t10 = (((x777==x778)^x779)<<x780);

    if (t10 != 2176) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x789 = 14636LLU;
	int8_t x790 = INT8_MAX;
	uint64_t x791 = 37LLU;
	volatile uint64_t t11 = 1048LLU;

    t11 = (((x789==x790)^x791)<<x792);

    if (t11 != 2368LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x797 = INT8_MIN;
	int32_t x798 = INT32_MIN;
	uint32_t x799 = 7829291U;
	uint64_t x800 = 3LLU;

    t12 = (((x797==x798)^x799)<<x800);

    if (t12 != 62634328U) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x865 = INT16_MAX;
	int8_t x866 = 22;
	uint32_t x867 = UINT32_MAX;
	static uint32_t t13 = 2U;

    t13 = (((x865==x866)^x867)<<x868);

    if (t13 != 4294967264U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x874 = UINT16_MAX;
	volatile uint8_t x876 = 62U;
	volatile uint64_t t14 = 28LLU;

    t14 = (((x873==x874)^x875)<<x876);

    if (t14 != 13835058055282163712LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x1013 = INT16_MIN;
	static uint16_t x1014 = UINT16_MAX;
	uint8_t x1015 = 3U;
	int32_t t15 = -12;

    t15 = (((x1013==x1014)^x1015)<<x1016);

    if (t15 != 3) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x1029 = 0U;
	volatile uint32_t x1030 = UINT32_MAX;
	uint64_t x1031 = 213LLU;
	uint16_t x1032 = 1U;
	static uint64_t t16 = 2391221112LLU;

    t16 = (((x1029==x1030)^x1031)<<x1032);

    if (t16 != 426LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x1037 = 26LLU;
	int8_t x1038 = INT8_MAX;
	int8_t x1040 = 1;
	int32_t t17 = 103;

    t17 = (((x1037==x1038)^x1039)<<x1040);

    if (t17 != 1832) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x1109 = -47;
	volatile int32_t x1110 = -1;
	int8_t x1111 = INT8_MAX;
	uint16_t x1112 = 17U;

    t18 = (((x1109==x1110)^x1111)<<x1112);

    if (t18 != 16646144) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x1161 = -1LL;
	static int8_t x1162 = INT8_MIN;
	volatile uint16_t x1163 = 23493U;
	int8_t x1164 = 0;
	int32_t t19 = 43735552;

    t19 = (((x1161==x1162)^x1163)<<x1164);

    if (t19 != 23493) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x1225 = 0U;
	int64_t x1226 = INT64_MAX;
	int16_t x1228 = 0;
	volatile uint32_t t20 = 185843U;

    t20 = (((x1225==x1226)^x1227)<<x1228);

    if (t20 != 4445U) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x1237 = UINT32_MAX;
	uint64_t x1239 = UINT64_MAX;
	static int8_t x1240 = 18;
	uint64_t t21 = 39057LLU;

    t21 = (((x1237==x1238)^x1239)<<x1240);

    if (t21 != 18446744073709289472LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x1253 = 118121978LLU;
	int8_t x1254 = 2;
	int8_t x1256 = 0;
	int32_t t22 = 168989130;

    t22 = (((x1253==x1254)^x1255)<<x1256);

    if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x1289 = 4186707532955986LL;
	uint32_t x1290 = 1782290143U;
	uint64_t x1291 = 11360LLU;
	volatile int8_t x1292 = 0;
	volatile uint64_t t23 = 301725889817910LLU;

    t23 = (((x1289==x1290)^x1291)<<x1292);

    if (t23 != 11360LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x1385 = -1;
	uint16_t x1387 = 532U;
	volatile int8_t x1388 = 0;
	int32_t t24 = 16273;

    t24 = (((x1385==x1386)^x1387)<<x1388);

    if (t24 != 532) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x1518 = INT8_MIN;
	int16_t x1519 = 175;
	volatile int32_t t25 = -726;

    t25 = (((x1517==x1518)^x1519)<<x1520);

    if (t25 != 5734400) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x1569 = 10264;
	int64_t x1570 = INT64_MIN;
	int8_t x1571 = 2;
	volatile int8_t x1572 = 11;
	volatile int32_t t26 = 147962;

    t26 = (((x1569==x1570)^x1571)<<x1572);

    if (t26 != 4096) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x1625 = 14705822339958074LLU;
	int8_t x1626 = INT8_MIN;
	static volatile uint16_t x1627 = UINT16_MAX;
	static int8_t x1628 = 1;
	int32_t t27 = -1;

    t27 = (((x1625==x1626)^x1627)<<x1628);

    if (t27 != 131070) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x1657 = -7321;
	int64_t x1658 = -1LL;
	uint16_t x1659 = 6122U;
	volatile int32_t x1660 = 1;
	int32_t t28 = -7390;

    t28 = (((x1657==x1658)^x1659)<<x1660);

    if (t28 != 12244) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x1669 = 3679U;
	uint16_t x1670 = 3U;
	volatile uint16_t x1671 = 649U;
	int32_t t29 = 62972046;

    t29 = (((x1669==x1670)^x1671)<<x1672);

    if (t29 != 1298) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x1719 = UINT32_MAX;
	int8_t x1720 = 0;
	volatile uint32_t t30 = UINT32_MAX;

    t30 = (((x1717==x1718)^x1719)<<x1720);

    if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x1753 = UINT16_MAX;
	volatile uint8_t x1754 = 39U;
	static int16_t x1755 = INT16_MAX;
	int16_t x1756 = 0;
	int32_t t31 = 2;

    t31 = (((x1753==x1754)^x1755)<<x1756);

    if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int64_t x1778 = INT64_MIN;
	int8_t x1779 = INT8_MAX;
	int8_t x1780 = 2;

    t32 = (((x1777==x1778)^x1779)<<x1780);

    if (t32 != 508) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x1846 = UINT64_MAX;
	uint8_t x1848 = 29U;
	volatile uint32_t t33 = 1635461U;

    t33 = (((x1845==x1846)^x1847)<<x1848);

    if (t33 != 3758096384U) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x1915 = UINT16_MAX;
	int64_t x1916 = 10LL;
	volatile int32_t t34 = -3;

    t34 = (((x1913==x1914)^x1915)<<x1916);

    if (t34 != 67107840) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x2025 = 307682762U;
	uint64_t x2026 = UINT64_MAX;
	uint8_t x2027 = UINT8_MAX;
	uint16_t x2028 = 23U;
	static int32_t t35 = 33281;

    t35 = (((x2025==x2026)^x2027)<<x2028);

    if (t35 != 2139095040) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x2073 = INT64_MAX;
	static int32_t x2074 = INT32_MIN;
	int16_t x2075 = 1;
	uint16_t x2076 = 0U;
	volatile int32_t t36 = -4;

    t36 = (((x2073==x2074)^x2075)<<x2076);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x2109 = -1112761;
	uint64_t x2110 = UINT64_MAX;
	uint32_t x2111 = 5430541U;
	volatile uint32_t t37 = 836888668U;

    t37 = (((x2109==x2110)^x2111)<<x2112);

    if (t37 != 347554624U) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x2145 = INT8_MAX;
	uint32_t x2146 = UINT32_MAX;
	uint32_t x2147 = 196U;
	static int16_t x2148 = 1;
	uint32_t t38 = 2956867U;

    t38 = (((x2145==x2146)^x2147)<<x2148);

    if (t38 != 392U) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x2213 = INT8_MIN;
	uint32_t x2214 = 5763U;
	static uint8_t x2216 = 6U;

    t39 = (((x2213==x2214)^x2215)<<x2216);

    if (t39 != 3694899136U) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x2301 = INT64_MIN;
	volatile uint32_t x2302 = 859210U;
	static uint64_t x2303 = 52055LLU;
	uint8_t x2304 = 2U;
	uint64_t t40 = 617LLU;

    t40 = (((x2301==x2302)^x2303)<<x2304);

    if (t40 != 208220LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x2326 = UINT64_MAX;
	static int16_t x2327 = 1;
	int32_t t41 = -505331100;

    t41 = (((x2325==x2326)^x2327)<<x2328);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x2356 = 11;
	static uint64_t t42 = 55018LLU;

    t42 = (((x2353==x2354)^x2355)<<x2356);

    if (t42 != 18446744073709549568LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x2362 = INT8_MAX;
	int32_t x2363 = INT32_MAX;
	static int8_t x2364 = 0;
	volatile int32_t t43 = INT32_MAX;

    t43 = (((x2361==x2362)^x2363)<<x2364);

    if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x2385 = INT32_MIN;
	uint64_t x2386 = UINT64_MAX;
	uint16_t x2387 = 9489U;
	uint16_t x2388 = 1U;
	volatile int32_t t44 = -486391930;

    t44 = (((x2385==x2386)^x2387)<<x2388);

    if (t44 != 18978) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x2389 = 1688132;
	volatile uint64_t x2390 = 996470618231LLU;
	int32_t x2392 = 0;

    t45 = (((x2389==x2390)^x2391)<<x2392);

    if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint64_t x2401 = UINT64_MAX;
	uint64_t x2402 = 7076819955766733LLU;
	volatile int64_t x2403 = 3721LL;
	uint16_t x2404 = 1U;
	volatile int64_t t46 = 65611541990830LL;

    t46 = (((x2401==x2402)^x2403)<<x2404);

    if (t46 != 7442LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x2629 = INT8_MAX;
	int16_t x2630 = INT16_MIN;
	volatile uint16_t x2631 = 179U;
	int64_t x2632 = 13LL;
	int32_t t47 = 2107;

    t47 = (((x2629==x2630)^x2631)<<x2632);

    if (t47 != 1466368) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x2706 = -1LL;
	uint16_t x2707 = UINT16_MAX;
	uint16_t x2708 = 0U;
	volatile int32_t t48 = 2693745;

    t48 = (((x2705==x2706)^x2707)<<x2708);

    if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x2857 = 0U;
	int16_t x2859 = INT16_MAX;
	volatile int8_t x2860 = 1;
	int32_t t49 = 61915;

    t49 = (((x2857==x2858)^x2859)<<x2860);

    if (t49 != 65534) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x2861 = 1;
	uint8_t x2862 = 0U;
	volatile uint16_t x2863 = UINT16_MAX;
	uint16_t x2864 = 8U;

    t50 = (((x2861==x2862)^x2863)<<x2864);

    if (t50 != 16776960) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x2889 = 0;
	volatile int8_t x2890 = INT8_MIN;
	volatile int16_t x2891 = 8;
	uint16_t x2892 = 0U;
	static int32_t t51 = 11;

    t51 = (((x2889==x2890)^x2891)<<x2892);

    if (t51 != 8) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x2985 = -1LL;
	int32_t x2986 = INT32_MIN;
	uint64_t x2987 = UINT64_MAX;
	uint8_t x2988 = 18U;

    t52 = (((x2985==x2986)^x2987)<<x2988);

    if (t52 != 18446744073709289472LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x3081 = 114989U;
	int16_t x3084 = 1;

    t53 = (((x3081==x3082)^x3083)<<x3084);

    if (t53 != 63110) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x3149 = 16U;
	volatile uint16_t x3150 = UINT16_MAX;
	volatile int16_t x3152 = 0;
	int32_t t54 = -236015;

    t54 = (((x3149==x3150)^x3151)<<x3152);

    if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x3153 = INT64_MIN;
	static int16_t x3154 = -1;
	uint64_t x3155 = 14454697904535040LLU;
	uint16_t x3156 = 1U;

    t55 = (((x3153==x3154)^x3155)<<x3156);

    if (t55 != 28909395809070080LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x3185 = INT8_MIN;
	uint16_t x3187 = UINT16_MAX;
	uint16_t x3188 = 1U;
	int32_t t56 = -16018;

    t56 = (((x3185==x3186)^x3187)<<x3188);

    if (t56 != 131070) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x3189 = INT64_MAX;
	volatile uint32_t x3190 = 7U;
	uint8_t x3191 = 64U;
	uint8_t x3192 = 0U;
	static volatile int32_t t57 = 1264;

    t57 = (((x3189==x3190)^x3191)<<x3192);

    if (t57 != 64) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x3365 = INT64_MIN;
	int16_t x3366 = INT16_MIN;
	volatile uint8_t x3368 = 51U;
	volatile uint64_t t58 = 462930LLU;

    t58 = (((x3365==x3366)^x3367)<<x3368);

    if (t58 != 9007199254740992LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x3381 = 34;
	static int64_t x3382 = INT64_MAX;
	static int16_t x3383 = 12;
	static volatile int32_t t59 = 17820469;

    t59 = (((x3381==x3382)^x3383)<<x3384);

    if (t59 != 196608) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x3481 = INT16_MIN;
	volatile uint64_t x3482 = 7LLU;
	volatile int64_t x3483 = 205935LL;
	volatile int64_t t60 = 12685709880LL;

    t60 = (((x3481==x3482)^x3483)<<x3484);

    if (t60 != 1768968180203520LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x3641 = -1;
	static int32_t x3642 = -257309;
	volatile int32_t x3643 = 4066;
	int8_t x3644 = 2;
	static volatile int32_t t61 = -175010;

    t61 = (((x3641==x3642)^x3643)<<x3644);

    if (t61 != 16264) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x3685 = INT64_MIN;
	uint32_t x3686 = 450121539U;
	static int8_t x3687 = INT8_MAX;
	int8_t x3688 = 1;
	volatile int32_t t62 = 985569;

    t62 = (((x3685==x3686)^x3687)<<x3688);

    if (t62 != 254) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x3705 = INT64_MIN;
	int32_t x3706 = INT32_MAX;
	volatile int8_t x3707 = 3;
	int32_t t63 = -5823770;

    t63 = (((x3705==x3706)^x3707)<<x3708);

    if (t63 != 24) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x3709 = INT8_MIN;
	static int32_t x3710 = INT32_MAX;
	static volatile int64_t x3711 = INT64_MAX;
	int64_t t64 = INT64_MAX;

    t64 = (((x3709==x3710)^x3711)<<x3712);

    if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x3721 = -1;
	static uint64_t x3723 = 976LLU;
	int16_t x3724 = 1;
	uint64_t t65 = 64731628693312304LLU;

    t65 = (((x3721==x3722)^x3723)<<x3724);

    if (t65 != 1954LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x3741 = INT64_MIN;
	static uint8_t x3743 = UINT8_MAX;
	int8_t x3744 = 0;
	volatile int32_t t66 = -1451026;

    t66 = (((x3741==x3742)^x3743)<<x3744);

    if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x3749 = 77U;
	static int8_t x3751 = 6;
	static uint32_t x3752 = 23U;
	int32_t t67 = 33;

    t67 = (((x3749==x3750)^x3751)<<x3752);

    if (t67 != 50331648) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x3833 = -1;
	int64_t x3834 = -1LL;
	uint16_t x3835 = 58U;
	int8_t x3836 = 19;
	volatile int32_t t68 = -1;

    t68 = (((x3833==x3834)^x3835)<<x3836);

    if (t68 != 30932992) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x3993 = INT64_MIN;
	int32_t x3994 = INT32_MAX;
	uint64_t x3995 = 251902182634831702LLU;
	uint32_t x3996 = 13U;
	uint64_t t69 = 6082457956515LLU;

    t69 = (((x3993==x3994)^x3995)<<x3996);

    if (t69 != 15994087962781073408LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x4093 = -139;
	volatile int8_t x4094 = -5;
	static int8_t x4096 = 0;
	uint64_t t70 = 57008278LLU;

    t70 = (((x4093==x4094)^x4095)<<x4096);

    if (t70 != 798630033098147420LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x4137 = 791LL;
	volatile int8_t x4138 = -1;
	uint8_t x4140 = 18U;
	static uint64_t t71 = 7874365271215324554LLU;

    t71 = (((x4137==x4138)^x4139)<<x4140);

    if (t71 != 18446744073709289472LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x4141 = UINT16_MAX;
	volatile uint64_t x4142 = 126811243550285LLU;
	volatile int8_t x4143 = 5;
	static int8_t x4144 = 1;
	volatile int32_t t72 = -27396309;

    t72 = (((x4141==x4142)^x4143)<<x4144);

    if (t72 != 10) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int8_t x4165 = INT8_MAX;
	uint32_t x4167 = UINT32_MAX;
	volatile uint32_t t73 = 30420U;

    t73 = (((x4165==x4166)^x4167)<<x4168);

    if (t73 != 4294967292U) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x4185 = 0;
	int16_t x4186 = INT16_MAX;
	static uint16_t x4187 = 12396U;
	int16_t x4188 = 1;
	int32_t t74 = -8394766;

    t74 = (((x4185==x4186)^x4187)<<x4188);

    if (t74 != 24792) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x4281 = 1928798973786LL;
	int64_t x4282 = 43793587696867LL;
	uint8_t x4283 = 2U;
	volatile int16_t x4284 = 23;
	static volatile int32_t t75 = -123495;

    t75 = (((x4281==x4282)^x4283)<<x4284);

    if (t75 != 16777216) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x4354 = INT8_MIN;
	static volatile int8_t x4356 = 10;

    t76 = (((x4353==x4354)^x4355)<<x4356);

    if (t76 != 358241280U) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x4361 = INT16_MIN;
	int32_t x4362 = INT32_MIN;
	uint32_t x4363 = UINT32_MAX;
	uint16_t x4364 = 24U;
	uint32_t t77 = 161345U;

    t77 = (((x4361==x4362)^x4363)<<x4364);

    if (t77 != 4278190080U) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x4545 = -1;
	int16_t x4546 = INT16_MIN;
	static volatile int64_t t78 = 1862322392944241338LL;

    t78 = (((x4545==x4546)^x4547)<<x4548);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x4609 = 215;
	uint64_t x4610 = UINT64_MAX;
	volatile uint32_t x4611 = 25U;
	int32_t x4612 = 0;
	uint32_t t79 = 14U;

    t79 = (((x4609==x4610)^x4611)<<x4612);

    if (t79 != 25U) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x4673 = 65607290;
	int64_t x4674 = 1046539315058745LL;

    t80 = (((x4673==x4674)^x4675)<<x4676);

    if (t80 != 18446744073707454464LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x4709 = 114848U;
	uint64_t x4710 = 9054001134887625764LLU;
	static int8_t x4711 = 3;
	int32_t t81 = -330;

    t81 = (((x4709==x4710)^x4711)<<x4712);

    if (t81 != 96) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x4761 = -235777;
	int32_t x4762 = INT32_MIN;
	int16_t x4763 = 71;
	uint16_t x4764 = 2U;
	volatile int32_t t82 = -397906;

    t82 = (((x4761==x4762)^x4763)<<x4764);

    if (t82 != 284) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x4769 = INT8_MIN;
	uint8_t x4771 = 27U;
	int8_t x4772 = 1;
	int32_t t83 = 30;

    t83 = (((x4769==x4770)^x4771)<<x4772);

    if (t83 != 54) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x4781 = -1;
	volatile uint8_t x4783 = 8U;
	int16_t x4784 = 1;
	volatile int32_t t84 = -38431074;

    t84 = (((x4781==x4782)^x4783)<<x4784);

    if (t84 != 16) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x4825 = -2311985590LL;
	static int64_t x4826 = -1LL;
	uint32_t t85 = 5U;

    t85 = (((x4825==x4826)^x4827)<<x4828);

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x4857 = -16399;
	uint8_t x4858 = 2U;
	volatile uint32_t x4860 = 0U;
	volatile int32_t t86 = 3;

    t86 = (((x4857==x4858)^x4859)<<x4860);

    if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x4890 = 30U;
	uint16_t x4891 = 4U;
	int8_t x4892 = 1;
	int32_t t87 = -1;

    t87 = (((x4889==x4890)^x4891)<<x4892);

    if (t87 != 8) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x4893 = UINT16_MAX;
	int64_t x4894 = INT64_MIN;
	int8_t x4895 = 51;
	int8_t x4896 = 1;
	int32_t t88 = 840065;

    t88 = (((x4893==x4894)^x4895)<<x4896);

    if (t88 != 102) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint64_t x4897 = 3148718399803805LLU;
	static uint8_t x4898 = UINT8_MAX;
	static uint64_t x4899 = 15203375LLU;
	int8_t x4900 = 1;
	static uint64_t t89 = 334933975LLU;

    t89 = (((x4897==x4898)^x4899)<<x4900);

    if (t89 != 30406750LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x4949 = -1;
	int32_t x4950 = INT32_MAX;
	uint64_t x4951 = UINT64_MAX;
	int16_t x4952 = 3;
	volatile uint64_t t90 = 22198020145897LLU;

    t90 = (((x4949==x4950)^x4951)<<x4952);

    if (t90 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint32_t x5045 = 124912600U;
	static uint16_t x5048 = 12U;
	int32_t t91 = 30;

    t91 = (((x5045==x5046)^x5047)<<x5048);

    if (t91 != 1044480) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int64_t x5130 = INT64_MIN;
	volatile uint32_t x5131 = UINT32_MAX;
	uint8_t x5132 = 0U;
	uint32_t t92 = UINT32_MAX;

    t92 = (((x5129==x5130)^x5131)<<x5132);

    if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x5133 = -1;
	uint64_t x5135 = 3168736LLU;
	uint64_t t93 = 9810119464LLU;

    t93 = (((x5133==x5134)^x5135)<<x5136);

    if (t93 != 12674948LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x5302 = INT8_MAX;
	int8_t x5303 = 2;
	volatile uint8_t x5304 = 14U;
	int32_t t94 = 0;

    t94 = (((x5301==x5302)^x5303)<<x5304);

    if (t94 != 32768) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x5409 = INT16_MAX;
	static int8_t x5410 = INT8_MIN;
	uint16_t x5411 = 12U;
	uint8_t x5412 = 3U;
	volatile int32_t t95 = 7;

    t95 = (((x5409==x5410)^x5411)<<x5412);

    if (t95 != 96) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x5413 = 9253;
	uint8_t x5414 = UINT8_MAX;
	uint64_t x5415 = UINT64_MAX;
	uint8_t x5416 = 59U;
	static uint64_t t96 = 21260228LLU;

    t96 = (((x5413==x5414)^x5415)<<x5416);

    if (t96 != 17870283321406128128LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x5425 = INT32_MIN;
	int16_t x5426 = INT16_MIN;
	volatile uint64_t x5427 = 10202LLU;
	static int16_t x5428 = 22;
	uint64_t t97 = 8LLU;

    t97 = (((x5425==x5426)^x5427)<<x5428);

    if (t97 != 42790289408LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x5433 = UINT32_MAX;
	static int16_t x5434 = INT16_MIN;
	static uint32_t x5435 = UINT32_MAX;
	uint64_t x5436 = 4LLU;
	uint32_t t98 = 6U;

    t98 = (((x5433==x5434)^x5435)<<x5436);

    if (t98 != 4294967280U) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x5453 = -3LL;
	volatile int8_t x5454 = -10;
	volatile uint32_t x5455 = 439883U;
	uint8_t x5456 = 12U;
	volatile uint32_t t99 = 135825663U;

    t99 = (((x5453==x5454)^x5455)<<x5456);

    if (t99 != 1801760768U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x5549 = 15629LLU;
	static uint32_t x5550 = 15U;
	int16_t x5551 = INT16_MAX;

    t100 = (((x5549==x5550)^x5551)<<x5552);

    if (t100 != 524272) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x5617 = -1;
	volatile int64_t x5618 = INT64_MIN;
	uint8_t x5619 = UINT8_MAX;
	uint16_t x5620 = 4U;
	volatile int32_t t101 = 86;

    t101 = (((x5617==x5618)^x5619)<<x5620);

    if (t101 != 4080) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x5683 = 29498142408LLU;
	volatile uint64_t t102 = 208655LLU;

    t102 = (((x5681==x5682)^x5683)<<x5684);

    if (t102 != 29498142408LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x5738 = INT64_MIN;
	uint64_t x5739 = 32118LLU;
	static uint64_t t103 = 724825274127LLU;

    t103 = (((x5737==x5738)^x5739)<<x5740);

    if (t103 != 1027776LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x5785 = INT32_MIN;
	int64_t x5786 = INT64_MIN;
	uint16_t x5787 = 1143U;
	uint16_t x5788 = 1U;
	int32_t t104 = 191147;

    t104 = (((x5785==x5786)^x5787)<<x5788);

    if (t104 != 2286) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x5809 = -25;
	uint8_t x5810 = UINT8_MAX;
	volatile uint64_t x5811 = 10244LLU;

    t105 = (((x5809==x5810)^x5811)<<x5812);

    if (t105 != 20488LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x5821 = INT64_MIN;
	volatile uint64_t x5822 = 16237838285LLU;
	int16_t x5823 = 0;
	static volatile uint8_t x5824 = 4U;
	static int32_t t106 = 8;

    t106 = (((x5821==x5822)^x5823)<<x5824);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x5830 = INT16_MIN;
	uint8_t x5831 = UINT8_MAX;
	static uint64_t x5832 = 11LLU;
	static volatile int32_t t107 = -110425038;

    t107 = (((x5829==x5830)^x5831)<<x5832);

    if (t107 != 522240) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x5833 = -10;
	static int16_t x5834 = -1;
	uint16_t x5835 = 0U;
	int32_t t108 = 9;

    t108 = (((x5833==x5834)^x5835)<<x5836);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x5997 = 153719U;
	volatile int16_t x5998 = INT16_MIN;
	int16_t x5999 = INT16_MAX;
	volatile int64_t x6000 = 1LL;

    t109 = (((x5997==x5998)^x5999)<<x6000);

    if (t109 != 65534) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x6057 = INT16_MIN;
	static int16_t x6058 = INT16_MIN;
	uint32_t x6059 = 5U;
	volatile uint32_t x6060 = 1U;
	volatile uint32_t t110 = 10779926U;

    t110 = (((x6057==x6058)^x6059)<<x6060);

    if (t110 != 8U) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint16_t x6091 = UINT16_MAX;
	uint8_t x6092 = 0U;

    t111 = (((x6089==x6090)^x6091)<<x6092);

    if (t111 != 65535) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x6097 = 2229907722481LL;
	static volatile uint16_t x6098 = 173U;
	volatile int32_t t112 = 1703;

    t112 = (((x6097==x6098)^x6099)<<x6100);

    if (t112 != 2097088) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x6117 = 5782847;
	static volatile uint8_t x6118 = UINT8_MAX;
	volatile uint8_t x6119 = UINT8_MAX;
	int16_t x6120 = 0;
	volatile int32_t t113 = -519;

    t113 = (((x6117==x6118)^x6119)<<x6120);

    if (t113 != 255) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x6134 = INT32_MAX;
	int8_t x6135 = INT8_MAX;
	uint8_t x6136 = 11U;
	static int32_t t114 = 30;

    t114 = (((x6133==x6134)^x6135)<<x6136);

    if (t114 != 260096) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x6145 = 1;
	uint32_t x6146 = UINT32_MAX;
	uint32_t x6147 = UINT32_MAX;
	static uint16_t x6148 = 0U;

    t115 = (((x6145==x6146)^x6147)<<x6148);

    if (t115 != UINT32_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x6189 = -1;
	uint8_t x6190 = 102U;
	volatile int32_t x6191 = 32265343;
	static int16_t x6192 = 0;
	static int32_t t116 = 88019;

    t116 = (((x6189==x6190)^x6191)<<x6192);

    if (t116 != 32265343) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x6221 = 27041380883148LLU;
	uint32_t x6222 = 44183U;
	uint8_t x6224 = 17U;
	volatile int64_t t117 = 122671778LL;

    t117 = (((x6221==x6222)^x6223)<<x6224);

    if (t117 != 9099952783360LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x6233 = -1;
	static int64_t x6235 = 2225LL;
	static uint32_t x6236 = 36U;
	volatile int64_t t118 = -514766LL;

    t118 = (((x6233==x6234)^x6235)<<x6236);

    if (t118 != 152900835737600LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x6329 = 1;
	uint8_t x6330 = UINT8_MAX;
	uint64_t x6331 = UINT64_MAX;
	uint64_t x6332 = 2LLU;
	uint64_t t119 = 1045536865LLU;

    t119 = (((x6329==x6330)^x6331)<<x6332);

    if (t119 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x6346 = -1;
	volatile int8_t x6347 = INT8_MAX;
	volatile uint8_t x6348 = 3U;
	static int32_t t120 = 80951824;

    t120 = (((x6345==x6346)^x6347)<<x6348);

    if (t120 != 1016) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x6529 = INT8_MIN;
	int64_t x6530 = INT64_MIN;
	static uint32_t x6531 = 338U;
	uint64_t x6532 = 24LLU;
	static volatile uint32_t t121 = 964U;

    t121 = (((x6529==x6530)^x6531)<<x6532);

    if (t121 != 1375731712U) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x6622 = INT8_MIN;
	int16_t x6623 = 498;
	static uint8_t x6624 = 2U;

    t122 = (((x6621==x6622)^x6623)<<x6624);

    if (t122 != 1992) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x6637 = INT16_MAX;
	int32_t x6638 = INT32_MIN;
	int8_t x6640 = 7;
	static volatile int32_t t123 = 4710;

    t123 = (((x6637==x6638)^x6639)<<x6640);

    if (t123 != 8388480) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x6685 = 24;
	volatile int64_t x6686 = -3300589LL;
	uint32_t x6687 = UINT32_MAX;
	static volatile uint32_t t124 = 344827U;

    t124 = (((x6685==x6686)^x6687)<<x6688);

    if (t124 != 4294959104U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x6705 = 9U;
	int8_t x6706 = 0;
	static uint8_t x6708 = 1U;

    t125 = (((x6705==x6706)^x6707)<<x6708);

    if (t125 != 884776U) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x6739 = INT8_MAX;
	uint8_t x6740 = 8U;
	volatile int32_t t126 = -58169;

    t126 = (((x6737==x6738)^x6739)<<x6740);

    if (t126 != 32512) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x6801 = -1;
	uint32_t x6802 = 157967573U;
	volatile uint8_t x6803 = 1U;
	int64_t x6804 = 0LL;

    t127 = (((x6801==x6802)^x6803)<<x6804);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x6850 = INT32_MIN;
	volatile int32_t t128 = -79;

    t128 = (((x6849==x6850)^x6851)<<x6852);

    if (t128 != 574) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x6857 = 22755LLU;
	uint64_t x6859 = UINT64_MAX;
	uint8_t x6860 = 13U;

    t129 = (((x6857==x6858)^x6859)<<x6860);

    if (t129 != 18446744073709543424LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x6957 = INT32_MAX;
	static int16_t x6958 = INT16_MIN;
	uint8_t x6960 = 0U;
	volatile int32_t t130 = -109;

    t130 = (((x6957==x6958)^x6959)<<x6960);

    if (t130 != 255) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x7029 = INT64_MIN;
	static int16_t x7030 = 0;
	uint32_t x7031 = UINT32_MAX;
	uint8_t x7032 = 3U;

    t131 = (((x7029==x7030)^x7031)<<x7032);

    if (t131 != 4294967288U) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x7133 = INT64_MAX;
	volatile uint16_t x7135 = 0U;
	static volatile int32_t t132 = 32676289;

    t132 = (((x7133==x7134)^x7135)<<x7136);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x7137 = INT64_MIN;
	int32_t x7139 = INT32_MAX;
	volatile int8_t x7140 = 0;

    t133 = (((x7137==x7138)^x7139)<<x7140);

    if (t133 != INT32_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x7233 = INT16_MIN;
	static uint32_t x7234 = 2028010792U;
	uint16_t x7235 = UINT16_MAX;
	int8_t x7236 = 4;
	int32_t t134 = 24743395;

    t134 = (((x7233==x7234)^x7235)<<x7236);

    if (t134 != 1048560) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint16_t x7358 = 18U;
	int16_t x7359 = INT16_MAX;
	static uint8_t x7360 = 1U;
	int32_t t135 = 1;

    t135 = (((x7357==x7358)^x7359)<<x7360);

    if (t135 != 65534) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x7377 = -1;
	static uint64_t x7379 = UINT64_MAX;
	uint64_t t136 = 5942934LLU;

    t136 = (((x7377==x7378)^x7379)<<x7380);

    if (t136 != 18446744073707454464LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x7385 = INT64_MIN;
	int32_t x7386 = INT32_MIN;
	uint32_t x7387 = 512U;
	static uint32_t t137 = 601310U;

    t137 = (((x7385==x7386)^x7387)<<x7388);

    if (t137 != 1048576U) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x7417 = 0U;
	int16_t x7418 = 12;
	int16_t x7419 = 30;
	static uint16_t x7420 = 0U;
	int32_t t138 = -988;

    t138 = (((x7417==x7418)^x7419)<<x7420);

    if (t138 != 30) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t t139 = 0;

    t139 = (((x7637==x7638)^x7639)<<x7640);

    if (t139 != 1073709056) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x7653 = -1LL;
	static uint32_t x7654 = 254769308U;
	uint32_t x7655 = UINT32_MAX;
	int8_t x7656 = 8;
	uint32_t t140 = 777U;

    t140 = (((x7653==x7654)^x7655)<<x7656);

    if (t140 != 4294967040U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x7661 = UINT32_MAX;
	static volatile int32_t x7662 = INT32_MIN;
	volatile uint32_t x7663 = UINT32_MAX;
	volatile uint8_t x7664 = 2U;
	volatile uint32_t t141 = 63635085U;

    t141 = (((x7661==x7662)^x7663)<<x7664);

    if (t141 != 4294967292U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x7705 = 2899711253LLU;
	int16_t x7706 = -1801;
	static volatile uint32_t x7707 = UINT32_MAX;
	uint8_t x7708 = 6U;

    t142 = (((x7705==x7706)^x7707)<<x7708);

    if (t142 != 4294967232U) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x7713 = 12284;
	int32_t x7714 = -1;
	static int8_t x7715 = INT8_MAX;
	int16_t x7716 = 0;
	static int32_t t143 = 842;

    t143 = (((x7713==x7714)^x7715)<<x7716);

    if (t143 != 127) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x7729 = INT64_MIN;
	static volatile int16_t x7730 = INT16_MIN;
	int32_t x7731 = 11;
	uint8_t x7732 = 4U;
	int32_t t144 = -301274;

    t144 = (((x7729==x7730)^x7731)<<x7732);

    if (t144 != 176) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint64_t x7833 = 313973043930LLU;
	uint32_t x7834 = 1410U;
	uint16_t x7835 = 91U;
	int8_t x7836 = 3;

    t145 = (((x7833==x7834)^x7835)<<x7836);

    if (t145 != 728) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x7849 = 559;
	uint32_t x7850 = UINT32_MAX;
	static uint16_t x7851 = UINT16_MAX;
	static volatile int32_t x7852 = 1;
	static volatile int32_t t146 = -7156;

    t146 = (((x7849==x7850)^x7851)<<x7852);

    if (t146 != 131070) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x7877 = INT8_MIN;
	uint8_t x7879 = 43U;
	uint16_t x7880 = 11U;
	int32_t t147 = 221876610;

    t147 = (((x7877==x7878)^x7879)<<x7880);

    if (t147 != 88064) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x7909 = INT16_MIN;
	int8_t x7910 = INT8_MIN;
	uint16_t x7911 = UINT16_MAX;

    t148 = (((x7909==x7910)^x7911)<<x7912);

    if (t148 != 65535) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x8118 = INT16_MAX;
	int64_t x8119 = 629239503LL;
	static int8_t x8120 = 6;

    t149 = (((x8117==x8118)^x8119)<<x8120);

    if (t149 != 40271328192LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x8133 = INT64_MIN;
	static int16_t x8134 = -1;
	uint64_t x8135 = 776634009896848444LLU;
	int8_t x8136 = 1;
	uint64_t t150 = 9468444420392532LLU;

    t150 = (((x8133==x8134)^x8135)<<x8136);

    if (t150 != 1553268019793696888LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x8161 = -1;
	int64_t x8162 = INT64_MIN;
	static uint8_t x8163 = 0U;
	volatile uint8_t x8164 = 2U;
	int32_t t151 = -427035;

    t151 = (((x8161==x8162)^x8163)<<x8164);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint8_t x8226 = 2U;
	uint64_t x8227 = 237812056445786LLU;
	uint8_t x8228 = 7U;

    t152 = (((x8225==x8226)^x8227)<<x8228);

    if (t152 != 30439943225060736LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x8301 = INT64_MIN;
	int8_t x8302 = INT8_MAX;
	uint64_t x8303 = 272LLU;
	uint8_t x8304 = 7U;
	volatile uint64_t t153 = 116178407144102837LLU;

    t153 = (((x8301==x8302)^x8303)<<x8304);

    if (t153 != 34816LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x8341 = -1LL;
	int16_t x8342 = 13;
	int64_t x8343 = 89967691005484LL;
	int8_t x8344 = 0;
	int64_t t154 = -63881159065LL;

    t154 = (((x8341==x8342)^x8343)<<x8344);

    if (t154 != 89967691005484LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x8397 = -22965653458LL;
	volatile uint8_t x8398 = 6U;
	uint8_t x8400 = 26U;

    t155 = (((x8397==x8398)^x8399)<<x8400);

    if (t155 != 4227858432U) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x8481 = INT8_MIN;
	int16_t x8482 = INT16_MAX;
	uint64_t x8483 = 2380LLU;
	static volatile uint16_t x8484 = 1U;

    t156 = (((x8481==x8482)^x8483)<<x8484);

    if (t156 != 4760LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x8578 = 18U;
	volatile int32_t t157 = 1805;

    t157 = (((x8577==x8578)^x8579)<<x8580);

    if (t157 != 1024) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x8589 = -21289;
	int32_t x8590 = INT32_MIN;
	static uint64_t x8591 = 8821963LLU;
	volatile int16_t x8592 = 2;
	uint64_t t158 = 8468748426000LLU;

    t158 = (((x8589==x8590)^x8591)<<x8592);

    if (t158 != 35287852LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x8673 = -1;
	int32_t x8675 = 7766;
	uint8_t x8676 = 0U;

    t159 = (((x8673==x8674)^x8675)<<x8676);

    if (t159 != 7766) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x8733 = INT16_MAX;
	uint64_t x8734 = UINT64_MAX;
	uint64_t x8735 = 1057575498LLU;
	uint8_t x8736 = 3U;
	uint64_t t160 = 250504700350342LLU;

    t160 = (((x8733==x8734)^x8735)<<x8736);

    if (t160 != 8460603984LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x8770 = 105U;
	volatile uint64_t x8771 = 260936118LLU;
	int32_t x8772 = 0;
	uint64_t t161 = 120639877LLU;

    t161 = (((x8769==x8770)^x8771)<<x8772);

    if (t161 != 260936118LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint16_t x9024 = 0U;
	static uint64_t t162 = 2804LLU;

    t162 = (((x9021==x9022)^x9023)<<x9024);

    if (t162 != 89211755519367288LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x9157 = UINT32_MAX;
	int64_t x9158 = INT64_MAX;
	uint32_t x9159 = 3U;
	int8_t x9160 = 4;

    t163 = (((x9157==x9158)^x9159)<<x9160);

    if (t163 != 48U) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x9230 = 16U;
	int8_t x9231 = 23;
	int64_t x9232 = 1LL;
	int32_t t164 = 6297788;

    t164 = (((x9229==x9230)^x9231)<<x9232);

    if (t164 != 46) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x9341 = -1;
	uint8_t x9343 = 54U;
	uint8_t x9344 = 0U;

    t165 = (((x9341==x9342)^x9343)<<x9344);

    if (t165 != 54) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x9429 = -36;
	static uint32_t x9430 = 112753680U;
	uint32_t x9431 = UINT32_MAX;
	static int8_t x9432 = 9;
	uint32_t t166 = 2U;

    t166 = (((x9429==x9430)^x9431)<<x9432);

    if (t166 != 4294966784U) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x9441 = INT16_MAX;
	uint8_t x9442 = 46U;
	uint64_t x9443 = UINT64_MAX;
	int8_t x9444 = 0;
	volatile uint64_t t167 = UINT64_MAX;

    t167 = (((x9441==x9442)^x9443)<<x9444);

    if (t167 != UINT64_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x9497 = -208446140;
	int16_t x9498 = INT16_MIN;
	volatile uint64_t x9499 = 23517328003LLU;
	uint8_t x9500 = 13U;

    t168 = (((x9497==x9498)^x9499)<<x9500);

    if (t168 != 192653951000576LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x9501 = 6952U;
	uint16_t x9502 = 5U;
	uint64_t x9503 = 31986808293780LLU;
	uint8_t x9504 = 0U;
	uint64_t t169 = 219801793LLU;

    t169 = (((x9501==x9502)^x9503)<<x9504);

    if (t169 != 31986808293780LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x9550 = 53;
	uint64_t x9551 = UINT64_MAX;

    t170 = (((x9549==x9550)^x9551)<<x9552);

    if (t170 != 18446744073708503040LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint32_t x9621 = 488843003U;
	static int64_t x9622 = INT64_MIN;
	static volatile uint8_t x9623 = 21U;
	volatile int32_t t171 = -43638;

    t171 = (((x9621==x9622)^x9623)<<x9624);

    if (t171 != 86016) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x9625 = INT32_MIN;
	uint64_t x9626 = 81265581672186LLU;
	int64_t x9627 = 4415811763825LL;
	volatile int16_t x9628 = 0;
	volatile int64_t t172 = 7636072LL;

    t172 = (((x9625==x9626)^x9627)<<x9628);

    if (t172 != 4415811763825LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x9777 = 1;
	static uint8_t x9778 = 0U;
	static uint64_t x9779 = UINT64_MAX;
	int8_t x9780 = 1;
	uint64_t t173 = 3176LLU;

    t173 = (((x9777==x9778)^x9779)<<x9780);

    if (t173 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x9874 = 1397541;
	static uint64_t x9876 = 1LLU;
	static volatile int64_t t174 = 68913669688896586LL;

    t174 = (((x9873==x9874)^x9875)<<x9876);

    if (t174 != 4055033110296LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x9945 = 5;
	int16_t x9946 = INT16_MAX;
	uint32_t x9947 = UINT32_MAX;
	static uint16_t x9948 = 12U;
	uint32_t t175 = 112784U;

    t175 = (((x9945==x9946)^x9947)<<x9948);

    if (t175 != 4294963200U) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x9997 = INT8_MAX;
	uint16_t x9999 = UINT16_MAX;
	static uint16_t x10000 = 1U;
	volatile int32_t t176 = -1;

    t176 = (((x9997==x9998)^x9999)<<x10000);

    if (t176 != 131070) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x10010 = 75U;
	uint8_t x10011 = 1U;
	uint32_t x10012 = 2U;
	volatile int32_t t177 = -241;

    t177 = (((x10009==x10010)^x10011)<<x10012);

    if (t177 != 4) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x10121 = INT32_MIN;
	volatile uint16_t x10123 = 193U;
	uint8_t x10124 = 1U;
	int32_t t178 = 37;

    t178 = (((x10121==x10122)^x10123)<<x10124);

    if (t178 != 386) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x10137 = INT8_MAX;
	uint32_t t179 = 143574U;

    t179 = (((x10137==x10138)^x10139)<<x10140);

    if (t179 != 4066131968U) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x10305 = INT64_MIN;
	volatile int64_t x10306 = INT64_MIN;
	uint8_t x10307 = 31U;
	volatile int32_t t180 = 1020;

    t180 = (((x10305==x10306)^x10307)<<x10308);

    if (t180 != 30) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x10317 = 3683LL;
	volatile int8_t x10318 = 40;
	uint16_t x10319 = 0U;
	int32_t x10320 = 10;
	volatile int32_t t181 = 69;

    t181 = (((x10317==x10318)^x10319)<<x10320);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x10353 = 3226U;
	static int8_t x10354 = 58;
	static int8_t x10355 = 15;
	static volatile int32_t t182 = 2;

    t182 = (((x10353==x10354)^x10355)<<x10356);

    if (t182 != 120) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x10361 = -1LL;
	static int8_t x10362 = 13;
	int64_t x10363 = 50073065807446260LL;
	int64_t x10364 = 1LL;
	static volatile int64_t t183 = -90341LL;

    t183 = (((x10361==x10362)^x10363)<<x10364);

    if (t183 != 100146131614892520LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x10405 = -1;
	static uint8_t x10407 = UINT8_MAX;
	uint16_t x10408 = 2U;
	static volatile int32_t t184 = 1;

    t184 = (((x10405==x10406)^x10407)<<x10408);

    if (t184 != 1020) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x10457 = 88U;
	int32_t x10458 = 54572;
	int16_t x10459 = 1;
	static uint8_t x10460 = 1U;
	static int32_t t185 = -4;

    t185 = (((x10457==x10458)^x10459)<<x10460);

    if (t185 != 2) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x10526 = INT64_MIN;
	int16_t x10527 = 809;
	uint8_t x10528 = 1U;
	volatile int32_t t186 = -1;

    t186 = (((x10525==x10526)^x10527)<<x10528);

    if (t186 != 1618) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x10597 = -1LL;
	uint32_t x10598 = 19393985U;
	uint64_t x10599 = 0LLU;
	uint8_t x10600 = 6U;
	volatile uint64_t t187 = 343741239363256LLU;

    t187 = (((x10597==x10598)^x10599)<<x10600);

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x10645 = 0;
	uint64_t x10648 = 0LLU;

    t188 = (((x10645==x10646)^x10647)<<x10648);

    if (t188 != 7628269) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x10693 = INT16_MIN;
	uint8_t x10695 = UINT8_MAX;
	int8_t x10696 = 3;
	volatile int32_t t189 = 21800948;

    t189 = (((x10693==x10694)^x10695)<<x10696);

    if (t189 != 2040) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x10909 = INT32_MAX;
	int64_t x10910 = 2368564610386LL;
	uint16_t x10911 = 252U;
	int8_t x10912 = 1;
	volatile int32_t t190 = -199507552;

    t190 = (((x10909==x10910)^x10911)<<x10912);

    if (t190 != 504) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x10941 = -1;
	uint32_t x10942 = 4U;
	uint8_t x10943 = 32U;
	uint16_t x10944 = 12U;
	int32_t t191 = 3147;

    t191 = (((x10941==x10942)^x10943)<<x10944);

    if (t191 != 131072) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x10945 = UINT64_MAX;
	uint32_t x10946 = 16203476U;
	int16_t x10947 = 31;
	int16_t x10948 = 0;
	int32_t t192 = -31112655;

    t192 = (((x10945==x10946)^x10947)<<x10948);

    if (t192 != 31) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x10949 = 17U;
	uint8_t x10950 = UINT8_MAX;
	int32_t t193 = -27285764;

    t193 = (((x10949==x10950)^x10951)<<x10952);

    if (t193 != 78643200) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint16_t x10957 = 1592U;
	int32_t x10958 = -1;
	uint8_t x10960 = 8U;
	volatile int32_t t194 = 434;

    t194 = (((x10957==x10958)^x10959)<<x10960);

    if (t194 != 8388352) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x11045 = -1LL;
	volatile uint64_t x11046 = 28017989617877626LLU;
	int8_t x11047 = 1;
	static volatile int32_t t195 = 166;

    t195 = (((x11045==x11046)^x11047)<<x11048);

    if (t195 != 64) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x11225 = UINT8_MAX;
	static uint8_t x11226 = UINT8_MAX;
	uint16_t x11227 = 478U;
	uint16_t x11228 = 5U;

    t196 = (((x11225==x11226)^x11227)<<x11228);

    if (t196 != 15328) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x11269 = 45U;
	uint16_t x11270 = 104U;
	uint32_t x11271 = UINT32_MAX;
	static uint8_t x11272 = 1U;

    t197 = (((x11269==x11270)^x11271)<<x11272);

    if (t197 != 4294967294U) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x11353 = INT64_MIN;
	uint32_t x11354 = 188U;
	int8_t x11355 = 29;
	static uint16_t x11356 = 0U;
	static int32_t t198 = 23543;

    t198 = (((x11353==x11354)^x11355)<<x11356);

    if (t198 != 29) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x11433 = 1461LLU;
	volatile int64_t x11434 = -1LL;
	uint64_t x11435 = 92805255064LLU;
	uint16_t x11436 = 33U;
	uint64_t t199 = 3839924255856LLU;

    t199 = (((x11433==x11434)^x11435)<<x11436);

    if (t199 != 3981075624126054400LLU) { NG(); } else { ; }
	
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

