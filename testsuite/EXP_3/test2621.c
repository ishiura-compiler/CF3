
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

int32_t x16 = INT32_MAX;
int64_t x36 = INT64_MIN;
static uint64_t x75 = 76000516104282LLU;
uint64_t x221 = 328082260614LLU;
int8_t x365 = 23;
uint16_t x367 = 2U;
uint64_t x429 = 89686307444LLU;
int16_t x430 = 4;
uint8_t x434 = 10U;
volatile int64_t t9 = 206411692178630031LL;
int8_t x540 = INT8_MIN;
uint16_t x745 = UINT16_MAX;
uint16_t x1094 = 5U;
uint8_t x1302 = 18U;
uint32_t x1304 = 110U;
uint32_t t15 = 4416U;
volatile int8_t x1401 = 0;
int16_t x1403 = INT16_MIN;
static int32_t x1456 = -58022;
static uint32_t x1703 = UINT32_MAX;
static uint64_t x1704 = UINT64_MAX;
static volatile int16_t x1831 = -77;
static int8_t x1996 = INT8_MIN;
uint32_t x2097 = 393271U;
static uint64_t x2100 = UINT64_MAX;
uint64_t x2240 = 1417685995108LLU;
int16_t x2283 = INT16_MIN;
int16_t x2284 = -2926;
volatile int32_t t26 = 1;
uint64_t x2365 = UINT64_MAX;
volatile uint64_t t27 = 328480976329LLU;
static int16_t x2591 = INT16_MIN;
static int8_t x2592 = -1;
uint64_t x2756 = 4486652872383LLU;
uint16_t x2777 = 1U;
int8_t x2926 = 0;
uint64_t x2929 = 16491760717LLU;
static volatile int16_t x3020 = 2;
uint64_t x3369 = 609641191584200701LLU;
int32_t x3371 = 857672;
static uint64_t t37 = 130986024LLU;
int64_t t39 = 852304487061LL;
volatile int32_t t40 = 41477567;
uint64_t x4073 = 913157211LLU;
static int8_t x4074 = 1;
int64_t t44 = 17627874615LL;
uint32_t t45 = 2007U;
uint64_t x4455 = 55355405LLU;
uint64_t t47 = 21LLU;
uint64_t x4487 = 47403713634LLU;
volatile uint32_t x4509 = 7U;
uint8_t x4510 = 22U;
volatile uint16_t x4511 = 0U;
int8_t x4616 = -14;
uint16_t x4661 = 1883U;
uint64_t x4664 = 1226633302LLU;
static volatile uint64_t t53 = 19948770245239LLU;
static uint64_t x4721 = 206LLU;
volatile uint64_t t55 = 14699499100548600LLU;
int8_t x4806 = 1;
volatile uint8_t x5045 = 0U;
volatile int8_t x5170 = 0;
volatile int32_t t62 = -1665;
uint8_t x5267 = UINT8_MAX;
uint16_t x5675 = 3733U;
uint16_t x6002 = 1U;
int8_t x6060 = -26;
int8_t x6278 = 30;
uint64_t x6421 = 138LLU;
uint32_t x6446 = 7U;
static uint16_t x6556 = 809U;
uint8_t x6626 = 6U;
uint32_t x6628 = 725633U;
volatile uint8_t x6681 = 9U;
uint64_t x6860 = 566099LLU;
int32_t x6939 = INT32_MIN;
static int32_t t80 = -87;
static int16_t x6951 = -1;
uint16_t x6952 = 94U;
volatile int32_t t81 = 2319;
int8_t x7076 = INT8_MIN;
uint8_t x7366 = 4U;
int32_t x7368 = -63010925;
uint8_t x7390 = 0U;
int64_t x7508 = -208780121LL;
static uint8_t x7522 = 7U;
static int16_t x7547 = INT16_MIN;
volatile uint8_t x7548 = 17U;
int8_t x7570 = 31;
volatile uint64_t t90 = 437770643955116039LLU;
int64_t x7679 = INT64_MIN;
volatile int8_t x7725 = INT8_MAX;
static int8_t x7727 = INT8_MIN;
volatile uint32_t x7733 = 1053349337U;
int64_t x7840 = -1LL;
uint16_t x7889 = UINT16_MAX;
uint16_t x7890 = 1U;
static int64_t x7891 = -13318LL;
static int8_t x7989 = 0;
int32_t x8358 = 26;
int32_t t103 = -16384590;
int8_t x8512 = INT8_MAX;
int16_t x8697 = INT16_MAX;
uint64_t x8871 = 677892898447822196LLU;
int8_t x8986 = 1;
volatile int32_t x8987 = INT32_MIN;
int32_t x9120 = INT32_MIN;
volatile uint32_t t112 = 218301227U;
int8_t x9339 = INT8_MIN;
int16_t x9515 = INT16_MAX;
static uint8_t x9516 = 0U;
volatile uint64_t t116 = 3847830090543633406LLU;
int64_t x9624 = INT64_MIN;
uint32_t x9633 = 3139654U;
volatile int8_t x9634 = 7;
int16_t x9759 = INT16_MIN;
int32_t x9764 = INT32_MIN;
uint64_t t120 = 22972LLU;
volatile uint32_t t122 = 11934083U;
volatile uint8_t x9793 = 1U;
volatile uint8_t x9795 = UINT8_MAX;
uint8_t x9796 = 12U;
uint8_t x9826 = 21U;
int32_t x9827 = INT32_MIN;
volatile uint64_t x9836 = 701LLU;
volatile int8_t x9854 = 0;
volatile int64_t x9863 = INT64_MIN;
int64_t x9864 = INT64_MIN;
uint8_t x9910 = 0U;
uint8_t x9917 = 17U;
int32_t t129 = -1;
static int16_t x10092 = INT16_MIN;
uint8_t x10198 = 1U;
int8_t x10229 = 7;
int64_t t134 = -19422837638455LL;
volatile int8_t x10426 = 0;
int64_t x10427 = INT64_MIN;
volatile uint8_t x10478 = 2U;
static int8_t x10479 = INT8_MIN;
volatile int32_t t136 = -2;
static uint64_t x10520 = UINT64_MAX;
static uint32_t x10561 = 179611U;
int8_t x10562 = 6;
static int32_t x10563 = INT32_MIN;
int64_t x10571 = INT64_MAX;
int64_t x10572 = INT64_MIN;
volatile int64_t t139 = -4324189061152532620LL;
static uint64_t x10575 = UINT64_MAX;
uint8_t x10772 = UINT8_MAX;
volatile uint64_t t141 = 809437LLU;
int64_t x10783 = -1LL;
int64_t t143 = -2801691591922LL;
volatile uint16_t x10789 = 295U;
volatile int32_t x10791 = 0;
uint32_t x10887 = 3U;
volatile uint32_t t145 = 3U;
int8_t x10997 = 6;
int16_t x11116 = INT16_MIN;
static uint32_t x11253 = 63524613U;
uint64_t t150 = 60632684LLU;
int32_t t151 = -3662;
uint64_t x11372 = 30265728953336LLU;
static volatile uint16_t x11385 = 131U;
static volatile uint32_t x11386 = 4U;
int32_t x11539 = -1;
static int16_t x11540 = -1;
volatile int8_t x11610 = 7;
uint32_t x11611 = 3U;
uint64_t t156 = 21419LLU;
int8_t x11662 = 30;
static volatile int32_t t158 = -19828362;
static uint32_t x11926 = 0U;
static int16_t x11928 = 470;
volatile int8_t x11975 = INT8_MIN;
static int8_t x12105 = 5;
static int32_t x12247 = -588201;
uint64_t x12306 = 3LLU;
int32_t x12345 = 8;
int8_t x12346 = 1;
uint8_t x12426 = 0U;
volatile uint16_t x12427 = 13U;
static uint8_t x12837 = 25U;
volatile uint64_t t176 = 1176341669LLU;
volatile int8_t x12995 = INT8_MIN;
uint8_t x13202 = 3U;
uint16_t x13204 = 2U;
uint64_t x13289 = 1LLU;
static uint16_t x13290 = 25U;
uint8_t x13538 = 0U;
uint8_t x13597 = 4U;
volatile uint8_t x13830 = 1U;
int16_t x13963 = 1227;
static volatile uint64_t t189 = 34547348960493597LLU;
static int32_t x14081 = 15875;
volatile uint64_t x14084 = 230482639100347LLU;
uint32_t x14087 = UINT32_MAX;
uint64_t t192 = 36528126LLU;
uint8_t x14271 = 6U;
int8_t x14424 = INT8_MAX;
uint64_t x14435 = 867537090007927LLU;
int16_t x14647 = INT16_MIN;
static uint64_t x14697 = 3116LLU;
volatile int64_t x14698 = 0LL;
static int8_t x14729 = INT8_MAX;
static uint16_t x14731 = 6529U;


