
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

volatile int8_t x80 = 0;
static int64_t x167 = INT64_MIN;
static uint8_t x179 = 4U;
uint16_t x243 = 146U;
uint16_t x268 = 7U;
uint64_t x289 = UINT64_MAX;
int16_t x404 = 11;
static uint16_t x449 = 5U;
volatile uint16_t x481 = 221U;
volatile uint32_t x548 = 0U;
volatile int64_t t10 = 835430483446703LL;
static int8_t x733 = -1;
uint32_t x734 = 1530238105U;
int8_t x772 = 7;
static volatile int32_t t15 = 106;
static uint32_t x803 = UINT32_MAX;
static volatile uint64_t x809 = 15433LLU;
int64_t x810 = INT64_MAX;
uint64_t t18 = 252872689LLU;
static uint32_t x922 = 1843U;
uint32_t t19 = 215080U;
uint64_t x977 = 427656391450632LLU;
int64_t x978 = INT64_MIN;
uint16_t x1028 = 6U;
volatile uint64_t t22 = 997LLU;
uint32_t x1061 = UINT32_MAX;
uint8_t x1080 = 3U;
volatile uint64_t t24 = 2836005667920LLU;
volatile int64_t x1130 = INT64_MIN;
int8_t x1275 = INT8_MIN;
uint8_t x1276 = 1U;
static volatile int8_t x1536 = 10;
uint8_t x1728 = 35U;
int8_t x1833 = 6;
uint32_t x1870 = UINT32_MAX;
uint64_t x1974 = 81LLU;
int32_t x1975 = INT32_MAX;
volatile uint64_t x2141 = 51LLU;
static int64_t x2257 = -1519078175LL;
uint8_t x2406 = 125U;
volatile int16_t x2463 = 2223;
volatile int64_t x2498 = -1LL;
int64_t t50 = -33352231007LL;
volatile uint32_t x2626 = 918406408U;
volatile uint64_t t52 = 4921497125LLU;
volatile int64_t x2681 = -1LL;
static volatile int64_t t53 = 232316056986460LL;
volatile uint64_t x2735 = 716LLU;
volatile int32_t t57 = -1;
uint64_t x2993 = 335148196LLU;
static int64_t t59 = 7907090LL;
int8_t x3121 = INT8_MIN;
int64_t x3173 = 58482LL;
volatile int32_t x3230 = -1;
int16_t x3232 = 8;
static uint64_t x3263 = UINT64_MAX;
static uint8_t x3264 = 0U;
volatile uint64_t t63 = UINT64_MAX;
int8_t x3328 = 2;
volatile uint32_t x3505 = UINT32_MAX;
volatile uint32_t t67 = 10U;
int64_t x3669 = -1LL;
uint8_t x3764 = 7U;
volatile int64_t t70 = -1490485493647121973LL;
static uint64_t x3773 = 7076887372788LLU;
int8_t x3775 = INT8_MIN;
int8_t x3796 = 7;
volatile int32_t t72 = -2641883;
static volatile int16_t x3869 = 10;
uint32_t x4010 = 197554844U;
uint64_t x4011 = 1329485516912931LLU;
int64_t x4029 = INT64_MAX;
int64_t x4030 = INT64_MIN;
int8_t x4032 = 1;
static volatile int64_t t78 = -1677570282LL;
uint64_t t79 = 7960LLU;
static int32_t t80 = 18560;
static int8_t x4194 = 11;
uint8_t x4216 = 14U;
volatile int64_t t83 = -2589223137691626989LL;
volatile uint64_t x4237 = 229LLU;
volatile int8_t x4240 = 0;
uint8_t x4296 = 0U;
int32_t x4329 = INT32_MAX;
uint64_t t88 = 2603790LLU;
static int64_t x4397 = 1149071288966LL;
int16_t x4411 = INT16_MAX;
uint16_t x4412 = 0U;
volatile int8_t x4449 = INT8_MIN;
int32_t t91 = 160856151;
uint32_t x4577 = 17092U;
int8_t x4704 = 1;
uint64_t t95 = 608LLU;
uint64_t x4739 = 112135765549288LLU;
int64_t x4740 = 0LL;
static uint64_t t96 = 372739462LLU;
int16_t x4766 = 758;
int8_t x4768 = 0;
static volatile uint32_t x4775 = 2223U;
uint8_t x4796 = 1U;
uint16_t x4859 = UINT16_MAX;
uint8_t x4968 = 16U;
int8_t x5063 = 2;
volatile int8_t x5121 = 28;
volatile uint64_t x5218 = 772LLU;
volatile uint8_t x5302 = 7U;
volatile int8_t x5304 = 9;
int16_t x5313 = 125;
volatile int16_t x5315 = 1;
int16_t x5341 = 1771;
volatile uint64_t t109 = 9109607057088229LLU;
int8_t x5407 = -1;
int16_t x5813 = INT16_MIN;
uint16_t x5816 = 3U;
static uint64_t x5886 = 1LLU;
volatile int8_t x5909 = -1;
volatile uint8_t x5912 = 3U;
volatile uint8_t x6004 = 14U;
uint64_t x6106 = UINT64_MAX;
static uint64_t x6137 = 11749217367607249LLU;
int64_t x6139 = 76391768720923025LL;
volatile int16_t x6158 = INT16_MIN;
uint8_t x6160 = 7U;
int8_t x6277 = INT8_MIN;
int16_t x6278 = INT16_MIN;
uint64_t x6401 = 5184260568523655775LLU;
int16_t x6477 = -1;
volatile uint8_t x6483 = 11U;
int16_t x6581 = 0;
volatile int32_t t128 = 1987967;
static int16_t x6750 = INT16_MIN;
int64_t x6810 = -1LL;
volatile uint8_t x6812 = 0U;
volatile int16_t x6890 = INT16_MAX;
static volatile uint64_t t138 = 234719LLU;
volatile uint64_t x6999 = UINT64_MAX;
volatile int8_t x7325 = INT8_MIN;
volatile uint64_t x7350 = 206390916469095LLU;
uint64_t x7377 = 42255161042415901LLU;
volatile uint16_t x7378 = 3U;
int16_t x7455 = -1;
uint32_t x7515 = 127625U;
int8_t x7568 = 3;
int64_t x7591 = INT64_MAX;
int16_t x7598 = INT16_MIN;
volatile int64_t x7599 = 2LL;
static volatile int16_t x7645 = INT16_MIN;
uint32_t x7646 = 650057786U;
uint32_t t155 = 60U;
volatile int16_t x7752 = 0;
static volatile int64_t t156 = -1LL;
int32_t x7756 = 12;
volatile uint64_t t158 = 479842545194171LLU;
int32_t x7937 = 3;
static uint64_t x8010 = 245806258898285051LLU;
volatile uint64_t x8090 = 242264263613700LLU;
int8_t x8091 = 7;
static uint8_t x8092 = 1U;
static int32_t x8124 = 0;
volatile int32_t x8349 = -111;
uint64_t x8386 = UINT64_MAX;
uint32_t x8407 = 507817U;
uint16_t x8408 = 1U;
volatile int64_t t170 = -46LL;
static int32_t x8530 = 141440;
uint32_t t171 = 449524U;
int64_t x8557 = -1LL;
volatile uint8_t x8559 = UINT8_MAX;
int16_t x8587 = INT16_MAX;
uint8_t x8588 = 11U;
static uint32_t x8637 = 213U;
uint8_t x8640 = 4U;
uint8_t x8726 = UINT8_MAX;
uint32_t x8996 = 24U;
uint64_t x9028 = 4LLU;
static uint8_t x9148 = 28U;
static int64_t x9202 = -1135LL;
uint16_t x9230 = 443U;
static int64_t x9327 = 10494364952LL;
int8_t x9328 = 0;
uint8_t x9377 = UINT8_MAX;
uint8_t x9408 = 5U;
uint64_t t186 = 11675LLU;
int64_t t188 = 8601LL;
uint32_t x9501 = 845298011U;
volatile int32_t x9503 = INT32_MIN;
volatile uint16_t x9504 = 20U;
static volatile uint64_t t190 = 84898664392LLU;
volatile uint8_t x9820 = 7U;
int16_t x9895 = -167;
volatile int32_t t195 = -1;
static volatile uint64_t x10161 = 3681897633801LLU;
int32_t x10162 = INT32_MIN;
int16_t x10250 = INT16_MAX;
int8_t x10297 = -12;
int64_t x10298 = INT64_MIN;


