
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

int8_t x160 = 1;
int32_t t2 = -185;
int8_t x166 = INT8_MIN;
int8_t x168 = 7;
uint8_t x188 = 11U;
int8_t x227 = INT8_MAX;
static int16_t x361 = INT16_MIN;
int32_t t8 = 236;
int32_t x430 = 1;
int8_t x432 = 0;
static volatile int16_t x673 = 339;
int32_t x674 = 75;
volatile int16_t x756 = 8;
int64_t x786 = -414967016LL;
int16_t x916 = 8;
static uint16_t x996 = 0U;
volatile int64_t t18 = -2568680536987419134LL;
uint16_t x1033 = 15U;
uint32_t x1035 = 645004U;
int16_t x1083 = 21;
static uint8_t x1147 = 0U;
int32_t t21 = 178107;
static volatile int8_t x1169 = -57;
static int64_t t22 = 3209702LL;
int64_t x1181 = INT64_MIN;
uint32_t x1182 = 144316372U;
uint16_t x1183 = 5087U;
uint8_t x1283 = UINT8_MAX;
static volatile int64_t x1357 = -201602751LL;
int16_t x1359 = INT16_MAX;
uint64_t x1503 = 78574584974164LLU;
volatile uint64_t t29 = UINT64_MAX;
static int64_t x1558 = INT64_MIN;
int64_t x1559 = 3LL;
int32_t x1683 = INT32_MAX;
int8_t x1703 = INT8_MAX;
volatile int32_t x1738 = -1;
int64_t x1739 = 450519LL;
static uint8_t x1898 = 76U;
uint64_t x1921 = 318408994696010LLU;
volatile uint32_t x1923 = 7390U;
uint64_t t38 = 102499307197LLU;
static int64_t t39 = INT64_MAX;
static volatile int32_t x2181 = INT32_MIN;
int16_t x2183 = 6977;
static int32_t x2184 = 0;
volatile uint8_t x2302 = 1U;
uint8_t x2304 = 15U;
int32_t t43 = 1405;
static uint16_t x2416 = 1U;
int16_t x2441 = -1;
uint32_t x2483 = 24U;
int16_t x2505 = INT16_MAX;
static uint16_t x2721 = 111U;
static uint32_t x2786 = 14188U;
int32_t x2790 = 1999944;
int32_t x2792 = 1;
volatile int32_t t52 = -18321;
uint32_t x2847 = UINT32_MAX;
static int64_t t53 = -8615439643LL;
int8_t x2850 = INT8_MIN;
int16_t x2965 = 1;
volatile int32_t t55 = 450121;
uint32_t x3511 = 1U;
static volatile uint32_t t58 = UINT32_MAX;
int8_t x3717 = INT8_MAX;
static uint8_t x3718 = 77U;
volatile int8_t x3805 = -1;
int8_t x4175 = INT8_MAX;
static int8_t x4176 = 2;
static uint8_t x4237 = 2U;
uint64_t t68 = UINT64_MAX;
volatile int8_t x4411 = 0;
volatile uint32_t t71 = 27637201U;
int16_t x4540 = 4;
volatile uint32_t t72 = UINT32_MAX;
uint64_t t73 = UINT64_MAX;
uint8_t x4719 = 90U;
int8_t x4757 = INT8_MIN;
static uint8_t x4779 = 3U;
static volatile uint32_t x4991 = 0U;
int64_t x5073 = INT64_MIN;
uint16_t x5204 = 2U;
volatile int64_t x5265 = -5LL;
uint32_t t83 = UINT32_MAX;
int16_t x5430 = INT16_MIN;
int64_t t86 = 0LL;
static uint16_t x5511 = 249U;
int64_t t88 = -2024005254137818LL;
uint8_t x5592 = 3U;
uint8_t x5600 = 29U;
static volatile uint32_t x5675 = UINT32_MAX;
int32_t x5681 = 3275;
int64_t x5682 = 54257700LL;
uint16_t x5683 = UINT16_MAX;
int16_t x5888 = 30;
uint64_t t97 = 3LLU;
int64_t x6045 = 3659LL;
int32_t x6076 = 3;
int64_t x6097 = -1LL;
int64_t x6098 = -256447470965LL;
int8_t x6257 = -1;
static uint16_t x6260 = 40U;
int32_t x6377 = 281;
int32_t x6478 = -203314;