void f0(void) {
    	uint64_t x13 = 2734LLU;
	int8_t x14 = 6;
	uint32_t x15 = UINT32_MAX;
	volatile uint64_t t0 = 12LLU;

    t0 = ((x13<<x14)*(x15^x16));

    if (t0 != 375758098792448LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x33 = 52571960180038LLU;
	int16_t x34 = 0;
	uint8_t x35 = 0U;
	volatile uint64_t t1 = 1LLU;

    t1 = ((x33<<x34)*(x35^x36));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x53 = UINT32_MAX;
	int16_t x54 = 1;
	static uint64_t x55 = 15846291LLU;
	static int32_t x56 = INT32_MIN;
	static uint64_t t2 = 154949LLU;

    t2 = ((x53<<x54)*(x55^x56));

    if (t2 != 9291431342725949658LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x73 = UINT64_MAX;
	volatile int16_t x74 = 0;
	int16_t x76 = -11;
	uint64_t t3 = 209673420224867LLU;

    t3 = ((x73<<x74)*(x75^x76));

    if (t3 != 76000516104273LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x209 = 3U;
	uint32_t x210 = 7U;
	static volatile uint32_t x211 = 25U;
	static uint16_t x212 = 2431U;
	uint32_t t4 = 39559100U;

    t4 = ((x209<<x210)*(x211^x212));

    if (t4 != 923904U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x222 = 3U;
	int16_t x223 = 1;
	int16_t x224 = INT16_MIN;
	volatile uint64_t t5 = 2925358269650466LLU;

    t5 = ((x221<<x222)*(x223^x224));

    if (t5 != 18360741902241240112LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x366 = 23U;
	static int32_t x368 = -1;
	int32_t t6 = -260930225;

    t6 = ((x365<<x366)*(x367^x368));

    if (t6 != -578813952) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x385 = 28119133162278191LLU;
	uint32_t x386 = 11U;
	static volatile int32_t x387 = 18637772;
	int8_t x388 = INT8_MAX;
	uint64_t t7 = 1927126LLU;

    t7 = ((x385<<x386)*(x387^x388));

    if (t7 != 6917734344914561024LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x431 = UINT64_MAX;
	static int16_t x432 = 1;
	uint64_t t8 = 6494004131518771LLU;

    t8 = ((x429<<x430)*(x431^x432));

    if (t8 != 18446741203747713408LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x433 = INT16_MAX;
	int8_t x435 = -1;
	int64_t x436 = -54140LL;

    t9 = ((x433<<x434)*(x435^x436));

    if (t9 != 1816547955712LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x537 = 78U;
	int16_t x538 = 18;
	volatile int16_t x539 = -6;
	volatile uint32_t t10 = 311U;

    t10 = ((x537<<x538)*(x539^x540));

    if (t10 != 2494562304U) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x746 = 1;
	uint64_t x747 = 13554LLU;
	int64_t x748 = INT64_MAX;
	static volatile uint64_t t11 = 8215LLU;

    t11 = ((x745<<x746)*(x747^x748));

    if (t11 != 18446744071932897766LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x753 = 22578U;
	uint16_t x754 = 1U;
	int8_t x755 = INT8_MIN;
	static volatile int8_t x756 = 1;
	uint32_t t12 = 5928921U;

    t12 = ((x753<<x754)*(x755^x756));

    if (t12 != 4289232484U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x1093 = 1LLU;
	volatile uint8_t x1095 = 25U;
	int64_t x1096 = -90LL;
	uint64_t t13 = 2124690319757LLU;

    t13 = ((x1093<<x1094)*(x1095^x1096));

    if (t13 != 18446744073709549536LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x1301 = 4;
	static int8_t x1303 = -1;
	uint32_t t14 = 101579895U;

    t14 = ((x1301<<x1302)*(x1303^x1304));

    if (t14 != 4178575360U) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint32_t x1393 = 4U;
	uint8_t x1394 = 15U;
	int16_t x1395 = INT16_MAX;
	uint32_t x1396 = UINT32_MAX;

    t15 = ((x1393<<x1394)*(x1395^x1396));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x1402 = 20U;
	int64_t x1404 = INT64_MAX;
	volatile int64_t t16 = 70100160185603LL;

    t16 = ((x1401<<x1402)*(x1403^x1404));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x1453 = 0U;
	int16_t x1454 = 16;
	int8_t x1455 = INT8_MIN;
	int32_t t17 = 519;

    t17 = ((x1453<<x1454)*(x1455^x1456));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint8_t x1701 = 45U;
	static volatile uint32_t x1702 = 13U;
	volatile uint64_t t18 = 33010571LLU;

    t18 = ((x1701<<x1702)*(x1703^x1704));

    if (t18 != 18445160776965554176LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint8_t x1829 = 1U;
	uint8_t x1830 = 0U;
	int32_t x1832 = 3;
	int32_t t19 = 111;

    t19 = ((x1829<<x1830)*(x1831^x1832));

    if (t19 != -80) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x1885 = UINT64_MAX;
	uint8_t x1886 = 20U;
	uint64_t x1887 = 13751971769LLU;
	uint64_t x1888 = UINT64_MAX;
	volatile uint64_t t20 = 4301708004575LLU;

    t20 = ((x1885<<x1886)*(x1887^x1888));

    if (t20 != 14419987550699520LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x1993 = 57U;
	static uint16_t x1994 = 2U;
	uint16_t x1995 = UINT16_MAX;
	int32_t t21 = 46537442;

    t21 = ((x1993<<x1994)*(x1995^x1996));

    if (t21 != -14913252) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x2013 = UINT32_MAX;
	int16_t x2014 = 12;
	int64_t x2015 = INT64_MAX;
	uint64_t x2016 = 21283211LLU;
	uint64_t t22 = 167580375830023718LLU;

    t22 = ((x2013<<x2014)*(x2015^x2016));

    if (t22 != 18355333461391753216LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x2037 = 1U;
	uint32_t x2038 = 4U;
	volatile uint16_t x2039 = 25066U;
	int32_t x2040 = -108275527;
	static uint32_t t23 = 1303U;

    t23 = ((x2037<<x2038)*(x2039^x2040));

    if (t23 != 2562430256U) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint8_t x2098 = 3U;
	volatile uint8_t x2099 = 1U;
	volatile uint64_t t24 = 1117245037559126287LLU;

    t24 = ((x2097<<x2098)*(x2099^x2100));

    if (t24 != 18446744073703259280LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x2237 = 82LLU;
	volatile uint16_t x2238 = 53U;
	uint8_t x2239 = 1U;
	static uint64_t t25 = 4182246593988LLU;

    t25 = ((x2237<<x2238)*(x2239^x2240));

    if (t25 != 10034019969781465088LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x2281 = 3U;
	uint16_t x2282 = 0U;

    t26 = ((x2281<<x2282)*(x2283^x2284));

    if (t26 != 89526) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x2366 = 4;
	int32_t x2367 = INT32_MIN;
	int32_t x2368 = INT32_MIN;

    t27 = ((x2365<<x2366)*(x2367^x2368));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x2589 = 3911028633307LLU;
	static volatile int8_t x2590 = 0;
	volatile uint64_t t28 = 1409725202457352LLU;

    t28 = ((x2589<<x2590)*(x2591^x2592));

    if (t28 != 128152675227570469LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x2753 = 698LLU;
	uint32_t x2754 = 2U;
	uint16_t x2755 = UINT16_MAX;
	volatile uint64_t t29 = 955645845LLU;

    t29 = ((x2753<<x2754)*(x2755^x2756));

    if (t29 != 12526734718558720LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x2778 = 3;
	volatile uint16_t x2779 = UINT16_MAX;
	int8_t x2780 = -1;
	int32_t t30 = 8;

    t30 = ((x2777<<x2778)*(x2779^x2780));

    if (t30 != -524288) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x2881 = 19256LLU;
	static volatile uint8_t x2882 = 8U;
	int16_t x2883 = INT16_MIN;
	int16_t x2884 = -1;
	static volatile uint64_t t31 = 84040583795471LLU;

    t31 = ((x2881<<x2882)*(x2883^x2884));

    if (t31 != 161526106112LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x2925 = 0U;
	static uint8_t x2927 = 17U;
	volatile int8_t x2928 = 49;
	static volatile uint32_t t32 = 80U;

    t32 = ((x2925<<x2926)*(x2927^x2928));

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x2930 = 11;
	int16_t x2931 = INT16_MIN;
	int16_t x2932 = -4;
	uint64_t t33 = 2280530073882LLU;

    t33 = ((x2929<<x2930)*(x2931^x2932));

    if (t33 != 1106608226573901824LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x2933 = UINT64_MAX;
	int8_t x2934 = 0;
	int64_t x2935 = INT64_MIN;
	int64_t x2936 = 91335550519LL;
	uint64_t t34 = 448543325925LLU;

    t34 = ((x2933<<x2934)*(x2935^x2936));

    if (t34 != 9223371945519225289LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x2973 = UINT32_MAX;
	static int8_t x2974 = 25;
	int16_t x2975 = -7;
	int8_t x2976 = -1;
	uint32_t t35 = 61324731U;

    t35 = ((x2973<<x2974)*(x2975^x2976));

    if (t35 != 4093640704U) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint32_t x3017 = 7718535U;
	uint16_t x3018 = 0U;
	uint16_t x3019 = 26U;
	static volatile uint32_t t36 = 6U;

    t36 = ((x3017<<x3018)*(x3019^x3020));

    if (t36 != 185244840U) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint8_t x3370 = 1U;
	uint8_t x3372 = 0U;

    t37 = ((x3369<<x3370)*(x3371^x3372));

    if (t37 != 16885342288395696720LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint16_t x3449 = UINT16_MAX;
	int8_t x3450 = 1;
	uint32_t x3451 = 7U;
	uint32_t x3452 = 85462703U;
	volatile uint32_t t38 = 669U;

    t38 = ((x3449<<x3450)*(x3451^x3452));

    if (t38 != 320856752U) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint16_t x3457 = 3U;
	volatile uint64_t x3458 = 1LLU;
	int64_t x3459 = -9473731LL;
	static int32_t x3460 = INT32_MAX;

    t39 = ((x3457<<x3458)*(x3459^x3460));

    if (t39 != -12828059508LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x3645 = 5U;
	volatile uint16_t x3646 = 4U;
	int32_t x3647 = -1;
	int32_t x3648 = 1;

    t40 = ((x3645<<x3646)*(x3647^x3648));

    if (t40 != -160) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x3949 = 0;
	int8_t x3950 = 7;
	volatile int8_t x3951 = -1;
	int64_t x3952 = -1LL;
	static int64_t t41 = 140106566LL;

    t41 = ((x3949<<x3950)*(x3951^x3952));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x4075 = -2601200425LL;
	uint8_t x4076 = 7U;
	uint64_t t42 = 741352LLU;

    t42 = ((x4073<<x4074)*(x4075^x4076));

    if (t42 != 13696134210235321312LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x4121 = INT8_MAX;
	uint8_t x4122 = 2U;
	volatile uint8_t x4123 = 0U;
	int8_t x4124 = -1;
	int32_t t43 = -380;

    t43 = ((x4121<<x4122)*(x4123^x4124));

    if (t43 != -508) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x4125 = 1727;
	uint8_t x4126 = 1U;
	volatile int64_t x4127 = 32052LL;
	int16_t x4128 = -1;

    t44 = ((x4125<<x4126)*(x4127^x4128));

    if (t44 != -110711062LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile uint32_t x4257 = 153648U;
	uint8_t x4258 = 9U;
	uint8_t x4259 = 2U;
	int8_t x4260 = INT8_MAX;

    t45 = ((x4257<<x4258)*(x4259^x4260));

    if (t45 != 1243537408U) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x4301 = 3866;
	volatile uint16_t x4302 = 7U;
	int64_t x4303 = INT64_MIN;
	static int64_t x4304 = INT64_MIN;
	int64_t t46 = -52LL;

    t46 = ((x4301<<x4302)*(x4303^x4304));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x4453 = 130;
	int16_t x4454 = 12;
	volatile uint16_t x4456 = 29637U;

    t47 = ((x4453<<x4454)*(x4455^x4456));

    if (t47 != 29482697687040LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x4485 = 0U;
	static int64_t x4486 = 1LL;
	int64_t x4488 = INT64_MAX;
	uint64_t t48 = 203821383526087LLU;

    t48 = ((x4485<<x4486)*(x4487^x4488));

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x4512 = INT32_MAX;
	uint32_t t49 = 110842U;

    t49 = ((x4509<<x4510)*(x4511^x4512));

    if (t49 != 4265607168U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x4585 = 9351872LLU;
	volatile uint16_t x4586 = 2U;
	uint8_t x4587 = 1U;
	volatile uint8_t x4588 = 73U;
	static uint64_t t50 = 714LLU;

    t50 = ((x4585<<x4586)*(x4587^x4588));

    if (t50 != 2693339136LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x4613 = UINT64_MAX;
	uint32_t x4614 = 1U;
	static int32_t x4615 = INT32_MAX;
	uint64_t t51 = 775823419036466999LLU;

    t51 = ((x4613<<x4614)*(x4615^x4616));

    if (t51 != 4294967270LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint16_t x4653 = 6312U;
	uint16_t x4654 = 6U;
	static uint64_t x4655 = 1LLU;
	int8_t x4656 = -1;
	static volatile uint64_t t52 = 439282LLU;

    t52 = ((x4653<<x4654)*(x4655^x4656));

    if (t52 != 18446744073708743680LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x4662 = 7U;
	int8_t x4663 = 0;

    t53 = ((x4661<<x4662)*(x4663^x4664));

    if (t53 != 295648064981248LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x4705 = 0;
	static uint8_t x4706 = 0U;
	int64_t x4707 = -1LL;
	volatile int32_t x4708 = INT32_MIN;
	int64_t t54 = 3480996LL;

    t54 = ((x4705<<x4706)*(x4707^x4708));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x4722 = 0U;
	int64_t x4723 = 4717LL;
	int64_t x4724 = 6LL;

    t55 = ((x4721<<x4722)*(x4723^x4724));

    if (t55 != 971290LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x4793 = 5699;
	int32_t x4794 = 0;
	static volatile uint16_t x4795 = UINT16_MAX;
	int64_t x4796 = -1LL;
	int64_t t56 = 888025LL;

    t56 = ((x4793<<x4794)*(x4795^x4796));

    if (t56 != -373489664LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint16_t x4805 = 0U;
	int16_t x4807 = INT16_MIN;
	int8_t x4808 = INT8_MAX;
	volatile int32_t t57 = -370323963;

    t57 = ((x4805<<x4806)*(x4807^x4808));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x4985 = UINT32_MAX;
	static uint8_t x4986 = 7U;
	uint8_t x4987 = 0U;
	int64_t x4988 = -1LL;
	int64_t t58 = -1LL;

    t58 = ((x4985<<x4986)*(x4987^x4988));

    if (t58 != -4294967168LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x5046 = 0;
	volatile uint64_t x5047 = UINT64_MAX;
	static int8_t x5048 = INT8_MAX;
	uint64_t t59 = 418525042642709078LLU;

    t59 = ((x5045<<x5046)*(x5047^x5048));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x5105 = 1U;
	int16_t x5106 = 0;
	volatile int8_t x5107 = INT8_MIN;
	volatile uint64_t x5108 = 159633LLU;
	volatile uint64_t t60 = 80794052840LLU;

    t60 = ((x5105<<x5106)*(x5107^x5108));

    if (t60 != 18446744073709391889LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint8_t x5113 = 8U;
	static uint8_t x5114 = 0U;
	int32_t x5115 = 9;
	int8_t x5116 = -1;
	int32_t t61 = -1252;

    t61 = ((x5113<<x5114)*(x5115^x5116));

    if (t61 != -80) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x5169 = INT8_MAX;
	int8_t x5171 = -1;
	uint16_t x5172 = UINT16_MAX;

    t62 = ((x5169<<x5170)*(x5171^x5172));

    if (t62 != -8323072) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x5265 = UINT16_MAX;
	uint32_t x5266 = 7U;
	int64_t x5268 = -16LL;
	int64_t t63 = 493960105LL;

    t63 = ((x5265<<x5266)*(x5267^x5268));

    if (t63 != -2021623680LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x5393 = 0;
	uint8_t x5394 = 27U;
	uint16_t x5395 = 13U;
	uint32_t x5396 = UINT32_MAX;
	volatile uint32_t t64 = 81700403U;

    t64 = ((x5393<<x5394)*(x5395^x5396));

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x5445 = 776U;
	static uint8_t x5446 = 0U;
	int16_t x5447 = 34;
	int8_t x5448 = 0;
	int32_t t65 = 126;

    t65 = ((x5445<<x5446)*(x5447^x5448));

    if (t65 != 26384) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x5673 = 43639U;
	static uint8_t x5674 = 27U;
	static uint8_t x5676 = 2U;
	static volatile uint32_t t66 = 52339412U;

    t66 = ((x5673<<x5674)*(x5675^x5676));

    if (t66 != 2281701376U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x5981 = 16U;
	uint8_t x5982 = 1U;
	int16_t x5983 = INT16_MIN;
	static int64_t x5984 = 32521526190647265LL;
	volatile int64_t t67 = -1LL;

    t67 = ((x5981<<x5982)*(x5983^x5984));

    if (t67 != -1040688838101107680LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x6001 = 3172347LLU;
	uint64_t x6003 = UINT64_MAX;
	static int8_t x6004 = 0;
	uint64_t t68 = 28565957025791912LLU;

    t68 = ((x6001<<x6002)*(x6003^x6004));

    if (t68 != 18446744073703206922LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x6057 = 0;
	volatile int32_t x6058 = 1;
	int8_t x6059 = INT8_MAX;
	static int32_t t69 = -4;

    t69 = ((x6057<<x6058)*(x6059^x6060));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x6277 = 205233U;
	int8_t x6279 = -1;
	uint64_t x6280 = UINT64_MAX;
	uint64_t t70 = 162379LLU;

    t70 = ((x6277<<x6278)*(x6279^x6280));

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x6337 = UINT64_MAX;
	uint8_t x6338 = 7U;
	int32_t x6339 = -87371;
	int32_t x6340 = INT32_MAX;
	volatile uint64_t t71 = 187LLU;

    t71 = ((x6337<<x6338)*(x6339^x6340));

    if (t71 != 274866723584LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x6422 = 15;
	int8_t x6423 = INT8_MAX;
	uint32_t x6424 = 507U;
	volatile uint64_t t72 = 192962132859LLU;

    t72 = ((x6421<<x6422)*(x6423^x6424));

    if (t72 != 1754529792LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x6445 = 667656307440976LLU;
	uint32_t x6447 = 1069702351U;
	int32_t x6448 = 1105226;
	uint64_t t73 = 327214002LLU;

    t73 = ((x6445<<x6446)*(x6447^x6448));

    if (t73 != 8340745686969829376LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint8_t x6513 = 9U;
	uint8_t x6514 = 6U;
	volatile uint64_t x6515 = UINT64_MAX;
	volatile int64_t x6516 = INT64_MIN;
	uint64_t t74 = 2763158250LLU;

    t74 = ((x6513<<x6514)*(x6515^x6516));

    if (t74 != 18446744073709551040LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x6553 = 26;
	static uint8_t x6554 = 2U;
	int8_t x6555 = -5;
	volatile int32_t t75 = 62780311;

    t75 = ((x6553<<x6554)*(x6555^x6556));

    if (t75 != -84656) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint32_t x6625 = UINT32_MAX;
	int8_t x6627 = INT8_MIN;
	uint32_t t76 = 1379692838U;

    t76 = ((x6625<<x6626)*(x6627^x6628));

    if (t76 != 46448576U) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x6682 = 11;
	volatile int32_t x6683 = 154;
	uint64_t x6684 = UINT64_MAX;
	uint64_t t77 = 78709104LLU;

    t77 = ((x6681<<x6682)*(x6683^x6684));

    if (t77 != 18446744073706694656LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x6721 = 1037U;
	uint32_t x6722 = 7U;
	int16_t x6723 = INT16_MIN;
	int64_t x6724 = -1LL;
	static volatile int64_t t78 = 93506265LL;

    t78 = ((x6721<<x6722)*(x6723^x6724));

    if (t78 != 4349360512LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint64_t x6857 = 4885017LLU;
	int32_t x6858 = 1;
	volatile uint16_t x6859 = UINT16_MAX;
	uint64_t t79 = 1202191LLU;

    t79 = ((x6857<<x6858)*(x6859^x6860));

    if (t79 != 5354095872408LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x6937 = 2U;
	static int8_t x6938 = 15;
	int32_t x6940 = INT32_MIN;

    t80 = ((x6937<<x6938)*(x6939^x6940));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x6949 = 1;
	uint16_t x6950 = 9U;

    t81 = ((x6949<<x6950)*(x6951^x6952));

    if (t81 != -48640) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint16_t x7073 = 27876U;
	static volatile int8_t x7074 = 0;
	uint64_t x7075 = UINT64_MAX;
	uint64_t t82 = 30880750717257064LLU;

    t82 = ((x7073<<x7074)*(x7075^x7076));

    if (t82 != 3540252LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x7085 = UINT8_MAX;
	uint8_t x7086 = 1U;
	volatile int8_t x7087 = -1;
	int32_t x7088 = 3;
	volatile int32_t t83 = 3;

    t83 = ((x7085<<x7086)*(x7087^x7088));

    if (t83 != -2040) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x7365 = UINT32_MAX;
	int32_t x7367 = -1;
	volatile uint32_t t84 = 43532U;

    t84 = ((x7365<<x7366)*(x7367^x7368));

    if (t84 != 3286792512U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x7389 = 23U;
	uint16_t x7391 = 61U;
	static int16_t x7392 = -1;
	volatile int32_t t85 = -893529;

    t85 = ((x7389<<x7390)*(x7391^x7392));

    if (t85 != -1426) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x7465 = INT8_MAX;
	static int8_t x7466 = 0;
	volatile uint16_t x7467 = 405U;
	int32_t x7468 = 982;
	static int32_t t86 = 3778572;

    t86 = ((x7465<<x7466)*(x7467^x7468));

    if (t86 != 73533) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x7505 = UINT64_MAX;
	int32_t x7506 = 5;
	int64_t x7507 = -3157995615LL;
	volatile uint64_t t87 = 5122376442LLU;

    t87 = ((x7505<<x7506)*(x7507^x7508));

    if (t87 != 18446743979063942976LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint32_t x7521 = 51U;
	int16_t x7523 = -1;
	uint16_t x7524 = UINT16_MAX;
	volatile uint32_t t88 = 110U;

    t88 = ((x7521<<x7522)*(x7523^x7524));

    if (t88 != 3867148288U) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x7545 = INT8_MAX;
	uint8_t x7546 = 3U;
	volatile int32_t t89 = -1197;

    t89 = ((x7545<<x7546)*(x7547^x7548));

    if (t89 != -33275016) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x7569 = 1532168756984095LLU;
	int32_t x7571 = -1;
	int64_t x7572 = -1LL;

    t90 = ((x7569<<x7570)*(x7571^x7572));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x7637 = 9;
	static uint8_t x7638 = 1U;
	int32_t x7639 = INT32_MIN;
	uint32_t x7640 = 305005U;
	volatile uint32_t t91 = 141477U;

    t91 = ((x7637<<x7638)*(x7639^x7640));

    if (t91 != 5490090U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x7649 = UINT64_MAX;
	static uint8_t x7650 = 1U;
	int16_t x7651 = 8169;
	int64_t x7652 = INT64_MIN;
	uint64_t t92 = 874752446890622LLU;

    t92 = ((x7649<<x7650)*(x7651^x7652));

    if (t92 != 18446744073709535278LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x7669 = 0;
	int16_t x7670 = 1;
	volatile int8_t x7671 = 26;
	uint8_t x7672 = 50U;
	volatile int32_t t93 = 423;

    t93 = ((x7669<<x7670)*(x7671^x7672));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x7677 = 2U;
	static uint8_t x7678 = 22U;
	static volatile int64_t x7680 = INT64_MIN;
	int64_t t94 = 47202333689LL;

    t94 = ((x7677<<x7678)*(x7679^x7680));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x7681 = 3;
	int8_t x7682 = 0;
	volatile uint32_t x7683 = UINT32_MAX;
	volatile int64_t x7684 = -1LL;
	volatile int64_t t95 = -123466517LL;

    t95 = ((x7681<<x7682)*(x7683^x7684));

    if (t95 != -12884901888LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x7726 = 15U;
	uint32_t x7728 = 6U;
	static uint32_t t96 = 151858558U;

    t96 = ((x7725<<x7726)*(x7727^x7728));

    if (t96 != 3787259904U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x7734 = 3U;
	int16_t x7735 = INT16_MIN;
	int16_t x7736 = INT16_MIN;
	volatile uint32_t t97 = 73832133U;

    t97 = ((x7733<<x7734)*(x7735^x7736));

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x7837 = UINT64_MAX;
	volatile uint8_t x7838 = 46U;
	int16_t x7839 = INT16_MIN;
	uint64_t t98 = 88338504LLU;

    t98 = ((x7837<<x7838)*(x7839^x7840));

    if (t98 != 16140971433240035328LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x7892 = INT32_MAX;
	volatile int64_t t99 = -14303160334LL;

    t99 = ((x7889<<x7890)*(x7891^x7892));

    if (t99 != -281468936284170LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x7990 = 3U;
	uint16_t x7991 = UINT16_MAX;
	static uint8_t x7992 = 1U;
	static int32_t t100 = -6766;

    t100 = ((x7989<<x7990)*(x7991^x7992));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x8137 = 1;
	static int8_t x8138 = 0;
	static int16_t x8139 = INT16_MIN;
	static volatile int64_t x8140 = INT64_MAX;
	volatile int64_t t101 = 95579LL;

    t101 = ((x8137<<x8138)*(x8139^x8140));

    if (t101 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x8357 = UINT32_MAX;
	int8_t x8359 = INT8_MIN;
	int16_t x8360 = INT16_MAX;
	uint32_t t102 = 42569U;

    t102 = ((x8357<<x8358)*(x8359^x8360));

    if (t102 != 67108864U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x8369 = UINT8_MAX;
	uint8_t x8370 = 7U;
	static volatile int16_t x8371 = 7662;
	volatile int8_t x8372 = INT8_MIN;

    t103 = ((x8369<<x8370)*(x8371^x8372));

    if (t103 != -247084800) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x8509 = UINT64_MAX;
	uint16_t x8510 = 23U;
	int16_t x8511 = -1;
	static volatile uint64_t t104 = 230079651951222042LLU;

    t104 = ((x8509<<x8510)*(x8511^x8512));

    if (t104 != 1073741824LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x8698 = 0;
	int16_t x8699 = INT16_MAX;
	uint32_t x8700 = 58U;
	volatile uint32_t t105 = 119561U;

    t105 = ((x8697<<x8698)*(x8699^x8700));

    if (t105 != 1071775803U) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x8713 = 1210232;
	uint32_t x8714 = 7U;
	int64_t x8715 = -20093186697745608LL;
	uint64_t x8716 = UINT64_MAX;
	static volatile uint64_t t106 = 882487146247867381LLU;

    t106 = ((x8713<<x8714)*(x8715^x8716));

    if (t106 != 18081741634673779712LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x8797 = INT8_MAX;
	int8_t x8798 = 9;
	int8_t x8799 = -1;
	uint64_t x8800 = UINT64_MAX;
	volatile uint64_t t107 = 22076677785204731LLU;

    t107 = ((x8797<<x8798)*(x8799^x8800));

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x8869 = 3;
	int16_t x8870 = 4;
	int8_t x8872 = -1;
	uint64_t t108 = 189075889402LLU;

    t108 = ((x8869<<x8870)*(x8871^x8872));

    if (t108 != 4354629021923637776LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x8941 = UINT8_MAX;
	static uint16_t x8942 = 0U;
	uint32_t x8943 = 6396U;
	volatile int16_t x8944 = -188;
	uint32_t t109 = 103408250U;

    t109 = ((x8941<<x8942)*(x8943^x8944));

    if (t109 != 4293382216U) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x8985 = 8898;
	uint32_t x8988 = UINT32_MAX;
	uint32_t t110 = 352U;

    t110 = ((x8985<<x8986)*(x8987^x8988));

    if (t110 != 4294949500U) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint16_t x9117 = 1U;
	int16_t x9118 = 0;
	int8_t x9119 = -49;
	int32_t t111 = 25414;

    t111 = ((x9117<<x9118)*(x9119^x9120));

    if (t111 != 2147483599) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x9161 = 12U;
	uint8_t x9162 = 13U;
	volatile uint16_t x9163 = 7087U;
	static int16_t x9164 = INT16_MIN;

    t112 = ((x9161<<x9162)*(x9163^x9164));

    if (t112 != 1770422272U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x9337 = 1U;
	static volatile uint16_t x9338 = 6U;
	static uint8_t x9340 = UINT8_MAX;
	int32_t t113 = -727;

    t113 = ((x9337<<x9338)*(x9339^x9340));

    if (t113 != -8256) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint8_t x9377 = 13U;
	uint8_t x9378 = 16U;
	int32_t x9379 = INT32_MAX;
	static int64_t x9380 = -11890578LL;
	static int64_t t114 = 1775699372584989216LL;

    t114 = ((x9377<<x9378)*(x9379^x9380));

    if (t114 != -1819456957513728LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x9385 = 11LLU;
	static int16_t x9386 = 5;
	uint16_t x9387 = 44U;
	static uint64_t x9388 = UINT64_MAX;
	uint64_t t115 = 1003647367556007LLU;

    t115 = ((x9385<<x9386)*(x9387^x9388));

    if (t115 != 18446744073709535776LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x9513 = UINT64_MAX;
	int8_t x9514 = 8;

    t116 = ((x9513<<x9514)*(x9515^x9516));

    if (t116 != 18446744073701163264LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x9621 = 225426LLU;
	uint16_t x9622 = 12U;
	uint8_t x9623 = 8U;
	uint64_t t117 = 2180163LLU;

    t117 = ((x9621<<x9622)*(x9623^x9624));

    if (t117 != 7386759168LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x9635 = -26706LL;
	int8_t x9636 = 0;
	int64_t t118 = -1758707788247230LL;

    t118 = ((x9633<<x9634)*(x9635^x9636));

    if (t118 != -10732492764672LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x9757 = 1;
	uint8_t x9758 = 0U;
	volatile int64_t x9760 = 4287LL;
	volatile int64_t t119 = -716244159942781LL;

    t119 = ((x9757<<x9758)*(x9759^x9760));

    if (t119 != -28481LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x9761 = 4080594958557LLU;
	int8_t x9762 = 10;
	int64_t x9763 = INT64_MIN;

    t120 = ((x9761<<x9762)*(x9763^x9764));

    if (t120 != 3210580550175686656LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x9765 = 496402246885LLU;
	static uint8_t x9766 = 21U;
	uint16_t x9767 = UINT16_MAX;
	static uint8_t x9768 = 12U;
	static uint64_t t121 = 48258820LLU;

    t121 = ((x9765<<x9766)*(x9767^x9768));

    if (t121 != 13859069976387780608LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x9773 = INT16_MAX;
	static uint8_t x9774 = 3U;
	volatile int32_t x9775 = INT32_MAX;
	volatile uint32_t x9776 = 6453U;

    t122 = ((x9773<<x9774)*(x9775^x9776));

    if (t122 != 2603141552U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x9794 = 10U;
	static int32_t t123 = 696975872;

    t123 = ((x9793<<x9794)*(x9795^x9796));

    if (t123 != 248832) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x9825 = 628146LL;
	volatile int32_t x9828 = INT32_MIN;
	volatile int64_t t124 = -13342267090LL;

    t124 = ((x9825<<x9826)*(x9827^x9828));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x9833 = 3U;
	uint16_t x9834 = 3U;
	int32_t x9835 = INT32_MIN;
	volatile uint64_t t125 = 2249715831098202061LLU;

    t125 = ((x9833<<x9834)*(x9835^x9836));

    if (t125 != 18446744022169960888LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x9853 = 29506LLU;
	volatile int32_t x9855 = INT32_MIN;
	volatile uint8_t x9856 = UINT8_MAX;
	uint64_t t126 = 1708LLU;

    t126 = ((x9853<<x9854)*(x9855^x9856));

    if (t126 != 18446680710064557758LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x9861 = 1;
	uint16_t x9862 = 2U;
	volatile int64_t t127 = 0LL;

    t127 = ((x9861<<x9862)*(x9863^x9864));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x9909 = INT8_MAX;
	uint16_t x9911 = 23648U;
	uint8_t x9912 = 12U;
	static volatile int32_t t128 = -77;

    t128 = ((x9909<<x9910)*(x9911^x9912));

    if (t128 != 3004820) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x9918 = 1U;
	int16_t x9919 = -1;
	int16_t x9920 = -1;

    t129 = ((x9917<<x9918)*(x9919^x9920));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint32_t x10089 = UINT32_MAX;
	int8_t x10090 = 1;
	static int16_t x10091 = -1;
	volatile uint32_t t130 = 1977609891U;

    t130 = ((x10089<<x10090)*(x10091^x10092));

    if (t130 != 4294901762U) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x10173 = 2318LL;
	static int32_t x10174 = 26;
	volatile uint32_t x10175 = 1U;
	uint8_t x10176 = UINT8_MAX;
	int64_t t131 = -48135LL;

    t131 = ((x10173<<x10174)*(x10175^x10176));

    if (t131 != 39511820075008LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x10197 = 2305;
	volatile int8_t x10199 = -5;
	uint64_t x10200 = UINT64_MAX;
	volatile uint64_t t132 = 688422812LLU;

    t132 = ((x10197<<x10198)*(x10199^x10200));

    if (t132 != 18440LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x10230 = 25U;
	static volatile uint8_t x10231 = 1U;
	volatile uint8_t x10232 = 1U;
	static int32_t t133 = -1574831;

    t133 = ((x10229<<x10230)*(x10231^x10232));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x10277 = 0;
	uint32_t x10278 = 0U;
	int64_t x10279 = -1LL;
	int16_t x10280 = -1;

    t134 = ((x10277<<x10278)*(x10279^x10280));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint64_t x10425 = 264085198LLU;
	int8_t x10428 = -27;
	uint64_t t135 = 2LLU;

    t135 = ((x10425<<x10426)*(x10427^x10428));

    if (t135 != 18446744066579251270LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x10477 = INT8_MAX;
	static uint8_t x10480 = 0U;

    t136 = ((x10477<<x10478)*(x10479^x10480));

    if (t136 != -65024) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x10517 = 5914;
	int8_t x10518 = 0;
	volatile int16_t x10519 = INT16_MIN;
	static volatile uint64_t t137 = 10571481LLU;

    t137 = ((x10517<<x10518)*(x10519^x10520));

    if (t137 != 193784038LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint32_t x10564 = UINT32_MAX;
	static volatile uint32_t t138 = 465034170U;

    t138 = ((x10561<<x10562)*(x10563^x10564));

    if (t138 != 4283472192U) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x10569 = 0;
	volatile uint16_t x10570 = 7U;

    t139 = ((x10569<<x10570)*(x10571^x10572));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x10573 = 12U;
	static int32_t x10574 = 0;
	int32_t x10576 = -1;
	uint64_t t140 = 120028972245753LLU;

    t140 = ((x10573<<x10574)*(x10575^x10576));

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint8_t x10769 = UINT8_MAX;
	static int8_t x10770 = 2;
	uint64_t x10771 = UINT64_MAX;

    t141 = ((x10769<<x10770)*(x10771^x10772));

    if (t141 != 18446744073709290496LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x10781 = UINT16_MAX;
	int64_t x10782 = 6LL;
	int64_t x10784 = 45049LL;
	int64_t t142 = 16LL;

    t142 = ((x10781<<x10782)*(x10783^x10784));

    if (t142 != -188950512000LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint8_t x10785 = UINT8_MAX;
	volatile uint64_t x10786 = 0LLU;
	int64_t x10787 = -1LL;
	volatile int32_t x10788 = INT32_MAX;

    t143 = ((x10785<<x10786)*(x10787^x10788));

    if (t143 != -547608330240LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x10790 = 1U;
	uint64_t x10792 = UINT64_MAX;
	volatile uint64_t t144 = 63051003LLU;

    t144 = ((x10789<<x10790)*(x10791^x10792));

    if (t144 != 18446744073709551026LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x10885 = 1041U;
	uint16_t x10886 = 5U;
	int32_t x10888 = INT32_MIN;

    t145 = ((x10885<<x10886)*(x10887^x10888));

    if (t145 != 99936U) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x10998 = 2;
	int64_t x10999 = -1LL;
	uint16_t x11000 = 62U;
	static int64_t t146 = 14017LL;

    t146 = ((x10997<<x10998)*(x10999^x11000));

    if (t146 != -1512LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x11025 = INT16_MAX;
	uint8_t x11026 = 2U;
	uint64_t x11027 = UINT64_MAX;
	uint64_t x11028 = 120193539547LLU;
	volatile uint64_t t147 = 1014LLU;

    t147 = ((x11025<<x11026)*(x11027^x11028));

    if (t147 != 18430990546868074352LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint64_t x11113 = 279LLU;
	static uint8_t x11114 = 26U;
	volatile uint32_t x11115 = UINT32_MAX;
	uint64_t t148 = 46060LLU;

    t148 = ((x11113<<x11114)*(x11115^x11116));

    if (t148 != 613508764925952LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint64_t x11129 = 35LLU;
	static uint8_t x11130 = 0U;
	uint16_t x11131 = 296U;
	int16_t x11132 = INT16_MIN;
	volatile uint64_t t149 = 3224695LLU;

    t149 = ((x11129<<x11130)*(x11131^x11132));

    if (t149 != 18446744073708415096LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x11254 = 6;
	int16_t x11255 = -1;
	uint64_t x11256 = 32843941997505LLU;

    t150 = ((x11253<<x11254)*(x11255^x11256));

    if (t150 != 6463243278444776832LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x11257 = INT8_MAX;
	uint8_t x11258 = 4U;
	int32_t x11259 = -1;
	uint16_t x11260 = UINT16_MAX;

    t151 = ((x11257<<x11258)*(x11259^x11260));

    if (t151 != -133169152) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x11369 = 10946973080403669LL;
	uint8_t x11370 = 1U;
	uint64_t x11371 = UINT64_MAX;
	volatile uint64_t t152 = 91359935549255857LLU;

    t152 = ((x11369<<x11370)*(x11371^x11372));

    if (t152 != 3447024490785781670LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x11387 = -1LL;
	int16_t x11388 = -1;
	int64_t t153 = -1554LL;

    t153 = ((x11385<<x11386)*(x11387^x11388));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x11537 = UINT64_MAX;
	uint32_t x11538 = 33U;
	volatile uint64_t t154 = 17016241050507LLU;

    t154 = ((x11537<<x11538)*(x11539^x11540));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x11565 = 13065206778LLU;
	uint16_t x11566 = 24U;
	volatile int8_t x11567 = 3;
	static int32_t x11568 = INT32_MAX;
	uint64_t t155 = 12219596970980223LLU;

    t155 = ((x11565<<x11566)*(x11567^x11568));

    if (t155 != 17353780106799087616LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x11609 = 3991037LLU;
	int16_t x11612 = -1;

    t156 = ((x11609<<x11610)*(x11611^x11612));

    if (t156 != 2194095792148710912LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x11661 = 412106838236LLU;
	uint16_t x11663 = 61U;
	int32_t x11664 = -1;
	static uint64_t t157 = 1234LLU;

    t157 = ((x11661<<x11662)*(x11663^x11664));

    if (t157 != 13981595115286691840LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x11689 = 5U;
	int32_t x11690 = 2;
	int8_t x11691 = INT8_MIN;
	int8_t x11692 = -1;

    t158 = ((x11689<<x11690)*(x11691^x11692));

    if (t158 != 2540) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x11761 = UINT8_MAX;
	uint8_t x11762 = 8U;
	volatile int32_t x11763 = -24;
	volatile uint8_t x11764 = 90U;
	int32_t t159 = 457565;

    t159 = ((x11761<<x11762)*(x11763^x11764));

    if (t159 != -5091840) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x11817 = 8U;
	uint8_t x11818 = 1U;
	static uint64_t x11819 = 80223366LLU;
	volatile uint8_t x11820 = UINT8_MAX;
	uint64_t t160 = 7471307298034LLU;

    t160 = ((x11817<<x11818)*(x11819^x11820));

    if (t160 != 1283573648LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x11837 = 25U;
	static uint8_t x11838 = 24U;
	volatile int32_t x11839 = 56;
	static int64_t x11840 = 11674690154LL;
	volatile int64_t t161 = 15903634086374108LL;

    t161 = ((x11837<<x11838)*(x11839^x11840));

    if (t161 != 4896719951101952000LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint8_t x11925 = 0U;
	uint8_t x11927 = 2U;
	int32_t t162 = 13;

    t162 = ((x11925<<x11926)*(x11927^x11928));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x11973 = 1;
	uint16_t x11974 = 4U;
	static int16_t x11976 = INT16_MIN;
	int32_t t163 = -10;

    t163 = ((x11973<<x11974)*(x11975^x11976));

    if (t163 != 522240) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x11997 = 1;
	uint8_t x11998 = 0U;
	int16_t x11999 = 47;
	static volatile int64_t x12000 = -1LL;
	volatile int64_t t164 = 1LL;

    t164 = ((x11997<<x11998)*(x11999^x12000));

    if (t164 != -48LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x12106 = 21U;
	volatile int16_t x12107 = 0;
	uint32_t x12108 = 19195U;
	uint32_t t165 = 228099U;

    t165 = ((x12105<<x12106)*(x12107^x12108));

    if (t165 != 3705667584U) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x12185 = 136U;
	uint8_t x12186 = 8U;
	static volatile uint8_t x12187 = 61U;
	static uint8_t x12188 = 112U;
	int32_t t166 = 14061;

    t166 = ((x12185<<x12186)*(x12187^x12188));

    if (t166 != 2680832) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x12245 = 14U;
	uint16_t x12246 = 1U;
	static volatile int16_t x12248 = 12;
	int32_t t167 = -27505334;

    t167 = ((x12245<<x12246)*(x12247^x12248));

    if (t167 != -16469516) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x12305 = 59875415;
	uint64_t x12307 = 11956LLU;
	int64_t x12308 = 5LL;
	uint64_t t168 = 219830535LLU;

    t168 = ((x12305<<x12306)*(x12307^x12308));

    if (t168 != 5725526683960LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x12347 = INT8_MIN;
	int64_t x12348 = 5909362063LL;
	volatile int64_t t169 = 157LL;

    t169 = ((x12345<<x12346)*(x12347^x12348));

    if (t169 != -94549794576LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x12425 = 0;
	int32_t x12428 = 184;
	volatile int32_t t170 = 23353;

    t170 = ((x12425<<x12426)*(x12427^x12428));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x12457 = 239U;
	int8_t x12458 = 19;
	int64_t x12459 = INT64_MAX;
	uint64_t x12460 = UINT64_MAX;
	uint64_t t171 = 51894944835210810LLU;

    t171 = ((x12457<<x12458)*(x12459^x12460));

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x12469 = INT8_MAX;
	static uint8_t x12470 = 22U;
	int64_t x12471 = -1LL;
	uint32_t x12472 = 3412U;
	volatile int64_t t172 = -371947064513LL;

    t172 = ((x12469<<x12470)*(x12471^x12472));

    if (t172 != -1818025263104LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x12585 = 1;
	uint8_t x12586 = 2U;
	uint8_t x12587 = UINT8_MAX;
	uint64_t x12588 = 3832505233923811LLU;
	uint64_t t173 = 17646957877LLU;

    t173 = ((x12585<<x12586)*(x12587^x12588));

    if (t173 != 15330020935694448LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x12597 = UINT32_MAX;
	uint32_t x12598 = 0U;
	int8_t x12599 = INT8_MIN;
	int16_t x12600 = -1;
	volatile uint32_t t174 = 87892U;

    t174 = ((x12597<<x12598)*(x12599^x12600));

    if (t174 != 4294967169U) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x12825 = 57U;
	uint8_t x12826 = 1U;
	int64_t x12827 = INT64_MAX;
	volatile uint64_t x12828 = 3LLU;
	volatile uint64_t t175 = 44856184LLU;

    t175 = ((x12825<<x12826)*(x12827^x12828));

    if (t175 != 18446744073709551160LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x12838 = 0;
	static int32_t x12839 = 149386589;
	uint64_t x12840 = 613713948LLU;

    t176 = ((x12837<<x12838)*(x12839^x12840));

    if (t176 != 18644974425LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x12853 = INT16_MAX;
	static uint16_t x12854 = 2U;
	uint16_t x12855 = 0U;
	static uint8_t x12856 = 66U;
	int32_t t177 = -7;

    t177 = ((x12853<<x12854)*(x12855^x12856));

    if (t177 != 8650488) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x12941 = 3468123U;
	static volatile int8_t x12942 = 2;
	volatile int8_t x12943 = -1;
	int32_t x12944 = -1;
	volatile uint32_t t178 = 299U;

    t178 = ((x12941<<x12942)*(x12943^x12944));

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x12993 = 538976U;
	uint16_t x12994 = 3U;
	volatile uint8_t x12996 = 7U;
	uint32_t t179 = 114104U;

    t179 = ((x12993<<x12994)*(x12995^x12996));

    if (t179 != 3773238528U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x13117 = 1U;
	uint16_t x13118 = 0U;
	static uint8_t x13119 = UINT8_MAX;
	int64_t x13120 = INT64_MIN;
	volatile int64_t t180 = 831544214314887913LL;

    t180 = ((x13117<<x13118)*(x13119^x13120));

    if (t180 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint64_t x13201 = 40163LLU;
	int16_t x13203 = -64;
	volatile uint64_t t181 = 181464278LLU;

    t181 = ((x13201<<x13202)*(x13203^x13204));

    if (t181 != 18446744073689630768LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x13291 = INT32_MIN;
	volatile int32_t x13292 = -108322;
	volatile uint64_t t182 = 1441LLU;

    t182 = ((x13289<<x13290)*(x13291^x13292));

    if (t182 != 72053959354744832LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x13537 = 7513U;
	uint64_t x13539 = UINT64_MAX;
	uint8_t x13540 = UINT8_MAX;
	static volatile uint64_t t183 = 1936418LLU;

    t183 = ((x13537<<x13538)*(x13539^x13540));

    if (t183 != 18446744073707628288LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x13569 = 25225161648817491LLU;
	uint32_t x13570 = 1U;
	int8_t x13571 = -1;
	static int32_t x13572 = 1;
	volatile uint64_t t184 = 7108LLU;

    t184 = ((x13569<<x13570)*(x13571^x13572));

    if (t184 != 18345843427114281652LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x13598 = 2;
	static volatile int8_t x13599 = INT8_MIN;
	int16_t x13600 = -1;
	volatile int32_t t185 = 28;

    t185 = ((x13597<<x13598)*(x13599^x13600));

    if (t185 != 2032) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x13709 = 27766LLU;
	uint8_t x13710 = 2U;
	int64_t x13711 = INT64_MIN;
	int64_t x13712 = INT64_MIN;
	uint64_t t186 = 35791250424876LLU;

    t186 = ((x13709<<x13710)*(x13711^x13712));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x13757 = 3U;
	int16_t x13758 = 9;
	static int64_t x13759 = -1009LL;
	int16_t x13760 = 2;
	volatile int64_t t187 = -13398LL;

    t187 = ((x13757<<x13758)*(x13759^x13760));

    if (t187 != -1552896LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x13829 = INT16_MAX;
	int8_t x13831 = -1;
	uint32_t x13832 = 63415U;
	static volatile uint32_t t188 = 176U;

    t188 = ((x13829<<x13830)*(x13831^x13832));

    if (t188 != 139063152U) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint64_t x13961 = UINT64_MAX;
	uint16_t x13962 = 3U;
	uint16_t x13964 = UINT16_MAX;

    t189 = ((x13961<<x13962)*(x13963^x13964));

    if (t189 != 18446744073709037152LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x14082 = 0;
	int64_t x14083 = INT64_MIN;
	volatile uint64_t t190 = 60LLU;

    t190 = ((x14081<<x14082)*(x14083^x14084));

    if (t190 != 12882283932572784433LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x14085 = 2083918LLU;
	volatile uint16_t x14086 = 3U;
	uint32_t x14088 = 399U;
	volatile uint64_t t191 = 506465LLU;

    t191 = ((x14085<<x14086)*(x14087^x14088));

    if (t191 != 71602870591828224LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x14161 = 30454003650358221LLU;
	uint8_t x14162 = 2U;
	static uint32_t x14163 = 34U;
	int16_t x14164 = INT16_MAX;

    t192 = ((x14161<<x14162)*(x14163^x14164));

    if (t192 != 2906886027439442916LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x14269 = 6U;
	uint8_t x14270 = 5U;
	int32_t x14272 = -719032;
	volatile int32_t t193 = -40;

    t193 = ((x14269<<x14270)*(x14271^x14272));

    if (t193 != -138052992) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint64_t x14421 = UINT64_MAX;
	uint8_t x14422 = 12U;
	int8_t x14423 = -46;
	volatile uint64_t t194 = 15LLU;

    t194 = ((x14421<<x14422)*(x14423^x14424));

    if (t194 != 339968LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x14433 = 3381;
	uint8_t x14434 = 14U;
	volatile uint8_t x14436 = 43U;
	uint64_t t195 = 940885447778LLU;

    t195 = ((x14433<<x14434)*(x14435^x14436));

    if (t195 != 2844983159593041920LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x14589 = INT8_MAX;
	volatile uint64_t x14590 = 2LLU;
	volatile int32_t x14591 = INT32_MIN;
	uint64_t x14592 = UINT64_MAX;
	static volatile uint64_t t196 = 7638687404LLU;

    t196 = ((x14589<<x14590)*(x14591^x14592));

    if (t196 != 1090921692676LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x14645 = 0;
	volatile uint8_t x14646 = 19U;
	uint64_t x14648 = 85031385438698728LLU;
	volatile uint64_t t197 = 5268669199678LLU;

    t197 = ((x14645<<x14646)*(x14647^x14648));

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x14699 = INT16_MIN;
	int64_t x14700 = INT64_MIN;
	volatile uint64_t t198 = 2703981353211001LLU;

    t198 = ((x14697<<x14698)*(x14699^x14700));

    if (t198 != 18446744073607446528LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x14730 = 9U;
	uint64_t x14732 = 22375LLU;
	volatile uint64_t t199 = 7549813LLU;

    t199 = ((x14729<<x14730)*(x14731^x14732));

    if (t199 != 1313354752LLU) { NG(); } else { ; }
	
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