void f0(void) {
    	int8_t x77 = -1;
	int8_t x78 = -1;
	int32_t x79 = 11818;
	int32_t t0 = 308;

    t0 = (((x77/x78)^x79)<<x80);

    if (t0 != 11819) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x165 = -258257004;
	uint64_t x166 = UINT64_MAX;
	static int8_t x168 = 0;
	uint64_t t1 = 1LLU;

    t1 = (((x165/x166)^x167)<<x168);

    if (t1 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x177 = INT8_MIN;
	static uint16_t x178 = 246U;
	int16_t x180 = 1;
	int32_t t2 = 203007765;

    t2 = (((x177/x178)^x179)<<x180);

    if (t2 != 8) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x241 = -2254;
	static int64_t x242 = INT64_MIN;
	static uint64_t x244 = 5LLU;
	static int64_t t3 = 6868633894LL;

    t3 = (((x241/x242)^x243)<<x244);

    if (t3 != 4672LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x265 = 194LLU;
	int32_t x266 = INT32_MAX;
	int8_t x267 = 6;
	static volatile uint64_t t4 = 83745629112LLU;

    t4 = (((x265/x266)^x267)<<x268);

    if (t4 != 768LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x290 = 6962612LL;
	uint16_t x291 = 196U;
	volatile uint32_t x292 = 1U;
	volatile uint64_t t5 = 105LLU;

    t5 = (((x289/x290)^x291)<<x292);

    if (t5 != 5298799954164LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x397 = -1;
	volatile int16_t x398 = INT16_MIN;
	static uint64_t x399 = UINT64_MAX;
	static int8_t x400 = 1;
	static uint64_t t6 = 33414485LLU;

    t6 = (((x397/x398)^x399)<<x400);

    if (t6 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x401 = -1LL;
	static int32_t x402 = 35;
	uint16_t x403 = 2072U;
	int64_t t7 = 1338131875128810LL;

    t7 = (((x401/x402)^x403)<<x404);

    if (t7 != 4243456LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x450 = 26975953593024720LLU;
	int8_t x451 = INT8_MAX;
	uint8_t x452 = 0U;
	volatile uint64_t t8 = 3711130015LLU;

    t8 = (((x449/x450)^x451)<<x452);

    if (t8 != 127LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x482 = 718469578U;
	uint16_t x483 = 0U;
	static int8_t x484 = 2;
	static uint32_t t9 = 1164434U;

    t9 = (((x481/x482)^x483)<<x484);

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x545 = -1246602;
	static uint8_t x546 = 33U;
	int64_t x547 = INT64_MIN;

    t10 = (((x545/x546)^x547)<<x548);

    if (t10 != 9223372036854738033LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x585 = -1;
	int32_t x586 = INT32_MIN;
	int32_t x587 = INT32_MAX;
	uint16_t x588 = 0U;
	int32_t t11 = INT32_MAX;

    t11 = (((x585/x586)^x587)<<x588);

    if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x605 = 935LLU;
	int64_t x606 = INT64_MIN;
	int32_t x607 = INT32_MIN;
	uint8_t x608 = 47U;
	uint64_t t12 = 1516254685565LLU;

    t12 = (((x605/x606)^x607)<<x608);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x735 = INT32_MIN;
	uint32_t x736 = 23U;
	volatile uint32_t t13 = 1131U;

    t13 = (((x733/x734)^x735)<<x736);

    if (t13 != 16777216U) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x769 = INT32_MIN;
	static int32_t x770 = INT32_MIN;
	static uint32_t x771 = 12996207U;
	uint32_t t14 = 237U;

    t14 = (((x769/x770)^x771)<<x772);

    if (t14 != 1663514368U) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x777 = INT32_MAX;
	static volatile int32_t x778 = INT32_MAX;
	int16_t x779 = 257;
	uint16_t x780 = 1U;

    t15 = (((x777/x778)^x779)<<x780);

    if (t15 != 512) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x801 = 7763655266LLU;
	volatile int64_t x802 = -1LL;
	uint8_t x804 = 0U;
	uint64_t t16 = 84113815258570621LLU;

    t16 = (((x801/x802)^x803)<<x804);

    if (t16 != 4294967295LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x811 = -11163777391LL;
	int8_t x812 = 21;
	volatile uint64_t t17 = 8194LLU;

    t17 = (((x809/x810)^x811)<<x812);

    if (t17 != 18423331935626461184LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x841 = UINT64_MAX;
	uint16_t x842 = UINT16_MAX;
	int8_t x843 = 0;
	uint16_t x844 = 11U;

    t18 = (((x841/x842)^x843)<<x844);

    if (t18 != 576469548530665472LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x921 = INT16_MIN;
	int32_t x923 = INT32_MIN;
	uint8_t x924 = 4U;

    t19 = (((x921/x922)^x923)<<x924);

    if (t19 != 37286448U) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x979 = INT64_MIN;
	uint64_t x980 = 19LLU;
	volatile uint64_t t20 = 416579LLU;

    t20 = (((x977/x978)^x979)<<x980);

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x1013 = 12152U;
	uint16_t x1014 = 7298U;
	static volatile int8_t x1015 = -1;
	static volatile uint8_t x1016 = 20U;
	volatile uint32_t t21 = 8342U;

    t21 = (((x1013/x1014)^x1015)<<x1016);

    if (t21 != 4292870144U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x1025 = 21798217LLU;
	static volatile int32_t x1026 = 6360234;
	static int32_t x1027 = INT32_MIN;

    t22 = (((x1025/x1026)^x1027)<<x1028);

    if (t22 != 18446743936270598336LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x1062 = INT16_MIN;
	int8_t x1063 = 61;
	static int8_t x1064 = 0;
	uint32_t t23 = 4108775U;

    t23 = (((x1061/x1062)^x1063)<<x1064);

    if (t23 != 60U) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x1077 = -1;
	uint64_t x1078 = 506442270352LLU;
	int8_t x1079 = INT8_MIN;

    t24 = (((x1077/x1078)^x1079)<<x1080);

    if (t24 != 18446744073418159000LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x1129 = -1;
	volatile uint16_t x1131 = UINT16_MAX;
	int32_t x1132 = 10;
	volatile int64_t t25 = 1LL;

    t25 = (((x1129/x1130)^x1131)<<x1132);

    if (t25 != 67107840LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x1137 = 2U;
	uint64_t x1138 = 1047753LLU;
	int32_t x1139 = -1;
	uint32_t x1140 = 0U;
	uint64_t t26 = UINT64_MAX;

    t26 = (((x1137/x1138)^x1139)<<x1140);

    if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x1141 = INT64_MIN;
	int8_t x1142 = 1;
	int16_t x1143 = INT16_MIN;
	static uint8_t x1144 = 0U;
	static int64_t t27 = -3610660922806LL;

    t27 = (((x1141/x1142)^x1143)<<x1144);

    if (t27 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int8_t x1201 = -1;
	volatile uint64_t x1202 = UINT64_MAX;
	uint16_t x1203 = 7449U;
	static uint8_t x1204 = 4U;
	uint64_t t28 = 1753764298239873275LLU;

    t28 = (((x1201/x1202)^x1203)<<x1204);

    if (t28 != 119168LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x1209 = 188773329206LLU;
	uint16_t x1210 = 6712U;
	static int16_t x1211 = INT16_MIN;
	static uint8_t x1212 = 2U;
	static uint64_t t29 = 4107928305760LLU;

    t29 = (((x1209/x1210)^x1211)<<x1212);

    if (t29 != 18446744073596999996LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x1273 = 4774425U;
	static int16_t x1274 = 22;
	volatile uint32_t t30 = 33168812U;

    t30 = (((x1273/x1274)^x1275)<<x1276);

    if (t30 != 4294533238U) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x1285 = INT8_MAX;
	int8_t x1286 = -3;
	int64_t x1287 = -1LL;
	volatile int8_t x1288 = 4;
	volatile int64_t t31 = 30297LL;

    t31 = (((x1285/x1286)^x1287)<<x1288);

    if (t31 != 656LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x1533 = 4U;
	uint64_t x1534 = 6LLU;
	int64_t x1535 = 50311428593LL;
	uint64_t t32 = 3071023418794LLU;

    t32 = (((x1533/x1534)^x1535)<<x1536);

    if (t32 != 51518902879232LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x1593 = -1;
	int32_t x1594 = -51;
	int32_t x1595 = 0;
	uint16_t x1596 = 1U;
	static int32_t t33 = 5054719;

    t33 = (((x1593/x1594)^x1595)<<x1596);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x1605 = 1126194LLU;
	int64_t x1606 = -1LL;
	static uint32_t x1607 = 2891578U;
	int8_t x1608 = 14;
	volatile uint64_t t34 = 1213562886LLU;

    t34 = (((x1605/x1606)^x1607)<<x1608);

    if (t34 != 47375613952LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x1725 = INT64_MIN;
	int64_t x1726 = -2537971481096509LL;
	volatile uint64_t x1727 = 56466848LLU;
	volatile uint64_t t35 = 12903348LLU;

    t35 = (((x1725/x1726)^x1727)<<x1728);

    if (t35 != 1940097681779064832LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x1785 = INT64_MIN;
	int64_t x1786 = INT64_MIN;
	uint64_t x1787 = UINT64_MAX;
	static int8_t x1788 = 0;
	volatile uint64_t t36 = 12408454337786LLU;

    t36 = (((x1785/x1786)^x1787)<<x1788);

    if (t36 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x1834 = INT16_MAX;
	volatile uint16_t x1835 = 23U;
	uint16_t x1836 = 1U;
	int32_t t37 = -47250;

    t37 = (((x1833/x1834)^x1835)<<x1836);

    if (t37 != 46) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x1841 = UINT64_MAX;
	static uint16_t x1842 = UINT16_MAX;
	int64_t x1843 = INT64_MIN;
	int8_t x1844 = 5;
	uint64_t t38 = 8409295648333264LLU;

    t38 = (((x1841/x1842)^x1843)<<x1844);

    if (t38 != 9007336695791648LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x1869 = INT64_MIN;
	int64_t x1871 = -2492021717099609LL;
	int32_t x1872 = 7;
	static int64_t t39 = -99880709239532LL;

    t39 = (((x1869/x1870)^x1871)<<x1872);

    if (t39 != 318979032245719936LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x1973 = UINT64_MAX;
	uint8_t x1976 = 4U;
	static volatile uint64_t t40 = 185886714LLU;

    t40 = (((x1973/x1974)^x1975)<<x1976);

    if (t40 != 3643801318447660848LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x2013 = INT32_MAX;
	int8_t x2014 = -1;
	uint64_t x2015 = 91275619LLU;
	uint64_t x2016 = 21LLU;
	volatile uint64_t t41 = 542334442901696LLU;

    t41 = (((x2013/x2014)^x2015)<<x2016);

    if (t41 != 18442431892927021056LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int32_t x2137 = INT32_MIN;
	int64_t x2138 = -1LL;
	volatile uint64_t x2139 = 15664750898LLU;
	int16_t x2140 = 47;
	volatile uint64_t t42 = 12441525055398275LLU;

    t42 = (((x2137/x2138)^x2139)<<x2140);

    if (t42 != 10419359212898353152LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x2142 = INT8_MAX;
	static int64_t x2143 = -1027523472LL;
	uint8_t x2144 = 36U;
	volatile uint64_t t43 = 1LLU;

    t43 = (((x2141/x2142)^x2143)<<x2144);

    if (t43 != 3176100965040259072LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x2225 = 182LLU;
	static volatile int8_t x2226 = 1;
	int32_t x2227 = INT32_MIN;
	volatile int32_t x2228 = 29;
	volatile uint64_t t44 = 36206LLU;

    t44 = (((x2225/x2226)^x2227)<<x2228);

    if (t44 != 17293822666813210624LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x2258 = -653076949912661LL;
	int64_t x2259 = 469255LL;
	uint16_t x2260 = 5U;
	volatile int64_t t45 = 13308712LL;

    t45 = (((x2257/x2258)^x2259)<<x2260);

    if (t45 != 15016160LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x2377 = -1LL;
	int32_t x2378 = -1;
	int16_t x2379 = INT16_MAX;
	static uint16_t x2380 = 28U;
	volatile int64_t t46 = 844780809LL;

    t46 = (((x2377/x2378)^x2379)<<x2380);

    if (t46 != 8795556151296LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile uint16_t x2405 = 3U;
	static uint64_t x2407 = UINT64_MAX;
	uint32_t x2408 = 4U;
	volatile uint64_t t47 = 132982112LLU;

    t47 = (((x2405/x2406)^x2407)<<x2408);

    if (t47 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x2461 = 4U;
	int16_t x2462 = INT16_MAX;
	static uint64_t x2464 = 0LLU;
	int32_t t48 = -52765123;

    t48 = (((x2461/x2462)^x2463)<<x2464);

    if (t48 != 2223) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x2497 = -3344;
	static uint64_t x2499 = 24492578363LLU;
	uint8_t x2500 = 40U;
	volatile uint64_t t49 = 1060LLU;

    t49 = (((x2497/x2498)^x2499)<<x2500);

    if (t49 != 16076490573829111808LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x2505 = -178;
	static int64_t x2506 = INT64_MIN;
	uint8_t x2507 = 29U;
	uint8_t x2508 = 1U;

    t50 = (((x2505/x2506)^x2507)<<x2508);

    if (t50 != 58LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x2625 = 0;
	int32_t x2627 = INT32_MIN;
	int8_t x2628 = 1;
	volatile uint32_t t51 = 61U;

    t51 = (((x2625/x2626)^x2627)<<x2628);

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x2629 = -2180;
	uint64_t x2630 = 288641799510LLU;
	int64_t x2631 = -1LL;
	int16_t x2632 = 7;

    t52 = (((x2629/x2630)^x2631)<<x2632);

    if (t52 != 18446744065529228288LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x2682 = INT16_MIN;
	int64_t x2683 = 417094LL;
	uint8_t x2684 = 34U;

    t53 = (((x2681/x2682)^x2683)<<x2684);

    if (t53 != 7165620357431296LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x2689 = 0U;
	static int16_t x2690 = -1;
	int64_t x2691 = 767859LL;
	uint32_t x2692 = 0U;
	volatile int64_t t54 = 1414LL;

    t54 = (((x2689/x2690)^x2691)<<x2692);

    if (t54 != 767859LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x2709 = UINT64_MAX;
	volatile uint64_t x2710 = 3196LLU;
	uint64_t x2711 = 1135174661034715564LLU;
	int8_t x2712 = 0;
	uint64_t t55 = 1374689027508LLU;

    t55 = (((x2709/x2710)^x2711)<<x2712);

    if (t55 != 1140662121303669384LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x2733 = INT32_MAX;
	static int8_t x2734 = INT8_MIN;
	uint16_t x2736 = 0U;
	uint64_t t56 = 126830568705494371LLU;

    t56 = (((x2733/x2734)^x2735)<<x2736);

    if (t56 != 18446744073692775117LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x2741 = INT8_MAX;
	volatile int8_t x2742 = 1;
	static int8_t x2743 = INT8_MAX;
	uint8_t x2744 = 12U;

    t57 = (((x2741/x2742)^x2743)<<x2744);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x2994 = 8514240U;
	int32_t x2995 = INT32_MAX;
	static uint8_t x2996 = 56U;
	uint64_t t58 = 40LLU;

    t58 = (((x2993/x2994)^x2995)<<x2996);

    if (t58 != 15564440312192434176LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x2997 = INT64_MAX;
	int16_t x2998 = INT16_MIN;
	int8_t x2999 = INT8_MIN;
	int32_t x3000 = 13;

    t59 = (((x2997/x2998)^x2999)<<x3000);

    if (t59 != 2305843009212653568LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x3122 = 220473U;
	volatile uint64_t x3123 = UINT64_MAX;
	volatile int32_t x3124 = 2;
	static uint64_t t60 = 100707993582LLU;

    t60 = (((x3121/x3122)^x3123)<<x3124);

    if (t60 != 18446744073709473692LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x3174 = -1;
	volatile int8_t x3175 = INT8_MIN;
	static uint8_t x3176 = 9U;
	int64_t t61 = -112085LL;

    t61 = (((x3173/x3174)^x3175)<<x3176);

    if (t61 != 29891584LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x3229 = 102501360U;
	int32_t x3231 = INT32_MIN;
	uint32_t t62 = 3U;

    t62 = (((x3229/x3230)^x3231)<<x3232);

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x3261 = 1U;
	static int8_t x3262 = 3;

    t63 = (((x3261/x3262)^x3263)<<x3264);

    if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x3297 = -133;
	uint32_t x3298 = 105730180U;
	int8_t x3299 = -1;
	static uint8_t x3300 = 10U;
	uint32_t t64 = 13320U;

    t64 = (((x3297/x3298)^x3299)<<x3300);

    if (t64 != 4294925312U) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x3325 = -828499481;
	int16_t x3326 = INT16_MIN;
	static uint32_t x3327 = 468U;
	volatile uint32_t t65 = 110685120U;

    t65 = (((x3325/x3326)^x3327)<<x3328);

    if (t65 != 101468U) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x3506 = -1;
	volatile uint16_t x3507 = 1U;
	static volatile uint32_t x3508 = 0U;
	static volatile uint32_t t66 = 8015626U;

    t66 = (((x3505/x3506)^x3507)<<x3508);

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x3549 = 130854137U;
	int32_t x3550 = INT32_MIN;
	uint16_t x3551 = UINT16_MAX;
	int16_t x3552 = 8;

    t67 = (((x3549/x3550)^x3551)<<x3552);

    if (t67 != 16776960U) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x3657 = 1254369229939660756LLU;
	static int16_t x3658 = 6949;
	uint16_t x3659 = UINT16_MAX;
	uint16_t x3660 = 0U;
	volatile uint64_t t68 = 132LLU;

    t68 = (((x3657/x3658)^x3659)<<x3660);

    if (t68 != 180510754035254LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x3670 = 105LL;
	uint8_t x3671 = 71U;
	int16_t x3672 = 1;
	volatile int64_t t69 = -4052LL;

    t69 = (((x3669/x3670)^x3671)<<x3672);

    if (t69 != 142LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x3761 = INT8_MAX;
	volatile int64_t x3762 = INT64_MAX;
	uint8_t x3763 = 121U;

    t70 = (((x3761/x3762)^x3763)<<x3764);

    if (t70 != 15488LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x3774 = UINT8_MAX;
	uint32_t x3776 = 27U;
	uint64_t t71 = 25654LLU;

    t71 = (((x3773/x3774)^x3775)<<x3776);

    if (t71 != 14721866639263924224LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x3793 = INT8_MIN;
	static uint16_t x3794 = 244U;
	int16_t x3795 = 437;

    t72 = (((x3793/x3794)^x3795)<<x3796);

    if (t72 != 55936) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x3813 = 1387671902744LLU;
	static volatile int64_t x3814 = 1738661901LL;
	static int8_t x3815 = -1;
	uint16_t x3816 = 7U;
	volatile uint64_t t73 = 1332705LLU;

    t73 = (((x3813/x3814)^x3815)<<x3816);

    if (t73 != 18446744073709449344LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x3829 = 117512335;
	int8_t x3830 = INT8_MIN;
	volatile int32_t x3831 = -52;
	int8_t x3832 = 1;
	int32_t t74 = 1934828;

    t74 = (((x3829/x3830)^x3831)<<x3832);

    if (t74 != 1836038) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x3870 = 15967LLU;
	int16_t x3871 = -1;
	uint8_t x3872 = 18U;
	volatile uint64_t t75 = 40135631359875LLU;

    t75 = (((x3869/x3870)^x3871)<<x3872);

    if (t75 != 18446744073709289472LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x3917 = 2U;
	int16_t x3918 = 1;
	static int16_t x3919 = INT16_MAX;
	int8_t x3920 = 1;
	static int32_t t76 = 7;

    t76 = (((x3917/x3918)^x3919)<<x3920);

    if (t76 != 65530) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x4009 = INT32_MAX;
	int8_t x4012 = 0;
	uint64_t t77 = 823631540598102332LLU;

    t77 = (((x4009/x4010)^x4011)<<x4012);

    if (t77 != 1329485516912937LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x4031 = INT16_MAX;

    t78 = (((x4029/x4030)^x4031)<<x4032);

    if (t78 != 65534LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int32_t x4049 = INT32_MAX;
	static uint64_t x4050 = 64361594081749006LLU;
	int16_t x4051 = INT16_MAX;
	static uint16_t x4052 = 6U;

    t79 = (((x4049/x4050)^x4051)<<x4052);

    if (t79 != 2097088LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x4069 = 79U;
	int32_t x4070 = -1;
	static int16_t x4071 = -1;
	uint8_t x4072 = 8U;

    t80 = (((x4069/x4070)^x4071)<<x4072);

    if (t80 != 19968) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x4137 = -2445;
	uint8_t x4138 = 26U;
	int64_t x4139 = INT64_MIN;
	uint8_t x4140 = 0U;
	static volatile int64_t t81 = -36LL;

    t81 = (((x4137/x4138)^x4139)<<x4140);

    if (t81 != 9223372036854775714LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x4193 = 685003U;
	static uint16_t x4195 = UINT16_MAX;
	int8_t x4196 = 1;
	volatile uint32_t t82 = 12588U;

    t82 = (((x4193/x4194)^x4195)<<x4196);

    if (t82 != 6524U) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x4213 = 3U;
	int64_t x4214 = INT64_MIN;
	uint16_t x4215 = 26U;

    t83 = (((x4213/x4214)^x4215)<<x4216);

    if (t83 != 425984LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x4238 = INT8_MIN;
	int64_t x4239 = INT64_MIN;
	volatile uint64_t t84 = 14LLU;

    t84 = (((x4237/x4238)^x4239)<<x4240);

    if (t84 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint32_t x4261 = 128124U;
	int8_t x4262 = INT8_MIN;
	uint8_t x4263 = UINT8_MAX;
	uint16_t x4264 = 3U;
	uint32_t t85 = 30861861U;

    t85 = (((x4261/x4262)^x4263)<<x4264);

    if (t85 != 2040U) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint32_t x4293 = 27793U;
	int32_t x4294 = -1;
	static int16_t x4295 = INT16_MIN;
	uint32_t t86 = 7656931U;

    t86 = (((x4293/x4294)^x4295)<<x4296);

    if (t86 != 4294934528U) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x4330 = INT16_MAX;
	uint64_t x4331 = UINT64_MAX;
	uint8_t x4332 = 63U;
	uint64_t t87 = 37LLU;

    t87 = (((x4329/x4330)^x4331)<<x4332);

    if (t87 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x4333 = INT8_MAX;
	static int16_t x4334 = -1;
	uint64_t x4335 = UINT64_MAX;
	int8_t x4336 = 1;

    t88 = (((x4333/x4334)^x4335)<<x4336);

    if (t88 != 252LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x4398 = 1400208LLU;
	int64_t x4399 = INT64_MIN;
	uint16_t x4400 = 2U;
	static volatile uint64_t t89 = 4069LLU;

    t89 = (((x4397/x4398)^x4399)<<x4400);

    if (t89 != 3282572LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x4409 = INT8_MIN;
	static int16_t x4410 = -4;
	volatile int32_t t90 = -3686;

    t90 = (((x4409/x4410)^x4411)<<x4412);

    if (t90 != 32735) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x4450 = INT8_MIN;
	volatile uint16_t x4451 = UINT16_MAX;
	uint8_t x4452 = 3U;

    t91 = (((x4449/x4450)^x4451)<<x4452);

    if (t91 != 524272) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x4485 = INT32_MIN;
	uint32_t x4486 = 168630915U;
	volatile int32_t x4487 = -94277190;
	uint16_t x4488 = 1U;
	volatile uint32_t t92 = 122087U;

    t92 = (((x4485/x4486)^x4487)<<x4488);

    if (t92 != 4106412908U) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x4578 = INT32_MIN;
	int16_t x4579 = INT16_MAX;
	static uint16_t x4580 = 0U;
	static uint32_t t93 = 54415U;

    t93 = (((x4577/x4578)^x4579)<<x4580);

    if (t93 != 32767U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x4701 = 59U;
	static int64_t x4702 = -15522676LL;
	uint8_t x4703 = 96U;
	volatile int64_t t94 = -159051428985LL;

    t94 = (((x4701/x4702)^x4703)<<x4704);

    if (t94 != 192LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x4721 = 38544217700996462LLU;
	static int64_t x4722 = INT64_MIN;
	int8_t x4723 = INT8_MAX;
	static uint32_t x4724 = 13U;

    t95 = (((x4721/x4722)^x4723)<<x4724);

    if (t95 != 1040384LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x4737 = 4;
	volatile int16_t x4738 = INT16_MAX;

    t96 = (((x4737/x4738)^x4739)<<x4740);

    if (t96 != 112135765549288LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x4765 = INT32_MIN;
	int8_t x4767 = -3;
	volatile int32_t t97 = 87717;

    t97 = (((x4765/x4766)^x4767)<<x4768);

    if (t97 != 2833088) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x4773 = 642814767939LLU;
	volatile uint64_t x4774 = UINT64_MAX;
	uint8_t x4776 = 4U;
	uint64_t t98 = 1658LLU;

    t98 = (((x4773/x4774)^x4775)<<x4776);

    if (t98 != 35568LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x4793 = 3242764U;
	uint64_t x4794 = UINT64_MAX;
	static uint8_t x4795 = 54U;
	uint64_t t99 = 6201LLU;

    t99 = (((x4793/x4794)^x4795)<<x4796);

    if (t99 != 108LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x4849 = -28;
	uint32_t x4850 = 3U;
	int8_t x4851 = INT8_MIN;
	int16_t x4852 = 1;
	volatile uint32_t t100 = 265843825U;

    t100 = (((x4849/x4850)^x4851)<<x4852);

    if (t100 != 1431655832U) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x4853 = INT8_MAX;
	uint32_t x4854 = 13002205U;
	volatile int16_t x4855 = -607;
	uint8_t x4856 = 11U;
	uint32_t t101 = 7866U;

    t101 = (((x4853/x4854)^x4855)<<x4856);

    if (t101 != 4293724160U) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x4857 = INT16_MIN;
	static int64_t x4858 = INT64_MIN;
	uint64_t x4860 = 3LLU;
	int64_t t102 = 165266692LL;

    t102 = (((x4857/x4858)^x4859)<<x4860);

    if (t102 != 524280LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x4965 = 88922868;
	int64_t x4966 = 29LL;
	int8_t x4967 = 11;
	static volatile int64_t t103 = 276404348LL;

    t103 = (((x4965/x4966)^x4967)<<x4968);

    if (t103 != 200953954304LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x5061 = -1;
	int8_t x5062 = -1;
	uint16_t x5064 = 4U;
	volatile int32_t t104 = 0;

    t104 = (((x5061/x5062)^x5063)<<x5064);

    if (t104 != 48) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x5122 = UINT16_MAX;
	int32_t x5123 = 78;
	uint64_t x5124 = 17LLU;
	int32_t t105 = -149180200;

    t105 = (((x5121/x5122)^x5123)<<x5124);

    if (t105 != 10223616) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x5217 = INT32_MAX;
	int8_t x5219 = -2;
	static uint16_t x5220 = 0U;
	volatile uint64_t t106 = 81725713139LLU;

    t106 = (((x5217/x5218)^x5219)<<x5220);

    if (t106 != 18446744073706769900LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int8_t x5301 = INT8_MAX;
	int16_t x5303 = 0;
	volatile int32_t t107 = -3;

    t107 = (((x5301/x5302)^x5303)<<x5304);

    if (t107 != 9216) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x5314 = -632;
	uint16_t x5316 = 1U;
	static int32_t t108 = -859111418;

    t108 = (((x5313/x5314)^x5315)<<x5316);

    if (t108 != 2) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x5342 = UINT64_MAX;
	uint64_t x5343 = 685083336LLU;
	int8_t x5344 = 7;

    t109 = (((x5341/x5342)^x5343)<<x5344);

    if (t109 != 87690667008LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x5385 = INT8_MIN;
	static int16_t x5386 = INT16_MIN;
	uint16_t x5387 = 0U;
	static uint8_t x5388 = 1U;
	int32_t t110 = 37;

    t110 = (((x5385/x5386)^x5387)<<x5388);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x5405 = UINT32_MAX;
	int16_t x5406 = 57;
	static int32_t x5408 = 7;
	volatile uint32_t t111 = 667U;

    t111 = (((x5405/x5406)^x5407)<<x5408);

    if (t111 != 3240062976U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x5765 = 244878447518701LLU;
	uint32_t x5766 = UINT32_MAX;
	uint32_t x5767 = 18726U;
	int64_t x5768 = 39LL;
	uint64_t t112 = 30LLU;

    t112 = (((x5765/x5766)^x5767)<<x5768);

    if (t112 != 21331075334668288LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x5814 = 41U;
	static uint64_t x5815 = 10365724373LLU;
	volatile uint64_t t113 = 48LLU;

    t113 = (((x5813/x5814)^x5815)<<x5816);

    if (t113 != 18446743990783758752LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x5885 = -1;
	int16_t x5887 = 155;
	int16_t x5888 = 1;
	static volatile uint64_t t114 = 3692471276LLU;

    t114 = (((x5885/x5886)^x5887)<<x5888);

    if (t114 != 18446744073709551304LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x5910 = INT16_MAX;
	int8_t x5911 = INT8_MAX;
	int32_t t115 = -462393;

    t115 = (((x5909/x5910)^x5911)<<x5912);

    if (t115 != 1016) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint64_t x5973 = 595739088046838LLU;
	volatile int64_t x5974 = 4909LL;
	uint16_t x5975 = 28U;
	int32_t x5976 = 15;
	static volatile uint64_t t116 = 8189534LLU;

    t116 = (((x5973/x5974)^x5975)<<x5976);

    if (t116 != 3976609990115328LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x6001 = 10449;
	uint8_t x6002 = UINT8_MAX;
	volatile uint8_t x6003 = 0U;
	static volatile int32_t t117 = 3592;

    t117 = (((x6001/x6002)^x6003)<<x6004);

    if (t117 != 655360) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x6093 = 1544234778U;
	uint64_t x6094 = 3402549347220622LLU;
	volatile int8_t x6095 = -1;
	int8_t x6096 = 1;
	uint64_t t118 = 45068556175LLU;

    t118 = (((x6093/x6094)^x6095)<<x6096);

    if (t118 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x6105 = -67905456842299110LL;
	static int64_t x6107 = INT64_MIN;
	int8_t x6108 = 2;
	uint64_t t119 = 19625LLU;

    t119 = (((x6105/x6106)^x6107)<<x6108);

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x6138 = INT8_MIN;
	uint8_t x6140 = 3U;
	uint64_t t120 = 1018387239207873832LLU;

    t120 = (((x6137/x6138)^x6139)<<x6140);

    if (t120 != 611134149767384200LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x6157 = 50U;
	uint8_t x6159 = 0U;
	volatile int32_t t121 = 793;

    t121 = (((x6157/x6158)^x6159)<<x6160);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x6161 = INT8_MIN;
	int64_t x6162 = 7296LL;
	uint16_t x6163 = UINT16_MAX;
	int16_t x6164 = 1;
	int64_t t122 = -35141877LL;

    t122 = (((x6161/x6162)^x6163)<<x6164);

    if (t122 != 131070LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x6177 = INT64_MIN;
	int64_t x6178 = INT64_MIN;
	int8_t x6179 = 14;
	static uint16_t x6180 = 3U;
	volatile int64_t t123 = -1976675991999294382LL;

    t123 = (((x6177/x6178)^x6179)<<x6180);

    if (t123 != 120LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x6279 = INT32_MAX;
	volatile int16_t x6280 = 0;
	volatile int32_t t124 = INT32_MAX;

    t124 = (((x6277/x6278)^x6279)<<x6280);

    if (t124 != INT32_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint16_t x6402 = UINT16_MAX;
	uint64_t x6403 = UINT64_MAX;
	uint16_t x6404 = 24U;
	uint64_t t125 = 0LLU;

    t125 = (((x6401/x6402)^x6403)<<x6404);

    if (t125 != 974616438163636224LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x6478 = INT8_MAX;
	volatile int16_t x6479 = INT16_MAX;
	uint8_t x6480 = 4U;
	int32_t t126 = -300642284;

    t126 = (((x6477/x6478)^x6479)<<x6480);

    if (t126 != 524272) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint32_t x6481 = UINT32_MAX;
	uint16_t x6482 = UINT16_MAX;
	int16_t x6484 = 1;
	uint32_t t127 = 2980U;

    t127 = (((x6481/x6482)^x6483)<<x6484);

    if (t127 != 131092U) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x6582 = -24;
	uint8_t x6583 = 9U;
	uint8_t x6584 = 7U;

    t128 = (((x6581/x6582)^x6583)<<x6584);

    if (t128 != 1152) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x6749 = INT8_MAX;
	int8_t x6751 = 0;
	uint8_t x6752 = 19U;
	static volatile int32_t t129 = -645368471;

    t129 = (((x6749/x6750)^x6751)<<x6752);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint16_t x6793 = UINT16_MAX;
	volatile int32_t x6794 = INT32_MIN;
	int64_t x6795 = 686LL;
	static uint16_t x6796 = 2U;
	volatile int64_t t130 = 47428186383LL;

    t130 = (((x6793/x6794)^x6795)<<x6796);

    if (t130 != 2744LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint16_t x6809 = 116U;
	volatile int16_t x6811 = INT16_MIN;
	int64_t t131 = -33LL;

    t131 = (((x6809/x6810)^x6811)<<x6812);

    if (t131 != 32652LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x6813 = UINT8_MAX;
	int8_t x6814 = -1;
	int16_t x6815 = INT16_MIN;
	int8_t x6816 = 1;
	volatile int32_t t132 = 60558;

    t132 = (((x6813/x6814)^x6815)<<x6816);

    if (t132 != 65026) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x6889 = -52;
	uint32_t x6891 = 26U;
	volatile uint8_t x6892 = 0U;
	volatile uint32_t t133 = 29376U;

    t133 = (((x6889/x6890)^x6891)<<x6892);

    if (t133 != 26U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x6893 = 85861826U;
	static uint16_t x6894 = 10702U;
	volatile int32_t x6895 = -1;
	volatile int8_t x6896 = 1;
	static uint32_t t134 = 3679U;

    t134 = (((x6893/x6894)^x6895)<<x6896);

    if (t134 != 4294951250U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x6905 = 1U;
	volatile int64_t x6906 = -371031961LL;
	uint32_t x6907 = 51820784U;
	int8_t x6908 = 0;
	static int64_t t135 = 1LL;

    t135 = (((x6905/x6906)^x6907)<<x6908);

    if (t135 != 51820784LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x6921 = 113U;
	static volatile int16_t x6922 = INT16_MIN;
	static int16_t x6923 = INT16_MAX;
	uint16_t x6924 = 16U;
	volatile int32_t t136 = -18017649;

    t136 = (((x6921/x6922)^x6923)<<x6924);

    if (t136 != 2147418112) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x6933 = -1;
	int16_t x6934 = INT16_MAX;
	static uint8_t x6935 = 19U;
	int32_t x6936 = 1;
	int32_t t137 = 2525;

    t137 = (((x6933/x6934)^x6935)<<x6936);

    if (t137 != 38) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x6965 = UINT8_MAX;
	uint64_t x6966 = UINT64_MAX;
	int16_t x6967 = INT16_MIN;
	uint8_t x6968 = 7U;

    t138 = (((x6965/x6966)^x6967)<<x6968);

    if (t138 != 18446744073705357312LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x6997 = INT16_MIN;
	int32_t x6998 = INT32_MIN;
	int64_t x7000 = 0LL;
	static volatile uint64_t t139 = UINT64_MAX;

    t139 = (((x6997/x6998)^x6999)<<x7000);

    if (t139 != UINT64_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x7113 = INT8_MIN;
	int16_t x7114 = INT16_MIN;
	uint8_t x7115 = 60U;
	uint8_t x7116 = 6U;
	volatile int32_t t140 = -1379665;

    t140 = (((x7113/x7114)^x7115)<<x7116);

    if (t140 != 3840) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x7161 = UINT32_MAX;
	volatile int8_t x7162 = -11;
	int32_t x7163 = -3231;
	volatile int8_t x7164 = 2;
	uint32_t t141 = 451U;

    t141 = (((x7161/x7162)^x7163)<<x7164);

    if (t141 != 4294954368U) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x7173 = INT32_MIN;
	int64_t x7174 = INT64_MIN;
	uint16_t x7175 = 11U;
	uint8_t x7176 = 0U;
	int64_t t142 = -2519113LL;

    t142 = (((x7173/x7174)^x7175)<<x7176);

    if (t142 != 11LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x7326 = INT8_MIN;
	volatile uint16_t x7327 = UINT16_MAX;
	static volatile int8_t x7328 = 0;
	int32_t t143 = -274344560;

    t143 = (((x7325/x7326)^x7327)<<x7328);

    if (t143 != 65534) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x7349 = 33535383599082LL;
	static int16_t x7351 = -9;
	int8_t x7352 = 0;
	uint64_t t144 = 0LLU;

    t144 = (((x7349/x7350)^x7351)<<x7352);

    if (t144 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x7379 = 52236;
	uint8_t x7380 = 0U;
	volatile uint64_t t145 = 482528775885LLU;

    t145 = (((x7377/x7378)^x7379)<<x7380);

    if (t145 != 14085053680822712LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x7433 = INT32_MAX;
	uint32_t x7434 = 212639U;
	uint64_t x7435 = UINT64_MAX;
	uint8_t x7436 = 55U;
	volatile uint64_t t146 = 92325978817150LLU;

    t146 = (((x7433/x7434)^x7435)<<x7436);

    if (t146 != 5044031582654955520LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x7453 = 247U;
	volatile uint64_t x7454 = UINT64_MAX;
	volatile uint16_t x7456 = 2U;
	uint64_t t147 = 34057045921604LLU;

    t147 = (((x7453/x7454)^x7455)<<x7456);

    if (t147 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x7513 = INT64_MAX;
	static int8_t x7514 = INT8_MAX;
	int8_t x7516 = 3;
	int64_t t148 = 150LL;

    t148 = (((x7513/x7514)^x7515)<<x7516);

    if (t148 != 580999813345939520LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x7545 = 186862218698376006LL;
	uint64_t x7546 = 7892LLU;
	static int8_t x7547 = -1;
	static volatile int8_t x7548 = 6;
	volatile uint64_t t149 = 3580151547954793484LLU;

    t149 = (((x7545/x7546)^x7547)<<x7548);

    if (t149 != 18445228718666888640LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x7565 = 15U;
	int16_t x7566 = 1;
	volatile uint32_t x7567 = UINT32_MAX;
	uint32_t t150 = 1745911609U;

    t150 = (((x7565/x7566)^x7567)<<x7568);

    if (t150 != 4294967168U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x7589 = 7567696LLU;
	int64_t x7590 = INT64_MAX;
	static uint8_t x7592 = 3U;
	volatile uint64_t t151 = 502233680153952399LLU;

    t151 = (((x7589/x7590)^x7591)<<x7592);

    if (t151 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x7597 = INT16_MIN;
	int8_t x7600 = 5;
	static int64_t t152 = -2689LL;

    t152 = (((x7597/x7598)^x7599)<<x7600);

    if (t152 != 96LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x7629 = UINT64_MAX;
	int64_t x7630 = -1LL;
	int32_t x7631 = 12;
	static uint8_t x7632 = 16U;
	uint64_t t153 = 2012157268LLU;

    t153 = (((x7629/x7630)^x7631)<<x7632);

    if (t153 != 851968LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x7647 = INT8_MIN;
	static uint64_t x7648 = 31LLU;
	volatile uint32_t t154 = 21U;

    t154 = (((x7645/x7646)^x7647)<<x7648);

    if (t154 != 0U) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x7713 = -9097;
	volatile int16_t x7714 = INT16_MIN;
	uint32_t x7715 = 105853U;
	int8_t x7716 = 1;

    t155 = (((x7713/x7714)^x7715)<<x7716);

    if (t155 != 211706U) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x7749 = 14105920LL;
	uint16_t x7750 = UINT16_MAX;
	uint16_t x7751 = UINT16_MAX;

    t156 = (((x7749/x7750)^x7751)<<x7752);

    if (t156 != 65320LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x7753 = 0U;
	uint8_t x7754 = 3U;
	volatile uint8_t x7755 = 25U;
	static uint32_t t157 = 558244U;

    t157 = (((x7753/x7754)^x7755)<<x7756);

    if (t157 != 102400U) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int32_t x7781 = INT32_MAX;
	volatile uint32_t x7782 = UINT32_MAX;
	static uint64_t x7783 = 128699100LLU;
	int8_t x7784 = 24;

    t158 = (((x7781/x7782)^x7783)<<x7784);

    if (t158 != 2159212599705600LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint32_t x7785 = 394216U;
	int64_t x7786 = -1LL;
	int16_t x7787 = INT16_MIN;
	uint16_t x7788 = 34U;
	volatile int64_t t159 = 5789319271LL;

    t159 = (((x7785/x7786)^x7787)<<x7788);

    if (t159 != 7301169525293056LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x7938 = -1;
	static int16_t x7939 = INT16_MIN;
	volatile int64_t x7940 = 4LL;
	int32_t t160 = 1;

    t160 = (((x7937/x7938)^x7939)<<x7940);

    if (t160 != 524240) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x8009 = UINT64_MAX;
	int8_t x8011 = -1;
	int16_t x8012 = 1;
	volatile uint64_t t161 = 17030047LLU;

    t161 = (((x8009/x8010)^x8011)<<x8012);

    if (t161 != 18446744073709551464LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x8089 = INT16_MAX;
	volatile uint64_t t162 = 7421076160LLU;

    t162 = (((x8089/x8090)^x8091)<<x8092);

    if (t162 != 14LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x8121 = INT64_MIN;
	static int64_t x8122 = INT64_MAX;
	volatile int32_t x8123 = INT32_MIN;
	static volatile int64_t t163 = -878349908983LL;

    t163 = (((x8121/x8122)^x8123)<<x8124);

    if (t163 != 2147483647LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x8173 = UINT8_MAX;
	int8_t x8174 = INT8_MIN;
	uint64_t x8175 = 10166578023LLU;
	int8_t x8176 = 2;
	volatile uint64_t t164 = 1959019572501927605LLU;

    t164 = (((x8173/x8174)^x8175)<<x8176);

    if (t164 != 18446744033043239520LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x8197 = -1;
	int8_t x8198 = 3;
	uint8_t x8199 = UINT8_MAX;
	static uint8_t x8200 = 1U;
	int32_t t165 = -64421378;

    t165 = (((x8197/x8198)^x8199)<<x8200);

    if (t165 != 510) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x8321 = -1;
	volatile int16_t x8322 = INT16_MIN;
	uint8_t x8323 = 8U;
	uint32_t x8324 = 4U;
	volatile int32_t t166 = -248;

    t166 = (((x8321/x8322)^x8323)<<x8324);

    if (t166 != 128) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x8350 = 2084338816LL;
	int64_t x8351 = INT64_MAX;
	uint64_t x8352 = 0LLU;
	static volatile int64_t t167 = INT64_MAX;

    t167 = (((x8349/x8350)^x8351)<<x8352);

    if (t167 != INT64_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x8385 = -1;
	uint32_t x8387 = UINT32_MAX;
	uint16_t x8388 = 2U;
	uint64_t t168 = 33447599716534LLU;

    t168 = (((x8385/x8386)^x8387)<<x8388);

    if (t168 != 17179869176LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x8401 = INT64_MIN;
	static uint32_t x8402 = 200U;
	int8_t x8403 = -1;
	int64_t x8404 = 1LL;
	volatile int64_t t169 = -1197036057LL;

    t169 = (((x8401/x8402)^x8403)<<x8404);

    if (t169 != 92233720368547756LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x8405 = -80LL;
	static int64_t x8406 = INT64_MIN;

    t170 = (((x8405/x8406)^x8407)<<x8408);

    if (t170 != 1015634LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x8529 = 79062U;
	static int16_t x8531 = -1;
	int8_t x8532 = 3;

    t171 = (((x8529/x8530)^x8531)<<x8532);

    if (t171 != 4294967288U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x8558 = 17LLU;
	uint16_t x8560 = 18U;
	uint64_t t172 = 169942457LLU;

    t172 = (((x8557/x8558)^x8559)<<x8560);

    if (t172 != 4340410370343567360LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x8585 = 844931U;
	int16_t x8586 = -1;
	static volatile uint32_t t173 = 2799U;

    t173 = (((x8585/x8586)^x8587)<<x8588);

    if (t173 != 67106816U) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x8638 = INT16_MIN;
	volatile int32_t x8639 = -1;
	static volatile uint32_t t174 = 2906075U;

    t174 = (((x8637/x8638)^x8639)<<x8640);

    if (t174 != 4294967280U) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x8725 = -1;
	uint64_t x8727 = 2LLU;
	uint32_t x8728 = 12U;
	volatile uint64_t t175 = 78LLU;

    t175 = (((x8725/x8726)^x8727)<<x8728);

    if (t175 != 8192LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x8777 = -14LL;
	int16_t x8778 = -207;
	volatile uint8_t x8779 = 14U;
	int32_t x8780 = 0;
	volatile int64_t t176 = 1009070LL;

    t176 = (((x8777/x8778)^x8779)<<x8780);

    if (t176 != 14LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x8993 = 905656222055LLU;
	static int32_t x8994 = 64034682;
	volatile uint32_t x8995 = 83939252U;
	static volatile uint64_t t177 = 6LLU;

    t177 = (((x8993/x8994)^x8995)<<x8996);

    if (t177 != 1408442367475712LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x9021 = 140844LLU;
	static volatile uint32_t x9022 = 219U;
	int32_t x9023 = -1;
	int8_t x9024 = 18;
	uint64_t t178 = 6708531810768103LLU;

    t178 = (((x9021/x9022)^x9023)<<x9024);

    if (t178 != 18446744073540730880LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x9025 = UINT8_MAX;
	int32_t x9026 = -1;
	int32_t x9027 = -1;
	volatile int32_t t179 = 12662;

    t179 = (((x9025/x9026)^x9027)<<x9028);

    if (t179 != 4064) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x9145 = INT8_MAX;
	static int32_t x9146 = INT32_MAX;
	uint64_t x9147 = UINT64_MAX;
	uint64_t t180 = 1111LLU;

    t180 = (((x9145/x9146)^x9147)<<x9148);

    if (t180 != 18446744073441116160LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x9201 = -1;
	volatile uint16_t x9203 = 18U;
	uint16_t x9204 = 3U;
	int64_t t181 = 447607846725746519LL;

    t181 = (((x9201/x9202)^x9203)<<x9204);

    if (t181 != 144LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x9229 = UINT32_MAX;
	int32_t x9231 = INT32_MIN;
	volatile int32_t x9232 = 2;
	volatile uint32_t t182 = 2748056U;

    t182 = (((x9229/x9230)^x9231)<<x9232);

    if (t182 != 38780740U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x9325 = UINT16_MAX;
	int64_t x9326 = INT64_MIN;
	int64_t t183 = 3336361781069LL;

    t183 = (((x9325/x9326)^x9327)<<x9328);

    if (t183 != 10494364952LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x9378 = INT8_MAX;
	static uint64_t x9379 = 10108154LLU;
	static uint8_t x9380 = 0U;
	volatile uint64_t t184 = 5154LLU;

    t184 = (((x9377/x9378)^x9379)<<x9380);

    if (t184 != 10108152LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x9393 = 27;
	int8_t x9394 = INT8_MIN;
	uint32_t x9395 = 23362698U;
	volatile int8_t x9396 = 0;
	uint32_t t185 = 26509U;

    t185 = (((x9393/x9394)^x9395)<<x9396);

    if (t185 != 23362698U) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x9405 = 0LL;
	uint64_t x9406 = 770LLU;
	uint32_t x9407 = 1476U;

    t186 = (((x9405/x9406)^x9407)<<x9408);

    if (t186 != 47232LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x9453 = INT64_MAX;
	uint64_t x9454 = UINT64_MAX;
	static int8_t x9455 = 0;
	uint8_t x9456 = 39U;
	volatile uint64_t t187 = 300971346LLU;

    t187 = (((x9453/x9454)^x9455)<<x9456);

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x9473 = INT32_MIN;
	volatile int64_t x9474 = 8849LL;
	static int16_t x9475 = INT16_MIN;
	static uint16_t x9476 = 7U;

    t188 = (((x9473/x9474)^x9475)<<x9476);

    if (t188 != 31851520LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x9502 = INT32_MIN;
	volatile uint32_t t189 = 212U;

    t189 = (((x9501/x9502)^x9503)<<x9504);

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x9553 = 0LLU;
	volatile int64_t x9554 = INT64_MIN;
	uint32_t x9555 = UINT32_MAX;
	int16_t x9556 = 0;

    t190 = (((x9553/x9554)^x9555)<<x9556);

    if (t190 != 4294967295LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x9609 = INT8_MIN;
	static uint16_t x9610 = UINT16_MAX;
	int16_t x9611 = 11;
	static uint8_t x9612 = 0U;
	int32_t t191 = -3688;

    t191 = (((x9609/x9610)^x9611)<<x9612);

    if (t191 != 11) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x9801 = 53456073LL;
	int32_t x9802 = INT32_MIN;
	int16_t x9803 = 1;
	int8_t x9804 = 59;
	static volatile int64_t t192 = 14LL;

    t192 = (((x9801/x9802)^x9803)<<x9804);

    if (t192 != 576460752303423488LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile uint32_t x9817 = 15945047U;
	static int32_t x9818 = INT32_MAX;
	int32_t x9819 = 476150895;
	uint32_t t193 = 627U;

    t193 = (((x9817/x9818)^x9819)<<x9820);

    if (t193 != 817772416U) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint64_t x9893 = UINT64_MAX;
	static int32_t x9894 = INT32_MIN;
	volatile int8_t x9896 = 51;
	volatile uint64_t t194 = 9576LLU;

    t194 = (((x9893/x9894)^x9895)<<x9896);

    if (t194 != 18068441705010429952LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x10021 = INT16_MAX;
	uint8_t x10022 = 48U;
	uint16_t x10023 = 2994U;
	static uint8_t x10024 = 14U;

    t195 = (((x10021/x10022)^x10023)<<x10024);

    if (t195 != 38141952) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint32_t x10117 = 90095437U;
	volatile int8_t x10118 = INT8_MIN;
	uint32_t x10119 = 150430789U;
	uint8_t x10120 = 13U;
	uint32_t t196 = 1316U;

    t196 = (((x10117/x10118)^x10119)<<x10120);

    if (t196 != 3968376832U) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x10163 = INT32_MAX;
	static uint8_t x10164 = 11U;
	static uint64_t t197 = 47470605631243LLU;

    t197 = (((x10161/x10162)^x10163)<<x10164);

    if (t197 != 4398046509056LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint32_t x10249 = UINT32_MAX;
	uint64_t x10251 = 60235LLU;
	uint8_t x10252 = 1U;
	volatile uint64_t t198 = 161603432828459LLU;

    t198 = (((x10249/x10250)^x10251)<<x10252);

    if (t198 != 382622LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x10299 = 3907089;
	uint8_t x10300 = 33U;
	static int64_t t199 = -32815LL;

    t199 = (((x10297/x10298)^x10299)<<x10300);

    if (t199 != 33561638955122688LL) { NG(); } else { ; }
	
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