void f0(void) {
    	static uint16_t x1 = UINT16_MAX;
	int8_t x2 = -1;
	int16_t x3 = INT16_MAX;
	static volatile uint8_t x4 = 4U;
	volatile int32_t t0 = 14363;

    t0 = ((x1|x2)|(x3<<x4));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x133 = INT16_MIN;
	int64_t x134 = -1243484453884LL;
	static int32_t x135 = 0;
	int64_t x136 = 0LL;
	static int64_t t1 = -4151987127LL;

    t1 = ((x133|x134)|(x135<<x136));

    if (t1 != -31740LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x157 = -1;
	volatile uint16_t x158 = 5987U;
	static volatile uint16_t x159 = 924U;

    t2 = ((x157|x158)|(x159<<x160));

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x165 = 6U;
	uint8_t x167 = UINT8_MAX;
	uint32_t t3 = 1490739852U;

    t3 = ((x165|x166)|(x167<<x168));

    if (t3 != 4294967174U) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x185 = 0;
	int64_t x186 = INT64_MIN;
	uint16_t x187 = UINT16_MAX;
	static volatile int64_t t4 = 533131703623LL;

    t4 = ((x185|x186)|(x187<<x188));

    if (t4 != -9223372036720560128LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x193 = -1;
	int8_t x194 = INT8_MAX;
	int64_t x195 = 468791056951LL;
	static uint16_t x196 = 2U;
	int64_t t5 = 101645672LL;

    t5 = ((x193|x194)|(x195<<x196));

    if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x225 = 0;
	volatile int16_t x226 = INT16_MAX;
	uint32_t x228 = 2U;
	int32_t t6 = 195;

    t6 = ((x225|x226)|(x227<<x228));

    if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x249 = INT64_MIN;
	int32_t x250 = -16;
	uint64_t x251 = 60952844LLU;
	volatile uint16_t x252 = 0U;
	volatile uint64_t t7 = 24132646977626635LLU;

    t7 = ((x249|x250)|(x251<<x252));

    if (t7 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x362 = INT32_MAX;
	volatile uint8_t x363 = 10U;
	uint8_t x364 = 18U;

    t8 = ((x361|x362)|(x363<<x364));

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int32_t x429 = -98;
	static uint16_t x431 = UINT16_MAX;
	volatile int32_t t9 = 1052042755;

    t9 = ((x429|x430)|(x431<<x432));

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x449 = -1919;
	int8_t x450 = INT8_MAX;
	uint64_t x451 = UINT64_MAX;
	uint8_t x452 = 1U;
	static volatile uint64_t t10 = UINT64_MAX;

    t10 = ((x449|x450)|(x451<<x452));

    if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x625 = INT8_MIN;
	int16_t x626 = -1;
	static uint8_t x627 = UINT8_MAX;
	uint8_t x628 = 1U;
	volatile int32_t t11 = -123202309;

    t11 = ((x625|x626)|(x627<<x628));

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint32_t x675 = 521631289U;
	uint32_t x676 = 0U;
	uint32_t t12 = 7U;

    t12 = ((x673|x674)|(x675<<x676));

    if (t12 != 521631611U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x717 = INT64_MIN;
	volatile int16_t x718 = INT16_MIN;
	int16_t x719 = 846;
	static uint8_t x720 = 3U;
	volatile int64_t t13 = 2120997323LL;

    t13 = ((x717|x718)|(x719<<x720));

    if (t13 != -26000LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int16_t x753 = 946;
	int64_t x754 = -1LL;
	static uint16_t x755 = UINT16_MAX;
	int64_t t14 = 438LL;

    t14 = ((x753|x754)|(x755<<x756));

    if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x785 = 13979476555627959LL;
	static volatile uint16_t x787 = UINT16_MAX;
	int8_t x788 = 6;
	static int64_t t15 = -75618565LL;

    t15 = ((x785|x786)|(x787<<x788));

    if (t15 != -411041793LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x849 = 0U;
	int8_t x850 = -40;
	uint8_t x851 = 1U;
	volatile int32_t x852 = 0;
	int32_t t16 = 6599;

    t16 = ((x849|x850)|(x851<<x852));

    if (t16 != -39) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x913 = INT32_MIN;
	int64_t x914 = -1LL;
	static int32_t x915 = 1;
	static int64_t t17 = -176738694573564091LL;

    t17 = ((x913|x914)|(x915<<x916));

    if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x993 = INT64_MIN;
	volatile int16_t x994 = INT16_MIN;
	static uint32_t x995 = UINT32_MAX;

    t18 = ((x993|x994)|(x995<<x996));

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x1034 = INT32_MIN;
	int8_t x1036 = 19;
	static uint32_t t19 = 313821051U;

    t19 = ((x1033|x1034)|(x1035<<x1036));

    if (t19 != 3160408079U) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x1081 = INT32_MIN;
	int16_t x1082 = -49;
	volatile uint16_t x1084 = 1U;
	static volatile int32_t t20 = -139861249;

    t20 = ((x1081|x1082)|(x1083<<x1084));

    if (t20 != -17) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x1145 = -3;
	uint16_t x1146 = 1U;
	uint8_t x1148 = 4U;

    t21 = ((x1145|x1146)|(x1147<<x1148));

    if (t21 != -3) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x1170 = 24079135LL;
	int64_t x1171 = 231332373874LL;
	int8_t x1172 = 1;

    t22 = ((x1169|x1170)|(x1171<<x1172));

    if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x1184 = 1U;
	static int64_t t23 = 1481999938174750LL;

    t23 = ((x1181|x1182)|(x1183<<x1184));

    if (t23 != -9223372036710451202LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x1281 = -1;
	int32_t x1282 = INT32_MAX;
	static uint8_t x1284 = 7U;
	static int32_t t24 = 104;

    t24 = ((x1281|x1282)|(x1283<<x1284));

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int64_t x1337 = 234068337092LL;
	uint16_t x1338 = UINT16_MAX;
	int8_t x1339 = INT8_MAX;
	static uint8_t x1340 = 5U;
	int64_t t25 = 2179729340433219LL;

    t25 = ((x1337|x1338)|(x1339<<x1340));

    if (t25 != 234068377599LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x1358 = 3503316528596731645LLU;
	uint32_t x1360 = 2U;
	static uint64_t t26 = 7732170738LLU;

    t26 = ((x1357|x1358)|(x1359<<x1360));

    if (t26 != 18446744073575071741LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x1389 = 70119713638355068LL;
	uint64_t x1390 = UINT64_MAX;
	volatile uint8_t x1391 = 9U;
	uint8_t x1392 = 2U;
	volatile uint64_t t27 = UINT64_MAX;

    t27 = ((x1389|x1390)|(x1391<<x1392));

    if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x1501 = -1;
	uint16_t x1502 = 7620U;
	static volatile int16_t x1504 = 20;
	volatile uint64_t t28 = UINT64_MAX;

    t28 = ((x1501|x1502)|(x1503<<x1504));

    if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x1521 = -1;
	uint16_t x1522 = UINT16_MAX;
	static volatile uint64_t x1523 = UINT64_MAX;
	uint8_t x1524 = 7U;

    t29 = ((x1521|x1522)|(x1523<<x1524));

    if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x1557 = INT32_MAX;
	int32_t x1560 = 3;
	int64_t t30 = -3913912681481LL;

    t30 = ((x1557|x1558)|(x1559<<x1560));

    if (t30 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x1681 = INT64_MIN;
	int32_t x1682 = -1;
	volatile int8_t x1684 = 0;
	static volatile int64_t t31 = -98LL;

    t31 = ((x1681|x1682)|(x1683<<x1684));

    if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x1701 = -804;
	uint64_t x1702 = 5081LLU;
	int32_t x1704 = 1;
	static uint64_t t32 = UINT64_MAX;

    t32 = ((x1701|x1702)|(x1703<<x1704));

    if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x1729 = 457093527572342LLU;
	static volatile int64_t x1730 = -1LL;
	uint8_t x1731 = 42U;
	int8_t x1732 = 0;
	static volatile uint64_t t33 = UINT64_MAX;

    t33 = ((x1729|x1730)|(x1731<<x1732));

    if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x1737 = 9U;
	uint8_t x1740 = 23U;
	volatile int64_t t34 = 13LL;

    t34 = ((x1737|x1738)|(x1739<<x1740));

    if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x1785 = INT16_MIN;
	volatile int32_t x1786 = INT32_MIN;
	int8_t x1787 = 0;
	uint16_t x1788 = 4U;
	int32_t t35 = 2;

    t35 = ((x1785|x1786)|(x1787<<x1788));

    if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x1893 = INT16_MIN;
	uint64_t x1894 = 15919298924LLU;
	int16_t x1895 = 920;
	int64_t x1896 = 2LL;
	uint64_t t36 = 998709012477LLU;

    t36 = ((x1893|x1894)|(x1895<<x1896));

    if (t36 != 18446744073709535084LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x1897 = -1;
	uint16_t x1899 = 1U;
	volatile uint8_t x1900 = 24U;
	int32_t t37 = -489820715;

    t37 = ((x1897|x1898)|(x1899<<x1900));

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile uint16_t x1922 = 19888U;
	int8_t x1924 = 6;

    t38 = ((x1921|x1922)|(x1923<<x1924));

    if (t38 != 318408994848762LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x2017 = INT64_MAX;
	uint32_t x2018 = 0U;
	volatile int64_t x2019 = 65327071204LL;
	int8_t x2020 = 0;

    t39 = ((x2017|x2018)|(x2019<<x2020));

    if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x2153 = INT8_MAX;
	int64_t x2154 = -1LL;
	uint16_t x2155 = 21U;
	uint16_t x2156 = 4U;
	int64_t t40 = -7987LL;

    t40 = ((x2153|x2154)|(x2155<<x2156));

    if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x2182 = 6418700088666296LLU;
	static uint64_t t41 = 366010218311LLU;

    t41 = ((x2181|x2182)|(x2183<<x2184));

    if (t41 != 18446744071875886073LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x2221 = 4049157LLU;
	int8_t x2222 = INT8_MIN;
	uint16_t x2223 = UINT16_MAX;
	static int8_t x2224 = 1;
	uint64_t t42 = UINT64_MAX;

    t42 = ((x2221|x2222)|(x2223<<x2224));

    if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x2301 = UINT16_MAX;
	int16_t x2303 = INT16_MAX;

    t43 = ((x2301|x2302)|(x2303<<x2304));

    if (t43 != 1073741823) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x2413 = -1;
	volatile int64_t x2414 = INT64_MIN;
	int16_t x2415 = INT16_MAX;
	volatile int64_t t44 = 5LL;

    t44 = ((x2413|x2414)|(x2415<<x2416));

    if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x2442 = -1LL;
	int8_t x2443 = INT8_MAX;
	uint16_t x2444 = 2U;
	int64_t t45 = 13785211163596435LL;

    t45 = ((x2441|x2442)|(x2443<<x2444));

    if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x2481 = -1;
	int8_t x2482 = 1;
	int8_t x2484 = 0;
	volatile uint32_t t46 = UINT32_MAX;

    t46 = ((x2481|x2482)|(x2483<<x2484));

    if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x2506 = INT32_MIN;
	uint16_t x2507 = 39U;
	int16_t x2508 = 1;
	static volatile int32_t t47 = 3;

    t47 = ((x2505|x2506)|(x2507<<x2508));

    if (t47 != -2147450881) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x2525 = -7238941587541LL;
	static int16_t x2526 = 4378;
	int8_t x2527 = 1;
	uint8_t x2528 = 0U;
	volatile int64_t t48 = -18698285781006564LL;

    t48 = ((x2525|x2526)|(x2527<<x2528));

    if (t48 != -7238941583429LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x2625 = 62U;
	int32_t x2626 = -1;
	uint64_t x2627 = UINT64_MAX;
	volatile uint8_t x2628 = 2U;
	uint64_t t49 = UINT64_MAX;

    t49 = ((x2625|x2626)|(x2627<<x2628));

    if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x2722 = INT8_MAX;
	int8_t x2723 = 0;
	static uint16_t x2724 = 21U;
	int32_t t50 = -553207738;

    t50 = ((x2721|x2722)|(x2723<<x2724));

    if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x2785 = UINT16_MAX;
	uint8_t x2787 = UINT8_MAX;
	uint8_t x2788 = 2U;
	volatile uint32_t t51 = 375U;

    t51 = ((x2785|x2786)|(x2787<<x2788));

    if (t51 != 65535U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x2789 = -1;
	uint8_t x2791 = UINT8_MAX;

    t52 = ((x2789|x2790)|(x2791<<x2792));

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x2845 = INT64_MAX;
	int8_t x2846 = -1;
	volatile int8_t x2848 = 1;

    t53 = ((x2845|x2846)|(x2847<<x2848));

    if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x2849 = INT32_MAX;
	int32_t x2851 = 903;
	static uint32_t x2852 = 1U;
	int32_t t54 = -2569172;

    t54 = ((x2849|x2850)|(x2851<<x2852));

    if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x2966 = -202966142;
	volatile int16_t x2967 = INT16_MAX;
	int8_t x2968 = 12;

    t55 = ((x2965|x2966)|(x2967<<x2968));

    if (t55 != -134218877) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x3117 = INT16_MIN;
	static int8_t x3118 = INT8_MAX;
	uint16_t x3119 = 17U;
	int8_t x3120 = 10;
	static volatile int32_t t56 = -1;

    t56 = ((x3117|x3118)|(x3119<<x3120));

    if (t56 != -15233) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x3437 = UINT32_MAX;
	volatile int8_t x3438 = -36;
	uint8_t x3439 = UINT8_MAX;
	static int32_t x3440 = 1;
	static uint32_t t57 = UINT32_MAX;

    t57 = ((x3437|x3438)|(x3439<<x3440));

    if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x3509 = -1;
	int16_t x3510 = INT16_MIN;
	int8_t x3512 = 0;

    t58 = ((x3509|x3510)|(x3511<<x3512));

    if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint8_t x3525 = 0U;
	static int8_t x3526 = INT8_MIN;
	uint8_t x3527 = 25U;
	uint16_t x3528 = 4U;
	volatile int32_t t59 = 15548;

    t59 = ((x3525|x3526)|(x3527<<x3528));

    if (t59 != -112) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x3719 = 3;
	uint8_t x3720 = 1U;
	volatile int32_t t60 = -8;

    t60 = ((x3717|x3718)|(x3719<<x3720));

    if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x3806 = -38031;
	volatile int8_t x3807 = INT8_MAX;
	static uint16_t x3808 = 1U;
	int32_t t61 = -14;

    t61 = ((x3805|x3806)|(x3807<<x3808));

    if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x3813 = UINT32_MAX;
	volatile uint16_t x3814 = 14625U;
	static int8_t x3815 = 31;
	int8_t x3816 = 13;
	volatile uint32_t t62 = UINT32_MAX;

    t62 = ((x3813|x3814)|(x3815<<x3816));

    if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x3901 = 5306947918472LL;
	int32_t x3902 = -18073233;
	uint8_t x3903 = 1U;
	uint16_t x3904 = 1U;
	int64_t t63 = -7977140LL;

    t63 = ((x3901|x3902)|(x3903<<x3904));

    if (t63 != -16843793LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x3913 = 423548106114001011LLU;
	volatile int16_t x3914 = 9122;
	int8_t x3915 = 1;
	static uint8_t x3916 = 1U;
	uint64_t t64 = 721256870392387LLU;

    t64 = ((x3913|x3914)|(x3915<<x3916));

    if (t64 != 423548106114001907LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x4057 = INT32_MAX;
	int16_t x4058 = 0;
	uint64_t x4059 = 11602677069987162LLU;
	int16_t x4060 = 4;
	uint64_t t65 = 67445234920617LLU;

    t65 = ((x4057|x4058)|(x4059<<x4060));

    if (t65 != 185642833871372287LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x4169 = 585779142345LLU;
	uint32_t x4170 = 1296872807U;
	uint64_t x4171 = 48252238846837LLU;
	static uint8_t x4172 = 23U;
	volatile uint64_t t66 = 1551494037922884136LLU;

    t66 = ((x4169|x4170)|(x4171<<x4172));

    if (t66 != 17387491811507634159LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint16_t x4173 = 0U;
	int8_t x4174 = INT8_MIN;
	int32_t t67 = 323;

    t67 = ((x4173|x4174)|(x4175<<x4176));

    if (t67 != -4) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x4238 = UINT64_MAX;
	volatile uint16_t x4239 = UINT16_MAX;
	uint32_t x4240 = 4U;

    t68 = ((x4237|x4238)|(x4239<<x4240));

    if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x4313 = -59862;
	int16_t x4314 = 2;
	uint64_t x4315 = 190682731977LLU;
	uint8_t x4316 = 45U;
	volatile uint64_t t69 = 61974191LLU;

    t69 = ((x4313|x4314)|(x4315<<x4316));

    if (t69 != 18446744073709491754LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x4409 = -1;
	static uint16_t x4410 = 207U;
	volatile uint8_t x4412 = 1U;
	volatile int32_t t70 = 1;

    t70 = ((x4409|x4410)|(x4411<<x4412));

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x4497 = 103;
	uint16_t x4498 = 10U;
	uint32_t x4499 = 6531818U;
	uint8_t x4500 = 0U;

    t71 = ((x4497|x4498)|(x4499<<x4500));

    if (t71 != 6531823U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x4537 = UINT32_MAX;
	int32_t x4538 = INT32_MAX;
	uint8_t x4539 = UINT8_MAX;

    t72 = ((x4537|x4538)|(x4539<<x4540));

    if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint64_t x4677 = 1577430815840LLU;
	int8_t x4678 = -1;
	uint64_t x4679 = UINT64_MAX;
	uint64_t x4680 = 1LLU;

    t73 = ((x4677|x4678)|(x4679<<x4680));

    if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x4717 = INT8_MIN;
	int8_t x4718 = -1;
	uint32_t x4720 = 5U;
	int32_t t74 = 0;

    t74 = ((x4717|x4718)|(x4719<<x4720));

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x4758 = INT64_MAX;
	uint32_t x4759 = 3029008U;
	uint8_t x4760 = 7U;
	int64_t t75 = -3218414995934444LL;

    t75 = ((x4757|x4758)|(x4759<<x4760));

    if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x4777 = -3614017807767229LL;
	static uint64_t x4778 = UINT64_MAX;
	volatile uint16_t x4780 = 1U;
	volatile uint64_t t76 = UINT64_MAX;

    t76 = ((x4777|x4778)|(x4779<<x4780));

    if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x4989 = INT16_MIN;
	volatile int64_t x4990 = -1LL;
	int16_t x4992 = 15;
	volatile int64_t t77 = 593037869LL;

    t77 = ((x4989|x4990)|(x4991<<x4992));

    if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x5074 = 713LL;
	static uint8_t x5075 = 3U;
	static int16_t x5076 = 7;
	volatile int64_t t78 = -312110412248494LL;

    t78 = ((x5073|x5074)|(x5075<<x5076));

    if (t78 != -9223372036854774839LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x5093 = 65296LL;
	uint8_t x5094 = 119U;
	uint64_t x5095 = 400930475LLU;
	uint8_t x5096 = 1U;
	static uint64_t t79 = 5LLU;

    t79 = ((x5093|x5094)|(x5095<<x5096));

    if (t79 != 801898359LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int8_t x5201 = INT8_MAX;
	uint8_t x5202 = 2U;
	int8_t x5203 = 1;
	volatile int32_t t80 = 6;

    t80 = ((x5201|x5202)|(x5203<<x5204));

    if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x5266 = INT32_MIN;
	int16_t x5267 = INT16_MAX;
	static volatile uint8_t x5268 = 13U;
	volatile int64_t t81 = 5048514LL;

    t81 = ((x5265|x5266)|(x5267<<x5268));

    if (t81 != -5LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x5385 = 122U;
	uint32_t x5386 = 1U;
	static volatile int16_t x5387 = INT16_MAX;
	static uint8_t x5388 = 0U;
	uint32_t t82 = 423088U;

    t82 = ((x5385|x5386)|(x5387<<x5388));

    if (t82 != 32767U) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x5409 = INT32_MAX;
	uint32_t x5410 = UINT32_MAX;
	uint32_t x5411 = 405U;
	volatile uint8_t x5412 = 9U;

    t83 = ((x5409|x5410)|(x5411<<x5412));

    if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x5429 = INT16_MIN;
	uint16_t x5431 = 4298U;
	volatile int8_t x5432 = 10;
	volatile int32_t t84 = 43099680;

    t84 = ((x5429|x5430)|(x5431<<x5432));

    if (t84 != -22528) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x5437 = INT8_MIN;
	int64_t x5438 = -1LL;
	int16_t x5439 = INT16_MAX;
	volatile int8_t x5440 = 3;
	int64_t t85 = -681777982647051926LL;

    t85 = ((x5437|x5438)|(x5439<<x5440));

    if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x5481 = 180305835195053LL;
	static int32_t x5482 = -1;
	static volatile uint32_t x5483 = UINT32_MAX;
	int8_t x5484 = 24;

    t86 = ((x5481|x5482)|(x5483<<x5484));

    if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint32_t x5509 = 21444789U;
	int16_t x5510 = -1;
	uint8_t x5512 = 2U;
	static uint32_t t87 = UINT32_MAX;

    t87 = ((x5509|x5510)|(x5511<<x5512));

    if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x5541 = -1;
	static int64_t x5542 = INT64_MIN;
	int64_t x5543 = 987705354474LL;
	volatile uint16_t x5544 = 22U;

    t88 = ((x5541|x5542)|(x5543<<x5544));

    if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x5589 = -1;
	static int32_t x5590 = 225604888;
	uint32_t x5591 = 629U;
	volatile uint32_t t89 = UINT32_MAX;

    t89 = ((x5589|x5590)|(x5591<<x5592));

    if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x5597 = 3712500LLU;
	int32_t x5598 = INT32_MAX;
	int8_t x5599 = 0;
	uint64_t t90 = 48888586182858LLU;

    t90 = ((x5597|x5598)|(x5599<<x5600));

    if (t90 != 2147483647LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x5621 = -1;
	volatile int32_t x5622 = INT32_MAX;
	static volatile int16_t x5623 = 9;
	volatile int32_t x5624 = 0;
	int32_t t91 = 44502;

    t91 = ((x5621|x5622)|(x5623<<x5624));

    if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x5649 = UINT32_MAX;
	int8_t x5650 = -1;
	int8_t x5651 = INT8_MAX;
	static volatile int8_t x5652 = 1;
	volatile uint32_t t92 = UINT32_MAX;

    t92 = ((x5649|x5650)|(x5651<<x5652));

    if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x5673 = INT32_MIN;
	static uint16_t x5674 = UINT16_MAX;
	uint32_t x5676 = 20U;
	volatile uint32_t t93 = 0U;

    t93 = ((x5673|x5674)|(x5675<<x5676));

    if (t93 != 4293984255U) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x5684 = 2;
	static int64_t t94 = -396092459933691LL;

    t94 = ((x5681|x5682)|(x5683<<x5684));

    if (t94 != 54263807LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x5733 = INT8_MIN;
	uint16_t x5734 = 1495U;
	uint32_t x5735 = 775661693U;
	volatile uint8_t x5736 = 0U;
	static volatile uint32_t t95 = UINT32_MAX;

    t95 = ((x5733|x5734)|(x5735<<x5736));

    if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x5793 = 2U;
	volatile int16_t x5794 = INT16_MAX;
	uint16_t x5795 = 5894U;
	uint8_t x5796 = 1U;
	uint32_t t96 = 4199577U;

    t96 = ((x5793|x5794)|(x5795<<x5796));

    if (t96 != 32767U) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x5885 = 645LL;
	volatile int16_t x5886 = INT16_MIN;
	uint64_t x5887 = 6453618927187LLU;

    t97 = ((x5885|x5886)|(x5887<<x5888));

    if (t97 != 18446744073709519493LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x5977 = 2;
	int64_t x5978 = INT64_MIN;
	static uint16_t x5979 = 2U;
	int32_t x5980 = 1;
	int64_t t98 = 222271640278LL;

    t98 = ((x5977|x5978)|(x5979<<x5980));

    if (t98 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint16_t x6046 = 4U;
	volatile uint64_t x6047 = 1188LLU;
	uint8_t x6048 = 6U;
	static volatile uint64_t t99 = 242499224630779LLU;

    t99 = ((x6045|x6046)|(x6047<<x6048));

    if (t99 != 77647LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x6073 = 827330LLU;
	int8_t x6074 = 22;
	int8_t x6075 = INT8_MAX;
	uint64_t t100 = 598752183005631610LLU;

    t100 = ((x6073|x6074)|(x6075<<x6076));

    if (t100 != 827390LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint8_t x6099 = 6U;
	static int64_t x6100 = 0LL;
	static int64_t t101 = 207453507484278LL;

    t101 = ((x6097|x6098)|(x6099<<x6100));

    if (t101 != -1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x6121 = INT64_MIN;
	uint32_t x6122 = 4U;
	volatile int16_t x6123 = INT16_MAX;
	static volatile uint8_t x6124 = 7U;
	int64_t t102 = -11653LL;

    t102 = ((x6121|x6122)|(x6123<<x6124));

    if (t102 != -9223372036850581628LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x6258 = 126845383;
	volatile uint64_t x6259 = 1950327530718LLU;
	uint64_t t103 = UINT64_MAX;

    t103 = ((x6257|x6258)|(x6259<<x6260));

    if (t103 != UINT64_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x6265 = INT64_MIN;
	volatile int16_t x6266 = INT16_MIN;
	int8_t x6267 = INT8_MAX;
	int16_t x6268 = 1;
	static int64_t t104 = -541104476LL;

    t104 = ((x6265|x6266)|(x6267<<x6268));

    if (t104 != -32514LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile uint64_t x6369 = UINT64_MAX;
	int8_t x6370 = -1;
	uint64_t x6371 = UINT64_MAX;
	uint8_t x6372 = 31U;
	uint64_t t105 = UINT64_MAX;

    t105 = ((x6369|x6370)|(x6371<<x6372));

    if (t105 != UINT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint8_t x6378 = UINT8_MAX;
	static int16_t x6379 = 530;
	uint8_t x6380 = 0U;
	volatile int32_t t106 = 6;

    t106 = ((x6377|x6378)|(x6379<<x6380));

    if (t106 != 1023) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x6477 = INT32_MIN;
	uint64_t x6479 = 37LLU;
	uint16_t x6480 = 2U;
	static volatile uint64_t t107 = 2805749030094085797LLU;

    t107 = ((x6477|x6478)|(x6479<<x6480));

    if (t107 != 18446744073709348318LLU) { NG(); } else { ; }
	
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


    return 0;
}

